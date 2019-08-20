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
// IMC XML MD5: db94a37e22deb3cfc97166d80b959a19                            *
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
    msg.setTimeStamp(0.388150966416);
    msg.setSource(33581U);
    msg.setSourceEntity(66U);
    msg.setDestination(26236U);
    msg.setDestinationEntity(140U);
    msg.state = 153U;
    msg.flags = 83U;
    msg.description.assign("EQQGFOFRVLKNLWFASPGRMXYQILSAGLAEKASEGBCYMVOOBWQDJPMUSYOLTMCLICXYOXDSSRNNSEBUKRQNYTQADVZFJAYFVC");

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
    msg.setTimeStamp(0.746271799714);
    msg.setSource(59820U);
    msg.setSourceEntity(154U);
    msg.setDestination(10555U);
    msg.setDestinationEntity(52U);
    msg.state = 42U;
    msg.flags = 185U;
    msg.description.assign("WANUSURBGAOHSVLRTCTRUXIHMKGWNGOHA");

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
    msg.setTimeStamp(0.223584542498);
    msg.setSource(56126U);
    msg.setSourceEntity(235U);
    msg.setDestination(14553U);
    msg.setDestinationEntity(49U);
    msg.state = 244U;
    msg.flags = 186U;
    msg.description.assign("UQWAKRROXJKLFOQYNRKVDLVPSGEQIRVIULKNEDCEFJOKCWCKAVINBISHSBUZNXTWDGFJPVXINIAWGPLLILTPMQJBXHUUYWRZXPHFPOJWWDMUNNMTTCWHHYCS");

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
    msg.setTimeStamp(0.661146940126);
    msg.setSource(31672U);
    msg.setSourceEntity(162U);
    msg.setDestination(44444U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.671182665395);
    msg.setSource(859U);
    msg.setSourceEntity(74U);
    msg.setDestination(63295U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.144974404819);
    msg.setSource(4197U);
    msg.setSourceEntity(115U);
    msg.setDestination(29U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.38194820398);
    msg.setSource(26209U);
    msg.setSourceEntity(253U);
    msg.setDestination(48811U);
    msg.setDestinationEntity(77U);
    msg.id = 101U;
    msg.label.assign("CDWUACSLRYYRGGAJWZOFDEVIGNQVNFALHPSPGRLJEDSLMKQXZNENBFEPMGGYIAPNNDVNBXEVZRUFPFLYWXXKHXIZRZSEBGEDVOWJRULXYTERUKHNFVMJSHRDCRWBSUOLSQOITTZHPQVCMJBBTEMVJCZSMIAWFJINVDCCBKKDKTIXSAZJQYDMHHWTIAPMYMZWYVODXMWTGAEFASLUJYCFFOGB");
    msg.component.assign("MQQJMMWKRLRSEMPZYQZHLDYGQKBQHWMSQXTSSYCJXOGWVERNWMYRLVT");
    msg.act_time = 48645U;
    msg.deact_time = 5677U;

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
    msg.setTimeStamp(0.482108306722);
    msg.setSource(39702U);
    msg.setSourceEntity(188U);
    msg.setDestination(5861U);
    msg.setDestinationEntity(130U);
    msg.id = 20U;
    msg.label.assign("FSKSXTPGFVMCJDYCUBIFOIOLWZZZNDIVHPXUWFMLLFBVWGHXICRUM");
    msg.component.assign("FVVDOFGGEXROJILCJWTNMXBXUOTIDKYOAGZUCAXRORMNNNRUYQQXBPCVXMPBPEWTJOFCRDGKIHJEKDLENAFYLQFVVUMLAQLRMSPSDDTENYRKMHRFCFTUJAZITWYUYZAKWIBEWILKVSHKZYTYPMAJTHHGOSVBPEJQZSOHKUZXZCPQKNTMVW");
    msg.act_time = 37851U;
    msg.deact_time = 58265U;

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
    msg.setTimeStamp(0.806394371632);
    msg.setSource(55894U);
    msg.setSourceEntity(220U);
    msg.setDestination(34268U);
    msg.setDestinationEntity(42U);
    msg.id = 226U;
    msg.label.assign("LDZTWMGLEYRASHZQFTVVJPRDYSONESWPXSSWCFDQWZRAFWMJQXQUUQBECNWHEYAHRXDHFGBNIYCBGORUQCZCGKQMCTGKVNDFIEUXXIICXULSBGNZVUAJSJPDOLHJBTYYI");
    msg.component.assign("DWAMLPKINJUFUFFJSWRWFPQSZTMBUHSUOQJNUPBWIJLAMNYXGPYOKCQWGICMTZGANTSEQWHKUEERUJIZBRBBXLGLJJQJCRXZIOLPTAUMFTMY");
    msg.act_time = 28602U;
    msg.deact_time = 31606U;

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
    msg.setTimeStamp(0.699268476194);
    msg.setSource(63943U);
    msg.setSourceEntity(127U);
    msg.setDestination(357U);
    msg.setDestinationEntity(140U);
    msg.id = 40U;

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
    msg.setTimeStamp(0.341695721836);
    msg.setSource(18757U);
    msg.setSourceEntity(149U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(106U);
    msg.id = 250U;

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
    msg.setTimeStamp(0.998622357673);
    msg.setSource(59112U);
    msg.setSourceEntity(162U);
    msg.setDestination(3160U);
    msg.setDestinationEntity(57U);
    msg.id = 20U;

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
    msg.setTimeStamp(0.856598417202);
    msg.setSource(38988U);
    msg.setSourceEntity(224U);
    msg.setDestination(18422U);
    msg.setDestinationEntity(51U);
    msg.op = 43U;
    msg.list.assign("MERMMCJLDBGHEKGTDIITWDKOBFTSSOZXQNUSHDVQTFWDTTZTDGIFCYJZAPSGBWBEQSZECLNXQZZGDBUSFYYYXNYNIURUARLCJODXJIZLKNKONPWZKWLBKPSALVYMJSEBPNIYJXMJQLVYKVHCGOFEICMOWXPWEUAYYPAZGRCXBHXOWQIMTQEIRDJWSUVVENFBCBORRQKUHNJPHVPZAAVCPV");

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
    msg.setTimeStamp(0.927900459083);
    msg.setSource(30714U);
    msg.setSourceEntity(27U);
    msg.setDestination(41378U);
    msg.setDestinationEntity(71U);
    msg.op = 230U;
    msg.list.assign("ATAOGUTBFHQAZFIWFLTORGJCAERWARPJJISTOSNBZQQMFQEKBZQDMYWKOYQPRCITVGDYZAFYXWCDWJSIRJNVKZVAHKWFPTZCEOKBXMQKWKCSGPUUSWYBLLOKXUOFYNNUEEPLHCTJCLWPZGJMBTQAZHOUFMHCNDYYBLDUMZG");

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
    msg.setTimeStamp(0.564505630288);
    msg.setSource(11808U);
    msg.setSourceEntity(11U);
    msg.setDestination(22081U);
    msg.setDestinationEntity(89U);
    msg.op = 115U;
    msg.list.assign("BBCTNCFYXJJDWTCYMYZREFOLYWMAKIKOJVXUSCVWPXOCGQVDSHQYPUZLOAFOPZSDRIILNMDRHHSCJPBJOKVASJZXUUDQITSRLUEZDPLRNYYQDBLWVZTGJIBEBNRCKGAX");

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
    msg.setTimeStamp(0.55836893738);
    msg.setSource(19718U);
    msg.setSourceEntity(98U);
    msg.setDestination(37723U);
    msg.setDestinationEntity(130U);
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
    msg.setTimeStamp(0.419757935341);
    msg.setSource(59132U);
    msg.setSourceEntity(218U);
    msg.setDestination(37777U);
    msg.setDestinationEntity(48U);
    msg.value = 133U;

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
    msg.setTimeStamp(0.883583671792);
    msg.setSource(26975U);
    msg.setSourceEntity(162U);
    msg.setDestination(23172U);
    msg.setDestinationEntity(77U);
    msg.value = 171U;

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
    msg.setTimeStamp(0.453741654049);
    msg.setSource(53763U);
    msg.setSourceEntity(143U);
    msg.setDestination(23357U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("SISGDZMFRWDJBMVKWGKKOIXCHGYARENBHQXPWUBGXJGLRSBVSHBWNIRRRJMTPBPOTFUAZIUMBJCIQPCVPGVEIRDRDFNQDEOWUXVYYGTBAYTWAMNLNPUMXJZQFCXLUYYCZXEQCKHXSMNIHZCKFMGEXQNSDVVKMKTCBZEALNNPSTDHTKQQLQOGUKFAQFWMJPYVJWERADOOYJLDZASPEUVOLCIZIKTHYJEEWOHOYAPFDXCBJF");
    msg.message_id = 58072U;

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
    msg.setTimeStamp(0.120618811424);
    msg.setSource(65117U);
    msg.setSourceEntity(72U);
    msg.setDestination(31592U);
    msg.setDestinationEntity(169U);
    msg.consumer.assign("SNDEDYQHMXTBHNZFAWUOJTUWDPRXGFZKIXZFWYDGRMDPPCCQPKYWEVEAAJGQGKHOWXYBRKXZHHKZOVOVLVREMTOZYTOSUVHAYLWXCXLEKTXJCSCHSYQMCGNKQYDQWIURTJKIQUGTGNWQEJNSGYLPZGBXCRLMPDPLUAEFAOSXEEFCHARZII");
    msg.message_id = 4902U;

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
    msg.setTimeStamp(0.246169453173);
    msg.setSource(8584U);
    msg.setSourceEntity(219U);
    msg.setDestination(18458U);
    msg.setDestinationEntity(216U);
    msg.consumer.assign("HXLYGCSPDZUHWHHPDQPWAORBJRDTXSEQLKMAGMIMNMGIYESURDIFUHLKKLFZCDGSFVRWUDWVRVJDQEFYXQXGRCXTKBYMNXUVBABJMTWGNGIKVJPTVKUGATXBMX");
    msg.message_id = 31833U;

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
    msg.setTimeStamp(0.42081180773);
    msg.setSource(55403U);
    msg.setSourceEntity(25U);
    msg.setDestination(65462U);
    msg.setDestinationEntity(71U);
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
    msg.setTimeStamp(0.10073870581);
    msg.setSource(1602U);
    msg.setSourceEntity(123U);
    msg.setDestination(23051U);
    msg.setDestinationEntity(111U);
    msg.type = 36U;

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
    msg.setTimeStamp(0.679192263245);
    msg.setSource(42347U);
    msg.setSourceEntity(231U);
    msg.setDestination(57249U);
    msg.setDestinationEntity(188U);
    msg.type = 54U;

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
    msg.setTimeStamp(0.58400322166);
    msg.setSource(26875U);
    msg.setSourceEntity(169U);
    msg.setDestination(10580U);
    msg.setDestinationEntity(41U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.849748640477);
    msg.setSource(581U);
    msg.setSourceEntity(66U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(46U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.419669987904);
    msg.setSource(18888U);
    msg.setSourceEntity(108U);
    msg.setDestination(9364U);
    msg.setDestinationEntity(91U);
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
    msg.setTimeStamp(0.556879322441);
    msg.setSource(52162U);
    msg.setSourceEntity(242U);
    msg.setDestination(42277U);
    msg.setDestinationEntity(64U);
    msg.total_steps = 170U;
    msg.step_number = 4U;
    msg.step.assign("SPZNAKDHGKTJEACZDQVOZPNJJWJJHPGSWLCDJRLIMBBGLLUFUUEPWLCCTSCVOUTOFZIFFFIKQSAEGVOYJRRZBOGKMWOPLVNZBXBYDHVBWZYEQKCSMUSVUQUIDYOXIJXKKEWFGBANMQVATTXRMREOGEYIXZDMJNXYPECNKRKYDHQCQTYHAMRSLUQCSHWXLHRALTRIMOYTDGQCWZVPIUOVGHXVBAPPFRZMHNIQXPWSJWNNS");
    msg.flags = 10U;

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
    msg.setTimeStamp(0.804993680428);
    msg.setSource(32137U);
    msg.setSourceEntity(63U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(52U);
    msg.total_steps = 43U;
    msg.step_number = 75U;
    msg.step.assign("PKWXIYDGEVYEBSHZMZXSTFOESHJVNXTOSFIMLNIANWJNSEUJKXWCQWFMUZHWCNYHGECVJJOABHOKDUHVWIRDGBZNLCCYWMPFVRVSGOBPTBMADXYKWPQLCOTYPFPAQGFOTUVFCEXRXKMBEREKDTDYBYFIHJVPETWBAGKIUKOCZTRZQAGNNPQOAZHSUCQLRVXNWCYQRYQHDPLLBAGRLVJUGJDTXFSUZ");
    msg.flags = 220U;

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
    msg.setTimeStamp(0.777130545383);
    msg.setSource(52105U);
    msg.setSourceEntity(217U);
    msg.setDestination(58742U);
    msg.setDestinationEntity(96U);
    msg.total_steps = 133U;
    msg.step_number = 58U;
    msg.step.assign("UVYJMOBFLOVRUWIIHUZGKJIPPBQHDCTMHJRWOEEXIJMYHUIJKOXGOPRPEJYXDKTMLZCSVZWOCAZBJZDMSZQRAUGYUDKTNFDPCEHYWLCQJFLKVHWCZLMCL");
    msg.flags = 182U;

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
    msg.setTimeStamp(0.733077063376);
    msg.setSource(4180U);
    msg.setSourceEntity(100U);
    msg.setDestination(3643U);
    msg.setDestinationEntity(33U);
    msg.state = 205U;
    msg.error.assign("NIIYLQAADLZTBEKGTQZFVSMRFAAUNSYKTLVAWPOMGGVRECXYCEUURWKDFEACCCILJPBQRNKPEDONJJNEVBJGCTUOGHOZOJQOZVXFJPPBTHTCYYQOMRBXCSOSFBHWHHDXEIZAWIPWHKTLIQBNHRYVZTFVYUELAZYXNIDUFUZYFVQLWSFWMSMKKJLZYXBNQQVXCTIBXPHQLTHSSMPXMMOIJKPRNORGSSAHWUWVKGMEDAJNGDPFECDMJGR");

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
    msg.setTimeStamp(0.97893184486);
    msg.setSource(2304U);
    msg.setSourceEntity(89U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(43U);
    msg.state = 213U;
    msg.error.assign("XWPGAZTRKEIZEEEGMGOKDPTFTKLQPLNQJZUSRDPWKCYRSCLEC");

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
    msg.setTimeStamp(0.665147212884);
    msg.setSource(60144U);
    msg.setSourceEntity(176U);
    msg.setDestination(25218U);
    msg.setDestinationEntity(50U);
    msg.state = 140U;
    msg.error.assign("KZXYURXDKXINCLHMRYQBWINLOYWQJYGTBJAAQUSMFFGDFCTVEJXMEUWCDQONVEOSEPEDKVQDVDOYBWHGKKEVHSKPJSXTFIBCSDRZSPUVLRBIOIHNQTJJHWLUM");

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
    msg.setTimeStamp(0.201029062466);
    msg.setSource(42615U);
    msg.setSourceEntity(108U);
    msg.setDestination(24030U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.14035788065);
    msg.setSource(21334U);
    msg.setSourceEntity(229U);
    msg.setDestination(19178U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.521514047657);
    msg.setSource(38378U);
    msg.setSourceEntity(136U);
    msg.setDestination(37369U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.277668735332);
    msg.setSource(34677U);
    msg.setSourceEntity(228U);
    msg.setDestination(18659U);
    msg.setDestinationEntity(172U);
    msg.op = 160U;
    msg.speed_min = 0.219161045413;
    msg.speed_max = 0.481938146382;
    msg.long_accel = 0.304448633068;
    msg.alt_max_msl = 0.0979938398726;
    msg.dive_fraction_max = 0.9318032416;
    msg.climb_fraction_max = 0.294162370287;
    msg.bank_max = 0.675177058145;
    msg.p_max = 0.249058444581;
    msg.pitch_min = 0.60260919731;
    msg.pitch_max = 0.840508001886;
    msg.q_max = 0.212339737048;
    msg.g_min = 0.13331434554;
    msg.g_max = 0.794003026563;
    msg.g_lat_max = 0.433123747173;
    msg.rpm_min = 0.865664009729;
    msg.rpm_max = 0.962573343321;
    msg.rpm_rate_max = 0.0396244019483;

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
    msg.setTimeStamp(0.583654372739);
    msg.setSource(53791U);
    msg.setSourceEntity(14U);
    msg.setDestination(24106U);
    msg.setDestinationEntity(118U);
    msg.op = 75U;
    msg.speed_min = 0.169859836836;
    msg.speed_max = 0.782614555795;
    msg.long_accel = 0.309581308194;
    msg.alt_max_msl = 0.971452534548;
    msg.dive_fraction_max = 0.518849785889;
    msg.climb_fraction_max = 0.357512712155;
    msg.bank_max = 0.167219324342;
    msg.p_max = 0.345332452702;
    msg.pitch_min = 0.121473529037;
    msg.pitch_max = 0.984377802738;
    msg.q_max = 0.534916520931;
    msg.g_min = 0.994882360686;
    msg.g_max = 0.744308219999;
    msg.g_lat_max = 0.528678855204;
    msg.rpm_min = 0.236636479207;
    msg.rpm_max = 0.30497566619;
    msg.rpm_rate_max = 0.785614826002;

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
    msg.setTimeStamp(0.435879413352);
    msg.setSource(4929U);
    msg.setSourceEntity(158U);
    msg.setDestination(61659U);
    msg.setDestinationEntity(240U);
    msg.op = 171U;
    msg.speed_min = 0.393125982426;
    msg.speed_max = 0.0732869246223;
    msg.long_accel = 0.0878546568827;
    msg.alt_max_msl = 0.0571002765826;
    msg.dive_fraction_max = 0.866032252712;
    msg.climb_fraction_max = 0.257642096291;
    msg.bank_max = 0.816724491511;
    msg.p_max = 0.643111276494;
    msg.pitch_min = 0.0806021131064;
    msg.pitch_max = 0.561831484895;
    msg.q_max = 0.641422592873;
    msg.g_min = 0.317757667054;
    msg.g_max = 0.155932835072;
    msg.g_lat_max = 0.984390771116;
    msg.rpm_min = 0.251651582282;
    msg.rpm_max = 0.874302256476;
    msg.rpm_rate_max = 0.826521058666;

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
    msg.setTimeStamp(0.444223498442);
    msg.setSource(46255U);
    msg.setSourceEntity(140U);
    msg.setDestination(14443U);
    msg.setDestinationEntity(163U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("HZIMDQYOQAFXEFONZYFPWPPWCJGUXDDEIMWWUZQYXUMJRTKLBCLJVNNFXKIRNRAAZSVSFTDXGIVSOZVQMATASEUAXVQHJGPGNESCLYHKLYSWQYEBSGXJKQPZBATBURTHDRMEZTLVFIHLTMVNEVJMWZYUBUOXISLFDQOCWOHSDAJAHCDOYIGSPKOFCGKRNARNPBCLGVNPOBEBJTVCIRBXPYUTQPIDIWH");
    tmp_msg_0.value = 70U;
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
    msg.setTimeStamp(0.288171411308);
    msg.setSource(64409U);
    msg.setSourceEntity(120U);
    msg.setDestination(3080U);
    msg.setDestinationEntity(42U);
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 209U;
    tmp_msg_0.tas2acc_pgain = 0.290699380639;
    tmp_msg_0.bank2p_pgain = 0.899964904081;
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
    msg.setTimeStamp(0.229672818778);
    msg.setSource(52496U);
    msg.setSourceEntity(16U);
    msg.setDestination(54992U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.717527160423);
    msg.setSource(45636U);
    msg.setSourceEntity(110U);
    msg.setDestination(20207U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.289217557538;
    msg.lon = 0.278155061567;
    msg.height = 0.584614540608;
    msg.x = 0.244406134182;
    msg.y = 0.224920310271;
    msg.z = 0.708525976039;
    msg.phi = 0.723170597258;
    msg.theta = 0.361645474981;
    msg.psi = 0.919320680707;
    msg.u = 0.760444110541;
    msg.v = 0.395640482804;
    msg.w = 0.375543861035;
    msg.p = 0.862922364805;
    msg.q = 0.017101771334;
    msg.r = 0.414774042709;
    msg.svx = 0.627238041996;
    msg.svy = 0.921796029366;
    msg.svz = 0.126975118651;

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
    msg.setTimeStamp(0.989786217914);
    msg.setSource(3448U);
    msg.setSourceEntity(222U);
    msg.setDestination(50968U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.633079259191;
    msg.lon = 0.611624727582;
    msg.height = 0.0759931393519;
    msg.x = 0.173495354298;
    msg.y = 0.0425857962605;
    msg.z = 0.392071839612;
    msg.phi = 0.364158322527;
    msg.theta = 0.104735113016;
    msg.psi = 0.559346918137;
    msg.u = 0.971200639757;
    msg.v = 0.465012312591;
    msg.w = 0.442401876844;
    msg.p = 0.0793282636033;
    msg.q = 0.74823859599;
    msg.r = 0.820759084468;
    msg.svx = 0.416219978747;
    msg.svy = 0.0251034622196;
    msg.svz = 0.112035955573;

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
    msg.setTimeStamp(0.0704629453011);
    msg.setSource(20420U);
    msg.setSourceEntity(115U);
    msg.setDestination(45582U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.371430947099;
    msg.lon = 0.229375584326;
    msg.height = 0.103248444927;
    msg.x = 0.690724743705;
    msg.y = 0.29210833896;
    msg.z = 0.610307394827;
    msg.phi = 0.130203997527;
    msg.theta = 0.521495480101;
    msg.psi = 0.065577206344;
    msg.u = 0.902411436867;
    msg.v = 0.903237340302;
    msg.w = 0.475680402049;
    msg.p = 0.109443086657;
    msg.q = 0.393227941412;
    msg.r = 0.805052016822;
    msg.svx = 0.647089112872;
    msg.svy = 0.857517906118;
    msg.svz = 0.746149662476;

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
    msg.setTimeStamp(0.218050846199);
    msg.setSource(26134U);
    msg.setSourceEntity(232U);
    msg.setDestination(52306U);
    msg.setDestinationEntity(41U);
    msg.op = 199U;
    msg.entities.assign("BLOKFSCPYNTVMSLJFWJPCZVHQYLUDJKCBIPTBKYDBHGZDZWNXGNFMJUGUITNBOTKFWNYACPNHAQODMHRZFTOWMCRUUXMKTZKEDAOOFCHCJPXXGQYRDEH");

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
    msg.setTimeStamp(0.279045134802);
    msg.setSource(15426U);
    msg.setSourceEntity(253U);
    msg.setDestination(47395U);
    msg.setDestinationEntity(124U);
    msg.op = 22U;
    msg.entities.assign("NZXLVKXEJBCUGMZPIJMDNUGVTLXVUGAQFWBQFETCADBMTRASFCUSOCMQVUIHPQCPSEKRNHYHGYBQGUXRLYDDEKXWNESIGBYTHBKPFPGHFWWPTXIEZOVQINRJLGDYBAHYVFYODSEJJCZJJOFKWMDIFRSSNOVSSXWLBLBXHNNAGPIWLSUZUXZOHCAFUJIZREURCW");

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
    msg.setTimeStamp(0.594511956399);
    msg.setSource(22432U);
    msg.setSourceEntity(101U);
    msg.setDestination(9411U);
    msg.setDestinationEntity(88U);
    msg.op = 204U;
    msg.entities.assign("NNJLVQIABMBSFXEJNUTGQIOUBSJWRSMI");

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
    msg.setTimeStamp(0.657234922731);
    msg.setSource(3292U);
    msg.setSourceEntity(51U);
    msg.setDestination(24080U);
    msg.setDestinationEntity(63U);
    msg.type = 85U;
    msg.speed = 9044U;
    const char tmp_msg_0[] = {63, -93, 74, -124, -29, -120, 50, 59, -8, 14, -40, -103, 82, -50, -45, -81, -63, 105, -119, 15, -97, -56, 25, 73, -56, -81, 60, 45, 29, 123, 96, -48, -41, 109, 126, -119, 50, 6, -30, -80, -106, 96, -101, 11, -65, 31, 55, -76, -58, -78, 33, 58, -89, 29, 98, -96, 115, 106, -118, 16, 67, 56, -32, -109, 66, -73, 112, 27, -103, -8, -48, -8, 81, -20, -75, 4, 89, -102, 28, -48, -35, 72, -25, -119, 57, 78, -120, 68, 36, 107, -128, 98, -21, 63, -37, -15, -12, -125, 112, 112, 111, -31, 24, 59, 71, -104, 2};
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
    msg.setTimeStamp(0.334391298553);
    msg.setSource(56907U);
    msg.setSourceEntity(208U);
    msg.setDestination(29855U);
    msg.setDestinationEntity(89U);
    msg.type = 79U;
    msg.speed = 14477U;
    const char tmp_msg_0[] = {-6, -57, 96, 103, 11, -63, 47, 20, 103, 84, 56, 12, -26, -6, 78, -122, 51, 122, -115, -18, -10, -114, -110, 64, 59, 22, 38, -82, -96, -50, 104, 110, -97, 40, -38, -117, -58, -92, -92, 23, 45, -9, 64, -111};
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
    msg.setTimeStamp(0.390325021492);
    msg.setSource(21542U);
    msg.setSourceEntity(111U);
    msg.setDestination(20971U);
    msg.setDestinationEntity(205U);
    msg.type = 171U;
    msg.speed = 11916U;
    const char tmp_msg_0[] = {-9, 97, 86, 22, 61, -25, -22, -45, -102, -8, 69, -97, -24, -12, 47, 36, 73, -91, 82, -12, 113, 68, -59, -91, -20, -83, -66, -112, 50, -8, 103, 57, -101, -100, 13, 86, -8, -110, -116, 32, -93, 52, 35, 13, -116, 52, -103, 125, 43, -84, 40, 88, -118, -5, -52, -120, 70, -113, -62, -7, -18, -76, 117, -69, -113, -46, 60, -127, -11, 25, 48, -41, -75, -123, -122, -53, -36, -101, -90, -121, -42, 81, 31, 48, 111, 26, 105, -76, 74, 40, -75, 97, -65, -93, -32, -87, -59, -96, 84, 83, 51, -108, 103, 121, -89, 22, -35, 77, 15, -77, 81, 37, -74, 1, -88, 8, -106, 79, -26, -83, -1, -14, 126, 62, 62, 32, 68, -26, 61, -93, 18, -80, 76, -29, 44, 11, -84, -94, -3, 86, -2, 96, 25, 7, 36, -51, -123, 47};
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
    msg.setTimeStamp(0.737701102928);
    msg.setSource(45087U);
    msg.setSourceEntity(205U);
    msg.setDestination(3327U);
    msg.setDestinationEntity(39U);
    msg.op = 17U;
    msg.tas2acc_pgain = 0.989311266573;
    msg.bank2p_pgain = 0.386743174531;

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
    msg.setTimeStamp(0.905805488199);
    msg.setSource(64470U);
    msg.setSourceEntity(198U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(52U);
    msg.op = 237U;
    msg.tas2acc_pgain = 0.535591181356;
    msg.bank2p_pgain = 0.191754902661;

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
    msg.setTimeStamp(0.31929849866);
    msg.setSource(43005U);
    msg.setSourceEntity(206U);
    msg.setDestination(43247U);
    msg.setDestinationEntity(120U);
    msg.op = 198U;
    msg.tas2acc_pgain = 0.225473242307;
    msg.bank2p_pgain = 0.016760040937;

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
    msg.setTimeStamp(0.842776363894);
    msg.setSource(48140U);
    msg.setSourceEntity(149U);
    msg.setDestination(49779U);
    msg.setDestinationEntity(174U);
    msg.available = 275822213U;
    msg.value = 26U;

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
    msg.setTimeStamp(0.200990454203);
    msg.setSource(21067U);
    msg.setSourceEntity(24U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(54U);
    msg.available = 3855185243U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.431379140896);
    msg.setSource(6107U);
    msg.setSourceEntity(57U);
    msg.setDestination(33330U);
    msg.setDestinationEntity(218U);
    msg.available = 2298520770U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.363756469942);
    msg.setSource(57911U);
    msg.setSourceEntity(100U);
    msg.setDestination(25915U);
    msg.setDestinationEntity(48U);
    msg.op = 172U;
    msg.snapshot.assign("LDSEQSWLKHUFUYVNNHBA");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 8U;
    tmp_msg_0.lon_gain = 0.795518901404;
    tmp_msg_0.lat_gain = 0.934961421157;
    tmp_msg_0.bond_thick = 0.799830171032;
    tmp_msg_0.lead_gain = 0.679474943689;
    tmp_msg_0.deconfl_gain = 0.00168585841069;
    tmp_msg_0.accel_switch_gain = 0.77672372995;
    tmp_msg_0.safe_dist = 0.830646148214;
    tmp_msg_0.deconflict_offset = 0.153564278297;
    tmp_msg_0.accel_safe_margin = 0.967465884055;
    tmp_msg_0.accel_lim_x = 0.180159272415;
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
    msg.setTimeStamp(0.247995558768);
    msg.setSource(2505U);
    msg.setSourceEntity(147U);
    msg.setDestination(27517U);
    msg.setDestinationEntity(25U);
    msg.op = 189U;
    msg.snapshot.assign("PZTICHBGHIHMIQDCNXMBDYW");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.839557857552;
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
    msg.setTimeStamp(0.973920679117);
    msg.setSource(13452U);
    msg.setSourceEntity(58U);
    msg.setDestination(27539U);
    msg.setDestinationEntity(14U);
    msg.op = 238U;
    msg.snapshot.assign("OYBBESQJOQLZFBDCCRCFIVUUQMMAELCEMKTPVASXWMZQEVONSXLMNXWWZOLTKHDZFFXHSBCEJIGIGVQZAIJJDPXTNDHRQGQRJYVLAIKEXOTIURACMYTLCIWBJUBK");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 9U;
    tmp_msg_0.angle = 0.601921083188;
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
    msg.setTimeStamp(0.68670566779);
    msg.setSource(9025U);
    msg.setSourceEntity(221U);
    msg.setDestination(47818U);
    msg.setDestinationEntity(118U);
    msg.op = 161U;
    msg.name.assign("WUZUZFSXUMHAVZPYTHZSVNPBIKWKMFPDGNGTNJCSARUGQNPKQEIZIGLEUISWRIOMJJIVHPLGEMZXSENQMJWCLRAYOITOIOATOXJOKTQRACQFCOSKZSDGWXWJRCNUJEDZMYYYEABOEGDQTBBVJGKTLOWXDFLFAHSCLCHBRRDYPHBLDZEKQPBLHATZRKDPVXMXQIPUWSIAPEVGEKNTYHLMFUHSMFM");

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
    msg.setTimeStamp(0.883778820137);
    msg.setSource(10009U);
    msg.setSourceEntity(215U);
    msg.setDestination(54639U);
    msg.setDestinationEntity(179U);
    msg.op = 241U;
    msg.name.assign("CMXZFDBNYRVWMKSKATGJPEOAAWKAGXYDBYJDQRXVQTRJZAZKRIDKITLMLQJEAWOOVZXZAYRGO");

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
    msg.setTimeStamp(0.729957118726);
    msg.setSource(51471U);
    msg.setSourceEntity(32U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(203U);
    msg.op = 97U;
    msg.name.assign("CGRQATOFYEUZUOMOREIWSPZWKPAKJBRTQSXMUMTBRZTOHEMRL");

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
    msg.setTimeStamp(0.294651155622);
    msg.setSource(24311U);
    msg.setSourceEntity(243U);
    msg.setDestination(30979U);
    msg.setDestinationEntity(117U);
    msg.type = 242U;
    msg.htime = 0.949941659237;
    msg.context.assign("TWFVRUWPSRZKDNTFCQAFKBKKECMHRWQAQJRXYXAVVELGSDBJDWALOTUQAUWEIWZHHGELISTWQNONZFMMOQNLAOVKNUGVGBSTZRZEMCFWWPUYLGZETONZQOTMBNLXTILFAKZYIRLJLHYQCPGDZMXXFBDCAJFBEDHKYYVSLJXUOSCEUZGFNQGAIDVUWHCSVUPXYIX");
    msg.text.assign("QSAUEKMKQFXDBPACWQYBCYDFGNFBYJTRGKHFMRLCOETHXHFRRYOUJYFDJZTTG");

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
    msg.setTimeStamp(0.303330873475);
    msg.setSource(1031U);
    msg.setSourceEntity(194U);
    msg.setDestination(36894U);
    msg.setDestinationEntity(147U);
    msg.type = 138U;
    msg.htime = 0.568988611812;
    msg.context.assign("VDIDOQMSLFJZALRSDKOBWQVAIHRNNHNLAQCJPOQHUCZKWUMVVNMPPKFBRF");
    msg.text.assign("ETTBUUAUIBCXKNJTZNDZNXKGEHYVCXBAKBGYGOCYDWZHAGWRMEBJKUQHEZPOEOBRQBFYEAOJJNJSWHQLXNWYMPFMUXOVCVNRQCZLJ");

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
    msg.setTimeStamp(0.62763543536);
    msg.setSource(25055U);
    msg.setSourceEntity(130U);
    msg.setDestination(26759U);
    msg.setDestinationEntity(97U);
    msg.type = 94U;
    msg.htime = 0.768414122553;
    msg.context.assign("TCDUPKIIDNGVWHUZLBNMNRSZNCDJEKAXWRYNHFPRJEBOMRFMUTZUAAUUK");
    msg.text.assign("BUECLAFSJVTVKIZUTKYMFAGCFZBYLYGLXGATSNZRMDJAZECKWOVAQAQSTIRSZLHXJJFOCZFYGGVTUOGBLXXYXDNBMFLZEBSEMPU");

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
    msg.setTimeStamp(0.597616169669);
    msg.setSource(56520U);
    msg.setSourceEntity(63U);
    msg.setDestination(27827U);
    msg.setDestinationEntity(234U);
    msg.command = 29U;
    msg.htime = 0.980006276863;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 0U;
    tmp_msg_0.htime = 0.877327624494;
    tmp_msg_0.context.assign("NHXSTNFBMVHWXMMQEYURRNFECSXYUMEIRLRIMFMUQDLXCOOLQEYVZASHWIARFPZNGOJXNZCIGKUIPOTMYRZQCNZGODKTSFCOYTJEQLZNDKWKWJISBVZZQJPPQALFRIWQQCDYCYMHEFZWXOIUVAKRPGDXDIDTDUBIENABTUQAWYOEKFVRWGGLGTCSCJLEAHXRTYVJBBAHGXVSPPVZTSAJXOMKOJVLYGJ");
    tmp_msg_0.text.assign("CXHWWNLWUHJUPAOHSCEMAMJQVYJCNBTUFDIVOJJYCWTOLINAYLZFLFSCBVOFUXDFXARODZYTSIHKHWZKLEQFUIEGPXYCXRUJEFWYASSXPDMINGEDBKSTOMHMERNNSVIPPFJBPVKXLZTUQHRGBJKQVDQWDAKRGLRPCQBVFAVKTGU");
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
    msg.setTimeStamp(0.0183078207569);
    msg.setSource(54347U);
    msg.setSourceEntity(202U);
    msg.setDestination(9135U);
    msg.setDestinationEntity(198U);
    msg.command = 195U;
    msg.htime = 0.39503985971;

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
    msg.setTimeStamp(0.829029816138);
    msg.setSource(59898U);
    msg.setSourceEntity(128U);
    msg.setDestination(28891U);
    msg.setDestinationEntity(139U);
    msg.command = 0U;
    msg.htime = 0.988703714838;

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
    msg.setTimeStamp(0.668073490927);
    msg.setSource(13328U);
    msg.setSourceEntity(144U);
    msg.setDestination(35563U);
    msg.setDestinationEntity(102U);
    msg.op = 177U;
    msg.file.assign("OESLILICAGENYDFJZKUNMDTCVJGMOGGRCIDCFDJSQTBAKLABUOBBALQORJNVNPDXQOKBMLMSJZTSKFAXXZHCTBWKXIECUPMPPWZGCYDWGNZMDTZUJRYGAPRIHWONVMVIHSLPYRKEFKFTLOZP");

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
    msg.setTimeStamp(0.446045688934);
    msg.setSource(32670U);
    msg.setSourceEntity(32U);
    msg.setDestination(45706U);
    msg.setDestinationEntity(48U);
    msg.op = 116U;
    msg.file.assign("NOTLQWQJCIMEMVHFNNTFSHMOXUVBHZRCZABYADBMNMDRKOQJWWFRPWTEKSNMKYTGHLBALWBZPLEDOJAFGPU");

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
    msg.setTimeStamp(0.479196260557);
    msg.setSource(22417U);
    msg.setSourceEntity(0U);
    msg.setDestination(30035U);
    msg.setDestinationEntity(58U);
    msg.op = 186U;
    msg.file.assign("AHYNUJEKWFJHGEHTILCFESKPOQKZYRLCTPMRBJLCRPEAVBZPDIJXYDWBZVCRTXOSQVWHDTGHENXKSFQQFQTLMBLFCTEEQUVBYWOKMLINDRGXUMCSUGNTUXOYXGBGKRMOCRNDWWNNSEWOVGIOMPUBDAHDETHZJIMUYMVAABODJNLZQRLQOZIJFGUWCBPYQAVAJMKLNIYMRPWSAPPVUJLITFYWISXCZKZHNFSSZTGFSH");

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
    msg.setTimeStamp(0.372733843224);
    msg.setSource(40666U);
    msg.setSourceEntity(0U);
    msg.setDestination(37462U);
    msg.setDestinationEntity(94U);
    msg.op = 6U;
    msg.clock = 0.608281396637;
    msg.tz = 14;

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
    msg.setTimeStamp(0.980683099365);
    msg.setSource(48117U);
    msg.setSourceEntity(139U);
    msg.setDestination(47140U);
    msg.setDestinationEntity(210U);
    msg.op = 59U;
    msg.clock = 0.488476829324;
    msg.tz = 13;

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
    msg.setTimeStamp(0.544112200192);
    msg.setSource(53482U);
    msg.setSourceEntity(51U);
    msg.setDestination(44660U);
    msg.setDestinationEntity(194U);
    msg.op = 103U;
    msg.clock = 0.301982007167;
    msg.tz = -41;

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
    msg.setTimeStamp(0.307753621786);
    msg.setSource(31306U);
    msg.setSourceEntity(106U);
    msg.setDestination(54190U);
    msg.setDestinationEntity(66U);
    msg.conductivity = 0.749022228725;
    msg.temperature = 0.14926508828;
    msg.depth = 0.441981193615;

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
    msg.setTimeStamp(0.402252217724);
    msg.setSource(34210U);
    msg.setSourceEntity(64U);
    msg.setDestination(26426U);
    msg.setDestinationEntity(62U);
    msg.conductivity = 0.119312359092;
    msg.temperature = 0.87439096421;
    msg.depth = 0.371638899961;

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
    msg.setTimeStamp(0.489136330762);
    msg.setSource(38776U);
    msg.setSourceEntity(64U);
    msg.setDestination(53468U);
    msg.setDestinationEntity(194U);
    msg.conductivity = 0.340690520061;
    msg.temperature = 0.539048799121;
    msg.depth = 0.465521667894;

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
    msg.setTimeStamp(0.162813375329);
    msg.setSource(34715U);
    msg.setSourceEntity(6U);
    msg.setDestination(41053U);
    msg.setDestinationEntity(240U);
    msg.altitude = 0.0438431975178;
    msg.roll = 40410U;
    msg.pitch = 46395U;
    msg.yaw = 23510U;
    msg.speed = -23951;

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
    msg.setTimeStamp(0.488966673611);
    msg.setSource(19022U);
    msg.setSourceEntity(156U);
    msg.setDestination(8452U);
    msg.setDestinationEntity(15U);
    msg.altitude = 0.660630356315;
    msg.roll = 63530U;
    msg.pitch = 9142U;
    msg.yaw = 29812U;
    msg.speed = 9093;

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
    msg.setTimeStamp(0.741408597881);
    msg.setSource(21807U);
    msg.setSourceEntity(94U);
    msg.setDestination(53271U);
    msg.setDestinationEntity(158U);
    msg.altitude = 0.823549560361;
    msg.roll = 23861U;
    msg.pitch = 49037U;
    msg.yaw = 23288U;
    msg.speed = 32615;

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
    msg.setTimeStamp(0.10243367694);
    msg.setSource(1946U);
    msg.setSourceEntity(251U);
    msg.setDestination(31315U);
    msg.setDestinationEntity(85U);
    msg.altitude = 0.413923225395;
    msg.width = 0.0290878718945;
    msg.length = 0.363329409499;
    msg.bearing = 0.332972648998;
    msg.pxl = 24440;
    msg.encoding = 39U;
    const char tmp_msg_0[] = {95, 85, -76, 82, -86, -128, 13, 93, -97, -54, -33, -36, -42, 1, -124, -34, -83, 120, -25, 91, 12, 98, 52, 69, -58, 2, -66, 47, 0, -71, -27, -55, -10, -67, -43, 93, 11, 98, 118, 0, -26, -117, 70, 89, -65, -112, 40, 6, -90, 83, 49, 35, 13, 17, -18, -118, 72, -63, -71, -51, 52, 12, -77, 7, -12, -123, -6, -98, 61, 111, 58, 54, -26, 122, 20, -34, -67, 55, -15, 4, -120, -21, 122, 74, 80, -55, -90, -88, -47, -45, 64, 22, -77, 92, 77, -35, -49, -64, -66, -52, -116, -115, 84, -55, 42, -105, -94, 96, 46, 83, 15, 107, 52, -75, -125, -33, 34, 52, 122, 32, 95, 10, 26, 4, -58, 82, -12, 67, -80, -45, -38, 57, 43, 34, 5, -79, -119, 94, -39, -7, -96, 40, -116, 9, -89, -3, -92, -87, 26, -50, -23, 39, 76, 18, 75, -102, 52, -37, 48, 43, -123, -48, -33, -13, -31, 31, 89, 30, 28, -120, 4, -96, -13, -88, -8, 65, -56, -99, 58, 54, 21, 36, -52, 59, -71, 47, -62, -82, 50, -98, -41, 54, -60, -9, -74, 37, 64, -100, -75, -73, 104, -83, -62};
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
    msg.setTimeStamp(0.0516891877435);
    msg.setSource(10566U);
    msg.setSourceEntity(135U);
    msg.setDestination(56458U);
    msg.setDestinationEntity(96U);
    msg.altitude = 0.724244554325;
    msg.width = 0.369974250725;
    msg.length = 0.282364946542;
    msg.bearing = 0.661704890385;
    msg.pxl = -25027;
    msg.encoding = 70U;
    const char tmp_msg_0[] = {-119, 86, 82, -94, -117, -90, 29, 109, 19, 117, -77, 43, 23, 56, -16, 11, -49, -39, 90, 10, 33, -6, -118, -80, -124, -44, 36, 43, 119, 95, -33, -40, 99, -12, -99, 5, -51, -101, 55, 22, -109, 63, 58, 70, 122, -95, 114, 70, 124, -93, -103, -47, 104, 100, 19, 12, -16, -28, 106, 72, 44, 97, -111, -96, -17, -73, -55, 115, 104, -128, 80, 100, -117, -10, -112, 89, 63, -29, 124, 38, 126, 22, 64, 28, 2, -72, 106, -83, -85, 100, -114, -27, 13, 24, -4, -86, 111, 122, -68, -79, 123, 56, 81, 12, 74, 10, -108, -11, 67, 19, -55, -25, 62, 46, -95, -105, 99, -122, 96, -101, 80, 16, 111, -8, 116, 50, 62, -88, 47, 47, -86, -29, -86, 66, 67, 63, 9};
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
    msg.setTimeStamp(0.946088957241);
    msg.setSource(18047U);
    msg.setSourceEntity(197U);
    msg.setDestination(37884U);
    msg.setDestinationEntity(82U);
    msg.altitude = 0.5184511594;
    msg.width = 0.82020173276;
    msg.length = 0.539628809978;
    msg.bearing = 0.178492222047;
    msg.pxl = -1334;
    msg.encoding = 0U;
    const char tmp_msg_0[] = {-57, 18, 66, 107, -51, 117, -35, 25, -78, -30, 48, -94, 122, -47, -89, -103, 0, -76, -62, -75, 48, 37, -16, -112, 10, -7, 121, -62, -66, 113, 21, -40, -27, 107, -27, -107, 50, -25, -37, 113, -123, 110, 84, -49, 37, 123, -65, 33, 96, 2, -120, 42, -45, -71, -40, 40, 5, -120, 24, 54, 40, 92, -78, -51, -85, 73, 57, 106, 100, -17, 71, -87, -46, 63, -90, -36, 110, 76, 29, 41, 120, 10, 3, 1, -76, 126, -1, -118, -13, 13, 96, 45, 6, 44, 115, 75, 2, 57, 36, 74, 103, -38, -17, -80, -108, 104, 57, 42, -36, -85, -6, 20, -45, 23, 22, -18, -24, 29, 90, 89, 102, -41, 96, 112, 8, -45, -124, -102, 2, -108, -53, 49, 24, 37, -41, -113, 103, 79, 32, 58, -96, -39, 46, 84, -41, -69, 62, 57, 32, 16, -125, -103, -92, 119, 20, -27, -123, -83, -15, 121, 113, 70, -27, -29, 18, 50, -116, 123, -110, 38, -92, 66, 66, 67, -96, -41, 27, -4, 39, -41, -91, -77, -123, -35, 119, 60, 95, 99, 6, -23, -98, -32, 102, 97};
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
    msg.setTimeStamp(0.805750670668);
    msg.setSource(28361U);
    msg.setSourceEntity(92U);
    msg.setDestination(25475U);
    msg.setDestinationEntity(193U);
    msg.text.assign("IOFHSICPMYFEACLTBONMDNOBYIIUBBJMQBRUNCZZPLYVVJDGVJCXWHSQKNZBVATGOMXTDDCORJKTZNGHJUUCJWIHZMAWFAVPXUKRLOFYLQWNLRUTIQOTGOBKZISFHHKZFTWYIZSWQTNUPIGXCPAYERPPVKEFDHYSSGASLJBBDLTUEQCIQXDSCAKNEFZNWSRVLKOMDAEUMHGL");
    msg.type = 123U;

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
    msg.setTimeStamp(0.996698628404);
    msg.setSource(15639U);
    msg.setSourceEntity(74U);
    msg.setDestination(16765U);
    msg.setDestinationEntity(45U);
    msg.text.assign("UJFNOQPTJTVULERDRCMFRJRUVXU");
    msg.type = 43U;

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
    msg.setTimeStamp(0.188536673106);
    msg.setSource(38783U);
    msg.setSourceEntity(170U);
    msg.setDestination(45443U);
    msg.setDestinationEntity(147U);
    msg.text.assign("YCMRUNOPRFSTSHOOMQDQCJMVXUJAUMXLHUQLBKPODPZWWQIWIJLORUZMSJSYOFUTVRISYRZFOPBDCVDXFRTKYQTGCVZUEJXWKRHZGVINLDFMTMIITBJZNVHEACGGAGSJOAQXCMZUNKSBXDICMETFXKNWPPXLBENHRIEKWODNIKJ");
    msg.type = 194U;

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
    msg.setTimeStamp(0.523288274501);
    msg.setSource(50163U);
    msg.setSourceEntity(107U);
    msg.setDestination(17433U);
    msg.setDestinationEntity(5U);
    msg.parameter = 244U;
    msg.numsamples = 217U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 64413U;
    tmp_msg_0.avg = 0.614169001881;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0426070738982;
    msg.lon = 0.477976506917;

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
    msg.setTimeStamp(0.429452667851);
    msg.setSource(5913U);
    msg.setSourceEntity(162U);
    msg.setDestination(51880U);
    msg.setDestinationEntity(162U);
    msg.parameter = 14U;
    msg.numsamples = 124U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 60266U;
    tmp_msg_0.avg = 0.384393966479;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.739142189636;
    msg.lon = 0.906656788476;

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
    msg.setTimeStamp(0.331691013181);
    msg.setSource(44592U);
    msg.setSourceEntity(41U);
    msg.setDestination(60432U);
    msg.setDestinationEntity(115U);
    msg.parameter = 62U;
    msg.numsamples = 16U;
    msg.lat = 0.585121198069;
    msg.lon = 0.940222241107;

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
    msg.setTimeStamp(0.315920568982);
    msg.setSource(4475U);
    msg.setSourceEntity(173U);
    msg.setDestination(30389U);
    msg.setDestinationEntity(58U);
    msg.depth = 9979U;
    msg.avg = 0.694635990009;

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
    msg.setTimeStamp(0.124750180162);
    msg.setSource(55341U);
    msg.setSourceEntity(97U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(150U);
    msg.depth = 22345U;
    msg.avg = 0.0127514511808;

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
    msg.setTimeStamp(0.722698263511);
    msg.setSource(19390U);
    msg.setSourceEntity(238U);
    msg.setDestination(32954U);
    msg.setDestinationEntity(253U);
    msg.depth = 27850U;
    msg.avg = 0.977320582577;

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
    msg.setTimeStamp(0.0656453031495);
    msg.setSource(1066U);
    msg.setSourceEntity(201U);
    msg.setDestination(21914U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.842025359293);
    msg.setSource(34636U);
    msg.setSourceEntity(129U);
    msg.setDestination(53193U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.744610969172);
    msg.setSource(2834U);
    msg.setSourceEntity(222U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.0116212714601);
    msg.setSource(53592U);
    msg.setSourceEntity(114U);
    msg.setDestination(31586U);
    msg.setDestinationEntity(82U);
    msg.sys_name.assign("TZWHAXUVTOMQPKWGYVVJCQEPDCLLPPGWAXVXBBBXYYJJWIPFORAHBRIRZKKVCFUULEZGNQCRXGSZHACEUDVAYZLPZWNEFMJIIFKIQXTSQPECXKKLAQUYSUQAHURHFFWRZTJDMTVRODZTDNQKILQVWJTYCGEXEDK");
    msg.sys_type = 137U;
    msg.owner = 20277U;
    msg.lat = 0.718076757639;
    msg.lon = 0.169955514332;
    msg.height = 0.498756279232;
    msg.services.assign("WWNDQJZLRFMNCUEAEGHCYDVFZZUMSQKNZXMBBWPIWXYIBHTAVTORBSIJRCVFGCYLEUHR");

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
    msg.setTimeStamp(0.227628801215);
    msg.setSource(19808U);
    msg.setSourceEntity(146U);
    msg.setDestination(26229U);
    msg.setDestinationEntity(192U);
    msg.sys_name.assign("OBBIBEEIGCOUJVEOCMSTLEWVVADGQSACIDGNVIEGODBURDROFXWMKXYJNNCHVKZLFXRNBHFNIOXLKUIMP");
    msg.sys_type = 236U;
    msg.owner = 26032U;
    msg.lat = 0.815435419828;
    msg.lon = 0.267524926668;
    msg.height = 0.0179532630555;
    msg.services.assign("XBXWATFJEMYVEPOHABCFPFWUKOAMMRQSTOAXHDUUTCPVLMWGZKGKJCOLTHZPIJNYSIKZFKFUVIKONZHNLTUATABVHTSZQWUKOSOSIJNTBWSXCNZYVRMMGF");

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
    msg.setTimeStamp(0.0264468469425);
    msg.setSource(4504U);
    msg.setSourceEntity(15U);
    msg.setDestination(4789U);
    msg.setDestinationEntity(176U);
    msg.sys_name.assign("HMQVSBGORCCLLHENLMKQCTTHVOAYZYJONJEDVPTRVEQCZNSOIXGBKENTFFPNMZARHCOCSALIHJRPJYZGWULTYOKGNI");
    msg.sys_type = 1U;
    msg.owner = 50930U;
    msg.lat = 0.544068217111;
    msg.lon = 0.923096370236;
    msg.height = 0.6473209831;
    msg.services.assign("HYZLYNMOFLUWUPXYAEPWNRHKYWXOKIEMSMUJCQEBBWKKOSHCPAFSIUZJVPXVDFQCVACOGNSNKSJFSTTWIDTSHCJKXTHOVABPDYNPMRDHGLLISYKQZWUKBCRIJXJUMYXQNLBODAERBIVWHQTFBKPZYQBUIIOTAFSMUGBQEJGYNPHLO");

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
    msg.setTimeStamp(0.936249227815);
    msg.setSource(9653U);
    msg.setSourceEntity(37U);
    msg.setDestination(54583U);
    msg.setDestinationEntity(200U);
    msg.service.assign("TSXFCRWYMCFYOZGIYKTTKKGRSWUEWLYIGLCXMDBMUJGERWYKSCHPXIZFAXSHVHPWQMXNQLZPJMMLONWBQVIKQJZVCYFAQFRONBBUOAUDONZFUYZKJLEDAWWMNQRNORSIDQHRTTAGAJJHAPEJKFURLZYSDDVCSWS");
    msg.service_type = 201U;

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
    msg.setTimeStamp(0.0769262875073);
    msg.setSource(3958U);
    msg.setSourceEntity(168U);
    msg.setDestination(36311U);
    msg.setDestinationEntity(178U);
    msg.service.assign("LFWTBTKLIZFKIFPPORRXYMHASLWWOQZIQACWECKELWLTEPTTSAXBFZYYGNDBYLQOPJRZBOZJOOPRNMUPCOZRUXAMNNSSQIDJOHDTTZHPOHXUVEMKTNRBQNDXNAUXICQAQGTWWPLXSUVYGXBBGKZCHRDIUAEF");
    msg.service_type = 55U;

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
    msg.setTimeStamp(0.611572928927);
    msg.setSource(63645U);
    msg.setSourceEntity(46U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(213U);
    msg.service.assign("DJXCFQCGXQIGDJTOQILXVVVHEAZCTNGIWEXSMGPNWRLYMGNOJGZIHUZDYKARVRWRMBULJPJWBKYACMGUAYPYUDCTCSEIYFKVBZCKQBUMHOMHLZJEBZTMNYEISIXHDHOFJQBNFBVLSWNEYTLAEDPTYTSTPMUEWWPYNTUUXIQXLPMOIROHZWHQHVUOFDNQBFNGAKKFFCKDGHARXFAPSTZFAEZBWUJPLNLKRSDOVSOZVXICJRKRXPKEQVSCQ");
    msg.service_type = 116U;

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
    msg.setTimeStamp(0.894771604405);
    msg.setSource(38530U);
    msg.setSourceEntity(242U);
    msg.setDestination(7675U);
    msg.setDestinationEntity(149U);
    msg.value = 0.463497039914;

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
    msg.setTimeStamp(0.941702455027);
    msg.setSource(29483U);
    msg.setSourceEntity(249U);
    msg.setDestination(24193U);
    msg.setDestinationEntity(94U);
    msg.value = 0.887907569419;

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
    msg.setTimeStamp(0.241561302159);
    msg.setSource(32211U);
    msg.setSourceEntity(147U);
    msg.setDestination(49355U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0892303535142;

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
    msg.setTimeStamp(0.414869183629);
    msg.setSource(15965U);
    msg.setSourceEntity(131U);
    msg.setDestination(61983U);
    msg.setDestinationEntity(117U);
    msg.value = 0.703007483064;

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
    msg.setTimeStamp(0.0678312205926);
    msg.setSource(57268U);
    msg.setSourceEntity(98U);
    msg.setDestination(62287U);
    msg.setDestinationEntity(133U);
    msg.value = 0.991512671454;

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
    msg.setTimeStamp(0.32594141372);
    msg.setSource(35918U);
    msg.setSourceEntity(34U);
    msg.setDestination(45987U);
    msg.setDestinationEntity(179U);
    msg.value = 0.982257859942;

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
    msg.setTimeStamp(0.379869272497);
    msg.setSource(36677U);
    msg.setSourceEntity(238U);
    msg.setDestination(49475U);
    msg.setDestinationEntity(89U);
    msg.value = 0.178487941673;

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
    msg.setTimeStamp(0.800968949541);
    msg.setSource(57444U);
    msg.setSourceEntity(247U);
    msg.setDestination(34621U);
    msg.setDestinationEntity(148U);
    msg.value = 0.322543780443;

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
    msg.setTimeStamp(0.915412512837);
    msg.setSource(12062U);
    msg.setSourceEntity(100U);
    msg.setDestination(40960U);
    msg.setDestinationEntity(9U);
    msg.value = 0.975020899428;

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
    msg.setTimeStamp(0.977811518953);
    msg.setSource(33612U);
    msg.setSourceEntity(224U);
    msg.setDestination(22761U);
    msg.setDestinationEntity(135U);
    msg.number.assign("RKCSQQNZQEY");
    msg.timeout = 5233U;
    msg.contents.assign("KLCJTKCZMTMPRIXNLJZRUAQZRWWWGMOFQTPSCOEEYXFBMCLFKJZRWISTFPHQSOGVNFENLAUBCRCDORGPKGBBYVYINUKWQHET");

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
    msg.setTimeStamp(0.722223635201);
    msg.setSource(24060U);
    msg.setSourceEntity(234U);
    msg.setDestination(693U);
    msg.setDestinationEntity(125U);
    msg.number.assign("HFDJANEMKWDSOOXLKDTXWMINBBZHHKGBQTZSAHVSCJVGUCHCFKQLMAMJITVIBPQTGDURBYLEQUKOYBLVFMYWYJCCSCLWQJCKGJAVHZTAEZTGRPYNVIPBZMD");
    msg.timeout = 61747U;
    msg.contents.assign("BCZVAEEXYSMDKDTOYEJNJUABFUDMVVCBZASDTPSZWASOQRHRVHHORBELJKWVSFBLIHVKPNFDFLMNXRNSGQLUMGJMQRWGWPEHJNUEWIVGHZORQCUTCEPIVLYFQDPHZPIVAZTYWRMFKIPDGQSESQJQHBRJNXBXUHUOKTAOFXOAAZACRCMQGGJIIUGTYGYZSHIXPYXFJTDILOBTKTPMCGKLNPWUDEMYFBZOYTIFLANKWNLREWNUQ");

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
    msg.setTimeStamp(0.227920261327);
    msg.setSource(20810U);
    msg.setSourceEntity(26U);
    msg.setDestination(57905U);
    msg.setDestinationEntity(216U);
    msg.number.assign("XANBQMGHGXTXDPSZMUJLWMVMAUMQVXGXVQDKJGHOYVNTVOHVJXYRWBBHGSSYOVUOCZDKPNTACKTGZPQFMCOXRJKMRBUQLLGRSUEEDDBYOJHYDAEZPPQKLBWCYKPZDATEUFGLLELTFQWBSIHWFRASCNVYEIUIIQAVQCDNRJDNLKFIWKMTZKZIIZMFIFIHROHANQWXEPCFTNSSTSCM");
    msg.timeout = 13958U;
    msg.contents.assign("JNFDRLCHYCVJITZRYKEAWDXFEVYFGVLZRNNGGWJNCUUEVBBCYQDYFHQSTHUOTWANOAPXMOEAEZLBXAKFWKBXAIJCIMQBMPRYSPGXJQQUXRMCZPVZKWPNEUSMWYDOUSWSBTLGFTSEHWNCCXKVUPOKPMSNTHZYDKUMVVQTZEKXZZJWMEHRCHYAOHGNQELALBRV");

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
    msg.setTimeStamp(0.92073936027);
    msg.setSource(33330U);
    msg.setSourceEntity(20U);
    msg.setDestination(58863U);
    msg.setDestinationEntity(103U);
    msg.seq = 2863978316U;
    msg.destination.assign("ZNNHIUUSQNTWVYWKEWDBGRRMABPTOLBZGEIQONEMMPHNJKWQCWORHXAHNZOJMWTRGGWZTFLNXRUEPFGLTSPXHTSYVBHKPFAGJUKMFXOFSGTCVDLPDYAIBWVKBQQVBJVKETSICJIREJSGAOFDDTRTLOLMXSCVJCZKZYVKSDMLAQGJPMXAIFS");
    msg.timeout = 57350U;
    const char tmp_msg_0[] = {-126, 37, -54, 76, -103, 56, -73, 118, -56, -111, 4, 30, 6, -30, -79, 15, -42, 100, -101, -11, 2, -73, 113, 82, 71, -113, 80, -120, -107, 58, 95, 21, -25, 103, 92, -58, 41, 72, -56, 20, -122, 78, 28, -22, -8, 8, 66, -107, 35, 76, 22, -21, -54, 70, -27, 5, 117, -6, 46, 125, 96, -123, -92, 111, 45, 64, -69, 61, 82, 100, 67, -127, -73, -6, -66, -125, -102, -115, 91, -12, 80, -79, 90, 9, 91, -100, 94, 68, -93, 26, 40, -68, -23, 125, 3, 11, -12, 98, 75, 96, 33, 92, 120, 53, 86, -46, 31, 100, -82, 9, 70, 72, -2, 13, -33, -93, 87, -95, 125, 54, -34, 91, 26, 15, 8, -63, 45, 6, 86, 0, -92, 119};
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
    msg.setTimeStamp(0.172916407072);
    msg.setSource(35416U);
    msg.setSourceEntity(202U);
    msg.setDestination(5936U);
    msg.setDestinationEntity(109U);
    msg.seq = 2376174232U;
    msg.destination.assign("IKCAOCBXOUVUMXPKNVVECX");
    msg.timeout = 8876U;
    const char tmp_msg_0[] = {-25, -7, -8, -8, -123, 97, 5, 84, 124, -128, -113, 31, -14, 13, -91, -111, 65, 66, 61, 59, -60, -61, 3, -108, -86, 17, 14, -105, 105, -57, 115, -59, -32, -34, -121, -76, 92, 36, -75, 44, -41, 95, 45, -107, -17, 24, 6, -111, 65, 66, 107, 58, 105, -22, -125, 47, -94, 83, -122, -59, -12, -69, -117, -79, -65, 95, -65, 42, -108, -6, -67, 64, 72, -20, 124, 111, 69, -53, -109, -89, 72, 84, -38, -7, -75, 5, 72, -128, -53, 86, -89};
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
    msg.setTimeStamp(0.195879545889);
    msg.setSource(32167U);
    msg.setSourceEntity(33U);
    msg.setDestination(3596U);
    msg.setDestinationEntity(105U);
    msg.seq = 2506921457U;
    msg.destination.assign("AVJTZXCEBYCJGVSULEDSTIRDHEFAICVUXUXTAALGBKHJPJWHYSSKUQNIDGFQDKDHAMGKBKMUPBUGQQHQFNPLCHWQTQPEPSNXYZXSIOEYGMZRCPENOJMWSHWTIIKTNKKHVBCXBYWELYZVUWRQCZHAVMMTVILKDBPWTVEYEGNGPKQDEUJJBRFNOMZTYLAILJFJHDBTOXSDVXRC");
    msg.timeout = 49749U;
    const char tmp_msg_0[] = {17, -27, -65, 80, -34, -74, -2, -47, 89, 119, -19, 102, -16, 31, 117, -16, 78, 67, -68, -80, -59, 56, -9, 71, 0, -121, -12, -84, 108, 105, 19, 6, -98, 59, 39, -85, -59, 125, 95, 102, 66, 121, -15, 98, -21, -68, 91, -89};
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
    msg.setTimeStamp(0.63998681204);
    msg.setSource(51418U);
    msg.setSourceEntity(163U);
    msg.setDestination(15965U);
    msg.setDestinationEntity(191U);
    msg.source.assign("XEZFYUZRTUMUSBQGBYZVMVJTTMDBJYRTTAAKPUHSANSEVQJMCHFWHLWH");
    const char tmp_msg_0[] = {79, -106, 27, 44, -108, -37, 77, 112, 98, -90, -90, 58, -4, 4, 67, -103, -120, 113, -28, 67, -119, 90, 80, 105, 23, 17, 51, 26, 54, 53, 119, 92, -83, -11, -54, 75, 106, -71, 67, 14, -28, 120, -59, 62, -67, 75, 114, 32, -47, 70, -13, 19, 104, -62, -95, -28, 99, 116, -104, 42, -58, 36, -113, -43, 2, -44, -1, -64, -70, -67, -32, 33, 42, 60, 47, 66, -76, 60, 63, 71, 105, -88, -110, -44, 20, -42, 86, 40, -97, -74, -50, 25, -115, -95, -40, -49, 110, 35, -74, 73, 63, -30, -117, 114, 108, -117, -56, 126, -4, 52, 87, 40, 122, 48, -126, -16, -11, 6, 14, 35, -54, 76, 43, -90, -21, 74};
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
    msg.setTimeStamp(0.406638538331);
    msg.setSource(42639U);
    msg.setSourceEntity(113U);
    msg.setDestination(13281U);
    msg.setDestinationEntity(187U);
    msg.source.assign("GSTEZQMOHFSGHBUHNEDCSBFXJYTWDYKKLTOLMMP");
    const char tmp_msg_0[] = {-14, -2, 80, 72, -13, -32, 94, -107, 60, 44, 56, -34, 39, 36, -59, -46, -23, 59, 88, 122, -122, 17, -71, 53, -98, 83, 48, 103, 66, -70, 105, 97, -85, -11, -26, -118, -50, -40, 13, 57, -10, -57, -61, -44, -28, -102, -67, -63, -100, -114, 45, -91, -48, 84, 33, 29, -123, 56, -1, -35, -9, 39, 100, -42, 18, 101, 64, 23, 33, 48, 113, 106, 79, 121, 86, 106, -45, 30, -73, -118, 122, 0, -60, 46, 35, -28, -39, -42, 87, -9, 3, 57, -112, 124, 27, 91, -50, 70, -64, 106, 9, -70, 85, -37, 69, 12, -75, 3, 102, 4, -50, 81, 10, -94, 72, 75, 118, 8, 21, -51, -106, -11, 75, 13, 57, 72, -5, 93, -40, -115, 15, -76, 23, -103, -106, 2, 125, -13};
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
    msg.setTimeStamp(0.940262515315);
    msg.setSource(47921U);
    msg.setSourceEntity(192U);
    msg.setDestination(59081U);
    msg.setDestinationEntity(197U);
    msg.source.assign("UMGVYYZASZGWVWRNSYBSPPBLUHMZEOVWKDVXKJSODWYBTPBXKUJZVCFKLAZILAXGRITFOJNGMJZTFCTGLXOGKQFRAIONDWIQFWGHTGBCZNIPJCAPNWMWAUILMFIHXPBURACACZJCRVSSFEBXDWYBQEXTGOPQHHTBEZMDCQKNETROUYKVQYKEEUFNUSGAHYNHOJVFORLIPPHNDTDRESFYHXQQDVQMDYSJINMPJRXOMLLLEDHJQIKUXAWTM");
    const char tmp_msg_0[] = {84, 42, 76, -68, -107, -2, -48, 19, -11, -9, -72, 65, -93, -39, -53, 82, 63, 24, -16, 93, 10, 46, -60, 87, 118, 31, -88, 80, -75, -125, 11, -68, -10, 55, 33, -11, 74, 105, 69, 87, -100, -81, -60, 16, 20, 61, 57, -93, 110, -64, 120, 95, 56, -31, 84, 85, -96, 23, 111, -4, -61, -75, -3, 37, -124, -86, -60, -126, -27, -5, -32, 63, -40, 4, 125, -42, -22, 4, 74, -91, 126, 6, 2, 42, -21, 120, 12, 39, -39, 74, 56, -24, -58, -42, 37, -46, 8, -44, -85, -103, 71, -78, 86, -55, -82, 63, -42, 9, -51, -39, 43, 101, -72, -24, 105, 24, -15, -1, -38, -22, -92, -29, 6, 19, -48, 78, 92, -79, -35, 66, -127, 13, -57, -110, 106, 8, 61, -24, 75, -98, -96, 116, 51, -39, -35, 19, -64, -126, -125, -95, 102, -97, -67, -41, 61, -22, -127, 97, -48, 49, -115, -43, 38, -92, 9, 37, -34, -59, -15, -61, 46, 86, 120, 52, -61, 23, -60, -57, 30, 89, 106, 106, 64, -68, -51, 33, -108, 87, 78, 48, -11, 76, 8, 52};
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
    msg.setTimeStamp(0.27764854488);
    msg.setSource(33439U);
    msg.setSourceEntity(33U);
    msg.setDestination(34928U);
    msg.setDestinationEntity(159U);
    msg.seq = 3745806452U;
    msg.state = 63U;
    msg.error.assign("CTDKJIBYSPTEWXVWCWXOLFXKTHXTESRBABWDYWEJKPQOUQUGJMFJFPUHKRWQVAUYFQTMZZBBLPGAHGWZWRIRTMXVDYALAKNUCQQAPEOPSRCCMVGBRMHCHNLSVIODZIXKBVGMYNAZSLGGPEZDDHQPXXKCRNVUTBMQNYOAPZOPGFHFDQUOVESCCBYISM");

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
    msg.setTimeStamp(0.764462226327);
    msg.setSource(33739U);
    msg.setSourceEntity(152U);
    msg.setDestination(54223U);
    msg.setDestinationEntity(186U);
    msg.seq = 1077413790U;
    msg.state = 85U;
    msg.error.assign("BBZANGRUKWRODFIROAGDFAOYMTLKDHLRVXWMYINXRLGUVCVHJCQEKVUWJYHOGAHNQCJKSVMASMPIIBEWLKTCCMXBFFZSRQOOPVLXEEQPTNDEATEMPNBIDETNEKWKWCOUAZGUGULIBJNTQMKBMFHPYSPTPDFKXHJLZRHOBHMVT");

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
    msg.setTimeStamp(0.833189000377);
    msg.setSource(3552U);
    msg.setSourceEntity(138U);
    msg.setDestination(41600U);
    msg.setDestinationEntity(183U);
    msg.seq = 1320858491U;
    msg.state = 17U;
    msg.error.assign("FFAITSQIJOIWHCTSTYCDHSWMGTOSDEQBWOQCDMGDMPMLCETCOWXDYOGJUZUXMFNJHJAPRBOU");

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
    msg.setTimeStamp(0.693124193905);
    msg.setSource(2118U);
    msg.setSourceEntity(192U);
    msg.setDestination(36926U);
    msg.setDestinationEntity(33U);
    msg.origin.assign("KROIIXLEIBLCFDGUHXXKGCVHQYPSPVOEXXMZQFTEWETPFDFQMUIOYSVEXHQOBDYMLCHVGDKGHSAVPYZFLYTQZOBGJWHXNRZLKSBCZCKOBMHKCDXANEUWNREZGYJKVVBWQUMWSNJTAZBRUATPKFIOYNLZYVJMMSJYCLTJRXLZLAPKTQFETDPCN");
    msg.text.assign("LUXITKAVOLUIMVRFDCAYWJDHFNZPZQDBHOIFEQKBPBLGQPIAVGPIOEHNBVIYJJVGHXMHXMNAVLPTYEGCHNRGQOLBEFDWNRXWSKSJWJSOTQGZBQBCUDSQKLXOVDJDAYSMWZMNLCGDXVCYR");

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
    msg.setTimeStamp(0.658735066277);
    msg.setSource(16844U);
    msg.setSourceEntity(134U);
    msg.setDestination(51870U);
    msg.setDestinationEntity(61U);
    msg.origin.assign("NFFIRWTFAORUMMJBDZHWG");
    msg.text.assign("XFHIXQHDOIVLBDXOTJKYKYUOBDCMKEWGEIXXMVPVRZCUVQPJRAIEONUVGAKDSMKATYKTDSPMTCSSZALLOJGTWHYGZQQJFAOGNJCFYKNGWJAC");

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
    msg.setTimeStamp(0.209348780988);
    msg.setSource(56464U);
    msg.setSourceEntity(132U);
    msg.setDestination(64126U);
    msg.setDestinationEntity(95U);
    msg.origin.assign("AFMQYDKUCNLGQP");
    msg.text.assign("DWMQTLDHPQGFWUQMBNRWTSZTARXWWYBWVVPRXTOHCQNRZYJNVFKNXKJWREZOWSZXUAHEDACPLGPJCHURKHSUEDDUYEOFNDGDRFWUTUSILIEYEVCJXIUITOKDGEYBDGLYSHVLKQOATJNPRFLYYHMPXNHFMHIEZCKGBPTUAD");

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
    msg.setTimeStamp(0.899931338751);
    msg.setSource(9226U);
    msg.setSourceEntity(203U);
    msg.setDestination(10553U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("IOKZCYSKRIMHFNMXNMHBAVVNUKXSWABQIQUGELFUNMKRCTXJDJESKFPXXJWZZDATYLVQVCLOQEOCQGPSDDLYXFHTMFQYHAVGRGRMIKJLKAUUZCWD");
    msg.htime = 0.98203056084;
    msg.lat = 0.628250951343;
    msg.lon = 0.273966084953;
    const char tmp_msg_0[] = {28, -68, 20, -50, 79, -68, -35, -3, -57, 52, -52, 58, 93, -24, 116, -3, 44, 23, 15, 80, 50, 29, 105, 59, -26, -74, 72, 65, 22, -85, -43, 0, 17, -37, 39, -62, -45, 59, -94, -7, -86, -102, 29, -24, 117, -22, -39, -84, 26, -126, 58, -128, 72, -120, -93, 58, 5, -54, -17, 22, 124, 126, 52, 105, 121, -116, 54, 98, -99, -24, -33, 116, -52, -65, -94, 9, -9, 61, 52, -18, 67, 6, -2, 51, -55, 32, -30, -28, 61, -86, 67, -35, -81, -104, 89, 125, 51, -47, -47, 66, -7, -59, -74, 117, 117, 65, -71, -48, -55, 88, 35, 2, 60, 18, 77, -42, 51, -106, -123, 53, 126, -21, 21, -67, 103, -40, -41, 84, 34, -68, -63, 11, 13, -98, 93, 35, 40, 28, -42, -123, -55, -26, 116, -61, -101, 125, 58, -97, 1, 17, -87, -78, 115, 76, 13, -85, -15, -126, 87, -65, -38, -60, -45, 28, -78, 15, -53, 91, -62, 20, -93, 117, -120, 14, -37, -4, 106, 1, -77, 89, 63, 13, 43, -42, 93, 25, -25, 43, -50, 61, 117, -98, 123, 15, -97, 62, -127, 109, -9, -20, 92, 20, 36, 58, -63, 48, -93, 80, 95, -109, 2, 66, 29, 46, -27, -49};
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
    msg.setTimeStamp(0.192142607153);
    msg.setSource(30418U);
    msg.setSourceEntity(237U);
    msg.setDestination(60423U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("EFSTXNTAHBFQMBXYGMXGGPDNTXIJYIWHSKJSMHGQTDESFHDOIGVLYIJFVQWCQDXTDZRBVZGCKYTLUNDYYOTOLLTFMRRKRHRLCUMWGPPWAZRMCSEUDHWUJKWCXJEGCAWICCUKCXELKQVP");
    msg.htime = 0.622810826964;
    msg.lat = 0.951093304333;
    msg.lon = 0.32694985635;
    const char tmp_msg_0[] = {-101, 70, 5, -63, -93, 86, -69, 108, 69, -61, -58, 108, -79, 86, -91, -119, -95, 18, 63, -6, -36, 41, -34, 35, -128, -107, -24, -110, -49, -103, 70, 59, 41, 35, -107, -48, 77, 100, -12, -69, -126, 115, -61, -91, 10, 92, 32, 12, 92, -65, -60, 86, -117, -13, 99, -76, 11, 83, 47, 10, -63, 2, 69, -113, 56, -60, -76, 96, 81, -65, 102, 115, 122, -36};
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
    msg.setTimeStamp(0.67340753359);
    msg.setSource(4858U);
    msg.setSourceEntity(252U);
    msg.setDestination(43843U);
    msg.setDestinationEntity(142U);
    msg.origin.assign("MQYBCEJTMKZHPODKYSMIXHQUFOGGGYIWXCLTMFJLZPKWNABZDKQUXPHLZIWQKDSYJRNMDPUOFHODAUCAZOMMVWOFYEDVVW");
    msg.htime = 0.429319843465;
    msg.lat = 0.0570931560741;
    msg.lon = 0.0572962314756;
    const char tmp_msg_0[] = {120, 90, -26, 98, 90, -11, -66, -53, -98, -64, -26, -23, 35, 17, -56, -108, 73, -40, 103, -68, -94, -96, 16, 114, 20, -3, -71, 78, 1, -28, -116, -79, -107, 107, -83, -6, -106, 96, -32, 7, 6, 91, -95, 125, 22, -115, 9, -126, 17, -39, 90, 100, -108, -112, 115, 42, 42, 30, -80, -53, -11, -95, -3, -62, -121, 126, 125, 78, -17, 118, 37, -85, -6, 75, 54, -65, -101, 12, -20, -52, -92, -75, 4, 20, -34, 101, -91, 114, -36, 80, 99, -73, 87, 121, 100, -38, -19, 103, -3, 10, 119, -72, 39, 22, 12, 81, 70, -40, 91, -22, 116, 103, 91, 110, 22, 43, -38, 98, 38, -63, -80, -52, -67, -9, 58, -5, -71, -55, -80, -62, 50, -95, 36, 68, 25, -26, 61, 49, -50, -111, -40, 47, 63, -57, 49, 125, 52, -46, 35, -52, 70, 26, -89, 68, 38, 16, 19, 119, -79, -75, 64, 96, -116, 101, -54, -99, 9, -63, -55, -67, 39, 7, 9, 113, 76, -78, 35, -85, 2, -114, -61, 114, 25};
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
    msg.setTimeStamp(0.538603896644);
    msg.setSource(38730U);
    msg.setSourceEntity(99U);
    msg.setDestination(12918U);
    msg.setDestinationEntity(55U);
    msg.req_id = 28837U;
    msg.ttl = 36270U;
    msg.destination.assign("NDYJKTTTUARTWHXMVQIGVAQVQCFMZWSRPZIGIYTLREQXRCPUKPCCWEHLUCNLDBGSYPMHVXFIWZOMKQWJLCNNVEIUZOTDOGRKEPDXLSBYTHUAHXHQZOSSOMHOZHXYDFAUIFOAXVBBHMNXKYNKSBJQRFZADABVXYRLMFISIMAJLWGSKYSZESDFAOZGIJGDRVBHETWOERBLWLVXFWD");
    const char tmp_msg_0[] = {-98, 47, 126, -81, -28, -65, -19, 52, 112, 31, -102, -39, 76, 36, 4, 111, -126, 102, -46, 54, -27, -95, -105, -27, 87, 5, 80, -58, -38, -36, -102, 123, -121, -116, 37, 11, 42, 46, -17, -101, 71, 106, 38, 28, -76, -99, 0, 73, -93, -107, 3, 122, -12, -84, -96, -77, 122, 114, -48, -29, -8, 39, 79, -93, 37, 119, 4, 71, 72, -86, -67, -123, -101, -27, -33, -42, 122, 82, -16, -50, 63, 71, -50, -4, -50, -128, 80, 99, 44, 38, -113, -48, -113, 58, 122, 89, 25, -55, 59, -12, 33, -25, 125, -84, 86, -4, -119, 115, -19, -41, -107, -77, -43, 102, -53, 104, -101, 29, -70, 85, -26, 26, -77, -13, -56, 55, 66, 36, -125, 121, -115, 72, 121, 21, -15, 11, 112, 83, 41, -66, 109, 73, -5, -77, -38, 80, 18, 90, 99, 115, -89, 3, -77, -74, -7, 34, 83, -124, 45, -3, 16, 53, -127, -102, -121, -50, 56, 35, 101, 8, 61, 57, -73, -57};
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
    msg.setTimeStamp(0.453342579524);
    msg.setSource(41062U);
    msg.setSourceEntity(210U);
    msg.setDestination(59982U);
    msg.setDestinationEntity(95U);
    msg.req_id = 10882U;
    msg.ttl = 61080U;
    msg.destination.assign("KJGATAZYIMZRALJAJKYMHLISBCBHUQXYFRXGUAFACHNTGTMEHDWWVIPVCRUSLPJPYBZXZWPUMVHLFHKKHNULRBDVSOWTPFRFDUFZNSZRGEVPJGMOGLSQVBWDBEJDRIQKUAPWQOINEWFKEUMCQPDQCGTMRZEKBOYFSNMICJZANTOYNUNDMZWTKXHQQDTXEJLPVVBTIQKJKFLRYFIEG");
    const char tmp_msg_0[] = {-102, 46, 74, -76, 12, 124, -122, 34, 77, 49, -18, -116, 40, 8, -49, 69, -3, 102, -99, 52, 22, -23, 107, 19, -90, -77, 30, 24, 102, 97, -93, 21, 69, -78, -94, 26, -56, 91, -67, 105, 99, 58, 60, 63, 9, 8, 111, -36, 79, -40, -120, -58, -33, -20, -57, 42, 26, -109, -93, -49, 70, -12, 45, 55, 120, 30, -42, 109, -48, -108, -124, -29, 126, -125, -53, -49, -90, -29, 14, 63, 24, 89, 124, -52, -91, 66, -99, 70, 0, -115, -73, 43, -102, 110, -76, -116, 81, -102, 78, 92, -5, -97, 36, 27, 47, -9, -27, 67, -78, 90, 9, -18, -97, -10, -106, -12, 96, 58, 110, -69, -41, -36, 109, 73, 9, -47, 8, 47, -116, 82, -23, 114, -64, 61, 120, -8, -64, 17, -99, 97, -73, -12, 108, 99, -125, 30, 50, 38, -9, 92, -82, -84, -14, -95, -61, -98, 46, 3, 121, -114, -12, -86, 16, -108, -23, 39, -51, 16, 48, -98, 51, -114, -50, -109, -111, 21, 110, 11, 39, 25, 7, -29, -115, 17, -93, 18, -15, -47, 44, -59, 16, -90, 8, -31, -3, 94, -84, 47, 75, 105, 116, -103, 95, -87, -41, -101, 7, -113, 73, 1, 64, 12, 48, 73, 101, 65, -116, -82, 68, 28, 72, 1, -79, 98, -82, -16, 18, 54, 60, -99, 82};
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
    msg.setTimeStamp(0.69005261166);
    msg.setSource(63608U);
    msg.setSourceEntity(216U);
    msg.setDestination(17768U);
    msg.setDestinationEntity(126U);
    msg.req_id = 43849U;
    msg.ttl = 51498U;
    msg.destination.assign("RHPOLMMZLTBWNSGNUAHWKJXRSLUMTODFYKODFQRNFSLHWMMOGLCRPHJBPVCFEYLJQRNUBBODXEFOVMGFBSQINIERKEQMLIPXNQNTYJZCJGRBARDIZSEVDVOKADACABHNKPQZPGLAJSQGGBGIWDCYYXACGVJEYPMVFBZSZHTDDOPOXNQPCHSUWLJKCVWTPMVYYRQRBFUHCIGIZZWKWDUUETAQIW");
    const char tmp_msg_0[] = {114, -44, 104, 40, 125, -82, -94, 116, 51, -112, 41, 46, 120, 20, -97, -86, -7, -122, -65, 60, -20, -29, -47, 100, -57, -22, 32, -47, -84, 20, -12, -58, -9, 41, -92, -50, -111, -20, 43, -122, -34, -2, -54, 116, -65, -18, -32, -42, 109, -18, -107, 97, -5, -103, 14, 121, -103, -81, -89, 36, -110, -126, -104, -80, -54, 69, -22, 26, 60, 49, -44, -106, -2, 122, -39, 83, -57, -14, -121, 123, 1, 62, -31, 53, -102, 110, -8, -44, 61, 36, -99, 67, -62, 83, 121, 63, -58, -81, 24, 118, 22, -66, 67, -18, 106, -68, 55, -77, -4, 45, 22, -117, -84, 4, -88, 14, -27, -18, 32, -76, -59, -2, 117, 66, 76, -22, 28, -101, 82, 99, -28, 32, 123, -10, -73, 101, -2, 40, -76, 123, -36, 106, -47, 49, 12, 11, 93, 78, -100, 117, 105, -60, 46, -14, 84, -16, 59};
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
    msg.setTimeStamp(0.187937766894);
    msg.setSource(1476U);
    msg.setSourceEntity(3U);
    msg.setDestination(31812U);
    msg.setDestinationEntity(93U);
    msg.req_id = 15404U;
    msg.status = 240U;
    msg.text.assign("BPZPEVUZXOCUCANACSLNAHSEORMIYGDMUNSTGWGKVYOUXMOJNVALJZTDHINDXARJNGMOKBTPNKJAQPLRDRWBPLULEUEYRATKVIQSGITCJXIAKQDHUQHNHOLZITQMEXUWDFPKEQYXEWVGKRXMSTZVBEBCYQXYBHMQJCXWPVFBOIKWRSNYSCBWWDDFFFZQLDYPBSWJDAURMZTFSKIPTZGAZEZJMY");

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
    msg.setTimeStamp(0.494866505489);
    msg.setSource(57754U);
    msg.setSourceEntity(197U);
    msg.setDestination(31461U);
    msg.setDestinationEntity(125U);
    msg.req_id = 14221U;
    msg.status = 104U;
    msg.text.assign("DWJZSNTUAMUXCAUBTYZKXAWPNOKFXEGMTVAJCLBAJFDCITIGNOXQHMYZLZZKWFYPTXKVEPUVVCGJTMZPTEKAWHQRDZCIXPKXWXHEJMORBKQDYUDZZLRILNCIESYORSNDUQBSYCGMAMKLOHQFRJHVGJTQNMSSWWEVFUMEYOTPFDPSQYLBGRFPMZROTAODRVOCCPXBFOKGWIHIJGHEIGYJULHQNRWH");

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
    msg.setTimeStamp(0.76816967032);
    msg.setSource(7137U);
    msg.setSourceEntity(9U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(26U);
    msg.req_id = 1288U;
    msg.status = 55U;
    msg.text.assign("FCFYSIQJBXGGKYQOEXFMUJOLLAZJPSAG");

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
    msg.setTimeStamp(0.213495667596);
    msg.setSource(35902U);
    msg.setSourceEntity(50U);
    msg.setDestination(57057U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("YLBPXAONQTPRQZNVOIQSETJOSHAVLMTESUPWHTSJDEWWWHRRLBGGIQFXJLZJBCBNERQZSVJLTPJIFZNRYTZQLJJRONATQDDTXKWAVOZQEZFHMFEKIGBZCZNMHWGBOADMAJVWRLHMSOPIEBKAGRYOUZMXDUISAMTUCUYXHFR");
    msg.links = 3390282733U;

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
    msg.setTimeStamp(0.218604042531);
    msg.setSource(42811U);
    msg.setSourceEntity(27U);
    msg.setDestination(56602U);
    msg.setDestinationEntity(143U);
    msg.group_name.assign("VUDYVXTXQDOQDYSHPUQMHRMQBROMACKDZXXJNZJWAKHSZMZBXLJEHVPYJNFSPCVKROZHRXBWDGKHRHRGEENOUALEIKBGWTMUVAIIZRFKSNU");
    msg.links = 3835003068U;

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
    msg.setTimeStamp(0.421847908115);
    msg.setSource(1700U);
    msg.setSourceEntity(108U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("THNYNYXWIAQNSEQSTSGBODLPLCPLJYMXUSSWGYSERWOKXGHQMCWMNGRZLD");
    msg.links = 376612906U;

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
    msg.setTimeStamp(0.921663720961);
    msg.setSource(57123U);
    msg.setSourceEntity(48U);
    msg.setDestination(32323U);
    msg.setDestinationEntity(7U);
    msg.groupname.assign("ZKFLQACYBUIVUKFKBSQFVCBNRK");
    msg.action = 78U;
    msg.grouplist.assign("BPFLZCIBQUZNDJVZIISWNYHSFORPWAVPZSHTNOWMKFYZMDHNPXGIXQUGAKXFZQKLTNFUECJIFGGQBQNKPXDCMLSUNQIHQVCAYTSDJRAAXBTGTXHMPKLNSGWDMXSHOWRVAIQUPOPKHCNTBRYQYDUWGVHDLRZNRPEVAXCSJYFHVWJOROEXGMCARDTEXBZVBEITELLBGLCJGJEKDFBROAKWTYY");

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
    msg.setTimeStamp(0.274174575409);
    msg.setSource(7856U);
    msg.setSourceEntity(33U);
    msg.setDestination(39391U);
    msg.setDestinationEntity(135U);
    msg.groupname.assign("DVQULFLKXBIRULZPDHIHWLYJITLOXIKHBHRKEYNMEJMFWQAFSPSPMANCNCBTWEVNABGFKCUSBMCKHEMOUIQDKNAZQHTXPFUTRLXGYOZLJTGCWYXNFEMSLTOQTJEYKPYWLGIPXOKZUBHELMAJDORS");
    msg.action = 219U;
    msg.grouplist.assign("TUEZEVAYKHCFMAXGBGVGTIVNBXZFOJWOHWRWNAMCRDOLCOEVWKBYKWSBYPQPRGVWNLKKUDFMXDGXVIHTOMNNVBKRFJSJTEFMLHESZNLCRMRSQLAEDEDQWTHQIJZSGZCXBQMUIKPUTFVWPCHIMWIYLLFPUPFQCKACLMAUAEKWJNTSOHEJYIPSPAGPHJYDRHUZOZXXAIGRIRYTZJBKDIJ");

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
    msg.setTimeStamp(0.754991698571);
    msg.setSource(51517U);
    msg.setSourceEntity(31U);
    msg.setDestination(54302U);
    msg.setDestinationEntity(231U);
    msg.groupname.assign("DKVBFPRESVSTYXRONJQBNKPQYVPTXRZZPNXVZEJCNVFHQUCMQTUOQFKVSWWDGNQKEODTGJIITWDBXLCBIYITRUZRALMULAERUEHNKRZDMHCBEDWLEUOUILEKFJXAAFYQNVMXMFBAGBNTWQOLOBSYZFGEPHOTOJANDGUYSIIPMJHDZSWYBQUZCNQKPGWMAYRXPVSOAHJHCVFCVWSGCILRMPHJGJWIYGETLLIXAJSDCBZYAZ");
    msg.action = 173U;
    msg.grouplist.assign("WNWJHTIGJTCMCGXIQDDYARDUDSIVUL");

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
    msg.setTimeStamp(0.669783586971);
    msg.setSource(57931U);
    msg.setSourceEntity(208U);
    msg.setDestination(62848U);
    msg.setDestinationEntity(52U);
    msg.value = 0.513084072556;
    msg.sys_src = 60362U;

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
    msg.setTimeStamp(0.211857940728);
    msg.setSource(65202U);
    msg.setSourceEntity(200U);
    msg.setDestination(48692U);
    msg.setDestinationEntity(254U);
    msg.value = 0.591168512029;
    msg.sys_src = 42382U;

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
    msg.setTimeStamp(0.959011367707);
    msg.setSource(35947U);
    msg.setSourceEntity(195U);
    msg.setDestination(20079U);
    msg.setDestinationEntity(189U);
    msg.value = 0.119611503055;
    msg.sys_src = 47969U;

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
    msg.setTimeStamp(0.952540925776);
    msg.setSource(1306U);
    msg.setSourceEntity(46U);
    msg.setDestination(45837U);
    msg.setDestinationEntity(220U);
    msg.value = 0.447319021193;
    msg.units = 68U;

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
    msg.setTimeStamp(0.347049141811);
    msg.setSource(58783U);
    msg.setSourceEntity(248U);
    msg.setDestination(41481U);
    msg.setDestinationEntity(207U);
    msg.value = 0.957347516437;
    msg.units = 101U;

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
    msg.setTimeStamp(0.656745430296);
    msg.setSource(6202U);
    msg.setSourceEntity(44U);
    msg.setDestination(4865U);
    msg.setDestinationEntity(39U);
    msg.value = 0.855084790999;
    msg.units = 178U;

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
    msg.setTimeStamp(0.0660074350077);
    msg.setSource(34026U);
    msg.setSourceEntity(182U);
    msg.setDestination(54887U);
    msg.setDestinationEntity(202U);
    msg.base_lat = 0.0368676646553;
    msg.base_lon = 0.291485729235;
    msg.base_time = 0.137139531965;

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
    msg.setTimeStamp(0.935653102593);
    msg.setSource(770U);
    msg.setSourceEntity(207U);
    msg.setDestination(45598U);
    msg.setDestinationEntity(243U);
    msg.base_lat = 0.0712066832419;
    msg.base_lon = 0.150608654451;
    msg.base_time = 0.201444944303;

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
    msg.setTimeStamp(0.0509237689714);
    msg.setSource(51260U);
    msg.setSourceEntity(77U);
    msg.setDestination(41696U);
    msg.setDestinationEntity(118U);
    msg.base_lat = 0.926149153304;
    msg.base_lon = 0.103554369277;
    msg.base_time = 0.233458180029;

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
    msg.setTimeStamp(0.987511087564);
    msg.setSource(55080U);
    msg.setSourceEntity(137U);
    msg.setDestination(24456U);
    msg.setDestinationEntity(183U);
    msg.base_lat = 0.597928840586;
    msg.base_lon = 0.616576342838;
    msg.base_time = 0.675657172828;
    const char tmp_msg_0[] = {-85, 114, -41, -103, -79, 28, 107, 116, -9, -87, -104, -89, 6, -120, -93, 31, -47, 43, 94, -62, 76, -109, -25, -54, -117, -83, 110, -37, -120, -94, 85, 57, -7, 91, 121, -111, 8, -29, -105, 59, 2, -1, -100, 110, 31, 41, 95, 125, 3, -5, -33, -93, -101, -24, 104, -120, 28, 20, 79, 76, -49, -29, 41, -78, 42, -40, -52, -121, 6, 23, 28, 69, 65, -20, -77, 98, 78, 7, -46, -98, 52, 77, -83, -96, -35, 13, -22, -7, -93, 54, -44, -64, -53, 89, 62, 114, 49, 22, 95, -70, -51, 110, -98, 103, 77, 125, -26, 16, 14, 95, -110, -55, -52, 7, 20, 117, -98, -28, 44, -105, -104, -82, -104, 107, 117, -80, -108, -107, 85, 27, -101, -95, -44, 93, 49, 94, -18, 123, 23, -90, 27, -99, 56, 39, 92, -120, 53, -82, -2, 7, -58, 7, 46, -19, -42, -119, 13, 69, 92, -55, 58, -59, -122, -88, -26, -29, 104, -21, 115, -49, 36, 65, -54, 36, -10, 31, -107, 17, -103, 126, 114, -128, -35, -75, -58, 50, 0, 93, 42, -121, 4, -83, 3, -87, 63, 53, -15, -119, -111, -43, 90, -51, -77, -11, -26, 125, -102, 40, -34, -111, 28, 49, -69, -41, -39, 91, -115, 108};
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
    msg.setTimeStamp(0.518799637385);
    msg.setSource(10926U);
    msg.setSourceEntity(162U);
    msg.setDestination(16395U);
    msg.setDestinationEntity(12U);
    msg.base_lat = 0.377976604367;
    msg.base_lon = 0.885685552301;
    msg.base_time = 0.804170210323;
    const char tmp_msg_0[] = {-112, 50, 23, 12, -86, 0, -108, 70, 6, -4, -113, -46, 9, 31, 80, 91, 93, 100, 69, 85, 15, -85, -87, -113, -16, 98, 56, -82, 17, 27, 75, -4, 87, 65, -99, 62, 4, 125, -21, 44, 87, 58, -88, -74, -51, 43, -80, -113, 54, 58, 65, -102, 36, -56, -98, 51, 1, -48, -33, 21, -13, -19, 26, -44, -94, -13, 33, 103, 54, -126, 98, 84, 36, 19, 45, 63, -2, -42, 37, 40, -33, -61, 57, -121, -49, 119, -48, -65, -6, -78, 97, 12, -61, -18, -96, 90, 66, 23, -102, -53, -10, 100, -116, -122, 52, -111, 109, -71, 4, 120, 78, 19, -31, -15, -127, 36, 84, -113, -8, 5, 119, 44, 4, 36, 73, -49, -92, 63, 121, 51, 120, 116, -50, -111, 39, -87};
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
    msg.setTimeStamp(0.0589499352693);
    msg.setSource(52385U);
    msg.setSourceEntity(17U);
    msg.setDestination(26604U);
    msg.setDestinationEntity(19U);
    msg.base_lat = 0.116905624098;
    msg.base_lon = 0.782910033615;
    msg.base_time = 0.598968347499;
    const char tmp_msg_0[] = {84, 0, -114, 25, 5, -5, 61, 87, 118, -98, -7, -17, 38, -50, 123, -74, -108, -96, -61, 118, -50, 52, 98, -99, -29, 43, -84, 5, 62, -35, 32, 9, 43, -39, -123, -60, 32, 50, 1, -122, -124, -11, 14, -76, 37, -70, 31, -28, -52, -43, 52, 36, -1, 63, -51, 69, 66, 24, 93, 85, -108, -40, 78, 56, 66, -44, -41, -126, -27, 58, 48, 106, 14, -1, 118, 0, -102, -52, 25, -123, -110, -91, -124, 60, 66, 32, 112, -53, 124, -115, -11, 101, 92, -69, -61, -13, 12, 41, 72, 84, 84, 57, 12, 0, -127, -33, -128, 2, 109, -58, -18, -80, 104, 107, 37, -73, -91, 54, 3, -25, -116, -98, -96, 98, 2, -82, 94, 48, 115, -23, 52, 72, 34, -33, 37, -19, 107, -68, -63, -77, -76, 6, -36, -103, 10, 54, 6, 98, 92, 77, 39};
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
    msg.setTimeStamp(0.447278166079);
    msg.setSource(63193U);
    msg.setSourceEntity(244U);
    msg.setDestination(56911U);
    msg.setDestinationEntity(245U);
    msg.sys_id = 51953U;
    msg.priority = 3;
    msg.x = -3051;
    msg.y = 19511;
    msg.z = -5322;
    msg.t = -4897;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 18407U;
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
    msg.setTimeStamp(0.756411544594);
    msg.setSource(23495U);
    msg.setSourceEntity(66U);
    msg.setDestination(2951U);
    msg.setDestinationEntity(236U);
    msg.sys_id = 30776U;
    msg.priority = 70;
    msg.x = 21159;
    msg.y = 27728;
    msg.z = 30284;
    msg.t = 4530;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ISILLGGUPAMSBPRINYTZCXYSPQVCHXKTNQWUTMZIUALUIBJKSARTCMXDGPVFDGUIMELTNAJSMSVXKAYVEWUNOABHGIKTJEOHDCHSOBFOENLZVOXCZJKVPHXRVYAQLJYRQFVASFEMNQKFRFRGPVYVY");
    tmp_msg_0.predicate.assign("IIKMALGHGRZJUBDDRCWOJMNNAUNKRWLKCXMYIQPYJXHYEGVRTLNFMRPDFPOHSOFPRROJFCUQKCBTBAFQJQCJDNKOIZDUSUBJFHQPEVJETNWIHZQSVPOIGZTCGSMQKFECYQXEVGXVTYGWHPRZI");
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
    msg.setTimeStamp(0.382074325131);
    msg.setSource(46840U);
    msg.setSourceEntity(1U);
    msg.setDestination(9521U);
    msg.setDestinationEntity(242U);
    msg.sys_id = 64191U;
    msg.priority = 37;
    msg.x = -6806;
    msg.y = -29853;
    msg.z = -28944;
    msg.t = 1475;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 237U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("YDHOZFWDNYVVTBHJOWPMUFUWKEEAFKCKYOOCOOTYEQGQAUIVJZFNGVSCXQVOFXADURMCYNXZMETCMJPBWHJRDNSLXGBRHEPSVRSABNUQKCWGJXWTRUSTGHDNUOELEGYVCDXMIIPMPQQREPLDLSQSIRQ");
    tmp_tmp_msg_0_0.description.assign("HBLMMDDDUXIWTQWZHDBVUYPPBVAKLBVYZRUXFCINQKBNZEZQJEPAMRAOGHMKPJYZUYRVONGPJZXHIVAENIF");
    tmp_tmp_msg_0_0.vnamespace.assign("OFUMBYDNVXCGRFTYVJPZULZJDCYNWKOHUPGJMOTUNILBOPVFARTKISLAQTZXKKWEYPZBNSHHHCAJGCHDAMNMQXGWPIWFTBIRTOYVW");
    tmp_tmp_msg_0_0.start_man_id.assign("XUYSZLPIXTHZRXCFHWYCRRYYPCQUTIOK");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("CTPUQRVLFGOZCABMAAXMCSJWRFVFWGYNHOHPUHCINWUSGANVQQPEJDGCXNVZ");
    IMC::YoYo tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 13821U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.33051786994;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.594071042362;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.245555135797;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 51U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.amplitude = 0.0473774387816;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pitch = 0.688763047116;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.713759013746;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 243U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("JLXUMYXPQSDGQWTUYRPMOLKRTDHWFPDFXCFUGYWLZ");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::DesiredRoll tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.value = 0.920107178501;
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    IMC::PWM tmp_tmp_tmp_tmp_msg_0_0_0_2;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.id = 29U;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.period = 2362524313U;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.duty_cycle = 3351407927U;
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_2);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::ClockControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 93U;
    tmp_tmp_tmp_msg_0_0_1.clock = 0.355051928368;
    tmp_tmp_tmp_msg_0_0_1.tz = 41;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Distance tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.validity = 242U;
    IMC::BeamConfig tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.beam_width = 0.620125525702;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.beam_height = 0.857204928367;
    tmp_tmp_tmp_msg_0_0_2.beam_config.push_back(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_2.value = 0.0182120054869;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.188880032539);
    msg.setSource(12801U);
    msg.setSourceEntity(105U);
    msg.setDestination(19577U);
    msg.setDestinationEntity(253U);
    msg.req_id = 12029U;
    msg.type = 226U;
    msg.max_size = 55792U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.224787563184;
    tmp_msg_0.base_lon = 0.681464640815;
    tmp_msg_0.base_time = 0.484924148047;
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
    msg.setTimeStamp(0.472865393341);
    msg.setSource(5629U);
    msg.setSourceEntity(88U);
    msg.setDestination(38594U);
    msg.setDestinationEntity(11U);
    msg.req_id = 16640U;
    msg.type = 105U;
    msg.max_size = 12894U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.286889090871;
    tmp_msg_0.base_lon = 0.927282823587;
    tmp_msg_0.base_time = 0.446891454431;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 35678U;
    tmp_tmp_msg_0_0.priority = 55;
    tmp_tmp_msg_0_0.x = -32564;
    tmp_tmp_msg_0_0.y = 14487;
    tmp_tmp_msg_0_0.z = 21584;
    tmp_tmp_msg_0_0.t = -21305;
    IMC::Force tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.653750205877;
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
    msg.setTimeStamp(0.0105241148868);
    msg.setSource(15666U);
    msg.setSourceEntity(253U);
    msg.setDestination(15005U);
    msg.setDestinationEntity(154U);
    msg.req_id = 10523U;
    msg.type = 138U;
    msg.max_size = 17736U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.351580003461;
    tmp_msg_0.base_lon = 0.474045738588;
    tmp_msg_0.base_time = 0.869907669501;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 55221U;
    tmp_tmp_msg_0_0.priority = -65;
    tmp_tmp_msg_0_0.x = -29298;
    tmp_tmp_msg_0_0.y = 15414;
    tmp_tmp_msg_0_0.z = -7333;
    tmp_tmp_msg_0_0.t = 26050;
    IMC::UamTxStatus tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 33614U;
    tmp_tmp_tmp_msg_0_0_0.value = 164U;
    tmp_tmp_tmp_msg_0_0_0.error.assign("SPXTTKWVIYZSBKOQXPIJYDOEJRXRCLFPSBZAN");
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
    msg.setTimeStamp(0.671611013554);
    msg.setSource(19137U);
    msg.setSourceEntity(129U);
    msg.setDestination(36727U);
    msg.setDestinationEntity(33U);
    msg.original_source = 44059U;
    msg.destination = 14892U;
    msg.timeout = 0.910674444671;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.298753182791;
    tmp_msg_0.v = 0.241994520323;
    tmp_msg_0.w = 0.698063582601;
    tmp_msg_0.p = 0.0899491997044;
    tmp_msg_0.q = 0.346172673355;
    tmp_msg_0.r = 0.0609346711589;
    tmp_msg_0.flags = 241U;
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
    msg.setTimeStamp(0.178285857463);
    msg.setSource(62811U);
    msg.setSourceEntity(144U);
    msg.setDestination(11610U);
    msg.setDestinationEntity(117U);
    msg.original_source = 27474U;
    msg.destination = 38293U;
    msg.timeout = 0.902404611164;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 146U;
    tmp_msg_0.error_count = 191U;
    tmp_msg_0.error_ents.assign("WGZSSACYIZOPEMSUPQSTFIOJPTIZMUBTQDCFHYRYEXFTRNALBMGCLYKDDOZBVNDYACZXSEWEKYDIUOEKRWZIUSASHVRFAPRAOWFJDPMQHLGXYPHTLAOQYDRNQVHJCSQZJGZDKXRTTOQMKJLPVNKCNBBMXWVAGUNGGJJZM");
    tmp_msg_0.maneuver_type = 18137U;
    tmp_msg_0.maneuver_stime = 0.15126953962;
    tmp_msg_0.maneuver_eta = 50870U;
    tmp_msg_0.control_loops = 91131818U;
    tmp_msg_0.flags = 194U;
    tmp_msg_0.last_error.assign("XEBSUYKQUNZMUUNQMORYETHVWJANTSBWXYHONFBACSNNMAMJWTBQGJABJYODFUCYCLVMRTKDVOLQZSEGDKOEUIQGCWRCMPXHSJHDNKQITCWTXJLWXZIEYXGNTNGZSADCJVCDUXPIKLTULOCFEKCOXDAAQRHVLFFGIFFFZRWWMQAWRIRZONUHLPBXTAOQDGLMKSOVIPIKGPRBDDVYJAZVIEVBYYVXE");
    tmp_msg_0.last_error_time = 0.472434058005;
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
    msg.setTimeStamp(0.611049132187);
    msg.setSource(26497U);
    msg.setSourceEntity(204U);
    msg.setDestination(18194U);
    msg.setDestinationEntity(50U);
    msg.original_source = 12804U;
    msg.destination = 17919U;
    msg.timeout = 0.331196077812;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 3858U;
    tmp_msg_0.type = 200U;
    tmp_msg_0.max_size = 46615U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.358976539176;
    tmp_tmp_msg_0_0.base_lon = 0.824950348865;
    tmp_tmp_msg_0_0.base_time = 0.104288686368;
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.original_source = 21876U;
    tmp_tmp_tmp_msg_0_0_0.destination = 26403U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.959907162717;
    IMC::Acceleration tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.time = 0.545014233269;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.666857404156;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.52541060101;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.800255296977;
    tmp_tmp_tmp_msg_0_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.640672824507);
    msg.setSource(41511U);
    msg.setSourceEntity(26U);
    msg.setDestination(57700U);
    msg.setDestinationEntity(230U);
    msg.type = 17U;
    msg.comm_interface = 42233U;
    msg.model = 13747U;
    msg.list.assign("CSRRQCQVZZVXERFOKMQPSLKQROSRMNHNLVAHUNYBBSFLBTCDYEBCOCLYEQMPDJVGACAXXGHQWVNYTJWRFICSNWWDKZUFBZRTIGXYXTPIWFIQPQCAMSHWATOEGNJEYX");

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
    msg.setTimeStamp(0.567535844777);
    msg.setSource(21562U);
    msg.setSourceEntity(221U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(215U);
    msg.type = 202U;
    msg.comm_interface = 28307U;
    msg.model = 34960U;
    msg.list.assign("WSBCACMAMXCOBTCTTIHYWNNEFLZKGOFIWSKZKOGJJNURMRDHDZYYZENDIJYXUOEIJLWCXKMBOCRVXBHXJPVPSDQSFXLMVYKXPXYFEHLBTLJZFTNQNZRVBCDOJGKNZTWEOFFGNADSUSBDRRTEQLYIYMPANRHRLAGHIHOPCAWSVCQVEUVGBPESAIIYXSQUWLATGAUMZJWJGQ");

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
    msg.setTimeStamp(0.884149907912);
    msg.setSource(58885U);
    msg.setSourceEntity(30U);
    msg.setDestination(30892U);
    msg.setDestinationEntity(90U);
    msg.type = 135U;
    msg.comm_interface = 61748U;
    msg.model = 6685U;
    msg.list.assign("MGXTHFCPWLHPUAIQNPFHHGRQZNLNDWJIDETUJCPSUXGAWOKEZLQXJFNAVCTXGXELZJMBWKYDADVQGVILVFKPHYROOMUQBXBRYZUURWQAIFGURYWPBATASTITOCAHZSCYJYNDKFKWGTXYMQRMGILKCNWVJGSTDYFPJDVBZPLKKUWJSJICRRVNEEZALHBEVFIZIUJORDSSMLOTZPPZOMCLSXDBNGRNHEMSBIUXEYBQOHMQXWCOMTEQDAHVNO");

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
    msg.setTimeStamp(0.11353206074);
    msg.setSource(30944U);
    msg.setSourceEntity(42U);
    msg.setDestination(19714U);
    msg.setDestinationEntity(247U);
    msg.type = 9U;
    msg.req_id = 2563238192U;
    msg.ttl = 34782U;
    msg.code = 33U;
    msg.destination.assign("BURRARFSUZOCHIYTORRUPNDVOMVAMNVLOJHMEKCEMKXGCEWQQMLQLCLTZFKPVPDUFYXQYVQLXMPFNOLWKVHYUSDLIWEIXZIUUIUBMISRDMAAGWJXTBZEWNXZDCGTFSIKHCHWCPDVSPMKSNIBTHYKARAKWJDOHDBTAZNAPTIXQYVTZZOYCLRTYBOGXPZLBUEYDWZSQJBAURXQVHNKGOSKEPFGNJEGAWHSPEQFHIVCDJGYFMSEJBJXFOJTNLWQNB");
    msg.source.assign("CDKDYAACGZTUUSKSQPAHLHRVUWPCNIZSVMPVYFJQJJSWGKCZZXJJGJTKVYPBKYMYMZEKWGRLXOWYUICDPGYWAGHVTMHCVABYRFKLCDYQIMLXQXOPLUWTZQIGDBBBTNIEIPU");
    msg.acknowledge = 28U;
    msg.status = 249U;
    const char tmp_msg_0[] = {-6, -105, 27, -20, -88, -70, -46, 17, 80, -73, -36, -95, 16, -83, -106, -63, 111, -86, 103, -25, -20, -112, -89, -126, -52, 25, -99, 117, 45, -93, 68, 18, 88, -67, -51, 26, -85, 103, 76, 83, 34, 40};
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
    msg.setTimeStamp(0.0958819270264);
    msg.setSource(56900U);
    msg.setSourceEntity(66U);
    msg.setDestination(24030U);
    msg.setDestinationEntity(12U);
    msg.type = 111U;
    msg.req_id = 1592879659U;
    msg.ttl = 11809U;
    msg.code = 28U;
    msg.destination.assign("KKAUHRPEYRCKBCJYTLHACIPLJVVMKPAYEYHWZDKXQSQLWIUXCLJEYRXQSRPMBTFSRHJWWJZIFXTADOYXSKNGIRBFZEBYKKIJTDQDGLHWUBMZOAOUFKOLOOIYDVEKBNRHNWUCDSV");
    msg.source.assign("IINMBBUEXWGKQTWWZEZOQGTMGLJKJAKCESZNFZMPOAQPIGJBAHMUBYFRHYOKFZHNWGFQLZBTPHSGTKFMWUMSDXQAUGWJBJBEPUVFDOAAPHLJKQRYILLBIWLTTQRVGFDYINDNSRWZAROCL");
    msg.acknowledge = 63U;
    msg.status = 160U;
    const char tmp_msg_0[] = {-47, -109, -41, 42, -128, 11, -19, -67, 79, 55, -85, 8, 55, 104, 48, 72, -26, 126, -87, -97, 67, 125, -127, 47, -116, -22, -26, -118, -65, 123, -121, -22, 18, -8, 121, -93, -18, 29, 116, -81, -30, 75, 17, -31, 3, -19, 57, 52, -72, 31, -89, 40, -31, 80, -100, 2, 39, -83, 55, -86, -44, -98, 79, -93, 44, 3, -123, 23, -48, 88, 83, 58, 103, -38, 120, -39, 54, 90, 55, 103, 9, -72, 76, -19, -93, 115, 9, 72, 23, 108, 66, 72, -84, -103, 104, 64, -14, -39, 84, 107, 54, 11, 3, -117, 67, -4, 71, -22, -40, -122, 63, 55, -24, -16, -64, 7, -28, 73, -85, -104, 27, 50, -116, 63, 58, -20, -84, -99, 90, -59, 61, 67, 13, 29, -84, 38, -25};
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
    msg.setTimeStamp(0.366837728681);
    msg.setSource(53704U);
    msg.setSourceEntity(102U);
    msg.setDestination(1041U);
    msg.setDestinationEntity(83U);
    msg.type = 5U;
    msg.req_id = 2100480659U;
    msg.ttl = 58770U;
    msg.code = 21U;
    msg.destination.assign("KJHQWYCZQZVKXPPITLKWSRZUPCHETWOGEBBNTHDNUUNI");
    msg.source.assign("XOVKIOVUEURESKCXPRPDBPTKMKCQHIWNDPA");
    msg.acknowledge = 144U;
    msg.status = 249U;
    const char tmp_msg_0[] = {53, 80, 90, -106, -105, 89, -95, -109, -54, -112, 96, 97, -114, -54, 121, 113, 58, 19, 119, -71, -46, 62, -28, 32, 96, 48, 105, -121, -95, -84, -121, 2, 111, -3, -14, -98, -49, 12, -118, -12, 119, 77, 23, -92, -82, 88, 77, 58, -61, 87, -88, 33, 80, 47, -4, 11, -92, 51, -102, -60, 24, -91, 28, 3, 82, -105, -13, 120, -72, 70, -94, 2, -9, -38, 60, 16, -76, 30, 73, -32, 51, -43, 114, -33, -39, -117, 54, -105, -92, 28, -26, -76, -35, -37, -19, -86, 24, -97, -24, 68, -31, -111, 21, -51, -11, -84, 0, 106, -88, -30, 16, 123, -94, 117, -80, 111, -127, -43, 37, -65, -61, -124, -88, 33, 21, -11, 49, -89, 40, 119, -16, 42, -44, -77, -79, -32, -70, -78, -121, -1, -76, 74, -50, -90, -62, -9, -70, 74, -117, -1, -73, 105, 47, -112, 84, -122, 102, 91, -2, -31, 95, -105, -28, 58, 12, -126, -79, -37, -92, -91, -86, -65, 60, 48, 20, 5, 125, -16, -116, 49, 119, -100, 9, 95, 99, -128, -54, 21, 74, 61, 104, 95, 44, 25, -61, 106, -90, -20, -45};
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
    msg.setTimeStamp(0.700218892928);
    msg.setSource(43914U);
    msg.setSourceEntity(128U);
    msg.setDestination(48545U);
    msg.setDestinationEntity(208U);
    msg.id = 44U;
    msg.range = 0.428029904981;

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
    msg.setTimeStamp(0.221525905781);
    msg.setSource(3467U);
    msg.setSourceEntity(228U);
    msg.setDestination(47936U);
    msg.setDestinationEntity(4U);
    msg.id = 112U;
    msg.range = 0.205532479529;

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
    msg.setTimeStamp(0.448625324205);
    msg.setSource(19890U);
    msg.setSourceEntity(211U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(189U);
    msg.id = 94U;
    msg.range = 0.793250431502;

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
    msg.setTimeStamp(0.897077326815);
    msg.setSource(36596U);
    msg.setSourceEntity(182U);
    msg.setDestination(6565U);
    msg.setDestinationEntity(120U);
    msg.beacon.assign("INSAVMNWNELHGILSMVVUEFGXQJWYAZTZSFJYUVDGWZJHVCHBAWKSBOEATYEDYBUIRLCIUSIWOMBBWTPFFNKBDVUHULOJATPOTYLNDCFGXRGLZIEMBZQQCALNQLKGEJHPCTRZRGZQJCCSKTNLFJQRRFITVVUKSDOPYAGMSRQAKDHAIWWQRNXPYULMKJPXHYHXJUETXBPOENOSBCGRBKZNJPRKOMZXPODXHMECUSGKAYVYITIWQDWZDCODMFVP");
    msg.lat = 0.0626932971468;
    msg.lon = 0.91522845499;
    msg.depth = 0.149079630918;
    msg.query_channel = 93U;
    msg.reply_channel = 241U;
    msg.transponder_delay = 82U;

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
    msg.setTimeStamp(0.203541695188);
    msg.setSource(53010U);
    msg.setSourceEntity(79U);
    msg.setDestination(39879U);
    msg.setDestinationEntity(227U);
    msg.beacon.assign("KIYBQCIERHWEIFDLAXVGVQLL");
    msg.lat = 0.493168868932;
    msg.lon = 0.869343509103;
    msg.depth = 0.603314118164;
    msg.query_channel = 225U;
    msg.reply_channel = 77U;
    msg.transponder_delay = 62U;

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
    msg.setTimeStamp(0.370683704572);
    msg.setSource(49940U);
    msg.setSourceEntity(64U);
    msg.setDestination(15441U);
    msg.setDestinationEntity(216U);
    msg.beacon.assign("HECTGIUJQUYSANZKDZNFVSGSTRSSEYUUDKPJDTHCMHMQZXWXBGOIHMFPZYEKOBRQYJAEYOTVWIQMCLCKOMAGFSUORTFWLLTQVAOWZB");
    msg.lat = 0.0902407080535;
    msg.lon = 0.454714922259;
    msg.depth = 0.154268145801;
    msg.query_channel = 18U;
    msg.reply_channel = 190U;
    msg.transponder_delay = 236U;

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
    msg.setTimeStamp(0.230620719514);
    msg.setSource(62852U);
    msg.setSourceEntity(212U);
    msg.setDestination(52769U);
    msg.setDestinationEntity(85U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.448082403923);
    msg.setSource(44532U);
    msg.setSourceEntity(25U);
    msg.setDestination(28259U);
    msg.setDestinationEntity(51U);
    msg.op = 6U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QEZGRFJWLBIOZNXQMDTOGXCFGUKNWPROOJOMOJRDMQHAEHAQGRXSQLJUVUAGYBHCFMRPWZZJSYIDHMKBXEFWJDKUPNABYOBDNAHFZHRYMFPSLOTTATYIQVYPPJLKTTTVLMGPWBGZAIGEBJQOSIJIVVFECBXXFCOCSQKLUDVKCUDQFPUGAV");
    tmp_msg_0.lat = 0.0458395845326;
    tmp_msg_0.lon = 0.03415920407;
    tmp_msg_0.depth = 0.72992580496;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 16U;
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
    msg.setTimeStamp(0.608548981557);
    msg.setSource(51370U);
    msg.setSourceEntity(121U);
    msg.setDestination(54561U);
    msg.setDestinationEntity(254U);
    msg.op = 9U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FUIEFMZKMUJGDTD");
    tmp_msg_0.lat = 0.106432562155;
    tmp_msg_0.lon = 0.18027080961;
    tmp_msg_0.depth = 0.0854772913419;
    tmp_msg_0.query_channel = 219U;
    tmp_msg_0.reply_channel = 69U;
    tmp_msg_0.transponder_delay = 68U;
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
    msg.setTimeStamp(0.761113462422);
    msg.setSource(23834U);
    msg.setSourceEntity(28U);
    msg.setDestination(20821U);
    msg.setDestinationEntity(40U);
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 1U;
    tmp_msg_0.step_number = 53U;
    tmp_msg_0.step.assign("UIOEACWFRNMLZBTEYCVQPSNKKGPPHJYWPGCAJTHAMPYDPSYBUTAZGMVSSRPMJQDGKMSDYOIKIRZLQOPXTHHCFYRXGLLTEKDLSJOCLHIIIXNLJBHHIXZRQVPWNZNUCDKWBBWOOEKCRHJMGFZTDWNFEDWORDXVCP");
    tmp_msg_0.flags = 164U;
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
    msg.setTimeStamp(0.292411799297);
    msg.setSource(40998U);
    msg.setSourceEntity(83U);
    msg.setDestination(31584U);
    msg.setDestinationEntity(111U);
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.393369536001;
    tmp_msg_0.m = 0.406338415383;
    tmp_msg_0.n = 0.386946673643;
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
    msg.setTimeStamp(0.348704883897);
    msg.setSource(48057U);
    msg.setSourceEntity(29U);
    msg.setDestination(22316U);
    msg.setDestinationEntity(136U);
    IMC::ThrusterLoad tmp_msg_0;
    tmp_msg_0.current = 0.945904119387;
    tmp_msg_0.power = 0.332920178606;
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
    msg.setTimeStamp(0.212123309562);
    msg.setSource(54448U);
    msg.setSourceEntity(3U);
    msg.setDestination(53544U);
    msg.setDestinationEntity(37U);
    msg.op = 183U;
    msg.system.assign("KVXCUKTWQTTNRSIBDRTWQLYNWPMPWPSRZPLFXHFXLPVGFUIXOYRKZGIJRXOBMICQZSXJVXWBEZMAUOKYRHIHZBIHKWQUJPVLJSUBIZSEYWKJDSIEFNKWEBMV");
    msg.range = 0.157741649214;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 16509U;
    tmp_msg_0.status = 132U;
    tmp_msg_0.text.assign("DEWCBHWKPLJWVGLNNCRQOSCYCHRTHVMJBEIWTBDUXBYEAQPTDCACZKVPQHCCFLVESJFUEAMRZJAIOWVIRALMJBXVIIADVHBUMGJNGKAUXRVDSUE");
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
    msg.setTimeStamp(0.968792435848);
    msg.setSource(5350U);
    msg.setSourceEntity(76U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(161U);
    msg.op = 233U;
    msg.system.assign("FMXMHIZINSLVKDVEEFOQBTFNVGEVOOSOHFQUQBHZSRMCKJXHZJPKIBXA");
    msg.range = 0.195823512674;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3706262362U;
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
    msg.setTimeStamp(0.945962197148);
    msg.setSource(39827U);
    msg.setSourceEntity(26U);
    msg.setDestination(39849U);
    msg.setDestinationEntity(170U);
    msg.op = 3U;
    msg.system.assign("JAMEVKENGXJGXOZVOEGSHVGVXBWTLPURB");
    msg.range = 0.751598845593;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 1421498488U;
    tmp_msg_0.lat = 0.172093259879;
    tmp_msg_0.lon = 0.264199049296;
    tmp_msg_0.height_ell = 0.585579922098;
    tmp_msg_0.height_sea = 0.447425005805;
    tmp_msg_0.hacc = 0.383908728977;
    tmp_msg_0.vacc = 0.981772045076;
    tmp_msg_0.vel_n = 0.680056073592;
    tmp_msg_0.vel_e = 0.599567588809;
    tmp_msg_0.vel_d = 0.147431099576;
    tmp_msg_0.speed = 0.290000674019;
    tmp_msg_0.gspeed = 0.201689796784;
    tmp_msg_0.heading = 0.950076624919;
    tmp_msg_0.sacc = 0.348228879901;
    tmp_msg_0.cacc = 0.901093811166;
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
    msg.setTimeStamp(0.789279824921);
    msg.setSource(58693U);
    msg.setSourceEntity(132U);
    msg.setDestination(64827U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.399441534445);
    msg.setSource(33197U);
    msg.setSourceEntity(231U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.445299580599);
    msg.setSource(44739U);
    msg.setSourceEntity(56U);
    msg.setDestination(7570U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.220751235261);
    msg.setSource(31247U);
    msg.setSourceEntity(180U);
    msg.setDestination(54366U);
    msg.setDestinationEntity(178U);
    msg.list.assign("LOGZXMEVHFSVLKIATARSLSYJSH");

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
    msg.setTimeStamp(0.899331513515);
    msg.setSource(13954U);
    msg.setSourceEntity(251U);
    msg.setDestination(19325U);
    msg.setDestinationEntity(9U);
    msg.list.assign("BVPDPWYFZGRCJJHVYPYPUKSMFNDLXUOXWWSYONIZLBVZAMRCJHHYJZABBREMQNIFJLMPMVOQUBTGOPTNAUVZBHOWW");

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
    msg.setTimeStamp(0.635329621148);
    msg.setSource(8144U);
    msg.setSourceEntity(210U);
    msg.setDestination(23969U);
    msg.setDestinationEntity(89U);
    msg.list.assign("EJHGEPESDINBGMQOBHSWWRUHOMNHJAOOFLKOEFMMGCMUFKHIZAPATPTDTWSRZJLYXJCDOAZADSSCYJPGSJGGCAIIFVYVYWFAPDCQWBILEFCJXSRWMINISBKHBLDLRLRTXGKBNUEAUMDFZYSJXVCZNTVYLUQOCVXRMRMKJMDQIPCSGILVYVQZUXVWPUNQVNXTZZHXCE");

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
    msg.setTimeStamp(0.750505060652);
    msg.setSource(41565U);
    msg.setSourceEntity(205U);
    msg.setDestination(27592U);
    msg.setDestinationEntity(52U);
    msg.peer.assign("OVQJYDJZTSLMJU");
    msg.rssi = 0.846788313693;
    msg.integrity = 18685U;

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
    msg.setTimeStamp(0.90873006096);
    msg.setSource(13314U);
    msg.setSourceEntity(4U);
    msg.setDestination(5066U);
    msg.setDestinationEntity(161U);
    msg.peer.assign("AXDIGWUEXEAFKLFBYCCQJEZOXCSHDCVKSSAEL");
    msg.rssi = 0.796768573497;
    msg.integrity = 60264U;

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
    msg.setTimeStamp(0.799637160944);
    msg.setSource(56824U);
    msg.setSourceEntity(253U);
    msg.setDestination(565U);
    msg.setDestinationEntity(138U);
    msg.peer.assign("TPFLJMQNNUOKTXYBSLDXPEXNWMOGTXTIKZILHZLGQWBFMJKDIDCVHCUFPWMBRVVPXQSGSDNNBJHDAMWQOQLDDFACTZQQMFBEVGSRUYXOKHGGOFCLPBCZHORIKEPAZYHUWTYZUMRUCWGDCPJAYFRYPUYEVEVKLITQOGNIT");
    msg.rssi = 0.517736306904;
    msg.integrity = 51098U;

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
    msg.setTimeStamp(0.188476880034);
    msg.setSource(17381U);
    msg.setSourceEntity(6U);
    msg.setDestination(50822U);
    msg.setDestinationEntity(248U);
    msg.value = 1439;

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
    msg.setTimeStamp(0.939940963229);
    msg.setSource(12162U);
    msg.setSourceEntity(136U);
    msg.setDestination(53821U);
    msg.setDestinationEntity(167U);
    msg.value = 14609;

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
    msg.setTimeStamp(0.305026403841);
    msg.setSource(3703U);
    msg.setSourceEntity(220U);
    msg.setDestination(34162U);
    msg.setDestinationEntity(75U);
    msg.value = -23601;

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
    msg.setTimeStamp(0.958434877527);
    msg.setSource(21450U);
    msg.setSourceEntity(227U);
    msg.setDestination(64561U);
    msg.setDestinationEntity(100U);
    msg.value = 0.107475842861;

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
    msg.setTimeStamp(0.764505779187);
    msg.setSource(21417U);
    msg.setSourceEntity(195U);
    msg.setDestination(55448U);
    msg.setDestinationEntity(249U);
    msg.value = 0.821246235539;

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
    msg.setTimeStamp(0.118547729229);
    msg.setSource(33220U);
    msg.setSourceEntity(75U);
    msg.setDestination(57063U);
    msg.setDestinationEntity(40U);
    msg.value = 0.206838878785;

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
    msg.setTimeStamp(0.0842185036645);
    msg.setSource(50702U);
    msg.setSourceEntity(6U);
    msg.setDestination(41089U);
    msg.setDestinationEntity(81U);
    msg.value = 0.25858733253;

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
    msg.setTimeStamp(0.535885193098);
    msg.setSource(58969U);
    msg.setSourceEntity(215U);
    msg.setDestination(34105U);
    msg.setDestinationEntity(137U);
    msg.value = 0.998750928945;

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
    msg.setTimeStamp(0.490711579898);
    msg.setSource(30992U);
    msg.setSourceEntity(211U);
    msg.setDestination(25071U);
    msg.setDestinationEntity(223U);
    msg.value = 0.738693322684;

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
    msg.setTimeStamp(0.108372300216);
    msg.setSource(65151U);
    msg.setSourceEntity(220U);
    msg.setDestination(29204U);
    msg.setDestinationEntity(125U);
    msg.validity = 1232U;
    msg.type = 253U;
    msg.utc_year = 8133U;
    msg.utc_month = 41U;
    msg.utc_day = 124U;
    msg.utc_time = 0.859124945415;
    msg.lat = 0.584096430658;
    msg.lon = 0.464311701728;
    msg.height = 0.512484209738;
    msg.satellites = 150U;
    msg.cog = 0.809089514464;
    msg.sog = 0.810345388044;
    msg.hdop = 0.0827045391931;
    msg.vdop = 0.18356542999;
    msg.hacc = 0.804854501277;
    msg.vacc = 0.883177070852;

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
    msg.setTimeStamp(0.144817150552);
    msg.setSource(51131U);
    msg.setSourceEntity(142U);
    msg.setDestination(47432U);
    msg.setDestinationEntity(42U);
    msg.validity = 49640U;
    msg.type = 81U;
    msg.utc_year = 61951U;
    msg.utc_month = 204U;
    msg.utc_day = 72U;
    msg.utc_time = 0.0767396996189;
    msg.lat = 0.796186262603;
    msg.lon = 0.896966024574;
    msg.height = 0.471122282451;
    msg.satellites = 154U;
    msg.cog = 0.268451525175;
    msg.sog = 0.898516764793;
    msg.hdop = 0.959992812693;
    msg.vdop = 0.364752650022;
    msg.hacc = 0.708294193043;
    msg.vacc = 0.986728973415;

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
    msg.setTimeStamp(0.459821949765);
    msg.setSource(7402U);
    msg.setSourceEntity(209U);
    msg.setDestination(39491U);
    msg.setDestinationEntity(107U);
    msg.validity = 52639U;
    msg.type = 134U;
    msg.utc_year = 52416U;
    msg.utc_month = 154U;
    msg.utc_day = 223U;
    msg.utc_time = 0.253276955937;
    msg.lat = 0.236401563302;
    msg.lon = 0.776267364563;
    msg.height = 0.934950555369;
    msg.satellites = 38U;
    msg.cog = 0.565885280235;
    msg.sog = 0.553315674007;
    msg.hdop = 0.50304410246;
    msg.vdop = 0.406165859048;
    msg.hacc = 0.806380037371;
    msg.vacc = 0.161761819978;

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
    msg.setTimeStamp(0.0664477155851);
    msg.setSource(57100U);
    msg.setSourceEntity(134U);
    msg.setDestination(21410U);
    msg.setDestinationEntity(202U);
    msg.time = 0.629897731893;
    msg.phi = 0.916029466786;
    msg.theta = 0.541298677274;
    msg.psi = 0.413880268575;
    msg.psi_magnetic = 0.912466262262;

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
    msg.setTimeStamp(0.421251741713);
    msg.setSource(10156U);
    msg.setSourceEntity(50U);
    msg.setDestination(3698U);
    msg.setDestinationEntity(201U);
    msg.time = 0.199803656252;
    msg.phi = 0.00339306430207;
    msg.theta = 0.145166974659;
    msg.psi = 0.977658693178;
    msg.psi_magnetic = 0.262465931759;

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
    msg.setTimeStamp(0.346052447712);
    msg.setSource(27360U);
    msg.setSourceEntity(43U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(80U);
    msg.time = 0.143218513836;
    msg.phi = 0.487877469289;
    msg.theta = 0.981826131262;
    msg.psi = 0.623451403076;
    msg.psi_magnetic = 0.141690778971;

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
    msg.setTimeStamp(0.345086485962);
    msg.setSource(29847U);
    msg.setSourceEntity(85U);
    msg.setDestination(56247U);
    msg.setDestinationEntity(162U);
    msg.time = 0.743803295254;
    msg.x = 0.644818495239;
    msg.y = 0.612889852046;
    msg.z = 0.606272699008;
    msg.timestep = 0.46070428037;

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
    msg.setTimeStamp(0.164776332941);
    msg.setSource(7818U);
    msg.setSourceEntity(194U);
    msg.setDestination(53051U);
    msg.setDestinationEntity(56U);
    msg.time = 0.832293873813;
    msg.x = 0.185470427247;
    msg.y = 0.840676304224;
    msg.z = 0.0877046801865;
    msg.timestep = 0.828704626562;

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
    msg.setTimeStamp(0.10426068081);
    msg.setSource(18138U);
    msg.setSourceEntity(230U);
    msg.setDestination(34495U);
    msg.setDestinationEntity(45U);
    msg.time = 0.110128594866;
    msg.x = 0.584843804622;
    msg.y = 0.588092721837;
    msg.z = 0.764588082073;
    msg.timestep = 0.798514611763;

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
    msg.setTimeStamp(0.143093960683);
    msg.setSource(16298U);
    msg.setSourceEntity(231U);
    msg.setDestination(14830U);
    msg.setDestinationEntity(215U);
    msg.time = 0.627855638525;
    msg.x = 0.777232669699;
    msg.y = 0.423281055547;
    msg.z = 0.400586496528;

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
    msg.setTimeStamp(0.11765447501);
    msg.setSource(35724U);
    msg.setSourceEntity(20U);
    msg.setDestination(41120U);
    msg.setDestinationEntity(153U);
    msg.time = 0.16389782628;
    msg.x = 0.19242956844;
    msg.y = 0.940703179371;
    msg.z = 0.688164498416;

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
    msg.setTimeStamp(0.765006872467);
    msg.setSource(46092U);
    msg.setSourceEntity(52U);
    msg.setDestination(48976U);
    msg.setDestinationEntity(242U);
    msg.time = 0.122422645135;
    msg.x = 0.599135439345;
    msg.y = 0.749330812602;
    msg.z = 0.0962712026051;

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
    msg.setTimeStamp(0.753291691117);
    msg.setSource(22153U);
    msg.setSourceEntity(199U);
    msg.setDestination(9889U);
    msg.setDestinationEntity(82U);
    msg.time = 0.131358239461;
    msg.x = 0.521699318575;
    msg.y = 0.0225890436941;
    msg.z = 0.621029661;

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
    msg.setTimeStamp(0.953919327462);
    msg.setSource(55605U);
    msg.setSourceEntity(234U);
    msg.setDestination(29306U);
    msg.setDestinationEntity(141U);
    msg.time = 0.437552530314;
    msg.x = 0.565987670337;
    msg.y = 0.486674359708;
    msg.z = 0.0664651765118;

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
    msg.setTimeStamp(0.805759349866);
    msg.setSource(11855U);
    msg.setSourceEntity(4U);
    msg.setDestination(45595U);
    msg.setDestinationEntity(31U);
    msg.time = 0.300669963429;
    msg.x = 0.269639738853;
    msg.y = 0.813971919644;
    msg.z = 0.359786761733;

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
    msg.setTimeStamp(0.536419584774);
    msg.setSource(9699U);
    msg.setSourceEntity(192U);
    msg.setDestination(7553U);
    msg.setDestinationEntity(192U);
    msg.time = 0.733656660929;
    msg.x = 0.483953389128;
    msg.y = 0.275750931877;
    msg.z = 0.205183956202;

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
    msg.setTimeStamp(0.892436740297);
    msg.setSource(15618U);
    msg.setSourceEntity(38U);
    msg.setDestination(17689U);
    msg.setDestinationEntity(10U);
    msg.time = 0.57440519892;
    msg.x = 0.538627215772;
    msg.y = 0.310978973797;
    msg.z = 0.599755549565;

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
    msg.setTimeStamp(0.685514657512);
    msg.setSource(47548U);
    msg.setSourceEntity(24U);
    msg.setDestination(18358U);
    msg.setDestinationEntity(170U);
    msg.time = 0.025191949084;
    msg.x = 0.166108537867;
    msg.y = 0.708433907469;
    msg.z = 0.398801071026;

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
    msg.setTimeStamp(0.580249927443);
    msg.setSource(62469U);
    msg.setSourceEntity(84U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(7U);
    msg.validity = 56U;
    msg.x = 0.678581132976;
    msg.y = 0.0295945329331;
    msg.z = 0.0338892743985;

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
    msg.setTimeStamp(0.916919067595);
    msg.setSource(63214U);
    msg.setSourceEntity(125U);
    msg.setDestination(25276U);
    msg.setDestinationEntity(179U);
    msg.validity = 17U;
    msg.x = 0.0203085899132;
    msg.y = 0.848263000556;
    msg.z = 0.463745418348;

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
    msg.setTimeStamp(0.43187698065);
    msg.setSource(34262U);
    msg.setSourceEntity(188U);
    msg.setDestination(16193U);
    msg.setDestinationEntity(237U);
    msg.validity = 254U;
    msg.x = 0.304984702748;
    msg.y = 0.847812540988;
    msg.z = 0.257479201849;

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
    msg.setTimeStamp(0.7997059011);
    msg.setSource(5226U);
    msg.setSourceEntity(4U);
    msg.setDestination(39306U);
    msg.setDestinationEntity(164U);
    msg.validity = 187U;
    msg.x = 0.57755233184;
    msg.y = 0.0141732009506;
    msg.z = 0.956689094922;

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
    msg.setTimeStamp(0.347257398959);
    msg.setSource(34199U);
    msg.setSourceEntity(107U);
    msg.setDestination(33477U);
    msg.setDestinationEntity(193U);
    msg.validity = 105U;
    msg.x = 0.796039517673;
    msg.y = 0.457342687969;
    msg.z = 0.143492791499;

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
    msg.setTimeStamp(0.347423347452);
    msg.setSource(44736U);
    msg.setSourceEntity(169U);
    msg.setDestination(54715U);
    msg.setDestinationEntity(198U);
    msg.validity = 244U;
    msg.x = 0.963810559752;
    msg.y = 0.0598490037877;
    msg.z = 0.0364505975359;

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
    msg.setTimeStamp(0.710450636322);
    msg.setSource(46820U);
    msg.setSourceEntity(168U);
    msg.setDestination(64506U);
    msg.setDestinationEntity(198U);
    msg.time = 0.714755242706;
    msg.x = 0.213286435929;
    msg.y = 0.800277542799;
    msg.z = 0.232156049324;

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
    msg.setTimeStamp(0.486984866426);
    msg.setSource(34356U);
    msg.setSourceEntity(86U);
    msg.setDestination(37873U);
    msg.setDestinationEntity(248U);
    msg.time = 0.329687925706;
    msg.x = 0.1599162845;
    msg.y = 0.757412714498;
    msg.z = 0.591240793695;

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
    msg.setTimeStamp(0.901652046591);
    msg.setSource(58708U);
    msg.setSourceEntity(168U);
    msg.setDestination(58042U);
    msg.setDestinationEntity(46U);
    msg.time = 0.185630473315;
    msg.x = 0.0347930432153;
    msg.y = 0.596910476124;
    msg.z = 0.9897290845;

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
    msg.setTimeStamp(0.607332071921);
    msg.setSource(18778U);
    msg.setSourceEntity(140U);
    msg.setDestination(62775U);
    msg.setDestinationEntity(126U);
    msg.validity = 41U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.757046052589;
    tmp_msg_0.y = 0.74832848196;
    tmp_msg_0.z = 0.685163594815;
    tmp_msg_0.phi = 0.167198910257;
    tmp_msg_0.theta = 0.921159383573;
    tmp_msg_0.psi = 0.819774498077;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.730340425426;
    tmp_msg_1.beam_height = 0.998388005601;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.466653934479;

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
    msg.setTimeStamp(0.310024836352);
    msg.setSource(58421U);
    msg.setSourceEntity(35U);
    msg.setDestination(54353U);
    msg.setDestinationEntity(23U);
    msg.validity = 67U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0524212047269;
    tmp_msg_0.y = 0.429687931304;
    tmp_msg_0.z = 0.311218009527;
    tmp_msg_0.phi = 0.42655003491;
    tmp_msg_0.theta = 0.0299072902449;
    tmp_msg_0.psi = 0.98694954072;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.928735063158;
    tmp_msg_1.beam_height = 0.556079659193;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.98619741381;

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
    msg.setTimeStamp(0.23940383227);
    msg.setSource(37314U);
    msg.setSourceEntity(121U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(174U);
    msg.validity = 54U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.782716891851;
    tmp_msg_0.beam_height = 0.469227306904;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.820328390936;

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
    msg.setTimeStamp(0.777358043966);
    msg.setSource(65192U);
    msg.setSourceEntity(28U);
    msg.setDestination(57770U);
    msg.setDestinationEntity(100U);
    msg.value = 0.373501205926;

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
    msg.setTimeStamp(0.22999858544);
    msg.setSource(53024U);
    msg.setSourceEntity(98U);
    msg.setDestination(21117U);
    msg.setDestinationEntity(238U);
    msg.value = 0.506561231736;

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
    msg.setTimeStamp(0.793699093543);
    msg.setSource(4959U);
    msg.setSourceEntity(59U);
    msg.setDestination(46432U);
    msg.setDestinationEntity(119U);
    msg.value = 0.00973286242895;

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
    msg.setTimeStamp(0.580336658854);
    msg.setSource(42685U);
    msg.setSourceEntity(187U);
    msg.setDestination(60004U);
    msg.setDestinationEntity(58U);
    msg.value = 0.00239276888907;

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
    msg.setTimeStamp(0.925154541179);
    msg.setSource(11365U);
    msg.setSourceEntity(235U);
    msg.setDestination(20805U);
    msg.setDestinationEntity(120U);
    msg.value = 0.490432139484;

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
    msg.setTimeStamp(0.87017760215);
    msg.setSource(54399U);
    msg.setSourceEntity(16U);
    msg.setDestination(41996U);
    msg.setDestinationEntity(136U);
    msg.value = 0.725632894683;

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
    msg.setTimeStamp(0.319380810447);
    msg.setSource(9860U);
    msg.setSourceEntity(90U);
    msg.setDestination(62303U);
    msg.setDestinationEntity(137U);
    msg.value = 0.52030415894;

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
    msg.setTimeStamp(0.343743317802);
    msg.setSource(32607U);
    msg.setSourceEntity(205U);
    msg.setDestination(57992U);
    msg.setDestinationEntity(192U);
    msg.value = 0.913471261698;

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
    msg.setTimeStamp(0.105505388517);
    msg.setSource(49775U);
    msg.setSourceEntity(114U);
    msg.setDestination(35446U);
    msg.setDestinationEntity(242U);
    msg.value = 0.646724167532;

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
    msg.setTimeStamp(0.947793700969);
    msg.setSource(3018U);
    msg.setSourceEntity(212U);
    msg.setDestination(29384U);
    msg.setDestinationEntity(113U);
    msg.value = 0.681490952421;

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
    msg.setTimeStamp(0.810893412673);
    msg.setSource(62678U);
    msg.setSourceEntity(241U);
    msg.setDestination(27644U);
    msg.setDestinationEntity(137U);
    msg.value = 0.846041287786;

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
    msg.setTimeStamp(0.549889752227);
    msg.setSource(6935U);
    msg.setSourceEntity(145U);
    msg.setDestination(41841U);
    msg.setDestinationEntity(90U);
    msg.value = 0.80002860864;

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
    msg.setTimeStamp(0.527509269299);
    msg.setSource(59138U);
    msg.setSourceEntity(173U);
    msg.setDestination(60880U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0467053852787;

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
    msg.setTimeStamp(0.894491483158);
    msg.setSource(17744U);
    msg.setSourceEntity(119U);
    msg.setDestination(9392U);
    msg.setDestinationEntity(34U);
    msg.value = 0.752996229288;

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
    msg.setTimeStamp(0.942220510113);
    msg.setSource(34322U);
    msg.setSourceEntity(234U);
    msg.setDestination(46454U);
    msg.setDestinationEntity(137U);
    msg.value = 0.315297104965;

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
    msg.setTimeStamp(0.342118814679);
    msg.setSource(26840U);
    msg.setSourceEntity(173U);
    msg.setDestination(34737U);
    msg.setDestinationEntity(155U);
    msg.value = 0.668608778289;

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
    msg.setTimeStamp(0.109329143655);
    msg.setSource(27527U);
    msg.setSourceEntity(29U);
    msg.setDestination(40749U);
    msg.setDestinationEntity(183U);
    msg.value = 0.115733328252;

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
    msg.setTimeStamp(0.718710748184);
    msg.setSource(54310U);
    msg.setSourceEntity(17U);
    msg.setDestination(47656U);
    msg.setDestinationEntity(183U);
    msg.value = 0.921396727764;

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
    msg.setTimeStamp(0.382528825074);
    msg.setSource(55052U);
    msg.setSourceEntity(230U);
    msg.setDestination(36245U);
    msg.setDestinationEntity(59U);
    msg.value = 0.590825743187;

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
    msg.setTimeStamp(0.606325591246);
    msg.setSource(46602U);
    msg.setSourceEntity(221U);
    msg.setDestination(39900U);
    msg.setDestinationEntity(79U);
    msg.value = 0.048102936958;

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
    msg.setTimeStamp(0.707072044835);
    msg.setSource(49248U);
    msg.setSourceEntity(45U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(13U);
    msg.value = 0.90159361937;

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
    msg.setTimeStamp(0.617268180215);
    msg.setSource(40465U);
    msg.setSourceEntity(210U);
    msg.setDestination(2572U);
    msg.setDestinationEntity(133U);
    msg.value = 0.802650838664;

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
    msg.setTimeStamp(0.341055341086);
    msg.setSource(3832U);
    msg.setSourceEntity(207U);
    msg.setDestination(41968U);
    msg.setDestinationEntity(172U);
    msg.value = 0.129247584848;

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
    msg.setTimeStamp(0.304378587426);
    msg.setSource(21802U);
    msg.setSourceEntity(152U);
    msg.setDestination(5340U);
    msg.setDestinationEntity(223U);
    msg.value = 0.414914392984;

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
    msg.setTimeStamp(0.638772593809);
    msg.setSource(56588U);
    msg.setSourceEntity(5U);
    msg.setDestination(3978U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.315152047745;
    msg.speed = 0.202617699756;
    msg.turbulence = 0.628896997283;

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
    msg.setTimeStamp(0.161665111039);
    msg.setSource(11663U);
    msg.setSourceEntity(217U);
    msg.setDestination(8341U);
    msg.setDestinationEntity(252U);
    msg.direction = 0.23388842625;
    msg.speed = 0.0242828043596;
    msg.turbulence = 0.618443967376;

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
    msg.setTimeStamp(0.486423118961);
    msg.setSource(17141U);
    msg.setSourceEntity(143U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(237U);
    msg.direction = 0.655860596991;
    msg.speed = 0.663504835573;
    msg.turbulence = 0.588361424266;

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
    msg.setTimeStamp(0.508920688893);
    msg.setSource(59654U);
    msg.setSourceEntity(37U);
    msg.setDestination(1169U);
    msg.setDestinationEntity(106U);
    msg.value = 0.271101093151;

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
    msg.setTimeStamp(0.12695876204);
    msg.setSource(5899U);
    msg.setSourceEntity(218U);
    msg.setDestination(45695U);
    msg.setDestinationEntity(179U);
    msg.value = 0.0800350278053;

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
    msg.setTimeStamp(0.779144081426);
    msg.setSource(24900U);
    msg.setSourceEntity(120U);
    msg.setDestination(12284U);
    msg.setDestinationEntity(132U);
    msg.value = 0.670752411171;

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
    msg.setTimeStamp(0.0168276767086);
    msg.setSource(28884U);
    msg.setSourceEntity(106U);
    msg.setDestination(34721U);
    msg.setDestinationEntity(127U);
    msg.value.assign("YFNILANOXIUBXHDFBFOBOYHWFVWMVMFSSWSPWZCUOFNJVXXGXUTUVRSPYBWQHJOMFGPKGTYJPYBRZYBZ");

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
    msg.setTimeStamp(0.62615648819);
    msg.setSource(7633U);
    msg.setSourceEntity(234U);
    msg.setDestination(5979U);
    msg.setDestinationEntity(40U);
    msg.value.assign("PTVFPXSIBTIJKQIPKLOTQCCLYIGQNQVTERLJDHJECGFMJXSBXEYXAFZULKTDTLJWVRVTZBMXEHOQVCPUDHTJHZNLYNYNJRQNGOVBMDKVKWFRGEPOZPWFYGXABUDOGXAERNRJIFWPIDHMUCYKCQUIGBHOADWLRUUXEZWDHYPQNMNGOERDNDFMASTBKBRKGIYMVSJSCSQEZAOCIATVMWORHBWSUUZFAEKSWXNGLZPQYMSZHP");

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
    msg.setTimeStamp(0.388882091212);
    msg.setSource(43349U);
    msg.setSourceEntity(81U);
    msg.setDestination(53499U);
    msg.setDestinationEntity(180U);
    msg.value.assign("VHZVTOBKUBOGJQAJMKRULCLDUMETDCBOXDPAGKNCIAHHHFSULYATCQYBPGSVZTPVYWIDDJYHRDNYLIKELGONMCETXMFKWIMWEVJYRPGHP");

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
    msg.setTimeStamp(0.5332624481);
    msg.setSource(25125U);
    msg.setSourceEntity(179U);
    msg.setDestination(7836U);
    msg.setDestinationEntity(57U);
    const char tmp_msg_0[] = {10, 2, 62, 112, 119, 12, 33, 2, -6, -26, -41, 12, 37, -87, -23, 51, 81, 25, 4, 105, -27, -50, 45, -128, -3, -13, 102, -57, -76, -49, 86, -19, 9, 26, -23, 46, -94, 111, -65, -2, -3, 46, 89, -128, 87, 109, -35, 103, -110, -39, -82, -37, 108, -115, 54, 48, -112, 50, 69, -86, -54, 123, -45, -126, -9, 32, -40, 86, 35, -60, -33, 71, -9, 9, 109, -75, 102, 86, 27, -43, 36, 43, -85, -105, 27, -29, -49, -34, -122, 52, -52, -82, -111, 111, 125, 124, 45, 124, -65, -81, -25, -104, -50, 77, -128, -116, 81, 16, 33, -45, -54, 51, -48, 97, 10, -25, -12};
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
    msg.setTimeStamp(0.960709391547);
    msg.setSource(30358U);
    msg.setSourceEntity(167U);
    msg.setDestination(63149U);
    msg.setDestinationEntity(26U);
    const char tmp_msg_0[] = {-19, -103, -43, -82, -102, -6, -1, 99, -116, 78, -90, 41, -97, 38, -63, -99, 57, 0, 11, -40, 74, -99, 57, 54};
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
    msg.setTimeStamp(0.0711765751912);
    msg.setSource(59188U);
    msg.setSourceEntity(134U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(54U);
    const char tmp_msg_0[] = {2, 95, -63, 75, 109, -86, 76, 83, 22, -68, -77, -30, 25, 31, -55, -19, 98, -98, 77, -34, -110, -51, -109, -105, -58, 39, -34, 109, -39, 50, 1, 51, 13, 105, 23, 61, 113, -123, -113, -83, -119, -35, 60, -125, -97, 44, 52, -58, -76, -17, 78, -123, 28, 125, -4, -1, 116, -116, -7, 12, 47, 49, 11, -7, 125, 24, 44, 96, -116, -123, 99, -122, 60, 79, 56, -12, -24, -52, 115, 33, 47, 34, -37, 50, -114, 90, 66, 89, -59, -12, 109, 98, -5, 114, -16, 59, 65, 51, -35, 18, -20, -1, 90, 32, 36, 6, 30, 53, -109, -115, -48, -29, 62, -68, -82, 13, -50, 91, -107, 39, 20, 15, 119, -124, -121, -54, -38, -75, 119, -128, -31, 15, 53, -2, -4, 27, -84, -90, -91, 26, 115, 62, -86, 29, -114, 93, 41, 96, 109, 44, -113, -62, 101, 103, 117, -115, 106, -39, -53, 93, -72, -114, -80, 117, 69, 73, 60, -55, 125, 1, -104, -12, 64, -16, -38, 3, 70, 54, -104, 63, -115, 62, -77, -108, -83, 44, -21, 104, 14, -103, 58, 114, 24, -13, -116, 117, 82, 85, -66, 28, 62, 87, -46, -85, 24, 83, 21, 69, -24, 44, -57, 125, -94, 32, 123, -90};
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
    msg.setTimeStamp(0.739271663394);
    msg.setSource(14498U);
    msg.setSourceEntity(12U);
    msg.setDestination(56354U);
    msg.setDestinationEntity(240U);
    msg.value = 0.260655874453;

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
    msg.setTimeStamp(0.487907824496);
    msg.setSource(18017U);
    msg.setSourceEntity(121U);
    msg.setDestination(17814U);
    msg.setDestinationEntity(50U);
    msg.value = 0.861975376642;

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
    msg.setTimeStamp(0.658419033866);
    msg.setSource(29333U);
    msg.setSourceEntity(85U);
    msg.setDestination(30052U);
    msg.setDestinationEntity(249U);
    msg.value = 0.502558248163;

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
    msg.setTimeStamp(0.188388290619);
    msg.setSource(24688U);
    msg.setSourceEntity(133U);
    msg.setDestination(56077U);
    msg.setDestinationEntity(156U);
    msg.type = 194U;
    msg.frequency = 1591664746U;
    msg.min_range = 44542U;
    msg.max_range = 45995U;
    msg.bits_per_point = 18U;
    msg.scale_factor = 0.838684904963;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0235019009724;
    tmp_msg_0.beam_height = 0.48087457802;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-48, -122, 26, 1, -7, -116, -3, -92, -121, 49, -68, -114, -3, -63, 3, -52, -58, 92, 21, -29, -28, -31, -15, -1, -71, 60, -107, 103, -118, 113, 69, -22, 37, -57, 100, -106, 80, 86, 54, 34, -86, 51, 14, -18, -24, -44, 20, -53, 36, 49, 116, 99, 95, -83, 56, 113, 38, -67, 12, -29, -120, 24, 125, 9, -67, 88, -111, -82, -83, -52, 103, -51, -121, -70, -44, -39, 31, -66, -120, -7, 30, 91};
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
    msg.setTimeStamp(0.660673288084);
    msg.setSource(60039U);
    msg.setSourceEntity(169U);
    msg.setDestination(2083U);
    msg.setDestinationEntity(105U);
    msg.type = 217U;
    msg.frequency = 2000978606U;
    msg.min_range = 30321U;
    msg.max_range = 44920U;
    msg.bits_per_point = 222U;
    msg.scale_factor = 0.597888920726;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.722917937435;
    tmp_msg_0.beam_height = 0.779311486535;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-87, 104, 123, -75, 97, 101, -91, 110, 23, -7, 23, -13, -61, -81, 123, -96, -105, 85, 126, 100, -34, 87, -66, -86, -52, 87, 123, -81, 116, -55, -20, -108, 1, 76, -28, -96, -64, -25, -4, -79, -120, 87, 104, -115, 84, -20, -68, -61, 88, -23, 17, -94, 38, -110, 82, 28, -91, 35, 85, 37, -105, 10, -35, 113, 85, -24, 48, 14, -87, 76, 109, 59, -124, 75, 25, -45, 43, 60, 28, -75, 88, -27, -21, -87, 1, -87, 32, 42, 37, -22, 52, -97, 112, 89, 88, 93, -80, -43, -124, 11, 74, 101, 48, -35, 110, 32, 116, -39, 36, 37, -91, 113, 60, -25, -27, -101, 118, -110, 52, 40, -41, -19, 67, 79, 55, -3, 120, 112, 2, 18, 97, -69, 113, -60, -91, -115, -104, 3, -100, 63, -38, -35, 102, -39, -50, -56, 111, 2, 68, -56, -88, -62, 98, -9, -60, 93, -49, -25, 58, 66, 75, -50, 90, 92, -26, 80, -128, 76, -24, 46, -69, -126, -11, -25, -72, -58, -65, 16, -72, 70, 5, -40, -9, 43, -128, -48, 107, 126, 95, -31, 110, -78, 118, -106, -29, 37, -109, -8, -92, -72, 41, 102, -126, 67, 48, -114, 122, -95, 37, 107, 83, -94, 55, -43, 96, -87, -10, 51, -59, 102, -104, -88, 41, 4, 37, 88, 108, -102, 52, -101, 11, 65, 124, -103, -63, -66, -104, -63, 102, 124, 15};
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
    msg.setTimeStamp(0.37915733485);
    msg.setSource(48828U);
    msg.setSourceEntity(108U);
    msg.setDestination(59795U);
    msg.setDestinationEntity(0U);
    msg.type = 128U;
    msg.frequency = 1734305213U;
    msg.min_range = 98U;
    msg.max_range = 64968U;
    msg.bits_per_point = 18U;
    msg.scale_factor = 0.39218633655;
    const char tmp_msg_0[] = {-55, -77, -78, 118, -20, 61, 34, -17, -82, -66, -26, 118, -7, -125, -2, 125, 97, -113, -13, 63, 107, -96, -18, 123, 125, 115, -54, 85, -85, 31, 89, 1, 75, 63, 112, -76, 45, 40, 116, -20, 33, -79, 77, 13, -48, -4, -96, 71, -56, 82, 105, 92, -90, -69, 58, 106, -118, 103, -113, 91, 121, -89, -49, -10, 53, -23, 93, 97, -92, -118, 81, 10, -87, -37, -104, 110, 60, 108, 13, 34, -76, 4, -106, 14, -121, 11, -23, 67, 114, 100, 69, 8, 40, 115, 53, 36, -35, -51, 29, 5, -94, 72, 118, -22, -64, 49, -97, 3, -79, 17, -46, -90, 14, -115, -3, -60, -2, -10, -11, 12, -94, 6, 44, -58, 111, -60, 4, 41, -65, -73, 6, -122, -113, 67, 98, -72, 102, 59, 47, -128, -94, -28, -112, -67, -76, 118, 106, 113, -83, -38, 78, -54, -37, 28, -94, -64, -98, -90, -123, 39, 72, 114, -60, -56, -45, -86, 6, -86, 112, 116, -112, 107, -54, 82, -42, 28, 80, -124, -58, -69, 101, -80, 48, 13, 116, -68, 97, -123, 48, 53, 70, 114, -91, -41, -11, 9, 64, -35, 67, 5, 57, 105, -8, -43, 20, 57, -28, -116, -116, -14, -72, -71, 67, -103, -29, 111, -109, -73, -70, -35, -35, 12, -73, -126, 10, -25, 96, 17, -120, -6, 14, -9, 7, -101, -80, 64, 14, -63, 9, 24, 96, -57, -20, 43, -120, 7, -1, 16, -26};
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
    msg.setTimeStamp(0.458271414545);
    msg.setSource(48651U);
    msg.setSourceEntity(139U);
    msg.setDestination(61228U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.952418320066);
    msg.setSource(44689U);
    msg.setSourceEntity(88U);
    msg.setDestination(64760U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.742729679672);
    msg.setSource(6190U);
    msg.setSourceEntity(112U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.919349332128);
    msg.setSource(46767U);
    msg.setSourceEntity(206U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(22U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.974906406399);
    msg.setSource(44893U);
    msg.setSourceEntity(191U);
    msg.setDestination(35369U);
    msg.setDestinationEntity(140U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.366275271122);
    msg.setSource(57810U);
    msg.setSourceEntity(224U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(138U);
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
    msg.setTimeStamp(0.418474915433);
    msg.setSource(11542U);
    msg.setSourceEntity(192U);
    msg.setDestination(36270U);
    msg.setDestinationEntity(72U);
    msg.value = 0.0649980280946;
    msg.confidence = 0.369993823696;
    msg.opmodes.assign("JILHQINUAQFKBGCO");

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
    msg.setTimeStamp(0.0840925909741);
    msg.setSource(60849U);
    msg.setSourceEntity(128U);
    msg.setDestination(24894U);
    msg.setDestinationEntity(145U);
    msg.value = 0.873997149707;
    msg.confidence = 0.230914848627;
    msg.opmodes.assign("ZADNKWDHAVSEZIANGFFKUMRRMPUYQOPVOLKYRIJZB");

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
    msg.setTimeStamp(0.128738071009);
    msg.setSource(31244U);
    msg.setSourceEntity(162U);
    msg.setDestination(14180U);
    msg.setDestinationEntity(132U);
    msg.value = 0.525248927964;
    msg.confidence = 0.0200917076026;
    msg.opmodes.assign("GILHLCBQSKVPTBXGNHRMNXQRPRFHHASFBGZDGPKCFYDXCMJNPTLEYTESWAHAUDWBFLZASJOIZIDUVOHKOMFPZSVRNHFBZUFUVUKYIARTQDVOPKTRAEKQENICAPNGFIMDQCKUABEWELXTUJJIOCZLJJWDMQMYVMONEAWWDYVBTCKEXRTOZXVAIBQVHCWMRUYOLNMBXPJSUPSBJMIXSR");

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
    msg.setTimeStamp(0.693429125848);
    msg.setSource(37038U);
    msg.setSourceEntity(101U);
    msg.setDestination(19121U);
    msg.setDestinationEntity(186U);
    msg.itow = 1421489832U;
    msg.lat = 0.865918693733;
    msg.lon = 0.891017484854;
    msg.height_ell = 0.368827541862;
    msg.height_sea = 0.93931028168;
    msg.hacc = 0.458193493732;
    msg.vacc = 0.28799261043;
    msg.vel_n = 0.838173366075;
    msg.vel_e = 0.294137998693;
    msg.vel_d = 0.237409044942;
    msg.speed = 0.341704842823;
    msg.gspeed = 0.918088185106;
    msg.heading = 0.597723680736;
    msg.sacc = 0.360331014558;
    msg.cacc = 0.762721170808;

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
    msg.setTimeStamp(0.32192377426);
    msg.setSource(30265U);
    msg.setSourceEntity(222U);
    msg.setDestination(61074U);
    msg.setDestinationEntity(158U);
    msg.itow = 3647218627U;
    msg.lat = 0.663351473212;
    msg.lon = 0.800161700608;
    msg.height_ell = 0.978767956572;
    msg.height_sea = 0.151576441933;
    msg.hacc = 0.727842845134;
    msg.vacc = 0.405705046676;
    msg.vel_n = 0.980162753111;
    msg.vel_e = 0.207351268377;
    msg.vel_d = 0.358659005186;
    msg.speed = 0.723856687555;
    msg.gspeed = 0.320682912905;
    msg.heading = 0.0644598448727;
    msg.sacc = 0.819742900108;
    msg.cacc = 0.155469524265;

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
    msg.setTimeStamp(0.965262590037);
    msg.setSource(56319U);
    msg.setSourceEntity(111U);
    msg.setDestination(15228U);
    msg.setDestinationEntity(146U);
    msg.itow = 4083550052U;
    msg.lat = 0.520718462281;
    msg.lon = 0.314431848023;
    msg.height_ell = 0.565399434383;
    msg.height_sea = 0.34430429704;
    msg.hacc = 0.310933778546;
    msg.vacc = 0.344869631753;
    msg.vel_n = 0.588674341742;
    msg.vel_e = 0.196848475007;
    msg.vel_d = 0.1601812763;
    msg.speed = 0.905963188967;
    msg.gspeed = 0.990029806744;
    msg.heading = 0.343270900556;
    msg.sacc = 0.50544061818;
    msg.cacc = 0.55611005807;

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
    msg.setTimeStamp(0.532462579323);
    msg.setSource(749U);
    msg.setSourceEntity(108U);
    msg.setDestination(17222U);
    msg.setDestinationEntity(19U);
    msg.id = 240U;
    msg.value = 0.145698218494;

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
    msg.setTimeStamp(0.357513918465);
    msg.setSource(17221U);
    msg.setSourceEntity(232U);
    msg.setDestination(7886U);
    msg.setDestinationEntity(194U);
    msg.id = 74U;
    msg.value = 0.58049096033;

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
    msg.setTimeStamp(0.346165352981);
    msg.setSource(26916U);
    msg.setSourceEntity(125U);
    msg.setDestination(27545U);
    msg.setDestinationEntity(207U);
    msg.id = 35U;
    msg.value = 0.294248027095;

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
    msg.setTimeStamp(0.613269701011);
    msg.setSource(51961U);
    msg.setSourceEntity(171U);
    msg.setDestination(23474U);
    msg.setDestinationEntity(47U);
    msg.x = 0.999333269908;
    msg.y = 0.712505577501;
    msg.z = 0.987282692437;
    msg.phi = 0.587219908275;
    msg.theta = 0.586000994731;
    msg.psi = 0.143364516028;

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
    msg.setTimeStamp(0.0750422320169);
    msg.setSource(64549U);
    msg.setSourceEntity(4U);
    msg.setDestination(62587U);
    msg.setDestinationEntity(220U);
    msg.x = 0.980129939084;
    msg.y = 0.374417201637;
    msg.z = 0.887563282731;
    msg.phi = 0.96367242549;
    msg.theta = 0.740410336986;
    msg.psi = 0.294647185212;

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
    msg.setTimeStamp(0.190443755061);
    msg.setSource(36226U);
    msg.setSourceEntity(202U);
    msg.setDestination(61506U);
    msg.setDestinationEntity(9U);
    msg.x = 0.117824606784;
    msg.y = 0.617280247522;
    msg.z = 0.54760801333;
    msg.phi = 0.49615882752;
    msg.theta = 0.138146571262;
    msg.psi = 0.998180112347;

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
    msg.setTimeStamp(0.747286352176);
    msg.setSource(139U);
    msg.setSourceEntity(42U);
    msg.setDestination(54956U);
    msg.setDestinationEntity(70U);
    msg.beam_width = 0.711376974497;
    msg.beam_height = 0.0784461919425;

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
    msg.setTimeStamp(0.855748443502);
    msg.setSource(53464U);
    msg.setSourceEntity(76U);
    msg.setDestination(8713U);
    msg.setDestinationEntity(171U);
    msg.beam_width = 0.634424815295;
    msg.beam_height = 0.428221491607;

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
    msg.setTimeStamp(0.24180316211);
    msg.setSource(48618U);
    msg.setSourceEntity(207U);
    msg.setDestination(12095U);
    msg.setDestinationEntity(43U);
    msg.beam_width = 0.616683555569;
    msg.beam_height = 0.433786020307;

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
    msg.setTimeStamp(0.174630051766);
    msg.setSource(3571U);
    msg.setSourceEntity(38U);
    msg.setDestination(14831U);
    msg.setDestinationEntity(109U);
    msg.sane = 240U;

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
    msg.setTimeStamp(0.812498316891);
    msg.setSource(30062U);
    msg.setSourceEntity(205U);
    msg.setDestination(43546U);
    msg.setDestinationEntity(77U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.162167709872);
    msg.setSource(33978U);
    msg.setSourceEntity(33U);
    msg.setDestination(24358U);
    msg.setDestinationEntity(199U);
    msg.sane = 75U;

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
    msg.setTimeStamp(0.374973169435);
    msg.setSource(43350U);
    msg.setSourceEntity(153U);
    msg.setDestination(54778U);
    msg.setDestinationEntity(13U);
    msg.value = 0.401500201066;

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
    msg.setTimeStamp(0.165778928088);
    msg.setSource(61556U);
    msg.setSourceEntity(90U);
    msg.setDestination(20133U);
    msg.setDestinationEntity(155U);
    msg.value = 0.221815842524;

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
    msg.setTimeStamp(0.59754468708);
    msg.setSource(6710U);
    msg.setSourceEntity(13U);
    msg.setDestination(62105U);
    msg.setDestinationEntity(243U);
    msg.value = 0.016970784033;

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
    msg.setTimeStamp(0.761873812208);
    msg.setSource(22992U);
    msg.setSourceEntity(215U);
    msg.setDestination(6624U);
    msg.setDestinationEntity(66U);
    msg.value = 0.54389751158;

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
    msg.setTimeStamp(0.602314092724);
    msg.setSource(46593U);
    msg.setSourceEntity(196U);
    msg.setDestination(29649U);
    msg.setDestinationEntity(28U);
    msg.value = 0.104620728273;

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
    msg.setTimeStamp(0.178244566826);
    msg.setSource(49088U);
    msg.setSourceEntity(90U);
    msg.setDestination(21322U);
    msg.setDestinationEntity(182U);
    msg.value = 0.154765557723;

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
    msg.setTimeStamp(0.692000443862);
    msg.setSource(35421U);
    msg.setSourceEntity(229U);
    msg.setDestination(13490U);
    msg.setDestinationEntity(57U);
    msg.value = 0.901006659567;

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
    msg.setTimeStamp(0.761004073223);
    msg.setSource(5604U);
    msg.setSourceEntity(176U);
    msg.setDestination(45905U);
    msg.setDestinationEntity(104U);
    msg.value = 0.988881989949;

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
    msg.setTimeStamp(0.986602798139);
    msg.setSource(59929U);
    msg.setSourceEntity(228U);
    msg.setDestination(1742U);
    msg.setDestinationEntity(229U);
    msg.value = 0.315851003402;

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
    msg.setTimeStamp(0.159012319048);
    msg.setSource(58988U);
    msg.setSourceEntity(113U);
    msg.setDestination(7608U);
    msg.setDestinationEntity(227U);
    msg.value = 0.653461433291;

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
    msg.setTimeStamp(0.0462085684932);
    msg.setSource(62517U);
    msg.setSourceEntity(117U);
    msg.setDestination(56725U);
    msg.setDestinationEntity(60U);
    msg.value = 0.868515885127;

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
    msg.setTimeStamp(0.265153744926);
    msg.setSource(51833U);
    msg.setSourceEntity(208U);
    msg.setDestination(47402U);
    msg.setDestinationEntity(147U);
    msg.value = 0.73374922437;

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
    msg.setTimeStamp(0.220843002831);
    msg.setSource(33323U);
    msg.setSourceEntity(59U);
    msg.setDestination(4640U);
    msg.setDestinationEntity(83U);
    msg.value = 0.252367299521;

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
    msg.setTimeStamp(0.242919079643);
    msg.setSource(26273U);
    msg.setSourceEntity(1U);
    msg.setDestination(12782U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0610091095052;

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
    msg.setTimeStamp(0.495067439882);
    msg.setSource(52170U);
    msg.setSourceEntity(82U);
    msg.setDestination(7146U);
    msg.setDestinationEntity(149U);
    msg.value = 0.617531387713;

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
    msg.setTimeStamp(0.890055448423);
    msg.setSource(31350U);
    msg.setSourceEntity(254U);
    msg.setDestination(9509U);
    msg.setDestinationEntity(66U);
    msg.value = 0.942371662473;

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
    msg.setTimeStamp(0.944419808042);
    msg.setSource(60526U);
    msg.setSourceEntity(162U);
    msg.setDestination(62597U);
    msg.setDestinationEntity(39U);
    msg.value = 0.614538626065;

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
    msg.setTimeStamp(0.330973713526);
    msg.setSource(57466U);
    msg.setSourceEntity(195U);
    msg.setDestination(11364U);
    msg.setDestinationEntity(75U);
    msg.value = 0.711544432346;

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
    msg.setTimeStamp(0.262104964295);
    msg.setSource(36893U);
    msg.setSourceEntity(35U);
    msg.setDestination(60679U);
    msg.setDestinationEntity(142U);
    msg.value = 0.101980055145;

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
    msg.setTimeStamp(0.847606014035);
    msg.setSource(17645U);
    msg.setSourceEntity(184U);
    msg.setDestination(59732U);
    msg.setDestinationEntity(31U);
    msg.value = 0.332808575522;

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
    msg.setTimeStamp(0.367008369794);
    msg.setSource(44802U);
    msg.setSourceEntity(212U);
    msg.setDestination(42434U);
    msg.setDestinationEntity(84U);
    msg.value = 0.490899297092;

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
    msg.setTimeStamp(0.583215097007);
    msg.setSource(55050U);
    msg.setSourceEntity(98U);
    msg.setDestination(62410U);
    msg.setDestinationEntity(128U);
    msg.value = 0.426298928414;

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
    msg.setTimeStamp(0.601899473983);
    msg.setSource(36941U);
    msg.setSourceEntity(194U);
    msg.setDestination(49377U);
    msg.setDestinationEntity(43U);
    msg.value = 0.129698274199;

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
    msg.setTimeStamp(0.124419999199);
    msg.setSource(58017U);
    msg.setSourceEntity(217U);
    msg.setDestination(26885U);
    msg.setDestinationEntity(24U);
    msg.value = 0.577671458418;

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
    msg.setTimeStamp(0.269514924359);
    msg.setSource(8816U);
    msg.setSourceEntity(95U);
    msg.setDestination(51483U);
    msg.setDestinationEntity(10U);
    msg.validity = 16614U;
    msg.type = 33U;
    msg.tow = 3071619504U;
    msg.base_lat = 0.0998661085133;
    msg.base_lon = 0.705130609975;
    msg.base_height = 0.522847966639;
    msg.n = 0.626866734432;
    msg.e = 0.216564994469;
    msg.d = 0.11108860561;
    msg.v_n = 0.168997737322;
    msg.v_e = 0.328836135297;
    msg.v_d = 0.57102145203;
    msg.satellites = 75U;
    msg.iar_hyp = 27022U;
    msg.iar_ratio = 0.352179620706;

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
    msg.setTimeStamp(0.594344638246);
    msg.setSource(12197U);
    msg.setSourceEntity(147U);
    msg.setDestination(65455U);
    msg.setDestinationEntity(139U);
    msg.validity = 48384U;
    msg.type = 148U;
    msg.tow = 1742537524U;
    msg.base_lat = 0.230042245072;
    msg.base_lon = 0.216566698016;
    msg.base_height = 0.0984602699276;
    msg.n = 0.311921113766;
    msg.e = 0.298161365525;
    msg.d = 0.689942530658;
    msg.v_n = 0.0083180617528;
    msg.v_e = 0.7386467589;
    msg.v_d = 0.971227059575;
    msg.satellites = 135U;
    msg.iar_hyp = 58941U;
    msg.iar_ratio = 0.304371022502;

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
    msg.setTimeStamp(0.43759313976);
    msg.setSource(54098U);
    msg.setSourceEntity(223U);
    msg.setDestination(17101U);
    msg.setDestinationEntity(4U);
    msg.validity = 45988U;
    msg.type = 20U;
    msg.tow = 3743027976U;
    msg.base_lat = 0.219171343688;
    msg.base_lon = 0.885375443981;
    msg.base_height = 0.788527178159;
    msg.n = 0.24751332172;
    msg.e = 0.34896301625;
    msg.d = 0.848362086856;
    msg.v_n = 0.754309442026;
    msg.v_e = 0.692260769674;
    msg.v_d = 0.868284984872;
    msg.satellites = 163U;
    msg.iar_hyp = 17483U;
    msg.iar_ratio = 0.247794367643;

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
    msg.setTimeStamp(0.778230181936);
    msg.setSource(7636U);
    msg.setSourceEntity(51U);
    msg.setDestination(21961U);
    msg.setDestinationEntity(95U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0886851631437;
    tmp_msg_0.lon = 0.609240823552;
    tmp_msg_0.height = 0.115162829639;
    tmp_msg_0.x = 0.144147060673;
    tmp_msg_0.y = 0.601189279294;
    tmp_msg_0.z = 0.674783856295;
    tmp_msg_0.phi = 0.612343361692;
    tmp_msg_0.theta = 0.34712972277;
    tmp_msg_0.psi = 0.563620722792;
    tmp_msg_0.u = 0.535792757985;
    tmp_msg_0.v = 0.540473814397;
    tmp_msg_0.w = 0.346901802721;
    tmp_msg_0.vx = 0.974575253688;
    tmp_msg_0.vy = 0.855785748462;
    tmp_msg_0.vz = 0.415043209357;
    tmp_msg_0.p = 0.145896801701;
    tmp_msg_0.q = 0.0690335148075;
    tmp_msg_0.r = 0.150169884825;
    tmp_msg_0.depth = 0.608700814336;
    tmp_msg_0.alt = 0.930554846373;
    msg.state.set(tmp_msg_0);
    msg.type = 119U;

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
    msg.setTimeStamp(0.938340995594);
    msg.setSource(8129U);
    msg.setSourceEntity(146U);
    msg.setDestination(1383U);
    msg.setDestinationEntity(86U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.782800209932;
    tmp_msg_0.lon = 0.53400554448;
    tmp_msg_0.height = 0.137589096432;
    tmp_msg_0.x = 0.3242278025;
    tmp_msg_0.y = 0.3475656757;
    tmp_msg_0.z = 0.767813732183;
    tmp_msg_0.phi = 0.449035278936;
    tmp_msg_0.theta = 0.130116801001;
    tmp_msg_0.psi = 0.749462874528;
    tmp_msg_0.u = 0.110780761486;
    tmp_msg_0.v = 0.861312890469;
    tmp_msg_0.w = 0.361983157094;
    tmp_msg_0.vx = 0.24457832077;
    tmp_msg_0.vy = 0.316383359054;
    tmp_msg_0.vz = 0.666271343209;
    tmp_msg_0.p = 0.18325157048;
    tmp_msg_0.q = 0.366273054371;
    tmp_msg_0.r = 0.844645576729;
    tmp_msg_0.depth = 0.714023973365;
    tmp_msg_0.alt = 0.929313594092;
    msg.state.set(tmp_msg_0);
    msg.type = 7U;

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
    msg.setTimeStamp(0.446726894822);
    msg.setSource(15182U);
    msg.setSourceEntity(102U);
    msg.setDestination(28839U);
    msg.setDestinationEntity(174U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.959192207498;
    tmp_msg_0.lon = 0.327222017691;
    tmp_msg_0.height = 0.765909693913;
    tmp_msg_0.x = 0.950574610636;
    tmp_msg_0.y = 0.534358207503;
    tmp_msg_0.z = 0.197300272789;
    tmp_msg_0.phi = 0.200278901654;
    tmp_msg_0.theta = 0.614452568619;
    tmp_msg_0.psi = 0.710809197592;
    tmp_msg_0.u = 0.640757363551;
    tmp_msg_0.v = 0.785769082513;
    tmp_msg_0.w = 0.595596342678;
    tmp_msg_0.vx = 0.875845174916;
    tmp_msg_0.vy = 0.623822059895;
    tmp_msg_0.vz = 0.490052099604;
    tmp_msg_0.p = 0.104775771895;
    tmp_msg_0.q = 0.768946881022;
    tmp_msg_0.r = 0.453803293539;
    tmp_msg_0.depth = 0.735932718401;
    tmp_msg_0.alt = 0.0603882027567;
    msg.state.set(tmp_msg_0);
    msg.type = 168U;

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
    msg.setTimeStamp(0.0633204856011);
    msg.setSource(6903U);
    msg.setSourceEntity(39U);
    msg.setDestination(56635U);
    msg.setDestinationEntity(112U);
    msg.value = 0.266871605303;

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
    msg.setTimeStamp(0.60086030131);
    msg.setSource(41597U);
    msg.setSourceEntity(212U);
    msg.setDestination(8634U);
    msg.setDestinationEntity(185U);
    msg.value = 0.781678859152;

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
    msg.setTimeStamp(0.527648012969);
    msg.setSource(19046U);
    msg.setSourceEntity(52U);
    msg.setDestination(46048U);
    msg.setDestinationEntity(214U);
    msg.value = 0.782922796688;

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
    msg.setTimeStamp(0.968468860112);
    msg.setSource(45789U);
    msg.setSourceEntity(174U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(211U);
    msg.value = 0.920727422554;

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
    msg.setTimeStamp(0.671156486437);
    msg.setSource(37387U);
    msg.setSourceEntity(160U);
    msg.setDestination(57235U);
    msg.setDestinationEntity(230U);
    msg.value = 0.259566570383;

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
    msg.setTimeStamp(0.0598479346103);
    msg.setSource(48437U);
    msg.setSourceEntity(124U);
    msg.setDestination(34327U);
    msg.setDestinationEntity(43U);
    msg.value = 0.417460840581;

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
    msg.setTimeStamp(0.426707662156);
    msg.setSource(48721U);
    msg.setSourceEntity(19U);
    msg.setDestination(55725U);
    msg.setDestinationEntity(133U);
    msg.value = 0.336368149687;

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
    msg.setTimeStamp(0.985481104386);
    msg.setSource(14816U);
    msg.setSourceEntity(178U);
    msg.setDestination(15089U);
    msg.setDestinationEntity(248U);
    msg.value = 0.420945935653;

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
    msg.setTimeStamp(0.797503007305);
    msg.setSource(48734U);
    msg.setSourceEntity(124U);
    msg.setDestination(44321U);
    msg.setDestinationEntity(234U);
    msg.value = 0.415765187178;

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
    msg.setTimeStamp(0.944573762113);
    msg.setSource(36359U);
    msg.setSourceEntity(216U);
    msg.setDestination(52453U);
    msg.setDestinationEntity(32U);
    msg.value = 0.211657606748;

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
    msg.setTimeStamp(0.266169002389);
    msg.setSource(47698U);
    msg.setSourceEntity(124U);
    msg.setDestination(31262U);
    msg.setDestinationEntity(180U);
    msg.value = 0.69811295357;

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
    msg.setTimeStamp(0.0755598354475);
    msg.setSource(60505U);
    msg.setSourceEntity(23U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(77U);
    msg.value = 0.71836537157;

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
    msg.setTimeStamp(0.722735641171);
    msg.setSource(1859U);
    msg.setSourceEntity(33U);
    msg.setDestination(25552U);
    msg.setDestinationEntity(55U);
    msg.value = 0.263885574151;

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
    msg.setTimeStamp(0.529998330619);
    msg.setSource(30587U);
    msg.setSourceEntity(161U);
    msg.setDestination(11074U);
    msg.setDestinationEntity(195U);
    msg.value = 0.570494040974;

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
    msg.setTimeStamp(0.207681803227);
    msg.setSource(61125U);
    msg.setSourceEntity(195U);
    msg.setDestination(21047U);
    msg.setDestinationEntity(6U);
    msg.value = 0.298789351472;

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
    msg.setTimeStamp(0.417487960854);
    msg.setSource(23915U);
    msg.setSourceEntity(194U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(131U);
    msg.id = 55U;
    msg.zoom = 14U;
    msg.action = 227U;

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
    msg.setTimeStamp(0.754461055641);
    msg.setSource(31797U);
    msg.setSourceEntity(160U);
    msg.setDestination(64252U);
    msg.setDestinationEntity(99U);
    msg.id = 65U;
    msg.zoom = 53U;
    msg.action = 83U;

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
    msg.setTimeStamp(0.486386716188);
    msg.setSource(53116U);
    msg.setSourceEntity(56U);
    msg.setDestination(31592U);
    msg.setDestinationEntity(52U);
    msg.id = 70U;
    msg.zoom = 34U;
    msg.action = 194U;

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
    msg.setTimeStamp(0.19957615102);
    msg.setSource(39204U);
    msg.setSourceEntity(24U);
    msg.setDestination(58773U);
    msg.setDestinationEntity(36U);
    msg.id = 145U;
    msg.value = 0.854012374699;

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
    msg.setTimeStamp(0.490429011346);
    msg.setSource(18451U);
    msg.setSourceEntity(144U);
    msg.setDestination(49357U);
    msg.setDestinationEntity(235U);
    msg.id = 20U;
    msg.value = 0.0874928255152;

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
    msg.setTimeStamp(0.316127684945);
    msg.setSource(29471U);
    msg.setSourceEntity(210U);
    msg.setDestination(29675U);
    msg.setDestinationEntity(44U);
    msg.id = 172U;
    msg.value = 0.113585236367;

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
    msg.setTimeStamp(0.592373628005);
    msg.setSource(3487U);
    msg.setSourceEntity(134U);
    msg.setDestination(50390U);
    msg.setDestinationEntity(159U);
    msg.id = 143U;
    msg.value = 0.699233853731;

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
    msg.setTimeStamp(0.989312632176);
    msg.setSource(33514U);
    msg.setSourceEntity(2U);
    msg.setDestination(16538U);
    msg.setDestinationEntity(166U);
    msg.id = 18U;
    msg.value = 0.995284019358;

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
    msg.setTimeStamp(0.595822972728);
    msg.setSource(60187U);
    msg.setSourceEntity(199U);
    msg.setDestination(10455U);
    msg.setDestinationEntity(237U);
    msg.id = 250U;
    msg.value = 0.159542825279;

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
    msg.setTimeStamp(0.00525483611523);
    msg.setSource(23368U);
    msg.setSourceEntity(143U);
    msg.setDestination(48963U);
    msg.setDestinationEntity(23U);
    msg.id = 111U;
    msg.angle = 0.313789699566;

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
    msg.setTimeStamp(0.590504765515);
    msg.setSource(54075U);
    msg.setSourceEntity(101U);
    msg.setDestination(6236U);
    msg.setDestinationEntity(16U);
    msg.id = 197U;
    msg.angle = 0.392267604189;

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
    msg.setTimeStamp(0.10505861793);
    msg.setSource(58567U);
    msg.setSourceEntity(98U);
    msg.setDestination(53888U);
    msg.setDestinationEntity(11U);
    msg.id = 68U;
    msg.angle = 0.73194383331;

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
    msg.setTimeStamp(0.340428619768);
    msg.setSource(54339U);
    msg.setSourceEntity(112U);
    msg.setDestination(6600U);
    msg.setDestinationEntity(148U);
    msg.op = 153U;
    msg.actions.assign("DOCKZMUTKJBSTDRZOMBBUNQHUUVCDQRQDWAHJFHDKIIXUFOWASKYEACTMBGOEGTJLVFSPTDOLKLPNDCUKAYIUESWRLPEVRPIWLNSWIZFJPRPHTDKQVXPQSNHXMHCATFEHGVRXBAKZDAANVGVJZMLTUPBAWXJROOGTIYP");

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
    msg.setTimeStamp(0.556807214764);
    msg.setSource(35775U);
    msg.setSourceEntity(67U);
    msg.setDestination(11665U);
    msg.setDestinationEntity(52U);
    msg.op = 151U;
    msg.actions.assign("QMDKQSGFFZUMQLCHTXHHEIUIKAGFNGIUDP");

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
    msg.setTimeStamp(0.106169526877);
    msg.setSource(344U);
    msg.setSourceEntity(4U);
    msg.setDestination(24164U);
    msg.setDestinationEntity(144U);
    msg.op = 173U;
    msg.actions.assign("QCTQCJLDVVIYSSZRKSSZMHYO");

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
    msg.setTimeStamp(0.696482956296);
    msg.setSource(7070U);
    msg.setSourceEntity(165U);
    msg.setDestination(3825U);
    msg.setDestinationEntity(79U);
    msg.actions.assign("MGTNGESDNMUJTJPPPEGQENVWXRXAJGIVSGTZQHEBXNOUREAYLYWFC");

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
    msg.setTimeStamp(0.871135249862);
    msg.setSource(50935U);
    msg.setSourceEntity(102U);
    msg.setDestination(30024U);
    msg.setDestinationEntity(200U);
    msg.actions.assign("QJCWNGTBEQGZFKISVWTOEFOYNZHSZUDOEIXUQZGASOPFIJOSNBVCBSJIZXKSIEWEUYLHMGPDMVVSJAKVUMZCXQTLLWHCMTTYZAKXXXIFEPXQ");

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
    msg.setTimeStamp(0.750207921287);
    msg.setSource(37058U);
    msg.setSourceEntity(116U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(104U);
    msg.actions.assign("TCGSTEVVRCVWHLSWCUBKUNUXFFHCLUZAVDQHXBSOVBUZNSGIKTIASJOOYDLHEQBGXKHKCUDBPFYWXSSZKPYNZRIGABJRJRFZJXTPMEUBKGIDXMMLLMFHVVXDFIIKHWFIDQXUQRFLGEQNQCFOLPPMTOAQJXMNZPROBYRKYJIYYPWOWEMINHTGZMJNMAUUAXDDOTEAFEVASZPRVHWEHAQAGJNYSLOJTSLNGZY");

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
    msg.setTimeStamp(0.337568135927);
    msg.setSource(27320U);
    msg.setSourceEntity(86U);
    msg.setDestination(57962U);
    msg.setDestinationEntity(199U);
    msg.button = 139U;
    msg.value = 57U;

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
    msg.setTimeStamp(0.945508998833);
    msg.setSource(37017U);
    msg.setSourceEntity(182U);
    msg.setDestination(14964U);
    msg.setDestinationEntity(43U);
    msg.button = 119U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.0604253174217);
    msg.setSource(40883U);
    msg.setSourceEntity(41U);
    msg.setDestination(39038U);
    msg.setDestinationEntity(16U);
    msg.button = 44U;
    msg.value = 89U;

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
    msg.setTimeStamp(0.245944340678);
    msg.setSource(45010U);
    msg.setSourceEntity(30U);
    msg.setDestination(55479U);
    msg.setDestinationEntity(62U);
    msg.op = 229U;
    msg.text.assign("LWXUBIRVQDVBMMWIILNHDBRWCCPPLGTDFBHFYEEFDCKVJJKNABWTWZRJGLTERWYOXVSJVGKUSDXIERDKXNTDVVTZRTTFOHZWFOYSHLSJZCKQLGWQNAZYPCVJMZQFZQHIHGSOIUMESMYQZTREFAQPQDYCXFUKGUCYADMWEQDRUPRPABMEYAUVFXREXTSHYBPJBIALOJKOYHUOGGNSZNHNIOKABNMGVPLIMCLOAPMEXFWKUHBJOJASTKG");

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
    msg.setTimeStamp(0.524130284079);
    msg.setSource(47716U);
    msg.setSourceEntity(30U);
    msg.setDestination(24784U);
    msg.setDestinationEntity(186U);
    msg.op = 14U;
    msg.text.assign("JGQHDYLOEEGOUTHZUNKURXLLGPWYXKZICXSULIQILZHRZMJWUYBGMGPRZWUUCARSVMLVIQNQCPHANBPLWDFCDSRNEJHFVWYNQYSRWBOPJAPJJVQSFRDGKMKTBLPJNXKDEDSTUSZMHR");

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
    msg.setTimeStamp(0.835400393117);
    msg.setSource(63590U);
    msg.setSourceEntity(45U);
    msg.setDestination(58249U);
    msg.setDestinationEntity(136U);
    msg.op = 155U;
    msg.text.assign("LUOUUUSTXGWJBIOGOPAUQWRALDZCVBODMTPFFXZQSHZPYYFNUGFGJNSQDIHAZ");

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
    msg.setTimeStamp(0.296668791151);
    msg.setSource(217U);
    msg.setSourceEntity(110U);
    msg.setDestination(51513U);
    msg.setDestinationEntity(71U);
    msg.op = 176U;
    msg.time_remain = 0.879798218035;
    msg.sched_time = 0.177669200036;

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
    msg.setTimeStamp(0.545355222542);
    msg.setSource(49556U);
    msg.setSourceEntity(36U);
    msg.setDestination(49824U);
    msg.setDestinationEntity(17U);
    msg.op = 155U;
    msg.time_remain = 0.499825808836;
    msg.sched_time = 0.794154921151;

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
    msg.setTimeStamp(0.293910591906);
    msg.setSource(53563U);
    msg.setSourceEntity(116U);
    msg.setDestination(52183U);
    msg.setDestinationEntity(97U);
    msg.op = 98U;
    msg.time_remain = 0.788847618763;
    msg.sched_time = 0.979748856157;

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
    msg.setTimeStamp(0.442284340053);
    msg.setSource(50926U);
    msg.setSourceEntity(51U);
    msg.setDestination(8217U);
    msg.setDestinationEntity(170U);
    msg.name.assign("EZTVYWEZDRRQKYHFJSGZWXNBLRVJDBFZBOSWOKCDAORMAFMLVPKVCQXQIZSWWNYNUIWQXKTFLDRUSMXFUZXEWUQJEHBPPCEGUGAPOKCVQSLIAGFKXCSJHEADZCIHDQUTYSOJFMNNFTLNCWGPBOKYWAOPHIVQVRUUZVBQHYELHCYHPEHCIMIAXXVZGOADUNKRTYNJTMMBEFCSNG");
    msg.op = 15U;
    msg.sched_time = 0.962532468706;

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
    msg.setTimeStamp(0.510470576455);
    msg.setSource(19004U);
    msg.setSourceEntity(112U);
    msg.setDestination(11377U);
    msg.setDestinationEntity(201U);
    msg.name.assign("VIYFSIKCUEQEWWFZJAPFFSWOYRDCODRVVEJQSLYUBATGMGCJPYDEHFYHPRZGUYPBJENDBNWZKAVRMAJZLNSXQDCIHATXASQBWBBLAGMRCKJLRDKYFGZSQBBVMOCHQXYHGIUFHINJLZDVGMTKPRMQPEDCZBITDLYKENROISXHMXLJLUURIFZWXCVWSOGQVNFHTSTEEZCHUWICOOFG");
    msg.op = 223U;
    msg.sched_time = 0.297238075644;

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
    msg.setTimeStamp(0.00126730553079);
    msg.setSource(42236U);
    msg.setSourceEntity(115U);
    msg.setDestination(54440U);
    msg.setDestinationEntity(179U);
    msg.name.assign("TVGPNOAFHDVPXGRNTSRLNDHYSRDOMBPBAEFRJLCINQKZWXQQSTMXRNNTYVFCLEPGDORUMMZGMWMJSBODURGNZTYEJKPGWXLPQBKCTZGLIXQTJKUPAUVVFCQVGSFOVMVBKWFWHWEYSZIXSCOFXESRB");
    msg.op = 54U;
    msg.sched_time = 0.316402515624;

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
    msg.setTimeStamp(0.0236694662627);
    msg.setSource(45607U);
    msg.setSourceEntity(55U);
    msg.setDestination(5793U);
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
    msg.setTimeStamp(0.95834337351);
    msg.setSource(24404U);
    msg.setSourceEntity(102U);
    msg.setDestination(12635U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.886115739057);
    msg.setSource(56353U);
    msg.setSourceEntity(70U);
    msg.setDestination(8871U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.654139914841);
    msg.setSource(62994U);
    msg.setSourceEntity(163U);
    msg.setDestination(3537U);
    msg.setDestinationEntity(201U);
    msg.name.assign("CVJIEPICQMDVOPIGSILEJOTGYEMCRQXUONNHUGXRSQACOFKTGPAUHPRAWBBMLKRWHEKYQBARVDYVYBNFWHMJBILDTSYGODLQGLGRCXYV");
    msg.state = 139U;

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
    msg.setTimeStamp(0.017546363562);
    msg.setSource(30437U);
    msg.setSourceEntity(232U);
    msg.setDestination(17115U);
    msg.setDestinationEntity(53U);
    msg.name.assign("ILBIHYWKRSVTVPZLWQKEHYOMSIALALOVUROXWNOXTNEQQTTNOSCGYNWDFOCFLYCHCXWETFMFMAGBMKLQEAMOS");
    msg.state = 125U;

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
    msg.setTimeStamp(0.528169228564);
    msg.setSource(21569U);
    msg.setSourceEntity(81U);
    msg.setDestination(48282U);
    msg.setDestinationEntity(188U);
    msg.name.assign("ZMZAEBTNFCLNYIUSUVWBB");
    msg.state = 79U;

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
    msg.setTimeStamp(0.925152711479);
    msg.setSource(11938U);
    msg.setSourceEntity(225U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(175U);
    msg.name.assign("SSQWUMNYPRYSAJARGFGPZLOYKZUCRBWCNTJPPYJOETCVIHYUCXHISLJGQESABZYLXQIXCUS");
    msg.value = 144U;

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
    msg.setTimeStamp(0.106478283726);
    msg.setSource(19262U);
    msg.setSourceEntity(196U);
    msg.setDestination(37520U);
    msg.setDestinationEntity(47U);
    msg.name.assign("KCOXMLVMHFIQRRBCNYTNOTBTVRYZSCDAVKLJQEAZKURTIHKFDNCJNGONGWLWEAOIHQLNPDLOQHJPFNYVZFWRBHUAPQSFBWYIGSVHZPVTUSEFNYKQZXXRLQXZSS");
    msg.value = 136U;

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
    msg.setTimeStamp(0.0635742451391);
    msg.setSource(17170U);
    msg.setSourceEntity(87U);
    msg.setDestination(65261U);
    msg.setDestinationEntity(106U);
    msg.name.assign("IUZETOTVKQWDNGBMCDHICSDRIVJWSOEOPFXPFMKATGTQVCQSFVOXVPLMYWWWOJUQKBHQXPSTIMXUGYYBJNJHFWUASNLJLDQDRLFMVAGJGTBHGVTFRRLKUNCMFGANOAGBUNPRGOTRFIFYMHZWPHWRBICDQZXWIHXYYKCXSBBKYDDTEKNCLPNSBVYQKYMMPEEAWEEDRASHSNERUPJJVOLEQBCUUVAYIZ");
    msg.value = 124U;

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
    msg.setTimeStamp(0.983732317323);
    msg.setSource(56211U);
    msg.setSourceEntity(217U);
    msg.setDestination(30562U);
    msg.setDestinationEntity(94U);
    msg.name.assign("KWEBGTPBXRJSSIKEYCNGOQFVBQXTDNUIVHZVIBCLWWVUYJNKXAKWFUZDFG");

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
    msg.setTimeStamp(0.839567895732);
    msg.setSource(49316U);
    msg.setSourceEntity(37U);
    msg.setDestination(52252U);
    msg.setDestinationEntity(135U);
    msg.name.assign("TPSEODDPEYOVTAICSCPRGGQFEMAK");

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
    msg.setTimeStamp(0.296638165961);
    msg.setSource(25353U);
    msg.setSourceEntity(74U);
    msg.setDestination(50557U);
    msg.setDestinationEntity(16U);
    msg.name.assign("IDMQXYIDPSWGYXTXBSUCIKQYBFODKZKQASMVPWFCDUQVNNTODQBADNWOGSKQBAENHFPRQGHLVRUVXEPISSERRXZAAXBTPJMQHYHHWKLLTWKCCZOTFTMSHTLJE");

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
    msg.setTimeStamp(0.522619856712);
    msg.setSource(18098U);
    msg.setSourceEntity(226U);
    msg.setDestination(9280U);
    msg.setDestinationEntity(89U);
    msg.name.assign("JJDOUJRMQOVXXFJLTLPNWISZEOGMMTTFEVJNJTNZRYRWSFXLEZKDKXLPFSEANQOWZCECUHIMFTHAHYHWLDWQQLXRGDGPMQEKBBBPKQJNYYJGRIYPFUSMHZKUOOCLDRBLCAPSWUDYCIABUGXPDDMPAIPFANCAOGZHRVBQPKMMLKGIUDHULTTNJCHMSAGCZVBSXGXWOWNQIAYZEXVSXZSVCYTFDJZBFWIBKWKIHNHOVVAIEEU");
    msg.value = 10U;

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
    msg.setTimeStamp(0.455322988877);
    msg.setSource(54759U);
    msg.setSourceEntity(216U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(96U);
    msg.name.assign("NWIUNOOKMSEVBMLPFVPORQELOHUERGCIESBJNXTFTUATARXGTZZYAHPEXQWSKCRPZSJGWBQQSMJMEVCLKIPXDJKUOSRHAJYPLYENDMWTCMXJBFDKLWUKIZ");
    msg.value = 113U;

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
    msg.setTimeStamp(0.820778554922);
    msg.setSource(50900U);
    msg.setSourceEntity(28U);
    msg.setDestination(5388U);
    msg.setDestinationEntity(103U);
    msg.name.assign("FAHNZIZTJMWYLONTDFFNZOCGGVCXTRCLUCRYEQWPPALIOSSDPMMSAXOOGIAMGYQFYSHUCIVAFGSGXGZSHPAAWKZWKBWJDVSYVHDH");
    msg.value = 15U;

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
    msg.setTimeStamp(0.902915299872);
    msg.setSource(57988U);
    msg.setSourceEntity(25U);
    msg.setDestination(32163U);
    msg.setDestinationEntity(56U);
    msg.id = 38U;
    msg.period = 2340727302U;
    msg.duty_cycle = 2551895468U;

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
    msg.setTimeStamp(0.827820085738);
    msg.setSource(57168U);
    msg.setSourceEntity(244U);
    msg.setDestination(19063U);
    msg.setDestinationEntity(244U);
    msg.id = 19U;
    msg.period = 1443357280U;
    msg.duty_cycle = 3606189480U;

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
    msg.setTimeStamp(0.893722220745);
    msg.setSource(8689U);
    msg.setSourceEntity(87U);
    msg.setDestination(50991U);
    msg.setDestinationEntity(64U);
    msg.id = 131U;
    msg.period = 3921379147U;
    msg.duty_cycle = 2113423693U;

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
    msg.setTimeStamp(0.0522821686178);
    msg.setSource(64009U);
    msg.setSourceEntity(98U);
    msg.setDestination(42192U);
    msg.setDestinationEntity(252U);
    msg.id = 254U;
    msg.period = 3569166663U;
    msg.duty_cycle = 994205040U;

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
    msg.setTimeStamp(0.659103582105);
    msg.setSource(20934U);
    msg.setSourceEntity(16U);
    msg.setDestination(44292U);
    msg.setDestinationEntity(238U);
    msg.id = 254U;
    msg.period = 3418251463U;
    msg.duty_cycle = 1918791687U;

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
    msg.setTimeStamp(0.807855173097);
    msg.setSource(55607U);
    msg.setSourceEntity(64U);
    msg.setDestination(52704U);
    msg.setDestinationEntity(236U);
    msg.id = 45U;
    msg.period = 3605626039U;
    msg.duty_cycle = 2257716001U;

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
    msg.setTimeStamp(0.793395203571);
    msg.setSource(53668U);
    msg.setSourceEntity(120U);
    msg.setDestination(59891U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.0512761434409;
    msg.lon = 0.497458338395;
    msg.height = 0.692229002491;
    msg.x = 0.548562168228;
    msg.y = 0.598387978067;
    msg.z = 0.493306571054;
    msg.phi = 0.381345906645;
    msg.theta = 0.0789701926309;
    msg.psi = 0.51920867919;
    msg.u = 0.418379013239;
    msg.v = 0.822388125142;
    msg.w = 0.874098251821;
    msg.vx = 0.399589076635;
    msg.vy = 0.257913090512;
    msg.vz = 0.244359134804;
    msg.p = 0.88423796798;
    msg.q = 0.347779021372;
    msg.r = 0.157752641236;
    msg.depth = 0.855719216739;
    msg.alt = 0.110307669683;

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
    msg.setTimeStamp(0.190065906329);
    msg.setSource(6347U);
    msg.setSourceEntity(225U);
    msg.setDestination(41797U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.745381741967;
    msg.lon = 0.778540826764;
    msg.height = 0.729147738884;
    msg.x = 0.76754046339;
    msg.y = 0.833995299927;
    msg.z = 0.750699698138;
    msg.phi = 0.887714943478;
    msg.theta = 0.879987866925;
    msg.psi = 0.104921759742;
    msg.u = 0.926870393714;
    msg.v = 0.100423093739;
    msg.w = 0.418343453648;
    msg.vx = 0.518082787325;
    msg.vy = 0.884926438221;
    msg.vz = 0.136700720214;
    msg.p = 0.633655514227;
    msg.q = 0.744242178522;
    msg.r = 0.553245368113;
    msg.depth = 0.194707875153;
    msg.alt = 0.865280420895;

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
    msg.setTimeStamp(0.169566526816);
    msg.setSource(30393U);
    msg.setSourceEntity(72U);
    msg.setDestination(16304U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.335468346897;
    msg.lon = 0.355543086612;
    msg.height = 0.951671868271;
    msg.x = 0.684472332675;
    msg.y = 0.759958181069;
    msg.z = 0.654395677039;
    msg.phi = 0.339765841874;
    msg.theta = 0.965716633776;
    msg.psi = 0.104738988058;
    msg.u = 0.499895273977;
    msg.v = 0.529831236783;
    msg.w = 0.899090951849;
    msg.vx = 0.239502618079;
    msg.vy = 0.561332584149;
    msg.vz = 0.0638882767857;
    msg.p = 0.841133392432;
    msg.q = 0.588457297553;
    msg.r = 0.112920228073;
    msg.depth = 0.735668239863;
    msg.alt = 0.871274324822;

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
    msg.setTimeStamp(0.0360305203291);
    msg.setSource(64945U);
    msg.setSourceEntity(151U);
    msg.setDestination(19159U);
    msg.setDestinationEntity(214U);
    msg.x = 0.727442909881;
    msg.y = 0.881837670238;
    msg.z = 0.605680771864;

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
    msg.setTimeStamp(0.525511685293);
    msg.setSource(9539U);
    msg.setSourceEntity(125U);
    msg.setDestination(11527U);
    msg.setDestinationEntity(124U);
    msg.x = 0.114835725089;
    msg.y = 0.418026691276;
    msg.z = 0.397679137142;

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
    msg.setTimeStamp(0.668636167105);
    msg.setSource(41506U);
    msg.setSourceEntity(104U);
    msg.setDestination(45542U);
    msg.setDestinationEntity(155U);
    msg.x = 0.352311895418;
    msg.y = 0.760458794258;
    msg.z = 0.683869041384;

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
    msg.setTimeStamp(0.595951992514);
    msg.setSource(22687U);
    msg.setSourceEntity(220U);
    msg.setDestination(35077U);
    msg.setDestinationEntity(172U);
    msg.value = 0.399810370997;

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
    msg.setTimeStamp(0.254543123999);
    msg.setSource(23909U);
    msg.setSourceEntity(156U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(250U);
    msg.value = 0.597275593378;

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
    msg.setTimeStamp(0.907137365194);
    msg.setSource(24346U);
    msg.setSourceEntity(87U);
    msg.setDestination(41773U);
    msg.setDestinationEntity(246U);
    msg.value = 0.349591294927;

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
    msg.setTimeStamp(0.181997939141);
    msg.setSource(9044U);
    msg.setSourceEntity(144U);
    msg.setDestination(34149U);
    msg.setDestinationEntity(159U);
    msg.value = 0.658146644896;

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
    msg.setTimeStamp(0.0715035729442);
    msg.setSource(34109U);
    msg.setSourceEntity(226U);
    msg.setDestination(5747U);
    msg.setDestinationEntity(190U);
    msg.value = 0.784198688325;

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
    msg.setTimeStamp(0.782288243478);
    msg.setSource(20324U);
    msg.setSourceEntity(210U);
    msg.setDestination(9107U);
    msg.setDestinationEntity(192U);
    msg.value = 0.517810441894;

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
    msg.setTimeStamp(0.937898968101);
    msg.setSource(27276U);
    msg.setSourceEntity(128U);
    msg.setDestination(15334U);
    msg.setDestinationEntity(79U);
    msg.x = 0.0325082045914;
    msg.y = 0.0066914541524;
    msg.z = 0.448807587655;
    msg.phi = 0.885879103857;
    msg.theta = 0.135570253346;
    msg.psi = 0.430258050277;
    msg.p = 0.996371330417;
    msg.q = 0.436514058571;
    msg.r = 0.66440556556;
    msg.u = 0.656698544645;
    msg.v = 0.421318004698;
    msg.w = 0.125429505844;
    msg.bias_psi = 0.0365557384349;
    msg.bias_r = 0.136059848151;

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
    msg.setTimeStamp(0.94651518169);
    msg.setSource(33528U);
    msg.setSourceEntity(51U);
    msg.setDestination(17178U);
    msg.setDestinationEntity(112U);
    msg.x = 0.169051486773;
    msg.y = 0.302031866359;
    msg.z = 0.600348283729;
    msg.phi = 0.977721772014;
    msg.theta = 0.745957562359;
    msg.psi = 0.897433067639;
    msg.p = 0.445768273856;
    msg.q = 0.91574897948;
    msg.r = 0.0656284111143;
    msg.u = 0.185247243863;
    msg.v = 0.902506191049;
    msg.w = 0.469905689755;
    msg.bias_psi = 0.290872663137;
    msg.bias_r = 0.296549461216;

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
    msg.setTimeStamp(0.779084307378);
    msg.setSource(52454U);
    msg.setSourceEntity(176U);
    msg.setDestination(42819U);
    msg.setDestinationEntity(55U);
    msg.x = 0.765055763492;
    msg.y = 0.594620219437;
    msg.z = 0.418639549977;
    msg.phi = 0.82799258608;
    msg.theta = 0.0311181845756;
    msg.psi = 0.711857928551;
    msg.p = 0.562184998436;
    msg.q = 0.196021652362;
    msg.r = 0.767388444564;
    msg.u = 0.182286541627;
    msg.v = 0.122690846701;
    msg.w = 0.567493964612;
    msg.bias_psi = 0.0511049339581;
    msg.bias_r = 0.8360521468;

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
    msg.setTimeStamp(0.846626641805);
    msg.setSource(56935U);
    msg.setSourceEntity(215U);
    msg.setDestination(1319U);
    msg.setDestinationEntity(115U);
    msg.bias_psi = 0.375056894544;
    msg.bias_r = 0.818578081415;
    msg.cog = 0.505399137636;
    msg.cyaw = 0.332078382244;
    msg.gps_rej_level = 0.202602116168;
    msg.lbl_rej_level = 0.0533273469421;
    msg.custom_x = 0.754577182193;
    msg.custom_y = 0.260087740154;
    msg.custom_z = 0.108841069419;

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
    msg.setTimeStamp(0.903392041685);
    msg.setSource(11401U);
    msg.setSourceEntity(102U);
    msg.setDestination(15088U);
    msg.setDestinationEntity(49U);
    msg.bias_psi = 0.407796162918;
    msg.bias_r = 0.211368362192;
    msg.cog = 0.272593754303;
    msg.cyaw = 0.80024999067;
    msg.gps_rej_level = 0.000744344669276;
    msg.lbl_rej_level = 0.390564205874;
    msg.custom_x = 0.826322562011;
    msg.custom_y = 0.793021620362;
    msg.custom_z = 0.408637593231;

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
    msg.setTimeStamp(0.726049844246);
    msg.setSource(54257U);
    msg.setSourceEntity(55U);
    msg.setDestination(58875U);
    msg.setDestinationEntity(12U);
    msg.bias_psi = 0.022194649583;
    msg.bias_r = 0.0326638006751;
    msg.cog = 0.0529546759081;
    msg.cyaw = 0.742777421636;
    msg.gps_rej_level = 0.9199704268;
    msg.lbl_rej_level = 0.704897542697;
    msg.custom_x = 0.64866666499;
    msg.custom_y = 0.90310976631;
    msg.custom_z = 0.936478584122;

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
    msg.setTimeStamp(0.861410905992);
    msg.setSource(2105U);
    msg.setSourceEntity(115U);
    msg.setDestination(51580U);
    msg.setDestinationEntity(153U);
    msg.utc_time = 0.105108321774;
    msg.reason = 254U;

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
    msg.setTimeStamp(0.409729087992);
    msg.setSource(48404U);
    msg.setSourceEntity(232U);
    msg.setDestination(47993U);
    msg.setDestinationEntity(245U);
    msg.utc_time = 0.0978045904549;
    msg.reason = 26U;

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
    msg.setTimeStamp(0.963726529449);
    msg.setSource(20260U);
    msg.setSourceEntity(186U);
    msg.setDestination(48323U);
    msg.setDestinationEntity(224U);
    msg.utc_time = 0.74911954469;
    msg.reason = 135U;

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
    msg.setTimeStamp(0.700966857368);
    msg.setSource(47513U);
    msg.setSourceEntity(213U);
    msg.setDestination(40949U);
    msg.setDestinationEntity(28U);
    msg.id = 133U;
    msg.range = 0.257468425872;
    msg.acceptance = 150U;

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
    msg.setTimeStamp(0.214163394001);
    msg.setSource(35759U);
    msg.setSourceEntity(2U);
    msg.setDestination(775U);
    msg.setDestinationEntity(71U);
    msg.id = 64U;
    msg.range = 0.311954720504;
    msg.acceptance = 13U;

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
    msg.setTimeStamp(0.307433300302);
    msg.setSource(8817U);
    msg.setSourceEntity(133U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(12U);
    msg.id = 104U;
    msg.range = 0.912365146474;
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
    msg.setTimeStamp(0.865598137942);
    msg.setSource(60816U);
    msg.setSourceEntity(175U);
    msg.setDestination(10074U);
    msg.setDestinationEntity(166U);
    msg.type = 57U;
    msg.reason = 235U;
    msg.value = 0.613550232505;
    msg.timestep = 0.645776152626;

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
    msg.setTimeStamp(0.672317111159);
    msg.setSource(42881U);
    msg.setSourceEntity(130U);
    msg.setDestination(24878U);
    msg.setDestinationEntity(136U);
    msg.type = 129U;
    msg.reason = 246U;
    msg.value = 0.593776175889;
    msg.timestep = 0.879491222353;

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
    msg.setTimeStamp(0.114584103279);
    msg.setSource(59590U);
    msg.setSourceEntity(24U);
    msg.setDestination(33797U);
    msg.setDestinationEntity(142U);
    msg.type = 246U;
    msg.reason = 177U;
    msg.value = 0.882612155992;
    msg.timestep = 0.488632639254;

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
    msg.setTimeStamp(0.00625651770055);
    msg.setSource(62237U);
    msg.setSourceEntity(19U);
    msg.setDestination(45358U);
    msg.setDestinationEntity(254U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TXAUZHWUIMIOEOXPYL");
    tmp_msg_0.lat = 0.769398221031;
    tmp_msg_0.lon = 0.292521288337;
    tmp_msg_0.depth = 0.41929612548;
    tmp_msg_0.query_channel = 198U;
    tmp_msg_0.reply_channel = 219U;
    tmp_msg_0.transponder_delay = 19U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.891523259422;
    msg.y = 0.00570156691056;
    msg.var_x = 0.513709883634;
    msg.var_y = 0.187031166523;
    msg.distance = 0.387058355324;

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
    msg.setTimeStamp(0.0117584280473);
    msg.setSource(10316U);
    msg.setSourceEntity(137U);
    msg.setDestination(41177U);
    msg.setDestinationEntity(83U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IHANBDRXKPVGQYWHTLIHNPFPHCRVWOSELQNBSNGVFUKPCXETLFKEBXAWA");
    tmp_msg_0.lat = 0.926749978811;
    tmp_msg_0.lon = 0.355850466954;
    tmp_msg_0.depth = 0.709380359458;
    tmp_msg_0.query_channel = 20U;
    tmp_msg_0.reply_channel = 18U;
    tmp_msg_0.transponder_delay = 228U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.801240793645;
    msg.y = 0.352268927921;
    msg.var_x = 0.281585401234;
    msg.var_y = 0.768046409948;
    msg.distance = 0.98193368555;

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
    msg.setTimeStamp(0.0484058494615);
    msg.setSource(41809U);
    msg.setSourceEntity(125U);
    msg.setDestination(63746U);
    msg.setDestinationEntity(71U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QMAJATNFSIIIGYPQVJSCZDSZINTCOTYRPAEWDUNMBLARSOKPUWEYNLGXFODYYNZEXASRMMBHDQOQIEIKIXULCJPNVHFEFRJMOZZTLFCXVYSLWPEXGRCKWAKJDCOHYAZCOAGBMRFCUKWLFHKKQEMVVPKXJMKYFHFPRLLMQDLOGGZGZWDABVBQHPGX");
    tmp_msg_0.lat = 0.362675541491;
    tmp_msg_0.lon = 0.115007977101;
    tmp_msg_0.depth = 0.276737778691;
    tmp_msg_0.query_channel = 141U;
    tmp_msg_0.reply_channel = 231U;
    tmp_msg_0.transponder_delay = 100U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.826267902458;
    msg.y = 0.416953817735;
    msg.var_x = 0.410821860939;
    msg.var_y = 0.472267064219;
    msg.distance = 0.747029755841;

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
    msg.setTimeStamp(0.0713517804519);
    msg.setSource(41024U);
    msg.setSourceEntity(61U);
    msg.setDestination(57846U);
    msg.setDestinationEntity(148U);
    msg.state = 37U;

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
    msg.setTimeStamp(0.421110717641);
    msg.setSource(54377U);
    msg.setSourceEntity(52U);
    msg.setDestination(25345U);
    msg.setDestinationEntity(31U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.391057935307);
    msg.setSource(54291U);
    msg.setSourceEntity(60U);
    msg.setDestination(58911U);
    msg.setDestinationEntity(126U);
    msg.state = 8U;

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
    msg.setTimeStamp(0.729621351942);
    msg.setSource(37866U);
    msg.setSourceEntity(198U);
    msg.setDestination(26029U);
    msg.setDestinationEntity(25U);
    msg.x = 0.438783065898;
    msg.y = 0.735329531766;
    msg.z = 0.953986845423;

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
    msg.setTimeStamp(0.794003253875);
    msg.setSource(43363U);
    msg.setSourceEntity(220U);
    msg.setDestination(29705U);
    msg.setDestinationEntity(172U);
    msg.x = 0.270285637332;
    msg.y = 0.30739315643;
    msg.z = 0.853678087643;

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
    msg.setTimeStamp(0.822474128865);
    msg.setSource(27392U);
    msg.setSourceEntity(99U);
    msg.setDestination(44079U);
    msg.setDestinationEntity(4U);
    msg.x = 0.818871904584;
    msg.y = 0.75668086387;
    msg.z = 0.72477188703;

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
    msg.setTimeStamp(0.567480063258);
    msg.setSource(63174U);
    msg.setSourceEntity(234U);
    msg.setDestination(55922U);
    msg.setDestinationEntity(5U);
    msg.va = 0.442953295117;
    msg.aoa = 0.53516365622;
    msg.ssa = 0.692305690875;

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
    msg.setTimeStamp(0.344467429165);
    msg.setSource(14634U);
    msg.setSourceEntity(166U);
    msg.setDestination(52669U);
    msg.setDestinationEntity(53U);
    msg.va = 0.554683943913;
    msg.aoa = 0.750353651359;
    msg.ssa = 0.12168196679;

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
    msg.setTimeStamp(0.612860657767);
    msg.setSource(1504U);
    msg.setSourceEntity(186U);
    msg.setDestination(39451U);
    msg.setDestinationEntity(208U);
    msg.va = 0.0539311598148;
    msg.aoa = 0.420301215832;
    msg.ssa = 0.668412682916;

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
    msg.setTimeStamp(0.183622312097);
    msg.setSource(19924U);
    msg.setSourceEntity(187U);
    msg.setDestination(12768U);
    msg.setDestinationEntity(148U);
    msg.mmsi = 1752087452U;
    msg.lon = 0.351218713219;
    msg.lat = 0.37723824728;
    msg.x = 0.950073721073;
    msg.y = 0.0280780699456;
    msg.psi = 0.317648999633;
    msg.u = 0.658159625158;
    msg.v = 0.540222293215;
    msg.a = 0.786144021447;
    msg.b = 0.984750173758;
    msg.c = 0.764003563118;
    msg.d = 0.2580939739;

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
    msg.setTimeStamp(0.450020757616);
    msg.setSource(41269U);
    msg.setSourceEntity(135U);
    msg.setDestination(4343U);
    msg.setDestinationEntity(37U);
    msg.mmsi = 1281158767U;
    msg.lon = 0.338697549583;
    msg.lat = 0.0705127725033;
    msg.x = 0.606043635915;
    msg.y = 0.886035264926;
    msg.psi = 0.922899914858;
    msg.u = 0.467956543383;
    msg.v = 0.273017817371;
    msg.a = 0.589767864768;
    msg.b = 0.200636480398;
    msg.c = 0.24036125854;
    msg.d = 0.157114701737;

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
    msg.setTimeStamp(0.627144718039);
    msg.setSource(24927U);
    msg.setSourceEntity(201U);
    msg.setDestination(11994U);
    msg.setDestinationEntity(200U);
    msg.mmsi = 2572167691U;
    msg.lon = 0.506677232973;
    msg.lat = 0.968664400714;
    msg.x = 0.20041846772;
    msg.y = 0.47075157903;
    msg.psi = 0.384837888673;
    msg.u = 0.635034209824;
    msg.v = 0.412879418769;
    msg.a = 0.829691234265;
    msg.b = 0.931053473641;
    msg.c = 0.817450942964;
    msg.d = 0.667081013949;

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
    msg.setTimeStamp(0.707742166189);
    msg.setSource(38220U);
    msg.setSourceEntity(9U);
    msg.setDestination(22424U);
    msg.setDestinationEntity(86U);
    msg.value = 0.517467769717;

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
    msg.setTimeStamp(0.206848848618);
    msg.setSource(3180U);
    msg.setSourceEntity(115U);
    msg.setDestination(5606U);
    msg.setDestinationEntity(204U);
    msg.value = 0.141491284159;

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
    msg.setTimeStamp(0.186067039864);
    msg.setSource(3024U);
    msg.setSourceEntity(40U);
    msg.setDestination(13826U);
    msg.setDestinationEntity(40U);
    msg.value = 0.951141237032;

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
    msg.setTimeStamp(0.177107968954);
    msg.setSource(16252U);
    msg.setSourceEntity(216U);
    msg.setDestination(43576U);
    msg.setDestinationEntity(168U);
    msg.value = 0.00743961208063;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.607043390594);
    msg.setSource(16239U);
    msg.setSourceEntity(125U);
    msg.setDestination(4262U);
    msg.setDestinationEntity(185U);
    msg.value = 0.714886517341;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.966116544406);
    msg.setSource(44495U);
    msg.setSourceEntity(125U);
    msg.setDestination(49025U);
    msg.setDestinationEntity(222U);
    msg.value = 0.696497732513;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.747554054728);
    msg.setSource(61779U);
    msg.setSourceEntity(39U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0672966944815;
    msg.speed_units = 57U;

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
    msg.setTimeStamp(0.884097755052);
    msg.setSource(51121U);
    msg.setSourceEntity(136U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0963540614188;
    msg.speed_units = 121U;

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
    msg.setTimeStamp(0.257937163669);
    msg.setSource(65168U);
    msg.setSourceEntity(125U);
    msg.setDestination(45529U);
    msg.setDestinationEntity(222U);
    msg.value = 0.466032837101;
    msg.speed_units = 142U;

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
    msg.setTimeStamp(0.896409842574);
    msg.setSource(63689U);
    msg.setSourceEntity(108U);
    msg.setDestination(44329U);
    msg.setDestinationEntity(191U);
    msg.value = 0.264122369444;

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
    msg.setTimeStamp(0.83093012243);
    msg.setSource(28008U);
    msg.setSourceEntity(238U);
    msg.setDestination(1361U);
    msg.setDestinationEntity(127U);
    msg.value = 0.858959689543;

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
    msg.setTimeStamp(0.849620468464);
    msg.setSource(42911U);
    msg.setSourceEntity(98U);
    msg.setDestination(2351U);
    msg.setDestinationEntity(250U);
    msg.value = 0.117814886067;

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
    msg.setTimeStamp(0.600697731515);
    msg.setSource(46140U);
    msg.setSourceEntity(104U);
    msg.setDestination(501U);
    msg.setDestinationEntity(240U);
    msg.value = 0.936453536337;

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
    msg.setTimeStamp(0.411812167975);
    msg.setSource(25359U);
    msg.setSourceEntity(129U);
    msg.setDestination(64435U);
    msg.setDestinationEntity(230U);
    msg.value = 0.717015568904;

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
    msg.setTimeStamp(0.0578428427497);
    msg.setSource(9091U);
    msg.setSourceEntity(45U);
    msg.setDestination(64924U);
    msg.setDestinationEntity(72U);
    msg.value = 0.60376828887;

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
    msg.setTimeStamp(0.170092029281);
    msg.setSource(48338U);
    msg.setSourceEntity(92U);
    msg.setDestination(63334U);
    msg.setDestinationEntity(207U);
    msg.value = 0.450226576399;

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
    msg.setTimeStamp(0.706829473199);
    msg.setSource(26377U);
    msg.setSourceEntity(103U);
    msg.setDestination(63350U);
    msg.setDestinationEntity(254U);
    msg.value = 0.735192242393;

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
    msg.setTimeStamp(0.867068719641);
    msg.setSource(4063U);
    msg.setSourceEntity(155U);
    msg.setDestination(25636U);
    msg.setDestinationEntity(26U);
    msg.value = 0.967946136398;

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
    msg.setTimeStamp(0.244565836345);
    msg.setSource(36139U);
    msg.setSourceEntity(114U);
    msg.setDestination(30140U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 4191844486U;
    msg.start_lat = 0.99429838634;
    msg.start_lon = 0.928448803103;
    msg.start_z = 0.671003265176;
    msg.start_z_units = 58U;
    msg.end_lat = 0.871856623512;
    msg.end_lon = 0.556245226923;
    msg.end_z = 0.551343043551;
    msg.end_z_units = 60U;
    msg.speed = 0.342944971468;
    msg.speed_units = 200U;
    msg.lradius = 0.0402795649268;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.562847823494);
    msg.setSource(52632U);
    msg.setSourceEntity(249U);
    msg.setDestination(44112U);
    msg.setDestinationEntity(239U);
    msg.path_ref = 3193039248U;
    msg.start_lat = 0.821517079925;
    msg.start_lon = 0.910474413614;
    msg.start_z = 0.787803140267;
    msg.start_z_units = 162U;
    msg.end_lat = 0.977826711971;
    msg.end_lon = 0.391385640094;
    msg.end_z = 0.0604104080165;
    msg.end_z_units = 224U;
    msg.speed = 0.512225714614;
    msg.speed_units = 149U;
    msg.lradius = 0.909144518018;
    msg.flags = 217U;

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
    msg.setTimeStamp(0.502864846401);
    msg.setSource(45105U);
    msg.setSourceEntity(15U);
    msg.setDestination(34993U);
    msg.setDestinationEntity(130U);
    msg.path_ref = 2189595424U;
    msg.start_lat = 0.117840111411;
    msg.start_lon = 0.39058460389;
    msg.start_z = 0.320186516978;
    msg.start_z_units = 247U;
    msg.end_lat = 0.269802670898;
    msg.end_lon = 0.994451807634;
    msg.end_z = 0.54432762845;
    msg.end_z_units = 48U;
    msg.speed = 0.998930823442;
    msg.speed_units = 48U;
    msg.lradius = 0.916842297386;
    msg.flags = 202U;

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
    msg.setTimeStamp(0.724487313583);
    msg.setSource(8665U);
    msg.setSourceEntity(88U);
    msg.setDestination(14187U);
    msg.setDestinationEntity(73U);
    msg.x = 0.944445086832;
    msg.y = 0.00528649617603;
    msg.z = 0.0487632990266;
    msg.k = 0.541766718217;
    msg.m = 0.221551370492;
    msg.n = 0.167248725383;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.662411381163);
    msg.setSource(45193U);
    msg.setSourceEntity(196U);
    msg.setDestination(162U);
    msg.setDestinationEntity(198U);
    msg.x = 0.290539872879;
    msg.y = 0.560177381415;
    msg.z = 0.389925637493;
    msg.k = 0.647669565421;
    msg.m = 0.553983215559;
    msg.n = 0.873680936654;
    msg.flags = 70U;

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
    msg.setTimeStamp(0.849986554514);
    msg.setSource(30353U);
    msg.setSourceEntity(15U);
    msg.setDestination(31010U);
    msg.setDestinationEntity(232U);
    msg.x = 0.676250109846;
    msg.y = 0.256169890701;
    msg.z = 0.892212616301;
    msg.k = 0.237645778517;
    msg.m = 0.388393102836;
    msg.n = 0.877910445809;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.0538732154324);
    msg.setSource(51826U);
    msg.setSourceEntity(0U);
    msg.setDestination(47938U);
    msg.setDestinationEntity(237U);
    msg.value = 0.993176526538;

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
    msg.setTimeStamp(0.433603388921);
    msg.setSource(27458U);
    msg.setSourceEntity(240U);
    msg.setDestination(39984U);
    msg.setDestinationEntity(2U);
    msg.value = 0.71394359983;

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
    msg.setTimeStamp(0.800145139276);
    msg.setSource(20014U);
    msg.setSourceEntity(77U);
    msg.setDestination(8980U);
    msg.setDestinationEntity(178U);
    msg.value = 0.425827700475;

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
    msg.setTimeStamp(0.721190640069);
    msg.setSource(54502U);
    msg.setSourceEntity(237U);
    msg.setDestination(43825U);
    msg.setDestinationEntity(209U);
    msg.u = 0.506132073393;
    msg.v = 0.393820217133;
    msg.w = 0.927438092454;
    msg.p = 0.267790076899;
    msg.q = 0.629935029921;
    msg.r = 0.0762644835633;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.758254530549);
    msg.setSource(48339U);
    msg.setSourceEntity(3U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(211U);
    msg.u = 0.521561460699;
    msg.v = 0.677384797602;
    msg.w = 0.0669137055861;
    msg.p = 0.403374235015;
    msg.q = 0.00877860410361;
    msg.r = 0.903452511907;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.93320898582);
    msg.setSource(48983U);
    msg.setSourceEntity(154U);
    msg.setDestination(55321U);
    msg.setDestinationEntity(12U);
    msg.u = 0.531098028991;
    msg.v = 0.813715612949;
    msg.w = 0.0410904588314;
    msg.p = 0.897051004517;
    msg.q = 0.434186505014;
    msg.r = 0.151400307209;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.764832895886);
    msg.setSource(51546U);
    msg.setSourceEntity(197U);
    msg.setDestination(32698U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 2486019674U;
    msg.start_lat = 0.927345933212;
    msg.start_lon = 0.395933068739;
    msg.start_z = 0.764665641941;
    msg.start_z_units = 37U;
    msg.end_lat = 0.802905165946;
    msg.end_lon = 0.00513839062898;
    msg.end_z = 0.31102252964;
    msg.end_z_units = 68U;
    msg.lradius = 0.470509780873;
    msg.flags = 175U;
    msg.x = 0.146460608388;
    msg.y = 0.653488012529;
    msg.z = 0.410702921976;
    msg.vx = 0.091454111379;
    msg.vy = 0.273710875778;
    msg.vz = 0.855878160344;
    msg.course_error = 0.239145957708;
    msg.eta = 56209U;

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
    msg.setTimeStamp(0.498249850033);
    msg.setSource(25869U);
    msg.setSourceEntity(210U);
    msg.setDestination(29221U);
    msg.setDestinationEntity(22U);
    msg.path_ref = 753267084U;
    msg.start_lat = 0.562661747244;
    msg.start_lon = 0.995116287369;
    msg.start_z = 0.68221827804;
    msg.start_z_units = 236U;
    msg.end_lat = 0.784903698754;
    msg.end_lon = 0.20523287248;
    msg.end_z = 0.791048464144;
    msg.end_z_units = 236U;
    msg.lradius = 0.88213148251;
    msg.flags = 114U;
    msg.x = 0.549599511612;
    msg.y = 0.742826749528;
    msg.z = 0.747192130947;
    msg.vx = 0.28879693247;
    msg.vy = 0.98647145267;
    msg.vz = 0.487778999248;
    msg.course_error = 0.682280695891;
    msg.eta = 50375U;

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
    msg.setTimeStamp(0.762722635396);
    msg.setSource(47044U);
    msg.setSourceEntity(46U);
    msg.setDestination(15080U);
    msg.setDestinationEntity(220U);
    msg.path_ref = 2070625970U;
    msg.start_lat = 0.306237063568;
    msg.start_lon = 0.285725814248;
    msg.start_z = 0.529639992247;
    msg.start_z_units = 162U;
    msg.end_lat = 0.879684271363;
    msg.end_lon = 0.669412379111;
    msg.end_z = 0.886000968511;
    msg.end_z_units = 56U;
    msg.lradius = 0.524757502722;
    msg.flags = 24U;
    msg.x = 0.242795652741;
    msg.y = 0.788772730856;
    msg.z = 0.0906610450472;
    msg.vx = 0.345521400138;
    msg.vy = 0.830943019359;
    msg.vz = 0.255468947784;
    msg.course_error = 0.925620756348;
    msg.eta = 16102U;

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
    msg.setTimeStamp(0.195090080972);
    msg.setSource(31834U);
    msg.setSourceEntity(87U);
    msg.setDestination(55332U);
    msg.setDestinationEntity(44U);
    msg.k = 0.209003736145;
    msg.m = 0.842862094517;
    msg.n = 0.474838239485;

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
    msg.setTimeStamp(0.803490056184);
    msg.setSource(54237U);
    msg.setSourceEntity(113U);
    msg.setDestination(64605U);
    msg.setDestinationEntity(6U);
    msg.k = 0.437491619921;
    msg.m = 0.979788048742;
    msg.n = 0.130194846392;

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
    msg.setTimeStamp(0.46307251112);
    msg.setSource(32391U);
    msg.setSourceEntity(70U);
    msg.setDestination(45843U);
    msg.setDestinationEntity(197U);
    msg.k = 0.00738944872767;
    msg.m = 0.145962636808;
    msg.n = 0.885172752832;

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
    msg.setTimeStamp(0.1516356677);
    msg.setSource(2822U);
    msg.setSourceEntity(181U);
    msg.setDestination(65364U);
    msg.setDestinationEntity(250U);
    msg.p = 0.0238111403903;
    msg.i = 0.535388569209;
    msg.d = 0.886720542688;
    msg.a = 0.0704554413638;

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
    msg.setTimeStamp(0.840922318791);
    msg.setSource(24544U);
    msg.setSourceEntity(148U);
    msg.setDestination(2265U);
    msg.setDestinationEntity(38U);
    msg.p = 0.322357003305;
    msg.i = 0.69864059322;
    msg.d = 0.267522483181;
    msg.a = 0.182400157938;

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
    msg.setTimeStamp(0.248390058952);
    msg.setSource(14309U);
    msg.setSourceEntity(78U);
    msg.setDestination(26125U);
    msg.setDestinationEntity(233U);
    msg.p = 0.634874708958;
    msg.i = 0.854018420059;
    msg.d = 0.494313418368;
    msg.a = 0.542532044372;

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
    msg.setTimeStamp(0.655007302157);
    msg.setSource(18901U);
    msg.setSourceEntity(206U);
    msg.setDestination(648U);
    msg.setDestinationEntity(133U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.791155628475);
    msg.setSource(15085U);
    msg.setSourceEntity(148U);
    msg.setDestination(30575U);
    msg.setDestinationEntity(242U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.806507261584);
    msg.setSource(54701U);
    msg.setSourceEntity(221U);
    msg.setDestination(37338U);
    msg.setDestinationEntity(225U);
    msg.op = 163U;

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
    msg.setTimeStamp(0.237354954617);
    msg.setSource(37520U);
    msg.setSourceEntity(249U);
    msg.setDestination(15456U);
    msg.setDestinationEntity(138U);
    msg.x = 0.200328698748;
    msg.y = 0.249494717204;
    msg.z = 0.691599343036;
    msg.vx = 0.95255771009;
    msg.vy = 0.158827601379;
    msg.vz = 0.728816343791;
    msg.ax = 0.420705759356;
    msg.ay = 0.407442893895;
    msg.az = 0.6428821322;
    msg.flags = 41716U;

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
    msg.setTimeStamp(0.397713799662);
    msg.setSource(21592U);
    msg.setSourceEntity(80U);
    msg.setDestination(28589U);
    msg.setDestinationEntity(85U);
    msg.x = 0.849631917151;
    msg.y = 0.940499695372;
    msg.z = 0.165306824955;
    msg.vx = 0.76412200122;
    msg.vy = 0.742544157362;
    msg.vz = 0.0819947039486;
    msg.ax = 0.191608377087;
    msg.ay = 0.955358308171;
    msg.az = 0.801022408775;
    msg.flags = 43971U;

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
    msg.setTimeStamp(0.553770159365);
    msg.setSource(17167U);
    msg.setSourceEntity(55U);
    msg.setDestination(25923U);
    msg.setDestinationEntity(74U);
    msg.x = 0.72023514073;
    msg.y = 0.840183501273;
    msg.z = 0.788256966208;
    msg.vx = 0.572675192353;
    msg.vy = 0.769605598462;
    msg.vz = 0.563126382611;
    msg.ax = 0.795612362722;
    msg.ay = 0.897094129489;
    msg.az = 0.91532979925;
    msg.flags = 17317U;

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
    msg.setTimeStamp(0.742619267354);
    msg.setSource(57961U);
    msg.setSourceEntity(148U);
    msg.setDestination(31311U);
    msg.setDestinationEntity(142U);
    msg.value = 0.215029384908;

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
    msg.setTimeStamp(0.639853022064);
    msg.setSource(45049U);
    msg.setSourceEntity(154U);
    msg.setDestination(45950U);
    msg.setDestinationEntity(253U);
    msg.value = 0.0469069118047;

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
    msg.setTimeStamp(0.971316480667);
    msg.setSource(4762U);
    msg.setSourceEntity(233U);
    msg.setDestination(38162U);
    msg.setDestinationEntity(199U);
    msg.value = 0.0147698083567;

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
    msg.setTimeStamp(0.115377273253);
    msg.setSource(1813U);
    msg.setSourceEntity(113U);
    msg.setDestination(33453U);
    msg.setDestinationEntity(228U);
    msg.timeout = 24438U;
    msg.lat = 0.594081476981;
    msg.lon = 0.644751343774;
    msg.z = 0.0152928760806;
    msg.z_units = 164U;
    msg.speed = 0.544682247633;
    msg.speed_units = 143U;
    msg.roll = 0.22275005505;
    msg.pitch = 0.710829051133;
    msg.yaw = 0.984604474759;
    msg.custom.assign("AUWVRBJVJBDZYWLKHWBANNDETWFAPMBFAIDCKVVHCURQXGIHYVZJNHELFCJBOIGSOTXYDBHZMCMETNCGILPOYHCSKWAQTNNQHJYXAIVWOREDTVQQXVZBZVOIYMBNSMFXWFTTHSXJFDPMLRU");

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
    msg.setTimeStamp(0.653943909942);
    msg.setSource(61376U);
    msg.setSourceEntity(241U);
    msg.setDestination(43335U);
    msg.setDestinationEntity(32U);
    msg.timeout = 1310U;
    msg.lat = 0.354637714156;
    msg.lon = 0.763089203158;
    msg.z = 0.774492726585;
    msg.z_units = 228U;
    msg.speed = 0.117406301287;
    msg.speed_units = 86U;
    msg.roll = 0.252177371227;
    msg.pitch = 0.230907691108;
    msg.yaw = 0.88525927156;
    msg.custom.assign("JPZKYUJALHZSDOCERABNNIHGSAYPLSWTJXXQUFFDRIQVFRHTLYBGWSGAORKPPOVGCNTYFLIWQJUCNLFEKFPKDCGOKDESBXAUXVGIZHBVMLWSWIXOFOZRGYZHEELMXWUYWRABNQ");

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
    msg.setTimeStamp(0.594847979998);
    msg.setSource(30708U);
    msg.setSourceEntity(246U);
    msg.setDestination(7553U);
    msg.setDestinationEntity(236U);
    msg.timeout = 5900U;
    msg.lat = 0.783590514192;
    msg.lon = 0.628365083053;
    msg.z = 0.377110219428;
    msg.z_units = 30U;
    msg.speed = 0.723143778497;
    msg.speed_units = 34U;
    msg.roll = 0.900668754724;
    msg.pitch = 0.920035684531;
    msg.yaw = 0.627315470565;
    msg.custom.assign("WFRBVTIPGQIUKEOUVXBKSNXKFPRYTQBZXUJHUZJWSTDQOVZWKRYBM");

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
    msg.setTimeStamp(0.759280409898);
    msg.setSource(52092U);
    msg.setSourceEntity(1U);
    msg.setDestination(57814U);
    msg.setDestinationEntity(117U);
    msg.timeout = 35097U;
    msg.lat = 0.684848010289;
    msg.lon = 0.976063233783;
    msg.z = 0.523251622616;
    msg.z_units = 191U;
    msg.speed = 0.517249933693;
    msg.speed_units = 210U;
    msg.duration = 1962U;
    msg.radius = 0.133621619228;
    msg.flags = 127U;
    msg.custom.assign("MVHKTSECMUTJVABFNFXHQZHBPIVHVKRCZZSQWHYIXUGDCODJUGSEYPGWDBEVCIBOPORHCMYSKOTTHNHJQNAFPSOXJDUULTQWCNRIHWGKRZXJPVHZXQWLXTAEKUKMRXURFNMFZKGBVLQMSQQCIVEATYYTEJKZ");

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
    msg.setTimeStamp(0.07703228905);
    msg.setSource(30885U);
    msg.setSourceEntity(71U);
    msg.setDestination(41775U);
    msg.setDestinationEntity(170U);
    msg.timeout = 35473U;
    msg.lat = 0.858836152099;
    msg.lon = 0.920576775584;
    msg.z = 0.615782503717;
    msg.z_units = 7U;
    msg.speed = 0.175465581853;
    msg.speed_units = 94U;
    msg.duration = 52563U;
    msg.radius = 0.567440537385;
    msg.flags = 184U;
    msg.custom.assign("WHWKRCLDHIPNAKTCBWRKALLFKJLRUSVLLRWYBJCPXOENHOPIVYJITDXCBJTYMCTHGKEKVRWNOBRWFMZBNPBHZNOGVAPZGKQQDGTYDMTYOEKMWMDRLJFPJCQIASPSHMXAHQDOUWJCCGDHYZZZIBWYIPQUFYLUFLCWEIXODUTHXMDSLX");

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
    msg.setTimeStamp(0.876766827103);
    msg.setSource(12255U);
    msg.setSourceEntity(79U);
    msg.setDestination(43004U);
    msg.setDestinationEntity(62U);
    msg.timeout = 1604U;
    msg.lat = 0.673111705296;
    msg.lon = 0.0418210490235;
    msg.z = 0.056274929748;
    msg.z_units = 56U;
    msg.speed = 0.260238417393;
    msg.speed_units = 227U;
    msg.duration = 17416U;
    msg.radius = 0.792599435667;
    msg.flags = 44U;
    msg.custom.assign("PBRKPTUVGLQDRIHNUNKABATD");

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
    msg.setTimeStamp(0.221035387216);
    msg.setSource(25857U);
    msg.setSourceEntity(60U);
    msg.setDestination(22757U);
    msg.setDestinationEntity(127U);
    msg.custom.assign("VKIUSVTPGVJSPBHXLHHERYFMYRIDVSZCCNAVLFEUZLCKBLZRMWDQXQYMWAHELILXGEQTKXFYSP");

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
    msg.setTimeStamp(0.789221966103);
    msg.setSource(17754U);
    msg.setSourceEntity(2U);
    msg.setDestination(42208U);
    msg.setDestinationEntity(50U);
    msg.custom.assign("WTXXBTSCVABEMTWCGWIUYIYWLXQGPVQHSVLYKUFPJAYZTNYMJZWL");

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
    msg.setTimeStamp(0.483447390394);
    msg.setSource(34341U);
    msg.setSourceEntity(149U);
    msg.setDestination(959U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("RZCPOSGEAVLPWNDAQZIZSWGDSKUOAFQBUAEKWUMTOVAMXFCSCUDMWZJTTLHTCHVJLVHMXYITIDYWGIGZLADOOOVHJVYJEYTYCDJWFRKQDDZBVNBGQQNNKATKKSFIZUNRFHWQIPUERBISRXRQFLSMBSLYZEECFJQHVPGRRVCWNXNOEDCLCYAZBIQLXYUABKPHXEFQNFJXCAIMJGLHN");

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
    msg.setTimeStamp(0.135525032701);
    msg.setSource(35016U);
    msg.setSourceEntity(70U);
    msg.setDestination(59310U);
    msg.setDestinationEntity(98U);
    msg.timeout = 23710U;
    msg.lat = 0.0872025590608;
    msg.lon = 0.686938405548;
    msg.z = 0.969792506542;
    msg.z_units = 105U;
    msg.duration = 26174U;
    msg.speed = 0.0777749159186;
    msg.speed_units = 194U;
    msg.type = 248U;
    msg.radius = 0.475681505035;
    msg.length = 0.975529383331;
    msg.bearing = 0.39264069326;
    msg.direction = 10U;
    msg.custom.assign("YCBPYZLQZFFMJIUZMYXFTRAQTWJSORGTGUHIYGLPRGBTSCKMLERXGAJOUESOEVENWDXFAKMPKAKDO");

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
    msg.setTimeStamp(0.0292025689812);
    msg.setSource(24864U);
    msg.setSourceEntity(40U);
    msg.setDestination(4069U);
    msg.setDestinationEntity(18U);
    msg.timeout = 957U;
    msg.lat = 0.14705170947;
    msg.lon = 0.120826857065;
    msg.z = 0.719382398721;
    msg.z_units = 166U;
    msg.duration = 46254U;
    msg.speed = 0.528413871645;
    msg.speed_units = 226U;
    msg.type = 199U;
    msg.radius = 0.439098519859;
    msg.length = 0.944393568118;
    msg.bearing = 0.545001173796;
    msg.direction = 0U;
    msg.custom.assign("WXSOIXSVIXLLHEEGZSZYTINWUCLJBBTWKARJRQHKGFPNXLRSUJVUTADJJIHNPAJNAVWJCIDUPWEKEDBTRSAFUGFAJZABYXLMOZOVPFOOXWRVPQEMTPQNHYZHJSCT");

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
    msg.setTimeStamp(0.291159091042);
    msg.setSource(55348U);
    msg.setSourceEntity(19U);
    msg.setDestination(4424U);
    msg.setDestinationEntity(49U);
    msg.timeout = 56113U;
    msg.lat = 0.908638030365;
    msg.lon = 0.701020421436;
    msg.z = 0.341412492984;
    msg.z_units = 137U;
    msg.duration = 5080U;
    msg.speed = 0.434509432678;
    msg.speed_units = 132U;
    msg.type = 229U;
    msg.radius = 0.40504438764;
    msg.length = 0.571774379143;
    msg.bearing = 0.736685754835;
    msg.direction = 210U;
    msg.custom.assign("LHDYMMADAATTSZLBYMFLYMHGNINJCCVYKYWUNPWTJXFHUQILDRCCQEJNFQOQLKNUZEJYSNESDXAWCHSGOEVZHOXRCGRKMFGCKEBKVATBHHQCOQXUQWUJLZQOELDHFXBPMXVPBUJYQCTYFOKDNOTDEWUIZFX");

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
    msg.setTimeStamp(0.866502342319);
    msg.setSource(4334U);
    msg.setSourceEntity(170U);
    msg.setDestination(48911U);
    msg.setDestinationEntity(167U);
    msg.duration = 39749U;
    msg.custom.assign("OAJKPSKYTTRGJHTJVZNDIVQZARKBMYXEUGHDDTBZMNJKXIHQOALZWQTHEHRCEXYASMNUQUVKXWDIO");

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
    msg.setTimeStamp(0.802555956373);
    msg.setSource(35658U);
    msg.setSourceEntity(131U);
    msg.setDestination(1735U);
    msg.setDestinationEntity(148U);
    msg.duration = 32972U;
    msg.custom.assign("NPGOWUEMHVDSOFZQEOKYHEZQXLGNLUUEASCCRPJCWZCEMCXLGDOBLBQSYPGAGETFFIBORFQUHLAYZDWLBKXAZLARZEKGXVUWRCLRZCNWLZTQKPMTGYDDIUIAPMHVJFOJ");

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
    msg.setTimeStamp(0.75992522597);
    msg.setSource(23569U);
    msg.setSourceEntity(44U);
    msg.setDestination(27212U);
    msg.setDestinationEntity(153U);
    msg.duration = 47734U;
    msg.custom.assign("QCSGLKAAZBEJIEAETCYVVUYNIUQUNYEPGOSZFBVDLKOWPYBERGTPHP");

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
    msg.setTimeStamp(0.494490233331);
    msg.setSource(6947U);
    msg.setSourceEntity(6U);
    msg.setDestination(17683U);
    msg.setDestinationEntity(105U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.787302378009;
    msg.control.set(tmp_msg_0);
    msg.duration = 49719U;
    msg.custom.assign("KYQHWJCYTHMGPKYVIDPPZUYAIBENOXHLFXXDSESVQHXBKNLOEDGLBFEBXRZJDTCWKKWNLKPLVJSQDFGNOAVBKBXAQONIFENJLTZTCYKVMCMECUKMILWUFGRWQTB");

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
    msg.setTimeStamp(0.300957222727);
    msg.setSource(49307U);
    msg.setSourceEntity(158U);
    msg.setDestination(28160U);
    msg.setDestinationEntity(174U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.888813888603;
    msg.control.set(tmp_msg_0);
    msg.duration = 901U;
    msg.custom.assign("CDOZMZPNBFYYDGVADWJXQMAVAZNACFIZYNGOQHWCMNWWINVUXBUYTPZYYEVWJKIFRDOMSGTJSMTRJRVNBBQHMQJTEONAPKAQIQCAOVOBSGWRXUOJYSEUHDBZNUKSKEPVPWCEPZFVPRVYLMTYXXUMLBGMZBJKEQGFRWLRHLSGCNHQTFVGISKTLLUOLJUALIZAUHZTHPQXMXADPDDHFSBLGNSEXCJWUKCOBFCTPQIDRIFJHKHEFCKYRD");

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
    msg.setTimeStamp(0.889165759728);
    msg.setSource(3253U);
    msg.setSourceEntity(219U);
    msg.setDestination(55874U);
    msg.setDestinationEntity(242U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.150590582897;
    tmp_msg_0.speed_units = 14U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55400U;
    msg.custom.assign("SXNSSHKEZFVPFIHIVUVSLOUPHMCOADVGUQQKUIHJWATDMMLEJEQWSMGNOHJLLHXCJNYKUGRLDZPCFDHOZCRJNITWPQONBWYFTIGXDIZPXPZIJUAIKGNATHLGXDQQUCKTFKMRCEGJRYXMOFHZSRARVZXCOZMPKFLBODYWFZIPMRLJBFJDNTYKRWYYCQTTGAYLXLVKPNBMAJGSDZBAVBQEXQMBHUUWYBCEDXVERFQTEOWVKPVCIA");

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
    msg.setTimeStamp(0.714139443554);
    msg.setSource(59096U);
    msg.setSourceEntity(244U);
    msg.setDestination(22146U);
    msg.setDestinationEntity(192U);
    msg.timeout = 17118U;
    msg.lat = 0.616334624103;
    msg.lon = 0.943062031099;
    msg.z = 0.279589065717;
    msg.z_units = 154U;
    msg.speed = 0.703272535712;
    msg.speed_units = 191U;
    msg.bearing = 0.471394260479;
    msg.cross_angle = 0.438407881892;
    msg.width = 0.239073871721;
    msg.length = 0.17284787734;
    msg.hstep = 0.936294920324;
    msg.coff = 225U;
    msg.alternation = 126U;
    msg.flags = 242U;
    msg.custom.assign("KPPYEPWXALATKCKNKKLFNPNYIM");

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
    msg.setTimeStamp(0.736599437239);
    msg.setSource(37349U);
    msg.setSourceEntity(214U);
    msg.setDestination(3624U);
    msg.setDestinationEntity(232U);
    msg.timeout = 2506U;
    msg.lat = 0.386575911555;
    msg.lon = 0.275870828279;
    msg.z = 0.432560854604;
    msg.z_units = 16U;
    msg.speed = 0.699982491106;
    msg.speed_units = 246U;
    msg.bearing = 0.185636337004;
    msg.cross_angle = 0.853044223086;
    msg.width = 0.695220523316;
    msg.length = 0.782284863314;
    msg.hstep = 0.891096384086;
    msg.coff = 183U;
    msg.alternation = 191U;
    msg.flags = 208U;
    msg.custom.assign("BLFOVTHWNVTMPWONAEOIWZGEHMAGHWTOKXDOYLBV");

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
    msg.setTimeStamp(0.796004064521);
    msg.setSource(46187U);
    msg.setSourceEntity(152U);
    msg.setDestination(37432U);
    msg.setDestinationEntity(121U);
    msg.timeout = 51119U;
    msg.lat = 0.986402759152;
    msg.lon = 0.0152723214082;
    msg.z = 0.882087989123;
    msg.z_units = 31U;
    msg.speed = 0.736406460434;
    msg.speed_units = 100U;
    msg.bearing = 0.965766763187;
    msg.cross_angle = 0.350742861373;
    msg.width = 0.598816835068;
    msg.length = 0.525095682064;
    msg.hstep = 0.807197697171;
    msg.coff = 172U;
    msg.alternation = 241U;
    msg.flags = 86U;
    msg.custom.assign("VIDYMUUBFZTYOTGSJHCVGOHBHLNLNTDAFPMATGAFQSMKSCCATPKTJNRVPZQBIIEMIUJCDQNYDIAXSWDYBZLRDHWOSUUMXUYPWYFKQGOHXLBACDZHTKYRKBXWSJPFBOIESTVVMKXIXCLIHLVJPYQCKDQQZKJZSRZPZFEHUNMJOYJYWWOKLJXQNREDRBCFVZHUABGLFMQGGV");

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
    msg.setTimeStamp(0.973593778266);
    msg.setSource(19329U);
    msg.setSourceEntity(22U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(151U);
    msg.timeout = 14381U;
    msg.lat = 0.157887683303;
    msg.lon = 0.676822338245;
    msg.z = 0.316244462713;
    msg.z_units = 33U;
    msg.speed = 0.0687907819832;
    msg.speed_units = 108U;
    msg.custom.assign("OHETLGZNAUHHCOYZCOFFSURAFSYBLARTLMCDOERGJHXBASVTKPGXEPZLGMBKNOYWEXAKJXTYBQYRECMVBHVDVPXHKDIPELQTGEJBOUCTZECVGDCNRNJIWNVHZKUKWJWZYDDFJZXBQFWRBIFIJNAQDPARSMHQSFLMVDUTTKLIMEBXDNBFYPMZKJMSCIIPWLTYRPURKSVCQJSMQAOAI");

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
    msg.setTimeStamp(0.580086307079);
    msg.setSource(43803U);
    msg.setSourceEntity(180U);
    msg.setDestination(56650U);
    msg.setDestinationEntity(193U);
    msg.timeout = 29117U;
    msg.lat = 0.791894280184;
    msg.lon = 0.0435196642982;
    msg.z = 0.580287977635;
    msg.z_units = 202U;
    msg.speed = 0.521303229298;
    msg.speed_units = 166U;
    msg.custom.assign("CNPALEIWOHLQKEIANEUCMWCNPEFLSGYGYPSUICITAFJBHRYPQXFOFKGVOKQJNZ");

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
    msg.setTimeStamp(0.216024295309);
    msg.setSource(51840U);
    msg.setSourceEntity(154U);
    msg.setDestination(35963U);
    msg.setDestinationEntity(140U);
    msg.timeout = 40873U;
    msg.lat = 0.213288207727;
    msg.lon = 0.737452363214;
    msg.z = 0.605029745843;
    msg.z_units = 13U;
    msg.speed = 0.55737925839;
    msg.speed_units = 147U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.804860633251;
    tmp_msg_0.y = 0.177898231574;
    tmp_msg_0.z = 0.646288089299;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YBHAOFXISCMTHYGUILWEOOXQCLRRWYWXTBTNONJZSRLVULKTVCNNDMHBGISGAYVSNXJDEQHEOTLRSDGBQAPGJCOMLKVYHRMNYDYZX");

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
    msg.setTimeStamp(0.311733904777);
    msg.setSource(62141U);
    msg.setSourceEntity(23U);
    msg.setDestination(35573U);
    msg.setDestinationEntity(138U);
    msg.x = 0.10161114788;
    msg.y = 0.144839080923;
    msg.z = 0.871153168241;

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
    msg.setTimeStamp(0.719832590421);
    msg.setSource(51720U);
    msg.setSourceEntity(67U);
    msg.setDestination(30299U);
    msg.setDestinationEntity(101U);
    msg.x = 0.819910014962;
    msg.y = 0.831263520697;
    msg.z = 0.570284092898;

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
    msg.setTimeStamp(0.445213465844);
    msg.setSource(56789U);
    msg.setSourceEntity(95U);
    msg.setDestination(9955U);
    msg.setDestinationEntity(40U);
    msg.x = 0.515404882465;
    msg.y = 0.354213983059;
    msg.z = 0.980728694097;

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
    msg.setTimeStamp(0.135186170079);
    msg.setSource(44914U);
    msg.setSourceEntity(234U);
    msg.setDestination(5933U);
    msg.setDestinationEntity(105U);
    msg.timeout = 54202U;
    msg.lat = 0.469437521818;
    msg.lon = 0.128537046349;
    msg.z = 0.98923933122;
    msg.z_units = 6U;
    msg.amplitude = 0.688847808229;
    msg.pitch = 0.370295131287;
    msg.speed = 0.707203279265;
    msg.speed_units = 168U;
    msg.custom.assign("WPVLADJMASYZVDYGXVKAJTUIMMPEWMKBIS");

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
    msg.setTimeStamp(0.699099873681);
    msg.setSource(6611U);
    msg.setSourceEntity(34U);
    msg.setDestination(33514U);
    msg.setDestinationEntity(233U);
    msg.timeout = 23029U;
    msg.lat = 0.716029716327;
    msg.lon = 0.69469062701;
    msg.z = 0.666827693642;
    msg.z_units = 35U;
    msg.amplitude = 0.838693618795;
    msg.pitch = 0.178072744907;
    msg.speed = 0.192888016536;
    msg.speed_units = 166U;
    msg.custom.assign("QKAQUXCWYFTJQMF");

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
    msg.setTimeStamp(0.22412376376);
    msg.setSource(831U);
    msg.setSourceEntity(177U);
    msg.setDestination(23809U);
    msg.setDestinationEntity(68U);
    msg.timeout = 15816U;
    msg.lat = 0.816224060758;
    msg.lon = 0.196300132891;
    msg.z = 0.691099464533;
    msg.z_units = 63U;
    msg.amplitude = 0.22048841705;
    msg.pitch = 0.327353453759;
    msg.speed = 0.239171547833;
    msg.speed_units = 20U;
    msg.custom.assign("CDBAHKRXCRYZNCYNGKGAXACTALQEKGVMIUJMXVAYGOBWPABMHHMKVAULOBPTYETGFSVLRZDWZHNOYOFDNIYZLOQQOEDIGLUWMWGINEZAPSXZUPSTOWVZXBSZIWTHBKKIJUEUKYJUB");

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
    msg.setTimeStamp(0.320000023269);
    msg.setSource(15727U);
    msg.setSourceEntity(197U);
    msg.setDestination(40216U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.352557757703);
    msg.setSource(15635U);
    msg.setSourceEntity(134U);
    msg.setDestination(15283U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.96294433857);
    msg.setSource(49101U);
    msg.setSourceEntity(223U);
    msg.setDestination(23229U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.0512414277918);
    msg.setSource(15397U);
    msg.setSourceEntity(128U);
    msg.setDestination(65145U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.110681479565;
    msg.lon = 0.47870249485;
    msg.z = 0.177595709583;
    msg.z_units = 114U;
    msg.radius = 0.188389846361;
    msg.duration = 44802U;
    msg.speed = 0.702555619547;
    msg.speed_units = 25U;
    msg.custom.assign("WKPTODCZNQTPJJLKUDVHOAXUWBWEYQXFZHEZFDXQPJNNOQMROBXKREOSYGAFNSXFCKLOFMAHGWSISBSMYVRITSKDRUZNYFEQHLVCLZWRVRLFEIWZFPTDAWWLYKCUMGDEMFKNATQRCXBSGDEVGJTEJMQYLGHRXY");

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
    msg.setTimeStamp(0.297594352869);
    msg.setSource(17785U);
    msg.setSourceEntity(232U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.874180626023;
    msg.lon = 0.318949134797;
    msg.z = 0.0667099304676;
    msg.z_units = 9U;
    msg.radius = 0.750452365187;
    msg.duration = 52507U;
    msg.speed = 0.659345957064;
    msg.speed_units = 236U;
    msg.custom.assign("ETYYKFSNHWSIHUCQGELBLCXCFCOASUNRSOVZMKJIWDXKMGXUODOEGHECMLVMTJVLDDEBUQNRZFRODHCBAFDNKXPIUBNZXIAHTOCXWBEVPNQKFAPOAYBBTYMYSKQCJFVJBFREQBQZLZPWAZLPDTQOJHDMSJCRYTI");

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
    msg.setTimeStamp(0.778312154437);
    msg.setSource(60524U);
    msg.setSourceEntity(60U);
    msg.setDestination(45921U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.452870029552;
    msg.lon = 0.505556656349;
    msg.z = 0.0787571676596;
    msg.z_units = 114U;
    msg.radius = 0.297186117096;
    msg.duration = 31662U;
    msg.speed = 0.477329857617;
    msg.speed_units = 234U;
    msg.custom.assign("NYTKBTGBFFPPDAIMFYAZQSUBOGQVXETOJSUIARZAXGQWBHVPUQYXRTLIRHGXUVLSQZYOVNCLTDGMNNLEKKWKWXABEVCGOEREMKYNCMNIZDZVMLRWQPVISTOPDFDCVJFMQUUGDGBCMOVQIMYHOHISNRFASQZPUKKHZFJWTRPNLBRTCZWJRYZRCWHFO");

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
    msg.setTimeStamp(0.381342437922);
    msg.setSource(60157U);
    msg.setSourceEntity(127U);
    msg.setDestination(61968U);
    msg.setDestinationEntity(197U);
    msg.timeout = 40813U;
    msg.flags = 227U;
    msg.lat = 0.515049438654;
    msg.lon = 0.201767118246;
    msg.start_z = 0.183969127659;
    msg.start_z_units = 5U;
    msg.end_z = 0.615374496773;
    msg.end_z_units = 9U;
    msg.radius = 0.209417985518;
    msg.speed = 0.891039716846;
    msg.speed_units = 58U;
    msg.custom.assign("SCCCRFQCSJOVUKKABDEYRQSAQQAFKRXSTQUTJBIDTFQWEZGRVIIKQIWLXELTQSPNXXRNDVMYMKAHJCITXVBFOYMMLJXYZVIWFPSFGXKYZKPDINUREVTJIBNVWLWPNUTFGEVWDHBEBEHJCPOFNJMSSLTTELDCWXHPFAPJOWBUYYHDLRHBIMHSGNPUKFLOULNSNVYAZCGZYOZPMCRGHAQGJXZCKDQ");

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
    msg.setTimeStamp(0.617630628791);
    msg.setSource(27279U);
    msg.setSourceEntity(240U);
    msg.setDestination(6012U);
    msg.setDestinationEntity(154U);
    msg.timeout = 4676U;
    msg.flags = 91U;
    msg.lat = 0.230951952228;
    msg.lon = 0.853879162291;
    msg.start_z = 0.0697094692247;
    msg.start_z_units = 126U;
    msg.end_z = 0.86313470754;
    msg.end_z_units = 156U;
    msg.radius = 0.186767452113;
    msg.speed = 0.826127994179;
    msg.speed_units = 15U;
    msg.custom.assign("CRCWPBOJBVBSLBHRKNJWGGDAMAACDXMVTXZPXOMHJKNMSZ");

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
    msg.setTimeStamp(0.902828679327);
    msg.setSource(11570U);
    msg.setSourceEntity(143U);
    msg.setDestination(5624U);
    msg.setDestinationEntity(223U);
    msg.timeout = 42278U;
    msg.flags = 36U;
    msg.lat = 0.0965447888064;
    msg.lon = 0.233122429168;
    msg.start_z = 0.291838919659;
    msg.start_z_units = 234U;
    msg.end_z = 0.362147176727;
    msg.end_z_units = 29U;
    msg.radius = 0.00767238843349;
    msg.speed = 0.288355450879;
    msg.speed_units = 173U;
    msg.custom.assign("SEBDGEOYMZXIJMLXCZCLPRASIWHKFPXEUBKBAHRUMXBLDHZCRJVDYAOWVKISWYZEPPVZLVENWJOGTSJKPXOADJPIJTKNVMUHWHTEDYXZATCFYSLTYDKMHJNODRF");

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
    msg.setTimeStamp(0.0524819104487);
    msg.setSource(53473U);
    msg.setSourceEntity(148U);
    msg.setDestination(33206U);
    msg.setDestinationEntity(51U);
    msg.timeout = 51563U;
    msg.lat = 0.593977144821;
    msg.lon = 0.555685225067;
    msg.z = 0.927619614881;
    msg.z_units = 232U;
    msg.speed = 0.878794820759;
    msg.speed_units = 156U;
    msg.custom.assign("VNKNFKCPLGXAPUPBSDRDMQUSMWYLMWMWWSKWNJFRXBNMJAMAOLAHZNABEKOFJBDOIHFQOEIGPTUKAZGUCUJMLYCLLOEEYVGRUSRGURTDOIJHFZQNVBAWHPI");

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
    msg.setTimeStamp(0.717130012669);
    msg.setSource(9402U);
    msg.setSourceEntity(187U);
    msg.setDestination(65184U);
    msg.setDestinationEntity(185U);
    msg.timeout = 34328U;
    msg.lat = 0.415286240437;
    msg.lon = 0.00187812710698;
    msg.z = 0.771426783041;
    msg.z_units = 19U;
    msg.speed = 0.348851462057;
    msg.speed_units = 97U;
    msg.custom.assign("TIXQYYKHUXGZGYEWEQARTONYKSAEHOAWQPYAIBCBJVFTKPGVIRXNJUAPKHQQTWOYNTREBGGYJGDECHLLMABWKPWEZJPBOYZXPVLUOICDFGMUSGFUUTFORHCHZXDDVNMIIJFGXWBEXQVDMVQAKOWHTAKNXJNLIMPBVQLXOBHLCWHVSNPKFRURCLCJKDTLEEWHSYJZXZRKMZUDPZSCVIARMQOLMDQO");

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
    msg.setTimeStamp(0.83335671838);
    msg.setSource(3426U);
    msg.setSourceEntity(207U);
    msg.setDestination(38486U);
    msg.setDestinationEntity(82U);
    msg.timeout = 54112U;
    msg.lat = 0.452968599925;
    msg.lon = 0.01951276351;
    msg.z = 0.240007170453;
    msg.z_units = 88U;
    msg.speed = 0.609901708896;
    msg.speed_units = 108U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.488644258397;
    tmp_msg_0.y = 0.363808776922;
    tmp_msg_0.z = 0.0557581850925;
    tmp_msg_0.t = 0.512286124696;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HPKMHKVULCEJLGXVNMYTI");

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
    msg.setTimeStamp(0.445178461429);
    msg.setSource(23412U);
    msg.setSourceEntity(177U);
    msg.setDestination(55947U);
    msg.setDestinationEntity(241U);
    msg.x = 0.947834044959;
    msg.y = 0.859820021607;
    msg.z = 0.527314031864;
    msg.t = 0.810636000406;

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
    msg.setTimeStamp(0.845412521264);
    msg.setSource(47329U);
    msg.setSourceEntity(87U);
    msg.setDestination(56803U);
    msg.setDestinationEntity(177U);
    msg.x = 0.246254304712;
    msg.y = 0.748666518077;
    msg.z = 0.781252032727;
    msg.t = 0.324148462777;

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
    msg.setTimeStamp(0.895665918115);
    msg.setSource(10767U);
    msg.setSourceEntity(89U);
    msg.setDestination(27061U);
    msg.setDestinationEntity(166U);
    msg.x = 0.795655564719;
    msg.y = 0.470746784017;
    msg.z = 0.749177245561;
    msg.t = 0.0700088788637;

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
    msg.setTimeStamp(0.965038538522);
    msg.setSource(33075U);
    msg.setSourceEntity(225U);
    msg.setDestination(43784U);
    msg.setDestinationEntity(171U);
    msg.timeout = 28527U;
    msg.name.assign("JFSEHMHCLCHEWJSOEAMKIKVQCBPVIBXDWFSHGJWZQYKWODJODAXTTKEXVRKDNOXAPRMCNFLCIORVQKKQQUEPREFYLSNERBBYGGLPVBXGXHGSAJZ");
    msg.custom.assign("LTOGUVUKLREDHLSIBYCILPWNZABSREJQZDTSHMLZEAMERMKZWCYQBZCCAZPSLSHENANTIXMDYDPVVMPKXQRRUOCNVGJIHJXZGWCWRBWQBIVYFBYAOYLJAJNUFQWJZEXNJWKBZKEWUDFNS");

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
    msg.setTimeStamp(0.701801414576);
    msg.setSource(34574U);
    msg.setSourceEntity(11U);
    msg.setDestination(16556U);
    msg.setDestinationEntity(45U);
    msg.timeout = 18427U;
    msg.name.assign("VTREUTWGRDCTDMFQMPZSJSYJCMONAFRNBLVUKBCAPPYILPYMQBQXYZKRICKWXBUKOKHTECSDGVWIUNQQYSDNVKGHLDGTSPGBNFLETWJJRRULKJIHRHJFLYFWIOWZHUACZZIRARSHAZQGGXLINVYILTUUMXHQHUMBVSPRNTXJDIDOWZMOAGWFDJVIOLLFYYTYXVME");
    msg.custom.assign("CJXOWXCIBUWLMO");

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
    msg.setTimeStamp(0.289631666098);
    msg.setSource(7350U);
    msg.setSourceEntity(213U);
    msg.setDestination(20750U);
    msg.setDestinationEntity(75U);
    msg.timeout = 62002U;
    msg.name.assign("OZBZRMDXVXACXJSJIEQYUNNAKIQYFXWQEDVLRQWLKTGYBPYZKCVCPLPIYJUJPQWAGFOZPMVSGLJKFRTYWPIJOGQMEZBQWCFAODLLXNPKKJWAHWYFITTWUILF");
    msg.custom.assign("FOTWELGLSALEJSMVRDYZBYSAXDKSCRIWEHQIFCHUQNUAQBXHWCXDSPYBPKHZIFPOWOMNXORMOJNPFIWIRMTAUAPZFABKUWQOYBMBGIVWQCZGQYCDKPLICHFXONGXUEYJBLCFZLMINGKAKWMENU");

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
    msg.setTimeStamp(0.835367225129);
    msg.setSource(35588U);
    msg.setSourceEntity(60U);
    msg.setDestination(5573U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.864761143058;
    msg.lon = 0.0130180674923;
    msg.z = 0.44489353628;
    msg.z_units = 148U;
    msg.speed = 0.415478760151;
    msg.speed_units = 101U;
    msg.start_time = 0.897125773059;
    msg.custom.assign("UACGRIVVWODIIQQXTOFKNFX");

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
    msg.setTimeStamp(0.00924915118008);
    msg.setSource(25603U);
    msg.setSourceEntity(11U);
    msg.setDestination(35485U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.962921495858;
    msg.lon = 0.648692964459;
    msg.z = 0.106226561089;
    msg.z_units = 195U;
    msg.speed = 0.811503706662;
    msg.speed_units = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30423U;
    tmp_msg_0.off_x = 0.540433583183;
    tmp_msg_0.off_y = 0.996703815176;
    tmp_msg_0.off_z = 0.194040504232;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.00444968944981;
    msg.custom.assign("QGLLUJTDPAIBNWKJODFPSIRANWLZSOBYYDGKTIHKTJVASOBTZRMDFVETEHJMQSEXRZYJNCYIHPOTCNXPBZMWUSUCYEUUSSGDWLLDGCARDXVTKMPLFDKMTWAOYXZWVXFOCSXXGCVTHEHOAAPOKQJOWRZIXRXKHMM");

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
    msg.setTimeStamp(0.556504394603);
    msg.setSource(14782U);
    msg.setSourceEntity(29U);
    msg.setDestination(41534U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.335995950827;
    msg.lon = 0.773988721863;
    msg.z = 0.255122333401;
    msg.z_units = 134U;
    msg.speed = 0.1506441804;
    msg.speed_units = 177U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47143U;
    tmp_msg_0.off_x = 0.81365371057;
    tmp_msg_0.off_y = 0.649910706378;
    tmp_msg_0.off_z = 0.116093022792;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.00227539043537;
    msg.custom.assign("EWMQNVBCQUKLGCRBAMGJKFQBHVFERBFCJXZFAPOIEQALENIPXURPWTKDUJVIMFSYOJUOTJTTWNKROSNTJLGFBLPPELAKYMAKVHYCZOGWNZLUZGZ");

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
    msg.setTimeStamp(0.821775535436);
    msg.setSource(8994U);
    msg.setSourceEntity(6U);
    msg.setDestination(44603U);
    msg.setDestinationEntity(57U);
    msg.vid = 33840U;
    msg.off_x = 0.904222652672;
    msg.off_y = 0.166456758352;
    msg.off_z = 0.283076869593;

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
    msg.setTimeStamp(0.532402195975);
    msg.setSource(29774U);
    msg.setSourceEntity(83U);
    msg.setDestination(26014U);
    msg.setDestinationEntity(227U);
    msg.vid = 1706U;
    msg.off_x = 0.75486038823;
    msg.off_y = 0.293545896833;
    msg.off_z = 0.32182575189;

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
    msg.setTimeStamp(0.26905812482);
    msg.setSource(19996U);
    msg.setSourceEntity(75U);
    msg.setDestination(62294U);
    msg.setDestinationEntity(224U);
    msg.vid = 60695U;
    msg.off_x = 0.165555717355;
    msg.off_y = 0.667398472072;
    msg.off_z = 0.504694545646;

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
    msg.setTimeStamp(0.864430529078);
    msg.setSource(18972U);
    msg.setSourceEntity(222U);
    msg.setDestination(12092U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.172682655783);
    msg.setSource(8125U);
    msg.setSourceEntity(251U);
    msg.setDestination(21394U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.956945210764);
    msg.setSource(10146U);
    msg.setSourceEntity(72U);
    msg.setDestination(49581U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.464128269037);
    msg.setSource(60364U);
    msg.setSourceEntity(60U);
    msg.setDestination(18484U);
    msg.setDestinationEntity(26U);
    msg.mid = 17263U;

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
    msg.setTimeStamp(0.423497889316);
    msg.setSource(6135U);
    msg.setSourceEntity(161U);
    msg.setDestination(5832U);
    msg.setDestinationEntity(219U);
    msg.mid = 38859U;

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
    msg.setTimeStamp(0.337375360881);
    msg.setSource(44090U);
    msg.setSourceEntity(8U);
    msg.setDestination(60258U);
    msg.setDestinationEntity(90U);
    msg.mid = 27529U;

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
    msg.setTimeStamp(0.973863725476);
    msg.setSource(58396U);
    msg.setSourceEntity(130U);
    msg.setDestination(16829U);
    msg.setDestinationEntity(238U);
    msg.state = 155U;
    msg.eta = 50482U;
    msg.info.assign("IFHFGNVPEPYUKILJGGPMDHFXPMYPANNNCPTSSOHGLPWDWSHWTHGAECCZEWNWZEBLYFXSUIMTOTXSQQTHLMGVTDFILVVJWNQPFAYZOKXORNISEZQQIAYFX");

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
    msg.setTimeStamp(0.239596620788);
    msg.setSource(6279U);
    msg.setSourceEntity(17U);
    msg.setDestination(26765U);
    msg.setDestinationEntity(200U);
    msg.state = 155U;
    msg.eta = 27393U;
    msg.info.assign("OFYJOKKZDDVGPNCZAAPXJF");

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
    msg.setTimeStamp(0.33971759356);
    msg.setSource(59390U);
    msg.setSourceEntity(109U);
    msg.setDestination(27337U);
    msg.setDestinationEntity(81U);
    msg.state = 27U;
    msg.eta = 34632U;
    msg.info.assign("XXJKSFPAPVDNKGDYECSLMGHHORPKAPQQYTPCZXJFVHGZNYKHPFTQUZPLABTLOHZIPGCDUEBJGYIMNKAIS");

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
    msg.setTimeStamp(0.130482419111);
    msg.setSource(54582U);
    msg.setSourceEntity(210U);
    msg.setDestination(43574U);
    msg.setDestinationEntity(147U);
    msg.system = 13463U;
    msg.duration = 52913U;
    msg.speed = 0.751290816967;
    msg.speed_units = 53U;
    msg.x = 0.640822705039;
    msg.y = 0.501868924694;
    msg.z = 0.583441365483;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.440575700634);
    msg.setSource(51517U);
    msg.setSourceEntity(11U);
    msg.setDestination(2571U);
    msg.setDestinationEntity(244U);
    msg.system = 18947U;
    msg.duration = 56086U;
    msg.speed = 0.989624963026;
    msg.speed_units = 94U;
    msg.x = 0.46623048465;
    msg.y = 0.539400237854;
    msg.z = 0.851864261921;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.143547740309);
    msg.setSource(63317U);
    msg.setSourceEntity(196U);
    msg.setDestination(60307U);
    msg.setDestinationEntity(73U);
    msg.system = 31924U;
    msg.duration = 13708U;
    msg.speed = 0.453576480439;
    msg.speed_units = 132U;
    msg.x = 0.365280239292;
    msg.y = 0.213925437127;
    msg.z = 0.583661960566;
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
    msg.setTimeStamp(0.0208507814995);
    msg.setSource(45382U);
    msg.setSourceEntity(235U);
    msg.setDestination(35144U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.973529300874;
    msg.lon = 0.207027314751;
    msg.speed = 0.166456976763;
    msg.speed_units = 108U;
    msg.duration = 45774U;
    msg.sys_a = 44454U;
    msg.sys_b = 30749U;
    msg.move_threshold = 0.348950165601;

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
    msg.setTimeStamp(0.706019349095);
    msg.setSource(29269U);
    msg.setSourceEntity(15U);
    msg.setDestination(7829U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.280768602247;
    msg.lon = 0.614200868505;
    msg.speed = 0.626200647163;
    msg.speed_units = 242U;
    msg.duration = 27288U;
    msg.sys_a = 38004U;
    msg.sys_b = 1219U;
    msg.move_threshold = 0.54937631261;

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
    msg.setTimeStamp(0.335548556024);
    msg.setSource(2639U);
    msg.setSourceEntity(20U);
    msg.setDestination(22994U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.900687656213;
    msg.lon = 0.310213104161;
    msg.speed = 0.702240977236;
    msg.speed_units = 173U;
    msg.duration = 22667U;
    msg.sys_a = 28539U;
    msg.sys_b = 2440U;
    msg.move_threshold = 0.938766167197;

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
    msg.setTimeStamp(0.526371155922);
    msg.setSource(58268U);
    msg.setSourceEntity(12U);
    msg.setDestination(64067U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.23787320329;
    msg.lon = 0.192563281936;
    msg.z = 0.691076461642;
    msg.z_units = 191U;
    msg.speed = 0.243002248442;
    msg.speed_units = 134U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2375390719;
    tmp_msg_0.lon = 0.267808142375;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MDUUINCKGQZPYCHCSHRNCRPQRYYGNAQAEUXW");

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
    msg.setTimeStamp(0.408938837957);
    msg.setSource(11193U);
    msg.setSourceEntity(22U);
    msg.setDestination(56972U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.951299843205;
    msg.lon = 0.853339992036;
    msg.z = 0.989030785534;
    msg.z_units = 217U;
    msg.speed = 0.156055427289;
    msg.speed_units = 57U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.718047968052;
    tmp_msg_0.lon = 0.210155765658;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FKAZKPGDZVRBLFJHNQJPOIXVATUYXWPNPABRTNGETVTUJXFSHHWPBVJHYTHKAWMQQIOYTPWLFYMGXUWZHGMKQRMUJXZZBONISEQGIMKFIMYKGEJLCSEMONONGIFRZHIWDDOPWAUNQTZPKCBVKQTKFAUHYLWSFVSWLXQPBAEBYCRCCMCFRGSDADTJNMCXYHROSXLVKCELXAIHISMGBLJEJRUBJASFIQCTYZZDRB");

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
    msg.setTimeStamp(0.879352780692);
    msg.setSource(63593U);
    msg.setSourceEntity(175U);
    msg.setDestination(44538U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.481132732497;
    msg.lon = 0.785020191699;
    msg.z = 0.976060167341;
    msg.z_units = 12U;
    msg.speed = 0.872878671188;
    msg.speed_units = 203U;
    msg.custom.assign("DSVJQETIOMYZKURDCWIFNYDVNORNEAUWATJOKISKLVVVCVRGTXWJIMNLPPAHUWKFHHWFEPMCWCXZTGFWUYHACRZQCNJFJZJRVOISHSNQLPAEZKSILIFBAWKHQ");

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
    msg.setTimeStamp(0.346695558777);
    msg.setSource(8183U);
    msg.setSourceEntity(27U);
    msg.setDestination(13126U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.0332728869816;
    msg.lon = 0.430030163895;

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
    msg.setTimeStamp(0.687092273312);
    msg.setSource(45010U);
    msg.setSourceEntity(84U);
    msg.setDestination(17958U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.589695906647;
    msg.lon = 0.475668148935;

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
    msg.setTimeStamp(0.0106358334343);
    msg.setSource(24466U);
    msg.setSourceEntity(238U);
    msg.setDestination(20086U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.0118917092273;
    msg.lon = 0.488207456048;

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
    msg.setTimeStamp(0.912320556995);
    msg.setSource(5142U);
    msg.setSourceEntity(125U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(41U);
    msg.timeout = 55020U;
    msg.lat = 0.00975355896139;
    msg.lon = 0.630114085374;
    msg.z = 0.193112402586;
    msg.z_units = 118U;
    msg.pitch = 0.370727841266;
    msg.amplitude = 0.767542875432;
    msg.duration = 24624U;
    msg.speed = 0.614844350134;
    msg.speed_units = 241U;
    msg.radius = 0.468915082842;
    msg.direction = 36U;
    msg.custom.assign("ZDZHOPTSERVBZPSKMGYTJPLBLQPQGWQWNDXAJFBMADIIMBRKTAUVHCBFHZKEKIFMJQRGCPCVHAQPEEUSCYMVNJGXXZTGVKGVQJXWLFKXONRCV");

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
    msg.setTimeStamp(0.568598155741);
    msg.setSource(33949U);
    msg.setSourceEntity(160U);
    msg.setDestination(19318U);
    msg.setDestinationEntity(107U);
    msg.timeout = 47227U;
    msg.lat = 0.737719839573;
    msg.lon = 0.112371716128;
    msg.z = 0.560753845034;
    msg.z_units = 39U;
    msg.pitch = 0.141636864275;
    msg.amplitude = 0.600664666267;
    msg.duration = 1805U;
    msg.speed = 0.837403906885;
    msg.speed_units = 203U;
    msg.radius = 0.272132583432;
    msg.direction = 200U;
    msg.custom.assign("AUNXEFIPYEBTPYZAXVOTSBYRQDBGSDAHXPZDTQFVYQWUTXOODQAJAYFMWEXBHBRLKUN");

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
    msg.setTimeStamp(0.659259845732);
    msg.setSource(59949U);
    msg.setSourceEntity(72U);
    msg.setDestination(5091U);
    msg.setDestinationEntity(72U);
    msg.timeout = 29303U;
    msg.lat = 0.497537089594;
    msg.lon = 0.216050161855;
    msg.z = 0.424418919421;
    msg.z_units = 211U;
    msg.pitch = 0.216192125824;
    msg.amplitude = 0.179761815839;
    msg.duration = 64545U;
    msg.speed = 0.0294177720524;
    msg.speed_units = 157U;
    msg.radius = 0.980938525009;
    msg.direction = 78U;
    msg.custom.assign("QNNORYNYTUDUCZQAFSZHBWYSYNOYRLKKOLEVPOJVDEVDUNCXMIHMHGAPVPOJAPPGTEPRHUEVESGUPPDARXRXCMLJKZPZKMAEYZCQZQNDWSXIBFVFDVHRCDCHXCQSBGWOHLBICVASSZJFWNOUWIZSLIBMRKBEYIAKTLWAHIYGGXUAOWFXGEIYPQKRKFKDJXUMKJYMHMVGHESFTTMMIBCTRCDGBF");

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
    msg.setTimeStamp(0.71174853709);
    msg.setSource(54518U);
    msg.setSourceEntity(17U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("EKHALSXLLNWCPGUPLZTZPLFVTHSCGCVVUJTEZCJOCYTUSIMLNHDWFDWUMMWHIQEHDFKSBQGSNPVXSZPSSIYQBPJBMJYTOZFPIBJI");
    msg.reference_frame = 61U;
    msg.custom.assign("KZEQNQIGOGHPBOWSGCFVEWFRNMTQRXUBUWPYSGYDBAJPPGFEETDRSMXZHKLATEUSDJQQWOUNVJMVYVQGKNFCAWVMJXMVNYRAPNNYRRFOGDVTOZJNMVBKTAPIZCHOHCHOKXMIUZLTWRDTCGHVDZWWWCBHLLSXJDRHQOKFCPLXDZIMTFVDYJPXCBEANWUS");

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
    msg.setTimeStamp(0.316915321928);
    msg.setSource(19399U);
    msg.setSourceEntity(64U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(166U);
    msg.formation_name.assign("SRPLXGVNVYKGDMCTGWFTYXIMRRRMWIQPTVIFEUORVCQBYHTNVZSOHAOFPFGXZOYXRUJILZKACLZKZSGAWAWGJQCHFGZUJDNSBHXOPTCIWTML");
    msg.reference_frame = 175U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21432U;
    tmp_msg_0.off_x = 0.247208720791;
    tmp_msg_0.off_y = 0.277180722842;
    tmp_msg_0.off_z = 0.670788078947;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VCKVGZUFLTMTPJFVZRYNXFOYHITKTLLQGIDLNWOPYONUWEZIOOQLFWHYRLNUMGWOULUQFWUYQDAZEJPOLVPRJMTVZTPSXKXAEPPNXKANEEFQWXILQFJABIHSYCHSEDZBGJASEPRVJBUPHPUVRDGUCIAAEIWOIBKCIOKZBCBNYATXQSWAHDGXKLMKFBHSCHYRWCFZDRNVITQRGZGCSJFDRX");

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
    msg.setTimeStamp(0.0779533346148);
    msg.setSource(40828U);
    msg.setSourceEntity(179U);
    msg.setDestination(14853U);
    msg.setDestinationEntity(165U);
    msg.formation_name.assign("XCDLNDAMSZHLSNHEVYRWWSBEJOFNOQBOUIAYHFLEDQLVBYEKKBDQVTONWFJNUGXQIZAMVFQZLNMOOVCTGKOFPPBGUFLJEIONEIDVITCRQFFKXTQSHJFEYDMWRRLRXRJXZDUWJCSZPRAJQLPXCXUZZLJEYWHARXSWBMOERNPIJLHGSCTAPBCMXHVQIVVPKPGYTUCKTIYWOC");
    msg.reference_frame = 37U;
    msg.custom.assign("VEQKRREQMMIZBDPOZKANCAKLLFCWMXPXTOKHIOFUBYOTPLVLONDEVCHPFDCJMYMJZXIOBIKDNEYUYHUXWZMRXQWPILTFZEMCJCGABJLYOTRAAVNSCYGSZLUZGCEHTRWGUNVCNQPWKOIWOESBRVVNPJESIOEHSZSWBVTGIJRUJHHDFFQXJVZXDBKKCXAGBSYMFQRSUGMIGSUIFGAFBAEDQYDMNGTHPWWYRLKSTQ");

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
    msg.setTimeStamp(0.604711688037);
    msg.setSource(18805U);
    msg.setSourceEntity(125U);
    msg.setDestination(17561U);
    msg.setDestinationEntity(69U);
    msg.group_name.assign("YBBATLPUAORSXGALMJQRXQFGYSFKVMLJZF");
    msg.formation_name.assign("HCXDNVUBHEOOMTRPQQAGFAWAPYOLYDWXIYIFHOMAGZPANCXVDFWPFBLISQKYTDYXNFGNXCUZFJUENLEGZFJHSKSJMKMGTFRABNJZLIZTMWRNDRSZSQJGAHTITHKMQFFCRUPOSJHDRURXZOHLZLKECWCHI");
    msg.plan_id.assign("DBHOIKCVZMPVCPYJHMRZRDPDQWVTUMRKARBKQJSJ");
    msg.description.assign("YSQIXJKOHZLPGYRNYVUVVILZYFTTWFBIUKZEOQIRGQJTYANZWAWQRZMTCEOKCZYCMAUGYPLERZWXIOUDYBJQDLJEBARESMPAYCFFFSOCDIHQOWXVVHZFBCWDUINDIRRXXTKMJRGZWVCELINMUFEAVKNCZMHKKUDKBSLAOADBMRBLXSJBHJTPOKNXLTSGVMPSQQTKJMXGPWCEEWSJPGJGQVDDAFLUUHPPHHNBYHNGVUDBCEAQTFHWINP");
    msg.leader_speed = 0.422105079884;
    msg.leader_bank_lim = 0.46632454727;
    msg.pos_sim_err_lim = 0.133295297116;
    msg.pos_sim_err_wrn = 0.266711286599;
    msg.pos_sim_err_timeout = 41403U;
    msg.converg_max = 0.256921379021;
    msg.converg_timeout = 18252U;
    msg.comms_timeout = 53640U;
    msg.turb_lim = 0.586000613831;
    msg.custom.assign("SJRWWIDEQBFPHNYUSUQMGUKQZGSYWTADXLKRTFFXZPOSALMLEORTPPQVHSZMIDPHWNNBENDVAXCAKZB");

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
    msg.setTimeStamp(0.325089776499);
    msg.setSource(18745U);
    msg.setSourceEntity(39U);
    msg.setDestination(65063U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("QJTMFUMKRBGXINIOFLNWOFVKKRRLJDPWMXBQPVHCMXFRWTSQHDRFEWXCCCLPKDEZWFXLPIRAOGGKGMOBAPJUHUTXIOAKULYJSZWDBCQECUJDOSNZXNYGRAOKUIRYTCYWIHNSIEEARXVJBKZVLDDLISBKNCFATFEPVZCDOHNHBEOFDHNIBDYZWBZTYXBJLPQZELVPJEYVPAVHUTWLQIGGGSTFSJGMMWXAMRJUVSKMNUVATAUCPEQHQZN");
    msg.formation_name.assign("CZKUVYTTLDNOFRWTAAHOARLBWQHISNGFJTPXNZKGBATRBKXYZIQNDDUXKGXQIHOLQAMXLAWIVESKTQSVBGYJSHTNHSOFBJCQYCZJFNVYDSKHPGXJOEMARHZEOIGNZRYEWGXVEKUDSVLQSICMVCBFDRKUOBSYEJMTGBVOVMIACGZ");
    msg.plan_id.assign("OQEBSPQOVDGEDHZCYNBBKZESJNOTJWPKNXCOSWCUNTTBJFORLSZVLXIFMYDHHVACPEJWQDAYZZFLAPFTBKSUQRJEVBAHRSGZSMBTIODMLNGIWVYXVVIRIKARGWYMTCVAQGZVDLFXMEFZNHWKJUYDPHRYXGCNPHBFMRKQMZQMHUAIUWIAWXLKTTYJXJKMDJYQJXFENZORPEPIPCLWGSLLBTSQHUGQWOSTRBCRCUOEIYFAKDNUEGLXPUKNV");
    msg.description.assign("GVDFHZYSGQNLGYMQEARGUXTGRAMSSSAXZZBEFDHXPJGJXSCDPYWIZYUAN");
    msg.leader_speed = 0.983582929066;
    msg.leader_bank_lim = 0.562611697653;
    msg.pos_sim_err_lim = 0.894961828354;
    msg.pos_sim_err_wrn = 0.492956779447;
    msg.pos_sim_err_timeout = 9363U;
    msg.converg_max = 0.670612293149;
    msg.converg_timeout = 9733U;
    msg.comms_timeout = 20771U;
    msg.turb_lim = 0.680296436616;
    msg.custom.assign("QSHDEAYTJPTEUMJKAPXKFLAYURZIEWIWCOWXBFTMQVDLNWOKGMXCZUFNURXAATCVHNKDLIQGSMNEVLNNBYZWEETGGQPDPKOKXJSBYUFYPYDBRVSMBCBXUFMRLFCQJOMYFVBIHEFQGLNFAIBQNJSUPWVPCPZRLSMTLZYERHJXDMRXSXTZGVDUXIZCORIDKTZGLWALCEDPVAGHBKHJECTWDROHABOIQZOWJNHVVSQIYY");

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
    msg.setTimeStamp(0.400248354988);
    msg.setSource(25574U);
    msg.setSourceEntity(144U);
    msg.setDestination(14856U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("RPHTLWJHDWNCHOSCXRIQPGIXUKMNXZZDBOHTLOMVKHOMRDAGIOKSVNJCWZEYHWVZBPXCFAXRCZQZWISVKFWRWXDDKLJMMDGWJETCQSLHGIEYNKMFAXCFPRYYFJQDJPOGBTSPNUCSASVIQUKDFYMDMSUWKAFBGILYKBGVLQNGVTREQPMLKZLERGFTEBBVANALWIEJDRJGBQUCITTMZBHOYUNOVZXREEFJLHPOUFBUATVU");
    msg.formation_name.assign("QUTSEYKEMSALIYFRXYDIFSEJUZM");
    msg.plan_id.assign("LOAPHSAUCDXYTTAGVBTTZSRKQQYBYEANOGLLIMTNKFACXBFKXQFHBISSMPMJDHEJWNKAYBWNWOHADKGQFMKMABXXFKOLZGSQZJYXPACINVQEFCHMZEKFWYCILPZNPSUZPHCGLJRUQLLYEBKXIOTIUUJSCSPWMEFUFILREGOPDAOPMDNDYWOHZOBTRSXHVDRCXUER");
    msg.description.assign("KHVVMSADGCYUXTXEUNRCJUDVCHLXEHNBZ");
    msg.leader_speed = 0.356862629951;
    msg.leader_bank_lim = 0.942459769162;
    msg.pos_sim_err_lim = 0.381158022642;
    msg.pos_sim_err_wrn = 0.281378003438;
    msg.pos_sim_err_timeout = 34212U;
    msg.converg_max = 0.686744327052;
    msg.converg_timeout = 62969U;
    msg.comms_timeout = 65287U;
    msg.turb_lim = 0.559901129422;
    msg.custom.assign("FCQRXQFDOBBVGYZTQEBPXIAWCOFKV");

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
    msg.setTimeStamp(0.300599455384);
    msg.setSource(50273U);
    msg.setSourceEntity(54U);
    msg.setDestination(24537U);
    msg.setDestinationEntity(213U);
    msg.control_src = 12017U;
    msg.control_ent = 138U;
    msg.timeout = 0.223527957122;
    msg.loiter_radius = 0.516665822358;
    msg.altitude_interval = 0.0617998688406;

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
    msg.setTimeStamp(0.555325517395);
    msg.setSource(18334U);
    msg.setSourceEntity(169U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(204U);
    msg.control_src = 7364U;
    msg.control_ent = 137U;
    msg.timeout = 0.448050884483;
    msg.loiter_radius = 0.407750818546;
    msg.altitude_interval = 0.979200952373;

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
    msg.setTimeStamp(0.354095079996);
    msg.setSource(48023U);
    msg.setSourceEntity(195U);
    msg.setDestination(53495U);
    msg.setDestinationEntity(156U);
    msg.control_src = 54823U;
    msg.control_ent = 173U;
    msg.timeout = 0.676366805377;
    msg.loiter_radius = 0.232101747826;
    msg.altitude_interval = 0.187915329286;

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
    msg.setTimeStamp(0.01266069835);
    msg.setSource(63393U);
    msg.setSourceEntity(171U);
    msg.setDestination(11676U);
    msg.setDestinationEntity(150U);
    msg.flags = 174U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.730062279305;
    tmp_msg_0.speed_units = 128U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.486125862949;
    tmp_msg_1.z_units = 87U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.501872774639;
    msg.lon = 0.142514939411;
    msg.radius = 0.163788945278;

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
    msg.setTimeStamp(0.406561658382);
    msg.setSource(35500U);
    msg.setSourceEntity(19U);
    msg.setDestination(25337U);
    msg.setDestinationEntity(19U);
    msg.flags = 179U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.975259465222;
    tmp_msg_0.speed_units = 235U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.96048600941;
    tmp_msg_1.z_units = 53U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.428547465031;
    msg.lon = 0.697922504947;
    msg.radius = 0.395486814727;

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
    msg.setTimeStamp(0.103622001625);
    msg.setSource(48867U);
    msg.setSourceEntity(12U);
    msg.setDestination(23529U);
    msg.setDestinationEntity(73U);
    msg.flags = 230U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.683684570617;
    tmp_msg_0.speed_units = 36U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.441781065804;
    tmp_msg_1.z_units = 81U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.60567486777;
    msg.lon = 0.329616326538;
    msg.radius = 0.869421813534;

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
    msg.setTimeStamp(0.697614178478);
    msg.setSource(13243U);
    msg.setSourceEntity(143U);
    msg.setDestination(41736U);
    msg.setDestinationEntity(183U);
    msg.control_src = 62593U;
    msg.control_ent = 137U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 78U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.734880342123;
    tmp_tmp_msg_0_0.speed_units = 243U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.941944476221;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.688016519124;
    tmp_msg_0.lon = 0.0936210500717;
    tmp_msg_0.radius = 0.710811854658;
    msg.reference.set(tmp_msg_0);
    msg.state = 156U;
    msg.proximity = 145U;

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
    msg.setTimeStamp(0.471682598844);
    msg.setSource(10745U);
    msg.setSourceEntity(28U);
    msg.setDestination(17481U);
    msg.setDestinationEntity(180U);
    msg.control_src = 62620U;
    msg.control_ent = 91U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.790584885633;
    tmp_tmp_msg_0_0.speed_units = 63U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.958311203067;
    tmp_tmp_msg_0_1.z_units = 139U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.504012501314;
    tmp_msg_0.lon = 0.238056230489;
    tmp_msg_0.radius = 0.490746876635;
    msg.reference.set(tmp_msg_0);
    msg.state = 191U;
    msg.proximity = 89U;

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
    msg.setTimeStamp(0.0937627683408);
    msg.setSource(19192U);
    msg.setSourceEntity(29U);
    msg.setDestination(11731U);
    msg.setDestinationEntity(6U);
    msg.control_src = 58246U;
    msg.control_ent = 68U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 179U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.246695998498;
    tmp_tmp_msg_0_0.speed_units = 194U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.137359726443;
    tmp_tmp_msg_0_1.z_units = 240U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.343624627173;
    tmp_msg_0.lon = 0.574906021887;
    tmp_msg_0.radius = 0.123242842461;
    msg.reference.set(tmp_msg_0);
    msg.state = 125U;
    msg.proximity = 141U;

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
    msg.setTimeStamp(0.206454040931);
    msg.setSource(50331U);
    msg.setSourceEntity(199U);
    msg.setDestination(17119U);
    msg.setDestinationEntity(207U);
    msg.ax_cmd = 0.987526302336;
    msg.ay_cmd = 0.986925246947;
    msg.az_cmd = 0.356817614457;
    msg.ax_des = 0.507360683779;
    msg.ay_des = 0.896579072146;
    msg.az_des = 0.82878960538;
    msg.virt_err_x = 0.939246289788;
    msg.virt_err_y = 0.162691501964;
    msg.virt_err_z = 0.421734294802;
    msg.surf_fdbk_x = 0.750602236143;
    msg.surf_fdbk_y = 0.494181806931;
    msg.surf_fdbk_z = 0.825029960858;
    msg.surf_unkn_x = 0.25459359385;
    msg.surf_unkn_y = 0.271761980092;
    msg.surf_unkn_z = 0.576290806047;
    msg.ss_x = 0.18888589667;
    msg.ss_y = 0.831271500086;
    msg.ss_z = 0.970060899164;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KYWLCZGRMLFFEOJGPT");
    tmp_msg_0.dist = 0.218497653966;
    tmp_msg_0.err = 0.0481850554285;
    tmp_msg_0.ctrl_imp = 0.0481992754985;
    tmp_msg_0.rel_dir_x = 0.232151117237;
    tmp_msg_0.rel_dir_y = 0.723263607865;
    tmp_msg_0.rel_dir_z = 0.896384284557;
    tmp_msg_0.err_x = 0.338588874762;
    tmp_msg_0.err_y = 0.399872854951;
    tmp_msg_0.err_z = 0.892855630453;
    tmp_msg_0.rf_err_x = 0.824597032102;
    tmp_msg_0.rf_err_y = 0.306677403648;
    tmp_msg_0.rf_err_z = 0.43236849195;
    tmp_msg_0.rf_err_vx = 0.424728244289;
    tmp_msg_0.rf_err_vy = 0.17241933289;
    tmp_msg_0.rf_err_vz = 0.363290882963;
    tmp_msg_0.ss_x = 0.299034209414;
    tmp_msg_0.ss_y = 0.147675588287;
    tmp_msg_0.ss_z = 0.433844665577;
    tmp_msg_0.virt_err_x = 0.574048180576;
    tmp_msg_0.virt_err_y = 0.933881013739;
    tmp_msg_0.virt_err_z = 0.62392203199;
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
    msg.setTimeStamp(0.264809010903);
    msg.setSource(34114U);
    msg.setSourceEntity(120U);
    msg.setDestination(19464U);
    msg.setDestinationEntity(66U);
    msg.ax_cmd = 0.0528937993821;
    msg.ay_cmd = 0.794768821554;
    msg.az_cmd = 0.255737379924;
    msg.ax_des = 0.204979695144;
    msg.ay_des = 0.836071128132;
    msg.az_des = 0.10652312611;
    msg.virt_err_x = 0.219834034806;
    msg.virt_err_y = 0.315193171775;
    msg.virt_err_z = 0.978444821345;
    msg.surf_fdbk_x = 0.340810336516;
    msg.surf_fdbk_y = 0.806031177525;
    msg.surf_fdbk_z = 0.620419099572;
    msg.surf_unkn_x = 0.0961462163922;
    msg.surf_unkn_y = 0.92869129561;
    msg.surf_unkn_z = 0.207896324483;
    msg.ss_x = 0.442733563123;
    msg.ss_y = 0.358607772356;
    msg.ss_z = 0.435764509729;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ONOOTOSYSWOHLPIAGRRXUMGXXZVKLECESPVQCCGRMGYWRMDKZANQBBKBKMACMAKILUOULJLHNNFXCVEZUCTQQNSADUYRYTFDIHTLXITIRBJPMDZBQPOKNJWPLUSVESRPPUEIVGHJBVMBSNMIAUHPQRDYQCZDTSTMVQXBWPGSFLOUKNYFVOIYLDHFJACZIAQWF");
    tmp_msg_0.dist = 0.386282569412;
    tmp_msg_0.err = 0.504477044717;
    tmp_msg_0.ctrl_imp = 0.417040843736;
    tmp_msg_0.rel_dir_x = 0.17146446176;
    tmp_msg_0.rel_dir_y = 0.561255020043;
    tmp_msg_0.rel_dir_z = 0.61958898907;
    tmp_msg_0.err_x = 0.612279800367;
    tmp_msg_0.err_y = 0.69592296765;
    tmp_msg_0.err_z = 0.636570736139;
    tmp_msg_0.rf_err_x = 0.32086569428;
    tmp_msg_0.rf_err_y = 0.279943699203;
    tmp_msg_0.rf_err_z = 0.686054370158;
    tmp_msg_0.rf_err_vx = 0.339906387655;
    tmp_msg_0.rf_err_vy = 0.813327480558;
    tmp_msg_0.rf_err_vz = 0.639428853565;
    tmp_msg_0.ss_x = 0.456452943892;
    tmp_msg_0.ss_y = 0.996362804762;
    tmp_msg_0.ss_z = 0.736795718697;
    tmp_msg_0.virt_err_x = 0.19764372362;
    tmp_msg_0.virt_err_y = 0.0950046344463;
    tmp_msg_0.virt_err_z = 0.0111629066215;
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
    msg.setTimeStamp(0.366199744432);
    msg.setSource(13420U);
    msg.setSourceEntity(14U);
    msg.setDestination(51631U);
    msg.setDestinationEntity(179U);
    msg.ax_cmd = 0.734682691634;
    msg.ay_cmd = 0.354050867303;
    msg.az_cmd = 0.498240752893;
    msg.ax_des = 0.157319668747;
    msg.ay_des = 0.46434993785;
    msg.az_des = 0.576248580341;
    msg.virt_err_x = 0.799544881959;
    msg.virt_err_y = 0.91173453826;
    msg.virt_err_z = 0.469461352798;
    msg.surf_fdbk_x = 0.409879223442;
    msg.surf_fdbk_y = 0.0410527475763;
    msg.surf_fdbk_z = 0.116226177884;
    msg.surf_unkn_x = 0.274964595276;
    msg.surf_unkn_y = 0.428671310533;
    msg.surf_unkn_z = 0.466602008407;
    msg.ss_x = 0.257003020545;
    msg.ss_y = 0.560598914776;
    msg.ss_z = 0.353896146468;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RFSPWQYWDJOHIDKDOCPBIGRLSQSAIMEZNBLAOKAUFWZSNSVQIXJVDAODMGPVUMRCX");
    tmp_msg_0.dist = 0.615863292492;
    tmp_msg_0.err = 0.741444090681;
    tmp_msg_0.ctrl_imp = 0.907545851966;
    tmp_msg_0.rel_dir_x = 0.0702847504564;
    tmp_msg_0.rel_dir_y = 0.140924834665;
    tmp_msg_0.rel_dir_z = 0.3494737768;
    tmp_msg_0.err_x = 0.658898119431;
    tmp_msg_0.err_y = 0.661892910717;
    tmp_msg_0.err_z = 0.914290620916;
    tmp_msg_0.rf_err_x = 0.0852132625363;
    tmp_msg_0.rf_err_y = 0.124475963337;
    tmp_msg_0.rf_err_z = 0.133296555351;
    tmp_msg_0.rf_err_vx = 0.826336720379;
    tmp_msg_0.rf_err_vy = 0.807418053109;
    tmp_msg_0.rf_err_vz = 0.867954212923;
    tmp_msg_0.ss_x = 0.932742206127;
    tmp_msg_0.ss_y = 0.163989167961;
    tmp_msg_0.ss_z = 0.622754482648;
    tmp_msg_0.virt_err_x = 0.187241788313;
    tmp_msg_0.virt_err_y = 0.564214218971;
    tmp_msg_0.virt_err_z = 0.808278442258;
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
    msg.setTimeStamp(0.730860939942);
    msg.setSource(17321U);
    msg.setSourceEntity(251U);
    msg.setDestination(3761U);
    msg.setDestinationEntity(194U);
    msg.s_id.assign("CXSRBFOZAGSNAFBLGVLNOVHKTKZTSNSPBDHHVFPUDOBAMTDUXIQXMFDIVQIPYXFCTRHKLKMKOUWYZZRAEWCEXFPLKUWIBDNJVRFTMBNLRM");
    msg.dist = 0.9215661097;
    msg.err = 0.64003347;
    msg.ctrl_imp = 0.735723681611;
    msg.rel_dir_x = 0.0387695221912;
    msg.rel_dir_y = 0.710089415605;
    msg.rel_dir_z = 0.0216322911667;
    msg.err_x = 0.791715011291;
    msg.err_y = 0.396765051352;
    msg.err_z = 0.0647500440316;
    msg.rf_err_x = 0.571763214783;
    msg.rf_err_y = 0.553499293681;
    msg.rf_err_z = 0.0995895574181;
    msg.rf_err_vx = 0.692539881249;
    msg.rf_err_vy = 0.589279849145;
    msg.rf_err_vz = 0.959088930086;
    msg.ss_x = 0.522024387267;
    msg.ss_y = 0.00732868866334;
    msg.ss_z = 0.443579798761;
    msg.virt_err_x = 0.0876809415117;
    msg.virt_err_y = 0.902955536581;
    msg.virt_err_z = 0.770625567407;

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
    msg.setTimeStamp(0.691592337874);
    msg.setSource(4318U);
    msg.setSourceEntity(81U);
    msg.setDestination(43205U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("UNGPRIDYAFVEQUNSEADOBBTXUMDUPYVVGWXQLJJZIIVFTAIHIUOFFXPZTCXIKJWCWEQBZHL");
    msg.dist = 0.861293414409;
    msg.err = 0.850257204764;
    msg.ctrl_imp = 0.34779688787;
    msg.rel_dir_x = 0.21596781582;
    msg.rel_dir_y = 0.873796819505;
    msg.rel_dir_z = 0.271868806589;
    msg.err_x = 0.556740795754;
    msg.err_y = 0.65349370163;
    msg.err_z = 0.85845529618;
    msg.rf_err_x = 0.649629607779;
    msg.rf_err_y = 0.813855018878;
    msg.rf_err_z = 0.0494855804977;
    msg.rf_err_vx = 0.876507176615;
    msg.rf_err_vy = 0.239295301828;
    msg.rf_err_vz = 0.588352522964;
    msg.ss_x = 0.913863234223;
    msg.ss_y = 0.180682010322;
    msg.ss_z = 0.570247657177;
    msg.virt_err_x = 0.138124043851;
    msg.virt_err_y = 0.586337931717;
    msg.virt_err_z = 0.314119087653;

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
    msg.setTimeStamp(0.148267041694);
    msg.setSource(54714U);
    msg.setSourceEntity(27U);
    msg.setDestination(54575U);
    msg.setDestinationEntity(209U);
    msg.s_id.assign("SOIXEQMVNWJJEAVKKMDNOVBGFOZKNFLLHJAGJAZZBESRWNIDTREYPPSVXQATCKSTDGHCNBSLOHUKSVIWLBWKIOXIDDDBTVMJTRMHHUKGJUYNKMXAWCYCVDMCFGBZDU");
    msg.dist = 0.878895675219;
    msg.err = 0.857162929668;
    msg.ctrl_imp = 0.0188745756181;
    msg.rel_dir_x = 0.425511283862;
    msg.rel_dir_y = 0.36275506557;
    msg.rel_dir_z = 0.555491972442;
    msg.err_x = 0.506161343332;
    msg.err_y = 0.612573249343;
    msg.err_z = 0.463447310965;
    msg.rf_err_x = 0.677442027254;
    msg.rf_err_y = 0.450414977088;
    msg.rf_err_z = 0.000205470141217;
    msg.rf_err_vx = 0.20139361559;
    msg.rf_err_vy = 0.826356344608;
    msg.rf_err_vz = 0.292688917503;
    msg.ss_x = 0.980865592501;
    msg.ss_y = 0.0428983057997;
    msg.ss_z = 0.483144865025;
    msg.virt_err_x = 0.28354383787;
    msg.virt_err_y = 0.243370481498;
    msg.virt_err_z = 0.123145433541;

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
    msg.setTimeStamp(0.72728972438);
    msg.setSource(7049U);
    msg.setSourceEntity(22U);
    msg.setDestination(50354U);
    msg.setDestinationEntity(162U);
    msg.timeout = 10612U;
    msg.rpm = 0.698244224043;
    msg.direction = 223U;
    msg.custom.assign("ISDGDEZOCLPWTICIZSJRYZMUNUUTBAKBQNWXPONIQQYDKZUBIAIEBITO");

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
    msg.setTimeStamp(0.348803831355);
    msg.setSource(21696U);
    msg.setSourceEntity(237U);
    msg.setDestination(53791U);
    msg.setDestinationEntity(124U);
    msg.timeout = 45125U;
    msg.rpm = 0.609834625269;
    msg.direction = 201U;
    msg.custom.assign("JDKPAQRZYVVBYGWWSPIEYGETYVNOIFBSBDNORQUHUVCNXACTQEYRIJGQGIKXFLWHKVOAHUUGNPMFVMGTKESHUZSDVKSAOAMCNQKTPTWZJDILZPWXBCLCQQXUEHBJRXDBLVZFZWELSBCGJTVLDOIUWTGGTYHWKHBOIKIJMDPOPQALYJLTZJXBWBCYXRKIFRZALVFSEQRMRPAKRJHUFWMLXEFIZEDZFRFATCYXHCNSNNXMEOMS");

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
    msg.setTimeStamp(0.642245824448);
    msg.setSource(26176U);
    msg.setSourceEntity(121U);
    msg.setDestination(24528U);
    msg.setDestinationEntity(30U);
    msg.timeout = 46665U;
    msg.rpm = 0.0649822400489;
    msg.direction = 82U;
    msg.custom.assign("SGSEWJTBNATMADPYYIJUXJQTKGUBATMXQVZHPWHGXLCEEPCFWNW");

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
    msg.setTimeStamp(0.175386600193);
    msg.setSource(11381U);
    msg.setSourceEntity(92U);
    msg.setDestination(31807U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("GLCBMLKXKDNSRVDADDMICXYFOVHBQAFYCUJPZNTLNLMTOTPWSNWIQAPGWGXDMALCLSFYHJWYPBFGXUYFPBGRSOEQBFTOREKBSPUMUKAIDKWFEEVTKTWPGUQMNXWPICVZRVZRUFJRZWAOKJFQDFW");
    msg.type = 132U;
    msg.op = 131U;
    msg.group_name.assign("VEIDBQTARAGPJDLOPGCXOJBSMFNUVIICHMMOXKJKGQWUZFKMSNOVOAWYEPLRCAJCYBRKKOUWHSWGRUCHNSYTEPVW");
    msg.plan_id.assign("ASLXSBAFYWVHZWKALQFYJFXMOAQOFXGIXJPR");
    msg.description.assign("NQZOLHUZFQYOAZBVDNRQWWSIXADHNIUXT");
    msg.reference_frame = 125U;
    msg.leader_bank_lim = 0.935886389431;
    msg.leader_speed_min = 0.891963989573;
    msg.leader_speed_max = 0.345544115427;
    msg.leader_alt_min = 0.774606867465;
    msg.leader_alt_max = 0.985432260084;
    msg.pos_sim_err_lim = 0.715107358782;
    msg.pos_sim_err_wrn = 0.12244207462;
    msg.pos_sim_err_timeout = 20942U;
    msg.converg_max = 0.113466531062;
    msg.converg_timeout = 35498U;
    msg.comms_timeout = 10908U;
    msg.turb_lim = 0.986089269934;
    msg.custom.assign("EVIPCHOXVVVBYMJWXNXRMFSOYLASYYXWRTXAAPEEFMVYLKQJZTOCHZCZWKSKYUKTGABLQKSMLWKSUNEICUUEHVVGEGUYFUICDQJNRCBAZHJHQPJBKPSEDIHQMGLMYMZZQPMGGVBJZGIDJBNFXUWLCSBYHZRYTIFLZJDRRLOUFISIZTTKAOKFBDXDDOQORAGNNXNQ");

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
    msg.setTimeStamp(0.809700044749);
    msg.setSource(2376U);
    msg.setSourceEntity(244U);
    msg.setDestination(8844U);
    msg.setDestinationEntity(84U);
    msg.formation_name.assign("BNYZRAJUXYBXGUGCSEHOZQPVSDOKZKDLLBWHJAPIWTHJORQEKNAXGITRZUIDSVGK");
    msg.type = 14U;
    msg.op = 180U;
    msg.group_name.assign("OTFIHMUMNECSRRMJJMZXLAIHWTGMZIVTXTDMREZVXRJVBJQTCTGGWSPUGHWGPXJFFXURGEABANBQCOAGSQYC");
    msg.plan_id.assign("NQBWOTTQHJAKFVJDQMODRETCOLYFKSKEWDFGABBCIZSIUDEAUALAKQCZFZWEYZGBCHTLOMEZRUIMMUWUYXUJTMQXBKJVYYAIJJHHOQXPXHFSNTUPOGZXRFVJYWVTAIOHMINFKXFJPCBQEJGLKAWUZSCXEUCNHRXNMDWGNABBVRPHESYTXIMNQOOPREUNLSKIRGGBLKGVDDPVCZSWQRGEVZINCDS");
    msg.description.assign("NZIRNTZWSLBWHMTFRPQFVRIYWEPLXECKCT");
    msg.reference_frame = 67U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58204U;
    tmp_msg_0.off_x = 0.308131994163;
    tmp_msg_0.off_y = 0.937782256829;
    tmp_msg_0.off_z = 0.319193106197;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.849350733236;
    msg.leader_speed_min = 0.0876781988795;
    msg.leader_speed_max = 0.275037128663;
    msg.leader_alt_min = 0.545266749539;
    msg.leader_alt_max = 0.0590510753802;
    msg.pos_sim_err_lim = 0.464504675116;
    msg.pos_sim_err_wrn = 0.0792270306366;
    msg.pos_sim_err_timeout = 1370U;
    msg.converg_max = 0.948551232281;
    msg.converg_timeout = 5724U;
    msg.comms_timeout = 32178U;
    msg.turb_lim = 0.995177488812;
    msg.custom.assign("BZAMDMFPBSJNHQJXPTKISMHAUUYJNBFTKAPQROHEQFFLCUNTZXYANYBGHVQZIXWRECJQDWGMOKZPMVQBFODSPUCRXKBCWVMQDYZYISTVLWGQNTKEACJVBMEIVVURCMZGZAFAPINKCVUXLEJXYJNSTWFOVFYHDWHZROORJBKZOSJKMAQTXHSUASIRDFBKNEPTEPDCABLILYHWYEQFOLSUCGWVNLXWGIXRHPGDWPGELHSULLI");

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
    msg.setTimeStamp(0.966183186137);
    msg.setSource(39707U);
    msg.setSourceEntity(101U);
    msg.setDestination(28431U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("GYZXJZFRZWHREAETRPOWQJIYGPJUUGTBHOCAACCTJUDWJZRYDPNPJLQSFXEPSERVMOCAKKTYKLTLOVMGUFUCHUHPOSVTQAWLOXPSZIMKQOMDVYRWFKZCMBVNSJTYSXIVAQFYOPYNEKQRMSLWRXETLFICESGBDZXHXTDCGQI");
    msg.type = 34U;
    msg.op = 211U;
    msg.group_name.assign("FQYILZWRVGOBBWZDGZLSWEOODEITOHSISPMSKMJICYLEOUBCVJYAFX");
    msg.plan_id.assign("TRVRAGLFVJRVMSODNIMCIZAAQYZQPOTEXTKMVFHJYNLBEFXULIQRQMNOCVKNYJPTOIAWSKZKBXL");
    msg.description.assign("WSHWZPTUPUVXCOOIXDTKVOYNANMBRZQLXQEIRLAVTQLVPLRUDREQFZOJLPKUCVHVEYFNKNYKAASMWVOZXCXMEJUDMOFJVEMWLNFJICFQKAQEELYVSUWHRGYBSBTYQZYAQZRCFICQOSSMHZDDOFARI");
    msg.reference_frame = 120U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56413U;
    tmp_msg_0.off_x = 0.0671561380597;
    tmp_msg_0.off_y = 0.204343289587;
    tmp_msg_0.off_z = 0.0512637411743;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0836826734858;
    msg.leader_speed_min = 0.646581349269;
    msg.leader_speed_max = 0.0950564936802;
    msg.leader_alt_min = 0.504177879519;
    msg.leader_alt_max = 0.0519567877664;
    msg.pos_sim_err_lim = 0.924487791208;
    msg.pos_sim_err_wrn = 0.15626055493;
    msg.pos_sim_err_timeout = 46393U;
    msg.converg_max = 0.655774850642;
    msg.converg_timeout = 28669U;
    msg.comms_timeout = 852U;
    msg.turb_lim = 0.278107893319;
    msg.custom.assign("YAMDCNPMOTTMKZYCKJWOAEKQ");

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
    msg.setTimeStamp(0.924732406141);
    msg.setSource(58738U);
    msg.setSourceEntity(52U);
    msg.setDestination(60221U);
    msg.setDestinationEntity(60U);
    msg.timeout = 63081U;
    msg.lat = 0.578265261031;
    msg.lon = 0.932772857096;
    msg.z = 0.014913336121;
    msg.z_units = 200U;
    msg.speed = 0.466635186332;
    msg.speed_units = 69U;
    msg.custom.assign("IHNKQEOQYBVBHRTUGNCCDJRSOMWXXMYWJVBJEUJDUVFJYIUZGIHCMOQOSECZYQWXHZWINIEDMNWGFKTWZYIDCFOEIVP");

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
    msg.setTimeStamp(0.331971372254);
    msg.setSource(23858U);
    msg.setSourceEntity(211U);
    msg.setDestination(51927U);
    msg.setDestinationEntity(176U);
    msg.timeout = 61550U;
    msg.lat = 0.285929020006;
    msg.lon = 0.224124248778;
    msg.z = 0.554263267256;
    msg.z_units = 128U;
    msg.speed = 0.310851599634;
    msg.speed_units = 11U;
    msg.custom.assign("QQNYXSUCXNRCVLCBWRVGMPDBVSQBKABGSDZERLYRETWTAQLHIVRFNOSMNF");

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
    msg.setTimeStamp(0.602179158729);
    msg.setSource(58908U);
    msg.setSourceEntity(57U);
    msg.setDestination(43657U);
    msg.setDestinationEntity(101U);
    msg.timeout = 48065U;
    msg.lat = 0.631959336793;
    msg.lon = 0.324348231345;
    msg.z = 0.0765848856761;
    msg.z_units = 136U;
    msg.speed = 0.971350162957;
    msg.speed_units = 237U;
    msg.custom.assign("UIEPQYRQNQYKPBPXYYJRBQCYBTBRJMPUEYDZODPBHMUTCRJAIAMUHSVTTVNUAL");

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
    msg.setTimeStamp(0.85748556514);
    msg.setSource(17845U);
    msg.setSourceEntity(69U);
    msg.setDestination(17988U);
    msg.setDestinationEntity(16U);
    msg.timeout = 33832U;
    msg.lat = 0.92691289239;
    msg.lon = 0.922230118447;
    msg.z = 0.306250121589;
    msg.z_units = 0U;
    msg.speed = 0.521639114811;
    msg.speed_units = 112U;
    msg.custom.assign("ESRLXIVIVSFDOQUFCOXJWOLNBYHRHTISEFNRRVGKOUNFGRXHMQHC");

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
    msg.setTimeStamp(0.823668851574);
    msg.setSource(60405U);
    msg.setSourceEntity(159U);
    msg.setDestination(13862U);
    msg.setDestinationEntity(130U);
    msg.timeout = 54912U;
    msg.lat = 0.706417196245;
    msg.lon = 0.752744490379;
    msg.z = 0.405511921393;
    msg.z_units = 192U;
    msg.speed = 0.0586585419439;
    msg.speed_units = 244U;
    msg.custom.assign("RCOIZOMEQHDFZSKQEEAWCDJXREBFIFATEHWBQIOLEOFNAKRPAEPWDNJTBMFGZDUIVHXDBMVRLLKJ");

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
    msg.setTimeStamp(0.330357184806);
    msg.setSource(5839U);
    msg.setSourceEntity(107U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(125U);
    msg.timeout = 12699U;
    msg.lat = 0.475673098877;
    msg.lon = 0.019347864967;
    msg.z = 0.59216247165;
    msg.z_units = 81U;
    msg.speed = 0.441575570463;
    msg.speed_units = 184U;
    msg.custom.assign("MMPNYKNZIJMNTHSAXPUYGLPDYAUYKCEIKORARTIQWSLJTZMGCHGSDKOWEVAQHZEOSHKJJAZBYMIFLCRWQTBZSUF");

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
    msg.setTimeStamp(0.336585626649);
    msg.setSource(53816U);
    msg.setSourceEntity(2U);
    msg.setDestination(10176U);
    msg.setDestinationEntity(31U);
    msg.arrival_time = 0.815411319726;
    msg.lat = 0.779572623222;
    msg.lon = 0.411163214117;
    msg.z = 0.120054080865;
    msg.z_units = 221U;
    msg.travel_z = 0.889017567981;
    msg.travel_z_units = 198U;
    msg.delayed = 134U;

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
    msg.setTimeStamp(0.470822079903);
    msg.setSource(30386U);
    msg.setSourceEntity(183U);
    msg.setDestination(24141U);
    msg.setDestinationEntity(231U);
    msg.arrival_time = 0.85330599969;
    msg.lat = 0.213960680431;
    msg.lon = 0.584561169695;
    msg.z = 0.139908448527;
    msg.z_units = 241U;
    msg.travel_z = 0.346385937282;
    msg.travel_z_units = 133U;
    msg.delayed = 14U;

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
    msg.setTimeStamp(0.700058902415);
    msg.setSource(58565U);
    msg.setSourceEntity(146U);
    msg.setDestination(62U);
    msg.setDestinationEntity(227U);
    msg.arrival_time = 0.13594800424;
    msg.lat = 0.204922579053;
    msg.lon = 0.878649826439;
    msg.z = 0.993037224799;
    msg.z_units = 169U;
    msg.travel_z = 0.0447633367861;
    msg.travel_z_units = 9U;
    msg.delayed = 149U;

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
    msg.setTimeStamp(0.576766523373);
    msg.setSource(59260U);
    msg.setSourceEntity(179U);
    msg.setDestination(44332U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.900771616657;
    msg.lon = 0.439924994042;
    msg.z = 0.104456356584;
    msg.z_units = 43U;
    msg.speed = 0.878547103337;
    msg.speed_units = 88U;
    msg.bearing = 0.620932904663;
    msg.cross_angle = 0.0550657288788;
    msg.width = 0.308794960455;
    msg.length = 0.0113218652014;
    msg.coff = 220U;
    msg.angaperture = 0.820135818431;
    msg.range = 13155U;
    msg.overlap = 144U;
    msg.flags = 117U;
    msg.custom.assign("GCTCZTNJYMOHUYMMTDXBSQKNNPMVSIAHSPVDBSHMGQQYYWWLPQYKZJQKPQNAYLXJHDXSXGYZZLKFFCDPWDFRGQUEHWXEMKLZORNZOTIEBRSVMQRWRPAXGCBJZYMJHOBKYBDUUPIXOUVLINRFCXOIJVS");

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
    msg.setTimeStamp(0.250085960503);
    msg.setSource(34439U);
    msg.setSourceEntity(22U);
    msg.setDestination(43167U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.92504527205;
    msg.lon = 0.503253674786;
    msg.z = 0.442825024924;
    msg.z_units = 196U;
    msg.speed = 0.334836388593;
    msg.speed_units = 174U;
    msg.bearing = 0.64112112234;
    msg.cross_angle = 0.621632337119;
    msg.width = 0.685423986491;
    msg.length = 0.638646149856;
    msg.coff = 207U;
    msg.angaperture = 0.824124910986;
    msg.range = 45544U;
    msg.overlap = 201U;
    msg.flags = 242U;
    msg.custom.assign("VOUQYARFNRGYZKGHISKADVBLLEFZYEATJSZUPLSJKLHMRUBHWQTDLBPWWCZGXNNNOPCQKXNARHTPRHXEVAJSCSMTDEZRIJH");

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
    msg.setTimeStamp(0.230834582825);
    msg.setSource(19781U);
    msg.setSourceEntity(26U);
    msg.setDestination(9508U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.570788069299;
    msg.lon = 0.369533217198;
    msg.z = 0.0234483292064;
    msg.z_units = 108U;
    msg.speed = 0.88417140011;
    msg.speed_units = 102U;
    msg.bearing = 0.923335924742;
    msg.cross_angle = 0.430459796593;
    msg.width = 0.0398205678924;
    msg.length = 0.267894684509;
    msg.coff = 127U;
    msg.angaperture = 0.132339607885;
    msg.range = 7375U;
    msg.overlap = 182U;
    msg.flags = 90U;
    msg.custom.assign("RWZSCIDHMCXFTMFBVPVDFYOENWDIKMXROUDLFNAVYKVODTKSHFNKCULJBHLYBHEUPWQXNYPRBZTGDZZAEQAYBEBWUIPGOHYIXZXRJDHSEWIZYAZOJJACWLUKLNHPXWEOIBQBFNUKRWPNGJYMQQKJNVRODWTUAHCZSISQOQ");

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
    msg.setTimeStamp(0.0343106554254);
    msg.setSource(39083U);
    msg.setSourceEntity(155U);
    msg.setDestination(28826U);
    msg.setDestinationEntity(161U);
    msg.timeout = 15102U;
    msg.lat = 0.635746618161;
    msg.lon = 0.0441814249662;
    msg.z = 0.859504581947;
    msg.z_units = 197U;
    msg.speed = 0.459758178277;
    msg.speed_units = 184U;
    msg.syringe0 = 231U;
    msg.syringe1 = 163U;
    msg.syringe2 = 221U;
    msg.custom.assign("KHICBSGYZHXVUNHKORFCEBKFIIYVSRUQSAIWZVSGFMYTMDOHXQAQCASXJSCDHCWQTMPUSYIAYGBZENIMBAOCPFYOFLOJMBUJIPQHSGAQSLOHFPOTELFGXTBEUPDKDGBWUNWUJIYWGLRFQDZIWRHTHJLRJPZTIAZONTXUYNUTNXLUGWVPAWEVDDQRKZXJBMKNZNYLZDRQVVPVEBLAV");

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
    msg.setTimeStamp(0.637323113066);
    msg.setSource(24872U);
    msg.setSourceEntity(180U);
    msg.setDestination(33671U);
    msg.setDestinationEntity(195U);
    msg.timeout = 58507U;
    msg.lat = 0.152073984276;
    msg.lon = 0.641722888431;
    msg.z = 0.917357029293;
    msg.z_units = 118U;
    msg.speed = 0.495511811393;
    msg.speed_units = 23U;
    msg.syringe0 = 221U;
    msg.syringe1 = 17U;
    msg.syringe2 = 145U;
    msg.custom.assign("SVOFVCNRAZPMXYFMGGUIRBIEFDKYBFZKEVBMAZHPWJLWGFICUHELVIFCTHRUBXNUVLVNLEEJTDRWLQUXWGKPZBQZRIXHOCTOSSHQSACVLBFRZOJLJCSEDKXGZJUSVMPLDWFFAITHDRUJYBEHJCSDYIQKVCXOXOEBOWQNMGAMOOYAALPESYUPWTCWQGYNTYKDNUEJSMHPQXQXIPCMJWKBGPFTIQMNNWRJTHDGZORPKIUK");

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
    msg.setTimeStamp(0.67719621643);
    msg.setSource(19309U);
    msg.setSourceEntity(49U);
    msg.setDestination(52767U);
    msg.setDestinationEntity(12U);
    msg.timeout = 16694U;
    msg.lat = 0.43087489555;
    msg.lon = 0.468377598708;
    msg.z = 0.46496210782;
    msg.z_units = 185U;
    msg.speed = 0.646057573599;
    msg.speed_units = 238U;
    msg.syringe0 = 114U;
    msg.syringe1 = 77U;
    msg.syringe2 = 153U;
    msg.custom.assign("PCZLSLEHUETQXHSMKYCJNCTQGJVAJETSIOKBLPVAXMYPMJX");

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
    msg.setTimeStamp(0.0057697027374);
    msg.setSource(50622U);
    msg.setSourceEntity(120U);
    msg.setDestination(44111U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.941447699023);
    msg.setSource(23596U);
    msg.setSourceEntity(7U);
    msg.setDestination(47824U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.862827218908);
    msg.setSource(62714U);
    msg.setSourceEntity(253U);
    msg.setDestination(20746U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.209514826385);
    msg.setSource(48369U);
    msg.setSourceEntity(127U);
    msg.setDestination(42247U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.895757139782;
    msg.lon = 0.407910426187;
    msg.z = 0.103035144416;
    msg.z_units = 94U;
    msg.speed = 0.507433865953;
    msg.speed_units = 250U;
    msg.takeoff_pitch = 0.746697952123;
    msg.custom.assign("ZBAEQBDVASVDMGDKKNWYKQWPHLKODFJEGIUATQYRAIYFRHGIBYVZWNWSEGJFMHOOIDFKZUMPEOWKTQRZGQTERQEWZEIHCBSNBMLHEXAJRTCUZNF");

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
    msg.setTimeStamp(0.821338815759);
    msg.setSource(22173U);
    msg.setSourceEntity(215U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.469694660254;
    msg.lon = 0.680323160088;
    msg.z = 0.907826382331;
    msg.z_units = 141U;
    msg.speed = 0.286333082004;
    msg.speed_units = 14U;
    msg.takeoff_pitch = 0.983480580299;
    msg.custom.assign("TLYXAHVTSUPYRSKZZZPPWCPEOXEMDFKDBYBRKNALDJXCGMGNPEIFTUTBPWROAOGU");

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
    msg.setTimeStamp(0.508738831561);
    msg.setSource(23415U);
    msg.setSourceEntity(11U);
    msg.setDestination(62845U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.945379010651;
    msg.lon = 0.502792955547;
    msg.z = 0.819254100322;
    msg.z_units = 6U;
    msg.speed = 0.704998546094;
    msg.speed_units = 68U;
    msg.takeoff_pitch = 0.388346988157;
    msg.custom.assign("ZUPOXIIWHXQVHEBAJJWGNBAOIFZCMSFWCBTNZYORTLRSXWGHEFPHKSBDZBLSHZMXKUMJKDGNMNYMLUOYXVFKPQSLTWRHRUJVYDRBQCIPPGOTIXZUSEIHQSPEFSYDAKRAECJGVEQBFEVXIUXEDUWFLTJNMFMNLDYILRATLFONKTVFCQCGZRBGATWKASSLPYKOQZZTADAXPDEVEVJQLYAHGOMZKNWDXDCBMK");

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
    msg.setTimeStamp(0.535746131779);
    msg.setSource(62089U);
    msg.setSourceEntity(86U);
    msg.setDestination(1158U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.0452591978551;
    msg.lon = 0.818441678198;
    msg.z = 0.247601333525;
    msg.z_units = 109U;
    msg.speed = 0.99374457697;
    msg.speed_units = 189U;
    msg.abort_z = 0.82933645357;
    msg.bearing = 0.305395122236;
    msg.glide_slope = 226U;
    msg.glide_slope_alt = 0.120367470889;
    msg.custom.assign("MDPJYJFTOBRUQMUGKIKAUHUZTSCLOALWZJGXDINJTANOYSVVIAGEKMCBP");

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
    msg.setTimeStamp(0.260308973958);
    msg.setSource(5601U);
    msg.setSourceEntity(226U);
    msg.setDestination(33466U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.274977806382;
    msg.lon = 0.156824207946;
    msg.z = 0.989313531556;
    msg.z_units = 53U;
    msg.speed = 0.362478852167;
    msg.speed_units = 124U;
    msg.abort_z = 0.475132457635;
    msg.bearing = 0.200759196235;
    msg.glide_slope = 187U;
    msg.glide_slope_alt = 0.288087584552;
    msg.custom.assign("FDDLEINZJVARFOPTPXEMONIYLQHNDMAGNUJSDLOOTGWKKIFOFMGFWUVTDFREKMAASYYVYCFGSMKZYCHHVSXCBEBCHGLUCBPBGTYZURORKUNKCQALJVTBDKLKRVNDIHXVEXGQXCPEQIYLVEIXGSCESQDUTTWBKRQQSGDEDRWIUXTMBQCYAWVICHEFJWXTPFSJXAWXAGJZVIWBPMMPZUQSZOYOUNROPSBLWJA");

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
    msg.setTimeStamp(0.685190098084);
    msg.setSource(30170U);
    msg.setSourceEntity(2U);
    msg.setDestination(30544U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.95428700894;
    msg.lon = 0.786794111329;
    msg.z = 0.413187668675;
    msg.z_units = 61U;
    msg.speed = 0.826166817487;
    msg.speed_units = 186U;
    msg.abort_z = 0.968607723824;
    msg.bearing = 0.607456374909;
    msg.glide_slope = 43U;
    msg.glide_slope_alt = 0.406313240286;
    msg.custom.assign("FUHRTZJADBFXRYMVLPBOXTYAFEELKGUBSBVCNCDVUMWYSNOMVKIKNHHDHRXKOHCMAFEZSYRACWLQZEAKJV");

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
    msg.setTimeStamp(0.300911051461);
    msg.setSource(52682U);
    msg.setSourceEntity(88U);
    msg.setDestination(22350U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.628159463806;
    msg.lon = 0.808344741156;
    msg.speed = 0.641039758745;
    msg.speed_units = 191U;
    msg.limits = 200U;
    msg.max_depth = 0.084611158013;
    msg.min_alt = 0.46308538119;
    msg.time_limit = 0.960525871228;
    msg.controller.assign("UMGYDNCDBKQRFJQYRKPEIGVHQWHUMA");
    msg.custom.assign("BMTAKCYBSFYCYMSPGBQWMZLPBMCOEEZURFLGSWHTDZNYWDXNVJRSGATEBDCRPCKRHGKVGQEFIFNJHQPWHMSWFQTMIOSIKXNCZLTWEIISBAMUJZZJAEXEOLFZJUFALZNVYTOKSBUEPYKWFDUYUAHBHQLOMTVUXRHRYRC");

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
    msg.setTimeStamp(0.239226383092);
    msg.setSource(47276U);
    msg.setSourceEntity(14U);
    msg.setDestination(2364U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.661660871918;
    msg.lon = 0.326519782332;
    msg.speed = 0.448927759266;
    msg.speed_units = 64U;
    msg.limits = 140U;
    msg.max_depth = 0.354134131143;
    msg.min_alt = 0.535072417397;
    msg.time_limit = 0.692658812308;
    msg.controller.assign("QHBGBEYZCPLRHDDBIVXXUAGKCJIDTIRNSILFPBLKJVMUMGVGDNWQNTCOMGGWBHWTZZCRHJWQIPNGCSNPRPEKOVQEKVQEACPXFYVAOXMMUIQDPEBTOKJSRBDNYTJADZFEJIUTNTXUBVMHZSZL");
    msg.custom.assign("TWNOCTCJMPZJFODVSASLWADUFVLEAQVIUCCMIHXJCAQOTE");

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
    msg.setTimeStamp(0.644462543075);
    msg.setSource(28316U);
    msg.setSourceEntity(122U);
    msg.setDestination(36124U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.517148551806;
    msg.lon = 0.6122742202;
    msg.speed = 0.256911406827;
    msg.speed_units = 10U;
    msg.limits = 189U;
    msg.max_depth = 0.379615090724;
    msg.min_alt = 0.38294094551;
    msg.time_limit = 0.312351026643;
    msg.controller.assign("LWBHBFOATPLLWARVHPCRADMUDONYXWVWLWNQFUASVFAGGYGCWJCUKPUMEHJYFYABFGDHZLTUEOSGFAFJQRNEVUQ");
    msg.custom.assign("HQSLKTGSWJFCVFUWKOAYDLVUMDRLERIBPNDOHCKQKRSUIWWEHUUNMZMCTHOZEOBYABYPGXLHERZLZXEXHFBIKISYXJVRBJPMJJMDETNICWFARYZKMNHUOHAYXNWYCOYXQRBDKTACFSPCDJHVWKFVGJDINMTBSBSROPTFINFTNDPGHDALLARJCSILAPYBQXKQEVIMLPGETWVZFQ");

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
    msg.setTimeStamp(0.810997903509);
    msg.setSource(59506U);
    msg.setSourceEntity(49U);
    msg.setDestination(46220U);
    msg.setDestinationEntity(18U);
    msg.target.assign("HNRJGFAADPBOBGSVLYYUWWGMVGSFNTRINHXCIUIAXYCNVBCSVAXDTXOWYOLQQXXCQDEPBMKYDTJHYBNRHJGRKSFXZBEENUBWLVBQSYQLLTJMKMKMDZGOUWPSCSPSFPJZTLDUFCRIECZNTEMUFPXSIVRSQYYHIIZVKHWKHELANARRNJJQKHAMGOOCZEFD");
    msg.max_speed = 0.584046202381;
    msg.speed_units = 205U;
    msg.lat = 0.808695810434;
    msg.lon = 0.786962188033;
    msg.z = 0.153902777055;
    msg.z_units = 33U;
    msg.custom.assign("MZSDMVTJSGTMNNQONRMLNRACURQGOUKUWDMKYCREXQJTHRGSDUWQTWMFYGVBAGQUHYATIKHVLAALHPFPBVANBCZNEQGUDFLTNLTWIIKWIZKFLXJPCYLXREYESIWVZMLOBITPICOWTACZJOXQBOHBDMACOQQYVGRVRI");

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
    msg.setTimeStamp(0.435962787254);
    msg.setSource(52562U);
    msg.setSourceEntity(142U);
    msg.setDestination(33724U);
    msg.setDestinationEntity(57U);
    msg.target.assign("CAXBWJCHWFQHQQSXNSPNWWLLPXOYA");
    msg.max_speed = 0.871371079172;
    msg.speed_units = 156U;
    msg.lat = 0.355521016937;
    msg.lon = 0.112934501729;
    msg.z = 0.6468970919;
    msg.z_units = 103U;
    msg.custom.assign("ZYDZZNQQRVTCJPCDTNNEINZEY");

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
    msg.setTimeStamp(0.374302623497);
    msg.setSource(7077U);
    msg.setSourceEntity(162U);
    msg.setDestination(947U);
    msg.setDestinationEntity(86U);
    msg.target.assign("LWDGAODCHQVFPXZUHFMAHNRTHOBVOVYGHSHZMJXSIEJGAQCCWZBQOIRPWWOSOEFIANUBPUPGAKVLT");
    msg.max_speed = 0.66232892473;
    msg.speed_units = 59U;
    msg.lat = 0.644439232167;
    msg.lon = 0.879148747907;
    msg.z = 0.529792306544;
    msg.z_units = 252U;
    msg.custom.assign("IMJCGRZLLKKOTKRINRNYPDAF");

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
    msg.setTimeStamp(0.999527569449);
    msg.setSource(47449U);
    msg.setSourceEntity(173U);
    msg.setDestination(5320U);
    msg.setDestinationEntity(199U);
    msg.timeout = 11298U;
    msg.lat = 0.652772065372;
    msg.lon = 0.0355337999298;
    msg.speed = 0.11098544759;
    msg.speed_units = 125U;
    msg.custom.assign("WKSCWENXCHMGGRAFUAGLFSXJWIRMAMRTFBCEME");

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
    msg.setTimeStamp(0.0365410535111);
    msg.setSource(3133U);
    msg.setSourceEntity(96U);
    msg.setDestination(3858U);
    msg.setDestinationEntity(144U);
    msg.timeout = 64817U;
    msg.lat = 0.231045709223;
    msg.lon = 0.969831983689;
    msg.speed = 0.164654692835;
    msg.speed_units = 22U;
    msg.custom.assign("QXFWTXHIALUUSLEHLAYIYDCGWRJKTXBOZIHAWKCFDHKWGMYTBITBFZQJNWQJBLFUSWPZMUFKSIQMPLQECMSBKXGOWKJFBLVADPDVZ");

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
    msg.setTimeStamp(0.445142174107);
    msg.setSource(32825U);
    msg.setSourceEntity(168U);
    msg.setDestination(63416U);
    msg.setDestinationEntity(37U);
    msg.timeout = 39392U;
    msg.lat = 0.448836246264;
    msg.lon = 0.988208664406;
    msg.speed = 0.594358502343;
    msg.speed_units = 108U;
    msg.custom.assign("VSWTVVQKGULOANGQPSSFLGZMQRFBJODHULVAJWBNGREIDMJZUJKJOFTXGOQGLQRYAIZTKWYQWPOCCHNRXYRJAVCYGNNFUUFUGPYDQPJKZCYYHKWGJDXITIRPDIBSMTCKXDRRJQPAFBFITKPNRYBLUESVWWOXOXNRDHATCTC");

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
    msg.setTimeStamp(0.767937813137);
    msg.setSource(65175U);
    msg.setSourceEntity(106U);
    msg.setDestination(64168U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.895816823254;
    msg.lon = 0.4872267687;
    msg.z = 0.924160362428;
    msg.z_units = 231U;
    msg.radius = 0.781872264653;
    msg.duration = 31681U;
    msg.speed = 0.21780396014;
    msg.speed_units = 78U;
    msg.popup_period = 38235U;
    msg.popup_duration = 20195U;
    msg.flags = 91U;
    msg.custom.assign("OVOEYVGRSAIZWCZNKOUVGQWAHNDHRFIDLPGQVJNWXPPLUYLLEUWZWQOGSXHDCKUQMIJJRAHLZYKKFISQKRUXCKGZYDYCAEEVTSLCXIHBBNPOAEDBCEBWEMEWIZHBXZTFHFFPGWVYTRCYMVFTSUQNERNAJDBXUBLSZLFKXLXHBTMMMRJOJTQQXJTGYSCKCVNBFPNXMKTWFFUGVDAGA");

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
    msg.setTimeStamp(0.300606054703);
    msg.setSource(39411U);
    msg.setSourceEntity(170U);
    msg.setDestination(4259U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.763719333325;
    msg.lon = 0.405146453671;
    msg.z = 0.211318493039;
    msg.z_units = 240U;
    msg.radius = 0.668215602243;
    msg.duration = 25377U;
    msg.speed = 0.767539915159;
    msg.speed_units = 28U;
    msg.popup_period = 4940U;
    msg.popup_duration = 24491U;
    msg.flags = 213U;
    msg.custom.assign("ZIOXCPJHGIPNQEBPLVNYHVEPHTPOJTMZUZQSJWAICSYCIGJVLFAVNFAMIRQOUFHKMQBHCVBZNDSBQDROVRIRTEWEWHGESCZBKYQOXYXHGDSFGKPLDSHNLZBDAQYJVWFPAYWOTWKSNKUDMFXFLRHRARWOXGZJDWJYEUAPQEGTGMFSKNOXQKBURICTDZKNWTBJJCVZEXTMTLNCJZFCUXAMIGLKYVFHGBXT");

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
    msg.setTimeStamp(0.626757636219);
    msg.setSource(48655U);
    msg.setSourceEntity(194U);
    msg.setDestination(27089U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.520353439083;
    msg.lon = 0.73824853142;
    msg.z = 0.0923541550419;
    msg.z_units = 213U;
    msg.radius = 0.173183104572;
    msg.duration = 53550U;
    msg.speed = 0.204441943499;
    msg.speed_units = 131U;
    msg.popup_period = 34565U;
    msg.popup_duration = 40828U;
    msg.flags = 59U;
    msg.custom.assign("WBBNTJAYWADTNHMJNSVAZLCRHKSKIFOBFZCUQZDEDIIEENLKXNPHHLICQMKRWYWXFTFRUEXUDGGETGDMKOADJOULLBFLNACNGYTOLSHWVROAJQPJUSEGSITKUBYRAVYMUTXUZQSKSCDGVPEFWQERFQKGPQYDIVBUUOVPVTWNCFHXHPXDISQHAXFTOJFCLXBBJJZWCQZ");

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
    msg.setTimeStamp(0.637548167754);
    msg.setSource(50657U);
    msg.setSourceEntity(111U);
    msg.setDestination(18840U);
    msg.setDestinationEntity(132U);
    msg.timeout = 41774U;
    msg.lat = 0.885141050447;
    msg.lon = 0.579694078588;
    msg.z = 0.119085807853;
    msg.z_units = 118U;
    msg.speed = 0.0261777970653;
    msg.speed_units = 68U;
    msg.bearing = 0.548375361362;
    msg.width = 0.670215845302;
    msg.direction = 76U;
    msg.custom.assign("YPZITWORKWWCAOWD");

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
    msg.setTimeStamp(0.16033845343);
    msg.setSource(53442U);
    msg.setSourceEntity(173U);
    msg.setDestination(35594U);
    msg.setDestinationEntity(113U);
    msg.timeout = 26812U;
    msg.lat = 0.0100692302729;
    msg.lon = 0.188397966086;
    msg.z = 0.452175565534;
    msg.z_units = 9U;
    msg.speed = 0.687196574384;
    msg.speed_units = 5U;
    msg.bearing = 0.256183567369;
    msg.width = 0.930845093026;
    msg.direction = 136U;
    msg.custom.assign("DDKQWKMQMULFYYUJFJNZYKUZEVBBFXHLYASHVNKSLCHSTCUENWICTCEUQXTPCCWZVNBROJCEQFPIKHRSUENOOEMOXVSTIRHDMGKXVWOGLETKXADWIMLHPWTTDLTNUDYDJDUYIIKBORRXFJZLGAGRAADEWMJZOVZGWVBAJPSJSCLFYM");

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
    msg.setTimeStamp(0.727921848379);
    msg.setSource(23825U);
    msg.setSourceEntity(97U);
    msg.setDestination(33427U);
    msg.setDestinationEntity(74U);
    msg.timeout = 41321U;
    msg.lat = 0.971494617113;
    msg.lon = 0.248967633248;
    msg.z = 0.915076329179;
    msg.z_units = 50U;
    msg.speed = 0.114039483308;
    msg.speed_units = 102U;
    msg.bearing = 0.141155330471;
    msg.width = 0.418607826848;
    msg.direction = 131U;
    msg.custom.assign("FRKKBUQDXJMFSZYBIBYVSLKVPTTWIYCHNHNJLLTWVZCJAKQBVAFUSALIFACTACSLSQDGRXROFAMTGFSMGYZUECXINXVYYTBDAUDQPXOWUIRDPUJHGCQGDKNDEHQXQWYPRBGMEFKNKYLNBDGSMIHLNOVVNEFXZTWUEHJUQZLNLCIXBMWUJXSRGJWFVPQNWPQYXOIMEOTMGAZUEKOMGOIEFHRA");

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
    msg.setTimeStamp(0.845311038107);
    msg.setSource(14444U);
    msg.setSourceEntity(222U);
    msg.setDestination(45175U);
    msg.setDestinationEntity(43U);
    msg.op_mode = 40U;
    msg.error_count = 149U;
    msg.error_ents.assign("IUIOQFBQXRCROGZNENAZDXDYHOOJJYYMASQKWQKIFWYMWNCRLTSRXXP");
    msg.maneuver_type = 59641U;
    msg.maneuver_stime = 0.704283285992;
    msg.maneuver_eta = 31636U;
    msg.control_loops = 3406340987U;
    msg.flags = 30U;
    msg.last_error.assign("SFBTQGBWPUFBPJXWDAYCNPVKPLTMUATJHQWAHXOGAEFJXESNPZUMTMHCODKQTRCKMITIYABO");
    msg.last_error_time = 0.65367213275;

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
    msg.setTimeStamp(0.603726213901);
    msg.setSource(51453U);
    msg.setSourceEntity(57U);
    msg.setDestination(27039U);
    msg.setDestinationEntity(183U);
    msg.op_mode = 210U;
    msg.error_count = 224U;
    msg.error_ents.assign("HRMJBEODHBWWIBOPYCPZKDLXQCSALAXJQ");
    msg.maneuver_type = 45908U;
    msg.maneuver_stime = 0.0706644740368;
    msg.maneuver_eta = 35534U;
    msg.control_loops = 3946999819U;
    msg.flags = 97U;
    msg.last_error.assign("MTHNWXZZSGYQYXVDFNWKADHEZKKRIGKLUAEPOXOWWFTSKATQHJJNINSL");
    msg.last_error_time = 0.117841899187;

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
    msg.setTimeStamp(0.980603523502);
    msg.setSource(979U);
    msg.setSourceEntity(246U);
    msg.setDestination(45861U);
    msg.setDestinationEntity(55U);
    msg.op_mode = 214U;
    msg.error_count = 3U;
    msg.error_ents.assign("KUZQFEXZWRKYVTMVDSYMNFKGWLGCFOSHCIHMCRJLAPWKJIEEIGUHIPPSPMQVBYTYSLRWQORPBYOGPDBHIQOLCXEAXAMMZJVRRFDWLXLGETGQORUWWTIXNJWLSBDMZVNESFKTQNTFYZQOYJXUIFCEJDLREZXVBETJYDOJUIFDKBIAUKA");
    msg.maneuver_type = 62233U;
    msg.maneuver_stime = 0.256353232003;
    msg.maneuver_eta = 48933U;
    msg.control_loops = 2053360928U;
    msg.flags = 13U;
    msg.last_error.assign("GZKAALHPSESRDCIHZVUMLSINXYSYQWPBZXIUFQKCFCVETZNMXJZUMEGPAMUYFETCSBDUXDPTBFOHNIFTKWLQYPEKJHEBORKIGMLTFRRFHBJBEHCMYTPGMWURUPNPCWXPFQOASHDZOCQUZYBILLIVSPCAEJMYVDVGOEVYGAISWTNDUQWDORLRXNFKHJGWWMMYCLRKGHBXFEOCV");
    msg.last_error_time = 0.458604958146;

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
    msg.setTimeStamp(0.01203863574);
    msg.setSource(33340U);
    msg.setSourceEntity(75U);
    msg.setDestination(16175U);
    msg.setDestinationEntity(81U);
    msg.type = 78U;
    msg.request_id = 24988U;
    msg.command = 5U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 31873U;
    tmp_msg_0.lat = 0.409300562143;
    tmp_msg_0.lon = 0.679002951947;
    tmp_msg_0.z = 0.233992667952;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.speed = 0.785859787992;
    tmp_msg_0.speed_units = 100U;
    tmp_msg_0.custom.assign("QXEHXATXYJGFZMJWEPWBSCZCJYWFHVTUQOZIXAPVPTYYFFONPKFIEZDELXWLNTMBEBKZDSBYNDWVHSZQMIQHLUTMPLDRNZLLNVHIQTVSGZITDKQGNEOULFALWBPGUQWLJULTCROOFDVYEWIXQRXUBPMGOHMGEGPTKUKJNOKVJNSHWUCEYAAQMIHAEJKRHJAC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10203U;
    msg.info.assign("HJAMVICZGDVNBBFLUPMZYKKKYHIETFKRYTNVPKAGFZCFCRDILDGTWQLXOONJAWSIHAVQJRZGHXFENPRYZLMPUHWBZLMKWSXBUCW");

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
    msg.setTimeStamp(0.220206588268);
    msg.setSource(10352U);
    msg.setSourceEntity(102U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(22U);
    msg.type = 239U;
    msg.request_id = 28855U;
    msg.command = 41U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 35780U;
    tmp_msg_0.lat = 0.5151526005;
    tmp_msg_0.lon = 0.878126559484;
    tmp_msg_0.z = 0.946002993172;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.282362505358;
    tmp_msg_0.speed_units = 241U;
    tmp_msg_0.custom.assign("UGAWRWJURYJWBXOPOMKUQHLGWJIUGQYNXVZLSANATKKZPWBXSZOSXQFCGFCRLAZGRRMHLDGUHEBVYLWPQZNKMIVSJDJPNVCNTGHEMPSQCLRZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17521U;
    msg.info.assign("RCKQNLGCQXUIZHYJUPHJSXRPIWUFQRYKKOFTKVYQBGJGBBZOBVMLOATFQTPIQCQLAASMGIZRJHWONOJPCNLJLQSYTDMZHEUWCHGANSYVFLNXZPAKVKFLJSMVUQFDRMJAFIWOZKITRNDQDUCPSTDFAMXSBGJOVDJEYP");

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
    msg.setTimeStamp(0.270626825663);
    msg.setSource(58821U);
    msg.setSourceEntity(75U);
    msg.setDestination(64638U);
    msg.setDestinationEntity(106U);
    msg.type = 54U;
    msg.request_id = 19546U;
    msg.command = 62U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 41994U;
    tmp_msg_0.lat = 0.56515726328;
    tmp_msg_0.lon = 0.839389561082;
    tmp_msg_0.z = 0.496216609707;
    tmp_msg_0.z_units = 249U;
    tmp_msg_0.duration = 49622U;
    tmp_msg_0.speed = 0.144275362815;
    tmp_msg_0.speed_units = 66U;
    tmp_msg_0.type = 39U;
    tmp_msg_0.radius = 0.911664702559;
    tmp_msg_0.length = 0.548937630717;
    tmp_msg_0.bearing = 0.702486940413;
    tmp_msg_0.direction = 76U;
    tmp_msg_0.custom.assign("MVRAHWRNUNMPNTSDERVTXJGQVVEGIYMDHNGLZPMIXLAXHFVVHVJWPKQEIIBUMGSLCKCQUOVXIWSZASPKFFZUESTJQSBFDJBCBYESRSJDFTYQJEEGWQY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7817U;
    msg.info.assign("NDHWKHMOAPBQSKFKVBQUCSVLDHNOJVLGTHUPWZMIQPVPCAXXRYLBUWWYWBSZCKRHVCBVQNDMDFCPFIQYWYRJSNJXWGFJSFQYAJTDYRNIVJHRHQZMUQEOLXBZGEGDKTBMMCSETZIQLCJKRJINGPMUVOTEXRJFCTP");

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
    msg.setTimeStamp(0.679597617385);
    msg.setSource(31072U);
    msg.setSourceEntity(109U);
    msg.setDestination(1838U);
    msg.setDestinationEntity(151U);
    msg.command = 77U;
    msg.entities.assign("ARCPEXNWKVPHRKSYVMGMGVRXVYJRHJSHFFEWCPZDEHFYIAQEDMBNVCPBQQRLWNUBVOZUXPZHQUCXODWMQBUDUUAWNXJOGGZJLSNYAMFKSTSIVCFFXKTMJTIHZCSBIOIDKUTYNBEPWOKBYZZZLTZGFKLEQBFEIRHLRUYNDYUBGGSNX");

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
    msg.setTimeStamp(0.830169106576);
    msg.setSource(29519U);
    msg.setSourceEntity(101U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(124U);
    msg.command = 109U;
    msg.entities.assign("DKKNBPFTPORLGVWGGUBSLKEXETAIENXNPYIFGZHBWRSNELNWEIJMDRDAYCKQVTJWOAZQPJECFSXLWXXAZVYPEDPHYXGSUCTORBDUGWLNFCMKUQNZFESRMGQIGVWSTZREQJMSJKRIAREDKDKTQ");

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
    msg.setTimeStamp(0.0317183925052);
    msg.setSource(25289U);
    msg.setSourceEntity(87U);
    msg.setDestination(35962U);
    msg.setDestinationEntity(184U);
    msg.command = 83U;
    msg.entities.assign("OOCWHZNFLEOOJGQRUSUKOMYTVSKWXBTQIADSNBUIRYUWMPKRXPLMGYWFDGBYYTATUVYDINWIBRGPDHSCVLSAGAPBSXLPBLHJBPNUULHJKXHMJTZQZWTANTEEMXGAKVYET");

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
    msg.setTimeStamp(0.822364986504);
    msg.setSource(7442U);
    msg.setSourceEntity(202U);
    msg.setDestination(43404U);
    msg.setDestinationEntity(110U);
    msg.mcount = 190U;
    msg.mnames.assign("NNQDACNLOBBUZQKMVKKDYUHEOGGEBICYDSZHWWAIYPLERBWTXOTXLYRCIFFPISSLTBDAXJSWSFQVUSPVFFTLWMNALJMYRGBUTIXTJYVHKMDZDHTRKSFESYZOYOSJCFQAM");
    msg.ecount = 169U;
    msg.enames.assign("MGSVMOYDTZEFOJTCIKAZVXBFQ");
    msg.ccount = 120U;
    msg.cnames.assign("LRMGDKFXPZQNCGMUMORYAWWPKUNVFMUVOFJEZTVIRFCEVLQYZIOSQOPVXEISPMLNLTJYWXXXTCUBQSTBDMMDCMJDMGLRDVTWQOEKVYIBXYUSRHKWLPUOACNZCZGJHTYVXDEGKIKNBQZHAENKTZJKIANGUPDACBJQSZRMOEZPSUDJNVXUPWRGXQTDBGPIWLYIYHCNFGWPYHFARRHQSTOLLKB");
    msg.last_error.assign("CFPXJZVBFEMTRPBOMCNHYNBQYHBSXGKIVKUOISYBGQLLOADGWNQGIOPBRVJSFWIDQJVAFM");
    msg.last_error_time = 0.106711318169;

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
    msg.setTimeStamp(0.995023704728);
    msg.setSource(11176U);
    msg.setSourceEntity(208U);
    msg.setDestination(15827U);
    msg.setDestinationEntity(126U);
    msg.mcount = 142U;
    msg.mnames.assign("QUPSXNCWPPWMRGTUFFCRNHBAAKJKBSSKIUXXVDYHCOUXPGUVJDTJNSMZVPAYRESJCNIBHCYRWWG");
    msg.ecount = 202U;
    msg.enames.assign("MDYVBYOPGLKZLCJQXDBNHGHHRBMCDPDIRRUGETAHJTRIRPXQUKSGXCLEBJOUFGQFSOHCKVJTKTJNLWQQEUTMPQOZKCKWUCKEVCZVDNSYOFXAVDZIMLCODJSDNFPYEHJRNYAHIQVJXCSVOLRXXBEUIZEEBWOACTZLFLMUYHGKFAZOGMINVEXJAIBTWSKPTNGEMWAXFINSDIWWUGAMYSFMBTAYRTQRQUPOVPPD");
    msg.ccount = 189U;
    msg.cnames.assign("XDVJLOUDJXZJMZSDICNWTRZFTXVKBAQWDLFYKTNCKRRIMQATQWAXJNYIVMTETOQGQHHBPODPEFICRKBQZKXQKELIIGUKMROWBZQBVYLVDQHCHOTQAWHCEMLSVEMFFCVOXWKWEUHBGRDBTZLL");
    msg.last_error.assign("YGEPDFMASNINRLTYKMULGZSLFBZPCZWHSHIYPJOJSFYKNBEPFZTLUUVKRXPXAEZMPOATMDDXZOSKMBABHMRHLRCRJYFBZCQSVXPRDIQNNCWZWQWHLDYKFVTYIIUQGJERXRBESVOKHKPB");
    msg.last_error_time = 0.833629662157;

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
    msg.setTimeStamp(0.933286853694);
    msg.setSource(1933U);
    msg.setSourceEntity(220U);
    msg.setDestination(11737U);
    msg.setDestinationEntity(54U);
    msg.mcount = 24U;
    msg.mnames.assign("JZONYGGUKUFTGVIKESWRVCODVRLBOSBYGQOJRPBUWAWXHGCBPODINHOBDKKRIHMJDELRRAQWGXMXEBAJGTOBPITKPFPGCNXWMZEQWDVFSCAYDYYTEV");
    msg.ecount = 224U;
    msg.enames.assign("UEKZMLAQBNFQKUJTYAPVTXZFTAQZZIHOCDVQYKQAJYCNWXFHNOFAPWOJCSYHAURIFECGHHXEGTFHS");
    msg.ccount = 16U;
    msg.cnames.assign("HYJDXRZCMQVEROHHKDCZVCYPTXDTXBHIZEKYRXYTYLVACTFFQSKRGAFXPMNZLOJVQIOBCFRWTNVSCBHPSDLIYGWJUKDPPXHXGFCPZBLMUNWOAAOEFDVNAWTKWLVFONLOEWZAQZZXGIARUNMMXJVFEIZMCSPHJNWAMSFJQERSPQSUDNRBSJTVAHIIEMUPNYUJKQBYXW");
    msg.last_error.assign("MRVPEPVVWORQCSNYTUDEJSQOAPWOGBAWIPJPYZHYBOWCTEXXVFNZFKM");
    msg.last_error_time = 0.0553380204295;

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
    msg.setTimeStamp(0.633038757597);
    msg.setSource(30680U);
    msg.setSourceEntity(251U);
    msg.setDestination(28343U);
    msg.setDestinationEntity(171U);
    msg.mask = 189U;
    msg.max_depth = 0.922187149325;
    msg.min_altitude = 0.509603092407;
    msg.max_altitude = 0.122013680611;
    msg.min_speed = 0.447819501029;
    msg.max_speed = 0.416916008328;
    msg.max_vrate = 0.947499233905;
    msg.lat = 0.353537571195;
    msg.lon = 0.590075637238;
    msg.orientation = 0.885931785672;
    msg.width = 0.795941089032;
    msg.length = 0.936101834916;

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
    msg.setTimeStamp(0.511695295102);
    msg.setSource(47972U);
    msg.setSourceEntity(165U);
    msg.setDestination(40318U);
    msg.setDestinationEntity(193U);
    msg.mask = 230U;
    msg.max_depth = 0.919329883887;
    msg.min_altitude = 0.857488076909;
    msg.max_altitude = 0.679090831609;
    msg.min_speed = 0.917423601176;
    msg.max_speed = 0.842176723885;
    msg.max_vrate = 0.149698347631;
    msg.lat = 0.300406235015;
    msg.lon = 0.412225846494;
    msg.orientation = 0.373228243805;
    msg.width = 0.900119713929;
    msg.length = 0.70368102049;

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
    msg.setTimeStamp(0.398514502357);
    msg.setSource(40173U);
    msg.setSourceEntity(33U);
    msg.setDestination(59220U);
    msg.setDestinationEntity(51U);
    msg.mask = 141U;
    msg.max_depth = 0.962623958166;
    msg.min_altitude = 0.542156187537;
    msg.max_altitude = 0.647369256419;
    msg.min_speed = 0.811127555433;
    msg.max_speed = 0.198953954911;
    msg.max_vrate = 0.97269957078;
    msg.lat = 0.86679193346;
    msg.lon = 0.360060596218;
    msg.orientation = 0.645368825649;
    msg.width = 0.744511578342;
    msg.length = 0.694546591385;

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
    msg.setTimeStamp(0.168831825682);
    msg.setSource(32631U);
    msg.setSourceEntity(237U);
    msg.setDestination(21961U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.640622837834);
    msg.setSource(6321U);
    msg.setSourceEntity(22U);
    msg.setDestination(11277U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.774440263252);
    msg.setSource(31785U);
    msg.setSourceEntity(214U);
    msg.setDestination(47426U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.706730051495);
    msg.setSource(19314U);
    msg.setSourceEntity(159U);
    msg.setDestination(9747U);
    msg.setDestinationEntity(145U);
    msg.duration = 20897U;

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
    msg.setTimeStamp(0.741531839368);
    msg.setSource(63090U);
    msg.setSourceEntity(46U);
    msg.setDestination(56263U);
    msg.setDestinationEntity(171U);
    msg.duration = 56154U;

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
    msg.setTimeStamp(0.695755231655);
    msg.setSource(56932U);
    msg.setSourceEntity(9U);
    msg.setDestination(49029U);
    msg.setDestinationEntity(123U);
    msg.duration = 4536U;

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
    msg.setTimeStamp(0.10074791689);
    msg.setSource(32876U);
    msg.setSourceEntity(162U);
    msg.setDestination(36985U);
    msg.setDestinationEntity(157U);
    msg.enable = 100U;
    msg.mask = 3971798610U;
    msg.scope_ref = 1260977346U;

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
    msg.setTimeStamp(0.0260400360115);
    msg.setSource(42022U);
    msg.setSourceEntity(106U);
    msg.setDestination(49570U);
    msg.setDestinationEntity(208U);
    msg.enable = 115U;
    msg.mask = 2658953391U;
    msg.scope_ref = 3763546225U;

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
    msg.setTimeStamp(0.0140807779283);
    msg.setSource(26429U);
    msg.setSourceEntity(72U);
    msg.setDestination(36977U);
    msg.setDestinationEntity(175U);
    msg.enable = 51U;
    msg.mask = 1082768189U;
    msg.scope_ref = 453321980U;

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
    msg.setTimeStamp(0.776914162679);
    msg.setSource(4248U);
    msg.setSourceEntity(136U);
    msg.setDestination(34840U);
    msg.setDestinationEntity(253U);
    msg.medium = 249U;

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
    msg.setTimeStamp(0.266935313028);
    msg.setSource(5418U);
    msg.setSourceEntity(247U);
    msg.setDestination(26447U);
    msg.setDestinationEntity(176U);
    msg.medium = 192U;

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
    msg.setTimeStamp(0.0601646004818);
    msg.setSource(7320U);
    msg.setSourceEntity(200U);
    msg.setDestination(42280U);
    msg.setDestinationEntity(76U);
    msg.medium = 218U;

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
    msg.setTimeStamp(0.950790425482);
    msg.setSource(56242U);
    msg.setSourceEntity(136U);
    msg.setDestination(62549U);
    msg.setDestinationEntity(202U);
    msg.value = 0.774706576195;
    msg.type = 25U;

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
    msg.setTimeStamp(0.239395757832);
    msg.setSource(6004U);
    msg.setSourceEntity(63U);
    msg.setDestination(5544U);
    msg.setDestinationEntity(84U);
    msg.value = 0.243357035833;
    msg.type = 63U;

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
    msg.setTimeStamp(0.959327641708);
    msg.setSource(2086U);
    msg.setSourceEntity(143U);
    msg.setDestination(50809U);
    msg.setDestinationEntity(164U);
    msg.value = 0.931752181791;
    msg.type = 21U;

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
    msg.setTimeStamp(0.393937890293);
    msg.setSource(48369U);
    msg.setSourceEntity(5U);
    msg.setDestination(13075U);
    msg.setDestinationEntity(63U);
    msg.possimerr = 0.016233479455;
    msg.converg = 0.573149846438;
    msg.turbulence = 0.241505698912;
    msg.possimmon = 39U;
    msg.commmon = 114U;
    msg.convergmon = 194U;

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
    msg.setTimeStamp(0.247290340774);
    msg.setSource(22389U);
    msg.setSourceEntity(135U);
    msg.setDestination(1426U);
    msg.setDestinationEntity(250U);
    msg.possimerr = 0.202273055509;
    msg.converg = 0.213727333595;
    msg.turbulence = 0.149430787428;
    msg.possimmon = 212U;
    msg.commmon = 16U;
    msg.convergmon = 12U;

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
    msg.setTimeStamp(0.255848297491);
    msg.setSource(35162U);
    msg.setSourceEntity(194U);
    msg.setDestination(32800U);
    msg.setDestinationEntity(206U);
    msg.possimerr = 0.358677674778;
    msg.converg = 0.428304965117;
    msg.turbulence = 0.372902374571;
    msg.possimmon = 245U;
    msg.commmon = 115U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.228239582407);
    msg.setSource(16695U);
    msg.setSourceEntity(139U);
    msg.setDestination(35775U);
    msg.setDestinationEntity(148U);
    msg.autonomy = 175U;
    msg.mode.assign("FFVKLOIJCXQMVIPGALAHUKEKXDEPNOIEZMJGYKTIJDXQKMRTCLSSIZWYGEZLQASYTUORLBTBBQYPJWDCPMRGWZDHIEMEGVXJXEYZURUSGPMPDBZQADFIXOZADMQTNBTDNUUNEQGWCQSOYSQOUPBKXCNFPHBHBQVZLLKUVCOLFVZOKVXZIWHATLKYJCHONRSNFAYXJTJYSJNVVGEWYRWLDX");

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
    msg.setTimeStamp(0.966562828109);
    msg.setSource(42196U);
    msg.setSourceEntity(103U);
    msg.setDestination(4136U);
    msg.setDestinationEntity(88U);
    msg.autonomy = 111U;
    msg.mode.assign("XWAAEFUBCHGJZTSGZZORXSSNKPMBCRZKBAPFSORSELCAIQJANNVJHNAHO");

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
    msg.setTimeStamp(0.65803238135);
    msg.setSource(56227U);
    msg.setSourceEntity(77U);
    msg.setDestination(33966U);
    msg.setDestinationEntity(18U);
    msg.autonomy = 65U;
    msg.mode.assign("ENOGELYSBUEFSHVWDUZAEEFAYEXLYOBQIYYKIFMXDLNKGBBFJJMXHDQWHNFGGDSLSIHYAJRCCPKQTGRADOUPTHRSJERUCUUSCARDPQTEVZDUTHVIPBZQNYXCBUPPBTRLVKGQOFPOZKVSECNYDBBAHPMSNWXFMGZTPLLRFNNMMUZKJDZHWZSKVDXMRWOE");

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
    msg.setTimeStamp(0.497214819724);
    msg.setSource(37933U);
    msg.setSourceEntity(158U);
    msg.setDestination(57686U);
    msg.setDestinationEntity(233U);
    msg.type = 172U;
    msg.op = 172U;
    msg.possimerr = 0.158634922449;
    msg.converg = 0.570483990469;
    msg.turbulence = 0.0794057999106;
    msg.possimmon = 154U;
    msg.commmon = 93U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.315930294296);
    msg.setSource(47874U);
    msg.setSourceEntity(92U);
    msg.setDestination(46328U);
    msg.setDestinationEntity(135U);
    msg.type = 128U;
    msg.op = 99U;
    msg.possimerr = 0.029649379038;
    msg.converg = 0.75731731424;
    msg.turbulence = 0.106132102149;
    msg.possimmon = 250U;
    msg.commmon = 25U;
    msg.convergmon = 197U;

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
    msg.setTimeStamp(0.976672551225);
    msg.setSource(15386U);
    msg.setSourceEntity(42U);
    msg.setDestination(4842U);
    msg.setDestinationEntity(228U);
    msg.type = 45U;
    msg.op = 27U;
    msg.possimerr = 0.015433422467;
    msg.converg = 0.405870903632;
    msg.turbulence = 0.0106365668456;
    msg.possimmon = 210U;
    msg.commmon = 97U;
    msg.convergmon = 81U;

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
    msg.setTimeStamp(0.505564583374);
    msg.setSource(1938U);
    msg.setSourceEntity(110U);
    msg.setDestination(1430U);
    msg.setDestinationEntity(226U);
    msg.op = 67U;
    msg.comm_interface = 73U;
    msg.period = 26217U;
    msg.sys_dst.assign("ITZODVPYFVTNMQGWPXN");

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
    msg.setTimeStamp(0.538004807562);
    msg.setSource(8240U);
    msg.setSourceEntity(63U);
    msg.setDestination(1596U);
    msg.setDestinationEntity(238U);
    msg.op = 213U;
    msg.comm_interface = 232U;
    msg.period = 48682U;
    msg.sys_dst.assign("YNVOONDTSJYRUDRECRKLMPOBBCXDNXGDSAEUUEFLKJVHTTW");

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
    msg.setTimeStamp(0.378490384294);
    msg.setSource(5851U);
    msg.setSourceEntity(131U);
    msg.setDestination(65430U);
    msg.setDestinationEntity(127U);
    msg.op = 90U;
    msg.comm_interface = 42U;
    msg.period = 60862U;
    msg.sys_dst.assign("TOQFCZEZDKJPJHTXDLKDUYGBUXBKSRWIGWMWHBHSASUCBJZZOWDZSHTTVUEISXPEMYGYFVNQBLGNTECLMNHQAWGCJJUIOLXOPQQGVNKWIPYIMUAQNSOASXCHPBIWQFWCPTDZKUHFYGFNPJMSZQVOIVHMTAELGYCOABJSYFLLETDYBOERVFMVGRUFRCYUMKYPPWQKRXXXMHCOZNKGEAVHPDKNOWLIJLRRQIXTAZJDNIRMBFNUDDLZASKVVCA");

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
    msg.setTimeStamp(0.428457546832);
    msg.setSource(4410U);
    msg.setSourceEntity(101U);
    msg.setDestination(48543U);
    msg.setDestinationEntity(216U);
    msg.stime = 3565451673U;
    msg.latitude = 0.610965595406;
    msg.longitude = 0.0691451120267;
    msg.altitude = 47183U;
    msg.depth = 57149U;
    msg.heading = 5122U;
    msg.speed = 2812;
    msg.fuel = 72;
    msg.exec_state = -97;
    msg.plan_checksum = 62999U;

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
    msg.setTimeStamp(0.568484437734);
    msg.setSource(15262U);
    msg.setSourceEntity(152U);
    msg.setDestination(34506U);
    msg.setDestinationEntity(62U);
    msg.stime = 593222516U;
    msg.latitude = 0.532368913877;
    msg.longitude = 0.92990901893;
    msg.altitude = 60309U;
    msg.depth = 3814U;
    msg.heading = 57766U;
    msg.speed = -31710;
    msg.fuel = -86;
    msg.exec_state = 18;
    msg.plan_checksum = 7934U;

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
    msg.setTimeStamp(0.908015705756);
    msg.setSource(47110U);
    msg.setSourceEntity(216U);
    msg.setDestination(47462U);
    msg.setDestinationEntity(55U);
    msg.stime = 1765695438U;
    msg.latitude = 0.428530846912;
    msg.longitude = 0.385831289098;
    msg.altitude = 48318U;
    msg.depth = 4133U;
    msg.heading = 64956U;
    msg.speed = -10548;
    msg.fuel = 103;
    msg.exec_state = 105;
    msg.plan_checksum = 4000U;

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
    msg.setTimeStamp(0.753689958559);
    msg.setSource(6721U);
    msg.setSourceEntity(183U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(143U);
    msg.req_id = 26825U;
    msg.comm_mean = 92U;
    msg.destination.assign("VQTPCPBNIMHNNPZLEGLGMSZHXBUORXVHAXDTAMGITJOOGTZRYZFYAILITHRYLQBTOCZNWEOJRQFOMUGQRPLFHLPVGQCJEJJEHWTGZXBHSWCVQGTAEKFM");
    msg.deadline = 0.281353263113;
    msg.data_mode = 189U;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 47482U;
    tmp_msg_0.type = 198U;
    tmp_msg_0.tow = 120290712U;
    tmp_msg_0.base_lat = 0.784560054399;
    tmp_msg_0.base_lon = 0.476253927259;
    tmp_msg_0.base_height = 0.86975704731;
    tmp_msg_0.n = 0.170627466381;
    tmp_msg_0.e = 0.406509017387;
    tmp_msg_0.d = 0.0166259789988;
    tmp_msg_0.v_n = 0.959873300438;
    tmp_msg_0.v_e = 0.892549090611;
    tmp_msg_0.v_d = 0.202063567378;
    tmp_msg_0.satellites = 181U;
    tmp_msg_0.iar_hyp = 63614U;
    tmp_msg_0.iar_ratio = 0.235487566577;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FXGHTIUVJBDEHFZWBXQEOEBXUTJOLUWZXBMUARKZWHIPJUQIUWCCVBDPMOFSYWDVJTPDBHCYQGHVIYQLQHOHREFCNBNLZWURCAMNGSDBARVWPVXYCSXAJMCOLKNNRPCPZDDMESGTKSYYLTVFNOYRA");
    const char tmp_msg_1[] = {-76, 64, -91, 49, -27, -72, 62, -38, 72, -23, -83, 108, 48, 121, -5, -60, 103, -59, -7, 49, -69, 71, -26, -6, 113, -38, 113, -117, 0, -23, -51, -26, -2, -85, 17, -124, 116, -75, 86, -116, 72, 52, 105, -68, -75, 91, 25, 52, 42, -94};
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
    msg.setTimeStamp(0.741376442129);
    msg.setSource(53400U);
    msg.setSourceEntity(59U);
    msg.setDestination(46801U);
    msg.setDestinationEntity(251U);
    msg.req_id = 10617U;
    msg.comm_mean = 11U;
    msg.destination.assign("ANNZOMXVTOJAOSPIZDYNNUCMPPTGCFZRXUBWSBURBYTMZDELSVAHDSWJKLAOWSLYQNEORHHIWROMGVCKHCPPNEIFNKJMTPCULGUBBOFOPFKYMUAEZRVZNAVHAYWGSIDULXQYXWBDJTTFUGUKBQFZYWJZXEHPMRQCDJCQFGCMCBLNWKTXRJPVJKFETGJTQAEQHGLKBSGDWDGIAVALQZZDHIRLYTNCEPRVRMSX");
    msg.deadline = 0.897606358266;
    msg.data_mode = 6U;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PXOEQBAYHCBQNYORXQJLHSFXUSVEBSIDROGJVQPPSJHWMAILTWU");
    tmp_msg_0.attr_type = 147U;
    tmp_msg_0.min.assign("MDOHBBLQNKHWMTRIQUUNYWOEJLAGSHRZZMYTVXKWBHNOCMYWSSCZVEDZDARAGQKMIGLNMFVDGAHDBYQCHEECFQWYWDWUEJTLGKECUOLBPCXKIWXKBCBLYUTAGMMUSRQBXR");
    tmp_msg_0.max.assign("TWPEMPCHLV");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PAVZJYMQDPRLZSBRGXWUJRJDUATVQZTOFNUVNABNEOYUNBRBCY");
    const char tmp_msg_1[] = {-82, -80, -64, 47, 5, -16, -76, -54, -49, 10, 101, -5, 74, 14, 48, 104, -72, -109, 124};
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
    msg.setTimeStamp(0.0411137302461);
    msg.setSource(46928U);
    msg.setSourceEntity(169U);
    msg.setDestination(11002U);
    msg.setDestinationEntity(230U);
    msg.req_id = 25112U;
    msg.comm_mean = 184U;
    msg.destination.assign("RZTYQFBAAXXREADNUZTKFGMEENJYZRVSMBTBFXEAYPWTRLAWQKAQHILCOERDCKKTXGOZQ");
    msg.deadline = 0.803523048842;
    msg.data_mode = 168U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 3188824312U;
    tmp_msg_0.state = 102U;
    tmp_msg_0.error.assign("SEJQXPKXWCXTDZGRNCLZCBBLGXRMZQHCPUYUKBZMYDUUFATHNADQFOEDJPXIIAKULVFPSJMUHMYNXTMOPBXECJOOIAAWYAKCBYOJRBJRWOVJSOAZETJFVHKNFASVGDKCWQSAYEKLMWFNLKTZVAOWWFNTXPQEYIUSCQYVJTQZPCHWMVNBSLITNWPUEQRSNDGLBRIIXITNKHTDCWBDVHVGDRGGYFKZFRURGVPHLM");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CUWGPGGOICIDXJKMHJAVYWRHQYAYAWVNNLMUTVDSBOXKPNFLFWBYBHLGHUBFIQYFAZFRMEXZOTYQZXC");
    const char tmp_msg_1[] = {-11, 23, 18, -50, -31, -109, 112, 84, 0, -18, 2, 112, -66, -48, -39, 96, -111, -68, -36, 93, -42, 95, -105, 62, -6, 66, -56, 7, -52, -95, 121, 115, 43, 44, 110, 101, -74, 37, 33, 37, 122, -3, -23, -27, 73, -7, -5, -80, 95, 33, 85, 65, -23, -107, 51, 106, 72, -41, 55, 10, 24, 81, 34, -62, 14, -8, -41, -3, -8, 22, -107, 80, -42, 44, 27, 82, -90, -13, -96, -49, -46, 120, 29, 81, -80, -89, 88, 67, -19, -47, -90, 102, -57, 32, 37, 39, 39, -14, 44, -92, 124, 123, 1, -43, -24, 3, -87, 44, -1, -16, 9, -24, 83, 34, 109, -105, 19, -32, 29, -12, -44, -63, -120, -19, -4, 113, 42, 93, -46, -121, -17, -120, 7, 99, -105, 88, 123, -100, -95, 112, -15, 111, -18, 40, -37, 87, -99, 25, -51, -116, -83, 51, -63, -122, 5, 72, 67, 19, 19, -98, 92, -6, 120, -114, -41, -126, -12, -38, -58, 106, -35, 112, -53, 3, -31, -127, -60, 86, 103, -39, 42, 61, 31, -126, 25, -34, -116, 47, -115, -46, -69, -65, 57, 101, -43, -38, -82, 124, -110};
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
    msg.setTimeStamp(0.156103132553);
    msg.setSource(26073U);
    msg.setSourceEntity(103U);
    msg.setDestination(55217U);
    msg.setDestinationEntity(42U);
    msg.req_id = 33505U;
    msg.status = 136U;
    msg.info.assign("CZAXZUMTEBYZBCQCMSSTGIKLJKGWSDICMUEWRMPMVNJARTGKQLLFWHQHRUGGHTDJUKQZPXEFEXCJFJOTVYVTPJRSDRIPKWFFYCCSROGIXPESRVYRIZHOFNKTIOGKUMVZTLLDXRLGQPXZJVEEVPPNNOUSNPYETQOHOOQMNUQXWHJERWVNHPINVSETVBDAUUACHAWKMSLQFGLDYBBYBFWBYFBNJCI");

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
    msg.setTimeStamp(0.571082013967);
    msg.setSource(49764U);
    msg.setSourceEntity(19U);
    msg.setDestination(37781U);
    msg.setDestinationEntity(20U);
    msg.req_id = 24687U;
    msg.status = 139U;
    msg.info.assign("UIWVJXSKXZMRSMZGNQWZXIIRHYKRXBQXJJDLWNYUSAVOYYBLOCDFPEVLKEHXSLMJETFRSQEKMBP");

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
    msg.setTimeStamp(0.439461170417);
    msg.setSource(44665U);
    msg.setSourceEntity(174U);
    msg.setDestination(17561U);
    msg.setDestinationEntity(235U);
    msg.req_id = 45187U;
    msg.status = 209U;
    msg.info.assign("WEFXUTXYKOAGZZPSGQPISDFMBXYTHYHTKGQSKWYBFZEROOWALGWZEDRMSOLWDUJMOETHBAHMVBUCVBTHNQZZMSTVMZLMGR");

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
    msg.setTimeStamp(0.0158469624602);
    msg.setSource(9478U);
    msg.setSourceEntity(115U);
    msg.setDestination(26194U);
    msg.setDestinationEntity(129U);
    msg.req_id = 32397U;
    msg.destination.assign("OCICLTEXQZBJYRGUVVFOKAODFNMWMFLMXAFSTLDHVKNGIYPXGQCZQVYVBDWHTMSGLXHTHUTK");
    msg.timeout = 0.675241591231;
    msg.sms_text.assign("IBSJKQDSXHRELJHQMGVGWWCLLTDNJDQHBLQLKEXMJONPGBITSPGRSFWNUMKAPCKQJVZNQBKAYMTMUKOEQWCYOVXVDGIREGDPHFKYBEUIOZSZKQKVNGCDFRXIDYJUIHHTPRJNPNORSBTTPSH");

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
    msg.setTimeStamp(0.249977039915);
    msg.setSource(61629U);
    msg.setSourceEntity(57U);
    msg.setDestination(61097U);
    msg.setDestinationEntity(240U);
    msg.req_id = 49163U;
    msg.destination.assign("YHGWFSKGXPQVQALDNMIVMNOKFKTCHRFEVDCTIOJPNLEZOIPYRDFYQZSXZTPMSTKBLMNABDFYRXVJMXJEIHOJLCNXZXDLEANWPPSELUYEMZRTEGSQWHKRJNLGBDSZJVAFWOQLFXPZEIBWJIWZQDTVTGWCAKHCACSQKSIOSQGUBJYWUMONQHHGCLZKMACORWEGVUVRAXDUZUWMPGIRVKBJMXBOUJFNLQFKBIHYBRHPHNG");
    msg.timeout = 0.740214696557;
    msg.sms_text.assign("OFKTISRVHEDZIGLDHYWIOQIBPFCRZBYPRTRMLAAJNGZJEHLONXEEFUDKMQOTKUEMTWMPHQWECEGVGGTDZHGCRJAYIYOXMVVZLUOYHLRRSRNUXFRDJFZTPPMBKQQENFJFTVKCAYACSCHMFPHXUPSLSTLSMWTBLSFCXXDIOVKGHNUXHORVFTWUDYNCGMAAGLINUJIYDP");

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
    msg.setTimeStamp(0.0998910707547);
    msg.setSource(29301U);
    msg.setSourceEntity(145U);
    msg.setDestination(65088U);
    msg.setDestinationEntity(59U);
    msg.req_id = 35421U;
    msg.destination.assign("KKQQAFSTUNAAKHRBRICWEFMTVJOVGYQHRSTGBJGHXIASHQYCHQTOPKJJOXCEIYVYBIVXZQGENDWXFJECEQXQAFMHGBDUNMMPKLETPVIFXIXRNWGKGMUONDPFZZSRPWALAEZWNOEV");
    msg.timeout = 0.508327669768;
    msg.sms_text.assign("NCNUJLZMYINGVSAJMFRZRJHAOPRWJSXLMEIKUFYBTQZODNXAPIGWHOXVKQSQHPVXEUVBEVLMEEPCUGODCELVTKUQUOYDACMKLTADGPFSYEWGZJYJD");

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
    msg.setTimeStamp(0.34692932012);
    msg.setSource(52904U);
    msg.setSourceEntity(134U);
    msg.setDestination(51790U);
    msg.setDestinationEntity(5U);
    msg.req_id = 55850U;
    msg.status = 211U;
    msg.info.assign("IPYMKOWKDJODQGGDKSFBLCVDUSBCWPXLSVVIMFSLBQYTQHANQWIMJWZNIKRQBHCFPALAEFBYDEZLDILKXPHOULVRSRMDVGKQKHNAULIMMUOWJSCWGLETUVJTTIZHTZJDCULIGQBZAKSRDOGMNIHWXBBVPEXXIPHFPFAAQTCDFMNFZORYEBPWXMEYJOZQFTYRHRZHXAMXCTOCSZRBNTXYCCGOWEUUQNNWFY");

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
    msg.setTimeStamp(0.855796127273);
    msg.setSource(41180U);
    msg.setSourceEntity(110U);
    msg.setDestination(54010U);
    msg.setDestinationEntity(59U);
    msg.req_id = 50255U;
    msg.status = 178U;
    msg.info.assign("YZCOGTDBQOERZPUMGRHJPGEXGUKZVWFFAPLKCCEUZAAQTBCDIOVXXDHWIRRWREIYPYTLZVYCRBDHXNFLHMXJZINKJOTRMMHKOPWESGMMJVNGDUQPB");

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
    msg.setTimeStamp(0.498794900435);
    msg.setSource(10838U);
    msg.setSourceEntity(195U);
    msg.setDestination(17954U);
    msg.setDestinationEntity(156U);
    msg.req_id = 49430U;
    msg.status = 46U;
    msg.info.assign("KTQRPQXTAUMENNNPJBJSYZWNNQEXYTJJZKAYDDMKIOAAZZSPIPXRHJVVXUMWTOXSRQUEOGPUQTAVROLOCFZNLGSGKHXKDFJFBZFKONHUHKWTPVTUFIDQBJNMLVCRAUQJHRGDJERSCPKYXHHYGWPSOMCCVZFZXIGSMBBTLIFYCWAFMKMEGCUYXBEXCOVWTLFPLELRBQLIQRBVC");

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
    msg.setTimeStamp(0.134479290502);
    msg.setSource(29335U);
    msg.setSourceEntity(155U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(153U);
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
    msg.setTimeStamp(0.505657338619);
    msg.setSource(1168U);
    msg.setSourceEntity(253U);
    msg.setDestination(35464U);
    msg.setDestinationEntity(245U);
    msg.state = 138U;

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
    msg.setTimeStamp(0.0632909026002);
    msg.setSource(59420U);
    msg.setSourceEntity(152U);
    msg.setDestination(62209U);
    msg.setDestinationEntity(158U);
    msg.state = 243U;

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
    msg.setTimeStamp(0.052201222748);
    msg.setSource(31191U);
    msg.setSourceEntity(156U);
    msg.setDestination(6812U);
    msg.setDestinationEntity(34U);
    msg.state = 243U;

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
    msg.setTimeStamp(0.0879703883199);
    msg.setSource(24824U);
    msg.setSourceEntity(78U);
    msg.setDestination(18114U);
    msg.setDestinationEntity(54U);
    msg.state = 247U;

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
    msg.setTimeStamp(0.619379903103);
    msg.setSource(32017U);
    msg.setSourceEntity(147U);
    msg.setDestination(31908U);
    msg.setDestinationEntity(94U);
    msg.state = 121U;

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
    msg.setTimeStamp(0.493013315677);
    msg.setSource(10112U);
    msg.setSourceEntity(11U);
    msg.setDestination(16692U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.334539261838);
    msg.setSource(29076U);
    msg.setSourceEntity(165U);
    msg.setDestination(3662U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.380036283852);
    msg.setSource(53339U);
    msg.setSourceEntity(130U);
    msg.setDestination(32079U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.104320878706);
    msg.setSource(51402U);
    msg.setSourceEntity(47U);
    msg.setDestination(64514U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("BVLUBJLWXBMGPUVOVXHKYAADIQLPQDJFWVQDQCZJONFVXWGIRLBNLXHOFLIAPPLSGQYPOFDKOUZOSRIHVEXIPWUINYAUQFWQQEYIQNTCS");
    msg.description.assign("SFPDQIGGNHLJCWGL");
    msg.vnamespace.assign("WZJEXFANQGCVDORGCOASHFDAEQZTLSOMOIQEAGFIQZEPMUPKVDEFVNWJJQG");
    msg.start_man_id.assign("EZZUHTHOERL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FTQQEOATDHMRXGYEJXUGKMKNEENLAWRFJZVGQDIHVLCRUNQKVUYOBOHVQPUHWDABRHOSSYTAZKDWOLPFTHFXUVKLTOWMYCNBLMLBDFFEZXAQQMMTGQGXMXVOYRSURDEIVWKUAZJFJAECKXGJLRZLBAGKOTSIYJJZHUJZNCPJLOPZSPPJWIIGBTECCTWSKVBINDHIQMASYNYBEZCFDPVAMCZBWLRS");
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 8779U;
    tmp_tmp_msg_0_0.lat = 0.170250069988;
    tmp_tmp_msg_0_0.lon = 0.388345404921;
    tmp_tmp_msg_0_0.z = 0.121224130366;
    tmp_tmp_msg_0_0.z_units = 2U;
    tmp_tmp_msg_0_0.speed = 0.795227702248;
    tmp_tmp_msg_0_0.speed_units = 42U;
    tmp_tmp_msg_0_0.custom.assign("VOEDLNYCAYKUNVXDUXZJEIQKSJMNEOQLVGMMRXOMGSTFHFTHPGSEORWQHHBCQIFLQHOKNCVIDAVBZKQYQVDDWZVBWJUHIUBTOR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Tachograph tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timestamp_last_service = 0.738239089094;
    tmp_tmp_msg_0_1.time_next_service = 0.15814906488;
    tmp_tmp_msg_0_1.time_motor_next_service = 0.409023902428;
    tmp_tmp_msg_0_1.time_idle_ground = 0.315858823075;
    tmp_tmp_msg_0_1.time_idle_air = 0.310886549052;
    tmp_tmp_msg_0_1.time_idle_water = 0.6210954407;
    tmp_tmp_msg_0_1.time_idle_underwater = 0.677024289979;
    tmp_tmp_msg_0_1.time_idle_unknown = 0.674675159723;
    tmp_tmp_msg_0_1.time_motor_ground = 0.373493369068;
    tmp_tmp_msg_0_1.time_motor_air = 0.0961484596437;
    tmp_tmp_msg_0_1.time_motor_water = 0.89330356887;
    tmp_tmp_msg_0_1.time_motor_underwater = 0.2288433942;
    tmp_tmp_msg_0_1.time_motor_unknown = 0.113420406844;
    tmp_tmp_msg_0_1.rpm_min = 5464;
    tmp_tmp_msg_0_1.rpm_max = -6671;
    tmp_tmp_msg_0_1.depth_max = 0.842799201977;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Brake tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 14U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::LblEstimate tmp_msg_1;
    IMC::LblBeacon tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beacon.assign("SRFDEWCBPYNSMHUWHJOBFKRHSNEAITXHBBMFUFEYLYQAKTDWBQJIQUOUTWVM");
    tmp_tmp_msg_1_0.lat = 0.748898483915;
    tmp_tmp_msg_1_0.lon = 0.926899958343;
    tmp_tmp_msg_1_0.depth = 0.0674124446157;
    tmp_tmp_msg_1_0.query_channel = 196U;
    tmp_tmp_msg_1_0.reply_channel = 112U;
    tmp_tmp_msg_1_0.transponder_delay = 213U;
    tmp_msg_1.beacon.set(tmp_tmp_msg_1_0);
    tmp_msg_1.x = 0.230299789698;
    tmp_msg_1.y = 0.42494251995;
    tmp_msg_1.var_x = 0.953230193214;
    tmp_msg_1.var_y = 0.0914850210947;
    tmp_msg_1.distance = 0.403763957033;
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
    msg.setTimeStamp(0.454019335277);
    msg.setSource(62001U);
    msg.setSourceEntity(155U);
    msg.setDestination(9162U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("LNJNUJWXZALMGBBAELYOTJDVBOCPCYINIVPMAVRMFQSALFOZVQYJZSZBQJVJZHUSTSHPYPFZKDRMCKSLZCGVJBBEUYRLRAXNRRSDXNHCTMTMLUPXKCZGAKCHFRZOETLYKFKWWKWAXIIUGXWVDIDSXHJYLZXTEWNVAJYQFDXAGSBCHPCESITAEUHOHTKRGDNGERKTNQOFODOGEBBGELR");
    msg.description.assign("UQXUVVQRBMDGOOR");
    msg.vnamespace.assign("ILPKBEAQYSNBLMIOSZZFRCOZYFSHSUUMTCJKPXEXLFNPWAFRMWOSNUUUBCHGDVWRQOTVKBQZGAEQJKIFOZJPIRGQGGE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ASDXIUWQQFCEJEJPJOUBZDZZU");
    tmp_msg_0.value.assign("RCRWMFIPLILTAYKIVQHXEKGJFNVDBAHJTVHXBDJCOSMGDFFDEXHQNEUFATUNRUOSCUWFNMB");
    tmp_msg_0.type = 47U;
    tmp_msg_0.access = 84U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FINGCQAWYQCUGADYAYZCIUZLYHBDBJEJOJLTWLYBBBOLVWXZARCFHDMZDYXNDTTTVETUAMMMGNGBLGRHCMBHXFIPTXPQRXCAVWBSJPITOEPUKRKTSWZGDIJHQSFCIFYTMEGUYPSWRJFOWFMHXSWIWUVEICKNRDPRYXUBSQRKNVUMNNJKORONAPPCDZQZDXLKOHYOLAEFUEBQXGOMG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("UVWXLGQMTFQIISWQBZYWRQWMMTNJGIUNYHMZPGNTEFRASOAVSOYCBGYLSUKUCKWZVZONABEZJBYHAVTTIFQGXNVDCBBKYWDUXHAZNXDUURDIOPODZEAKHDYEXMXEPESONAYSKGLUNJXNOOXFOVFLHDRRHJETOPMPSQLBYQIAFIRRCVHLDWTJ");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("NDXKZAUEKILBIVRABBHHQRSGJQQPSNFVLESVZHINJCWPXTPNFAUYJLWWFRZHXIXKWLSAXWKSCADKVITNZBFRTTBEDOGOMLJTHVSFZDUYPOGKVOULVDPAIZYPKHIKMWLEBQWPJBMRVLZTMZBNIUVYNUGKNMNBRHYWQGQUTEMJAOEHGJQTASWKIFEOOMPETFJGDRCZWUIPGDOCUDEAYYDRQYFJC");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SmsState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.seq = 3861390567U;
    tmp_tmp_msg_1_1.state = 180U;
    tmp_tmp_msg_1_1.error.assign("LDCAHEKSCJNOSDYVBULQXBWBEKAFROYQZNMUIORPAMCVRKICKXPRNXJTLILUQMALPXWKSBJPQFYOQSQGQTQVXMZQVGPAPNGOQGYIDOEREJKYOPDFVJCGI");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("SWRRMFFKRPLYJTJBYBTXGFUKGHPAQYQTHALUZLSCDNLAILFUWZMQJJDNWOWJNSBVAVYNIRXXOJVWOACUIQKPRUOGDSCBDEWMMOAHZYDWPRUHYVMCVLWDFEZTOKVDDNKNSGPHAEGIUZASHVPRDIZCYGZPKIOLXSTNVXKUQMAEGXCEPQZIFCEFOSJZLGUOEXELRRYGQKMEFIQBGUXSTVBMHAOMHSBBEYZNTHBCJXBJNRKQQLNTCHPDIT");
    tmp_msg_2.dest_man.assign("MAMVSPZWUUPGIGVKDGYGOCRXMXNILINSWUTQYNAOQHYSUVCKYKLOQYTNBZDCGHNXGTGPZPFBQRBWIVBJDDALYFVTPUSOWUWHSAXOEJRTRFXFHKLBKLAXRGTLIEKFGPTSZYNDKQFDUZZJNFQLUJKGCRTJJCLIOWWTSOFNTMDHXPVYZUVFDANHWHEMCCVHPSJUABLZPXQQSCEOJASJMWKZORWBXEALREZA");
    tmp_msg_2.conditions.assign("JBDQDGKVAPMCTJOAESCCXUJTONMZLSEXVHPFXICZMHVIABYFNEYRNOAKXPKZGIFEWVQZUFGLTMAMWITDBHGNUWJXIOIMYRKYPKFXGSRTZLBVWDKSNFLUCYPGXQKWQROEFGRMKRHJYDUFTLIOJTGCWIYRZUKRBQJVUTJOWNXABLLEYDPCZMAJOCSVUSWP");
    msg.transitions.push_back(tmp_msg_2);
    IMC::LinkLevel tmp_msg_3;
    tmp_msg_3.value = 0.773826493518;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.260129139498);
    msg.setSource(35436U);
    msg.setSourceEntity(99U);
    msg.setDestination(41988U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("AYSFDJEQKYWLVJTMQVGMREFKSPHTRXNOCQVPPSXOXUOYAUIEXCNAMVWCFFTMFUHXNYAGOGKHMGKMGYDZUAUPDKDRSNTBBZIJRUTHBYBUWYLCRJEWUDFSVZVLIKEBLFZTVTVSJQBNSNIEUREEJJZICKRATZWPANFWILLXDQQCQOX");
    msg.description.assign("MRFJEKHTAKCOIEFISBSIROMOYNRNPWPTMKVTSZRCDMUCJONTSSWEHMJDQNSOXDVZTIN");
    msg.vnamespace.assign("DKXIQAKEGFWVIFZQBSYAOAUVURLTIESVBAUOOSYYQWPFXPQKXKVMXMVOZKYNIPDYHIGBPRMCCUDQWNCVJZLRISNTNFYBGOUPCVMKBIEJNDIROODXEAJMLXLVEAJGKEYWZUAXMCZPSGJHIGWFEDSTWGQATPRLHLTMBJFZCHHWZABLXFYQWZDHTDABKDKWEUHOSZRXPHRMECGPTGJELSCGLBFUNMJNUTULNRZTFNCWJRH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VUMRATAPRROOMTQRQMHEWWQPZJWLOITDNRGQFTWVDPFIIYQSYSSBDJOSUPDCHMBEVOGADKEWPBZRTUYKHPTWYHSILKZBPZXHMVNYSDGOUBLQAJY");
    tmp_msg_0.value.assign("SHQNOIAEOXFJMPYBQURCSXHHXQGPWSJBSMFNYFEUVWLJATORLJREUTINIWBUDZVZIWFDNLRPSFQOCLBKJDAEYNUZDAPZTLEAXCZUBETJHVRUYSLDTCWYBIGRCIVEKRBVOKVFODPQJPZSGUBCPPYJ");
    tmp_msg_0.type = 48U;
    tmp_msg_0.access = 138U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IUVIPPBSZZCLEDGWBFBDKHEXMUAMJOIDOPAKDXQSYHBSQHHDYEPKUQJNGPYGPCCULBRLEPCKLTTSPACMGKNYWUWDOEMQGOZVSAMAOUVIKVVRXFKXZVQHAFLGASVKWMTLFFJJLYTZTEXV");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HYFJEXLSCYPXCQAOXLYQYIULG");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.0591290258132;
    tmp_tmp_tmp_msg_1_0_0.speed_units = 206U;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 55512U;
    tmp_tmp_msg_1_0.custom.assign("ZVDFGLCPVPOGOVEUWNATKROAUUFNTJWBMWAIDTEPHJBYPYMTNOLWGJWSOKMDKQSUSQZTHXXTXECD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::VerticalProfile tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.parameter = 178U;
    tmp_tmp_msg_1_1.numsamples = 68U;
    IMC::ProfileSample tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.depth = 55400U;
    tmp_tmp_tmp_msg_1_1_0.avg = 0.45401618225;
    tmp_tmp_msg_1_1.samples.push_back(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.lat = 0.432273072444;
    tmp_tmp_msg_1_1.lon = 0.465178712768;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
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
    msg.setTimeStamp(0.0436321655916);
    msg.setSource(46580U);
    msg.setSourceEntity(238U);
    msg.setDestination(4120U);
    msg.setDestinationEntity(0U);
    msg.maneuver_id.assign("PCFLDGSVZLFXEDIFZKUQUPKJOTKNKXAHUHCLVIEMLQJFEVWECXNGIXTGXTMOISVPKYRXYDHORJGVPHBRWIBJIQONIWAADSRVXSZMUFENLBYZAJSYHHFGSQIMETHWDQPJOFQVAUZPFYPZHADXLDZPYNMDWYCKOBJJVBAZRLZRVQCBSGCFBSPCRBTFNONATSWJSJREEOENWRHMWNLTQKUXACXBHOGUGDMOIGIYKAVKMMGTZWKQTQPDULYT");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::ReportedState tmp_msg_1;
    tmp_msg_1.lat = 0.432027028242;
    tmp_msg_1.lon = 0.905187594868;
    tmp_msg_1.depth = 0.238382316417;
    tmp_msg_1.roll = 0.527925295969;
    tmp_msg_1.pitch = 0.14672511332;
    tmp_msg_1.yaw = 0.480052294116;
    tmp_msg_1.rcp_time = 0.610444611971;
    tmp_msg_1.sid.assign("YGXIHFREOSQPGXOUXAP");
    tmp_msg_1.s_type = 183U;
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
    msg.setTimeStamp(0.860430499881);
    msg.setSource(44676U);
    msg.setSourceEntity(19U);
    msg.setDestination(36286U);
    msg.setDestinationEntity(39U);
    msg.maneuver_id.assign("RLAPOUAJASTOYIAVQMMYCCROEZJTDBEIVNLVWVXFPLZFTRXDUYGYUKZOT");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 11745U;
    tmp_msg_0.lat = 0.646559840286;
    tmp_msg_0.lon = 0.276799298122;
    tmp_msg_0.z = 0.919615919842;
    tmp_msg_0.z_units = 176U;
    tmp_msg_0.amplitude = 0.773081851549;
    tmp_msg_0.pitch = 0.918049498963;
    tmp_msg_0.speed = 0.21226385616;
    tmp_msg_0.speed_units = 68U;
    tmp_msg_0.custom.assign("KVJULBGANXSPEQJKKOSZIVECOLFYSBYQGKZUWIBBAUHAMRCYVXBPOAGMKUGMRJCCWYIZQATGXRYHAFCRWHQDFTFPOSBXDPMUMIOLPHJOVUPEOJHHRISLSYNWVRYWYCHZQUXTQVQNDSKJYVLNZCIKCATSLHZ");
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
    msg.setTimeStamp(0.455123330643);
    msg.setSource(60510U);
    msg.setSourceEntity(127U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(212U);
    msg.maneuver_id.assign("EIZIJMGYXSHCBGXKGQANZMHBUEKWTDAWLJPUXRO");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 24010U;
    tmp_msg_0.lat = 0.348703779252;
    tmp_msg_0.lon = 0.593604814705;
    tmp_msg_0.z = 0.0549383391528;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.speed = 0.413102171987;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.duration = 53512U;
    tmp_msg_0.radius = 0.764172729343;
    tmp_msg_0.flags = 154U;
    tmp_msg_0.custom.assign("DNLSYHIXOQQXL");
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
    msg.setTimeStamp(0.808349704692);
    msg.setSource(11651U);
    msg.setSourceEntity(148U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(140U);
    msg.source_man.assign("WORFMKPBZQEQZZXUNKMJKHNSTFEUWYDDIOVXQEMILJIGRTDAVVCLDDMVSEBUGMJACLDKWDQJPPOOTIGFGXPGXAYOTZGZTTCFZSCKWSRVVFCARQULNNBKLLFSUHIZEWAFUYISG");
    msg.dest_man.assign("QLJQGSGMYBMHORFSKWOAVBZCXFWOCBBIDEHRPXPYBLUUANANTHSFTGZJTJLETTMFGMJQTKVNHDPZGISDLAHLKEAZVYHOZWRUIQRZOWHREMVLMXMXOWQYJQWICAWCYWMOPFJKEBBZGDLXGTDLXVTDHKHDGGYIKPIPBRFSROPVLQSXVVEKUFTCNNNJXWFDXZUAZIDERJCFNVPFBNNSMWJIUEYLYSUEXKCZAHKNDCVIOYCQSA");
    msg.conditions.assign("DPSEYUEZGUJHCYHSGCUVSNFFHPGMGCBIDNFINUVKSTLPXBBSNFVJRTXRAHWQQTOBMTOFZUCAOYONWZJCVZWPWPBDWLTXILFIGKZOVOMJNMNRTRTELDDTXYXADCMNSJZHMROAIOEWEPJFHDPQHAVZCQVPUQQSMIQORQBPB");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 4126179856U;
    tmp_msg_0.messages.assign("MNBOCNOWJEHPILSLKHLSQXIZCEYJQHMEUFXQDSPCXIRRFKXNOPFVMAZDLMHQIINKWRTKRYCYBTLRPJYOTRQNOTDDMKADSUEEQTTAGQBSEZBZJEXAEYAHWHDOGHJKYWJMHFSGDCACBVLVXFXWFRYYIHKBUEWZGXZLOKUWPRWUUTIZPXTMCOPLQRGIIGJQBCZONISABLFWVAKUYVJMFVVUPB");
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
    msg.setTimeStamp(0.479264292497);
    msg.setSource(41506U);
    msg.setSourceEntity(6U);
    msg.setDestination(20567U);
    msg.setDestinationEntity(235U);
    msg.source_man.assign("UDWMJRMMECUWIGJXJPOJVAXNEOVXI");
    msg.dest_man.assign("NQBYBCVTYDBYINGILQRKFCJESOONALPWTVSYXUPPGMTVKCRDAUYDJEIAEOMZPIUUHWJF");
    msg.conditions.assign("FZVXIIBWROHLDPAYFFGSRIKSCTLBWYBCVIRBFWYPTTNDHFPHUOJHSXXCMJXBJBKEJILKHTNCUWTZGOR");

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
    msg.setTimeStamp(0.148109510973);
    msg.setSource(32444U);
    msg.setSourceEntity(226U);
    msg.setDestination(48219U);
    msg.setDestinationEntity(189U);
    msg.source_man.assign("ECGOEWWQWGRXXYSBYMIGUCWXOUPWEBKYXHDLLBPDAOVTSMIBZJIJDHAGETZGMRKAXCPWPXYNFRUDRVNJHACNZOBMYDATEFGOROQESIOAHYIJBULUWFHMJLASSPHHMBXFDTECRIUQLLSVGSYTJJDUHZHKTKMQOFEQPYYIKMOX");
    msg.dest_man.assign("PGEMOBAUHVRKAWKPT");
    msg.conditions.assign("OQNAMWFCESRXTGMGKBFARCFLVPEACYWDRKREEUAYRPOMSNDBPD");

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
    msg.setTimeStamp(0.592073260023);
    msg.setSource(30265U);
    msg.setSourceEntity(181U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(180U);
    msg.command = 167U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("INNTRXGFITJQUDDEHRQXLAUXFCUKVBXYJVD");
    tmp_msg_0.description.assign("WVTNCBMTUFOBPGMYPBICSGENZTOSHRPWYKGYLBXSRVCSFCFDPCDGKZZZNSGOTURIFCDUVPKYOWVITORLUFJABWDKEHKCMCUUHHZXWIKJVPLMEQDJYPSAZESZNXVMBDAGJOAFWJOUNQQFTKHKFXGBIYMNGXHZQEQCVMMPHRNQXDOGTBWAXOJDMQRLLZXDFETQPYTWHGOJSRBRBELAXKUAAUTCEISRNAIZFAQRJQ");
    tmp_msg_0.vnamespace.assign("KJNBXXSHEFEXQEWOBGTSMRUVJNMIAWRWJCPADQMWETWJRMIOXYUSLMKDOLORQOZVDINKQBHARWUTYMPKCLGKYZOCJTAVXXFLUROQWIJOWZDQWVJAXQI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OAESLTHULVEFAVOZGFRKMQLEPRFRQDNJKLYENPHIZFVBIDGYMFFAWVXFHWYRKXXUUIUVPCXPZGXOMIKDEGODJLJYWRVIIBWOWJCEHVIEHSEUPRNOJBOCMBOMXLPVCQOYTFTGQHNAMDSCZTQMULTMFTJAZQYDTPYWMJZSTWBBYSCDRGTUURWLQSQUHNLBKMWJAKGGBRTJQCPCODNNESVHZXYGDX");
    tmp_tmp_msg_0_0.value.assign("ELZUURYTXMWGOBLZKATLFPXXVEZFWVPGJFNEHJXPPQHCDQKURZUPMWQJUAMRBEHQPNAGAMDWBDIVSABMYSKETFSWFWDCRHBWPMWGVIWPUKQNMGITNBZOJCHTU");
    tmp_tmp_msg_0_0.type = 44U;
    tmp_tmp_msg_0_0.access = 67U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HIBYLPOVVZMLVITTYRJYKRFCENVPESDXXZOUKONZDDEQGYDLPTLFCSPZQILFFBDQUFKGZTKNJTUTODGKIBAKXXHQHLUDUQGKRMFODJIFSGVVZIWHMLSGMEHGUJZPCWEBSCNRNCPHJACFKYRLLAYNCZVBTQJGLSCMBBBFWQSXRWHSBRRDNYMGAITCAPNMIEXWNJEJOPGVWTEIDTYIWKFQWPYPQWVSUWKEJAXOJCA");
    IMC::AutopilotMode tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.autonomy = 141U;
    tmp_tmp_msg_0_1.mode.assign("DFJYAFLXTTLCMCGUAEIVKTPITGLIFKYSBVFTXGI");
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
    msg.setTimeStamp(0.469659439964);
    msg.setSource(61715U);
    msg.setSourceEntity(93U);
    msg.setDestination(319U);
    msg.setDestinationEntity(65U);
    msg.command = 200U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SVNZKZBNLGCVRXWDTHLSJGUPHFUGJKZBPFSXNPDAJPPPAEATD");
    tmp_msg_0.description.assign("SKGRHDKCAPCWUJADOKHFCVTSMLEMVTQTIDFMFSUZNGUGKIBPVXVHXSQEJHHQCAFUCZLENMRYRKF");
    tmp_msg_0.vnamespace.assign("KDNWIXPUOVTTBLVCPFEHJNKXARWLMWQBNCGDFINQPZDGOPBJVXBQAORFVGIRMLQTJZJAUEZFFOMZHEHNIRGTUCURDQJUDAIJXBGQUUFLHYFNAZAYSSNWJQPXPQSSYKRYODSXDXISMYBJWGUBSJZHPQPKCGFPYFHRVVGTTXHCNWTEGVIYDMWUAPIEKC");
    tmp_msg_0.start_man_id.assign("AAQOMSZZZCENSYCZNKYWWRWGHDPXRKFTXUIEHOAORZOYTNJFRLTMZLCVELPMK");
    IMC::SmsStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 7572U;
    tmp_tmp_msg_0_0.status = 206U;
    tmp_tmp_msg_0_0.info.assign("DARAJVHZEQ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.66260509439);
    msg.setSource(36758U);
    msg.setSourceEntity(17U);
    msg.setDestination(50417U);
    msg.setDestinationEntity(32U);
    msg.command = 212U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IGHXVPDOBQEFDYONZGNQGYVLKNRIWHHSGYGISDWABJGSYDAENLHKZURWLAYCDZTIQJJHATDDKJEFNJIVSPATUNUNUICMQVSQCARQNMIXMCWGFRBORXJEZQVVMGREJOMUBLBPUFBZPJIZHGKDHXWASYEKMV");
    tmp_msg_0.description.assign("ZMEHFXACRARFDHONBPLVEFIIKPSBBOSEQCNYTQXTSGADOWHGWVGRNXQBSAGPWJWZSZNRUBUVEUHYKMDCXQGSBTDXPLXJPIFUEQROCBVUAYYMYJZTHJRDZMJDQLVPDKHVGMKZOKFLYXTHDIMXEJEPMICNLYHKIRWMLRTLBOPGWHZNQGYWZKVVOGILUICYAOKVITJFW");
    tmp_msg_0.vnamespace.assign("DVMXBHLAUDWSQGNYOIGZTVTZLMDAEFQJUTPAZZLSQDHIQGWYNJFRGOMPTCFDFKRPVNBTIWHTTVAHMZHIEKJRYOBUWBQCUYNMZRKHPPZPGCOFNWZXKTORUSKLXBOJMILPBKANCEQYZYIRFJVCLPGEBGGJYIDUHQERWRCWEALRFOPKJBDLGCJNUEXQFWUZIMAYCYSSMHODUVXNQEFKNX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SUPGVRJVWMNLSAJHMHDPUZEULLQJSXCGVBAUCPCEEFMOIVHQERREFHDTAFMMBWFWTQDPCDSKKTBQPAAZWTGBCLHDPRGKVLDSCQQKMNOOXHCKRZTUASYAIUFZEZTIZEJNFOXBNWQZSFXYJ");
    tmp_tmp_msg_0_0.value.assign("PKFKKHPASGKHSSCAJKUVWODDRIOITPOYMSTFHQCZKYICWBEFMGUXWHLPFIDQVLXMRNXHYNIXCSIQTVNQTZXCOXGOBNEZJUFPWKYOLRKLEKVNOGQMZNAAHWIJ");
    tmp_tmp_msg_0_0.type = 58U;
    tmp_tmp_msg_0_0.access = 58U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KBURWRVXKDSTKYPUAGTPOZJQFOQTUOOKGFOHCWXVKHNPFVSMABEMSPKEGFGDEZBBDRZFKKYQEBGXQQEIDCLTYIWMOBSGPSCSLNXYRQWPSVCFQWLVNLJAFMIAYPHDHLADLTHDXBVNNWUDEJICMYDRJBXBZGIOXOZVZ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EDRHHKBWPRVNVFSTIPYMLPSYLNQDWDKBNIKWOGDJPRAEVJIKIZNTOMMRHPZNOAL");
    tmp_tmp_msg_0_1.dest_man.assign("WFIXZZANJAYCJBQPTYJRUEMQFPETY");
    tmp_tmp_msg_0_1.conditions.assign("SXRNVAUFGBAPWHKCEZNFYNNTXBOJOGADTRUBGXLRVPDGAOLHKYBIPSXZUDVWXTCEYQAMLCPMNWUULQQYQICJKXPQANWWBPCEHFBJKAVYIMSEPKCRC");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("JJSTMSBCNTAODXTFHRCIGQFBYSIERHZFAQITJVZVJYPYWKFAUFSLZPCAVGTDOKQHMRKQYZMMGBGUKNEDEQDPLQIRBREKZSBARMKN");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("QRDFBDJZXWTPTGAHELONCKMMIUNXRZZOSQKCHSCJRTOWMJEYVEMDLGXILYCHEEZMUNABDSXAPYADYYURMYOWFMJHIPGCIXZPIXSKTZOZUEWHTBQJUCX");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("NMETCOWCKQGKJYPFXRTDYZCCUOVFTDFDIHBXIIOKGQWXJZWDCORUFUYHZPWRNEFUYPLOYCJPSWMURFHAQZWLPVTOZIBPVPSXWCABGOVLAUTHEISVEULVLSZLMGYQBY");
    tmp_tmp_tmp_msg_0_1_0.description.assign("AZQCOHYTXYYMJHBGEELBYUAQMAYMUUR");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.348744407544;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.873208877619;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.656703641523;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.62536524287;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 32491U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.972339859727;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 16396U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 49767U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.985831839698;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DWXZNBYLKRBBDBXKYDQFOPEUSIYOZCVRLBSILQPEVJNSAQMQHOEOFGDVVRXGHNDGCHKQAWKKDDEULNSHZGPRMNCOMIJSEQUNWZYVYWDMFTPOCLUZIJZUWYLPZCDWMOBMKGKGFUAHJSVSUTWIZHYZRGSCHQT");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Aborted tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FineOil tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.0533618826162;
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
    msg.setTimeStamp(0.147401639578);
    msg.setSource(130U);
    msg.setSourceEntity(188U);
    msg.setDestination(38823U);
    msg.setDestinationEntity(126U);
    msg.state = 41U;
    msg.plan_id.assign("LOBOQRMKCWADTEBLEBHMMAQVIEUXSPYYZAKEPKOUBFFJXNUDLJCUCNHDUPOKCVVJGBSZTDYZDQVIXYYDYETHIKRAHMYYSETURFRWMWIUJXSZYVEGVMZVDQZFGMWXNQMPQVKHJKJ");
    msg.comm_level = 18U;

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
    msg.setTimeStamp(0.270922345677);
    msg.setSource(56857U);
    msg.setSourceEntity(70U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(224U);
    msg.state = 59U;
    msg.plan_id.assign("OIMVZSRAJJBYNRZPFKHANEBKFCGEYGNBPABXFNDVJJQMCHBYZCVMNUVPAPGJPJONAXMVRETBWFKOOMSMUUMWZXSJHYTTSQHKWZRQDDAYZHFQUGXCUXTKLJXMHGRNXDCCYPIXZETL");
    msg.comm_level = 46U;

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
    msg.setTimeStamp(0.772352838668);
    msg.setSource(20885U);
    msg.setSourceEntity(129U);
    msg.setDestination(1160U);
    msg.setDestinationEntity(14U);
    msg.state = 37U;
    msg.plan_id.assign("FVSJOJOFAXGCHZBZWDSWNRIGMFQOKHRPAIBRMEAPQDWMRVY");
    msg.comm_level = 19U;

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
    msg.setTimeStamp(0.796993877472);
    msg.setSource(35928U);
    msg.setSourceEntity(250U);
    msg.setDestination(63222U);
    msg.setDestinationEntity(157U);
    msg.type = 15U;
    msg.op = 109U;
    msg.request_id = 14853U;
    msg.plan_id.assign("LKEJRDPJTIEALZXZERLULRZGQDOHQSZCFOBIQELBJLLMIIPIPFPVJUGMDUJXZEWALMKIWWUKFWOTCYZGCMNQDAOFGHMXX");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.745343371045;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KROJKFABUNXIDVQMFIZNKLGHPTMEINQOYNDWOWVFYQJKEBSUUHDFAOBXSLYETDSYPLWBQUTUSQXMEGOTZZQPJFPZWXAPUDSZW");

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
    msg.setTimeStamp(0.124403236624);
    msg.setSource(53220U);
    msg.setSourceEntity(147U);
    msg.setDestination(24243U);
    msg.setDestinationEntity(111U);
    msg.type = 229U;
    msg.op = 176U;
    msg.request_id = 55433U;
    msg.plan_id.assign("EUJERXIIFJIMKZLVPQVEWROHICECGQHLGRSSMFSNDQUNWMJTWAZKUXDALTAFHBYPNNABQIQPTJRWIKXBOBQMSKAKHNMHVXTJGCPWLDDLCWVNADUYTWKWEMQXYOFTYGCQAUFFENVKRZXUPDAIZVDFRVFZSKPLODFZOBCANTUZLBLISVZBP");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = -64;
    tmp_msg_0.value = 1693680526;
    tmp_msg_0.gain = 158U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SSVLEWPUACRRHKBPONCCMHCRARWOZDUKBENFCLPNDIMJECKGQSYXUOVSXQQPJPOPEUXSFZTHKGDIFEFARSQBMNLKZZDUYVMIPAVNTUJLMQATYMMLHRJBLBRFGZZOCROVADJLVVNMJVSCHPDCXJIRYJUWPIKTOUVAXTGQLNYTWDEQANZEWGPGSLGCHYMDMXNS");

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
    msg.setTimeStamp(0.733961077905);
    msg.setSource(29619U);
    msg.setSourceEntity(176U);
    msg.setDestination(44186U);
    msg.setDestinationEntity(138U);
    msg.type = 207U;
    msg.op = 119U;
    msg.request_id = 34861U;
    msg.plan_id.assign("FYCNPYKLLFRTNNOZVEALDMWQRBZIBJIXRSPMIHUQVFTVTWONHBDAZGWAAUXVLMCUDPWXKEKFDOKXFQDBVEPPRJNYHSDSYNXMWFSVHMYYJXWLPZCSWUPBABHCMINKHBKZTRATYQNMSRFZVLEVJORQDMYIRKJECAOQPFGRSAVTVEZGQGUYZXIXWMSSFIJQZTQLDNKMXCKOALEIIOWYNHFU");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.812661862863;
    tmp_msg_0.lon = 0.0521019128068;
    tmp_msg_0.alt = 0.0759180281227;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WWLXGVPCVJYWNSDOJMIKQWRUFTJSQYUMQCNZUBUICANHQIXMFDSTNLLWBTEAUGFDAHJJASTVIIBENTMEGYCQCBTIMYMRGHKFGQHCBVZODBKG");

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
    msg.setTimeStamp(0.697469896192);
    msg.setSource(30726U);
    msg.setSourceEntity(214U);
    msg.setDestination(29210U);
    msg.setDestinationEntity(254U);
    msg.plan_count = 7996U;
    msg.plan_size = 2732063370U;
    msg.change_time = 0.00155664808003;
    msg.change_sid = 42244U;
    msg.change_sname.assign("OFGZBPFEZQLBOJMPUZIYNKCXDQQFYNOPVIMDNTGCAEBTIGGUJEHAVTKFLIFJROCOYBMNCBULRVIUXIQASHEVLSTRKXCWBGVLTDQRYEVLMSGWJMQKBUSXTFDTXJZRTZUEIEYFYNCHPULEJSHFQICXGNKBHHRAWWWKKJRRDSCDZKPAWAJQIHABOAWXSMUSXMTHMTDWZWIDLWZPSFGERLOORGUACXVJDUNDBY");
    const char tmp_msg_0[] = {-113, 90, -47, 66, -62, -93, 11, 29, -59, -78, 64, 111, 120, 77, 6, 72, -32, -31, 93, 66, 117, -7, 44, -102, 96, -87, -109, 9, -65, 17, 106, -32, 10, 49, -38, -62, -23, 112, -28, -86, 9, 103, -92, 64, 71, -14, 117, -100, -103, 107, -113, 65, -88, 38, 15, -9, -83, -85, 18, 22, 54, -42, 67, -61, -34, 115, -71, -34, -24, 108, 92, 43, -3, 7, -61, 9, 121, 81, 84, -124, 121, -37, -15, -44, 14, -24, -44, -58, -57, -4, 13, 14, 91, 70, -91, -56, 70, -106, -122, -39, -36, -80, 85, -65, -44, -116, -39, 122, -63, 15, -37, 57, -66, 22, 110, -64, 9, 121, 80, -110, 42, -50, -15, -6, -28, 118, 82, -65, 118, 78, 47, 99, 120, 79, 64, -27, -89, 93, -80, 1, -57, 8, 114, -101, -120, 123, -64, -28, -123, 105, 60, 53, -39, 76, -84, 38, 3, 24, 62, -26, -105, 18, -22, 26, 51, 97, 26, 106, -57, -42, 72, 48, -59, 81, 88, -110, -105, 99, -12, 94, -72, -120, -47, -92, -18, 56, 14, 95, -39, -64, 88, 35, -78, 46, 126, 4, 35, -104, 41, -112, -61, 93, -31, -112, -10, 96, -49, 91, 13, 87, -57, 91, -8, 94, 79, -124, -13, 122, -29, 21, 109, 70, 51, -45, 92, -103, -15, 36, -24, 114, -50, 6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AJDTNSSBQNR");
    tmp_msg_1.plan_size = 58713U;
    tmp_msg_1.change_time = 0.150931928009;
    tmp_msg_1.change_sid = 21724U;
    tmp_msg_1.change_sname.assign("SLVMANJRRCDSJZBUVHVMATRROZFGPOXMYYIETJAIPIMESERGXYYHPTCTEPSYKAEQAQILBWTHZYNOXHWCLRCSGQHLYCKAIBMOFQXPQNIHVMBOUUCFFVRYRZZIWXKMAFKDMJQQLUCSQCJHEGDDKWLVGZZUTNFDZ");
    const char tmp_tmp_msg_1_0[] = {82, -103, 12, 106, -18, 112, -56, 22, 29, -61, -99, -56, -74, 88, 18, 125, -105, 50, 25, 78, -7, 8, 102, 6, 27, 24, 46, 106, -29, 110, -102, -36};
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
    msg.setTimeStamp(0.795519882781);
    msg.setSource(5749U);
    msg.setSourceEntity(91U);
    msg.setDestination(29172U);
    msg.setDestinationEntity(220U);
    msg.plan_count = 2905U;
    msg.plan_size = 331867638U;
    msg.change_time = 0.453976175571;
    msg.change_sid = 5654U;
    msg.change_sname.assign("OMWGEMGNSQAKRNBLKRZGCDBEQEWRZQHPIEYSPCJVQVAFYAVBCOLAXRKTYXSJTUCGOHRDTYIVPGKWQEUNYSZJXUMWBZESWIQGNILDZRSWVVJXFGURAFQOJ");
    const char tmp_msg_0[] = {69, -38, -52, 49, 76, 87, -108, 64, 58, -8, 109, -120, 83, 83, 19, 13, -62, 83, 55, 80, 64, 10, 16, 22, 69, 57, 85, -84, -87, 92, -56, -12, -96, 41, -17, 5, -33, -78, -74, 122, 52, 95, -39, -24, 66, 51, -53, 110, 63};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IOFWIZPKMJSBJDWRRBYVLUDJTEKHQVGCXKZTBGUBQYFEEFSNUBASYJQJJTJDRGDNFFZIUSFWSEVTASWLHOODRZQPUEFRXQMEZGLLCBREQQPDXLJXOJWSOILRKPXAWKIDMXDEGXFKNBIRGIBHTPSAIHZVGAPFLWKLNVQCNDTWACXRCTZYNVWPCY");
    tmp_msg_1.plan_size = 21198U;
    tmp_msg_1.change_time = 0.847742012062;
    tmp_msg_1.change_sid = 58741U;
    tmp_msg_1.change_sname.assign("VJBGIMNPPOCJDRLWTEFRRPLBPLUZ");
    const char tmp_tmp_msg_1_0[] = {12, -124, -100, -98, 110, 106, -95, 98, -79, 13, -23, -67, -66, 62, -73, 47, 110, 37, -61, 41, -54, 53, 99, -31, 96, 47, 47, -17, 89, 33, 87, 61, -123, -19, 24, -82, -20, -70, -94, -34, -105, 123, -39, -73, 31, -119, -51, -126, 35, -27, -87, 83, 122, 105, -128, 87, 94, -28, 70, 15, -33, -44, -18, -101, 51, -43, 92, -7, -77, 27, 66, -31, 11, 104, -102, 36, -32, 119, 31, -80, 15, -79, 64, -2, -76, 17, 40, 109, 91, 7, 103, -105, 126, -26, -13, 22, 77, -17, -90, -106, -122, -52, 2, 100, -45, 118, 17, 5, 45, -27, 94, 37, -108, 125, 40, 110, -71, -14, -66, -70, -76, 77, 109, 73, 5, -95, -93, 20, 1, -115, -70, 84, 35, -23, 35, 53, -62, -72, -70, 100, 4, 87, 8, 51, -45, -48, 90, 59, 123, -120, -90, -93, -18, 26, -105, 27, 53, -66, -77, 66, 69, 36, -83, -70, -21, -20, 70, -56, 90, 113, 78, 26, -125, 66, -5, -24, -104, 64, 71, -4, 106, 54, -43, -5, -76, -3, 90, -65, -45, 112, -79, -25, 79, 116, -79, -100, -71, 65, 117, -33, -54, -95, 124, 22, -110, -76, -87, -59, 19, -27, 107, 33, -51, -77, -51, -63, 16};
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
    msg.setTimeStamp(0.924010738785);
    msg.setSource(7136U);
    msg.setSourceEntity(145U);
    msg.setDestination(58812U);
    msg.setDestinationEntity(129U);
    msg.plan_count = 38837U;
    msg.plan_size = 1946101431U;
    msg.change_time = 0.201217382375;
    msg.change_sid = 58086U;
    msg.change_sname.assign("ZAUGYBINBCXFUPWTZIRLJAULRERKOQNRETMWT");
    const char tmp_msg_0[] = {18, 66, -13, 67, -97, 39, -93, -73, -79, -40, 32, 119, -29, -40, -83, -21, 63, -48, -119, -62, -103, 125, 55, 32, -123, 29, -62, 45, 90, -38, -120, -11, 30, 117, -98, 94, 107, 72, -70, -46, 106, 29, -42, 6, -117, -32, 109, -24, 56, 8, -116, 26, 19, -89, -67, 48, 42, 109, -93, -104, 18, 9, 17, -65, 25};
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
    msg.setTimeStamp(0.570896307634);
    msg.setSource(49074U);
    msg.setSourceEntity(101U);
    msg.setDestination(42824U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("JWPRKJBJQOWASF");
    msg.plan_size = 36346U;
    msg.change_time = 0.89781247814;
    msg.change_sid = 1790U;
    msg.change_sname.assign("CPIAYWTHJOXWAUBPMVLHKMCQUBWBJQCTVSERWPNSHZFKZGRCILGPUHPYDXQQXTUJIRQHNCHYYWTTXCXWELJDRFONFSDNEGRZQOFYHV");
    const char tmp_msg_0[] = {-84, -110, -96, 63, 51, 5, -9, -98, -16, 58, 53, -71, 103, -34, -77, 102, -17, 43, -19, -99, -90, -24, -88, 90, 18, -57, -106, 2, 91, -72, -2, 120, -44, -74, 65, -14};
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
    msg.setTimeStamp(0.384673549646);
    msg.setSource(55659U);
    msg.setSourceEntity(57U);
    msg.setDestination(19121U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("XAEGFMCWSIKLOFAPXWWWVAGWLXRHKOFKUMAQMJXQZNPDLSJHERSFZLXIWNULJIWY");
    msg.plan_size = 62751U;
    msg.change_time = 0.431268971863;
    msg.change_sid = 48121U;
    msg.change_sname.assign("VBJJLOCVDFGXTCBBGFWGURLMJWTRUERHHSSBKZOWBRTPGVDBPFGMGSVUAUNFEXREOOINJKXWDTZWXCZSYYIDRRZMXTEKXHQGGVWJPEHXFAOSQOTLPPTFEQUHMJOFWNLMUJISKYDCQZNVNASLVBKDCLWTKDNDCTWPQAVISREGDHJQORPSJRMPMUDLIAYUIYHZEMFIQHLUXPNHULHKLAKWVVKITKAZYYYNGSYJQYXECCANOM");
    const char tmp_msg_0[] = {-7, 84, 101, 72, 103, -91, 53, -100, -40, -78, 77, -29, 55, -87, 107, -19, -111, -44, -30, 55, -111, 69, 53, -40, 66, 42, -110, -126, -30, 8, 19, -77, -87, 23, 55, 4, -120, 25, 60, 18, 39, -122, 108, 80, 39, 32, 52, -40, -31, 21, -99, 108, 113, -10, 86, -110, 115, 40, 36, 51, 56, -59, 52, -51, -24, -53, 81, 24, -77, 60, -100, -99, -57, 51, -122, 54, 113, 106, -11, 3, 54, -52, 65, -106, -52, -37, 58, -92, -95, 29, 62, 106, -105, 107, -113, 7, 27, -128, -91, 76, 70, -109, -58, 112, -38, -52, 115, -32, 71, 105, -101, -10, -103, 30, -6, -43, -11, 13, -123, -28, 31, 123, 3, -17, 66, -109, 0, -91, -39, 56, 95, 80, -12, 57, 91, 115, 98, 90, -95, 14, -44, 13, 10, 84, 60, 26, 19, -39, -98, 123, -9, -11, -14, -117, 106, -60, 27, -102, 49, 77, 77, -19, -120, 64, 33, -102, 67, 46, 48, 57, -14, -92, 38, -86, -32, 7, 87};
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
    msg.setTimeStamp(0.859288079348);
    msg.setSource(53125U);
    msg.setSourceEntity(190U);
    msg.setDestination(60916U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("ZWYGWZODFJPXYCPDUCITVVFIPZWTFSXRZINMNECKTUEIFEEMONEONHIFWHNWYRKZCUQQKLKQZPMQQJHROUEXKSLEYXTUOMFOWDVPXRGIRHSBMUJZPLNNZACAHBOCSUAWBMVTWPGRESHXYQBVYVCF");
    msg.plan_size = 15694U;
    msg.change_time = 0.971700484269;
    msg.change_sid = 42645U;
    msg.change_sname.assign("XEARRPEUUXGXXKGGQQVXFIVBWJMOHDYKMDXVZCFMCEJDXWHCVFYPUWZATLATCOUIFPBESOPHDAEFBEKOGRKVRLUJSJGNNJOJZEYIEZSGBJTSPTQQCHWSUICMGHXUZANTVUAMTOLYWKWVBCOHYDYFQBRRIILUYINQZMLCMSJDXKVWWJBRAHSGONR");
    const char tmp_msg_0[] = {-57, -1, -127, -63, -10, 46, 12, -84, 66, 122, -125, 119, -8, 95, -4, -79, 9, 82, 23, 68, 29, 21, 21, -43, -98, -1, -52, 97, -74, 8, 21, 97, 76, 52, 43, 73, 30, -31, -99, 31, 55, -87, -5, -66, 12, -121, 4, -109, -66, -54, 110, -85, -13, 115, -99, -1, -60, -15, 49, -104, -68, -115, -102, 31, 102, 12, -5, 112, -65, 57, -118, -15, -46, 101, 65, 16, 103, 90, -92, 87, -37, -74, 85, -99, 63, -76, -1, -97, 53, 73, 109, 59, -9, 5, -23, 56, -78, -27, -91, -65, 37, -63, -20, -17, 67, -22, -6, -11, -27, -82, -55, -64, -99, 47, 45, -3, -125, 120, -45, -27, 31, -53, -121, -13, -73, 102, 55, -69, -11, 89, 83, 9, 58, -99, 22, -9, 0, 62, -21, -96, 63, 105, -100, -85, 116, 48, -76, 47, -60, -23, -66, 84, -22, -72, -5, -63, -84, 49, -94, -92, 93, 13, 55, -60, 16, -86, -128, -21, -20, 0, -74, 14, 65, -52, -54, -5, -31, -94, 123, -84, 120, -85, 0, -73, 0, 62, -8, -53, 120, -74, 73, -101, 15, 52, 64, 110, 8, -68, 36, -36, 11, -17, 1, 46, -82, -30, 31, -75, 1, 39, -5, -75, 23, -84, -69, -120, -116, 42, -126, -58, 0, 50, 45, 114, 119, 14, -17, 79, -123, 69, -54, -121, 22, 99, 92, -72, -99, -54, 47, 121, -29, -54, -63, 50, -14, -20, 33, 36, -81, 64, 66, 91, -14};
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
    msg.setTimeStamp(0.737181491876);
    msg.setSource(65463U);
    msg.setSourceEntity(247U);
    msg.setDestination(59580U);
    msg.setDestinationEntity(20U);
    msg.type = 31U;
    msg.op = 154U;
    msg.request_id = 18944U;
    msg.plan_id.assign("PUESFWWLRIVYTNR");
    msg.flags = 39485U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 216U;
    tmp_msg_0.op = 132U;
    tmp_msg_0.plan_id.assign("EEDTFJCZKMQUUVTNDQKQDEDYGANBONWFVNJFIUOWMLLMSDERVXCYTZTPZPWYAHTVCIFRQAUILDLISUYKXZGXBIUHFRWGIZBQKJOKPCIODMHEMGWWGKNRETBYCJXGUDMBNEVSHQWYTHONKJNLPLZWTXO");
    tmp_msg_0.params.assign("ZRBEXMPCRT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FAIRTOTGLOGLUKWIXMWZ");

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
    msg.setTimeStamp(0.901910278059);
    msg.setSource(59521U);
    msg.setSourceEntity(46U);
    msg.setDestination(25809U);
    msg.setDestinationEntity(175U);
    msg.type = 198U;
    msg.op = 129U;
    msg.request_id = 15161U;
    msg.plan_id.assign("NQXRBTYPYLCSHABNOYSKLRJPJQPNHFDIZQJZSALFEADKXOFOIRZDOYXFHFGWITNGEOXYNJXVEKXCNCFERCBTZMJJNUGBIVXIMGTRYZLDEVKGZAUHMG");
    msg.flags = 19519U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 221U;
    tmp_msg_0.zoom = 217U;
    tmp_msg_0.action = 205U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SHOQYBQCUESKBZBANMUZKXPOJACCXJAQ");

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
    msg.setTimeStamp(0.0502108956848);
    msg.setSource(42568U);
    msg.setSourceEntity(132U);
    msg.setDestination(8453U);
    msg.setDestinationEntity(96U);
    msg.type = 243U;
    msg.op = 131U;
    msg.request_id = 40198U;
    msg.plan_id.assign("ZERUJLSOMXQJRWVSPWQCCTODOMGSHIMTETJYYZMSGFMQMPKVBMPIGBCGYXJKNKFLLUSCZSZPGKPNILPWVBB");
    msg.flags = 9140U;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WFLMHCXEWVQIDPFLCGMNQGKKILRUOCGLZVDCUTCJNNVOYSFJTKMNPLXZZKYMTKWZYKNWLYKXARXZEHZJHIPFPBUOUAJ");
    tmp_msg_0.visibility.assign("JDUCXPBVPFWVRYORIDKVWTATWZKMZCBOVNCBALSIEECDFZVKQWKOYJTPGRXSOMDHA");
    tmp_msg_0.scope.assign("STPXOJLMDBXTXKOOIJENHDMELMAJXEYHFSWFTYFGQRGGWKVNPMODZJRUMXJE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TKFXLHBMSIUHCWGKZLYWHSXKYDSFKXNVZNJXQQOQBJWBCZPXRWGWGKVCUPQPFEFEXVZCXUODLAORHQPSUGMKUFFPJHBTIOOZAYFDTBNWNZRAYQAPJALIMMDQGVHGSREOHBSIQMJUCPJSZMTVAWIMPODKEYDFYTRVUNOBSOJLWCUSKTDUCFTDX");

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
    msg.setTimeStamp(0.556356738149);
    msg.setSource(41371U);
    msg.setSourceEntity(92U);
    msg.setDestination(23046U);
    msg.setDestinationEntity(2U);
    msg.state = 181U;
    msg.plan_id.assign("EAROWACDVVMWFHFMFQLLFKPRDYZTPXPZXPFSGYHISTXWFY");
    msg.plan_eta = -1595313587;
    msg.plan_progress = 0.960744469655;
    msg.man_id.assign("VDKUXVQUSRUQMGKYZTCUZLDXXOJQYBHML");
    msg.man_type = 23364U;
    msg.man_eta = 47755148;
    msg.last_outcome = 57U;

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
    msg.setTimeStamp(0.527177512944);
    msg.setSource(39534U);
    msg.setSourceEntity(183U);
    msg.setDestination(44896U);
    msg.setDestinationEntity(127U);
    msg.state = 249U;
    msg.plan_id.assign("RALPKHGLDDWJLMHSXFOBJTMQAINUOMDSOOTUPC");
    msg.plan_eta = -598097609;
    msg.plan_progress = 0.45886348693;
    msg.man_id.assign("ZVTGJWKDKWJAUQFAYCHMFHKYWPLHVXOVJULCTJAXGZFMDJIPXRBEEUWDVGKIWOTGQKBAXUOLPNOXFXFCQRKIFYXQNNZMBWTHA");
    msg.man_type = 11170U;
    msg.man_eta = -980603211;
    msg.last_outcome = 17U;

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
    msg.setTimeStamp(0.249812912887);
    msg.setSource(47765U);
    msg.setSourceEntity(215U);
    msg.setDestination(12245U);
    msg.setDestinationEntity(232U);
    msg.state = 104U;
    msg.plan_id.assign("DLJAQBYZZJGTYGAVLAWYRSIDEHDZAYTWRYDUXZOLBKRJTOVVPJEJWUSRQTCVDBFPTXKCULDRVNDYRJFREXZFMFNBQGBYEQCKSA");
    msg.plan_eta = -312578957;
    msg.plan_progress = 0.315970950949;
    msg.man_id.assign("ZITCTOROZQFLMQPMNPYTZLDFXHRQOJCLJSAAUKHWARGAVAVZJXYRHBIGJUKBLNQGEPISMBSDXWYGMBZWWSBCDECLBNCEDXRTFMDKFGTJMBBNVOEZHXYQFEDBTDJNQFSEFJVY");
    msg.man_type = 51416U;
    msg.man_eta = -1511643930;
    msg.last_outcome = 31U;

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
    msg.setTimeStamp(0.128342708857);
    msg.setSource(20249U);
    msg.setSourceEntity(187U);
    msg.setDestination(37047U);
    msg.setDestinationEntity(47U);
    msg.name.assign("LJMAKAHUBENUVDUZFWWDKFTSVIGHQJZRBYLDBUPUKH");
    msg.value.assign("TZXCJPUQWSYULGJYEEODUYLUBLTWOTWBLRPKMAJAHKVMCWXTCFHIUMSBRXWVSPJISYHGGTRGGTDDMOLHQOTFCBPJOPWFKNTSQZQMAMWCPKVXNKWNILSBNPSEKLUAHWFUEDI");
    msg.type = 72U;
    msg.access = 109U;

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
    msg.setTimeStamp(0.780298934162);
    msg.setSource(34449U);
    msg.setSourceEntity(66U);
    msg.setDestination(35290U);
    msg.setDestinationEntity(196U);
    msg.name.assign("EZBFLVCQYHWKINNWJVDUARDOOSTQMIPXIMIL");
    msg.value.assign("ZKKEJBFUWSFRLEG");
    msg.type = 194U;
    msg.access = 1U;

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
    msg.setTimeStamp(0.357958762063);
    msg.setSource(40249U);
    msg.setSourceEntity(85U);
    msg.setDestination(60972U);
    msg.setDestinationEntity(31U);
    msg.name.assign("GWIJHHJCFLAFLVCCJONYOFPWTTMISQQXXMCMDOKXZZAENECKJMTMKBFBZVUWBAMIYGKSQIEHAVKRSU");
    msg.value.assign("VCLKCUUWAMYTJYUODXOIICNREMJHOGLSWWFTXERRXIJMDGEKOQAQDFYTNDBGZXXGJTKALMNHOCSVGHZJMZWBVUHEUYDBCPFLFSJFABTMVUQRKPXKURDIKPOHQQPYWMLKLHVFBZTHFYSCSDCWCEZIVQRRUCZGJAFKNOTYQXVGOMNDDNULLXZBTSAIBINBDRLPOETOQWVPXQISEYESPZHHEKHYIFYMVAZGAQVIJTPS");
    msg.type = 140U;
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
    msg.setTimeStamp(0.347947687233);
    msg.setSource(21765U);
    msg.setSourceEntity(137U);
    msg.setDestination(62109U);
    msg.setDestinationEntity(218U);
    msg.cmd = 83U;
    msg.op = 137U;
    msg.plan_id.assign("FTMAXLAFBXCRPQHEWIWHJCHNGGSQJIQOVVZOHRTJHDMKQFNNWNYUJOUFLJDSQNGLUBYJEVYPWXTFKLBGFTZVRUAEHYXMHDOCXGBOCRVMJ");
    msg.params.assign("ZDHPCLAPGGTJYYPTENXEVUAWMFKZNKQOZBDKANLDRBZMGPXEREVPTHZQGDTMSTPSAIKEBSFQLOAUVICQAXSS");

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
    msg.setTimeStamp(0.0436995696272);
    msg.setSource(49030U);
    msg.setSourceEntity(113U);
    msg.setDestination(57037U);
    msg.setDestinationEntity(181U);
    msg.cmd = 161U;
    msg.op = 89U;
    msg.plan_id.assign("JKHWQQPPWADHLFBOMCCKKZQLCGUWMUGWYMLAOCGKIQHXOQZRVYZVKPOYQVSWXTPUEKIIDSRMUCMPTGEZBEMUVSNDSEAEYXVYRZJFNTZIFNAWGXLGWXTUSVBNKRBULWROHRHVFPAXKRVZILJSTUHRJLNYFDREBYZQZLADGMNDEFEMOECSXPUDPBIIHSBXWQD");
    msg.params.assign("MEHNKZHFCGBAOXAXRASPLFZCXECDXZTMPYIPFNBXMDCXMSMVQXREQICNBIRCWBYVQTCFOAGLZLMNBWANWWDGPJJIEZROYXJVUVUUGZKIGYAAFKSUMSPZQJWABHXCMRTHDQSMJHVNGKSYKLTOIWRYVPOUCODFPGFQHBFWOUAXKYPJNGHDZJONDKKLBWVNKDJPUGQJIEEEDHRVTLYRJK");

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
    msg.setTimeStamp(0.600982167664);
    msg.setSource(65031U);
    msg.setSourceEntity(121U);
    msg.setDestination(28262U);
    msg.setDestinationEntity(201U);
    msg.cmd = 130U;
    msg.op = 93U;
    msg.plan_id.assign("SATAWRNWFBWPBIBJCRHCOAKTFHMQKEKOIFAKUYHPYORDNYWTNVXBUBIXVJCGRLWADAZOAHJPMCTALRQPFUECTQRVGQUZXFDHLMMQUVMGXDQWIUSPWGEFVJPADYHXBGODJDYVLJQFBGKCMNIZSTERICGJKPIZXDSKFCPDSOJNKXEWJZCSULH");
    msg.params.assign("ZORFWIVSMXNNFEWMZUBNBPMQXUWGNSXDXAZSDQKQHYCORADPCKCMGTUKKZFVUYWRQRBOPBQERUXARDVSGTYIHHOSZCNCXIHSSQLHHA");

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
    msg.setTimeStamp(0.904565118246);
    msg.setSource(28488U);
    msg.setSourceEntity(158U);
    msg.setDestination(58288U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("QQTESCNDEDPUBLZYMXWYMIGDMHJDKZREHFIVAIFOJUMLYVERFBXZXMLPQHZAPYTBOENYLKCRLGZORHCIQCYDFCNGKHOQWCDZW");
    msg.op = 159U;
    msg.lat = 0.7598843507;
    msg.lon = 0.497488995622;
    msg.height = 0.229516454335;
    msg.x = 0.8635467937;
    msg.y = 0.569338685575;
    msg.z = 0.400160164349;
    msg.phi = 0.848563047962;
    msg.theta = 0.679890119395;
    msg.psi = 0.0520545478482;
    msg.vx = 0.884880156548;
    msg.vy = 0.509972694207;
    msg.vz = 0.443229958874;
    msg.p = 0.95576869642;
    msg.q = 0.169361355673;
    msg.r = 0.157834819834;
    msg.svx = 0.5044495853;
    msg.svy = 0.917807442234;
    msg.svz = 0.823237792902;

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
    msg.setTimeStamp(0.750042164858);
    msg.setSource(41726U);
    msg.setSourceEntity(13U);
    msg.setDestination(39821U);
    msg.setDestinationEntity(75U);
    msg.group_name.assign("PMAUXAZTZBTPXNRMWXGYAHUJWQQUZZCBZOBSCBVYTRCDLUFXXLDBFQEYBTZYEDXJTLNLRPMTEIRSNKWPRAVOLIMETZGNSYNOGWOCVAJPXQIDMEJXISERAQXVAIOCEHUTHNGAGNKSDFGCVVJHWVISYMQUKIZCIGV");
    msg.op = 106U;
    msg.lat = 0.285214414533;
    msg.lon = 0.110703189442;
    msg.height = 0.360689072851;
    msg.x = 0.59514732114;
    msg.y = 0.542107791891;
    msg.z = 0.856841103176;
    msg.phi = 0.972498918115;
    msg.theta = 0.94902718546;
    msg.psi = 0.874285065974;
    msg.vx = 0.121985753347;
    msg.vy = 0.701365737889;
    msg.vz = 0.97366212814;
    msg.p = 0.388571472558;
    msg.q = 0.888377901812;
    msg.r = 0.765107621762;
    msg.svx = 0.583413469163;
    msg.svy = 0.755711760333;
    msg.svz = 0.369796561544;

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
    msg.setTimeStamp(0.757719228775);
    msg.setSource(13939U);
    msg.setSourceEntity(48U);
    msg.setDestination(23354U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("JXUWYHZCTADOTXHEQYHVXBVIMGDMFKJPHVXQLZROQWLVCDRGGUDFOTGIMPNWKOTZKYCVJQSNLTKZDQFVPPSSNAVANSHRZEOCIAVXFSQQKUWVNOAUREUHCYRNKCPMFQIBCUITQECWPHLJXUXPOBMTFEWONFWLYRFEJMKPIJFEHEWQZPYCADLXGYRBSMSMHNRIJSROZMFESJLYGV");
    msg.op = 208U;
    msg.lat = 0.208647056658;
    msg.lon = 0.0838542052921;
    msg.height = 0.415871236283;
    msg.x = 0.509759161249;
    msg.y = 0.935824329703;
    msg.z = 0.252565695674;
    msg.phi = 0.815296574982;
    msg.theta = 0.608558219329;
    msg.psi = 0.983058302296;
    msg.vx = 0.189156100904;
    msg.vy = 0.733263816293;
    msg.vz = 0.745982892222;
    msg.p = 0.093539947721;
    msg.q = 0.846768745055;
    msg.r = 0.88845846349;
    msg.svx = 0.935833234246;
    msg.svy = 0.704954609723;
    msg.svz = 0.0349687395222;

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
    msg.setTimeStamp(0.227085663448);
    msg.setSource(31148U);
    msg.setSourceEntity(94U);
    msg.setDestination(59533U);
    msg.setDestinationEntity(10U);
    msg.plan_id.assign("ZMFEGBLLXIIIDRJJQVGBXXSPAFEGCBCTSSBYBKOKOWDQWWLOMBPUUILLHMNGXJERCMMWEEINUINRYOSTZKYVSHFASFEMTKXLPIVNJYIQRJCHQFWNLCTZSPXVJQLAVWFMUBOYKPBBFHZXQZRWRPPPRCXVKIGDNRXMZUSOVQUCCYOCAYIBYUYETTMWJEQTYEZLQLSGSHNNFJEADACMZ");
    msg.type = 153U;
    msg.properties = 12U;
    msg.durations.assign("KSMVYJPSJKQTXKUPAPZPHJFALCAHRHMRFEOXHKHBDTJUNGBDZYOOVDIZOXPDEOJYYBUIHIKBRDWUGUSUWGMGCIYPCNXWNTRSNANQXFIGAQHYLLFRVZLZLJTQIDACCCFJWBSRPDCILLYNTUOELFWKKM");
    msg.distances.assign("VWPMRYFGTKS");
    msg.actions.assign("PWWSNZRLTLBHBWXDAGYHDHSHOYYZNCKZBLVBOXFAVTQCPUEWLIPVLSOFLIAKAGMOUXQUEMEVFZZUDECMKWRJYVEUPHYGTDGGYJRSQKJIASEXPYGEUIIIFLXBPQQDBHMWIMPYKWHXHJTOSOERRRHRKZCFKNBNZOPLYNJGWDAHZUDTIRCVYMKCNCCMXRVPTFDKGQQZKWNUZAGFVLSFJTMOFXQGMOCTNXSPLM");
    msg.fuel.assign("JGLRUWXEPFFFNLQKUDHPGCAKFYWHVPOQHOSRKICRYEQBOPCBTKRBDXQETMVNCNGSIDZAYPGDZEZKRKYILHXJVRPBOKZNBIFYZVCEGXWTSBMIDDIRTDHFVZYASWVZVDGVPYFUMYDPEYQQATJNUGUHASOTEQWUWJURCOHBWXKBOHQWEPJPMAFSM");

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
    msg.setTimeStamp(0.316906408658);
    msg.setSource(52794U);
    msg.setSourceEntity(28U);
    msg.setDestination(53963U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("HFKWBGMSYBKOVGACMTRIPZIINPIDTSGVFZONLMTEPKKHVB");
    msg.type = 201U;
    msg.properties = 207U;
    msg.durations.assign("SAAVYSAHNSRTJCQAOGGXBBKEPSPJLSOJWUIRUQPCZBNOWZBHDQRREVIJWXEFUQCGKBLOZGAIRNVMVKCHUIFZTQNOMASGYKXTNUEJMGTBIMAJQPSJMNZHWJDRTIERFYVELZOCPMYLPWEHICFT");
    msg.distances.assign("ERQIEYJZHYFUXEATHLOKUUVOJGCTZDFLSZODGTFODXEZKDYEOSMYCSIJVRYFPHXGNQZIQFQNICSXWDWXRNKKOBVIAVHCNGRLKWAQGHWJUJGHPVZBZICFNNAMYIHBPQLAQTOKWHICMYQPAOGLEJTXRIXAYBXHYFCLREDNUDRDJNUXRVWWUURZP");
    msg.actions.assign("RGBQTXVFBSVYMKGKQLNLXCKGPPQFZWEDXRBPJGNVJIZMSQGELQOVXIGNM");
    msg.fuel.assign("GELAVVQOSSOBTVMHWDEUWQJUVLYRXONZNWJFYFMTNLRQHWBZUNNDYGWQYTPIJCARGWERUUJFVWPBGDJBNLENJKHGAFYYYEXYTDYSZNPKGVCEWYMBMLWIRIHSAQFLGJPXCMQUIHDOZXFDEKAMSVKKPOACS");

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
    msg.setTimeStamp(0.862291995955);
    msg.setSource(28930U);
    msg.setSourceEntity(149U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("BFDVLYAVMLHINDJPWVKRKAQPVENODRBSNXTXRZNVDHWYXXYFCIOTLXYQAMGYLURCPASEDKYKFFWLGWCDRQSVMENSQOPMLOJFATONLNEWVFOEYCISZYWJLSAXMJMFSQS");
    msg.type = 142U;
    msg.properties = 57U;
    msg.durations.assign("VNYELBELQPWRDSRPKUBMCLOTQKETBGVUKNEFSQJTUVEBJIEZJNAJONALQPXIAHMDFNVVZSRKIYBKQIMDOSZTVQMDLL");
    msg.distances.assign("TNSMBRPQJYTIZWOXSUPKAOMHOLYOCMHIRFAUMOBFTYXEIJDJUAVWHWNNLVGZWGFAHKCHWZXLGDKOYMSLVODTJDQQLZXKEJFHLJTNQSWDVYNPACTPRPGCNAVFIQKCMVCTMIVYFBEJPUSPWGDQEIITLOXZXVQRSXZYTWCSNOBXRFRKARMISQKUWPKXAGLMJEDBZPENZBXYFFUDUIGRJUZHQKAHHGYCPBAYCV");
    msg.actions.assign("SIKFVRSFTOFXDEALHKTWDIFKWKAHTRVXBHSEFRXRDCIPVZAJTQWBUGKWVRQCM");
    msg.fuel.assign("RPSJCXQKEQKGMWNJJQCXWQWTAUHHLSHTPWMLNIZXGFYUHQMULBCEKTBASWEHYRPPIEOMIZHCBVFEGBSRGDMXAFFZFAUBQZORTUYBBNEJGZZLONCXMDLQFIWTAZYVTONOCJHKUWPNZAFFSTTCVSQMYSEIQSPSELXVHLXGRUOJPTYKDBVLJOOCPYRNCDLCVFTKIAGVODASHEJARZWUDVDIWWNJKYKNUGZROVHUMBMGIYXXDKQIIJDEYAKXF");

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
    msg.setTimeStamp(0.934663755683);
    msg.setSource(32553U);
    msg.setSourceEntity(170U);
    msg.setDestination(65269U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.497832252121;
    msg.lon = 0.660449692193;
    msg.depth = 0.973453122285;
    msg.roll = 0.244886771849;
    msg.pitch = 0.636235372684;
    msg.yaw = 0.97533856779;
    msg.rcp_time = 0.840385102329;
    msg.sid.assign("AUQCYWZGXARGIUFCVRPTEZYYZPIFRBNQUZONKLILQEFMBNGNPZTXWOKCKZZCJFKSFOTQYOTHQWHSFUWDMQYAVWNMUGRLSUSUJSCAENMYJBXOJZHNLZWORHUXHRUIWITJPOIQXDVTFHDHIMSAWR");
    msg.s_type = 145U;

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
    msg.setTimeStamp(0.203412505203);
    msg.setSource(8412U);
    msg.setSourceEntity(121U);
    msg.setDestination(46109U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.518113234497;
    msg.lon = 0.25598010346;
    msg.depth = 0.694711899532;
    msg.roll = 0.782985403877;
    msg.pitch = 0.846430589548;
    msg.yaw = 0.516979270058;
    msg.rcp_time = 0.960555513485;
    msg.sid.assign("SJPCRFOSNMNFKTEUHZKIZXUEHTOAZSLLDASEVK");
    msg.s_type = 84U;

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
    msg.setTimeStamp(0.629807059481);
    msg.setSource(2409U);
    msg.setSourceEntity(36U);
    msg.setDestination(48899U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.854748253668;
    msg.lon = 0.0258976784242;
    msg.depth = 0.422360502948;
    msg.roll = 0.203497233304;
    msg.pitch = 0.0737535935873;
    msg.yaw = 0.62513978949;
    msg.rcp_time = 0.467106563386;
    msg.sid.assign("TFECNQVVNQAETXSPTODEMYIRALSZRMRJRCGWZSXUKTOJDAW");
    msg.s_type = 51U;

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
    msg.setTimeStamp(0.0925805670356);
    msg.setSource(65160U);
    msg.setSourceEntity(22U);
    msg.setDestination(51620U);
    msg.setDestinationEntity(194U);
    msg.id.assign("BWYRJLQREYGTEIOQRDQMBFWW");
    msg.sensor_class.assign("DAZDPADUHXVEIKGCPKXBDKEXMJKUWNVKKEYBBMQGCEOOOWAVPVJUYKUBYZPQDNCLSRZFUHCSQUVJFFNXDAETLWTDOGMQIXZTRXCPOQYIQWNRTJTYJPCLESKITMBINWRDCGSZLYMBCKAUVRRFHVYYSPMUIHYFSENJZOJAOPBTJQNJGRFKNXGILLWXAFGIIRWMAEZWEZLLQGSVBUDHZZOGMRFALVQTCWEBQFALSJDYFTXPHHITNB");
    msg.lat = 0.174091674346;
    msg.lon = 0.588013849883;
    msg.alt = 0.513715744831;
    msg.heading = 0.277521364042;
    msg.data.assign("KCPURDCTQPOJWZOSVGICZCPFDZVXBVLXANUXZNZVFLPTMRTFBSNPWRBYWCXAPFHNCYNOQHLGDNJYLJRVVNREGODROXHHHAEDJXSJCMQULXUFGOZNPVMZIELZKUJMEDBTMYGSRSFNGIGEELWWZIJSAQIEOPAIQUKKAHFPCKGRAWKTAKDXTIMNYWLGJMKQHDRVEFWMQUIYISJYVDYYEFUTXDULQCOOMPELBHHIFSBGSBTKQWJTBXWUA");

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
    msg.setTimeStamp(0.690557942228);
    msg.setSource(32817U);
    msg.setSourceEntity(171U);
    msg.setDestination(15608U);
    msg.setDestinationEntity(235U);
    msg.id.assign("FQFOBTAGYDGDVKIEYOPVJEAMDCZONULTHMZTAJIDVNK");
    msg.sensor_class.assign("TISSCXXYGLTNQQJWFJIZEGRMLKLDNHDGTIHDCAFKXUXSGQEVQPPGRPMOWKECGGMSPTMLYTNKHFPERBCVSROAWONCJZZGILYATHHUISYHVPSJHOBMOSVPQKZOKBCJJLGVUKSWWEYVMRYELEH");
    msg.lat = 0.683015045544;
    msg.lon = 0.135810643627;
    msg.alt = 0.769552936929;
    msg.heading = 0.572940280943;
    msg.data.assign("YDUSZZBFFDINBFSKOWGQQAIOXAZXTPKVNHDTEMCHXOGQCLKFUHTAVFIAAMQPGUTZWEFLSOQRKMUREEHKBZFEXSAACWRBRYRENKIBNGQUYUNYLZIHYQSECLBWWZONCJMIFPXJVUJOJMLSSDCZJYXPNMLTDWVENWYKXDMPTDGWJBVMVSRYVJAGHLSRXFUKTRBLYGDHMLOJHIZHWQXCDFETABMNVVWUVHGGPIBEJUTOICXGTPPCJORZO");

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
    msg.setTimeStamp(0.952045694856);
    msg.setSource(4834U);
    msg.setSourceEntity(212U);
    msg.setDestination(31120U);
    msg.setDestinationEntity(102U);
    msg.id.assign("WMBGRBWOMVCJKELRQFPBIYMPMGHDXIHFNPNOCDSVOOXAXTUTDCMEPKBPZGELXXKINTOKXMHUXSQQTYUCIVDEMQFTYLUWATWVSHQXPYQAFRNJBDFIZZGAYWLGSSHEVNMOASHQASZAVDTGUTSOTFLYPDRLNFBWFBOVIKDPCASUNCOINZYVKZKQLLENPRZNRCBRUQLJXFIJHJVRMZSUXIEVTDHJRJGCKQCPKBM");
    msg.sensor_class.assign("KPQPIVGESNVQPIHPDCDFAXTJEFWJYSEOMAEFZBGHSLPSWXGMSRYKMJGUBNTLGHKVCLBVLURTCZDZZ");
    msg.lat = 0.597677293402;
    msg.lon = 0.313151451746;
    msg.alt = 0.388851416807;
    msg.heading = 0.349942255422;
    msg.data.assign("NSTMEKKEFYRSFBEUZKAPLMODLWAGENELFRTXEPZPNXLOHIYNYGBOLSJADYRPHYUJHQXMRZUGDTKWHHDENEHJPKCROVAECTOTCLBVCIAKXZMSVBVDONHFQSPUGMRHJWGYSIRBYOAMOGIMSBMIUGPFKDZIYQDVLFQLDZTUYNNBZAYCIJPZCAXBU");

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
    msg.setTimeStamp(0.739272667517);
    msg.setSource(38915U);
    msg.setSourceEntity(232U);
    msg.setDestination(11032U);
    msg.setDestinationEntity(77U);
    msg.id.assign("CWBLZJTQJVLZGYVGXPMMEFZMEAKAHBXJQJWAQGLUSPKTIAXQBAIIDDLTPFKQZHPCINVRXECBEIKRWXTQQDRWFXNZLYUYDFBHFHELWLUDIHFKCKVUURMYYCIORWEJYGRNGVDOCMFVYUNLBIOHXKVYFVXCENNTQGJUL");

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
    msg.setTimeStamp(0.844037158732);
    msg.setSource(2045U);
    msg.setSourceEntity(62U);
    msg.setDestination(17522U);
    msg.setDestinationEntity(171U);
    msg.id.assign("NIBZOPLZTNTOVNYTHKEULCZBKMWFMMJQGLZYWQSCCHHAHSJWWQOCZGGGGBUBQZFRNKGXBBJIXFYXLFJYPNPMMEBTCVAMMMSVAVIZSCHGNQOLTDQDAWCCRRQRFFXVJHYCHPPRUOXAYRFBKSZXDXGSSLXDPVIKNGRJNWOTKTEUQQLPAUYUOSJDEFDHNLYQKWOKIORZERJWZCTAADGLPXHWJDIKUYAEBNVESUVSOMMVAWIRTLKYHEITFX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FJPCLCXEAKICADZHWOUEINUREPIDPQZJSPBHSFRZRVTEHXLZAFYWVQFKHFWQMGGOQCBROGECZZNLVIYKKYQUBJBXXHNJUMEOZTBTQDRSDGLPBVCUXTLPPSQJDYBWWSTNQDUAWWEJDLXXESTWYNRRUAYFZDTJNAJPNMRHVTILVHFCHIWTYJFCKIVXITEGS");
    tmp_msg_0.feature_type = 227U;
    tmp_msg_0.rgb_red = 31U;
    tmp_msg_0.rgb_green = 197U;
    tmp_msg_0.rgb_blue = 191U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.563130912616;
    tmp_tmp_msg_0_0.lon = 0.480338335721;
    tmp_tmp_msg_0_0.alt = 0.440026748256;
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
    msg.setTimeStamp(0.96536969302);
    msg.setSource(48933U);
    msg.setSourceEntity(196U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(129U);
    msg.id.assign("ZDPKDADODCDIAHYQHFQBWNFKPJTGNYVLEYYLGLYHTLIOV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EHNGGMGAFFOUKWWHENOZSJSNDSIAECRWTCTTHHYDKJUADWAOJYDPLNCEXIPVOTEYVSKFZKBJROYOZKZNHMORHXQPLVXVHXUNECQXNAUJOIIYSMNTVIOGSPYFJHPAPTBLDGJBLFUBIVXWTDUQKGYVMYFWMQRQBPWOCQICAZIGBWXGDQAZYHVZJNGCUKVUFZXHQMESPBCEASURPTLTUREZXQTMJQBZLXNFJA");
    tmp_msg_0.feature_type = 70U;
    tmp_msg_0.rgb_red = 251U;
    tmp_msg_0.rgb_green = 29U;
    tmp_msg_0.rgb_blue = 158U;
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
    msg.setTimeStamp(0.57928446683);
    msg.setSource(24221U);
    msg.setSourceEntity(197U);
    msg.setDestination(10735U);
    msg.setDestinationEntity(254U);
    msg.id.assign("ZYGIGSNHXDWQGBWMNLNIIDUOCUDRENERWBJCXFSFQUQMYFYEKIRZQVADXCDTOLYBBSVDSKFTUAMAIICCXGQVGSLIEWKGLVFAQLEXIXGTAFOPLDZEJVJCIJDPJTCIYEVBQTCZAODWSQPRZUKMUEWUNXBKPUNPSFKVAKPMBCNYWHOHUQYYVPMHRAOLTGHTPXSBWMXRVHFROPEAHHZBGDZBOQHKLAJNZJTNMNLRHROKTRZEGJFZYKMPMVXW");
    msg.feature_type = 193U;
    msg.rgb_red = 64U;
    msg.rgb_green = 181U;
    msg.rgb_blue = 16U;

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
    msg.setTimeStamp(0.605095728376);
    msg.setSource(19439U);
    msg.setSourceEntity(169U);
    msg.setDestination(6108U);
    msg.setDestinationEntity(176U);
    msg.id.assign("GRHQSRRSFZVBJSVWBNUROYCENKLAPQHVWCPAPJOXJDRIEBYIWBTPTEQHDLPWTWBSFGGNOIACJHYLDQOCSVCAVNFDSTLWOUCXMDDSBSUPFQDFJBOWSAUYKVWRI");
    msg.feature_type = 26U;
    msg.rgb_red = 226U;
    msg.rgb_green = 130U;
    msg.rgb_blue = 123U;

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
    msg.setTimeStamp(0.881955271385);
    msg.setSource(42769U);
    msg.setSourceEntity(238U);
    msg.setDestination(24139U);
    msg.setDestinationEntity(249U);
    msg.id.assign("DESJNJFYQMDWIMVPMXCXZEDNOPKQZATBDYLYKVSSVLMKPBYSSQYTGKIRZNXFJIEJBFXTCZUTDCLDGUVHDPQLUHCBMEOICWKABYU");
    msg.feature_type = 51U;
    msg.rgb_red = 204U;
    msg.rgb_green = 116U;
    msg.rgb_blue = 62U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.890648346711;
    tmp_msg_0.lon = 0.863779981391;
    tmp_msg_0.alt = 0.701615811693;
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
    msg.setTimeStamp(0.371567666606);
    msg.setSource(13391U);
    msg.setSourceEntity(250U);
    msg.setDestination(17889U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.724625879919;
    msg.lon = 0.583657040019;
    msg.alt = 0.162580938467;

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
    msg.setTimeStamp(0.625592318426);
    msg.setSource(20990U);
    msg.setSourceEntity(68U);
    msg.setDestination(56435U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.664718144318;
    msg.lon = 0.486155862445;
    msg.alt = 0.0140010972434;

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
    msg.setTimeStamp(0.752347821529);
    msg.setSource(15670U);
    msg.setSourceEntity(173U);
    msg.setDestination(19155U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.247391549953;
    msg.lon = 0.497981586791;
    msg.alt = 0.530342228941;

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
    msg.setTimeStamp(0.118138027408);
    msg.setSource(27008U);
    msg.setSourceEntity(149U);
    msg.setDestination(30950U);
    msg.setDestinationEntity(63U);
    msg.type = 146U;
    msg.id.assign("OYPCPLVREHSBANGHJLKOWNLUMPRLYDREUFFROGSPIJNVOXPDAHJT");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 53967U;
    tmp_msg_0.rpm = 0.388063775458;
    tmp_msg_0.direction = 119U;
    tmp_msg_0.custom.assign("EYWWNDOJPLQFFEBNUPNRBBENBQHQSDFPZLGFVVIIOGLANEHUKIJDXXQKNXGNJUDAZFBHZOEBRJVSLMCDIVECYGZAHDTILLKFHGPCMWQHUPXTKJYLRETOZZAHC");
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
    msg.setTimeStamp(0.756121003769);
    msg.setSource(27134U);
    msg.setSourceEntity(219U);
    msg.setDestination(54502U);
    msg.setDestinationEntity(40U);
    msg.type = 247U;
    msg.id.assign("DFBSKPYEVOSLUDTMAZQRXC");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.820540402581);
    msg.setSource(29885U);
    msg.setSourceEntity(190U);
    msg.setDestination(64306U);
    msg.setDestinationEntity(1U);
    msg.type = 167U;
    msg.id.assign("RECWAYHQGZMHGSFLSZZRWIGUYGVRMKSOJHIVWHDQMSSMXVDALOUTETCHFBWFCYXIAT");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 3554U;
    tmp_msg_0.lat = 0.065623220017;
    tmp_msg_0.lon = 0.146667321263;
    tmp_msg_0.z = 0.313143843386;
    tmp_msg_0.z_units = 186U;
    tmp_msg_0.speed = 0.510332305403;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.syringe0 = 187U;
    tmp_msg_0.syringe1 = 141U;
    tmp_msg_0.syringe2 = 132U;
    tmp_msg_0.custom.assign("WHYVUHMWRLSXTMZBGCBGPV");
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
    msg.setTimeStamp(0.724883705345);
    msg.setSource(38461U);
    msg.setSourceEntity(252U);
    msg.setDestination(56726U);
    msg.setDestinationEntity(189U);
    msg.id.assign("WLYJQORDXKEXPMEMYIKIVLMFRWZUAHGFGUIOABXEFTBYBSANADHJFTDHSXTWCNLFVEPIXQLMLEVZUNUORUZRWQOJKYEVKSJTTINGPDKPNELBRJYDMPZBTKTJYSLKMQSJVLSQFKLUWDPAVAPHHRGBWQODGXTUFIMHZUCMZJCCFGJCHXPWXDMTAUZHNZPFACONBWSNLGEGYYEKOOCWMFRQRTVGGRCXEZCBDVNJIYBSPHNOYRZDSQBIQXAWIVC");
    msg.callsign.assign("PSDUHUWANFNTMEJRMPULHWMIGLAZQAKCZCACWYTYDHJLRYEOKWJHHGOJNJWEQIJSSIMCISGMFNDKPXPKNFBNSCWXXDSXXBILVAHAVLXGNPSDW");
    msg.name.assign("IDARGRAMXWBGEXMWGPYETFLIYTBJQCIQLQTQD");
    msg.type_and_cargo = 87U;
    msg.a = 0.559569614622;
    msg.b = 0.426653617538;
    msg.c = 0.837846275716;
    msg.d = 0.344299929882;

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
    msg.setTimeStamp(0.246308373406);
    msg.setSource(20733U);
    msg.setSourceEntity(6U);
    msg.setDestination(36894U);
    msg.setDestinationEntity(106U);
    msg.id.assign("ASINYUCJEVPRYJKDZLBCOXJVIPCOUGFTUKSBMBDVUUPRZXOWZPNDTQYOUUSQBYAHIAEDUKSFWWZTQVBRUA");
    msg.callsign.assign("FIKRTPFLWFRTAWRXQZMMPKCAXWTEPQGNLVJMPDBEOGYNCODEXOEZQCMATWGPHOBZYSIBMBNVUWRL");
    msg.name.assign("VULJUHCOXUZRDXDWFIYMCQEICCNPRPSJHMJFHBNTNHEFWBOZAFQPGWSTGLMAUKXYXLJHHJWVVIFPPJNAZVOQYSOEPFBRMSQLYALSBGDCTXWIZONWPDEBJRLXAMBQEAOIGOEGGBLMIFVYUMAMGGCSUTFRXYDUHSPGYFTIXNZKKWEDYHKLZCKADYESKNLPVKOBQZYIOOJVMRTTZCVWIDEXQCTSZ");
    msg.type_and_cargo = 77U;
    msg.a = 0.717145671301;
    msg.b = 0.882884117626;
    msg.c = 0.858201459802;
    msg.d = 0.319416414421;

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
    msg.setTimeStamp(0.224283552252);
    msg.setSource(29310U);
    msg.setSourceEntity(191U);
    msg.setDestination(42074U);
    msg.setDestinationEntity(88U);
    msg.id.assign("ZBOZECJBDAUHWFQJZAPVDKNZIUORRTOVMTKLDGKWFJVJXEBBKBYNUXBGWEYJPZVOYLYYAQSSJQMGTBRIMCFGGBVNMMKBQNDFTTZIHLLWTOAH");
    msg.callsign.assign("LGXBLZDBNYIYHLUHNOGNHGIRSWPKUDWCAWVHKOEZVEGGAYFHWBNLUMYCAKCVQKTBQYOQSSDXPVIPTYUWPUGZKSAJMWRPEIYBMJJXIJFTNQ");
    msg.name.assign("HVHXLHTKCYJMNAAPEDGCKPYWBCTCBIUTRUZOLGBIJYELCNBSXXKLZEIDKCNWCQBQGHDBTQNZFJADQUCLYIIAICRKLFVDWWRWWZFWKFKWLJLREJRUJGACQEUZNAUNBJEXXIAGYQGPKVSOSMZWDHHHTAPYFMOBXDVTFUFQPYVJZQJOSOGHMHPASGEFZRWPASIBPXDKJXE");
    msg.type_and_cargo = 69U;
    msg.a = 0.303208332861;
    msg.b = 0.031116314344;
    msg.c = 0.358739844759;
    msg.d = 0.469481406621;

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
    msg.setTimeStamp(0.152762405543);
    msg.setSource(8780U);
    msg.setSourceEntity(32U);
    msg.setDestination(30201U);
    msg.setDestinationEntity(3U);
    msg.localname.assign("IPQXYHEPQOABEPRLUFIWJSNZZAPKFMAABABCVGWTCOVRKVCNGFJUXLNGZZJVMOOJSDZDLGDFCGLQGBMENNASVIEFHWTSAURGVPXJOPIHMOVQLRFJBFPYCSVTMYMTYUBNZEYBLYKUGCWQAMUUQMWWUPMFETKDIVTEHTUEVJYQLNBRISXCYSXWWJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CJXRSARKRBSJEWOVSEZIGFMJEPIJNMWHLYYLYIYORAQUGUHXOIGQOUEDWQDUQZQQLANCTLMSPLXIYTXDBENQBBRHSPZZSJDHEXLTEJTDKGBMDFRRLGUBPBCJHSVGZUQICXZIVRFMIUFPV");
    tmp_msg_0.sys_type = 245U;
    tmp_msg_0.owner = 4270U;
    tmp_msg_0.lat = 0.0633287838771;
    tmp_msg_0.lon = 0.346570018355;
    tmp_msg_0.height = 0.269197393255;
    tmp_msg_0.services.assign("JLQSWCAEPAEFPDUYMUQCXPOJQICNQHBJBKISKZGTSCMPQYIVTSXSEYTMXMGGBVPYFDQIMBEMCJLJDRPWSWJZZEPYBEBNFFROGNWCTWUNJTFCGLIHWIZLKDHENZKQGNIBCHXFRXUHRVSXHMEKEAJXDFPVTRDYOAK");
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
    msg.setTimeStamp(0.839221505193);
    msg.setSource(35635U);
    msg.setSourceEntity(170U);
    msg.setDestination(55757U);
    msg.setDestinationEntity(139U);
    msg.localname.assign("YLVHTWODKXKLTIFCLOSIMMGVUPUQNEXMVONAYMYXQZZXDEMDRKSCWDPGUNSOIHGBPTWUWHJUFWWCIVNXOKCKPTQQREQOAJVJJLLXGMHHVTBCOAGZAKRXBBASJAEMRQYDCZZDNWBFJPQSXYUVENONBBGGFQDCGPBKVEZTDIHRPVRZPECUOZTLP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JXSHXCBAFRTICYUNBCOWFLOIETPVITQBKUNQDOPLCLZYRJKUOZMSRMDWDOUY");
    tmp_msg_0.sys_type = 190U;
    tmp_msg_0.owner = 51702U;
    tmp_msg_0.lat = 0.922441278844;
    tmp_msg_0.lon = 0.304612184663;
    tmp_msg_0.height = 0.665122895786;
    tmp_msg_0.services.assign("QTFYZIRBNUXKSKNSOZKTPPFOLWEEFLYLNHBQLYEQCEWPVARDRBRYIX");
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
    msg.setTimeStamp(0.853449982844);
    msg.setSource(11647U);
    msg.setSourceEntity(124U);
    msg.setDestination(3348U);
    msg.setDestinationEntity(217U);
    msg.localname.assign("PWTXCQJVRFUXNABZNAREQJLLQWCLG");

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
    msg.setTimeStamp(0.537377828927);
    msg.setSource(54423U);
    msg.setSourceEntity(250U);
    msg.setDestination(4U);
    msg.setDestinationEntity(208U);
    msg.timeline.assign("TRFLFHUXKB");
    msg.predicate.assign("QXDFOLUZXHQSCZYTS");
    msg.attributes.assign("IVYOZYJFWVYVCDMAYMBJQWGXUTJEEXQHUXRDQPINQGEZMVIOQNEONLLWFLSQRWOMPKSYOPXAUHFQTFPIXDGDYIRLRGGNRTSISVFKXYXWVBLLEUHNDGRZCSSWPWIWUZMJUBTKVPVXCRBOXDBETFNGHKCYIMWJCAVIC");

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
    msg.setTimeStamp(0.377314592688);
    msg.setSource(43073U);
    msg.setSourceEntity(39U);
    msg.setDestination(17696U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("VQVNSLTCMTVYBTJRZCUMMWAOFPMVUEQZGIVGZAXQHBNPKFQWCEIEDHAQFGUHMLULTDEFSWDVCBONDYLKVNNRZNCTALEGLBRENABXFPBAFFOQLFKCORWXPOPYHQRKYKQGJUHKJTIXIBIIXTADPOSSQLIIXJMDZZWGHALJEVYXMJKYGHZYPMADWZROYIRVSWHDBEQCZJREEUUYSNRDUGSWNWSTNOZSPGK");
    msg.predicate.assign("BHCRULLPCATWSBWFQEBXJJIPOXWVWEHZOQINZTXXBMPGTQHVQFAVCBODZFGGDPTDZESYROKEYNZDRJORGWSDWKNKDJOKCCQQPKZJETXBCULYLFTDTWMHYILMBJIHMVYFSNGWMRHDNFAYUZRKAZDQNVSIGUKGJEMPDEMAJHEFBMEASUFSGGILUTTKOSFRJHUNYXXGSHWWCKRMRALYEOPIPQIQCYNOVUCVVTXNBAM");
    msg.attributes.assign("OYKMBSPQAEEYYCOCQUDUITZMSVIKYOWJQSFUFCLJLFGYDJJXUFNZCFBWLBVGEBDXQGXQDZZTABPKWXCRDFHQUOYRPRASWBREBEWJINPHDHGAITIZBIYBS");

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
    msg.setTimeStamp(0.677649963397);
    msg.setSource(2477U);
    msg.setSourceEntity(222U);
    msg.setDestination(15214U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("YIVTJZXKFBNMPRBVYTNOMOUQYAMWQTVQSEXPAECSRJIQMYVJIQHIAQCUEHEGUVNETJNWXPFLDC");
    msg.predicate.assign("OYUQEVVKWJDBTQSGBDGAUMKRBIUUDNPUQGDFBVXGZRWGRDTWMGEYLTKTTCQKIFLXMSEFOPLCQYWNYWJNCZAQAJZBNCVSGMFPZPMLPQWJADLJGPRSIYXSKOEMRONFKVIDOTXXFCLHUXEZTRROHRPBNRAJZCOBXHSENVEMKZKNLBJFJOCSTAQDJWCZEMHVBXIYZEUPVHY");
    msg.attributes.assign("RGPUXSSCXHPBLEDBXXVIGDRLOPCNNZIIGQQHEDBUTMVKZNLCVWKABYELAMTAEVUNRKLQVWYWTMHTWUOSQXEF");

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
    msg.setTimeStamp(0.885919910788);
    msg.setSource(23283U);
    msg.setSourceEntity(144U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(231U);
    msg.command = 15U;
    msg.goal_id.assign("TGOFTOQOVEMUKJQZYEBCOVDQLKPLYUGQNXSBMGLUMIYJTOJRMZDTAJXKFIEICIGYLSJBHNDUESPAZKWWCMSZLNBQHPID");
    msg.goal_xml.assign("PADGSHSITBLFMFHIJAHMBOZGRQUHWMAXKQZMYRLBRAHWZUQLBRMOBCVKQFVXQWQEUTWRLMFTKDYTHEMPDDDNGZHTKXPONCYLFIPNBJNWBWQXTUIJJVIAECZKFUGJAGYQESDJVXOIFCVCUZMZSOXXVGBIVPFG");

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
    msg.setTimeStamp(0.396809411253);
    msg.setSource(60675U);
    msg.setSourceEntity(201U);
    msg.setDestination(54489U);
    msg.setDestinationEntity(141U);
    msg.command = 101U;
    msg.goal_id.assign("PTWSUOHXDLZGLOGYWOZVTNISTLMXJVWNZFPQPRXIVBIRTWKVHKRCEDDCXPFRYCBCVHVMPGIFJDGOLUSHPQIUPVQLALONRFRITNAEGJLDERAKMLTJLUQBNFHMDRVCSFOXBYGANJKYIIKXEVSPGKNYGSRKTMEYZENAIBSZXPQDSCOWQHMUJMTLGUZQHUOZAPGZNXUTCYHJABYWFMQMKARJ");
    msg.goal_xml.assign("RKWGTDHSDXZRJZJVVXOWYPMPTHZPMXUGPRHEHSZTAFRICOOOYDCVLHPHIGOYXIUGZKMKACMNHUVOOBOXHPZBJLQFYJXBIUSKCIGFNDQVWRTTRULCWTBDFWEAQJQJPTJAWVGBUNHSEGNFSCSJLHJARBEZA");

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
    msg.setTimeStamp(0.00623945078817);
    msg.setSource(16999U);
    msg.setSourceEntity(9U);
    msg.setDestination(19853U);
    msg.setDestinationEntity(87U);
    msg.command = 187U;
    msg.goal_id.assign("QTBYZTZAVRSPNUBREADVRHMTMTLUJWQLESOHLIIGDWEFQCPFMUZOOTDCFJQMQDIXISDVCNWFPBVYHCSGBFFPWDWNQVMNAPJRXGLWEHGFYRLSUKHCWGCNWZAAUZAJETXJFJDYIPPKPINFCJTRYUXGZWLBKYNGLIKIAVOXLVOXMSBEYCWHJG");
    msg.goal_xml.assign("YMAGIEKNMWCDEGLQXPISPBPUTRIHPCVVFMIUDFHAWENXDXAKWLXTZRJPXOWHYILSYTKKMMVWYTLUAZNUURQVWZHQDAFOSMCMEHUNDWBGAERDUILRXSRLONJCKOZCPZPXCBJZDVQQHFYFTGOTONRTVZ");

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
    msg.setTimeStamp(0.944993109174);
    msg.setSource(40668U);
    msg.setSourceEntity(4U);
    msg.setDestination(34387U);
    msg.setDestinationEntity(127U);
    msg.op = 115U;
    msg.goal_id.assign("JFUPKBTGMKTWAEYTCZLOCGLPEQFQGJRMLCGNWAFXCBMIQCEZSOPGXBXOJRYDYDSHDIKFRIWVLQLOAXZTPSPMFPZNJTIOWICDXSHMXECYXAYALGIUNHYYIJCTRCEPBMBQBHVGGVYDRMNERVNJHLEAOZUESEJU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NIEKOVNBTQDQBCKAPDNXZGGPEFEFSJXJUEKBLWVLPYXBCZRMKM");
    tmp_msg_0.predicate.assign("MJPTVBTAAJHEOWFOCZAVDYCQUUSOKAASPEYVHPYAGJWLJTAJHEWMBJCRERLGWCDBQBDIDHXAWXPKWEEGZXYNMJIOLGHXSQFKLZTVZMJYWIBPYYLDXHRLMWQIVNXTBTDPSODCIHBICMOTRZKVFLITLTZGJSDNORHZIHFNQSNQMSRCCJOYSFLBEUQKUYKMPPSKGXFXGFENUGSVUCZVIYUORZNGAA");
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
    msg.setTimeStamp(0.192039016345);
    msg.setSource(52224U);
    msg.setSourceEntity(170U);
    msg.setDestination(30604U);
    msg.setDestinationEntity(197U);
    msg.op = 204U;
    msg.goal_id.assign("EXJTJUHZZSVXXCRRRYRPBNWJGSVONDJQWTEQMYBEVBPUETMCJZKOEFXAATNMOPVHYWFSOHNEWGMTFBNGVIVGEIAQYFDUQCPBZKZIJJKMUZFSPGRQCADKMLMWFOGYFKAERLTLCBVFSMDTISVRUMOGGXDOYHHZUWOJPWAJQLAQS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CWYTFYXSYNIYEKBBMZXVZYAXCMCWXTCYRZKPGACDAESUBKRZTYEZKUHDXHBUBFJQRCUAPKMOJRJVAXZOOAWVQPEDGMSOLEPMEJWMWVNPJXHGGXEISREITXBQQLRZNHQYRQLUVFOLBLKHHJOFGWPSIVNYDZRWNDTUJKUFMWNAESOCINIQHKSOYPLTGSNRGBQFFHFLDDJMIEGQXMKNUJPTBDSVFOTLDTLUWG");
    tmp_msg_0.predicate.assign("PIKYCOZRCIHBLSNBMXTTUDEUWFATGERABWLEWSSWEOISOCWNAENNUXIQHTRRCRJFLRZKCJPMGDZJ");
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
    msg.setTimeStamp(0.474299440445);
    msg.setSource(8611U);
    msg.setSourceEntity(145U);
    msg.setDestination(9521U);
    msg.setDestinationEntity(154U);
    msg.op = 3U;
    msg.goal_id.assign("OIHPMQDCTGJLVINAVHQKKFUKIHEBBMSDQOKNLWRZQIGPONCRACAOCGXXUEPSTMOAYSOTMGRPWIMUPBXOPIZRLYDFPQEWQRGIZKGHCFLGTSZRN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NWGIJFGWKIILCLHTOVBWWNLTPFNESHVQBUYVGPEZIZDZWWADRASFVAGOUFCROEGUCJHAMJLQSDCGKYURVHAPQRKPYENLTXYDSGCOBQAFOXOVXQVRJBRSJTDLMVU");
    tmp_msg_0.predicate.assign("FUZOHLMPIQZXEENKXCYNOFDUFYPVGILKGJRWJLOKOITUWXQURGBDARUEZQGMCURLBRANGITKSLSVSXHIRKCTANFMPLICOAPBHTGTXBJYRVWYHWBVWHLVLOBKQSQUEVENVSKPSZJAJALZTCVIFVEGGZJPEHCYWCXDAYQNDFPYWMHOTNVJJPPNYSRJYWTFKDXFWIDQCMMDRBOCMGSEDBSNJUSUNKZQGIOED");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FQLRMVUTXYCMZETPMTZCHHJNLQHUDVCKFPCJPNUQDCASZCHVIKCWXABDQMDJUOLJUPTWULLILPVSACAYBZBYFVWCMGROALBQUJKXESGJOGBNWXZYAHNBGEPRXGDWZJQQCWEZBKZSWHEYNKRDWFPEQRYZIYSVDOOARSKBSZWJVOFIMOMVHGHDMGIRRPIXFBHOTIKSXTITVOHUDXNEFPYQLKALJGGEPYXTFRW");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("NUREHFAXAKOPQKLSOFETAUJYMOMVUGRJHTVVCFSJXFYIZVMACXFIWQNENPRAQMQRLXEAZQMKGXJKGNRSICWBYCVCZCXJCPWEBOFAXHZXCDPQBHOFVBYCBNQGTLDUWIYFYKYFUHFPMVZPLZBRZLEDDBHIHJGWWDD");
    tmp_tmp_msg_0_0.max.assign("JESASKCUUCBGSTNUKFLHYSSFIVMZQXELBCXYGPDXHXPHOTUAHNJZIVPHWQIYUTYAFXLGORBFROGOJOMSIWAEQVIGKWOEBADRUEJXIAITDVJDOBTNMJXDZTDBTJLRCUNQZPJLNLSHWVQQKMGWRVCBIXSNRWXQLXHWTWRCVMPEKFQQPHATNVPPCEBMKYZUPZHMIUOWAJKEGFZAMOJYNQCEZRDFDFLVVSBGKLKZTNIAFRWMSDDFEYKONH");
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
    msg.setTimeStamp(0.181580476515);
    msg.setSource(8991U);
    msg.setSourceEntity(55U);
    msg.setDestination(27850U);
    msg.setDestinationEntity(181U);
    msg.name.assign("RXCSHYPHQMNYRJEDCLTUZCREBFULVSFPDQTOTGBPENCHORAAGTKLXECYJQJWGHWGCAGTIOZGXKZFZSXSDDKTSYMEYFODEQAKLJXQMHRNPXDUTGRWLVXOWYBTSWGKZOFQUM");
    msg.attr_type = 73U;
    msg.min.assign("OIVJYEHLHBZCTYRRRYKSXNQNRUYUUCPVVULFMRTYTSNDWBSOFABIFLCQWTSKTUPVYUDFRXAGIHLUBKHTIHQCPHXCPBWLBWARZGZPCSUFRMIZANMWTIJEJJKMCYGZOWYEMVYEQANDKGENUTBMRKVGHMPVZKWQDTWARAPTCSBXCPMZFOUKWPQXLIEHXNEGOLLJIQJZMBXODHYSJGDLGOXVAFLOVXISHS");
    msg.max.assign("OTGHINMCRVYPSFVMIXJGHLXQUYPNLCRZGGJZAOIZGXMVEDKTZYIVETZUQDQRXNFABETTPJDXJBBWMSHHHZODYSITXRKRBUDNEWZPTIKWCKBHXLZFJOEFLQUTAHHSEKCOILYBWJAGJCOAWBCJDDNPHTCOXGEQFNJHEKEOVPSMLCWMNLJAWSFXFQBPVUVUPOZMPQVKCCPDGUQMWSYUXYAMR");

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
    msg.setTimeStamp(0.943932068151);
    msg.setSource(45162U);
    msg.setSourceEntity(10U);
    msg.setDestination(63617U);
    msg.setDestinationEntity(52U);
    msg.name.assign("JIHPQMWWJHXVTYRKQLMLKYUXPAMPGTXIZGHIQFUKRHTHAEWDOVBVRAYOKESWJCKPAKEMSGQVVAOJNRHNOPD");
    msg.attr_type = 251U;
    msg.min.assign("EDBSKCEYRWZERYFQUDOMLJVKPKLLFAOXBIXASNBWVRPFZHFUGPXXVWHQRMG");
    msg.max.assign("PQVMMVXXAZECNTPRFIEUHHUUBZYYAIRBLLOACEOOQJQLSGRDBFKAAMHVLFAPHAWVJNOQPTLWVMCDNZDQTQRTSSZVHYYVOFNVCJUBTHEOBVAIDSQ");

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
    msg.setTimeStamp(0.59651535799);
    msg.setSource(11917U);
    msg.setSourceEntity(199U);
    msg.setDestination(58008U);
    msg.setDestinationEntity(115U);
    msg.name.assign("KHSBRPPRBIXFBYKGOKFVXCNNYETMWOFZBKQKUCKVSTSFVINAUJUEHBFSUILEBHQFWEFBVKZBIYWWQBWCJJCZXZYPCCFGODMGGNQXTGVRLPLRDGRUSMODXRPJWMHSIHNNARXOLBYZESTPDTUJJJEESFVDOEMDOIDCGNVDTNYCXFCMLQYZQIHU");
    msg.attr_type = 238U;
    msg.min.assign("CXNXLFWJZVSLYNIKFTGLWTJSJDJHQFNAUGNJAQBNVODCYIPXYOQRIUUVUQHOJNCFMZAHIFJIOMPKPTXBVMCKPPDZABIRAXRYEVZBJXGUYXJTSZYTWEKOYMPEIGQYMTQQCDLWHEHJBADQKRGPCVCWMWSSLRGGMKBRETLAHFXNSBZWOPEZACYYDSF");
    msg.max.assign("CHIRSFQFJYNEUYCBVVTYXXJMEWKSLHDTOZZTBPKNOSGFEDRHDIXLQVZKKIDYBYRKNOZCVTLZDK");

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
    msg.setTimeStamp(0.65371539335);
    msg.setSource(8558U);
    msg.setSourceEntity(196U);
    msg.setDestination(10944U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("HPLYDULVWIDWPSYJJDAUCIPEEXPJYUUWLTLJVGGVQYQDFGLGNHBJIKDPGTBMPDSRUXXHMLFSBQIHXPREWZDAGWYRPKIKWLSXVVCKBZQKHXSAJEIXRCXMBTRAJROFUFOGSSNWUEJMGRNFVVCQWJZDTQYRKCMHIINYTOBALZJLWQNASOYNYEURTMOEGYGKNFBMQOBUSKCKAXATHNVFQENNCZZ");
    msg.predicate.assign("KNAOCYGDBPEXRXBDHOTJGXNDJLOMHFTSKEYWMLRKIEXDQTUIWYARRALMJQLYOGUUJQBXVHVDWXCIZEWKFLKKYDQYVVCKGQJBOPBRPGAEECRCPSBOIUUTYZTXHNNJZTZY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IVONVYHNOLVQHIYQHCZGLAZMVEIDLHRMFOKAFWBCNXSCIPBCKDCEQJLNPGFLQAQMIPUXJYGAAZPNRLSIWKTYUFUHJYGUWODTCNWCKTLYADRDYHOMZSXRHOXSOPQBLBJLTFUSCCD");
    tmp_msg_0.attr_type = 71U;
    tmp_msg_0.min.assign("PODPLEGQMCWFZNSIN");
    tmp_msg_0.max.assign("YZREYQDPXDMDHEIYUHHSOBQPAASYIJZXUEPYWITGUWLLETPPUWBBEPAVHJIKLIIRPAGGRRHRDXRNTRAX");
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
    msg.setTimeStamp(0.492675146695);
    msg.setSource(38208U);
    msg.setSourceEntity(46U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(68U);
    msg.timeline.assign("UOKMPODZHDRGXSPIMKVDZMHFCZTZFBKI");
    msg.predicate.assign("VXRTYTTKFGYMKWEMXIEIUTYGOZFVWCNHJMFWKSZAQNOBUPNKPWMDVPBRJSEUWIVJCHLGLTFGAANFDUSMDHDISTKHXSDYZWLBJKDGVSEQLHTOAFKBTNUIZZXXYOFAJORQSWDZJSXOPSVKLQWPVZQLHNKWHACLEEWNVCMQPDIFIHXCQYJURBNUAAJPUFCCIQIBOZIXYTHRROEPBZMLQCXLMJRVPAKCFAYBPDDNYGEUUQGTEMOZBGOLJVSRXGBMRY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XPFMEYVNICUYGHSJUSPAKLYIIWDMECCQVFHKDKTDXABSTZQHVBVMPXIXWWNQLYFIWODTFJDAQBGXLVCRVVJZKHOKTICJFWOERWTAEGCRJRKWPQZCNKRRYYAZQLYBAUEUGOWOTMEPFFYWRFHQPKGHEFBMZBSOYKVUTNLRTBLIIXBHCEQNJECPVJDVUOPOLGTCSUGTNZENLIWYDOXZLX");
    tmp_msg_0.attr_type = 26U;
    tmp_msg_0.min.assign("RNPSJVFDTGLKMVJIMUMJZLHADMBZTQIXEJIKPATYFWGSFRISSNCOBPHRECQHRUCTHNKLRWNLHXFMAMZFCBEDBKCWTUQKPDSUYWEIGZNHJQA");
    tmp_msg_0.max.assign("WNEWSXTCYPROEQIFJQLGXCCG");
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
    msg.setTimeStamp(0.200871297925);
    msg.setSource(46603U);
    msg.setSourceEntity(67U);
    msg.setDestination(4827U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("ODRLEIRRMKPYQDHNHFKPSNGPCLNZWPUECTUEXBWJLCABLGYTCRNWDMWAIZERQMZKXNYFLQSVSUGLAJKRPLHAKYQSAKCZQICEFGMADIQJIZQXQJTOOSEXZFTUWVWFMEHOXVJLSBD");
    msg.predicate.assign("LWNQMVBQCBEAMMMNCFEQJQDBAN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MASWZSZLRMVMCQFULOECFEDRUDXTTERIECINRBTMPSWKWZYXSCYKAFHJYMOSHDLNEIECQYGLUBGDLHBCHYFOXUAICKGBNLNNNQFIJBVED");
    tmp_msg_0.attr_type = 97U;
    tmp_msg_0.min.assign("AWWAQXKVPCZOWJOMBMCDNSJQPURHTIHLJGYTOFZQQFSEGXLDGNQNGVNTEBSOCBZEFIVGAOXCISRDFVINEIVARKZZOIVQRKKRDHXCARUTBKHHPETUHJEUOESPGTWZMHPFHAQLDNDKXWOQHIABJJXJFOLMSAPLMYLPWTNILEXTPQFUSYPGIWWZZNYMXCGXKACDKTR");
    tmp_msg_0.max.assign("REGUAYCSPQISNLVOZFRBXUGBTKSSLABMUUGMTAQPZKQGCBJJSDMYDXUHJQUYHINWKEPWXXHZBOHQGXDZGMCWFPKRTCESFRNQYNDLKKHTUJWDRCSBOQJLRVGXGFAVEEAWFHOLHCOPSWTVJYDBYJOTOVZTXMKHPANTPIEXLNZZRYNYAEJLFKBIPPGVQKWCTDNLMFHAMIREYOISDRZQWAUZEVLIBURTJICCEUDCZJOLNPWHSMVXKV");
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
    msg.setTimeStamp(0.581345863265);
    msg.setSource(31435U);
    msg.setSourceEntity(71U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(19U);
    msg.reactor.assign("AAUPDMYSTBFXKZZBLCUHICOJGXULWYFFNFJ");

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
    msg.setTimeStamp(0.74477863459);
    msg.setSource(25438U);
    msg.setSourceEntity(121U);
    msg.setDestination(43117U);
    msg.setDestinationEntity(112U);
    msg.reactor.assign("JHKFOKKJSPDHTIDQAMVCXILDPKSZFBHTTUUNLBOGONTAPHAOSXXGWLDBYRGGXQMXHXBMWXTQRNZBKEZNPIXXPGIFUFPHRLMAOCPJACVIELEKHNTMJNSOVCYCNLNWJDEZDE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RHCYKIXABWHUYEGPCHFXPVSULOJERQKKUGSATUVOSXSRJPQUCBRGGCGQAQWBFYMUDYFVDURFFHLTGSOIQOYDLWZEOTXZAEMQKTHBOCVBWLUNZMILXHNXTIZXTHGJOKVKYGVPNBMFVORMIIDEXRJZIAOEARLSCQTDILEBPXTPLZJPGFBAKHEWFIMJWL");
    tmp_msg_0.predicate.assign("DQBRZEGFQHEVZIGBVAYNAWKGEEQMLGCBZEYQFLUDSAQUBVXPIOSBFXRCUGKVBHMXCOKJKZZQARCVNRFYDTXFSXPTPDWDIPQEZBDXJKOGELPJIOKIORYNYGIPWMAKUREGHSCGSDUHICHNNZZEXXRTSTVJTLOIKCNPASKWCQAUWLJFWXDVYCHOICTNSLBVMFJTNM");
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
    msg.setTimeStamp(0.546148244703);
    msg.setSource(55988U);
    msg.setSourceEntity(206U);
    msg.setDestination(29296U);
    msg.setDestinationEntity(147U);
    msg.reactor.assign("ACUPHPYOZRVYLDIRXZDIOXWTIMFZDMKKFQUTIPJZWAMRKWXGUTIQXUYULEJOUIENRQQYAPGXYYUVSULMNSJBKMODFMZTVNHOWORWCBGFXEZQSJZNRSJEADVPQCDEBHVEBZANLDLIHYGQAHCXFGSPRDFAQPOBWFVBWNCOHGUXTEMPZHUGCYVESYSBWHLKMRJXOESRNKQTVBBIJPHCYMQKITNANLKFFDBSJLHCMNIVCTCPAKK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SPJQJYBPERKLEGWUVMUWWXYFVDZANGDLZTCKAZJSDHOWFNGXACLJBHWGDWRPMIKCYFPNOJDMABMKSXCPVCPMUOSLGEAKRVIBLSFDFEDNMTPANTPMQNFD");
    tmp_msg_0.predicate.assign("CVKWBQUKOZXSYDFMKLRCJMHCZGOQAAMIATRHVWLSIJUBNYQJKHLEKKHNYWRWWCMVDNWMQFGNRYGOUFLDPEBCIRGBPRNXEWHWXVOBMPQAHBBWPZXORHDXKCPQNEARCINFTPLUGLVAYUYSBVOPOFY");
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
    msg.setTimeStamp(0.138676587299);
    msg.setSource(40464U);
    msg.setSourceEntity(146U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(148U);
    msg.topic.assign("KEVDOGJBUIIPFPFIIWIKIBGQTVHOZCUXOXRASDQGNXLZNGSGJAANHLPXAYZJYLYCEHFKYSQMUODGJJKDMNJNZEPW");
    msg.data.assign("KKHTKKVDZTPWXNIWOFRYTMUFSBCKKDYIBPYRHOWKPFNJFSMYHKAKLABYLXLUZUVYVEPLPILZTJJJQDGMABICVMQHQOMHJNCQDQPPBUEAQDNALXZIMNTIGDOEGZZQLOUXEODRK");

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
    msg.setTimeStamp(0.632253052639);
    msg.setSource(61818U);
    msg.setSourceEntity(168U);
    msg.setDestination(27920U);
    msg.setDestinationEntity(200U);
    msg.topic.assign("JJRYAPSIHDGY");
    msg.data.assign("EKOLKJBUBYBKLKNXCTDNVYZUFIEKVTUYYQNZQVSECSGLDVWPIBXUPOBDXLNQLAFYSNGSYSFWNJFUICUNDXPBEGCLCLZWCBMJJHFRWZPUZHJGTAFVNFRIMPGZODNVVPEYRWMJAXPCUEDGHGMKQISGMATJWNGE");

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
    msg.setTimeStamp(0.108761460861);
    msg.setSource(17625U);
    msg.setSourceEntity(213U);
    msg.setDestination(22658U);
    msg.setDestinationEntity(223U);
    msg.topic.assign("KVMQWIZDUTIRUAKREXNYUZBGGISAQXEHRFXYWWLJFMCKAOJHSBHFBBJBEKFTHDVLXQNMHAPHZPJOWJRCSLSEQBAHVDRZZBDJEMYERHEFRRXMIEMQSKGDOKGQUZZHO");
    msg.data.assign("ITGGGMWZAWLXDZJFCTCUZXKBURUVUVTFRCYCASBPXPIRYNMBTXGUSUKVEWMNFJGONFUSZTDLLEDJJDFFHQRNKNGQHDCFINLKVEERDTXOPMUKUJPEXXJLOWAQSHTBDKBMHHSGCHKLMHILBBGTD");

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
    msg.setTimeStamp(0.212591308077);
    msg.setSource(1147U);
    msg.setSourceEntity(35U);
    msg.setDestination(14428U);
    msg.setDestinationEntity(215U);
    msg.frameid = 29U;
    const char tmp_msg_0[] = {47, -103, -103, -45, 48, -66, 43, -54, 26, 22, 95, -4, -78, -105, 30, 51, 85, -104, -15, 29, 122, -49, -69, 86, -50, -75};
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
    msg.setTimeStamp(0.357692709446);
    msg.setSource(24906U);
    msg.setSourceEntity(38U);
    msg.setDestination(16778U);
    msg.setDestinationEntity(152U);
    msg.frameid = 4U;
    const char tmp_msg_0[] = {71, 31, 99, -86, 28, -62, -117, 75, -74, -19, 63, 77, 101, 55, 101, 120, -24, 97, 24, -79, 29, 9, 1, -40, 4, -113, -45, 28, -26, -46, -26, -87, -101, 72, 45, -20, 103, -68, 21, 23, 100, 52, 105, -102, -95, 42, -14, -95, -73, 58, -68, 85, -89, -54, -54, 2, -85, -80, -45, -123, 101, -114, -119, 16, -67, 14, -1, 13, -84, 73, -16, -62, 83, -83, -116, -50, 49, 6, -78, 46, -110, 64, -111, -119, -80, 126, -63, -16, 89, -53, 96, 79, -94, -84, 2};
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
    msg.setTimeStamp(0.830535901053);
    msg.setSource(50U);
    msg.setSourceEntity(148U);
    msg.setDestination(50059U);
    msg.setDestinationEntity(138U);
    msg.frameid = 248U;
    const char tmp_msg_0[] = {-23, -22, -42, -47, -31, -76, 73, -29, -67, -80, 115, 3, -27, 23, -111, -111, 109, 60, -31, -7, 87, -54, -92, -107, 78, -119, 3, 108, -66, 9, 84, -60, 53, 97, -105, 44, 8, -30, -94, -100, -44, -114, -84, 20, 109, -128, -101, -49, 110, 95, 54, 68, -94, -60, -122, 6, -69, -71, -119, 19, 88, 49, -109, 46, 95, -116, -84, -104, 118, -96, -40, -107, -123, 86, -39, -80, 115, 72, -27, 84, 44, -46, 94, -54, -102, 104, 115, -108, -62, 34, 70, 95, -4, 103, 107, 13, -18, 5, -15, -82, 70, -32, -26, 40, 29, 5, 17, -49, -14, 24, -22, 83, 96, 8, -28, 93, -84, 64, 112, 119, -57, -37, -22, -128, 86, 68, 18, -21, 105, 53, 120, -97, -26, 86, -126, 70, -123, 20, 38, -57, 21};
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
    msg.setTimeStamp(0.367692314763);
    msg.setSource(5559U);
    msg.setSourceEntity(250U);
    msg.setDestination(64305U);
    msg.setDestinationEntity(151U);
    msg.fps = 244U;
    msg.quality = 235U;
    msg.reps = 175U;
    msg.tsize = 158U;

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
    msg.setTimeStamp(0.0765903317122);
    msg.setSource(3525U);
    msg.setSourceEntity(23U);
    msg.setDestination(36766U);
    msg.setDestinationEntity(200U);
    msg.fps = 1U;
    msg.quality = 207U;
    msg.reps = 138U;
    msg.tsize = 169U;

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
    msg.setTimeStamp(0.325561433434);
    msg.setSource(1628U);
    msg.setSourceEntity(180U);
    msg.setDestination(56700U);
    msg.setDestinationEntity(58U);
    msg.fps = 193U;
    msg.quality = 36U;
    msg.reps = 151U;
    msg.tsize = 170U;

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
    msg.setTimeStamp(0.885314856316);
    msg.setSource(35044U);
    msg.setSourceEntity(222U);
    msg.setDestination(9696U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.901671620304;
    msg.lon = 0.618191455734;
    msg.depth = 230U;
    msg.speed = 0.0830192727999;
    msg.psi = 0.0828471438847;

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
    msg.setTimeStamp(0.0118842634559);
    msg.setSource(15149U);
    msg.setSourceEntity(75U);
    msg.setDestination(7861U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.0999957260228;
    msg.lon = 0.303155087226;
    msg.depth = 163U;
    msg.speed = 0.466199715641;
    msg.psi = 0.071830049934;

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
    msg.setTimeStamp(0.222901689159);
    msg.setSource(31652U);
    msg.setSourceEntity(5U);
    msg.setDestination(23310U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.0747709091039;
    msg.lon = 0.676728197904;
    msg.depth = 104U;
    msg.speed = 0.903298233607;
    msg.psi = 0.891713761368;

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
    msg.setTimeStamp(0.167792919168);
    msg.setSource(8702U);
    msg.setSourceEntity(206U);
    msg.setDestination(11023U);
    msg.setDestinationEntity(226U);
    msg.label.assign("UKFGKAHCHYKZMVEXEXXUSGBPAWGRQKJFYMIRBJRMYSEAHXEPODRTEYZOSEURLSXZMWVMSTMBDSIDLKQDQFXGVOPBOVQRFWVHLRJJAIIVDHUDCXKWIOLOHJDAQBJBWSPPXJYKZFZNKFVAGFUJMDGXBYCCWWIRAIQOCLZBEQIANTTWMOTRZVGTGVRKMJUONLLTGWUPHEBJCNXHPGPPUFYF");
    msg.lat = 0.136851871101;
    msg.lon = 0.594460651619;
    msg.z = 0.252998506443;
    msg.z_units = 57U;
    msg.cog = 0.383417225805;
    msg.sog = 0.08796345693;

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
    msg.setTimeStamp(0.704410912093);
    msg.setSource(44546U);
    msg.setSourceEntity(115U);
    msg.setDestination(56282U);
    msg.setDestinationEntity(111U);
    msg.label.assign("IMSVVPQWXUDCIJSHGEFJNCGRLBLCSGZRBOSJBEIUGEFXNXWLEWGFUJZVIWEMJOUNSEAKQTDMVGHN");
    msg.lat = 0.0775437577466;
    msg.lon = 0.947884815045;
    msg.z = 0.602531568075;
    msg.z_units = 188U;
    msg.cog = 0.107336040743;
    msg.sog = 0.0454797232296;

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
    msg.setTimeStamp(0.549612001254);
    msg.setSource(12578U);
    msg.setSourceEntity(177U);
    msg.setDestination(7748U);
    msg.setDestinationEntity(12U);
    msg.label.assign("SSZPBXYWKNFMLPUIOAQKMBCGKWVMIUFRELARAWUDHNATYDNZKGYQVDUHPJERISZNUAPHHJXQGSGEYSJDSKZKBDJJZFSTLMIRGMOJOZQVROQTXYNJFDEZ");
    msg.lat = 0.0033462256149;
    msg.lon = 0.72021795453;
    msg.z = 0.438317290314;
    msg.z_units = 193U;
    msg.cog = 0.589617779929;
    msg.sog = 0.190172261917;

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
    msg.setTimeStamp(0.76195020346);
    msg.setSource(59626U);
    msg.setSourceEntity(197U);
    msg.setDestination(14194U);
    msg.setDestinationEntity(36U);
    msg.name.assign("TSJNMYOIOQMSYQLZQBJSVRUAGENKOXZVNOSREKCBAIKAOKXDEGWQQUPULMFIEOEFZPSSVMQJMDUAFWODGNWXCSCWGCMYBYYRBOPFJC");
    msg.value.assign("VHGZEBJLMNCXBQBHXPGHIOHJRLDYRAUXWJSFGNLMQZPEMBFHNIVCXSDIFWNJRKZRWFLYTCJCPALAEKYYUQAFGACGMGQVZJTNQKVTYFOMSCRKOKVYVQOJECKBEZKUEUOHPDQBNTJWEFCUUDPHORMSZUMSYXTYRWXUG");

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
    msg.setTimeStamp(0.110116403063);
    msg.setSource(34059U);
    msg.setSourceEntity(145U);
    msg.setDestination(160U);
    msg.setDestinationEntity(220U);
    msg.name.assign("RFJFMZNEHTOUVHDDAXGYZREYUTQPAPYLSNNXQBAIFWQRILOSWOSZBWQXFJMOQAFDHJWEHWVIMQEKNSTJNQ");
    msg.value.assign("APHIRTQBRMDWZJKMRUSVKWOZAHGMHUGCYDJIPIBGROSUQPXVYNUSBXPBYQOCXUTPVTIPAIJLEEBVWDDKWFGSRTNQWQPSZQBAWZGXELSJRPMDHMQTRJCIZEAVOFXTQOWKRKNLENFGCJUOIKNZT");

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
    msg.setTimeStamp(0.429079928523);
    msg.setSource(29513U);
    msg.setSourceEntity(252U);
    msg.setDestination(39088U);
    msg.setDestinationEntity(111U);
    msg.name.assign("VRADNXDUOENYOGHPQXDTBMNRWUVRFLPOQGGVBHIWCUZYKRWRCUEOVESOKJCZQXDZTDSSJHMNVQNNJZLFOLAVZEETNTKZS");
    msg.value.assign("AKEXULWTCQHXOETCCYZPEAOGDUODGDGOFGYUVPVVNVOHPQNKHABBWQVVYFNKFGXLZOPWJQIRZHPAMESMEXAFKPZJXGMBMKFQSXFKRISUNQRTZWNLOVEINRFKTUPPQJXNUOHDBMZFJAETABSCAUJKGTWECXIMSDDKOYIURJRIKUUTWHBCXOIHEZWQLGCHILJLCHGIBWRCYPBCYMLFZBJAXZYZVMFSI");

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
    msg.setTimeStamp(0.542615568166);
    msg.setSource(33781U);
    msg.setSourceEntity(249U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(214U);
    msg.name.assign("YAXHKIQKRFVSFQUMMRSAUVSRPJRCCJQDOXGSWQYLLCAVKNHQYQZBBNHYILBMOIAQEBCMMJUNZRPAVCLXNSYKISYJAELXLAGLWXZLPFGOKCEKUHDHHAPEGSNJMGTZC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ISVEKDYITAIMDBHQOPJMZSEAZTTEXGRFXQPILUMQZBNSZMCQIDF");
    tmp_msg_0.value.assign("MCLCBXVRAQQKZTBPVNMTQPPGFIRFSLUFXCICSZLAJNNCFMEKQRRRSQNILZYUGXMYKJIWZRAEESBOJEIARHUHVXGPOPSXBMFGFQBSNOLKRVGF");
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
    msg.setTimeStamp(0.398257495838);
    msg.setSource(61952U);
    msg.setSourceEntity(148U);
    msg.setDestination(61467U);
    msg.setDestinationEntity(19U);
    msg.name.assign("BVQWDPCIUXQMXIFYUVNQQBZWSNBMIYGJHBNQVXMSNXAZPRBYCEYBFKVVVHXLGGXOJWCOHNDNAEEYOGZTPCWTVVUZLOAIJDDFYLMDBJPZCKNTECQVIZSU");

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
    msg.setTimeStamp(0.937792434879);
    msg.setSource(59496U);
    msg.setSourceEntity(147U);
    msg.setDestination(62151U);
    msg.setDestinationEntity(44U);
    msg.name.assign("OPGFATFQCVRWKDKLRXEOBOJVGWESXTBMVSDLDLHBHHLGNTIYUZXMPDETDJKJZGIFEZVMNOAYXHUPWQWNHHTJZMDCSLIXBKFIQXMQBFOKKINZGIELTOCMXBWTVABHFAUCMRPEC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("REEYUAKIARRBCPXAKJNWJJWQZQIOVIDXITUUDZMKFCYOEDUBWMLSEHXEUYLQRGGGAATVLWHMMVZOZGKXCFFODGYXQQEBPIDPQBKREHHGHZWXMYLKLQHARALBTIDOBJDFYNUAPRNDLIZFCGONPVSMJJCJREEQINV");
    tmp_msg_0.value.assign("TMGEJSIMYTQPEHSJFWRKTSXLHGDRMRRBLBBJERVVEHNINUDOCWLBQUEOHEYKMWXSJBGHYAPXNNWDEQCVDABCOOTKQSYDGITLAUAMPFWRNOVALZZDLFEPSSLKGVJMPDXRAGGXCJFNTQCAUBUZKXIOWZRCPZYUUPYYXTKJHATIMGPHFOLIJDKOUZCLHDPXVBJINQYFDKVBHGUVSYOKNQZAYZFCEJMTFQMRVIZPWRX");
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
    msg.setTimeStamp(0.314674081381);
    msg.setSource(63632U);
    msg.setSourceEntity(2U);
    msg.setDestination(38087U);
    msg.setDestinationEntity(101U);
    msg.name.assign("OKFEDSUUXEYKXEELODVPXOIJ");
    msg.visibility.assign("IMWXEYJTXEXCGGRWJJDUXHDYCWNBPBIKFGNEGRUKNZNPHZCVFXKNBXHODDKUIKUZMVZFMPUTOCGFMYYTLJOZBXFHVHIYQVBYRUJCO");
    msg.scope.assign("HSFZYPPMKNLURQVMRGLAISUYHWLNVJHEJLMBITEBJSFDQSQXKETOXHYZPVADNTXYWUFOUSHNEAUWBOWQUXMOAHQAVDREMXSSQEDCLFJRYYQWAUPJGLEZGSVTRPKVMGNBZCRJNIIYGBNVFEZWYJGEANDFZIPRZULKNQZXBKMGLTXRWWKTBSFITPSFXGH");

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
    msg.setTimeStamp(0.460839151858);
    msg.setSource(21111U);
    msg.setSourceEntity(180U);
    msg.setDestination(51983U);
    msg.setDestinationEntity(157U);
    msg.name.assign("LHDHCKQWZYUAGVRELZEUXEUILIDZAQPGKFEXOTECMRMSJMXSFPWDNFJCTTYKRNDRFAQQYMDPJNYNNSACROJVUJBCXLFENXMGIYHKFHATUGLDGSFEWJDCAZOGJRRWUVAKGLNFVZXLTQOHWYJQFEKJCIHOXQPPHADNSOVKIYBSYORQVOWBVWNGHTUBGNMWBLKKZVPHRBAEPGWXOLXRPMSKZIDVCSTMZS");
    msg.visibility.assign("CTUJMGQBAJMLNEROZYZZLDYVWZEGNHIKFBAATBJCDTHSEHCKDHWIAIPZKRJVBXOUTNSNGBPETESPRHKUQZRKEGQIGZQ");
    msg.scope.assign("SQYIGNQNZRGWYWJLHCPQYID");

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
    msg.setTimeStamp(0.829269028909);
    msg.setSource(63204U);
    msg.setSourceEntity(129U);
    msg.setDestination(13586U);
    msg.setDestinationEntity(43U);
    msg.name.assign("TKWEGVKUYHZKKMMLNCVRGKSIOZLUGBQQBVWDSHYPAQTSPHGCPTNZNOYGNMSFSMXMRACLARDCBPDCKBSGJFDSIEFXIUTUVALI");
    msg.visibility.assign("FNBNHOMYMKTDTQFTEZCRTJRVXUNXSDIPKIIMUSRRJJBCOJFJWSSGCKQHZAEONNQPXHSPRZUMO");
    msg.scope.assign("GSGPSJHBNJEUKSPWWDGZVCKWWFTLYOGSNNPJQAVVPVGYNZSAWTRFODLMNJCXESSQIQCXOAZVHGWVFVUTHNTHWRRRUWHMVDEYAKMBJKEZF");

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
    msg.setTimeStamp(0.542557451308);
    msg.setSource(50909U);
    msg.setSourceEntity(167U);
    msg.setDestination(37976U);
    msg.setDestinationEntity(174U);
    msg.name.assign("CXBRDCZFPBBSDLUUYTXZZEHQGRBEGKRGDWEYKMCLTZXHFQTVYMOFMSAJDHJSADHARENXPMYCTVOFPLCKFXWDOFUPAYNBUYJVKZNTHOUSVFQNACKLJKATUEVADXOIVELVGCXTV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ENEAOBTKICXVPVVRFYCFLULELWYOSOSTXVCSPRZYBVTLCRXKTBZXBOCIWWCFDZKFMZVUHWQJFGJDJKASUNMLTEKYCRJDIZNABMQ");
    tmp_msg_0.value.assign("SRWECKIQGGZUDBPZIGOQLDKDULXYLLFCJYKTRINSCZHTCWVTZFCFKZLYEWXYAWYUZDTNWCWTAHAJXILVDBIPHNGFREYQKBKFOAWVHZAJFLJGXGEQABKXPOJMPQXUCRPTPMKOHXSVPRNHSOOEJTJSIADWIVVUAI");
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
    msg.setTimeStamp(0.74280933877);
    msg.setSource(64856U);
    msg.setSourceEntity(16U);
    msg.setDestination(4756U);
    msg.setDestinationEntity(195U);
    msg.name.assign("DRXWAVMIAZKGSEIFQAHOYVUT");

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
    msg.setTimeStamp(0.0428891732583);
    msg.setSource(18532U);
    msg.setSourceEntity(38U);
    msg.setDestination(19398U);
    msg.setDestinationEntity(66U);
    msg.name.assign("OLEOOIQHGSJMSGVQSCDGDPU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SQISOCOKWAYCGVLJMMJARVTQRMVHDFXCLHFWWOEBNUYHLFSBHGSLCPOKSGPPPSUTRJWUWILVWXYIOECINXCTNQLTLDBADMJEMYPQMEIVWQKSHQBJBZIAUXTHAFWAXNTIJFUANORJQUYOGYEVXNXDPBGVCZCNZRTDOREIPTGOZRGQKUUCZJERLEFTR");
    tmp_msg_0.value.assign("BBDCWOJMHEMPXFOKAODEUGZJCVJFHWHRTXLTFZRMNAJPFSMORMKSEZVGQQKEFAKXNYXZRQPYDPVIFUCBCGZMPSBEGIGKEQWGRIHQCUFRGVRTLLTIPHXZCLKDTKGNUIEAIEPYOJRZXUGBXQWTWAUSNLNOKBPIAUSHXJWUQACIICKYHDMMDUJBQLVNOSSQDCZLPBRNPSATYYYLFHUBAXVDZIJTWZYTGFMWCDEKFHLJWYOSEVOXOMVVN");
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
    msg.setTimeStamp(0.196484513876);
    msg.setSource(29339U);
    msg.setSourceEntity(176U);
    msg.setDestination(57678U);
    msg.setDestinationEntity(206U);
    msg.name.assign("ELPNJPMLBEXNLHDFJYBMWRNXWCNPNLIANIRYMCHORGWUCSUAFSKZZIUXWPBHVWMMPADHJEZSFOOAEXANVOSBKPFEUWETDVOEHHYUVALGEQPTZXYKIYFBMLELCTADTJCUJRXWHDDIZBWSRRFTOGBKTKTHWKKRYZKUDQDOVJZTGKQLGJFNPUNHDQBJGJHZVVUZCQEQQMCSFQZTXFKVGMIXIIROY");

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
    msg.setTimeStamp(0.191439928866);
    msg.setSource(56200U);
    msg.setSourceEntity(107U);
    msg.setDestination(40476U);
    msg.setDestinationEntity(170U);
    msg.name.assign("OQZXGGTRKULDVJWXRAHCWILWPUPLEEIELGFCTTHVYBWHDXLVSGKHUKMUCKJHFMQCEJBHRFJRSLDEBFFEZQYYWTKWKGMCZNICKEWMPONBNTNMHPNWKUSQHYOEAPFBWLYIBBJTRBQZKKVRJZ");

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
    msg.setTimeStamp(0.90146906469);
    msg.setSource(19206U);
    msg.setSourceEntity(216U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(81U);
    msg.name.assign("PBZEGDWKDQDHBTPWGYXMAGDHKWGAJNLTFLGRTHHDZYIDUPQMWQFABQIUSQXXAWZYFATWBLVQVWOUBJHRIZZXNDYUNMKEMSRGKUWFSVBJHRKPHQOWXZVMNTZRGOIUMGLECJCFSHARAUSPMJJKIWORXEBFOKYUPNECJMFYPCKZAVIAJSVOKZLSUQRPCELVCMEOBRNPJVHYXTEJTVMCYNLDEIVIENCTZXBD");

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
    msg.setTimeStamp(0.724500563956);
    msg.setSource(64800U);
    msg.setSourceEntity(32U);
    msg.setDestination(63742U);
    msg.setDestinationEntity(161U);
    msg.timeout = 2024399786U;

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
    msg.setTimeStamp(0.241806816579);
    msg.setSource(24743U);
    msg.setSourceEntity(41U);
    msg.setDestination(13547U);
    msg.setDestinationEntity(15U);
    msg.timeout = 2737352907U;

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
    msg.setTimeStamp(0.850005617858);
    msg.setSource(11475U);
    msg.setSourceEntity(91U);
    msg.setDestination(40986U);
    msg.setDestinationEntity(211U);
    msg.timeout = 2563331382U;

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
    msg.setTimeStamp(0.00760852466251);
    msg.setSource(18100U);
    msg.setSourceEntity(212U);
    msg.setDestination(978U);
    msg.setDestinationEntity(248U);
    msg.sessid = 2451078368U;

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
    msg.setTimeStamp(0.472332382416);
    msg.setSource(58453U);
    msg.setSourceEntity(55U);
    msg.setDestination(28484U);
    msg.setDestinationEntity(31U);
    msg.sessid = 4054068985U;

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
    msg.setTimeStamp(0.0160993879256);
    msg.setSource(64091U);
    msg.setSourceEntity(156U);
    msg.setDestination(50049U);
    msg.setDestinationEntity(6U);
    msg.sessid = 1917024185U;

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
    msg.setTimeStamp(0.753914365539);
    msg.setSource(20583U);
    msg.setSourceEntity(91U);
    msg.setDestination(53569U);
    msg.setDestinationEntity(120U);
    msg.sessid = 3688987070U;
    msg.messages.assign("BHFXDUZYNECRXNPEBLXEWTDQNQAQGYIRGTTLGRUMRHEUYFXLSMYOYQJKOLVFNGVMMAHUAGJBXQTAHDHXPESCBNE");

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
    msg.setTimeStamp(0.616519835068);
    msg.setSource(53186U);
    msg.setSourceEntity(175U);
    msg.setDestination(63581U);
    msg.setDestinationEntity(155U);
    msg.sessid = 3528430894U;
    msg.messages.assign("GTZQDBMXWEXZNOVDCMXXWJFBUSMBYFUFKCYXAGZZLBLV");

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
    msg.setTimeStamp(0.356763830099);
    msg.setSource(50191U);
    msg.setSourceEntity(170U);
    msg.setDestination(45159U);
    msg.setDestinationEntity(113U);
    msg.sessid = 3007392535U;
    msg.messages.assign("AJNJIFJZSIDONBHXXYHTMWQICQUXQCWZVWARJURTKSXXUZCQIDGEMJJIBKHNGXANOLGBPLJVGGODOGAVWSQPQCBRFMAQAWRXNOUESFEDLSFWVHLKMDXZLSELFRHNTHTMYWYZDUNHUTIALLRONFHXBVITNVMOUJBSC");

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
    msg.setTimeStamp(0.0972148821149);
    msg.setSource(41277U);
    msg.setSourceEntity(73U);
    msg.setDestination(4892U);
    msg.setDestinationEntity(138U);
    msg.sessid = 1732357456U;

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
    msg.setTimeStamp(0.404280854002);
    msg.setSource(57228U);
    msg.setSourceEntity(173U);
    msg.setDestination(23063U);
    msg.setDestinationEntity(27U);
    msg.sessid = 146365202U;

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
    msg.setTimeStamp(0.0294007186667);
    msg.setSource(36486U);
    msg.setSourceEntity(55U);
    msg.setDestination(8144U);
    msg.setDestinationEntity(48U);
    msg.sessid = 3877830982U;

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
    msg.setTimeStamp(0.919356138846);
    msg.setSource(31574U);
    msg.setSourceEntity(58U);
    msg.setDestination(33956U);
    msg.setDestinationEntity(75U);
    msg.sessid = 1898327281U;
    msg.status = 111U;

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
    msg.setTimeStamp(0.0231312222352);
    msg.setSource(50674U);
    msg.setSourceEntity(73U);
    msg.setDestination(47669U);
    msg.setDestinationEntity(207U);
    msg.sessid = 32532773U;
    msg.status = 211U;

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
    msg.setTimeStamp(0.516763124789);
    msg.setSource(29348U);
    msg.setSourceEntity(161U);
    msg.setDestination(4950U);
    msg.setDestinationEntity(252U);
    msg.sessid = 437684128U;
    msg.status = 178U;

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
    msg.setTimeStamp(0.11135641113);
    msg.setSource(30716U);
    msg.setSourceEntity(209U);
    msg.setDestination(353U);
    msg.setDestinationEntity(36U);
    msg.name.assign("CCLCAFJOMHWXHBMKWMCSQTCBODFOTIPDJZJAZLAFDIYZUOWIEHZTBVOJPAAFADDDEBYRUQNF");

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
    msg.setTimeStamp(0.23795638485);
    msg.setSource(8295U);
    msg.setSourceEntity(69U);
    msg.setDestination(11971U);
    msg.setDestinationEntity(66U);
    msg.name.assign("JSFMWHZHZNETRUKGFPGBQGJEGVXUSPMUOCMUAEIFXGERTBDSTLTYKTCBSJRHZDQCCLMENILUPYLBVWNBVZCJWKLOIOZOYAQETEJQWZXYAMTDVUOAJHIFWKJQHILGXOYKQYYHSRIMHCUUJSTCFSVFSDFXVADKECMBDPWWZOIPARIIHAWNPJRGSCDDQZQOBNRSXBMRHYLZEYOPQXBADTXNKKULNFAPJWVBWXRKMPOLCNHGENFXPMNLT");

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
    msg.setTimeStamp(0.83899401684);
    msg.setSource(12118U);
    msg.setSourceEntity(88U);
    msg.setDestination(9356U);
    msg.setDestinationEntity(35U);
    msg.name.assign("HJITDYMOZEUIFYFGNEUVFDNTYGVCL");

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
    msg.setTimeStamp(0.795993946591);
    msg.setSource(45431U);
    msg.setSourceEntity(204U);
    msg.setDestination(60860U);
    msg.setDestinationEntity(82U);
    msg.name.assign("MCOEVWAQDXXVHCLGQUGQYIQMJGCTJSSLEHKUAXHZYNDEOXFINCYPZGESLBGMHRPSRGNZAVBHPCWQMDWSTLYDCMD");

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
    msg.setTimeStamp(0.240502891606);
    msg.setSource(21025U);
    msg.setSourceEntity(204U);
    msg.setDestination(38489U);
    msg.setDestinationEntity(197U);
    msg.name.assign("WVSVVXRCMYMNMLFTUFPPIJPJUAEAYVHLORKWMSJYCRCDKUEUMTHFTKVBTSBQSJOFNCEQBARTSEHDZLTXIDWRNBGHQLWBTDCPNHUSKZYUYBLWOZPSYXJKIDPQCUMEZTLQFEAGYVVJOFOQJFIXEVD");

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
    msg.setTimeStamp(0.0929746838285);
    msg.setSource(59121U);
    msg.setSourceEntity(253U);
    msg.setDestination(43745U);
    msg.setDestinationEntity(19U);
    msg.name.assign("AHUHPSUWDSVUMDCUELHXIFVQPSIXXST");

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
    msg.setTimeStamp(0.589592008058);
    msg.setSource(260U);
    msg.setSourceEntity(244U);
    msg.setDestination(44824U);
    msg.setDestinationEntity(58U);
    msg.type = 131U;
    msg.error.assign("RUODDVCIHMLNIICSZPOMNXYZHKSWWGWSJHDAITMTIIXQPCBVRKYCZZFFMZOALKJMNXJBJPRVUTUVSWKTQVSPRNJXCFFEYALMSHQGSNEQINYGQILASEXLXUNOZFJLJDWQARLCDMKCXJFDKKYFHGEVCOGADXTRPOKQWUGDHYLWZMFEQWLWNZBYUCGBEEO");

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
    msg.setTimeStamp(0.549128339986);
    msg.setSource(54248U);
    msg.setSourceEntity(138U);
    msg.setDestination(1134U);
    msg.setDestinationEntity(73U);
    msg.type = 35U;
    msg.error.assign("CRUEFVWMNKVIPZYREEYZPRQAKOVPLPANFABVCKLXXUSDMCSLZGUBIIQCRAMCXNPNQJKAOROSCNDBJMEDXQWIYNDKQTGDEAEYDBGEJFINRTSCHGYHMLDIOFGSKXYVXRNVPKFBQTHGWJOQYRKZUWKFHBBHPAJLIG");

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
    msg.setTimeStamp(0.739631543541);
    msg.setSource(43664U);
    msg.setSourceEntity(129U);
    msg.setDestination(21838U);
    msg.setDestinationEntity(145U);
    msg.type = 78U;
    msg.error.assign("XZAPMHTKNFYJIVTEYQILOSKTVGWINGJULKRTJUUSRPCKPFRNOHZSAOPDBZUZTLSPHADQVUGECAHJRRCWTBRTEBWJJPEZMCVNYYSOXGOZDYVWDQXFGRQRMBXPOAOELJIBEQQCMSJDVDWWLFIYZSKDCXVCZULUHMIZJETKPAEI");

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
    msg.setTimeStamp(0.476072459326);
    msg.setSource(54920U);
    msg.setSourceEntity(207U);
    msg.setDestination(40506U);
    msg.setDestinationEntity(115U);
    msg.seq = 39764U;
    msg.sys_dst.assign("LFEIOIYYKHWVDRIIHPHJCSXUKJRSVPEXRSMTKAJRUIQHPEBGZMFSANNTRGGNMKDQZNORBOXHRMABXUZLDLSOIWNBCCQEZZEQFJFJGWAFUODVTSMYYVCYJATPZBGKCUFVTLDNWHPNECZVURYPWDKNLDHZVIOPRASATRWOIHJJHCMBNCTGHILMXYXFBNQVEBBUMGYJTAEYMUVXDSKIZOXFT");
    msg.flags = 188U;
    const char tmp_msg_0[] = {-40, 87, -90, -111, -16, -115, -31, -46, -60, 16, 33, 115, -116, -115, 42, 75, -103, -4, -76, -8, 99, -61, 43, 108, 79, -128, -3, -26, -52, -125, -45, -77, -82, -44, -126, 12, -4, -96, -116, -27, 19, -98, -97, -74, 112, 71, -70, 102, -71, -40, 118, 29, 123, 37, 29, 121, 80, 26, 46, -2, 29, 9, -90, 97, 34, -124, 53, 105, 55, -75, -45, 98, 49, -41, 4, 118, 21, -86, -93, -31, 4, -23, -56, 81, -50, -18, -117, 108, -52, -78, -54, 32, 104, -124, 15, 20, 23, -26, -42, -18, -99, 33, -54, 124, -69, -33, 88, -110, -51, 45, 1, -90, -37, -43, 93, 9, -104, 33, -64, 97, 85, -78, -97, -76, 82, 80, 120, -106, 99, -14, -110, -92, -115, -101, -73, -19, -86, -44, -4, 72, -43, -49, 37, 74, -69, 83, -60, -10, -82, -98, 50, -56, -81, 54, 62, 97, 114, 26, -15, -40, -34, -102, 66, 36, -13};
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
    msg.setTimeStamp(0.558842125995);
    msg.setSource(59761U);
    msg.setSourceEntity(55U);
    msg.setDestination(4123U);
    msg.setDestinationEntity(23U);
    msg.seq = 23393U;
    msg.sys_dst.assign("LVWRFZQZKIPKXVCTQKSHSWWIKNMHUCFJUHSTYZHJHNPKAZEDYAAPLNUJBFCEMXLOICXKSGPANFDNDBVCVUMPQKUZAZVJFOOVQZWBHGQMSNMOFSFLBYDHJNERLRATGVZRHHZOWIWGUYCIRRYIFXYBYPQBONLUPWYQCNTEPFTGWXVDQTBWKWMBGHJKKUASMRECMJOUMJDDGTTCBZAUEPLRTGFGTOLEIEBLSOVVNXJESXAOSDLXQMPJDRECAIIY");
    msg.flags = 48U;
    const char tmp_msg_0[] = {111, -30, -45, -78, -116, 80, 30, -53, -76, -29, -80, 54, 90, 13, 107, -41, 94, 13, -65, 110, 65, -121, -48, 126, 88, 101, 36, -58, -37, 71, 3, 118, 15, 119, 116, -76, -56, -7, -22, -9, 50, 83, 87, -71, 5, -59, 28, -67, -21, -86, -87, -126, 8, 13, 19, 87, -102, 10, 32, -83, -127, -51, 55, 51, -1, 96, -5, 24, 11, -112, -68, 68, 26, 26, 29, 107, -30, -71, -94, -85, -32, -84, -46, 90, 91, -58, 69, 51, 7, 120, -13, 6, 25, 95, 71, 75, 25, 58, -76, 39, -116, 13, -87, -76, -59, 91, -126, -115, -112, -116, -1, 8, -36, 109, -24, 125, -46, 109, -78, -36, -16, 89, 92, -101, -1, -98, -124, 38};
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
    msg.setTimeStamp(0.842624828715);
    msg.setSource(45929U);
    msg.setSourceEntity(13U);
    msg.setDestination(45368U);
    msg.setDestinationEntity(70U);
    msg.seq = 60130U;
    msg.sys_dst.assign("SPFMNVNZAUVTGAVADRBEUUXGXGPKBDJUOWZDVBCJMSZJSGTPDQUE");
    msg.flags = 43U;
    const char tmp_msg_0[] = {11, -51, 29, 44, -60, -91, -42, 115, 4, -28, 12, 53, -47, -12, -125, -60, 70, 74, 47, 93, -55, 69, -51, 119, -62, 112, 36, -78, -116, 85, 87, -25, -120, -63, 117, 123, 112, 50, -13, -27, 27, -45, -47, 80, -63, 26, -84, 92, -25, 108, -48, -104, -71, -53, 64, -30, 115, -94, 63, -21, -45, 40, 60, -101, 47, 17, -104, -67, 48, 74, 84, -51, -91, -22, -122, 34, -113, -4, 74, 35, -32, -79, -74, 33, 126, -93, 66, 122, 12, 108, 32, 44, -15, 79, -51, -57, -118, 41, -61, 67, 122, -72, 90, -99, -55, 86, -124, 2, 102, 64, -123, 52, 96, -47, -84, 113, -25, 2, -60, 48, -117, 38, -100, 63, -25, 115, 69, -64, -81, -65, -11, -34, -1, -27, -36, 19, 4, -117, -66, 90, -47, -124, -55, -2, 89, -115, -59, 27, -35, -2, -103, 0, -71, 84, -86, 37, 41, -53, -127, -73, 44, 81, 70, 22, -93, 44, 25, 52, 92, -109, -75, -104, 47, 17, -82, 63, 112, 27, 110, -46, 110, 115, -35, 59, 111, -34, -45, 82, 25, 122, 24, 71, 90, -47, 67, -14, 41, -9, 18, -111, 80, 108, 101, -128, -115, 21, -108, -126, 123, 48, 26, -13, -91, -53, 16, 56, -17};
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
    msg.setTimeStamp(0.530766445633);
    msg.setSource(49452U);
    msg.setSourceEntity(44U);
    msg.setDestination(9708U);
    msg.setDestinationEntity(68U);
    msg.sys_src.assign("AGIKNMSSHOQEPEUQFYGQAOMKVLFKMEGIBFZADAMDDTYCCOMYRPTBXBHQCSFROUHGIAAWBHOSIJYTRDVYXLJVXOXNJVVLBPECHPYEXRUOSNIZPIFFA");
    msg.sys_dst.assign("KAEGUVWYXGALNQUQVRMHOZICVSXDZXJDFXCCPSGEYTLDYECQZRNUWDNEAKIADEBHCZAXPWYXPSBULUCBVJRMSDJZVCYLWUDBFCBINQISOLSHQMWOMTJZIGXQCUPPXHHMUQJIRAEFKUZKWUQSJNQOAGLSMFJVGBFKSHBAOVYQVXGTJFHOFTIOPBKPGTFLKHDEGYZ");
    msg.flags = 5U;
    const char tmp_msg_0[] = {-78, 101, -16, 99, 97, 103, 44, -115, 69, -39, 102, 2, 37, -124, 15, 45, -87, 77, 44, -58, -81, 57, -37, -9, -82, -66, 120, 32, 72, 42, 26, -109, -85, 88, 49, 107, 12, -97, 101, -126, 63, -77, 16, 82, 59, -121, -19, 54, -85, 81, 68, 44, 87, -40, -105, -34, 98, 65, 104, -103, 64, 18, 117, 99, 30, -22, -46, 42, 35, -3, 102, -104, 12, 36, 26, 110, 15, -90, 37, -5, -117, -13, -47, 48, 29, 41, 33, 49, -9, -96, -26, -101, 69, 27, -86, 125, 14, -9, -116, -51, -24, -44, -88, -2};
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
    msg.setTimeStamp(0.932063333356);
    msg.setSource(22243U);
    msg.setSourceEntity(143U);
    msg.setDestination(19924U);
    msg.setDestinationEntity(112U);
    msg.sys_src.assign("JXDVCPQETZRSWVGVOGEHTHCENHOYALXCBUFWKLZCMUIPNXXWTSQWIFZMJBYWBMEFZVYLRLNQTVKHITDHPMMUUAQHTDKGUDJMLOCCTKYBBJJQSAITCSKSEVJGEOEUBNENXNLFYZNNOYUKCGDLPYEDTGRYMFEQWJRWVBAQPLYRRBMWAQYPIFGOFMDAZXGOZISOPILJVXGUOJXARDSVPHLXRCJCZFHQSSVFKPHKNBTNPZHRDIDGWAWAOXU");
    msg.sys_dst.assign("FOAXSIGRZXINGYIHMQQTMENAXJMHZSHBCWPMGZITTQUDLIREXJCNFKSWAJLEBKXJLPHLCWRSEAXVEFZAQHBNQLJQJLAKSWNGODEDHCYIXVGTKPFWDFZBSSUYGYTIVMGYPZDPNWWDQABAJLSABTURPUVEMRCMUMOIIHXTNGFNOVHYVOVZKOEWJNZJUGBCXRUDYDSVCNHZALKHQVQRVFTRUJTRYIBDUKGORZWPFKXPU");
    msg.flags = 202U;
    const char tmp_msg_0[] = {83, 111, -106, -102, -38, 64, -81, 33, -5, -78, 106, -26, -126, -126, -20, -85, -99, 85, 10, 25, 75, -49, -30, 8, -56, 93, -114, 120, 76, -128, 45, -36, -42, -34, 121, -77, -64, 34, -50, -4, 119, 48, -54, 33, 26, 10, -101};
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
    msg.setTimeStamp(0.951386111454);
    msg.setSource(58234U);
    msg.setSourceEntity(98U);
    msg.setDestination(55930U);
    msg.setDestinationEntity(1U);
    msg.sys_src.assign("FTZBDOJWJOFGGGRXJGLMVLXERMAXCUSRNIWYJAVMFGHSNFZNGLCHKTNDNTYIIDYQBMPSKUBZDJRBFDPSTPOXUBACCHMQXVVKZXLIDRQFIIO");
    msg.sys_dst.assign("OFDZBSJZTDQVPRQCDIMJXKDICMENQQJVWTNKOZY");
    msg.flags = 128U;
    const char tmp_msg_0[] = {-98, 60, -108, 114, -42, 12, -77, -64, 12, 55, -103, -117, 48, -18, 78, 9, -6, 12, 2, -92, -118, 82, 5, -100, 49, -63, -76, -107, 6, 11, 77, -86, -40, -73, -22, -95, -7, 81, 30, 25, -57, 25, -38, -76, -5, -18, 19, 100, -101, -76, -124, 123, -61, -10, -13, -87, 89, -40, -32, 66, -110, -109, 125, -106, -108, 59, -2, 110, 126, -58, -90, -100, -41, 5, -46, 59, -15, -35, 120, -22, -84, 60, 122, -38, -52, 108, -98, -14, 59, -53, 87, -25, 50, 124, -119, 50, 62, 42, -89, 30, 113, -110, 3, -62, -101, -66, -83, 94};
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
    msg.setTimeStamp(0.848437443909);
    msg.setSource(49219U);
    msg.setSourceEntity(222U);
    msg.setDestination(53979U);
    msg.setDestinationEntity(186U);
    msg.seq = 6788U;
    msg.value = 157U;
    msg.error.assign("KLRFEVSPBKKDCAAFGBZRGRUFAOGACKGWYPJBTXCQWMWQEYVETHWJSYSRLDLNQUIKPQAINOKZMBHJMZWPFHMLYCXRRQNVKXPTIDHTWPWEXNATZVZDENFXNOMNDHEHIBHDUVHQIVYWCULXXJYSUPERSOJCRIGIGLWATMOSFDKJAACPTEFYASZQDOLHIECMZIYBRUJKVUGBEYFXFOQO");

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
    msg.setTimeStamp(0.142148829361);
    msg.setSource(49603U);
    msg.setSourceEntity(64U);
    msg.setDestination(16672U);
    msg.setDestinationEntity(91U);
    msg.seq = 14287U;
    msg.value = 14U;
    msg.error.assign("FTCTFQPFCFDXZSRGNKBYYBXQUYZCTLROPSNLAFTJWGTKXBOCEOGOWNJAQJRWQSQYPYLPMTXNTQGYLVDZAQJBDDXUS");

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
    msg.setTimeStamp(0.774133102613);
    msg.setSource(19225U);
    msg.setSourceEntity(213U);
    msg.setDestination(50225U);
    msg.setDestinationEntity(234U);
    msg.seq = 17105U;
    msg.value = 190U;
    msg.error.assign("SMOMHEJNMDHMWKCUSLXEAAXBJSGHJNPDXADXZZAHSUNGBCHLFBODRWFGXLPUCYDZKPQTPJQPRKSVWJPHUERFQUVAQHNTUVBHBJWIEXGTDMNQDGCKOIRVLOORYTMWCXAEUN");

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
    msg.setTimeStamp(0.0702340269586);
    msg.setSource(57200U);
    msg.setSourceEntity(168U);
    msg.setDestination(7598U);
    msg.setDestinationEntity(18U);
    msg.seq = 6086U;
    msg.sys.assign("XOAHSZYOCIZUJWGXEHS");
    msg.value = 0.815627575139;

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
    msg.setTimeStamp(0.385660093093);
    msg.setSource(4582U);
    msg.setSourceEntity(1U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(105U);
    msg.seq = 44227U;
    msg.sys.assign("PGOMAUSWBDHNVHFZRPKTEZZKXWQOUEEEIGUFHKOXTWJSTDATUUGAYDNZRNTQXWQLROERSDIYRSOGOPPSQVAZNNDHYCDRJGIBZFMWCMAHAQELTBAWJUVPBMMIPLKDLRJQVXHZFBVUULKEKFJVJYMDXXPVJCXXZIJYSYGLZQGQJEKPYHBKOFGRIAWLNNCVXSLMYQAUFCWMRWFCTDSFNHBNQNTICORHGMLBCVVYJDCXYPPSCUEFEBW");
    msg.value = 0.145089202039;

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
    msg.setTimeStamp(0.558891542795);
    msg.setSource(2559U);
    msg.setSourceEntity(114U);
    msg.setDestination(1663U);
    msg.setDestinationEntity(147U);
    msg.seq = 53450U;
    msg.sys.assign("NMMLATWQMKLAJDPXFQYNVVLHIUCXDLUWYVXDFNYAEBXUYCZZIJGEWCDEGHTSBCKRENTJWLYVSPRSQNCOAIQZHWMBOIZTIWEUPTKMCXCSNPFOTKATJLHBKTXLWXDSGQD");
    msg.value = 0.808079299718;

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
    msg.setTimeStamp(0.901900887192);
    msg.setSource(58U);
    msg.setSourceEntity(204U);
    msg.setDestination(10233U);
    msg.setDestinationEntity(17U);
    msg.action = 219U;
    msg.longain = 0.141764506799;
    msg.latgain = 0.937432194762;
    msg.bondthick = 1794302012U;
    msg.leadgain = 0.574232138608;
    msg.deconflgain = 0.183454825232;

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
    msg.setTimeStamp(0.926494098394);
    msg.setSource(61067U);
    msg.setSourceEntity(6U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(214U);
    msg.action = 210U;
    msg.longain = 0.852735857647;
    msg.latgain = 0.345293752454;
    msg.bondthick = 618341550U;
    msg.leadgain = 0.646236569133;
    msg.deconflgain = 0.729525415562;

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
    msg.setTimeStamp(0.784644422118);
    msg.setSource(8615U);
    msg.setSourceEntity(207U);
    msg.setDestination(51238U);
    msg.setDestinationEntity(146U);
    msg.action = 187U;
    msg.longain = 0.00833620091784;
    msg.latgain = 0.658635398117;
    msg.bondthick = 2122835903U;
    msg.leadgain = 0.166049823555;
    msg.deconflgain = 0.0388750624588;

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
    msg.setTimeStamp(0.0473315310687);
    msg.setSource(24445U);
    msg.setSourceEntity(37U);
    msg.setDestination(518U);
    msg.setDestinationEntity(98U);
    msg.err_mean = 0.697864184786;
    msg.dist_min_abs = 0.0923166203877;
    msg.dist_min_mean = 0.738030803182;

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
    msg.setTimeStamp(0.154565612904);
    msg.setSource(14270U);
    msg.setSourceEntity(246U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(211U);
    msg.err_mean = 0.571391911428;
    msg.dist_min_abs = 0.295776062796;
    msg.dist_min_mean = 0.739676209773;

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
    msg.setTimeStamp(0.137523096076);
    msg.setSource(49517U);
    msg.setSourceEntity(168U);
    msg.setDestination(43232U);
    msg.setDestinationEntity(60U);
    msg.err_mean = 0.0307292428851;
    msg.dist_min_abs = 0.0410910364203;
    msg.dist_min_mean = 0.923049044195;

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
    msg.setTimeStamp(0.367347049105);
    msg.setSource(53894U);
    msg.setSourceEntity(56U);
    msg.setDestination(7819U);
    msg.setDestinationEntity(140U);
    msg.action = 159U;
    msg.lon_gain = 0.308397750994;
    msg.lat_gain = 0.86322884849;
    msg.bond_thick = 0.55471195586;
    msg.lead_gain = 0.626910346473;
    msg.deconfl_gain = 0.101036874221;
    msg.accel_switch_gain = 0.0999518778854;
    msg.safe_dist = 0.98536288368;
    msg.deconflict_offset = 0.800740201102;
    msg.accel_safe_margin = 0.652390794701;
    msg.accel_lim_x = 0.589840225424;

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
    msg.setTimeStamp(0.715062910166);
    msg.setSource(32853U);
    msg.setSourceEntity(190U);
    msg.setDestination(49151U);
    msg.setDestinationEntity(234U);
    msg.action = 187U;
    msg.lon_gain = 0.175289028585;
    msg.lat_gain = 0.490341714814;
    msg.bond_thick = 0.874935711446;
    msg.lead_gain = 0.768046620348;
    msg.deconfl_gain = 0.0118564426045;
    msg.accel_switch_gain = 0.0324764174486;
    msg.safe_dist = 0.247884340666;
    msg.deconflict_offset = 0.0971120282198;
    msg.accel_safe_margin = 0.575446530245;
    msg.accel_lim_x = 0.841279785622;

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
    msg.setTimeStamp(0.293532816223);
    msg.setSource(42897U);
    msg.setSourceEntity(0U);
    msg.setDestination(45271U);
    msg.setDestinationEntity(17U);
    msg.action = 34U;
    msg.lon_gain = 0.550439513813;
    msg.lat_gain = 0.680974204183;
    msg.bond_thick = 0.899836417131;
    msg.lead_gain = 0.279368304103;
    msg.deconfl_gain = 0.716009896131;
    msg.accel_switch_gain = 0.862597811269;
    msg.safe_dist = 0.597492062372;
    msg.deconflict_offset = 0.146665495187;
    msg.accel_safe_margin = 0.18895790742;
    msg.accel_lim_x = 0.491162233799;

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
    msg.setTimeStamp(0.187899073069);
    msg.setSource(38989U);
    msg.setSourceEntity(44U);
    msg.setDestination(8846U);
    msg.setDestinationEntity(50U);
    msg.type = 167U;
    msg.op = 45U;
    msg.err_mean = 0.561643556247;
    msg.dist_min_abs = 0.469242238644;
    msg.dist_min_mean = 0.080946238089;
    msg.roll_rate_mean = 0.585495540067;
    msg.time = 0.8643143703;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 44U;
    tmp_msg_0.lon_gain = 0.16189242153;
    tmp_msg_0.lat_gain = 0.354758879357;
    tmp_msg_0.bond_thick = 0.902530864484;
    tmp_msg_0.lead_gain = 0.696503263805;
    tmp_msg_0.deconfl_gain = 0.0222151148075;
    tmp_msg_0.accel_switch_gain = 0.792877814267;
    tmp_msg_0.safe_dist = 0.780595229236;
    tmp_msg_0.deconflict_offset = 0.327015722099;
    tmp_msg_0.accel_safe_margin = 0.776559695672;
    tmp_msg_0.accel_lim_x = 0.30897672521;
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
    msg.setTimeStamp(0.889041376476);
    msg.setSource(60479U);
    msg.setSourceEntity(242U);
    msg.setDestination(45193U);
    msg.setDestinationEntity(67U);
    msg.type = 46U;
    msg.op = 145U;
    msg.err_mean = 0.418579124835;
    msg.dist_min_abs = 0.353541926279;
    msg.dist_min_mean = 0.725688170691;
    msg.roll_rate_mean = 0.769770656072;
    msg.time = 0.932679926226;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 253U;
    tmp_msg_0.lon_gain = 0.247375008873;
    tmp_msg_0.lat_gain = 0.646811926058;
    tmp_msg_0.bond_thick = 0.258265512028;
    tmp_msg_0.lead_gain = 0.618982041718;
    tmp_msg_0.deconfl_gain = 0.226396792083;
    tmp_msg_0.accel_switch_gain = 0.149397919173;
    tmp_msg_0.safe_dist = 0.243819315668;
    tmp_msg_0.deconflict_offset = 0.305460137858;
    tmp_msg_0.accel_safe_margin = 0.393964445111;
    tmp_msg_0.accel_lim_x = 0.602816060623;
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
    msg.setTimeStamp(0.296918454319);
    msg.setSource(64755U);
    msg.setSourceEntity(34U);
    msg.setDestination(10241U);
    msg.setDestinationEntity(109U);
    msg.type = 64U;
    msg.op = 74U;
    msg.err_mean = 0.0549384985412;
    msg.dist_min_abs = 0.213223283197;
    msg.dist_min_mean = 0.606398294454;
    msg.roll_rate_mean = 0.53093884713;
    msg.time = 0.0946719735069;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 182U;
    tmp_msg_0.lon_gain = 0.750304523385;
    tmp_msg_0.lat_gain = 0.572963007282;
    tmp_msg_0.bond_thick = 0.770157972451;
    tmp_msg_0.lead_gain = 0.565327747581;
    tmp_msg_0.deconfl_gain = 0.385215928797;
    tmp_msg_0.accel_switch_gain = 0.530005681992;
    tmp_msg_0.safe_dist = 0.3762130076;
    tmp_msg_0.deconflict_offset = 0.225817151854;
    tmp_msg_0.accel_safe_margin = 0.977304547833;
    tmp_msg_0.accel_lim_x = 0.0515877884305;
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
    msg.setTimeStamp(0.62936468607);
    msg.setSource(33815U);
    msg.setSourceEntity(139U);
    msg.setDestination(51687U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.535134260706;
    msg.lon = 0.116762149384;
    msg.eta = 1410807754U;
    msg.duration = 2734U;

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
    msg.setTimeStamp(0.0402623096479);
    msg.setSource(14407U);
    msg.setSourceEntity(187U);
    msg.setDestination(29741U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.795587741082;
    msg.lon = 0.263536717767;
    msg.eta = 763850693U;
    msg.duration = 30636U;

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
    msg.setTimeStamp(0.701555517803);
    msg.setSource(17342U);
    msg.setSourceEntity(68U);
    msg.setDestination(44726U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.630526207671;
    msg.lon = 0.823840205273;
    msg.eta = 1149424379U;
    msg.duration = 52273U;

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
    msg.setTimeStamp(0.490142892351);
    msg.setSource(28878U);
    msg.setSourceEntity(33U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(125U);
    msg.plan_id = 50586U;

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
    msg.setTimeStamp(0.224499502407);
    msg.setSource(48894U);
    msg.setSourceEntity(181U);
    msg.setDestination(15582U);
    msg.setDestinationEntity(29U);
    msg.plan_id = 27902U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.278440294771;
    tmp_msg_0.lon = 0.968863909701;
    tmp_msg_0.eta = 2217793712U;
    tmp_msg_0.duration = 29854U;
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
    msg.setTimeStamp(0.554387270057);
    msg.setSource(21092U);
    msg.setSourceEntity(16U);
    msg.setDestination(46927U);
    msg.setDestinationEntity(147U);
    msg.plan_id = 47456U;

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
    msg.setTimeStamp(0.7743412314);
    msg.setSource(26979U);
    msg.setSourceEntity(43U);
    msg.setDestination(9812U);
    msg.setDestinationEntity(191U);
    msg.type = 141U;
    msg.command = 73U;
    msg.settings.assign("QAXMMJKTMZALLLNJKMBWLUZRVQYWKDNAAKFSBXVGFRUHRTZRDRJXLMZUDZSTCWOXVIZATXPFDWJQRDAPUOJUSXOLCYCTGRTEQSODQPHYEYFOKFCEJTFVNMBFJXALJSANNOCCYWLPIPILGBLWEGIVCYSAUIGWMHGHTIIZFUZENVPYHVUSMDPEPHBNIRMEVDPQSVKUVKYONGCSEZQWCRQAGKGIOTZQTBCGHPDKHBNFQYEJDN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45456U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QZPAFYBXYJVJCWLVEEYA");

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
    msg.setTimeStamp(0.911529485286);
    msg.setSource(24711U);
    msg.setSourceEntity(84U);
    msg.setDestination(11111U);
    msg.setDestinationEntity(188U);
    msg.type = 167U;
    msg.command = 252U;
    msg.settings.assign("PHTPNCZWWARLAGVPWHRDKVPKIJOEUCLWZPHVKQQXKXMGHMBTNAZFICUYXODOWOZXIQYLJAKAYZGQMRPBVFVWIZGMYCFKKGVHMXBCMSQQOAZVEOAXBESEVDFHJOYRTPJXPBLVRNUCSKLITWSUEBDLLBXNOCJYGZTIFLQNNCS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 52186U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NGEBEJDCPWTOIDVVASLAYISQNXRQIZKSEKFZQJLLDKLJDFMKTUSTRVWYKVRTWESVPNXOHOJKMMQYYRHEXBUILDHZFUWSOBWVMBIZYAVGZQNMDQILUHGTETYRBOQMCAGRLYNKBSHZXWOGCP");

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
    msg.setTimeStamp(0.0322436150433);
    msg.setSource(23495U);
    msg.setSourceEntity(72U);
    msg.setDestination(52869U);
    msg.setDestinationEntity(21U);
    msg.type = 225U;
    msg.command = 47U;
    msg.settings.assign("YXSZXOGVXCYGSOKGRCRHCKDDLUTGBKMEWLANPDECDIWIVNNNMOEDKIUVWIYHHJZJLNVYNHKHCYDQHOAGYFMZWWBJDFPVTUAIZRUXBQKXZBSLAZDCZVTSIQENRY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 26256U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.248866336991;
    tmp_tmp_msg_0_0.lon = 0.250024884118;
    tmp_tmp_msg_0_0.eta = 4022323002U;
    tmp_tmp_msg_0_0.duration = 38633U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OBIDGMNRLPKBITMHIYAAKGFSTOQEUJJMZOZSHJEOUPVCIWSDEUTETGQWEYWWTNYXJLFUOCRYAJZBRRIXBSOXAERGYVTXQIMVHAVRGDCFTJYQEPZIPBQRKWRKXMGHYFMLHOPDNKJMDDXPGXKBUMEQFCPGJ");

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
    msg.setTimeStamp(0.562235719574);
    msg.setSource(40819U);
    msg.setSourceEntity(64U);
    msg.setDestination(37254U);
    msg.setDestinationEntity(227U);
    msg.state = 224U;
    msg.plan_id = 36817U;
    msg.wpt_id = 111U;
    msg.settings_chk = 32893U;

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
    msg.setTimeStamp(0.972801166682);
    msg.setSource(50809U);
    msg.setSourceEntity(134U);
    msg.setDestination(60645U);
    msg.setDestinationEntity(111U);
    msg.state = 196U;
    msg.plan_id = 17539U;
    msg.wpt_id = 98U;
    msg.settings_chk = 23406U;

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
    msg.setTimeStamp(0.401825033711);
    msg.setSource(9922U);
    msg.setSourceEntity(137U);
    msg.setDestination(12367U);
    msg.setDestinationEntity(129U);
    msg.state = 133U;
    msg.plan_id = 14012U;
    msg.wpt_id = 121U;
    msg.settings_chk = 5553U;

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
    msg.setTimeStamp(0.386477495027);
    msg.setSource(18204U);
    msg.setSourceEntity(80U);
    msg.setDestination(43158U);
    msg.setDestinationEntity(110U);
    msg.uid = 46U;
    msg.frag_number = 132U;
    msg.num_frags = 76U;
    const char tmp_msg_0[] = {24, 119, -40, 88, 26, -95, -123, 88, 62, -10, 6, 60, -48, -124, -119, 48, 57, 58, 38, 19, 45, 95, 24, -25, 67, -117, -63, -89, -50, -128, 111, -27, 22, 76, -56, 18, -6, -117, -9, -18, 66, -24, 67, -3, -56, 71, 36, -80, -1, 78, 50, -48, 17, 27, 4, 123, -49, -63, -72, -1, -118, -110, -120, -100, 87, 19, 82, 98, -9, -29, 55, -39, 67, -69, 64, 91, 110, -80, 16, -122, 15, -101, -65, 20, -99, 28, -28, -6, 10, -72, -47, -92, -104, -14, 38, 24, -12, 80, 11, -60, 9, 11, 94, -54, -31, 56, -83, -68, 12, 84, 89, 25, -15, -117, -85, -102, -108, 30, -15, 55, 78, -82, -3, -81, -67, -93, 11, 48, 115, -35, 24, 68, -49, -12, 59, -78, 116, 71, 64, 79, 60, 23, 56, 88, 54, 71, -112, -1, -80, 96, -124, 22, 111, -86, -61, -107, 68, 67, 19, -103, -71, -24, 0, -4, -8, 122, -67, -14, 87, -61, -76, -75, -114, 14, -126, 45, 20, 11, 20, -23, 19, -102, -90, -110, 31, -76, -94, 36, -72, -22, -24, -50, -83, 3, -44, -124, 3, -7, -58, 87, 119, 92, 86, -17, -37, -111, -124, 70, -41, 62, -107, 114, 119, -122, 10, -15, -123, -128};
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
    msg.setTimeStamp(0.164995005477);
    msg.setSource(1045U);
    msg.setSourceEntity(168U);
    msg.setDestination(35572U);
    msg.setDestinationEntity(68U);
    msg.uid = 235U;
    msg.frag_number = 94U;
    msg.num_frags = 36U;
    const char tmp_msg_0[] = {-76, 74, -20, 22, -38, 89, -87, -91, -115, 24, -100, -88, 113, -100, 109, 8, -32, 81, 48, 126, 78, -16, 39, -54, -104, 3, -86, -72, -99, -35, -85, 97, -36, 113, 7, 34, -10, -109, 2, -46, -71, -126, 7, -79, -34, -93, -80, -115, 38, 95, 105, -68, -24, -12, 2, 77, 74, 126, -69, -114, 120, 99, 119, -66, 58, 61, 47, -21, 118, 65, -46, -22, 51, 65, 108, 95, 105, 54, 64, 8, -60, 51, -114, -30, -71, 22, -29, -103, -24, -79, -76, -52, 114, 36, 7, -24, 7, 88, -110, 34, -30, -125, -101, -49, -49, 16, -32, -39, -116, 125, -27, -2, 15, 52, 31, -50, -69, 56, 91, 9, -16, 54, 110, 27, -82, 108, -14, -20, -57, 17, 118, -63, -83, -18, 10, -3, -5, 68, -2, 106, -66, -63, -119, 107, -34, 88, -16, -23, 46, 120, 46, -88, -36, -102, 71, -20, -61, -30, -7, -66, 21, -24, -63, -38, 76, 63, 37, -32, -64, -121, -4, 51, 10};
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
    msg.setTimeStamp(0.219052932867);
    msg.setSource(34060U);
    msg.setSourceEntity(164U);
    msg.setDestination(35747U);
    msg.setDestinationEntity(129U);
    msg.uid = 31U;
    msg.frag_number = 230U;
    msg.num_frags = 203U;
    const char tmp_msg_0[] = {77, -2, 114, 26, -30, -83, -34, 40, -23, 7, 77, -66, 12, 91, 30, 111, -47, 19, 51, -6, 39, -102, 14, 11, -94, 104, 74, 59, 116, -53, 21, -118, 85, 17, 28, -88, -110, -38, -108, 123, -122, 60, -10, -82, -122, -36, 6, 85, -69, -111, 85, -92, 56, -23, -26, -8, 90, 78, 4, -68, -19, -8, -125, -80, -28, 60, -81, 0, 99, 109, 30, 19, 50, 103, 30, 106, 44, 17, -67, -17, -20, 32, 28, 120, 49, 4, 24, -44, 86, -120, 116, 64, 9, 28, 25, -113, -83, 54, 67, -42, 80, 5, -103, 54, 32, 70, -71, -103, -62, 119, -28, -3, -14, 12, -3, 1, 118, -124, -24, 73, 36, 126, -24, 10, 57, -13, 85, 71, -73, -92, -48, -94, -23, -69, -87, -30, 71, -58, 121, 42, 86, 90, -84, -14, 21, 94, 113, -58};
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
    msg.setTimeStamp(0.687066191464);
    msg.setSource(9216U);
    msg.setSourceEntity(48U);
    msg.setDestination(35873U);
    msg.setDestinationEntity(242U);
    msg.content_type.assign("RJXDQRXYDZNPIISSYKHKACMUSOTVSFGIUEMPHCLDCCCNXPUYQMBGBVLCI");
    const char tmp_msg_0[] = {50, 6, 37, 2, -40, 80, 58, 80, 72, -113, 105, -126, 96, 13, 100, -119, -60, 44, 54, -72, 120, 35, -71, 53, -51, 60, 102, 13, -26, 32, -42, 126, 106, -26, -73, 23, 20, 0, -97, -127, -124, -62, -55, -54, -59, 93, 75, -49, -41, 120, -24, 91, 77, 38, 34, 24, 47, 32, 56, 33, 68, -51, -119, 65, 70, 34, 126, -100, 102, 60, -127, 12, -113, 108, 5, 101, 98, -58, 123, -124, -78, 27, -26, 7, -95, 28, 74, 91, 55, 23, -56, 104, -117, -121, 45, 25, -41, -52, -3, -86, -4, -5, -107, 4, 7, -110, -112, -116, -13, -74, 123, 108, -37, -89};
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
    msg.setTimeStamp(0.910101856494);
    msg.setSource(46540U);
    msg.setSourceEntity(136U);
    msg.setDestination(56693U);
    msg.setDestinationEntity(153U);
    msg.content_type.assign("QLHYTDHHJGLCEODMFHRZLJJFEJLBCUWONZWIPWCSKPXMKFJYGSCTTYQXEQESPNYASWDEGFTREWNTQVKXILUXWZOLVUMSYYGNROFBEXCIBHDALLXRIVOEHVCAVABX");
    const char tmp_msg_0[] = {-98, 25, -104, 96, 60, -44, -59, -106, -16, -2, 100, -111, 53, 104, 63, -8, 104, 122, 71, -44, -75, -84, 17, 21, -126, -36, -36, -85, -43, 18, 103, -45, 10, 43, 122, -119, 49};
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
    msg.setTimeStamp(0.37832968194);
    msg.setSource(25385U);
    msg.setSourceEntity(203U);
    msg.setDestination(14527U);
    msg.setDestinationEntity(253U);
    msg.content_type.assign("XLZFGFRYTFDDREHZECLECJBWOSLUZMAWQSZWYAOHVYSXBHHFTOKHBQDI");
    const char tmp_msg_0[] = {-109, 126, 105, 59, 70, -117, 53, -112, 66, 72, 107, 35, 6, -121, 65, 54, -24, -75, -118, 21, 34, 91, -55, 61, -107, -21, -21, 17, 91, 110, 125, 37, -79, -54, 104, 11, 3, 34, 64, 123, -77, 42, 74, 122, -107, -71, -96, 108, 81, 37, -86, 96, 16, 49, -60, -37, 91, 126, 23, -28, 69, -53, -7, -27, -110, 113, -66, -43, 126, 120, -56, -68, -53, 28, 97, 30, -54, 108, 69, -58, -4, -8, -87, -71, 85, 83, 55, 73, 111, 59, 49, 113, -34, 54, -25, -96, 29, -85, 102, -24, 111, -103, 30, 87, 102, -52, 32, 82, 101, -128, 27, 126, -76, 88, 46, 63, 115, -12, -28, 73, -110, -74, 107, -39, -87, -57, -100, -78, 59, 34, -25, 48, -108, -77, -64, -58, -50, -50, -14, -31, 40, -61, -101, -93, 66, 50, -18, -29, 26, 33, -70, 35, -126, -78, 19, 106, -48, -17, 8, 104, -24, 68, 54, 53, 60, -75, -44, 18, 23, 126, 83, 90, 86, -20, -90, -1, 75, -3, -16, -63, 69, -9, -70, -50, 77, 35, 28, -47, 121, -67, -34, -3, 40, 106, 76, -64, 112, -2, 73};
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
    msg.setTimeStamp(0.51985261201);
    msg.setSource(52503U);
    msg.setSourceEntity(51U);
    msg.setDestination(3497U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.0370207775152);
    msg.setSource(3444U);
    msg.setSourceEntity(165U);
    msg.setDestination(53719U);
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
    msg.setTimeStamp(0.681328301515);
    msg.setSource(703U);
    msg.setSourceEntity(162U);
    msg.setDestination(20386U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.852644591094);
    msg.setSource(29921U);
    msg.setSourceEntity(225U);
    msg.setDestination(27473U);
    msg.setDestinationEntity(152U);
    msg.target = 50463U;
    msg.bearing = 0.810483224664;
    msg.elevation = 0.515396898472;

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
    msg.setTimeStamp(0.876189322219);
    msg.setSource(40628U);
    msg.setSourceEntity(112U);
    msg.setDestination(42258U);
    msg.setDestinationEntity(134U);
    msg.target = 54252U;
    msg.bearing = 0.246830582365;
    msg.elevation = 0.373066063331;

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
    msg.setTimeStamp(0.141811314809);
    msg.setSource(50869U);
    msg.setSourceEntity(248U);
    msg.setDestination(54383U);
    msg.setDestinationEntity(64U);
    msg.target = 50596U;
    msg.bearing = 0.76620146161;
    msg.elevation = 0.553234341373;

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
    msg.setTimeStamp(0.261555143201);
    msg.setSource(18345U);
    msg.setSourceEntity(15U);
    msg.setDestination(31959U);
    msg.setDestinationEntity(77U);
    msg.target = 30524U;
    msg.x = 0.734682836322;
    msg.y = 0.927164698439;
    msg.z = 0.959349998164;

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
    msg.setTimeStamp(0.034088602457);
    msg.setSource(4699U);
    msg.setSourceEntity(222U);
    msg.setDestination(49192U);
    msg.setDestinationEntity(10U);
    msg.target = 25501U;
    msg.x = 0.807381903997;
    msg.y = 0.727488793086;
    msg.z = 0.609311402305;

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
    msg.setTimeStamp(0.796686830838);
    msg.setSource(18912U);
    msg.setSourceEntity(12U);
    msg.setDestination(22415U);
    msg.setDestinationEntity(15U);
    msg.target = 64171U;
    msg.x = 0.490463134232;
    msg.y = 0.564066481373;
    msg.z = 0.637397058452;

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
    msg.setTimeStamp(0.333983411263);
    msg.setSource(56877U);
    msg.setSourceEntity(30U);
    msg.setDestination(2256U);
    msg.setDestinationEntity(91U);
    msg.target = 44815U;
    msg.lat = 0.462154346634;
    msg.lon = 0.623044268917;
    msg.z_units = 86U;
    msg.z = 0.805614084584;

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
    msg.setTimeStamp(0.745021056471);
    msg.setSource(12077U);
    msg.setSourceEntity(190U);
    msg.setDestination(2251U);
    msg.setDestinationEntity(192U);
    msg.target = 30289U;
    msg.lat = 0.443610638303;
    msg.lon = 0.448749268398;
    msg.z_units = 130U;
    msg.z = 0.247577873359;

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
    msg.setTimeStamp(0.355683808013);
    msg.setSource(56684U);
    msg.setSourceEntity(106U);
    msg.setDestination(63098U);
    msg.setDestinationEntity(142U);
    msg.target = 30874U;
    msg.lat = 0.518019077827;
    msg.lon = 0.205525375509;
    msg.z_units = 92U;
    msg.z = 0.0489668235822;

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
    msg.setTimeStamp(0.00774745136986);
    msg.setSource(35455U);
    msg.setSourceEntity(42U);
    msg.setDestination(49986U);
    msg.setDestinationEntity(18U);
    msg.locale.assign("LYSCNNRFYZGEFGTQYKDJHGIZRDTGJIJAIHGKEVAEIDUIUQUORQUSCMGJD");
    const char tmp_msg_0[] = {94, -64, -87, -5, 122, -10, 99, 59, -123, 52, 116, 15, -69, -3, -76, -21, -5, 98, -83, 97, 113, 62, 113, -81, 90, 41, -113, 101, 75, -23, 56, -42, 2, -28, 8, 27, 46, -125, -53, 59, 116, 71, 56, 45, 101, 114, 72, -40, -14, 101, -12, 46, -13, -95, -76, -26, -109, 19, 9, 49, 85, -108, -26, 14, -85, -106, 22, 28};
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
    msg.setTimeStamp(0.623128533767);
    msg.setSource(15273U);
    msg.setSourceEntity(145U);
    msg.setDestination(22673U);
    msg.setDestinationEntity(108U);
    msg.locale.assign("DBZDNSHYQHCSJGRK");
    const char tmp_msg_0[] = {5, -109, -70, 4, -65, -101, -89, -60, -88, 72, -18, -60, 21, -99, -16, 8, -93, 71, -105, -105, 2, -43, -104, 94, 100, -59, -61, -64, 98, -33, 27, -49, 1, -33, -108, 87, -124, 111, -103, 57, 75, 78, 36, -39, 2, -90, 110, -17, -120, -105, -50, 114, -19, 107, -115, 5, 39, -56, -35, -43, -26, -87, -14, -110, -101, -15, 108, 55, -10, 37, -73, -42, -63, -77, -115, 99, -57, 4, -92, 17, 55, 57, -107, 15, 46, 57, -10, 121, 78, -84, 65, -103, -116, -53, 80, 83, -65, 84, -63, 62, 95, -42, 35, -50, -119, -73, -81, -58, 81, -119, -23, -83, 77, -87, -79, -19, 68, -53, 26, 48, 20, -1, -39, -63, 38, -76, -38, 32, 56, 83, 38, 97, 28, -103, 38, 16, -121, -119, 38, 32, 42, -120, -103, -32, 74, 73, -65, 84, -10, -51, -127, -121, -114, -50, -109, 35, -66, 30, -60, -38, 16, -104, -13, 60, 93, -127, 24, 109, 17, 13, -45, 63, 9, -19, -87, -43, -100, -117, 55, 71, 69, -42, 72, 3, -111, 15, 107, 14, 74, -48, -82, 71, 23, 61, -69, 79, 2, 85, -120, 66, -33, -75, -128, 4, -53, 89, -106, 26, -80, 124, 24, -98, 90, 71, -30, -59, -36, -60, 60, 49, 35, -24, -86, -15, 118, 9, 96, -107, 50, 65};
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
    msg.setTimeStamp(0.866028377397);
    msg.setSource(39222U);
    msg.setSourceEntity(109U);
    msg.setDestination(37459U);
    msg.setDestinationEntity(2U);
    msg.locale.assign("BFUMPAMQUPEVMIULVDFISTOWWEYICUGWMM");
    const char tmp_msg_0[] = {-86, 90, 112, -127, -83, 100, 83, -46, -107, -12, -50, -122, 68, 51, 61, -99, 62, -70, -76, 98, 31, -13, 55, 18, 2, 23, -89, -63, -66, 106, 16, -27, -117, 47, 73, 40, 51, 36, -72, -12, -113, 54, -67, -42, -100, 59, 99, 69, 89, -61, -71, -4, 8, -58, 80, -31, -85, 112, 73, 115};
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
    msg.setTimeStamp(0.902369947856);
    msg.setSource(22967U);
    msg.setSourceEntity(201U);
    msg.setDestination(27656U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.301656321141);
    msg.setSource(17376U);
    msg.setSourceEntity(234U);
    msg.setDestination(26422U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.213503619496);
    msg.setSource(16345U);
    msg.setSourceEntity(87U);
    msg.setDestination(10588U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.644931018942);
    msg.setSource(36197U);
    msg.setSourceEntity(217U);
    msg.setDestination(54618U);
    msg.setDestinationEntity(8U);
    msg.camid = 220U;
    msg.x = 44046U;
    msg.y = 6151U;

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
    msg.setTimeStamp(0.48805282473);
    msg.setSource(56329U);
    msg.setSourceEntity(181U);
    msg.setDestination(52310U);
    msg.setDestinationEntity(27U);
    msg.camid = 110U;
    msg.x = 194U;
    msg.y = 9112U;

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
    msg.setTimeStamp(0.913317878597);
    msg.setSource(8966U);
    msg.setSourceEntity(172U);
    msg.setDestination(14805U);
    msg.setDestinationEntity(86U);
    msg.camid = 78U;
    msg.x = 44256U;
    msg.y = 14687U;

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
    msg.setTimeStamp(0.680673013774);
    msg.setSource(26998U);
    msg.setSourceEntity(51U);
    msg.setDestination(18383U);
    msg.setDestinationEntity(41U);
    msg.camid = 38U;
    msg.x = 2561U;
    msg.y = 2141U;

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
    msg.setTimeStamp(0.98707030032);
    msg.setSource(62834U);
    msg.setSourceEntity(218U);
    msg.setDestination(62922U);
    msg.setDestinationEntity(173U);
    msg.camid = 63U;
    msg.x = 5454U;
    msg.y = 34614U;

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
    msg.setTimeStamp(0.335425144982);
    msg.setSource(7357U);
    msg.setSourceEntity(106U);
    msg.setDestination(48931U);
    msg.setDestinationEntity(188U);
    msg.camid = 11U;
    msg.x = 55779U;
    msg.y = 48655U;

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
    msg.setTimeStamp(0.278539869982);
    msg.setSource(46742U);
    msg.setSourceEntity(64U);
    msg.setDestination(20615U);
    msg.setDestinationEntity(148U);
    msg.tracking = 120U;
    msg.lat = 0.686786887499;
    msg.lon = 0.111529350576;
    msg.x = 0.464297437907;
    msg.y = 0.836481557768;
    msg.z = 0.940247954542;

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
    msg.setTimeStamp(0.0710844645462);
    msg.setSource(2730U);
    msg.setSourceEntity(188U);
    msg.setDestination(1148U);
    msg.setDestinationEntity(154U);
    msg.tracking = 113U;
    msg.lat = 0.59286211093;
    msg.lon = 0.631417341968;
    msg.x = 0.082252319242;
    msg.y = 0.0991973083893;
    msg.z = 0.232967065129;

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
    msg.setTimeStamp(0.732167757014);
    msg.setSource(6807U);
    msg.setSourceEntity(4U);
    msg.setDestination(12723U);
    msg.setDestinationEntity(73U);
    msg.tracking = 71U;
    msg.lat = 0.967796507656;
    msg.lon = 0.135006994611;
    msg.x = 0.455615583086;
    msg.y = 0.0401194193816;
    msg.z = 0.785674428833;

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
    msg.setTimeStamp(0.24757142604);
    msg.setSource(32499U);
    msg.setSourceEntity(105U);
    msg.setDestination(48151U);
    msg.setDestinationEntity(163U);
    msg.target.assign("RFNGRHPJDXOPJTYJDVHPEIVU");
    msg.lbearing = 0.00881104834953;
    msg.lelevation = 0.665054166233;
    msg.bearing = 0.424859533503;
    msg.elevation = 0.528126334157;
    msg.phi = 0.54483408533;
    msg.theta = 0.951514431857;
    msg.psi = 0.467899546972;
    msg.accuracy = 0.993426333537;

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
    msg.setTimeStamp(0.856997799601);
    msg.setSource(7495U);
    msg.setSourceEntity(71U);
    msg.setDestination(36776U);
    msg.setDestinationEntity(106U);
    msg.target.assign("IPDBHDFBVTBPIFQNYPMTRBAUVEMCKLZTNSGGVAILSUWPGJGCZDXZXHKWSFJVBJQHDOYWYGFNHYI");
    msg.lbearing = 0.808646695545;
    msg.lelevation = 0.734067866368;
    msg.bearing = 0.457130394684;
    msg.elevation = 0.705086795804;
    msg.phi = 0.811434727626;
    msg.theta = 0.282474842396;
    msg.psi = 0.139422919947;
    msg.accuracy = 0.391144254284;

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
    msg.setTimeStamp(0.189285237037);
    msg.setSource(17847U);
    msg.setSourceEntity(79U);
    msg.setDestination(60901U);
    msg.setDestinationEntity(121U);
    msg.target.assign("MNHPRZMFCVCDHAHUFMKLBEPUBWQXYINCNATRHQOFMAEEAVURXDHNVBWZAGWVVJXGIHRPRKLNSWIJWXAKEOBIXKTGIVZISIXUWDYHQFWBRFZUDSJKKGBORVTQSZBVPCGTROMSHLPEPNJPEZJFFQPZNIURSVLKITTQOOYEQ");
    msg.lbearing = 0.495297634907;
    msg.lelevation = 0.36646235237;
    msg.bearing = 0.505886852924;
    msg.elevation = 0.948306964424;
    msg.phi = 0.222139657939;
    msg.theta = 0.573307024493;
    msg.psi = 0.0124282524029;
    msg.accuracy = 0.621468994296;

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
    msg.setTimeStamp(0.227261863447);
    msg.setSource(26602U);
    msg.setSourceEntity(238U);
    msg.setDestination(18439U);
    msg.setDestinationEntity(70U);
    msg.target.assign("OPLEZRXBLBLOAJEDSHVNZONMFDLHXTVMOIZWCLQGYLCUFXFMXIBZQTJWOHISVCSWGSWECWGXNNLSXGHDKUYHBKXNVTTLKKGPHNCTZYMMUQJQAXCWTMWBUMYTHCQVSNEIDRYKYMDFJERGJQBBIFJBQRQKEIPVVOJOYQZIJGUUUTPTDUARLDEKBVRAQPRMPCUFTSPZZKCEDZYASDJANWXZGAYPAFHWSEOFWUKEGRMFYXFSHV");
    msg.x = 0.261910590487;
    msg.y = 0.274359288767;
    msg.z = 0.203312145944;
    msg.n = 0.126019181068;
    msg.e = 0.612795199436;
    msg.d = 0.311291490219;
    msg.phi = 0.772782367341;
    msg.theta = 0.808055257885;
    msg.psi = 0.443042479809;
    msg.accuracy = 0.919310631695;

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
    msg.setTimeStamp(0.848987414539);
    msg.setSource(27958U);
    msg.setSourceEntity(82U);
    msg.setDestination(38965U);
    msg.setDestinationEntity(199U);
    msg.target.assign("LQDLPZQDDRGBRJKUYLZVIQMVRSWWCEJXSCJPPIQUJLSGZNSZYKDAOOHZBBYKTCNNVRSHDNNBWAMPYDUTVONAG");
    msg.x = 0.437334953644;
    msg.y = 0.588854027023;
    msg.z = 0.433456465802;
    msg.n = 0.400223588985;
    msg.e = 0.836820919559;
    msg.d = 0.116104708353;
    msg.phi = 0.326324935706;
    msg.theta = 0.118262782942;
    msg.psi = 0.346982501217;
    msg.accuracy = 0.71727063171;

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
    msg.setTimeStamp(0.0339728203351);
    msg.setSource(43492U);
    msg.setSourceEntity(25U);
    msg.setDestination(36250U);
    msg.setDestinationEntity(241U);
    msg.target.assign("LRZJLJFUACZJIBBICFDHNXDDHWIOERLSLPFOBZYTFBBNWRS");
    msg.x = 0.579270482768;
    msg.y = 0.736627851271;
    msg.z = 0.479736071488;
    msg.n = 0.273999584668;
    msg.e = 0.653931767784;
    msg.d = 0.159731194487;
    msg.phi = 0.0288276463277;
    msg.theta = 0.451334949754;
    msg.psi = 0.050439224862;
    msg.accuracy = 0.288698265568;

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
    msg.setTimeStamp(0.0918553932117);
    msg.setSource(4153U);
    msg.setSourceEntity(132U);
    msg.setDestination(51992U);
    msg.setDestinationEntity(126U);
    msg.target.assign("OWRREOOFFXNKTDYFBJEJEPHBPBAHQMMDNOVSQI");
    msg.lat = 0.179583245569;
    msg.lon = 0.749885336178;
    msg.z_units = 108U;
    msg.z = 0.844402891624;
    msg.accuracy = 0.149335608992;

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
    msg.setTimeStamp(0.894583771538);
    msg.setSource(21173U);
    msg.setSourceEntity(40U);
    msg.setDestination(18055U);
    msg.setDestinationEntity(139U);
    msg.target.assign("QWAJMFUUJFSRWOMZKHIGUROWDTHRZVGRLAAQCWCZZOPKWLSLYCGTAKCWOCNIQOCJQVQIJUV");
    msg.lat = 0.586413043382;
    msg.lon = 0.492773793143;
    msg.z_units = 42U;
    msg.z = 0.117034145145;
    msg.accuracy = 0.0327462580775;

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
    msg.setTimeStamp(0.0327005395344);
    msg.setSource(40146U);
    msg.setSourceEntity(164U);
    msg.setDestination(31855U);
    msg.setDestinationEntity(31U);
    msg.target.assign("CNWSXDGYGTOROFULJGAKBTAGUIBSLSNWWEZSUKRNZPXBQWDHYAXKHJZPIKOCBGHVF");
    msg.lat = 0.703252358979;
    msg.lon = 0.931345173624;
    msg.z_units = 107U;
    msg.z = 0.397994084132;
    msg.accuracy = 0.294708505452;

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
    msg.setTimeStamp(0.337040314176);
    msg.setSource(1085U);
    msg.setSourceEntity(129U);
    msg.setDestination(11844U);
    msg.setDestinationEntity(139U);
    msg.name.assign("GADXSCINQCFEBSVIBXMNSEEMGTCMDSNFEOWZWUMWWCU");
    msg.lat = 0.620992306151;
    msg.lon = 0.712081073009;
    msg.z = 0.815915718623;
    msg.z_units = 43U;

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
    msg.setTimeStamp(0.678189706004);
    msg.setSource(10354U);
    msg.setSourceEntity(24U);
    msg.setDestination(39651U);
    msg.setDestinationEntity(13U);
    msg.name.assign("NPSKWKYOHQWGLPDSJSRSRYNJTLNKIRKXDGHNJVTPVNQXFM");
    msg.lat = 0.284689859639;
    msg.lon = 0.814828655702;
    msg.z = 0.145893822106;
    msg.z_units = 142U;

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
    msg.setTimeStamp(0.789649271514);
    msg.setSource(38513U);
    msg.setSourceEntity(175U);
    msg.setDestination(36049U);
    msg.setDestinationEntity(86U);
    msg.name.assign("FFWTEIUYSNOGQXQDRKPMGJOJDIYUDXYXRWB");
    msg.lat = 0.782063875938;
    msg.lon = 0.397889616808;
    msg.z = 0.143233169329;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.255669775749);
    msg.setSource(15845U);
    msg.setSourceEntity(195U);
    msg.setDestination(1383U);
    msg.setDestinationEntity(45U);
    msg.op = 33U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MJRHLDHDUHFAAZRLYLUUKZM");
    tmp_msg_0.lat = 0.911574401139;
    tmp_msg_0.lon = 0.863332893996;
    tmp_msg_0.z = 0.676062123178;
    tmp_msg_0.z_units = 221U;
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
    msg.setTimeStamp(0.0533373460332);
    msg.setSource(9017U);
    msg.setSourceEntity(165U);
    msg.setDestination(33693U);
    msg.setDestinationEntity(88U);
    msg.op = 5U;

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
    msg.setTimeStamp(0.361856480898);
    msg.setSource(4747U);
    msg.setSourceEntity(173U);
    msg.setDestination(61838U);
    msg.setDestinationEntity(17U);
    msg.op = 93U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HQBPBYUNGFXIRRGZDDCPBWHAHXJJWKXXMKVQULXLXYORJQTHGHWWVXPCJNLRTNDFLOZJJZWFPPQLHCRPVDMPHDNFQFLTVVXSUMSGUOECKBAOOBFDKVFRCGMWIYECTTGOYEIAVWBRGAUZDPXNNRUTVIBOMMZUGYVATISRDYPNUNOLSNZWSFYQEAGKFSZEKAMDHQYYEBCCKHWSZFNSOECISXUJLERGKQIAMMQDBEUTIZKVAKABWTTJMIPIQYE");
    tmp_msg_0.lat = 0.851555406204;
    tmp_msg_0.lon = 0.566776463764;
    tmp_msg_0.z = 0.473692356224;
    tmp_msg_0.z_units = 139U;
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
    msg.setTimeStamp(0.740548370178);
    msg.setSource(60374U);
    msg.setSourceEntity(29U);
    msg.setDestination(61245U);
    msg.setDestinationEntity(230U);
    msg.value = 0.462822861557;
    msg.type = 56U;

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
    msg.setTimeStamp(0.587077285488);
    msg.setSource(16306U);
    msg.setSourceEntity(152U);
    msg.setDestination(6272U);
    msg.setDestinationEntity(146U);
    msg.value = 0.396597047449;
    msg.type = 85U;

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
    msg.setTimeStamp(0.916759914363);
    msg.setSource(17484U);
    msg.setSourceEntity(212U);
    msg.setDestination(25282U);
    msg.setDestinationEntity(91U);
    msg.value = 0.752756674343;
    msg.type = 156U;

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
    msg.setTimeStamp(0.122394144349);
    msg.setSource(39709U);
    msg.setSourceEntity(48U);
    msg.setDestination(22659U);
    msg.setDestinationEntity(158U);
    msg.value = 0.502928838823;

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
    msg.setTimeStamp(0.748241155274);
    msg.setSource(393U);
    msg.setSourceEntity(174U);
    msg.setDestination(11967U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0940784584447;

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
    msg.setTimeStamp(0.646289267707);
    msg.setSource(44147U);
    msg.setSourceEntity(52U);
    msg.setDestination(13649U);
    msg.setDestinationEntity(199U);
    msg.value = 0.0178530976043;

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
    msg.setTimeStamp(0.189186785365);
    msg.setSource(47115U);
    msg.setSourceEntity(69U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(148U);
    msg.timestamp_last_service = 0.673378320284;
    msg.time_next_service = 0.958739935033;
    msg.time_motor_next_service = 0.265270998158;
    msg.time_idle_ground = 0.157667240847;
    msg.time_idle_air = 0.418350877416;
    msg.time_idle_water = 0.0456134167123;
    msg.time_idle_underwater = 0.694722229469;
    msg.time_idle_unknown = 0.801246613688;
    msg.time_motor_ground = 0.602622023919;
    msg.time_motor_air = 0.454895093141;
    msg.time_motor_water = 0.783814303566;
    msg.time_motor_underwater = 0.029276650797;
    msg.time_motor_unknown = 0.578524565234;
    msg.rpm_min = 31988;
    msg.rpm_max = 15455;
    msg.depth_max = 0.22101704484;

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
    msg.setTimeStamp(0.782391644061);
    msg.setSource(58094U);
    msg.setSourceEntity(241U);
    msg.setDestination(40714U);
    msg.setDestinationEntity(27U);
    msg.timestamp_last_service = 0.696920842287;
    msg.time_next_service = 0.928967676311;
    msg.time_motor_next_service = 0.15432664845;
    msg.time_idle_ground = 0.614682663569;
    msg.time_idle_air = 0.615439841748;
    msg.time_idle_water = 0.317768171751;
    msg.time_idle_underwater = 0.426487429869;
    msg.time_idle_unknown = 0.261048390775;
    msg.time_motor_ground = 0.951658959573;
    msg.time_motor_air = 0.783952795244;
    msg.time_motor_water = 0.241313302973;
    msg.time_motor_underwater = 0.240490648117;
    msg.time_motor_unknown = 0.759341868534;
    msg.rpm_min = -8010;
    msg.rpm_max = 6196;
    msg.depth_max = 0.554795894002;

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
    msg.setTimeStamp(0.895362889138);
    msg.setSource(15696U);
    msg.setSourceEntity(186U);
    msg.setDestination(45618U);
    msg.setDestinationEntity(194U);
    msg.timestamp_last_service = 0.396042058945;
    msg.time_next_service = 0.0548369667578;
    msg.time_motor_next_service = 0.489082073062;
    msg.time_idle_ground = 0.92234447547;
    msg.time_idle_air = 0.356351536792;
    msg.time_idle_water = 0.439878336353;
    msg.time_idle_underwater = 0.673344038661;
    msg.time_idle_unknown = 0.166176252209;
    msg.time_motor_ground = 0.178664992283;
    msg.time_motor_air = 0.758602758374;
    msg.time_motor_water = 0.0313259017539;
    msg.time_motor_underwater = 0.757047873317;
    msg.time_motor_unknown = 0.227131737097;
    msg.rpm_min = 10257;
    msg.rpm_max = -28106;
    msg.depth_max = 0.877626443465;

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
    msg.setTimeStamp(0.918438146505);
    msg.setSource(23246U);
    msg.setSourceEntity(84U);
    msg.setDestination(64581U);
    msg.setDestinationEntity(71U);
    msg.severity = 202U;
    msg.text.assign("YUYEBFTNXTZDLXLSMQYSBMSPFIYMDUCCDJAROLSMZSFVITWVLNAPFVBTBACHGYHCXLNWTZJDZLRUTDKCHAHTONMRFZIOZREKBXWXCQQBZHQTATEWRGYVYKRPKDJJEZYOUKAUSUMFYWLGJXEBZGCNGQJRCVKXLNHIWR");

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
    msg.setTimeStamp(0.411318530064);
    msg.setSource(39158U);
    msg.setSourceEntity(156U);
    msg.setDestination(11279U);
    msg.setDestinationEntity(243U);
    msg.severity = 159U;
    msg.text.assign("YJFNNAZTVCTBGEODPKOPRWXCITPVDJYQCVIYUBUMCSRKFXECKFVQDQFUUTLUUOQGBOKHQYHSKRHYUYBJMCTYWIOWDUIZZZBNEBMRONSJXQJGAMPSHVLPWVZULPIQBAYFMQSLXANWEKEAHFRGDTVEJJZSDYGLXQAJONILNIDWFZIEWZKXSBDAWMOGSFVKKUGTORCIRHWWFJCBESMBRZKCGPRLZMDTSELADELLJXPOPNFHXYXHVMHHATQGANT");

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
    msg.setTimeStamp(0.638713906168);
    msg.setSource(24915U);
    msg.setSourceEntity(84U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(239U);
    msg.severity = 2U;
    msg.text.assign("CMZHFVJXFDXYYMHCWFQNPFJBILHEHQEXOLZMEDWXNULUPOHTBGIJFVFBKIYQEBADERFUDRUHVIDUTUKRZHFGAJCNBFSTXSSSJDCNUSEDOPBNHNEEZZTOTAQARMNGWKSJIZHOSEKYBKGVJWOXKVVSLQWICBVQPKLTLKTRYPMNDCGIMFXWARAWP");

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
    msg.setTimeStamp(0.266515940124);
    msg.setSource(63123U);
    msg.setSourceEntity(27U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(86U);
    msg.channel = 15;
    msg.value = -67086959;
    msg.gain = 165U;

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
    msg.setTimeStamp(0.142260727657);
    msg.setSource(15607U);
    msg.setSourceEntity(245U);
    msg.setDestination(21018U);
    msg.setDestinationEntity(161U);
    msg.channel = 16;
    msg.value = -553169411;
    msg.gain = 103U;

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
    msg.setTimeStamp(0.109458427793);
    msg.setSource(24152U);
    msg.setSourceEntity(55U);
    msg.setDestination(5763U);
    msg.setDestinationEntity(192U);
    msg.channel = 99;
    msg.value = -1883717635;
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
    msg.setTimeStamp(0.833125050554);
    msg.setSource(49906U);
    msg.setSourceEntity(85U);
    msg.setDestination(5658U);
    msg.setDestinationEntity(147U);
    msg.ch01 = 0.159176675054;
    msg.ch02 = 0.295827861401;
    msg.ch03 = 0.365030603371;
    msg.ch04 = 0.644999299191;
    msg.ch05 = 0.149837283015;
    msg.ch06 = 0.23436301704;
    msg.ch07 = 0.448530373152;
    msg.ch08 = 0.19833932239;
    msg.ch09 = 0.822115571506;
    msg.ch10 = 0.7397834362;
    msg.ch11 = 0.136089874319;
    msg.ch12 = 0.189388827515;
    msg.ch13 = 0.997856415655;
    msg.ch14 = 0.684031206671;
    msg.ch15 = 0.641443657868;
    msg.ch16 = 0.672342177494;

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
    msg.setTimeStamp(0.0359596562723);
    msg.setSource(52884U);
    msg.setSourceEntity(51U);
    msg.setDestination(33110U);
    msg.setDestinationEntity(170U);
    msg.ch01 = 0.846498572782;
    msg.ch02 = 0.696951269641;
    msg.ch03 = 0.177457105681;
    msg.ch04 = 0.266702134552;
    msg.ch05 = 0.790688194334;
    msg.ch06 = 0.00493026354237;
    msg.ch07 = 0.784047536222;
    msg.ch08 = 0.815042562077;
    msg.ch09 = 0.725435326529;
    msg.ch10 = 0.44122051021;
    msg.ch11 = 0.253229012356;
    msg.ch12 = 0.923803486449;
    msg.ch13 = 0.147332448084;
    msg.ch14 = 0.325716554945;
    msg.ch15 = 0.297479907046;
    msg.ch16 = 0.14263645857;

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
    msg.setTimeStamp(0.30118058315);
    msg.setSource(1707U);
    msg.setSourceEntity(68U);
    msg.setDestination(14670U);
    msg.setDestinationEntity(152U);
    msg.ch01 = 0.308654494995;
    msg.ch02 = 0.831453530146;
    msg.ch03 = 0.627437192553;
    msg.ch04 = 0.0571237922961;
    msg.ch05 = 0.0577840535638;
    msg.ch06 = 0.513614444226;
    msg.ch07 = 0.40939058974;
    msg.ch08 = 0.0247954801008;
    msg.ch09 = 0.938796466511;
    msg.ch10 = 0.378004120726;
    msg.ch11 = 0.394301793067;
    msg.ch12 = 0.859509028889;
    msg.ch13 = 0.982911539772;
    msg.ch14 = 0.61973992192;
    msg.ch15 = 0.693134151113;
    msg.ch16 = 0.523758113565;

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
    msg.setTimeStamp(0.729749804332);
    msg.setSource(32317U);
    msg.setSourceEntity(218U);
    msg.setDestination(5466U);
    msg.setDestinationEntity(136U);
    msg.time = 0.0344621441014;
    msg.ang = 0.936324818591;

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
    msg.setTimeStamp(0.911107899374);
    msg.setSource(54820U);
    msg.setSourceEntity(19U);
    msg.setDestination(34312U);
    msg.setDestinationEntity(39U);
    msg.time = 0.707234179921;
    msg.ang = 0.317950802603;

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
    msg.setTimeStamp(0.615264127873);
    msg.setSource(30994U);
    msg.setSourceEntity(178U);
    msg.setDestination(57454U);
    msg.setDestinationEntity(76U);
    msg.time = 0.620489398733;
    msg.ang = 0.638410977986;

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
    msg.setTimeStamp(0.174866666114);
    msg.setSource(30599U);
    msg.setSourceEntity(162U);
    msg.setDestination(42807U);
    msg.setDestinationEntity(221U);
    msg.value = 0.484928993984;

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
    msg.setTimeStamp(0.33143854557);
    msg.setSource(45243U);
    msg.setSourceEntity(107U);
    msg.setDestination(31722U);
    msg.setDestinationEntity(221U);
    msg.value = 0.164947155743;

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
    msg.setTimeStamp(0.978251275223);
    msg.setSource(1026U);
    msg.setSourceEntity(117U);
    msg.setDestination(54281U);
    msg.setDestinationEntity(223U);
    msg.value = 0.0776340106961;

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
    IMC::PanelsPower msg;
    msg.setTimeStamp(0.157249132124);
    msg.setSource(41046U);
    msg.setSourceEntity(181U);
    msg.setDestination(5048U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0580151491539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PanelsPower #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PanelsPower msg;
    msg.setTimeStamp(0.6980997042);
    msg.setSource(1487U);
    msg.setSourceEntity(20U);
    msg.setDestination(12661U);
    msg.setDestinationEntity(130U);
    msg.value = 0.829895546382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PanelsPower #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PanelsPower msg;
    msg.setTimeStamp(0.828333861428);
    msg.setSource(38775U);
    msg.setSourceEntity(127U);
    msg.setDestination(5670U);
    msg.setDestinationEntity(109U);
    msg.value = 0.131535670508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PanelsPower #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemLoad msg;
    msg.setTimeStamp(0.362463314587);
    msg.setSource(20369U);
    msg.setSourceEntity(36U);
    msg.setDestination(8274U);
    msg.setDestinationEntity(78U);
    msg.current = 0.204978650608;
    msg.power = 0.826764281393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemLoad #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemLoad msg;
    msg.setTimeStamp(0.327033992743);
    msg.setSource(25067U);
    msg.setSourceEntity(107U);
    msg.setDestination(57019U);
    msg.setDestinationEntity(70U);
    msg.current = 0.560817058831;
    msg.power = 0.411766167377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemLoad #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemLoad msg;
    msg.setTimeStamp(0.738755685634);
    msg.setSource(20291U);
    msg.setSourceEntity(205U);
    msg.setDestination(8787U);
    msg.setDestinationEntity(5U);
    msg.current = 0.675361542594;
    msg.power = 0.990067145463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemLoad #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ThrusterLoad msg;
    msg.setTimeStamp(0.120119139135);
    msg.setSource(60374U);
    msg.setSourceEntity(204U);
    msg.setDestination(38094U);
    msg.setDestinationEntity(90U);
    msg.current = 0.972239404363;
    msg.power = 0.352511813074;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ThrusterLoad #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ThrusterLoad msg;
    msg.setTimeStamp(0.806171762396);
    msg.setSource(20262U);
    msg.setSourceEntity(117U);
    msg.setDestination(15879U);
    msg.setDestinationEntity(107U);
    msg.current = 0.405604216967;
    msg.power = 0.559693319717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ThrusterLoad #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ThrusterLoad msg;
    msg.setTimeStamp(0.802738387651);
    msg.setSource(13375U);
    msg.setSourceEntity(220U);
    msg.setDestination(5021U);
    msg.setDestinationEntity(26U);
    msg.current = 0.60098166653;
    msg.power = 0.0239877244029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ThrusterLoad #2", msg == *msg_d);
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
    msg.setTimeStamp(0.44334492183);
    msg.setSource(34228U);
    msg.setSourceEntity(254U);
    msg.setDestination(31323U);
    msg.setDestinationEntity(204U);
    msg.value = 0.363957421935;

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
    msg.setTimeStamp(0.0145216382001);
    msg.setSource(13503U);
    msg.setSourceEntity(223U);
    msg.setDestination(16409U);
    msg.setDestinationEntity(197U);
    msg.value = 0.0144811109372;

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
    msg.setTimeStamp(0.704561312076);
    msg.setSource(37097U);
    msg.setSourceEntity(239U);
    msg.setDestination(24988U);
    msg.setDestinationEntity(221U);
    msg.value = 0.967765167114;

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

  return test.getReturnValue();
}

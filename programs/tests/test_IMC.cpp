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
// IMC XML MD5: 9ccf6c5bd15323270be690da48354dfd                            *
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
    msg.setTimeStamp(0.152910982874);
    msg.setSource(57099U);
    msg.setSourceEntity(68U);
    msg.setDestination(2928U);
    msg.setDestinationEntity(57U);
    msg.state = 193U;
    msg.flags = 86U;
    msg.description.assign("ONQCWWRDCWIAVHDFMHREWAGQRLNTMQPMPMWJCTJGKUBGELUPOVPSFDFJJYUQUNJMYKTKK");

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
    msg.setTimeStamp(0.584963208081);
    msg.setSource(63680U);
    msg.setSourceEntity(85U);
    msg.setDestination(34372U);
    msg.setDestinationEntity(200U);
    msg.state = 237U;
    msg.flags = 245U;
    msg.description.assign("GUCTZUOFLKDGTWDQFNPLVRWLAIXCHZRJSZGQAAKRCIETNBIBQSDEVVIMPRJFVWQNFEAUADOVEEBZJOMTANRJVBRBQKMYP");

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
    msg.setTimeStamp(0.994058106406);
    msg.setSource(23003U);
    msg.setSourceEntity(50U);
    msg.setDestination(38578U);
    msg.setDestinationEntity(140U);
    msg.state = 233U;
    msg.flags = 221U;
    msg.description.assign("UBACJAOAEAXHNNBVXUNVOZRBODRETOXGKRVJBVDCZOCWVGTFLIIRDKRKPSAWJXCLLELWHPVYMBMTHXNQUEOIERSRLOHYUMACLUFZLPGLKDSBMQHF");

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
    msg.setTimeStamp(0.499119782651);
    msg.setSource(23643U);
    msg.setSourceEntity(181U);
    msg.setDestination(12845U);
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
    msg.setTimeStamp(0.0682812223281);
    msg.setSource(20092U);
    msg.setSourceEntity(70U);
    msg.setDestination(39930U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.528071082039);
    msg.setSource(33631U);
    msg.setSourceEntity(148U);
    msg.setDestination(41897U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.212437883379);
    msg.setSource(46911U);
    msg.setSourceEntity(91U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(144U);
    msg.id = 56U;
    msg.label.assign("WCODUVZLMNUDZTFLRWFEYELCZONQJKPJBWCBXNCDSDSAKMDWNYTRSDWLWDBVTJVHJOYFAGIKTORPSPXAOPOGAXFOLJFHTRKISHFQMLIXVPTSIABNQAVMVDJUHUYVZQXQEBSKEBNCGCMEZKHQEIUNGCHUHMNPAYCIRIFPSQTIVACOZTDAZAEOJEMMSOQCIZENHYXQIMGZKJXKRLGJPWLGYGHRRGDFSFKUWUBVUHUJBWTNYYWGQFRBLETPYXVB");
    msg.component.assign("JCGLNDAWKHNJSJVGYFXIQIPUYMWCKMHZFKSBRYAYTEXVXQTXFXECDYEVVRUHJJSNLKWBARZOOANFXFEYUNELHYHSIOVIEKSGMSBQFFIMDPPPUADCWGNXLJPZQEORGOIAGNMNYACKBRTIZGSCBBDPHVOGGOJWCOFUTTLN");
    msg.act_time = 31401U;
    msg.deact_time = 40753U;

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
    msg.setTimeStamp(0.143450448517);
    msg.setSource(23442U);
    msg.setSourceEntity(117U);
    msg.setDestination(38042U);
    msg.setDestinationEntity(12U);
    msg.id = 99U;
    msg.label.assign("UJOURFLHLBSPVCSTHFHJMIKEBQQSDVGYDWRVAWGNBQFVVCOFRSZFLYRGZGHYEODHHAMTMARCDIPNYKNLPEYCYVOSWHENEUMTJXWJWKZNWGXAZUBTONJPPGBBJLQLMZBEEVCFTKQCDNKSKKXVDTULIFTUSFGRXCKCCWJFNTIOVPSLNSYQAMKQTOVJPODUKZHTXPJZ");
    msg.component.assign("AOTEPGDUGVTEGLTHFDEECWQMLGOBGCPEIFWIQSWKYBHNYKYCOHJOUOSPIHWBSBTKUFZPRCAJRVGXJMCQVJMQZ");
    msg.act_time = 29091U;
    msg.deact_time = 55541U;

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
    msg.setTimeStamp(0.0529005950158);
    msg.setSource(30284U);
    msg.setSourceEntity(245U);
    msg.setDestination(36127U);
    msg.setDestinationEntity(14U);
    msg.id = 238U;
    msg.label.assign("LFSYMNCSRKBBAGAKFIRXILYWOJDKSGQGIAUYDPTODTZZZWXHYVNQMREQVHCNRHVKJZLNYKSLQJNYVRJFIFUFAUQGELWESBTWAUEIMVFOXOBCRKBWRCVUPDUSWEUOIGAQRPABJYAEGHTTNJCHRZQSLHDZOEOGJDWWNNYVJPBMCXUQFDFXDKXKTS");
    msg.component.assign("WZEVZCTIQANELXTZHIDRYNLWTJRFJNQLVUQOAVVANCXTAQPRSLOZPMYMMBUKULSCUXIJQCGABWBUHMGQRSUUAVATYDFCXFBJVSHBTQXIPDKJIOOQSHEDMS");
    msg.act_time = 61212U;
    msg.deact_time = 43347U;

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
    msg.setTimeStamp(0.660054130597);
    msg.setSource(21057U);
    msg.setSourceEntity(221U);
    msg.setDestination(3457U);
    msg.setDestinationEntity(100U);
    msg.id = 55U;

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
    msg.setTimeStamp(0.183003386962);
    msg.setSource(58955U);
    msg.setSourceEntity(137U);
    msg.setDestination(64284U);
    msg.setDestinationEntity(65U);
    msg.id = 17U;

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
    msg.setTimeStamp(0.975728690678);
    msg.setSource(950U);
    msg.setSourceEntity(28U);
    msg.setDestination(58558U);
    msg.setDestinationEntity(87U);
    msg.id = 167U;

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
    msg.setTimeStamp(0.85995022464);
    msg.setSource(16697U);
    msg.setSourceEntity(99U);
    msg.setDestination(3805U);
    msg.setDestinationEntity(249U);
    msg.op = 246U;
    msg.list.assign("JSVBCGOAVGDWBHLAWIEEXUHTNMIMZISELWZCSWOEHOFCALGPJUYBXZVQHYLLUPKQMVIUDBIJHCZVFJUTZXTRBNWHJOOJKYDXPWGCGNYZNTQMIQGVDRCWKQPRDPTTMXLWQFALHFBYPCNINTRQNMFQYXZXCROILJRPRXOCDFEENXBUYCSHILXJJBANAVDHUZ");

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
    msg.setTimeStamp(0.921975888041);
    msg.setSource(9218U);
    msg.setSourceEntity(195U);
    msg.setDestination(19012U);
    msg.setDestinationEntity(94U);
    msg.op = 0U;
    msg.list.assign("PBFTXSEIHKZNOIOCLAWJPTTAEIGIVJVHPMSRROAPOMSLUYDQNFKDNZWDDNBUBFGTOTKKRFJCQTEJULTYCSJPGTPLDKUQRVXWVUZXEHXLZFONUPGCYBFZAROIINXCJYLFMCMHIBGDBJNGUMBQQAOEHRQSQAEVPSETYMZRHHYSKPZSMVKSYQKNVAVKVCYOHGXIVDMMJEAWRWZCCI");

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
    msg.setTimeStamp(0.797381696021);
    msg.setSource(8894U);
    msg.setSourceEntity(52U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(161U);
    msg.op = 247U;
    msg.list.assign("SPAFWTTINJWGPUMZMNBWSJXULASNVWQENRPMRJOQJIPDSWDYXCKDJGCQSAQMMUTAPTNUICKUVYOIUFHMDWZFJGLRGGHLVAMEEVBFQRCPFSOJQZHOLBJLRZCQBKEAMHRTNSAHXPYRHPOBVPYX");

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
    msg.setTimeStamp(0.599904133352);
    msg.setSource(52782U);
    msg.setSourceEntity(109U);
    msg.setDestination(61317U);
    msg.setDestinationEntity(244U);
    msg.value = 114U;

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
    msg.setTimeStamp(0.626343518699);
    msg.setSource(244U);
    msg.setSourceEntity(119U);
    msg.setDestination(38425U);
    msg.setDestinationEntity(121U);
    msg.value = 4U;

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
    msg.setTimeStamp(0.729605492947);
    msg.setSource(10092U);
    msg.setSourceEntity(20U);
    msg.setDestination(44215U);
    msg.setDestinationEntity(81U);
    msg.value = 113U;

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
    msg.setTimeStamp(0.239036810137);
    msg.setSource(24799U);
    msg.setSourceEntity(166U);
    msg.setDestination(19126U);
    msg.setDestinationEntity(101U);
    msg.consumer.assign("QAPJUJKGLHNGBJMHHHKOALFQLPIFQDVJ");
    msg.message_id = 6359U;

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
    msg.setTimeStamp(0.981262726362);
    msg.setSource(5673U);
    msg.setSourceEntity(39U);
    msg.setDestination(53144U);
    msg.setDestinationEntity(104U);
    msg.consumer.assign("VFQMLKUUVALRNPHECASTDFAQZXOIQEVGAXAZLZPUKZMBFPEOTEQKZCUBKIYOHRSFITIAXKIOYMTOABDMIOVRJGRJGTTMAWUEIGUQTEAFHHNYHLKYJSFFJLQMPUPMRNGWCELXSDILRRXCDBPKZU");
    msg.message_id = 61979U;

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
    msg.setTimeStamp(0.82169773333);
    msg.setSource(55138U);
    msg.setSourceEntity(90U);
    msg.setDestination(42000U);
    msg.setDestinationEntity(250U);
    msg.consumer.assign("OELNZWHWAQKAIKBXMCPZBUZHI");
    msg.message_id = 6640U;

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
    msg.setTimeStamp(0.749775348633);
    msg.setSource(49340U);
    msg.setSourceEntity(152U);
    msg.setDestination(51538U);
    msg.setDestinationEntity(67U);
    msg.type = 60U;

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
    msg.setTimeStamp(0.493913681274);
    msg.setSource(10383U);
    msg.setSourceEntity(38U);
    msg.setDestination(4355U);
    msg.setDestinationEntity(3U);
    msg.type = 244U;

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
    msg.setTimeStamp(0.400139598613);
    msg.setSource(21442U);
    msg.setSourceEntity(85U);
    msg.setDestination(62345U);
    msg.setDestinationEntity(214U);
    msg.type = 81U;

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
    msg.setTimeStamp(0.114772044972);
    msg.setSource(14778U);
    msg.setSourceEntity(68U);
    msg.setDestination(22111U);
    msg.setDestinationEntity(159U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.459613346964);
    msg.setSource(20468U);
    msg.setSourceEntity(28U);
    msg.setDestination(45414U);
    msg.setDestinationEntity(223U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.450986314683);
    msg.setSource(19256U);
    msg.setSourceEntity(186U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(48U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.641660116618);
    msg.setSource(52375U);
    msg.setSourceEntity(2U);
    msg.setDestination(49282U);
    msg.setDestinationEntity(112U);
    msg.total_steps = 158U;
    msg.step_number = 198U;
    msg.step.assign("TCSMMNVQWRPSCYXZULYGBJIAQYAVTVZOLJNMHWNCFIBGJYKAVWAOSSWRHGIAEFYDOQBMWIQRNHKUZZRFUPDITQNZTRXAFWHZQJRAJKQIXZBEVEMJFKFREDVBINKENCPYEBGLWKRHQBQTKDFBSUPOTXEMPTCJLVPUDTUXTILZWEYJOPXCTUKDNPNCRWVZSVGHSKSJUQKJMDAWZCYPEPLLIGVULGAMCYFLCOO");
    msg.flags = 169U;

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
    msg.setTimeStamp(0.0460125089752);
    msg.setSource(65493U);
    msg.setSourceEntity(9U);
    msg.setDestination(15178U);
    msg.setDestinationEntity(148U);
    msg.total_steps = 183U;
    msg.step_number = 212U;
    msg.step.assign("NEBTYVKOTJWTWSYOXUQVBFBTHDSTPCEERJBTOIJCXVLJFHDZUTXOIOAHMKEXODEPZNSARPAFPIMWDKVGEZDGRALNJJMDFTXRIFQGYYGPNRVROHXWHBJYADSRYMOEGVXLDIFVLWNPSUMUIPZNIGFSLGXSKHJEYVGXCYLCNGNPHRIUZACQDUJAZRQMWBMQGULCQAUKEWCZCSBWPYOXFTCBULWZADVHKQJIZPUWFQYTQLHFZMMQLSEONMBKS");
    msg.flags = 47U;

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
    msg.setTimeStamp(0.83386128538);
    msg.setSource(9824U);
    msg.setSourceEntity(112U);
    msg.setDestination(23606U);
    msg.setDestinationEntity(197U);
    msg.total_steps = 150U;
    msg.step_number = 200U;
    msg.step.assign("XKGXAUCEQQEGMGROCLKLKVRRUTNLWQSQZDHDIOUYTQEYFDEADJHZUPNFGYVHZFXODBFPMWFFBKNNJNKMPQMSNSSGBJSEEYWCQGZVUDMNKWMBC");
    msg.flags = 183U;

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
    msg.setTimeStamp(0.991172296328);
    msg.setSource(37785U);
    msg.setSourceEntity(44U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(158U);
    msg.state = 14U;
    msg.error.assign("XKVELIZZWFYNDACKERUWVWRJQPFDUTRZNPEHLPKRSPNJCEPDPQBWLRLTCJTFMXIUMZPHZFUSVOBGLGVDCIQQITUJQCKADRCBZGXOZSSKVSEOYIFUGOCPSJOHFTMHNYYLRTWZHLDCXSFEVNJMTNWXBYSEAYOHJOKMLXQNYAPLFGESWQNVHUXVJBAHORXYWBVTPIMZQHBOYWIA");

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
    msg.setTimeStamp(0.617439578413);
    msg.setSource(37178U);
    msg.setSourceEntity(74U);
    msg.setDestination(43306U);
    msg.setDestinationEntity(194U);
    msg.state = 40U;
    msg.error.assign("SVESTGRWZTIIAOOFQMXMALVTBZKVBDLOVEMTOKBJVMDLMOSKEY");

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
    msg.setTimeStamp(0.503070628571);
    msg.setSource(17794U);
    msg.setSourceEntity(64U);
    msg.setDestination(31924U);
    msg.setDestinationEntity(237U);
    msg.state = 69U;
    msg.error.assign("NTIRRCANJQWNHKQBTLJYPGPAKZWKIEJULZRHZGPMYOEJMPYSFFCFGSSUWCOQRZULCTQQFASYNNTLSZVQDATPCWMNWXDZXLXWRTEOXHAWPHSXDKUYXCFBFJMNEWDLBZZYEVXOSIMICOJHDPYRHOFEXGOOVBFGKMLINQVVDPSBRVMAURBHIIBALEVGXEQPIYGGUUVZH");

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
    msg.setTimeStamp(0.331656176071);
    msg.setSource(56617U);
    msg.setSourceEntity(89U);
    msg.setDestination(46482U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.208769309373);
    msg.setSource(16385U);
    msg.setSourceEntity(48U);
    msg.setDestination(34657U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.371816599471);
    msg.setSource(33971U);
    msg.setSourceEntity(6U);
    msg.setDestination(3674U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.905261115588);
    msg.setSource(9338U);
    msg.setSourceEntity(240U);
    msg.setDestination(5528U);
    msg.setDestinationEntity(221U);
    msg.op = 129U;
    msg.speed_min = 0.38937248376;
    msg.speed_max = 0.223940418893;
    msg.long_accel = 0.70056501382;
    msg.alt_max_msl = 0.410948651629;
    msg.dive_fraction_max = 0.46124432808;
    msg.climb_fraction_max = 0.201045911559;
    msg.bank_max = 0.633270211173;
    msg.p_max = 0.88877305313;
    msg.pitch_min = 0.142606702704;
    msg.pitch_max = 0.460956925805;
    msg.q_max = 0.0501905380189;
    msg.g_min = 0.894664603356;
    msg.g_max = 0.413474885319;
    msg.g_lat_max = 0.938038072854;
    msg.rpm_min = 0.460195003595;
    msg.rpm_max = 0.519154910006;
    msg.rpm_rate_max = 0.794939848088;

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
    msg.setTimeStamp(0.613728798704);
    msg.setSource(47417U);
    msg.setSourceEntity(137U);
    msg.setDestination(9334U);
    msg.setDestinationEntity(236U);
    msg.op = 21U;
    msg.speed_min = 0.139358300146;
    msg.speed_max = 0.11176729096;
    msg.long_accel = 0.83103857409;
    msg.alt_max_msl = 0.538598225481;
    msg.dive_fraction_max = 0.911079043835;
    msg.climb_fraction_max = 0.132575185703;
    msg.bank_max = 0.15734903693;
    msg.p_max = 0.112018979364;
    msg.pitch_min = 0.101756130633;
    msg.pitch_max = 0.477622390754;
    msg.q_max = 0.778623491891;
    msg.g_min = 0.527149350322;
    msg.g_max = 0.800878458245;
    msg.g_lat_max = 0.110081757653;
    msg.rpm_min = 0.583792031219;
    msg.rpm_max = 0.809535122653;
    msg.rpm_rate_max = 0.00893485658077;

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
    msg.setTimeStamp(0.152915408479);
    msg.setSource(36313U);
    msg.setSourceEntity(228U);
    msg.setDestination(13149U);
    msg.setDestinationEntity(244U);
    msg.op = 47U;
    msg.speed_min = 0.457667873964;
    msg.speed_max = 0.474328352184;
    msg.long_accel = 0.337404127843;
    msg.alt_max_msl = 0.769076947469;
    msg.dive_fraction_max = 0.838834793032;
    msg.climb_fraction_max = 0.0761556107433;
    msg.bank_max = 0.91274416579;
    msg.p_max = 0.584352885009;
    msg.pitch_min = 0.826903287895;
    msg.pitch_max = 0.706736270758;
    msg.q_max = 0.0436165470028;
    msg.g_min = 0.541547958001;
    msg.g_max = 0.56222634464;
    msg.g_lat_max = 0.658305706118;
    msg.rpm_min = 0.279785209582;
    msg.rpm_max = 0.79877519816;
    msg.rpm_rate_max = 0.666318696569;

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
    msg.setTimeStamp(0.234756370728);
    msg.setSource(21603U);
    msg.setSourceEntity(179U);
    msg.setDestination(46216U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.50360863755);
    msg.setSource(40515U);
    msg.setSourceEntity(83U);
    msg.setDestination(27886U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.073274469086);
    msg.setSource(50286U);
    msg.setSourceEntity(51U);
    msg.setDestination(29795U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.29493530318);
    msg.setSource(30174U);
    msg.setSourceEntity(89U);
    msg.setDestination(59709U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.0962600230236;
    msg.lon = 0.58998973388;
    msg.height = 0.258077159552;
    msg.x = 0.0292249838756;
    msg.y = 0.2569822759;
    msg.z = 0.818338343424;
    msg.phi = 0.26299712057;
    msg.theta = 0.742268492486;
    msg.psi = 0.204706670601;
    msg.u = 0.107932177786;
    msg.v = 0.20909588312;
    msg.w = 0.132064605158;
    msg.p = 0.366826349459;
    msg.q = 0.567858313593;
    msg.r = 0.618627991106;
    msg.svx = 0.62870215642;
    msg.svy = 0.273168942965;
    msg.svz = 0.257381702901;

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
    msg.setTimeStamp(0.0436697137356);
    msg.setSource(38621U);
    msg.setSourceEntity(213U);
    msg.setDestination(33750U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.246609792581;
    msg.lon = 0.476366165606;
    msg.height = 0.567438397459;
    msg.x = 0.957528615446;
    msg.y = 0.789155006715;
    msg.z = 0.173722838572;
    msg.phi = 0.0616742536972;
    msg.theta = 0.632251386623;
    msg.psi = 0.393661973805;
    msg.u = 0.175961061081;
    msg.v = 0.209489034534;
    msg.w = 0.975824379879;
    msg.p = 0.924861892058;
    msg.q = 0.559743883346;
    msg.r = 0.146197491085;
    msg.svx = 0.29062161517;
    msg.svy = 0.0232421258955;
    msg.svz = 0.917282771201;

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
    msg.setTimeStamp(0.540607845369);
    msg.setSource(14280U);
    msg.setSourceEntity(90U);
    msg.setDestination(39807U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.311352273688;
    msg.lon = 0.446236579695;
    msg.height = 0.242279117701;
    msg.x = 0.729352946229;
    msg.y = 0.176867536673;
    msg.z = 0.661064302652;
    msg.phi = 0.291861169191;
    msg.theta = 0.120543713662;
    msg.psi = 0.116566120519;
    msg.u = 0.16172967384;
    msg.v = 0.246101073822;
    msg.w = 0.967206258916;
    msg.p = 0.316850268382;
    msg.q = 0.854327701941;
    msg.r = 0.265458975977;
    msg.svx = 0.257128564171;
    msg.svy = 0.18156531112;
    msg.svz = 0.606770294388;

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
    msg.setTimeStamp(0.80380575218);
    msg.setSource(14936U);
    msg.setSourceEntity(58U);
    msg.setDestination(45830U);
    msg.setDestinationEntity(7U);
    msg.op = 10U;
    msg.entities.assign("ECGGJFUDOLQQQBFGSFVEVAVCKEJCGRAGYIIFXKOKOGNUXDDBURHULZPDOMSRFJQJPCKDIIETLYTSEXKNWATJYSZSTNTJPQSYTPEDYZKVHANUDPOINDYBINMMUXBHPATKWSOUKMJXWFYGVCZUQCFLZVCALRIPAWDGYJXAJVROFXPFLCUBZILDHOVRZQBAQKRHICMMHEIWUNWMCMXSMVOZBRHAEMOKHGRJXBNSLBQNEHHPSWBVGXWLT");

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
    msg.setTimeStamp(0.0719932714681);
    msg.setSource(33637U);
    msg.setSourceEntity(199U);
    msg.setDestination(10128U);
    msg.setDestinationEntity(127U);
    msg.op = 19U;
    msg.entities.assign("XDLUYSEISCHDJOHWCWZIFEYAMHKBPDWQOOBEMRKOHXVNQZBWDRRLSRNGBOMVAXPKASFXFAJATLPNICKLQWHDHEVGSGBQYFNZRYPTQBWJPJGAPOVQNTVULVRX");

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
    msg.setTimeStamp(0.00179690314585);
    msg.setSource(13315U);
    msg.setSourceEntity(110U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(190U);
    msg.op = 208U;
    msg.entities.assign("FBRVFBVYJEFOGURPTMJCEDCUBMBUOHKWBXLJTLRGLQFIPLXDOESZNTYYBVLNIVJMQVHLZYZRGISNTGTCDXLPORHUHUFXSTMXJKKUYDLPOUWQMFCDWKLIHUEZDXTEDKPLESXJHPMBYVBV");

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
    msg.setTimeStamp(0.208972081671);
    msg.setSource(43655U);
    msg.setSourceEntity(119U);
    msg.setDestination(18276U);
    msg.setDestinationEntity(153U);
    msg.type = 127U;
    msg.speed = 39549U;
    const char tmp_msg_0[] = {-98, -29, -95, 47, 23, -110, -110, 4, 47, -62, 121, -66, -55, 53, -54, -103, -107, -2, -51, -28, 50, -116, 121, -72, 58, -126, 95, -125, 34, 37, -26, -74, -102, -81, -74, -113, 120, -126, -12, -52, 49, -71, 30, 84, -94, 21, -126, -108, 6, -69, -56, 117, -106, -93, -112, 58, 80, -40, 2, -115, -5, -5, 24, 69, -69, -65, 63, 57, -50, -56, -89, 57, -109, -13, 39, -38, -16, -38, -128, -125, -17, 90, 49, -119, -67, 78, -107, -54, -25, -30, 106, -37, -15, 69, 112, -83, 109, 107, -52, -10, 5, -120, 0, -3, 109, 94, 90, -119, 14, 69, -120, -69, 109, -84, -2, -13, 10, 94, 91, -13, 39, -38, -42, 102, 20, -66, 21, 87, 111, 46, 8, 24, 84, 101, 117, -52, 50, 58, -14, -57, -109, 112, 66, -117, 67, 11, 18, 8, -105, -85, -12, 65, -125, 109, 94, -1, 86, -64, 6, -39, -79, -14, 71, -69, 108, 88, -10, -54, -7, -55, 80, -95, -123, 120, 23, -82, 64, 21, -61, 78, -124, -42, 75, 2, -118, 18, -3, -91, -90, -57, -113, -91, -28, 80, -58, -59, 80, 13, 24, 4, 82, 75, 1, -59, 49, 6, 109, -71, -51, 111, 123, -104, 85, 59};
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
    msg.setTimeStamp(0.711578244373);
    msg.setSource(44759U);
    msg.setSourceEntity(156U);
    msg.setDestination(19931U);
    msg.setDestinationEntity(53U);
    msg.type = 109U;
    msg.speed = 65518U;
    const char tmp_msg_0[] = {-90, -124, -66, -84, -47, -90, -108, -14, -83, 69, -54, 91, -96, -119, -18, -117, -94, -98, 41, 31, -94, -58, -71, -110, 110, -81, 98, 13, -126, -27, -19, -4, -4, -42, -86, 72, 55, 53, 74, 98, -12, 60, 5, 57, -42, -125, 68, 62, 98, 63, -76, -45, -83, -124, 70, 65, -92, 109, 32, -37, -101, 34, -119, 92, 124, 16, 28, -122, -47, 26, -11, 102, 105, 67, 17, -120, 49, -86, 124, 64, -18, -28, -14, 82, -8, 19, -58, -68, -109, 29, 44, -5, -72, -97, -42, -71, 115, -42, 16, 49, -2, -116, -64, -55, 55, 30, 64, 12, -15, 15, 25, 111, -45, -126, -93, -103, 54, -2, -30, -52, -17, 100, 112, -2, -110, -19, -59, -55, -78, 54, 41, -6, 73, 55, 71, -26, -127, -37, 117, -87, -64, 45, 93, -50, -113, -92, 85, 101, 88, 60, 52, 41, -62, -71, 12, 12, -58};
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
    msg.setTimeStamp(0.255977952388);
    msg.setSource(19803U);
    msg.setSourceEntity(164U);
    msg.setDestination(17035U);
    msg.setDestinationEntity(4U);
    msg.type = 60U;
    msg.speed = 25777U;
    const char tmp_msg_0[] = {85, -26, -75, -101, 122, 82, -121, -106, -48, 113, 13, -91, -38, 13, 32, 99, -4, 80, -52, 96, 78, -19, 110, -19, 21, -77, 101, 82, -62, -104, -84, 86, 101, -8, -79, 55, -111, -21, 6, -78, -53, -16, 62, 70, -39, -48, -127, -75, 51, 25, -3, -38, -44, -76, 5, -27, 78, 41, -84, -89, 96, -120, -20, 33, 75, -3, 34, 112, -111, -20, -9, 103, -12, -3, 95, 24, -30, 6, 48, 15, 113, -44, 119, -78, 51, -65, 54, -35, -53, 39, -13, 60, -110, 123, -35, -1, -7, 105, 16, 40, 63, 87, -43, 33, 56, 44, -65, 107, 83, -111, -10, 80, 80, 30, -116, -74, -40, -54, -50, 11, 120, 19, -98, 97, 98, 35, 39, -8, -68, -21, 106, -79, 13, 83, 62, -17, 123, 52, -19, 53, -16, 12, -99, -38, -2, -115, -63, 126, 111, -110, -115, -83, -86, 56, 95, -86, -122, -15, -112, 107, 31, -46, -79, -30, 67, 33, 52, 5, 44, 101, -79, -116, -98, -99, -121, -76, -90, 118, -19, -114, 44, -15, -77, 115, -46, -81, -92, 60, 93, 38, -105, 11, -106, 1, 80, 68, -117, 120, -46, 3, 84, -118, -87, 44, -46, 71, -42, 84, 110, -120, -77, 82, 113, -42, 39, -67, -22, 34, 3, 115, 107, -83, -93, 88, -102, -118, -113, 59, -111, 107, 33, 9, 98};
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
    msg.setTimeStamp(0.85528145198);
    msg.setSource(36215U);
    msg.setSourceEntity(85U);
    msg.setDestination(32432U);
    msg.setDestinationEntity(168U);
    msg.op = 103U;
    msg.tas2acc_pgain = 0.191843185613;
    msg.bank2p_pgain = 0.0688407822866;

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
    msg.setTimeStamp(0.339360889319);
    msg.setSource(25391U);
    msg.setSourceEntity(181U);
    msg.setDestination(21480U);
    msg.setDestinationEntity(252U);
    msg.op = 104U;
    msg.tas2acc_pgain = 0.448355393337;
    msg.bank2p_pgain = 0.904440086648;

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
    msg.setTimeStamp(0.912815626975);
    msg.setSource(732U);
    msg.setSourceEntity(62U);
    msg.setDestination(39634U);
    msg.setDestinationEntity(89U);
    msg.op = 4U;
    msg.tas2acc_pgain = 0.0226249711995;
    msg.bank2p_pgain = 0.874934077631;

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
    msg.setTimeStamp(0.418950332784);
    msg.setSource(62193U);
    msg.setSourceEntity(36U);
    msg.setDestination(1894U);
    msg.setDestinationEntity(59U);
    msg.available = 2444743430U;
    msg.value = 65U;

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
    msg.setTimeStamp(0.422464969677);
    msg.setSource(5154U);
    msg.setSourceEntity(230U);
    msg.setDestination(31426U);
    msg.setDestinationEntity(8U);
    msg.available = 4279298616U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.0542259992536);
    msg.setSource(16586U);
    msg.setSourceEntity(44U);
    msg.setDestination(47347U);
    msg.setDestinationEntity(182U);
    msg.available = 652723839U;
    msg.value = 102U;

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
    msg.setTimeStamp(0.627855576964);
    msg.setSource(38399U);
    msg.setSourceEntity(5U);
    msg.setDestination(22043U);
    msg.setDestinationEntity(83U);
    msg.op = 144U;
    msg.snapshot.assign("KLXBHPOWNSYZVTDMKSBFAJRFZAXESEZYBWZOXOKQLZSXCPLHWBPMBPZTRBWJNFDCRGPKAJZDHWIVDMURYGKLNHEMCRYNBWESXJOPMUTHVIDSNUCUCOJBKJHVWCGDSUOQLEGIDPQCHTVGDFNYNZLYBYRVUII");
    IMC::VesselWind tmp_msg_0;
    tmp_msg_0.angle = 0.837303873389;
    tmp_msg_0.reference.assign("FZFDUZUJVZDYMSYNGQSDAHOZBYBPBBQNXMDEGARLUNWHZOTYGIADHQHCLKYOMMUFERMAVBYEJOPZPGIWGZCMIVIOKGVKZMETMCVDKRYWZPBW");
    tmp_msg_0.speed = 0.0281761708343;
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
    msg.setTimeStamp(0.652443674646);
    msg.setSource(6473U);
    msg.setSourceEntity(104U);
    msg.setDestination(55585U);
    msg.setDestinationEntity(4U);
    msg.op = 142U;
    msg.snapshot.assign("GGWLFLLCGIDLMKJVXMRWTYCPDPMYDJICFHYBUQCXVPNHEWZRFNQBNTOWCCQOZFEZBZRIVWESMKLBEPCYKHGSZBAQUDJORVDMYAHGTKJHOEVHJPBOWAAQWQHKAWZMXQDBYNPYLXFCXZKZJIOPXUJWSHOYSRNGDNJHKHXMTPSZGTUVIRAAOTOTAFLMUQFXXUUDISNTNDVBLECMUPTTIXUIISSVKEBJGGSARY");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.968621176113;
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
    msg.setTimeStamp(0.471071143487);
    msg.setSource(19798U);
    msg.setSourceEntity(44U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(209U);
    msg.op = 90U;
    msg.snapshot.assign("HDTMDUWXZNRYLVPMOMQYRKFCQZBHZPIMKDYFZCJOFXSOBEPJGXVOOPVLWNWHHKXOUERNSDRTPL");
    IMC::PeekManeuver tmp_msg_0;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GPVSAZQLNXVSKMMSPMFWDUKSNBKCDZYXECLIRICRXWUEIJGLWONEDSFOFXBFVTBZKRPZRIHYJNIVQHFQEVJXGXWMZAIRNAUJQOPZJQKWKNFTKOYAMFVFUSRTCWPCDPEWRNEGAHTZI");
    IMC::Magnetometer tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 18061U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.362398513531;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.644576820858;
    tmp_tmp_tmp_msg_0_0_0.z = 0.481005149968;
    tmp_tmp_tmp_msg_0_0_0.z_units = 119U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.774275582037;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 118U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.260341706642;
    tmp_tmp_tmp_msg_0_0_0.width = 0.0383758736318;
    tmp_tmp_tmp_msg_0_0_0.direction = 184U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NHCDUWGVXCITENGHWFWZTKDYXTBPKSORYMWUDALKZLQXLSQFWTZKSCNXOWPQNSJFGOAKDVSEAVHPAMABFQPRAYURASXVXDVBBKCRYWOUJUIXJAGMJYBSZMUAPUGEZJDVSWXKNLPAEQHIKYIIEBZFULCDNQGISELBGZGQNIIRKYTTUOLFCLSTYMEZJQNJVXHBRHHM");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 59415U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.447192119018;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.532372671483;
    tmp_tmp_tmp_msg_0_0_1.z = 0.783962567195;
    tmp_tmp_tmp_msg_0_0_1.z_units = 184U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.89813983617;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 227U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.x = 0.0881078696383;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.y = 0.324204023736;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.0485736008374;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.t = 0.459166640613;
    tmp_tmp_tmp_msg_0_0_1.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.custom.assign("UIYBZWEWDVBLNJVZJDBJZNSDVPNFUNXVXKOMQSPCAYNRKDUEGWIFHACLGBTPOPTOMTFKCEZOXRZNMIASZLSLZBCJLWMBOUNDAQRNQZTFDTTPMCHVRRXQZJYQOUGLSFSEXPJMVPHEOQKQTUJ");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.0634070034888;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.701303050356;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
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
    msg.setTimeStamp(0.348959075692);
    msg.setSource(17642U);
    msg.setSourceEntity(134U);
    msg.setDestination(28844U);
    msg.setDestinationEntity(155U);
    msg.op = 95U;
    msg.name.assign("HXZRPKYZKEAJLROLDBHVVQQJEIKAFMWTIXSUDKSRRNTUQPMEUXDUJFNZMXWIY");

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
    msg.setTimeStamp(0.115428442024);
    msg.setSource(45069U);
    msg.setSourceEntity(63U);
    msg.setDestination(59307U);
    msg.setDestinationEntity(176U);
    msg.op = 107U;
    msg.name.assign("OWSRQAVIRJAYIJPRZTMQLFZNBIFIZNOBMOPAMKZEAUKJZQADIJCWIHCUVCJECFBSCSGGKIXGMENPPDHMLCSNOMWREVYGZPGJLQJESQVKUTTLHAEVPZGXHCCQYDWHCVRFKRZSBEWX");

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
    msg.setTimeStamp(0.335066426528);
    msg.setSource(39372U);
    msg.setSourceEntity(244U);
    msg.setDestination(64432U);
    msg.setDestinationEntity(101U);
    msg.op = 214U;
    msg.name.assign("ZWXVPBNTMOVYSGWDVPUGTSRKBPSPORQQWYNAZHYFMLUHQEHLTIJZZJSVFOBRTBYUJZUUBNEIXYDLMPFUKNAOFEYNLTIUXMCHWWUQBFRPC");

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
    msg.setTimeStamp(0.0347874158489);
    msg.setSource(1088U);
    msg.setSourceEntity(5U);
    msg.setDestination(19240U);
    msg.setDestinationEntity(15U);
    msg.type = 224U;
    msg.htime = 0.119037784976;
    msg.context.assign("CKIGKFBWOJJWPDJYTBVMFWIKZSEQUHACEYELXNSSNXNDNWDAGZZDWSEKCOYACJVLTAERZZTRTRMMHEJFC");
    msg.text.assign("FXIEADADBTEYYHAOKODEMSZAFZMXLPRVIOIZBHDE");

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
    msg.setTimeStamp(0.104923328863);
    msg.setSource(59369U);
    msg.setSourceEntity(166U);
    msg.setDestination(33436U);
    msg.setDestinationEntity(2U);
    msg.type = 175U;
    msg.htime = 0.754719627844;
    msg.context.assign("IBWQIMMRWTRQJHACIZDNHCJVADMBSKEZKMDKYSSHHSOYXJJMGKSGGUSVYMAWEYJQFGKZDMWMOJWBCSOGXOYTRPKZXRPBUCAFTZTHNECJAIRYUAUDVLZLITPWEFIQQIVRNPCMPUVETEVDXQSVCLLGPIXWBDJDFPFNBZKNYQVTEFVNFNDQADYGLUOO");
    msg.text.assign("ZJTGICZOZPQRUHPSBMEMAVVYCSU");

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
    msg.setTimeStamp(0.463862110315);
    msg.setSource(23325U);
    msg.setSourceEntity(247U);
    msg.setDestination(65460U);
    msg.setDestinationEntity(86U);
    msg.type = 197U;
    msg.htime = 0.964156780927;
    msg.context.assign("EFVOMACTQNOQSQEDYPQDVREHYBXMIXBVWGTTLYQNEBVEEDCCQKBTPKGDLHCKCMRKUIVJMWSASWRKJRCNNHKCSEZDBI");
    msg.text.assign("FQJNNUIAIDAZXUYCNEAVUQOEEVOKGPMFXVXCGYPICDBBKHSIHLYRGGZYDYDLIWFSODTHLMTRPQWCLFGOJBSUVHC");

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
    msg.setTimeStamp(0.167071997925);
    msg.setSource(46997U);
    msg.setSourceEntity(238U);
    msg.setDestination(1135U);
    msg.setDestinationEntity(110U);
    msg.command = 116U;
    msg.htime = 0.990695019261;

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
    msg.setTimeStamp(0.171661463228);
    msg.setSource(15601U);
    msg.setSourceEntity(87U);
    msg.setDestination(4631U);
    msg.setDestinationEntity(72U);
    msg.command = 95U;
    msg.htime = 0.505481714824;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 34U;
    tmp_msg_0.htime = 0.909318507717;
    tmp_msg_0.context.assign("QACFHGXEPYMQTFEXZYGQMCERCHKQCWWRLQBTVOIAUVNXVGILAIHSKDAFXYFIXBDVVUKKOSNRILTTEVGMPKWKZTJPJXUOHAAGFZFULPNPEYPRSXJJBYOEOZPEHCJBF");
    tmp_msg_0.text.assign("ICDEHRFRQPCJOQRFAPMZMVSWBJIDLXJHOOZCMHQDZVKKYDJFJIAVOPGEDHGGKIKCCPBYMIAHCGANJWNCOTQYTXBDZVVAOZWFYRMRDFUSONXVIIHFZLGJT");
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
    msg.setTimeStamp(0.0857339441224);
    msg.setSource(42918U);
    msg.setSourceEntity(48U);
    msg.setDestination(11959U);
    msg.setDestinationEntity(137U);
    msg.command = 200U;
    msg.htime = 0.815574332274;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 4U;
    tmp_msg_0.htime = 0.502461177982;
    tmp_msg_0.context.assign("QVCYAFUTILBJJMBHSSQEZHAOLZWXMHNVRWAC");
    tmp_msg_0.text.assign("RGQJGJFMRFTEFPBZUZRVGWC");
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
    msg.setTimeStamp(0.58115481103);
    msg.setSource(40637U);
    msg.setSourceEntity(132U);
    msg.setDestination(58777U);
    msg.setDestinationEntity(178U);
    msg.op = 211U;
    msg.file.assign("FDIYRPYPFCMF");

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
    msg.setTimeStamp(0.0495377526571);
    msg.setSource(42095U);
    msg.setSourceEntity(101U);
    msg.setDestination(61487U);
    msg.setDestinationEntity(84U);
    msg.op = 86U;
    msg.file.assign("HREXJMJGZQIZKPRUPCUVPVQEXYDXATQVWZEOMIFDCXGXTBJSTYRDCFAEQYWQMJTPDFZZHNANOAWVNYSOCNZNLJMJXSCOLBICQNHVGEILBRTGKMWNCJIH");

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
    msg.setTimeStamp(0.954522401311);
    msg.setSource(60352U);
    msg.setSourceEntity(231U);
    msg.setDestination(20658U);
    msg.setDestinationEntity(234U);
    msg.op = 56U;
    msg.file.assign("HQWTPHLODXAVJVZNNJDSLHMEHTPXLSTXVRRKFYRSFNHPWSOPQOBXHSGHXZUUXQNFATRLIGKADHECLSAEGEYRVUIWSRWYAOCKCLUZZNOWVJDA");

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
    msg.setTimeStamp(0.0209531445891);
    msg.setSource(28335U);
    msg.setSourceEntity(148U);
    msg.setDestination(3582U);
    msg.setDestinationEntity(109U);
    msg.op = 27U;
    msg.clock = 0.965685143642;
    msg.tz = -95;

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
    msg.setTimeStamp(0.386925487105);
    msg.setSource(44522U);
    msg.setSourceEntity(189U);
    msg.setDestination(4079U);
    msg.setDestinationEntity(210U);
    msg.op = 242U;
    msg.clock = 0.647507445843;
    msg.tz = -19;

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
    msg.setTimeStamp(0.461457256812);
    msg.setSource(19437U);
    msg.setSourceEntity(239U);
    msg.setDestination(47337U);
    msg.setDestinationEntity(11U);
    msg.op = 92U;
    msg.clock = 0.66832550237;
    msg.tz = -58;

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
    msg.setTimeStamp(0.351177150173);
    msg.setSource(43454U);
    msg.setSourceEntity(246U);
    msg.setDestination(25199U);
    msg.setDestinationEntity(0U);
    msg.conductivity = 0.106502864181;
    msg.temperature = 0.913745343209;
    msg.depth = 0.863009257987;

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
    msg.setTimeStamp(0.284372498294);
    msg.setSource(20108U);
    msg.setSourceEntity(82U);
    msg.setDestination(52443U);
    msg.setDestinationEntity(133U);
    msg.conductivity = 0.752729357109;
    msg.temperature = 0.861719037512;
    msg.depth = 0.332286287443;

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
    msg.setTimeStamp(0.769861236587);
    msg.setSource(61487U);
    msg.setSourceEntity(229U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(154U);
    msg.conductivity = 0.886067168284;
    msg.temperature = 0.0187457491445;
    msg.depth = 0.245578205433;

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
    msg.setTimeStamp(0.561701830283);
    msg.setSource(43415U);
    msg.setSourceEntity(132U);
    msg.setDestination(1790U);
    msg.setDestinationEntity(175U);
    msg.altitude = 0.433698757156;
    msg.roll = 10803U;
    msg.pitch = 38637U;
    msg.yaw = 56060U;
    msg.speed = 19532;

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
    msg.setTimeStamp(0.142307638749);
    msg.setSource(63543U);
    msg.setSourceEntity(160U);
    msg.setDestination(35992U);
    msg.setDestinationEntity(240U);
    msg.altitude = 0.502947434519;
    msg.roll = 18237U;
    msg.pitch = 27373U;
    msg.yaw = 49244U;
    msg.speed = 21764;

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
    msg.setTimeStamp(0.279438083928);
    msg.setSource(34336U);
    msg.setSourceEntity(163U);
    msg.setDestination(50660U);
    msg.setDestinationEntity(82U);
    msg.altitude = 0.0129939847661;
    msg.roll = 57177U;
    msg.pitch = 65037U;
    msg.yaw = 30211U;
    msg.speed = -15336;

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
    msg.setTimeStamp(0.801856774437);
    msg.setSource(4594U);
    msg.setSourceEntity(160U);
    msg.setDestination(42040U);
    msg.setDestinationEntity(161U);
    msg.altitude = 0.803991786297;
    msg.width = 0.555356436012;
    msg.length = 0.0676080320417;
    msg.bearing = 0.194700736649;
    msg.pxl = -23352;
    msg.encoding = 20U;
    const char tmp_msg_0[] = {-35, 95, 87, -73, 116, -2, 10, -67, 20, 13, 90, 18, 110, -17, 42, -59, -64, 28, 27, -122, 123, -113, 92, 76, 86, -51, 83, -24, 17, 50, -89, -105, 64, 121, -10, -18, -19, -44, -9, -91, 102, -95, -20, 37, -86, 5, 85, -84, -15, 76, 25, 75, 73, 52, -94, -124, 84, 50, -45, 9, 72, 37, -32, 123, 67, 73, 66, -92, 52, -109, 118, 54, 40, -126, -59, 39, -96, -63, -69, 110, -65, -127, 91, 7, 59, -62, 54, -25, 123, 25, 14, 7, -60, 24, -1, -24, 39, -94, -63, 105, 107, 46, 87, 58, 54, 50, 22, -16, -104, 123, 26, 89, 64, 33, 7, 64, -24, -100, 51, 70, -6, 87, 95, 24, 38, -92, -104, -60, 42, 120, 116, -53, -36, -115, 38, 5, 1, -18, -94, -89, -119, 113, 119, -42, 112, -17, -5, -34, 119, 80, 8, 83, -106, -66, -21, -48, -100, -82, -55, 110, -16, 41, -43, -115, 90, -41, 15, 36, -40, 15, 5, -96, 84, 111, -111, -90, -96, -81, -96, 99, -117, 61, 91, -124, -50, 31, -17, 4, 116, -2, -78, -5, -111, -128, 21, -59, 27, 5, -25, 107, -20, -58, 69, 107, 50, 62, 91, 14, -125, 103, 106, -48, 84, -67, 41, 73, 37, -92, -64, 125, 9, -17, -26, 88};
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
    msg.setTimeStamp(0.0388292225376);
    msg.setSource(32275U);
    msg.setSourceEntity(71U);
    msg.setDestination(27065U);
    msg.setDestinationEntity(66U);
    msg.altitude = 0.426890039367;
    msg.width = 0.969172122242;
    msg.length = 0.466098271208;
    msg.bearing = 0.0226054034696;
    msg.pxl = -22808;
    msg.encoding = 115U;
    const char tmp_msg_0[] = {5, 126, 70, -81, 89, -121, 33, -66, -116, 80, -125, -13, 14, -29, -19};
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
    msg.setTimeStamp(0.749260523743);
    msg.setSource(54715U);
    msg.setSourceEntity(160U);
    msg.setDestination(39709U);
    msg.setDestinationEntity(51U);
    msg.altitude = 0.112447750639;
    msg.width = 0.00835521989321;
    msg.length = 0.342133900516;
    msg.bearing = 0.868555752281;
    msg.pxl = 28454;
    msg.encoding = 66U;
    const char tmp_msg_0[] = {-89, 5, -116, -24, 98, 64, 125, 41, 92, 67, 48, -52, 42, -14, -9, 45, -128, -17, 44, -38, -124, 98, -66, -78, 33, -124, -97, -82, -28, -2, 104, 70, -31, -80, -119, -28, 113, 20, -118, -94, -46, -86, 42, 0, -100, -124, 67, 109, 31, 116, 58, -62, -10, -41, 15, -80, 2, 82, 42, -47, -70, -74, -63, 14, 30, 55, -116, 44, 69, -66, 55, -87, -22, 123, 24, -105, 117, 109, 122, 99, -73, -96, -20, 10, -22, -47, 66, 29, -100, 115, 57, 64, 35, 123, 49, 93, -22, 46, -68, -108, -45, -30, -32, -64, -112, -8, -113, 16, -3, -12, 66, 45, -119, 33, 117, -79, -97, -1, -80, 62, 100, -106, 42, -2, -121, -128, 67, -72, 58, 50, -51, 69, -125, -101, -37, 48, -23, 29, 31, 91, -86, -69, 49, 115, -24, 50, -99, -119, 33, 7, -98, -52, 106, -25, -24, 90, 85, -91, 54, 104, 25, -28, -128, -69, -40, 97, -51, -105, -112, 61, 17, -105, -116, 108, -121, 28, 95, 122, -80, -34, -88, 64, 99, 94, -12, 107, -44, -32, -87, 68, 65, 113, -80, 46, 55, 2, 49};
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
    msg.setTimeStamp(0.237000707952);
    msg.setSource(1649U);
    msg.setSourceEntity(55U);
    msg.setDestination(26617U);
    msg.setDestinationEntity(62U);
    msg.text.assign("LNYGXLYWTPUHSHCNJTWZQPZNJSCMTQFLMBFHDTWLREJGXYEWSAVFCXWCHKTXPXNGJIUZACRIOULV");
    msg.type = 117U;

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
    msg.setTimeStamp(0.355909582101);
    msg.setSource(32420U);
    msg.setSourceEntity(14U);
    msg.setDestination(33260U);
    msg.setDestinationEntity(245U);
    msg.text.assign("ETNTSWLPLCGMHMTXFHQABTWHXZUAFDDEVJZADUXOLWXVTHEOYPQU");
    msg.type = 187U;

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
    msg.setTimeStamp(0.513558939913);
    msg.setSource(5491U);
    msg.setSourceEntity(40U);
    msg.setDestination(18630U);
    msg.setDestinationEntity(131U);
    msg.text.assign("IUZUWLWVNJJOGFZZDWOVLMALPILAGAGHOHEOFYPHOFOCUVSXHHOAWMEBYHBXCBQZFYACTDULLXVZBMMPYBHDTJRWGHVGFWKLSQMBQWWBNFJRJTRNE");
    msg.type = 29U;

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
    msg.setTimeStamp(0.232599394437);
    msg.setSource(44591U);
    msg.setSourceEntity(214U);
    msg.setDestination(45636U);
    msg.setDestinationEntity(88U);
    msg.parameter = 107U;
    msg.numsamples = 104U;
    msg.lat = 0.370270607235;
    msg.lon = 0.106970619445;

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
    msg.setTimeStamp(0.306981695302);
    msg.setSource(23851U);
    msg.setSourceEntity(127U);
    msg.setDestination(35461U);
    msg.setDestinationEntity(74U);
    msg.parameter = 143U;
    msg.numsamples = 171U;
    msg.lat = 0.0238954498378;
    msg.lon = 0.0191774290806;

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
    msg.setTimeStamp(0.450770969627);
    msg.setSource(32383U);
    msg.setSourceEntity(179U);
    msg.setDestination(20921U);
    msg.setDestinationEntity(226U);
    msg.parameter = 245U;
    msg.numsamples = 244U;
    msg.lat = 0.371798564313;
    msg.lon = 0.363521923822;

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
    msg.setTimeStamp(0.269583773664);
    msg.setSource(30228U);
    msg.setSourceEntity(142U);
    msg.setDestination(32595U);
    msg.setDestinationEntity(205U);
    msg.depth = 14891U;
    msg.avg = 0.235314183622;

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
    msg.setTimeStamp(0.955488874776);
    msg.setSource(62295U);
    msg.setSourceEntity(20U);
    msg.setDestination(52827U);
    msg.setDestinationEntity(168U);
    msg.depth = 25819U;
    msg.avg = 0.981393732638;

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
    msg.setTimeStamp(0.255352055987);
    msg.setSource(35495U);
    msg.setSourceEntity(4U);
    msg.setDestination(42255U);
    msg.setDestinationEntity(208U);
    msg.depth = 30049U;
    msg.avg = 0.720872401643;

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
    msg.setTimeStamp(0.747973049481);
    msg.setSource(62944U);
    msg.setSourceEntity(84U);
    msg.setDestination(27437U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.215055535309);
    msg.setSource(34345U);
    msg.setSourceEntity(15U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.078298069619);
    msg.setSource(2388U);
    msg.setSourceEntity(195U);
    msg.setDestination(52493U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.166392399966);
    msg.setSource(50027U);
    msg.setSourceEntity(101U);
    msg.setDestination(53941U);
    msg.setDestinationEntity(92U);
    msg.sys_name.assign("UQMLJMFXCUSLDZNDXTUCMBZZNWHELZQUGZEVRAZZYYLPWYVLUVQOWIJGKEUAPGFJMFTSDVXXERDAWIOKOEIQOTNTNRSRWSGNJXIOEAAEQHSNWIBJDUXMHLWMDFKBFBYHHFGPNRTXLMHYTVMCPJPPZIQLFDZQJAU");
    msg.sys_type = 147U;
    msg.owner = 55549U;
    msg.lat = 0.645274998759;
    msg.lon = 0.960343214663;
    msg.height = 0.402858417409;
    msg.services.assign("DONKJYEVKYGZUWSMRTGNVPQPRHBWJXQRFMIHZJLCVSTPLQSUFTHOJCOWWFDCZNOTVAEPNYLKCSKEIHQLAUAAAFIXJTDGTGVBBYCRNLFWDKPDNBPFCEXWTWVOBUWMKJYGAJFRDQYEKSECJNHFGPOQYOCCKDSMOPWVEKSSLGYLFGXOSBTXXYMVVDREZHXANA");

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
    msg.setTimeStamp(0.523115044996);
    msg.setSource(18938U);
    msg.setSourceEntity(17U);
    msg.setDestination(20013U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("SFKWSTOHTHOENDAHFTGLVWPYVLUIGIJEIHXPCKXBEYPTNFMTAQNJMOFVWYSNRCLZJGRKSUIWBZSBUQUPQOFAOVXLJRWDSCBGCBWRKEOXLMGPYKKSIYENLULEAGJNYDHWIVVDSKYMAJAOGDKXEVZGUICHQQOGSZRDMCTQFALUQZAVXONTVEORZVSDMZXDHHYKAQQZWYBPJJMLRAUTLCUPWREDYRTMXCCDEBBWNMBIIXFGMIHKPTC");
    msg.sys_type = 211U;
    msg.owner = 58483U;
    msg.lat = 0.509727869286;
    msg.lon = 0.0918291337209;
    msg.height = 0.474715893433;
    msg.services.assign("SFUAJGWYKOHDXTMVDQZBDTIHOZRHZYNCXKPWKQAKBVPTLYSQZWELZAPYRIQVECKEGGQTHUBWVWLRIAFLICQIBGPXDQROMSJNNWNLZHCGODNPQMWCXKFFAKZUBZ");

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
    msg.setTimeStamp(0.0437579482831);
    msg.setSource(43333U);
    msg.setSourceEntity(11U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(248U);
    msg.sys_name.assign("LDBNDOXPQMQYOPSJYKMZLJXGYAOBVAOAWBDENONMBCVKQJSTICBCZWLUL");
    msg.sys_type = 57U;
    msg.owner = 58018U;
    msg.lat = 0.258122155656;
    msg.lon = 0.134364687861;
    msg.height = 0.0469408028433;
    msg.services.assign("NLGKAADQGRWKSZNE");

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
    msg.setTimeStamp(0.26975407135);
    msg.setSource(35587U);
    msg.setSourceEntity(22U);
    msg.setDestination(42550U);
    msg.setDestinationEntity(200U);
    msg.service.assign("MGZGEWXOVN");
    msg.service_type = 98U;

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
    msg.setTimeStamp(0.671248587535);
    msg.setSource(43222U);
    msg.setSourceEntity(18U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(98U);
    msg.service.assign("JCRMGRFEPSIBGRBQZPRMNIVSTPLISFOOZVJDXPHMWNDXAKBPVZARAZINRFICCYWXBWEPOISGQYSOWXFNHHITNSGDBGKGT");
    msg.service_type = 34U;

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
    msg.setTimeStamp(0.0276997560135);
    msg.setSource(55113U);
    msg.setSourceEntity(6U);
    msg.setDestination(15584U);
    msg.setDestinationEntity(151U);
    msg.service.assign("SXBLGSXNWUKGVNDZBAYWQHRFXCNAHYHRGLJDGEUSAXKAWESMYTCVVQXYIHCJMFVDHGDMJPLDZJZIFPDNOAFUQAEOSFKYZHUFLVIRGCRGYZQZCLUIXQXLCUKNIQDWGCPNLTTXT");
    msg.service_type = 58U;

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
    msg.setTimeStamp(0.508156779837);
    msg.setSource(44942U);
    msg.setSourceEntity(222U);
    msg.setDestination(52344U);
    msg.setDestinationEntity(75U);
    msg.value = 0.420746252773;

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
    msg.setTimeStamp(0.371166212761);
    msg.setSource(56409U);
    msg.setSourceEntity(235U);
    msg.setDestination(8690U);
    msg.setDestinationEntity(204U);
    msg.value = 0.635644892412;

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
    msg.setTimeStamp(0.368409525058);
    msg.setSource(10312U);
    msg.setSourceEntity(194U);
    msg.setDestination(57420U);
    msg.setDestinationEntity(199U);
    msg.value = 0.347276256242;

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
    msg.setTimeStamp(0.766457841824);
    msg.setSource(22869U);
    msg.setSourceEntity(175U);
    msg.setDestination(15562U);
    msg.setDestinationEntity(110U);
    msg.value = 0.0911894803486;

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
    msg.setTimeStamp(0.371210539083);
    msg.setSource(48385U);
    msg.setSourceEntity(121U);
    msg.setDestination(61679U);
    msg.setDestinationEntity(167U);
    msg.value = 0.303465294457;

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
    msg.setTimeStamp(0.882081161639);
    msg.setSource(60103U);
    msg.setSourceEntity(123U);
    msg.setDestination(29393U);
    msg.setDestinationEntity(190U);
    msg.value = 0.499543096383;

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
    msg.setTimeStamp(0.749860232109);
    msg.setSource(55865U);
    msg.setSourceEntity(74U);
    msg.setDestination(28706U);
    msg.setDestinationEntity(206U);
    msg.value = 0.415993468806;

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
    msg.setTimeStamp(0.0231131434962);
    msg.setSource(51978U);
    msg.setSourceEntity(43U);
    msg.setDestination(43282U);
    msg.setDestinationEntity(8U);
    msg.value = 0.787333346972;

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
    msg.setTimeStamp(0.983095776827);
    msg.setSource(25358U);
    msg.setSourceEntity(109U);
    msg.setDestination(48954U);
    msg.setDestinationEntity(108U);
    msg.value = 0.850721500406;

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
    msg.setTimeStamp(0.55665017354);
    msg.setSource(26340U);
    msg.setSourceEntity(123U);
    msg.setDestination(20620U);
    msg.setDestinationEntity(105U);
    msg.number.assign("UECFZHPNLUESFVISETXMAQOULPOSKLGKHCZDYASWSAWANETNSHFPITYSONWJQYPCIGAXGEPNEWTCXYUEQKMBBFBUTDRJVAFVPF");
    msg.timeout = 11433U;
    msg.contents.assign("LPORHDHVUEHEMXFOWACYZSDRXKGHJATOXCBIOFWQIBKLCAONDGKON");

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
    msg.setTimeStamp(0.526515877784);
    msg.setSource(12392U);
    msg.setSourceEntity(126U);
    msg.setDestination(18806U);
    msg.setDestinationEntity(175U);
    msg.number.assign("KESKQSVTDLTKQMPUDZLGKOLUEQXEWOCVWIJCBZSGMTJMXGUGCGSQCIJYJNXXBSKRZMPQBLBHNNVTREOJOKPFMGRUEQZVNRYMHQZWBLTCPYRAAIYWANTAKCAIYGTDROLZSLSXRKDFOCPAAMDTIIHZJC");
    msg.timeout = 9380U;
    msg.contents.assign("KSLPHNTVIYQAGVTYKGFJGLOREKMBSGEIGN");

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
    msg.setTimeStamp(0.480776000989);
    msg.setSource(10284U);
    msg.setSourceEntity(43U);
    msg.setDestination(33792U);
    msg.setDestinationEntity(168U);
    msg.number.assign("XNBLNTUXGBHFRDHEJINRMMZPWINLCTMVHQYQVKFLMCDSTAGSRUBYXHKANFQNXJPSJSNJBUCWGYDBDXQZIRVKPKTMZYPAXDCOWXSWSJEHZUKOQX");
    msg.timeout = 63764U;
    msg.contents.assign("LKBKCUMGRQDJAKBNCAPRBRVLLCQTUAMNWYXBEWSCUZVHFBTSHADAVKUUBLUQGJLWGPYEAGWFHVAIXPYYKGXPMESNPTNPTGXIBMGWYWOSDFRPHYNQJOFREEIZTKUHCGDDMFMDRFVJSQTLDKOOYNHVSWQQWBTYBXFCNZVZRLT");

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
    msg.setTimeStamp(0.106637696482);
    msg.setSource(43956U);
    msg.setSourceEntity(123U);
    msg.setDestination(47055U);
    msg.setDestinationEntity(248U);
    msg.seq = 155011736U;
    msg.destination.assign("BMMDNWIYDBBPRGSQBVNGGHBTOBZWYJWWZFQUUFVVQHPGXNKGZLMWIJNEFWVFYLEZZTRZKJCFAGOXUUOOXPLLISYKGUITIECYIJHSDRYNFGDJWAQQLDXZCDGJDLYHCOPKEFKQHKLEPSNXCEMRIVQTURHBSVCXMRXHAOEW");
    msg.timeout = 35832U;
    const char tmp_msg_0[] = {40, -44, 111, -3, 5, -42, 87, 88, -54, 2, -113, 125, -37, -3, -56, -11, 62, -114, 17, 13, -7, -14, 50, 10, 112, 59, -59, -72, 54, -109, -117, -82, 77, -18, 99, -106, -39, -101, 76, 75, 31, 47, -121, -74, -30, 75, 37, 103, 18, 18, -33, -44, 80, -81, -71, 92, -4, -90, 87, 51, -96, -117, 13, -97, -109, 71, 61, -8, -74, -81, -95, -25, -72, -70, -35, 28, -43, 27, 74, 42, 42, -125, 112, -71, -52, -67, -42, -28, 50, -41, 117, 78, -92, -28, 15, 81, 6, 6, -86, -7, -86, 8, -26, -71, -59, 16, -75, 25, 67, 44, -6, -78, -42, 64, 46, -29, -28, -97, -125, 48, 38, 81, 116, 53, 125};
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
    msg.setTimeStamp(0.63788086798);
    msg.setSource(60650U);
    msg.setSourceEntity(75U);
    msg.setDestination(3467U);
    msg.setDestinationEntity(124U);
    msg.seq = 2731849779U;
    msg.destination.assign("AJGCXLEUHXAIRJDLQXIPN");
    msg.timeout = 8425U;
    const char tmp_msg_0[] = {8, -69, -62, -117, -105, 110, -21, 8, 56, 83, -18, -68, -2, 70, -98, 110, 9, 30, 10, 5, 91, 66, -19, 122, 102, 21, -97, -85, 76, 103, -84, -67, 73, -99, -111, -25, -44, 121, 18, 26, 37, -64, -75, -84, 34, -124, -108, -92, -120, -70, -3, -21, -68, 40, -109, -34, -59, -61, -84, 103, -13, -40, 30, 81, -33, 16, 87, 122, 27, -4, 64, 124, 101, -116, 5, -12, 59, -96, -87, -124, 85, 39, -100, -49, -50, -123, 0, -91, -20, 13, -96, -113, 121, 10, 121, 79, -100, 84, -73, -14, -15, -31, -57, 22, -107, 28, -67, -54, -44, -47, 82, -19, -59, -117, -120, 24, -100, -7, -69, 43, -72, 42, -30, 25, 9, -111, 83, -42, 92, 31, 91, -31, -76, 41, -80, -74, 10, -97, 3, -24, 69, 87, -107, 80, 14, 46, 118, -52, 46, 19, -117, 24, 13, 65, 57, -19, 34, 69, 115, -6, -104, 85, -28, -128, 20, -16, -2, 70, -7, 117, -34, -26, -113, 54, -35, -74, -110, 29, 113, 3, -48, -61, 84, -54, 96, -80, 34, -102, -44, 16, 124, -64, -35, -96, 103, -69, 46, -65, 24, 101, -99, -54, 23, 45, -121, 56, -88, -63, -50, -55, -9};
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
    msg.setTimeStamp(0.672835550782);
    msg.setSource(49166U);
    msg.setSourceEntity(206U);
    msg.setDestination(19946U);
    msg.setDestinationEntity(232U);
    msg.seq = 3626426789U;
    msg.destination.assign("URWHQDKIONVMISWGATRSIQPNVDEDBSWQVCXJYFMFUJYUPLUWGGZIPCJVXMBHALAJRTQ");
    msg.timeout = 1893U;
    const char tmp_msg_0[] = {32, -58, -91, -5, 43, -107, 35, 20, -46, 20, 117, -91, -77, -47, 45, -72, -21, -62, -119, 71, 125, -124, 1, -111, 96, -44, -53, -43, 50, 99, -74, -42, 105, -88, 110, -41, 1, 23, 77, -34, -72, -20, 77, -4, 21, -127, 101, 47, 58, -127, 9, -5, -60, -14, 73, 6, 39, -98, -125, 26, -32, -42, -114, -24, -46, 57, -52, 11, -32, -14, 8, -8, -78, -65, 100, -46, 4, -15, -51, -2, 57, -126, 10, 11, -16, 73, 67, -85, 13, -11, -75, -40, 60, -66, -63, 55, -110, 81, -73, 27, 98, -14, -97, 10, -110, -126, 87, -16, -2, -22, 125, -2, -99, 87, 100, -89, 111, 83, 34, -58, 115, 52, -49, 67, -50, -1, -1, -53, -24, 72, 9, 91, 80, -36, 69, -59, -28, 67, 111, 9, 34, 20, -128, -82, 104, -36, 32, 81, -113, 30, 0, -5, 66, -2, -32, 85, -47, 57, -127, -69, -7, 81, -96, 88, 97, -9, 25, 98, -42, -115, -9, 28, -19, 40, -37, 63, -102, 57, -95, 120, -45, -75, -53, 114, -12, 107, 40, -9, -17, 27, -77, -67, 2, -37, -32, -61, 7, 69, -5, -11, -127, -124, -109, -16, 23, -17, -55, -63, -40, 49, 77, 108, -75, 73, -104, 86, 66, 105, 123, -62, 98, -45, 41, 77};
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
    msg.setTimeStamp(0.195910067542);
    msg.setSource(42412U);
    msg.setSourceEntity(232U);
    msg.setDestination(4392U);
    msg.setDestinationEntity(176U);
    msg.source.assign("TEZOKGHBGVATYEMMSDNNXWGGZQWFLOIPJNSOIVCKAAUWAJSHQKHZYCKCHKDXNHPAOBIQMAYGPZYUGHRBEWBEP");
    const char tmp_msg_0[] = {-36, -108, -54, -123, 116, -62, -83, 93, -128, 67, 2, 34, 74, 94, -91, 88, 7, -36, 20, -75, -24, 119, 75, -18, 42, -68, 42, 106, -111, 44, -121, -74, 59, -118, 46, 36, -84, -124, -79, 117, -4, 48, -72, 125, 48, -78, 83, 37, 90, -37, 61, -124, 117, 125, 11, -25, -113, -54, -15, 94, -78, -38, 122, -49, 31, -66, -94, 122, 117, 71, -120, 84, -58, 104, -18, -110, -74, 98, -56, -5, -125, -69, 53, -68, -110, -13, 66, 25, 34, 113, 20, 7, 105};
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
    msg.setTimeStamp(0.730633224157);
    msg.setSource(11771U);
    msg.setSourceEntity(102U);
    msg.setDestination(18858U);
    msg.setDestinationEntity(145U);
    msg.source.assign("SVUDPLCNUHUDVJOVDSWNIBOJOJCOJTHHFTOFSKRXETAWWJOOVTVF");
    const char tmp_msg_0[] = {-68, 39, -72, -104, 62, 61, -52, -78, 110, 91, 40, 63, -86, 80, -79, -106, -33, -25, 8, 72, 8, 57, -36, -13, 64, -51, 47, -112, -74, -6, -16, 67, 19, -81, -77, -68, -74, -15, 111, 91, -57, 40, 17, -39, -58, 34, 93, 21, 19, -60, -115, 120, 115, -44, -17, 28, 122, 54, 21, 21, 24, -71, 46, -29, 36, -127, -70, 45};
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
    msg.setTimeStamp(0.62970211065);
    msg.setSource(21319U);
    msg.setSourceEntity(245U);
    msg.setDestination(43904U);
    msg.setDestinationEntity(112U);
    msg.source.assign("ZTKTBIPKPXJPOMMCUTCIFQQZPJOAJXQAUGKOWJPMHBISZYCXAFNQKDBNVHAWDCYEWMWVFNWEDBLOILGILOJSURGEGVUEGVRIAXSWOORZESHFZIIDFIWXKYZYBQTKXENMV");
    const char tmp_msg_0[] = {-1, 93, 11, -92, 62, 115, 106, 105, 99, 46, 71, -124, 31, 78, 92, 120, 75, 90, -31, 31, -122, 4, -16, -64, -52, -72, -19, 101, -127, 10, -60, 84, -126, -83, 93, -33, -85, -27, 69, 18, -7, -9, -119, 26, -23, 101, 47, 97, -58, 11, -7, -119, 9, -42, -1, -88, -123, 123, -125, -86, 118, 78, 95, -11, 33, -84, -51, -120, 64, -29, 32, 102, 74, 41, 99, -116, 2, 21, -85, 59, 69, -93, -3, -45, -38, 59, 122, 87, 66, 53, -62, -77, 101, 11, -52, -1, 38, -123, 112, -61, -7, -17, -53, -67, 16, -37, 84, -125, 11, 39, -33, 119, -83, 88, 48, 66, -68, 20, 53, -66, 67, -85, -119, -108, 34, 70, 53, 67, 108, 113, -23, 109, 16, 20, -93, 27, 59, 126, -100, -16, 57, 118, -42, -86, -124, 124, 5, -123, -19, 88, -79, -24, -3, 4, -23, 1, 12, -114, -91, -48, 93, 47, 41, 117, 126, 91, 110, 48, 39, 43, -89, -7, -26, 126, 34, 37, -126, -19, -123, -73, -116, -39, 104, -43, 95, 95, 46, -92, -83, -69, 114, 16, -96, 108, -102, 122, -54, -51, -97, -18, 70, 119, 34, 7, -113, 118, -121, -2, 73, -58, -79, -57, -58, -30, -123, -76, 111, -85, -21, -50, 116, -65, -80, 97, -4};
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
    msg.setTimeStamp(0.211379892931);
    msg.setSource(28894U);
    msg.setSourceEntity(10U);
    msg.setDestination(7394U);
    msg.setDestinationEntity(128U);
    msg.seq = 3582261303U;
    msg.state = 106U;
    msg.error.assign("YHQPUZKLQNXSUKBIOACREONWCIXHLQAPPLYWQTYODOCAVGTMNZKWSMYZZUSMZIPPEBGFXQHUKFSBGDMRPBJAQKSXWCGPZBJTYRPVUKGTSEWUMSIRIFJRDNIUJATZXYLFNDZHVENZP");

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
    msg.setTimeStamp(0.815997621703);
    msg.setSource(3289U);
    msg.setSourceEntity(250U);
    msg.setDestination(51934U);
    msg.setDestinationEntity(179U);
    msg.seq = 2739902155U;
    msg.state = 9U;
    msg.error.assign("LNHWXYGVSXJJWZLCGOWWRVXLANFQBGTMMAFRBCHGNUZTWOAHMKXMRKVDZAERAHMVPONYQXTIHPCNBYH");

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
    msg.setTimeStamp(0.133599412194);
    msg.setSource(31971U);
    msg.setSourceEntity(254U);
    msg.setDestination(47460U);
    msg.setDestinationEntity(233U);
    msg.seq = 1334231459U;
    msg.state = 251U;
    msg.error.assign("PQRFOGNOMLPBBHQMEYARSDIJDLATNTBHVRYNVKCEIUMOGTIZOUMMUWXXSRYCGXSFQACKRMQEIVCQHGAYLNUOGCNELTNWKCZKRKZFIRAQFHIVAUDXPMKLEKBGBGEWVNWBOMOPTSLOUDWTEIXWFOGBLIVNFVZBKQSDEMETHAKFPVBHXSYUZURYQXPNDAXZTJRQRDQGPUCENJVWPWJLDWHYCGPJSKTYPAXJLBSZOFHJFYWZJJTDUSYLMAFSZHIZ");

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
    msg.setTimeStamp(0.572552373517);
    msg.setSource(34319U);
    msg.setSourceEntity(110U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("VZIFKGZFWTPFNHRKPGGKBSMFQEEDKETUEWXOYQZOXSPAJCNXOOHELANLGTYLVUTDUPYRUHJCIVQESBUZFYTMPXWZLOCEGIWLDTKVNYHUMGAJCSJJNHWKHSPILXKITQEUYSMORAZDRVEZUMXVHINWW");
    msg.text.assign("VCZSSARDXWGMMZMFCJTVWCQIWKGJAJLQXC");

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
    msg.setTimeStamp(0.380352388058);
    msg.setSource(9297U);
    msg.setSourceEntity(230U);
    msg.setDestination(5481U);
    msg.setDestinationEntity(165U);
    msg.origin.assign("BWRSXBNOBITEAIKEQCYHWZLZIJDBUFUOKDGDPOQJLJJPQPLTBMEHXPYTYSPTGRIXZEEPAVDBNFDKRGGCKOAJCNMBDIJKCSUJFNLHFSTAAQBXYRPYRYOXTCTFOUDXDSLWKMAQRPWOWMQLZLWCNCEXKGHUNFEQVKVEMGIWEXHECTUFSZXCAKIZMJUAYQVIGWMBPVYUO");
    msg.text.assign("REJYFLQSUUCAXQTXMCNKYTEESDLSWNLMJPXDYCHIGLFOMVAWRWEULNFTEBYXVRHTWPIVGQMJKDCTNJOVCFRAPUOTHBBGQJNPNRGDJZHTKMQKAZLJKEQCVOEFZXFPIYOGVGSQZXZ");

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
    msg.setTimeStamp(0.686386885733);
    msg.setSource(48979U);
    msg.setSourceEntity(249U);
    msg.setDestination(64018U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("UZJJUTXKLFNYSQDGHEGIRDKVYKCYNHYUIRWLSWWVYCLDSQZQKNBSORZDAQYHEJMJUAUFBQQZPZFZNUTSHANXTGIECBHLETYBTLWXFORZMHPOWDNRSAVKUMTQMTFPXFWWLYNTVLRRJGCDJESZECKIAAXIFXLQGIEPBARZCWVAYMSKLEAMQGCOXUTOHCGM");
    msg.text.assign("RQOULQYGEAPWFIAVYBZMHLSZLTKVRXHMAGNWGJTNXKAMFYDODZKDAVJZBSPEMYCJFUBKSUBPAHUOEYCCOARUILWLNIDCPUCXXKTGJDNRWCHYRWTEBHFDYBKVTKOQFHRQLS");

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
    msg.setTimeStamp(0.749083230416);
    msg.setSource(19308U);
    msg.setSourceEntity(174U);
    msg.setDestination(63190U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("HAEZKXSGCJCUCNRLHVAKHZAXWZRFCNDUZXMBWOGSBBKFPRMSHVDSHOAPTZWDYPKRLWJXIZTZMQYUTFLLKSYGSMNOWPIVGOLIHVWQURHHSMBCGAKODXEJQYVXUQUBDCNXGFZVYYYBOWTJPOCBARRFQIBTQNJIKFWBZGXTDIFJTDUWUCKPCJNEAEDRTSAEMDLEWNTZAISTKVUSHIEQVJNCPMIOQPMOQXXJPENVYGYDHLFREAGRLVLOUYQB");
    msg.htime = 0.190602785776;
    msg.lat = 0.898010917033;
    msg.lon = 0.736133547252;
    const char tmp_msg_0[] = {-122, 11, 112, -62, -12, 87, -80, 16, 14, -44, -83, -52, -25, -100, 77, -108, -112, 24, 3, 16, -20, 114, -87, -65};
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
    msg.setTimeStamp(0.023908239274);
    msg.setSource(10231U);
    msg.setSourceEntity(160U);
    msg.setDestination(37837U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("OIQUNWNCMUSGVCNIUVOHRZPHRFBWSRHTZBADFWOPSPYVKPZSWFPBDETXEBJSBLGOK");
    msg.htime = 0.0660521949652;
    msg.lat = 0.715898614186;
    msg.lon = 0.624016963651;
    const char tmp_msg_0[] = {-48, -118, -13, -50, -99, -10, -4, -76, 49, 31, -60, 14, -14, -55, 14, 22, 25, 7, -70, 23, 79, -34, -54, -86, 7, 88, 6, -60, -97, 54, 117, -42, -7, 114, -115, 55, 62, 54, -62, 3, -49, 73, -63, 27, 96, 71, -5, 74, -25, 68, -114, -92, -60, -62, 50, -42, -36, 8, -66, -66, -7, 58, -124, 54, 94, 85, 94, 101, -118, -118, 1, -34, -94, 63, -94, 120, 37, 3, 95, -121, -48, -118, -107, -124, 47, 3, -86, 45, 48, 27, -19, 115, -38, -79, -106, 101, -57, -18, 51, -95, -14, 80, 25, -90, 96, -118, -13, -96, 12, -98, -84, 126, 67, -100, 56, 59, -30, -89, 77, 31, -26, -24, -112, 126, -66, -49, -46, 70, -67, -71, 6, 90, -36, -18, 116, 54, 51, -41, -76, -34, 104, -60, 39, 43, -114, -17, 113};
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
    msg.setTimeStamp(0.0307626426878);
    msg.setSource(23753U);
    msg.setSourceEntity(67U);
    msg.setDestination(45187U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("XOZYZRPOKQTCDGLTQDJXQAAIJFNSFMTEPVBWJWXBCDZMDCMENABAJUFPTMHVOLXHNVMPOX");
    msg.htime = 0.426852094613;
    msg.lat = 0.140712472879;
    msg.lon = 0.668437977207;
    const char tmp_msg_0[] = {85, -35, -49, 75, 37, -106, -123, -10, -26, -92, -22, 12, -65, -80, -113, 21, -11, -80, 22, 80, 47, 52, 53, -81, -58, -66, -78, 66, -101, 114, 112, 0, 3, 121, 30, 75, -49, -95, -15, -53, -44, -102, -38, -42, -7, -43, 115, 60, 68, -23, 114, 50, 70, 4, -42, -17, -13, 120, -65, 60, 107, -89, -82, -104, -118, 113, -1, 89, 102, 59, -17, -76, 5, -81, 122, 21, 123, 38, -34, -58, -47, -64, -116, 16, -66, 5, -12, 14, 119, 98, -12, 85, -123, -122, -25, -39, -44, -35, 37, -19, -8, -37, 110, 76, 56, 6, -109, 126, -94, 50, -1, 44, 126, -121, 104, -67, -126, -114, -64, 89, -116, 104, 112, -85, 96, -54, -111, 9, 27, 92, 11, 0, 17, 111, 36, -91, -4, 97, 100, -41, -53, -36, -32, 88, -114};
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
    msg.setTimeStamp(0.0132853252903);
    msg.setSource(12590U);
    msg.setSourceEntity(162U);
    msg.setDestination(10949U);
    msg.setDestinationEntity(194U);
    msg.req_id = 45939U;
    msg.ttl = 1408U;
    msg.destination.assign("GMHAPAPUNRMCQPUZLQYQVNFRPEJUXFSAJTZAMBVYJWHLRAGJVYQFWZYLSPULAJOWGJLF");
    const char tmp_msg_0[] = {50, -22, -59, 95, -76, -51, -70, 111, 36, -75};
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
    msg.setTimeStamp(0.0166228538841);
    msg.setSource(51088U);
    msg.setSourceEntity(192U);
    msg.setDestination(6527U);
    msg.setDestinationEntity(13U);
    msg.req_id = 41748U;
    msg.ttl = 11099U;
    msg.destination.assign("OBWDYTLAJKGFRLKBEHWOVUCUOVIFOFNPXNCRLRVFFPKCKZZESKJUJINPYLKMNHTCUFDIGQAQPOXEGOWLFCNWGXJZSIQMRGKRATCWUDTWXNHGTLLRPHVCDJATBMRTQENFNPSJUHRSDYZOJCSWVVKIISIIAYPDVMHOXMXHMSWBEUUKBNERRQGGDFLAMUEYAWZZECJKXAIHOVZMBIYTSBWUQDYBZZQJD");
    const char tmp_msg_0[] = {54, 0, 72, 87, 100, 90, 123, -13, -57, -95, 102, 4, -97, -83, -46, -87, 81, -107, 14, -85, -56, 64, 0, -72, 96, -48, -4, 86, 60, -78, -74, 13, 82, 3, 108, -20, 100, 85, 69, -21, -126, 18, -38, -109, -110, 124, -100, -96, -69, 88, 119, -70, -85, -100, -67, 55, 61, -27, 120, 115, 20, -85, 114, 17, 20, -70, 7, 108, -69, -102, -52, -76, -111, -36, 49, -87, 65, 97, 99, 23, -84, -94, -12, -46, -78, -50, -91, 54, -119, 22, 39, 59, 102, -58, 26, -1, 76, -107, -91, -102, 33, 102, 27, -16, 0, -77, -13, 92, 126, 51, -36, -125, 119, 57, -50, -63, -99, -7, 44, 8, 38, -66, 120, 80, -42, 85, 67, 116, -19, 22, 18, -121, -100, -120, 30, -21, 97};
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
    msg.setTimeStamp(0.140026808815);
    msg.setSource(11546U);
    msg.setSourceEntity(185U);
    msg.setDestination(983U);
    msg.setDestinationEntity(43U);
    msg.req_id = 45189U;
    msg.ttl = 60897U;
    msg.destination.assign("YWIASFBEHKUBATGJHNVWJSNUCZCPMWWMFMIAQPPSZQUOFZQSIPRBQXXDILMGOYWDPVRTVGUFTRDZSHSFZDLGOOGYCYCHECYCABDHQHQNNOOKLYBTJFGECREXXFMGREJIYLVZUWQPVKROENVDSFXUYBPQTZUZSLAKZJURVCXHFNSSYMGWDPZAGTDIHELNVEQJKKHOANXTKAIITWTBPECPLTQLDCXMRXJABFHUXRJIYMBOJAKNWMLLJW");
    const char tmp_msg_0[] = {-121, -71, -86, -55, -52, 29, 82, 51, 119, 108, 35, -60, -85, 46, 5, 12, 50, 104, 2, -51, -14, 109, 91, 31, -1, -51, -98, -35, -8, -5, 64, 9, 9, -28, -71, -26, 72, 42, 61, 116, -64, -125, -28, -9, 46, 23, -87, 99, -28, -98, -1, 113, -16, -58, 63, 19, -65, 27, -1, 68, -13, 1, -18, 15, -92, -70, 84, 34, -52, -71, -79, 13, -80, -85, 60, 83, -28, -45, 31, 110, -128, -51, -29, -6, -47, -81, 49, -49, -104, -32, 72, -58, 23, 38, 15, -24, 106, 82, 90, 22, -118, -49, -48, -54, 101, 59, 30, 83, 68, -92, 85, 79, -31, -29, 66, 122, 8, -92, -114, -67, -117, 41, 27, -53, 104, 115, 40, -39, -123, -116, 83, -75, 125, 17, -40, -96, -95, 35, 2, 53, 70, 23, -37, -83, 68, 65, -106, -22, -83, -119, 74, 37, -64};
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
    msg.setTimeStamp(0.793396519534);
    msg.setSource(10903U);
    msg.setSourceEntity(209U);
    msg.setDestination(33635U);
    msg.setDestinationEntity(208U);
    msg.req_id = 33959U;
    msg.status = 186U;
    msg.text.assign("YCYCVAOTPIXSWJJTXTXGUCQFEQSAJVLZLQONIIIKDWXEPGAILNKHMEVCTEZHXUFYEUXMMTRCUJEBIVGUNLBCTDFKSHLDDDFBBXSGKSCNLFGQEKWPQCBHYWRKXNVURUAAALDWBMGDFNLKZCMUHGRUJPOVP");

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
    msg.setTimeStamp(0.302547573187);
    msg.setSource(59238U);
    msg.setSourceEntity(199U);
    msg.setDestination(46950U);
    msg.setDestinationEntity(250U);
    msg.req_id = 55279U;
    msg.status = 90U;
    msg.text.assign("FMRLEZMAPMFWZWNKAVJRMHNYMXRLFKFSBMJOEZZUTUTCWOVKOZPSHEAGDCPEBOMCKJQDFRKTPMGEIDSAUWDVCBSYVTTWSQSLUDQEAIJHLMDGIQUIWZXJWQHKUPVYIEBDRHYQVCNDLUANHXAZQFOVYCYOCBSNWLFOTPL");

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
    msg.setTimeStamp(0.592669508877);
    msg.setSource(33176U);
    msg.setSourceEntity(74U);
    msg.setDestination(61973U);
    msg.setDestinationEntity(151U);
    msg.req_id = 32977U;
    msg.status = 186U;
    msg.text.assign("WJNBVXABKLDCDINZAVVFGQPPLZHKNITJESHDKZFXUBJIYOCHBPKMUXQJYWRAYSIVZQWZ");

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
    msg.setTimeStamp(0.902514744602);
    msg.setSource(6369U);
    msg.setSourceEntity(85U);
    msg.setDestination(37613U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("UROLAWGAGUJPXRJRRSEPTZPRLGWNGVXQQUKZHOVQLOBNWRJDCCIMSUCCSCOJCJXKKJMFAYMLUKHHEETQZQAQMHZCBEIDOIQPXYBDNXRDTGGJFVMWEALBZMGVPFRKTNNHBLHQPNBVPVDTHEFXUVBCYZFBOXYAOWIANPMMCILDWLILYHSFTFZVNUKPKJNKSA");
    msg.links = 3561365633U;

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
    msg.setTimeStamp(0.370424644155);
    msg.setSource(41014U);
    msg.setSourceEntity(11U);
    msg.setDestination(25659U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("XEADPNLOOSRBFNFYQPGZHHKFJTMYXAEVYCNYRGYIKPXGVKSHENDEMMHBCZMGOTIYWVJRTWSVNOFSBMHNUCRDJLGBFRBWOBZTGVUWZWIILUNTJDFXAQFLKJVMEPTAAUGLIKOSSAPXEYDFXTEIKXQSMAUCJJHLGWRZPXWLQVSEIQKQOWPGMLULXPHCURUAXMWCMZVLZBJEJCNYKVAQROTJFKHOB");
    msg.links = 667029067U;

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
    msg.setTimeStamp(0.097732376783);
    msg.setSource(15754U);
    msg.setSourceEntity(36U);
    msg.setDestination(31196U);
    msg.setDestinationEntity(12U);
    msg.group_name.assign("WXHWOUCYXUEBPJGLBPICCOLNJPNIZAZHISGDBZBYMWVZXEGPEDHJK");
    msg.links = 3001758987U;

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
    msg.setTimeStamp(0.733699656113);
    msg.setSource(2836U);
    msg.setSourceEntity(6U);
    msg.setDestination(61087U);
    msg.setDestinationEntity(130U);
    msg.groupname.assign("BWPVPGUBTJPAWHECIHFYVDSAXZRPWQVJHHBLUHFQWMMXIECYUYXSUGXVZAKML");
    msg.action = 226U;
    msg.grouplist.assign("VCMKOXVTTBRHDTYZKLLFYUJUQOYOQWTZRAIBEGUNYERJYLFNQJLAUZHBPOIBRNXHGJRLSLWMKEPUZHDUTWVYSKXSXIWPAPFDCYGATVPISSHHTWAKPTPVKGWIPDGXEOCH");

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
    msg.setTimeStamp(0.08079185388);
    msg.setSource(47279U);
    msg.setSourceEntity(188U);
    msg.setDestination(17189U);
    msg.setDestinationEntity(225U);
    msg.groupname.assign("PNMAYVPKXDMDMWVANXMUKCWJJYKZHUNTMZUPRKWCGVRYZWEQFKZDLAORVRZGBHGVPKAUFBXBZCIHVSCWPGJQTXTJVLOMGDUVLWYWNLMSLYIUSYQJBSTRKGERMPFQNADYIGHXSFOFNVNUHXSJLEEJQEXDHQAAEEAQJPBUHMBSDGWZNEPCWBIFOYFSOOCODBTPQRBPT");
    msg.action = 31U;
    msg.grouplist.assign("WSCHJZKCRJEBYNSZALIBSEDVSXWGNTSIQVGBFOCYKXEKGTIEUNVYXZTURXCVUKOURMHVQLGHJDNRJFWAKCNPAPPYZPYTQTPKOWOGWDKDQWSWKJXEFFDZQXNOGMHAFHYGJRVRAJLTXHSOYREKXQILHCRCTLOHJVGQZNEUUIFKSQTIVQWMYPNUMPLACQWBFLPAZAFXDCTEZVCORNHZ");

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
    msg.setTimeStamp(0.888917079796);
    msg.setSource(13232U);
    msg.setSourceEntity(224U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(70U);
    msg.groupname.assign("JBQPVXADUYQMPGMENYUIOBJYTFBPGNTAHKRUPWCZAXTNUUQHWDFITLRKELOEKXGFSSVSHFINONEIRLKIXPFMZCBYZJEEEXSJRMJMUNFUMFMZGXWJPZWMHQLBRHDAVZXPQDSVTBVTHVQZBRDWKSXHALCAAOCNYTTBOGGOKKYJKDEPBCISDKHXDRMLACZWHQISAAFPQWCQDULZWHTICUKJLRNLZSLFYNPMQOGJYRCYEINGTWGWEXBYFDC");
    msg.action = 7U;
    msg.grouplist.assign("GKWJBXEMVMHBKDVZJSMUQOMZFMRBQWRIIPIOFYQPGCHJUHHHVDCHKEWVLZDDCUOICGKVITWJKUXNPMAJBJUIPNPHTAGRINSXYQXFZRDDNQMWTPGLREQPJSXYAYZRCSAHKWFUTSQZJNOVYGQOOKNGMIOAFBZHERCMZJUCFZUVCBNISEDRYXTLNCVKBGLYLXULPDXTAVAOGTTRWTAFCEWXLEIZJAWFNPBWEQKNDBGOYUBAVSOMKRLE");

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
    msg.setTimeStamp(0.361364711146);
    msg.setSource(23579U);
    msg.setSourceEntity(27U);
    msg.setDestination(41213U);
    msg.setDestinationEntity(175U);
    msg.value = 0.750572167162;
    msg.sys_src = 18812U;

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
    msg.setTimeStamp(0.498711310993);
    msg.setSource(24865U);
    msg.setSourceEntity(78U);
    msg.setDestination(42858U);
    msg.setDestinationEntity(14U);
    msg.value = 0.658391198961;
    msg.sys_src = 18529U;

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
    msg.setTimeStamp(0.761908928201);
    msg.setSource(55102U);
    msg.setSourceEntity(223U);
    msg.setDestination(36391U);
    msg.setDestinationEntity(132U);
    msg.value = 0.187243989105;
    msg.sys_src = 12685U;

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
    msg.setTimeStamp(0.359875519068);
    msg.setSource(13350U);
    msg.setSourceEntity(216U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0455637179292;
    msg.units = 185U;

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
    msg.setTimeStamp(0.714298420382);
    msg.setSource(18611U);
    msg.setSourceEntity(59U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(110U);
    msg.value = 0.00621670210964;
    msg.units = 227U;

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
    msg.setTimeStamp(0.572224151801);
    msg.setSource(9302U);
    msg.setSourceEntity(40U);
    msg.setDestination(10323U);
    msg.setDestinationEntity(44U);
    msg.value = 0.450390220139;
    msg.units = 15U;

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
    msg.setTimeStamp(0.692262042007);
    msg.setSource(14182U);
    msg.setSourceEntity(159U);
    msg.setDestination(11997U);
    msg.setDestinationEntity(62U);
    msg.base_lat = 0.327010896463;
    msg.base_lon = 0.805598623966;
    msg.base_time = 0.945084167396;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 48294U;
    tmp_msg_0.destination = 44452U;
    tmp_msg_0.timeout = 0.428039813567;
    IMC::PH tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.362109943143;
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
    msg.setTimeStamp(0.76776042706);
    msg.setSource(60999U);
    msg.setSourceEntity(6U);
    msg.setDestination(25986U);
    msg.setDestinationEntity(132U);
    msg.base_lat = 0.45567001372;
    msg.base_lon = 0.0632454338516;
    msg.base_time = 0.814276768926;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 53197U;
    tmp_msg_0.priority = -115;
    tmp_msg_0.x = -9595;
    tmp_msg_0.y = -12174;
    tmp_msg_0.z = -2395;
    tmp_msg_0.t = 12353;
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 45286U;
    tmp_tmp_msg_0_0.lat = 0.335316328869;
    tmp_tmp_msg_0_0.lon = 0.602886768606;
    tmp_tmp_msg_0_0.z = 0.0271692026343;
    tmp_tmp_msg_0_0.z_units = 179U;
    tmp_tmp_msg_0_0.speed = 0.286709415385;
    tmp_tmp_msg_0_0.speed_units = 156U;
    tmp_tmp_msg_0_0.bearing = 0.523138959088;
    tmp_tmp_msg_0_0.width = 0.316322610433;
    tmp_tmp_msg_0_0.direction = 39U;
    tmp_tmp_msg_0_0.custom.assign("AUUAWYODYKZIIMOMDHHODGENRGMUGIUXDVOBBBAVTPJRTJKNUWWSHPQKXNFSOLOCSZTICDGNZZG");
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
    msg.setTimeStamp(0.420475960324);
    msg.setSource(46205U);
    msg.setSourceEntity(71U);
    msg.setDestination(429U);
    msg.setDestinationEntity(224U);
    msg.base_lat = 0.512061187543;
    msg.base_lon = 0.179456193586;
    msg.base_time = 0.68848338244;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 19774U;
    tmp_msg_0.destination = 25687U;
    tmp_msg_0.timeout = 0.449548376663;
    IMC::DataSanity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sane = 157U;
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
    msg.setTimeStamp(0.547455360111);
    msg.setSource(10318U);
    msg.setSourceEntity(87U);
    msg.setDestination(2475U);
    msg.setDestinationEntity(216U);
    msg.base_lat = 0.492271229738;
    msg.base_lon = 0.760072311734;
    msg.base_time = 0.263445542711;
    const char tmp_msg_0[] = {110, 102, -59, 69, 60, -16, 44, 79, -109, 106, -125, 54, -16, 122, 43, 33, -17, 104, -32, 26, 114, 33, 57, -38, 31, -57, 122, -118, 89, 39};
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
    msg.setTimeStamp(0.206364786086);
    msg.setSource(62809U);
    msg.setSourceEntity(176U);
    msg.setDestination(37961U);
    msg.setDestinationEntity(149U);
    msg.base_lat = 0.97157536887;
    msg.base_lon = 0.791657247436;
    msg.base_time = 0.611292427552;
    const char tmp_msg_0[] = {74, 2, 67, 81, 87, -64, -49, -65, -125, -105, -31, 43, 84, 55, -25, -27, 17, 109, -118, 30, 42, -104, 116, 102, 123, 7, -31, -48, -56, 98, -5, -124, -1, -67, 121, 112, 72, 56, -14, 16, -13, -122, 48, 37, -39, -5, -5, -79, 99, -7, 119, -27, -122, 55, -128, 58, 125, 105, 72, -10, -18, -69, 87, 113, -29, -81, 93, -108, -73, 0, -16, 121, 84, -120, 97, 69, 79, 80, 58, 15, 47, 75, -89, 111, 24, 64, -39, -57, -103, -126, 68, 123, 55, 98, -108, 41, -56, 5, -119, 98, -118, -33, 17, 68, -84, 85, -58, -13, -112, 13, 104, 55, -126, -14, -94, -113, 95, 76, 26, 46, -128, 39, 125, -28, 51, 2, 87, -30, 57, -124, -96, 125, -2, -128, 78, 126, 58, 29, -120, -57, -20};
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
    msg.setTimeStamp(0.585526225579);
    msg.setSource(44184U);
    msg.setSourceEntity(213U);
    msg.setDestination(47182U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.327167972688;
    msg.base_lon = 0.863474173412;
    msg.base_time = 0.87094701669;
    const char tmp_msg_0[] = {0, 101, 46, -66, -16, 44, -103, -67, 20, 114, -69, 19, 4, 104, 25, -8, 64, 35, -80, -50, 58, 101, -46, -25, -45, -98, 60, -30, 39, 28, -123, -76, 108, -15, -2, 27, 112, -51, -108, 89, 117, 15, -58, -6, -89, -47, -48, 78, 56, 125, -30, -96, 38, 49, 108, -116, 58, -7, 14, 2, -32, 105, -3, 78, -61, 113, -73, -15, 74, 121, -21, 88, 71, 12, -80, 87, -122, 64, 105, 39, -53, -4, 86, -45, 110, -71, 34, 15, 78, 22, 89, 35, -110, 31, -2, 64, 40, 106, -31, -61, 74, 44, -127, 72, 111, -74, -60, -11, -22, 9, -62, -34, 55, -54, 98, 67, -97, 66, 82, 125, -38, -3, -60, -124, -91, -76, -48, -14, -121, -68, -101, 125, -90, -128, 88, -95, 41, 96, 38, 101, 0, 32, 60, 51, 75, 97, -96, -39, 70, 18, -9, 58, -75, 23, -27, 55, 65, 94, 18, 125, 1, 93, 51, 106, 8, -28, -92, 29, -10, -52, -16, 47, 89, 63, 125, -110, -110, -23, -5, 42, 91, 82, 118, -108, 47, 29, 38, -6, -22, -10, 125, 86, 0, 30, 33, -8, -37, -91, 99, -18, 117, -46, -88, 104, 61, -83, -104, 84, 107, 85, 74, 93, -80, -16, 46, -121, 27, -108, 33, 5, 48, -26, 14, 10, 64, -79, -26, 22, -82, -89, 9, 8, 126, 62, -54, -66, -21, 93, -34, -52, 72};
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
    msg.setTimeStamp(0.0865165681301);
    msg.setSource(37797U);
    msg.setSourceEntity(24U);
    msg.setDestination(10509U);
    msg.setDestinationEntity(25U);
    msg.sys_id = 62116U;
    msg.priority = -63;
    msg.x = -7518;
    msg.y = -8960;
    msg.z = 22632;
    msg.t = -12249;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 10123U;
    tmp_msg_0.bearing = 0.419062525832;
    tmp_msg_0.elevation = 0.594451513073;
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
    msg.setTimeStamp(0.753642831635);
    msg.setSource(22100U);
    msg.setSourceEntity(55U);
    msg.setDestination(4205U);
    msg.setDestinationEntity(154U);
    msg.sys_id = 43626U;
    msg.priority = 10;
    msg.x = 592;
    msg.y = -6657;
    msg.z = -28329;
    msg.t = 10849;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 17U;
    tmp_msg_0.lon_gain = 0.522455022407;
    tmp_msg_0.lat_gain = 0.960243703635;
    tmp_msg_0.bond_thick = 0.733105314914;
    tmp_msg_0.lead_gain = 0.843194012017;
    tmp_msg_0.deconfl_gain = 0.763828068041;
    tmp_msg_0.accel_switch_gain = 0.308489305279;
    tmp_msg_0.safe_dist = 0.212051291953;
    tmp_msg_0.deconflict_offset = 0.127278778702;
    tmp_msg_0.accel_safe_margin = 0.323444292332;
    tmp_msg_0.accel_lim_x = 0.652578383549;
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
    msg.setTimeStamp(0.0886066017364);
    msg.setSource(36783U);
    msg.setSourceEntity(196U);
    msg.setDestination(61515U);
    msg.setDestinationEntity(90U);
    msg.sys_id = 31868U;
    msg.priority = -75;
    msg.x = -22592;
    msg.y = 23588;
    msg.z = 18631;
    msg.t = 26138;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("LPINPKNVEXLLIXCESTEHUOGZFHMUAUOITFBCASVUXLBYRKEKXLTQEMLZVDTMCQGZWSXSYSHHKVPMWJNTEJFJHGYTANWONQJQBDEYPJORRNHQACFULRJSOCPYKDGQUYOBOKRMDALERPHCATZRTXVESLUCUYPZTWYFSXVAGFZXYU");
    tmp_msg_0.timeout = 7769U;
    tmp_msg_0.contents.assign("JEYBXLPIOETABWWRYFQXJNZDINOAAHTJJAFVCZPHJRZWGXYQCBCIXKAIPATUKRKLCVOQUSKXLMDYLDRZKASJMUSNLOGQMNCYZYTKUSERBUZVUYRJXJGVFLEMQSMSWRUJBHKWCGDPWGNCGOWVVXPUHTTMZPPSTQEMFQVEGSQFDTISHNMWUOBFPCIZKGYFSBVRLWADFGEDNAZIDYEWBLNIFMZ");
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
    msg.setTimeStamp(0.769161534976);
    msg.setSource(53493U);
    msg.setSourceEntity(186U);
    msg.setDestination(4982U);
    msg.setDestinationEntity(40U);
    msg.req_id = 23932U;
    msg.type = 130U;
    msg.max_size = 50460U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.139710990426;
    tmp_msg_0.base_lon = 0.126362156673;
    tmp_msg_0.base_time = 0.500921985117;
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
    msg.setTimeStamp(0.68707455655);
    msg.setSource(37673U);
    msg.setSourceEntity(184U);
    msg.setDestination(9954U);
    msg.setDestinationEntity(44U);
    msg.req_id = 20951U;
    msg.type = 149U;
    msg.max_size = 3767U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.490266158421;
    tmp_msg_0.base_lon = 0.510719305965;
    tmp_msg_0.base_time = 0.917573391598;
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
    msg.setTimeStamp(0.185465364208);
    msg.setSource(10490U);
    msg.setSourceEntity(44U);
    msg.setDestination(9480U);
    msg.setDestinationEntity(249U);
    msg.req_id = 830U;
    msg.type = 159U;
    msg.max_size = 42646U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.727245390962;
    tmp_msg_0.base_lon = 0.391730503684;
    tmp_msg_0.base_time = 0.0616577814866;
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
    msg.setTimeStamp(0.987237036191);
    msg.setSource(24176U);
    msg.setSourceEntity(163U);
    msg.setDestination(42459U);
    msg.setDestinationEntity(58U);
    msg.original_source = 33317U;
    msg.destination = 14032U;
    msg.timeout = 0.614752538717;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.779741019474;
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
    msg.setTimeStamp(0.505258037805);
    msg.setSource(16983U);
    msg.setSourceEntity(111U);
    msg.setDestination(35779U);
    msg.setDestinationEntity(47U);
    msg.original_source = 22076U;
    msg.destination = 29751U;
    msg.timeout = 0.757452252802;
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 145U;
    tmp_msg_0.command = 122U;
    tmp_msg_0.settings.assign("BWHUYYHVQBONFWUCXADZTESYKRQNRERRVEQMFCHDTAKPOZQBPELWEAUPQLMTDSGZVXXDPPKKAMODUWLOSNQN");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 16660U;
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("PWWEHXQZHZLWCSZGUFEBZZRUIACIJXRMGLKEGPYHTVKEOQQNKJDRTSOBSJQSTJFEHKZRPLPSYWGGRUHSKIXRZHTIGHJAMIOEMVKIBDDWWDUODYLEAHRDEG");
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
    msg.setTimeStamp(0.0766973113132);
    msg.setSource(34759U);
    msg.setSourceEntity(31U);
    msg.setDestination(51356U);
    msg.setDestinationEntity(130U);
    msg.original_source = 1673U;
    msg.destination = 45839U;
    msg.timeout = 0.710742753518;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("FQPAMADEFSWZBJDFZEBMPWUNOSCOZIQJKRUGGRFBBCEJMATPLYIQVVRNUKGWIGVQTIDLNSDHICTGQESEMKDQBRRLCHFNOWLTUUJXDJNNVYKKPMYXGKECIKJGWNNFCKOSJSEVYZIJODYXVHMUPLEPHIDVTSSBLWCBSTJCXDWLCYMIKGOAWZYXXZAHOYLRZQHHZMWUTM");
    tmp_msg_0.max_speed = 0.961443820203;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.lat = 0.542533216092;
    tmp_msg_0.lon = 0.167328978309;
    tmp_msg_0.z = 0.791741612249;
    tmp_msg_0.z_units = 101U;
    tmp_msg_0.custom.assign("LNFEIKOPUSZOEOAYDHUFDQJRWCZYJWZPCLMMBAVPFIZXKXMOCQTLKJPAIJNMTZZTNBSWIBEPSXNYFFIVEYIBUQXZRUGEFVHSHHDKAKNOUOTSOXPNTQTLHCCWHGBPKEJASHXBGYWYLAKRRAQT");
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
    msg.setTimeStamp(0.411977825477);
    msg.setSource(48539U);
    msg.setSourceEntity(164U);
    msg.setDestination(52815U);
    msg.setDestinationEntity(176U);
    msg.type = 27U;
    msg.comm_interface = 23592U;
    msg.model = 61648U;
    msg.list.assign("EKOBUEOVYEWRCP");

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
    msg.setTimeStamp(0.546754640494);
    msg.setSource(17700U);
    msg.setSourceEntity(139U);
    msg.setDestination(19797U);
    msg.setDestinationEntity(178U);
    msg.type = 37U;
    msg.comm_interface = 44216U;
    msg.model = 7569U;
    msg.list.assign("ZLSRGLIRDZQDJKDSUHE");

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
    msg.setTimeStamp(0.968160428158);
    msg.setSource(59985U);
    msg.setSourceEntity(203U);
    msg.setDestination(59419U);
    msg.setDestinationEntity(191U);
    msg.type = 193U;
    msg.comm_interface = 35589U;
    msg.model = 5111U;
    msg.list.assign("YJZUTZBVYUQOFGQXEWDJIJLBZPIARCNVTGIEMMTNAGZWRACBJDORVKYNTCNVMHTPHPTFHZDEOGAAHOKFZMHRZRXABPNPIGPTCPVLCSILDZLCIJTNMWVOEQYJLSBSUCJQEEWJNWFOTGDYNNULDCQWUU");

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
    msg.setTimeStamp(0.745779235241);
    msg.setSource(49458U);
    msg.setSourceEntity(85U);
    msg.setDestination(15193U);
    msg.setDestinationEntity(241U);
    msg.type = 178U;
    msg.req_id = 961536239U;
    msg.ttl = 11608U;
    msg.code = 99U;
    msg.destination.assign("UESNATQTWLRXBSTKVCIHXPRVDDSFLWUZUYGVQPJJHOXQOEWOITMFEFNYDQAKPXRXGZCWEWTJTOKGMXFBDOHAFUMXUDRFBLHACHJLRQQZACAQFSKYBYMZHSWALLSTUCASGLOGYHVGXGFJEJIDWWTTKNDGDQWVPBVOQKDJNZXSVUVNBXJFMYDUMYKKCZBGSENPIBRIPIENUMKZRHJIGAFHRCZOYBCMOENLJZLOKUPPEVWTLZYAIHPPN");
    msg.source.assign("YQLUTVAECHJFZMVOQHWXVKEUCQLDSJVICJYOQDYVKTEQZWJVPNOOFSHDGSNMKTXBBLXZSPXBZIWEMUVGPICRFNRHSOAMMBPLPJUJWADFZDXKAEGUGYCJYDLLETQIETTYPAWRGCHLEQIEYNMAXRXTHLWIDOCRZC");
    msg.acknowledge = 237U;
    msg.status = 216U;
    const char tmp_msg_0[] = {30, -120, 76, 103, -76, 2, 100, 7, 125, -16, 10, 43, -125, -112, 45, 6, -104, 5, 52, 121, 68, 40, 80, 61, -2, -96, 40, 57, -35, 68, -88, 43, -32, -20, 1, 9, 14, -32, -58, -3, -122, -56, 95, -69, 40, -28, -105, -10, 16, 73, -65, 89, -47, 75, -12, -85, 92, -89, -117, 118, 43, 26, 81, -104, -57, 37, -47, 103, -85, 106, 51, 126, 87, -19, 4, 5, -26, 79, -89, 8, -114, 119, 27, 106, 16, 69, 72, 95, -28, -57, -123, 112, -126, -111, -31, 98, -59, -40, -14, 102, -118, -117, 43, -68, -128, 104, -58, -119, 56, -99, -36, 58, 31, 12, -115, -109, 114, -95, 22};
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
    msg.setTimeStamp(0.771021984839);
    msg.setSource(13444U);
    msg.setSourceEntity(178U);
    msg.setDestination(12990U);
    msg.setDestinationEntity(94U);
    msg.type = 82U;
    msg.req_id = 751883621U;
    msg.ttl = 1209U;
    msg.code = 236U;
    msg.destination.assign("KWTASBPAALRZOXWBHAQNVNMVXXGNWPRCCYCTBDVRQPQVHLLVNRZEOKEEIDFBEILFJSYKECYYSSIVQAALKPQZOTUGIITRXWZSRWUSEDMUGMJREXSCKYBJRIBRVFIKFMFJPAKVSQYLQGOOVOEEDUWDDYZLXITKYWHHTPHFMRJFPVNNGAMEWSZDOMHXUPLTMGKQDZUKBGJUFZATHOMBUCBHCNUTNJFTDZUGGP");
    msg.source.assign("SDNWUKHCXCEGIWMNQBIHURUVZUZSYJAFCLQJZJDQYUKNYWYKTBQNANP");
    msg.acknowledge = 149U;
    msg.status = 77U;
    const char tmp_msg_0[] = {123, 34, 69, -39, -66, -48, -100, 56, 67, -111, -93, 7, 27, -109, 63, -16, 113, 90, 35, 32, 44, -76, 57, 12, 6, -19, -64, -27, -120, -56, 68, 102, 24, 0, -50, 92, -48, 23, 107, 115, 49, -86, -87, 123, 81, 81, -47, -55, 51, -69, -125, -102, -10, -110, -108, 84, -98, 119, -121, 117, 112, 51, 104, 66, -88, 21, -98, -126, -4, 38, -115, 67, 96, 126, 83, 10, -53, 20, 36, -5, -7, -113, 45, -19, 11, 18, 117, 104, -13, 3, -55, 98, 45, -21, 92, 107, -43, 23, 123, 42, 53, -65, -38, 33, -18, 108, -31, 61, 111, 29, 97, 31, -113, -75, 124, 16, 18, 14, 52, 34, -128, -31, 62, -52, -111, 5, -87, 31, 25, 124, 56, -64, 47, 107, 96, -107, 13, 71, -63, 56, -91, 10, -118, -60, -98, -117, 78, -72, 49, 28, 125, -19, 31, 7, 17, -53, 88, -30, 110, 99, -19, 92, -6, -33, -76, -24, -118, -84, 113, -81, -79, 77, -51, 43, -24, 24, 14, 97};
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
    msg.setTimeStamp(0.826404408269);
    msg.setSource(36376U);
    msg.setSourceEntity(131U);
    msg.setDestination(33913U);
    msg.setDestinationEntity(94U);
    msg.type = 147U;
    msg.req_id = 649153772U;
    msg.ttl = 34847U;
    msg.code = 92U;
    msg.destination.assign("QKVIJHUWUZCSBVNDZAFRWJLWUOMJCYCBDVRCBBURKYLBXBCGRIVVCXUZRJZGFDZGMSOWJTHEOPMARIXMEPPAUAVLTLFKIOJNAIJWRTAXTESSKQTFITQFOGPXDDMEKXUDHGTHNEPVKZSCXTNSYUNRGKSOPGDQWIVZQZRE");
    msg.source.assign("NCWOOQDKTXYTUPKFLWCXGEIEVIOCTNEWACVXJZEZMWYSUODILDGXORKDMMHJFKIBRZHEPGOWZEVCVUAFLGJBTWMJWKASGXSVCOPNMXVBFJJYHXHZTAJQLUIGRBAHV");
    msg.acknowledge = 228U;
    msg.status = 65U;
    const char tmp_msg_0[] = {-2, 93, -76, 80, 58, 27, 9, -43, 103, 32, -91, -118, -102, -104, 32, -109, -116, 76, 12, 5, 121, 14, 56, 25, -95, 41, -74, 110, -78, 109, 80, -99, -120, 79, 58, 107, 106, -126, -12, 50, -5, 86, 0, 95, 65, 105, 36, 125, 41, 110, -20, -38, -12, 30, -99, 28, -38, -55, 36, -38, -94, -97, -85, -15, -34, -91, -99, 78, 1, 41, 118, 103, 83, -67, 100, 100, -116, -1, 43, -101, -20, -6, -101};
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
    msg.setTimeStamp(0.346760852926);
    msg.setSource(42337U);
    msg.setSourceEntity(56U);
    msg.setDestination(54261U);
    msg.setDestinationEntity(0U);
    msg.id = 215U;
    msg.range = 0.508528774635;

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
    msg.setTimeStamp(0.68967843256);
    msg.setSource(55688U);
    msg.setSourceEntity(11U);
    msg.setDestination(30965U);
    msg.setDestinationEntity(16U);
    msg.id = 155U;
    msg.range = 0.540234971696;

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
    msg.setTimeStamp(0.0829315498287);
    msg.setSource(10650U);
    msg.setSourceEntity(240U);
    msg.setDestination(15989U);
    msg.setDestinationEntity(136U);
    msg.id = 32U;
    msg.range = 0.145579978503;

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
    msg.setTimeStamp(0.887151149832);
    msg.setSource(39322U);
    msg.setSourceEntity(180U);
    msg.setDestination(41195U);
    msg.setDestinationEntity(44U);
    msg.beacon.assign("WBTRUQBUMNNNPRMYHKLGJGRKQPZOPTLZDEKFVYQRIGSEARWNVVMIOHKDZBQHIVIJASMFUIQGVLTFJPNHCXAQPICCCVYIOHVJLZEZZAYRMKASLUCOWJVZTKRDDYNYIPBSODSFAHRXCDGUGLECGOSYUMTCTYRHULFGWVALOPPHSHOJWPMJYZARGXUSNLQDZEMLFQFYKVEGENPXXWNUXQJEBUQABTMKTJWDOWBKMHJFS");
    msg.lat = 0.379920559008;
    msg.lon = 0.709063756743;
    msg.depth = 0.995418494425;
    msg.query_channel = 197U;
    msg.reply_channel = 241U;
    msg.transponder_delay = 216U;

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
    msg.setTimeStamp(0.749008907238);
    msg.setSource(63750U);
    msg.setSourceEntity(254U);
    msg.setDestination(45209U);
    msg.setDestinationEntity(146U);
    msg.beacon.assign("SOEPXEVLLMBBPFUTDKJJFZWBUTCAYRBJRBGYIHVPOGYFXOHSGUYINVNUQMDVXRRDBDNRZEAPHZSETPK");
    msg.lat = 0.395083848792;
    msg.lon = 0.205871704989;
    msg.depth = 0.633730781647;
    msg.query_channel = 121U;
    msg.reply_channel = 135U;
    msg.transponder_delay = 181U;

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
    msg.setTimeStamp(0.88226014559);
    msg.setSource(15157U);
    msg.setSourceEntity(178U);
    msg.setDestination(35164U);
    msg.setDestinationEntity(16U);
    msg.beacon.assign("BDRFZVRSPXNYGVLUXOLXQCEIGSZQGRLETJOMZVFUJUBECCPNOGFHPVKUYHOPSHDBMUKROMLSXCUHYADQCBVTIDWNFNTZJPZGGEYLQIWYELSSOVAKK");
    msg.lat = 0.929695192046;
    msg.lon = 0.949470665615;
    msg.depth = 0.484857323289;
    msg.query_channel = 100U;
    msg.reply_channel = 83U;
    msg.transponder_delay = 14U;

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
    msg.setTimeStamp(0.341029569011);
    msg.setSource(35350U);
    msg.setSourceEntity(221U);
    msg.setDestination(64797U);
    msg.setDestinationEntity(97U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.287833818014);
    msg.setSource(45365U);
    msg.setSourceEntity(186U);
    msg.setDestination(21014U);
    msg.setDestinationEntity(192U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.660951671696);
    msg.setSource(27123U);
    msg.setSourceEntity(26U);
    msg.setDestination(22228U);
    msg.setDestinationEntity(247U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.765418107094);
    msg.setSource(16232U);
    msg.setSourceEntity(129U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(223U);
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("AYLGGMIESTRBLQMMRBHPRTZQIABFJDFQXLJOIHCHJPHFHXCAAILUHJYPOAWFVVJUQPNFZFBFSIMNOXMTIBRZKJIFBDYIUAZOOHSDWZEYEWGASZGXJKVVSQZPMZWVICOVTKPDSEGGWOLNQXHDSNELVRBUSYEKRWNRXPGHMQGQLNYOUCSMJLLKUXXCFDWTUKJYBCMRWWKPRVOQUYVTWZGJFCH");
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
    msg.setTimeStamp(0.898078878301);
    msg.setSource(1394U);
    msg.setSourceEntity(99U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(122U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.749361146186;
    tmp_msg_0.z_units = 244U;
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
    msg.setTimeStamp(0.500048313621);
    msg.setSource(31615U);
    msg.setSourceEntity(96U);
    msg.setDestination(7369U);
    msg.setDestinationEntity(90U);
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 5U;
    tmp_msg_0.plan_id.assign("KKHFOXDMOWNVZEQGZKZFSVDTZELHWXUEQPEJKQCAUHMBKTEFGHKHMGMSISCLXWYNWOPGIBOTISDMOMFCQJUWNRACKOFBIVZ");
    tmp_msg_0.comm_level = 45U;
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
    msg.setTimeStamp(0.995957046977);
    msg.setSource(14272U);
    msg.setSourceEntity(219U);
    msg.setDestination(42901U);
    msg.setDestinationEntity(233U);
    msg.op = 170U;
    msg.system.assign("DHFSAAXGLVIRRIDDFFDQLIFXOLPBSNAYVGVJWFYBFHNVRUGYWRJMNGNRPLYKQKDLSXMMWECQHLBPYJEOJEZRPEPKWKINEWVQDOOPHNWVKUPWGAMQBWNDRGOUTSXHEJADMVLTXUQLZXBXFIUWIAYQFSOTZGHMKHIYAPZBQZUQFQOCSICMCYRAMOBIJUJJHITKMNNCKXZJCUKKCZEGYLCZLC");
    msg.range = 0.97539937974;
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 23862U;
    tmp_msg_0.comm_mean = 159U;
    tmp_msg_0.destination.assign("VSWFPWYSDTEGCLTOUQSUZTGHPCRMNFBANOTFSMJMBOWCBFGUKCPPGECXZDNLFKBWOYHSDRBBLLXIVXAWDVRHXOJUUVDJGJRLQXQSFBQKNLJGMUOXIWWAYAIFGBSKCFPVCWCREEMHYNQUOEDEXIATXCVARDJUDOOMQGIUMQZMMHHWIGWRCPLHEKJRYVHAZVVNPENRYDZIJBGRIMNPZLSAONZSZXKKT");
    tmp_msg_0.deadline = 0.473318714554;
    tmp_msg_0.range = 0.233331916053;
    tmp_msg_0.data_mode = 174U;
    IMC::DepthOffset tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.454583366551;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("HUCZJAXSXVYWHSMXF");
    const char tmp_tmp_msg_0_1[] = {82, -112, 56, 5, -67, -123, 83, -30, -51, 118, 20, -7, -10, 117, 44, -101, -94, -23, 114, -96, -95, -32, -101, 24, -29, 17, -67, 71, 101, -83, -95, 69, 16, -60, -36, 54, -119, -6, -112, -67, 47, -95, -112, -28, -2, 4, 123, -121, 57, -33, 5, -52, 16, -36, -60, -116, -101, 115, 108, -75, 11, -98, 37, -44, 65, 74, 126, 82, -39, -17, -34, 70, -61, -50, -61, -40, -115, -97, -20, 56, -96, -53, -15, 7, 2, -124, 89, -9, 39, -43, -13, -17, 85, 3, -20, 119, -70, 69, 111, 98, -119, 88, -80, 33};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.719304221786);
    msg.setSource(64295U);
    msg.setSourceEntity(192U);
    msg.setDestination(29876U);
    msg.setDestinationEntity(10U);
    msg.op = 250U;
    msg.system.assign("GDTJYIADSLGHCPNMBREOZCGHWDIAVAMYRHQUHANJVRIDJOKKYETZTDNVZBNQTCRPTUOGWZNLGOUZJXLSSBOUOVYWZMBEKS");
    msg.range = 0.229684098811;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.1399509886;
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
    msg.setTimeStamp(0.831828898372);
    msg.setSource(7485U);
    msg.setSourceEntity(251U);
    msg.setDestination(28990U);
    msg.setDestinationEntity(86U);
    msg.op = 19U;
    msg.system.assign("BSFQVAFCNYDGXMSVNFERAMXCVQLVKOAZPADMDJJEBICMRUWURIWLBCPLDDHTIJRPVQQDXHPLUEGLOQIUPHNTMHOGSNKCKUUHBXOWOWZUATTYZNFJIVTGBXFXBDOGBGJMWWQJMSEASRQTNYRKSMXAUYSKTVJZFUTHKEEJYFLOYARHQDTSZICIHGHYLRJZSFEKYIXVFZAEPNOGNYLKQMONZWZPOIRHMDVXVBYBBDFRICWXZCLETSPWCGAQKPKLE");
    msg.range = 0.830336833146;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.232707343598;
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
    msg.setTimeStamp(0.225043800505);
    msg.setSource(27155U);
    msg.setSourceEntity(84U);
    msg.setDestination(3507U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.0305874876591);
    msg.setSource(8030U);
    msg.setSourceEntity(189U);
    msg.setDestination(20380U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.655521964073);
    msg.setSource(54017U);
    msg.setSourceEntity(15U);
    msg.setDestination(11579U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.906529751633);
    msg.setSource(38772U);
    msg.setSourceEntity(187U);
    msg.setDestination(4121U);
    msg.setDestinationEntity(8U);
    msg.list.assign("GGJNEXTBVHIFFBAKQOUIBETNBVJMCNQRNBIJXAJYZOCRTUTKAEKPRVOGLKHSFYPDLBGGQGIBZRCNNXUAFJZNYFSZODFGNYWHRXIWRXALDLUWODPCCYZPMVKSWDNMEFTTCQK");

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
    msg.setTimeStamp(0.530384023724);
    msg.setSource(6928U);
    msg.setSourceEntity(169U);
    msg.setDestination(38113U);
    msg.setDestinationEntity(142U);
    msg.list.assign("MXIOAICTUTZNQOWPXFGDQCVXOMEPZHGALNNHRMENXWTSUIUZBFTMQKEZJUBKCOXWSOY");

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
    msg.setTimeStamp(0.212843600297);
    msg.setSource(10455U);
    msg.setSourceEntity(232U);
    msg.setDestination(4195U);
    msg.setDestinationEntity(61U);
    msg.list.assign("EHMZXIDVISZDAVRUEQATBKDGQYHPVGCWHYBZTJAKFLWSTUXJVHVOKDFSRDAKUBGBCSLPXIMYCVBIZOFSSTJYRQMADYWZGMFNLWOZIWM");

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
    msg.setTimeStamp(0.21714894984);
    msg.setSource(39571U);
    msg.setSourceEntity(27U);
    msg.setDestination(25651U);
    msg.setDestinationEntity(128U);
    msg.peer.assign("OPHZSNKYNWHWWXLRXRITXOUMCTZFMILDSVOEWYSJERZJCLAF");
    msg.rssi = 0.404012466228;
    msg.integrity = 1414U;

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
    msg.setTimeStamp(0.598170428063);
    msg.setSource(63421U);
    msg.setSourceEntity(172U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(252U);
    msg.peer.assign("DDVYKJYZGITVBJOQOPISQIUWTSPWJJTUCHCHLHCMSZLHGRZWSTQDHLINYYZBVDRWZFMPIWQKNXCKCNJRUGLKFGIBTKCRPXAGRMYJWXAQBJLMFARDBHZJPVPVORULUKKTCYXCSSQFQCEBVQLFNUXEOTXRHODUMHDVPGUUXOTFPFUEOWDVXPEIITWGEYNBVNQXMEBNDLERRASGDMNLATYEOSEAOZCWQ");
    msg.rssi = 0.681655619959;
    msg.integrity = 35866U;

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
    msg.setTimeStamp(0.369541393066);
    msg.setSource(13538U);
    msg.setSourceEntity(198U);
    msg.setDestination(43230U);
    msg.setDestinationEntity(54U);
    msg.peer.assign("CICUJPHQKEVYFUMUKNPOTTWEZFLRHSWTSWERSYCCGIGUHBNSWYIDGJRFDBFLAQHVLMZIHIVBPTDAABPCZMYBAZXJLPKCQDHHXUIBNECSXJDMRBDDLEQRAUJCTFQPLMNMJZXN");
    msg.rssi = 0.0108350592146;
    msg.integrity = 17205U;

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
    msg.setTimeStamp(0.354371103716);
    msg.setSource(34149U);
    msg.setSourceEntity(186U);
    msg.setDestination(64981U);
    msg.setDestinationEntity(103U);
    msg.req_id = 3562U;
    msg.destination.assign("IUXJPGEVWQDQXRQAZMJHJBXWNBLHVIAFQWCBWHAHXNHDONHZBEVDIJZWTLFJIPNQKROBLROHCMXWEWTASHMZBPJEMKYXFGPJXATMFVGCTMNKGGUKTLZOTCIILPCVCJOPRXFTCNOSIOZPRMUEFGKASLOFWVYSLOSWDDHUCADYUKFMSINJQVBEEAITJBKBXSALRCZNSSYCETRPQQZYRDZUYMDYKBVHXGTEPLNUEIZYSGMRGVGQFKA");
    msg.timeout = 0.872053687181;
    msg.range = 0.843365528886;
    msg.type = 114U;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 42580U;
    tmp_msg_0.destination.assign("XCUWHPNIUNGRALCHJ");
    tmp_msg_0.timeout = 0.899922463965;
    tmp_msg_0.range = 0.228280758189;
    tmp_msg_0.type = 48U;
    IMC::SystemGroup tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.groupname.assign("BPVWWEWBDJFQWYCNARJYMYIBHDOPLSVIKHKFMLSUOODRFMHEXELGYUFQGDSRQUZGAQOVFHIPGARCDOSZKUZETBIKVGGNVXCTDBPZAFNEVVAGOSRRCBOYTKXFOXZNMUKDTQTTXPNLNIWJAJZGCNIZVHLQZKHXDBUYXBESTPPJHIUERJPHNFQGWVYLUXRFQEWPCLLBWMWJCSVEYNUNKLDEMMROUAZYGBRDISHTAZPCKTYQK");
    tmp_tmp_msg_0_0.action = 48U;
    tmp_tmp_msg_0_0.grouplist.assign("TRHXZAWNKAUAEPPOFFFIJJKXJVRPXXODOZJLCXOPYILYEZJNTKIZGWSZBDVQHMSAFTAUHCPKC");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.562850585952);
    msg.setSource(2521U);
    msg.setSourceEntity(224U);
    msg.setDestination(28819U);
    msg.setDestinationEntity(58U);
    msg.req_id = 15566U;
    msg.destination.assign("PXJJBXLBFTOMZDHIEEUDLHSFGBFYAKEUMPNAIRDFNTPPKORTBFSTMJWUVINXSSTIQRELDYBUNTFNXNDCYPTSQCLGDVBNCVWMIPYOWOVEKLQDIEPCCAGRWRYSMLVNJGQWQM");
    msg.timeout = 0.690405018202;
    msg.range = 0.719966474753;
    msg.type = 246U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 232U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.864683038559;
    tmp_tmp_msg_0_0.speed_units = 229U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.998547668257;
    tmp_tmp_msg_0_1.z_units = 194U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.875619196355;
    tmp_msg_0.lon = 0.0724476778857;
    tmp_msg_0.radius = 0.887276881857;
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
    msg.setTimeStamp(0.282899003883);
    msg.setSource(7605U);
    msg.setSourceEntity(155U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(164U);
    msg.req_id = 3083U;
    msg.destination.assign("DPOLZHSLYNXDQBSRFKRNNJONSCVAATEJDKFWVCRGAMHCHOGDWAYILNIGIXOTIVJRQXFQZZXBEVMEITFKGZHWKBZSTHXWJHZJALDMPPHURDHUUUQVTEUVPSQFOXHZTJLIKTLRNBMWZKRJXQKGUVVYPNVBASSXPFYWMUSKEWGYDUCAC");
    msg.timeout = 0.0751828042886;
    msg.range = 0.89456757256;
    msg.type = 186U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("JRLCMNHFZNLGTXAHOHGLOYJQSJOYLIVSDTGBTGDIZBDCAGRXOJPXNDZAYFPHOCGXWATRIVLIPEDLFSXAVBPOWUWCTSWMPXKFMJIFNAVROBUZZVRJGFKMNEAFQZJOTUBYMVQBPVCKANYBGQKWELYEUBTRKQCYKIELHDRCKYQEMONOJIXCFUXWFKVCYWSVQZEANQYISGUDLHTTSXZBHHDJNQIFMDERPBWSSW");
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
    msg.setTimeStamp(0.0288224893472);
    msg.setSource(33411U);
    msg.setSourceEntity(207U);
    msg.setDestination(25288U);
    msg.setDestinationEntity(228U);
    msg.req_id = 63757U;
    msg.type = 154U;
    msg.status = 108U;
    msg.info.assign("MXBZIOFOUDEJIKZXFVITHDNIOFDMFWCTCQOEEUSOXGPFHJSBHTTGEEWGIEMTVEFRGVRDKZHHAEPWGALNWXDCPGHJNGVPBUJSYCARPOYYLPUBJBKALPUMYZNLCWKVZKTNQNSFTCRVSDXDRWQINPIMUSLMSWBZVVNEYKCYHKXKBQCPQCWABZHIFUSLTUZQSOAPXVJFGJANQOFIJYDBRREODGJ");
    msg.range = 0.572200791993;

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
    msg.setTimeStamp(0.864839781925);
    msg.setSource(32928U);
    msg.setSourceEntity(39U);
    msg.setDestination(57133U);
    msg.setDestinationEntity(150U);
    msg.req_id = 48398U;
    msg.type = 189U;
    msg.status = 198U;
    msg.info.assign("EPBPFXVPEANKODBWWQHTLPGWYUTAUBZETFKWFDXAPBTIFHETSYGACVKLKKBZEWCMSQBHOOJDHCDYNOLOEIXAVCNRXUIHXGDXZKSJVWNZGYLSZIMZXRRURRDOMOQVLAKRAMYPCBNHDHNSZEMLAUGXYJPSARJMJHLTXURXFVSYDNOPQGFTVWIIVPGQIERZMQKLINTMWHRFYCYB");
    msg.range = 0.317325836198;

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
    msg.setTimeStamp(0.678648491019);
    msg.setSource(6862U);
    msg.setSourceEntity(198U);
    msg.setDestination(52042U);
    msg.setDestinationEntity(140U);
    msg.req_id = 48394U;
    msg.type = 12U;
    msg.status = 128U;
    msg.info.assign("KZCZQKCXFAOUCFCIFIERTOPUULGSYKOOXDAJCXZVGWSQUNVBGWFTRKDUSBOFATXZNRACQEDQLMWUMHBSTFIVZJJDTOEDPQCXHXUYANEDDJMBQIWZEZVZRLHMQTKGHRHRKJKKLDFLBLYVMQUVCDPJWMMHORNIGBSJKGNNRBXXNHIY");
    msg.range = 0.285190092567;

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
    msg.setTimeStamp(0.136117994935);
    msg.setSource(34292U);
    msg.setSourceEntity(64U);
    msg.setDestination(38484U);
    msg.setDestinationEntity(8U);
    msg.value = 20404;

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
    msg.setTimeStamp(0.305552418879);
    msg.setSource(9494U);
    msg.setSourceEntity(117U);
    msg.setDestination(4448U);
    msg.setDestinationEntity(12U);
    msg.value = 3652;

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
    msg.setTimeStamp(0.264987830052);
    msg.setSource(51081U);
    msg.setSourceEntity(228U);
    msg.setDestination(48226U);
    msg.setDestinationEntity(201U);
    msg.value = -11389;

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
    msg.setTimeStamp(0.77383860397);
    msg.setSource(61825U);
    msg.setSourceEntity(140U);
    msg.setDestination(15083U);
    msg.setDestinationEntity(68U);
    msg.value = 0.873976096102;

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
    msg.setTimeStamp(0.966303232169);
    msg.setSource(34603U);
    msg.setSourceEntity(173U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(5U);
    msg.value = 0.587556425187;

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
    msg.setTimeStamp(0.716098363704);
    msg.setSource(59216U);
    msg.setSourceEntity(140U);
    msg.setDestination(49507U);
    msg.setDestinationEntity(249U);
    msg.value = 0.38243507349;

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
    msg.setTimeStamp(0.217950876738);
    msg.setSource(4754U);
    msg.setSourceEntity(237U);
    msg.setDestination(48361U);
    msg.setDestinationEntity(163U);
    msg.value = 0.293503794668;

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
    msg.setTimeStamp(0.173227086091);
    msg.setSource(35560U);
    msg.setSourceEntity(122U);
    msg.setDestination(22083U);
    msg.setDestinationEntity(105U);
    msg.value = 0.43514399497;

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
    msg.setTimeStamp(0.810935863363);
    msg.setSource(865U);
    msg.setSourceEntity(135U);
    msg.setDestination(62537U);
    msg.setDestinationEntity(62U);
    msg.value = 0.688868851495;

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
    msg.setTimeStamp(0.922343978924);
    msg.setSource(62028U);
    msg.setSourceEntity(139U);
    msg.setDestination(16265U);
    msg.setDestinationEntity(214U);
    msg.validity = 24051U;
    msg.type = 179U;
    msg.utc_year = 55352U;
    msg.utc_month = 129U;
    msg.utc_day = 63U;
    msg.utc_time = 0.625864882609;
    msg.lat = 0.168815870934;
    msg.lon = 0.172756614948;
    msg.height = 0.456170651218;
    msg.satellites = 87U;
    msg.cog = 0.642271371741;
    msg.sog = 0.0225445640705;
    msg.hdop = 0.167210431608;
    msg.vdop = 0.716795806949;
    msg.hacc = 0.414236200276;
    msg.vacc = 0.607927727445;

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
    msg.setTimeStamp(0.760460135204);
    msg.setSource(35272U);
    msg.setSourceEntity(71U);
    msg.setDestination(47161U);
    msg.setDestinationEntity(115U);
    msg.validity = 48847U;
    msg.type = 211U;
    msg.utc_year = 14202U;
    msg.utc_month = 233U;
    msg.utc_day = 122U;
    msg.utc_time = 0.857965492187;
    msg.lat = 0.513564280042;
    msg.lon = 0.930571434095;
    msg.height = 0.937470463482;
    msg.satellites = 77U;
    msg.cog = 0.425253095952;
    msg.sog = 0.265802484754;
    msg.hdop = 0.274608362439;
    msg.vdop = 0.0919939702848;
    msg.hacc = 0.527046101062;
    msg.vacc = 0.925588800729;

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
    msg.setTimeStamp(0.588738667053);
    msg.setSource(38755U);
    msg.setSourceEntity(218U);
    msg.setDestination(13271U);
    msg.setDestinationEntity(4U);
    msg.validity = 52202U;
    msg.type = 203U;
    msg.utc_year = 23252U;
    msg.utc_month = 170U;
    msg.utc_day = 219U;
    msg.utc_time = 0.664379688903;
    msg.lat = 0.586007839362;
    msg.lon = 0.533242205108;
    msg.height = 0.952256890213;
    msg.satellites = 41U;
    msg.cog = 0.875835968148;
    msg.sog = 0.117114056234;
    msg.hdop = 0.952939127119;
    msg.vdop = 0.416782894078;
    msg.hacc = 0.604270379547;
    msg.vacc = 0.524080530789;

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
    msg.setTimeStamp(0.986992644201);
    msg.setSource(36321U);
    msg.setSourceEntity(25U);
    msg.setDestination(36341U);
    msg.setDestinationEntity(205U);
    msg.time = 0.0625117940823;
    msg.phi = 0.543947847051;
    msg.theta = 0.46037683393;
    msg.psi = 0.366505026191;
    msg.psi_magnetic = 0.723202727102;

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
    msg.setTimeStamp(0.455399241978);
    msg.setSource(56121U);
    msg.setSourceEntity(100U);
    msg.setDestination(60513U);
    msg.setDestinationEntity(100U);
    msg.time = 0.582102177022;
    msg.phi = 0.40759984983;
    msg.theta = 0.463184099176;
    msg.psi = 0.216180537318;
    msg.psi_magnetic = 0.647520729242;

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
    msg.setTimeStamp(0.691662210334);
    msg.setSource(31239U);
    msg.setSourceEntity(251U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(188U);
    msg.time = 0.443439813939;
    msg.phi = 0.469939972932;
    msg.theta = 0.112113300704;
    msg.psi = 0.0735584231764;
    msg.psi_magnetic = 0.820844698267;

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
    msg.setTimeStamp(0.374458197911);
    msg.setSource(4733U);
    msg.setSourceEntity(182U);
    msg.setDestination(63221U);
    msg.setDestinationEntity(239U);
    msg.time = 0.968112976072;
    msg.x = 0.231112251907;
    msg.y = 0.726684508084;
    msg.z = 0.011460920229;
    msg.timestep = 0.936468235818;

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
    msg.setTimeStamp(0.430850269071);
    msg.setSource(45999U);
    msg.setSourceEntity(69U);
    msg.setDestination(60436U);
    msg.setDestinationEntity(187U);
    msg.time = 0.86047834792;
    msg.x = 0.282849565213;
    msg.y = 0.67685760272;
    msg.z = 0.667342150133;
    msg.timestep = 0.815193962005;

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
    msg.setTimeStamp(0.951202127068);
    msg.setSource(31518U);
    msg.setSourceEntity(181U);
    msg.setDestination(36109U);
    msg.setDestinationEntity(157U);
    msg.time = 0.905148999914;
    msg.x = 0.630882249951;
    msg.y = 0.189452093098;
    msg.z = 0.628927127377;
    msg.timestep = 0.203674150008;

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
    msg.setTimeStamp(0.38489575393);
    msg.setSource(28829U);
    msg.setSourceEntity(171U);
    msg.setDestination(781U);
    msg.setDestinationEntity(119U);
    msg.time = 0.17202921779;
    msg.x = 0.03674703751;
    msg.y = 0.864152169192;
    msg.z = 0.0338293884433;

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
    msg.setTimeStamp(0.647081420249);
    msg.setSource(11216U);
    msg.setSourceEntity(53U);
    msg.setDestination(32007U);
    msg.setDestinationEntity(188U);
    msg.time = 0.351885943002;
    msg.x = 0.195733211309;
    msg.y = 0.625252598066;
    msg.z = 0.188073572034;

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
    msg.setTimeStamp(0.633464890438);
    msg.setSource(59849U);
    msg.setSourceEntity(89U);
    msg.setDestination(54200U);
    msg.setDestinationEntity(188U);
    msg.time = 0.607117730576;
    msg.x = 0.379785307316;
    msg.y = 0.266333019038;
    msg.z = 0.492965985373;

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
    msg.setTimeStamp(0.552893906644);
    msg.setSource(45623U);
    msg.setSourceEntity(111U);
    msg.setDestination(1805U);
    msg.setDestinationEntity(140U);
    msg.time = 0.487009014015;
    msg.x = 0.855407187613;
    msg.y = 0.782395858484;
    msg.z = 0.918482454092;

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
    msg.setTimeStamp(0.271355873045);
    msg.setSource(31033U);
    msg.setSourceEntity(124U);
    msg.setDestination(59874U);
    msg.setDestinationEntity(157U);
    msg.time = 0.931488522627;
    msg.x = 0.760310016934;
    msg.y = 0.388051946107;
    msg.z = 0.614933387846;

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
    msg.setTimeStamp(0.547539206038);
    msg.setSource(37766U);
    msg.setSourceEntity(136U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(222U);
    msg.time = 0.179904001623;
    msg.x = 0.142550818503;
    msg.y = 0.951115778086;
    msg.z = 0.706417535723;

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
    msg.setTimeStamp(0.485158409249);
    msg.setSource(42580U);
    msg.setSourceEntity(98U);
    msg.setDestination(24521U);
    msg.setDestinationEntity(176U);
    msg.time = 0.433536081539;
    msg.x = 0.682076400115;
    msg.y = 0.976474261778;
    msg.z = 0.327830945641;

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
    msg.setTimeStamp(0.41052105209);
    msg.setSource(65230U);
    msg.setSourceEntity(62U);
    msg.setDestination(12443U);
    msg.setDestinationEntity(3U);
    msg.time = 0.644911978458;
    msg.x = 0.989866814666;
    msg.y = 0.846436273956;
    msg.z = 0.640352963622;

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
    msg.setTimeStamp(0.353001702728);
    msg.setSource(26097U);
    msg.setSourceEntity(144U);
    msg.setDestination(33876U);
    msg.setDestinationEntity(33U);
    msg.time = 0.52693780015;
    msg.x = 0.788019911667;
    msg.y = 0.29647299482;
    msg.z = 0.871779596654;

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
    msg.setTimeStamp(0.600654369317);
    msg.setSource(54402U);
    msg.setSourceEntity(240U);
    msg.setDestination(16134U);
    msg.setDestinationEntity(97U);
    msg.validity = 4U;
    msg.x = 0.0771261362362;
    msg.y = 0.546068375345;
    msg.z = 0.911997668011;

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
    msg.setTimeStamp(0.068272929403);
    msg.setSource(1935U);
    msg.setSourceEntity(60U);
    msg.setDestination(33601U);
    msg.setDestinationEntity(117U);
    msg.validity = 206U;
    msg.x = 0.206557726945;
    msg.y = 0.793143738328;
    msg.z = 0.874181083685;

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
    msg.setTimeStamp(0.445649570217);
    msg.setSource(47883U);
    msg.setSourceEntity(135U);
    msg.setDestination(13228U);
    msg.setDestinationEntity(166U);
    msg.validity = 152U;
    msg.x = 0.428026304923;
    msg.y = 0.181599261365;
    msg.z = 0.68939863248;

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
    msg.setTimeStamp(0.42380604878);
    msg.setSource(50692U);
    msg.setSourceEntity(217U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(102U);
    msg.validity = 27U;
    msg.x = 0.888470065606;
    msg.y = 0.97360482388;
    msg.z = 0.528086262742;

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
    msg.setTimeStamp(0.66346724899);
    msg.setSource(61542U);
    msg.setSourceEntity(129U);
    msg.setDestination(63636U);
    msg.setDestinationEntity(218U);
    msg.validity = 240U;
    msg.x = 0.250426399916;
    msg.y = 0.210149974438;
    msg.z = 0.519184844975;

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
    msg.setTimeStamp(0.741422104396);
    msg.setSource(12326U);
    msg.setSourceEntity(74U);
    msg.setDestination(55628U);
    msg.setDestinationEntity(176U);
    msg.validity = 114U;
    msg.x = 0.542652435048;
    msg.y = 0.549252854628;
    msg.z = 0.982854322875;

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
    msg.setTimeStamp(0.594067909512);
    msg.setSource(20427U);
    msg.setSourceEntity(62U);
    msg.setDestination(64513U);
    msg.setDestinationEntity(76U);
    msg.time = 0.222280822407;
    msg.x = 0.187652346153;
    msg.y = 0.105811167426;
    msg.z = 0.549963946253;

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
    msg.setTimeStamp(0.560604708742);
    msg.setSource(50826U);
    msg.setSourceEntity(52U);
    msg.setDestination(7014U);
    msg.setDestinationEntity(76U);
    msg.time = 0.774161117542;
    msg.x = 0.357223097285;
    msg.y = 0.553584975362;
    msg.z = 0.924988485509;

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
    msg.setTimeStamp(0.389992681606);
    msg.setSource(58611U);
    msg.setSourceEntity(196U);
    msg.setDestination(11722U);
    msg.setDestinationEntity(169U);
    msg.time = 0.951092152712;
    msg.x = 0.609379514036;
    msg.y = 0.0769203361678;
    msg.z = 0.331476279976;

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
    msg.setTimeStamp(0.59461616424);
    msg.setSource(32433U);
    msg.setSourceEntity(79U);
    msg.setDestination(33019U);
    msg.setDestinationEntity(184U);
    msg.validity = 56U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.474718790714;
    tmp_msg_0.y = 0.725474774025;
    tmp_msg_0.z = 0.647795485198;
    tmp_msg_0.phi = 0.715029244094;
    tmp_msg_0.theta = 0.261323279151;
    tmp_msg_0.psi = 0.512326201497;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.281729480426;
    tmp_msg_1.beam_height = 0.528251529638;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.446569849266;

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
    msg.setTimeStamp(0.245842005267);
    msg.setSource(6182U);
    msg.setSourceEntity(217U);
    msg.setDestination(19527U);
    msg.setDestinationEntity(58U);
    msg.validity = 238U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.823925241618;
    tmp_msg_0.y = 0.331428240077;
    tmp_msg_0.z = 0.38666857854;
    tmp_msg_0.phi = 0.728140007704;
    tmp_msg_0.theta = 0.746237189507;
    tmp_msg_0.psi = 0.827625094259;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.186498814101;
    tmp_msg_1.beam_height = 0.122897505966;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.964422881651;

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
    msg.setTimeStamp(0.299705409053);
    msg.setSource(27721U);
    msg.setSourceEntity(64U);
    msg.setDestination(4375U);
    msg.setDestinationEntity(65U);
    msg.validity = 164U;
    msg.value = 0.171474423469;

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
    msg.setTimeStamp(0.460563375035);
    msg.setSource(63585U);
    msg.setSourceEntity(83U);
    msg.setDestination(62477U);
    msg.setDestinationEntity(207U);
    msg.value = 0.114873687202;

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
    msg.setTimeStamp(0.436011871458);
    msg.setSource(59064U);
    msg.setSourceEntity(136U);
    msg.setDestination(12413U);
    msg.setDestinationEntity(165U);
    msg.value = 0.341818224999;

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
    msg.setTimeStamp(0.617476672003);
    msg.setSource(1379U);
    msg.setSourceEntity(129U);
    msg.setDestination(31026U);
    msg.setDestinationEntity(206U);
    msg.value = 0.511578444915;

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
    msg.setTimeStamp(0.422711568982);
    msg.setSource(31051U);
    msg.setSourceEntity(136U);
    msg.setDestination(48179U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0550056172982;

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
    msg.setTimeStamp(0.818090960619);
    msg.setSource(29477U);
    msg.setSourceEntity(224U);
    msg.setDestination(38207U);
    msg.setDestinationEntity(66U);
    msg.value = 0.739327087684;

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
    msg.setTimeStamp(0.872023157327);
    msg.setSource(47473U);
    msg.setSourceEntity(72U);
    msg.setDestination(43448U);
    msg.setDestinationEntity(126U);
    msg.value = 0.379966020269;

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
    msg.setTimeStamp(0.129237642411);
    msg.setSource(56102U);
    msg.setSourceEntity(89U);
    msg.setDestination(29430U);
    msg.setDestinationEntity(235U);
    msg.value = 0.529660306796;

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
    msg.setTimeStamp(0.0710900820874);
    msg.setSource(45748U);
    msg.setSourceEntity(136U);
    msg.setDestination(26342U);
    msg.setDestinationEntity(118U);
    msg.value = 0.968531716116;

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
    msg.setTimeStamp(0.848264140395);
    msg.setSource(52866U);
    msg.setSourceEntity(220U);
    msg.setDestination(58387U);
    msg.setDestinationEntity(97U);
    msg.value = 0.894697527566;

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
    msg.setTimeStamp(0.44814389332);
    msg.setSource(8340U);
    msg.setSourceEntity(124U);
    msg.setDestination(5080U);
    msg.setDestinationEntity(73U);
    msg.value = 0.984134807741;

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
    msg.setTimeStamp(0.0726853708069);
    msg.setSource(14033U);
    msg.setSourceEntity(232U);
    msg.setDestination(51677U);
    msg.setDestinationEntity(249U);
    msg.value = 0.111703765818;

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
    msg.setTimeStamp(0.430520415066);
    msg.setSource(33875U);
    msg.setSourceEntity(225U);
    msg.setDestination(42659U);
    msg.setDestinationEntity(18U);
    msg.value = 0.582390328634;

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
    msg.setTimeStamp(0.38477675175);
    msg.setSource(11269U);
    msg.setSourceEntity(216U);
    msg.setDestination(36938U);
    msg.setDestinationEntity(11U);
    msg.value = 0.810073962979;

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
    msg.setTimeStamp(0.331314904895);
    msg.setSource(54644U);
    msg.setSourceEntity(160U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(51U);
    msg.value = 0.40973463652;

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
    msg.setTimeStamp(0.438768994147);
    msg.setSource(8335U);
    msg.setSourceEntity(224U);
    msg.setDestination(39968U);
    msg.setDestinationEntity(197U);
    msg.value = 0.43894176078;

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
    msg.setTimeStamp(0.885708717583);
    msg.setSource(12251U);
    msg.setSourceEntity(162U);
    msg.setDestination(37579U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0470446416897;

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
    msg.setTimeStamp(0.322889391444);
    msg.setSource(2381U);
    msg.setSourceEntity(14U);
    msg.setDestination(48700U);
    msg.setDestinationEntity(124U);
    msg.value = 0.565491014453;

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
    msg.setTimeStamp(0.477703905866);
    msg.setSource(32380U);
    msg.setSourceEntity(241U);
    msg.setDestination(40649U);
    msg.setDestinationEntity(181U);
    msg.value = 0.454428435779;

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
    msg.setTimeStamp(0.139545066958);
    msg.setSource(8316U);
    msg.setSourceEntity(69U);
    msg.setDestination(17484U);
    msg.setDestinationEntity(214U);
    msg.value = 0.798222889947;

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
    msg.setTimeStamp(0.454065440858);
    msg.setSource(7233U);
    msg.setSourceEntity(137U);
    msg.setDestination(9249U);
    msg.setDestinationEntity(35U);
    msg.value = 0.693645916257;

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
    msg.setTimeStamp(0.595210811746);
    msg.setSource(13705U);
    msg.setSourceEntity(166U);
    msg.setDestination(24174U);
    msg.setDestinationEntity(140U);
    msg.value = 0.923794994003;

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
    msg.setTimeStamp(0.42318014987);
    msg.setSource(31173U);
    msg.setSourceEntity(230U);
    msg.setDestination(43746U);
    msg.setDestinationEntity(149U);
    msg.value = 0.793207651231;

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
    msg.setTimeStamp(0.0113231380465);
    msg.setSource(30048U);
    msg.setSourceEntity(223U);
    msg.setDestination(63728U);
    msg.setDestinationEntity(221U);
    msg.value = 0.473353551078;

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
    msg.setTimeStamp(0.0935967402441);
    msg.setSource(52544U);
    msg.setSourceEntity(38U);
    msg.setDestination(64316U);
    msg.setDestinationEntity(18U);
    msg.value = 0.666240127734;

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
    msg.setTimeStamp(0.5648015693);
    msg.setSource(35672U);
    msg.setSourceEntity(154U);
    msg.setDestination(13971U);
    msg.setDestinationEntity(118U);
    msg.direction = 0.808564814552;
    msg.speed = 0.941973534806;
    msg.turbulence = 0.773845658461;

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
    msg.setTimeStamp(0.60245782273);
    msg.setSource(30435U);
    msg.setSourceEntity(38U);
    msg.setDestination(4237U);
    msg.setDestinationEntity(228U);
    msg.direction = 0.0722538190811;
    msg.speed = 0.894307872148;
    msg.turbulence = 0.795197564787;

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
    msg.setTimeStamp(0.653294633131);
    msg.setSource(31095U);
    msg.setSourceEntity(196U);
    msg.setDestination(11244U);
    msg.setDestinationEntity(150U);
    msg.direction = 0.689696092617;
    msg.speed = 0.0580793518752;
    msg.turbulence = 0.616497076676;

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
    msg.setTimeStamp(0.567872480414);
    msg.setSource(55408U);
    msg.setSourceEntity(95U);
    msg.setDestination(50493U);
    msg.setDestinationEntity(209U);
    msg.value = 0.576872221681;

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
    msg.setTimeStamp(0.695793592996);
    msg.setSource(40668U);
    msg.setSourceEntity(239U);
    msg.setDestination(41663U);
    msg.setDestinationEntity(80U);
    msg.value = 0.371990497811;

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
    msg.setTimeStamp(0.0551437893582);
    msg.setSource(17828U);
    msg.setSourceEntity(56U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(102U);
    msg.value = 0.400279719017;

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
    msg.setTimeStamp(0.0162784936211);
    msg.setSource(37794U);
    msg.setSourceEntity(228U);
    msg.setDestination(44295U);
    msg.setDestinationEntity(72U);
    msg.value.assign("WFFTCTUYHTVZEBKWTQVXQPUIJNIOZHDQFLSGEBCDZVWLAIDEDSOARIBHNSSCSAWUFPLUNXSGWUOGMUETCFAR");

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
    msg.setTimeStamp(0.682942922558);
    msg.setSource(53112U);
    msg.setSourceEntity(203U);
    msg.setDestination(34159U);
    msg.setDestinationEntity(30U);
    msg.value.assign("YPARSCCBNHLWFIZYRSUJMCJGSEEJSVIYXGVYJNKDANGBGUHWNIASTAUPXMWHBAJMXNKMEBBQTMPDZWNWOOODHVZAXTYEHCGWXGSMLHSUBWNLXAFDF");

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
    msg.setTimeStamp(0.820115109439);
    msg.setSource(46349U);
    msg.setSourceEntity(38U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(209U);
    msg.value.assign("SGHXSSAGHVHOGTBDJNYIEWHILADZGBPJHZAJHUMIUMGVRSMKUFKABQVWWRKAPTYDNGCKQFZBLWPJJFEXTKSEULVNUDAZITWBEBMNCAFESZYYQMHIBQMVYYCGPWXPHDCRINFLJJJHENNCXMEGPOYEDOSEWUZTKRTCISALDVFLZRKROTRLNQKWVQNVCXJKONMRUJVDOWXSPQYOZMOFIAZPRKOUYCQFTYVZRGXTBCDFXQABIFOWXDMLCPQU");

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
    msg.setTimeStamp(0.00952363422068);
    msg.setSource(28091U);
    msg.setSourceEntity(229U);
    msg.setDestination(35631U);
    msg.setDestinationEntity(13U);
    const char tmp_msg_0[] = {-108, 78, 0, -40, -37, 87, 84, -76, 45, 112, -16, 38, 6, -11, -78, 40, -35, -11, -93, 78, 111, 53, 87, -21, -99, -78, 15, -45, 14, 7, -86, -79, -7, -99, -116, 59, 11, -102, -23, -77, 107, -120, -82, 24, 3, -18, 71, 92, -63, 94, 35, -91, -54, 18, -32, -60, -81, -5, -26, -9, 115, -31, -78, 15, -121, -58, 4, 112, -15, 14, 24, -90, -87, -67, -24, 115, -23, 11, 65, 65, -101, -9, -115, -34, 114, -112, 31, 66, -52, -51, -11, 18, 113, -108, 48, -7, -115, 32, -22, 19, -79, 2, -53, 22, 97, 114, -123, 46, -81, 43, 97, -36, -67, -127, 25, -44, 45, 29, 53, 87, -4, -117, 83, 39, 73, 72, -13, 68, -49, -106, -3, 97, 11, 57, 113, 3, -60, 67, -124, -24, -44, 75, -29, 124, 111, 62, -44, -97, 28, 97, -91, 57, -64, -3, -103, 103, -19, 7, -44, 35, 109, -38, -103, -27, 10, -2, -25};
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
    msg.setTimeStamp(0.342237067029);
    msg.setSource(54233U);
    msg.setSourceEntity(68U);
    msg.setDestination(58654U);
    msg.setDestinationEntity(141U);
    const char tmp_msg_0[] = {-87, -39, 3, -42, 7, -80, -122, -113, 37, -99, -5, -68, -68, 102, 1, -25, -46, 50, -86, 10, 92, -103, -12, -81, -37, -14, -61, -102, -16, 95, 65, -38, 80, 78, 11, 12, -115, -88, -11, -76, -111, -63, -88, 21, 49, -104, -22, -9, 7, -18, 32, -92, 57, -70, -19, 95, 33, 107, 103, -118, 11, -102, 75, -45, 109, -73, 85, -98, -30, -126, -2, 106, 82, -92, -13, 44, -72, -102, 17, 9, 115, 78, 63, 49, -62, -91, 117, -75, -29, -62, 117, 8, -73, 35, 55, -87, 64, 3, -115, 81, 84, 44, 65, -87, 28, 110, -78, -47, 7, -117, -110, 14, 40, -42, -86, 3, 114, 35, 122, 64, 119, 83, -78, -117, -100, -8, 123, -10, -87, -99, -115, 31, 29, -42, 107, -21, 122, -85, -103, -75, 78, 18, 119, -100, 28, 65, -121, -115, -62, 24, 60, -115, -85, 61, 71, -83, 43, 36, -4, -9, 24, -17, 78, 26, 3, 8, -31, -85, 62, 89, 112, 102, 29, -58, -58, -110, -62, -92, -59, 67, 74, -6, -35, 42, 13, 31, -75, 29, 62, 118, -44, 114, -81, 96, 25, -72, -2, 60, 89, -124, -87, -85, -36, 91, -22, -13, -39, 11, 49, -8, -72, 6, 15, 61, -49, -91, 112, 40, 107, 73, -102, -105, -7, -62, 61, -68, 119, 64, -65};
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
    msg.setTimeStamp(0.618242189096);
    msg.setSource(26450U);
    msg.setSourceEntity(16U);
    msg.setDestination(63829U);
    msg.setDestinationEntity(108U);
    const char tmp_msg_0[] = {-123, -29, -63, 71, 25, -90, -84, 38, -29, -87, 98, -123, 95, 87, 9, 106, 35, 104, -124, 64, 83, 67, 73, -78, 40, 121, -17, -42, 81, 27, -120, 76, 25, 73, 46, -61, 23, -26, -64, 119, -34, -73, -127, -42, 59, -87, 62, 45, 30, 99, 116, -12, -17, -11, 75, 102, 108, -83, -72, -15, 37, 89, 43, -39, -42, 4, -115, -60, 99, -57, 41, 35, 93, -92, -120, 0, -58, 22, -8, -85, -124, -15, 57, 80, -121, -20, -34, 64, 103, 68, 8, -45, -125, 18, 0, 15, -108, 27, 95, 123, 32};
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
    msg.setTimeStamp(0.128974644872);
    msg.setSource(46467U);
    msg.setSourceEntity(209U);
    msg.setDestination(24061U);
    msg.setDestinationEntity(135U);
    msg.value = 0.148432478499;

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
    msg.setTimeStamp(0.675788375603);
    msg.setSource(53781U);
    msg.setSourceEntity(95U);
    msg.setDestination(34970U);
    msg.setDestinationEntity(74U);
    msg.value = 0.488450783221;

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
    msg.setTimeStamp(0.925111535759);
    msg.setSource(28333U);
    msg.setSourceEntity(64U);
    msg.setDestination(31790U);
    msg.setDestinationEntity(180U);
    msg.value = 0.568102315564;

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
    msg.setTimeStamp(0.423911000742);
    msg.setSource(50157U);
    msg.setSourceEntity(241U);
    msg.setDestination(51844U);
    msg.setDestinationEntity(199U);
    msg.type = 159U;
    msg.frequency = 2858371131U;
    msg.min_range = 12578U;
    msg.max_range = 52579U;
    msg.bits_per_point = 212U;
    msg.scale_factor = 0.501722972517;
    const char tmp_msg_0[] = {-83, 76, 31, -88, 72, 56, -61, -127, 22, -33, -79, -55, -75, -124, 1, -49, -33, -23, 5, -89, 100, -104, -86, -18, 122, -1, -96, -121, -10, 55, -91, 70, -50, -128, -40, -37, -62, 125, -128, -114, 121, 39, -24, -99, 73, -85, 1, 38, 116, -79, -6, -114, -52, -45, -3, -30, -17, -34, 36, -59, 101, -76, -77, 69, -20, 32, 12, 16, -121, 19, 24, 7, -47, 80, 38, -111, -45, 80, 11, 100, -109, -89, 104, 65, -15, 61, -36, -54, 59};
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
    msg.setTimeStamp(0.118694716703);
    msg.setSource(39734U);
    msg.setSourceEntity(146U);
    msg.setDestination(20988U);
    msg.setDestinationEntity(11U);
    msg.type = 23U;
    msg.frequency = 1624955167U;
    msg.min_range = 42679U;
    msg.max_range = 46599U;
    msg.bits_per_point = 64U;
    msg.scale_factor = 0.407658003232;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.154913222927;
    tmp_msg_0.beam_height = 0.910771523614;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-116, 73, 63, -125, 92, -16, -70, -25, -81, -42, 90, 65, 50, -102, 32, -68, -118, -32, -81, -16, 17, -45, 1, -93, 37, 31, -9, -58, 123, 25, 88, -23, 46, 5, 27, -37, 99, -127, 86, -104, 19, -55, -70, 113, 84, 40, -100, -122, -104, -9, 100, 58, 12, 7, -56, 35, 26, 102, -62, -48, 39, -98, -114, 62, -41};
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
    msg.setTimeStamp(0.880542112581);
    msg.setSource(17020U);
    msg.setSourceEntity(208U);
    msg.setDestination(60139U);
    msg.setDestinationEntity(243U);
    msg.type = 252U;
    msg.frequency = 503181922U;
    msg.min_range = 20084U;
    msg.max_range = 21830U;
    msg.bits_per_point = 254U;
    msg.scale_factor = 0.252373046155;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.409905566938;
    tmp_msg_0.beam_height = 0.208945478259;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {24, 108, -75, 50, 113, -84, -72, 59, -50, -19, 106, 5, -63, 61, 99, 103, -118, -101, -62, 78, 46};
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
    msg.setTimeStamp(0.0261443957787);
    msg.setSource(44926U);
    msg.setSourceEntity(194U);
    msg.setDestination(20366U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.700111439006);
    msg.setSource(37305U);
    msg.setSourceEntity(98U);
    msg.setDestination(58697U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.690963966615);
    msg.setSource(32089U);
    msg.setSourceEntity(88U);
    msg.setDestination(4680U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.116200162796);
    msg.setSource(63806U);
    msg.setSourceEntity(250U);
    msg.setDestination(33693U);
    msg.setDestinationEntity(144U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.966498238421);
    msg.setSource(46372U);
    msg.setSourceEntity(112U);
    msg.setDestination(36786U);
    msg.setDestinationEntity(41U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.21097639577);
    msg.setSource(40888U);
    msg.setSourceEntity(24U);
    msg.setDestination(16254U);
    msg.setDestinationEntity(63U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.855484340021);
    msg.setSource(39484U);
    msg.setSourceEntity(63U);
    msg.setDestination(11110U);
    msg.setDestinationEntity(213U);
    msg.value = 0.766463773457;
    msg.confidence = 0.62560448217;
    msg.opmodes.assign("IMNUFPFVHBIXSFQTGZZGYXTDPPSRXTHMRCOQXXUOOHKUCCAERRGNCZZIEEHOMVZBJJMBIKVPOJJNKSYWJZWKFDAEIDGIOCVWKTZFLLUXQFXVRPKUUHQERSQCYFHLMLUYLECSYADSDPMJPRHGKRUBNKBFL");

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
    msg.setTimeStamp(0.757185405955);
    msg.setSource(41377U);
    msg.setSourceEntity(167U);
    msg.setDestination(3063U);
    msg.setDestinationEntity(121U);
    msg.value = 0.157420764151;
    msg.confidence = 0.897867566141;
    msg.opmodes.assign("PKOIFYTNHOGLKSBFOBTIHEMVZXFXIRUZDNSPMTVZWDNAVIULZKJUQQTVCCDJMYBKLGGPTRRPALWIIAFZFQEFLWZRPODNBWIAHWNVCUXQIICRODLTMUDFQEJSMNBMYZGNEOPYGSBMS");

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
    msg.setTimeStamp(0.180130297059);
    msg.setSource(5103U);
    msg.setSourceEntity(152U);
    msg.setDestination(47453U);
    msg.setDestinationEntity(94U);
    msg.value = 0.272965871735;
    msg.confidence = 0.619176527242;
    msg.opmodes.assign("FWIGOTQZJKOMTEMKQHIDQMZQGXUJUBKDXUFEYZRDNTHEBSZWLTUUSYRAYBRNPATFORULKJFMJWAFVHMKCFNDLWUIULPGLWGWRKYVXLHPSDJMKEEYGVWBTZJBYMUQZCPIEAFGFUOHADVIYSHJZFNCOIVJPPDCOSNOICAGDDHSXIQAWKHIHELBDLTWXVAVSJAPICNNSR");

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
    msg.setTimeStamp(0.694279011394);
    msg.setSource(48732U);
    msg.setSourceEntity(221U);
    msg.setDestination(31376U);
    msg.setDestinationEntity(121U);
    msg.itow = 3973669335U;
    msg.lat = 0.760832430236;
    msg.lon = 0.307149128363;
    msg.height_ell = 0.579935838602;
    msg.height_sea = 0.0909488768965;
    msg.hacc = 0.839565910414;
    msg.vacc = 0.915676302802;
    msg.vel_n = 0.0388665328944;
    msg.vel_e = 0.203035346766;
    msg.vel_d = 0.80197732845;
    msg.speed = 0.732950506191;
    msg.gspeed = 0.453899665764;
    msg.heading = 0.233330738533;
    msg.sacc = 0.866769674517;
    msg.cacc = 0.664473062351;

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
    msg.setTimeStamp(0.21499226166);
    msg.setSource(45557U);
    msg.setSourceEntity(61U);
    msg.setDestination(33215U);
    msg.setDestinationEntity(230U);
    msg.itow = 1360768987U;
    msg.lat = 0.0595811384344;
    msg.lon = 0.481390032494;
    msg.height_ell = 0.157675691013;
    msg.height_sea = 0.679435675534;
    msg.hacc = 0.218244289302;
    msg.vacc = 0.0549828590598;
    msg.vel_n = 0.605363538211;
    msg.vel_e = 0.202034231826;
    msg.vel_d = 0.973750640545;
    msg.speed = 0.509198642434;
    msg.gspeed = 0.221801538341;
    msg.heading = 0.145785967127;
    msg.sacc = 0.131047838439;
    msg.cacc = 0.682580803933;

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
    msg.setTimeStamp(0.827755992234);
    msg.setSource(17525U);
    msg.setSourceEntity(143U);
    msg.setDestination(24129U);
    msg.setDestinationEntity(60U);
    msg.itow = 1855058132U;
    msg.lat = 0.830900697497;
    msg.lon = 0.260462044082;
    msg.height_ell = 0.911259938598;
    msg.height_sea = 0.649113536225;
    msg.hacc = 0.556555630726;
    msg.vacc = 0.0961640313383;
    msg.vel_n = 0.0689924605257;
    msg.vel_e = 0.85370445795;
    msg.vel_d = 0.306299732509;
    msg.speed = 0.396379987336;
    msg.gspeed = 0.762036262932;
    msg.heading = 0.764674137013;
    msg.sacc = 0.740780911972;
    msg.cacc = 0.66018006582;

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
    msg.setTimeStamp(0.264942622393);
    msg.setSource(9963U);
    msg.setSourceEntity(19U);
    msg.setDestination(57498U);
    msg.setDestinationEntity(16U);
    msg.id = 205U;
    msg.value = 0.986326953334;

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
    msg.setTimeStamp(0.223134657904);
    msg.setSource(11470U);
    msg.setSourceEntity(104U);
    msg.setDestination(12962U);
    msg.setDestinationEntity(7U);
    msg.id = 132U;
    msg.value = 0.248898996703;

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
    msg.setTimeStamp(0.523203679094);
    msg.setSource(19178U);
    msg.setSourceEntity(88U);
    msg.setDestination(49555U);
    msg.setDestinationEntity(34U);
    msg.id = 221U;
    msg.value = 0.978511538014;

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
    msg.setTimeStamp(0.61266081029);
    msg.setSource(11577U);
    msg.setSourceEntity(172U);
    msg.setDestination(54115U);
    msg.setDestinationEntity(12U);
    msg.x = 0.0715045718765;
    msg.y = 0.146709512264;
    msg.z = 0.343775395615;
    msg.phi = 0.505600930052;
    msg.theta = 0.426280843949;
    msg.psi = 0.484664135635;

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
    msg.setTimeStamp(0.475813832868);
    msg.setSource(14142U);
    msg.setSourceEntity(151U);
    msg.setDestination(25448U);
    msg.setDestinationEntity(74U);
    msg.x = 0.13018154919;
    msg.y = 0.957829782893;
    msg.z = 0.0287644782293;
    msg.phi = 0.896225663246;
    msg.theta = 0.764569050333;
    msg.psi = 0.715607139255;

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
    msg.setTimeStamp(0.356995674694);
    msg.setSource(39460U);
    msg.setSourceEntity(220U);
    msg.setDestination(53607U);
    msg.setDestinationEntity(44U);
    msg.x = 0.609873199542;
    msg.y = 0.949613007922;
    msg.z = 0.22490964403;
    msg.phi = 0.561716945107;
    msg.theta = 0.913756249253;
    msg.psi = 0.474006582487;

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
    msg.setTimeStamp(0.0532560059926);
    msg.setSource(12930U);
    msg.setSourceEntity(237U);
    msg.setDestination(33618U);
    msg.setDestinationEntity(199U);
    msg.beam_width = 0.897161489973;
    msg.beam_height = 0.456428265054;

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
    msg.setTimeStamp(0.66994242503);
    msg.setSource(20045U);
    msg.setSourceEntity(64U);
    msg.setDestination(23739U);
    msg.setDestinationEntity(204U);
    msg.beam_width = 0.437905564013;
    msg.beam_height = 0.557276614876;

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
    msg.setTimeStamp(0.238351326428);
    msg.setSource(48477U);
    msg.setSourceEntity(239U);
    msg.setDestination(31088U);
    msg.setDestinationEntity(121U);
    msg.beam_width = 0.196911789088;
    msg.beam_height = 0.823902925635;

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
    msg.setTimeStamp(0.76736018795);
    msg.setSource(30425U);
    msg.setSourceEntity(122U);
    msg.setDestination(34026U);
    msg.setDestinationEntity(42U);
    msg.sane = 5U;

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
    msg.setTimeStamp(0.034483318318);
    msg.setSource(32744U);
    msg.setSourceEntity(108U);
    msg.setDestination(16286U);
    msg.setDestinationEntity(238U);
    msg.sane = 28U;

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
    msg.setTimeStamp(0.985116208734);
    msg.setSource(54766U);
    msg.setSourceEntity(45U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(222U);
    msg.sane = 233U;

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
    msg.setTimeStamp(0.0302664603868);
    msg.setSource(45264U);
    msg.setSourceEntity(198U);
    msg.setDestination(13907U);
    msg.setDestinationEntity(230U);
    msg.value = 0.479137845999;

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
    msg.setTimeStamp(0.0056275920998);
    msg.setSource(12477U);
    msg.setSourceEntity(53U);
    msg.setDestination(54851U);
    msg.setDestinationEntity(234U);
    msg.value = 0.325723051027;

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
    msg.setTimeStamp(0.848759405583);
    msg.setSource(35976U);
    msg.setSourceEntity(238U);
    msg.setDestination(50297U);
    msg.setDestinationEntity(174U);
    msg.value = 0.693615500268;

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
    msg.setTimeStamp(0.427505247762);
    msg.setSource(23984U);
    msg.setSourceEntity(3U);
    msg.setDestination(3566U);
    msg.setDestinationEntity(182U);
    msg.value = 0.13215387886;

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
    msg.setTimeStamp(0.389901945161);
    msg.setSource(11871U);
    msg.setSourceEntity(59U);
    msg.setDestination(50637U);
    msg.setDestinationEntity(236U);
    msg.value = 0.681071154031;

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
    msg.setTimeStamp(0.608948706211);
    msg.setSource(41588U);
    msg.setSourceEntity(115U);
    msg.setDestination(11083U);
    msg.setDestinationEntity(215U);
    msg.value = 0.931402883968;

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
    msg.setTimeStamp(0.176791457509);
    msg.setSource(64287U);
    msg.setSourceEntity(57U);
    msg.setDestination(11249U);
    msg.setDestinationEntity(215U);
    msg.value = 0.212227753276;

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
    msg.setTimeStamp(0.126696385699);
    msg.setSource(9907U);
    msg.setSourceEntity(213U);
    msg.setDestination(30162U);
    msg.setDestinationEntity(241U);
    msg.value = 0.775459757765;

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
    msg.setTimeStamp(0.276505336761);
    msg.setSource(52436U);
    msg.setSourceEntity(38U);
    msg.setDestination(15928U);
    msg.setDestinationEntity(8U);
    msg.value = 0.559315159048;

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
    msg.setTimeStamp(0.33135743184);
    msg.setSource(49020U);
    msg.setSourceEntity(34U);
    msg.setDestination(62726U);
    msg.setDestinationEntity(61U);
    msg.value = 0.807185162756;

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
    msg.setTimeStamp(0.590142941508);
    msg.setSource(33908U);
    msg.setSourceEntity(100U);
    msg.setDestination(60608U);
    msg.setDestinationEntity(74U);
    msg.value = 0.0776844875004;

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
    msg.setTimeStamp(0.722204255445);
    msg.setSource(39326U);
    msg.setSourceEntity(148U);
    msg.setDestination(16569U);
    msg.setDestinationEntity(213U);
    msg.value = 0.843289803886;

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
    msg.setTimeStamp(0.97157144309);
    msg.setSource(57647U);
    msg.setSourceEntity(195U);
    msg.setDestination(15485U);
    msg.setDestinationEntity(138U);
    msg.value = 0.326835950952;

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
    msg.setTimeStamp(0.152751637153);
    msg.setSource(60053U);
    msg.setSourceEntity(227U);
    msg.setDestination(60279U);
    msg.setDestinationEntity(39U);
    msg.value = 0.851502057897;

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
    msg.setTimeStamp(0.271500390541);
    msg.setSource(34859U);
    msg.setSourceEntity(34U);
    msg.setDestination(54665U);
    msg.setDestinationEntity(139U);
    msg.value = 0.857838604699;

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
    msg.setTimeStamp(0.456105343042);
    msg.setSource(53604U);
    msg.setSourceEntity(40U);
    msg.setDestination(12544U);
    msg.setDestinationEntity(204U);
    msg.value = 0.730008621384;

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
    msg.setTimeStamp(0.765423027982);
    msg.setSource(43030U);
    msg.setSourceEntity(118U);
    msg.setDestination(2967U);
    msg.setDestinationEntity(157U);
    msg.value = 0.217141067648;

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
    msg.setTimeStamp(0.784888999535);
    msg.setSource(37930U);
    msg.setSourceEntity(117U);
    msg.setDestination(43296U);
    msg.setDestinationEntity(147U);
    msg.value = 0.00969977573809;

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
    msg.setTimeStamp(0.667931660373);
    msg.setSource(55412U);
    msg.setSourceEntity(249U);
    msg.setDestination(49684U);
    msg.setDestinationEntity(200U);
    msg.value = 0.716952195117;

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
    msg.setTimeStamp(0.282763447388);
    msg.setSource(62982U);
    msg.setSourceEntity(69U);
    msg.setDestination(57230U);
    msg.setDestinationEntity(197U);
    msg.value = 0.646579141767;

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
    msg.setTimeStamp(0.755969742868);
    msg.setSource(3841U);
    msg.setSourceEntity(122U);
    msg.setDestination(40366U);
    msg.setDestinationEntity(89U);
    msg.value = 0.993750572416;

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
    msg.setTimeStamp(0.998948283031);
    msg.setSource(54700U);
    msg.setSourceEntity(170U);
    msg.setDestination(13415U);
    msg.setDestinationEntity(209U);
    msg.value = 0.562789228305;

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
    msg.setTimeStamp(0.13056333184);
    msg.setSource(27675U);
    msg.setSourceEntity(43U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(199U);
    msg.value = 0.820464865313;

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
    msg.setTimeStamp(0.474130894216);
    msg.setSource(65512U);
    msg.setSourceEntity(45U);
    msg.setDestination(55276U);
    msg.setDestinationEntity(166U);
    msg.value = 0.650835420016;

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
    msg.setTimeStamp(0.714484962231);
    msg.setSource(63623U);
    msg.setSourceEntity(123U);
    msg.setDestination(5713U);
    msg.setDestinationEntity(142U);
    msg.validity = 20523U;
    msg.type = 232U;
    msg.tow = 988717756U;
    msg.base_lat = 0.95437579199;
    msg.base_lon = 0.187804832173;
    msg.base_height = 0.189283271848;
    msg.n = 0.620134119422;
    msg.e = 0.603939451759;
    msg.d = 0.731773624993;
    msg.v_n = 0.251291924059;
    msg.v_e = 0.725858233971;
    msg.v_d = 0.976452110266;
    msg.satellites = 251U;
    msg.iar_hyp = 12704U;
    msg.iar_ratio = 0.0997991000611;

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
    msg.setTimeStamp(0.53765258893);
    msg.setSource(26699U);
    msg.setSourceEntity(50U);
    msg.setDestination(40621U);
    msg.setDestinationEntity(214U);
    msg.validity = 60584U;
    msg.type = 59U;
    msg.tow = 774227133U;
    msg.base_lat = 0.469449319749;
    msg.base_lon = 0.751165785252;
    msg.base_height = 0.478319102058;
    msg.n = 0.736237165621;
    msg.e = 0.0545224971158;
    msg.d = 0.459160127688;
    msg.v_n = 0.94276741738;
    msg.v_e = 0.917974534515;
    msg.v_d = 0.20451135861;
    msg.satellites = 97U;
    msg.iar_hyp = 25131U;
    msg.iar_ratio = 0.408178303276;

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
    msg.setTimeStamp(0.758982162892);
    msg.setSource(45901U);
    msg.setSourceEntity(163U);
    msg.setDestination(19826U);
    msg.setDestinationEntity(136U);
    msg.validity = 29450U;
    msg.type = 100U;
    msg.tow = 974142395U;
    msg.base_lat = 0.390604389313;
    msg.base_lon = 0.411545170888;
    msg.base_height = 0.273473109663;
    msg.n = 0.513112022181;
    msg.e = 0.734327051091;
    msg.d = 0.809040437357;
    msg.v_n = 0.706761574929;
    msg.v_e = 0.770123303849;
    msg.v_d = 0.270631609503;
    msg.satellites = 108U;
    msg.iar_hyp = 45287U;
    msg.iar_ratio = 0.274425233027;

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
    msg.setTimeStamp(0.617360364801);
    msg.setSource(2379U);
    msg.setSourceEntity(29U);
    msg.setDestination(50365U);
    msg.setDestinationEntity(19U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.40330986045;
    tmp_msg_0.lon = 0.801434495354;
    tmp_msg_0.height = 0.0900512794336;
    tmp_msg_0.x = 0.820427723558;
    tmp_msg_0.y = 0.861266586629;
    tmp_msg_0.z = 0.195163026241;
    tmp_msg_0.phi = 0.159458064871;
    tmp_msg_0.theta = 0.230325871598;
    tmp_msg_0.psi = 0.720405251807;
    tmp_msg_0.u = 0.302789073455;
    tmp_msg_0.v = 0.971114187013;
    tmp_msg_0.w = 0.13967265408;
    tmp_msg_0.vx = 0.996784416195;
    tmp_msg_0.vy = 0.0717068299124;
    tmp_msg_0.vz = 0.916173089812;
    tmp_msg_0.p = 0.523821864207;
    tmp_msg_0.q = 0.989678053014;
    tmp_msg_0.r = 0.463477273623;
    tmp_msg_0.depth = 0.490678818203;
    tmp_msg_0.alt = 0.648746993628;
    msg.state.set(tmp_msg_0);
    msg.type = 169U;

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
    msg.setTimeStamp(0.554848884841);
    msg.setSource(28718U);
    msg.setSourceEntity(112U);
    msg.setDestination(17595U);
    msg.setDestinationEntity(125U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.408264105718;
    tmp_msg_0.lon = 0.8093762926;
    tmp_msg_0.height = 0.862933713673;
    tmp_msg_0.x = 0.651875011452;
    tmp_msg_0.y = 0.712556539204;
    tmp_msg_0.z = 0.818713944429;
    tmp_msg_0.phi = 0.791265971202;
    tmp_msg_0.theta = 0.663726043435;
    tmp_msg_0.psi = 0.0272968565335;
    tmp_msg_0.u = 0.0529057126961;
    tmp_msg_0.v = 0.127197794846;
    tmp_msg_0.w = 0.0889933856573;
    tmp_msg_0.vx = 0.375444982702;
    tmp_msg_0.vy = 0.526832522782;
    tmp_msg_0.vz = 0.824276753401;
    tmp_msg_0.p = 0.218104843618;
    tmp_msg_0.q = 0.860485925735;
    tmp_msg_0.r = 0.287529391488;
    tmp_msg_0.depth = 0.149635941451;
    tmp_msg_0.alt = 0.200977008551;
    msg.state.set(tmp_msg_0);
    msg.type = 183U;

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
    msg.setTimeStamp(0.481738487543);
    msg.setSource(65216U);
    msg.setSourceEntity(218U);
    msg.setDestination(63294U);
    msg.setDestinationEntity(57U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.776552904885;
    tmp_msg_0.lon = 0.10320881421;
    tmp_msg_0.height = 0.498014758738;
    tmp_msg_0.x = 0.840180137371;
    tmp_msg_0.y = 0.962358998492;
    tmp_msg_0.z = 0.054670774256;
    tmp_msg_0.phi = 0.21726782456;
    tmp_msg_0.theta = 0.53863782326;
    tmp_msg_0.psi = 0.0791541958598;
    tmp_msg_0.u = 0.441190739012;
    tmp_msg_0.v = 0.572082363673;
    tmp_msg_0.w = 0.78910237886;
    tmp_msg_0.vx = 0.0744908667786;
    tmp_msg_0.vy = 0.919426636704;
    tmp_msg_0.vz = 0.0110480713486;
    tmp_msg_0.p = 0.918535851071;
    tmp_msg_0.q = 0.00790407474081;
    tmp_msg_0.r = 0.368690239967;
    tmp_msg_0.depth = 0.0871459816792;
    tmp_msg_0.alt = 0.142753449246;
    msg.state.set(tmp_msg_0);
    msg.type = 63U;

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
    msg.setTimeStamp(0.552843571158);
    msg.setSource(12485U);
    msg.setSourceEntity(194U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(93U);
    msg.value = 0.585960805064;

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
    msg.setTimeStamp(0.961482750601);
    msg.setSource(35934U);
    msg.setSourceEntity(152U);
    msg.setDestination(60860U);
    msg.setDestinationEntity(177U);
    msg.value = 0.706705094783;

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
    msg.setTimeStamp(0.844976857837);
    msg.setSource(24201U);
    msg.setSourceEntity(164U);
    msg.setDestination(41623U);
    msg.setDestinationEntity(192U);
    msg.value = 0.972869220001;

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
    msg.setTimeStamp(0.771356064437);
    msg.setSource(24451U);
    msg.setSourceEntity(61U);
    msg.setDestination(13517U);
    msg.setDestinationEntity(223U);
    msg.value = 0.122943006762;

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
    msg.setTimeStamp(0.0414094244355);
    msg.setSource(64235U);
    msg.setSourceEntity(252U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(107U);
    msg.value = 0.0330239292278;

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
    msg.setTimeStamp(0.360193627191);
    msg.setSource(28278U);
    msg.setSourceEntity(53U);
    msg.setDestination(26232U);
    msg.setDestinationEntity(239U);
    msg.value = 0.973311181631;

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
    msg.setTimeStamp(0.765341353225);
    msg.setSource(40891U);
    msg.setSourceEntity(4U);
    msg.setDestination(6812U);
    msg.setDestinationEntity(244U);
    msg.value = 0.814392983776;

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
    msg.setTimeStamp(0.693061230417);
    msg.setSource(46583U);
    msg.setSourceEntity(120U);
    msg.setDestination(41645U);
    msg.setDestinationEntity(154U);
    msg.value = 0.777151591069;

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
    msg.setTimeStamp(0.234763194089);
    msg.setSource(40806U);
    msg.setSourceEntity(193U);
    msg.setDestination(21231U);
    msg.setDestinationEntity(128U);
    msg.value = 0.945856904138;

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
    msg.setTimeStamp(0.44123617379);
    msg.setSource(55878U);
    msg.setSourceEntity(245U);
    msg.setDestination(19780U);
    msg.setDestinationEntity(4U);
    msg.value = 0.21393076733;

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
    msg.setTimeStamp(0.818477252729);
    msg.setSource(25600U);
    msg.setSourceEntity(107U);
    msg.setDestination(53426U);
    msg.setDestinationEntity(67U);
    msg.value = 0.116258018264;

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
    msg.setTimeStamp(0.611270046241);
    msg.setSource(24995U);
    msg.setSourceEntity(239U);
    msg.setDestination(37092U);
    msg.setDestinationEntity(249U);
    msg.value = 0.933515703502;

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
    msg.setTimeStamp(0.392636782882);
    msg.setSource(51518U);
    msg.setSourceEntity(61U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(149U);
    msg.value = 0.606294894522;

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
    msg.setTimeStamp(0.305669237625);
    msg.setSource(36768U);
    msg.setSourceEntity(109U);
    msg.setDestination(6875U);
    msg.setDestinationEntity(182U);
    msg.value = 0.481578877297;

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
    msg.setTimeStamp(0.0937823697423);
    msg.setSource(53103U);
    msg.setSourceEntity(231U);
    msg.setDestination(60661U);
    msg.setDestinationEntity(182U);
    msg.value = 0.639865215381;

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
    msg.setTimeStamp(0.960671607998);
    msg.setSource(50954U);
    msg.setSourceEntity(159U);
    msg.setDestination(29252U);
    msg.setDestinationEntity(76U);
    msg.id = 73U;
    msg.zoom = 179U;
    msg.action = 208U;

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
    msg.setTimeStamp(0.870090243378);
    msg.setSource(10064U);
    msg.setSourceEntity(58U);
    msg.setDestination(63397U);
    msg.setDestinationEntity(231U);
    msg.id = 5U;
    msg.zoom = 54U;
    msg.action = 190U;

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
    msg.setTimeStamp(0.970587149024);
    msg.setSource(27552U);
    msg.setSourceEntity(75U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(18U);
    msg.id = 245U;
    msg.zoom = 55U;
    msg.action = 156U;

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
    msg.setTimeStamp(0.312977187092);
    msg.setSource(60519U);
    msg.setSourceEntity(65U);
    msg.setDestination(20508U);
    msg.setDestinationEntity(21U);
    msg.id = 181U;
    msg.value = 0.071916732123;

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
    msg.setTimeStamp(0.546177876638);
    msg.setSource(23774U);
    msg.setSourceEntity(95U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(143U);
    msg.id = 185U;
    msg.value = 0.545483933265;

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
    msg.setTimeStamp(0.889446930668);
    msg.setSource(17528U);
    msg.setSourceEntity(47U);
    msg.setDestination(25330U);
    msg.setDestinationEntity(141U);
    msg.id = 69U;
    msg.value = 0.416139465541;

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
    msg.setTimeStamp(0.566218729269);
    msg.setSource(56949U);
    msg.setSourceEntity(165U);
    msg.setDestination(20406U);
    msg.setDestinationEntity(186U);
    msg.id = 156U;
    msg.value = 0.176169296075;

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
    msg.setTimeStamp(0.0538768460478);
    msg.setSource(56796U);
    msg.setSourceEntity(160U);
    msg.setDestination(62198U);
    msg.setDestinationEntity(168U);
    msg.id = 242U;
    msg.value = 0.919668030871;

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
    msg.setTimeStamp(0.00417512903148);
    msg.setSource(36984U);
    msg.setSourceEntity(149U);
    msg.setDestination(54266U);
    msg.setDestinationEntity(170U);
    msg.id = 39U;
    msg.value = 0.887723957463;

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
    msg.setTimeStamp(0.494840501145);
    msg.setSource(41334U);
    msg.setSourceEntity(113U);
    msg.setDestination(29582U);
    msg.setDestinationEntity(25U);
    msg.id = 170U;
    msg.angle = 0.117608363246;

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
    msg.setTimeStamp(0.250272662426);
    msg.setSource(47903U);
    msg.setSourceEntity(208U);
    msg.setDestination(1498U);
    msg.setDestinationEntity(61U);
    msg.id = 205U;
    msg.angle = 0.427248107978;

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
    msg.setTimeStamp(0.325857691183);
    msg.setSource(34392U);
    msg.setSourceEntity(128U);
    msg.setDestination(33818U);
    msg.setDestinationEntity(65U);
    msg.id = 141U;
    msg.angle = 0.87353944408;

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
    msg.setTimeStamp(0.813038882043);
    msg.setSource(44989U);
    msg.setSourceEntity(54U);
    msg.setDestination(31573U);
    msg.setDestinationEntity(208U);
    msg.op = 227U;
    msg.actions.assign("FSAYJCLWOVAYWYOBLFAJQQODEXOBZRTVLPSKUHEEFKZYVUJXWSVKJSBTNQUQZXEXGXDWNPRJEOAESUEGXCHMQHALITNWFKQGGZGDZTQDONHIWXZHJGSMSNBHJTFLXYFCTWRHCIUMRCROQOXNVYKDK");

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
    msg.setTimeStamp(0.713495122004);
    msg.setSource(42368U);
    msg.setSourceEntity(50U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(206U);
    msg.op = 96U;
    msg.actions.assign("KJBZEBSAOQNCQOSIKTQICUEVAZSUBQMYHRDEVXERLEJBVGDSRMPLODXULYNNLOJCLRXMLAHJFKROEYKFGSCDXLJFLGJHRPMCQRGDBNAKVSZDGAXIWWA");

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
    msg.setTimeStamp(0.066091105886);
    msg.setSource(28973U);
    msg.setSourceEntity(197U);
    msg.setDestination(121U);
    msg.setDestinationEntity(168U);
    msg.op = 164U;
    msg.actions.assign("UBFZTLSTGKGDKARCONBCZCXFJQSHPJEEKHYHA");

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
    msg.setTimeStamp(0.947394053998);
    msg.setSource(21824U);
    msg.setSourceEntity(50U);
    msg.setDestination(47691U);
    msg.setDestinationEntity(12U);
    msg.actions.assign("SQKROSMIXDRNGGSUKJMEMJWDTWZYFECQNAGYXMSTPQQQFUXNHHRVIYCYRGLBLTIOAPYALIZIBEKJGPWQSQHGKGOTDOLHETXXMIXFBHKQCLNCZIAETIYERUNVFVFATWQPORDKOPVDOQRISZUTFRHVZUODMMJMSAEIVCCMJYFZKJBBLVHBJHARGDZANUUNLLPVDSKVEPWPTARKXEHSVYZEFXYLTHLJUBKCNDWGSUFY");

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
    msg.setTimeStamp(0.772678762239);
    msg.setSource(26907U);
    msg.setSourceEntity(44U);
    msg.setDestination(32650U);
    msg.setDestinationEntity(74U);
    msg.actions.assign("YSSOTURZBOMCE");

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
    msg.setTimeStamp(0.816878748222);
    msg.setSource(2901U);
    msg.setSourceEntity(121U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(218U);
    msg.actions.assign("NFESVFWKATRHNOTVEKQJPLNSYUCOAGGTISIUDOOAYKDTRKETUDVNSSCWKAMPRYPOCVSEJZOCYKCBVPTHXWQYNLRDINIGIQSRZHJGZMUCMLMQUISGYMCWDVHXHGBBXTZZDTGPFJJMHWFRBMZCBPPHUWRBIXIXVOVBSQEWEYCXG");

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
    msg.setTimeStamp(0.275510266897);
    msg.setSource(11454U);
    msg.setSourceEntity(27U);
    msg.setDestination(51901U);
    msg.setDestinationEntity(221U);
    msg.button = 122U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.747838746013);
    msg.setSource(600U);
    msg.setSourceEntity(133U);
    msg.setDestination(38348U);
    msg.setDestinationEntity(214U);
    msg.button = 254U;
    msg.value = 151U;

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
    msg.setTimeStamp(0.774796881762);
    msg.setSource(59354U);
    msg.setSourceEntity(101U);
    msg.setDestination(45290U);
    msg.setDestinationEntity(213U);
    msg.button = 202U;
    msg.value = 179U;

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
    msg.setTimeStamp(0.222610609874);
    msg.setSource(24219U);
    msg.setSourceEntity(1U);
    msg.setDestination(6338U);
    msg.setDestinationEntity(248U);
    msg.op = 89U;
    msg.text.assign("AXUVPWBECDUPZJMCFVVFJSWYOPXQYNRDCNDOMTCHGDFOVGUFNOVCOEHEAMLFJBQAZRLPTWKYGVRZTMNXSGBRTEJOUDUQYDNNJORIQWRXYPBDHAIDROUXGASECFSQENISYOYSKCPBLLKZWBGDELKXBWCGGKMZWZTBAIGRCLUXPILQUNKILOPYLMHXDJTPKBZSHMVTZVWZQFQAKLCZWSHAFVGTMYWISIENXQHHKYRXMHANPFUIVMJ");

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
    msg.setTimeStamp(0.831865496205);
    msg.setSource(15283U);
    msg.setSourceEntity(58U);
    msg.setDestination(23336U);
    msg.setDestinationEntity(170U);
    msg.op = 150U;
    msg.text.assign("HADRKFHMJXLIUYTNGWGEYTKYNRFHYXNCCFLRQZVTKQVFSGZWNALCYUXGEWJZDPHPJQOJUQZOTQPEFCODR");

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
    msg.setTimeStamp(0.844921530145);
    msg.setSource(34366U);
    msg.setSourceEntity(135U);
    msg.setDestination(27918U);
    msg.setDestinationEntity(51U);
    msg.op = 160U;
    msg.text.assign("SMPECPKCEQDGXFIJILAVRBTGMEYOCALOEGVOWPTZMXDKVGQHFLNSFYZUHHGSUNJFRIITZWBFIRYBZQNEHFRPKESHMKMSBYMQTQCOZZJSLXINXOSJZDALUJKIRACFVZDUTLEQTGYSJVRYLNKKDPMGIMPVWKBIVWXGSUMLUYUHXNXHDEOCTJGOALPVHXWKTNFMPBJRFWNUJWGFRCODTIANPRACQHQD");

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
    msg.setTimeStamp(0.0747817952962);
    msg.setSource(935U);
    msg.setSourceEntity(170U);
    msg.setDestination(32434U);
    msg.setDestinationEntity(58U);
    msg.op = 146U;
    msg.time_remain = 0.379178201439;
    msg.sched_time = 0.724300273805;

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
    msg.setTimeStamp(0.242805331119);
    msg.setSource(18496U);
    msg.setSourceEntity(67U);
    msg.setDestination(58965U);
    msg.setDestinationEntity(101U);
    msg.op = 3U;
    msg.time_remain = 0.458021558114;
    msg.sched_time = 0.577080045142;

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
    msg.setTimeStamp(0.602440049615);
    msg.setSource(5712U);
    msg.setSourceEntity(41U);
    msg.setDestination(32370U);
    msg.setDestinationEntity(33U);
    msg.op = 16U;
    msg.time_remain = 0.349989622683;
    msg.sched_time = 0.206772378833;

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
    msg.setTimeStamp(0.614267658521);
    msg.setSource(51225U);
    msg.setSourceEntity(154U);
    msg.setDestination(30153U);
    msg.setDestinationEntity(26U);
    msg.name.assign("IJPMTSXUEWLTYYGGWNIXILY");
    msg.op = 63U;
    msg.sched_time = 0.848445174799;

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
    msg.setTimeStamp(0.757525043105);
    msg.setSource(18959U);
    msg.setSourceEntity(214U);
    msg.setDestination(34307U);
    msg.setDestinationEntity(196U);
    msg.name.assign("NVKGOPSPTTPPHAGPEIRPBEPOXXLTJOMDGJLMWXXNQDZFPUADGJAXNBKLUHCYQASGRBWIWTEDIYLZTCMYQSBXOCVVSWYHYYWZMHMELBAKFMXJFNSZRORABZEZSWIJLTSAN");
    msg.op = 55U;
    msg.sched_time = 0.0551659403103;

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
    msg.setTimeStamp(0.247056235532);
    msg.setSource(1544U);
    msg.setSourceEntity(250U);
    msg.setDestination(2070U);
    msg.setDestinationEntity(37U);
    msg.name.assign("GYDTBHEFRUWFDPUHOKGBBKBBOOJTMSTSCEBMEVEZCGQHLVGNJTLANYDUZJZQLNEAULRWBGVNOHCPS");
    msg.op = 143U;
    msg.sched_time = 0.158140166074;

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
    msg.setTimeStamp(0.937157499781);
    msg.setSource(12998U);
    msg.setSourceEntity(113U);
    msg.setDestination(26485U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.524548792912);
    msg.setSource(9263U);
    msg.setSourceEntity(88U);
    msg.setDestination(65312U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.758088322177);
    msg.setSource(48563U);
    msg.setSourceEntity(64U);
    msg.setDestination(56135U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.693166514409);
    msg.setSource(4750U);
    msg.setSourceEntity(120U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(158U);
    msg.name.assign("NYXEKSDTHDUSIHZSWPJKNKJACPVDUDFJTZSTZUUVHCQWUEARQFIOTKBVPAHWGGNNPLWOFHEHUSEZXIEEOKLIYTPRVYMHCDQYMPRRZLVVDZPCREGJCBMOJAFC");
    msg.state = 221U;

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
    msg.setTimeStamp(0.624554060214);
    msg.setSource(1161U);
    msg.setSourceEntity(87U);
    msg.setDestination(33142U);
    msg.setDestinationEntity(239U);
    msg.name.assign("VIDIAPHCWPDJYEJDECMBNUEJRQNUJWOKTSXPGUERBSBXJTWRUSLPWTMNYGBQUYITBMZOCVQXNCAKMZPETKQKFSMVSWBIJZTFXQGDDNLPOAJMIRLAZKUXCDIIGFOHXRKWAXOHOTYSIENNSLHHXTMRCWOTQYPVYTPLKFBKFZIHRHJLEWFFVZROKDCGNCFGHQQGYBXUZUGFJOADRPVMWYMKNUGHBALGNAJIWZELQUYHQDECSYZVC");
    msg.state = 119U;

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
    msg.setTimeStamp(0.433701685959);
    msg.setSource(31480U);
    msg.setSourceEntity(14U);
    msg.setDestination(4070U);
    msg.setDestinationEntity(51U);
    msg.name.assign("ASYEPIVILBWNJOGVRDYKMYSWATKQRSJJWOPQEGAZIULLKVKLRXDLICNGGBLIWDYFUSBJNYZPUCKFZBVMUYCRGTVXJCDQXDRIVUTRNKBKHEMHKOAWXCJCBWKVXZMQZMCTUQOSOYUPANBXTOXPADVSAJNHBRILEQJSDRIQGTQZURZHOSMFTXGVMCUADOMZWEVONDTXWLJDGFQHFSUNEHTQPZMNFLHCYFBOGFYBPEPLHCKFEG");
    msg.state = 106U;

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
    msg.setTimeStamp(0.810000641471);
    msg.setSource(1244U);
    msg.setSourceEntity(202U);
    msg.setDestination(53535U);
    msg.setDestinationEntity(212U);
    msg.name.assign("JKUNMNDLLQWTWVRQZRMOHWZHABIKMOFBWJFXKEEYBHHSIGPPCLCQYIBUPREAVMFNLMBYZFXGCMZTFXZIWSDUTVVMFLRKZZAXANPFBWXBJKYPOUFOYTKUGEQTDOAFCGPLSDNPEAET");
    msg.value = 206U;

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
    msg.setTimeStamp(0.324619292259);
    msg.setSource(27609U);
    msg.setSourceEntity(205U);
    msg.setDestination(59429U);
    msg.setDestinationEntity(85U);
    msg.name.assign("ACCGZCATTIBWABVEIOHRHFGSTAUUGEGDRWYJUUSMHFVUWOFRSVGRCMEBDEHMKFWQABGWNKKQFQRNJPOKUSOBLJXDPXLYMNATMFVIXYEHXKLGEDQMLJYBCAINZRZNOPHZPXYWICTEYRNPGZJVWOOKZBJQJMFFWCSVSULUQDDXENPHPVFEXLNLQWZXVOSMHPTYEGQJDIHAKVRIYWKDRFNLGSZKNSDCLKTBTJPZMIXPZDBOSYMOQCXTYAC");
    msg.value = 119U;

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
    msg.setTimeStamp(0.25186516959);
    msg.setSource(48274U);
    msg.setSourceEntity(220U);
    msg.setDestination(64518U);
    msg.setDestinationEntity(104U);
    msg.name.assign("JVANSFAOMBDRWTHAYFMUQEXMJSPRXEZAARGIJVDRKXISKMBTDTBOKQPGXETVYQSNUSJSTQFMSLYXWUOGNWIEZQBLKZUBMRUWK");
    msg.value = 250U;

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
    msg.setTimeStamp(0.165351285962);
    msg.setSource(10221U);
    msg.setSourceEntity(204U);
    msg.setDestination(53982U);
    msg.setDestinationEntity(101U);
    msg.name.assign("XHKHPJPHDWJQFNYKPFDEFYXIAFZIVCUNVBOJNNWPMCLZWCYJGLFXCMEPVMFOYIJKKWMGHWXQNZZZQSSLQJQCGDLXHTBVCOVQOGBATWAKYIKESKZNXFTMLTSAJNDYR");

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
    msg.setTimeStamp(0.195177747668);
    msg.setSource(9686U);
    msg.setSourceEntity(248U);
    msg.setDestination(23857U);
    msg.setDestinationEntity(138U);
    msg.name.assign("BLGLNCIYPLAVWTXURFFFHEZGBGTXETIOFARASIDYAXRHYKILWOUOHDMULBQCBXRHROFCUDKGNSMCJYAQTESUZZTYDAUPHIWIINZWLHAYBTVOUFAGVZQWNMSTYSOVGKGYHYVXJEMMLRSDNFBXJBDXQJGPXQWFKSBCBMEKWKRTUQHVMEHET");

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
    msg.setTimeStamp(0.0993645976263);
    msg.setSource(32225U);
    msg.setSourceEntity(119U);
    msg.setDestination(17614U);
    msg.setDestinationEntity(19U);
    msg.name.assign("ZNJZGNTLEHKDOITASJUXNPTWLFQSCAGJJNRQCHSUYCTDIZBISOUR");

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
    msg.setTimeStamp(0.649996742747);
    msg.setSource(64484U);
    msg.setSourceEntity(137U);
    msg.setDestination(43506U);
    msg.setDestinationEntity(17U);
    msg.name.assign("WUOKOXUHHEMXPRLOMHLRXCYSFKJDELQHIZRJPHZZUQMQRABJUBEYCKDCZSOIEFGVWSIKRWZBQTPRKBGLUPOVAXRNJGBDRAVSJAWAUANVYAXIISSEUDFHDJXIMYKFGTSTIFVQMTSZKEGGMWRKPQCEMWOOJQRDXPBDCETGYOAFLPZFNBBPZNYQDJNLHHFHZ");
    msg.value = 151U;

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
    msg.setTimeStamp(0.782498231038);
    msg.setSource(42340U);
    msg.setSourceEntity(68U);
    msg.setDestination(12801U);
    msg.setDestinationEntity(162U);
    msg.name.assign("SRRBKVLRPBXONEMZYPSWBKNYFEJINLUWOYGGWQLSWWHUONYENNMDXKACTCUHKXGQXADJRGJXNRJIQMUBDTVKRHBEQFCSZOALYOTLUZZEIBIIJLMYERNOICVQMALIZKFIZEZHHTZVEDSF");
    msg.value = 159U;

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
    msg.setTimeStamp(0.702414800517);
    msg.setSource(18752U);
    msg.setSourceEntity(35U);
    msg.setDestination(47551U);
    msg.setDestinationEntity(20U);
    msg.name.assign("XAMACGBKDUVCOEQDQDYYICBJOIFNUBANFERKGZEMPQOKHMKITPGIGWSPBTNXSUSWGDURDZOZRHUPJFQRWONPHJTASMYQCHXIZZXOPCTKHIRBLQQNVRXYTPOTYRTUVEAASVMHDRIMSJXEJKGXDVTFADFQLPULJUYFKAWWFKMFTJCIVDTALYLYCVUVZNSZQYWNZLHHVRJSCXWJA");
    msg.value = 25U;

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
    msg.setTimeStamp(0.345304706214);
    msg.setSource(48260U);
    msg.setSourceEntity(59U);
    msg.setDestination(11416U);
    msg.setDestinationEntity(37U);
    msg.id = 77U;
    msg.period = 1870123114U;
    msg.duty_cycle = 151577922U;

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
    msg.setTimeStamp(0.520411994764);
    msg.setSource(17803U);
    msg.setSourceEntity(215U);
    msg.setDestination(65134U);
    msg.setDestinationEntity(66U);
    msg.id = 136U;
    msg.period = 1766837188U;
    msg.duty_cycle = 587997557U;

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
    msg.setTimeStamp(0.0814055486918);
    msg.setSource(47750U);
    msg.setSourceEntity(156U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(232U);
    msg.id = 7U;
    msg.period = 1967065633U;
    msg.duty_cycle = 783627191U;

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
    msg.setTimeStamp(0.157322964711);
    msg.setSource(28336U);
    msg.setSourceEntity(203U);
    msg.setDestination(38484U);
    msg.setDestinationEntity(241U);
    msg.id = 126U;
    msg.period = 1246938622U;
    msg.duty_cycle = 2153281241U;

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
    msg.setTimeStamp(0.843289189737);
    msg.setSource(1391U);
    msg.setSourceEntity(67U);
    msg.setDestination(8361U);
    msg.setDestinationEntity(129U);
    msg.id = 215U;
    msg.period = 1253828728U;
    msg.duty_cycle = 2166496826U;

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
    msg.setTimeStamp(0.390133767706);
    msg.setSource(54172U);
    msg.setSourceEntity(102U);
    msg.setDestination(27116U);
    msg.setDestinationEntity(22U);
    msg.id = 122U;
    msg.period = 3818711704U;
    msg.duty_cycle = 2721146791U;

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
    msg.setTimeStamp(0.176501130851);
    msg.setSource(48321U);
    msg.setSourceEntity(3U);
    msg.setDestination(44038U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.139243292862;
    msg.lon = 0.953089570838;
    msg.height = 0.993713527271;
    msg.x = 0.786785445229;
    msg.y = 0.776015495858;
    msg.z = 0.736293376606;
    msg.phi = 0.435227423865;
    msg.theta = 0.634123905963;
    msg.psi = 0.942428535131;
    msg.u = 0.486455472472;
    msg.v = 0.137531359652;
    msg.w = 0.498279685292;
    msg.vx = 0.808491877131;
    msg.vy = 0.511496320741;
    msg.vz = 0.120310989113;
    msg.p = 0.628001916575;
    msg.q = 0.361516996253;
    msg.r = 0.655697152107;
    msg.depth = 0.807702079706;
    msg.alt = 0.775525359711;

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
    msg.setTimeStamp(0.746875127764);
    msg.setSource(54115U);
    msg.setSourceEntity(117U);
    msg.setDestination(60610U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.567536673775;
    msg.lon = 0.168656754931;
    msg.height = 0.0668688091505;
    msg.x = 0.781041160156;
    msg.y = 0.608467839538;
    msg.z = 0.0578886647745;
    msg.phi = 0.163310027728;
    msg.theta = 0.678397918412;
    msg.psi = 0.237972435218;
    msg.u = 0.128225451746;
    msg.v = 0.161244270829;
    msg.w = 0.428079947739;
    msg.vx = 0.884526460129;
    msg.vy = 0.214127830967;
    msg.vz = 0.703369435721;
    msg.p = 0.0289334172754;
    msg.q = 0.12424436125;
    msg.r = 0.601621812553;
    msg.depth = 0.570209190278;
    msg.alt = 0.0514526875685;

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
    msg.setTimeStamp(0.366509416794);
    msg.setSource(33799U);
    msg.setSourceEntity(169U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.917035381737;
    msg.lon = 0.916002255983;
    msg.height = 0.987545785535;
    msg.x = 0.554545462414;
    msg.y = 0.351452580445;
    msg.z = 0.570875752999;
    msg.phi = 0.219720832203;
    msg.theta = 0.977466634306;
    msg.psi = 0.92362959851;
    msg.u = 0.477524412915;
    msg.v = 0.141566713909;
    msg.w = 0.852171363463;
    msg.vx = 0.445977807264;
    msg.vy = 0.444111953366;
    msg.vz = 0.562490863518;
    msg.p = 0.33463273454;
    msg.q = 0.154937544309;
    msg.r = 0.436132182417;
    msg.depth = 0.0478637722355;
    msg.alt = 0.678805312118;

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
    msg.setTimeStamp(0.154800836584);
    msg.setSource(32763U);
    msg.setSourceEntity(158U);
    msg.setDestination(24979U);
    msg.setDestinationEntity(131U);
    msg.x = 0.844750766906;
    msg.y = 0.749745084896;
    msg.z = 0.822513502065;

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
    msg.setTimeStamp(0.73062473131);
    msg.setSource(57560U);
    msg.setSourceEntity(188U);
    msg.setDestination(37988U);
    msg.setDestinationEntity(173U);
    msg.x = 0.432179393786;
    msg.y = 0.241660030168;
    msg.z = 0.689063612505;

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
    msg.setTimeStamp(0.40789392111);
    msg.setSource(28241U);
    msg.setSourceEntity(61U);
    msg.setDestination(63440U);
    msg.setDestinationEntity(99U);
    msg.x = 0.998806662479;
    msg.y = 0.231091834334;
    msg.z = 0.435587999962;

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
    msg.setTimeStamp(0.244212002639);
    msg.setSource(54360U);
    msg.setSourceEntity(249U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(218U);
    msg.value = 0.538133713881;

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
    msg.setTimeStamp(0.144132659522);
    msg.setSource(34475U);
    msg.setSourceEntity(137U);
    msg.setDestination(56353U);
    msg.setDestinationEntity(158U);
    msg.value = 0.110319869007;

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
    msg.setTimeStamp(0.886477809873);
    msg.setSource(56472U);
    msg.setSourceEntity(22U);
    msg.setDestination(38749U);
    msg.setDestinationEntity(149U);
    msg.value = 0.703882661438;

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
    msg.setTimeStamp(0.83536909556);
    msg.setSource(62807U);
    msg.setSourceEntity(114U);
    msg.setDestination(44910U);
    msg.setDestinationEntity(176U);
    msg.value = 0.9588944739;

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
    msg.setTimeStamp(0.159091863666);
    msg.setSource(17211U);
    msg.setSourceEntity(31U);
    msg.setDestination(37930U);
    msg.setDestinationEntity(141U);
    msg.value = 0.844824234085;

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
    msg.setTimeStamp(0.787927527465);
    msg.setSource(63205U);
    msg.setSourceEntity(61U);
    msg.setDestination(24285U);
    msg.setDestinationEntity(163U);
    msg.value = 0.0207006008638;

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
    msg.setTimeStamp(0.177635120323);
    msg.setSource(18455U);
    msg.setSourceEntity(44U);
    msg.setDestination(10961U);
    msg.setDestinationEntity(105U);
    msg.x = 0.17823622353;
    msg.y = 0.0437990816934;
    msg.z = 0.399698175442;
    msg.phi = 0.379975442586;
    msg.theta = 0.724422848418;
    msg.psi = 0.288904354386;
    msg.p = 0.650209062665;
    msg.q = 0.508591756522;
    msg.r = 0.88545255426;
    msg.u = 0.767604778158;
    msg.v = 0.950693452635;
    msg.w = 0.727418145124;
    msg.bias_psi = 0.0985290017307;
    msg.bias_r = 0.0435659085943;

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
    msg.setTimeStamp(0.701310064225);
    msg.setSource(59308U);
    msg.setSourceEntity(24U);
    msg.setDestination(43508U);
    msg.setDestinationEntity(249U);
    msg.x = 0.494844191992;
    msg.y = 0.194212478935;
    msg.z = 0.666180420239;
    msg.phi = 0.197472127819;
    msg.theta = 0.767412513153;
    msg.psi = 0.842763272552;
    msg.p = 0.927700527427;
    msg.q = 0.183086918459;
    msg.r = 0.833635538023;
    msg.u = 0.593836830577;
    msg.v = 0.841934652147;
    msg.w = 0.835839799465;
    msg.bias_psi = 0.855492542757;
    msg.bias_r = 0.204521447891;

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
    msg.setTimeStamp(0.104309548277);
    msg.setSource(438U);
    msg.setSourceEntity(20U);
    msg.setDestination(25336U);
    msg.setDestinationEntity(98U);
    msg.x = 0.754732970994;
    msg.y = 0.0944375325796;
    msg.z = 0.726927054817;
    msg.phi = 0.0368244577865;
    msg.theta = 0.73198377474;
    msg.psi = 0.648604051216;
    msg.p = 0.976512563743;
    msg.q = 0.636708798057;
    msg.r = 0.210108707467;
    msg.u = 0.193702985416;
    msg.v = 0.321662514264;
    msg.w = 0.611730362435;
    msg.bias_psi = 0.046800563308;
    msg.bias_r = 0.0603851497253;

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
    msg.setTimeStamp(0.575396087907);
    msg.setSource(2987U);
    msg.setSourceEntity(31U);
    msg.setDestination(56720U);
    msg.setDestinationEntity(7U);
    msg.bias_psi = 0.442353206124;
    msg.bias_r = 0.14347139284;
    msg.cog = 0.749647517161;
    msg.cyaw = 0.789133599609;
    msg.gps_rej_level = 0.755555665721;
    msg.lbl_rej_level = 0.0648129630516;
    msg.custom_x = 0.257890386196;
    msg.custom_y = 0.255430721765;
    msg.custom_z = 0.839495565766;

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
    msg.setTimeStamp(0.62736535361);
    msg.setSource(25501U);
    msg.setSourceEntity(169U);
    msg.setDestination(3594U);
    msg.setDestinationEntity(107U);
    msg.bias_psi = 0.261881494479;
    msg.bias_r = 0.854849236346;
    msg.cog = 0.663523190169;
    msg.cyaw = 0.0448398629571;
    msg.gps_rej_level = 0.535648520402;
    msg.lbl_rej_level = 0.407097142718;
    msg.custom_x = 0.87637968591;
    msg.custom_y = 0.903397275367;
    msg.custom_z = 0.794325274061;

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
    msg.setTimeStamp(0.812608255965);
    msg.setSource(56291U);
    msg.setSourceEntity(56U);
    msg.setDestination(64119U);
    msg.setDestinationEntity(83U);
    msg.bias_psi = 0.960015551416;
    msg.bias_r = 0.240123022562;
    msg.cog = 0.0884265467488;
    msg.cyaw = 0.0355126838073;
    msg.gps_rej_level = 0.590391459708;
    msg.lbl_rej_level = 0.937596689676;
    msg.custom_x = 0.734638531339;
    msg.custom_y = 0.404394902765;
    msg.custom_z = 0.944066841683;

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
    msg.setTimeStamp(0.665995263094);
    msg.setSource(11456U);
    msg.setSourceEntity(32U);
    msg.setDestination(51511U);
    msg.setDestinationEntity(163U);
    msg.utc_time = 0.772678024806;
    msg.reason = 84U;

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
    msg.setTimeStamp(0.893831289379);
    msg.setSource(3583U);
    msg.setSourceEntity(1U);
    msg.setDestination(30405U);
    msg.setDestinationEntity(182U);
    msg.utc_time = 0.612100724694;
    msg.reason = 50U;

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
    msg.setTimeStamp(0.40519385456);
    msg.setSource(25237U);
    msg.setSourceEntity(165U);
    msg.setDestination(45779U);
    msg.setDestinationEntity(196U);
    msg.utc_time = 0.267653399024;
    msg.reason = 176U;

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
    msg.setTimeStamp(0.7250677931);
    msg.setSource(9978U);
    msg.setSourceEntity(205U);
    msg.setDestination(6939U);
    msg.setDestinationEntity(4U);
    msg.id = 22U;
    msg.range = 0.733967912554;
    msg.acceptance = 98U;

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
    msg.setTimeStamp(0.272815625252);
    msg.setSource(1772U);
    msg.setSourceEntity(117U);
    msg.setDestination(28049U);
    msg.setDestinationEntity(80U);
    msg.id = 237U;
    msg.range = 0.439955220662;
    msg.acceptance = 79U;

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
    msg.setTimeStamp(0.119681865854);
    msg.setSource(32219U);
    msg.setSourceEntity(44U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(124U);
    msg.id = 205U;
    msg.range = 0.141351235539;
    msg.acceptance = 116U;

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
    msg.setTimeStamp(0.288727421526);
    msg.setSource(48991U);
    msg.setSourceEntity(236U);
    msg.setDestination(31921U);
    msg.setDestinationEntity(138U);
    msg.type = 84U;
    msg.reason = 28U;
    msg.value = 0.0416752731971;
    msg.timestep = 0.22595942006;

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
    msg.setTimeStamp(0.283474339584);
    msg.setSource(65505U);
    msg.setSourceEntity(217U);
    msg.setDestination(52327U);
    msg.setDestinationEntity(69U);
    msg.type = 190U;
    msg.reason = 5U;
    msg.value = 0.967938344864;
    msg.timestep = 0.267489410312;

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
    msg.setTimeStamp(0.230313124417);
    msg.setSource(44792U);
    msg.setSourceEntity(170U);
    msg.setDestination(21800U);
    msg.setDestinationEntity(174U);
    msg.type = 2U;
    msg.reason = 64U;
    msg.value = 0.987840194604;
    msg.timestep = 0.571318219476;

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
    msg.setTimeStamp(0.353676139037);
    msg.setSource(2374U);
    msg.setSourceEntity(88U);
    msg.setDestination(9732U);
    msg.setDestinationEntity(196U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VKXKFXRKDZHHSVYGTJOFISTZWEXQFCGMOADPFZENEMCFSNOPMBBULBYYMTSPUGCDZWUWPIWGPVYEUXPYCBCIUXYESULLJJHIBNCLGBHFARJBMOAOVPXIKSLUAYWPKENHBDRFLZMGFFAHDZQVYAHJROUAOQJMQANINETCTSEQQMJIQYMLZNSRXBLQPNJDNACJRTZRLIDUNOEHXCYDRFVVWWZTVHVOGGWDWBQTC");
    tmp_msg_0.lat = 0.157553681765;
    tmp_msg_0.lon = 0.426106963025;
    tmp_msg_0.depth = 0.126479413678;
    tmp_msg_0.query_channel = 242U;
    tmp_msg_0.reply_channel = 13U;
    tmp_msg_0.transponder_delay = 108U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.623149590766;
    msg.y = 0.887216124632;
    msg.var_x = 0.0471861887694;
    msg.var_y = 0.842501311805;
    msg.distance = 0.961677975714;

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
    msg.setTimeStamp(0.542713305975);
    msg.setSource(21175U);
    msg.setSourceEntity(145U);
    msg.setDestination(45614U);
    msg.setDestinationEntity(29U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JESKMRPWEBWHPWVMQBVJAVBOBKKJKGUXQOKNQURHTNRWYFEBQZVWPUODVAZQHOZMBFAZFYXSJYRBXRWALTNTLOVJWNIIYJRRHOKTSNUMZUCTEXHGXSKIOUAXCWZJMLSAOPFE");
    tmp_msg_0.lat = 0.752686066811;
    tmp_msg_0.lon = 0.461665027927;
    tmp_msg_0.depth = 0.45400803342;
    tmp_msg_0.query_channel = 104U;
    tmp_msg_0.reply_channel = 207U;
    tmp_msg_0.transponder_delay = 138U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.697326386314;
    msg.y = 0.786380924715;
    msg.var_x = 0.786438754322;
    msg.var_y = 0.912322185464;
    msg.distance = 0.0312883279228;

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
    msg.setTimeStamp(0.549809369538);
    msg.setSource(48523U);
    msg.setSourceEntity(12U);
    msg.setDestination(10302U);
    msg.setDestinationEntity(201U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TPIEXGHFSJOFVABISJDFUEUCEDWPUASQHLSOEYGFGMKEYYZTYQHYLZCPMAZKDNCFUUTMNWVPNCBFNMSDQNWJORLQZZCFUZHLHBKVJKQSIXZQVRLW");
    tmp_msg_0.lat = 0.690437286402;
    tmp_msg_0.lon = 0.464965315615;
    tmp_msg_0.depth = 0.104825661172;
    tmp_msg_0.query_channel = 124U;
    tmp_msg_0.reply_channel = 46U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.522753728835;
    msg.y = 0.834445383492;
    msg.var_x = 0.347659713848;
    msg.var_y = 0.0718952277552;
    msg.distance = 0.00637633116563;

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
    msg.setTimeStamp(0.0429633501296);
    msg.setSource(46545U);
    msg.setSourceEntity(246U);
    msg.setDestination(40802U);
    msg.setDestinationEntity(63U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.162569468033);
    msg.setSource(1079U);
    msg.setSourceEntity(113U);
    msg.setDestination(1656U);
    msg.setDestinationEntity(201U);
    msg.state = 146U;

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
    msg.setTimeStamp(0.288975050444);
    msg.setSource(24097U);
    msg.setSourceEntity(76U);
    msg.setDestination(49830U);
    msg.setDestinationEntity(117U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.977095213446);
    msg.setSource(8101U);
    msg.setSourceEntity(177U);
    msg.setDestination(4891U);
    msg.setDestinationEntity(104U);
    msg.x = 0.256318227413;
    msg.y = 0.142117086364;
    msg.z = 0.581175011517;

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
    msg.setTimeStamp(0.295819764893);
    msg.setSource(32372U);
    msg.setSourceEntity(156U);
    msg.setDestination(2983U);
    msg.setDestinationEntity(91U);
    msg.x = 0.780318884042;
    msg.y = 0.947284396018;
    msg.z = 0.517563785642;

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
    msg.setTimeStamp(0.350063168472);
    msg.setSource(12123U);
    msg.setSourceEntity(155U);
    msg.setDestination(26556U);
    msg.setDestinationEntity(36U);
    msg.x = 0.940708367604;
    msg.y = 0.400922600032;
    msg.z = 0.0904742942365;

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
    msg.setTimeStamp(0.515389944958);
    msg.setSource(2343U);
    msg.setSourceEntity(67U);
    msg.setDestination(16615U);
    msg.setDestinationEntity(239U);
    msg.va = 0.145443769573;
    msg.aoa = 0.699878610699;
    msg.ssa = 0.0374477582988;

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
    msg.setTimeStamp(0.697208637546);
    msg.setSource(46607U);
    msg.setSourceEntity(148U);
    msg.setDestination(19733U);
    msg.setDestinationEntity(243U);
    msg.va = 0.397644479539;
    msg.aoa = 0.823657371717;
    msg.ssa = 0.583906175327;

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
    msg.setTimeStamp(0.952623940001);
    msg.setSource(38438U);
    msg.setSourceEntity(232U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(103U);
    msg.va = 0.429690504975;
    msg.aoa = 0.199775305738;
    msg.ssa = 0.630900393938;

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
    msg.setTimeStamp(0.0843559383018);
    msg.setSource(19142U);
    msg.setSourceEntity(123U);
    msg.setDestination(45717U);
    msg.setDestinationEntity(19U);
    msg.value = 0.610584548028;
    msg.off = 0.656409503962;

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
    msg.setTimeStamp(0.181497258454);
    msg.setSource(13444U);
    msg.setSourceEntity(159U);
    msg.setDestination(56065U);
    msg.setDestinationEntity(23U);
    msg.value = 0.337225041796;
    msg.off = 0.688857535919;

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
    msg.setTimeStamp(0.776917464577);
    msg.setSource(39991U);
    msg.setSourceEntity(248U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(187U);
    msg.value = 0.458074512904;
    msg.off = 0.672856487126;

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
    msg.setTimeStamp(0.195263110283);
    msg.setSource(25390U);
    msg.setSourceEntity(212U);
    msg.setDestination(53673U);
    msg.setDestinationEntity(119U);
    msg.value = 0.87993142118;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.629181901203);
    msg.setSource(54264U);
    msg.setSourceEntity(5U);
    msg.setDestination(5144U);
    msg.setDestinationEntity(233U);
    msg.value = 0.767818892923;
    msg.z_units = 100U;

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
    msg.setTimeStamp(0.544826202548);
    msg.setSource(34798U);
    msg.setSourceEntity(42U);
    msg.setDestination(51425U);
    msg.setDestinationEntity(224U);
    msg.value = 0.12526199262;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.686098086323);
    msg.setSource(58662U);
    msg.setSourceEntity(117U);
    msg.setDestination(40851U);
    msg.setDestinationEntity(225U);
    msg.value = 0.683585542853;
    msg.speed_units = 158U;

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
    msg.setTimeStamp(0.293992851523);
    msg.setSource(54476U);
    msg.setSourceEntity(151U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(16U);
    msg.value = 0.498125783021;
    msg.speed_units = 9U;

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
    msg.setTimeStamp(0.78067299555);
    msg.setSource(3251U);
    msg.setSourceEntity(93U);
    msg.setDestination(35492U);
    msg.setDestinationEntity(38U);
    msg.value = 0.225807419087;
    msg.speed_units = 209U;

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
    msg.setTimeStamp(0.511174560727);
    msg.setSource(59271U);
    msg.setSourceEntity(117U);
    msg.setDestination(53132U);
    msg.setDestinationEntity(9U);
    msg.value = 0.487879470296;

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
    msg.setTimeStamp(0.117506951556);
    msg.setSource(1989U);
    msg.setSourceEntity(184U);
    msg.setDestination(40423U);
    msg.setDestinationEntity(51U);
    msg.value = 0.0891300845117;

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
    msg.setTimeStamp(0.486389297245);
    msg.setSource(13419U);
    msg.setSourceEntity(75U);
    msg.setDestination(32290U);
    msg.setDestinationEntity(131U);
    msg.value = 0.545388888646;

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
    msg.setTimeStamp(0.0308316750683);
    msg.setSource(18546U);
    msg.setSourceEntity(32U);
    msg.setDestination(58387U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0379727117434;

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
    msg.setTimeStamp(0.0855797329975);
    msg.setSource(16755U);
    msg.setSourceEntity(212U);
    msg.setDestination(12501U);
    msg.setDestinationEntity(175U);
    msg.value = 0.088638239257;

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
    msg.setTimeStamp(0.535037346247);
    msg.setSource(7772U);
    msg.setSourceEntity(54U);
    msg.setDestination(27182U);
    msg.setDestinationEntity(78U);
    msg.value = 0.872154680712;

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
    msg.setTimeStamp(0.105012679978);
    msg.setSource(51762U);
    msg.setSourceEntity(228U);
    msg.setDestination(3898U);
    msg.setDestinationEntity(137U);
    msg.value = 0.73748831503;

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
    msg.setTimeStamp(0.318194132652);
    msg.setSource(18077U);
    msg.setSourceEntity(96U);
    msg.setDestination(39610U);
    msg.setDestinationEntity(232U);
    msg.value = 0.00909137452519;

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
    msg.setTimeStamp(0.164351400182);
    msg.setSource(64892U);
    msg.setSourceEntity(250U);
    msg.setDestination(43506U);
    msg.setDestinationEntity(125U);
    msg.value = 0.305212252187;

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
    msg.setTimeStamp(0.200518078206);
    msg.setSource(32643U);
    msg.setSourceEntity(2U);
    msg.setDestination(47255U);
    msg.setDestinationEntity(111U);
    msg.path_ref = 1963972322U;
    msg.start_lat = 0.76182816055;
    msg.start_lon = 0.214463533678;
    msg.start_z = 0.191010397149;
    msg.start_z_units = 36U;
    msg.end_lat = 0.82430394043;
    msg.end_lon = 0.0234332580784;
    msg.end_z = 0.00242767519967;
    msg.end_z_units = 203U;
    msg.speed = 0.0942385798462;
    msg.speed_units = 58U;
    msg.lradius = 0.325269860704;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.675114384896);
    msg.setSource(58425U);
    msg.setSourceEntity(71U);
    msg.setDestination(13438U);
    msg.setDestinationEntity(113U);
    msg.path_ref = 4026040240U;
    msg.start_lat = 0.999141685984;
    msg.start_lon = 0.266743910327;
    msg.start_z = 0.312507756797;
    msg.start_z_units = 3U;
    msg.end_lat = 0.335566499699;
    msg.end_lon = 0.4114885618;
    msg.end_z = 0.572914796521;
    msg.end_z_units = 55U;
    msg.speed = 0.336890721125;
    msg.speed_units = 221U;
    msg.lradius = 0.862706126811;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.441842715337);
    msg.setSource(41165U);
    msg.setSourceEntity(25U);
    msg.setDestination(39091U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 2333463295U;
    msg.start_lat = 0.42845390042;
    msg.start_lon = 0.0549541452101;
    msg.start_z = 0.712593621596;
    msg.start_z_units = 239U;
    msg.end_lat = 0.263019209011;
    msg.end_lon = 0.825369721307;
    msg.end_z = 0.49597015599;
    msg.end_z_units = 18U;
    msg.speed = 0.0477804661218;
    msg.speed_units = 102U;
    msg.lradius = 0.493105909175;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.268234202374);
    msg.setSource(61568U);
    msg.setSourceEntity(177U);
    msg.setDestination(61715U);
    msg.setDestinationEntity(211U);
    msg.x = 0.132484180031;
    msg.y = 0.743239248938;
    msg.z = 0.083524079372;
    msg.k = 0.746617629811;
    msg.m = 0.479985387843;
    msg.n = 0.383936098724;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.267444214661);
    msg.setSource(46933U);
    msg.setSourceEntity(52U);
    msg.setDestination(4302U);
    msg.setDestinationEntity(51U);
    msg.x = 0.432078489132;
    msg.y = 0.349719137204;
    msg.z = 0.58583685187;
    msg.k = 0.329596487615;
    msg.m = 0.567062153705;
    msg.n = 0.139523497854;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.847676580359);
    msg.setSource(13960U);
    msg.setSourceEntity(15U);
    msg.setDestination(26904U);
    msg.setDestinationEntity(16U);
    msg.x = 0.611619228148;
    msg.y = 0.134605299156;
    msg.z = 0.522331452145;
    msg.k = 0.46615810287;
    msg.m = 0.682872595553;
    msg.n = 0.956495931036;
    msg.flags = 240U;

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
    msg.setTimeStamp(0.819687464704);
    msg.setSource(20844U);
    msg.setSourceEntity(31U);
    msg.setDestination(53118U);
    msg.setDestinationEntity(89U);
    msg.value = 0.109610705353;

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
    msg.setTimeStamp(0.892931845092);
    msg.setSource(43464U);
    msg.setSourceEntity(140U);
    msg.setDestination(29873U);
    msg.setDestinationEntity(40U);
    msg.value = 0.528045992484;

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
    msg.setTimeStamp(0.748300378067);
    msg.setSource(49350U);
    msg.setSourceEntity(8U);
    msg.setDestination(58649U);
    msg.setDestinationEntity(138U);
    msg.value = 0.324703920429;

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
    msg.setTimeStamp(0.936715896063);
    msg.setSource(28793U);
    msg.setSourceEntity(164U);
    msg.setDestination(266U);
    msg.setDestinationEntity(212U);
    msg.u = 0.245357218684;
    msg.v = 0.823286843898;
    msg.w = 0.532106762688;
    msg.p = 0.576028187751;
    msg.q = 0.538323873663;
    msg.r = 0.227361927905;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.518337225958);
    msg.setSource(34275U);
    msg.setSourceEntity(89U);
    msg.setDestination(55202U);
    msg.setDestinationEntity(1U);
    msg.u = 0.870731828131;
    msg.v = 0.736412439747;
    msg.w = 0.938333783824;
    msg.p = 0.303835566145;
    msg.q = 0.483485832305;
    msg.r = 0.298412648389;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.709656636099);
    msg.setSource(1539U);
    msg.setSourceEntity(138U);
    msg.setDestination(64863U);
    msg.setDestinationEntity(20U);
    msg.u = 0.119026435703;
    msg.v = 0.633322124395;
    msg.w = 0.497971346308;
    msg.p = 0.19482190393;
    msg.q = 0.279639305412;
    msg.r = 0.880082666203;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.138497899884);
    msg.setSource(46434U);
    msg.setSourceEntity(122U);
    msg.setDestination(62145U);
    msg.setDestinationEntity(160U);
    msg.path_ref = 1532020639U;
    msg.start_lat = 0.628467660556;
    msg.start_lon = 0.328778896694;
    msg.start_z = 0.199832270239;
    msg.start_z_units = 102U;
    msg.end_lat = 0.404360341709;
    msg.end_lon = 0.311803968432;
    msg.end_z = 0.293800755599;
    msg.end_z_units = 12U;
    msg.lradius = 0.472603226725;
    msg.flags = 44U;
    msg.x = 0.262788602182;
    msg.y = 0.854057621699;
    msg.z = 0.177637216273;
    msg.vx = 0.336326702768;
    msg.vy = 0.410176420427;
    msg.vz = 0.879083492849;
    msg.course_error = 0.0175712441892;
    msg.eta = 49016U;

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
    msg.setTimeStamp(0.8575946875);
    msg.setSource(26008U);
    msg.setSourceEntity(246U);
    msg.setDestination(38711U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 1921635986U;
    msg.start_lat = 0.698444579308;
    msg.start_lon = 0.864206160241;
    msg.start_z = 0.485029437331;
    msg.start_z_units = 53U;
    msg.end_lat = 0.656457572803;
    msg.end_lon = 0.38440758808;
    msg.end_z = 0.778249299358;
    msg.end_z_units = 127U;
    msg.lradius = 0.189197192931;
    msg.flags = 52U;
    msg.x = 0.455758414709;
    msg.y = 0.50753983873;
    msg.z = 0.457152436932;
    msg.vx = 0.579886668756;
    msg.vy = 0.400088705113;
    msg.vz = 0.726570343086;
    msg.course_error = 0.573334239166;
    msg.eta = 47741U;

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
    msg.setTimeStamp(0.306347457602);
    msg.setSource(63300U);
    msg.setSourceEntity(130U);
    msg.setDestination(38880U);
    msg.setDestinationEntity(180U);
    msg.path_ref = 3377906579U;
    msg.start_lat = 0.456433958789;
    msg.start_lon = 0.619571569968;
    msg.start_z = 0.742472651833;
    msg.start_z_units = 66U;
    msg.end_lat = 0.487406334949;
    msg.end_lon = 0.431959838105;
    msg.end_z = 0.168847785433;
    msg.end_z_units = 154U;
    msg.lradius = 0.0483955886513;
    msg.flags = 231U;
    msg.x = 0.787918095158;
    msg.y = 0.493485094873;
    msg.z = 0.966929992098;
    msg.vx = 0.372598696223;
    msg.vy = 0.925765608965;
    msg.vz = 0.765782281031;
    msg.course_error = 0.102290944493;
    msg.eta = 32674U;

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
    msg.setTimeStamp(0.460649339972);
    msg.setSource(2875U);
    msg.setSourceEntity(195U);
    msg.setDestination(25567U);
    msg.setDestinationEntity(225U);
    msg.k = 0.0246408935097;
    msg.m = 0.824719842183;
    msg.n = 0.403513318057;

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
    msg.setTimeStamp(0.284188125721);
    msg.setSource(63545U);
    msg.setSourceEntity(223U);
    msg.setDestination(20939U);
    msg.setDestinationEntity(79U);
    msg.k = 0.0658220386657;
    msg.m = 0.468646894699;
    msg.n = 0.53631504148;

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
    msg.setTimeStamp(0.929962120149);
    msg.setSource(42053U);
    msg.setSourceEntity(70U);
    msg.setDestination(32851U);
    msg.setDestinationEntity(8U);
    msg.k = 0.879028948222;
    msg.m = 0.316439541221;
    msg.n = 0.0825051597305;

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
    msg.setTimeStamp(0.061136980741);
    msg.setSource(22764U);
    msg.setSourceEntity(62U);
    msg.setDestination(42140U);
    msg.setDestinationEntity(35U);
    msg.p = 0.971132305803;
    msg.i = 0.774585693339;
    msg.d = 0.00330002809357;
    msg.a = 0.613932967532;

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
    msg.setTimeStamp(0.86010376584);
    msg.setSource(2167U);
    msg.setSourceEntity(176U);
    msg.setDestination(16061U);
    msg.setDestinationEntity(27U);
    msg.p = 0.397296748238;
    msg.i = 0.299748455281;
    msg.d = 0.132266785096;
    msg.a = 0.739716807547;

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
    msg.setTimeStamp(0.504743430079);
    msg.setSource(3029U);
    msg.setSourceEntity(113U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(203U);
    msg.p = 0.235481347476;
    msg.i = 0.811751975898;
    msg.d = 0.232887457657;
    msg.a = 0.323332322558;

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
    msg.setTimeStamp(0.551187044992);
    msg.setSource(15317U);
    msg.setSourceEntity(190U);
    msg.setDestination(64023U);
    msg.setDestinationEntity(76U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.882213897964);
    msg.setSource(13630U);
    msg.setSourceEntity(71U);
    msg.setDestination(14546U);
    msg.setDestinationEntity(52U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.266063566326);
    msg.setSource(59745U);
    msg.setSourceEntity(253U);
    msg.setDestination(3326U);
    msg.setDestinationEntity(61U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.00866762501794);
    msg.setSource(57650U);
    msg.setSourceEntity(155U);
    msg.setDestination(15107U);
    msg.setDestinationEntity(74U);
    msg.x = 0.884583278758;
    msg.y = 0.419172809303;
    msg.z = 0.933797415152;
    msg.vx = 0.99938966693;
    msg.vy = 0.422036582474;
    msg.vz = 0.603008357941;
    msg.ax = 0.115354055203;
    msg.ay = 0.963154231899;
    msg.az = 0.751308336984;
    msg.flags = 62165U;

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
    msg.setTimeStamp(0.277563661372);
    msg.setSource(39300U);
    msg.setSourceEntity(139U);
    msg.setDestination(9948U);
    msg.setDestinationEntity(189U);
    msg.x = 0.946386609623;
    msg.y = 0.757962876791;
    msg.z = 0.483493615928;
    msg.vx = 0.44919068826;
    msg.vy = 0.572425365889;
    msg.vz = 0.000696245766108;
    msg.ax = 0.192543539854;
    msg.ay = 0.213806075664;
    msg.az = 0.860275714694;
    msg.flags = 52537U;

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
    msg.setTimeStamp(0.966691284553);
    msg.setSource(44586U);
    msg.setSourceEntity(196U);
    msg.setDestination(23310U);
    msg.setDestinationEntity(59U);
    msg.x = 0.383613124822;
    msg.y = 0.00862461588255;
    msg.z = 0.163841820719;
    msg.vx = 0.0771777869872;
    msg.vy = 0.652551892082;
    msg.vz = 0.719213895365;
    msg.ax = 0.689608193741;
    msg.ay = 0.0589383873423;
    msg.az = 0.234777803542;
    msg.flags = 36278U;

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
    msg.setTimeStamp(0.782976852935);
    msg.setSource(20102U);
    msg.setSourceEntity(50U);
    msg.setDestination(21246U);
    msg.setDestinationEntity(32U);
    msg.value = 0.16776546814;

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
    msg.setTimeStamp(0.0445934693104);
    msg.setSource(37918U);
    msg.setSourceEntity(161U);
    msg.setDestination(9481U);
    msg.setDestinationEntity(23U);
    msg.value = 0.366237807615;

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
    msg.setTimeStamp(0.128903142378);
    msg.setSource(16488U);
    msg.setSourceEntity(126U);
    msg.setDestination(22583U);
    msg.setDestinationEntity(200U);
    msg.value = 0.160190238628;

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
    msg.setTimeStamp(0.493678753392);
    msg.setSource(11935U);
    msg.setSourceEntity(72U);
    msg.setDestination(62843U);
    msg.setDestinationEntity(90U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3085091551U;
    tmp_msg_0.start_lat = 0.919268348571;
    tmp_msg_0.start_lon = 0.69588877635;
    tmp_msg_0.start_z = 0.911107979841;
    tmp_msg_0.start_z_units = 184U;
    tmp_msg_0.end_lat = 0.887766642864;
    tmp_msg_0.end_lon = 0.414308596677;
    tmp_msg_0.end_z = 0.899432048577;
    tmp_msg_0.end_z_units = 148U;
    tmp_msg_0.speed = 0.450620012295;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.lradius = 0.545253854334;
    tmp_msg_0.flags = 113U;
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
    msg.setTimeStamp(0.591059805835);
    msg.setSource(35672U);
    msg.setSourceEntity(51U);
    msg.setDestination(12367U);
    msg.setDestinationEntity(80U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3321403636U;
    tmp_msg_0.start_lat = 0.0225123167385;
    tmp_msg_0.start_lon = 0.410962621247;
    tmp_msg_0.start_z = 0.0177522341106;
    tmp_msg_0.start_z_units = 66U;
    tmp_msg_0.end_lat = 0.549812752115;
    tmp_msg_0.end_lon = 0.569601519357;
    tmp_msg_0.end_z = 0.828757499509;
    tmp_msg_0.end_z_units = 98U;
    tmp_msg_0.speed = 0.589008121192;
    tmp_msg_0.speed_units = 166U;
    tmp_msg_0.lradius = 0.333821320679;
    tmp_msg_0.flags = 237U;
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
    msg.setTimeStamp(0.386992726094);
    msg.setSource(17193U);
    msg.setSourceEntity(228U);
    msg.setDestination(22996U);
    msg.setDestinationEntity(34U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2495581971U;
    tmp_msg_0.start_lat = 0.544100773216;
    tmp_msg_0.start_lon = 0.378575968784;
    tmp_msg_0.start_z = 0.865013018022;
    tmp_msg_0.start_z_units = 152U;
    tmp_msg_0.end_lat = 0.329541448449;
    tmp_msg_0.end_lon = 0.708775365246;
    tmp_msg_0.end_z = 0.747224119306;
    tmp_msg_0.end_z_units = 94U;
    tmp_msg_0.speed = 0.197563206407;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.lradius = 0.108135749916;
    tmp_msg_0.flags = 240U;
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
    msg.setTimeStamp(0.38600657602);
    msg.setSource(36120U);
    msg.setSourceEntity(251U);
    msg.setDestination(8668U);
    msg.setDestinationEntity(181U);
    msg.timeout = 53895U;
    msg.lat = 0.844085492316;
    msg.lon = 0.599516622964;
    msg.z = 0.546320047653;
    msg.z_units = 150U;
    msg.speed = 0.792681393823;
    msg.speed_units = 200U;
    msg.roll = 0.750772269388;
    msg.pitch = 0.354470368995;
    msg.yaw = 0.32286351696;
    msg.custom.assign("HGUMFIHHTJEDWPZKLJHOVJCFURPBWYUSHATQRNCXZUSRFNSOWRYKLATGEDOGNBIUIIUGYJDRESSPTATLCKVZCCNPVAQPMXE");

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
    msg.setTimeStamp(0.774151405338);
    msg.setSource(61123U);
    msg.setSourceEntity(120U);
    msg.setDestination(25954U);
    msg.setDestinationEntity(174U);
    msg.timeout = 37231U;
    msg.lat = 0.260703054299;
    msg.lon = 0.203738490461;
    msg.z = 0.0743840778069;
    msg.z_units = 202U;
    msg.speed = 0.787984741623;
    msg.speed_units = 53U;
    msg.roll = 0.316602119728;
    msg.pitch = 0.740921683119;
    msg.yaw = 0.240857273378;
    msg.custom.assign("YBYNWDIPBZGCZZMPMTCLJUQQKXOSXBEBFFWODDJUSFYZKPPCLVCXCJDDUVWYMFXZRKDGFLWUBWOQTSQTANNMRYYHIBELVJHKVMPZIEBSATTMWJPXJLSLMOGIOQYDKBTXBANYSRSHWKXLTACLGZYKNIKEQAZODNSAUHEIT");

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
    msg.setTimeStamp(0.826952928654);
    msg.setSource(36264U);
    msg.setSourceEntity(111U);
    msg.setDestination(788U);
    msg.setDestinationEntity(220U);
    msg.timeout = 24605U;
    msg.lat = 0.976589564399;
    msg.lon = 0.528990451626;
    msg.z = 0.121468604666;
    msg.z_units = 180U;
    msg.speed = 0.89105744251;
    msg.speed_units = 222U;
    msg.roll = 0.20798061428;
    msg.pitch = 0.403421899693;
    msg.yaw = 0.308346026335;
    msg.custom.assign("UTSDJZMSVIRGGJBCAQXHLLGYDYZHOHVHGHZDPNJLMYLRTIYLFNUEHKDDVIUJ");

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
    msg.setTimeStamp(0.756674306456);
    msg.setSource(29206U);
    msg.setSourceEntity(54U);
    msg.setDestination(26805U);
    msg.setDestinationEntity(96U);
    msg.timeout = 60880U;
    msg.lat = 0.541162382622;
    msg.lon = 0.936182779218;
    msg.z = 0.368759594117;
    msg.z_units = 70U;
    msg.speed = 0.903825260521;
    msg.speed_units = 137U;
    msg.duration = 5398U;
    msg.radius = 0.333431918643;
    msg.flags = 61U;
    msg.custom.assign("EIYOPYMWVTQDTACSFMZKUDHPCISTBRCWWONZUAPPXDCQIGJLGHLMFBUBVCDANMTUVABQNQVPZMOCQFXOETNNLUMOXXVKWWRJKZGFIAZALZXRRLJIWYXSYSRMLILNQZSKIYDWEDVSADVRBTJPZGNQARUZLHWKUJOOTXDNJUGWHAVHPHETKBQOGWSRSFBKVVAZYRKDLFPFUEYXXQYYCHBHHMTGMLTDGFEFN");

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
    msg.setTimeStamp(0.999812117996);
    msg.setSource(49666U);
    msg.setSourceEntity(12U);
    msg.setDestination(57884U);
    msg.setDestinationEntity(158U);
    msg.timeout = 46340U;
    msg.lat = 0.443409771986;
    msg.lon = 0.70500093494;
    msg.z = 0.0580465876439;
    msg.z_units = 193U;
    msg.speed = 0.847405650305;
    msg.speed_units = 218U;
    msg.duration = 59559U;
    msg.radius = 0.940432786592;
    msg.flags = 9U;
    msg.custom.assign("FNBMJUNSKHLVTVKSYBTXIAOWBRFPKMQLADCKLIIXXSOUZCPBQJWEWQOGGGTPRNJWRZGOBYUIXVIAXWVNJRUCKSDQCRYYZWLEOYVSKTCQRPDRSDEBOXYXUEHYAZKJTGCIFSLLCPLLMHVDYNHBJSGFMUPGHNFVZZPHVQGCJQKU");

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
    msg.setTimeStamp(0.207704831669);
    msg.setSource(29630U);
    msg.setSourceEntity(44U);
    msg.setDestination(28206U);
    msg.setDestinationEntity(74U);
    msg.timeout = 21762U;
    msg.lat = 0.33154923421;
    msg.lon = 0.153882994091;
    msg.z = 0.61907470456;
    msg.z_units = 224U;
    msg.speed = 0.112173687254;
    msg.speed_units = 142U;
    msg.duration = 10630U;
    msg.radius = 0.324235014009;
    msg.flags = 25U;
    msg.custom.assign("SIWFURBUII");

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
    msg.setTimeStamp(0.970037136773);
    msg.setSource(4302U);
    msg.setSourceEntity(252U);
    msg.setDestination(8186U);
    msg.setDestinationEntity(248U);
    msg.custom.assign("ADOOFFYKFXUZRDPQODCVTQSWYZZGUFJDSTQZTEFWLIAYBVHOBRVLTTBBWQMJEUNZFASNTWUDPDBREEPSKAOMPTAUHNCHBKNXYMTKLDSIIGUSBBINNWEYMEXLSRXKDHOFZGLGPWAZYSEOVMMMWQNDUMRYKHIHOJDYAFVCJLQPCLPFRJWSMLKVXINKRJHUOGGEGLUAYJCTXGRKCWCPIVCV");

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
    msg.setTimeStamp(0.739519392119);
    msg.setSource(57726U);
    msg.setSourceEntity(16U);
    msg.setDestination(8997U);
    msg.setDestinationEntity(159U);
    msg.custom.assign("NHUFZSMDQVYYHXWFAJCUHDERIERNQKTGVISROBDXCEQWXFMUQBJGSONDPZFAIJHIUEXYSOWFJBGWCNRKZKTQLGZFXGHUPXTSYPBPSOMOCKBVPRGGRHYBLKUWKMSTRATELWWAIYLTKVVYUPIMKOISBVAAGQOPNUELYSXTMMDZDNCMJAJQEPJRQZITEXN");

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
    msg.setTimeStamp(0.518364280389);
    msg.setSource(41555U);
    msg.setSourceEntity(14U);
    msg.setDestination(50655U);
    msg.setDestinationEntity(168U);
    msg.custom.assign("TWWQFAJCMHIUGDDPVGLOWOISTAWNONPDMEMSDSYKBEIYFYSCTCYFOWUKAQNMKRHWWAVYVXZIVMSIMSLYRXLCLKLJWGODKSKQZZBJCFFUJWTCGXZGPEQFCXPGCBFIDJIURXEJEVFJSDFNJZNEHJKZDAOZBXVABAEEHNQIBEQBRNYXVAGKHTTKLOLBYHRBLYDXHLKIRZUVOTUZBQNYRSHPRUUHWRTDOQVMPPNQZATXPOJCIUAQMECH");

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
    msg.setTimeStamp(0.982458801498);
    msg.setSource(61880U);
    msg.setSourceEntity(235U);
    msg.setDestination(13080U);
    msg.setDestinationEntity(30U);
    msg.timeout = 17181U;
    msg.lat = 0.503157508721;
    msg.lon = 0.155898046232;
    msg.z = 0.78176313049;
    msg.z_units = 2U;
    msg.duration = 10364U;
    msg.speed = 0.111103389618;
    msg.speed_units = 69U;
    msg.type = 50U;
    msg.radius = 0.734380823467;
    msg.length = 0.47056190241;
    msg.bearing = 0.545549462173;
    msg.direction = 21U;
    msg.custom.assign("TOUAESGCESCWINRQRRJPZNVUDAZYMTVXLCLFENMDTYKAHPCWRXATWBHSYKFTHBUYQIGZCPJUGTBKBZXDUQEXMWMIVAFPWPRLZEICAVQNEMLCHIKXCMRSUIQGQUBWSJKADOXKUFITFSLB");

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
    msg.setTimeStamp(0.682544277655);
    msg.setSource(4050U);
    msg.setSourceEntity(41U);
    msg.setDestination(42174U);
    msg.setDestinationEntity(41U);
    msg.timeout = 4223U;
    msg.lat = 0.841837881552;
    msg.lon = 0.287464794379;
    msg.z = 0.256867648392;
    msg.z_units = 129U;
    msg.duration = 8900U;
    msg.speed = 0.659775089329;
    msg.speed_units = 171U;
    msg.type = 81U;
    msg.radius = 0.937812924628;
    msg.length = 0.750592170771;
    msg.bearing = 0.435983258015;
    msg.direction = 147U;
    msg.custom.assign("GKDKSGVIARUJOIHSAQFAQLFHTVDQPTJUGRVCJMSPDNMOEQLGJIKBPEDBZPXYSXHWCXKGVIKYMSJRYFUTKRJDYOVPLCUETEBHBTMGPEDKIRBXALWPUARKWUJFAYMOWCTHITQPVNZYELMN");

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
    msg.setTimeStamp(0.0585302804671);
    msg.setSource(56357U);
    msg.setSourceEntity(1U);
    msg.setDestination(53297U);
    msg.setDestinationEntity(157U);
    msg.timeout = 14185U;
    msg.lat = 0.894774866853;
    msg.lon = 0.27575676301;
    msg.z = 0.0776527572899;
    msg.z_units = 96U;
    msg.duration = 60463U;
    msg.speed = 0.307440215137;
    msg.speed_units = 13U;
    msg.type = 45U;
    msg.radius = 0.982715546014;
    msg.length = 0.601009383212;
    msg.bearing = 0.947417000488;
    msg.direction = 254U;
    msg.custom.assign("PCQPOLVZCASFHIHWRLPJIFJYQDWONNQLKACAHUWAJ");

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
    msg.setTimeStamp(0.159418427001);
    msg.setSource(14895U);
    msg.setSourceEntity(33U);
    msg.setDestination(14820U);
    msg.setDestinationEntity(230U);
    msg.duration = 50049U;
    msg.custom.assign("RHIPASJWKZLOLKRUXWXYRPTIDCRANYHAETRHDJDOBNFUWKTQUAGREOCGCZIEYLYGLYUHCZWSRGQLOBWUATZAMFHKMEVKFXURFHICAKWCTOSCLFMDBNJJJULFOKVEWKAAZECENIZBOQNVXPLKCSXBXFDQJIZZQXHIWPBSUGZVDVXBBWHHNWGQNPMIPMLUGLPTJMPTMOJOGEZGQVDTSPXVGFERJAHYYMXCUITNVDB");

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
    msg.setTimeStamp(0.75342339331);
    msg.setSource(43904U);
    msg.setSourceEntity(118U);
    msg.setDestination(8307U);
    msg.setDestinationEntity(169U);
    msg.duration = 39966U;
    msg.custom.assign("UKEHTAOAGDBPKVUGGRGRSLSQEWXCJIVZRHMAEJKLLQELNXWFSRSIQQKTEKEQCSRDRQOABDIJGDUBQZZOLDLQYOTKNFAZEWKFJJUVMMC");

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
    msg.setTimeStamp(0.036449934243);
    msg.setSource(61979U);
    msg.setSourceEntity(62U);
    msg.setDestination(22913U);
    msg.setDestinationEntity(116U);
    msg.duration = 255U;
    msg.custom.assign("FOSIZORADZUPPLGDNWVSUTPHMICVLJVZOFIUVMCBVULSYKKXINFRMBSDUBYCGIBMADWOMOPHZGFTQEZAABIFOUSHWWZBEYVIRJYHXSYQXVNEGEEQOTGHEYSBQGQYHZQFJRBNJAECHTEJXUDVCSKJZTKUXZLARMRHXLQIRK");

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
    msg.setTimeStamp(0.319213616846);
    msg.setSource(22454U);
    msg.setSourceEntity(3U);
    msg.setDestination(10302U);
    msg.setDestinationEntity(209U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.862536691332;
    msg.control.set(tmp_msg_0);
    msg.duration = 47447U;
    msg.custom.assign("LBJPUXIRIIKAAKBIYQKRLPGHHZSEZNM");

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
    msg.setTimeStamp(0.451137873417);
    msg.setSource(30487U);
    msg.setSourceEntity(208U);
    msg.setDestination(62106U);
    msg.setDestinationEntity(67U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.267160653738;
    tmp_msg_0.z_units = 250U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55224U;
    msg.custom.assign("JCKBYRITNTLIVOXCHGIIUESFPALKGJBPPAKXNXIJFDVTQZAAGKJEFPLJDNOTCJRRYYHFLYQWWBURVAEGOOPKMCRZSRXGTHDBUTFSXKEFPBIZLZGOAAOKJYFFNUJZXCCAWWHMYINQYXRKOSUZQHZOGLUVQLDYMVBPBMESHSXMESNPRLWNWVWCGVCZYGQYMXWTREJSZAOLOHLRDDZEFTDMBIJXDBQTAKMPUUH");

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
    msg.setTimeStamp(0.268854662324);
    msg.setSource(39421U);
    msg.setSourceEntity(206U);
    msg.setDestination(55184U);
    msg.setDestinationEntity(185U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 528562774U;
    tmp_msg_0.start_lat = 0.734556123679;
    tmp_msg_0.start_lon = 0.956508091091;
    tmp_msg_0.start_z = 0.330196811332;
    tmp_msg_0.start_z_units = 188U;
    tmp_msg_0.end_lat = 0.0164339279001;
    tmp_msg_0.end_lon = 0.231241475046;
    tmp_msg_0.end_z = 0.443057722025;
    tmp_msg_0.end_z_units = 139U;
    tmp_msg_0.speed = 0.205943161666;
    tmp_msg_0.speed_units = 110U;
    tmp_msg_0.lradius = 0.761237801104;
    tmp_msg_0.flags = 77U;
    msg.control.set(tmp_msg_0);
    msg.duration = 15327U;
    msg.custom.assign("XGQHHAQRYEPOZJPZILZNERXWFCFGQMSQVWBEXAGTODHWLQSCRKRXBCPBCXHUMNDYZZTRBNOBDRTOBGTTBNRIBHEITGQVKWBANWEWLULSPXCMFZWNVMTARBPDWMAMAJTHAKCSDSVHKJSLYXUOGYFGEYIV");

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
    msg.setTimeStamp(0.588786286603);
    msg.setSource(41207U);
    msg.setSourceEntity(113U);
    msg.setDestination(8298U);
    msg.setDestinationEntity(106U);
    msg.timeout = 43834U;
    msg.lat = 0.833508781759;
    msg.lon = 0.794470210372;
    msg.z = 0.141352920669;
    msg.z_units = 176U;
    msg.speed = 0.0186387880832;
    msg.speed_units = 87U;
    msg.bearing = 0.4069889703;
    msg.cross_angle = 0.747198169211;
    msg.width = 0.16170020082;
    msg.length = 0.448935121642;
    msg.hstep = 0.325700640243;
    msg.coff = 15U;
    msg.alternation = 78U;
    msg.flags = 57U;
    msg.custom.assign("IOMXXGGAYDNXCIEDVJPZZHQKYGYQAMZPUUBWQWROVIIFFVHHVCVDDSSBHFOCEJGWPJWOTUNKOYNCAKEJVESLVBTIMCLUSDGHMRLYXBKBREXFSECUSPNMKSLFRATVWGXYUPQYFXLSGIHIWIMLLJJRWCRUTMFIKHPDZTQKFQTCKJLYPRAGAMAQB");

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
    msg.setTimeStamp(0.309232652783);
    msg.setSource(33505U);
    msg.setSourceEntity(252U);
    msg.setDestination(17243U);
    msg.setDestinationEntity(231U);
    msg.timeout = 58711U;
    msg.lat = 0.156875174315;
    msg.lon = 0.679356432811;
    msg.z = 0.805000961892;
    msg.z_units = 199U;
    msg.speed = 0.467585358002;
    msg.speed_units = 88U;
    msg.bearing = 0.494260223793;
    msg.cross_angle = 0.620410841506;
    msg.width = 0.460939630473;
    msg.length = 0.882841546362;
    msg.hstep = 0.737083548474;
    msg.coff = 0U;
    msg.alternation = 106U;
    msg.flags = 242U;
    msg.custom.assign("QCELQPSJMTCSUIBGJHRGNUUVYJGOBQV");

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
    msg.setTimeStamp(0.721425550769);
    msg.setSource(22882U);
    msg.setSourceEntity(17U);
    msg.setDestination(10877U);
    msg.setDestinationEntity(212U);
    msg.timeout = 47973U;
    msg.lat = 0.692776475986;
    msg.lon = 0.161386712197;
    msg.z = 0.821175397401;
    msg.z_units = 3U;
    msg.speed = 0.951316430553;
    msg.speed_units = 102U;
    msg.bearing = 0.0909559052434;
    msg.cross_angle = 0.312621616319;
    msg.width = 0.80480026004;
    msg.length = 0.323242167085;
    msg.hstep = 0.255778687532;
    msg.coff = 125U;
    msg.alternation = 150U;
    msg.flags = 64U;
    msg.custom.assign("NNYBYESHLGYECTXJSWMKMQKVPHZESTQDGOVMAPVPQFLZFFKJCHGVXVVUCAPXQASBPTILNMWOKEOHOTJMHAOULIQRWMJIIAJLZCXPVWSOOCIQYHIASFMBYTENQCSZEONWRRLTBHGYFXUDNUVGKTFSBZOFEDJRWVFDGDJJDRADQUJZEUILMCTHIGLKDVFYDXHXBWDFRYAJIEQPNLMYZTSCHCZGWSQUEUURYUGKXRPAITL");

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
    msg.setTimeStamp(0.959377529085);
    msg.setSource(62493U);
    msg.setSourceEntity(126U);
    msg.setDestination(62673U);
    msg.setDestinationEntity(18U);
    msg.timeout = 7806U;
    msg.lat = 0.179930353261;
    msg.lon = 0.0920794275132;
    msg.z = 0.0648781827706;
    msg.z_units = 203U;
    msg.speed = 0.578579361279;
    msg.speed_units = 26U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.472955944753;
    tmp_msg_0.y = 0.473487095612;
    tmp_msg_0.z = 0.912720363147;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LHWXJKSCAQEGQOXIHMCUPBZ");

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
    msg.setTimeStamp(0.165814585409);
    msg.setSource(9711U);
    msg.setSourceEntity(150U);
    msg.setDestination(15348U);
    msg.setDestinationEntity(193U);
    msg.timeout = 12242U;
    msg.lat = 0.418230927829;
    msg.lon = 0.572613379556;
    msg.z = 0.409141990609;
    msg.z_units = 46U;
    msg.speed = 0.391167695375;
    msg.speed_units = 27U;
    msg.custom.assign("URBUTXOHWOAKYRUULTCPQGGOOXCDRZFBLGEGDZZGPSONFU");

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
    msg.setTimeStamp(0.704731757171);
    msg.setSource(2768U);
    msg.setSourceEntity(199U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(96U);
    msg.timeout = 36802U;
    msg.lat = 0.924904035357;
    msg.lon = 0.0517196435172;
    msg.z = 0.24875529409;
    msg.z_units = 94U;
    msg.speed = 0.885796997131;
    msg.speed_units = 120U;
    msg.custom.assign("FEMRXQZSFWIQAHLELSQVNDIMEERWHLOVRROWRHACSCPYIONMBIUMGIFZUZWYLWRUDTAOYCOIGYGJUGXPZMBGVXEGUYXBFWVSDTJSKHTPIOKYBTSXORPUDWJONLHQXTWSZCONVIKVEYREDQUTKEPFXRDNPRJYGFSUDKKMZMBFPGDSHFYTDJNLPAVZNEKKZTALCLLSJGCIVHXQZLDENPHQQCACTAAUAMWKBXQVXJJNCTBF");

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
    msg.setTimeStamp(0.201089001988);
    msg.setSource(60196U);
    msg.setSourceEntity(186U);
    msg.setDestination(38673U);
    msg.setDestinationEntity(211U);
    msg.x = 0.314858239769;
    msg.y = 0.306635616908;
    msg.z = 0.773791403222;

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
    msg.setTimeStamp(0.693429493012);
    msg.setSource(14402U);
    msg.setSourceEntity(72U);
    msg.setDestination(39428U);
    msg.setDestinationEntity(183U);
    msg.x = 0.974017060334;
    msg.y = 0.585827321315;
    msg.z = 0.200758348832;

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
    msg.setTimeStamp(0.250546562097);
    msg.setSource(39591U);
    msg.setSourceEntity(55U);
    msg.setDestination(18226U);
    msg.setDestinationEntity(0U);
    msg.x = 0.149273665236;
    msg.y = 0.294957683732;
    msg.z = 0.066343640951;

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
    msg.setTimeStamp(0.376690323973);
    msg.setSource(4855U);
    msg.setSourceEntity(215U);
    msg.setDestination(43478U);
    msg.setDestinationEntity(77U);
    msg.timeout = 1222U;
    msg.lat = 0.144509149832;
    msg.lon = 0.172003300255;
    msg.z = 0.206828374862;
    msg.z_units = 151U;
    msg.amplitude = 0.234403294624;
    msg.pitch = 0.848066262067;
    msg.speed = 0.524530569099;
    msg.speed_units = 205U;
    msg.custom.assign("LQJYBZUBDKKFLYTKQCJFPVFDZXOJZMDDYRHWOAJQCQCAZTRVUKHRDNTNZNMBLCIWMESVBDGAIKEYQQWMBRWXBHDLNG");

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
    msg.setTimeStamp(0.923663782502);
    msg.setSource(24021U);
    msg.setSourceEntity(160U);
    msg.setDestination(7099U);
    msg.setDestinationEntity(178U);
    msg.timeout = 14152U;
    msg.lat = 0.535816002909;
    msg.lon = 0.806782291616;
    msg.z = 0.404796289617;
    msg.z_units = 77U;
    msg.amplitude = 0.267613078333;
    msg.pitch = 0.747873150368;
    msg.speed = 0.0827492347301;
    msg.speed_units = 93U;
    msg.custom.assign("ZOPGKDNMZTUXNWTYNZSBJAKLWVGXCPVLFFUWSNYCZTIDEBLLMRUBQBQFQPZXKHLCQHUWSYDSZTIITPPFBFMDYFNHONFAKZYXADDMSYIUOSHGYYUOQHWTOSSFXGCUCAOAQJDLLKGGABECKQQMOMAYOIKTGBBKIJRNRJCTGEJQMXJORVANKEXZRIJXPFZVPEBFMLHRZACCUJMLDIPUHSPXVELHJYEVRHEVCDTVGERWJ");

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
    msg.setTimeStamp(0.576603129527);
    msg.setSource(5608U);
    msg.setSourceEntity(135U);
    msg.setDestination(54478U);
    msg.setDestinationEntity(102U);
    msg.timeout = 959U;
    msg.lat = 0.662883538877;
    msg.lon = 0.33004901554;
    msg.z = 0.852183584757;
    msg.z_units = 231U;
    msg.amplitude = 0.162632028819;
    msg.pitch = 0.336108264372;
    msg.speed = 0.911073221847;
    msg.speed_units = 194U;
    msg.custom.assign("ACODLKTIKCMPEYXXOLILXAQSDNCBOTUUYOWVQHTVJAXNPQPHGQLNGUXDQFLITEJLTWRFJRYVWSRQHEFASQDGOJZPJUMKMKHZCSOUGRZVLYWXNKKXEUGDTDTCNBENWDFERURISPCGGAHIBEMWLENVQFFOYLZSMWACNHRJSNQWHKMDYBZVXUVWNTMOJPBAUJHIYSEVVAZCKRGYIJM");

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
    msg.setTimeStamp(0.341468643141);
    msg.setSource(61558U);
    msg.setSourceEntity(173U);
    msg.setDestination(55411U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.261151902297);
    msg.setSource(53137U);
    msg.setSourceEntity(157U);
    msg.setDestination(28904U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.478805142492);
    msg.setSource(1587U);
    msg.setSourceEntity(164U);
    msg.setDestination(48621U);
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
    msg.setTimeStamp(0.870479502071);
    msg.setSource(25699U);
    msg.setSourceEntity(168U);
    msg.setDestination(50236U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.215321797189;
    msg.lon = 0.828830843759;
    msg.z = 0.60593753864;
    msg.z_units = 16U;
    msg.radius = 0.635556188867;
    msg.duration = 26010U;
    msg.speed = 0.233550617899;
    msg.speed_units = 49U;
    msg.popup_period = 54226U;
    msg.popup_duration = 22049U;
    msg.flags = 15U;
    msg.custom.assign("PAANNWRQTKFLAUUJGNTRCTAIXUGRDVCSPZGBCLZDFUOJFWBDBKZFFTGWTEOQGFSJNPOPHSEBOJMERXYPVIBSTJEKREXPSYLIDZHIVAQGBKLCIVQKNVJSMHSRMTLVBEPEOIKJOXCWILCYIHIKVWHWCAJHXNYURXOCAWJDOXRHSMRGTFPCZISUBM");

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
    msg.setTimeStamp(0.178367362637);
    msg.setSource(43387U);
    msg.setSourceEntity(179U);
    msg.setDestination(31451U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.22455182278;
    msg.lon = 0.144612427638;
    msg.z = 0.0987104254155;
    msg.z_units = 158U;
    msg.radius = 0.617104367764;
    msg.duration = 1013U;
    msg.speed = 0.327822027307;
    msg.speed_units = 40U;
    msg.popup_period = 429U;
    msg.popup_duration = 56415U;
    msg.flags = 137U;
    msg.custom.assign("XWPNLDMTBRGZLUYJTOHFZPKSGFQUBNHNUUEIQCQBQTHY");

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
    msg.setTimeStamp(0.839144016341);
    msg.setSource(52307U);
    msg.setSourceEntity(62U);
    msg.setDestination(45553U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.497105440474;
    msg.lon = 0.39693500824;
    msg.z = 0.703255601136;
    msg.z_units = 185U;
    msg.radius = 0.545306842759;
    msg.duration = 49156U;
    msg.speed = 0.949630965605;
    msg.speed_units = 55U;
    msg.popup_period = 50453U;
    msg.popup_duration = 34599U;
    msg.flags = 157U;
    msg.custom.assign("QSWHERPJNUITXUKJORTSDQXCUSYZIFGRSZJTGKAGWPWGKE");

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
    msg.setTimeStamp(0.797595717202);
    msg.setSource(42421U);
    msg.setSourceEntity(31U);
    msg.setDestination(8830U);
    msg.setDestinationEntity(231U);
    msg.timeout = 28864U;
    msg.flags = 230U;
    msg.lat = 0.00271773182979;
    msg.lon = 0.426820917239;
    msg.start_z = 0.112266610393;
    msg.start_z_units = 250U;
    msg.end_z = 0.645359508188;
    msg.end_z_units = 162U;
    msg.radius = 0.71943148794;
    msg.speed = 0.691915450592;
    msg.speed_units = 16U;
    msg.custom.assign("OHQEVVUCVSIBESJPMDUOSWGRJGFMZE");

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
    msg.setTimeStamp(0.794023230404);
    msg.setSource(18828U);
    msg.setSourceEntity(248U);
    msg.setDestination(19609U);
    msg.setDestinationEntity(7U);
    msg.timeout = 24915U;
    msg.flags = 90U;
    msg.lat = 0.844847676;
    msg.lon = 0.130488213759;
    msg.start_z = 0.761425806485;
    msg.start_z_units = 226U;
    msg.end_z = 0.311306823976;
    msg.end_z_units = 112U;
    msg.radius = 0.203096174642;
    msg.speed = 0.986094075504;
    msg.speed_units = 233U;
    msg.custom.assign("EVKLUFHJBDGUKWUANYQNZDPINHFYOXZIPQOYNSBIEZJDRHRUERTMWHBIHGVOOXWARILFXNPEIFYSUBNVCGCFCCVGRPVKRMBNPLQPYACTLWTBONXQEKTGJKITQJDBXWSJEXACLQVYWMIDKORPWGCRLMXERZQFGASPJUWUSSHSLVGMNVQOXQMSRYOMFIVJSKYALDGWAZKELTXFMUWFJDVUZZDKCXOZIJA");

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
    msg.setTimeStamp(0.597920153527);
    msg.setSource(32147U);
    msg.setSourceEntity(57U);
    msg.setDestination(10848U);
    msg.setDestinationEntity(193U);
    msg.timeout = 12615U;
    msg.flags = 125U;
    msg.lat = 0.396917154124;
    msg.lon = 0.38486483079;
    msg.start_z = 0.625991880744;
    msg.start_z_units = 222U;
    msg.end_z = 0.207938737479;
    msg.end_z_units = 56U;
    msg.radius = 0.828946755723;
    msg.speed = 0.796282722878;
    msg.speed_units = 171U;
    msg.custom.assign("JSXQTNQSSWTASPUGQHXLVKPXJEBYXUTRHDIQELJHJBYJCYATZHAMOVZLDSWHIXFYULAUMMGAKZWINJODVEKIBMFWSIYBTQWMONPSVVFFRJZLVURPTVHEHFNGNZWZSURXWCQAIEMPQFOQEGSDIPUZFSGDPBDBFNNHCP");

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
    msg.setTimeStamp(0.0582303687344);
    msg.setSource(65U);
    msg.setSourceEntity(93U);
    msg.setDestination(17U);
    msg.setDestinationEntity(20U);
    msg.timeout = 54408U;
    msg.lat = 0.865365856159;
    msg.lon = 0.626750589164;
    msg.z = 0.0205572875089;
    msg.z_units = 37U;
    msg.speed = 0.976777181574;
    msg.speed_units = 201U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.674746803712;
    tmp_msg_0.y = 0.88208016875;
    tmp_msg_0.z = 0.788518988193;
    tmp_msg_0.t = 0.951995942882;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GKIJHWGLESSXSVZLJWFHOIMCYDNCRJCBEAUPIAJSSAPZGZUSFHGAFRRWTNBFSXGDOZKRCORUQIQBDFHDEKQYKOXWQEMYBMUXLTAJAIGGHPLGJTDJELMYROFLJCFLYVKEDTIKPPN");

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
    msg.setTimeStamp(0.747509189115);
    msg.setSource(56647U);
    msg.setSourceEntity(6U);
    msg.setDestination(44865U);
    msg.setDestinationEntity(248U);
    msg.timeout = 19206U;
    msg.lat = 0.375129974672;
    msg.lon = 0.443270261779;
    msg.z = 0.796696152144;
    msg.z_units = 188U;
    msg.speed = 0.782018549558;
    msg.speed_units = 238U;
    msg.custom.assign("ZBASFYAAIFDSIZTMECMJHUYWPTOZDGEWLKJPGCPANWLPKWENH");

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
    msg.setTimeStamp(0.774199783943);
    msg.setSource(54690U);
    msg.setSourceEntity(182U);
    msg.setDestination(47269U);
    msg.setDestinationEntity(6U);
    msg.timeout = 63364U;
    msg.lat = 0.205482799962;
    msg.lon = 0.214546125402;
    msg.z = 0.56900270038;
    msg.z_units = 174U;
    msg.speed = 0.868913944748;
    msg.speed_units = 28U;
    msg.custom.assign("UVJDGKDGMBBYRJRLCZANWYNZ");

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
    msg.setTimeStamp(0.459375229025);
    msg.setSource(54808U);
    msg.setSourceEntity(245U);
    msg.setDestination(49990U);
    msg.setDestinationEntity(40U);
    msg.x = 0.283323237006;
    msg.y = 0.578966492326;
    msg.z = 0.648546319371;
    msg.t = 0.471483604974;

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
    msg.setTimeStamp(0.14575700392);
    msg.setSource(49859U);
    msg.setSourceEntity(135U);
    msg.setDestination(31370U);
    msg.setDestinationEntity(218U);
    msg.x = 0.596825256189;
    msg.y = 0.626755577954;
    msg.z = 0.279698001075;
    msg.t = 0.430762352167;

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
    msg.setTimeStamp(0.551148587946);
    msg.setSource(20060U);
    msg.setSourceEntity(162U);
    msg.setDestination(50808U);
    msg.setDestinationEntity(219U);
    msg.x = 0.325400232602;
    msg.y = 0.818004906993;
    msg.z = 0.432188176841;
    msg.t = 0.620651437491;

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
    msg.setTimeStamp(0.23482482123);
    msg.setSource(35112U);
    msg.setSourceEntity(174U);
    msg.setDestination(824U);
    msg.setDestinationEntity(168U);
    msg.timeout = 42905U;
    msg.name.assign("SLBUCYHTGCJMUWCBEJDKNBQXEXEMFFUSYFQSEVGXULIIVHDVIHAZWABXZCRRPFREDLPXQOJIKMARZTKJONRVQJKHJFENDWIDEYROZACWTFVLBPEYCNTHSQRFBWTLNKXDYBQETMXMDYXKMQDLRZYPYCWIMNNOUSJRGLISPHMFSSOAAELKBMUZIPWZTIPCGJKUGACOXOPYWDHQJDTTUBOJSKVCGWSQAGWQKOFHZXUHIMVZYLUOF");
    msg.custom.assign("JAXXORNENRRYMNCBBQDMHZGGAJVKKTDBGDSLNTGPHJYHII");

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
    msg.setTimeStamp(0.1151129688);
    msg.setSource(37689U);
    msg.setSourceEntity(96U);
    msg.setDestination(39144U);
    msg.setDestinationEntity(25U);
    msg.timeout = 64053U;
    msg.name.assign("OJLQORQOBKNEYRMFCZMPGVFSLSIXCQIZQV");
    msg.custom.assign("AKCXQBCVIAKLITFNNNYJABZRIOYMXVCAQYHZQRMKSJYBMGSVPHBYNPKRSLEZEXFXDDTJTOQAFZNEKGCWKZXMDSEYYHHCMNPNMYOWTJJTWZZHOUWBRIRWGUQJNTAPPXDUXBKP");

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
    msg.setTimeStamp(0.385808371);
    msg.setSource(58720U);
    msg.setSourceEntity(137U);
    msg.setDestination(26302U);
    msg.setDestinationEntity(91U);
    msg.timeout = 39189U;
    msg.name.assign("SEXSBRCYZZIQFBAMSTBJDHZQURCSXKRRQUTTLZNTIRLOTHNAWPFLNNLHMVYDZPUGEOGXHYEXTLJUEPWZMVCEOYYUHAXLRHWAQADRZTRXSDYAHKJJCTCEPNHIBINKFBWUAGPM");
    msg.custom.assign("FQVIXZNTGBILRKADICJZXZBCUAKRKKTSVTSTVQYJPZMAZMIDUPFXZQNGHIPPHKNEEYBHIOOZHPUMXGWELUAHLLVGTDOXSSMGATDYEQRBAYIMGXWRMTDUBTKZPMEEJCSBCMPVQZCSTHVBQVRJLAMVUNAYHQIEPOFOYCJZONHKWBVOWCUWUOAJHNJQNGRJLNYDCLSFFSPP");

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
    msg.setTimeStamp(0.203888236784);
    msg.setSource(31891U);
    msg.setSourceEntity(56U);
    msg.setDestination(55710U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.910931746565;
    msg.lon = 0.301848127208;
    msg.z = 0.69527328223;
    msg.z_units = 46U;
    msg.speed = 0.207781983974;
    msg.speed_units = 166U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.959497489334;
    tmp_msg_0.y = 0.36024576447;
    tmp_msg_0.z = 0.332860256328;
    tmp_msg_0.t = 0.342795720658;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 40379U;
    tmp_msg_1.off_x = 0.671111347418;
    tmp_msg_1.off_y = 0.889223906964;
    tmp_msg_1.off_z = 0.0623588184944;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.434441298897;
    msg.custom.assign("DVXPVUSKFPRQNWSKEDSLMRFSOIMFBWGCXFSGTWTZHRENYSVPCNOLAFXJHVGPUWKGUCUVQWNEGPLQCPMEZSDOHINKGYFDCCBLIHKPCHMRWHOQPIJQFRGFGBLRAKMEUSMSJYTYUYLOECOJEHGX");

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
    msg.setTimeStamp(0.767324968891);
    msg.setSource(10351U);
    msg.setSourceEntity(5U);
    msg.setDestination(34647U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.589458462506;
    msg.lon = 0.707996662519;
    msg.z = 0.293117028443;
    msg.z_units = 103U;
    msg.speed = 0.150018407588;
    msg.speed_units = 81U;
    msg.start_time = 0.195818230151;
    msg.custom.assign("CPUDKOHANBAJSNWZRLGKIYPYYHZNONIBNDFQYERNKQCIWQSTYTBLYRWGQMEVPGUPQHZFBKOMJVJZNWXXGBGDWUMZWCLFTYIMZTNJISKSEIBXDHMRAJAVLKCLUQFPIPHTVMOWISZGUJITRUCMIDDVDKFV");

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
    msg.setTimeStamp(0.25459433921);
    msg.setSource(19186U);
    msg.setSourceEntity(193U);
    msg.setDestination(41241U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.973043260587;
    msg.lon = 0.372059498146;
    msg.z = 0.790895355761;
    msg.z_units = 109U;
    msg.speed = 0.603948128213;
    msg.speed_units = 43U;
    msg.start_time = 0.0977569311678;
    msg.custom.assign("CXEIHVLZYZIANMSJPZLPVEUWQZLWCNYOMKAYHMURBRNHQVQTPCTJJNXNBKOZDNLTXWIACOPDKJVUKVAGUBQPOJQVDNILVDAZWU");

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
    msg.setTimeStamp(0.637629972036);
    msg.setSource(51400U);
    msg.setSourceEntity(169U);
    msg.setDestination(38366U);
    msg.setDestinationEntity(9U);
    msg.vid = 24954U;
    msg.off_x = 0.193339774923;
    msg.off_y = 0.842659536716;
    msg.off_z = 0.378797558815;

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
    msg.setTimeStamp(0.845529331716);
    msg.setSource(10219U);
    msg.setSourceEntity(154U);
    msg.setDestination(26767U);
    msg.setDestinationEntity(124U);
    msg.vid = 24892U;
    msg.off_x = 0.189920564704;
    msg.off_y = 0.0290073340258;
    msg.off_z = 0.721206389142;

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
    msg.setTimeStamp(0.813326177992);
    msg.setSource(55414U);
    msg.setSourceEntity(235U);
    msg.setDestination(2578U);
    msg.setDestinationEntity(189U);
    msg.vid = 16643U;
    msg.off_x = 0.70182307005;
    msg.off_y = 0.248471993574;
    msg.off_z = 0.86726955219;

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
    msg.setTimeStamp(0.894026767842);
    msg.setSource(50843U);
    msg.setSourceEntity(96U);
    msg.setDestination(6708U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.254278804903);
    msg.setSource(26601U);
    msg.setSourceEntity(248U);
    msg.setDestination(36644U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.396623957875);
    msg.setSource(3331U);
    msg.setSourceEntity(51U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.679955495961);
    msg.setSource(52640U);
    msg.setSourceEntity(13U);
    msg.setDestination(48614U);
    msg.setDestinationEntity(7U);
    msg.mid = 34934U;

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
    msg.setTimeStamp(0.293677578277);
    msg.setSource(39094U);
    msg.setSourceEntity(174U);
    msg.setDestination(36255U);
    msg.setDestinationEntity(234U);
    msg.mid = 60233U;

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
    msg.setTimeStamp(0.0793426330897);
    msg.setSource(20349U);
    msg.setSourceEntity(196U);
    msg.setDestination(55385U);
    msg.setDestinationEntity(134U);
    msg.mid = 32057U;

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
    msg.setTimeStamp(0.665438396893);
    msg.setSource(38213U);
    msg.setSourceEntity(10U);
    msg.setDestination(10315U);
    msg.setDestinationEntity(146U);
    msg.state = 160U;
    msg.eta = 51710U;
    msg.info.assign("AWQWKJGJMCMTKECVRSGBXUKLWPTYEZOYMPRAHDDQFYVIJUFXVNTDBBBHRGCFIUEQDGLGZAWAXHSTGDXXOVXLHNYP");

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
    msg.setTimeStamp(0.70495844025);
    msg.setSource(49020U);
    msg.setSourceEntity(182U);
    msg.setDestination(17310U);
    msg.setDestinationEntity(161U);
    msg.state = 190U;
    msg.eta = 28857U;
    msg.info.assign("CWHESUXYTGUPAKVONNMQTTFRMKYWWSUXHHYAMVYXWRQICXTPDOMXHQUFFUNGCHAOOCJBAFVDRGINULEDMZPCNYLVVDDGGSMLQRTENOPKRAIZCRWGDSFKIMFSBTHSLQZAFGJQUVWHENMJIFQGBPYVEVIBDDZPIBKURQPXJGJXUKTRTOFONCCZJZYRBJZLWANCOXPIZEVSJPLEHZQOSMJLAQXKTHMBOWRYVSSPKKXJZFEHLEBKYBYLBAWAILEWC");

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
    msg.setTimeStamp(0.173241340326);
    msg.setSource(35878U);
    msg.setSourceEntity(149U);
    msg.setDestination(27126U);
    msg.setDestinationEntity(19U);
    msg.state = 121U;
    msg.eta = 12497U;
    msg.info.assign("MDTAGYKRDFHTWHFSTMPYNMMNEPUICPBCKMWPJJEULPRHCMRBWYEIAQZNWXACTAJCLWSDJSGDQOBTQSUMIQLOBIDTJKJBXZBELHVFABNRGINAIZKLCRTONZ");

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
    msg.setTimeStamp(0.596241538888);
    msg.setSource(62329U);
    msg.setSourceEntity(55U);
    msg.setDestination(14393U);
    msg.setDestinationEntity(185U);
    msg.system = 47537U;
    msg.duration = 42938U;
    msg.speed = 0.219124460768;
    msg.speed_units = 73U;
    msg.x = 0.999605466043;
    msg.y = 0.3664085185;
    msg.z = 0.0836352631158;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.17213431811);
    msg.setSource(46042U);
    msg.setSourceEntity(86U);
    msg.setDestination(34587U);
    msg.setDestinationEntity(105U);
    msg.system = 16025U;
    msg.duration = 60925U;
    msg.speed = 0.216443395423;
    msg.speed_units = 111U;
    msg.x = 0.199286207986;
    msg.y = 0.630898148836;
    msg.z = 0.736082851561;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.216835692607);
    msg.setSource(60935U);
    msg.setSourceEntity(195U);
    msg.setDestination(33325U);
    msg.setDestinationEntity(236U);
    msg.system = 43894U;
    msg.duration = 49268U;
    msg.speed = 0.604654012537;
    msg.speed_units = 62U;
    msg.x = 0.685190688141;
    msg.y = 0.421619313338;
    msg.z = 0.730480990097;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.135895420736);
    msg.setSource(25859U);
    msg.setSourceEntity(146U);
    msg.setDestination(21132U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.667149917145;
    msg.lon = 0.0996672088648;
    msg.speed = 0.698555617257;
    msg.speed_units = 70U;
    msg.duration = 36486U;
    msg.sys_a = 21521U;
    msg.sys_b = 44552U;
    msg.move_threshold = 0.340572130452;

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
    msg.setTimeStamp(0.0431750767894);
    msg.setSource(54482U);
    msg.setSourceEntity(0U);
    msg.setDestination(60778U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.701603399895;
    msg.lon = 0.518731213681;
    msg.speed = 0.651164632892;
    msg.speed_units = 10U;
    msg.duration = 45696U;
    msg.sys_a = 51432U;
    msg.sys_b = 18053U;
    msg.move_threshold = 0.222720358459;

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
    msg.setTimeStamp(0.45605420492);
    msg.setSource(56997U);
    msg.setSourceEntity(194U);
    msg.setDestination(15509U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.986810415468;
    msg.lon = 0.503016844182;
    msg.speed = 0.677216998172;
    msg.speed_units = 119U;
    msg.duration = 18546U;
    msg.sys_a = 30298U;
    msg.sys_b = 9016U;
    msg.move_threshold = 0.638115647327;

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
    msg.setTimeStamp(0.81758205476);
    msg.setSource(50758U);
    msg.setSourceEntity(201U);
    msg.setDestination(10074U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.514287262902;
    msg.lon = 0.196201210796;
    msg.z = 0.214953897389;
    msg.z_units = 115U;
    msg.speed = 0.434115573298;
    msg.speed_units = 118U;
    msg.custom.assign("TSZPSQJURAUWBPGKORXOULDWUVJZVHFADITTVWDFSBNEFMHMAOHOLGDHEGMQLZIXMTEZVGUSTPBZGWKAONLTYQGXHFNUWPK");

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
    msg.setTimeStamp(0.250498495183);
    msg.setSource(16949U);
    msg.setSourceEntity(245U);
    msg.setDestination(38134U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.2704289347;
    msg.lon = 0.157886302726;
    msg.z = 0.940863131374;
    msg.z_units = 111U;
    msg.speed = 0.816570949227;
    msg.speed_units = 245U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.715710318063;
    tmp_msg_0.lon = 0.0464233919483;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UDLICSQSQPWHZWNEKMHJTQIXWHLILFFMOVZVEJJAIWPFGBHUSHLNOQJSIZVCGABFLAWDXPPXWBEDYVLTCNCETDUJCNIOFOEAASVYWFBPOZZTMRYTTVSTSMINUTRJGWDSGQJTCUDFXYECBHDPMLIRYUCUWBGCBFPGQVAJQKNGQAXDMEDRXVXHPAGSKZEFOKLUHOKUSYWRMXBGTCXRYZQMAZGXJNNFBNLMZZOKUIORKKBQAEJMKRENPDVVHLR");

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
    msg.setTimeStamp(0.477989783998);
    msg.setSource(12469U);
    msg.setSourceEntity(249U);
    msg.setDestination(62361U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.308744890713;
    msg.lon = 0.247724179693;
    msg.z = 0.975358910952;
    msg.z_units = 236U;
    msg.speed = 0.726361892522;
    msg.speed_units = 10U;
    msg.custom.assign("VWYJORFWDTOGSBXNKQNFCTXEZUQKHERLRLCQEJIBNGRWQPQGSXXLDMKZKKGOXPZWFTCCJAUMEVCCBVHNKRMNBYHFNHELQQYOQJUHTRVUJMVBWZPVAKDAAUTXVTOXTRPRCZFRYADCFAYIILSGGJNDMPYDXAJBENWE");

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
    msg.setTimeStamp(0.0691891518769);
    msg.setSource(24552U);
    msg.setSourceEntity(60U);
    msg.setDestination(39652U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.638408995527;
    msg.lon = 0.392188273859;

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
    msg.setTimeStamp(0.535678792172);
    msg.setSource(9493U);
    msg.setSourceEntity(10U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.941231387705;
    msg.lon = 0.804341805562;

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
    msg.setTimeStamp(0.760492532844);
    msg.setSource(41242U);
    msg.setSourceEntity(33U);
    msg.setDestination(7347U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.187627129231;
    msg.lon = 0.319662405972;

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
    msg.setTimeStamp(0.337720273185);
    msg.setSource(5663U);
    msg.setSourceEntity(92U);
    msg.setDestination(48012U);
    msg.setDestinationEntity(29U);
    msg.timeout = 46290U;
    msg.lat = 0.460685604341;
    msg.lon = 0.646387738712;
    msg.z = 0.26856601124;
    msg.z_units = 80U;
    msg.pitch = 0.680316570689;
    msg.amplitude = 0.407082717468;
    msg.duration = 7293U;
    msg.speed = 0.415887142151;
    msg.speed_units = 201U;
    msg.radius = 0.884183702186;
    msg.direction = 111U;
    msg.custom.assign("LMVCOAKPRUBTOFDYKTAPZEMOIZGNKMJBVIHJHDXIDGJDPEAZVHISACDFOXEVBJURQVXMRUGYHSUBYPA");

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
    msg.setTimeStamp(0.12514736305);
    msg.setSource(45709U);
    msg.setSourceEntity(190U);
    msg.setDestination(55318U);
    msg.setDestinationEntity(203U);
    msg.timeout = 45056U;
    msg.lat = 0.902897357162;
    msg.lon = 0.866614882056;
    msg.z = 0.916155346165;
    msg.z_units = 252U;
    msg.pitch = 0.267652037198;
    msg.amplitude = 0.733914780809;
    msg.duration = 54063U;
    msg.speed = 0.94552413712;
    msg.speed_units = 39U;
    msg.radius = 0.791985066571;
    msg.direction = 59U;
    msg.custom.assign("CAEIBUJSRXAGBAGLLNHPFUTETRWUIOKVIFBJLZWXBFFXRCMNKVEDNAZZKEQTOUQXMTDXMYCEVJPFLFIXNYFJRFHPCHWCDO");

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
    msg.setTimeStamp(0.782138321706);
    msg.setSource(62931U);
    msg.setSourceEntity(163U);
    msg.setDestination(23127U);
    msg.setDestinationEntity(38U);
    msg.timeout = 63898U;
    msg.lat = 0.0644406856226;
    msg.lon = 0.0278140121176;
    msg.z = 0.694431064891;
    msg.z_units = 120U;
    msg.pitch = 0.322691173053;
    msg.amplitude = 0.745437201895;
    msg.duration = 34665U;
    msg.speed = 0.341562660328;
    msg.speed_units = 49U;
    msg.radius = 0.763564901126;
    msg.direction = 146U;
    msg.custom.assign("WEDGHKOPFYPQZWYNOHVTOVZDDVOJFPRXWSYJCWMRHGKFPILABINYMGEJUVDRQITSKDDQZEAHWRWXYXXJDOGEZMQBQYENPNDOPLGBUZBYVWJYWNIMZTUAFQASOOHHLCPHNCGCBAUELXTSQFRRKVABBAICMNCZOFBVRUTPUMSIJRKLPSOJGNHMFIMXAISHSITEQTYVCUZTQUNJKUEDGLJFKLGKEWI");

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
    msg.setTimeStamp(0.174542929665);
    msg.setSource(22630U);
    msg.setSourceEntity(190U);
    msg.setDestination(6621U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("VQYOWTUCABPHCNZZEIPAEPZJTOKNHYLIWPYFWIWSRWLHVNESBWYFNZMKALSLNTRSNGUSVQDFBJJJHUIYGVUHQMYFRKQXVZUGKZFVKYNMDK");
    msg.reference_frame = 247U;
    msg.custom.assign("YIMEXDDBMEHEEHMOTCVYOHFSVDYNYJBPRWTSHGXIVWWTBWCUQNFAYLEQTUYFSXBZJJXHZAMCLCC");

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
    msg.setTimeStamp(0.405427173987);
    msg.setSource(42218U);
    msg.setSourceEntity(6U);
    msg.setDestination(50160U);
    msg.setDestinationEntity(222U);
    msg.formation_name.assign("XKEGJOKLYNGBFQYBBOMFVNTFCGRRIUZOGHUDYUTJFVBDDWMYVPYLSXFWDMSEVPSVJDDIAEEYKROTSHEXWCZHHVVFQZUBTUFBCWTAPQUIDAAOKORQXZRFNBKKXBHMKSC");
    msg.reference_frame = 28U;
    msg.custom.assign("ZHTGRZFQIPFZIAXFLBYVEXDJQEDHSFRCEWPNRCQGNATPFTGGXWUXZATGDPWVMHSMRNLJINGESJTRQFYOOCDYCANYMWKSZTDUQZTJHMKXMUVVSGMHMKGWKUUIHLCWVJTHTOSEAWZPBABLUMYCRWEQLOAOINVQJNYFHJLZXYBNCHFXCSVQUBPKSKPTYXUIOSFPSBMMLOAXCEZUDVDWKLIZBXRKODYIDBROHQUIBGJYERAEVLI");

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
    msg.setTimeStamp(0.380788598068);
    msg.setSource(30344U);
    msg.setSourceEntity(185U);
    msg.setDestination(57303U);
    msg.setDestinationEntity(97U);
    msg.formation_name.assign("MBGBQOZZLMXNLDAIDTKEQIZANHWWJUZPMVIITIWBSIPXCBJUGOWHECUBMMOEDROCAEAQNTZFAFYCVYHXCGOAJQMJFFVNFNPGIJFBBVS");
    msg.reference_frame = 45U;
    msg.custom.assign("VFQLPLOTDIVEQRRYKOWJFXYKFJKCLOSPOJEMHRQHLRNDITSXVUHFYZFNANSWGGHBVJUDNARIHFKIITACSKLGPNBVNWHXXAALUKPPLFAOXRZVSWGIZBUDMGMAXLQZJ");

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
    msg.setTimeStamp(0.850198471779);
    msg.setSource(26847U);
    msg.setSourceEntity(7U);
    msg.setDestination(10528U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("RSACFIKYMAGJSPYSUFFPWKB");
    msg.formation_name.assign("ZRNFTQYYBNOLGTTQOLYPTZYTZEIMHMEUCSVSXHOEYGNMVTVUYDWDJXULBPWWIISPFQSUKZLTIVTAKLNTOCBXGCMAIPFFHDHVIQ");
    msg.plan_id.assign("YKVLLRFUXNCKQAGJIAJUVUGYCSRDGYADQANZXFUHSEAGHTFTQEWPVINAIJQLJOETRZJWAYTNSPZDOCHPIDOOUAUBDHYQVYXEGFFGFIIBTAYMRHERLOCUPSPCHLVXENMBWHEOJOBTMK");
    msg.description.assign("VQADHMCFLUMPYJLODTBVBXDWVCJWYHVRUSPMLCNHQFQUZGBUWAHIKTYMRGTYGIOTCFIUTXSNWPZUGZGWUWHEFEGVPOKJKELWIJSSAQMXEDKNKRFQZMNJHRAMDIDSARXDTICSSBJYGNCNEVOGBSVC");
    msg.leader_speed = 0.835627484034;
    msg.leader_bank_lim = 0.898093243114;
    msg.pos_sim_err_lim = 0.313124925501;
    msg.pos_sim_err_wrn = 0.771731586693;
    msg.pos_sim_err_timeout = 58738U;
    msg.converg_max = 0.846943671354;
    msg.converg_timeout = 43698U;
    msg.comms_timeout = 53452U;
    msg.turb_lim = 0.885629829276;
    msg.custom.assign("NTCNCIBLNSWAFSVRMIQUXZMZUTRUFFERQHPJB");

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
    msg.setTimeStamp(0.428551549611);
    msg.setSource(56885U);
    msg.setSourceEntity(248U);
    msg.setDestination(12113U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("WSJRTFNGQIVFOCTTRNDJNJCZEYM");
    msg.formation_name.assign("ZTMNIRNSCUJMXGMCVQHXUDVYJASMBHLLRYKBBFEIHHHMCVMKSVALFNUNIRQCZDBAKFHFGQZBUPSWYZEMCHGEOZUKACXFHLPQSWOTFQDJOJZYBLYBRWORXXUAVJAZHTLQSKKJTTFXSUJCYFLYXOEQDYOERXIQQQGNEIJHIWWGNPVEPVVWDBYPPVTDTUIGKZRNSOZKAILDXPORXPMPDNRLCIMDSJZFUVSWREN");
    msg.plan_id.assign("RWEDWMKKEOZDLDTFMAXLGXBYTCWKAREHGAAIIQTHGOVJRDUZXTVHDNGBVVPOMYSEDTGXSUNLREXWZBIZAMILIGBSVYYKBBHQUUWFKPKIOUFO");
    msg.description.assign("FSOACCCJLGCXYHWLYDNZPIQZAHHFONGDYRPMAXKNLAZGPFSFYYJNXIJQBULSMTKFTTMLZVYFTCEKWYAUAUJKVODCSFRMUMQCBQWPNGHATVNBIIBAPTOVBOWWUEXIQHGXTHDWFDSTQMKTUPEZHBXSWJHCEEQSGXWRZYTSZMXXVFPCQRRIERYAWGB");
    msg.leader_speed = 0.168535665393;
    msg.leader_bank_lim = 0.427443957047;
    msg.pos_sim_err_lim = 0.942036515187;
    msg.pos_sim_err_wrn = 0.492943025031;
    msg.pos_sim_err_timeout = 7589U;
    msg.converg_max = 0.767431570685;
    msg.converg_timeout = 32743U;
    msg.comms_timeout = 17324U;
    msg.turb_lim = 0.854375366148;
    msg.custom.assign("EJOKXZBMMCNIZJUUDXPIIXCUFMMATYCARLJFEZWSNVYPVYFBNEFNUCPHDZRXUGFGAYILZBLDNEJRVSZDDOQWSAGHGDTTTBGYDMMWUBQSLRTHUHHMCENGXSMTLQFXISLJKOVPSIJWQWRCVKKYORQWAKYHJABD");

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
    msg.setTimeStamp(0.162299711739);
    msg.setSource(17892U);
    msg.setSourceEntity(206U);
    msg.setDestination(1253U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("FMMUJQQVDAYYFXKRDIJWICSVIRTCTIPHHFXJJGOUYYAPSXGWOMCMVVPLRVOAHALHNVZCBWHMHBYHQVXNBCLGIKZRTMEWSZECLSZAPMBUDJYPAVDBROKEUREJFFOQDBAUEWSMOYNXSMFZWFDKKWJQKPEGXUGQBINTQQ");
    msg.formation_name.assign("PTMMLFUJRCFZRTIZTGFLSOVEKEGUHRN");
    msg.plan_id.assign("YXQEAEAFNCQWPLEGEDYMNKQHDSHPKPFBWZVZLKUFSYZXLJIHRIUVELOUXHMNGTFZUHCLPRRAPSIGBWCDTYCNYBHKNBFFJDGEASPSVDBGLOKIFMRLQYWMQTVAGOMATGFQPMESVUSITWYVJIELZWXQURPXUQJOCBMOODBWWXZKRFCYMCRNXEHNSGMERQAXCZSOJXGIZTVUFTWYNXTJTBPNYLJQHKOJDDVBKMBDUZHZIR");
    msg.description.assign("YIOGVXCEKRRQPMBRFSOMNFBLSMGAVJMEDOEZYECEUXQWLCMYCEGHQKASPPGCAPOEFPLWZKFZGGYKXYJTTAPHDWLNHMFJSHVJHXKQXUOBQUFOHBOQBTRABCSDDUTHRJZOXDWXTPVEHBSPWVRWDLUNNOXJBTYZRHIMASWDCLYKFVURDGVDGOEVFTRMQQTLJCIXNLTQBJIKXVSKIPI");
    msg.leader_speed = 0.433369379162;
    msg.leader_bank_lim = 0.394574625941;
    msg.pos_sim_err_lim = 0.647722207578;
    msg.pos_sim_err_wrn = 0.307685510305;
    msg.pos_sim_err_timeout = 7408U;
    msg.converg_max = 0.268417986288;
    msg.converg_timeout = 30177U;
    msg.comms_timeout = 45128U;
    msg.turb_lim = 0.597300663644;
    msg.custom.assign("VEAOLKWDVYTGHLCLXVNKLNPMKZC");

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
    msg.setTimeStamp(0.597705400029);
    msg.setSource(63603U);
    msg.setSourceEntity(221U);
    msg.setDestination(8446U);
    msg.setDestinationEntity(251U);
    msg.control_src = 34689U;
    msg.control_ent = 26U;
    msg.timeout = 0.323739863028;
    msg.loiter_radius = 0.733073597927;
    msg.altitude_interval = 0.0207053663048;

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
    msg.setTimeStamp(0.814112595257);
    msg.setSource(29192U);
    msg.setSourceEntity(29U);
    msg.setDestination(40240U);
    msg.setDestinationEntity(112U);
    msg.control_src = 59077U;
    msg.control_ent = 30U;
    msg.timeout = 0.0518831311416;
    msg.loiter_radius = 0.816150576512;
    msg.altitude_interval = 0.639875823631;

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
    msg.setTimeStamp(0.055365951483);
    msg.setSource(19546U);
    msg.setSourceEntity(85U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(150U);
    msg.control_src = 59581U;
    msg.control_ent = 182U;
    msg.timeout = 0.369678759766;
    msg.loiter_radius = 0.79899782419;
    msg.altitude_interval = 0.0488528690694;

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
    msg.setTimeStamp(0.954682100372);
    msg.setSource(63508U);
    msg.setSourceEntity(54U);
    msg.setDestination(39086U);
    msg.setDestinationEntity(152U);
    msg.flags = 55U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.675326567993;
    tmp_msg_0.speed_units = 109U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.439187762996;
    tmp_msg_1.z_units = 3U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0842861459026;
    msg.lon = 0.382430684245;
    msg.radius = 0.720141680381;

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
    msg.setTimeStamp(0.983744856719);
    msg.setSource(415U);
    msg.setSourceEntity(237U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(194U);
    msg.flags = 6U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.209458397876;
    tmp_msg_0.speed_units = 82U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.985722871248;
    tmp_msg_1.z_units = 110U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.901805654692;
    msg.lon = 0.618640374578;
    msg.radius = 0.0698455355026;

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
    msg.setTimeStamp(0.775031918207);
    msg.setSource(13598U);
    msg.setSourceEntity(230U);
    msg.setDestination(13645U);
    msg.setDestinationEntity(92U);
    msg.flags = 128U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.521294892526;
    tmp_msg_0.speed_units = 85U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2326589974;
    tmp_msg_1.z_units = 123U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.694803494946;
    msg.lon = 0.4232825083;
    msg.radius = 0.0897981235468;

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
    msg.setTimeStamp(0.337670938514);
    msg.setSource(30150U);
    msg.setSourceEntity(56U);
    msg.setDestination(20868U);
    msg.setDestinationEntity(52U);
    msg.control_src = 36257U;
    msg.control_ent = 84U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 221U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.870912046736;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0213723880518;
    tmp_tmp_msg_0_1.z_units = 167U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.113394803162;
    tmp_msg_0.lon = 0.193508332271;
    tmp_msg_0.radius = 0.0964115729569;
    msg.reference.set(tmp_msg_0);
    msg.state = 208U;
    msg.proximity = 7U;

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
    msg.setTimeStamp(0.617215233184);
    msg.setSource(54829U);
    msg.setSourceEntity(69U);
    msg.setDestination(1705U);
    msg.setDestinationEntity(112U);
    msg.control_src = 14278U;
    msg.control_ent = 242U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.901925739897;
    tmp_tmp_msg_0_0.speed_units = 113U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.866735466888;
    tmp_tmp_msg_0_1.z_units = 68U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.020039474602;
    tmp_msg_0.lon = 0.40635003763;
    tmp_msg_0.radius = 0.205689467262;
    msg.reference.set(tmp_msg_0);
    msg.state = 60U;
    msg.proximity = 235U;

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
    msg.setTimeStamp(0.11532746106);
    msg.setSource(10435U);
    msg.setSourceEntity(250U);
    msg.setDestination(3332U);
    msg.setDestinationEntity(215U);
    msg.control_src = 64088U;
    msg.control_ent = 218U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 198U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.929214291994;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.323626232237;
    tmp_tmp_msg_0_1.z_units = 91U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.583380020698;
    tmp_msg_0.lon = 0.451459947159;
    tmp_msg_0.radius = 0.105111309447;
    msg.reference.set(tmp_msg_0);
    msg.state = 8U;
    msg.proximity = 223U;

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
    msg.setTimeStamp(0.637191262469);
    msg.setSource(9094U);
    msg.setSourceEntity(59U);
    msg.setDestination(46849U);
    msg.setDestinationEntity(41U);
    msg.ax_cmd = 0.816402078223;
    msg.ay_cmd = 0.688343948167;
    msg.az_cmd = 0.137098865513;
    msg.ax_des = 0.509754704963;
    msg.ay_des = 0.865291727083;
    msg.az_des = 0.895408348493;
    msg.virt_err_x = 0.328941784452;
    msg.virt_err_y = 0.500217417468;
    msg.virt_err_z = 0.54053662686;
    msg.surf_fdbk_x = 0.655899811097;
    msg.surf_fdbk_y = 0.573330085368;
    msg.surf_fdbk_z = 0.918462777923;
    msg.surf_unkn_x = 0.797707913473;
    msg.surf_unkn_y = 0.0156161896767;
    msg.surf_unkn_z = 0.0838861559368;
    msg.ss_x = 0.728125002916;
    msg.ss_y = 0.37173131757;
    msg.ss_z = 0.588030529879;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JJOAOXUTWFDLMPBYPIULXGCIXJQMZIGGBCQCESOWNKXMCVVMOWQYEKCDXJNJTAYNRMUAGDCRNBDBWRTIPYMAUEQMEJBOEZFJUHDKHOFWGHEYVKSVRMRTGWQZLRZHBLLJZYQFLDECAPISXHRBNSKTYTUKKIWSVQCTXZPQJDCSPYOOEGLXAWVNTUKIHAAXISHWSIBOZPXFNSDYAMRGILDPUFFUSETNQCTVMLDRNEZKLHVOHWHGFBQV");
    tmp_msg_0.dist = 0.0330045858692;
    tmp_msg_0.err = 0.96039518551;
    tmp_msg_0.ctrl_imp = 0.448006971206;
    tmp_msg_0.rel_dir_x = 0.354600067605;
    tmp_msg_0.rel_dir_y = 0.985661401766;
    tmp_msg_0.rel_dir_z = 0.671861331152;
    tmp_msg_0.err_x = 0.66459077873;
    tmp_msg_0.err_y = 0.402982367534;
    tmp_msg_0.err_z = 0.456655743902;
    tmp_msg_0.rf_err_x = 0.704046275648;
    tmp_msg_0.rf_err_y = 0.780946046985;
    tmp_msg_0.rf_err_z = 0.266504318393;
    tmp_msg_0.rf_err_vx = 0.848758985283;
    tmp_msg_0.rf_err_vy = 0.446992096485;
    tmp_msg_0.rf_err_vz = 0.846850906177;
    tmp_msg_0.ss_x = 0.324313521946;
    tmp_msg_0.ss_y = 0.238753242362;
    tmp_msg_0.ss_z = 0.647975130566;
    tmp_msg_0.virt_err_x = 0.583444462923;
    tmp_msg_0.virt_err_y = 0.11898566388;
    tmp_msg_0.virt_err_z = 0.774684567363;
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
    msg.setTimeStamp(0.991333679203);
    msg.setSource(19015U);
    msg.setSourceEntity(177U);
    msg.setDestination(40900U);
    msg.setDestinationEntity(91U);
    msg.ax_cmd = 0.143625214203;
    msg.ay_cmd = 0.682806603619;
    msg.az_cmd = 0.699982847451;
    msg.ax_des = 0.704369876185;
    msg.ay_des = 0.326396855878;
    msg.az_des = 0.686324315551;
    msg.virt_err_x = 0.96512780433;
    msg.virt_err_y = 0.0809509902665;
    msg.virt_err_z = 0.0668362057944;
    msg.surf_fdbk_x = 0.77087009362;
    msg.surf_fdbk_y = 0.434211320309;
    msg.surf_fdbk_z = 0.329838098166;
    msg.surf_unkn_x = 0.0204380007569;
    msg.surf_unkn_y = 0.359426407755;
    msg.surf_unkn_z = 0.201112311864;
    msg.ss_x = 0.311065158398;
    msg.ss_y = 0.328322795447;
    msg.ss_z = 0.564537121095;

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
    msg.setTimeStamp(0.980725029567);
    msg.setSource(35736U);
    msg.setSourceEntity(8U);
    msg.setDestination(47848U);
    msg.setDestinationEntity(114U);
    msg.ax_cmd = 0.442170844239;
    msg.ay_cmd = 0.472616884307;
    msg.az_cmd = 0.794612153018;
    msg.ax_des = 0.0473766685311;
    msg.ay_des = 0.0316107532406;
    msg.az_des = 0.857704957152;
    msg.virt_err_x = 0.545234080158;
    msg.virt_err_y = 0.00955873926624;
    msg.virt_err_z = 0.981678678039;
    msg.surf_fdbk_x = 0.594541322892;
    msg.surf_fdbk_y = 0.166106145693;
    msg.surf_fdbk_z = 0.67098463888;
    msg.surf_unkn_x = 0.374853351014;
    msg.surf_unkn_y = 0.560298933978;
    msg.surf_unkn_z = 0.14637546084;
    msg.ss_x = 0.565060864034;
    msg.ss_y = 0.840054724713;
    msg.ss_z = 0.508963369872;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MEOPLPZYKZBQJRUTUFWTYRUXERIPTRXPQTWIBODKJONFECIOYVEDNWFZWHOTGEFRQJSKDDHXKQUVNUVSMLRSKKZXFVRCQEZUSNZTHJFRTXFNBBHECFZXIAENLALPMLIYBTGCILPBISXQIAWAKSJCQASGDJYVVYOMBGLVTBIFJJMGUGWHWSBCGACKKLCCSOQLUCMXPSNGRHEJBORHWQQWVAVWDHMYGNMDHUTVDA");
    tmp_msg_0.dist = 0.914202296861;
    tmp_msg_0.err = 0.55649259241;
    tmp_msg_0.ctrl_imp = 0.833911622182;
    tmp_msg_0.rel_dir_x = 0.429696660329;
    tmp_msg_0.rel_dir_y = 0.251960618367;
    tmp_msg_0.rel_dir_z = 0.794043832708;
    tmp_msg_0.err_x = 0.501945505831;
    tmp_msg_0.err_y = 0.470263245863;
    tmp_msg_0.err_z = 0.643236694441;
    tmp_msg_0.rf_err_x = 0.361002660886;
    tmp_msg_0.rf_err_y = 0.983353333729;
    tmp_msg_0.rf_err_z = 0.66568529573;
    tmp_msg_0.rf_err_vx = 0.945579476842;
    tmp_msg_0.rf_err_vy = 0.269225101247;
    tmp_msg_0.rf_err_vz = 0.862556016173;
    tmp_msg_0.ss_x = 0.781240345019;
    tmp_msg_0.ss_y = 0.00833048732496;
    tmp_msg_0.ss_z = 0.991212854665;
    tmp_msg_0.virt_err_x = 0.699983959582;
    tmp_msg_0.virt_err_y = 0.0983089524011;
    tmp_msg_0.virt_err_z = 0.417993301822;
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
    msg.setTimeStamp(0.941366931781);
    msg.setSource(13290U);
    msg.setSourceEntity(195U);
    msg.setDestination(64577U);
    msg.setDestinationEntity(149U);
    msg.s_id.assign("LQICUGYJHPJMRDBRJKVCIDVZUDSNFZUZEUHUHEATILPABUAOZRRMQADUJRVTROAUYNNA");
    msg.dist = 0.108513891539;
    msg.err = 0.0296886054219;
    msg.ctrl_imp = 0.728315164351;
    msg.rel_dir_x = 0.52559929233;
    msg.rel_dir_y = 0.208812713694;
    msg.rel_dir_z = 0.558244421564;
    msg.err_x = 0.997710090398;
    msg.err_y = 0.673953180466;
    msg.err_z = 0.0441637988149;
    msg.rf_err_x = 0.100496565143;
    msg.rf_err_y = 0.304384030454;
    msg.rf_err_z = 0.494334002759;
    msg.rf_err_vx = 0.812316361003;
    msg.rf_err_vy = 0.250928643095;
    msg.rf_err_vz = 0.361944853491;
    msg.ss_x = 0.357505504481;
    msg.ss_y = 0.018655301452;
    msg.ss_z = 0.192514059081;
    msg.virt_err_x = 0.496082787209;
    msg.virt_err_y = 0.994096550488;
    msg.virt_err_z = 0.212389180995;

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
    msg.setTimeStamp(0.0643082598081);
    msg.setSource(48351U);
    msg.setSourceEntity(23U);
    msg.setDestination(16880U);
    msg.setDestinationEntity(149U);
    msg.s_id.assign("XBLTRGVMGEQNABFHOFHMUHVWXGHXMGCMAPNZBGGFTBPEYHUEJHSCQDKXNEWJ");
    msg.dist = 0.816972578199;
    msg.err = 0.576322717136;
    msg.ctrl_imp = 0.960410024327;
    msg.rel_dir_x = 0.263268626244;
    msg.rel_dir_y = 0.656014361008;
    msg.rel_dir_z = 0.883353067568;
    msg.err_x = 0.35257077507;
    msg.err_y = 0.808678718066;
    msg.err_z = 0.117865216584;
    msg.rf_err_x = 0.985384516282;
    msg.rf_err_y = 0.17956133236;
    msg.rf_err_z = 0.852949578713;
    msg.rf_err_vx = 0.104098641777;
    msg.rf_err_vy = 0.724146091223;
    msg.rf_err_vz = 0.438975654609;
    msg.ss_x = 0.479598876339;
    msg.ss_y = 0.563761996787;
    msg.ss_z = 0.263866474086;
    msg.virt_err_x = 0.192668061998;
    msg.virt_err_y = 0.815508356137;
    msg.virt_err_z = 0.930882749231;

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
    msg.setTimeStamp(0.531515790118);
    msg.setSource(46046U);
    msg.setSourceEntity(28U);
    msg.setDestination(58665U);
    msg.setDestinationEntity(208U);
    msg.s_id.assign("DIOGTYNKSZZEWEMKRVFSBKKUAWCKTBJQXWRRBMAHWYXALHRVVXWSNGQDDIVYZUMIGWUCINRTTZQXVZEKZIUYULA");
    msg.dist = 0.154113587179;
    msg.err = 0.190397931571;
    msg.ctrl_imp = 0.300274714356;
    msg.rel_dir_x = 0.0595035392613;
    msg.rel_dir_y = 0.588257262441;
    msg.rel_dir_z = 0.594762619337;
    msg.err_x = 0.306226999197;
    msg.err_y = 0.32174755141;
    msg.err_z = 0.403900580554;
    msg.rf_err_x = 0.122259263742;
    msg.rf_err_y = 0.468134413324;
    msg.rf_err_z = 0.0997965896903;
    msg.rf_err_vx = 0.995622190904;
    msg.rf_err_vy = 0.586340247624;
    msg.rf_err_vz = 0.36134782217;
    msg.ss_x = 0.9779089867;
    msg.ss_y = 0.728183029555;
    msg.ss_z = 0.997026328234;
    msg.virt_err_x = 0.595784637282;
    msg.virt_err_y = 0.471672750171;
    msg.virt_err_z = 0.0410849811948;

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
    msg.setTimeStamp(0.92607335139);
    msg.setSource(51776U);
    msg.setSourceEntity(84U);
    msg.setDestination(14641U);
    msg.setDestinationEntity(145U);
    msg.timeout = 63419U;
    msg.rpm = 0.228277446194;
    msg.direction = 80U;
    msg.custom.assign("WXYSHNKNKAZFAQKMKSELRORWKSYCVIMIPTGVSRKXTTBCUFTMYEZXSWLECYCUFUFEPOHJVSZOZISXUA");

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
    msg.setTimeStamp(0.896242574467);
    msg.setSource(9347U);
    msg.setSourceEntity(15U);
    msg.setDestination(28378U);
    msg.setDestinationEntity(104U);
    msg.timeout = 60238U;
    msg.rpm = 0.442125802902;
    msg.direction = 223U;
    msg.custom.assign("HBTXXTDFTHSKLVCTSPXVLNQPZHNVUGFBPQPWSWUONKFCOHCKGJYOIYBNDUCIYTQZDNRIFTPZBYJIRXJABBVWBEDAMUTUCZNYWYOIGGADXEXWSKRRNGIWUAEKMCKKSZ");

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
    msg.setTimeStamp(0.573171287841);
    msg.setSource(28269U);
    msg.setSourceEntity(30U);
    msg.setDestination(47679U);
    msg.setDestinationEntity(169U);
    msg.timeout = 31391U;
    msg.rpm = 0.333436707082;
    msg.direction = 253U;
    msg.custom.assign("PQWEVCGDDOLVIVWCHBRKMAPULOWMKBTFOYNAYQZAZRXKRPUVDCBLLHJUDNTQLTHYTIEKN");

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
    msg.setTimeStamp(0.327299054427);
    msg.setSource(12955U);
    msg.setSourceEntity(248U);
    msg.setDestination(31698U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("ZHNPNUNHNCGSAIOPYSGPRDKMWVIU");
    msg.type = 170U;
    msg.op = 234U;
    msg.group_name.assign("UTRNMMRBAHCZFBSXKHDLKOEZSNWIKJMCPBEHYJWWUYCAWEIDINSSEQYYCVVUDFHRQHMWBVDXVLCRFKJOWTNJEBTUAVGSKLPNPLT");
    msg.plan_id.assign("EFQFQNDYEZCFLONDXCLJRKWMHRBJWULHAASNZIIGSGVTTJJMKJDPNGNUKEWZKNNPFMIRODVKRKTUUEAYUSQVRMXRLIMCMKROZYWORZECXXFAZYJCTCPSPYYPNZTGDLCIBWEWONYAGAPIDAGSBMHUONHDABQGWWEPTEUUKBESLCKHTGJFLQHWVRXHFJXGVGYBDHQUXFTMZCB");
    msg.description.assign("MUJQNBKHUBNOEICPNHLYEGA");
    msg.reference_frame = 165U;
    msg.leader_bank_lim = 0.727834308952;
    msg.leader_speed_min = 0.245501084234;
    msg.leader_speed_max = 0.0520071909341;
    msg.leader_alt_min = 0.920908350548;
    msg.leader_alt_max = 0.872411061264;
    msg.pos_sim_err_lim = 0.863758986039;
    msg.pos_sim_err_wrn = 0.803696623297;
    msg.pos_sim_err_timeout = 55965U;
    msg.converg_max = 0.788926554564;
    msg.converg_timeout = 59651U;
    msg.comms_timeout = 62450U;
    msg.turb_lim = 0.859824879068;
    msg.custom.assign("HOADLNMGUQWWLDPGBABYTFXROYUQBQLTXZVETTCTJCAHCVBGTATORPKUNTYGIZQFBSSHYDY");

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
    msg.setTimeStamp(0.0667840425119);
    msg.setSource(65139U);
    msg.setSourceEntity(8U);
    msg.setDestination(63050U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("QIWNDNWHOPGJAWMRTRYKLLALWYITJFYFBXKQVSRRLKESDRMXPJFLYOZLHFJQCAMUWPFUEXKQDKHZCDXBTZHRMRAHHNXKFRJTVPXCKADIYXUSVHJNBVQUWPIAQLGZZELXEVQZSBTZSGYEFKMGHSEOCIDMFKKBNDIIAOTSFFWBVYUUCBOBO");
    msg.type = 198U;
    msg.op = 83U;
    msg.group_name.assign("FNLCVLXISEIIFNMTQGCAUDLXHDCSYFLOPSEFBOVQARTQKIODKRDVTQPFCUKRVMCDHWPTVPJKTAZOYKUZCRGNIDDJRPOWGQQIHNCAZWSXBKRGQPUVWKEHJZDUJBY");
    msg.plan_id.assign("VLBJYLFEFYXWNCWARDQDERPBEZSTPHKHQVULTNTZS");
    msg.description.assign("BGVOHVLFLPZTJYDEALGNHRROCXMOZUNVSKVWDWARRAQULGCKIECBXJKMOQUBXQWIUGRJIWIZJTVHHCIPGNUXDTAHYSFBMGUNQLNZUEOGMYMCANYZPSEDZMBXOFMIAXTSLMQKEMCZQAZTPEDHXLEBC");
    msg.reference_frame = 251U;
    msg.leader_bank_lim = 0.45254503681;
    msg.leader_speed_min = 0.744666745367;
    msg.leader_speed_max = 0.129404196581;
    msg.leader_alt_min = 0.0647664020639;
    msg.leader_alt_max = 0.914912555908;
    msg.pos_sim_err_lim = 0.784496947043;
    msg.pos_sim_err_wrn = 0.481488852422;
    msg.pos_sim_err_timeout = 46355U;
    msg.converg_max = 0.868720924641;
    msg.converg_timeout = 28862U;
    msg.comms_timeout = 55435U;
    msg.turb_lim = 0.884062016025;
    msg.custom.assign("FZRHIJDEUBPNLKUGGKNFVAEAAQMEIAPTOUYAKPFOCGJULHJAXFCHXVIYZAZWERNHPPTMTJKNVJEEKXSDRVSCFYWXTWYNXSJSIGVOLDTDCPLUKHKOLNHNWOCCWZZJCMQWHWFOEVQBTFTKSKLQAGHAULTFEUYSYIVDYIXMUSISDGKRQMFCHIUMJBDXMJQXUJDBNPZGBZAEWBPCDQMRROLRZQFVIYVLEDMQSRPGNI");

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
    msg.setTimeStamp(0.71343986983);
    msg.setSource(62316U);
    msg.setSourceEntity(91U);
    msg.setDestination(27637U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("MTDWBIGKEPYFPCOEFWWYGUDRYPVMHGJKAVMNFKZALHQCHVGIRDWWBCXRXXLQZYJSLOFCVDMXCTIUEVSPHVLFSYMKNYABPECIOCMUWOKCOFUBIODAYQNARSQGRDNRJLLZYHNITKCPFXQKFHHXHDSMOMDQEAPVSGITHJBSVUOLMLTXQZERJQO");
    msg.type = 93U;
    msg.op = 27U;
    msg.group_name.assign("AHKYSYUUFXKBGYDUTOJEJJYYZLVJKHQRZFYHNKWXBIRMFDOLWBGLQVOLIAARPDSGMXBJSZHMVXTQHFWPNNRFNZCMWHKTJAXFTQLXPYCGVOXLAHWWLTBOMPOQIQRCKUMZOITPPEQCUSUWXOIADSURGMWEZEHPRFAVVLNRNZTWKSAJBMSVSIFDDZXBKEXOMLQBFTOCGEDUNQGKPBECGMCNCCHNSRNZAAKFEYIBDIWVZSEYPRCTIUGIHDJVD");
    msg.plan_id.assign("IHQTQDZYMBETXKHFEAOWWMIQVJLZOYPPSUTLUWQMLP");
    msg.description.assign("MXEKHAIGIVYUPTIHGDNVZPPSXEUBWHQYCJRKNUTJMOKWUVOILOWRVWSLWGABLOHEFGZFXATCDECWZYNCQEJGJJVLGCMPSLQSNDMETNLZMXBADBFOSYZBMWLHWBVDNXYXQHTQNQCKKUVYLPLXQXKKKFBRKTWOWEEFUXCDQ");
    msg.reference_frame = 45U;
    msg.leader_bank_lim = 0.422836439554;
    msg.leader_speed_min = 0.852245472914;
    msg.leader_speed_max = 0.679616664657;
    msg.leader_alt_min = 0.135840554425;
    msg.leader_alt_max = 0.52950970101;
    msg.pos_sim_err_lim = 0.173734033179;
    msg.pos_sim_err_wrn = 0.084090259355;
    msg.pos_sim_err_timeout = 65046U;
    msg.converg_max = 0.487633186584;
    msg.converg_timeout = 6414U;
    msg.comms_timeout = 16814U;
    msg.turb_lim = 0.498485722213;
    msg.custom.assign("ESNOYCGMDWDFBIJCWCIDIUTVPSOAWTVGJOIMBBKRZRZJAGSTOQMBKNQBDOGBGTCVLWAIBNMXLKFRFZCICSVTNRGKIJRMTUMEMNFHICVLBKVJLOZLOCVLPKKSEOSLGOZYAQKNQUKYAZJQWUEHYAYWHZEVXAUHSYRBRVPXHUIMDEXFXMXCBHVAPTTYTRHDUXPMGJQWFD");

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
    msg.setTimeStamp(0.163674557876);
    msg.setSource(16653U);
    msg.setSourceEntity(106U);
    msg.setDestination(8723U);
    msg.setDestinationEntity(193U);
    msg.timeout = 37462U;
    msg.lat = 0.0823695689116;
    msg.lon = 0.901530070796;
    msg.z = 0.429115828547;
    msg.z_units = 181U;
    msg.speed = 0.00808743730738;
    msg.speed_units = 161U;
    msg.custom.assign("ANXBVLKUAVZMCECQMPZBRDWWNWHLSTFKGOXPVZCJODXEMJYEDIRQTATEOTAREULYZUZUYCKFBHCXXDNIXKLGTIUHYGJCFNV");

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
    msg.setTimeStamp(0.44098380295);
    msg.setSource(5716U);
    msg.setSourceEntity(227U);
    msg.setDestination(21676U);
    msg.setDestinationEntity(94U);
    msg.timeout = 5247U;
    msg.lat = 0.864460443384;
    msg.lon = 0.797054270493;
    msg.z = 0.869146236531;
    msg.z_units = 236U;
    msg.speed = 0.450261575391;
    msg.speed_units = 63U;
    msg.custom.assign("XVBFINLCNORUFFKRTRXVHVYJTBWLRJNRMTZ");

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
    msg.setTimeStamp(0.517193193384);
    msg.setSource(12562U);
    msg.setSourceEntity(89U);
    msg.setDestination(18622U);
    msg.setDestinationEntity(95U);
    msg.timeout = 63939U;
    msg.lat = 0.0197900349625;
    msg.lon = 0.615473190934;
    msg.z = 0.35531265775;
    msg.z_units = 19U;
    msg.speed = 0.131352941587;
    msg.speed_units = 36U;
    msg.custom.assign("QKJWFKJAELOGAOIZCGBPHRXVAHJZTBWMIPGLSQVFOWRZWNBTSDQACDYXPHHQHRTXFAPCKTYZNY");

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
    msg.setTimeStamp(0.0563768091979);
    msg.setSource(41785U);
    msg.setSourceEntity(17U);
    msg.setDestination(25537U);
    msg.setDestinationEntity(234U);
    msg.timeout = 1026U;
    msg.lat = 0.494332914992;
    msg.lon = 0.808691798977;
    msg.z = 0.633641297036;
    msg.z_units = 226U;
    msg.speed = 0.668161031606;
    msg.speed_units = 251U;
    msg.custom.assign("MHZSOOPFIFTCGUDAOSYFWQKPNUASWTLJKHFTOJWGKOHMQBXKNUIPVVWHRRRKVPQLSZJACLJNDKXPQRADEMBXUONMLYNLTGXXWMOUAXVVY");

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
    msg.setTimeStamp(0.875420688027);
    msg.setSource(52665U);
    msg.setSourceEntity(143U);
    msg.setDestination(61373U);
    msg.setDestinationEntity(1U);
    msg.timeout = 6440U;
    msg.lat = 0.655292923057;
    msg.lon = 0.690305276388;
    msg.z = 0.692160629479;
    msg.z_units = 36U;
    msg.speed = 0.499163667419;
    msg.speed_units = 16U;
    msg.custom.assign("FXNBVIJTTEVDCCXRVNGLDXKZDSWODUBATEVKOQIUKBYGSIBDPLRALTNJJUHRNVZRZUDLWAWQKMGZROEPIOBQULHYYYGLPZBTTMYSPWNNWHIEFMQBFKEBVDYAAJQXKVQPEONGFYYQHCKSTSPBYOXETCQMJGVEQJWFSFCOHTZWXFCMWMPHZLHHAMFQGSIDDIOYUPBKKUURACGXJDFIZXAZRTGS");

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
    msg.setTimeStamp(0.601020078058);
    msg.setSource(16798U);
    msg.setSourceEntity(181U);
    msg.setDestination(55657U);
    msg.setDestinationEntity(107U);
    msg.timeout = 875U;
    msg.lat = 0.782655310258;
    msg.lon = 0.888910482737;
    msg.z = 0.550430560504;
    msg.z_units = 140U;
    msg.speed = 0.183032769796;
    msg.speed_units = 171U;
    msg.custom.assign("YCSJGTZMOVMHHOHKECCFMXUGQMEEODELAZFKJVORAINQJUPMBRXAFZFNUDBRGRGVDNAVFBLVHAASWRYBCEBLVKNOKGZVIHIYXBZGNNIVUJZRLUFMWTXSNVPRDTULOQWMBWYYPXSDFMCT");

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
    msg.setTimeStamp(0.312506782337);
    msg.setSource(34884U);
    msg.setSourceEntity(79U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(125U);
    msg.arrival_time = 0.645723954954;
    msg.lat = 0.07660398858;
    msg.lon = 0.0284762872487;
    msg.z = 0.081941296226;
    msg.z_units = 216U;
    msg.travel_z = 0.850469751158;
    msg.travel_z_units = 210U;
    msg.delayed = 38U;

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
    msg.setTimeStamp(0.902482026991);
    msg.setSource(17281U);
    msg.setSourceEntity(197U);
    msg.setDestination(57040U);
    msg.setDestinationEntity(151U);
    msg.arrival_time = 0.834729954453;
    msg.lat = 0.00417432911874;
    msg.lon = 0.177594199772;
    msg.z = 0.777132754614;
    msg.z_units = 168U;
    msg.travel_z = 0.645184856856;
    msg.travel_z_units = 53U;
    msg.delayed = 3U;

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
    msg.setTimeStamp(0.711468174135);
    msg.setSource(47937U);
    msg.setSourceEntity(242U);
    msg.setDestination(3611U);
    msg.setDestinationEntity(110U);
    msg.arrival_time = 0.961732142899;
    msg.lat = 0.336942575025;
    msg.lon = 0.525724751781;
    msg.z = 0.798281768394;
    msg.z_units = 174U;
    msg.travel_z = 0.0243567466195;
    msg.travel_z_units = 227U;
    msg.delayed = 200U;

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
    msg.setTimeStamp(0.397263822473);
    msg.setSource(36366U);
    msg.setSourceEntity(113U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.617520165091;
    msg.lon = 0.935151347765;
    msg.z = 0.363653972124;
    msg.z_units = 95U;
    msg.speed = 0.584999609186;
    msg.speed_units = 26U;
    msg.bearing = 0.818151148703;
    msg.cross_angle = 0.439005656661;
    msg.width = 0.878285906646;
    msg.length = 0.0457657045561;
    msg.coff = 3U;
    msg.angaperture = 0.514838405843;
    msg.range = 12239U;
    msg.overlap = 108U;
    msg.flags = 106U;
    msg.custom.assign("GCWTEHMRRPEKQHXDJYGYSWBQGUQSRHNDJEDEJRYCFVHNDTCTHYUHLZSZTBDJBIEAQGLRBCVANNODAVSYWAPQAZVLARUMPVIZBOJAJVBQIFKGPBUTJUNEIIBTQZSXUXTRREFKRXFHFCOAKYSSBPDVGTMVJQOYNDOLULOFOECPRHZWNZXYHEZXMWPQCKOGKSAIUVULJLHIPIONFFWIYXGIWZJMXKSKGMWZNCXS");

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
    msg.setTimeStamp(0.95453513083);
    msg.setSource(61130U);
    msg.setSourceEntity(132U);
    msg.setDestination(10744U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.764707571828;
    msg.lon = 0.729102185328;
    msg.z = 0.215443016934;
    msg.z_units = 80U;
    msg.speed = 0.0369917578321;
    msg.speed_units = 138U;
    msg.bearing = 0.02423649119;
    msg.cross_angle = 0.330494861105;
    msg.width = 0.39487574308;
    msg.length = 0.493530145986;
    msg.coff = 124U;
    msg.angaperture = 0.0178076673848;
    msg.range = 29085U;
    msg.overlap = 158U;
    msg.flags = 226U;
    msg.custom.assign("WTAUNJBXAUOINPRMPQHVSZBBAXIWWRSZEBTTSDYHUQNNVKTHQBZLTDMDTNCCNKDOZUTEYOJIPFUIYFGGZYUKQCFXLWNSGDSOVVQRAFHHUCIMUNYOJCPUTPJPRQRZCKQNEVDLZOXMMGYIHJAWWGGBRFJVVOPGTBBJYMCSYQZIPCFHEXLEIEYDUFRRJV");

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
    msg.setTimeStamp(0.877713468502);
    msg.setSource(41169U);
    msg.setSourceEntity(185U);
    msg.setDestination(5694U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.878699776193;
    msg.lon = 0.550261047907;
    msg.z = 0.901349110009;
    msg.z_units = 232U;
    msg.speed = 0.675715490082;
    msg.speed_units = 244U;
    msg.bearing = 0.676496268781;
    msg.cross_angle = 0.069785648391;
    msg.width = 0.35103886444;
    msg.length = 0.446094130811;
    msg.coff = 99U;
    msg.angaperture = 0.0812240461092;
    msg.range = 29414U;
    msg.overlap = 98U;
    msg.flags = 189U;
    msg.custom.assign("YLTBKWLYISGWYUMDYYHUGBFMQRMWXJAPSHYPFXURCWVHJSSBVATIGNBVHZBQEGTEXCOQJNOZMDBERPOXHZJHRZJAMAPPLBFZKTZWRAVUWISMGIEXKHNOVMTKATHTDQUPFELKNRDQDKZUJEVLKYXSMCYRJIJEFXQLVSOCGXREIIQNDZOJFGUNEPOGPBPHUCKQGOUWDLCIINVCDPLFDQSXHYJRKVWOQ");

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
    msg.setTimeStamp(0.911657954548);
    msg.setSource(24290U);
    msg.setSourceEntity(135U);
    msg.setDestination(4790U);
    msg.setDestinationEntity(198U);
    msg.timeout = 54530U;
    msg.lat = 0.244558066561;
    msg.lon = 0.499636687726;
    msg.z = 0.590502337084;
    msg.z_units = 11U;
    msg.speed = 0.566353839383;
    msg.speed_units = 91U;
    msg.syringe0 = 100U;
    msg.syringe1 = 119U;
    msg.syringe2 = 246U;
    msg.custom.assign("QVTIEPIGMRFDBTJAS");

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
    msg.setTimeStamp(0.890443816805);
    msg.setSource(45294U);
    msg.setSourceEntity(195U);
    msg.setDestination(35804U);
    msg.setDestinationEntity(78U);
    msg.timeout = 24523U;
    msg.lat = 0.607960621112;
    msg.lon = 0.973624264205;
    msg.z = 0.927599635303;
    msg.z_units = 87U;
    msg.speed = 0.535437886119;
    msg.speed_units = 168U;
    msg.syringe0 = 59U;
    msg.syringe1 = 188U;
    msg.syringe2 = 194U;
    msg.custom.assign("HYPMUURXLXZTCNVKVCLFRLXCUYWRZUKXWQTYZFJBLTISOISHGEZWBTCCINEMSLWLQTVOGCBRRVPIGYDQKVTFUMIEPGJSMLB");

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
    msg.setTimeStamp(0.158959294944);
    msg.setSource(62177U);
    msg.setSourceEntity(62U);
    msg.setDestination(28057U);
    msg.setDestinationEntity(59U);
    msg.timeout = 48489U;
    msg.lat = 0.494943457801;
    msg.lon = 0.270940815401;
    msg.z = 0.498229274791;
    msg.z_units = 179U;
    msg.speed = 0.0107685108952;
    msg.speed_units = 107U;
    msg.syringe0 = 127U;
    msg.syringe1 = 189U;
    msg.syringe2 = 156U;
    msg.custom.assign("ONHCQKQEHBRZLPUXJPQYLGPMWEGWHTCIWZCWNXOCUXQKJZIBFTNJLXLXJADYSTA");

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
    msg.setTimeStamp(0.829382421727);
    msg.setSource(16509U);
    msg.setSourceEntity(76U);
    msg.setDestination(49414U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.510112230613);
    msg.setSource(38213U);
    msg.setSourceEntity(27U);
    msg.setDestination(3762U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.387730917084);
    msg.setSource(46823U);
    msg.setSourceEntity(172U);
    msg.setDestination(17158U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.471497221612);
    msg.setSource(39602U);
    msg.setSourceEntity(143U);
    msg.setDestination(3502U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.65665076144;
    msg.lon = 0.957755384538;
    msg.z = 0.88248560799;
    msg.z_units = 207U;
    msg.speed = 0.165547252524;
    msg.speed_units = 25U;
    msg.takeoff_pitch = 0.565980904029;
    msg.custom.assign("TTPBBIXYCSHIVOHVWJFDHSBHQMEVYKVUFNEKGRDIPRLETVJRFVZQBDUELGSDKVHQHMBKLRRVOPHTDPOUKXXGNLJNZVEYBIYAJIZMVUWAPEUMOPWKZGOTJEXATUUFNYZXPAWIXLYBMKLXZWFMQFKEINDGECKWBMASNUWUCMGIFQCZJAGFBNDYQWGDROQCIZDQOKACS");

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
    msg.setTimeStamp(0.423276624833);
    msg.setSource(11232U);
    msg.setSourceEntity(229U);
    msg.setDestination(46662U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.287727237271;
    msg.lon = 0.522314569759;
    msg.z = 0.16687822422;
    msg.z_units = 186U;
    msg.speed = 0.723285610554;
    msg.speed_units = 148U;
    msg.takeoff_pitch = 0.479473896374;
    msg.custom.assign("ALTZYTLHWETGPDROJQEVWXHSBOJKAYOVXEUKWIYMVBLVNBTZAJBDLPKTUPMMKJUBHTRINQG");

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
    msg.setTimeStamp(0.581742163495);
    msg.setSource(51447U);
    msg.setSourceEntity(204U);
    msg.setDestination(8772U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.133652382999;
    msg.lon = 0.430371789897;
    msg.z = 0.625291876286;
    msg.z_units = 176U;
    msg.speed = 0.175287325469;
    msg.speed_units = 163U;
    msg.takeoff_pitch = 0.810464495272;
    msg.custom.assign("HWOLUQBIQHJMHQJGVNPKREVLKODJIAFSMZVXOWERGULCBT");

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
    msg.setTimeStamp(0.723983700637);
    msg.setSource(4291U);
    msg.setSourceEntity(143U);
    msg.setDestination(52898U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.0133226005941;
    msg.lon = 0.855053065594;
    msg.z = 0.891265993178;
    msg.z_units = 158U;
    msg.speed = 0.264575129428;
    msg.speed_units = 194U;
    msg.abort_z = 0.743596852504;
    msg.bearing = 0.204662128113;
    msg.glide_slope = 211U;
    msg.glide_slope_alt = 0.205898529392;
    msg.custom.assign("OBVAOMMUEZLDRTWVAVGGRMKMNUUQTPLKWOVCLJZQAMUZOESZSMBTBIDRIZRWDPHRZLXQGUSQKJJVHAUSPETOGFOYHRHZKGGEPCYKINVNYJCNDXCHYJNXFNKTFLUALGPTEHPQQTYAFFAUSOEDYEJOBYCOLCBGKNXVXBFIXZRHMCWFIQQ");

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
    msg.setTimeStamp(0.807253023909);
    msg.setSource(36820U);
    msg.setSourceEntity(213U);
    msg.setDestination(16051U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.255244965629;
    msg.lon = 0.864013358038;
    msg.z = 0.934275409064;
    msg.z_units = 45U;
    msg.speed = 0.881544588344;
    msg.speed_units = 165U;
    msg.abort_z = 0.197880018444;
    msg.bearing = 0.0590541782922;
    msg.glide_slope = 198U;
    msg.glide_slope_alt = 0.909925954182;
    msg.custom.assign("POLAEACIJBKRZPPUKQGUUHPZSAKFTLFWNDKXHFPLYFTXQBBJVMVJIABKEHCSCPUSOYKVSGWAYPCLDLAJDWTFGZUEQWMLIIERYZNYDZGDYORRXTNYBUKYJXICDVUMVOBXEBOXZMVJBICMWSFBJEHI");

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
    msg.setTimeStamp(0.732835793108);
    msg.setSource(20710U);
    msg.setSourceEntity(24U);
    msg.setDestination(36058U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.829592282574;
    msg.lon = 0.168447263775;
    msg.z = 0.484399524467;
    msg.z_units = 57U;
    msg.speed = 0.610809169999;
    msg.speed_units = 138U;
    msg.abort_z = 0.0953294260676;
    msg.bearing = 0.371126458234;
    msg.glide_slope = 158U;
    msg.glide_slope_alt = 0.533269693284;
    msg.custom.assign("OTLXSINDMWCBKBGIVSYYDFYJLHAJYGUADYKGLQRAKDIFGANZPMUXTXCAWYDSFECZULOPWIFBPNBHWOXUUNLAMXKWZCTNQOBWQZTTMVHRQSIZSZVPWWGFMOCOHNULHHMCNVZOFKXTLPPABXYVDJNCXUMPJIFZGTIEWSFHKCBVXAGDEJYNDKSVROJBIMECHHUQKUTJBUFGMRVNGEBKGFJEEPZQ");

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
    msg.setTimeStamp(0.00294033345812);
    msg.setSource(58821U);
    msg.setSourceEntity(41U);
    msg.setDestination(12083U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.991487533848;
    msg.lon = 0.404168758824;
    msg.speed = 0.689807416771;
    msg.speed_units = 30U;
    msg.limits = 193U;
    msg.max_depth = 0.72659166906;
    msg.min_alt = 0.547918564951;
    msg.time_limit = 0.677836188114;
    msg.controller.assign("UCJIMCTWPZZFEVGUOYQCOISRDRSPECHQSKAREFXMHACHYVHSY");
    msg.custom.assign("FDQVFFBJRIJIYJBAEVFAQXCFBGMSKOWSXJZVPMWRSCWRBYKQIUVNXAQGOOLPMFCJIOKYNYPLNXUQPYZSHKZBSIOEAERWAZPRIADJKSTNVHGUZATBA");

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
    msg.setTimeStamp(0.622042401105);
    msg.setSource(51619U);
    msg.setSourceEntity(226U);
    msg.setDestination(6437U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.684663112403;
    msg.lon = 0.356868183653;
    msg.speed = 0.882556379581;
    msg.speed_units = 168U;
    msg.limits = 83U;
    msg.max_depth = 0.382759882736;
    msg.min_alt = 0.0264054819459;
    msg.time_limit = 0.169191750946;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.928499487372;
    tmp_msg_0.lon = 0.957666462505;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TSRRFYMHBQYKZLLFBZZJYATOBBQGSZJLSMIQJOLDNBKEEHBJVHTXWNUCEOFPNXSLQOWVTXIDBMWBOPDYOQCZMITRNUHVEKZDABXAVXJLRDINKYGCGHWDUBRRYJCVAFEFCJOHTYIVUEJKCTXIANQXQZMMTYENXZHZPHTKUNAFGSRYMPWUHVLOKKSQUVEWOKIERAGXPE");
    msg.custom.assign("ZZJDZPXUSRAEIMJSJKDQUEGLYFWCCVLPSAEYKFJOPLDUVDNITTXGLERDNPELKYIWQOJUHRKHPU");

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
    msg.setTimeStamp(0.930607303391);
    msg.setSource(19088U);
    msg.setSourceEntity(0U);
    msg.setDestination(57235U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.413518913155;
    msg.lon = 0.861421613866;
    msg.speed = 0.484281490888;
    msg.speed_units = 144U;
    msg.limits = 101U;
    msg.max_depth = 0.0186541087194;
    msg.min_alt = 0.0103476051201;
    msg.time_limit = 0.808316290957;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.813249416555;
    tmp_msg_0.lon = 0.705239259103;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GJKBHPGGWTYLSZAIWWLNJLEVQUGFAFDVFMRWADTMOQJCSYBHNHSXTUBTWPOUGESZCDCDLTLFFXCXYSBCEXLQQOMIZJINWRHVZYHGRNCOPIAPZXDPQFQCKZHDNUEJISHWLAJAOKZGJTANUAIMQ");
    msg.custom.assign("SPOPXFFIJKJTDOHENSVUDEZQYYBQKJSRMAUDVCCINOQNMKHYYZMRPLALWJITKPRSLTSHKXSLGBCIDDRCWULGESVEUNOJOMPLHZRQJAZGOIOCBRSSAUGAQTIUFQDGNRBRBAEWPETTDHCXRDSVGMZQHYYJMBRNDEWHAENTCYNGVVCOWBFXKYNZXTAHFTBNYIMAGWJXUEPZVFWPOMLCFEMXYIUBZOXHVGQFZDAXTVCJWUBFKLKQPFZ");

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
    msg.setTimeStamp(0.193036539051);
    msg.setSource(6768U);
    msg.setSourceEntity(227U);
    msg.setDestination(34361U);
    msg.setDestinationEntity(174U);
    msg.target.assign("ZVGSYEIZVYWZVTLCEFAYZSXKZLL");
    msg.max_speed = 0.517676930637;
    msg.speed_units = 35U;
    msg.lat = 0.318608848466;
    msg.lon = 0.903898845222;
    msg.z = 0.894961607817;
    msg.z_units = 101U;
    msg.custom.assign("RHUQIMWROVKZHKCGDCNAZLIOUXYCHQSMVSKBEBPUGPZEUKHEIMTNOYITGSKBTEHMITUOELGAIVWDTLSUXZAFJNSVVCCTHRKDPZLIUHJGWLDNTCQRDKPFMERFOWVCEGNRJQQYALJFPZRYUMFOSCXTJFPBNLWZWJIBVYM");

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
    msg.setTimeStamp(0.092549877226);
    msg.setSource(26337U);
    msg.setSourceEntity(52U);
    msg.setDestination(47062U);
    msg.setDestinationEntity(238U);
    msg.target.assign("FRLTVVQJGCQPTHTLEAJZOXMAFJOVJHYYERHKYZIHIEPAGPSDQQSDJWCRE");
    msg.max_speed = 0.314678059035;
    msg.speed_units = 120U;
    msg.lat = 0.206762443267;
    msg.lon = 0.138814824164;
    msg.z = 0.133987724211;
    msg.z_units = 184U;
    msg.custom.assign("XUSKOFAVZQAKTOIJJVPJGAJVZBMSKYFNWFDSJPTJCMPUJCJTOXZOXRRKBDNRFRTKDQRPVWSFFMAXLAUEZGWMHEHIXKNWBHLEIRIVVYAAYLKCOLBWPDHHSGRGTKGVDOOQTSKLCTFUMXHZWYYMEIFAKPSTXYDTYGEUCBYWXNFZQRRQNLCUCXTMAZLHJERBIBQPE");

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
    msg.setTimeStamp(0.635745147323);
    msg.setSource(7189U);
    msg.setSourceEntity(225U);
    msg.setDestination(45806U);
    msg.setDestinationEntity(226U);
    msg.target.assign("ONQNSETCPCPVILANFVPOZHLZMZVQIFYEGLRGXAUUWHAYLRQFUOVJIZBXYJIUNSCBMOFDDQRFIYYBLTEFMTRDZGDIUXYOQHLRURCC");
    msg.max_speed = 0.752732413309;
    msg.speed_units = 106U;
    msg.lat = 0.480460944273;
    msg.lon = 0.916933478128;
    msg.z = 0.418805127423;
    msg.z_units = 197U;
    msg.custom.assign("PTLZSZSPOYNTIBUARIDZAXLGFLGRVIIMTPXPMHYEJRPGHPVHSEVODDYCGDVWCTKZXFUQLMSMCGAQFSYMXFJXDEWIBTRBBYCLJZLUIGCTEDHGCGBKNNFGNYSUWVAGNEWO");

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
    msg.setTimeStamp(0.218721824233);
    msg.setSource(6091U);
    msg.setSourceEntity(102U);
    msg.setDestination(49024U);
    msg.setDestinationEntity(1U);
    msg.timeout = 44369U;
    msg.lat = 0.834115032202;
    msg.lon = 0.456768056707;
    msg.speed = 0.48572417684;
    msg.speed_units = 143U;
    msg.custom.assign("LQSOEKTLNHIGDKCOKTGYILPWYYFIWPOZKMPNNCFDQVYMRFMURBVBPIJKWYEIAZJFWMUPCELDXWQHTXXXKHUQBEHUNYJNQVJETHRXFLFGPRGJBVNYANDOQEBNZKHGIWOLDXUAAMSQDOODWCRGDFBK");

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
    msg.setTimeStamp(0.946630821867);
    msg.setSource(17195U);
    msg.setSourceEntity(201U);
    msg.setDestination(50108U);
    msg.setDestinationEntity(241U);
    msg.timeout = 38965U;
    msg.lat = 0.0202007613906;
    msg.lon = 0.452726147465;
    msg.speed = 0.919674754249;
    msg.speed_units = 133U;
    msg.custom.assign("JGOOUFAPRVPUFEFCPOOBHNBODHLZNDYQGYVQDYRDTRAPPFSZVIVEKYQTQHXEOTZZBBNUXLYMVXHJDATOKSDPTSWBSJIVAAELSU");

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
    msg.setTimeStamp(0.987029900426);
    msg.setSource(60288U);
    msg.setSourceEntity(148U);
    msg.setDestination(7495U);
    msg.setDestinationEntity(181U);
    msg.timeout = 2026U;
    msg.lat = 0.164906333502;
    msg.lon = 0.24015229873;
    msg.speed = 0.599122720347;
    msg.speed_units = 25U;
    msg.custom.assign("RYTTXZLHJECFCUKOSNDHQLBVWZDZWDTOIUTMEPXHTFLEXJBRRZWUNYAALPGHOIHULMVVONUILPKHCQWSUMPIARGFLMQNEHRXIFMKSSSQTKOYBQWUAXWGRVTRXBZSXQWGDJPHZUAMABIFMCDAQQEJYEZUCVFZMTSJAJYYXKOANEWLPEEMKSKIGOSXKT");

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
    msg.setTimeStamp(0.442410434192);
    msg.setSource(31587U);
    msg.setSourceEntity(186U);
    msg.setDestination(7602U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.620061566039;
    msg.lon = 0.617933473922;
    msg.z = 0.470007713222;
    msg.z_units = 51U;
    msg.radius = 0.95031846462;
    msg.duration = 47248U;
    msg.speed = 0.104875300238;
    msg.speed_units = 71U;
    msg.popup_period = 15027U;
    msg.popup_duration = 23875U;
    msg.flags = 129U;
    msg.custom.assign("UVGMHSFAJCQKACAMTLYTZWKLGPPWCLPLKFOBFXPQRGKTSDHWMYKDKXRHUUQSHLNOZHZIQE");

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
    msg.setTimeStamp(0.187247478381);
    msg.setSource(39438U);
    msg.setSourceEntity(187U);
    msg.setDestination(37839U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.869727084614;
    msg.lon = 0.630378479274;
    msg.z = 0.788283138551;
    msg.z_units = 219U;
    msg.radius = 0.446122178218;
    msg.duration = 38631U;
    msg.speed = 0.261572575809;
    msg.speed_units = 167U;
    msg.popup_period = 30909U;
    msg.popup_duration = 26923U;
    msg.flags = 228U;
    msg.custom.assign("MAFDFLPCEBCBGWQCYMPJTQVQRVEDGKZWNNYIIEDSPOOLVCXEMNUQBISMLFBGZTMENFSIJWBWNFKUTKBJWWKTQSKOGAOLJAEDRLZHXMDSSGJPOIVLVFZVZRGHVCLMHFCLKCCXRXPSPHBITXSKEUARSHVYOEXYWPDQITUDJCYIXJKOREQYZPTRDZUSRXVGTMJYAOQKYXATZNNBIAU");

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
    msg.setTimeStamp(0.202203372838);
    msg.setSource(42039U);
    msg.setSourceEntity(116U);
    msg.setDestination(54919U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.390832023933;
    msg.lon = 0.334355817;
    msg.z = 0.222047971628;
    msg.z_units = 154U;
    msg.radius = 0.627499151517;
    msg.duration = 22680U;
    msg.speed = 0.249373359978;
    msg.speed_units = 58U;
    msg.popup_period = 20727U;
    msg.popup_duration = 37647U;
    msg.flags = 221U;
    msg.custom.assign("PIFKCYSRBUHYBWQKNPKLKEEBMVIVNVYZTIZFGOBZCAXAVTAVOTFKDUGATUJDPXXSCNQWNELNYAETRZQDFJXDIRDRJOUAVXGQMZPNSDQGAHRK");

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
    msg.setTimeStamp(0.549531148985);
    msg.setSource(36188U);
    msg.setSourceEntity(61U);
    msg.setDestination(43542U);
    msg.setDestinationEntity(6U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WAJCNOTECJFERMBMZTHCUBONAARILXKYYUTHYUFGWVXTAPSTLEMSRTFXLCVBQXKIPZBFQANVGCYNFVZUWXZAQHQFMIFHHUMHQUWIVPXVITXULJAMGPSRCNVWWDEVDWDLFOEGFZUZKIWYBZRZIPCLTONJMRJPPDBAIMJXISYMKEDYJKTGLXOTHDJNJYKWSPYCKVBOFHEDHCGSDNO");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 2631U;
    tmp_tmp_msg_0_0.custom.assign("DPNEUSPQKOVLCUKBYMOYFXGNUWIREBCPXYKQOZALDXYZAWKKLOVUQVWZFRVXXMRDHRIQGJRNYEMEMSJNAKLYZYDEJATVSEWHMOXHOPUQNBUIYQMAETWAXADZXUVHVXCTWLSSBGBIOSPITSMPRTIHQUZQOFYCRGDGMB");
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
    msg.setTimeStamp(0.396658637396);
    msg.setSource(45935U);
    msg.setSourceEntity(123U);
    msg.setDestination(35198U);
    msg.setDestinationEntity(9U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("LGYPHHSUXNPOIYNQWVHVEOETBSIDLVUV");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 64207U;
    tmp_tmp_msg_0_0.lat = 0.18244606457;
    tmp_tmp_msg_0_0.lon = 0.885996045691;
    tmp_tmp_msg_0_0.z = 0.0929364026847;
    tmp_tmp_msg_0_0.z_units = 214U;
    tmp_tmp_msg_0_0.speed = 0.824898072658;
    tmp_tmp_msg_0_0.speed_units = 200U;
    tmp_tmp_msg_0_0.syringe0 = 220U;
    tmp_tmp_msg_0_0.syringe1 = 242U;
    tmp_tmp_msg_0_0.syringe2 = 18U;
    tmp_tmp_msg_0_0.custom.assign("TXDIOYTBTCKZQJBRLPTTOCPYXAIMRFPDOYCNPOWNMJEMZHAZVZHTMQCCZOXVPJRUHIZJFRQAGGYQHIFCZFWQDGSPLYLDKRILEBWFQYFLWLMAEIKMNUFINWYPYAUKNUVDHSU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FormationEval tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.err_mean = 0.693274187374;
    tmp_tmp_msg_0_1.dist_min_abs = 0.458664716682;
    tmp_tmp_msg_0_1.dist_min_mean = 0.882217667178;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.880328779473);
    msg.setSource(35177U);
    msg.setSourceEntity(164U);
    msg.setDestination(53349U);
    msg.setDestinationEntity(121U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BCUODBFYTLPGOTSKFWORAJUUYLJHFNLBTLMRPPKVHPVHIOWLZWWXSHNVGVXFNBDKPEQWRXYMNBLVQEXEQCGCDKFKIGGURCIAPJIOJXMQYQTDSETGKCTPCFAVZKOZXVMGWYZJXTJFNODJBIZAVAMINQCAUJKFJNBHHRANZDA");
    IMC::Alignment tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 29565U;
    tmp_tmp_msg_0_0.lat = 0.579580776057;
    tmp_tmp_msg_0_0.lon = 0.138691566669;
    tmp_tmp_msg_0_0.speed = 0.478301822685;
    tmp_tmp_msg_0_0.speed_units = 136U;
    tmp_tmp_msg_0_0.custom.assign("FBLMDTAAADNSEOSBXEXTHQCVZOZUJRVHNEWSRTDQNZL");
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
    msg.setTimeStamp(0.7002511477);
    msg.setSource(50830U);
    msg.setSourceEntity(89U);
    msg.setDestination(123U);
    msg.setDestinationEntity(65U);
    msg.timeout = 44604U;
    msg.lat = 0.964900933014;
    msg.lon = 0.340240919412;
    msg.z = 0.993526877906;
    msg.z_units = 193U;
    msg.speed = 0.292685918002;
    msg.speed_units = 105U;
    msg.bearing = 0.617254752032;
    msg.width = 0.80374494396;
    msg.direction = 150U;
    msg.custom.assign("VIJKUEMWQVDAEJXGBHWMIAOMDWVZRPLMKTOFYNCESMLELWQQYBDHBGEONJITSFJHJWBBNVASBNOTOIWCUVDZTUCLLNFGEZQYHVBQIPUYDWTGKKVERGXBSYMQHPOTKPYADGJIULOUTNMHHXUNRACICOSZYULRMURVTXQDXAPGACQPRFTSMHBSECVOIRCRKDWNDCHRZFDWWZBUYJFGXPNKLKLJPXGSNKCLJIJQPEKXYSFRAIX");

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
    msg.setTimeStamp(0.501671507524);
    msg.setSource(40485U);
    msg.setSourceEntity(131U);
    msg.setDestination(56622U);
    msg.setDestinationEntity(98U);
    msg.timeout = 6385U;
    msg.lat = 0.117264010145;
    msg.lon = 0.859220777545;
    msg.z = 0.198727555379;
    msg.z_units = 104U;
    msg.speed = 0.0790192580812;
    msg.speed_units = 73U;
    msg.bearing = 0.753067948542;
    msg.width = 0.111443832867;
    msg.direction = 93U;
    msg.custom.assign("EQHGYXGSRACIVZQOGBPEPHEDYKSMANYYWAEFUKVBBVLNIGCXLHYCUDLTPUZZKLBGCDLLNTKCRRNETVPEKAMWQIOLQVMDDIUNKHBBKYUNESMYISUILMVCHEXWHZPCSPRMTVAGTWJAMIOJMWFFJIJPXQYBRFEYSCOKZFNALZOJYCFVIWRKFBGBQJURDPJLSXW");

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
    msg.setTimeStamp(0.964468233702);
    msg.setSource(13349U);
    msg.setSourceEntity(166U);
    msg.setDestination(3609U);
    msg.setDestinationEntity(102U);
    msg.timeout = 11196U;
    msg.lat = 0.396495134701;
    msg.lon = 0.175295853233;
    msg.z = 0.447496210242;
    msg.z_units = 19U;
    msg.speed = 0.217316189461;
    msg.speed_units = 98U;
    msg.bearing = 0.339151034696;
    msg.width = 0.226075387816;
    msg.direction = 46U;
    msg.custom.assign("KRVUHBCODSKCWLSVPKWRKSZQUYRAGYLEHXVTGJPMMIQQHVAOOXCDKUHNWZHNIGHQIRSEFKEQLCWYOGWPKELLVDCJEYBSBSBGOANQXTXVRJOCCTNAUU");

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
    msg.setTimeStamp(0.570959305955);
    msg.setSource(20743U);
    msg.setSourceEntity(63U);
    msg.setDestination(37077U);
    msg.setDestinationEntity(5U);
    msg.op_mode = 127U;
    msg.error_count = 102U;
    msg.error_ents.assign("KMMIGSZRLMQAZVRMSLDCSWDSQKRYRIXOBBCZEMBPLPZTZXQGDECFXWMKNQBXVTAHCICFLQZYENIOJKJZEXAUTVPLRGGLRTCWJOOPFZDPNXYDJDRVWBTSXDFJQAVBUNJGFOY");
    msg.maneuver_type = 1586U;
    msg.maneuver_stime = 0.390790475467;
    msg.maneuver_eta = 42945U;
    msg.control_loops = 3017357035U;
    msg.flags = 109U;
    msg.last_error.assign("ORZMCMTVNWXKVPGMNGPRGUKWAZSSWVWPNUFBJMFTFYJBDSUZFJQAITBCRWKQQDXCFHMLMIZUKROGDPDIETMGTSXCNNUUNPAWCFDTRJETYOKXYEVVBEHLALBDPEILFKCNOXIFWOQQUCVVNISLMMKAKPXQLUJOBJJAVPPYJZ");
    msg.last_error_time = 0.747930827342;

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
    msg.setTimeStamp(0.322418662825);
    msg.setSource(63931U);
    msg.setSourceEntity(118U);
    msg.setDestination(62729U);
    msg.setDestinationEntity(28U);
    msg.op_mode = 70U;
    msg.error_count = 157U;
    msg.error_ents.assign("SMVCSKWWJVUB");
    msg.maneuver_type = 55232U;
    msg.maneuver_stime = 0.550192379055;
    msg.maneuver_eta = 58062U;
    msg.control_loops = 2932512830U;
    msg.flags = 244U;
    msg.last_error.assign("KKEVEXEHGLIVZAGPPRMPCNNVKNOMCSFJBAYKHBWUJSBKBFZQRSFREJWWEWOYGEQMZTGLOODGFBPVDQLMMAIHFWDDRQYQPSYRVZXETGKDEJWHIOYKCYPXASNLX");
    msg.last_error_time = 0.398010546043;

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
    msg.setTimeStamp(0.229037155704);
    msg.setSource(57662U);
    msg.setSourceEntity(168U);
    msg.setDestination(16099U);
    msg.setDestinationEntity(127U);
    msg.op_mode = 112U;
    msg.error_count = 85U;
    msg.error_ents.assign("HGWSVTESNOBBVTWLDIW");
    msg.maneuver_type = 26557U;
    msg.maneuver_stime = 0.995386135584;
    msg.maneuver_eta = 6873U;
    msg.control_loops = 3051250029U;
    msg.flags = 101U;
    msg.last_error.assign("HLLMPKGBOITTKPXKBUTYYOSHDMMLHOTFNURRIFLLHBCRLZZTSHOVGKCSMENWQOBPIUWAVYEFQWWUBAVUZIOBGHUUBFLEAANNQYKKDSGEMBMQGCP");
    msg.last_error_time = 0.356496989283;

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
    msg.setTimeStamp(0.109662462296);
    msg.setSource(44329U);
    msg.setSourceEntity(110U);
    msg.setDestination(21002U);
    msg.setDestinationEntity(175U);
    msg.type = 92U;
    msg.request_id = 57999U;
    msg.command = 127U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.404076164164;
    tmp_msg_0.lon = 0.383786726357;
    tmp_msg_0.z = 0.919215858698;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.speed = 0.497833293681;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.bearing = 0.965454129846;
    tmp_msg_0.cross_angle = 0.589046654461;
    tmp_msg_0.width = 0.187018612302;
    tmp_msg_0.length = 0.978046868479;
    tmp_msg_0.coff = 237U;
    tmp_msg_0.angaperture = 0.777931117469;
    tmp_msg_0.range = 30260U;
    tmp_msg_0.overlap = 112U;
    tmp_msg_0.flags = 11U;
    tmp_msg_0.custom.assign("TTAERNFCIQYMDEWGQEKTHGJOCULQUPZBFOWZCUECIIWKDZYNNNHKUQLKEWUBXQFXQVSYNLFJALCYIOAMACXGDPAAGOMRJYCOVSGMYPLRDRWHFAKVDAXJZFMJSRLTOKXRPVVPNIHKPMNNGZJBHDZTRPJWYUDYGXDVDBMHULRQWETPKFCJHWISTOVTWFLYWIOGBEQQHQXBUUSCXEOBVU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 54506U;
    msg.info.assign("OUEMTIKKEDKYPNUUTLZSBIKGIVPAGTIRGSUEPQWPSCXYNPOZCEQRSMQRWEBSKYVSQCSIBYWBZWJUSGEWQFWRGZHQJACMVTFZIRRYKJHTZULXT");

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
    msg.setTimeStamp(0.548509359947);
    msg.setSource(47419U);
    msg.setSourceEntity(105U);
    msg.setDestination(30122U);
    msg.setDestinationEntity(226U);
    msg.type = 84U;
    msg.request_id = 49381U;
    msg.command = 170U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 26595U;
    tmp_msg_0.lat = 0.349187094966;
    tmp_msg_0.lon = 0.337143472254;
    tmp_msg_0.z = 0.957110946628;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.amplitude = 0.486281760444;
    tmp_msg_0.pitch = 0.609983484262;
    tmp_msg_0.speed = 0.181630621101;
    tmp_msg_0.speed_units = 28U;
    tmp_msg_0.custom.assign("QYXHUWDKIIERMYPBIEPQNQLFHYOZKMOHTVPQFZFMWRSXYSUMIGOPLNXAFVENZUUTDWRKNBQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22454U;
    msg.info.assign("SSQPRDJQKRQWQMCYZUYFJNJFCOADKNDHYAPKSFRANBXICIUHOCZLGTQIGQMKEYRGJKCLAUTJTBMOKVXCDVNVJDTYSBMHZHTXHNNKHOLPUDMTIGXEKXZCXFEZGTXREQIFWPMWCS");

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
    msg.setTimeStamp(0.926838821473);
    msg.setSource(18516U);
    msg.setSourceEntity(156U);
    msg.setDestination(41209U);
    msg.setDestinationEntity(126U);
    msg.type = 194U;
    msg.request_id = 10504U;
    msg.command = 94U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.0156987394916;
    tmp_msg_0.lon = 0.447526977793;
    tmp_msg_0.z = 0.724195847838;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.speed = 0.891621313698;
    tmp_msg_0.speed_units = 74U;
    tmp_msg_0.bearing = 0.175879645985;
    tmp_msg_0.cross_angle = 0.400159319519;
    tmp_msg_0.width = 0.678688673351;
    tmp_msg_0.length = 0.0673412145972;
    tmp_msg_0.coff = 31U;
    tmp_msg_0.angaperture = 0.455317823984;
    tmp_msg_0.range = 48767U;
    tmp_msg_0.overlap = 38U;
    tmp_msg_0.flags = 63U;
    tmp_msg_0.custom.assign("COYJUWTDWBXRBPMQBBOAKZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58844U;
    msg.info.assign("BDMRGISODKZKGEPYHJULSGLESQXTECBYUNVJBRRXCMVHRERXHQPHJVZQWNDRNMASMOLBAWFMHWFCTDLYVGGDLZLIFQZKXOZWCNMZNPFFKIUCSHTDYJPZBLSTVVDAOCWUTKCYXLVVMENMSGIWMKCXUOFKQLWNLZBYTYRURTJKDQENPYWJVEEQQKOIDRPAFFCKVBIAWONUHGEXOX");

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
    msg.setTimeStamp(0.126416051545);
    msg.setSource(21122U);
    msg.setSourceEntity(194U);
    msg.setDestination(30362U);
    msg.setDestinationEntity(157U);
    msg.command = 35U;
    msg.entities.assign("RTHPWXYSNKPUZLTJYBKPASQFWPEQNOXYHTXEFWBXEYQAWQELPXWBGHVZRDTCKCNFUTRV");

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
    msg.setTimeStamp(0.404732135364);
    msg.setSource(63063U);
    msg.setSourceEntity(131U);
    msg.setDestination(57624U);
    msg.setDestinationEntity(96U);
    msg.command = 160U;
    msg.entities.assign("UOUKSIQATGCAVAZIZPLCRBTSKERPXD");

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
    msg.setTimeStamp(0.0395022376575);
    msg.setSource(17341U);
    msg.setSourceEntity(110U);
    msg.setDestination(20809U);
    msg.setDestinationEntity(216U);
    msg.command = 50U;
    msg.entities.assign("IUONFJYAFPAVERKTZXSGTKIQXBXYKOBBHINFTWW");

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
    msg.setTimeStamp(0.102369071017);
    msg.setSource(33007U);
    msg.setSourceEntity(7U);
    msg.setDestination(3336U);
    msg.setDestinationEntity(166U);
    msg.mcount = 65U;
    msg.mnames.assign("TQDYNGZUIZSWXZKCTJXSIEHTYOCGFRPNJOACSXUCDQDBHQLMVCFLWZQBVVBHNZVLMJWIVCFGNYGVHNAYPEAULELIBXIRYKTPXRLKYFEQIEKWVQESFFYKOUZJOEJAABPRPXSCDMPMYZXGJERDMOXMLWYQUNNRDCIDAHDYUDUFJGEHGICROSFSWAKKTKNBQJOTZNEHPRHBVUZSFQOWUTHMDJFSMMCJLWHTVQAPWIGTRNGSBXXUM");
    msg.ecount = 23U;
    msg.enames.assign("VWXCRKCKYSNHNEHLRBOBCLCPBPONITYTDQHVGPLUOZWJIILAXNCAXHRHYBVXVJXAOGDYKWTQJQRDZFTKKUXESRUYQFNJQHFKPZZKCTPFZMXPQZMQREOQLFSPAGWHANHNDWGDYSFTLVEWFOWRMSDPXKMQYMJPAVSSTEAUABRUBUTBCBZDC");
    msg.ccount = 199U;
    msg.cnames.assign("IBVJQKPUSTAUDRJTLSMJDRISNCOGTKWSFRIGZEMKQDLERFQZTHDLHHSJJVXETWIMFOTHFACKDCNJLVSUEFHECAEXAKDXPGTVHOZMQRJBPIAMZWXZLSRSNPMVGTVTWOCY");
    msg.last_error.assign("TPJQQIXFOTCHHPAOPNLVEOWSUGCJYZFIYINRLCQBJCDZMCVFLGHAUCWKYADDMJNFYHXEDROOVBMPEEQYVHLIWDCBMB");
    msg.last_error_time = 0.329371781376;

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
    msg.setTimeStamp(0.754999566643);
    msg.setSource(33484U);
    msg.setSourceEntity(90U);
    msg.setDestination(58395U);
    msg.setDestinationEntity(214U);
    msg.mcount = 28U;
    msg.mnames.assign("PGSXRAEPOJBJRYQQASKBLGFCDBZQTIKPDGNOPNQYGOHYCLHAUZBTCLLVUVFLWPEQTYBYWGWSTOKDPMT");
    msg.ecount = 239U;
    msg.enames.assign("GSLPSTAQKJRELIYDJHOSLBVHOIFOGXPQYVVLYYCOHKIBXQJCIVEUNBMKKAGCUEHGGBLWLGMXHLUFQWOSMP");
    msg.ccount = 217U;
    msg.cnames.assign("YKZIRBMUBBDAJLZJVFVQMZMCLZTJBKDIARXPQUJEMASUCKRVVQGNNUXEDLATKKWYNWJTYBFLNCSTNCGSCNPLNWQBLD");
    msg.last_error.assign("NWQIPURDSP");
    msg.last_error_time = 0.373472222334;

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
    msg.setTimeStamp(0.430656867132);
    msg.setSource(9327U);
    msg.setSourceEntity(96U);
    msg.setDestination(15322U);
    msg.setDestinationEntity(190U);
    msg.mcount = 155U;
    msg.mnames.assign("VTISKSGEGGVOCZHYPZXFBKCSFBUTFAFXURHECMFEUZVCJQRTNNQYEJWGWYMQUWQMADGRFGCMNRBDAHRBZVOITDVVSCSKQWCIEMKZDIDMQALARAVHXTEOOEPUSGEUUKBWVIFWIIYTKYXDGKDMSNOHLPZL");
    msg.ecount = 52U;
    msg.enames.assign("MXCQYVUNJHSKIWHZMDCMBABESYRRMRCSPHXBOYFJWAJXOFWRTSTGGGPACXTETWLGMYRQMCUXFPNOQJBLCZTNJBVZPYVDUUGIEDGXYXUGRBOVWOJIDOYZVSFWASAOAUVYICHHZOWILIIERPJSQKPZJHTWMSQKNXBELVKPHNBTLZGKEUKRLJLICOAWQGVMYUVTFERTAQLCZHLNYPIGNDBVKEXAEZNUZATKRC");
    msg.ccount = 248U;
    msg.cnames.assign("RLPRREWMWHQIOCOOJYHOTXZPYDSLFBGIQZJDCLNGUNNVKDLRZKSWPJUFFWBWJBXPJLDIYIEHCRUREWYKZSKSNHPJMWLHUCMTRTPUPCEQWXTAIQITFRNAPVBMQLTFYXANSXGLZSWTBLUZVUIHMUDKMKZKXB");
    msg.last_error.assign("TZRZMOPGDZWSUBNLUXEHBPOTNFGNBCOOEROYCTKPIKWCSPMOXJBCXRADDBUVPSMGIZNSMPBSHQTDSLIIKMIMIVFVAPJYVMCYPHJGBXWVGCQATFDOOVKEKRYCTNMTPNZUYEVRHSEEYTEGQDRSKBWHSXUXQHLUURJTQXZYDVQHWLFXN");
    msg.last_error_time = 0.0662071221333;

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
    msg.setTimeStamp(0.657025210446);
    msg.setSource(62580U);
    msg.setSourceEntity(102U);
    msg.setDestination(57576U);
    msg.setDestinationEntity(5U);
    msg.mask = 15U;
    msg.max_depth = 0.657221796756;
    msg.min_altitude = 0.485616258587;
    msg.max_altitude = 0.359221374029;
    msg.min_speed = 0.460846100585;
    msg.max_speed = 0.939300054085;
    msg.max_vrate = 0.627993791012;
    msg.lat = 0.7022793973;
    msg.lon = 0.511379148138;
    msg.orientation = 0.894064110579;
    msg.width = 0.0574520439006;
    msg.length = 0.398490364552;

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
    msg.setTimeStamp(0.944723646314);
    msg.setSource(35722U);
    msg.setSourceEntity(171U);
    msg.setDestination(42171U);
    msg.setDestinationEntity(250U);
    msg.mask = 13U;
    msg.max_depth = 0.13195088979;
    msg.min_altitude = 0.988927232391;
    msg.max_altitude = 0.792107071799;
    msg.min_speed = 0.44076430775;
    msg.max_speed = 0.425098071006;
    msg.max_vrate = 0.362944568944;
    msg.lat = 0.637364215792;
    msg.lon = 0.527416957292;
    msg.orientation = 0.381980971775;
    msg.width = 0.539171746492;
    msg.length = 0.631571389612;

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
    msg.setTimeStamp(0.862112904716);
    msg.setSource(35058U);
    msg.setSourceEntity(47U);
    msg.setDestination(8267U);
    msg.setDestinationEntity(149U);
    msg.mask = 61U;
    msg.max_depth = 0.525833292386;
    msg.min_altitude = 0.22646200086;
    msg.max_altitude = 0.569859505637;
    msg.min_speed = 0.0120825467527;
    msg.max_speed = 0.821215078501;
    msg.max_vrate = 0.444262220623;
    msg.lat = 0.281022802145;
    msg.lon = 0.73565705388;
    msg.orientation = 0.101887560349;
    msg.width = 0.678649232787;
    msg.length = 0.994000317404;

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
    msg.setTimeStamp(0.943245723404);
    msg.setSource(45656U);
    msg.setSourceEntity(99U);
    msg.setDestination(5355U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.975900696646);
    msg.setSource(16651U);
    msg.setSourceEntity(89U);
    msg.setDestination(49311U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.0174904576411);
    msg.setSource(22269U);
    msg.setSourceEntity(218U);
    msg.setDestination(31396U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.0855975994322);
    msg.setSource(3885U);
    msg.setSourceEntity(175U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(146U);
    msg.duration = 21537U;

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
    msg.setTimeStamp(0.550694789261);
    msg.setSource(57863U);
    msg.setSourceEntity(141U);
    msg.setDestination(25519U);
    msg.setDestinationEntity(84U);
    msg.duration = 32956U;

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
    msg.setTimeStamp(0.5340732237);
    msg.setSource(21929U);
    msg.setSourceEntity(74U);
    msg.setDestination(15710U);
    msg.setDestinationEntity(90U);
    msg.duration = 57966U;

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
    msg.setTimeStamp(0.785223534824);
    msg.setSource(16557U);
    msg.setSourceEntity(36U);
    msg.setDestination(18346U);
    msg.setDestinationEntity(146U);
    msg.enable = 147U;
    msg.mask = 1443666726U;
    msg.scope_ref = 3663312337U;

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
    msg.setTimeStamp(0.25007295651);
    msg.setSource(53669U);
    msg.setSourceEntity(149U);
    msg.setDestination(19318U);
    msg.setDestinationEntity(121U);
    msg.enable = 106U;
    msg.mask = 823474697U;
    msg.scope_ref = 2408314203U;

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
    msg.setTimeStamp(0.103743436563);
    msg.setSource(35659U);
    msg.setSourceEntity(171U);
    msg.setDestination(57105U);
    msg.setDestinationEntity(150U);
    msg.enable = 61U;
    msg.mask = 2677950166U;
    msg.scope_ref = 3241813213U;

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
    msg.setTimeStamp(0.574850445443);
    msg.setSource(15982U);
    msg.setSourceEntity(9U);
    msg.setDestination(3660U);
    msg.setDestinationEntity(183U);
    msg.medium = 219U;

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
    msg.setTimeStamp(0.557323901906);
    msg.setSource(28311U);
    msg.setSourceEntity(88U);
    msg.setDestination(48780U);
    msg.setDestinationEntity(190U);
    msg.medium = 116U;

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
    msg.setTimeStamp(0.139045463634);
    msg.setSource(16134U);
    msg.setSourceEntity(240U);
    msg.setDestination(63873U);
    msg.setDestinationEntity(167U);
    msg.medium = 190U;

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
    msg.setTimeStamp(0.799497603099);
    msg.setSource(49676U);
    msg.setSourceEntity(56U);
    msg.setDestination(17759U);
    msg.setDestinationEntity(247U);
    msg.value = 0.961073690869;
    msg.type = 144U;

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
    msg.setTimeStamp(0.388639302086);
    msg.setSource(25938U);
    msg.setSourceEntity(61U);
    msg.setDestination(61916U);
    msg.setDestinationEntity(84U);
    msg.value = 0.576639217068;
    msg.type = 95U;

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
    msg.setTimeStamp(0.510465381769);
    msg.setSource(51989U);
    msg.setSourceEntity(232U);
    msg.setDestination(20581U);
    msg.setDestinationEntity(16U);
    msg.value = 0.692442353457;
    msg.type = 121U;

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
    msg.setTimeStamp(0.352306707561);
    msg.setSource(41724U);
    msg.setSourceEntity(72U);
    msg.setDestination(59302U);
    msg.setDestinationEntity(82U);
    msg.possimerr = 0.138891384204;
    msg.converg = 0.550728902408;
    msg.turbulence = 0.592553322952;
    msg.possimmon = 172U;
    msg.commmon = 91U;
    msg.convergmon = 199U;

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
    msg.setTimeStamp(0.114537104736);
    msg.setSource(10248U);
    msg.setSourceEntity(251U);
    msg.setDestination(36573U);
    msg.setDestinationEntity(207U);
    msg.possimerr = 0.230306526655;
    msg.converg = 0.528547797067;
    msg.turbulence = 0.0576510745318;
    msg.possimmon = 230U;
    msg.commmon = 26U;
    msg.convergmon = 70U;

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
    msg.setTimeStamp(0.416876455159);
    msg.setSource(34561U);
    msg.setSourceEntity(250U);
    msg.setDestination(51947U);
    msg.setDestinationEntity(34U);
    msg.possimerr = 0.0453352932573;
    msg.converg = 0.564203368063;
    msg.turbulence = 0.793484698336;
    msg.possimmon = 49U;
    msg.commmon = 204U;
    msg.convergmon = 220U;

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
    msg.setTimeStamp(0.764727979914);
    msg.setSource(11809U);
    msg.setSourceEntity(28U);
    msg.setDestination(898U);
    msg.setDestinationEntity(145U);
    msg.autonomy = 167U;
    msg.mode.assign("NOTQFZUGIOIMHMJOPJLIQKDCBNOYJTOLSNYYBEZKEDGEBSUBCRONCVLFASGIEIIYEQPPTIDSSNFVZNERELVJJAJTXSCUCRYRPWMHXMNCYAEKCWMOSMRUSLHVYZTPSXXFWWVGQYPWQQBRFPJPTWNGRXZMTPVFHKQUCHDLXIUADRDQCVHHMDBBKRLKGBBGTWJNKHEXFEKFGIOZBVALDUMYA");

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
    msg.setTimeStamp(0.367191210872);
    msg.setSource(49022U);
    msg.setSourceEntity(39U);
    msg.setDestination(28888U);
    msg.setDestinationEntity(219U);
    msg.autonomy = 254U;
    msg.mode.assign("RAYURTLPWPUGYWWOZXAFRPNRSXRCSGRROGKJSDUZLYZGIOEKYLPUQIXAVCCZNNYNWMZTRQCTCBFTXDDKDGMHDOIJUPCKSYDTWHHQONXJYIYMVHUIACZSFJHQFKOFFXTCXWQGVQVKJEZITLRTKSIMLOQUGVBLEJWPMFHEZFRPAJMUHJNPQEVOWSGWKFNVUQENXBFZEALBHGPULSLNIXJBJGXA");

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
    msg.setTimeStamp(0.721728786676);
    msg.setSource(41450U);
    msg.setSourceEntity(116U);
    msg.setDestination(60635U);
    msg.setDestinationEntity(69U);
    msg.autonomy = 149U;
    msg.mode.assign("OFUMHAYTPSCTWLCTRGMLL");

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
    msg.setTimeStamp(0.116194007444);
    msg.setSource(5566U);
    msg.setSourceEntity(17U);
    msg.setDestination(21641U);
    msg.setDestinationEntity(132U);
    msg.type = 123U;
    msg.op = 152U;
    msg.possimerr = 0.539571593685;
    msg.converg = 0.609242613606;
    msg.turbulence = 0.885492209931;
    msg.possimmon = 52U;
    msg.commmon = 82U;
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
    msg.setTimeStamp(0.550733799555);
    msg.setSource(36850U);
    msg.setSourceEntity(217U);
    msg.setDestination(27315U);
    msg.setDestinationEntity(135U);
    msg.type = 172U;
    msg.op = 121U;
    msg.possimerr = 0.384580447439;
    msg.converg = 0.484325965726;
    msg.turbulence = 0.184438132038;
    msg.possimmon = 120U;
    msg.commmon = 55U;
    msg.convergmon = 199U;

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
    msg.setTimeStamp(0.828471479191);
    msg.setSource(33888U);
    msg.setSourceEntity(83U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(130U);
    msg.type = 235U;
    msg.op = 252U;
    msg.possimerr = 0.115682262825;
    msg.converg = 0.445937977029;
    msg.turbulence = 0.202634148394;
    msg.possimmon = 190U;
    msg.commmon = 17U;
    msg.convergmon = 240U;

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
    msg.setTimeStamp(0.635248861735);
    msg.setSource(21804U);
    msg.setSourceEntity(68U);
    msg.setDestination(48232U);
    msg.setDestinationEntity(156U);
    msg.op = 117U;
    msg.comm_interface = 94U;
    msg.period = 57191U;
    msg.sys_dst.assign("BMKQRAYRPGVPRWOPELJESUCNBFRPGMLTOIHYBRZEQQJHYWBZVVAWDAYXUSIHDYIKLQFTVJDQOLC");

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
    msg.setTimeStamp(0.970850783271);
    msg.setSource(32682U);
    msg.setSourceEntity(10U);
    msg.setDestination(62700U);
    msg.setDestinationEntity(13U);
    msg.op = 214U;
    msg.comm_interface = 151U;
    msg.period = 46485U;
    msg.sys_dst.assign("FVHRFMCVMXDSNVTGKUQWAFRWYGBPXCNBGAVNEJKJAPKWLQAZNTBXLQHZCHLELKCXIROXGZAKTMNSTJZUSIYLBETTIFOCPHQXIWOHGVXPHARZ");

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
    msg.setTimeStamp(0.695562389688);
    msg.setSource(5257U);
    msg.setSourceEntity(120U);
    msg.setDestination(28135U);
    msg.setDestinationEntity(230U);
    msg.op = 137U;
    msg.comm_interface = 147U;
    msg.period = 44873U;
    msg.sys_dst.assign("IJTVIWERMAMSVOIUGPBGTFVSNZDZGQHUWPJTUJRDJIELYQAEXKEHI");

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
    msg.setTimeStamp(0.406868349166);
    msg.setSource(26313U);
    msg.setSourceEntity(120U);
    msg.setDestination(1648U);
    msg.setDestinationEntity(253U);
    msg.stime = 2328123604U;
    msg.latitude = 0.409854828292;
    msg.longitude = 0.936847838343;
    msg.altitude = 16492U;
    msg.depth = 63931U;
    msg.heading = 45806U;
    msg.speed = -9050;
    msg.fuel = 12;
    msg.exec_state = 107;
    msg.plan_checksum = 48348U;

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
    msg.setTimeStamp(0.250541506282);
    msg.setSource(40386U);
    msg.setSourceEntity(216U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(102U);
    msg.stime = 1631570679U;
    msg.latitude = 0.444305291294;
    msg.longitude = 0.215076916742;
    msg.altitude = 299U;
    msg.depth = 3743U;
    msg.heading = 65029U;
    msg.speed = 16307;
    msg.fuel = 37;
    msg.exec_state = -106;
    msg.plan_checksum = 7787U;

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
    msg.setTimeStamp(0.755017415854);
    msg.setSource(35996U);
    msg.setSourceEntity(86U);
    msg.setDestination(868U);
    msg.setDestinationEntity(159U);
    msg.stime = 2824466512U;
    msg.latitude = 0.927345149624;
    msg.longitude = 0.870170091329;
    msg.altitude = 30876U;
    msg.depth = 8319U;
    msg.heading = 27822U;
    msg.speed = -32746;
    msg.fuel = 13;
    msg.exec_state = -30;
    msg.plan_checksum = 8526U;

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
    msg.setTimeStamp(0.423429724302);
    msg.setSource(22836U);
    msg.setSourceEntity(87U);
    msg.setDestination(43637U);
    msg.setDestinationEntity(99U);
    msg.req_id = 27246U;
    msg.comm_mean = 159U;
    msg.destination.assign("BPTWNAQVRSRGUZZXNTFBSHYNACPGFELYEVNVATQGUQCHIIGZWKGSMDUSDGRVDNNJTWMPJQOTKEDJQWRZYWXSQYLZTRXAXGJHUOWWUYRCYMCAFACHZZJTOFQMIOLPBMEIPXMSHFEYCXIBDBQJEKGVCHODBBZVFGNSUDIFKLNJAT");
    msg.deadline = 0.372453367247;
    msg.range = 0.116890449269;
    msg.data_mode = 161U;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 17116U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JGFLVLPWDSOSECYMWKGMUCIWAN");
    const char tmp_msg_1[] = {-33, -72, 68, -12, 0, -69, -6, 114, -48, -86, -103, -57, 11, -83, 13, 7, 71, 109, -3, -44, -30, -55, -100, 112, -103, -79, 43, 39, 74, 92, 51, 54, -41, 68, 104, -17, -85, -88, 53, 30, 72, 66, -124, 38, 53, -123, 91, 1, -86, 77, -10, -112, -53, -87, 54, -34, -92, 117, 88, -119, 97, 80, 90, 13, 19, -30, 23, 69, 99, -53, 28, 17, -95, 114, 7, 1, 22, -19, 35, 11, -57, 51, -5, -85, -76, 63, 30, 23, 102, 111, 96, 71, -38, -127, 83, 51, 120, 28, -87, -17, 18, -88, -13, -98, -38, -12, -23, -91, -32, -19, 3, -116, -92, 21, 95, 96, -40, -93, -44, -27, -123, -107, -25, -98, 118, -96, 77, -25, 14, -123, -45, 96, -121, -14, -67, 28, 122, 0, 67, -4, 37, 27, -38, 66, -18, 47, 24, 121, 53, 83, 118, -76, 59, 114, 119, -68, -16, -30, -30, -89, -50, 108, 51, -49, -13, -101, 77, 94, 56, -12, 48, -96, 69, -113, 79, 69};
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
    msg.setTimeStamp(0.712845253236);
    msg.setSource(61619U);
    msg.setSourceEntity(63U);
    msg.setDestination(57258U);
    msg.setDestinationEntity(47U);
    msg.req_id = 21047U;
    msg.comm_mean = 153U;
    msg.destination.assign("KHOYBRVQNUUJGKNQZCWMXGQDOEQCILPZICYFSZVILAMUBEDZWNPIXFMBVTLQAYMEFOFY");
    msg.deadline = 0.238806834558;
    msg.range = 0.0105595905956;
    msg.data_mode = 60U;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.249979054727;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RXQSIBOGFZTUQXVYEWUARHKQOFONLCSHPNCCORDJWICHURSQZZYCJVZJWWYXXVRMBJYTCPPPOTRPFNNVGFJVQLDUTF");
    const char tmp_msg_1[] = {-53, 101, 107, 27, 86, -97, -30, 41, 67, 32, -71, -58, -59, -10, 62, -96, 39, -2, -78, 60, 53, -2, -27, 14, 117, 84, -125, -17, -61, -23, -32, -22, 20, 30, 88, -101, 78, 28, -41, 105, 99, 50, 122, 74, -27, -3, -66, 20, -68, -111, 77, 68, -18, -13, 118, 89, 124, -95, 96, -36, -82, 115, 10, -34, -80, -47, 119, -125, -102, 19, 0, 66, -114, -16, -77, -38, 78, 63, -125, 4, 88, -94, 27, -78, 71, 6, 98, -53, 81, -16, 59, -122, -104, -70, 84, -80, -2, 81, 29, 73, -5, -80, -80, -4, -83, 17, 35, 40, -58, 51, -71, 33, -124, 77, 51, -10, 1, 68, -99, -43, -36, 65, -5, -107, 12, -81, -96, -84, -40, 14, 60, -35, -59, 58, -77, -45, 76, 125, -112, -57, 108, -37, -73, -125, -3, -117, -71, 111, -81, -116, 116, 50, -14, -62, 56, 96, -63, 28, 0, 81, -70, -38, -60, 1, -6, 66, -18, 124, -23, -84, 45, -59, 58, 50, -28, -121, 116, 121, -63, 119, 100, 119, -91, 116, -77, 8, 35, -51, 2, -8, -104, -89, -58, -119, 84, 65, 26, -127, 54, 14, -122, -50, 94, -66, 42, -24, 12, -67, -104, 91, -74, -85, 101, 123, 73, 56, 107};
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
    msg.setTimeStamp(0.883295668157);
    msg.setSource(35987U);
    msg.setSourceEntity(161U);
    msg.setDestination(7495U);
    msg.setDestinationEntity(92U);
    msg.req_id = 23994U;
    msg.comm_mean = 249U;
    msg.destination.assign("IISRDZGMMPNPBYVANGMMDUHZZZTGZALUBBGSFBNGOQ");
    msg.deadline = 0.0781452812588;
    msg.range = 0.445573070953;
    msg.data_mode = 224U;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("UEBXNZUIWRXRFAVPFESQOCQNCQLHFNAWOKJJTHGZAXBWKGFTBECJQ");
    tmp_msg_0.rssi = 0.531544047772;
    tmp_msg_0.integrity = 24876U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EXJVXXMWJNPLVSSDQVOAFQGAICPPUOMNLMSYMZMUXBGSBHIAYZRWBHRHYODFQEBZNNQJPISVWKUIYAIKAUTJAYTTOGKADARRFILHCBHCKLLCEHRCQPSURGYTDWPBIZDUAODFLVKNVCWKLFQJMUGPBMNLCKDXQXKCSOCWHBMQRWEWYYTVNUYZKLOEAIOSRTJWPVZGGPEKHUTDEGZYPVOMN");
    const char tmp_msg_1[] = {-15, -32, 119, -59, -67, -2, 57, -125, 24, 62, -25, 13, -53, 50, -125};
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
    msg.setTimeStamp(0.622598298167);
    msg.setSource(37761U);
    msg.setSourceEntity(74U);
    msg.setDestination(24749U);
    msg.setDestinationEntity(131U);
    msg.req_id = 24982U;
    msg.status = 14U;
    msg.range = 0.706994121648;
    msg.info.assign("NPHVAIUZRUQBTVNVXWUMVHZEINVLNOGPWSHIBXKFDBYOJCSKMMADPZRCXDKMZTJRGSWPSLYWYFDKGQLNDDLBRJRWQAHYFXYE");

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
    msg.setTimeStamp(0.796433057421);
    msg.setSource(2331U);
    msg.setSourceEntity(17U);
    msg.setDestination(58057U);
    msg.setDestinationEntity(121U);
    msg.req_id = 60742U;
    msg.status = 148U;
    msg.range = 0.011352584152;
    msg.info.assign("VGHBYWUADVPFIGJZRGTLMFVRAATEGXJZENDWNNNEOPTUSLHLWUOOXCBQBQOCQTDTOXCMIGZFWDIPYCFSDJVXMVWZDTLBZYJYXCFHGUTAAUFKDTVJSRRKDJETB");

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
    msg.setTimeStamp(0.178620321216);
    msg.setSource(60387U);
    msg.setSourceEntity(31U);
    msg.setDestination(47134U);
    msg.setDestinationEntity(241U);
    msg.req_id = 37757U;
    msg.status = 253U;
    msg.range = 0.869043135598;
    msg.info.assign("CGFGNNLSXRYMUIUXPNHGOYDZVYKTGNHQPPMYAIXDXOVJQWRACBTMUJQFEULBACCSUVCRZEOVBQBGUHDPERNQDZTCJHIZWFNVEBVQOJMAVSWRDZKMOTKLWSKGRTFHIAHXWEAMVFBCEYGXINWDAPQYBLTXQAFZJFUWJFKMLKGMZDENEDWIRHU");

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
    msg.setTimeStamp(0.615799042956);
    msg.setSource(29181U);
    msg.setSourceEntity(110U);
    msg.setDestination(9053U);
    msg.setDestinationEntity(155U);
    msg.req_id = 47414U;
    msg.destination.assign("EJJCKQYHUTCPVWPYAFXEVKRCKMF");
    msg.timeout = 0.10515885546;
    msg.sms_text.assign("SPLHGWGVSPKSGDWNZCDWNMUQJCRERGMMAILFJKYNEFTHOOCJYFEZVLLTYTODNOATBUYHQAHFRKGIKQRVPASWAIJZFILQCUCXLUETFJLBKMARNB");

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
    msg.setTimeStamp(0.110667343206);
    msg.setSource(40352U);
    msg.setSourceEntity(40U);
    msg.setDestination(3654U);
    msg.setDestinationEntity(196U);
    msg.req_id = 33060U;
    msg.destination.assign("YDNPSQBVFLMKUFJXAOSASIVIGEOFTQJHBVWZJYRGWFATBWZCBOPFHJCOLPGECOQRPBHXTODSZNVIKRENFHFFPGXHRB");
    msg.timeout = 0.528751144058;
    msg.sms_text.assign("KNYFPENABIFGTZFBPLGZRTQHABTQSOLRUWMQCBOYHAFPSSSXBGWCKVXYGOJKAZENIHJLXQWEPXNMMGXEBOYDUHOVTMAJWQGAJBZQVRGKJMUSPUCMPEWCLXZRPZRTWKKNDWKRYKNKTIWGRYZQODSLIAFCFVFNYAECKVFVDODMLVJQDHLGNJDEMPHHSAMMWCXJGLUVEDZUYNPDSFJBLCICIEVHUHUAYFBINRSTPSLTTZYHXCOZ");

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
    msg.setTimeStamp(0.435360115719);
    msg.setSource(9102U);
    msg.setSourceEntity(207U);
    msg.setDestination(53128U);
    msg.setDestinationEntity(157U);
    msg.req_id = 33793U;
    msg.destination.assign("MIBEKZDHPBDTILGAPRALPNWBMECNXGYCEETLDESUUDMWSNMNRLGZRNFVPGMYYKGDQVQJNPFIRUFVFIQICGGVQX");
    msg.timeout = 0.958511236601;
    msg.sms_text.assign("RGJSQTDMXDUNBORRKRNKPXKEZVEGZOXHMLYBUBKYGHESOZZKPUUYKWBFQDCDKTILPUMZIKXEWOMJZIVMUEOCHEYYFMOQRVIPNEXFURAPHJNZOITALVCPBYGATKCGISJDVDTYJLQUXBMSITNPAWJAVZHOAHFLYPLTJSCPFNAJQRSOFWKGBTIRNYQTXUQCJDRLHAWDEZNSHCGUHDYCPWCXAJOFXSFGNVVD");

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
    msg.setTimeStamp(0.837991532335);
    msg.setSource(32109U);
    msg.setSourceEntity(242U);
    msg.setDestination(17347U);
    msg.setDestinationEntity(103U);
    msg.req_id = 4533U;
    msg.status = 150U;
    msg.info.assign("SUCPSOUHWGMFLIZKAPGNJJETALHPNFRTGNSVB");

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
    msg.setTimeStamp(0.785101063633);
    msg.setSource(64747U);
    msg.setSourceEntity(31U);
    msg.setDestination(48051U);
    msg.setDestinationEntity(118U);
    msg.req_id = 33756U;
    msg.status = 164U;
    msg.info.assign("WFYDBGTQFMQKUNPSIAGVNTQAHJGJJGSOZWRMMDFKQVDHPFLBGAABBOERINCFXZRUPSJMYLQPB");

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
    msg.setTimeStamp(0.387928503868);
    msg.setSource(14408U);
    msg.setSourceEntity(181U);
    msg.setDestination(30121U);
    msg.setDestinationEntity(246U);
    msg.req_id = 60799U;
    msg.status = 24U;
    msg.info.assign("EVCBJQUFAK");

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
    msg.setTimeStamp(0.252480295742);
    msg.setSource(46651U);
    msg.setSourceEntity(183U);
    msg.setDestination(7875U);
    msg.setDestinationEntity(184U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.668391918345);
    msg.setSource(51498U);
    msg.setSourceEntity(49U);
    msg.setDestination(38907U);
    msg.setDestinationEntity(134U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.65672423938);
    msg.setSource(58082U);
    msg.setSourceEntity(148U);
    msg.setDestination(49672U);
    msg.setDestinationEntity(30U);
    msg.state = 130U;

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
    msg.setTimeStamp(0.120928000578);
    msg.setSource(28052U);
    msg.setSourceEntity(52U);
    msg.setDestination(38356U);
    msg.setDestinationEntity(16U);
    msg.state = 19U;

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
    msg.setTimeStamp(0.0990466965308);
    msg.setSource(12804U);
    msg.setSourceEntity(83U);
    msg.setDestination(7501U);
    msg.setDestinationEntity(49U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.351499119773);
    msg.setSource(14957U);
    msg.setSourceEntity(106U);
    msg.setDestination(22714U);
    msg.setDestinationEntity(127U);
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
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.556487576407);
    msg.setSource(55445U);
    msg.setSourceEntity(188U);
    msg.setDestination(4874U);
    msg.setDestinationEntity(247U);
    msg.req_id = 41614U;
    msg.destination.assign("JDDEYSSXOTZBDVPCPHZRRMMKVJLSRKUKHOXCYCFRILPWFBURPQYLTZGAGEVVBAQAHCDMVYEUBIVYEWCIYZGGJHONCXQAUSVXFUQOFTZNOGLOWOEGVBMEPUWCZOHZWNPJCCQTFDYFODNTWQRVSIRZSMPQNZKXIINHILJLSHFCMRGQBUIWNISVMPMRYKNDLUHEATAQLTEMBTGGWHFKBKOGZJDXXSIHKBXLN");
    msg.timeout = 0.339909352379;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 3846812283U;
    tmp_msg_0.destination.assign("HUXSBMKPRVIDWNZDFCHLDPPYIMGQBBFJLOJNOPDRFQJAQSBBPIOUSNGOKUKVEOXHYNKHTURNTKWNGZYRBHNXQFZJWOQQRFMBKDLGPTGHTPSRW");
    tmp_msg_0.timeout = 31444U;
    const char tmp_tmp_msg_0_0[] = {95, -42, 28, -28, 112, -110, 50, -77, 48, -108, 5, -67, -8, 56, 57, 56, -3, -51, 36, -90, -9, 78, -7, 35, -39, -115, 84, 54, 32, -27, -6, -2, 51, -96, 60, -97, -47, -87, 2, 76, 99, 108, -25, 55, -102, 119, 105, -9, -88, -78, 18, -27, -35, 84, -44, 19, 94, -16, -91, 67, 77, 69, -16, -5, -38, 121, 32, -8, 62, -73, -31, 49, 23, 68, 95, 104, -1, 121, 100, -33, -93, 37, -105, -33, 93, 26, -121, 125, -81, 55, 41, 107, 20, -116, 83, -50, 98, -80, 113, 113, -58, 115, -39, 104, 118, 106, 53, -54, -122, 96, 19, -87, -95, -71, -27, -24, 6, 47, 14, -40, -14, 19, -58, -21, 116, -50, -86, 15, 118, 57, 30, -82, -60, 78, -124, -127, -74, 86, 45, 56, -94, -67, 83, -128, 102, 11, -14, -55, 62, -98, 75, 26, 22, 63, -35, 64, -100, 126, -94, 21, -99, 69, -114, -122, -76, 78, -36, 65, 47, 106, -18, 11, -82, -19, 8, -115, 62, 103, 1, -91, 17, -118, -77, 75, 2, 27, 103, 116, 108};
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
    msg.setTimeStamp(0.000709459731218);
    msg.setSource(4920U);
    msg.setSourceEntity(11U);
    msg.setDestination(29948U);
    msg.setDestinationEntity(204U);
    msg.req_id = 39277U;
    msg.destination.assign("ZQPPFVODKZPILVTFUZYEJGFKZJHJCEPNEJSGMHWKFDFLUMLQIJTXXCLTYPHGQGORGIUACHKZZHOBCIMUROTPJYEVBLRVXHAZLUUXLCYZZSPXNQSNACDXGEBBGAVLIYAKHGEDTVSDIOTSWD");
    msg.timeout = 0.238670540364;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.127596808594;
    tmp_msg_0.base_lon = 0.820297248405;
    tmp_msg_0.base_time = 0.435460995215;
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
    msg.setTimeStamp(0.423129185554);
    msg.setSource(26769U);
    msg.setSourceEntity(93U);
    msg.setDestination(34807U);
    msg.setDestinationEntity(180U);
    msg.req_id = 31885U;
    msg.destination.assign("KCDMDPDPWGNKTBGRGFNRCSEGCTSKIMDSHLLVIDEKITOPJBHLEWWUTORGXVJSHHUZBRGYEESTOORVWBMTQUEUWCEQLKMAVDCCNMNKNSYZWRGIPHXYPKVWTLYXHJYHVHYUSOKUJFBIBGNZDQTZLXSFZARFCXFIRSWLATNAAZDFGVOKUZFUVDJNBEUXIPHOAPQMSNAYJMWZAHRTXBJIQYZYMFJDAECBYXJEQU");
    msg.timeout = 0.634021619654;
    IMC::PeekManeuver tmp_msg_0;
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NGTWEZJLLQZIDMJFMJOCKVCFQZESLVIRNQYEFEUFESXZPLUGVPKFNTSZNOWOANGDSZWPUKVLJAMBABCGAIOXWUUUQIIXCNEWDQXPHRYRXHUQEXKYYWCUKGICROJMMFVDIGPPJAFPEWBQJLHJDFOKGMLLYDASOBSDNHXWIATWPZVDSFTRHRBCBYZQXCYLIANVDHZGVRAHX");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 60621U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.261011419675;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.925003156043;
    tmp_tmp_tmp_msg_0_0_0.z = 0.614714200795;
    tmp_tmp_tmp_msg_0_0_0.z_units = 99U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0814482857395;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 75U;
    tmp_tmp_tmp_msg_0_0_0.duration = 35590U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.116386429949;
    tmp_tmp_tmp_msg_0_0_0.flags = 147U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JRSQLYUTPXKBJEBRCVRYDBGCLTFDPQZXTQUPDNBBELLURXLANWQZXGNNZHYENPBRVTDWAJJFKTMHOULBXSUWINJKFFDKOOCTIUZPUXSHCMM");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.man.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0672228794498);
    msg.setSource(47797U);
    msg.setSourceEntity(240U);
    msg.setDestination(26165U);
    msg.setDestinationEntity(115U);
    msg.req_id = 33010U;
    msg.status = 76U;
    msg.info.assign("ZSGPTDRWDAZLEEAPBKMNSCJFOGQBHGIXTLUXLCJEHVULOCRNYQCNIXEELSMQCSCBIZVPHZUPOUSHHTTIXWKYYYLDEHNSDKA");

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
    msg.setTimeStamp(0.290057580551);
    msg.setSource(18408U);
    msg.setSourceEntity(122U);
    msg.setDestination(33096U);
    msg.setDestinationEntity(3U);
    msg.req_id = 22574U;
    msg.status = 115U;
    msg.info.assign("MHSKTQEVIFXCLKISBBBFPDEMWNYSRHBOINXLZYZUYIZTSMNFRFASJOTQPHGLHXPJWSPAYHJFTHWBDPYGRJGPGPPA");

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
    msg.setTimeStamp(0.897890800114);
    msg.setSource(28149U);
    msg.setSourceEntity(240U);
    msg.setDestination(17836U);
    msg.setDestinationEntity(141U);
    msg.req_id = 50724U;
    msg.status = 12U;
    msg.info.assign("TSQFIKMFJXAKXUCIDELGBIYILZFJLZTKJSXIHJPHOTRELEBHXVCZMIHCOBYHPYDUTSMMGHAVMHIWTYDGVCJAOUQNKQXTUMXRKQDPKBRSEEUSQMZRBDOBYSCMYVGWHWOEKLVDPOOSQCKAGRNPBSWNXC");

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
    msg.setTimeStamp(0.660648493002);
    msg.setSource(44236U);
    msg.setSourceEntity(71U);
    msg.setDestination(5135U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.534154472181);
    msg.setSource(11583U);
    msg.setSourceEntity(137U);
    msg.setDestination(20536U);
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
    msg.setTimeStamp(0.88707546337);
    msg.setSource(20327U);
    msg.setSourceEntity(235U);
    msg.setDestination(10761U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.013269592958);
    msg.setSource(36838U);
    msg.setSourceEntity(193U);
    msg.setDestination(37437U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("JKYEJRHYATMDKXXICHDNSSQEY");
    msg.description.assign("FUNGTOHAPRLDMGUTISHNVLXARDMOEFWVXQXLBZQNSYYWDIHUBVHCMWIWDPLOTCENUEPJTLJJOFDDHRNFKLSZIAOQNBEADTBGRNXVCBMHZKEXJBRFGPXJKRJCDLSBBGWFODIH");
    msg.vnamespace.assign("HMTFZAGIIUUYEHHUSYBRPNFXEWLITLSLOBKVKMXECCIEGHDTNEAMDJGGYBOBJLYFZOJXTITBROEHZFPXMSUAZXWGSCWUHQNYVYCGTSFIJQTJHUDKYAZMROWRWPSXLTEKSMOELXUFPANQEOYZSKJXBQFRWVVDGBKWNBPVQMKUHJSZAPQQDNLDOCHBCJEAFZRVDNLW");
    msg.start_man_id.assign("UIDSCAXPKRBRABITGQYGGCRGATZLFKXBDSVZTSQTYJNDHHIVFRUUIFFGQJTQJYJHPSQVZWUQELBYILOJRNQUNNDUYVMCLBEECOOSLXEEBEWVIELUVSCNAFTTMBXINMTVNIDMOVEDMXPPMROHRFRYHUGWODLKKIBWFCWOAQSYBJHAZJXADNMAKHAWCN");

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
    msg.setTimeStamp(0.828461670774);
    msg.setSource(47173U);
    msg.setSourceEntity(113U);
    msg.setDestination(47222U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("WCJHBFGJZDBSKJIQBFDE");
    msg.description.assign("IVXBPIFSAPZYQBVDMEXPICVFLXQKLJCMRFPFWWUKWEFDXNBKNSCEBHYWIOGCZLLSONXLXPGEEDRSNULLSSHNHKEFJYJMTJKJNVAZOEWAYPZLFUXPWNQTAVEVRKKARCMIDUNUQCXSTAIOTVHYOXOUTUDNMTGVBYQECZAHCHTMQRADOUPG");
    msg.vnamespace.assign("XVBFQTHQHNOZYJRTSJDBIJRARUSPQVGJDEMBRKNQLSSZKABJIODFMUCSCZZQBGZSFCLGLRBFMNPWKMQJHWG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PWOMWGTFNQVWXNSDWMHPYWKQOFKYODCCKCDVGELBKCILGVBMAWKQSTEFUHTTYSXNPPHAIFERDJUMNOMUCOVSLZOZNYHSLXAEKHBNIAYRASBFQHVGTUZERSXDYXXAZSEVJVMDLIKVDCXDPRHVOXTHSQXZ");
    tmp_msg_0.value.assign("GGWPRQEYRHATDNULZBZ");
    tmp_msg_0.type = 69U;
    tmp_msg_0.access = 239U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RGYSDOXRRWLVGHAITXUCHSRYCSUYTEHZNWTUDUYQNSLDJHVYEPMBTPMABQPWXSUKEZFEOGKRNLYQMFGWXYQCNUWEKAGDCMBCKICJSTMQKBBYCNDCCJZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XVYHPJRIUSYECAZODLLRWAFLMBEJLVOUCNCKGNTGMVPNRTZKLFGHPAMNXW");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredZ tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.209749127841;
    tmp_tmp_tmp_msg_1_0_0.z_units = 16U;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 10624U;
    tmp_tmp_msg_1_0.custom.assign("SJJPRCBMGMLLXFNODIOWFEOXLOPTEDMKWU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.689117396758);
    msg.setSource(55235U);
    msg.setSourceEntity(146U);
    msg.setDestination(21568U);
    msg.setDestinationEntity(53U);
    msg.plan_id.assign("MGOAANECHPXAXYGVRDSHQTYSPDVBTDCUCOFZNPVISYSRSBBFPGJP");
    msg.description.assign("MAMEPHXKQLCREJTHQUAKGTPUTZYIMCOJUXYIVRPFPAZPEDPIUDFPYPFUYWVMUVSVXFNNSWBONHVSFRCNLIKRGNSGWICKDOOJMDXTHGZMQRTZPPGMBNBJUWVIYHJKBQZZRWWOORXTCKVRQTAFIQCOTATVVSYJEERGYWGMLSCYDVLNKLFDYIFSGDBDQETDSZBESHEANJXXFWLCAGCZHGNJQDMKBFXXABBWXZAJK");
    msg.vnamespace.assign("GIQWOAHJFDAWGVDZPCEHUTKKTSNPGDGMKBTWIKYKKRLTYWQFHISMFCZVFVMEOEQFBUQMOMDIRNURJEUDTQAXRKBSBPTIFRMGWQJZAJTYNDMZOFZBHLNAXCUQRLNHEXEMCZHXAAMNGOOCJHDVUAGBPVYPMZILCQLWLSWZURSJKXNPXIXEWNSSBCDPOXYDGPKUCJICRCLSSEAGDJRZHOAPLLVBOIXKVVGTOISUEHXWYZULQFFYBRVNHFVWTJN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AOWWKYPJFJUGBCCVDRTLXXWFMZLBKEPUUVAMMHQHFFKOBGSZAGPTMTRJZZOUHDWYEKUIBVXCGGOVICQINXFYBZVRQSZYHAHYFTOJCDXKCK");
    tmp_msg_0.value.assign("HJOAUXTDSDBYMCQTSVMTRZLYRVZPXDMMXWECOHIHOLHHFMDSGKXIOBEHGPILDEHXZXOFATCEVAKQVWZIHJDCUNBOUKGNEUPVQLNNQVWVOPTYGVJQACSJKCAWAFAFRDUTFHRAWGQOSJGDWMISIQBLXRLTIZMPETMRKUFUBWHLLCGEIXQJGKYWAOPNUZEKUEVPRXYNNBQRCLACNMWGJTJFQYIYCBJPGVRYJSKYBWSSUFXREPZNZPTDZDBL");
    tmp_msg_0.type = 248U;
    tmp_msg_0.access = 136U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MUINDBFFXYYFIIKWTLNTQBJXPKLPC");
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 7U;
    tmp_msg_1.snapshot.assign("UBGKTKZSJQPELXTEXQKSZVBOSTCFLMEERRYMIHRRJQOUJSYQWXZMYYMFBSEUWZJBIKFIEWHUVKRPIVLCQENNVGAMDUXIAHTKGPZQEFVAJWVOKTBO");
    IMC::AcousticSystemsQuery tmp_tmp_msg_1_0;
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Magnetometer tmp_msg_2;
    tmp_msg_2.timeout = 61787U;
    tmp_msg_2.lat = 0.0532421599189;
    tmp_msg_2.lon = 0.26978076682;
    tmp_msg_2.z = 0.404652040812;
    tmp_msg_2.z_units = 209U;
    tmp_msg_2.speed = 0.0346766637545;
    tmp_msg_2.speed_units = 29U;
    tmp_msg_2.bearing = 0.667821501867;
    tmp_msg_2.width = 0.540672528079;
    tmp_msg_2.direction = 85U;
    tmp_msg_2.custom.assign("MEHNTVBJPUVGFSIEIZPISNKLUMWCLJGANBRNQOPKXMFHWQSZXPKYZHRINLLFQDMOEAVWFHJDBOGDDBCBOKFVKPY");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.792202053553);
    msg.setSource(6495U);
    msg.setSourceEntity(151U);
    msg.setDestination(49532U);
    msg.setDestinationEntity(210U);
    msg.maneuver_id.assign("UAYAVAPENAQYQKDZOSWFOCYCQKGYHLXJYMYPKWOJGZUENTRDFGYACTTMFZBHGPWSIJVAFBOUSTKDCXFWQEUZCGLUTUMXNRUCSQLMGJXVLTNHCVIFVHCRLPHAPJXWHEUWAJDXBVKBVLPGUSBEIGIKFLEAXTBSBRVYKIZOOGXFHGJMJMJNQAIELYNZRNHNORDFZSHHMSIIDVTTLEIBBC");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("ADPNERBBIWUMPEYNTAOERVCGQXPBULCPYEQGWLITFXXUDCMSCZODFGMYCORNMYQNYXIJKRNAUSFUTTVVQFTKGJRQNQFKHDKWAINUARNIYZWVVJIVKHVAEQXQGWKAPDQMZZB");
    tmp_msg_0.formation_name.assign("ORSFHRMDBDWZZNXFVUQHMPOZZRZRCAAKDLLTYDIPGZVCELWAMWDIDBAEXVVIYTTPJWQYJZBYPZCJNOQGJILZYKVRKFOLMSDEXIFMHRFVQBCKUESRCUHCBYXMAURBKSKNKWWEUSTEQSWPMHQGJCTYNUVXUFISUBGLHTTDNPYGWCIOJMQGRYZJ");
    tmp_msg_0.plan_id.assign("VAAWDSCSFHTKQ");
    tmp_msg_0.description.assign("VBVHTFHLLSXRECZVGEURIFGQOWODNUIAZJWVWNRDWFYBBESDIUIXPKKHZHGJANMGQXQSQTTEGDVJVEQCSHPUUDWYCMTYJRXIGOMLGKLHSDBJDBPX");
    tmp_msg_0.leader_speed = 0.847963465718;
    tmp_msg_0.leader_bank_lim = 0.43140335674;
    tmp_msg_0.pos_sim_err_lim = 0.731474177276;
    tmp_msg_0.pos_sim_err_wrn = 0.296201271373;
    tmp_msg_0.pos_sim_err_timeout = 60942U;
    tmp_msg_0.converg_max = 0.980670260768;
    tmp_msg_0.converg_timeout = 37404U;
    tmp_msg_0.comms_timeout = 26835U;
    tmp_msg_0.turb_lim = 0.69749677224;
    tmp_msg_0.custom.assign("VAPGPMZHAEWRKTKELFFWNUQGHVCPFSAXMXGUIUBGZKVFCDWGVBRXLCSIKQUOEXKJUQONSKRGLXXDTGQIN");
    msg.data.set(tmp_msg_0);
    IMC::GetWorldCoordinates tmp_msg_1;
    tmp_msg_1.tracking = 82U;
    tmp_msg_1.lat = 0.446509863008;
    tmp_msg_1.lon = 0.650376716321;
    tmp_msg_1.x = 0.746100304685;
    tmp_msg_1.y = 0.757532554382;
    tmp_msg_1.z = 0.0205691909063;
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
    msg.setTimeStamp(0.6038265432);
    msg.setSource(23846U);
    msg.setSourceEntity(97U);
    msg.setDestination(14391U);
    msg.setDestinationEntity(3U);
    msg.maneuver_id.assign("PNSGADOUYBSQBZEZPAXIYHPMETPYTBHLXEZSBJWKIQDUDCOBVEXRFHRYAQSAECBNQMGIMKNREIUXSGOZJCRXGOTMFWWOFJSSRNLCPGYEUKQFJQKYZRJTWUPHMVCFVNEFGAISNTSYV");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 41173U;
    tmp_msg_0.lat = 0.0101236179742;
    tmp_msg_0.lon = 0.557087352411;
    tmp_msg_0.z = 0.863129252345;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.speed = 0.131004001129;
    tmp_msg_0.speed_units = 200U;
    tmp_msg_0.syringe0 = 173U;
    tmp_msg_0.syringe1 = 185U;
    tmp_msg_0.syringe2 = 34U;
    tmp_msg_0.custom.assign("IMVOKFXTAPDBSUSVZDZFHVFFDE");
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeadingRate tmp_msg_1;
    tmp_msg_1.value = 0.683800563607;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Correlation tmp_msg_2;
    tmp_msg_2.beam1 = 7U;
    tmp_msg_2.beam2 = 211U;
    tmp_msg_2.beam3 = 186U;
    tmp_msg_2.beam4 = 107U;
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
    msg.setTimeStamp(0.397054286113);
    msg.setSource(16790U);
    msg.setSourceEntity(143U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(118U);
    msg.maneuver_id.assign("WRDCTNLBRLWVECDLBGGWXMVRFLBTDONDFXIMYMSUIPOXRAYKFFLHNPZFYAQ");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 28764U;
    tmp_msg_0.lat = 0.0337943917195;
    tmp_msg_0.lon = 0.39361977839;
    tmp_msg_0.z = 0.302292999281;
    tmp_msg_0.z_units = 57U;
    tmp_msg_0.amplitude = 0.654291125465;
    tmp_msg_0.pitch = 0.750879673841;
    tmp_msg_0.speed = 0.533418756832;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.custom.assign("ZNNDJSWOXJDWWMISEWOHYXBDQQULNGODGZJIBQTJNLFTNKXPUVVILUHMNOORMUPPVPSXPUSKTGLKAKMIAXTYOFGABMPEFFEVMFZKPJXBUOZSRNIEVWECRFFNAWWCEMXLIVZJAHDBBWJHGDKHSSLYQYHKTGHKBAISDMDULXCORVAXTYVCGYRNZKEOIWW");
    msg.data.set(tmp_msg_0);
    IMC::NavigationUncertainty tmp_msg_1;
    tmp_msg_1.x = 0.514688775588;
    tmp_msg_1.y = 0.102875916037;
    tmp_msg_1.z = 0.695695718645;
    tmp_msg_1.phi = 0.871750022503;
    tmp_msg_1.theta = 0.805211619049;
    tmp_msg_1.psi = 0.318808428463;
    tmp_msg_1.p = 0.251809653232;
    tmp_msg_1.q = 0.362043172218;
    tmp_msg_1.r = 0.655622794292;
    tmp_msg_1.u = 0.166270935584;
    tmp_msg_1.v = 0.933935195703;
    tmp_msg_1.w = 0.298772904831;
    tmp_msg_1.bias_psi = 0.677839789171;
    tmp_msg_1.bias_r = 0.513335687064;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleLinks tmp_msg_2;
    tmp_msg_2.localname.assign("STEIDRLAZLXOVCFAEOIPHSUDMZJPJFFTQGKHXLCNHAMUIRPSIQUNLBFNRKYIJNPRBHAGFSFERUBBWIDCYGOEQRFGMKYTDXJDUSCOFYHNFTUKOGIJVZVJNVVHLVZMWVHEYLSLCBYOVQZZTJXPUTIADOPKLQDHNWKNXAXYGTCWVSESMYKWXEWDFAEQWMCQAGRHKZYDZQSJCGCPWKVXUUWHPTXMARCZBRAMXWYSJKEPLMRB");
    IMC::Announce tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.sys_name.assign("GZHNOHLBIBTUYT");
    tmp_tmp_msg_2_0.sys_type = 171U;
    tmp_tmp_msg_2_0.owner = 30675U;
    tmp_tmp_msg_2_0.lat = 0.537977064351;
    tmp_tmp_msg_2_0.lon = 0.620439077715;
    tmp_tmp_msg_2_0.height = 0.352636350557;
    tmp_tmp_msg_2_0.services.assign("UJPPGLIJHTGOKDCKCPFYREIMDKQTUOPXFNEKXZASJUKNORUYJBDSOIMRSTXTQYNLFLBBZAHHOCGXJSUNBZCFZOMZKIKXQLHVUQNSLWGSWIOEVJVMGGYBQCXGBLHUVTFTEDVGQCHWAU");
    tmp_msg_2.links.push_back(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.530293312995);
    msg.setSource(3977U);
    msg.setSourceEntity(208U);
    msg.setDestination(34451U);
    msg.setDestinationEntity(68U);
    msg.source_man.assign("DKYPEZMGXHASKGYXJDISUIBGMYULRPZQUERJWBF");
    msg.dest_man.assign("LWGOTNKJNHCOEKZDCJRTFXLQHBEFRXUPPFZOUDJVTMLRANHYCQKCLBXYNUZFRGBYSYAAXMGIQSVUPHGSIPJJJFZTVLQRWZTSDONWPVKGCXAMHBEIYROLEWFSVTFHAZGDDVTJMICNTYPWWBNDZLIPUGXRCMFU");
    msg.conditions.assign("BLJKZSCLZYHLCJNZHHBPJRBPNJLCIJZHYDGRCGTVWEWZKVBMUHADSUFQBGEXEFWXDSGDPPCQHZOPYKVFAIVIXWVUNFJXSBUIZFEVRNKOQQQAJRTQOFLZYRXGKEYRXKVFTEWYIMTMDMJACYOIICNFZGU");
    IMC::AcousticBackscatter tmp_msg_0;
    tmp_msg_0.beam1 = 0.220398586489;
    tmp_msg_0.beam2 = 0.515718359049;
    tmp_msg_0.beam3 = 0.829562247431;
    tmp_msg_0.beam4 = 0.66940518246;
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
    msg.setTimeStamp(0.182481426302);
    msg.setSource(41629U);
    msg.setSourceEntity(214U);
    msg.setDestination(55265U);
    msg.setDestinationEntity(144U);
    msg.source_man.assign("MRMARTOHODELVJCOBOVNPXIHMUVHTCLZUQOGRVNPGQPUXUMKSDMTEMYHKLQXDBQHFWVADSAOJTIIOJKDRNYIAIYSUUHQKPXXLODJKCBLPGWCGGZCXQMLHFESFEOSARVCIGLEWNUGYWAEMF");
    msg.dest_man.assign("UFIMJOALCDEXMEPDVZVCOBUZUNQJZSCHTCWHRRHXRSKXVIWUENFMORJQSAWWPLAZVFYJGQHJDKAHGLIOBYSBZIRJXOYDEEQIXTADPLGBEDMMKSFMFRQGPEHPYMVWCHEQV");
    msg.conditions.assign("LAILUMNJFMYQYOEZQYGIRVMUPCUDVVNAVCRGMTSWAREKRJSGAUWYCTHADXWDOURNJKSTOXCWOIRWZSKYCUHOZANHLFKHKHNUGQQPPTAJRSZJSQCCDWTOBGJWNJWQTMVFBPNISLPKXMELQPHYGGNVRBBULFDLBXFDRIUIAEFODKGBFDNFMAQIKDTSYMYAQZJSSQEULYIXVPWEXREGOJIMZPYXLJLHHZKEZFPCHNEMFVTBK");

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
    msg.setTimeStamp(0.481238251774);
    msg.setSource(39062U);
    msg.setSourceEntity(21U);
    msg.setDestination(31166U);
    msg.setDestinationEntity(242U);
    msg.source_man.assign("CQUMONEWCUWHVCFPESTUROLNIOPNZODIXHFQJTRNITQBRHYLMBARUAGZVKCRKYNTYLDEPBVYUSTGFNYZEVGTJLJFAGBCEUPOEYDDRGMAWJCP");
    msg.dest_man.assign("ZIFDOASZWXYEOXAAVBXXRQKFJRFRUUBYJYOGIXVCWPSQMUCLDNVYYIFNKTSFCIDCUKKAAQMPLJVHBXGQSBSOHCCKWKJNBBVARSTZNATLEXEFSZEOLSYDZDEUTOVWECJNUHIXKZFTJDMMOMWUPMWRRXHMHHLRURONKDFMOVACGQGPKEYPVA");
    msg.conditions.assign("GNCIYSPYARVOFHBMSKKBLCREEKSNBVILGIQENUZFOLJKXBBLTHQJCWZFZPYLBTMCRFVILHHDJYXUGYVOPNICSGEQPIDYVWAEDAZMSRHMKVPUEMVPNJMVUFHEERWTVDDLFTJGQNCTWUYQXAYRQIKPLUBKMQXGZSNCOOSCWZXQUPLWZZOJOSRQAPMJABHCFSATBTNOD");

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
    msg.setTimeStamp(0.251397579099);
    msg.setSource(54462U);
    msg.setSourceEntity(138U);
    msg.setDestination(22968U);
    msg.setDestinationEntity(50U);
    msg.command = 70U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MCRTCTRGQIHHQPJIOYUKYJQGQTSPWPNWDFZMIOORMJIYETSENDMVKGVIRLVUMHSTVQJXZNPBURYPCNOLWWRAOIDZQQWIHVDWFBLXXPJJBSLZDFSERWUSRTSMYFTBVZKUCJHHDDI");
    tmp_msg_0.description.assign("CHWVUZIPUCMDDRNYAZMNOOQVOMZYAJHVTGXAHQCCIKVEKOLNTEOMOWYNDBHJLGIGWJCGQTXAFOCLJYBRTTXRMMXHVVRELVDREZBPGYUTFYIUAZBBN");
    tmp_msg_0.vnamespace.assign("NASGZQZMVEUYTMHXHBSWKYVBVPCLNHGIGEJPYQJQSKBAJYUWYHFXUFXMTGOIQREPDSVDFROJRKRWMSLFYDQXKLQFBCNLCDFWXNJJRTXB");
    tmp_msg_0.start_man_id.assign("IQIIQKHJMWNCYLWESMCYVTETDWYBXGFOBTHYAFXFBUHODSWDHUNYFYCIZGQWHMEYFBMGEVDNFTVNF");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WYQRSYHKKEAYFOEQAQJYYRCCRZFDWGTXMESHJOZIRHJTICJNRBDZLKLGEGFPBLQBIIGKWMBYDCGLVZKRHLSNNXFCVNZNDFJFFPSWUKNWECNRDBUDSMHMDQEDTOXVMPIBZIOOPSAUMUEXAAQQZDLJXXTNIWBBUUVZXIDVFEVZZTONPBOWXLPMWVSKKAQHTTTLUGNTYFRAOOILYEKVPJSYHSQPWGAOKCVMJLIXBCMGEASYGAPXUUVQGRRJTCUWJ");
    tmp_tmp_msg_0_0.dest_man.assign("HDSINWGXKITBQZOCUTWFTGOWXWZBNXMMBQGGYSWRANZDESRKEDPPLDXJKFAMMTMDRUKXJEZGOZTUJIZVUBRHGUPVRCAKCEAXPQPOZCJQASPDDLXSYHCABGQAXASHIZWYHFWMRPJKGDTLYVRWZEDBUYHOBUJVBRNLQGPFMTFCMLYYFVYCIPPMAYBHGVYKRKJJUNNHKOTFSOUWHLBNQSE");
    tmp_tmp_msg_0_0.conditions.assign("YMQEECBBORVEYOPTGJEFNUDHPBPQOWJWQFOLWWDKCYQLWXU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.957656659163);
    msg.setSource(22666U);
    msg.setSourceEntity(100U);
    msg.setDestination(34436U);
    msg.setDestinationEntity(183U);
    msg.command = 49U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EYNRLBBHIKBF");
    tmp_msg_0.description.assign("YLFHMEOPQYKQFNQVGBSDLTLSUDEUFCIZTVHBZATZCIEUKRTXFXMBJNSIXKOQIGLVALLGRZZZLNJNRZPTTXWBKBQRDRVOFNERAB");
    tmp_msg_0.vnamespace.assign("HDQAANTVMXDYSIJTRBHGJZKIUMQURECGXLUGEPKAZOIXUETNWTFCWMNUANYHNJVTEWVSQLLBVKMNITWYAGNECQYNVZMMFJVPNRJKYEFQYPZYFDQBDLOWSHTDALRCDYMUAFRHHVLFZJFKMOCOPEISO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JHBMHERGSOOSITSRCZMUZWLTFYFNEQZFQLEULO");
    tmp_tmp_msg_0_0.value.assign("KUHFGAFKYRNZQLDIGEHYVYVOJSGPELYJWQTHWNAMMVSFABWCXUTGLPHDXBQROJZECJLRNPNSPZTLKJYHCOOQXWLBZIVKCWTNPONUASJIXKFMAQZBSPKPAIRUCZXVIDBIWFKSOQTZGJXGYPDNUJCYWDDCFRM");
    tmp_tmp_msg_0_0.type = 235U;
    tmp_tmp_msg_0_0.access = 128U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TLZXBSIRTLSMXIEJCWOWIEJYNMAVJJTTOSGYLHAJEOLPDWSZYJQCFFOPUUXALQRBFLRRWXVGBBSOSOKPYPDEVWNKWOQZDAVHHOMOZBVSMHZJWQUESDMFUGCGEFKUVBUXDRUWBBGN");
    IMC::RSSI tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.833791369655;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 17362U;
    tmp_tmp_msg_0_2.value = 165U;
    tmp_tmp_msg_0_2.error.assign("GBVXQPJZIFEDISOOKIKQNWZLASQKYIFJQUMMZEIJMDGICSCVBCDXXPZKVCTCTRCNLTDHRJZHKAGQJCVOPYKCGJREXBGDVFFBPMHLIALFOMYVCWNANBBVRTSMLPNPIXQUFWEJSOLZVLDAEHVFOQYFRYWYEHOWEXFDYRUAXDGPZEYHIYNKOHAMJMTUHAYCOAXUBPRWHQLKLPHBEBKJNSTRW");
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
    msg.setTimeStamp(0.882402896754);
    msg.setSource(8554U);
    msg.setSourceEntity(141U);
    msg.setDestination(41542U);
    msg.setDestinationEntity(22U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AMNKLGQZAIPXUMRJTVKJXWRGKCPPCISNKTWVXSGBRGQESVTAYVGASRAEXDZDYALTPDNCWIWYNTYYZZODNHTVRJFKHNRQGO");
    tmp_msg_0.description.assign("LMSBTYWJKIOIMSZXOBHZDUKBDPKBOPSEJVPQMMJZWNKTDZHSPGYNLWLKHEZRWWZPPSVAGHUXVVICWZUBQUBK");
    tmp_msg_0.vnamespace.assign("JGWKWMTLFDUDQTUFATBVCPIEBMOHRMOAXTEEDVIMOYCSIZBGSPFELCBZCZNKZUENATQAURIQJISRJYIKGGLRPOKXLWHONXLXKPPJNPBYEXSWVQGHVVVKQGPJUOSNYISERXULWAEBCXVADCDUXYZTLMMLRTVWOZMOESOWQSZGFCQWUVJRLJZQIGHPKCDTCDDMNACYDSXHMDLHBPAOHFBRNY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XQQNCALXCQHYXZLMTHBWSVSKKOLYKYMFJKCLEFBNAFCFWPBOHKTFMOZUZDALJVNWADNGLCEUJLBHDBIPJOKZIRJ");
    tmp_tmp_msg_0_0.value.assign("WGLOXQZBZCSLUCVUTKIAOFJRIRDDYRFAMJBBLNMVGVOCOUGZLZAPXOLSZQRJOEYAHHUMKZNMLEIQPIBIGEQTATVLTGUTSJRIQDKEBRSEIWWVUFHFIFDNTCYRJXFAZHSZLMNVPSAPCXUEDPHRDHMKU");
    tmp_tmp_msg_0_0.type = 11U;
    tmp_tmp_msg_0_0.access = 133U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UPLKPVXIEXGAVCDUINFPCUYIZMXPDFMOPQJRATTVNTZSFQBBJDUPE");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FUYTXJFCJCYMQCHJBEKERPHYSOOOHHPPZZIRZNPQGFJTAWUWWPJSOIDYVAPHNNIJCNVBLJYREVBMIOTGERTIEXLWRLLIWRNAVQZCDAEQUGRZHKTDIZDSKKSKFZ");
    IMC::Drop tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 43910U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.347530733112;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.371283176233;
    tmp_tmp_tmp_msg_0_1_0.z = 0.619719989474;
    tmp_tmp_tmp_msg_0_1_0.z_units = 219U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.072134652734;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 243U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("FZIUEBWWTGHEBOESTPWGBUATMQBJABTNJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.203469947739;
    tmp_tmp_tmp_msg_0_1_1.off = 0.399104812991;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.906519972106);
    msg.setSource(41172U);
    msg.setSourceEntity(53U);
    msg.setDestination(48751U);
    msg.setDestinationEntity(237U);
    msg.state = 78U;
    msg.plan_id.assign("BETIEREQMSOABXFSDKICEWGUMGAHQWPJAQNQLZMIGFMRDJWDVYFGXOUOLS");
    msg.comm_level = 138U;

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
    msg.setTimeStamp(0.335443936582);
    msg.setSource(8133U);
    msg.setSourceEntity(206U);
    msg.setDestination(2955U);
    msg.setDestinationEntity(78U);
    msg.state = 80U;
    msg.plan_id.assign("KYGVKBYTEQKMYWXLXSBTKLNJWIICZYOCGPWNMSGAUEMTRUKLCNVVPIDBKROEEFFFDSTQJAFHEHNDHMAHSWNLARHIEZIWODGXYNVJBDSXYCBWQGATLFSSLCPHZZCOJDLJXTTOVQAUBPGFUY");
    msg.comm_level = 112U;

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
    msg.setTimeStamp(0.0932235096931);
    msg.setSource(38267U);
    msg.setSourceEntity(1U);
    msg.setDestination(48712U);
    msg.setDestinationEntity(173U);
    msg.state = 203U;
    msg.plan_id.assign("GECRXTHEXFOGFO");
    msg.comm_level = 49U;

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
    msg.setTimeStamp(0.459315086147);
    msg.setSource(33320U);
    msg.setSourceEntity(9U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(166U);
    msg.type = 46U;
    msg.op = 159U;
    msg.request_id = 58494U;
    msg.plan_id.assign("GUMJXGUKXTSOISCXQBLSFJANKXXBKYZBUYXYPZZYBFPSRYUILJHMIAURJBJRWPWCLCTZVQCEMMQGMSEGSVIFHHGIEOTVCENBTOYSLZTIHGPYPRAGCQDNOCPKQHUHKVUMEFDAUEKJFQJRTDWVFPXWBJVVSNMKQLEFTEWXIRYOTWFALIRNHZIZILD");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 4275885089U;
    tmp_msg_0.destination.assign("OBCKNABCEOEOEUOEPIOINQQQEZPIFVUKIMVXVBRDZJVVMHTOMBQNFUBFSDJLKWRNVMCWLHLUJZSSKGTDPABDDIOUIJTTZWWDDVYQXXQRCULPAYCFAMPJBRFONRXLXDLYAFGXMKKYEQMSMJXVUHIYHZMWHVDJGZPAWRWSGNNRPPEHGMHASXSZIHKIWCSTCOTBYFAAJGHANLSQWQKQIXYUDKCGFTULJVTZZEFCHRY");
    tmp_msg_0.timeout = 64314U;
    const char tmp_tmp_msg_0_0[] = {1, 110, -37, 97, 26, -19, 78, 91, -44, -81, 102, 109, 106, -9, -109, 85, 125, -80, -41, -92, 94, -3, 83, 65, -87, -40, -112, 35, 87, -105, -113, 75, -57, 12, 95, 96, -92, -124, 113, 72, 110, 52, -24, -64, -99, -64, 88, -2, -116, -125, -38, -75, 107, -21, -96, 18, -80, -84, -69, 33, 80, -117, -71, 20, 62, -49, -21, -95, -123, 117, -2, -7, -17, -72, -107, 89, 18, 119, -88, -59, 59, 105, 72, -37, 8, 54, -12, -96, 124, -50, 119, 10, 63, -59, -90, 46, 110, 67, 67, -39, 65, -51, 44, -76, -90, 46, -16, -21, -60, -48, 92, -105, 67, 95, 100, 16, -34, -13, 67, -120, 1, 101, 60, -32};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VEKDQTLKGPMDNVSUBPORPPHOHWABUITCQBNWNGJQSTKIFIOWRMRZVHUXAZXFAHYYYLWMNEOMEHLBJSBIGZLEQVAFLTDRJVGAAVZCZZXMOCYDULHAGLHZUHEGDBYFGQVFDJIUJTHVUGPSIKNYCAXMRJKRCNXZAGBQNKNJUSXTCVOIWRWTWZMOKMPVEWBJW");

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
    msg.setTimeStamp(0.130020822471);
    msg.setSource(12282U);
    msg.setSourceEntity(67U);
    msg.setDestination(7852U);
    msg.setDestinationEntity(60U);
    msg.type = 238U;
    msg.op = 150U;
    msg.request_id = 14654U;
    msg.plan_id.assign("FGPZNNYAMUFOCRIHSGZPSWVGISZKKABQEKDEVWBNLEWGTCRZEYDBJCMILOWXVVHWLETKCNTPYJDISSJZXRVUTZGFZLDWRBCHCHUXIUKAMCSGHBVPZWEQRFJYMPUQGEKXYIDJXHYDARZOMRZNQMPDYIKGOKGRQQLGJXKUNOENQTHHEAVDBNEMVUJUKARQBCFFJUQSAIXOMSWFODFSYVNTUPJXILTLBOOYBNTFSPX");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 62819U;
    tmp_msg_0.name.assign("TRUZCOIRLGLL");
    tmp_msg_0.custom.assign("IGDVFOJZDTRFZRRKGKGUWEPJYXCDTCAEYUULJDHTVLBTNZHKXEHDYJMBKQHNRLERQJZGVLPCITDQFNOWRDKCHGMSMWMYKVRPZOSSPTXAWUBHBPMOUKOWVHNCBALJQNROENCLFORILAYZQBVZWBILPXIUUUSAQXAGGPJMRQFNGUFSSEJKIPNMXVISXITJCATFGYWFBBYOWVSYHULNLCXFGSYPZEPOZMZAVCEMCSVF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SWMNROFQIKV");

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
    msg.setTimeStamp(0.44239959812);
    msg.setSource(3413U);
    msg.setSourceEntity(14U);
    msg.setDestination(29877U);
    msg.setDestinationEntity(234U);
    msg.type = 219U;
    msg.op = 239U;
    msg.request_id = 24017U;
    msg.plan_id.assign("ERTSLVXGFAHNGFXHXTUITMYGABSBMVAMJHYRFQURXAYRTKCSXXDBLRMNPFQAUOIZQVPRYBLI");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 244U;
    tmp_msg_0.step_number = 145U;
    tmp_msg_0.step.assign("ABKHUIGLDHLUJJYQLLDXAVDPXFHQBQEHANCRFHVZESJGKAXWZMNSBNUGVHZEQFBSILECPHXOGKAVPSSVQSXICPSKZCWXKM");
    tmp_msg_0.flags = 23U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TEFUHCORHKBIQZHNSXZLDUKOAFRSHOMXYZELOXJPWYNQBFA");

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
    msg.setTimeStamp(0.323754270192);
    msg.setSource(49038U);
    msg.setSourceEntity(202U);
    msg.setDestination(55486U);
    msg.setDestinationEntity(133U);
    msg.plan_count = 22520U;
    msg.plan_size = 2754925499U;
    msg.change_time = 0.148797556085;
    msg.change_sid = 7502U;
    msg.change_sname.assign("OJDECYAWUYWJIFESBTJMUKASJANMDBAHEPITGXKVECKVBVRJHFFEUUGU");
    const char tmp_msg_0[] = {-98, -101, 35, -127, -27, -101, -61, -34, 82, -15, -111, 48, 11, 120, 11, 48, 59, -86, -36, 17, 66, 99, -30, -9, 62, -94, -79, 5, -31, -9, 105, -24, -43, -34, -20, 105};
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
    msg.setTimeStamp(0.398496597864);
    msg.setSource(43051U);
    msg.setSourceEntity(225U);
    msg.setDestination(53363U);
    msg.setDestinationEntity(149U);
    msg.plan_count = 23516U;
    msg.plan_size = 160873047U;
    msg.change_time = 0.822001744495;
    msg.change_sid = 35465U;
    msg.change_sname.assign("JDSNMIYMBJDTJEVFEWOOEGAGPOYPQICVKPQAJTCXDM");
    const char tmp_msg_0[] = {-120, -60, 102, 102, -35, 104, 51, 56, -6, 83, 56, 66, -79, -16, 32, 64, 124, 100, -101, 9, 67, -46, 21, -118, -49, 12, -41, -57, -7, 89, -125, -45, 103, -32, -5, -124, 80, -108, 35, 58, 81, 19, -89, -91, -54, -44, 26, -28, 90, 50, 118, -49, 77, -102};
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
    msg.setTimeStamp(0.541929435968);
    msg.setSource(54469U);
    msg.setSourceEntity(8U);
    msg.setDestination(8547U);
    msg.setDestinationEntity(123U);
    msg.plan_count = 24151U;
    msg.plan_size = 346607502U;
    msg.change_time = 0.756077285168;
    msg.change_sid = 35378U;
    msg.change_sname.assign("ZNLQZJXUQAFQIOLQAMNYTBGEMFEQTCSFSHSOLOSFKISGKVONYKTSWKGMFMSAZPYBZJDWEJCKEKWTEHVBLBWRFXHPMABHETQZKMJIUTDRIDPXPAPUYQDTZNXRKHRXPEDWLRKYQYVOFDRJWURVJPSFGFNNVCCYPNLHYVWQGBQCDROIHBDAFYORVNIXIVCGJLTMOPYVZEEUZHRBBJUUAWAIMWVZXMONDHCENBTLSPSMKTILCIUGUJDXUAGLGXJC");
    const char tmp_msg_0[] = {-105, -14, 70, -19, -71, -90, -10, -12, 16, 46, -33, -114, 14, 122, 28, 52, 111, 116, -59, -70, 112, -1, -5, 126, -118, -69, -12, -63, -98, 55, 73, 89, 113, 85, 107, -117, 32, 6, -99};
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
    msg.setTimeStamp(0.951345839412);
    msg.setSource(3127U);
    msg.setSourceEntity(46U);
    msg.setDestination(23933U);
    msg.setDestinationEntity(195U);
    msg.plan_id.assign("XNYUVWVHKZIJYEBDZWKRDCJPYQ");
    msg.plan_size = 20540U;
    msg.change_time = 0.217039162832;
    msg.change_sid = 27172U;
    msg.change_sname.assign("DXHFALYKHLPNVKCPEWROTTRYINQUSBZADLDLOZFKSIZXGZQMRVSTRGQUWQDBJKUHMYDSWZKXTLFPTONZVCBJQWJRXTEEKZBYUYMNNXGYOFMPMCKRRWNNHDOTCRAFQAIOUKMDHBJUBNOHTDBUFOUHJFVVEWVZGUMTXVGQNADGFPSHVGBMIZPASXWCWRPSEYXIVGJDJCYRAPMGIYMXEIINQSVOTULPEFFCKILZJCJEOQWAISJQBBXPWLLSK");
    const char tmp_msg_0[] = {68, 46, -10, -3, -67, 4, -97, 82, 108, 26, -92, 101, 34, -84, 7, -79, 97, 100, 92, -26, 98, -34, -36, -26, -75, 40, -19, -111, 110, -114, 122, 60, -69, 6, -16, 79, -80, 54, 78, 19, 94, 106, -13, -114, 107, -80, -64, 111, 121, 39, 31, -59, -90, -69, 79, 61, -29, -73, -114, 51, -5, 18, 6, -41, 110, 89, 64, -74, -15, -59, -29, 116, 77, 70, -87, 54, 70, 83, -105, 6, -104, 25, -64, -44, 66, 20, -107, 0, 125, -43, -46, 32, -6, -92, -1, -123, 57, -55, -72, -26, 60, -47, 65, 36, 26, 83, 54, -66, -21, -23, 16, -20, 28, -63, 89, 77, 18, 28, -71, -58, -125, -128, -32, 40, 118, -22, 73, -77, 73, 49, -29, 6, -9, -102, -67, -110, 125, -126, 115, -4, -86, 12, -87, 93, -39, 14, -119, -78, 95, -25, 15, -104, 72, 76, 121, 63, -85, -119, 112, -69, -79, -105, -80, 121, -61, 40, -41, -14, -124, 52, -60, 80, -5, -61, -70, 115, 98, 121, 120, -77, -62, -20, 19, 39, 67, -96, 71, 86, 48, 125, 0, -116, 97, 21, 46, 120, -6, -12, -126, 79, 78, -39, 29, -51, -22, 102, 98, 75, -29, 54, -80, 74, -59, 114, 62, -14, 2, -110, 54, -32, 31, 34, 3, -116, -124, 26, -124, 91, -77, -68, -61, -72, 72, 17, -51, -53, 96, -101, -108, -55, 2, 11, -27, 49, -97, -120, 6, -51, -92, -105, -16, 38, -80};
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
    msg.setTimeStamp(0.494342419567);
    msg.setSource(64035U);
    msg.setSourceEntity(74U);
    msg.setDestination(27281U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("HRRSMZSJDYPCCLEHCNHQZCHOYNFWCJTHRZYWLYDLLWEETKTZNVRTMMSPOGRBLNATFFXKNUNKCKJUTZZLOIWUWYLQFGHXIBDTRDKPBVFIGLWPJJVDGMDOKYOAJXPAOOUFQCZ");
    msg.plan_size = 22446U;
    msg.change_time = 0.973790227231;
    msg.change_sid = 34455U;
    msg.change_sname.assign("ZWMIVCDXFWULKTUWNKMJCHSAJIKCNX");
    const char tmp_msg_0[] = {6, -64, -110, -102, 93, -117, -7, -101, 123, -108, -116, 66, -108, 12, 13, -55, 19, -82, -97, -60, 12, -14, 96, -66, 70, -101, 28, 116, 44, 90, 111, -47, -28, 103, -53, -1, -50, 110, -73, -74, 92, 4, 59, 78, -89, -25, -113, 4, -109, 13, 50, -22, -28, 119, -101, -73, 77, -63, -37, -45, -60, -102, 65, 124, 3, 81, -88, -121, -59, -75, 99, -93, 70, 73, -119, -121, 60, 120, 34, -78, -81, -58, -39, -39, -22, 117, -57, 96, 42, 19, -53, 86, 55, -14, 85, 92, -9, -102, -63, -115, -117, 68, 27, -31, -46, -41, -35, 84, 90, 86, -56, -77, 66, -101, 102, 4, -71, 85, -120, 115, -82, -24, 75, 66, -27, 56, -82, 111, -68, -112, 103, 82, 77, 50, -96, 77, 12, -61, 58, 118, 108, -117, 31, 105, -40, 24, 84, -103, -93, -69, -30, -77, -29, -76, 40, -5, 92, -9, 88, -78, -100, -43, 124, 65, -69, -27, 93, 18, 76, -94, -3, -123, -85, -102, -126, 20, -126, -8, -63, -40, 123, -40, 24, 116, -14, 39, -64, -56, -73, -8, -58, 86, 88, -35, -49, 103, 66, 113, -73, 39, -18, 70, -82};
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
    msg.setTimeStamp(0.419209316353);
    msg.setSource(18795U);
    msg.setSourceEntity(87U);
    msg.setDestination(55379U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("LMCZTTSUTPDAXJFQMIBBDJBIQMDEEBPXVGYZYYEQHKPAAFHAYXMHKLUVNSZESFQCPIZDQLJIEICGFEVKKMHRMNXTHUZBSXCSXANRWEOCHVKOYDZUIXVJLNPLIBGEROSQCWLRNXSOEOWBVLINRJIJDYMPPKOZGHSVCHTMYYURTUJPVFNRYGWATNCUPWWFOJSGVOFWRHNPXHJWGWKDBOSCTKTLDZRXJAFYABEGV");
    msg.plan_size = 20633U;
    msg.change_time = 0.508868601559;
    msg.change_sid = 62637U;
    msg.change_sname.assign("QEPSGWVSYLAQIVMTEALYFPKRMTBSQIKRLUSDGBZPDQOKYQNGYRFPPDVOAPTHXZVYBZHYVRIWZXQGCASJKNDDKTGTZTTPSBNBUMDWZRKJVOOWAHBNPOIBJSCALWLYNUAM");
    const char tmp_msg_0[] = {77, -101, 10, 29, -55, -19, 11, -110, 34, -47, -87, -71, -126, 36, 58, 43, -38, 5, 79, 12, 22, 124, 76, -92, -93, 65, 86, -106, 102, -117, 118, 83, -97, 9, 89, 20, -86, -126, 65, 8, -83, 46, 98, -20, 105, 113, 56, 107, -56, 5, -24, 85, -49, -76, 63, -64, 2, -40, -30, -89, -24, 14, 114, 46, -105, 114, -83, 66, 36, -75, 49, 103, 117, 36, -74, 110, 35, -19, 125, 65, 17, -116, 4, 22, -21, -106, 124, -16, -46, 25, 46};
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
    msg.setTimeStamp(0.629413987542);
    msg.setSource(34949U);
    msg.setSourceEntity(16U);
    msg.setDestination(1409U);
    msg.setDestinationEntity(29U);
    msg.type = 45U;
    msg.op = 237U;
    msg.request_id = 51368U;
    msg.plan_id.assign("HGNEMZAULZZWUQAFRMHBETEJXHWOVEQJXNJSRIHLFVFRHFRGBYPFZOKGSCDVDKTPEXWGAPABXVJRCUHXEXGACDJWJORQTPWSPJWCFADI");
    msg.flags = 10880U;
    IMC::Pulse tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LOQILEPYZSGCRXASZTUAMOXJMKTYOWOAWVNHAFWEBPLRRAGLMSIXOOWIKATSISJPYKGUPBUGJQSDXRNDPXBBMFCJACFHXKVHWWNBIHESNHTRFLVB");

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
    msg.setTimeStamp(0.343562418442);
    msg.setSource(45210U);
    msg.setSourceEntity(11U);
    msg.setDestination(58459U);
    msg.setDestinationEntity(38U);
    msg.type = 104U;
    msg.op = 25U;
    msg.request_id = 33971U;
    msg.plan_id.assign("IPNRQJKKRVXKRIXGNVHVETYJVYSRDFSKLZGCVFXSSORPFZMJUBEYVFEEQTXMULHEUQMIOOUGYBBLLHPCEKWYFDODGHZITUDVICUAIQKKBBKMOZWPAATQCCUZPGRYGTASNFSCDSMHHCDRLKTBQLJTZN");
    msg.flags = 2717U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 38613U;
    tmp_msg_0.control_ent = 123U;
    tmp_msg_0.timeout = 0.0838911850476;
    tmp_msg_0.loiter_radius = 0.914960703293;
    tmp_msg_0.altitude_interval = 0.873520946087;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZGCKBARECUPVSGIRCHBBLRWUCCVDUMDOMCDNSKGTOBOMFPVNOJLAJLJEZSKGXHBBHDWERVVNSYARAQGGKXN");

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
    msg.setTimeStamp(0.171493870344);
    msg.setSource(20179U);
    msg.setSourceEntity(195U);
    msg.setDestination(44104U);
    msg.setDestinationEntity(162U);
    msg.type = 181U;
    msg.op = 222U;
    msg.request_id = 53028U;
    msg.plan_id.assign("UPALQNOOVZASHTMORJWMYZFHQRQZCXQPXUGDJFXWYGDRDTGYFJIWRGSMAUIWBQJMZNQMTNVIIPOZCFAGBVZGWMRMOIZSJYMBHEPIOPXLCFJXLKEAOAKCWDVKELVQLEHANXEGOSIJTKZHTAFJRNIHDVBXDRNBTUDMPPYV");
    msg.flags = 29223U;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 200U;
    tmp_msg_0.time_remain = 0.789057111787;
    tmp_msg_0.sched_time = 0.0913918882916;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FHBIJXESNFVJNCCZSLRMNGAVYBNROSRHTLVJIEWMYHMSRTTSZNUZVQKJFAKIJKPZVIKU");

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
    msg.setTimeStamp(0.33411862655);
    msg.setSource(56467U);
    msg.setSourceEntity(62U);
    msg.setDestination(61565U);
    msg.setDestinationEntity(108U);
    msg.state = 42U;
    msg.plan_id.assign("AMXOROIBXGFZSCJOOEMDNPIAPFJRPVNSYIXCOQKDBLJFRDJUWYJULBJVTXXWPVHMNKYSLSNVDOBAHNZWFEHLQTXYFHVJFUKAEBPUTOBRH");
    msg.plan_eta = 938054568;
    msg.plan_progress = 0.324578754842;
    msg.man_id.assign("JEOWXLAQSPTIDRLCWNAHBZUBRSEXPLVVSOOBYENFHMCIPWQGVGJB");
    msg.man_type = 32925U;
    msg.man_eta = -1104829315;
    msg.last_outcome = 63U;

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
    msg.setTimeStamp(0.364027774852);
    msg.setSource(51416U);
    msg.setSourceEntity(39U);
    msg.setDestination(58048U);
    msg.setDestinationEntity(48U);
    msg.state = 162U;
    msg.plan_id.assign("JTUPSBALXNFKFRXBHLKFHGPHLTVCPYXTZSAERYZBMSBRGVJUOJTWGWQDCQMDKGZJMWJFPJAJMKWQWACQNBX");
    msg.plan_eta = -741696484;
    msg.plan_progress = 0.539318898411;
    msg.man_id.assign("ACLCUBEGOOHZUZQWXQVSXVJTNEYNYQDXSQIFHFWCUSNKNRMGBFSINGTOZDZIPUVZJPXYMRNFGRMVTDEOCKHISCYJFIPYUJBNGGCLJXCFBOOCCLMAKRZSLCKGHKJWDSMLKWRUJDHLOZVPBEALUADDPJBGMSKPBQODYNRWWTPM");
    msg.man_type = 33084U;
    msg.man_eta = 925438884;
    msg.last_outcome = 237U;

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
    msg.setTimeStamp(0.0501388033955);
    msg.setSource(64031U);
    msg.setSourceEntity(190U);
    msg.setDestination(35823U);
    msg.setDestinationEntity(131U);
    msg.state = 166U;
    msg.plan_id.assign("VJMFHBOUMGLHYSDCPZEKPXWAAGHVNPIZRHJQSJYIQJWSCIYTMXLKSURXLULJOCVMTHYQLJEHNIKETPKVTRUYEQDZJBKZGIVBICPCSASKGFGQKRRYAQZWFBQWVCMXQIYFZOUASFTKBHGATNEIZONODBBRFFOVNBXXCYJNUTTRTXZOBWZQODUHFDXEAJBMWADKKMILLDPZEHVPSPHVWEOLUPGYECOSSXMNDWCYRTALARFDEXUQVFPIWG");
    msg.plan_eta = 1698947237;
    msg.plan_progress = 0.925560293529;
    msg.man_id.assign("LEATRZMYSAVYJVLIDCLEFRFLELRMKHKXOCONOBNQLUJZBVZGDIQRNGAIPLIAYSNJNKLGDGLMWBGRVBXISHOXHOMSSRAGEMDPHZWUMTBFVPHT");
    msg.man_type = 18620U;
    msg.man_eta = 565579617;
    msg.last_outcome = 23U;

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
    msg.setTimeStamp(0.809054586923);
    msg.setSource(38223U);
    msg.setSourceEntity(93U);
    msg.setDestination(35467U);
    msg.setDestinationEntity(220U);
    msg.name.assign("BPVHENIUNLCLKLJJHAQQPSMUXWESFIGQMYOKUGQTWBVPCKGZUFUQWOOKEAHBBEW");
    msg.value.assign("SFIHUWJQRDFRFCZROWYBMJKLKVXAMCDRKPGNMVQLTBPCGJOIMUIUEYDSODZAGXMQEIZIBQVQQLJUJGQWYXQKXOFWSHTSPBSHNUXQVBDHHNKBWZMKXVNELBZLLHIXHGNACSKGHDCSJANNOJA");
    msg.type = 60U;
    msg.access = 137U;

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
    msg.setTimeStamp(0.407646032677);
    msg.setSource(44465U);
    msg.setSourceEntity(30U);
    msg.setDestination(34572U);
    msg.setDestinationEntity(6U);
    msg.name.assign("ROSSJSUXZHQGXQKQHVKBBFGUBURSYISKGISADCLCZDUIHHDVOZNHWLELCYFWHNWPELDEBLKJNULZMENZQWTXFFGILJKSQYYTYEXMKEGNFWAXENGJCOHMZOXFJZBICSTYQGWHBCVZBCVMTLNBJEAEMMAXOCTRYPIJKFFONI");
    msg.value.assign("PNMMGZRKRTAHPATYNPMXWSWCFWSOEJZZVKCNRXHHMASAJUINCLQIVFIMQGFKKBNVZBKQPURGLVZLKLTWBPRVDLEBPNYLAWZKBFGCQYLJFDSBPJUMXSEOINPEHOUCEFXOQFIFQXKNCJWXMDOZRQMLAQASIIUTYKAY");
    msg.type = 50U;
    msg.access = 52U;

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
    msg.setTimeStamp(0.803471314645);
    msg.setSource(42059U);
    msg.setSourceEntity(82U);
    msg.setDestination(24586U);
    msg.setDestinationEntity(211U);
    msg.name.assign("APJBWKFHZWUKLCVMCRSTDJKQDZSPEJTUWBFVXPZLQUOITOOLIXEHXJLDVMOEMGYMQAEATCKFDFMKGJJAWPHFPINQYSALTGFBQWACNHKNSSLCYYISYVXHUDGJZDFBQAOKJOYAVRGKEIMOOGIRCGPFNPTVWLMZXTBYWUTUXVYRMDVSHQSRUCCGLEIZMNYRQBIAPBVGFIX");
    msg.value.assign("GVKOMQOPNGIRQPXYTWBELOECGXPEMVQALHULWILJVMBSVVHUWODKDRYMFIAOWHBLBWBTLYPYMFZREV");
    msg.type = 206U;
    msg.access = 97U;

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
    msg.setTimeStamp(0.825756324434);
    msg.setSource(51953U);
    msg.setSourceEntity(44U);
    msg.setDestination(43359U);
    msg.setDestinationEntity(192U);
    msg.cmd = 142U;
    msg.op = 17U;
    msg.plan_id.assign("IUWOSKQRFLUDTNBSITZGWATGFFGMVFLFHGIHDUZSVPKPEXGWNNPYRSPUBMVZXTMBGOJBCQJKRESBEAYIQMLMVWDZKNFTIYXAXTYCUDCWLRPTSVZOXENFYCAXSXOVAYVYZDEIZENJJKOOWMFXPWRANJHCQDQSJ");
    msg.params.assign("NCPBVQLMXADEAJDJHSAQEWOLBMYWXKPTIRNXMWMWERKJASSFECWVMQLUJRCJZIFXVYLTWI");

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
    msg.setTimeStamp(0.635547378434);
    msg.setSource(2038U);
    msg.setSourceEntity(155U);
    msg.setDestination(52010U);
    msg.setDestinationEntity(230U);
    msg.cmd = 208U;
    msg.op = 159U;
    msg.plan_id.assign("YDPQNAHHEZOIMQBZECRKSSIDTZMT");
    msg.params.assign("EFVRFHOIJPYUZNLKUGOYTNUTXNTBWPQLAPAZGWHGTRBMPYZVMMRTBKFYLFXXLJEIJLMBAXEDLHKGQECKCXVSKZLZZKJUCDQCLABWKRNPZOKSCCUYVUAGOPBGISWMJHJZBSVNGHCQGPDYYYE");

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
    msg.setTimeStamp(0.110206686831);
    msg.setSource(55103U);
    msg.setSourceEntity(123U);
    msg.setDestination(18236U);
    msg.setDestinationEntity(51U);
    msg.cmd = 26U;
    msg.op = 96U;
    msg.plan_id.assign("CXHXSMLSFEIAHGEMFWCKRVGFIOOWBBCZCYVDRHIDTXJDXZLKVFOUNLPSTUDTBGYEQPODGUOHQSTMTOBIEUVCCZAYATJWFSAITSHWUYHCQJZBRWEBBUKKWKKXWHULLNNPQLTIGSJPXNYDRZNURJNDYDNYQGFRQZXJ");
    msg.params.assign("FRQGSRESAMXQMZIEWESAWZGPYDJRBHSGFCURYFLYSRMYMCGME");

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
    msg.setTimeStamp(0.792835823368);
    msg.setSource(25254U);
    msg.setSourceEntity(5U);
    msg.setDestination(34819U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("JQJKJDOKFXZQFJVFTYQHXZHBISURPENCAZWHAJZMZHDMPRKIPEWGXDBQJQTSMOKGHZUFLBCAPTKBUCVOMXWCYPQTERFODSMKGJOOJBISAENDAATHDIVBVGUAWNYVMLUQCDSYLLZCXKWGELISQPREEAGSMHGSUNCYMSCTRVYIYKNASRMTXCWBORRWWVGUOHLETBHIGFTLUZXUDTQFBPOZVJFXF");
    msg.op = 213U;
    msg.lat = 0.713699020602;
    msg.lon = 0.102342297067;
    msg.height = 0.419651954938;
    msg.x = 0.616061596006;
    msg.y = 0.117983048138;
    msg.z = 0.328858159045;
    msg.phi = 0.266416555765;
    msg.theta = 0.432534661194;
    msg.psi = 0.281767899764;
    msg.vx = 0.599605265804;
    msg.vy = 0.0525109989622;
    msg.vz = 0.574993169677;
    msg.p = 0.481904474809;
    msg.q = 0.350187305621;
    msg.r = 0.892941709003;
    msg.svx = 0.0341358803916;
    msg.svy = 0.278238808774;
    msg.svz = 0.137132949408;

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
    msg.setTimeStamp(0.405889719312);
    msg.setSource(7107U);
    msg.setSourceEntity(127U);
    msg.setDestination(11137U);
    msg.setDestinationEntity(144U);
    msg.group_name.assign("KOOBLGMDZUSPHJKISDUKLAVWCEDOHRLIGGJGEYTUXXNGSFBPMQRDZDVBQPLGMUFMVEHNEKQUQBFQUNRNXQDKACWXPMTUUWCIZTXASTSZERARXTYYEWILXZNYOGJMHAYXWVDZDBVCBAMZYPLBKJYNHFRWRYPNWHVCEKOCWNAQSMKIRBIGYCJIDPVPOWZLHGBMWDRTVXOUSVLOTCEIIEPQSLSZFTITJXOSFLAABZ");
    msg.op = 152U;
    msg.lat = 0.659355111592;
    msg.lon = 0.251265658589;
    msg.height = 0.744484996431;
    msg.x = 0.87682169237;
    msg.y = 0.358752546142;
    msg.z = 0.470028841848;
    msg.phi = 0.180422812022;
    msg.theta = 0.691157767177;
    msg.psi = 0.025061908585;
    msg.vx = 0.680389105011;
    msg.vy = 0.875965805097;
    msg.vz = 0.50451825517;
    msg.p = 0.0577485011544;
    msg.q = 0.102163152924;
    msg.r = 0.29536817383;
    msg.svx = 0.44560688744;
    msg.svy = 0.218846784224;
    msg.svz = 0.640591745121;

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
    msg.setTimeStamp(0.91039562099);
    msg.setSource(22515U);
    msg.setSourceEntity(196U);
    msg.setDestination(34212U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("TENJHHLLILKUZFLVVTXJPIWDPZQDNCCOHYBAXCYTQWDBEMREVRROCTMNVPFWUSKHUQLVMSLIOVJGITRUNYTFUISYSVPKEUZYDMIETLHNTOGBTWLVQMPZDAEMKTWOBQWMAIFHMNREP");
    msg.op = 173U;
    msg.lat = 0.086966126715;
    msg.lon = 0.770799222371;
    msg.height = 0.206181617294;
    msg.x = 0.298611627571;
    msg.y = 0.894467669644;
    msg.z = 0.100099157578;
    msg.phi = 0.801400170184;
    msg.theta = 0.607635020287;
    msg.psi = 0.0344263046212;
    msg.vx = 0.299387262701;
    msg.vy = 0.537477041339;
    msg.vz = 0.200416022872;
    msg.p = 0.577764374572;
    msg.q = 0.525957822299;
    msg.r = 0.0431164336024;
    msg.svx = 0.717554933943;
    msg.svy = 0.510007977283;
    msg.svz = 0.510346193426;

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
    msg.setTimeStamp(0.28163512061);
    msg.setSource(12612U);
    msg.setSourceEntity(157U);
    msg.setDestination(32400U);
    msg.setDestinationEntity(224U);
    msg.plan_id.assign("XCAGIAJFHX");
    msg.type = 38U;
    msg.properties = 83U;
    msg.durations.assign("HYMQGVIOICZYDHRCFBHOMSWAUWSZNDABVYJPDMOPUYLQXTJUUNFOPLNTABWXFKWN");
    msg.distances.assign("QHEJCZCKYKGHGNPGHJZQYWFOEHEJGBWXHFRSKVMUYWTALCLXADTDDIRZFQUOECQTWPXWTHJGBLNOIJMMASCMYPXULZBZVUGKSNWNPRRPNMAVOIFJUTNDHBDEIACHXXPENMNYUGERQBRKEPYTRMFYYQKBPBQIJIGQSTWFVZGCMEUQOEPHLAVIXDZCZWOLUUAJFGSHAWSO");
    msg.actions.assign("SHDFURGLAWSWBUIVQKOYTOENCATONERJCQQVTEEJGWIHJIMNV");
    msg.fuel.assign("QCKSEMZOWIYWUQIYFNHUILUJHEGTRQEJQOKOZCXFRAHYWFNDLXOVIXBVNIE");

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
    msg.setTimeStamp(0.153414862966);
    msg.setSource(9871U);
    msg.setSourceEntity(179U);
    msg.setDestination(44565U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("RMKGAYCYCSXMJPRDZO");
    msg.type = 96U;
    msg.properties = 223U;
    msg.durations.assign("KNCHBOMMLAJRISZAOQKDT");
    msg.distances.assign("FERXPXGSVZSADNNRJJDQWKRWTAPQTAHJ");
    msg.actions.assign("DFEPFQEFJAVCXGJQIKGBASQAPNXZHCPPDBTYFSUYORPXGOXMWKOJJDGBDUEYRTMLRJOVSUNOUMUZCVZRDMJVLCIFAGMJBYZLFBFVFXHKWJPOTQHNDYYSVSICUTPMDQBDHMWXBEHQTLSRLXRACENIKNPKKNOFMDUKUATSVOG");
    msg.fuel.assign("GIAFMBRDLSOCLCWUUAPHEIVGDBSXIYZWQPQSEUODHATKPZOYGRLWWYLZCYWJZOQVCVFSBXBITNSQPTPTLBQMKAFIRPJLMDPHNHHKRYQYJEHDGOIMOOIAXZTGCVTAFTRFNWUVSMZDK");

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
    msg.setTimeStamp(0.955200206081);
    msg.setSource(49776U);
    msg.setSourceEntity(9U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("QWMFAEFLHMXBXIOXSKCDRGADTAUERPZQSKWCNFNUTTTSHOFVSQRRSLTCHDEPKEMGZQVPQLOEZERKKZUDOMUPWPZNSIBYPMQWFJPRDUMBWKHMRB");
    msg.type = 4U;
    msg.properties = 162U;
    msg.durations.assign("BIWSDOSPVMHJWWZCKLYEVFUXDVTJVLGRCMZDAUQANFCSBLILTXUDUTBXOYKPDCTYWPZESVMKNAKEBBQAHP");
    msg.distances.assign("YUQIIEYEVOXCZVKBDSANEDTFOPIOLYYUVWJTVFWKLADZREMETNKYCUMQMOEFQVDHHHPHTWZDYWBNQGJZNVTFYXQNGZFCHJPZAZFURSUCVCFXRSUEGDWTFMKGYXPICRIBVXWXPHGLUBZENFAGAXMJNYNLXKYAPZAIAOJRMGCHBJWHKSDDZJTPBSLPBLSIEABQOWSTJKXLOSUBWMDNPLQKRCRTNCHMLMKTVSIQRVRBOGJKPIUA");
    msg.actions.assign("WQXVMTOOPQGNKENRSRUFRMPCRWYWXVVIFNTESVZICNLQTAUMFXMJNHDBBVTQAMXZVGDZHHLEJSKIBHXFNHRYELRFKZGLGKYCWNOH");
    msg.fuel.assign("LEIDRBYWNEANMOKQIFXIOFEPUHWPYOOZPAVJAKPEUHAVARFEKVZVTKFIXSWDBCGRSYUEHPSVLPGKDMRJKCZSRDFJRPUKHMQXTZNHTWLZKLNVNCDDYAEZOTDJIQJHMWRQOYUAGGTSJLQYINUPXMVYTFYVBLGNLTKGJZDWKXSNOFQCSXICTAMXEJCDFMQTXRJLQFBYBWLLZSXDGOAEOBQ");

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
    msg.setTimeStamp(0.112654170918);
    msg.setSource(22123U);
    msg.setSourceEntity(127U);
    msg.setDestination(2486U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.113237303537;
    msg.lon = 0.0488485832966;
    msg.depth = 0.689882222736;
    msg.roll = 0.193255512193;
    msg.pitch = 0.935713493325;
    msg.yaw = 0.5530147427;
    msg.rcp_time = 0.219869887314;
    msg.sid.assign("CBLPYWKSOYXJ");
    msg.s_type = 107U;

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
    msg.setTimeStamp(0.414540525433);
    msg.setSource(12848U);
    msg.setSourceEntity(15U);
    msg.setDestination(46718U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.463010504075;
    msg.lon = 0.446520141596;
    msg.depth = 0.832529679455;
    msg.roll = 0.630497128752;
    msg.pitch = 0.0718277148733;
    msg.yaw = 0.610318605424;
    msg.rcp_time = 0.105614489017;
    msg.sid.assign("KSBPCAGVNEEWZOXRCQDWVRBVFNXUWSQZYNJEIKZOSOTZAISPNUNSFVHIGIEYFQLKJPGMJEZDWUKOLSKJDHHFWUERXTWRRYNGHVAQLILQFOYYMBXUHWAEXGKQHMJQMEVOBIGYBEIXYHZCNAEZGUUXBOIGDSBTYYCHTVUFJWWPXNPFMWZYDLRTOKSHFLXTQDDVPODFKSPOGMLJBJRQVZCJUQDTNGVMBBTCUDMTJCANPC");
    msg.s_type = 222U;

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
    msg.setTimeStamp(0.669774415178);
    msg.setSource(46564U);
    msg.setSourceEntity(149U);
    msg.setDestination(9387U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.714231276387;
    msg.lon = 0.33045023146;
    msg.depth = 0.720605324023;
    msg.roll = 0.261329540522;
    msg.pitch = 0.0110519486458;
    msg.yaw = 0.653457245867;
    msg.rcp_time = 0.360239046696;
    msg.sid.assign("KAIFCFQSFWIHAMRHKOKWTSUJNZUHVKXYVHKTXYOURDFSGMVENSFXHZOKAZYORCRMZJSSFTRLZWHVHSNIVHPQMYCGDIROJYWFFBTQEGAEGBLWCMIBWTQBMVSMAQXXLJIANCUXVJDDDBMQHXXZOCXPUOEALKJEETGYDMZQAFUXEJYWBYIIYNJURMCGCNUUKQLVWZDOANPGGSEWHELTOBSPFYTDLBDRNUPKIVRTQIDPNZPOPTC");
    msg.s_type = 76U;

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
    msg.setTimeStamp(0.123230566008);
    msg.setSource(58126U);
    msg.setSourceEntity(219U);
    msg.setDestination(45801U);
    msg.setDestinationEntity(130U);
    msg.id.assign("ZUNSOZKOZYEPIFJDTYEEUPFUFNINVDGGSWWZHTQKQUINKLYQUCPEKHXDIYXGUGKPGWVXRTMXRJOOIZRCLIEOERYHRTBSCAMRSLPTRSAXBSSKG");
    msg.sensor_class.assign("LRCQPLDLDC");
    msg.lat = 0.50883568407;
    msg.lon = 0.452534783774;
    msg.alt = 0.000481208134824;
    msg.heading = 0.366927617201;
    msg.data.assign("AYNWGJKSQJXZZDMKGBNMDVUHZGWVUAKTZIDHUFPCUNPNHJJOORIHSTZEEUHWNAPQABXGLFFMSJTQRXBSLCTMSJQZIWYMKNYXXZRZHGCRLIMJUTTXRMKJFQSLQVDXGNYKLQFVLHPTALELBMSCBOEFADYQSVWEPFHDOOSEBEEWKVAJYHKYRIPGZWDCVBOGDUDROBCWXBR");

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
    msg.setTimeStamp(0.547224908957);
    msg.setSource(42378U);
    msg.setSourceEntity(238U);
    msg.setDestination(24455U);
    msg.setDestinationEntity(39U);
    msg.id.assign("XEEBDINCATLAVIXYZADPFXRPHFOUEXSNKGBJOPWFORKNUKOOEAGJRJINSGCRPMIHSVFLXAZCKKSHECCOYPWGHZXUYVHLRHBTNLWFZNQSTBMUJEVLJTQMKODGEZILRDPYRKCFWJZCIPZXYCCMVUHEQSLUBAQCYXTDSQDJIHFWXZODUAARMZVFGUJBWJBYGNRNQNPSHIKMMWTISLEQAPTBVYVEZTGGQJ");
    msg.sensor_class.assign("XOJJHCVJYIDYVROKPZJEZUWIRHWSIQLNBQGKGUZDVJLXEGAOXSPZLISVOWKERKVWMCTBWSQRDDNAQMCUBMHZMADGSDFAYFKPFMDONDEKGCQTQKBSTVEUYBNSZPARULHTHNAYTGCACMTTICNZLGFPNHAVXAZUXXXGRJNNQTFBLYXWFLHBRXFHTXLKEIPCBJUPEOKQFUDJYIWERBECKLUWMQWQFIPAIOSZSVBMVCHRO");
    msg.lat = 0.1175787759;
    msg.lon = 0.0705997971893;
    msg.alt = 0.624506644063;
    msg.heading = 0.98386097547;
    msg.data.assign("AABKWJZUKSYHKECXKBANRFJONQYZCSQNWBDGMTIRPTDKENGYILIVNCTRZCUMGSUEMPQJMJQXYAFAEPLNLTCOOGPSXFYIDNDLGMVVSAFBFZQRPTXOIIKWZJCHSQXOJWZRQIUSMYKAGOBBBJ");

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
    msg.setTimeStamp(0.900516401643);
    msg.setSource(57234U);
    msg.setSourceEntity(46U);
    msg.setDestination(51646U);
    msg.setDestinationEntity(162U);
    msg.id.assign("JEPTRFVRJBWWVORNFWHYPBHZUYQPNTWCCXRKJOYEVACUWFFOSOH");
    msg.sensor_class.assign("PFWHZBVDHTNWKEKX");
    msg.lat = 0.533106970911;
    msg.lon = 0.969881051147;
    msg.alt = 0.928554926616;
    msg.heading = 0.434684148579;
    msg.data.assign("XPTUUNERJLCSZYXICRAXTWKJKOJPVGWHPTACCLNFCFZVIEOWRFTEOKWKV");

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
    msg.setTimeStamp(0.284639428745);
    msg.setSource(60823U);
    msg.setSourceEntity(217U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(49U);
    msg.msg_type.assign("UADTYSJMCCEKNVAWBSZDZIFGSGESNHRSLMARJWMEMOHELXQVZSJLQOJPQAPBFDZNPHTVBJIIYFBHX");
    msg.sensor_class.assign("YXIWJPSMOXKCPEKWLEENNCMWOGBODXZRSJFWANMEKBTXTYJNKIVIWMUCBVHZQYUVCORGQDKEUEYCDBCYAQBROUSSGORMABSHGHYYXZCLFKTVDOUHMHRLPEUVZLUYBNAMALJSM");
    msg.mmsi.assign("TQHGMQREPMDCLATNEIKABRPWHMTQWKWFXQEXVGSKBLANAIDHBFJDCOYFJKOXDUUHVTIXGJZNTGLNOCKRXYXCJOWWRGWUOSYKAPXPGOCJRAHEVTNUEBIUDNCNYMEBRQUZDSZRQNIZJKLXQ");
    msg.callsign.assign("PZFAINYECKAKVVUDINPLSQPEPSSNBWFXQO");
    msg.name.assign("TPZWIALIXRCWQXNXRQGFNMSBKPUHCMHNJZUAZHECYZSXDRRSMKOFHAVTTIYSGAFHQDWWDKDTCLXOFGIXWNJKIJUNYSKGCYIKLIUNPLKCNPNCNPPDUKKXXOVVBTQAPQBAJAJORCDFZGVVFSHGWQRLULJVKPUSLJBETDWOFBHLIZPOXEZQVGYMDIERDEOBVYR");
    msg.nav_status = 194U;
    msg.type_and_cargo = 67U;
    msg.lat = 0.624039136249;
    msg.lon = 0.401533775542;
    msg.course = 0.093402945331;
    msg.speed = 0.596472014583;
    msg.a = 0.295097554939;
    msg.b = 0.514719209444;
    msg.c = 0.86852288248;
    msg.d = 0.307165459402;
    msg.draught = 0.920014903425;

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
    msg.setTimeStamp(0.306988018068);
    msg.setSource(338U);
    msg.setSourceEntity(13U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(75U);
    msg.msg_type.assign("KKYSFLIWPTPKVXECATWWUTAKNXJMWDMEOSBAAXDGSCUCQFOHYEYHGLGVTESHAPGHCUOEULUPKOPKYNVXLDQWISFXQKFBBJAGZRYSQDVYOZCOORUGXJDRNDPQWBNOBUCMLUIVZFFQMHTJDYZNBBCITLQZOJYVBWVEANJLHFNRZTRORGWRJTVPPXGQIYGMCPVRBIFJMILZZCAFUFHSINIDMMWWSQHTXHNESENZAH");
    msg.sensor_class.assign("UPQJOQFYSPARWXS");
    msg.mmsi.assign("TDDNELCKIQKORLCVZWPXJCDJHFAYFPGCNUWSFWJBFTYXYEPZATADTEVMEOIADYCGMSPASIYKIRKMRNHZBGAGSELBBEYJJPMJXIHUWXVAC");
    msg.callsign.assign("WJXRYFMWKVWHPMVAMOHNBDVIEMNFALFDXOQVVYUVXOSYCDSFLQRJIZCHSXCXRIZGBHHHICZJQTTZEPITMDCKXUDPEJQVNNKUC");
    msg.name.assign("OGQUMITJFRONPBHLVUICBNOJMZREDEAQUTGAXVLKYYOBR");
    msg.nav_status = 167U;
    msg.type_and_cargo = 219U;
    msg.lat = 0.892074957718;
    msg.lon = 0.557070113314;
    msg.course = 0.872872894394;
    msg.speed = 0.12969109646;
    msg.a = 0.693884939058;
    msg.b = 0.874417149609;
    msg.c = 0.74041381289;
    msg.d = 0.435956001617;
    msg.draught = 0.417774580251;

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
    msg.setTimeStamp(0.202704715135);
    msg.setSource(12537U);
    msg.setSourceEntity(127U);
    msg.setDestination(43959U);
    msg.setDestinationEntity(209U);
    msg.msg_type.assign("ILNVBXKWMOUSMMDXNVLDUJLZABG");
    msg.sensor_class.assign("FLRMGMWZFZMMASKZXZKIEKDQKFCAZKZAULKXGXIYUUWTHAVGBIDAHZNNPVYRZ");
    msg.mmsi.assign("JOAHMSTYMNKQWKSTGVFMCGBLAXGAVPDZTSJRCOLFZFCINHBOSZNNTHQEIFVXGBJPEZOXSMRCYDUGOIWELPIYJUDDCDZTWWGXNQCMUQBKKUARRSXRQMHCISSDUVVRKRAGEAFNNBHUOALWYHXFQJQKQPMCNJDXBXNZWHUOVCYYELUHS");
    msg.callsign.assign("XNPOCPNZTYNYTAFPHKRBALQZRJWEENBJQWXDUQOICIDXZIHMUMTOZKDISFVOYUKQHFICHCDRLNFKHFHUWNERZXSQAHDRWRYDMDYZGXXMWIVSMSNONWBZINUZWYGCPAYQVCEVISTGBQAFQ");
    msg.name.assign("GSNCIIFJKROHJNA");
    msg.nav_status = 66U;
    msg.type_and_cargo = 198U;
    msg.lat = 0.359581595368;
    msg.lon = 0.68671502942;
    msg.course = 0.46225907594;
    msg.speed = 0.565244473064;
    msg.a = 0.529939219288;
    msg.b = 0.725303454277;
    msg.c = 0.614259397695;
    msg.d = 0.34555415914;
    msg.draught = 0.214363692544;

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
    msg.setTimeStamp(0.154084926664);
    msg.setSource(45046U);
    msg.setSourceEntity(184U);
    msg.setDestination(12394U);
    msg.setDestinationEntity(129U);
    msg.id.assign("XGWGCILJHGCUYENXQNVXKILSTSUDZW");

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
    msg.setTimeStamp(0.0499825697225);
    msg.setSource(19043U);
    msg.setSourceEntity(175U);
    msg.setDestination(56294U);
    msg.setDestinationEntity(34U);
    msg.id.assign("CJGYLPEHVHCAWMEGUBYZJWPYMGVZGAJBFZECFAKHISVAQBSMLFIOLWHGKJNQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NMCNQMLPWYAOMXXWXFJXATOKQEQVNVJXJXYHLZBZFCUEOPRWVH");
    tmp_msg_0.feature_type = 196U;
    tmp_msg_0.rgb_red = 170U;
    tmp_msg_0.rgb_green = 16U;
    tmp_msg_0.rgb_blue = 186U;
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
    msg.setTimeStamp(0.33467582192);
    msg.setSource(16539U);
    msg.setSourceEntity(101U);
    msg.setDestination(4552U);
    msg.setDestinationEntity(200U);
    msg.id.assign("YOMYBHOXGXVIBUAQLTCIGWEHHHUJOBDF");

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
    msg.setTimeStamp(0.745939154724);
    msg.setSource(39632U);
    msg.setSourceEntity(135U);
    msg.setDestination(50845U);
    msg.setDestinationEntity(37U);
    msg.id.assign("IXUFOISFIOEBDMMVENZSSJDJKGAOSVICFOTTXCDDHRAWRNJWNDLWCRQJBXSQNCZQFKTLBYWQOAMJCSMLBPXPBFQCAOAYHZTRRLHCWJBKZSHTVYFQURCXGPGXUDCYRMSPKLNQPOXZUAAPESKCUWWNGLLJMQXFPEBYLZPRZHJTYKBGYHIYIKGHHOTAUFJUEEIPGVNFYAQ");
    msg.feature_type = 54U;
    msg.rgb_red = 26U;
    msg.rgb_green = 253U;
    msg.rgb_blue = 57U;

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
    msg.setTimeStamp(0.816402773327);
    msg.setSource(28110U);
    msg.setSourceEntity(78U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(251U);
    msg.id.assign("QCBNDZSFDHHJZCSPHWDJGLCIZGWJQSPSMHCXSRZLMYQABFGYYJBE");
    msg.feature_type = 107U;
    msg.rgb_red = 170U;
    msg.rgb_green = 147U;
    msg.rgb_blue = 32U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.960750593328;
    tmp_msg_0.lon = 0.714850392454;
    tmp_msg_0.alt = 0.274653776804;
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
    msg.setTimeStamp(0.70033053686);
    msg.setSource(8062U);
    msg.setSourceEntity(132U);
    msg.setDestination(47385U);
    msg.setDestinationEntity(90U);
    msg.id.assign("WRFXZHNNENBJXSXUGKUHWJSTZKLMVWAAJZNYPZGNIIFEKDSGGIOQUGPMBHFRNXQJDVPQCKGWKRKHVQRTMEJSYLDLPCRBIKSTYBHPYADGPSMFMOXFNVOFTICSTUUCZAFSYCYKVHQBNMVWTTYQWDHPLWXXZLFDIAYQJBIGFEREFGGAPZTBKBXOYZAAVJTPTLSOYWIRBLRC");
    msg.feature_type = 35U;
    msg.rgb_red = 73U;
    msg.rgb_green = 44U;
    msg.rgb_blue = 238U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.816138080731;
    tmp_msg_0.lon = 0.20878980561;
    tmp_msg_0.alt = 0.904289930548;
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
    msg.setTimeStamp(0.212379009944);
    msg.setSource(6904U);
    msg.setSourceEntity(228U);
    msg.setDestination(17380U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.125436536414;
    msg.lon = 0.993042956734;
    msg.alt = 0.625147917603;

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
    msg.setTimeStamp(0.113065386905);
    msg.setSource(43606U);
    msg.setSourceEntity(249U);
    msg.setDestination(48606U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.803487683704;
    msg.lon = 0.880361636606;
    msg.alt = 0.982862298363;

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
    msg.setTimeStamp(0.576603649451);
    msg.setSource(13035U);
    msg.setSourceEntity(161U);
    msg.setDestination(10086U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.61113892516;
    msg.lon = 0.313724539696;
    msg.alt = 0.779719239967;

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
    msg.setTimeStamp(0.158013483894);
    msg.setSource(15564U);
    msg.setSourceEntity(180U);
    msg.setDestination(8803U);
    msg.setDestinationEntity(100U);
    msg.type = 56U;
    msg.id.assign("MAOZIQVZKIKMOCQZLJEICXFSOPZHINWOSLDHCIMSKDJZBLNBBJDNBZURJHZLEPCKMOCRATELSGKFXSCPTSAKJPPXDLTGYUTJXENUGWGTMHMPNBHSYQNIVYBYQOBTTXBXCYQDMWBAUPEDGRLHIQLQGDFOYGCZRKEJJOMLYTHAUEPIYRXWFXBEAVIYQMDRLHVWRAHOXNSWPQHSVMPWCTEFFZZQVFUDVXAKKATGEGCUWVNAN");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.358367264933);
    msg.setSource(27149U);
    msg.setSourceEntity(104U);
    msg.setDestination(22618U);
    msg.setDestinationEntity(202U);
    msg.type = 15U;
    msg.id.assign("GHAIOANLZRHOVYGIFPYRUEYGZILDBCUOWBQGZSWHRIHWZUGKAKXXCVQEVNKJHVHAFPMTTYRMTRMOCYWNKHXNPDPJCWPPVVIJWCNHFZBWGLDRMSISAPDKDKYLDGUQSNVUIVJXUUNEAQLQABDQQQOMGLSXWOKEFDTAXSTUFYVXBXUGJDYJXMOSFKJZZICBGMNECSOTPTPMBOUMKLCJVTRCFNOSLMBQEZRAPCLELIHHZ");
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.956891037771;
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
    msg.setTimeStamp(0.13650187596);
    msg.setSource(48579U);
    msg.setSourceEntity(10U);
    msg.setDestination(23465U);
    msg.setDestinationEntity(180U);
    msg.type = 250U;
    msg.id.assign("MHQYZMJKLOTGWLIDVTPYMRJUBYOGCEXREPOBHETGSGOSPJGXECOVSJGWDRPAFUVWVLKBDADCWWTBOYLJWYMHDPRDNBFWYCQFXXKRFAXJPLJYFNSRIUXXREAIKUUZZAMVNSQNLGIBDPCTHZKUKCFCKSDEVTHTQWJSUHZPRVNWQICAGIWFNMOCEGXZMHRKZQBSCMDYIMNRDE");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.822879568324);
    msg.setSource(62841U);
    msg.setSourceEntity(59U);
    msg.setDestination(49232U);
    msg.setDestinationEntity(112U);
    msg.localname.assign("RWHQSIMWYKPANQBOHEWLJWEGPRE");

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
    msg.setTimeStamp(0.520747741567);
    msg.setSource(9588U);
    msg.setSourceEntity(1U);
    msg.setDestination(34549U);
    msg.setDestinationEntity(86U);
    msg.localname.assign("LBKVYPRRAMAFAFIDTSTYZWHIWCRUJWSURIDGQSFFFCPHFOPOWWQHIGGNTKLGXNKCKLODSXHXSHMTRWIYAOOROJPIVKMAWABY");

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
    msg.setTimeStamp(0.165442136675);
    msg.setSource(57960U);
    msg.setSourceEntity(225U);
    msg.setDestination(56710U);
    msg.setDestinationEntity(90U);
    msg.localname.assign("EFBOLHIQDBNN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZEOAJMSWCTBZBNVCSBFEGTGRMLOJGRNPRUZDIXXOVGQYBKQMMUYBVIRYDZZUJULAWNLKOJKZMBETGGLCXATNIVODPHSRWSQKFJVNQULYGCDETXEFCSBZSXLAHQOPCNAIWAAQFKDHVTDJSKIIWZJMHLVWQRBKKEYEDFXIISXNAFFNEITGJTFQUYWHPCTMSQPXFBGGUHPUJQYZAECRMKJHON");
    tmp_msg_0.sys_type = 152U;
    tmp_msg_0.owner = 16656U;
    tmp_msg_0.lat = 0.609398523854;
    tmp_msg_0.lon = 0.895125547966;
    tmp_msg_0.height = 0.175435465781;
    tmp_msg_0.services.assign("SBSGBRDTFUREJTJXVXNJXWMLMKMS");
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
    msg.setTimeStamp(0.0209673658988);
    msg.setSource(21708U);
    msg.setSourceEntity(151U);
    msg.setDestination(31925U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("BALROHXUMWIULOWDRWIOFOMTGATATWLKVRCNXCFWRYQIMNELJEPVIIVBWWLEZHKDIBFEUJTQWYRTMMWRAPHUNPMXVQETNAUQJHLFXVBQUZBUYSBSJHSFDAOSZKVONUYXDIVXLNSGZGGMDIVPSJCPZERCQGUJJGXFNFYVXAZREMCEDPEJ");
    msg.predicate.assign("SYPORGFYWSHKTMKCKGVIQUTIOIZLSVHAXJZHJSZWWUQNHDDBPGRSMKVYHQQWNUFNUTKABIRWUBOEDCWKNAYPMAGQUPEFFCLLFTVVNRZFMSIORTDXYDWYTVOWYGXPJKLGIMZDUABPEEZVWLPOXGCBXREHNJLFKALKRUMJRMBXNQTHBXUSZOG");
    msg.attributes.assign("MBVOLGXRMZSUYYSJOTIPESUTPRCEJVWFGOWESZYJYLBZSCGEQDHFGXYQCCPBOXACJJRZNKNNNBUGQAWBPLQPNWYZVZDDACUMTFJFTDUDEHNIAIIHSAQPXWIVEXGXVRUXOGWKEKINHFSYIMONFKDWKTTMBZDJRCONFZAGKSVQMKAHBECPMCLPQAVPIHMLEZUUJK");

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
    msg.setTimeStamp(0.507307988407);
    msg.setSource(59191U);
    msg.setSourceEntity(65U);
    msg.setDestination(11331U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("SVZYJBGIPRVHSKPFKOYPQJOVFFGVZRATBUNCUEQMZYXYDKPBWUAULMNCYJSGTOQCMZSVVXZNQWNSKWRZENMN");
    msg.predicate.assign("CFMPMPZTCWCKIZEKERQQWHLAPDEXTUUMXIANAPIMJLUNUFUFVVOVQCOFQSVBZNIWQZJZJEWSWVHPGIXZTYTYDEMKLXJMRAVEZUFXGFDHDBOCBHITPG");
    msg.attributes.assign("UXMRPBZECWYNVCFVOTGAXJSDSYEOMFVQRPKYGCICCVMIMODLZNBRTVGSQHARXDKSMNFLCGQJIJPJGFOLRJTWLDTEJMKCCHHBTBNKZOEIAFTXNBZEYYIAQEDCUHHNRZGZVTQEZDLTLKYXQVIWFUBLGOZHW");

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
    msg.setTimeStamp(0.529132352795);
    msg.setSource(64901U);
    msg.setSourceEntity(52U);
    msg.setDestination(62012U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("QOTAGSFSNIKRSDCDQJDVOHLBXLWIFUWGIPXHKNSJOTTPIXCYMBKOKRXVXNVNOUAJVWSXGTHETZHMGBJAONTIZJMCUFRKPBUSLIPZVAGEIRWCWVFHEUPIOSEJSJEDGMKNWMNTUYMHQJRFRDESVKFVECZZDHZGMLYLQZLR");
    msg.predicate.assign("YUSXZJJYHSPOYQFISTOU");
    msg.attributes.assign("UGZJGFNEIZQJVYQTRGNCFOIELZZLPPUGDECCVSAMHQNVSBMUYFXMOTMTPGIGOLNYRSMHVXBFLOSEJVZSQOZNYMTCLXDXHBEDCYOWGNAQDGQJXALAABTYERDTRFMNIZZEJIWTFQQJRJCBQSVSSAYFIOCYXWBWDPUUKCHYSWLRWUJVKA");

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
    msg.setTimeStamp(0.574621554158);
    msg.setSource(1667U);
    msg.setSourceEntity(19U);
    msg.setDestination(51436U);
    msg.setDestinationEntity(74U);
    msg.command = 66U;
    msg.goal_id.assign("VFGQQHHWSZDRTQJAMBKAXGVJRWBQKTTVFTZXHFMSRAZP");
    msg.goal_xml.assign("IMEXQBBHGPQDJGLPPBEIVPMHVUDKFUMBQRATXKOOOWMKFXXRSPEPDBWDXTCIJFLOTNEYSRZTYJ");

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
    msg.setTimeStamp(0.335643347842);
    msg.setSource(39697U);
    msg.setSourceEntity(17U);
    msg.setDestination(19294U);
    msg.setDestinationEntity(134U);
    msg.command = 87U;
    msg.goal_id.assign("ZUGSWVYYEGHDDCSDDNXLLUCLNKIFDUQKJCQXIZYRSQULNYZGMDVPHOPLMFENPWXTCBMDWRNWVHQYXPZOKUHCIOXQWEDWSVQRHKTTFVZYPYBGV");
    msg.goal_xml.assign("OJDSNPBNXSKVQAZGDGTDLZDXPRMACWSBRMZVSYLRKFQCRNFTUUBGMWKZHWKJKUXIOVJLBWPFCWGYJEIPLEDRTOLDGZ");

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
    msg.setTimeStamp(0.829930997277);
    msg.setSource(18244U);
    msg.setSourceEntity(172U);
    msg.setDestination(18793U);
    msg.setDestinationEntity(101U);
    msg.command = 112U;
    msg.goal_id.assign("SPIBUMEPUSHGHCDPKRNMFLUXQKFIFVMTGPBESVRFUKUXPBYRSXJZLTNWKGNQDEYJBVMJVKWIACDVLICGAOMLWODLIVFTVBAEXXEIKCEWZRRGMSMHBAUQFOZJFHVNUPWAJTYIIHNIHQUJLHFYFDSBEGNJORDVNATGTEBDLPOCJRAZZ");
    msg.goal_xml.assign("EUKZWMDSGIUYWTVHFPZKLFFQAYSPDWBSEMJSDFOQEMLXECKTZNMTZDRJANOLOKHSETGHPKKZYZJSQIGMYHRWBKRFCOWVVZBPJUBNUMIFTBKHLNIFCBNQAUHJIAQTNPQUCYRJXLETNQYPWZOGWEXUPHJAYXODCGPUWDKYMQRCNIXNDUHXJIGLDHCGWRGRTXFESTNRMILQJSMBXOFVLZZGERLBSAYWXSQPCMTVOCOLAIEAGCPD");

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
    msg.setTimeStamp(0.423149428211);
    msg.setSource(18370U);
    msg.setSourceEntity(166U);
    msg.setDestination(11899U);
    msg.setDestinationEntity(93U);
    msg.op = 246U;
    msg.goal_id.assign("IEYSOPUBMKDMHELNAIHMMSUXHSEPJKPPSCHKDTEIRUARGURWXTKXZQLWWGMNGAHNZQIMXJKNIDXXTBOBJWFAGHETRUAFCJJGJVKYWYCSFORXLVKPJGAOWYQZGBPU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JIWGIVUEEXQAXEDAZUREBZVSDAOVHWOZGXOJYJHRPQKTDXDBTISKJSNSKQCBCOUKOBULXXBMCZVBFEEMLOQMCIAOAJWQRFKPONWPNKHWRFRXTWVZQJHTTDNJMFVXFDTYEFTSACGAFVVNNQTCMIUGOIZMPPTHVYLYDZYYWQOMJGCPRIYKBYEGRIKLHZKAHPFLMERTSCLSHXBSYNRHFBCVDMDDUZLWGPLUXUPRQSGJAMNEYHWJIUFLNIKQA");
    tmp_msg_0.predicate.assign("DTMRGYJQFQVTBLOMOZFGHASEFPLJWIUGXPJQSYHEBMNYCKGQIUWZCDPDDBZPFZHECLKWJAKOCZXIWHAGGNHJJMXDZOFMNQLKHEUAKOAVHURPMZGOVEOJFCEIPXSLSYBLGNVGVW");
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
    msg.setTimeStamp(0.559108116703);
    msg.setSource(34500U);
    msg.setSourceEntity(176U);
    msg.setDestination(59859U);
    msg.setDestinationEntity(122U);
    msg.op = 99U;
    msg.goal_id.assign("HMXLKHGGJBYQBRLXNVBZCJVAUTGSAJNZJAPOHQNPQTSYFYCTINJFFADKJYMGZTIDHCPBQFOBZCFBRFRSHSKKWQUICYHVRSGOXDLVCTPHUWAZQRLHEKHUPBV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MFDVAQFRWVGQMPEIDHJFOMKWVZNQZAJBUXOJKESYALDCXRLDWKFOBNYHQBJCIKHMNMBRSBRFXPNQVPDNLZYFAIQHJJUVLSTCMQKIHL");
    tmp_msg_0.predicate.assign("STBGRPZIBBBVDYWIHHCOZPLLPMYTYZGIUKHQQXSJLAENMXRTOUJGKUZVXUYDVVQFNCBVIJMTKULWXQSAHNOLSDZIRBFZBVOZHRGBEDTACJCGWKKMUANOFMWVKSXFQUNUXPLOWUXPFCORPLAEWPSRYFDRGCEKNEGTAVXYOQO");
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
    msg.setTimeStamp(0.974816512539);
    msg.setSource(52995U);
    msg.setSourceEntity(119U);
    msg.setDestination(56662U);
    msg.setDestinationEntity(80U);
    msg.op = 142U;
    msg.goal_id.assign("ZRAXYUZELTNBLCWODSTWKIHGVXJRKRAHMBCTFNIGBWSWORNGLQDSJSTGVUYWGPDJEOBJHPRVYQWRBECXFOMMNPPNYICAFPHKWVCNKOMDQNUJFVKXURDADTXZONJOQPPQNMXGVZAVFCUMTSHEUBXYDYHQUKCLHFXFEALEAGIDBBMJTEUKDGABG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PWNQGQXGYNXAXNFJYEZMNCPHIUHQYCMTLVHSLIRANHAUUYOVGJQORQCPBXCWPZDTMMSFGXJAJGUHMKMTZKLGLWRQDYPBVOODRJEEADZGMJSTROYCSLDZKXUFTIEVBFTAKARPWDNHVHJOHR");
    tmp_msg_0.predicate.assign("YTNFBOWNSFLQHXHSFOCSMRZPDZOBPISDSBHGLUMMTBAFDJTRTRBTKCJTBWAVOGRBKUTIGQENUHNOKETMSVHDCJYVBUJJKWAUXJHGXIPCHLDYZMFPANRLGRZSDXRAKYHAYZWKYGMPLANUEHLTQWNNLYVZZECIVTWCHCYWSDFYNFUQPBDCBVDJWOIIQEIMZXQMWQUAFKIPXJUPEXMNIMERGZERWXFLVAERKOZJCKVGSKOVGX");
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
    msg.setTimeStamp(0.294522963255);
    msg.setSource(36140U);
    msg.setSourceEntity(19U);
    msg.setDestination(14511U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NVXGJRCLQEHLIRMATFXKZVCWLXNAMRYASCPGMSULUIZFLAPAQEUOXJZQWCUFENAKZBUDXWYGZTEAKZWEGNBJ");
    msg.attr_type = 240U;
    msg.min.assign("DVLBHDCKYDAVZWIJMRFTOJNOHPUATSKGXDSVGSSCYKOENNMJIKTYBQCRKXGQLCTVGOHFMNRLLCUGLFDROXMJCABSMZNOYLPMGZWUPHDKQGTQZEFIVLIDNDKPENYVZBWAPLKXOIGWEXIUSWZWZXUTAVYRODBNFQGPJJMSWIEPTBXHQNCMFUERAROATAXEFHFBHFZTJELRXWURKWSXVPPRGQUESQQ");
    msg.max.assign("ENJXTXQRJTSDVAIIYYNNYTBHPRZIEEFPPCXTAIHFFWECZSMSWPCR");

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
    msg.setTimeStamp(0.438303306907);
    msg.setSource(17648U);
    msg.setSourceEntity(3U);
    msg.setDestination(34271U);
    msg.setDestinationEntity(226U);
    msg.name.assign("ILIAPQUSDWNRJITLEMTIGLYJBAGSOGSJOAGBDFYRDTKPWJICEGYNUXMVKMFXEIQRPZULZFBQRQOASYOFHFOLECHCDYCPSAXDNSRNIEXLEXVUITHPGXWOOYOLZYNKAJKMVNEMHEKYKHMBSHZZVQVWBXBQXYJRMRUZZVDAUFBCBQJUKXJQLZEPNRCCSWDWN");
    msg.attr_type = 180U;
    msg.min.assign("SLDVVTOHLBPGKOAHFUJZNSDGOKFONFKSUIUKXQIPAPZQAUVZJRBKELQYWEVQRZMRLQFGYPXQJWSNRNDGLUFBOCHRWFXICAHCOT");
    msg.max.assign("XLCDHYDSMRKMKJQQSBFIXHF");

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
    msg.setTimeStamp(0.521383292768);
    msg.setSource(58233U);
    msg.setSourceEntity(33U);
    msg.setDestination(40221U);
    msg.setDestinationEntity(164U);
    msg.name.assign("ACLBVJSXTMQUJYPBGMPVXCYXCHJXVFQHOITWTGFFYLSVKONLO");
    msg.attr_type = 93U;
    msg.min.assign("MXUDXBWKLOKFEQCZOJYKLYDVRVIPOKJWXREUOFTEWLUDMMRFZGHNMAASTYMEAGBPIJCJJRNMLUIARILANDWFYCGBZFXHJALJLGBDVGHEMBGIKASIMCULXRUPZ");
    msg.max.assign("AOHPVZQKFCRKJSIBFXDVLEHGCEOWXLSBXYDMPCWVZTWXJFITLBXNUEONMDJRUCSJTBWZDADDXTEEASJUZEBOKTIYDFHPILCNPTQRUSBIESEIHNJLWMWMWNVBCTZHVUYMARLJVHLBSVUWIQUXUCSKG");

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
    msg.setTimeStamp(0.584223826118);
    msg.setSource(36831U);
    msg.setSourceEntity(39U);
    msg.setDestination(56013U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("FQAKMJCDUZHUYTJBWIGETYPYJMXUJVLREPKVPNTIPULUGFFBRUVDMHPHSOOJMGMFRSIJDTQVZEETAXZYOJDBGESWJRZMXYBFQCMAGRCAEVONKILTCHWRBVFAUHNTP");
    msg.predicate.assign("LKHVIAXWHDWBLIFRWBOFGFQCIVBWLMJZEEXPYXQDZBIIPAUTAOKGFOWHWZCQUYVOQLB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XZDWMSHQKRGFTTDGUIYQZWQUBUMPKGMWMQSGZDQLFAHFFGDNZBJYHWPEOXCOELSRUTNDFHBVZHLEMBEVAMPWBSVJXGCPEPWEGRNSFDTIEL");
    tmp_msg_0.attr_type = 22U;
    tmp_msg_0.min.assign("FPJKMLTNSYFD");
    tmp_msg_0.max.assign("AIFJNJWHPCPWPGLXLJCCKQTIHHIKUAJZRVSKJOOXVVVOEDZHGXYMADMBLFEBULBCZEIPRJLWZBOIPYQBGFGLNWVXQNWTSUMYNAUYUUWZLASHJJKOWYKXGHBDYBRKBVRXZENRHVVYETSPAQLMSUZXGWUHXLYFNRQAXNSRLDPTICXOOOPCCDTFHIMDCFDKEKUZWHTQR");
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
    msg.setTimeStamp(0.0506266245016);
    msg.setSource(45934U);
    msg.setSourceEntity(47U);
    msg.setDestination(23658U);
    msg.setDestinationEntity(213U);
    msg.timeline.assign("LANNOCVVJHZKADWLZWZZMQRUDNWZRIJASYPEOFDXOHLJENHLBBSDWKMYJURMNVVXQJFNNPHWTCYWSVFMTQSOXYEFBBUGCSAJFJLVTRVXEIKCIAIADHLXDUIRRZGKUCEKUIH");
    msg.predicate.assign("PCIYRNCLXCUEDQBQRGLXJEMYHNZMBNIYFVTVFPGQMRGFBCFYCADAMBIEWNEDSBTJONSTMWRGCJVRGFVUKZOBYJHEKLOITNUBMWNXLQKAYBUPGHUTTZKAPYKJIUAEWVMLANZDXWRHTQHUVCDLCQTL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NPZPLKRVKRDVHRABADJFPLGHYYGZCWTXNJVBKXGATREKFQWHGSSXBJHDHLPACWVKVTSFGZYYZQCVMSQJMFFJQZVELUWMNRQPNUGWBNQXHYOHMSYEEAYBSLOCCZKAMTSEDEZXROKWKVEDYBTQLFNXGJIJFTQNAUKMBXSSZHNSDAJWCXUOIUFEDLNCILYPVRCTIUBTWGIBHMDMBEICXUTMULOOPPUWIIRAHJTPIINLCAGORGZFMORQ");
    tmp_msg_0.attr_type = 20U;
    tmp_msg_0.min.assign("DRXIPAGWUGOHPFJKUE");
    tmp_msg_0.max.assign("LILIAOIQCVJAWEJGASGPKLKXGJLKSGYIHJAYDDLKVPTOBZADAFQMBFLGMVSRLXARSWKZTGJHCWYSXJXHKVMFKFSTCVFYIIYYSMOHUWEKNZDBYBMURJECENHWHDORSOBENACPOAUDMQEGBTOROBDXBBHNZRGRFCHQWRJDVXMJLSWXPUQFZNHHWFZOLWBQTUYQNKTRNIOILVPRGCDTIMNIPPTZYVQNCWZPMEVXTAPMFZCQUFYKUPQUJSC");
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
    msg.setTimeStamp(0.676005270984);
    msg.setSource(63970U);
    msg.setSourceEntity(118U);
    msg.setDestination(53635U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("UNQMIFOWHFNKPUORMCITGVMDZEMKVGPPXFXWPXBUEOIGEHEFVDROCCWTQNCFBGNRATIUOVOYAMZCHJPZCXQTUKOQMGRWSNHNNXWSPRYZIJDNLYASBGCPRMVGMDKFJT");
    msg.predicate.assign("ZUTIWNRERAWZZDWANLVRTGXCZGWFMEDYKXJGJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UMVHKKSDFULCQIXZGKZTHQUOFTELGNHMBQSKHMVFD");
    tmp_msg_0.attr_type = 15U;
    tmp_msg_0.min.assign("KOECNOOKFIPONBHZCGHHQMRVQVWMNUWMPFUFLHCXZMXXEGVDUGYMMSYTJPWLRITGCXEOIGXHQPARTYQZKSZEMUKKDYTDLFMEXWIQUSSJWUINJQCJALWRZJBGIQXGGXOIAKCZRHRQWYEKJSPVAHHQBIVLMOOKZEUBDNBLT");
    tmp_msg_0.max.assign("RECRGBWNOJFKJJWVUZLXEUWWSESJDEGOCXJXHAJPUVWFUPXJQFBQZCILFHNGLMRHIDTRPFMNAZXRTAKIGNIYGBCKKUFFMVCETHAOBGYAVYAVWAQDKPNSZGKBNNLAULLHMQDCMVTYXZSAESFL");
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
    msg.setTimeStamp(0.21377358904);
    msg.setSource(57143U);
    msg.setSourceEntity(64U);
    msg.setDestination(24651U);
    msg.setDestinationEntity(69U);
    msg.reactor.assign("HJQOXDRKWTHVLLUVBFYMSWUKIWVXGMMOYDNQJPFZNCXOVZLRNUNBPKBLKPOEVQAETSMJQROMLGEBVBCNBSRUUQFDDCHWJSBOGGAYXDEKQAJCKJGYZNMWPDDHMPTXDLCSEPPVOUHALRUFFIFSOFJMBWFLZRRMUGVTKYHSOVOYQESHLCHYBKTIRZZIDATXGBNGARTAITYDWZXEFRITIGMAESPCXZATZV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FDPJXPMFIFIOQUVZZVHGKOZMVANPRICXTZSOOUKHTXXKZDBXPBLBJXXHBLVRZCDAZOYSTDMRMQCJDGUEBZQIYULBWCWSEDRGGLEORTDTJFKEXXNGYNCLMEVFLRWWVMPGDWETQAHYIUKGYSFRHXZALAWEAHIWNFQYMEBBTUIUPQOOKSLTADLSVSJYNSUCKNAJKPF");
    tmp_msg_0.predicate.assign("BALFAJYUSHYSLKWWCNDMWGHYYCATWCYSSNFPRCOENRITOMQWVXIEQKVODDLEUDVEZDZKSTCY");
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
    msg.setTimeStamp(0.512687638164);
    msg.setSource(7998U);
    msg.setSourceEntity(215U);
    msg.setDestination(65233U);
    msg.setDestinationEntity(214U);
    msg.reactor.assign("CUCOTNQGBJASDEXNOGTSMFYRDSWFXWSRTZUEYAKCOLAYRSLVAABGJSTMLWDBPOCPBFXLIVZDFHOCWFCLKIHYWOUATVTLJZHPDPMNRUKSFXNMOTFEIDPFWMKZENUULWHMONPGPYVZVAMQKIPQYYMNLMQISNGIHJZLBUKXBJQSUFGJCRDEXPGETTJOBSAIJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VDLHSQXUPSNWIWSKRQMCYCLIGTHNPMOTJEXZGBNVDYHVDWFACZRKIFAMJKPHNLVEIRHXBVJTYHFSWEN");
    tmp_msg_0.predicate.assign("CCUOIUROFYEZZTOJQNKHNKIWNFHGYMHXQJIMLBDRGLLUUBNXHWHDBBPOHYLOKSELVCAADCFSXFGNCKBCMTIJFKMGELJMYXGZWPUKWUYDPIRSMTWEZZAGX");
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
    msg.setTimeStamp(0.177106473335);
    msg.setSource(10576U);
    msg.setSourceEntity(147U);
    msg.setDestination(39336U);
    msg.setDestinationEntity(72U);
    msg.reactor.assign("UTBWDJNSCSHDRMQDZKBFLRPGEHCRVUVHZEBZJTZMCAEFQQTHGHBMHZSGJSYOUIXIECUMIHAOLKITJ");

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
    msg.setTimeStamp(0.377348615078);
    msg.setSource(2277U);
    msg.setSourceEntity(131U);
    msg.setDestination(45120U);
    msg.setDestinationEntity(145U);
    msg.topic.assign("MGXBHFTZASTCBXHRWTMSZQIOILLDIEWTBWBHCFMQFLVDAZYRPHOCASITIFOAGMQUZBMWQRXBVGVZHEMMWEJGFIDTVJYQSFEAXHRMDIYVXODVDUUWZWWDGNOAQSVKJEJWNJKABWCKLSUCTNDZINEXSPVLANAFOUXXUJYMLGKKNOQXFUBJU");
    msg.data.assign("TMURFFFDHCCLKKTUVGJYIISGRLPIIGIYKFNLLJCNGBVQMIKGRPANZYMBEPRBZYCBVYGPFQLOYICOWHZQHSBOKOZHDAUTVWJUEWTGBMAQRWJAEYTMCNPWLVWOGSTEJFHDHZQMUXQXBMLHUZEXDPXUWJADTVKHSSNEQUNFSKWQDESFALZDZVEKZPOXOXVPZPMDDQOJSTANMXTKDRVFTSBUXIJNKY");

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
    msg.setTimeStamp(0.916313960544);
    msg.setSource(36129U);
    msg.setSourceEntity(43U);
    msg.setDestination(49511U);
    msg.setDestinationEntity(125U);
    msg.topic.assign("KLNUVNXJQBTELWDFCOMCLPSHSAQVSRLDWNKRZXPYPWPFMKHCEIJOJMEWFAWUSNBZHVCMQZLEBABVXMLPDZHZROJCXJOSRLAAERIGCXITGIQVGRBHPZTNVIXWXDDOUGMKYGPQHQCFUJYWZMDDKUVH");
    msg.data.assign("KPCPIBBPDSRHTWCZYULMHRTIWSRGODXYAMRUJKMWIKMJDIDNFCANPCGSGDHHBJHWZXSNKCMKOYEVITVXW");

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
    msg.setTimeStamp(0.0608060397726);
    msg.setSource(18805U);
    msg.setSourceEntity(51U);
    msg.setDestination(15529U);
    msg.setDestinationEntity(117U);
    msg.topic.assign("CCTSJUCLQVIQNYSQCOMWPJFBTFCHWTMOPAJLSDIVVEHFISXRXDUMAIQRBWRDJBKUPKWKRNNHHOGZKNHBNNPFCSSJIAEPJKJTWIETYHZUOSKRFFNXEDXDFNMPGLDIABW");
    msg.data.assign("WRPSEBHLOSWCQSJJVBEGDAFMQBGRZXYVJUOMMIUPLHTWKYJEKXEFXPRTODEZHONNQZIJZHSBMUVAHQKRDTPOITTQVQTGESWGMCAQGDRWRNA");

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
    msg.setTimeStamp(0.654265891453);
    msg.setSource(38443U);
    msg.setSourceEntity(205U);
    msg.setDestination(61234U);
    msg.setDestinationEntity(23U);
    msg.frameid = 58U;
    const char tmp_msg_0[] = {61, -47, -23, 35, 60, -121, 74, 74, -86, -77, 52, 3, -93, -1, -33, -76, -118, 78, -111, 68, 88, 107, -35, 125, 110, -97, 109, 10, -3, -16, -89, -6, 29, 75, -65, -102, -81, -120, -65, 111, -74, -86, -32, -22, -36, 81, 83, -21, 23, 109, -2, -47, 27, 78, 81, -106, 4, -17, 29, 48, 29, -6, -71, 60, -52, 47, 55, 27, 57, -124, 72, 15, 49, 6, -102, -98, -28, -85, 105, 69, 113, 117, -11, 121, -16, -29, 22, 2, 35, 57, 56};
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
    msg.setTimeStamp(0.833879827892);
    msg.setSource(10487U);
    msg.setSourceEntity(83U);
    msg.setDestination(31899U);
    msg.setDestinationEntity(77U);
    msg.frameid = 100U;
    const char tmp_msg_0[] = {74, -72, 89, -5, -124, 114, -100, -109, 24, -49, -89, -16, 31, -69, -110, 89, 15, 9, 40, -114, 17, 93, 118, 6, 4, 64, 82, 19, 62, -101, 50, -83, -83, 102, 28, -60, -51, 42, -54, -53, -54, 99, -58, 121, 50, -113, 76, 125, 110, 123, 46, 87, -45, 30, 1, -127, 41, -69, -105, -21, -39, -27, 7, -35, -25, -119, 49, -43, -1, -123, -107, -33, 4, 50, -92, 120, -61, 121, -111, -110, 65, -95, 113, 89, -112, -106, 68, -39, 8, 103, 98, -92, 78, -111, 69, 1, -117, 74, -84, -34, 28, 15, 13, -69, 14, 10, 98, -105, -70, 99, -9, -74, 60, -20, -23, -90, 51, -31, -100, -80, 39, 84, -38, 38, 63, 123, 98, -76, -42, -98, -14, 55, 122, 117, -126, -126, -68, -70, -113};
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
    msg.setTimeStamp(0.53310104193);
    msg.setSource(39679U);
    msg.setSourceEntity(70U);
    msg.setDestination(27917U);
    msg.setDestinationEntity(143U);
    msg.frameid = 8U;
    const char tmp_msg_0[] = {16, -23, -7, 54, 17, -2, -64, 24, 36, -57, 60, 104, -118, -79, -118, 8, -76, -121, -96, 122, 82, -26, -78, 18, -107, 113, -124, 72, 2, 62, 88, 124, -8, 36, -48, 6, 9, 51, -123, 54, 29, 92, -68, 59, 56, 24, -72, -36, 53, 12, -72, 84, 50, 75, -80, -11, 36, 105, 66, -11, -72, -1, -109, -41, 63, 70, 18, 77, -24, 32, 64, -56, -29, -10, -110, 6, 105, 3, -51, -76, -52, 107, 72, 109, 39, 35, 86, 89, 121, -78};
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
    msg.setTimeStamp(0.518283564732);
    msg.setSource(24348U);
    msg.setSourceEntity(75U);
    msg.setDestination(63274U);
    msg.setDestinationEntity(119U);
    msg.fps = 129U;
    msg.quality = 10U;
    msg.reps = 97U;
    msg.tsize = 3U;

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
    msg.setTimeStamp(0.434081832618);
    msg.setSource(62923U);
    msg.setSourceEntity(215U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(149U);
    msg.fps = 84U;
    msg.quality = 84U;
    msg.reps = 76U;
    msg.tsize = 89U;

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
    msg.setTimeStamp(0.808328450726);
    msg.setSource(42219U);
    msg.setSourceEntity(43U);
    msg.setDestination(46554U);
    msg.setDestinationEntity(1U);
    msg.fps = 231U;
    msg.quality = 225U;
    msg.reps = 25U;
    msg.tsize = 105U;

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
    msg.setTimeStamp(0.307312811142);
    msg.setSource(23021U);
    msg.setSourceEntity(137U);
    msg.setDestination(6315U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.391407943072;
    msg.lon = 0.0476295115109;
    msg.depth = 46U;
    msg.speed = 0.946579906362;
    msg.psi = 0.489057074699;

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
    msg.setTimeStamp(0.858395168822);
    msg.setSource(16345U);
    msg.setSourceEntity(191U);
    msg.setDestination(15352U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.600288308983;
    msg.lon = 0.919699918234;
    msg.depth = 209U;
    msg.speed = 0.635975735382;
    msg.psi = 0.522750023717;

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
    msg.setTimeStamp(0.0537487067079);
    msg.setSource(19553U);
    msg.setSourceEntity(70U);
    msg.setDestination(51236U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.641671617659;
    msg.lon = 0.157905771649;
    msg.depth = 40U;
    msg.speed = 0.607253384582;
    msg.psi = 0.272737007824;

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
    msg.setTimeStamp(0.150765447729);
    msg.setSource(12854U);
    msg.setSourceEntity(47U);
    msg.setDestination(5505U);
    msg.setDestinationEntity(13U);
    msg.label.assign("BTPCIZPCXQRVVXAEYBNEIOGPNVTANSKANSCQYCDWXLXTCVTIBJEKOBJRKXMYCLPOQXHCEDBHPJOCCUUUUVKNOPSRJAFVEYJULPOJYHRDWTWWNGPBLSIEGQXMKRDFGFBWZWQVVLWBZQMNSFGJFMSIJJZPHHLMJTGQZMDRUGOFANTPF");
    msg.lat = 0.491520833901;
    msg.lon = 0.68109371548;
    msg.z = 0.476667096675;
    msg.z_units = 5U;
    msg.cog = 0.429542643141;
    msg.sog = 0.436479614345;

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
    msg.setTimeStamp(0.832778547872);
    msg.setSource(3125U);
    msg.setSourceEntity(12U);
    msg.setDestination(42085U);
    msg.setDestinationEntity(83U);
    msg.label.assign("OEEOYVFUYRRUTNAJAWCVCKJMFMTKQNPUOKYPHSKGBKLQGXQBIHZYARUHEPLELIFTICCALHKOTKPUUZUOZDPMLPQJBMSNGVTIOSREYPKWATYDIZVPIMGOJYEAUWOBKJISURDWXGLNWDXHFFVGSWSFYQJMEDXKMJOQJEPCIFSFBAVGYDTXGXHWJRFWRZMGNCHZPATRQSZLCMQWXTVZGDNRZBZHVTLDOJIAXBXYSQVWNH");
    msg.lat = 0.46006659958;
    msg.lon = 0.441662080515;
    msg.z = 0.642862074447;
    msg.z_units = 182U;
    msg.cog = 0.993468411771;
    msg.sog = 0.203492677392;

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
    msg.setTimeStamp(0.542967498447);
    msg.setSource(3035U);
    msg.setSourceEntity(179U);
    msg.setDestination(2521U);
    msg.setDestinationEntity(20U);
    msg.label.assign("FUGECGDKYGURECCZDCNLLU");
    msg.lat = 0.0500815589266;
    msg.lon = 0.105921389825;
    msg.z = 0.477820786766;
    msg.z_units = 47U;
    msg.cog = 0.815713959253;
    msg.sog = 0.946637748677;

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
    msg.setTimeStamp(0.473837723372);
    msg.setSource(52008U);
    msg.setSourceEntity(121U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(33U);
    msg.name.assign("YFTLKBUFGXXEUMAIVCPDUHIVFEQHSUVPIRNSYWZIOHOTDWTFBWGWDVNOXASQLVMNSQIETCXYQDDNDSAIKBUPYZUHGFCWPNKXZBMREBUJVNZKXOENATXJVJOALLYXHMJQPJWIZQIFOOTTQPGYATOZLKQIZDGMRBKSSEARZFEWCNLMKYDHRCAFPOTEWGXLCSVABMLZCBAPYNHREMNYPQUGRRSUQWJLTKCZEXSVGVRIJLBMPCJY");
    msg.value.assign("ZXXJVWFYTUYEYBJHALMLTRMDSQWWSIQYVHZHJVDTJSPAZEMPZZCEBAVGFCHGUNKEXTSIEZGSNHAKLWKVVLEOBIQNTGDRBTDMXRHSSABGFQVPIHTUFCOIDYFZJGXXLNMBISDORMMNIAERLFBGWQEMDNJJCFDTHUFUOLVKRKNLFLPYG");

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
    msg.setTimeStamp(0.604375262597);
    msg.setSource(63254U);
    msg.setSourceEntity(222U);
    msg.setDestination(21891U);
    msg.setDestinationEntity(243U);
    msg.name.assign("YQJMFGQGBWEXAPBFDBLDPKBNWXIRHNJDFKQUAONXZUQIDNKHZSIXHFTZTQQJVKYTZENEBTRZNDKFPUHJ");
    msg.value.assign("EDNKLDPLJAECHTQFMIAJKFGPWITMTKGFKJTPUHJQCIXBNUYUKTPC");

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
    msg.setTimeStamp(0.951994948031);
    msg.setSource(58943U);
    msg.setSourceEntity(170U);
    msg.setDestination(1389U);
    msg.setDestinationEntity(80U);
    msg.name.assign("LJQTJJKNAFCWVETLZWFMCAHQPINEYTIQTJVQFSSSRLBIJZABASHMZUEQRONHEMXUYDZYUHXXXAMJBIGGKDMNICIGAWICMDREBUGRZSPVVPSWBRLPZOOTAOZLLYVKCEKYTZCDJNDQWCUKOAFYAOVPYHNCXILXQYWNKLERYOSDDVXELGWXDBFFUFZRVNBBJRGPKRMPCEXOHVRSSJHZIYCDOASOPVQQKPPHHITWD");
    msg.value.assign("UPXVNRUKLBSUKTIAZNQHPZJHKKMWPSUNGMULOZKTGQRQSLVVJBFHPGDFCIZCEYIIHJGDRAMVHDZPPQJNGZLFBNAXAWDMCTROLAARUEEVDACYXCGAXHTQBCOXNOSRZDTJVOFNNFBUSRKV");

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
    msg.setTimeStamp(0.637429219368);
    msg.setSource(60822U);
    msg.setSourceEntity(230U);
    msg.setDestination(23255U);
    msg.setDestinationEntity(32U);
    msg.name.assign("KVVAYOSUSVNINSUWEOXYJQUWUFCPJGKCZFDKIXFHSCUOXBFNIHVGHOQITXBJRHJXMSHDCMEDAJIJUQCNKYYPZPXIBLYUQDLTRQPMDRVJDCHRGZZODPTQMAEBWUZWASTSLOARGNGUYNWZLSHMKFFKXQMKSMAQWERNBEVWEBXMPVEUVTICRLDOHBJNTNOLWFWLRGGAHBZ");

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
    msg.setTimeStamp(0.739238302769);
    msg.setSource(11626U);
    msg.setSourceEntity(221U);
    msg.setDestination(49352U);
    msg.setDestinationEntity(140U);
    msg.name.assign("OTLABVPSNODVWNFXEPYTMYXGRFBKVYZCSPYZJLBLAIOIWZAPILFWWJCQYHDCTKUHHTOKMARCUTKBOJSQVRLOVUPFBZAJEKFNSTSDNSEOHGZGDQHUUETHGFDFIEEBTRRVNEXRCJVRSWLNJHSAMXTJUNGVDWLXMYRMAFJWX");

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
    msg.setTimeStamp(0.663369736136);
    msg.setSource(4313U);
    msg.setSourceEntity(220U);
    msg.setDestination(28816U);
    msg.setDestinationEntity(194U);
    msg.name.assign("DMDKQRVVMZZGUBJHLMEVCWVPRFKFXNMSIOPZNZRAKNRKIDONYSEEF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DRCLASFKWKURKSVBRXGZVNLBBGMVZBHAIFWOTXDUIFGAFNFTFGZTXCVSYYCOUKGCCZUEPMFLXPVKPZWNCQFNWDWOBOBESZEANCXOZPIKJTVKCFICHDLAWMQALSDMTLQOJEUEMNKPZPAZTHAQAV");
    tmp_msg_0.value.assign("YLAHOKIDAWTXYZFINEJFMQEMNXJPWKWHRIADBZAJTBIIQZBRAFQHJBYTJQAPDEAVKWQNNNYIPNCGQGCQST");
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
    msg.setTimeStamp(0.895603668383);
    msg.setSource(32274U);
    msg.setSourceEntity(192U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(204U);
    msg.name.assign("GPULLWTFHAMKJRNVAQBQLEUKVLABROBTPNIIWBPRNSJKHMEJMOBVYISCLNHSXYGDQWHZMDCHKFJXPRWMRNAVAKLXBNJBQAFCVTXPXEFYQFBFCOPCGMQGQMTLXMOICGLTUUUQWOKYTDVGHIIZKWZ");
    msg.visibility.assign("BAVJNAOUSXTRNVWSLZYCHNPEWZQKLCZLIBXMQUAEEKYOHMLVBQVMFGRBAISNYOZLKRRJJFZIKPYHCZDUHSLGPPCGXNVOUNKCUGYUFWQXVELXRGMXCCXBJSCWJCFZGQNZMBHPQDPHTYHQDHAUAKVKEFRQSJJKTRFFWTNBYTIIAUXWDLQPEAPWRNTAWSOGXSMYYSZBPKOWHIOJDRJPLIXT");
    msg.scope.assign("NKLRJKBWTOOADBJPNMSDATVUMGHQLHVECDWUQHWPCENMBYQKSXOFXMMODFJZVPDSRGPBAVEOSBUXQLEFAQRGLNCKARDKTCOTOXJNUVFCRZMAYQEMNJEEVZIUVHLTBSYYSFRTVXRASQIQZISXWUBKPUCIEU");

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
    msg.setTimeStamp(0.104318465538);
    msg.setSource(51524U);
    msg.setSourceEntity(145U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(57U);
    msg.name.assign("DNUMACXQMBFOCDHSSXIOVURIIJUBHSFKTZMAEOVDQEZXOORTZVLJGFRPGV");
    msg.visibility.assign("XIROYDZSJHYGMCFHPPHRVFBEYZOXOQJNKWWTPIXUGOAULCZEIVDCXHKWXLOWDWSCRXABALPTDWDVVYBQMNNORNEHTHVGLVHMMRFIZKPGZVXBRNYPCXQVICPBBNLJCYUMNZGCSJAATQSTBKZFJAPANHDYSLWITUGTULZJUQEHIXZUAUYWOLNBAKLMCOFBRTYKLMQPGJIVZRKGS");
    msg.scope.assign("TSOHPEITGOVWJQSTVWEKQKLQWXRBEXUHZEBCMISPJJJBSKNVSFBAKUSQLEEBFULEPYAIZJDRCYZKAYGTQRIYHTDVNCPRWXMINCDQFPWLHAYKXKDVTADFLBXKJAVZYRFTFDGOWLYUPNTAUDFM");

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
    msg.setTimeStamp(0.139948314391);
    msg.setSource(3150U);
    msg.setSourceEntity(124U);
    msg.setDestination(56521U);
    msg.setDestinationEntity(75U);
    msg.name.assign("WUCPUNZVIQZURGSJXZYIOEOEJAEACNUEBELLTYJQSBGEFGUJEMXFNIKVBOQPBMIIPKXXPYISGBTPGWKAVWTJQGWIXDJHFTOUZDGLKNYVQARSMAGWHVDOMWTLRFRDFVHUAWLRPQLSBCANHGX");
    msg.visibility.assign("ZQBNMNJXJRPTVYFWQZVEVWEPOGSDQLZNKFIJLMSCCIFMBBKWCYTKWGUKICRYDYHVEEFOJXFSQMGYTDDNPBAUNTOIHEGSVQEHASTNGNJSULPEGOIQYLUIEMEYOXPUXKUBUQHMBRDICHTWJGHK");
    msg.scope.assign("CCFBOSSSAQIEDCBUDCGXMEZOELPSYUXWHZJVHLXCGTWIYRFO");

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
    msg.setTimeStamp(0.872714849582);
    msg.setSource(45966U);
    msg.setSourceEntity(28U);
    msg.setDestination(38266U);
    msg.setDestinationEntity(158U);
    msg.name.assign("BEXUHKTESOOQITHPCXFSVONYX");

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
    msg.setTimeStamp(0.634636820982);
    msg.setSource(1410U);
    msg.setSourceEntity(59U);
    msg.setDestination(59509U);
    msg.setDestinationEntity(144U);
    msg.name.assign("URELRWSFVRWIYNMABUXWCUHXLGQAKNRPIZYNCBBPLKOG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RHPMHNZKVXLREADMGBOJULRDFUERICSAIAZXMBSNXMPWRPEWOVZRSQCWEFQVJHBLGHSGGQYFIPOVQA");
    tmp_msg_0.value.assign("LGDIATJYBUPCPJFFPVWCKPLVIBGUXTTMOLRNWZHMISCUXRZQNJMUFOZXEGKICPNKRSNDWROVYPEBIEQODILJMADBAABXSUQKQZCYEKNBFIQHLWFFZZQVSURWFCCWNORVXHPGTOSHLWYVMBMNZTNXASJMVLQPELSCKABZHISGUMYGMQDAJRDNPKJFYWHYDDXGOAOXEUUYNVEMHKPZCTBKFTCROQSAI");
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
    msg.setTimeStamp(0.422030037916);
    msg.setSource(56904U);
    msg.setSourceEntity(219U);
    msg.setDestination(32850U);
    msg.setDestinationEntity(1U);
    msg.name.assign("DGXMKEMOOHTKBTIXUWFOLREJESMXBSZOU");

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
    msg.setTimeStamp(0.165495066977);
    msg.setSource(62677U);
    msg.setSourceEntity(133U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(154U);
    msg.name.assign("IVZVYGUBOWUBJKYSIXAGGYYRXGMOOYJXNOPMDVFTOJDDSODNRMDAXZIKHTWHSAVXWRIUBLJRPCLTZHSSEIUWKXIWQHPHBCZVQMEPFWOLGZHFQMVTQQSFPEMLFUUKAJKFROITECJZNZRSBKMZLDCYNBSVRUUFMEUTRCGWYLEMENAZCAXTFWVESYJHOOTQZBAWPVLNMGGNUSYGGIYWAQKCPJDV");

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
    msg.setTimeStamp(0.241030379456);
    msg.setSource(48350U);
    msg.setSourceEntity(187U);
    msg.setDestination(62129U);
    msg.setDestinationEntity(97U);
    msg.name.assign("UMDKPXRWAUQDNJDYGRXXRLSUCJCYTAFQMCERLEJUGSSWVBAAIFZBJYFPZQGYDWHKOOIVLHUEEZTNPQEZFFWVBDSDVOHHXQDTTOJSKWBRNWKMSRMFODLMH");

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
    msg.setTimeStamp(0.544508893987);
    msg.setSource(30922U);
    msg.setSourceEntity(174U);
    msg.setDestination(53006U);
    msg.setDestinationEntity(211U);
    msg.name.assign("WGIYFBJLZBZUMPQBNLFWXBKLOIWRDRAPF");

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
    msg.setTimeStamp(0.297317127976);
    msg.setSource(11083U);
    msg.setSourceEntity(167U);
    msg.setDestination(61466U);
    msg.setDestinationEntity(47U);
    msg.timeout = 549422248U;

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
    msg.setTimeStamp(0.463560534996);
    msg.setSource(12920U);
    msg.setSourceEntity(157U);
    msg.setDestination(25335U);
    msg.setDestinationEntity(97U);
    msg.timeout = 338970258U;

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
    msg.setTimeStamp(0.219349232591);
    msg.setSource(37216U);
    msg.setSourceEntity(189U);
    msg.setDestination(56629U);
    msg.setDestinationEntity(240U);
    msg.timeout = 1490923747U;

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
    msg.setTimeStamp(0.925662343883);
    msg.setSource(42656U);
    msg.setSourceEntity(20U);
    msg.setDestination(65501U);
    msg.setDestinationEntity(66U);
    msg.sessid = 3764397502U;

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
    msg.setTimeStamp(0.566741045308);
    msg.setSource(26005U);
    msg.setSourceEntity(92U);
    msg.setDestination(6375U);
    msg.setDestinationEntity(207U);
    msg.sessid = 579583599U;

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
    msg.setTimeStamp(0.218361666231);
    msg.setSource(31119U);
    msg.setSourceEntity(137U);
    msg.setDestination(16911U);
    msg.setDestinationEntity(149U);
    msg.sessid = 1557778999U;

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
    msg.setTimeStamp(0.571173252056);
    msg.setSource(51456U);
    msg.setSourceEntity(254U);
    msg.setDestination(9907U);
    msg.setDestinationEntity(175U);
    msg.sessid = 2782631514U;
    msg.messages.assign("KDBVRWAUJCDBQNBPHALJZCVJDFCSWMYRPXEEAQHLFVZKDYXPVPUVVJRJOJUQOYZULYFSBCCIGOKCKIMSLYGOMBEREGBIQNBFQLAQOFUIRWLMQIQFDPEWXHTDNWRXLTCZOAUFWDVPIYFJHUGNSOEIQZSYAGT");

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
    msg.setTimeStamp(0.801996430846);
    msg.setSource(18123U);
    msg.setSourceEntity(195U);
    msg.setDestination(838U);
    msg.setDestinationEntity(35U);
    msg.sessid = 2598350569U;
    msg.messages.assign("EWJHYVJOCMLKQXJKCRMDODCDXFURHTEWLTHQNTHBZQIDTFLTEVLITSGGVPVKXLQFUOPNKIGYDOAALZTGIOCSFENIGWVJQXXKQSJPRSGDAKTAAZDYWLMWWYKUYYHGUFQUJBIOWFEVFBEGOHCNSSAZMBHLNZIYNOUYBKCIPDVOCLBXH");

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
    msg.setTimeStamp(0.533877102599);
    msg.setSource(16387U);
    msg.setSourceEntity(151U);
    msg.setDestination(19567U);
    msg.setDestinationEntity(96U);
    msg.sessid = 2347414281U;
    msg.messages.assign("YBNVOGLPIGZWTOLPFRQGDHVVYDKELIJPXULPKSCCDCSDSXGRZRXXCJFJHMDUVHZFWNDGMHLJTYOWQIXZKSLXNBIXBMSTNAWCIMACZREBURBSQFVINKJNM");

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
    msg.setTimeStamp(0.374811038154);
    msg.setSource(20768U);
    msg.setSourceEntity(148U);
    msg.setDestination(34310U);
    msg.setDestinationEntity(209U);
    msg.sessid = 2759938763U;

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
    msg.setTimeStamp(0.110230469543);
    msg.setSource(6203U);
    msg.setSourceEntity(219U);
    msg.setDestination(3329U);
    msg.setDestinationEntity(38U);
    msg.sessid = 2915708350U;

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
    msg.setTimeStamp(0.0826396550832);
    msg.setSource(60196U);
    msg.setSourceEntity(75U);
    msg.setDestination(51143U);
    msg.setDestinationEntity(201U);
    msg.sessid = 4243582980U;

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
    msg.setTimeStamp(0.513925028666);
    msg.setSource(59502U);
    msg.setSourceEntity(97U);
    msg.setDestination(41468U);
    msg.setDestinationEntity(254U);
    msg.sessid = 4132032920U;
    msg.status = 174U;

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
    msg.setTimeStamp(0.617770469247);
    msg.setSource(62577U);
    msg.setSourceEntity(78U);
    msg.setDestination(13031U);
    msg.setDestinationEntity(215U);
    msg.sessid = 1947764329U;
    msg.status = 103U;

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
    msg.setTimeStamp(0.862571958293);
    msg.setSource(23701U);
    msg.setSourceEntity(91U);
    msg.setDestination(2401U);
    msg.setDestinationEntity(69U);
    msg.sessid = 836040398U;
    msg.status = 151U;

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
    msg.setTimeStamp(0.053524356726);
    msg.setSource(22796U);
    msg.setSourceEntity(48U);
    msg.setDestination(40793U);
    msg.setDestinationEntity(88U);
    msg.name.assign("ITITYEBXGMSSPOUCY");

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
    msg.setTimeStamp(0.642515055267);
    msg.setSource(16206U);
    msg.setSourceEntity(213U);
    msg.setDestination(9261U);
    msg.setDestinationEntity(180U);
    msg.name.assign("LVILDTTZPHOSUEGMGSYHRQQKTDUKOUXDIZTAVLEEPMHPXJCQUJBUFCOQMSNGFXWFEIBUQWYJLQSTPEHZNMUDCWCAFVKBNJJPFIZYOVVMRNBGJZWAOANKFVDUJLBXQHWBWIYOKAURSSQMKAMCRLZDKIRYPNFRCIVMVBJCNSRZAEUBYZHTLPBSRHCSIEXSQZTZWVL");

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
    msg.setTimeStamp(0.481036629034);
    msg.setSource(18892U);
    msg.setSourceEntity(87U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(0U);
    msg.name.assign("EAGCOCUALJLGVZYSRQJOJOSHCVVXADVVWAOJZARIARBYQVCLFGTKBQPOCOMQDTCIXLLTWFVUATGMOVDHZZZBYRKHHWJRBHSDEFZXWCIDGMSZVRYMNXPGUBNBPSMXXTKSIKFGRIKWTDCKPFUCQNUYNQPSUNJUXZEIPFJBCRLEXMODWNWJPWTIYBDLFENYEAPQLABHSNSMYWPMNTTXZHGYQRKVKUEJM");

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
    msg.setTimeStamp(0.801075496954);
    msg.setSource(41234U);
    msg.setSourceEntity(212U);
    msg.setDestination(40516U);
    msg.setDestinationEntity(221U);
    msg.name.assign("MMMTKFJGTALFCZSEWXKYNBXJQSVCANVCEAW");

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
    msg.setTimeStamp(0.564887472746);
    msg.setSource(62049U);
    msg.setSourceEntity(172U);
    msg.setDestination(22U);
    msg.setDestinationEntity(24U);
    msg.name.assign("CEQBIDCXGAZRBWBNIPLHMUENWJIZIZPDGAKSRDYWLFDREURWAFZAUAEXHPSKXJMPUEPVMFGXKLHJITCVDEWYHQKLSEUQYHUBFSOTDIFVXYIWOVFWVPSBMRVDKQIMEBXZZLJPODRRIYGQQHJYBRNOLUYOZKZLVQUSBXYDRLGHQKKTGLJPGYUSCNHOXCAQYSG");

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
    msg.setTimeStamp(0.706571430671);
    msg.setSource(25326U);
    msg.setSourceEntity(191U);
    msg.setDestination(9356U);
    msg.setDestinationEntity(228U);
    msg.name.assign("MUWONBHDVFEUXKDVFIZLQRHHMWXQOTMRDJHNJPTUQXQIDPJNFNXOEFOSGTJMOHOZGCPBYFRRQYMAGHRZUXNZKVAGQGAFRUVTACVJAFXPTQSYZYYHPCLVBIFWEZHCRFDDSNLDOLSOMPTUKDAVKLYSOSPZQTWXKEWSAKTKLSLLYIEUBLEVQFCJMDQYRIZUDNYRUEGXJAMWNBTNWVCGMBZKUPWKCBXVBTAPIJJPIYBCSNRXGCEGSZEEHCBIWH");

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
    msg.setTimeStamp(0.947356098862);
    msg.setSource(48869U);
    msg.setSourceEntity(103U);
    msg.setDestination(37486U);
    msg.setDestinationEntity(65U);
    msg.type = 48U;
    msg.error.assign("TCUMFQPBAJAAHHCCLDMUXDCWZSDVUHWVWKIPIRGDGYGBDUPYLGQJVLFVLCOQFRTREKKWWIIVNKOOJKWPJLRZUGANIHPUUXYZPGXHFYWYIFQXTUTMKXHOIZZTOYYANAPYARTJRLDNUKMSMKSHIFNBDQBFWNZZQECEXOIAXLJJKLEHMBRXEMGSSQCECYNASVGGBEOJBUDKVBFNZPSMIOSTCERGJP");

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
    msg.setTimeStamp(0.166049749853);
    msg.setSource(64591U);
    msg.setSourceEntity(101U);
    msg.setDestination(5870U);
    msg.setDestinationEntity(93U);
    msg.type = 236U;
    msg.error.assign("LCMERZXIRNLQAJIDUGKBFTATCHLSVTJUPPVOOUOXDJQDWFOZTUNSJATHYWVRRYGOSDUXVCRBKUFWWMPWOXSHSFFGOMDDEFCBPIBFPZQXWIIARSYKMMQIGLZBQDKUDLXVMLKECGSZSZFZGLSIHECETJGJJHSKNYWCTVLZOUATKYGYZMHPMNTNGUMJLCWXPLNRRXJQQEBAPQFXAFNUEGRBYZNNO");

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
    msg.setTimeStamp(0.484554784161);
    msg.setSource(48445U);
    msg.setSourceEntity(8U);
    msg.setDestination(15432U);
    msg.setDestinationEntity(243U);
    msg.type = 19U;
    msg.error.assign("GJBIHGGWIOZRTCQREOJGYNPUEVAXZWEYWCRGREEDWQIWFTQJLSFLKHFUWBYIBCVHGQPXUEKNQLHQUREFPEYGMKYCZVKS");

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
    msg.setTimeStamp(0.882572846861);
    msg.setSource(25459U);
    msg.setSourceEntity(244U);
    msg.setDestination(12709U);
    msg.setDestinationEntity(235U);
    msg.seq = 24358U;
    msg.sys_dst.assign("XDQCKPILJPROFSMIIURDVHVDDVLNIMVDFCKPVYQLCNAXMJYFFROAWTYULJFXBMXUNBGIYABSJSYVUBQQFDBVWTWNIZAXCBKKYIBQPDJBUGNSUOLDIQERZROTWQRSNETYZEIBAEZMTFNYCWHADUHPGGUEWRMQT");
    msg.flags = 7U;
    const char tmp_msg_0[] = {-117, -13, 74, 25, 111, -5, 77, -66, 96, 82, 67, 84, -76, 41, -37, 75, 84, -34, -21, 73, -114, -90, 59, -122, 71, -46, -95, 1, -112, -106, 3, 90, -85, 35, 36, 22, -120, -54, 12, 59, -56, 23, -68, 86, -114, 32, 37, -120, 59, -51, 52, -86, 78, -3, 64, 71, 59, 79, -104, -122, 63, 88, 95, -26, 15, -117, 64, 44, -22, -88, -1, -41, 41, 9, -13, 25, 26, 75, 28, -12, -74, 98, -57, -8, 123, -3, -55, 9, -109, -89, -45, 27, 32, 54, -56, 28, -68, -77, -2, -48, 112, 96, 71, -9, 92, 72, 42, 122, -1, -64, -94, -47, -77, -122, 47, 34, 73, -36, -84, 40, -69, -108, -40, 97, 109, 69, 23, -66, 63, 17, -115, -79, 88, -82, 104, -70, -123, -109, -103, -128, 49, 43, 120, 106, 35, 104, 63, -39, -27, -17, -128, 28, -13, -125, 112, -8};
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
    msg.setTimeStamp(0.918908903664);
    msg.setSource(26504U);
    msg.setSourceEntity(135U);
    msg.setDestination(18833U);
    msg.setDestinationEntity(201U);
    msg.seq = 41135U;
    msg.sys_dst.assign("JWMNXALFSNYHKFUWEGAAHOPJKFYHASOVTSNVQVWYJVXWQRBVKRZYOSBBDGQYSSITUCTPRGHVSINMIOJPLOMENRMZNIUODHKGXIFII");
    msg.flags = 51U;
    const char tmp_msg_0[] = {94, 74, -103, 4, 34, 56, -127, -2, 93, -116, -90, -102, 65, -120, 6, 116, 13, -114, -22, 44, 61, 29, -82, 41, -81, -36, -62, -2, -1, -33, -4, 16, 32, -13, -72, -49, 10, 95, -54, 33, -65, -121, 48, -104, -113, 121, -36, 91, 68, 41, -3, 29, -81, 120, -77, 119, -42, -56, 30, -83, -68, -86, 42, 27, 124, -60, 60, 29, -1, 19, 22, 84, 104, -90, -23, 21, -52, -48, 25, 111, 123, -113, -35, 79, -16, -84, 85, -12, 19, 112, 54, 13, -11, -46, -48, 92, -122, 73, 24, -16, 30, 99, 50, -50, -53, -51, -64, -2, 62, -38, -57, 75, -1, 4, 58, -128, 57, -55, -43, 46, -5, 109, 47, -87, -48, 60, 117, 120, 9, 73, -2, -30, 0, 103, 58, -95, -111, -109, 53, -123, -37, 75, -109, -10, 21, 46, -48, -46, 98, 93, -20, -47, 63, 106, -58, 71, -76, -89, 43, -108, -13, 75, 80, 89, 120, -119, 15, -116, 31, -65, 96, -29, 80, 83, -35, 10, 111, -89, 56, 82, -91, -20, -48, -96, -17, 61, -46, -97, -20, -121, 109, 64, -110, 59, -81, 116, 5, -16, -60, -52, 112, 118, 55, 37, -73, 96, 110, -49, -31};
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
    msg.setTimeStamp(0.576776825791);
    msg.setSource(26237U);
    msg.setSourceEntity(31U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(152U);
    msg.seq = 52579U;
    msg.sys_dst.assign("WOJFAHOEMWLVSIHLUICMNYCVFFZAAXIEDUSXKAMJFDEBWTYYQVSEUNAUBCEFZHWILHMXGRMQBRXOUEOFYPTUGVLGLDCVNTTBOCRWLBBCJGJKSGFLAHAHEFQCOSVKZQZDZTYMJPXRO");
    msg.flags = 3U;
    const char tmp_msg_0[] = {30, 48, -111, 89, 87, 74, -9, -35, -104, 97, -101, -99, -37, 26, 119, -17, 5, -91, -95, 33, -52, -94, 41, 125, -121, -45, 126, 121, 76, -7, -80, -74, -121, -43, 5, -9, 116, 104, 103, -63, -116, 18, -5, -83, 47, -54, -111, -12, 51, 119, -37, -12, 50, -1, 62};
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
    msg.setTimeStamp(0.851760283755);
    msg.setSource(35931U);
    msg.setSourceEntity(150U);
    msg.setDestination(47989U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("EXQGXWRDNVTKHIHHWKXZDFIVZLCQECWBGIZTCQUSFNDQIYMSAYBLRTCRBAXBAGZKENY");
    msg.sys_dst.assign("IXHAPXIHGBBSQENLFZCVFDBNSMFYVDZONUCJEZDJXFVGOQYVEZMQAELTXFCTSEONWQPDSTVNIHWHHQVUXHXOKYZKNYPAZDJBASJXZTJEOCWSYTJMT");
    msg.flags = 200U;
    const char tmp_msg_0[] = {-74, -26, -117, 126, -67, 64, 85, 13, 6, -93, -29, -50, -78, -32, -110, -40, -45, 30, -127, 16, -123, -100, 31, 92, 58, -81, -55, 80, -22, -68, -72, -112, 23, 111, -8, 103, 68, -100, 88, -69, 126, 79, 19, 52, 80, -25, -89, 42, -51, 64, 63, -69, 118, 50, -66, 76, -87, 42, -77, 18, -46, 12, -98, -8, -2, -119, -112, -82, 99, -123, -5, 12, -88, -94, -8, -110, -20, 52, -23, 49, -10, -78, -1, 101, -108, 89, -29, 30, 40, 42, -107, 94, 51, -73, -31, -42, -64, -6, 80, -67, -70, 24, -62, -45, -86, -93, -6, -7, 79, 117, 117, -20, 87, -106, -63, -67, 117, 126, -79, -85, -33, -52, 47, 2, -30, -36, 37, -66, -85, 48, -80, -80, -56, 22, -66, -68, 21, 113, -108, -83, -74, -102, 105, -12, -89, -111, 93, 61, 12, 123, -122, 65, 9, 92, 98, -21, 70, 20, 118, -8, -37, -78, -43, 92, -127, 99, -18, 49, 87, -96, -44, -5, -24, -14, 66, 119, -127, 93, -58, -107, -77, 2, 46, -66, 60, 43, 38, -48, -83, 44, -49, 78, -102, 39, -51, 16, 89, -78, 45, -120, 54, 85, 120, -77, -16, -6, 86, 10, -127, -82, -102, 45, -118, -118, 126, -65, 103, 85, 13, -58, -19, -69, -115, 7, -72, 30, -29, -55, -7};
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
    msg.setTimeStamp(0.49055796171);
    msg.setSource(28419U);
    msg.setSourceEntity(52U);
    msg.setDestination(64234U);
    msg.setDestinationEntity(243U);
    msg.sys_src.assign("CPKSDKSDVXFIFXGBYDZUHVEWPSFBJAWUNYSJELKATATJFVODOXCFJZRHEFFLZITKEJUNPJIWNTMOTKWCYGOKCALSXZOYLNRLRRWZZMRGILZQGYQJHNVD");
    msg.sys_dst.assign("PNJWPTDNCOFXVQZCBTRZWQAKTVMISGFCUIDWJLXCVZMBFFGZSVRD");
    msg.flags = 9U;
    const char tmp_msg_0[] = {-92, -34, -64, -42, 62, -75, -60, -80, 25, 45, 78, 112, 64, -112, 68, -48, -117, -53, 27, -18, -124, -45, -95, -99, -98, 115, 63, 84, 126, 114, -16, -66, 67, -109, 15, 72, -74, 23, 90, -49, 15, -11, 124, -91, 120, -37, -81, 90, -31, -73, -20, 121, 16, 81, -102, 53, 11, 68, -54, 69, 17, 13, -109, -88, 52, -48, 53, 59, 85, -74, -55, -21, -100, 9, -92, 14, 86, -81, -110, -57, -123, 88, -37, 15, -70, -11, 35, -56};
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
    msg.setTimeStamp(0.966404273663);
    msg.setSource(2982U);
    msg.setSourceEntity(84U);
    msg.setDestination(42968U);
    msg.setDestinationEntity(55U);
    msg.sys_src.assign("CUJLHWEQQRONZWEWXEUIBBCTIRLSEZRNKPRCXMQDKMUBUKYEXRVLOZMWPJFCNIVYJSVVUDGAAOITODVMAGMFDRKQRRSKTYFBYEYIIOIXUVGIARQLZVDGBTHTZAJUQVYSASKSJZMNDPSCOYPWLGMFXNXEOFMUGUMNKTSFACHKGAGCDQWCWNTFPPHZELPWRZDQHJJGABSTICXLTAXYZDJKNY");
    msg.sys_dst.assign("LZLOOWBCHJHXNJFYOQEGZYZAEDSDHPTFNSZGYTSOIXXCAAJGCUCONQXRTVUUYAAQPVRFNTQBLCDJPSQMPADOCWEBXRIOVZK");
    msg.flags = 238U;
    const char tmp_msg_0[] = {50, -125, 84, -92, 10, 0, -118, 49, -60, -4, 117, -72, 64, 57, 125, 37, 49, -106, 10, -75, -14, 117, 9, 75, -91, 104, -37, 21};
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
    msg.setTimeStamp(0.50097825823);
    msg.setSource(59562U);
    msg.setSourceEntity(31U);
    msg.setDestination(53979U);
    msg.setDestinationEntity(107U);
    msg.seq = 44636U;
    msg.value = 42U;
    msg.error.assign("KCZAOLEJAZAXNGNSJLFZSRLTCPYFEOFUMXBUGOAMNYHOQCXW");

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
    msg.setTimeStamp(0.491005848464);
    msg.setSource(5810U);
    msg.setSourceEntity(132U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(138U);
    msg.seq = 47123U;
    msg.value = 89U;
    msg.error.assign("RANSOWAJEYQYFWKORUSLGEIRBZOUOSNUMJFNGLIIPJXQDUJAFQWEZGRCULQQENSJMZPQZUTYNTFQWXXXDACWHSDKBPJRSZMPLGBHLBMOCTFSJAVHDREBCMYUBGGHE");

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
    msg.setTimeStamp(0.0837043292649);
    msg.setSource(5146U);
    msg.setSourceEntity(130U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(128U);
    msg.seq = 2156U;
    msg.value = 65U;
    msg.error.assign("CFPXKNQZQZBQQOUXKAPCTYRLRSESTFDZIRQWTWXKJAXXHMOSZOOHYPTLDTW");

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
    msg.setTimeStamp(0.107173810009);
    msg.setSource(8204U);
    msg.setSourceEntity(13U);
    msg.setDestination(59868U);
    msg.setDestinationEntity(155U);
    msg.seq = 24310U;
    msg.sys.assign("YGYXTGLHIOAIERPUBKBAQIWGOVEBEUJFSINYQCEESJRODECGTRDXCWVHJITLBNNTVXYRPXDVHVAUFKCHPZHFTHJYVYSSWTMAU");
    msg.value = 0.301491165031;

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
    msg.setTimeStamp(0.227823118043);
    msg.setSource(44173U);
    msg.setSourceEntity(105U);
    msg.setDestination(20368U);
    msg.setDestinationEntity(235U);
    msg.seq = 21897U;
    msg.sys.assign("IGRRQBBZMXVQXFEYFXYYYZJTQXFRANTIGEGRIFXSWRMNOUKJDGCAFCIPOBJLBCYVBSPNZSWPANQROHAEZBOEZIJFTGSVEUMGDIQJWTNJPWMMMZYLHRCMZBQJEKKLTLIWJPUODHOLHTVLYDSCZPANPKALYHIVKCKAVZLPDPATUHASFOMCFXMVIGSGQANOJOLLUGOKWPREFKRXVXCBMHNEHWIXHFSWBUTSCVWDUXYNCKDEQGDUZTKWVHEUSD");
    msg.value = 0.781992789706;

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
    msg.setTimeStamp(0.437374337097);
    msg.setSource(5862U);
    msg.setSourceEntity(178U);
    msg.setDestination(57049U);
    msg.setDestinationEntity(206U);
    msg.seq = 49240U;
    msg.sys.assign("XACLJMETVNBMUCUQKKQUBDJIVZOENKGMYORWZMDSLMFNWNUBYIJGKRFBJOPSNOYIHVFJDLMKXTPNJQABSEGCOARLSHAHYPMDKBIZW");
    msg.value = 0.00889095492379;

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
    msg.setTimeStamp(0.671662511449);
    msg.setSource(914U);
    msg.setSourceEntity(253U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(207U);
    msg.action = 216U;
    msg.longain = 0.862453245971;
    msg.latgain = 0.077125540616;
    msg.bondthick = 824050864U;
    msg.leadgain = 0.579192025539;
    msg.deconflgain = 0.496854105052;

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
    msg.setTimeStamp(0.963478074496);
    msg.setSource(63920U);
    msg.setSourceEntity(126U);
    msg.setDestination(51462U);
    msg.setDestinationEntity(156U);
    msg.action = 6U;
    msg.longain = 0.150092055362;
    msg.latgain = 0.0371662227463;
    msg.bondthick = 3578328386U;
    msg.leadgain = 0.507595074915;
    msg.deconflgain = 0.800951195426;

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
    msg.setTimeStamp(0.0211094500941);
    msg.setSource(12583U);
    msg.setSourceEntity(200U);
    msg.setDestination(22851U);
    msg.setDestinationEntity(49U);
    msg.action = 93U;
    msg.longain = 0.514344823325;
    msg.latgain = 0.264591569694;
    msg.bondthick = 3195044906U;
    msg.leadgain = 0.836662064975;
    msg.deconflgain = 0.590528963819;

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
    msg.setTimeStamp(0.245619229366);
    msg.setSource(14628U);
    msg.setSourceEntity(165U);
    msg.setDestination(55819U);
    msg.setDestinationEntity(102U);
    msg.err_mean = 0.5121665093;
    msg.dist_min_abs = 0.905656775767;
    msg.dist_min_mean = 0.61176263678;

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
    msg.setTimeStamp(0.68259679597);
    msg.setSource(9973U);
    msg.setSourceEntity(172U);
    msg.setDestination(32659U);
    msg.setDestinationEntity(147U);
    msg.err_mean = 0.950525508154;
    msg.dist_min_abs = 0.640182507981;
    msg.dist_min_mean = 0.857107901981;

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
    msg.setTimeStamp(0.891771019319);
    msg.setSource(65231U);
    msg.setSourceEntity(49U);
    msg.setDestination(23171U);
    msg.setDestinationEntity(149U);
    msg.err_mean = 0.397049227728;
    msg.dist_min_abs = 0.277400242105;
    msg.dist_min_mean = 0.0675565419782;

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
    msg.setTimeStamp(0.921890075417);
    msg.setSource(27443U);
    msg.setSourceEntity(232U);
    msg.setDestination(37373U);
    msg.setDestinationEntity(55U);
    msg.action = 72U;
    msg.lon_gain = 0.710414721275;
    msg.lat_gain = 0.600371530452;
    msg.bond_thick = 0.701288262942;
    msg.lead_gain = 0.600112234483;
    msg.deconfl_gain = 0.652875949396;
    msg.accel_switch_gain = 0.173438196812;
    msg.safe_dist = 0.984574387561;
    msg.deconflict_offset = 0.362741521864;
    msg.accel_safe_margin = 0.324599812812;
    msg.accel_lim_x = 0.787498208593;

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
    msg.setTimeStamp(0.889723553154);
    msg.setSource(51484U);
    msg.setSourceEntity(153U);
    msg.setDestination(54596U);
    msg.setDestinationEntity(233U);
    msg.action = 130U;
    msg.lon_gain = 0.510960341509;
    msg.lat_gain = 0.380470294556;
    msg.bond_thick = 0.170682823399;
    msg.lead_gain = 0.60456675785;
    msg.deconfl_gain = 0.931044867007;
    msg.accel_switch_gain = 0.620857426131;
    msg.safe_dist = 0.827422869823;
    msg.deconflict_offset = 0.05346569833;
    msg.accel_safe_margin = 0.0185780501677;
    msg.accel_lim_x = 0.348425779731;

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
    msg.setTimeStamp(0.283063194176);
    msg.setSource(54199U);
    msg.setSourceEntity(75U);
    msg.setDestination(11854U);
    msg.setDestinationEntity(170U);
    msg.action = 122U;
    msg.lon_gain = 0.904107397607;
    msg.lat_gain = 0.310657277277;
    msg.bond_thick = 0.138011376872;
    msg.lead_gain = 0.503821623533;
    msg.deconfl_gain = 0.459197914971;
    msg.accel_switch_gain = 0.731477687197;
    msg.safe_dist = 0.808186383883;
    msg.deconflict_offset = 0.811880073722;
    msg.accel_safe_margin = 0.394065972089;
    msg.accel_lim_x = 0.893097808568;

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
    msg.setTimeStamp(0.618695993884);
    msg.setSource(20732U);
    msg.setSourceEntity(43U);
    msg.setDestination(52926U);
    msg.setDestinationEntity(227U);
    msg.type = 62U;
    msg.op = 92U;
    msg.err_mean = 0.711525808042;
    msg.dist_min_abs = 0.548313042071;
    msg.dist_min_mean = 0.630639291356;
    msg.roll_rate_mean = 0.855524438543;
    msg.time = 0.338110494374;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 148U;
    tmp_msg_0.lon_gain = 0.572875099922;
    tmp_msg_0.lat_gain = 0.324851154567;
    tmp_msg_0.bond_thick = 0.547413066783;
    tmp_msg_0.lead_gain = 0.975628005099;
    tmp_msg_0.deconfl_gain = 0.141034660054;
    tmp_msg_0.accel_switch_gain = 0.385507417043;
    tmp_msg_0.safe_dist = 0.849306442154;
    tmp_msg_0.deconflict_offset = 0.66388365081;
    tmp_msg_0.accel_safe_margin = 0.162727818988;
    tmp_msg_0.accel_lim_x = 0.4200567005;
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
    msg.setTimeStamp(0.85759430524);
    msg.setSource(17179U);
    msg.setSourceEntity(246U);
    msg.setDestination(47444U);
    msg.setDestinationEntity(2U);
    msg.type = 237U;
    msg.op = 83U;
    msg.err_mean = 0.42398304822;
    msg.dist_min_abs = 0.313949823003;
    msg.dist_min_mean = 0.0130923130286;
    msg.roll_rate_mean = 0.846293896056;
    msg.time = 0.441226683912;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 195U;
    tmp_msg_0.lon_gain = 0.401600890212;
    tmp_msg_0.lat_gain = 0.583147476214;
    tmp_msg_0.bond_thick = 0.190351546233;
    tmp_msg_0.lead_gain = 0.209738131969;
    tmp_msg_0.deconfl_gain = 0.665214953809;
    tmp_msg_0.accel_switch_gain = 0.178698597704;
    tmp_msg_0.safe_dist = 0.207333538676;
    tmp_msg_0.deconflict_offset = 0.489313100818;
    tmp_msg_0.accel_safe_margin = 0.14326029673;
    tmp_msg_0.accel_lim_x = 0.840479625125;
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
    msg.setTimeStamp(0.190208995632);
    msg.setSource(45832U);
    msg.setSourceEntity(33U);
    msg.setDestination(55266U);
    msg.setDestinationEntity(130U);
    msg.type = 81U;
    msg.op = 73U;
    msg.err_mean = 0.306795777926;
    msg.dist_min_abs = 0.409231377575;
    msg.dist_min_mean = 0.290209944783;
    msg.roll_rate_mean = 0.153096382387;
    msg.time = 0.395619589176;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 253U;
    tmp_msg_0.lon_gain = 0.565403288169;
    tmp_msg_0.lat_gain = 0.120191123585;
    tmp_msg_0.bond_thick = 0.0475420970175;
    tmp_msg_0.lead_gain = 0.495705151805;
    tmp_msg_0.deconfl_gain = 0.412129652316;
    tmp_msg_0.accel_switch_gain = 0.0517927099425;
    tmp_msg_0.safe_dist = 0.609056898848;
    tmp_msg_0.deconflict_offset = 0.165724646464;
    tmp_msg_0.accel_safe_margin = 0.403136578179;
    tmp_msg_0.accel_lim_x = 0.399028420628;
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
    msg.setTimeStamp(0.703447347421);
    msg.setSource(59440U);
    msg.setSourceEntity(89U);
    msg.setDestination(46002U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.825723560947;
    msg.lon = 0.592723222093;
    msg.eta = 1469931925U;
    msg.duration = 17101U;

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
    msg.setTimeStamp(0.438630317892);
    msg.setSource(40156U);
    msg.setSourceEntity(163U);
    msg.setDestination(13765U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.405588118935;
    msg.lon = 0.757620775475;
    msg.eta = 3841103071U;
    msg.duration = 37258U;

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
    msg.setTimeStamp(0.400232268121);
    msg.setSource(50027U);
    msg.setSourceEntity(41U);
    msg.setDestination(57965U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.844090240254;
    msg.lon = 0.699014050732;
    msg.eta = 2850824669U;
    msg.duration = 46526U;

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
    msg.setTimeStamp(0.181111513362);
    msg.setSource(44061U);
    msg.setSourceEntity(207U);
    msg.setDestination(57100U);
    msg.setDestinationEntity(144U);
    msg.plan_id = 14912U;

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
    msg.setTimeStamp(0.431489200678);
    msg.setSource(44351U);
    msg.setSourceEntity(174U);
    msg.setDestination(60166U);
    msg.setDestinationEntity(225U);
    msg.plan_id = 40831U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.47056239566;
    tmp_msg_0.lon = 0.521004700181;
    tmp_msg_0.eta = 1591576521U;
    tmp_msg_0.duration = 10574U;
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
    msg.setTimeStamp(0.586205487557);
    msg.setSource(64893U);
    msg.setSourceEntity(213U);
    msg.setDestination(14505U);
    msg.setDestinationEntity(85U);
    msg.plan_id = 36521U;

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
    msg.setTimeStamp(0.678621418072);
    msg.setSource(18055U);
    msg.setSourceEntity(176U);
    msg.setDestination(58078U);
    msg.setDestinationEntity(33U);
    msg.type = 210U;
    msg.command = 127U;
    msg.settings.assign("VZRTDNQTJOJHAJMOFCLDHOYTUCBVSUTZSHGGFNKQDPWRRJCFIGXYVWRSZWFGVXKEVUZLCZLKPFOVKDPWCREMBIFCIWHZBUTTCAXLZUXRDZJCPKHWVLNSTAWVBDEZBELJMIYBRIPJGFSXRFXSODPODNEHXYLQBQDNLSIYGEAIUCUHKTYTOIYQQLAUWIVSBMSAKQOJINMBYVMWFDGPSCNFMQEHBRAAYNOKTOPGMKAPPXRALHNEEYXXMZW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64406U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YWNYMDGQFIQNHWKBLXOWJMVGHDXSFHTSTSANIJACKNEKRDEUNFKIVUUTEWBNBCSZHAKGFIBGWKOTSJMLNJQZKJHYDVQNDMTGXJRPCCUUITJMCRMMZWRZFORBRZBHCCPMVECYYVMWFOOYLXSSFDGDHFXEELPNWQWAEZYUDMQUADRBAYXVPXVTLLT");

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
    msg.setTimeStamp(0.850366684546);
    msg.setSource(51014U);
    msg.setSourceEntity(194U);
    msg.setDestination(19576U);
    msg.setDestinationEntity(103U);
    msg.type = 106U;
    msg.command = 110U;
    msg.settings.assign("BAPXSFGAMYJSLPEVHFBZVWEKLTBOPSIDCQNXMPJXPUHGSCUIAXNPSGVTGTOYDCLWOEOCWTQFOLSMZERHFEFUZQJYPKSOHNHJYVMCYEAGBJIAVEOOHZNRGTYTCYSQSFJWJBNYUZSJKAIHI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19968U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FGSKNNGNWJCFIQYCWRGVHXLRHABVHGRQTLXZKSSTMDQZQDYMUOBYGOUYKQPGNCRKTBBJADKMLVWUMIEOUAOREFHUMNYPVPISGDXBPAEKVJFYAFTVHTBFSTLAWQXYLEZIIJORBXCIGIDMSEVXDHAMPENAINTPXBCWTSCASJEWLOBLJURMIXUXHCZRZZNGR");

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
    msg.setTimeStamp(0.202880554452);
    msg.setSource(2296U);
    msg.setSourceEntity(40U);
    msg.setDestination(1161U);
    msg.setDestinationEntity(109U);
    msg.type = 98U;
    msg.command = 129U;
    msg.settings.assign("BJNPAENZRWJLDZCKUXVTYQMBDJEZGFINCSHISNQLMCYIEJTLKUTOHDEOMLDTJZKEAYYTMBBOMKLUYZJNFKWLBWXXGSNLAHGPFHYZVFBVE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 29966U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GSQBGMZAEVWDKIFGCJUAYWRUQDHRNAPRBSKGLJLVLXUOQNWWWPAJLJXKEKCZCYHOHOAIINJBBGZFNVTXLYCYHNDESPUEFGUOGUSECUWZDTUIUZHIANVKTOBJTWPIPZTADRQZMFHTMVQHINOEDMRSYPHCITXGRCVOLQBPUMMLBFJWGYQTVFYICPMPLOWFDKYSEIJHSXXZTCZSADHL");

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
    msg.setTimeStamp(0.333369338295);
    msg.setSource(21737U);
    msg.setSourceEntity(51U);
    msg.setDestination(43582U);
    msg.setDestinationEntity(152U);
    msg.state = 226U;
    msg.plan_id = 22675U;
    msg.wpt_id = 3U;
    msg.settings_chk = 59744U;

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
    msg.setTimeStamp(0.123556348257);
    msg.setSource(12709U);
    msg.setSourceEntity(133U);
    msg.setDestination(36904U);
    msg.setDestinationEntity(229U);
    msg.state = 0U;
    msg.plan_id = 30079U;
    msg.wpt_id = 220U;
    msg.settings_chk = 61755U;

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
    msg.setTimeStamp(0.919452466165);
    msg.setSource(50029U);
    msg.setSourceEntity(97U);
    msg.setDestination(32715U);
    msg.setDestinationEntity(194U);
    msg.state = 60U;
    msg.plan_id = 9328U;
    msg.wpt_id = 170U;
    msg.settings_chk = 40048U;

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
    msg.setTimeStamp(0.719004169042);
    msg.setSource(12453U);
    msg.setSourceEntity(161U);
    msg.setDestination(27312U);
    msg.setDestinationEntity(180U);
    msg.uid = 154U;
    msg.frag_number = 219U;
    msg.num_frags = 216U;
    const char tmp_msg_0[] = {-56, -10, 42, -54, 72, -65, -6, 8, 58, 111, 102, -67, -23, 106, 97, 19, 49, -79, 55, 123, -107, 49, 39, 16, -4, 35, -29, -99, 23, -40, 74, -84, -39, 41, -93, -123, -28, 107, -39, -80, 27, -108, 96, -61, 9, -35, -84, 35, 104, -40, -66, 24, 44, 76, -120, 25, 78, 70, 3, 27, 62, 23, 96, 123, 73, 122, -58, -62, 6, 70, 97, 0, -52, -72, -60, -96, -32, -73, 18, 72, 63, 110, 43, -15, -122, 2, 102, -29, -35, 80, 38, -23, 29, 112, -48, 55, -80, -31, 56, 121};
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
    msg.setTimeStamp(0.529228470553);
    msg.setSource(48027U);
    msg.setSourceEntity(76U);
    msg.setDestination(15169U);
    msg.setDestinationEntity(151U);
    msg.uid = 52U;
    msg.frag_number = 192U;
    msg.num_frags = 149U;
    const char tmp_msg_0[] = {-52, 119, 116, 27, 20, 33, -98, 13, 6, 101, 73, -106, 112, 121, -78, -72, -8, 0, 47, 83, 53, 61, -99, -2, 41, -110, -29, -72, -21, -91, 59, -128, -119, 115, -74, -2, 58, -128, 126, -16, 9, 32, 84, -48, 70, 88, -59, -61, 32, 85, 113, 101, 21, -112, 36, 125, 124, -124, 62, 118, 114, -47, 95, 82, 98, -124, 52, -22, -20, 90, -14, -46, -67, 45, 71, -107, 109, -88, -9, -124, -115, -118, 31, 114, -94, -42, -92, -48, 24, 6, 47, -79, -36, -121, 30, -100, -121, -106, -14, 32, -111, -124, 118, -54, 67, 62, -116, 97, 32, 44, 85, 44, -73, 100, 3, 76, -79, 52, 75, -123, 58, -83, -101, 116, 57, -36, -50, -124, 55, -96, -8, 93, 64, -72, 96, -104, -10, 93, 27, -32, -83, -65, -69, -70, -85, 91, 33, 86, -19, 56, -22, 89, -22, 121, -37, 114, -32, -34, 27, 79, 110, -108, -2, 113, -57, 95, -38, -11, 111, -90, 91, -9, 111, 66, 110, -27, 14, -20, -68, 60, 118, -111, 69, 55, -72, -9};
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
    msg.setTimeStamp(0.347442034649);
    msg.setSource(53005U);
    msg.setSourceEntity(59U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(120U);
    msg.uid = 53U;
    msg.frag_number = 87U;
    msg.num_frags = 65U;
    const char tmp_msg_0[] = {111, 25, 24, 28, 75, 32, 63, 34, 113, 51, 88, 4, -12, 61, -54, -46, -77, 82, -117, -93, -66, 79, 28, 122, 63, -34, 98, 44, -75, 10, 27, -113, -62, 53, 101, 33, 32, -119, -77, -72, -62, -110, -14, -103, 83, -6, 76, -4, 108, 9, -53, -34};
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
    msg.setTimeStamp(0.177022304367);
    msg.setSource(50207U);
    msg.setSourceEntity(18U);
    msg.setDestination(12147U);
    msg.setDestinationEntity(71U);
    msg.content_type.assign("UHCVDXZNNFAPKHTOVPIITFUCJIJMASFQWMBREQEKLKYLBYTGHPGYSLWPSRYUZQBWNJUJYZNFOIQFYTSDOWQUKVIGPVGRHGDFR");
    const char tmp_msg_0[] = {115, -126, -116, -37, 97, 105, 39, -94, 56, 106, -12, -109, 121, 124, 86, -66, -34, 116, -27, 65, 36, 112, -64, 21, -104, -59, 20, 65, 103, 104, 105, -83, -22, -21, -13, 118, -101, -53, -105, 113, 58, -15, 49, 36, -39, -59, 57, 77, -8, -4, 2, 105, -15, 66, -74, 108, 118, 91, -95, 36, 7, 111, -1, -122, 115, -122, 86, 40, -123, -128, 43, 77, -126, -61, 42, -7, -110, -128, 48, -57, 27, -106, -1, -48, 119, -26, 115, -43, 58, -96, 109, -78, 124, 7, 80, -103, -23, -46, -49, 48, 3, -1, -92, 97, -44, -108, 61, 80, -79};
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
    msg.setTimeStamp(0.89476704823);
    msg.setSource(37715U);
    msg.setSourceEntity(210U);
    msg.setDestination(310U);
    msg.setDestinationEntity(239U);
    msg.content_type.assign("GNZLBVSCOPLJNIVBHEICUWXLOFFQWWGQFXHVBKLJPSSFHDFRINNCKZTXUORSGIVGQYIZFTSWXBOADADKTAOMZVNCMQTEIRPSHJLPRLAJWMZYTKYLPAMESMWPJLWHEDRHAGMCEQAFKPZDKNMCVSOKVGUCAELDUJUZWXRZWNFVIXUOYUQNFHNBXYCZEYOAEMNBCVYAQDSETV");
    const char tmp_msg_0[] = {-58, 76, -1, 55, -14, 119, 30, 13, -64, 15, -119, 60, 68, 76, 28, 57, 53, -71, -86, 44, -16, -5, 99, -104, 95, -99, -22, -89, -52, -15, -113, -20, -52, 116, -98, 23, -49, -11, 43, -28, 52, -85, -116, 45, -123, 60, -9, 105, 102, -68, 67, 119, -108, -13, -73, -56, 33, 99, 114, 99, 56, -8, -40, 53, 4, 0, -88, -111, 106, 100, -3, 30, -53, 115, 98, -53, -113, -126, 43, -85, -49, -92, 102, -64, 120, -38, 40, 27, 20, 123, 35, -29, -51, 47, 54, -109, 55, 88, -48, 105, 10, 14, 41, 12, 75, 50, 41, 92, 31, 77, -5, 29, 47, -122, -2, 53, 50, -10, -39, -57, -47, -35, 79, -128, 122, -45, 36, -46, 92, 42, -124, 0, -11, -54, -122, -52, -13, -21, 17, -118, -99, -2, -126, 25, -94, -36, -17, -111, -85, -125, -54, -126, -17, -122, 7, 69, 48, 89, -21, -87, 9, 42, -128, -111, 61, 50, 17, -27, 62, 82, 36, 61, -51, -33, -78, -23, -103, 56, -111, -52, 73, -118, -24, 117, 60, 38, -60, -36, -62, -30, 36, 45, 97, -57, 23, -75, -39, 48, 78, -79, -99, -21, -23, -41, -33, -105, -22, -72, -28, 59, -59, -84, -85, -70, 11, -70, -17, 50, 16, 99, 16, 115, -100, 65, 76};
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
    msg.setTimeStamp(0.191624107284);
    msg.setSource(65353U);
    msg.setSourceEntity(187U);
    msg.setDestination(20913U);
    msg.setDestinationEntity(46U);
    msg.content_type.assign("DSMKMLTHWMAYAFBRDWHCLQMNHSSXWPZYPLZCJEXKKEBGNAODTBIYRBUFJECYQEPN");
    const char tmp_msg_0[] = {105, -26, -66, 72, 122, -11, 119, 104, -3, 34, -6, 4, 73, -34, -97, -40, 56, -26, -122, -37, -79, 116, 57, 107, 30, 70, 46, -115, -21, 25, -67, 70, 122, -89, -66, -57, -79, -15, 36, 122, 116, 116, -60, 116, 109, -6, -120, 16, -111, 39, 89, -113, 92, -63, 9, 41, 62, 67, 67, -110, 124, 23, -52, -117, -108, 76, 115, -127, -52, 79, -52, 120, -27, 76, 126, -48, 41, 90, 36, 34, -53, -43, -45, 86, -57, -55, -29, -64, 57, -21, -117, 48, 53, -124, -13, -110};
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
    msg.setTimeStamp(0.297427555935);
    msg.setSource(64487U);
    msg.setSourceEntity(42U);
    msg.setDestination(17554U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.606668324432);
    msg.setSource(33683U);
    msg.setSourceEntity(248U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.996037569957);
    msg.setSource(29212U);
    msg.setSourceEntity(239U);
    msg.setDestination(19143U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.358222833683);
    msg.setSource(52931U);
    msg.setSourceEntity(12U);
    msg.setDestination(62380U);
    msg.setDestinationEntity(133U);
    msg.target = 15125U;
    msg.bearing = 0.703824153183;
    msg.elevation = 0.291065316411;

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
    msg.setTimeStamp(0.721973178333);
    msg.setSource(38969U);
    msg.setSourceEntity(84U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(19U);
    msg.target = 52179U;
    msg.bearing = 0.521973185853;
    msg.elevation = 0.760663291455;

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
    msg.setTimeStamp(0.131943434389);
    msg.setSource(51920U);
    msg.setSourceEntity(243U);
    msg.setDestination(3149U);
    msg.setDestinationEntity(164U);
    msg.target = 64946U;
    msg.bearing = 0.605147742651;
    msg.elevation = 0.409055301929;

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
    msg.setTimeStamp(0.809674681737);
    msg.setSource(13826U);
    msg.setSourceEntity(178U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(57U);
    msg.target = 55490U;
    msg.x = 0.22818499823;
    msg.y = 0.515650409753;
    msg.z = 0.684097431973;

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
    msg.setTimeStamp(0.246577300146);
    msg.setSource(42631U);
    msg.setSourceEntity(205U);
    msg.setDestination(57563U);
    msg.setDestinationEntity(153U);
    msg.target = 9763U;
    msg.x = 0.935374334684;
    msg.y = 0.0971280927434;
    msg.z = 0.398188683123;

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
    msg.setTimeStamp(0.0336586431905);
    msg.setSource(62852U);
    msg.setSourceEntity(69U);
    msg.setDestination(7399U);
    msg.setDestinationEntity(118U);
    msg.target = 57439U;
    msg.x = 0.354802537594;
    msg.y = 0.405625158072;
    msg.z = 0.69111299681;

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
    msg.setTimeStamp(0.0612628191152);
    msg.setSource(8862U);
    msg.setSourceEntity(217U);
    msg.setDestination(40788U);
    msg.setDestinationEntity(164U);
    msg.target = 2953U;
    msg.lat = 0.176504100739;
    msg.lon = 0.180611193188;
    msg.z_units = 95U;
    msg.z = 0.986990129631;

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
    msg.setTimeStamp(0.545565449483);
    msg.setSource(49539U);
    msg.setSourceEntity(251U);
    msg.setDestination(23924U);
    msg.setDestinationEntity(232U);
    msg.target = 49114U;
    msg.lat = 0.457257509415;
    msg.lon = 0.157490849054;
    msg.z_units = 64U;
    msg.z = 0.608985112096;

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
    msg.setTimeStamp(0.900362143703);
    msg.setSource(37696U);
    msg.setSourceEntity(138U);
    msg.setDestination(17261U);
    msg.setDestinationEntity(138U);
    msg.target = 55612U;
    msg.lat = 0.344233618092;
    msg.lon = 0.237360824223;
    msg.z_units = 41U;
    msg.z = 0.829642904589;

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
    msg.setTimeStamp(0.498617939779);
    msg.setSource(7421U);
    msg.setSourceEntity(133U);
    msg.setDestination(45451U);
    msg.setDestinationEntity(83U);
    msg.locale.assign("KJABJNFSIAMTQGKLKWCDOOKUCDIUMSKPBRWFIANRLCWQXPVUQIQNQEEKBSRQEZTOPCAFMZYFHJHBCVGYGXVHHURPOBLDJFWLWQZZIXMPPSRHKTMSTGVPYDOBUFBZZSDXRHCAJELMOMAIUZDEJZYEIPKELJROFTSGXCYRGAXPOTWZQQESNXNBGLFLCSUQJVWGAZEVHUYOKFJRMWMNMCNTIIXWGVXUHUIAJVDNGEXDTVBSBORTLYPC");
    const char tmp_msg_0[] = {-81, -58, -26, 98, 96, 83, -126, 77, -3, -65, -45, -54, -93, 10, 44, -30, 121, -45, -115, -10, -97, -93, -62, -108, -81, -47, 4, 68, -98, 70, 118, 103, -102, 77, -59, -126, -65, 126, 94, -18, 96, -85, 123, -97, -47, 92, 81, -51, 34, 28, 60, -31, 111, -45, 44, 6, -79, 92, -14, -16, -45, 110, 87, -58, 55, 86, -49, 106, 10, 5, -63, -119, 17, -121, 116, 96, -27, 45, -48, 24, 75, 72, 70, -82, -96, 72, 14, 3, 4, 85, -107, 87, -96, -8, -15, -124, -12, 99, -46, -97, -20, -32, -84, -53, 47, 88, 39, 4, -87, -71, 16, 69, -90, 37, 83, -71, -124, 54, 108, 52, 16, 10, 30, -60, 71, -56, -25, 16, -4, 28, 6, 96, -70, 104, 102, -51, 52, 63, -91, -81, -101, 95, -7, 15, -27, -55, -127, -127, -127, -35, 69, 69, 84, 125, 18, 33, 22, 3, -127, -123, -34};
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
    msg.setTimeStamp(0.57447345623);
    msg.setSource(7736U);
    msg.setSourceEntity(149U);
    msg.setDestination(49563U);
    msg.setDestinationEntity(63U);
    msg.locale.assign("JCERFRDJHXELZQFTOMPQUBEMQQQZKHDMKPZOOCYABLGPGCJVWPAURRWRYHGCCMPFKNJJUNQZXFSYEPLVJWQCPAHGEGDLXIYBXEDAEKDBODWLJFLTSMDZIBKFEAWPVRQHHZZTYWZKMXPSBNUWCDIHIGANLSGRJMKMGWRVXJZCVILIAYHSTACOUVYO");
    const char tmp_msg_0[] = {98, -95, -65, 40, -97, 43, 120, -4, -33, -26, 120, -82, 116, 73, -24, 21, 23, -110, 9, 20, 116, 15, -97, -13, -36, 9, 7, 84, 111, -58, -111, -62, -24, 14, -15, 80, -40, -75, -28, 12, -20, 81, 20, 105, 105, -71, -93, -23, 81, 13, 15, -108, 37, -93, 31, 109, 29, -18, -5, -74, 25, 49, 23, -21, 80, 124, 36, 51, 85, 63, 111, -53, 80, 112, 7, 11, -10, -51, 38, 97, 42, 97, -89, 87, 17, 46, 60, -91, -50, 44, 37, 8, 77, -42, 14, -32, 81, -43, -60, 68, -126, -76, 12, -43, -128, -112, 78, -81, 11, -38, 112, -64, -6, 12, -127, 61, -27, 49, 44, -104, 35, 105, 34, 24, 106, 69, 64, 89, -61, -23, -49, 29, 22, 71, -108, 25, 39, 110, -28, 10, 64, 28, -16, 118, -64, -119, 23, 121, -4, -76, -121, -88, -108, -13, -87, -54, 21, 110, 76, -99, -83, 64, 105, -86, 115, -95, -41, -95, 100, 74, -119, 15, 22, -74, 21, -41, 59, 72, 7, -124, 71, -35, 66, -7, 123, 77, -28, -44, -96, 46, -85, 47, -99, 76, 16, 110, 23, 111, 125, 56, -113, 48, -125, 115, -56, 106, -81, -110, -107, 80, 91, -115, -55, 17, 82, 82, 73, 46, 55, 43, -94, 104, 16, 83, 8, -59, 23, -95, -48, -118, 3, -16, 108, -96, 30, -123, -110, 120};
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
    msg.setTimeStamp(0.010368743296);
    msg.setSource(24139U);
    msg.setSourceEntity(181U);
    msg.setDestination(37024U);
    msg.setDestinationEntity(39U);
    msg.locale.assign("XUZYLLSEEAFNUSGXCAAJDAFCFKDQLLIQAXHRCFFQETMVFPKJLPDWXTUVAPPFKVOVVMGXFYXPTUWOGNWXQTTTWYHPSHGKEKABVIISOAIXNICOTDZLKNVRGAYVWMIYVERSSOGUEUCMJYISPDZHBHZYHLWPZWCMMKSRFIUBTQBQNDD");
    const char tmp_msg_0[] = {-77, -27, -24, 97, -117, -36, -36, -66, 18, -47, -110, 80, -99, -106, 50, 43, 68, 80, 61, 110, -13, 89, 49, -74, 87, 112, 1, 92, -32, 65, -92, 117, -115, -2, 45, -3, 33, -64, 14, -41, 10, -66, -127, -40, 64, -90, -86, 38, -104, -90, -50, -22, 18, -54, -125, 72, -40, 61};
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
    msg.setTimeStamp(0.510017397137);
    msg.setSource(19285U);
    msg.setSourceEntity(182U);
    msg.setDestination(64472U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.953704036385);
    msg.setSource(62550U);
    msg.setSourceEntity(161U);
    msg.setDestination(3420U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.627869951495);
    msg.setSource(64151U);
    msg.setSourceEntity(182U);
    msg.setDestination(64712U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.0519255749019);
    msg.setSource(10953U);
    msg.setSourceEntity(90U);
    msg.setDestination(65281U);
    msg.setDestinationEntity(76U);
    msg.camid = 112U;
    msg.x = 56103U;
    msg.y = 56152U;

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
    msg.setTimeStamp(0.10700199934);
    msg.setSource(49346U);
    msg.setSourceEntity(106U);
    msg.setDestination(24188U);
    msg.setDestinationEntity(65U);
    msg.camid = 95U;
    msg.x = 5719U;
    msg.y = 18979U;

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
    msg.setTimeStamp(0.527502561182);
    msg.setSource(14145U);
    msg.setSourceEntity(140U);
    msg.setDestination(29919U);
    msg.setDestinationEntity(134U);
    msg.camid = 3U;
    msg.x = 56893U;
    msg.y = 46119U;

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
    msg.setTimeStamp(0.229401900554);
    msg.setSource(9121U);
    msg.setSourceEntity(228U);
    msg.setDestination(64539U);
    msg.setDestinationEntity(175U);
    msg.camid = 135U;
    msg.x = 26495U;
    msg.y = 44505U;

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
    msg.setTimeStamp(0.96763886866);
    msg.setSource(22590U);
    msg.setSourceEntity(59U);
    msg.setDestination(53716U);
    msg.setDestinationEntity(29U);
    msg.camid = 47U;
    msg.x = 50887U;
    msg.y = 65316U;

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
    msg.setTimeStamp(0.151701402195);
    msg.setSource(560U);
    msg.setSourceEntity(28U);
    msg.setDestination(39789U);
    msg.setDestinationEntity(103U);
    msg.camid = 86U;
    msg.x = 50302U;
    msg.y = 63538U;

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
    msg.setTimeStamp(0.600488812963);
    msg.setSource(51490U);
    msg.setSourceEntity(34U);
    msg.setDestination(24U);
    msg.setDestinationEntity(100U);
    msg.tracking = 31U;
    msg.lat = 0.134242242562;
    msg.lon = 0.138700763611;
    msg.x = 0.99987307658;
    msg.y = 0.955477192466;
    msg.z = 0.407193766587;

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
    msg.setTimeStamp(0.152473466614);
    msg.setSource(968U);
    msg.setSourceEntity(105U);
    msg.setDestination(34749U);
    msg.setDestinationEntity(26U);
    msg.tracking = 80U;
    msg.lat = 0.0303809766031;
    msg.lon = 0.174646225241;
    msg.x = 0.543906272675;
    msg.y = 0.389930195636;
    msg.z = 0.212235946548;

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
    msg.setTimeStamp(0.800206016363);
    msg.setSource(6330U);
    msg.setSourceEntity(167U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(65U);
    msg.tracking = 132U;
    msg.lat = 0.575185319075;
    msg.lon = 0.578744509234;
    msg.x = 0.710406080335;
    msg.y = 0.123127423045;
    msg.z = 0.237818036626;

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
    msg.setTimeStamp(0.751548723101);
    msg.setSource(41780U);
    msg.setSourceEntity(10U);
    msg.setDestination(48744U);
    msg.setDestinationEntity(150U);
    msg.target.assign("ZVQRLIFIXXSGNVSHDEDLRMEWMIAPEMKNGINEYCJFVDIQLIRBKLZAFUKHUORDZTBIJJMHPFFVKCBMPKZWU");
    msg.lbearing = 0.315877368831;
    msg.lelevation = 0.84216054323;
    msg.bearing = 0.0705079317255;
    msg.elevation = 0.854460952286;
    msg.phi = 0.574133425642;
    msg.theta = 0.893446032962;
    msg.psi = 0.888102165955;
    msg.accuracy = 0.626228663969;

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
    msg.setTimeStamp(0.0659491337267);
    msg.setSource(23162U);
    msg.setSourceEntity(112U);
    msg.setDestination(3691U);
    msg.setDestinationEntity(187U);
    msg.target.assign("UWCIFYODMMUUEPSLFMWHEDPOAJAOQQHVEDJMWAMXQVCWGESCDRYPJBFCGRXAVRJKLNCLSZLMQNFJBLNTASVDBVBZRUKMZTONQDURGYQTKTIVWCIPLZNLKUXITAFGBHIRFVKGXJRPWBASXJHBQEEXWUIDGIATCIJFYMO");
    msg.lbearing = 0.199502210914;
    msg.lelevation = 0.25835624817;
    msg.bearing = 0.216773283693;
    msg.elevation = 0.111789639008;
    msg.phi = 0.775100972109;
    msg.theta = 0.836455677273;
    msg.psi = 0.252693960593;
    msg.accuracy = 0.483118059646;

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
    msg.setTimeStamp(0.334302881085);
    msg.setSource(56200U);
    msg.setSourceEntity(242U);
    msg.setDestination(28880U);
    msg.setDestinationEntity(3U);
    msg.target.assign("PTFMBWXAIOCTQQHKSZYLQEXKVXMTGZNSQYBWHFEPEGMYMFKDWLVSIJRGPHXZJANCRZMNLALZYUBCYIHSWWLGBCJKPSYCACVCVYRNAODHGOJPUIYOILZDXUGRXXSOSGLZDWDNGNMWXZJISLEPCBWRAVKBKBCTINMKJXVUHFOJFYLWOAPMTQISODT");
    msg.lbearing = 0.733449887796;
    msg.lelevation = 0.527677267298;
    msg.bearing = 0.14752839594;
    msg.elevation = 0.521870945624;
    msg.phi = 0.811879278528;
    msg.theta = 0.0189438696165;
    msg.psi = 0.176221781471;
    msg.accuracy = 0.457123781202;

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
    msg.setTimeStamp(0.114676355004);
    msg.setSource(17170U);
    msg.setSourceEntity(17U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(108U);
    msg.target.assign("TYMYAVMZVJGXSEOWAGKAEBRVCASVJKFDLNDNHTHPKHSGLO");
    msg.x = 0.501247881455;
    msg.y = 0.116567014203;
    msg.z = 0.232865957731;
    msg.n = 0.818272933755;
    msg.e = 0.500658652297;
    msg.d = 0.176734154528;
    msg.phi = 0.867370530463;
    msg.theta = 0.00695954243468;
    msg.psi = 0.468102691692;
    msg.accuracy = 0.25265586233;

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
    msg.setTimeStamp(0.458404075418);
    msg.setSource(9624U);
    msg.setSourceEntity(52U);
    msg.setDestination(26428U);
    msg.setDestinationEntity(40U);
    msg.target.assign("YMNBKJRWRQGJMFIRPMPWSISHRRZOADUPINNVHXGRAXXLFTFKOMPPGEWVEOCUFPTJZ");
    msg.x = 0.702882776701;
    msg.y = 0.423075509512;
    msg.z = 0.0565970350252;
    msg.n = 0.310098468417;
    msg.e = 0.155885626464;
    msg.d = 0.267552749838;
    msg.phi = 0.763188042142;
    msg.theta = 0.535157023762;
    msg.psi = 0.983062404323;
    msg.accuracy = 0.426559382985;

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
    msg.setTimeStamp(0.569538025419);
    msg.setSource(42561U);
    msg.setSourceEntity(196U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(239U);
    msg.target.assign("XCMREIQCLSHPDTJIDEINHMTMFQOWDHUBGQIJIWSTNKUCPQAXCRRESS");
    msg.x = 0.797820757941;
    msg.y = 0.332656172691;
    msg.z = 0.298523717309;
    msg.n = 0.0387219107801;
    msg.e = 0.0360852021145;
    msg.d = 0.524932294949;
    msg.phi = 0.678365752326;
    msg.theta = 0.0209159397058;
    msg.psi = 0.492507244351;
    msg.accuracy = 0.942079567683;

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
    msg.setTimeStamp(0.19453883462);
    msg.setSource(47095U);
    msg.setSourceEntity(151U);
    msg.setDestination(46971U);
    msg.setDestinationEntity(59U);
    msg.target.assign("ZEOGXAPIQYAGZVIMSCXAYTWAIMJJGFFLHVPZVG");
    msg.lat = 0.503857459594;
    msg.lon = 0.00602566273608;
    msg.z_units = 37U;
    msg.z = 0.72077250314;
    msg.accuracy = 0.678007927094;

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
    msg.setTimeStamp(0.591658547296);
    msg.setSource(35638U);
    msg.setSourceEntity(153U);
    msg.setDestination(43916U);
    msg.setDestinationEntity(216U);
    msg.target.assign("RGICSNZIEZDAXVWGBISJSVOBYUOKDYXAWDEGMHURGVFPPMWNVLQDRWRCRBFGGWNFDUQONQQTONITKCZDTNHFLZOXIUPXJPBHBBDIYXOPNHCPAUXEALWMVRTNGQIELJTOKEMFCNFUREQOLCUCQTFJQPKMZJHCLXSKEDTWVFVBYSRXZJUJHFBPNXWJCAVYBHIDKXSLL");
    msg.lat = 0.837803569169;
    msg.lon = 0.158544964148;
    msg.z_units = 180U;
    msg.z = 0.902923891021;
    msg.accuracy = 0.414008739996;

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
    msg.setTimeStamp(0.499132039133);
    msg.setSource(22109U);
    msg.setSourceEntity(72U);
    msg.setDestination(7173U);
    msg.setDestinationEntity(236U);
    msg.target.assign("AMHCRQOGFIVKSLNUKRMLLYOVASEIEKRWYLPLVXTCOLNTJFXNUBCKAWIRPBWXTDFYNKGJYNHDOEFAQDZIVEPGTBSJYXCDUUEDFTSZEWNHZIMIAPABGRRMGKVAXXOMTDPOBLXOUFXSKUWHCBPNGYKX");
    msg.lat = 0.221083443009;
    msg.lon = 0.0179459421912;
    msg.z_units = 79U;
    msg.z = 0.78048495753;
    msg.accuracy = 0.130018830633;

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
    msg.setTimeStamp(0.153361395134);
    msg.setSource(51140U);
    msg.setSourceEntity(94U);
    msg.setDestination(16353U);
    msg.setDestinationEntity(190U);
    msg.name.assign("MZXJMYXZFXDTKRGCGHDVUUJYUJZKUMTNOPOCQWWTURJJYLSNLDZAPVXWHRCTCHZLENANAFVEUVCRAKTJWJWAEYKLNREHFXKPPCLTPQOMUATMO");
    msg.lat = 0.468936578689;
    msg.lon = 0.147116295814;
    msg.z = 0.922945394332;
    msg.z_units = 110U;

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
    msg.setTimeStamp(0.572302047981);
    msg.setSource(56510U);
    msg.setSourceEntity(142U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(248U);
    msg.name.assign("MXNYCXCGIFKGPTNZUWCKTXJIALJEQVCJGGZQAUYTOXUFEILURYLFCZHVRRSUYPEDDHHBSVGPUXYPYHHXVYJITVGUKOJZFREHBMURKDIMLZBKWPPDYQWHYOMBLTQPUEGPAZELZQCMIELADFESJRHTITVBIOQLMSAEKGDBQAFMAFPFOQWBVWIXBSWOWFKJLWDRNZVVCMXAHSPZRNASKWUNBLOXKMNWNDNYDNJXOCQTFJKERGS");
    msg.lat = 0.281849116906;
    msg.lon = 0.918300734241;
    msg.z = 0.736904082607;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.0509348685666);
    msg.setSource(29251U);
    msg.setSourceEntity(215U);
    msg.setDestination(35579U);
    msg.setDestinationEntity(48U);
    msg.name.assign("YOGFEXNVJIWRUSGLQRIIETYSBFBOGYRRXVGFPYIPVAMHNQAZISGNMDWFHQPNEWXUIMAUTHKEFDEBDGNHVACQBYFCKIZFZEPMKKBLIDUJHPHDQJIJ");
    msg.lat = 0.238519792822;
    msg.lon = 0.630917534964;
    msg.z = 0.692050265079;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.634366182);
    msg.setSource(31291U);
    msg.setSourceEntity(114U);
    msg.setDestination(55280U);
    msg.setDestinationEntity(121U);
    msg.op = 223U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MBKHPPLERDQNJJWLNHHTNJXMIFWLYIGAQZCYCUREXSAZAZETMMCPGZAIJRXNWSNRZUKTVLGXVPXYHYSGGQSCMEYIDOQRMTB");
    tmp_msg_0.lat = 0.621922049019;
    tmp_msg_0.lon = 0.672693975093;
    tmp_msg_0.z = 0.910861931355;
    tmp_msg_0.z_units = 189U;
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
    msg.setTimeStamp(0.642676373688);
    msg.setSource(48388U);
    msg.setSourceEntity(154U);
    msg.setDestination(60333U);
    msg.setDestinationEntity(122U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.463687290745);
    msg.setSource(16300U);
    msg.setSourceEntity(126U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(116U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.0245629126929);
    msg.setSource(32466U);
    msg.setSourceEntity(65U);
    msg.setDestination(14240U);
    msg.setDestinationEntity(73U);
    msg.value = 0.650705580317;
    msg.type = 50U;

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
    msg.setTimeStamp(0.385497922389);
    msg.setSource(41952U);
    msg.setSourceEntity(75U);
    msg.setDestination(54148U);
    msg.setDestinationEntity(220U);
    msg.value = 0.858873419576;
    msg.type = 169U;

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
    msg.setTimeStamp(0.333057744735);
    msg.setSource(10615U);
    msg.setSourceEntity(247U);
    msg.setDestination(55542U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0244921831247;
    msg.type = 108U;

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
    msg.setTimeStamp(0.143863962407);
    msg.setSource(10211U);
    msg.setSourceEntity(109U);
    msg.setDestination(41189U);
    msg.setDestinationEntity(158U);
    msg.value = 0.598137625121;

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
    msg.setTimeStamp(0.663931010923);
    msg.setSource(25925U);
    msg.setSourceEntity(114U);
    msg.setDestination(19429U);
    msg.setDestinationEntity(186U);
    msg.value = 0.0199736876692;

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
    msg.setTimeStamp(0.713481440901);
    msg.setSource(62397U);
    msg.setSourceEntity(133U);
    msg.setDestination(26989U);
    msg.setDestinationEntity(95U);
    msg.value = 0.553048334469;

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
    msg.setTimeStamp(0.614874043736);
    msg.setSource(57753U);
    msg.setSourceEntity(177U);
    msg.setDestination(21490U);
    msg.setDestinationEntity(167U);
    msg.timestamp_last_service = 0.182582623205;
    msg.time_next_service = 0.673760051723;
    msg.time_motor_next_service = 0.201811440252;
    msg.time_idle_ground = 0.732854382891;
    msg.time_idle_air = 0.567330705349;
    msg.time_idle_water = 0.554132171121;
    msg.time_idle_underwater = 0.50974984375;
    msg.time_idle_unknown = 0.955662925786;
    msg.time_motor_ground = 0.609686324397;
    msg.time_motor_air = 0.372466922443;
    msg.time_motor_water = 0.472759907113;
    msg.time_motor_underwater = 0.0304495824221;
    msg.time_motor_unknown = 0.473945153676;
    msg.rpm_min = 26813;
    msg.rpm_max = -5122;
    msg.depth_max = 0.970120774879;

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
    msg.setTimeStamp(0.653579070058);
    msg.setSource(13211U);
    msg.setSourceEntity(158U);
    msg.setDestination(56764U);
    msg.setDestinationEntity(60U);
    msg.timestamp_last_service = 0.46918632819;
    msg.time_next_service = 0.212467200512;
    msg.time_motor_next_service = 0.648217229503;
    msg.time_idle_ground = 0.118044659168;
    msg.time_idle_air = 0.140738784726;
    msg.time_idle_water = 0.406066405504;
    msg.time_idle_underwater = 0.735954298585;
    msg.time_idle_unknown = 0.591656736116;
    msg.time_motor_ground = 0.60562247617;
    msg.time_motor_air = 0.14987905357;
    msg.time_motor_water = 0.0934767020349;
    msg.time_motor_underwater = 0.0691288134702;
    msg.time_motor_unknown = 0.0369612490837;
    msg.rpm_min = 18941;
    msg.rpm_max = 166;
    msg.depth_max = 0.606320777427;

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
    msg.setTimeStamp(0.483272550043);
    msg.setSource(56614U);
    msg.setSourceEntity(141U);
    msg.setDestination(14169U);
    msg.setDestinationEntity(83U);
    msg.timestamp_last_service = 0.0160249484975;
    msg.time_next_service = 0.610536353557;
    msg.time_motor_next_service = 0.352733171126;
    msg.time_idle_ground = 0.893748145097;
    msg.time_idle_air = 0.17667376287;
    msg.time_idle_water = 0.397883984545;
    msg.time_idle_underwater = 0.792939962867;
    msg.time_idle_unknown = 0.448309721047;
    msg.time_motor_ground = 0.310129505046;
    msg.time_motor_air = 0.785127654128;
    msg.time_motor_water = 0.922378450097;
    msg.time_motor_underwater = 0.714989761584;
    msg.time_motor_unknown = 0.61764825389;
    msg.rpm_min = 30850;
    msg.rpm_max = 11313;
    msg.depth_max = 0.0629133339282;

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
    msg.setTimeStamp(0.0449267699242);
    msg.setSource(13840U);
    msg.setSourceEntity(8U);
    msg.setDestination(46991U);
    msg.setDestinationEntity(120U);
    msg.severity = 42U;
    msg.text.assign("ZUPLLCRCUORGIEYVAPSVQZSLGIASTOMOKMGZAPNPTHANYYEGARQSTVJKHLWBFXKBBDNPGJKXWMTNYZAWVQIKUHSSCFVHHZDJNJPOUUXJDIGDNHPLLOIWEOBUMTBFIHFXLWVGFNFQSW");

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
    msg.setTimeStamp(0.916868191196);
    msg.setSource(39502U);
    msg.setSourceEntity(215U);
    msg.setDestination(63967U);
    msg.setDestinationEntity(217U);
    msg.severity = 194U;
    msg.text.assign("WGBTSSNWUHACHCFTPEYBUVQNLFMGSSATRQSYFCRDYPFDMKBTCNFUZPQWETFMDWPHKWBBUIZLRCOPDZKJGRMGYNHMXXEEZNGVSBPZJQDHOMIMMXHYBKIOHYJDGALI");

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
    msg.setTimeStamp(0.838764863081);
    msg.setSource(19275U);
    msg.setSourceEntity(102U);
    msg.setDestination(32523U);
    msg.setDestinationEntity(95U);
    msg.severity = 178U;
    msg.text.assign("UBCRYFWQZHVTXPMJKDODHJKPMZBGFQXQFZFRJNJKINXFWBPYEVHLCUNUPBKVRSCXLZACGJUZROOZDCAIYVGEYLKJHNMUANIZQMJDX");

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
    msg.setTimeStamp(0.585585449509);
    msg.setSource(34209U);
    msg.setSourceEntity(29U);
    msg.setDestination(27580U);
    msg.setDestinationEntity(251U);
    msg.channel = -99;
    msg.value = 173124184;
    msg.gain = 69U;

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
    msg.setTimeStamp(0.448713418815);
    msg.setSource(41069U);
    msg.setSourceEntity(253U);
    msg.setDestination(15224U);
    msg.setDestinationEntity(38U);
    msg.channel = 36;
    msg.value = -633781257;
    msg.gain = 124U;

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
    msg.setTimeStamp(0.325500274472);
    msg.setSource(35471U);
    msg.setSourceEntity(183U);
    msg.setDestination(17705U);
    msg.setDestinationEntity(203U);
    msg.channel = -13;
    msg.value = -1942202693;
    msg.gain = 84U;

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
    msg.setTimeStamp(0.294647386497);
    msg.setSource(48586U);
    msg.setSourceEntity(58U);
    msg.setDestination(24U);
    msg.setDestinationEntity(162U);
    msg.ch01 = 0.798072504913;
    msg.ch02 = 0.647406833159;
    msg.ch03 = 0.497893906093;
    msg.ch04 = 0.956548840943;
    msg.ch05 = 0.260338735727;
    msg.ch06 = 0.712744685923;
    msg.ch07 = 0.588332909046;
    msg.ch08 = 0.881828052149;
    msg.ch09 = 0.708684201787;
    msg.ch10 = 0.626724416495;
    msg.ch11 = 0.564241365585;
    msg.ch12 = 0.730478726598;
    msg.ch13 = 0.936461365725;
    msg.ch14 = 0.381237658133;
    msg.ch15 = 0.718910706329;
    msg.ch16 = 0.965540512937;

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
    msg.setTimeStamp(0.760309094772);
    msg.setSource(9860U);
    msg.setSourceEntity(29U);
    msg.setDestination(57988U);
    msg.setDestinationEntity(54U);
    msg.ch01 = 0.577995837036;
    msg.ch02 = 0.114482711606;
    msg.ch03 = 0.360964873925;
    msg.ch04 = 0.711014804577;
    msg.ch05 = 0.486286771778;
    msg.ch06 = 0.0573772036096;
    msg.ch07 = 0.31411998508;
    msg.ch08 = 0.244867923944;
    msg.ch09 = 0.623592710716;
    msg.ch10 = 0.877003562123;
    msg.ch11 = 0.822195523226;
    msg.ch12 = 0.690261010791;
    msg.ch13 = 0.309467540909;
    msg.ch14 = 0.96861519737;
    msg.ch15 = 0.618228064046;
    msg.ch16 = 0.145470948634;

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
    msg.setTimeStamp(0.871992078484);
    msg.setSource(15724U);
    msg.setSourceEntity(153U);
    msg.setDestination(51892U);
    msg.setDestinationEntity(219U);
    msg.ch01 = 0.0998298364767;
    msg.ch02 = 0.605078770186;
    msg.ch03 = 0.941793303359;
    msg.ch04 = 0.71066957125;
    msg.ch05 = 0.885633895277;
    msg.ch06 = 0.442872194143;
    msg.ch07 = 0.684427398158;
    msg.ch08 = 0.21058302391;
    msg.ch09 = 0.6776618459;
    msg.ch10 = 0.00462490963976;
    msg.ch11 = 0.449970555199;
    msg.ch12 = 0.500695614714;
    msg.ch13 = 0.835556939889;
    msg.ch14 = 0.474621841785;
    msg.ch15 = 0.317574001578;
    msg.ch16 = 0.573313012208;

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
    msg.setTimeStamp(0.879989221099);
    msg.setSource(64561U);
    msg.setSourceEntity(164U);
    msg.setDestination(31026U);
    msg.setDestinationEntity(198U);
    msg.time = 0.154953995824;
    msg.ang = 0.546353408031;

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
    msg.setTimeStamp(0.578824169659);
    msg.setSource(49222U);
    msg.setSourceEntity(27U);
    msg.setDestination(27859U);
    msg.setDestinationEntity(252U);
    msg.time = 0.313322611949;
    msg.ang = 0.212157481751;

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
    msg.setTimeStamp(0.206159721603);
    msg.setSource(32451U);
    msg.setSourceEntity(203U);
    msg.setDestination(24129U);
    msg.setDestinationEntity(117U);
    msg.time = 0.909884296222;
    msg.ang = 0.3799965981;

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
    msg.setTimeStamp(0.692792837326);
    msg.setSource(43066U);
    msg.setSourceEntity(191U);
    msg.setDestination(4158U);
    msg.setDestinationEntity(196U);
    msg.value = 0.672431427582;

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
    msg.setTimeStamp(0.15234458845);
    msg.setSource(2934U);
    msg.setSourceEntity(85U);
    msg.setDestination(25572U);
    msg.setDestinationEntity(138U);
    msg.value = 0.236940665025;

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
    msg.setTimeStamp(0.901121398134);
    msg.setSource(13036U);
    msg.setSourceEntity(234U);
    msg.setDestination(2094U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0968621970988;

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
    msg.setTimeStamp(0.20740291631);
    msg.setSource(36960U);
    msg.setSourceEntity(202U);
    msg.setDestination(24577U);
    msg.setDestinationEntity(3U);
    msg.value = 0.959805695245;

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
    msg.setTimeStamp(0.962026141849);
    msg.setSource(35472U);
    msg.setSourceEntity(243U);
    msg.setDestination(24901U);
    msg.setDestinationEntity(58U);
    msg.value = 0.187401392335;

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
    msg.setTimeStamp(0.614142124159);
    msg.setSource(28752U);
    msg.setSourceEntity(180U);
    msg.setDestination(9290U);
    msg.setDestinationEntity(33U);
    msg.value = 0.479617267642;

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
    msg.setTimeStamp(0.417541667556);
    msg.setSource(1072U);
    msg.setSourceEntity(15U);
    msg.setDestination(59874U);
    msg.setDestinationEntity(82U);
    msg.value = 0.966687715469;

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
    msg.setTimeStamp(0.926568628966);
    msg.setSource(20289U);
    msg.setSourceEntity(235U);
    msg.setDestination(6519U);
    msg.setDestinationEntity(36U);
    msg.value = 0.127362257196;

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
    msg.setTimeStamp(0.0767404130681);
    msg.setSource(4821U);
    msg.setSourceEntity(49U);
    msg.setDestination(44251U);
    msg.setDestinationEntity(6U);
    msg.value = 0.319729439883;

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
    msg.setTimeStamp(0.880635893541);
    msg.setSource(20061U);
    msg.setSourceEntity(234U);
    msg.setDestination(46465U);
    msg.setDestinationEntity(135U);
    msg.l2 = -81;
    msg.l3 = -31;
    msg.iridium = -23;
    msg.modem = -100;
    msg.pumps = -86;
    msg.vhf = 11;

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
    msg.setTimeStamp(0.685622807682);
    msg.setSource(46076U);
    msg.setSourceEntity(109U);
    msg.setDestination(49606U);
    msg.setDestinationEntity(163U);
    msg.l2 = -32;
    msg.l3 = 17;
    msg.iridium = 86;
    msg.modem = 97;
    msg.pumps = -118;
    msg.vhf = 24;

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
    msg.setTimeStamp(0.129621435528);
    msg.setSource(38522U);
    msg.setSourceEntity(200U);
    msg.setDestination(8428U);
    msg.setDestinationEntity(195U);
    msg.l2 = 65;
    msg.l3 = 94;
    msg.iridium = -29;
    msg.modem = 21;
    msg.pumps = 30;
    msg.vhf = 18;

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
    msg.setTimeStamp(0.532984347141);
    msg.setSource(11550U);
    msg.setSourceEntity(188U);
    msg.setDestination(8709U);
    msg.setDestinationEntity(84U);
    msg.angle = 0.476758015863;
    msg.reference.assign("SOSWUNLZKAWDGIVUMQACPUPIRCSPDABUGVSTOGXGTGQLPDRBRAQNSLFOVXLEYTDFIBLRVOMDYBRAGDMIHTCFIC");
    msg.speed = 0.0305306766336;

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
    msg.setTimeStamp(0.115709924199);
    msg.setSource(16603U);
    msg.setSourceEntity(211U);
    msg.setDestination(49653U);
    msg.setDestinationEntity(54U);
    msg.angle = 0.114425429345;
    msg.reference.assign("CNYBWCNXEXEDHOJZTHADMGQTLHFAMKXGGGQLESTOCLHOPJKNRWYTWICHUBRJIDTARGZXUQISZ");
    msg.speed = 0.051730477892;

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
    msg.setTimeStamp(0.594275625261);
    msg.setSource(13256U);
    msg.setSourceEntity(88U);
    msg.setDestination(55056U);
    msg.setDestinationEntity(36U);
    msg.angle = 0.810949948021;
    msg.reference.assign("BPZKHSSLKQEGKFXAIKURBDRECGWIFANVXMDHRGCAUZZEYSCJGNBCQZMQVVFAYBIWNPOJSQVIUCSLDTBUUFJHLOJKAQXGWSYTCVKAYMTPKHHOPRCJRRLTPRFZQYJOXKULVWVSELIXYGUNCLIWBGXWITYXZJQXDBSMRKZHVETNJVMALHOMSAZDDHJDJZYCOEIOBQFDGNBFXTFNIRTYUPHWIPMHK");
    msg.speed = 0.742726405091;

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
    msg.setTimeStamp(0.768783899068);
    msg.setSource(21196U);
    msg.setSourceEntity(181U);
    msg.setDestination(29835U);
    msg.setDestinationEntity(114U);
    msg.angle = 0.535272550725;
    msg.direction.assign("ARXWKMJBIFLEBQBBIABOOHMQFLNWSKLDYCZQZVXTAPGGFXNXOVZFZUYFNTKSDNQKEEJKDZTJUCYLOGYQUKXISBKAOJLILWIHWMKDMHMGVJCPHVQWMXESUVTVOPSQANNUCJAFMFPYEWJCQCOJTRXWTZOVCQASRZPRUUHXPTDHTOAYDLWIPZSESPYRLDXEPQGGJDBFNGRSIHGGELDHEYSUCNYMCF");
    msg.speed = 0.0854820673198;

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
    msg.setTimeStamp(0.296212357464);
    msg.setSource(62886U);
    msg.setSourceEntity(85U);
    msg.setDestination(33057U);
    msg.setDestinationEntity(208U);
    msg.angle = 0.336948581389;
    msg.direction.assign("GAOCFBYNRZBSAXHOIOJKNHUXJWJVIATXEPMJGJOVGZPDPKEOUQFVKSSYZXGFQGHHGZWRNRSZVIVPAIIUQUBWYONRQVEWIKBIFDTLNEDUVHBONMTMLKWDKVYZTKDLQHJRFXVTHZAGSJDDMAPLDGXTNRFSZLWFQMXYKUQLASCOWAXIKEUQBIMMOMPYKXDPNTFBSLHBQJCPTCLGDCUTN");
    msg.speed = 0.334823288153;

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
    msg.setTimeStamp(0.359857878493);
    msg.setSource(28646U);
    msg.setSourceEntity(180U);
    msg.setDestination(39810U);
    msg.setDestinationEntity(151U);
    msg.angle = 0.933862056218;
    msg.direction.assign("OSTAOJVMYHZNEBZUYEEAOJUYXOJHCSKSQDZGWVTTFGSPVCDDZSX");
    msg.speed = 0.558586778394;

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
    msg.setTimeStamp(0.384330660947);
    msg.setSource(32384U);
    msg.setSourceEntity(180U);
    msg.setDestination(12263U);
    msg.setDestinationEntity(162U);
    msg.x = 0.618891202092;
    msg.y = 0.497767008806;
    msg.z1 = 0.13994381723;
    msg.z2 = 0.937984834374;

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
    msg.setTimeStamp(0.817287890828);
    msg.setSource(64029U);
    msg.setSourceEntity(190U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(142U);
    msg.x = 0.728574780349;
    msg.y = 0.158032961087;
    msg.z1 = 0.764867162953;
    msg.z2 = 0.0553688081293;

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
    msg.setTimeStamp(0.538620042345);
    msg.setSource(29454U);
    msg.setSourceEntity(3U);
    msg.setDestination(943U);
    msg.setDestinationEntity(230U);
    msg.x = 0.198732121471;
    msg.y = 0.0885891771417;
    msg.z1 = 0.0106459008763;
    msg.z2 = 0.677290336428;

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
    msg.setTimeStamp(0.161636708184);
    msg.setSource(42672U);
    msg.setSourceEntity(94U);
    msg.setDestination(39886U);
    msg.setDestinationEntity(83U);
    msg.mmsi = 0.415825726478;
    msg.lat = 0.819317452483;
    msg.lon = 0.322993100538;
    msg.x = 0.666970297315;
    msg.y = 0.367591833639;
    msg.speed = 0.447053674214;
    msg.course = 0.60366396592;
    msg.dist = 0.201132834447;
    msg.length = 0.143910791525;
    msg.width = 0.155546961258;
    msg.o_vect = 0.819306956277;

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
    msg.setTimeStamp(0.520757953213);
    msg.setSource(54920U);
    msg.setSourceEntity(142U);
    msg.setDestination(4848U);
    msg.setDestinationEntity(51U);
    msg.mmsi = 0.229269702764;
    msg.lat = 0.558122398995;
    msg.lon = 0.647172321719;
    msg.x = 0.201883520294;
    msg.y = 0.327178596319;
    msg.speed = 0.650456284713;
    msg.course = 0.727787968256;
    msg.dist = 0.360430145259;
    msg.length = 0.670198895187;
    msg.width = 0.680445991665;
    msg.o_vect = 0.858011531955;

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
    msg.setTimeStamp(0.985787917111);
    msg.setSource(64963U);
    msg.setSourceEntity(230U);
    msg.setDestination(56159U);
    msg.setDestinationEntity(96U);
    msg.mmsi = 0.27568297705;
    msg.lat = 0.287217345621;
    msg.lon = 0.268031484245;
    msg.x = 0.79730836714;
    msg.y = 0.729890250893;
    msg.speed = 0.489205883643;
    msg.course = 0.713800567692;
    msg.dist = 0.262633127076;
    msg.length = 0.858907760011;
    msg.width = 0.299235429941;
    msg.o_vect = 0.275353859629;

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
    msg.setTimeStamp(0.991579092509);
    msg.setSource(19620U);
    msg.setSourceEntity(124U);
    msg.setDestination(12871U);
    msg.setDestinationEntity(194U);
    msg.locations.assign("HYNPPFOXEVSLNXPXBYJTWXJQNYIRGGVELGWKJAPGKPOQXUBSQYZSSBWIOZHHMJYBQGAMJNCGWERSDLMYUVBMOCWVTERYUURHOJZFEGHSCDLYUVDQLBZZCQDXAXBVDAEHPTYMLWFGDQAIHLUBRDOTCUZABFZUBKIIROVZVFEIOAJQVXIKMTAEPSRDWAUEFRQYWPOEGZFHFQJCMXUNCTKKMDIPPKJCKWSTMFLNNMRNRNIC");

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
    msg.setTimeStamp(0.85398807942);
    msg.setSource(13539U);
    msg.setSourceEntity(111U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(168U);
    msg.locations.assign("TMQMOPIABSMPTYSEGRHDRQDPGSYANMNORHASUPEBSIT");

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
    msg.setTimeStamp(0.0895249968398);
    msg.setSource(47456U);
    msg.setSourceEntity(10U);
    msg.setDestination(43702U);
    msg.setDestinationEntity(251U);
    msg.locations.assign("KEUTFVHTRGBWEVSKRHUNBLOIDRUHPCPROWMZTDMOWZYNDSAVCQKIJYXVPYQQNWALGQVDILRMTZPDXHKMAAIIMYRKZJREWHJPGEXJEHNKIQTFTISUTFLGJFUXFSCJKYKSOOXJFLNVBFBEWJYTSBFMDBRFCVGJSXCHETOYGQGSWNKKEXGRYWPDQMXCZLUYPLPSACNUJIAAEXOVFQPIDATSUDZLPZMBCWYLOHBEHOGAZCDOVQMRGLVCB");

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
    msg.setTimeStamp(0.822819129794);
    msg.setSource(46130U);
    msg.setSourceEntity(60U);
    msg.setDestination(53047U);
    msg.setDestinationEntity(231U);
    msg.value = 0.227547344556;

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
    msg.setTimeStamp(0.501606519739);
    msg.setSource(12316U);
    msg.setSourceEntity(208U);
    msg.setDestination(57713U);
    msg.setDestinationEntity(170U);
    msg.value = 0.559211224629;

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
    msg.setTimeStamp(0.0737984677233);
    msg.setSource(51940U);
    msg.setSourceEntity(71U);
    msg.setDestination(40180U);
    msg.setDestinationEntity(150U);
    msg.value = 0.694370723576;

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
    msg.setTimeStamp(0.371560107731);
    msg.setSource(49346U);
    msg.setSourceEntity(37U);
    msg.setDestination(44651U);
    msg.setDestinationEntity(191U);
    msg.beam1 = 0.228229643535;
    msg.beam2 = 0.117604531863;
    msg.beam3 = 0.809422856775;
    msg.beam4 = 0.272719132658;

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
    msg.setTimeStamp(0.432599846463);
    msg.setSource(54606U);
    msg.setSourceEntity(123U);
    msg.setDestination(31258U);
    msg.setDestinationEntity(150U);
    msg.beam1 = 0.504138386042;
    msg.beam2 = 0.449475161929;
    msg.beam3 = 0.0687496114659;
    msg.beam4 = 0.644472032988;

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
    msg.setTimeStamp(0.17801720837);
    msg.setSource(19349U);
    msg.setSourceEntity(163U);
    msg.setDestination(13601U);
    msg.setDestinationEntity(127U);
    msg.beam1 = 0.633365444534;
    msg.beam2 = 0.85630409998;
    msg.beam3 = 0.393170556856;
    msg.beam4 = 0.93935684359;

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
    msg.setTimeStamp(0.0741721232739);
    msg.setSource(44719U);
    msg.setSourceEntity(90U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(247U);
    msg.beam1 = 54U;
    msg.beam2 = 108U;
    msg.beam3 = 172U;
    msg.beam4 = 85U;

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
    msg.setTimeStamp(0.748740647357);
    msg.setSource(3443U);
    msg.setSourceEntity(156U);
    msg.setDestination(11317U);
    msg.setDestinationEntity(42U);
    msg.beam1 = 47U;
    msg.beam2 = 212U;
    msg.beam3 = 135U;
    msg.beam4 = 44U;

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
    msg.setTimeStamp(0.00160325547312);
    msg.setSource(59643U);
    msg.setSourceEntity(1U);
    msg.setDestination(41801U);
    msg.setDestinationEntity(3U);
    msg.beam1 = 147U;
    msg.beam2 = 140U;
    msg.beam3 = 165U;
    msg.beam4 = 145U;

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
    msg.setTimeStamp(0.278004854183);
    msg.setSource(45027U);
    msg.setSourceEntity(46U);
    msg.setDestination(52349U);
    msg.setDestinationEntity(88U);
    msg.cellposition = 0.130427717404;
    msg.x = 0.0957830499797;
    msg.y = 0.600953504254;
    msg.z1 = 0.289847983712;
    msg.z2 = 0.570617318766;
    msg.amp0 = 0.0294630876831;
    msg.amp1 = 0.782369969582;
    msg.amp2 = 0.178586755795;
    msg.amp3 = 0.0442604512837;
    msg.cor0 = 252U;
    msg.cor1 = 240U;
    msg.cor2 = 221U;
    msg.cor3 = 156U;

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
    msg.setTimeStamp(0.83614185621);
    msg.setSource(63641U);
    msg.setSourceEntity(205U);
    msg.setDestination(27228U);
    msg.setDestinationEntity(67U);
    msg.cellposition = 0.440184901014;
    msg.x = 0.156464682464;
    msg.y = 0.846390940706;
    msg.z1 = 0.489376559033;
    msg.z2 = 0.644569205927;
    msg.amp0 = 0.0834637036737;
    msg.amp1 = 0.879654430731;
    msg.amp2 = 0.828118741291;
    msg.amp3 = 0.696912742999;
    msg.cor0 = 7U;
    msg.cor1 = 144U;
    msg.cor2 = 139U;
    msg.cor3 = 73U;

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
    msg.setTimeStamp(0.205580317851);
    msg.setSource(31713U);
    msg.setSourceEntity(123U);
    msg.setDestination(44116U);
    msg.setDestinationEntity(62U);
    msg.cellposition = 0.836606798547;
    msg.x = 0.192306555735;
    msg.y = 0.912166458647;
    msg.z1 = 0.0131938456783;
    msg.z2 = 0.751974617025;
    msg.amp0 = 0.355226249768;
    msg.amp1 = 0.991167732937;
    msg.amp2 = 0.225316070977;
    msg.amp3 = 0.224661652552;
    msg.cor0 = 115U;
    msg.cor1 = 20U;
    msg.cor2 = 158U;
    msg.cor3 = 73U;

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
    msg.setTimeStamp(0.577400859432);
    msg.setSource(58738U);
    msg.setSourceEntity(20U);
    msg.setDestination(33906U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.0711712706414);
    msg.setSource(29124U);
    msg.setSourceEntity(245U);
    msg.setDestination(46572U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.322813045028);
    msg.setSource(56431U);
    msg.setSourceEntity(81U);
    msg.setDestination(64446U);
    msg.setDestinationEntity(124U);

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

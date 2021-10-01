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
// IMC XML MD5: d42cead96ccbcb8f221e1aa539695508                            *
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
    msg.setTimeStamp(0.463504956953);
    msg.setSource(62677U);
    msg.setSourceEntity(47U);
    msg.setDestination(43888U);
    msg.setDestinationEntity(199U);
    msg.state = 132U;
    msg.flags = 216U;
    msg.description.assign("YLRIWAENDKHXKQHKPBSPBYDJMUBQYZPCAYIAEFGEIXWNLVBRUVDHIVRGBYWNQGLFMJQYWPDFHNCCZPPQIRJUUZLMKTVDYILZTJJIXXDGEAFIENWGTVOVSENFUASHRGCNMCLNKAVDOXLWTMFPQSXOMEJSUGZSECRGIMAGYKULCHTCXHPFJXYZSBD");

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
    msg.setTimeStamp(0.740193566246);
    msg.setSource(45455U);
    msg.setSourceEntity(7U);
    msg.setDestination(47318U);
    msg.setDestinationEntity(136U);
    msg.state = 121U;
    msg.flags = 224U;
    msg.description.assign("PWXVCVCZNHAJKUIUFBMEJGARLINEFRBIDYXKRSXFBRKJIKNHTCQQOOFVGISCWGRXHGHLNCHWXUZZTLFFWMRAOCMYLXOIPVQGGAYMBJBDOT");

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
    msg.setTimeStamp(0.503006785408);
    msg.setSource(32695U);
    msg.setSourceEntity(3U);
    msg.setDestination(2576U);
    msg.setDestinationEntity(3U);
    msg.state = 109U;
    msg.flags = 126U;
    msg.description.assign("QNOWSOEUZYDDFUNBRUWVLULBSRHQHFFKWCHYSMQXFXWRWZXGEDNTIILQHRPJJJZHRBCFHKYYMOMMIVULBKIGVRMFGDCJXKFGVQHGUDSNXPCHSMIPSFZECJITJDBRNVFJNTNTYAEDXWZUITILVARVAYTBIGKHVNRIGSQYYZAJU");

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
    msg.setTimeStamp(0.350229738172);
    msg.setSource(64954U);
    msg.setSourceEntity(10U);
    msg.setDestination(15757U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.214420352007);
    msg.setSource(44670U);
    msg.setSourceEntity(23U);
    msg.setDestination(5259U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.294890119153);
    msg.setSource(3569U);
    msg.setSourceEntity(42U);
    msg.setDestination(30989U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.437767842577);
    msg.setSource(20326U);
    msg.setSourceEntity(131U);
    msg.setDestination(17850U);
    msg.setDestinationEntity(150U);
    msg.id = 248U;
    msg.label.assign("QSJUKMCAAAHODBOVDBJUZZKQVTXIRPEJHHQCSIEKWLMSWYENNFSYLSOUYOTUOJXXJBBZMAFGTCOIBKFYKNXGENLBRAGWRQLVEQJGMLGZFPSZYXCDYEIDQRTJYLDSTHMWTKQHITCEMPILLAMMUHPSOIVGPXRLFQFAFNODCPUKVJFVSPECTBHAIUHNPYKNBF");
    msg.component.assign("BHDICUEAQSGZUDDJAPTIUPWNFJDWVRCKFPJTTLVJLXEZKPURDXSAZKDPRCTJQRXQOEVZSMKYQDHXAIDMVOXUYKYVPVPQQWFWKXWSMJDUZFBLMOYOCGYNKXEGFTBOOAYASRIHTPGWQWSHTPWZKEARUZSTFURYNZMRGKYIJFAGLCCNBHPSLHGYLMKHLNNNIILEBBGFUMJBVHBQJLOZQ");
    msg.act_time = 42939U;
    msg.deact_time = 45184U;

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
    msg.setTimeStamp(0.648582615589);
    msg.setSource(54818U);
    msg.setSourceEntity(45U);
    msg.setDestination(40181U);
    msg.setDestinationEntity(221U);
    msg.id = 216U;
    msg.label.assign("PYUFRYRBZZKHXHSRWKSCLIVDFMKOGHU");
    msg.component.assign("PAIUNPSKRKJIVHZJAMECHFUINBIURXLTHJZNBVEARSMOLDSMAGBZXEEEXBUQLFGNBEJZQRQHAGZ");
    msg.act_time = 53876U;
    msg.deact_time = 20805U;

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
    msg.setTimeStamp(0.778644815454);
    msg.setSource(45712U);
    msg.setSourceEntity(206U);
    msg.setDestination(7001U);
    msg.setDestinationEntity(93U);
    msg.id = 45U;
    msg.label.assign("RIDUFXCYUDOAJCUAWTAPKQSNLKBTIIVORVFSSBXHAUCGVEBALE");
    msg.component.assign("DVGTGUNZXKQVCTHGXXDKZMKFNIILDZWILQGLYDAYFCAWEEISRENUOKQIROMKZVKRZUYBWRBTCPHBAYOXSIOLQXCSHCVFEXVKZHYRPKPPIMEHBBSJTOJSAOYRBQNHKNEJVOWDTEEIOHLMJXWYQYJARYKJUDWAGEUQIXLYUHWF");
    msg.act_time = 37450U;
    msg.deact_time = 61251U;

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
    msg.setTimeStamp(0.219224893418);
    msg.setSource(26283U);
    msg.setSourceEntity(32U);
    msg.setDestination(40696U);
    msg.setDestinationEntity(71U);
    msg.id = 159U;

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
    msg.setTimeStamp(0.703861891837);
    msg.setSource(63598U);
    msg.setSourceEntity(200U);
    msg.setDestination(43441U);
    msg.setDestinationEntity(35U);
    msg.id = 169U;

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
    msg.setTimeStamp(0.687065037851);
    msg.setSource(56516U);
    msg.setSourceEntity(118U);
    msg.setDestination(30584U);
    msg.setDestinationEntity(22U);
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
    msg.setTimeStamp(0.24717793364);
    msg.setSource(43787U);
    msg.setSourceEntity(223U);
    msg.setDestination(42988U);
    msg.setDestinationEntity(137U);
    msg.op = 201U;
    msg.list.assign("WKWOBDIWDVHKHNMGSAOXXVOJGSFVYJCMLNLDUQBMFUYINYXQDAOABVRZCRTJELUNAVKNZIPPUWZRHYKQFCJXGFZSXHEEAXMDZIABTTTPGHOBUBQMTGBHEQPMELZLQMSTWEQRIQSIQOLIFASJYCIUVHJTNFENPFWWOUMMPPJYZYSRUUDLNXAXEZVPCSWYGQWUAKXBZSKCJEKOTXLCIDIGNRTDHBDGVLWZSPCYYPRVCAOKRLHFKNDMRRVH");

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
    msg.setTimeStamp(0.185518192745);
    msg.setSource(37761U);
    msg.setSourceEntity(23U);
    msg.setDestination(46619U);
    msg.setDestinationEntity(44U);
    msg.op = 195U;
    msg.list.assign("OFAHDPDARJDNARSEEEZXXBHFPPUJGMACBGSFFXPJOSGZFHHSCLHEXILRYZJNSENPZDIVMZIUNEDOMSIFQIGYBSEHWVGHCZQQMEIJUBZHNLUHNFVJIYPNOWWMVTVDJYTXCVOGVBUWBDSMWLMXZQTTPGJRCKRLOUKDQARLMUSWBKYTGCBQKTWAVLNPRITYYCIUOXZSCYTEOBZJQFUMDXWCVXPRKTRNIRXOEAKOHPMNQUALTCLLFVWWKGJAGKQ");

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
    msg.setTimeStamp(0.400825698155);
    msg.setSource(40937U);
    msg.setSourceEntity(65U);
    msg.setDestination(58168U);
    msg.setDestinationEntity(179U);
    msg.op = 79U;
    msg.list.assign("PYCITERFZIPVKHHHYSXWGWZDLDTYIORYTPEHNMTLNDKCWTECIRLNNKKAFELTCQBUOSJVMOKVQODAQKNCDF");

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
    msg.setTimeStamp(0.0686313802002);
    msg.setSource(56107U);
    msg.setSourceEntity(10U);
    msg.setDestination(40174U);
    msg.setDestinationEntity(208U);
    msg.value = 156U;

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
    msg.setTimeStamp(0.714333397366);
    msg.setSource(42885U);
    msg.setSourceEntity(88U);
    msg.setDestination(35611U);
    msg.setDestinationEntity(159U);
    msg.value = 120U;

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
    msg.setTimeStamp(0.142773963259);
    msg.setSource(48343U);
    msg.setSourceEntity(30U);
    msg.setDestination(12017U);
    msg.setDestinationEntity(103U);
    msg.value = 52U;

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
    msg.setTimeStamp(0.348457701135);
    msg.setSource(58389U);
    msg.setSourceEntity(133U);
    msg.setDestination(15775U);
    msg.setDestinationEntity(186U);
    msg.consumer.assign("EWFOLEYCYUPVKDCUJAUFWATRLOJACJPCFSBEJIRVTUKAWBAIDAUNKMXROCURXTJAPKSTEBELOLPYNLHUSNVWCRUVZQZTRULDFINNPFPYWEEBMPXVGGWWRZXJCVGPISSAOZNJIMHBGQREBWEIKMHZMVTVRMLQIDMHIOSHNGXYKKFYFYQLFEISBQMQHDNDIONSYHPFMHBCRULVSVQLDJGZXXKZCCGWOBOJA");
    msg.message_id = 22044U;

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
    msg.setTimeStamp(0.136138131129);
    msg.setSource(36835U);
    msg.setSourceEntity(65U);
    msg.setDestination(5919U);
    msg.setDestinationEntity(59U);
    msg.consumer.assign("YRJSFQNBTEJUJNMIZPIOVMHXZCDNSVEEUZFVTWAXVDANGRCOUSWQAJMEVLOECDEXRMLFTNQUAFZIEFRSVULCJUINNSKSQNXWQGAKXGYDMMLWYHPOFTDEGTFBDCWPAYOCHXGYLYIYDD");
    msg.message_id = 30483U;

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
    msg.setTimeStamp(0.638893796315);
    msg.setSource(4624U);
    msg.setSourceEntity(210U);
    msg.setDestination(13281U);
    msg.setDestinationEntity(180U);
    msg.consumer.assign("BAKWHZNOCETUWOVHSBHVHCSNAZTHQBIASATXFLDNMVSEPQXJHMWBGMPFXCJWKSYCRCPEZTVLQQUPHAFLCEMVSRJDQDCISRGSTIQGZLIXQCDGYXGUEAZKZANFWXWDEMVZXU");
    msg.message_id = 64621U;

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
    msg.setTimeStamp(0.432784389077);
    msg.setSource(7308U);
    msg.setSourceEntity(251U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(85U);
    msg.type = 140U;

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
    msg.setTimeStamp(0.418512806154);
    msg.setSource(35696U);
    msg.setSourceEntity(229U);
    msg.setDestination(7673U);
    msg.setDestinationEntity(68U);
    msg.type = 225U;

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
    msg.setTimeStamp(0.28521043839);
    msg.setSource(31697U);
    msg.setSourceEntity(196U);
    msg.setDestination(61613U);
    msg.setDestinationEntity(8U);
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
    msg.setTimeStamp(0.202431704128);
    msg.setSource(215U);
    msg.setSourceEntity(9U);
    msg.setDestination(32714U);
    msg.setDestinationEntity(245U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.436884631677);
    msg.setSource(46941U);
    msg.setSourceEntity(36U);
    msg.setDestination(46102U);
    msg.setDestinationEntity(38U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.896289352528);
    msg.setSource(54079U);
    msg.setSourceEntity(228U);
    msg.setDestination(10916U);
    msg.setDestinationEntity(67U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.304509090013);
    msg.setSource(58403U);
    msg.setSourceEntity(229U);
    msg.setDestination(5372U);
    msg.setDestinationEntity(77U);
    msg.total_steps = 54U;
    msg.step_number = 115U;
    msg.step.assign("FAGATFQNZYGYQBTSZYWHTCPAEORETTJVQCIZILAGUKLYIQXABSDIXUODIHAPQYVRDCHEUWJDVGDDFIRQSKFRMIAPJLBJQDNDRORCWPNVQCINFENKZWJYSXTRULUAILSYWLXBVFOGSQMSGMRENUWXZXRUBWBHDUOPHOEFBTJCXOLMNTTKSEMJUOPHJEO");
    msg.flags = 99U;

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
    msg.setTimeStamp(0.742179143659);
    msg.setSource(31632U);
    msg.setSourceEntity(20U);
    msg.setDestination(43848U);
    msg.setDestinationEntity(153U);
    msg.total_steps = 167U;
    msg.step_number = 139U;
    msg.step.assign("QLQWZTOMPQAFGYNCBMRJZUXBUQVBZISYUPCOTSIJJRFVHQUDEZBDWMNDRYLX");
    msg.flags = 3U;

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
    msg.setTimeStamp(0.40221510162);
    msg.setSource(16403U);
    msg.setSourceEntity(121U);
    msg.setDestination(57407U);
    msg.setDestinationEntity(179U);
    msg.total_steps = 233U;
    msg.step_number = 175U;
    msg.step.assign("PNMFCANNZJUHTXMNQRYVFMVHYIUNGOBECOPSAARQRYCSYWIRPZCZAUUWECQDIVLABZPFXHHDZASKEWGODWDNWKLDMOQNRQGTQVEHOUNWKCESRFJJAHXJHRJBDKZAYOFTZ");
    msg.flags = 89U;

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
    msg.setTimeStamp(0.63186640592);
    msg.setSource(6807U);
    msg.setSourceEntity(92U);
    msg.setDestination(61532U);
    msg.setDestinationEntity(100U);
    msg.state = 169U;
    msg.error.assign("NYVTQUSNELCMRQEQRICTEOYMTPCGWPDZMDBVUWZHMVCMLACHBBVAGAZAFJWVZXXSEBMOBYYYJGUUTLLQCXFNQMKARYYEHSJQTXNLAVXTKELIXENRLYDFYAZPLKHNFZBVGSDTUIIWKTDJOGFOSJOOSWBHUGPDYXKKGGEMNBMAGZMAHNTHWCSUDDHKODWORIZFVSCRQCFEIPJLIJVFI");

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
    msg.setTimeStamp(0.94354700864);
    msg.setSource(59519U);
    msg.setSourceEntity(239U);
    msg.setDestination(37330U);
    msg.setDestinationEntity(170U);
    msg.state = 121U;
    msg.error.assign("OHAMPFNEHYPQNITEOUQMBGRZPKRUWWGSUUVIELCWPMQIRBOABXGWCYGTVLINH");

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
    msg.setTimeStamp(0.407178251029);
    msg.setSource(5781U);
    msg.setSourceEntity(194U);
    msg.setDestination(43521U);
    msg.setDestinationEntity(85U);
    msg.state = 55U;
    msg.error.assign("YQYWDIRYJIEJPBXLYLSMPMITHEUZMDXDQUXFYHUEMJHOUKJADRAYMGAAOISBVNKLDWQJPCVSEAWZZVNQGUIHNYTOCZZNEJAJZDHXLTLSVFVTQPMGTRNRWCBXOQUHZNCVUDIEXGELSBFR");

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
    msg.setTimeStamp(0.655067351145);
    msg.setSource(4316U);
    msg.setSourceEntity(86U);
    msg.setDestination(1110U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.576876832881);
    msg.setSource(42659U);
    msg.setSourceEntity(41U);
    msg.setDestination(22201U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.968369078108);
    msg.setSource(35894U);
    msg.setSourceEntity(210U);
    msg.setDestination(13498U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.811712170349);
    msg.setSource(26874U);
    msg.setSourceEntity(184U);
    msg.setDestination(25196U);
    msg.setDestinationEntity(56U);
    msg.op = 33U;
    msg.speed_min = 0.647529038707;
    msg.speed_max = 0.97366901564;
    msg.long_accel = 0.834054487107;
    msg.alt_max_msl = 0.236093960538;
    msg.dive_fraction_max = 0.450892024572;
    msg.climb_fraction_max = 0.387337039344;
    msg.bank_max = 0.81609101512;
    msg.p_max = 0.855248468567;
    msg.pitch_min = 0.484025017401;
    msg.pitch_max = 0.45461792503;
    msg.q_max = 0.265728639675;
    msg.g_min = 0.989180491341;
    msg.g_max = 0.338959139018;
    msg.g_lat_max = 0.431560303016;
    msg.rpm_min = 0.880505188805;
    msg.rpm_max = 0.0923818391632;
    msg.rpm_rate_max = 0.942676594111;

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
    msg.setTimeStamp(0.805488186888);
    msg.setSource(38063U);
    msg.setSourceEntity(98U);
    msg.setDestination(44297U);
    msg.setDestinationEntity(119U);
    msg.op = 82U;
    msg.speed_min = 0.217616076962;
    msg.speed_max = 0.366551568614;
    msg.long_accel = 0.489537615934;
    msg.alt_max_msl = 0.816300982834;
    msg.dive_fraction_max = 0.857334238891;
    msg.climb_fraction_max = 0.919394682667;
    msg.bank_max = 0.0816171379133;
    msg.p_max = 0.604784753952;
    msg.pitch_min = 0.94501269034;
    msg.pitch_max = 0.455231166027;
    msg.q_max = 0.625804618906;
    msg.g_min = 0.747438995273;
    msg.g_max = 0.775029555908;
    msg.g_lat_max = 0.27565798469;
    msg.rpm_min = 0.345483678644;
    msg.rpm_max = 0.214530760195;
    msg.rpm_rate_max = 0.299149316582;

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
    msg.setTimeStamp(0.564645444287);
    msg.setSource(49893U);
    msg.setSourceEntity(7U);
    msg.setDestination(45264U);
    msg.setDestinationEntity(39U);
    msg.op = 21U;
    msg.speed_min = 0.75285407645;
    msg.speed_max = 0.84157061144;
    msg.long_accel = 0.396165411513;
    msg.alt_max_msl = 0.969234307377;
    msg.dive_fraction_max = 0.79061386199;
    msg.climb_fraction_max = 0.783177757352;
    msg.bank_max = 0.00364370880165;
    msg.p_max = 0.640820586548;
    msg.pitch_min = 0.584902638216;
    msg.pitch_max = 0.845588676057;
    msg.q_max = 0.277577011141;
    msg.g_min = 0.41188917693;
    msg.g_max = 0.561999167784;
    msg.g_lat_max = 0.0109497380918;
    msg.rpm_min = 0.292342223396;
    msg.rpm_max = 0.675321637689;
    msg.rpm_rate_max = 0.650988384472;

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
    msg.setTimeStamp(0.510631728298);
    msg.setSource(57490U);
    msg.setSourceEntity(207U);
    msg.setDestination(26996U);
    msg.setDestinationEntity(128U);
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 8284U;
    tmp_msg_0.name.assign("POALIJZLYBMGTLCYSRVXFAJRTGYGZWHKDVDAQOTKBCEMJCDKQXSLNZPEYKLOIARPJJTMRQDVWGSCFQMOHVNMHBWXZEQAWNGEFIBVXDBBIRAOHAGFOEMKEVKTCFQANPINYVXOWFCRFTYSWPIHYMHOXZHUKPDEYMNNZCDVOWPUEBJXLSIXIDYUBTLSHF");
    tmp_msg_0.custom.assign("VMLRNLDGSBKSKNHFJMCMXKCUNWIOQNQUGGQMCPIXAATRHAKAFZYVCPWODIPQCFGVWZBGXWEJYZWOPRQLRFRHAETFEJKBUUGJLLLCARMTWKFXOEHTVWIKLPDHWNRPPOXEWGHXYSNEMIJOQMZNJRDFFWUTUMVYVBDAIUNPZSKKXZUSALRXZITELEBHHQ");
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
    msg.setTimeStamp(0.828516728914);
    msg.setSource(26341U);
    msg.setSourceEntity(64U);
    msg.setDestination(1489U);
    msg.setDestinationEntity(104U);
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 21700U;
    tmp_msg_0.custom.assign("CXOYQBDZWBEKEIJFDOXYXMBWGXTZZLFDQOJAKCPPKAZKIDDDEYQVBHVGIUBVJJHAZYUWETGIQPIFNFSUULRNIXVKQMJSVIRAMXUTTVJWQOSOGPCXXMWSPVZYMQUJGELIHSRNLMSFLCNNMUOPLEDTVGNVNCGZPAUZFQWEIBRMATTRYZGBKRSQGIMPWEVNMFOYNCBRKLRJHSSPFDBLCEYOAETCHHARBXFYUGCSRHTAKHKDJHHW");
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
    msg.setTimeStamp(0.497070927172);
    msg.setSource(22662U);
    msg.setSourceEntity(237U);
    msg.setDestination(52815U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.734405781618);
    msg.setSource(14590U);
    msg.setSourceEntity(119U);
    msg.setDestination(63657U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.609951390048;
    msg.lon = 0.82395072131;
    msg.height = 0.43763981705;
    msg.x = 0.721754205795;
    msg.y = 0.152583454203;
    msg.z = 0.613783680556;
    msg.phi = 0.840226114177;
    msg.theta = 0.91835785025;
    msg.psi = 0.872389556774;
    msg.u = 0.71475318505;
    msg.v = 0.881050028788;
    msg.w = 0.380418817311;
    msg.p = 0.59932608603;
    msg.q = 0.0416189256767;
    msg.r = 0.793417574752;
    msg.svx = 0.298985901538;
    msg.svy = 0.466295353156;
    msg.svz = 0.833094608633;

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
    msg.setTimeStamp(0.301495890099);
    msg.setSource(54334U);
    msg.setSourceEntity(121U);
    msg.setDestination(54007U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.66101758688;
    msg.lon = 0.119800528323;
    msg.height = 0.0529380948623;
    msg.x = 0.549075146649;
    msg.y = 0.348777073419;
    msg.z = 0.549346153832;
    msg.phi = 0.929540381451;
    msg.theta = 0.356475898734;
    msg.psi = 0.460349393591;
    msg.u = 0.773907129944;
    msg.v = 0.892134697857;
    msg.w = 0.752888110005;
    msg.p = 0.716782742025;
    msg.q = 0.0503989568194;
    msg.r = 0.523358735497;
    msg.svx = 0.870745287769;
    msg.svy = 0.525567826406;
    msg.svz = 0.7863210488;

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
    msg.setTimeStamp(0.41932128249);
    msg.setSource(28605U);
    msg.setSourceEntity(0U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.146283853173;
    msg.lon = 0.867374423281;
    msg.height = 0.801562340574;
    msg.x = 0.135956324674;
    msg.y = 0.855702556814;
    msg.z = 0.35928159686;
    msg.phi = 0.378940187066;
    msg.theta = 0.284085189638;
    msg.psi = 0.651193325423;
    msg.u = 0.373330350586;
    msg.v = 0.664199895352;
    msg.w = 0.357599048637;
    msg.p = 0.509719622632;
    msg.q = 0.820440931398;
    msg.r = 0.480348626103;
    msg.svx = 0.115358685765;
    msg.svy = 0.789066842251;
    msg.svz = 0.234496258727;

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
    msg.setTimeStamp(0.757063542298);
    msg.setSource(61335U);
    msg.setSourceEntity(49U);
    msg.setDestination(57985U);
    msg.setDestinationEntity(106U);
    msg.op = 159U;
    msg.entities.assign("BJVSJSMZOXTQWUMCCOCDUPJFFEKNBZCQPENPRFQEDMOYTTSJINLTGAUARWTFKRRHSNKUGLIGHYKWCBTHCBIMAPNOURKCIEBYSNGOEPOUVHIIXXXAFOVALFZRSPIHVCTXMJCQVYDOGSKVZBPJAYDQMYUIRVEXQYIWJXHJRLLPHLWWWMZDELSYGTGOXLIAFPWUMBQHAGVQFJYNXBDTVQRKEYEZZLDNOAUTABZ");

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
    msg.setTimeStamp(0.0748081477275);
    msg.setSource(52175U);
    msg.setSourceEntity(135U);
    msg.setDestination(11592U);
    msg.setDestinationEntity(181U);
    msg.op = 67U;
    msg.entities.assign("YPOHWBRAYXEQRIYIMGALJLHCUZKKLOAZVCNOZBPCAQVYSVJPOKDQUREDTELJCWZXIMXGUNYWGVVMQOHISKIVEEGPXCNNJVUAHUPYGKXYRSAFWQFLUXCRFDOHAQFJSLLQRWSZKJFXPIKRJLSORWYMJTHLOJTGTSSHBN");

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
    msg.setTimeStamp(0.0770595188408);
    msg.setSource(33691U);
    msg.setSourceEntity(212U);
    msg.setDestination(65517U);
    msg.setDestinationEntity(41U);
    msg.op = 153U;
    msg.entities.assign("NJEMEHSJEISWVIMQQNSKUJPRVVSGEPKVGXILIRYBKZUVXPCOTNWNAKQNOYABMAUJIPFWLXYDAHCHSODWHWUDYPDUWGEHYELXCSSVZYPRCKQLWTAZMNHRPVJUB");

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
    msg.setTimeStamp(0.128079062897);
    msg.setSource(58185U);
    msg.setSourceEntity(41U);
    msg.setDestination(45320U);
    msg.setDestinationEntity(196U);
    msg.type = 208U;
    msg.speed = 10016U;
    const char tmp_msg_0[] = {-53, 84, -44, 107, 96, 116, 49, -83, 34, 23, -121, -3, -114, 70, 46, -123, 110, -21, 90, 97, 65, 119, -21, 40, -68, 7, -122, -79, 55, 88, -96, -38, -89, -6, -50, 105, 56, -116, 38, 45, 0, 57, 102, -115, 60, -59, 54, -115, -65, 87, 78, -107, 26, 54, 104, 81, -97, 43, 16, -26, 102, 121, 118, 18, 65, -6, -7, 95, 24, -57, -39, -32, -55, -76, -126, 55, -111, 86, -19, -8, 42, 30, -61, -60, -92, 97, 73, 116, 79, 30, -57, -9, -20, -40, 31, -55, -79, -42, -104, 90, -25, -81, -47, -3, 27, 115, 67, -35, 96, 21, -40, -103, 112, 37, -5, 67, -26, -4, 92, 81, 11, -86, -65, 61, 35, 114, -107, -85, -55, 18, 126, -117, -18, -79, -102, -64, -115, 21, 106, 56, -88, -102, 37, 73, -79, -123, -26, 72, -98, 84, 102, -105, 28, 109, 40, 56, 25, 2, 106, 62, -87, 0, 27, -100, 66, -114, 47, -124, 9, 9, -45, 73, -13, 59, -47, 69, 98, 25, 9, 39, 80, 60, -121, -29, 2, 72, 118, 99, 114, 102, 105, 55, -81, 7, 27, -112, -4, -84, 76, -124, 104, 42, -60, 20, -107, 117, 78, 1, 25, 85, 40, -5, -33, 45, 93, 64, -7, -108, 101, -32, -42, 85, -124, -20, 16, 123, 71, 19, -93, -109, 1, -91, -84, 29, -9, 42, 48, -75, 44};
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
    msg.setTimeStamp(0.689687044657);
    msg.setSource(16571U);
    msg.setSourceEntity(229U);
    msg.setDestination(29856U);
    msg.setDestinationEntity(76U);
    msg.type = 96U;
    msg.speed = 53964U;
    const char tmp_msg_0[] = {0, 126, 5, -14, -81, -123, 35, -66, -15, -85, -69, -50, 100, 92, 111, 72, -62, 65, -82, 50, -13, -8, 72, 71, -78, 123, -78, 119, 82, 90, 69, -7, 44, 92, -82, -85, 68, -34, -78, 124, -57, 68, 79, -112, -29, -1, -103, 80, 74, 100, 88, 4, 57, -100, 104, 49, 106, 96, -21, -94, -6, 99, -119, 8, 52, -110, 31, -75, -62, -22, 24, 52, 65, 9, 59, -37, -3, 99, -71, -79, 4, 29, 67, 40, -51, -6, -95, -86, 91, 93, 89, -75, -31, -111, -108, 6, 57, -49, -58, 86, -20, -73, 48, 22, 87, -106, 113, 27, 45, -47, -104, 0, -123, -56, -76, -56, -118, 64, 111, -63, -45, 52};
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
    msg.setTimeStamp(0.926741502177);
    msg.setSource(1718U);
    msg.setSourceEntity(50U);
    msg.setDestination(17493U);
    msg.setDestinationEntity(240U);
    msg.type = 80U;
    msg.speed = 33915U;
    const char tmp_msg_0[] = {50, 67, 8, -106, 120, -50, -124, 34, -26, 114, 72, 58, 29, 5, 100, -26, 56, -47, -101, 64, 120, -13, -117, -33, 103, -36, 13, 97, 74, 41, -123, -11, -12, 104, -7, -38, 36, 2, 54, 10, -110, -83, 2, -84, -85, 98, -50, 14, -19, 52, -31, 24, 108, -16, -82, -3, 71, -93, 87, -73, 44, 17, 100, -89, 66, -120, -96, -46, 66, 66, 124, 109, 57, 111, 6, 78, 68, 106, 125, -21, -32, -105, 30, -77, 109, 93, 38, 123, -1, 110, 110, 111, 111, -73, 120, -28, 34, -35, 32, -84, -104, 12, 31, 45, -93, -70, 36, -72, -80, 29, 60, 123, 72, -9, -36, -34, -65, -120, 13, -59, 62, 6, -117, -79, -47, -85, 21, 121, 96, 72, 9, -64, -51, -8, -117, -92, 118, 23, -35, -90, -50, -94, 10, -85, 125, -85, -99, 49, 105, 85, 26, 6, 33, 123, 79, -40, -103, 121, -73, -52, 21, 122, 22, -5, -103, -108, -124, 62, -61, -80, 112, -24, -106, 66, -61, -120, 30, 125, 98, 64, 23, 123, 73, 112, 75, 28, 10, -118, -79, -107, -22, -33, -13, -105, -68, 92};
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
    msg.setTimeStamp(0.585334616059);
    msg.setSource(39914U);
    msg.setSourceEntity(212U);
    msg.setDestination(48802U);
    msg.setDestinationEntity(6U);
    msg.op = 223U;
    msg.tas2acc_pgain = 0.22228642184;
    msg.bank2p_pgain = 0.552892597683;

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
    msg.setTimeStamp(0.916595633597);
    msg.setSource(16879U);
    msg.setSourceEntity(114U);
    msg.setDestination(5169U);
    msg.setDestinationEntity(34U);
    msg.op = 59U;
    msg.tas2acc_pgain = 0.176714549172;
    msg.bank2p_pgain = 0.557953701666;

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
    msg.setTimeStamp(0.214980535054);
    msg.setSource(52921U);
    msg.setSourceEntity(65U);
    msg.setDestination(63394U);
    msg.setDestinationEntity(186U);
    msg.op = 47U;
    msg.tas2acc_pgain = 0.231819831121;
    msg.bank2p_pgain = 0.618855203256;

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
    msg.setTimeStamp(0.433161456975);
    msg.setSource(63671U);
    msg.setSourceEntity(126U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(141U);
    msg.available = 1676184531U;
    msg.value = 211U;

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
    msg.setTimeStamp(0.85602457048);
    msg.setSource(19763U);
    msg.setSourceEntity(119U);
    msg.setDestination(43900U);
    msg.setDestinationEntity(10U);
    msg.available = 2102427512U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.324114095016);
    msg.setSource(57575U);
    msg.setSourceEntity(192U);
    msg.setDestination(28187U);
    msg.setDestinationEntity(26U);
    msg.available = 1865015875U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.201297545407);
    msg.setSource(19937U);
    msg.setSourceEntity(51U);
    msg.setDestination(9829U);
    msg.setDestinationEntity(241U);
    msg.op = 57U;
    msg.snapshot.assign("LBUJCJINVPJYZTMOQGPAPIVSWMUAMQXOTHYLZZROFPLKZ");
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.261828365139;
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
    msg.setTimeStamp(0.198327153695);
    msg.setSource(1349U);
    msg.setSourceEntity(33U);
    msg.setDestination(12051U);
    msg.setDestinationEntity(189U);
    msg.op = 236U;
    msg.snapshot.assign("NJWPBJPFNHQGUKILDLGFRGVBBLWNYNPUYXBSPMGRUCANLQQDCNKBMJUMIEOTKQSOFIYZXXSDFRULCUVGWJAYQVYYFNTKESKHCTXPMIVTOITWFATOZCGYUHEMOBFCKPRWGMMWVTROQDEQRPJHMMKLPZTOOERCNCHHVDZZZRPWENAXBDZJTVGULFJL");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 150U;
    tmp_msg_0.list.assign("BISWXFGFBMKNUSPAQHQGXTSNXPCAUILEZO");
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
    msg.setTimeStamp(0.00945363625391);
    msg.setSource(29218U);
    msg.setSourceEntity(116U);
    msg.setDestination(8604U);
    msg.setDestinationEntity(12U);
    msg.op = 205U;
    msg.snapshot.assign("XHLTTTGAILAZHEBMAMQXLOHOWQIQRBKAJMCFEWZNAIOYCJYZYVKECHPBVMBARYALBYSGKFJOZHVWOJMHFUCXDFCNXMSVPZCNRGPRXRGOVZHEZNDTCRNPXQWNBIJKWQVSMWVILPDTZEQUQSFXWSQUXAFLHVQOSTYDMVZKMIDPDRDNUTTGMESVRCGKYBSHPKOQBJBKJSCGWNKCBGFUZJROAARUUHDDOKWELUPGTL");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PENTCMUSWWSKUJJLVMOHFXJDZZLFLUKQPLRXGXMICFTPGTDGMGECBQJWNUNMTMHSUVPANDWDJLMBXBXBJUGHKBZWASAIU");
    tmp_msg_0.visibility.assign("FBZMMYGFETKGJAIZUKSPBTBLQCSZGOFZDLVQGUNJCAXEWESSORXKDJOHYVAOJSEZNKMLHEPNXFXDOIIYFYJEYYGLLXQIVJXXNSCBDWSYOVLLTFMGQTQHWVPWNOAUMKPNSRUSTHLIATFYVDNKSFCKXAMCVKCNGCARPXEKRNQONUUDMLDGZVIAIZBIECWRJRQWWPJDJQCHATUVFZIRMBEBHLTAGOFVMGBUDWYYHUZITQDJEUZOHWHXRKHBB");
    tmp_msg_0.scope.assign("CWCJILDLFJVSSVFRGZQECEIGUZOMNAUTQQTHPJLSCPELWHVNFLOHMKIXUMINQSXCXPCOFPVBJVAFZOEZFPL");
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
    msg.setTimeStamp(0.262799110944);
    msg.setSource(52323U);
    msg.setSourceEntity(162U);
    msg.setDestination(60902U);
    msg.setDestinationEntity(129U);
    msg.op = 91U;
    msg.name.assign("RKUVXOPEPPUTWKMSHJU");

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
    msg.setTimeStamp(0.784476673003);
    msg.setSource(8971U);
    msg.setSourceEntity(22U);
    msg.setDestination(8953U);
    msg.setDestinationEntity(65U);
    msg.op = 1U;
    msg.name.assign("LZILQNPCRKAKYNMJSXBOVWHRTRFLRQHUJNETEIYXHPOXLLGIQGFKAMISTURNVAIVDDXKUNHOZYPFFWVUAJPPPYZRMGADVWYZBXXKQLLGSQLUFBBFHZGBSESMQE");

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
    msg.setTimeStamp(0.51403449689);
    msg.setSource(35262U);
    msg.setSourceEntity(110U);
    msg.setDestination(28063U);
    msg.setDestinationEntity(226U);
    msg.op = 217U;
    msg.name.assign("GIVWQPAGYVTQSPLEAFUGNTBQOTOPKWRNJBAKURPMTTZBCMCPPOXWSJIGBKFHYJOWVHZAMNWOCGJKTROJWJDCXSXKWDEIMNPSVRXEUTLOJULYHGZVDWDCEOFAZGUNGABZYLDFVILXVXHAEVQNBVWCYMITYUDFAMISKFLZFHQEXCEXYHQPBRSCNBSFQOACJKCDSSSZRHMWPYLEIZJRM");

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
    msg.setTimeStamp(0.128857034175);
    msg.setSource(29218U);
    msg.setSourceEntity(143U);
    msg.setDestination(21539U);
    msg.setDestinationEntity(214U);
    msg.type = 192U;
    msg.htime = 0.126381479154;
    msg.context.assign("OBZZVEGOJXQUPSXEPXMSYSUGZIDOQQKCTFUHWJXONYNKRRIDVYJCHGPMNFYVQFGCFGBVTPOBTMWTZFRBDLPOIQTVHRPLNJLIFZHYLPZMQWTSEGXQEAKZLUIORHBMWAHM");
    msg.text.assign("IHKIKTSIUDGMUJNU");

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
    msg.setTimeStamp(0.331216396163);
    msg.setSource(42101U);
    msg.setSourceEntity(240U);
    msg.setDestination(14207U);
    msg.setDestinationEntity(134U);
    msg.type = 166U;
    msg.htime = 0.0668572250612;
    msg.context.assign("LZORCFQGCPRDUNHIZOZUYRPOBHDRWWJGJKYFGSTVCFKUQ");
    msg.text.assign("SIMJKLNJZAEULSMTZEOGCKKRVDYMOCZLMZXFSDXFGAEHQIVABNPHUTSBSYJCMXEPOOVCPHQ");

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
    msg.setTimeStamp(0.869081835193);
    msg.setSource(39173U);
    msg.setSourceEntity(245U);
    msg.setDestination(39784U);
    msg.setDestinationEntity(115U);
    msg.type = 51U;
    msg.htime = 0.794432766216;
    msg.context.assign("YRXEIJVPFLOFJEHNVXVJJALUEASNRFHVKMOZPSMYMQKAUTTEKICBMDDMWUHLQNXLKVMJVNGCYQHSTLXPCIAYDOPVUGRWS");
    msg.text.assign("LSQWQCHNDKAYQVPNXRJUACSGWJETOEQRJWQLUUEKEIZMGTMOJJFPSLBBUCPVWI");

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
    msg.setTimeStamp(0.571119257101);
    msg.setSource(29624U);
    msg.setSourceEntity(106U);
    msg.setDestination(5566U);
    msg.setDestinationEntity(212U);
    msg.command = 106U;
    msg.htime = 0.410359833284;

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
    msg.setTimeStamp(0.198986527004);
    msg.setSource(26683U);
    msg.setSourceEntity(85U);
    msg.setDestination(32426U);
    msg.setDestinationEntity(90U);
    msg.command = 58U;
    msg.htime = 0.813692705794;

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
    msg.setTimeStamp(0.16212585268);
    msg.setSource(62225U);
    msg.setSourceEntity(34U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(208U);
    msg.command = 167U;
    msg.htime = 0.0258970306141;

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
    msg.setTimeStamp(0.596774171136);
    msg.setSource(9928U);
    msg.setSourceEntity(74U);
    msg.setDestination(53920U);
    msg.setDestinationEntity(148U);
    msg.op = 99U;
    msg.file.assign("CROPTHGGETMCLCTSMEOXLYBUDUJYCTOANLDQKNXSWAQMIGXHLUYOVRTUNAQMDVGOYBNIFJHDIIKUMPAIMWWOFHKSJJZEZPNDFQVEWQMBQTLCSROXRCFZWHDUKBWXNHIUNPAQTVBPLXXNVKKBGPNRQEFGSGAKRGAZPVZBPOKIPJS");

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
    msg.setTimeStamp(0.157909056268);
    msg.setSource(35500U);
    msg.setSourceEntity(124U);
    msg.setDestination(55576U);
    msg.setDestinationEntity(141U);
    msg.op = 136U;
    msg.file.assign("BNUIDHQWYMQXFCQZAK");

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
    msg.setTimeStamp(0.970819901272);
    msg.setSource(61298U);
    msg.setSourceEntity(74U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(127U);
    msg.op = 216U;
    msg.file.assign("CXXYFBMVOZTDDTMGQJESJMMHQDLPJBQOPDCHNSKGSSDNKRHCMTEOIEUSUIWPOFHUNBEFBBAZYFZJQLJLAYILGCRRGEQNXYHDINOBULWUEKAUKDXOUSAELLWYIWKXOPGPSXXAFHORGDVGGJLAKFIRNRTZYUGRPCVJSVKTJPBZEDQVZWVRQLBAMJQKVAXIDMEKJWMZMCNZMVAPIYAX");

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
    msg.setTimeStamp(0.765663735611);
    msg.setSource(34439U);
    msg.setSourceEntity(169U);
    msg.setDestination(48635U);
    msg.setDestinationEntity(235U);
    msg.op = 74U;
    msg.clock = 0.582650327962;
    msg.tz = 97;

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
    msg.setTimeStamp(0.682410734279);
    msg.setSource(51360U);
    msg.setSourceEntity(221U);
    msg.setDestination(31597U);
    msg.setDestinationEntity(207U);
    msg.op = 95U;
    msg.clock = 0.346568125;
    msg.tz = 35;

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
    msg.setTimeStamp(0.64070144584);
    msg.setSource(26026U);
    msg.setSourceEntity(46U);
    msg.setDestination(62985U);
    msg.setDestinationEntity(0U);
    msg.op = 9U;
    msg.clock = 0.49759597766;
    msg.tz = 28;

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
    msg.setTimeStamp(0.659961820548);
    msg.setSource(8501U);
    msg.setSourceEntity(133U);
    msg.setDestination(30379U);
    msg.setDestinationEntity(203U);
    msg.conductivity = 0.79152099336;
    msg.temperature = 0.774932608428;
    msg.depth = 0.820038611245;

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
    msg.setTimeStamp(0.449212146145);
    msg.setSource(44423U);
    msg.setSourceEntity(159U);
    msg.setDestination(40630U);
    msg.setDestinationEntity(16U);
    msg.conductivity = 0.255191418479;
    msg.temperature = 0.41989564809;
    msg.depth = 0.0700666111636;

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
    msg.setTimeStamp(0.49010518763);
    msg.setSource(53485U);
    msg.setSourceEntity(244U);
    msg.setDestination(26130U);
    msg.setDestinationEntity(142U);
    msg.conductivity = 0.0197839243915;
    msg.temperature = 0.822602901;
    msg.depth = 0.449063100959;

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
    msg.setTimeStamp(0.886076483805);
    msg.setSource(14020U);
    msg.setSourceEntity(159U);
    msg.setDestination(55233U);
    msg.setDestinationEntity(33U);
    msg.altitude = 0.729201222258;
    msg.roll = 53U;
    msg.pitch = 64483U;
    msg.yaw = 18333U;
    msg.speed = -22091;

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
    msg.setTimeStamp(0.979723651096);
    msg.setSource(35081U);
    msg.setSourceEntity(46U);
    msg.setDestination(55355U);
    msg.setDestinationEntity(248U);
    msg.altitude = 0.945264986027;
    msg.roll = 40933U;
    msg.pitch = 54249U;
    msg.yaw = 64216U;
    msg.speed = 19031;

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
    msg.setTimeStamp(0.978245844133);
    msg.setSource(33893U);
    msg.setSourceEntity(63U);
    msg.setDestination(30435U);
    msg.setDestinationEntity(178U);
    msg.altitude = 0.96516536576;
    msg.roll = 15097U;
    msg.pitch = 21661U;
    msg.yaw = 50513U;
    msg.speed = 8874;

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
    msg.setTimeStamp(0.165666430885);
    msg.setSource(55291U);
    msg.setSourceEntity(25U);
    msg.setDestination(37428U);
    msg.setDestinationEntity(199U);
    msg.altitude = 0.8211127934;
    msg.width = 0.408060194906;
    msg.length = 0.984738907789;
    msg.bearing = 0.884997897028;
    msg.pxl = -2288;
    msg.encoding = 92U;
    const char tmp_msg_0[] = {100, -27, -77, 43, -93, -25, 13, -18, -115, 94, 8, 39, -104, -46, 12, 94, 93, 31, -68, -27, 16, 43, -40, -62, 52, -16, 12, -112, 67, -22, -119, 24, -45, -71, 9, 124, 81, 68, -11, -16, -34, -76, 118, 79, -84, -26, -48, -19, -93, 126, 82, 68, -79, -28, 73, -105, 99, -41, -87, 104, -27, -51, 52, -13, -39, 97, 82, -38, -93, -37, 108, -10, 114, 56, -128, 60, -127, 86, -23, 124, 98, 63, 81, -35, -76, -40, -58, -7, -48, -10, -46, -83, 0, -118, -70, -63, 47, -29, 44, 123, 64, 13, -103, -85, -127, 11, 36, -51, 78, -86, -101, 83, 58, 21, 22, 18, 4, 14, 0, 5, -79, 75, -92, -29, -38, -2, -111, -120, -9, 4, -51, 17, 82, 76, 30, 57, 38, 50, -40, 19, -79, -19, -54, -25, 1, 38, 36, 46, 109, -111, -90, 125, -38, 15, 94, 48, 120, -86, 59, 55, -4, 51, 93, -6, 89, 43, 56, 37, -35, 35, 20, 9, -23, -80, -52, -18, -22, -25, 7, -74, -47, 63, -118, 9, -119, 98, -67, 49, -74, 95, 67, -95, -95, -108, -69, 75, 123, 11, 5, -95, -43, 83, -1, -25, 46, -54};
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
    msg.setTimeStamp(0.313711328125);
    msg.setSource(34924U);
    msg.setSourceEntity(35U);
    msg.setDestination(17006U);
    msg.setDestinationEntity(25U);
    msg.altitude = 0.0874209367427;
    msg.width = 0.0933125428645;
    msg.length = 0.559642559509;
    msg.bearing = 0.832647719946;
    msg.pxl = 29432;
    msg.encoding = 195U;
    const char tmp_msg_0[] = {-21, 82, -38, 117, 62, -3, -76, -120, 26, 81, -15, -80, 0, -110, -68, 48, 76, -59, -34, -50, 101, 25, -76, -114, -65, 87, 14, 113, 73, -40, -23, 102, -81, -45, 59, -45, -74, 4, -75, 22, -87, -28, 12, 115, 47, 4, 24, -24, 30, 50, -3, 114, -101, 99, 63, 34, -99, 110, -4, -61, -10, 18, 3, 0, -4, -124, -106, -117, -43, 20, 104, -27, 48, -32, 60, -5, -90, -64, -83, 8, -95, -75, -86, 29, 101, 25, 43, 36, -32, -45, -20, -106, -46, 100, 26, -74, 30, -105, -128, -82, -99, 34, 6, -83, -12, -126, -31, -106, -71, -32, 126, 102, 125, -45, 121, 100, -121, 56, -81, 32, 117, 84, -95, -62, 88, -36, 34, -92, 79, 112, 25, -109, -84, -57, 42, -94, 123, -89, 122, -57, 41, 81, 22, 96, 92, -104, 23, 71, -117, -57, 33, 28, -107, -81, -80, -54, -11, -67, 72, -38, -1, 70, -44, -25, 27, 50, -62, -25, 112, 55, -35, -93, 102, 103, 92, 3, -35, 33, -40, 29, 110, -104, 68, 111, -55, -122, 76, -36, 113, 19, 75, -67, -106, -102, 97, 8, 107, 16, 5, 39, 113, -88, 67, 84, -78, -100, 99, -61, -123, -50, -6, 42, -18, 47, -54, 45, 42, 20, 98, -89, -52, -40, 32, 82, 21, 25, -127, 13, -21, 0, -25, 38, -62, 60, -116, 80, 39, -23, -128, 81, -3, -102, -46, -21, 74, -100, 64, -53, 77, -81, -70, 94, -20, -77};
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
    msg.setTimeStamp(0.622817016317);
    msg.setSource(19024U);
    msg.setSourceEntity(34U);
    msg.setDestination(39225U);
    msg.setDestinationEntity(8U);
    msg.altitude = 0.809689339788;
    msg.width = 0.528578246715;
    msg.length = 0.313102995428;
    msg.bearing = 0.24429561937;
    msg.pxl = 9437;
    msg.encoding = 239U;
    const char tmp_msg_0[] = {-106, 116, -110, 28, 67, -49, -78, 87, 66, 77, -64, -78, -77, 88, 38, -77, 41, -116, 13, 68, 64, -34, 63, 44, -88, 68, 108, -120, 87, 84, -6, -59, 62, -18, -7, -14, -37, 112, -11, -27, 88, 87, 111, 41, 21, -40, 46, 111, -42, -109, -104, -44, 111, -58, 93, 25, 107, -65, -22, -75, 66, 9, 53, -88, -6, 5, 59, -77, -75, 80, 113, 96, -88, -113, -84, 26, -42, -77, -123, -4, 65, 69, -33, 91, 111, -108, -96, -93, -64, -120, -112, -20, -44, -49, -34, 19, 46, -18, -6, -31, -83, 4, 109, 46, -13, -54, -86, -57, 69, -124, 61, 52, 70, -109, 110, 112, -94, -56, 77, 56, -73, -127, 2, 26, -84, 67, 114, 65, 16, -29, 115, 25, -79, -29, 53, 105, -17, -116, -62, 119, -70, 30, 62, -58, 43, -11, -28, -68, 29, -110, 74, 23, 19, 50, -126, -86, -8, 118, 72, -10, 48, -93, -5, 19, 31, 58, -124, 78, 121, 122, -90, -17, -39, 10, 31, 43, 70, -30, 73, 89, 30, 1, 123, -51, -41, 57, -54, -79, -124, 112, 24, -38, 42, -63, 78, -102, 1, 125, -3, 38, -54, 120, -58, 40, -4, 64, 68, -81, -53, -5, 55, -101, 27, -107};
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
    msg.setTimeStamp(0.160016453902);
    msg.setSource(59705U);
    msg.setSourceEntity(11U);
    msg.setDestination(47219U);
    msg.setDestinationEntity(26U);
    msg.text.assign("FRENBOUIYVGVAYUVGQOLSPBPFQBFXHVTEYONXGRNUEKJDJUPSBNJXNBWOBFEWRLCBJAQAZLXTNGGT");
    msg.type = 158U;

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
    msg.setTimeStamp(0.321903465136);
    msg.setSource(65014U);
    msg.setSourceEntity(36U);
    msg.setDestination(1421U);
    msg.setDestinationEntity(39U);
    msg.text.assign("DLFEAAANNBWOAULFJPHOVWXWLKVXVAUUSLHAMIHKWI");
    msg.type = 32U;

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
    msg.setTimeStamp(0.652600189091);
    msg.setSource(21532U);
    msg.setSourceEntity(83U);
    msg.setDestination(45899U);
    msg.setDestinationEntity(185U);
    msg.text.assign("LHHYZBFRRCQQMVSAOWFCTHOSMGUYFBIDCLGYAGVEHDFISDTQMPARPJTMSPTYTBAMCZYPHFIXPQLWZDUDNIOWQLSGRLEXVKGMSNJPBSYNDAOUEAZLJZIVLDMBSUJXOCKNZWXFXHZDUKHPTQGVUZMEMUHBGBQXNTDOAVXNQITOZLEJJIFNHOFCJGVNYXREYKMYSWYNNWPAUAXQRXJCRDEKTJWBFO");
    msg.type = 197U;

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
    msg.setTimeStamp(0.913698601543);
    msg.setSource(27608U);
    msg.setSourceEntity(7U);
    msg.setDestination(64826U);
    msg.setDestinationEntity(69U);
    msg.parameter = 34U;
    msg.numsamples = 122U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 43663U;
    tmp_msg_0.avg = 0.108857078226;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.630719094646;
    msg.lon = 0.783543069735;

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
    msg.setTimeStamp(0.331998232583);
    msg.setSource(36984U);
    msg.setSourceEntity(88U);
    msg.setDestination(14571U);
    msg.setDestinationEntity(56U);
    msg.parameter = 1U;
    msg.numsamples = 129U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 26079U;
    tmp_msg_0.avg = 0.413254121288;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.898170757075;
    msg.lon = 0.252127115304;

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
    msg.setTimeStamp(0.548661867539);
    msg.setSource(42637U);
    msg.setSourceEntity(58U);
    msg.setDestination(36604U);
    msg.setDestinationEntity(11U);
    msg.parameter = 160U;
    msg.numsamples = 198U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 11916U;
    tmp_msg_0.avg = 0.256129510033;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.692974672227;
    msg.lon = 0.581414956987;

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
    msg.setTimeStamp(0.425120425009);
    msg.setSource(15813U);
    msg.setSourceEntity(117U);
    msg.setDestination(52122U);
    msg.setDestinationEntity(79U);
    msg.depth = 31428U;
    msg.avg = 0.562264298138;

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
    msg.setTimeStamp(0.611238698326);
    msg.setSource(7223U);
    msg.setSourceEntity(215U);
    msg.setDestination(15783U);
    msg.setDestinationEntity(28U);
    msg.depth = 16144U;
    msg.avg = 0.0964922840665;

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
    msg.setTimeStamp(0.444979867742);
    msg.setSource(23024U);
    msg.setSourceEntity(119U);
    msg.setDestination(25404U);
    msg.setDestinationEntity(114U);
    msg.depth = 27377U;
    msg.avg = 0.143163101133;

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
    msg.setTimeStamp(0.614598602324);
    msg.setSource(65181U);
    msg.setSourceEntity(90U);
    msg.setDestination(41144U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.309615299547);
    msg.setSource(20468U);
    msg.setSourceEntity(243U);
    msg.setDestination(28203U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.399731243009);
    msg.setSource(15623U);
    msg.setSourceEntity(10U);
    msg.setDestination(59358U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.88516140945);
    msg.setSource(9302U);
    msg.setSourceEntity(69U);
    msg.setDestination(4812U);
    msg.setDestinationEntity(213U);
    msg.sys_name.assign("TLCKMHVHBUETAAIOPCJCWTQEIXEYNKYHZGDIVEUQBRGPVBBNFZNUTQMUJELBRUIVKKRNSF");
    msg.sys_type = 253U;
    msg.owner = 37264U;
    msg.lat = 0.855033063875;
    msg.lon = 0.741328098739;
    msg.height = 0.604321295929;
    msg.services.assign("LGXBJGKRARCTYGMITJCREEQLTISEJKRPSDTWJVVZZWXOPZOVFTQEFBIFUAKHYNVCUGZPBLAJWUODNOWGQCISUEQHBYDGAVSVWTXKQIAFMXTBPJZYHDNQHTQRPTKLDHVXYCHZWDASWFNYGGMXTDVBPZOXSNBSFCXQOPLRUHHSJSI");

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
    msg.setTimeStamp(0.163915989789);
    msg.setSource(45520U);
    msg.setSourceEntity(211U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(151U);
    msg.sys_name.assign("LHCLWKQXDJ");
    msg.sys_type = 110U;
    msg.owner = 64337U;
    msg.lat = 0.042290863196;
    msg.lon = 0.334573349447;
    msg.height = 0.15982660786;
    msg.services.assign("BJBGKILKPHYDJBENPKUIVDCEQHMHTKVATEPUVPQNRGDJOWRFKTIAXSMYDMXICHAYCZGWFWCAVSLYHJLRQOAVNSXSUBEIZDPDOBLOLWZVKUJXHNBLPCXGEWRINQPNWZMVRRRVCAHWRGMBPYBCXSZJJFXYZNXZQKGUZKILLVUYSUNMONXWZTJGGOYFJFUFEEQNQT");

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
    msg.setTimeStamp(0.621644091879);
    msg.setSource(26945U);
    msg.setSourceEntity(180U);
    msg.setDestination(64850U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("UHVIXFPGVIZDWKAAXNDFCBPGTHTVFJPKLGLOABEQVWBBGZLLHPQAWJYLMDSBQPDWXTCHFYOUCSXYQTJJLOKUICFHEZMJBNKVSLESJNYKFYXUZTOZRKHRGDEPUCMNDMVSE");
    msg.sys_type = 86U;
    msg.owner = 50707U;
    msg.lat = 0.722323456885;
    msg.lon = 0.20805448309;
    msg.height = 0.73890621786;
    msg.services.assign("UBXBDYSXCECDHNCVLYCOXRSQMJQQSNGIOZFASQVYFPGIMMONUSZORXRPNVWTZNTTEUWALWVXOWQJDFFJSX");

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
    msg.setTimeStamp(0.691412291102);
    msg.setSource(31747U);
    msg.setSourceEntity(178U);
    msg.setDestination(59123U);
    msg.setDestinationEntity(192U);
    msg.service.assign("KHXEANNJRENLLYBYLTIMVEVQHZFCSSLUIECUEJVKKIDYSPWIJQMOCPGQOLWGMLFXXKMGTSBXJAQSOJVDQWNTNFNCUYDYYJOQWNOHZAXYWOCJOOHGPVFADHKCBHEARUMLTSWAJGFPAIUCOZMWMWIZXRFFLPRZDEQBGGQTXPAPIDZWXRGRFZHYTKJBKDIKHBTFVCLIHNRTCZSAUDRMSVZVBQGXAJBUVYFP");
    msg.service_type = 242U;

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
    msg.setTimeStamp(0.587741816021);
    msg.setSource(6708U);
    msg.setSourceEntity(113U);
    msg.setDestination(29706U);
    msg.setDestinationEntity(55U);
    msg.service.assign("FRWAWPGBBJUAYMCGLYEJIUERGOUYJMCDTVNKUBIITZSLAACSPCWJWJEPTMIJNOHXGLTXFZWNXHZROIGNVAOYMDHJHYLBTGMNBBPMEFRVIZVSSQBYNFCGUMPVCEPTKJAGIBZSYSDKOURZFQWXPVLDVRBEXTHEQQQRFQKKQONIQSHNOADWGDDLSZROLIGEMFKAUZMUWVKTDFFPONUAQFITMWYPXKBJR");
    msg.service_type = 83U;

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
    msg.setTimeStamp(0.235066968908);
    msg.setSource(20119U);
    msg.setSourceEntity(133U);
    msg.setDestination(51128U);
    msg.setDestinationEntity(130U);
    msg.service.assign("DCBYUNKIMSMGYFHFGRWLOVKHWUQZLFUGZCTVJKTINKNZDZPFFUYMOAKMNWL");
    msg.service_type = 46U;

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
    msg.setTimeStamp(0.662632629001);
    msg.setSource(23419U);
    msg.setSourceEntity(69U);
    msg.setDestination(29531U);
    msg.setDestinationEntity(143U);
    msg.value = 0.164285289168;

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
    msg.setTimeStamp(0.402840398497);
    msg.setSource(56883U);
    msg.setSourceEntity(38U);
    msg.setDestination(6962U);
    msg.setDestinationEntity(95U);
    msg.value = 0.508977287565;

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
    msg.setTimeStamp(0.195766991692);
    msg.setSource(38829U);
    msg.setSourceEntity(153U);
    msg.setDestination(17843U);
    msg.setDestinationEntity(82U);
    msg.value = 0.357738280165;

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
    msg.setTimeStamp(0.314437933539);
    msg.setSource(50055U);
    msg.setSourceEntity(161U);
    msg.setDestination(50626U);
    msg.setDestinationEntity(99U);
    msg.value = 0.284038818505;

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
    msg.setTimeStamp(0.887467695151);
    msg.setSource(48U);
    msg.setSourceEntity(103U);
    msg.setDestination(61231U);
    msg.setDestinationEntity(136U);
    msg.value = 0.205263254366;

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
    msg.setTimeStamp(0.306193030066);
    msg.setSource(22616U);
    msg.setSourceEntity(18U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(141U);
    msg.value = 0.183242619421;

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
    msg.setTimeStamp(0.528920108023);
    msg.setSource(51426U);
    msg.setSourceEntity(185U);
    msg.setDestination(9973U);
    msg.setDestinationEntity(101U);
    msg.value = 0.33436197092;

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
    msg.setTimeStamp(0.98665681441);
    msg.setSource(47116U);
    msg.setSourceEntity(206U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(221U);
    msg.value = 0.724609289571;

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
    msg.setTimeStamp(0.545349934125);
    msg.setSource(5734U);
    msg.setSourceEntity(153U);
    msg.setDestination(55489U);
    msg.setDestinationEntity(185U);
    msg.value = 0.104667802774;

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
    msg.setTimeStamp(0.239000640205);
    msg.setSource(10276U);
    msg.setSourceEntity(71U);
    msg.setDestination(40439U);
    msg.setDestinationEntity(216U);
    msg.number.assign("JVMRSZOFJKLRCZV");
    msg.timeout = 44016U;
    msg.contents.assign("IQZTBBNNHLTPBNYVQLVFJQDDUNFDJGLGEVAHQIWJOEACRJZCTGMPMKIBYZPITHBQMGSXQWLFQJVAPROHCR");

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
    msg.setTimeStamp(0.913387227595);
    msg.setSource(31378U);
    msg.setSourceEntity(28U);
    msg.setDestination(19106U);
    msg.setDestinationEntity(96U);
    msg.number.assign("WGISBPVCOLDSKYLITZNZSDBTCQFMJIUJPSLRKOIXWKFOLOVXWMAJFDSTBFVFRUTRPAYYQAVXAYZHNCXVUZWS");
    msg.timeout = 33174U;
    msg.contents.assign("MLZDFKTNROLOIZOQYTWKBXJMJPIJGRKSRWLLZXABLXHBBJQFQNHCYUZUITYIJDGUFASLIXGBPPPYNVAWIHDEVDPYZPVBOXGWLQWMHGXURGYTZMTMNEHQECFDHDKXNDOJNXNGBEZVVMFATTCCEEHSAPVMGVZRELMUIJDWTXMEYAFNVNFIVSUCOUSZNORTYJTOQCAIJJDKMSQRRSHKXKU");

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
    msg.setTimeStamp(0.630493432403);
    msg.setSource(18736U);
    msg.setSourceEntity(16U);
    msg.setDestination(49928U);
    msg.setDestinationEntity(7U);
    msg.number.assign("AKEPRLKYKAGYCJVSWESWVRTKYGNYNBQEQVTFBTHOFHOSPZLAASCYMFDHXQJ");
    msg.timeout = 54730U;
    msg.contents.assign("UJXKZVFGGHIBZVPEYFNRYSTBWZJUIJHDEYQMXIEOYHBRGAOCAILNMVTPTGNWVXJQCOKUIFULLJLOSMNSFEISWNJGXERUOFRYVMECTWMKBWHLCXXLXPOKBSFASFKJSCXTDEROHTVVAYPYQFCNSKNCFJQQBEGKHMVQUIRTLTDHYMKKXACZEIQPMFZPAZSRCNTDUZHJYHRGBMGUGYPLPPPDUNAHBVRDEWOJWCWA");

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
    msg.setTimeStamp(0.837255540881);
    msg.setSource(14730U);
    msg.setSourceEntity(47U);
    msg.setDestination(62146U);
    msg.setDestinationEntity(76U);
    msg.seq = 2456525248U;
    msg.destination.assign("DJXFVLJXVNHCCDAZVZBSDSHLKVHULPRSBIRWWSGKVKQIYYVOCXNLIEDJRWWTFUFPEPQPZQNVXRMZLGJVFOJKNBYSWTIECIWTLAEMKGHGVAATNWNPYJAKCPOONZEAOIIDHXXMUTRDPWGROEIZTOMMQMYEAGUXONRKRQTXWSADGHLBSUQRSGMCDZLIBDPCHYHBFUNDLFHGZMRWPQPYEMFQ");
    msg.timeout = 12680U;
    const char tmp_msg_0[] = {-119, 58, 40, -32, 89, 100, 44, -11, -59, -12, 17, -27, 61, -37, -32, 106, -47, 117, -10, -122, -37, -107, -66, -65, 89, -38, -109, 27, -66, -37, 68, -108, -77, 124, 46, 28, 85, -8, 39, -71, -69, 39, 36, 89, 44, -84, -88, -66, -82, -42, -24, -104, 85, 35, 56, 50, -33, -15, 82, -52, 61, -60, 108, -110, -92, -44, 63, 43, -58, 17, 101, 102, 66, -8, 102, -21, 20, 112, -52, 32, 74, 124, 79, 33, 109, -52, 15, -103, -89, -48, 6, 18, 22, -12, -117, -56, -81, -124, -108, 78, -52, -70, 107, -73, 63, -112, -80, -100, -58, 109, -61, -115, -64, 76, 105, 60, -108, -35, 56, 16, 78, 104, 46, 124, -39, 73, -114, 68, -41, -115, 100, -101, 74, 122, -119, 103, -120, 15, -69, -78, -73, 74, 33, 16, 11, 103, 96, 21, 34, -75, -34, -18, -112, -1, -118, 120, 87, -118, -106, 81, -16, 107, -59, -114, -107, -95, 55, 91, -17, -49, 32, 43, -87, -32, -128, 47, -100, -23, 56, 18, 0, 5, -79, -79, 86, -13, 73, -44, -43, -109, -28, 117, -36, 81, 5, 115, 69, 125, 125, 16, -12, -118, 11, 16, 26, -9, 62, -104, 121, 90, 27, -24, 12, 26, -51, -80, 47, 108, -69, -46, 77, 58, -36, 33, -56, -51, 63, -63, 87, 1, 31, -39, 110, 112, -31, -98, -104, -114, 47, 105, 11, -40, 32, -54, -8, 5};
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
    msg.setTimeStamp(0.621000399887);
    msg.setSource(11338U);
    msg.setSourceEntity(11U);
    msg.setDestination(4852U);
    msg.setDestinationEntity(128U);
    msg.seq = 2052625992U;
    msg.destination.assign("NAUXDTJUICZJNWLSUSYGUZEDRETNSZJYYGFCJWJEUEPRHBVCXLRUWBTQKFMXPGMFQIQUXLARKAXBYPDTFASMGCBORPJHSMPNFPQOMKVFDILENKMRUOJVSAEBZKCZZHHVVVAZWDNCCCWYMSIQOXQOMPDDQQEITFLLFUBARTMLIGGLYQGDNHPHDHJYTSVIFHTZVGHIPOWIBABWWKWCEVABLXRRPMZGODVONXGLNWBOREJSKKITAU");
    msg.timeout = 54491U;
    const char tmp_msg_0[] = {-9, -10, -63, 35, 88, 33, 86, -64, 100, -18, 12, 10, -56, 101, -51, -99, -5, 61, -7, 24, -72, 86, -70, 30, -96, 109, -68, -11, -4, -96, 118, -77, -52, 42, 6, 7, -3, 37, 27, 92, 117, -32, -26, -103, -33, -35, 114, 26, 77, -73, -119, -15, -75, -19, -17, 89, 102, 75, 41, -89, -5, -87, 10, 23, 39, 96, 3, -51, 22, 48, -4, -44, 75, -91, -99, 81, 113, -100, -1, -20, -103, -86, -56, 98, 87, 77, -120, -61, -64, -78, 46, -21, 109, -17, -66, -21, 88, 28, 116, 22, -84, 60, 75, -48};
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
    msg.setTimeStamp(0.312885478143);
    msg.setSource(27630U);
    msg.setSourceEntity(70U);
    msg.setDestination(29843U);
    msg.setDestinationEntity(146U);
    msg.seq = 2961110237U;
    msg.destination.assign("IDYDDQTKTVNRCFZXLXCPPGCORIWLMRDZAVWFZHLUDYMPLDDSPQVCULOEQHSCVBHCTTESMBMNJFICYFEPIQKYZXBUGAZVCMKSOLJRIJVRTMEQJFGSBFITPKJBEOTJYPMCXHILLLERVDZSABFQYVVAB");
    msg.timeout = 43453U;
    const char tmp_msg_0[] = {88, 89, -32, 50, -72, -41, -120, 104, 28, 118, 41, -82, -14, -89, -51, -44, 120, -116, -23, -88, -20, 100, 59, 23, 24, -98, 4, 78, -90, -69, 78, 10, 5, 39, -119, 32, -49, 27, 116, -53, -101, -32, -35, -124, -22, -28, 53, 113, -84, -109, -30, 86, 15, 62, 70, -11, 100, -93, 42, 28, 117, 2, 104, -81, 124, 124, 93, 118, -63, 34, 67, 58, 72, -116, 75, -80, 21, -5, -17, -3, -90, -34, 58, 44, 109, 64, 74, -39, -126, -61, -116, 0, 108, 49, 43, -51, -48, 68, -69, -38, 117, -37, -43, 68, -98, -76, 60, -36, -64, -32, -94, 118, 1, 55, -98, -34, -2, 23, -12, -26, 105, -58, 30, -98, 88, 74, 59, -124, -12, 10, -87, -38, 86, -87, 64, -54, 54, 9, -1, -75, -58, 19, -72, 122, 106, 124, 42, 18, -81, -128, -125, 62, 27, -31, 17, -22, 8, 43, -19, -17, 35, -13, 118, 81, -49, -77, 126, 120, -106, 51, -97, 91};
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
    msg.setTimeStamp(0.969636876129);
    msg.setSource(36758U);
    msg.setSourceEntity(120U);
    msg.setDestination(32503U);
    msg.setDestinationEntity(101U);
    msg.source.assign("GBOXHYUBZMXDZMMNIJUDRJVVOETFNKQXMGDOKKFCOODIBKVAWNPRELZDSQCCJEYQRSTISVGXXUKRVNGNVBMQQSJOHICDKXPTNRGNEQTLSYEJIGERUIRWSEUSKFGSAZYHRPPYSPPIYASKFLMBCQCZLAFGDJOYUXVXANTALLWBMRBGPUVJHNOHEHYDMRZVWJWYZFQZULHYFHAPIEFCTFATCIFEPMAPADLTTCJTNW");
    const char tmp_msg_0[] = {-112, -73, 24, 2, -70, 60, 30, 0, 54, -21, -61, -13, -14, 82, 5, -80, 50, 67, 76, -103, 79, -78, -116, 80, -6, 2, -124, 55, 26, -76, 7, 11, -7, 58, -15, -93, 77, 86, -78, -53, -113, -37, 60, 19, 40, 54, -68, 23, 110, -52, 30, 120, 1, 109, -42, 85, 47, 111, -81, 119, 7, -7, 107, -93, -81, 31, -85, -92, 65, -12, 73, 8, 69, 7, 16, -67, 21, 85, -117, 73, -22, -90, -111, 123, -122, -92, -81, 120, -96, -43, 110, -105, 49, 80, -117, 61, 30, -19, 41, -105, -16, -79, 120, -113, -109, 107, 92, 84, 122, -7, -79, 99, 66, -76, 18, 90, 108, 77, -123, 106, 118, -92, 116, -115, 101, 66, 82, 42, 75, -74, -54, -41, 73, -119, 124, -43, -73, 100, -95, 43, -119, -78, -82, 35, -13, 125, 51, -128, 55, 1, 80, -91, 89, -69, 101, 56, -115, -2, 33, 95, 120, -119, -122, 63, -20, -74, -59, -26, -2, 24, 4, -57, 50, 33, 24, -125, 47, 66, -22, -106, -110, 109, 121, 16, -118, 57, -96, -125, 123, -25, 112, -52, 114, -8, -6, 21, -122, -104, -123, 41, -9, -58, -56, 55, 122, -80, -16, 46, 14, 22, -63};
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
    msg.setTimeStamp(0.121432683281);
    msg.setSource(13837U);
    msg.setSourceEntity(208U);
    msg.setDestination(35116U);
    msg.setDestinationEntity(42U);
    msg.source.assign("ANRHDIVZKBRPHPPJXLIMNQKSIFCAOKGRDDDXYNEXFQDOMBJOFUEFWKIOMSZQVOMLGGBSWDZCCUXGWTKBJBKWIRWNEOBSPPNVIQOLCVFQWYOUICEJQGPCPZEFCRAYHJBRCGVYUBVEGHMDKBMNIRERJSNYHVZLSCGMJKSSYF");
    const char tmp_msg_0[] = {91, 45, 8, 57, -16, -100, -37, -71, -6, 27, 118, 96, -21, -17, -107, 6, 83, 73, -24, -56, 53, -51, 77, 65, -4, 102, 13, -108, 23, 67, -111, 30, -6, -105, 31, 95, -8, 70, 40, -18, -2, -73, -76, 78, -82, -89, -30, -41, 36, -56, 47, -88, -7, 13, -15, -2, 119, -11, 72, -29, -117, 59, 82, 38, -78, -94, 96, -128, 20, -42, -85, 17, -77, 84, -41, -110, 7, -82, -17, 4, 16, -50, -124, -122, -57, -110, 0, 11, 74, 9, -126, 65, 59, -9, 117, 70, -31, -47, 121, -31, -86, -109, 107, -79, 12, -80, -106, 14, -120, -106, -115, 11, -12, -57, -126, -23, -108, 49, -83, -16, 61, 36, 29, -7, -35, 104, 68, -114, -123, -82, 95, 6, 112, -74};
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
    msg.setTimeStamp(0.68079268179);
    msg.setSource(15650U);
    msg.setSourceEntity(103U);
    msg.setDestination(11588U);
    msg.setDestinationEntity(224U);
    msg.source.assign("FLJREGTQOPISABBSXKWVYFTBKRXTWAWDYBRQLDUOZQVOBCUMWLUZNILHXEWKNCGVMQMDJEPMQTNEJMHPTGQTRGDFIZNCUTSLUJOJJRLCPBISWFNYGYWVOCZPZMICPULNZOJVCQYGQMLNQFDVAVHHS");
    const char tmp_msg_0[] = {-61, 12, -57, -87, 84, 75, -3, -33, 123, 78, 58, -89, -96, 74, -59, -84, 1, 99, 39, -114, 67, -15, -119, 47, 89, -3, 63, 7, -111, -47, -107, 109, 66, -19, 7, -112, 71, -114, 66, 53, -36, 82, 70, 7, 29, -44, 71, -116, 31, -28, -39, -128, 67, 3, -115, -41, 57, 8, 40, 103, 125, -22, 80, 94, 86, -69, -35, -87, 6, 110, 23, -12, 39, -61, 117, -99, -105, 19, -55, 22, -20, -13, -22, 56, -16, 107, 82, 76, -8, 53, 25, -34, 80, 47, -65, 51, -27, 13, 81, -13, -25, -102, 17, 9, 34, 62, -80, -17, -25, 60, 5, -86, -55, 26, -4, 9, 90, -2, 34, 109, 119, -126, 0, 11, -80, 91, 34, 92, 124, -89, -30, -119, -19, -94, 36};
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
    msg.setTimeStamp(0.593280935155);
    msg.setSource(51758U);
    msg.setSourceEntity(182U);
    msg.setDestination(12781U);
    msg.setDestinationEntity(175U);
    msg.seq = 1377959890U;
    msg.state = 108U;
    msg.error.assign("KEXUDQVFUCNGEHZXIJPATXEYRHHCMNSKBNIRPWDIBQHMHCEPIJUMHUHOWVLOSLIWYJCMGMSNAXKOXEAADGTDRMQCUPVOADAGRVZGHYXVMILNUGQVGFLFOTZFOMNDRQPAYCGUJPVAROPTZRFDCCFTQPLPJESZXLAZQXJWJNDZMPHBYBEWVFVL");

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
    msg.setTimeStamp(0.0726985759281);
    msg.setSource(53185U);
    msg.setSourceEntity(198U);
    msg.setDestination(47004U);
    msg.setDestinationEntity(216U);
    msg.seq = 2524943943U;
    msg.state = 23U;
    msg.error.assign("GYEQSIFMIRSYMFTYEXQZHJOUXCCFSJVTHWFBNSMZTIWFNOOKLLMUOFRNUTDWTHSOEVGDAQIBVQFOLRZCDJYWCISNBTABAXBCXWU");

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
    msg.setTimeStamp(0.259131430851);
    msg.setSource(64373U);
    msg.setSourceEntity(125U);
    msg.setDestination(48906U);
    msg.setDestinationEntity(159U);
    msg.seq = 999415707U;
    msg.state = 102U;
    msg.error.assign("BDRFKFVQSRUXSEJQHFTSNISNBZWGVVXHRFYOBDALHMUGEZAEWPBJPSHEKZRTSIKGNGJBJHFW");

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
    msg.setTimeStamp(0.763983608818);
    msg.setSource(38730U);
    msg.setSourceEntity(106U);
    msg.setDestination(30096U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("XKDMJAHLDMRS");
    msg.text.assign("SFTNYRRHQRULMXUQTREYFCPMQJWNABQJDXFHQLVXHOTPSIEVHCKOPEKMORNRXXCZWSKZGXDPDIVDQPGMKLJSWBIOWJLMAMAQVYEYITVWKWETLHJKCYUHHGAZAOAWYEEENOZTYQDBCMGFJHEZNEFMBSGZUSIWKILXDHZNVCOTNZUVYOCUUZGSLKFPPQCUBJYIPZABMVHTFTPASOU");

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
    msg.setTimeStamp(0.075416344409);
    msg.setSource(38285U);
    msg.setSourceEntity(47U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(172U);
    msg.origin.assign("MYMPWWSKNLLVYVLAFSZWAWTABPXVFHPCXUQMVCASTAURVXYAECQEMIVCWLNUJXO");
    msg.text.assign("AZJRVIRTKWJHMFXDAQBHGCGOUNADQDIOOBWWVMYGKTZROFRRLMWYYECPOQYLWNKDZIHFSTEFFRJDFKTZCYVBGPGORFDIJVJGRKAPHTETCSXEBDGHPMMFXECVGXPJNNSTUPDKIJZ");

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
    msg.setTimeStamp(0.370214869987);
    msg.setSource(8630U);
    msg.setSourceEntity(175U);
    msg.setDestination(65257U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("KVOMHXJTVKGSPQRIRJKWJHAPLOJTNEHCCZUAXWBIAKZHSGUKUFVVKAMJBLLWEDJWBBFLSIRXVWF");
    msg.text.assign("QKHMVISURXDACEWOSJIFLEKLTVGDMWYOMGXPPMXTWJTJECSBZBZSZFNERNFGDIACINQYFTARNBOKCAZHHZGDLWJUXKESOTPYFCQAUQUGNFZKHYBATHPHBIGKDERXBZTWNGILUXJFYEUPRAKYRBUUGYMTWVSDLTPOHLZSNIOHPVAECKRCESVGRWDSMWCGVJIDMXUMXIDLFWWYAOPMLNVVJFCF");

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
    msg.setTimeStamp(0.0942572688526);
    msg.setSource(26977U);
    msg.setSourceEntity(62U);
    msg.setDestination(49655U);
    msg.setDestinationEntity(122U);
    msg.origin.assign("LEBPDLXLCTAQRQDVOIOMZDPSDNEOOGWZRMFGVLJHCW");
    msg.htime = 0.614899786125;
    msg.lat = 0.2385779293;
    msg.lon = 0.470538727125;
    const char tmp_msg_0[] = {-122, 51, 65, -47, -17, 17, 100, 2, 70, -108, 82, -23, -68, -84, -44, 49, -75, -58, -97, -104, 31, 101, 96, 46, -7, -86, -104, 76, -41, 95, 74, 41, 57, 30, -10, 126, -112, 23, 48, 84, 7, -7, -19, -53, -80, 22, -98, 21, -41, -41, 98, -62, 34, 109, -90, -107, 111, -109, 52, 28, 86, 27, 81, 50, -36, 124, 54, 43, 3, -47, -85, 60, -32, -114, -104, -93, -52, -21, 105, 101, 85, 1, -35, -25, 83, 116, -69, 86, -48, -45, -76, -118, 36, 87, 23, 124, -23, 55, 24, -57, 18, 94, -120, -39, -92, -61, -68, 112, -104, 93, 120, 54, 72, -17, 82, 99, -44, -4, 102, -31, -72, -13, 16, -90, -35, 5, -16, -105, -25, -5, -36, 124, -4, -113, -119, 77, -43, -73, -18, -22, -49, 51, 64, -24, -82, 122, -25, -41, 24, 104, -56, -109, -105, 57, -99, 42, 100, 3, -115, -24, -51, -43, 106, -96, 87, 15, 62, -8, 111, -54, -75, 104, 52, -41, 21, -69, -10, 2, -110, -42, -35, 89, -67, 51, -79, -89, 78, 126, -39, 44, 124, 62, 52, 99, 54, 103, 46, 57, -33, -126, 56, -70, 28, 97, -38, 86, -100, -115, -41, 126, -77, -52, -95, 48, 85, 63, -102, -90, -118, 62, -55, 40, -90, 47, -25, 64, -81, -78, 96, 52, -33, -48, -14, 56, -87, -49, -41, -114, -1, -89, 88, -50, 30, 73, 76};
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
    msg.setTimeStamp(0.489827693301);
    msg.setSource(9889U);
    msg.setSourceEntity(6U);
    msg.setDestination(56373U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("YFOQGWCXKWTLZUFJKLHJQYHLXPOISGASVRIGIVJRNTXKUGDFMSDHFVGZQZQAHVPQOBHCXSSOVCECDDNQBKPSCWYEANYEI");
    msg.htime = 0.894716099607;
    msg.lat = 0.634836726921;
    msg.lon = 0.0890485955906;
    const char tmp_msg_0[] = {-42, 86, -90, 38, 107, 15, -81, -123, 20, -90, 122, -114, -18, -92, -78, -111, 92, -114, -14, 126, 22, -99, 31, -63, -75, 28, 7, -127, 18, -3, 36, 79, -71, 92, 120, -90, -70, 9, -69, -52, 116, 60, 40, -57, 93, -5, 32, -4, 76, -51, -125, 102, 72, 55, -14, 75, -96, -57, -128, -42, 35, -90, -100, -66, 27, 122, -32, -90, 117, -49, -36, -87, -42, 12, 125, 26, -22, -70, -25, 24, 41, -40, 17, -23, -36, 46, -96, 35, -102, -110, -37, -56, -122, -59, -59, 48, -45, -55, 112, 19, -121, -78, 34, 44, 123, 30, 110, -29, -57, 117, 63, 69, 80, -13, 111, -13, 0, -5, 87, -94, 34, -4, 57, -20, 118, -63, 106, -84, 49, 16, -89, -102, 112, -49, -128, -55, -64, 84, -42, 112, 3, -55, 100, -86, -23, -12, -61, -9, 103, -35, 19, 82, 25, 64, 79, 69, -63, -60, -116, 116, 18, 78, 28, 95, 113, 24, -114, -62, 68, -13, -50, -117, -84, -61, -70, -13, 54, 33, -26, -53, 107, 24, -64, -38, 79, 43, -16, -104, 63, -70, -49, -99, -3, -42, -103, -40};
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
    msg.setTimeStamp(0.579642932621);
    msg.setSource(19912U);
    msg.setSourceEntity(233U);
    msg.setDestination(8404U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("OOGNGUMBYZYCFKXFUOZMVSGBDUKLIUQPDKRWENOAJHFLPTNTJPVQZTWWYJARCDLZWHWOHECXBUIHJXGSBPEFXXJWJMZAVSCZVRKMROFPBDQZSJRZEYGZRTFTPESQVYWXTQIDQIFWNULLLHEOQ");
    msg.htime = 0.929287846692;
    msg.lat = 0.329500376337;
    msg.lon = 0.28837930881;
    const char tmp_msg_0[] = {38, -73, -28, 37, -45, 19, 22, -117, 105, 23, 114, -81, 34, 119, -101, 120, 72, -86, 11, 56, 70, 25, 11, 31, -15, -93, -124, -127, -26, -117, -120, -22, 66, 7, -55, -2, 123, -51, 28, 123, 61, 9, -67, 50, -103, 37, -48, 125, -123, 66, 103, -17, 28, 36, 45, -24, -40, -14, 88, -54, -94, -3, 86, -67, -34, 91, 73, -95, 60, -68, 69, -15, -49, -108, -32, -76, -124, -58, 59, -6, -2, -37, -119, -66, -66, -110, -65, -72, 83, 27, -90, -16, 111, 72, -55, 113, -32, -27, -118, -94, -27, 109, -72, -97, -8, -95, 25, -43, 46, 35, 63, -119, 97, -33, 102, 81, 36, 78, -56, 113, 100, 20, 86, 62, 80, -52, 105, -63, 106, -13, 97, 114, 97, 91, 111, -47, -98, 62, 61, 110, 41, -30, -24, 47, -27, 22, 77, -92, -7, 111, 16, 75, -102, -88, -29, -40, -21, 13, 44, 59, 42, -112, -74, -43, -83, 44, 30, 51, -38, 23, -53, 69, -128, 99, 28, -86, 122, -30, 58, -118, 72, -17, 104, -64, -78, -65, -15, 124, -28, -77, 14, -35, -41, 112, 116, -31, -70, 90, 51, 14, 95, -122, -82, -109, 49, -53, -35, -91, 74, -78, -118, -90, -17, 93, -90, 25, 72, -120};
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
    msg.setTimeStamp(0.621054606822);
    msg.setSource(863U);
    msg.setSourceEntity(205U);
    msg.setDestination(37784U);
    msg.setDestinationEntity(115U);
    msg.req_id = 58108U;
    msg.ttl = 51317U;
    msg.destination.assign("LLHTFMMUKIFYJOAHXTJAFFVXRXWRDMBPAWTMTJKKFENUHGISPDUEQLBQTDYGCTFTUHQYVUGESCSRSWSPJCVWZMQXBEJEYMPAOCUQNTMJPBWM");
    const char tmp_msg_0[] = {-118, -34, 32, -89, 95, -74, 28, -125, -117, 1, -112, 101, -79, -67, 57, -106, 124, -19, -18, 120, -47, -56, -48, -18, -8, -34, -65, -38, 72, 22, 83, 24, -119, -28, -34, 9, -13, 103, -2, -88, 35, -28, -44, -23, -14, 16, -55, 18, 123, -67, -83, -111, -111, 29, -56, 8, -15, -23, 85, 85, 29, -15, -115, 92, 46, -15, -18, 34, 85, 21, 15, -86, 35, 73, -74, -109, -10, 79, 13, -81, -114, 0, -71, 37, 125, -117, -18, -98, -103, 25, 14, -15, -122, -92, -75, -84, 124, 124, -108, 115, 125, 30, 68, -68, -39, 122, -110, -102, -46, -94, 122, 73, 8, 72, -16, -107, -70, 69, -88, -16, 46, -93, 109, -109, -111, -89, 54, -123, -95, -19, 65, 69, 126, 41, -3, -89, -54, -128, -5, 12, 1, 104, -98, -31, 58, 65, -36, 118, 51, -26, -91, -22, -11, 59, -90, 106, 68, 30, 125, -71, -92, -88, -2, 85, 77, -99, 84, 107, 9, 56, 114, 108, -30, 120, -69, 113, 13, 16, 94, -49, 51, 43, 38, 121, 44, 89, 117, 115, -94, -33, 0, -36, 68, -25, -118, 3, 101, -28, -78, -123, 5, -42, -52, 101, 69, -60, 63, -66, -18, -86, -53, -54, -1, -118, -108, 44, 8, -13, 37, -23, 29, -81, 35, 13, -1, 54, -95, 32, 104, -1, 28, -5, -94, -66, 88, -93, 23, -51, 118, 6, 58};
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
    msg.setTimeStamp(0.882331369045);
    msg.setSource(29455U);
    msg.setSourceEntity(185U);
    msg.setDestination(42694U);
    msg.setDestinationEntity(94U);
    msg.req_id = 20638U;
    msg.ttl = 51003U;
    msg.destination.assign("ISPVSIEFTQJVKVFGMPEHBUEDJZWEWHRCDVRBMCAFIMKROGEWZCUSNMOOQFPGPIPNSEQDXXJITYXKMNBJOOHGCIYYDQXAAVWPJKZARXOHTNPDEASAIXRZPJMGCQPVUVAVFHNXBLAUYNPDFWLYCJDLSXZIMZHVZKDGX");
    const char tmp_msg_0[] = {97, -128, 90, 81, 115, -71, 8, -26, -67, 26, 122, 94, -7, 30, -46, 90, -119, 32, 39, -53, 11, 23, -38, -56, 107, -25, -97, -81, -126, 68, 45, 113, -125, -83, -54, 38, 42, -9, -62, -127, 99, -125, -87, 55, 52, -52, -29, -94, 31, -91, 70, -122, 103, 54, -85, -78, 51, 0, 115, 70, 116, -96, 2, 7, 116, 39};
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
    msg.setTimeStamp(0.236243059519);
    msg.setSource(17524U);
    msg.setSourceEntity(86U);
    msg.setDestination(48775U);
    msg.setDestinationEntity(178U);
    msg.req_id = 1781U;
    msg.ttl = 45298U;
    msg.destination.assign("BQCXHAERMCAHQZABHHTCLBPNETZPPWUGBIAVKDFCYRVIXLYQEXBBXOQMOZWJJAVZWUAKORDQSVGAKGNLDFVJABJGCKDFKIDDYBOJFHZGYFEXQPLONQMTEIKAFDRSMYCNZSMDVEDPFNSGMNLRRPHILZHHQLIKNCJWJJEFXTYXQWNOSKUTTIUMXRFMUPYVQ");
    const char tmp_msg_0[] = {-30, -58, 6, 117, 117, 8, -81, 124, 109, -48, 75, 105, 99, -93, 92, 57, 27, 11, 81, 13, -17, -120, -16, 62, -107, 119, 66, -95, -25, -43, -29, 59, 60, 55, 75, -117, 120, 112, 50, -84, 58, -31, 72, -121, 90, 32, -55, -53, -99, -75, 101, 2, 117, -17, -17, -103, -83, -91, 56, 11, -91, -44, 93, 58, 28, -17, 53, -125, 27, -122, 8, 43, -128, 116, -88, 16, -93, -112, 109, -110, -64, 91, 111, -105, 12, -26, -105, -32, -11, 101, 111, 82, 73, 75, 3, 93, 10, 79, 76, -111, -88, -20, 6, -32, -16, 43, 116, 4, -100, 115, 14, -100, 2, -64, 41, 93, -55, -122, 75, 71, -29, 116, -95, 99, 57, -33, 119, -105, 30, -122, -59, 103, 41, 95, -59, 22, 21, 101, -32, -112, -119, -60, 85, 5, 72, -33, 30, 57, 89, -84, 59, 5, 113, 67};
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
    msg.setTimeStamp(0.397510757779);
    msg.setSource(54094U);
    msg.setSourceEntity(48U);
    msg.setDestination(6109U);
    msg.setDestinationEntity(39U);
    msg.req_id = 18894U;
    msg.status = 87U;
    msg.text.assign("XVRXKVXAECUNGUNFJIKFRHHCSDXMJPTSHXADCMAZKOEPJLZQGOHBOSQRAQCVSIWDVWDZNW");

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
    msg.setTimeStamp(0.299804876266);
    msg.setSource(34788U);
    msg.setSourceEntity(197U);
    msg.setDestination(20177U);
    msg.setDestinationEntity(235U);
    msg.req_id = 13800U;
    msg.status = 160U;
    msg.text.assign("TPJJFRGOCCZTTEKBCYKEMLWZHXDEAPTBISQCQNJWCSBXVSODLMOPVOXHPGDNEVRMPDWIPQIRSGYAFPUZKBBHDGAECCASFCVJMGVKZHNJWBZRGSYQUIMUODGTFVLJAOLVZIHNBREAJMWKBMSXGMKLNFGZXHUWYKDZZNTKHIUWLUZXEJTTXGRNYUIWUVSWPXHSLUQBFINYHURFBQFQDOYTFMXYEVNYQJAEETOLYXDACIAAJFRRLPRSIMDLQ");

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
    msg.setTimeStamp(0.247664527019);
    msg.setSource(23412U);
    msg.setSourceEntity(148U);
    msg.setDestination(20242U);
    msg.setDestinationEntity(22U);
    msg.req_id = 31978U;
    msg.status = 210U;
    msg.text.assign("SJGUBCKZQWDOMQKAQADMZPRUWORBSFKMTGNHMOHTOULTTBXEISBVGEMWJBIRXBUMQXPEBM");

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
    msg.setTimeStamp(0.606628352917);
    msg.setSource(18777U);
    msg.setSourceEntity(172U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("PBFNXKEEWWBKYDJZPBUDLUCNHKXVUYOYHUBGGTIQAMJKDKBBFWZCLFIZSUNTYIZZFBRSIOFEIEMYHBMGTWFWXZQSTVEDCLZSRBSTMVEPQRTAEFFPTRPIHHQDLNIYRWUDIRXKAIGPYJOFZRQOKONAJGOJXOKCEAMCSAUAMLOVVRCYJPFHTYXVJIVHZGWVLLCHGXMHSSKCPJLAUMNXMNLDZSWHADCQCJEPGQTJYTVAGRXSXMLBWN");
    msg.links = 3730274186U;

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
    msg.setTimeStamp(0.147113438852);
    msg.setSource(16193U);
    msg.setSourceEntity(86U);
    msg.setDestination(57017U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("RVNOFLUZSXYCWBYLHVEHQZXPJODCHYRSQGIXWTXEDWSXPZEZFVHIGWWGAUALMMIDTJHBEZQGNGEOIHJDNZQIOJEADKCLRFULSTNSMRDXIUZFNFFWFWPPEKBUWDBJNPFTWQMZLIPLQ");
    msg.links = 279762308U;

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
    msg.setTimeStamp(0.499660471426);
    msg.setSource(8229U);
    msg.setSourceEntity(86U);
    msg.setDestination(39027U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("ADIYKMKOCHQUEAGFHOCUGSDTANSEZMFXYPTVJSOJTBKGJPOQHHERMLNFNROYUOIHMZJGUJWWGVVWZXCEU");
    msg.links = 2848083242U;

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
    msg.setTimeStamp(0.724603362371);
    msg.setSource(62700U);
    msg.setSourceEntity(193U);
    msg.setDestination(19424U);
    msg.setDestinationEntity(75U);
    msg.groupname.assign("WPIZRWLVQKLUAMYMPQEQPCDZFNBHUNGUQHSJNFLJOEWVJJNFQLMVDBZJJVFFTXKNBUDMODURNVQZICSGJOSOVHZOCSROSDZJBXMXRGYDVQTBPAYVKUGXWPITZLPRHLGMOEWLTGKYBZAWATSASIKXCMGIKYQMRYYJEQISPFVKBMIGTAZHBDQUTTUNIEMKXP");
    msg.action = 179U;
    msg.grouplist.assign("SDIRHZLBFIDGGDRSCBTJTIMQEGDSFZPQNUSHLWJUWWJBWZQSJONWPYINWTXZCPIKROOLXYUCYVUZBWXQMLOOMHVGKGTEJXTRTJPYRGVQYMXIGYBAMVUCEHRZMHLBXWNRBDCLFSHVVASQTS");

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
    msg.setTimeStamp(0.705007906977);
    msg.setSource(20038U);
    msg.setSourceEntity(26U);
    msg.setDestination(43404U);
    msg.setDestinationEntity(14U);
    msg.groupname.assign("PQWXLYPJSDUTFYVNCYXETMWQFAJIDHNRRBGSAMCLVHYOFOWBXHKZUQOZMLZJOJKLQEAFPJSTRVBHVHHXQKOEMTKTXQNGBGYRXNUUSEZNIYUOSQNGSWCYXZZIMIEBCWHXDDQSTJFKPQBTLPEVUDLYZAJEJRWYVIPRWOKBWDFCAKAZXRQBCHVPYNDKCACBIOGDPRGLHVWUPNGRAWSTOZMUMHVFAVKDLLSJMKLIMFGGRCTGOJXFNIACNPTIDBEZE");
    msg.action = 148U;
    msg.grouplist.assign("XSRBHAUZQNGNWZCEP");

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
    msg.setTimeStamp(0.873039689092);
    msg.setSource(60568U);
    msg.setSourceEntity(218U);
    msg.setDestination(54364U);
    msg.setDestinationEntity(236U);
    msg.groupname.assign("CMOMCYIFXMCDJJIHSUWMGTKSKRQQKCEZAERURLEHBKAXKYPRJTDPYHYOAGMWCEDUBCKCVPABTBQZCKOHWPIWLDYQVGTOLRYMTOICGDLVOTGBHPFTFEOWUPTVHLIEPFIJSEXJBYJUGXZCIDFSUSVLFUWPRQAMXNZYZJSOJG");
    msg.action = 219U;
    msg.grouplist.assign("VVIIZKAJIDXPXXVFRCTFLREWFQNTIEBVVWILTOUAPFYGTWOAPLBXRBRWJCSUGZQQWLIFXHONEWHZHJPDEGKAWRYHXTAUJHIZVSPOEPCLGKQNOWTUYBOUVZYLKCRMDQADSG");

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
    msg.setTimeStamp(0.546505106904);
    msg.setSource(12693U);
    msg.setSourceEntity(221U);
    msg.setDestination(58994U);
    msg.setDestinationEntity(166U);
    msg.value = 0.466405855573;
    msg.sys_src = 9511U;

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
    msg.setTimeStamp(0.274413962875);
    msg.setSource(62902U);
    msg.setSourceEntity(228U);
    msg.setDestination(20923U);
    msg.setDestinationEntity(63U);
    msg.value = 0.145323584925;
    msg.sys_src = 37934U;

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
    msg.setTimeStamp(0.0276298531552);
    msg.setSource(53467U);
    msg.setSourceEntity(205U);
    msg.setDestination(11048U);
    msg.setDestinationEntity(210U);
    msg.value = 0.480904065103;
    msg.sys_src = 44921U;

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
    msg.setTimeStamp(0.849519720053);
    msg.setSource(4589U);
    msg.setSourceEntity(154U);
    msg.setDestination(12875U);
    msg.setDestinationEntity(73U);
    msg.value = 0.759399384259;
    msg.units = 79U;

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
    msg.setTimeStamp(0.48985705584);
    msg.setSource(34228U);
    msg.setSourceEntity(127U);
    msg.setDestination(35304U);
    msg.setDestinationEntity(220U);
    msg.value = 0.18013487646;
    msg.units = 181U;

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
    msg.setTimeStamp(0.98449961051);
    msg.setSource(26863U);
    msg.setSourceEntity(245U);
    msg.setDestination(581U);
    msg.setDestinationEntity(178U);
    msg.value = 0.28469804834;
    msg.units = 189U;

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
    msg.setTimeStamp(0.161368054776);
    msg.setSource(56190U);
    msg.setSourceEntity(1U);
    msg.setDestination(17349U);
    msg.setDestinationEntity(164U);
    msg.base_lat = 0.417846180511;
    msg.base_lon = 0.699901199887;
    msg.base_time = 0.615417490448;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 30273U;
    tmp_msg_0.destination = 57932U;
    tmp_msg_0.timeout = 0.887826829542;
    IMC::WindSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.direction = 0.709650951907;
    tmp_tmp_msg_0_0.speed = 0.0468737837147;
    tmp_tmp_msg_0_0.turbulence = 0.759956656478;
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
    msg.setTimeStamp(0.301365877718);
    msg.setSource(55084U);
    msg.setSourceEntity(68U);
    msg.setDestination(34868U);
    msg.setDestinationEntity(4U);
    msg.base_lat = 0.232944916568;
    msg.base_lon = 0.334630167438;
    msg.base_time = 0.760102140123;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 27667U;
    tmp_msg_0.destination = 24334U;
    tmp_msg_0.timeout = 0.513633520528;
    IMC::TransportBindings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.consumer.assign("UYQUFNRGVHTMLHVGMZBWXWCVNLZKDJECCRXCRGBPISQFVPIEQAYKMNSSLSFYDCEIHATOKBS");
    tmp_tmp_msg_0_0.message_id = 31662U;
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
    msg.setTimeStamp(0.209270654218);
    msg.setSource(53087U);
    msg.setSourceEntity(191U);
    msg.setDestination(51212U);
    msg.setDestinationEntity(48U);
    msg.base_lat = 0.656383453923;
    msg.base_lon = 0.763439626309;
    msg.base_time = 0.632545467163;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 9812U;
    tmp_msg_0.destination = 7086U;
    tmp_msg_0.timeout = 0.871324166808;
    IMC::EntityActivationState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 200U;
    tmp_tmp_msg_0_0.error.assign("GPQLUPOQPIXEBDZSDKHIZHBKAEOYJCPKVQAIMIPJTAHCDKPYWAUKAMVCUXVKHEORUVWIFJZEVSNAGZFXYDSCTFDFXYPMJLZRKLBZQIJWCXIVXSWJRJSNRNMQUWXKBFLESHNBLFJHWWOJLAUEXITYMNECCLHBYGQENPDDVAMLCROPGBRIGWK");
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
    msg.setTimeStamp(0.065596133275);
    msg.setSource(15317U);
    msg.setSourceEntity(0U);
    msg.setDestination(24256U);
    msg.setDestinationEntity(66U);
    msg.base_lat = 0.0294174123028;
    msg.base_lon = 0.0643151064044;
    msg.base_time = 0.793443533664;
    const char tmp_msg_0[] = {-69, 91, 72, 81, 87, 60, -78, -10, 93, 31, -97, 81, -117, -64, -99};
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
    msg.setTimeStamp(0.679252710978);
    msg.setSource(14778U);
    msg.setSourceEntity(79U);
    msg.setDestination(40454U);
    msg.setDestinationEntity(121U);
    msg.base_lat = 0.66042643588;
    msg.base_lon = 0.359152821366;
    msg.base_time = 0.439332691928;
    const char tmp_msg_0[] = {-107, 21, -12, -85, 88, 74, 46, 52, 66, 19, 106, -49, -10, 56, 86, 12, 64, -11, -31, 120, -52, 28, 0, -70, 30, 105, -38, -92, -20, -30, 21, 54, -109, 24, 53, 52, -12, -109, -119, 107, -21, -102, -118, -51, -105, -8, -113, 66, -73, -30, 30, 124, 77, 17, 65, -40, 92, -57, -87, 102, -25, 13, -21, 90, -47, 11, -128, 34, 72, 120, 55, -8, -67, 100, -16, 39, 59, -99, 78, 24, -19, -34, -118, -122, -24, -77, 58, 29, -12, -12, 47, -50, 45, 118, 70, 28, 62, -30, 79, -125, 2, -1, 55, -104, 70, -1, -5, -59, 30, -92, -48, -42, -9, -95, 120, 47, 73, 47, -53, -117, 32, -41, 34, 54, -27, 99, -101, 21, -4, 78, -72, 82, 95, -48, 86, 54, 1, -100, 21, 41, 112, 123, 106, 25, 33};
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
    msg.setTimeStamp(0.356683908994);
    msg.setSource(30438U);
    msg.setSourceEntity(203U);
    msg.setDestination(63039U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.894057260981;
    msg.base_lon = 0.811286380842;
    msg.base_time = 0.130086990222;
    const char tmp_msg_0[] = {50, -105, 10, -106, 47, -82, 72, 96, 9, -6, 119, -84, 25, 94, 6, 38, 16, 62, 34, 91, 119, -25, -99, 14, 57, -96, -28, -68, -43, -105, 22, 108, -103, -1, 24, -78, 117, 73, -99, 80, 13, 23, -33, -125, -67, 14, -100, 87, -69, -87, -48, -25, 113, -36, 110, -120, 98, 121, 56, 45, -85, 13, -95, 39, -17, 96, 57, -37, 121, 72, -63, 116, -77, -60, -119, -128, -83, -69, 96, -124, -43, 94, -77, -51, -36, -92, -109, -73, -54, 79, -113, -77, -120, 48, 63, 28, 99, -113, -71, 73, 11, -82, -67, -126, 68, 3, 37, -119, 120, -101, 84, 115, -25, 0, -23, -14, 76, -125, -106, -88, -15, -94, 2, -96, 10, 13, -61, -59, 15, -49, -65, -11, -21, 79, 28, -123, 93, -128, -84, 89, -83, 36, 70, 83, 67, 55, 104, 86, -111, 72, 6, 87, -33, 32, 39, 72, -66, -76, 65, -26, 87, -71, -76, 13};
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
    msg.setTimeStamp(0.431336222882);
    msg.setSource(53905U);
    msg.setSourceEntity(161U);
    msg.setDestination(29001U);
    msg.setDestinationEntity(113U);
    msg.sys_id = 58680U;
    msg.priority = -60;
    msg.x = 13973;
    msg.y = -5007;
    msg.z = 31912;
    msg.t = 27222;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.649739821575;
    tmp_msg_0.y = 0.507995334343;
    tmp_msg_0.z = 0.812020641002;
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
    msg.setTimeStamp(0.255765253908);
    msg.setSource(16768U);
    msg.setSourceEntity(100U);
    msg.setDestination(9900U);
    msg.setDestinationEntity(167U);
    msg.sys_id = 154U;
    msg.priority = 12;
    msg.x = 643;
    msg.y = -20202;
    msg.z = 1600;
    msg.t = 17948;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("VIMKXYKEDMSPYCHCGAEUERICNYURFIPOUGKEBQJNOEQAGJDSYMKDPDSSVIEGWRFLJZCHBKRLVQQZQCPQYUBIZIVLNHTKJFJUBNVHMTTPSOOEGQGISNZDVCLFAWMOCDGIYRRLSQZDWJLJPQUAFYITXHZFMZXUZVALFDDKBTUNKXPFCUSGJEYZUXBCHFAZROOKSNPJDXVIPHTBNRNMOLJHEYWNFXEAKVSWTMACTVMBHRTQWWTGGWXLXYBHO");
    tmp_msg_0.lat = 0.00485073702804;
    tmp_msg_0.lon = 0.793818009601;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.z = 0.605204168835;
    tmp_msg_0.accuracy = 0.835054705763;
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
    msg.setTimeStamp(0.417625835322);
    msg.setSource(36781U);
    msg.setSourceEntity(239U);
    msg.setDestination(26672U);
    msg.setDestinationEntity(8U);
    msg.sys_id = 43537U;
    msg.priority = 70;
    msg.x = 10806;
    msg.y = -29064;
    msg.z = 9238;
    msg.t = 22261;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.629654950315;
    tmp_msg_0.reason = 58U;
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
    msg.setTimeStamp(0.590064985174);
    msg.setSource(17457U);
    msg.setSourceEntity(14U);
    msg.setDestination(50542U);
    msg.setDestinationEntity(134U);
    msg.req_id = 36483U;
    msg.type = 117U;
    msg.max_size = 15359U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0307870236262;
    tmp_msg_0.base_lon = 0.17309342828;
    tmp_msg_0.base_time = 0.611300133844;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 2767U;
    tmp_tmp_msg_0_0.destination = 26347U;
    tmp_tmp_msg_0_0.timeout = 0.360759057872;
    IMC::HistoricTelemetry tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.altitude = 0.540794040604;
    tmp_tmp_tmp_msg_0_0_0.roll = 14233U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 43668U;
    tmp_tmp_tmp_msg_0_0_0.yaw = 43644U;
    tmp_tmp_tmp_msg_0_0_0.speed = 28443;
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
    msg.setTimeStamp(0.825614469922);
    msg.setSource(58931U);
    msg.setSourceEntity(202U);
    msg.setDestination(63190U);
    msg.setDestinationEntity(60U);
    msg.req_id = 54287U;
    msg.type = 192U;
    msg.max_size = 22141U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.736953708168;
    tmp_msg_0.base_lon = 0.932985478303;
    tmp_msg_0.base_time = 0.438493567173;
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
    msg.setTimeStamp(0.159536252755);
    msg.setSource(61682U);
    msg.setSourceEntity(66U);
    msg.setDestination(2268U);
    msg.setDestinationEntity(38U);
    msg.req_id = 29103U;
    msg.type = 12U;
    msg.max_size = 4197U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0896924739464;
    tmp_msg_0.base_lon = 0.572294793574;
    tmp_msg_0.base_time = 0.629917821476;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 20787U;
    tmp_tmp_msg_0_0.destination = 64760U;
    tmp_tmp_msg_0_0.timeout = 0.414191904213;
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 4268U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.312687983152;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.653724184773;
    tmp_tmp_tmp_msg_0_0_0.z = 0.530545967918;
    tmp_tmp_tmp_msg_0_0_0.z_units = 137U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.948037315833;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.614965008552;
    tmp_tmp_tmp_msg_0_0_0.duration = 41411U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.680873203326;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 121U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.261377759569;
    tmp_tmp_tmp_msg_0_0_0.direction = 2U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FAYJSBYBWSAGPRRJDRIJSECZDKGNFILFUVQTULHSEDYTUMDLOXFNBZFJIBYCHNAFNOBFRXMDRBGDVMYENNEPNPVIOVQKHSDAZZKPRFZMQPLJAYNKZTOVTXJCKWVCJOAKDYQLUQMW");
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
    msg.setTimeStamp(0.300373867652);
    msg.setSource(42463U);
    msg.setSourceEntity(29U);
    msg.setDestination(62678U);
    msg.setDestinationEntity(230U);
    msg.original_source = 18225U;
    msg.destination = 1997U;
    msg.timeout = 0.406837348807;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("GEBXXYFWCWJAJHDPPLWBIYLIARZIQKHEASPCCCOGLWLGFYHOXPQRMBJCXHTAZWJPABPCCCVZMDUNQHGUINYRQKJXVQSEFJEFXGTVPIYUWWLFJQTKTGSLPRKJEDTDDFQXOZSEBNCLMEMSNTUZMSVVOVZJEHTZAKCKSSMHRINIXIDAAPVQFMWYMMLAHBDBOTBTKHAUNOBYNPELRNVHZDYFU");
    tmp_msg_0.type = 196U;
    tmp_msg_0.op = 167U;
    tmp_msg_0.group_name.assign("JBWPWNGBIPVXAGQTIZFDZFESBMENNAHRRSPGFATXDXDZKAJDTYRULHSFMILCUDIGQSEVJTBRZRJEOAJUEIKTEOOHOOVBEMICVBQATPSJQUZLWFYQNZYGYLGAWSLMTBAHCPYLHRQIPHBTNOSQFWVNSYYXI");
    tmp_msg_0.plan_id.assign("PCYFYYLLRGFTBRMMVRCMFAHEYPWSBDJUZKGSJQNKMQBSJOQJNNDLVBMINXFZUHESKKIOARTLUTODJEGCNBDSCDVUZZRAWJQXFYTGEVUOJQYXFFVXVMWDBUCZQIHWEVHCGTZVSSIKRTXQXHFZCYYLWBDABJNNJEIMWEMAPIIZNAERUSIBAALCPTQALWXKUMCTZRPROKXMFJGGGUPTVYBWEPRPHDFLOIPOWAHPKK");
    tmp_msg_0.description.assign("WKQYFVYUHMJBBPMOVOAYSKIDLZGFLRJKSCGUNJHJBSBNUDYCLQOOVLEQNFRCUGRNBJSYZZPOLXCAWDPKHPDMHLGLGZRXJMBMCQIRPAZPUAMZLDYVUNGSSOYGBETFQXWTEYVYXFEXINDWICRPNIKQHDTQJTPSOSHQVFWTOMIOWNVSZFBXGRAKXDHEWUXTQNQLXEVILHMBKOHFPEEFRMATGWEJEJZCDKZAP");
    tmp_msg_0.reference_frame = 154U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 52889U;
    tmp_tmp_msg_0_0.off_x = 0.638022077968;
    tmp_tmp_msg_0_0.off_y = 0.845103097044;
    tmp_tmp_msg_0_0.off_z = 0.741096277698;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.407046665898;
    tmp_msg_0.leader_speed_min = 0.398856360955;
    tmp_msg_0.leader_speed_max = 0.180947192751;
    tmp_msg_0.leader_alt_min = 0.895368412459;
    tmp_msg_0.leader_alt_max = 0.120824090683;
    tmp_msg_0.pos_sim_err_lim = 0.153754130992;
    tmp_msg_0.pos_sim_err_wrn = 0.893488852285;
    tmp_msg_0.pos_sim_err_timeout = 40146U;
    tmp_msg_0.converg_max = 0.0270380316931;
    tmp_msg_0.converg_timeout = 15833U;
    tmp_msg_0.comms_timeout = 64941U;
    tmp_msg_0.turb_lim = 0.538424975054;
    tmp_msg_0.custom.assign("ACWCOYOKPAMWHQRNEHKIQSBUYHAKNOPJQWWLEKDQLUBGBDOLKGEIETJETSRETRDWRJZTFIFETSJPGYLYLMPWBZFAGXFSRLJXDGMQUDSXIFZCFXCCUSUYBCWXVCIXCNVWCTEDXFYJTTQDNBRZJBHRTDRWMDPVINNTZSALLHRVLMKRBUBOHMPVYUVGJDVKUANHSKOLHVJZXOQIKMGGJGKCIZAHUMZYOBF");
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
    msg.setTimeStamp(0.0255945830093);
    msg.setSource(48U);
    msg.setSourceEntity(114U);
    msg.setDestination(3108U);
    msg.setDestinationEntity(8U);
    msg.original_source = 64527U;
    msg.destination = 42736U;
    msg.timeout = 0.444649887708;
    IMC::PAR tmp_msg_0;
    tmp_msg_0.value = 0.254677559024;
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
    msg.setTimeStamp(0.908364291729);
    msg.setSource(57856U);
    msg.setSourceEntity(123U);
    msg.setDestination(7413U);
    msg.setDestinationEntity(163U);
    msg.original_source = 8256U;
    msg.destination = 15509U;
    msg.timeout = 0.813334613892;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("FRFZVRWVSTLUDIAZADQISAKMKBYOIOEVMKGWUEQBCCHPCULOIWZZHPTAAOSNCXPWNLKQYZFGSNXGWTOLZYSRFDJWJAJNXGKXGHNRRIDLXOLZOFLWTTJJCGUZNHTNCVJCBUTRPIHKSPNBXMKZCEPVFVEBGPQQJMXYPEQTYKRPAAWDMJSBMBQGLRNDYRXY");
    tmp_msg_0.data.assign("GZPMQCWMYJLPXTCKLDVUAFSNVNYAOQKIWFJAUOWUSVRDPTJCRUIITJKWIYQOASXCDNTENMWPXWSJNMDUONWFDODAMYEECIQCY");
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
    msg.setTimeStamp(0.33463346851);
    msg.setSource(15843U);
    msg.setSourceEntity(66U);
    msg.setDestination(34123U);
    msg.setDestinationEntity(131U);
    msg.type = 139U;
    msg.comm_interface = 34191U;
    msg.model = 6898U;
    msg.list.assign("ZAWONVWLDXREGBFAUIKEMQYSFJBHVSUIXWIAGXIYWNLIRYTGBPNCTYCXKTZNVNSVHPONAEJBKISLJFRODXUIDKSZRBPEQYRVYHKTTCLLXWZDC");

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
    msg.setTimeStamp(0.617329651927);
    msg.setSource(47769U);
    msg.setSourceEntity(226U);
    msg.setDestination(41819U);
    msg.setDestinationEntity(123U);
    msg.type = 240U;
    msg.comm_interface = 27430U;
    msg.model = 21991U;
    msg.list.assign("UIGOXVFZSLWZZCUNNPTXMOGJBYPIZLTKYDFWRRECDHKUITYSPCHQRXBSGGIYZBQMNXKBZFBAFPYGXEEOOWQIQYLUQNYNUTSJLCHILHLPGEHUPVHVRRAINDIIVGNFMKDAQOJXYLELE");

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
    msg.setTimeStamp(0.0964670612527);
    msg.setSource(43136U);
    msg.setSourceEntity(33U);
    msg.setDestination(37468U);
    msg.setDestinationEntity(87U);
    msg.type = 2U;
    msg.comm_interface = 8811U;
    msg.model = 9150U;
    msg.list.assign("WAFXPHDRJYZJKVCFXCBWSECTTONFEOEQGLIJOPSIUQQSTCODVKMDGJFMYIPWRDQMJAWDSOARLHYHVQHBPAZGKBHZKHSYZTLTVUQYAQDITWGWXDRIXMPKNXANOPGUZEONNAVPZVJRDUXGTWCMCWAJBMBCTAEZYAVI");

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
    msg.setTimeStamp(0.513742289718);
    msg.setSource(8059U);
    msg.setSourceEntity(215U);
    msg.setDestination(16000U);
    msg.setDestinationEntity(99U);
    msg.type = 150U;
    msg.req_id = 308131579U;
    msg.ttl = 43563U;
    msg.code = 34U;
    msg.destination.assign("CHSSPBQQFVXQKBOAXQOJEIUXTCTLNCIVVZBYZBTOFFASUUDHLBJPKAFXOXNQIMMXXQGFMWOSKVZZHEMADKNJPWPRGFINRDIQARJCJYDM");
    msg.source.assign("MWUHBOMFUCFHZTGTRQEKBLFJJSSFIXVTZLWRNCUJSYWXRLZLAMSJRPEGKMTKCGXBUSHNIKGBAUGRWKHPAAWJNIQFOVMXAYQGASXQZPPQMQHANIDAHMZOXPCBIYIOEMZFLDROFICPYNVJEFVYTOJSXCKBQXSEDRDOWTXCY");
    msg.acknowledge = 5U;
    msg.status = 222U;
    const char tmp_msg_0[] = {-75, -4, 71, -92, -32, 102, 5, -58, -110, 122, -117, -68, -13, 45, 90, 48, -77, -101, -49, 94, -5, -51, 30, -34, 17, 9, -64, 16, 71, -117, -38, 64, -33, 119, -100, 78, 82, 8, -109, 57, -30, -50, 21, 81, -120, 71, -6, -58, 54, -91, 87, -64, -16, 1, 17, -61, 51, 85, 94, -54, -42, 100, 77, -11, 0, 98, 75, -32, 112, -69, -126, -89, -12, -104, 1, -88, -119, 123, 10, -42, -117, -49, -104, 68, 76, -97, -125, -34, 124, -18, 85, -75, 65, -77, -88, -22, -76, 113, -65, -81, 104, -28, -12, 58, -85, -79, 115, -7, -98, 74, 56, -34, -114, -14, -61, 22, -106, 6, -15, 1, -127, -122, -109, -11, 30, -29, 55, -56, 108, 123, -25, 97, 62, 38, 111, 32, 126, -84, -68, 58, -108, -9, 105, -108, 14, -97, -86, -55, 18, 24, -5, 84, 21, -123, 103, 20, -1, 112, -42, -67, -15, -72, -70, -37, 17, -87, 90, -106, -112, -19, -120, -102, 111, 9, 119, 100, -115, 123, -94, 27, -60, -64, -18, 104, 11, 57, -17, 17, 87, -71, -101, -64, 43, 46, 42, 56, -63, -110, 81};
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
    msg.setTimeStamp(0.447765438194);
    msg.setSource(27814U);
    msg.setSourceEntity(24U);
    msg.setDestination(52421U);
    msg.setDestinationEntity(209U);
    msg.type = 145U;
    msg.req_id = 2255650596U;
    msg.ttl = 21299U;
    msg.code = 14U;
    msg.destination.assign("KSVUTXENYIFZJIFAMSNR");
    msg.source.assign("NFXKDIJJYNAMMUVYGGPKSHYAPDPGZJNVQNLVUGQYWESDVMTXLHXT");
    msg.acknowledge = 188U;
    msg.status = 147U;
    const char tmp_msg_0[] = {31, 36, -38, -9, 83, -31, 61, -77, 9, -61, -104, -105, 6, 110, 7, -84, 62, -27, -102, -110, -57, 98, 46, -12, -47, -113, -63, 109, -25, -15, -36, 78, 50, -5, 122, 94, -110, 80, 106, 37, -3, 93, 64, 33, 35, 64, -116, -70, 22, 2, 102, 24, -99, -124, -18, -95, -92, -68, 124, -122, 7, -112, 90, -120, -37, -73, 113, -28, -126, -38, -108, 25, 105, -92, -100, -49, -122, -83, 81, 52, -15, 51, -48, 28, 63, -110, 90, -57, 3, 93, -121, -84, 62, 39, -66, -12, 82, -28, 89, -36, 71, 89, -105, 110, -45, -120, 36, -52, 78, 54, 117, -86, 78, 17, -71, 112, -49, -42, -106, 12, -71, 118, 33, 18, -15, -7, 86, 78, -73, 73, 64, -89, -26, 107, 105, -94, -25, -78, 113, 90, 102, 15, 14, -54, -54, -30, 73, -89, -7, -67, 58, -16, -18, 36, 40, -95, -128, -103, -42, 83, -19, -8, 47, 86, 79, 58, -104, -41, -108, -9, -118, -31, -66, -82, -43, 56, -75, -82, 118, -125, -53, -128, 32, -85, 53, -95, -58, 83, 84, 98, -96, -117, -103, 66, -13, -110, -124, -69, -108, -83, 126, 65, 121, 62, -100, -15, 51, -127, -74, 13, 34, -9, 10, -121, 103, -13, -82, -10, -17, 84, -106, -34, 105, -12, -32, -56, 59, 71, 45, 99, -103, -26};
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
    msg.setTimeStamp(0.532770112171);
    msg.setSource(26441U);
    msg.setSourceEntity(58U);
    msg.setDestination(29960U);
    msg.setDestinationEntity(35U);
    msg.type = 53U;
    msg.req_id = 1096398425U;
    msg.ttl = 15431U;
    msg.code = 202U;
    msg.destination.assign("UUOYNYBVHLPFRFSRSXIXABWGWTORFDSTXETBRBVZZMEKMWWROHWCKSUQCKEDNTBNJFDAVLKNX");
    msg.source.assign("EAOSPCSRYMTSNTOWPZEDIWTESJLLBBJWLMHGECYVORFQFKMFKAPYQVRIEIIHCMPJSWZNZWQRFDOMZDNGTEPPUFWQBPAHWPQPKJTUSHJJPGJFCZUXOGY");
    msg.acknowledge = 64U;
    msg.status = 39U;
    const char tmp_msg_0[] = {-105, 63, -2, 78, -101, 43, -32, -83, -86, 62, -84, 47, -96, 14, 65, -22, -119, 97, 29, 57, -8, -121, 10, 12, -53, -72, 98, -63, -110, 112, -63, 16, 35, -34, -39, -116, 95, -54, -15, -81, 36, -99, -95, 93, -16, 88, -102, -34, 40, 3, 31, 120, -112, 111, -113, -60, -24, 56, -84, -67, -53, -65, -55};
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
    msg.setTimeStamp(0.714095131181);
    msg.setSource(15202U);
    msg.setSourceEntity(191U);
    msg.setDestination(56819U);
    msg.setDestinationEntity(153U);
    msg.id = 172U;
    msg.range = 0.401443773864;

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
    msg.setTimeStamp(0.211443064583);
    msg.setSource(3534U);
    msg.setSourceEntity(64U);
    msg.setDestination(6298U);
    msg.setDestinationEntity(246U);
    msg.id = 27U;
    msg.range = 0.524186006396;

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
    msg.setTimeStamp(0.46905763431);
    msg.setSource(5528U);
    msg.setSourceEntity(76U);
    msg.setDestination(33578U);
    msg.setDestinationEntity(60U);
    msg.id = 75U;
    msg.range = 0.657058702142;

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
    msg.setTimeStamp(0.733043648098);
    msg.setSource(31251U);
    msg.setSourceEntity(56U);
    msg.setDestination(61053U);
    msg.setDestinationEntity(222U);
    msg.beacon.assign("QAYLTHITGSQSALASBNMAPGTBZETBQNLMDXRPHVIPBZDIOQILDCBXUXYKNSTJQAFROWCUVMHGEICTICCNKVWJWOPJUKWZUP");
    msg.lat = 0.129100952316;
    msg.lon = 0.32909268112;
    msg.depth = 0.621608704254;
    msg.query_channel = 92U;
    msg.reply_channel = 230U;
    msg.transponder_delay = 58U;

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
    msg.setTimeStamp(0.612382870735);
    msg.setSource(54731U);
    msg.setSourceEntity(62U);
    msg.setDestination(6461U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("LLEQCCFEPSTJYYQOKXADORVYVNMNLNGBJXLGQVTFRBSRFRHBCDYEVJALIWL");
    msg.lat = 0.706169970086;
    msg.lon = 0.107921080209;
    msg.depth = 0.826230854024;
    msg.query_channel = 139U;
    msg.reply_channel = 151U;
    msg.transponder_delay = 229U;

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
    msg.setTimeStamp(0.10392185326);
    msg.setSource(32081U);
    msg.setSourceEntity(145U);
    msg.setDestination(16871U);
    msg.setDestinationEntity(14U);
    msg.beacon.assign("GFRHMEPDBLVEMMGBDOOYLLFNKYTXQTDNOZJXVBKAWUYWPZWUJEQSKZYRNNFSTRAAVPWDLAMEKFQOSGCCTBYFTHP");
    msg.lat = 0.304060388329;
    msg.lon = 0.266544722755;
    msg.depth = 0.322625506838;
    msg.query_channel = 186U;
    msg.reply_channel = 37U;
    msg.transponder_delay = 115U;

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
    msg.setTimeStamp(0.61806766026);
    msg.setSource(51919U);
    msg.setSourceEntity(176U);
    msg.setDestination(48145U);
    msg.setDestinationEntity(20U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.227035563438);
    msg.setSource(14169U);
    msg.setSourceEntity(160U);
    msg.setDestination(13178U);
    msg.setDestinationEntity(134U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.964778384082);
    msg.setSource(26044U);
    msg.setSourceEntity(219U);
    msg.setDestination(5758U);
    msg.setDestinationEntity(32U);
    msg.op = 70U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JUHRQTAIRQRINCGFYEURMFGZNDVPEWOXYGQXGSHKKVBUDYOOFWTENIRVHVUQJEXFORSUMJVDCLCBBDSARCLWIXSBVKKZMZLDAAKGSCPJFETFBQXMNOZNLDYTBDQLEQAEOIFGBUUXCWMSOSYVLTKYCTHWAZMWYIONBDVQEIXJHCHZKFRKYRAPXI");
    tmp_msg_0.lat = 0.432654945112;
    tmp_msg_0.lon = 0.0293958848903;
    tmp_msg_0.depth = 0.537597953113;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 58U;
    tmp_msg_0.transponder_delay = 233U;
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
    msg.setTimeStamp(0.260947992484);
    msg.setSource(48051U);
    msg.setSourceEntity(1U);
    msg.setDestination(57131U);
    msg.setDestinationEntity(15U);
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 25508U;
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
    msg.setTimeStamp(0.159391962145);
    msg.setSource(32577U);
    msg.setSourceEntity(26U);
    msg.setDestination(13514U);
    msg.setDestinationEntity(81U);
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.269360833457;
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
    msg.setTimeStamp(0.315562133601);
    msg.setSource(42185U);
    msg.setSourceEntity(47U);
    msg.setDestination(20989U);
    msg.setDestinationEntity(44U);
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 8U;
    tmp_msg_0.angle = 0.719579801367;
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
    msg.setTimeStamp(0.122545360095);
    msg.setSource(16235U);
    msg.setSourceEntity(173U);
    msg.setDestination(40391U);
    msg.setDestinationEntity(188U);
    msg.op = 85U;
    msg.system.assign("KIMZZAHSGQEYOJQIBZZNUPDVTXWAJQUMPPYGWPWDMFSHNMQXFORXPURBLICUKWGUBXVRLJEHNJAKDGHLNRKUKUNXPOFATYHVCQTQIOSFVTSEQRJOYYECOEIAKXGUKEVUDOITBKMTALVYYDNMJCGUPYCLLFTFNHTZTCBRSHYSBVRJKRAGOQPINEBXWWLGYOCKSLHXGWXDVCHSNJCZAWLENJBA");
    msg.range = 0.942910240694;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 34392U;
    tmp_msg_0.custom.assign("GFDAKVVAIUXCLTETDCLJGFZMSSPSQYHRLPBKVKGMUSSKOWYVGIPMQXJBGEMIQZNONNVJPYHFJYEQWAOPRMVFJWIJKOXILXRBZBGSNEOEJCKOKHTCANJYCYRLNAZMQRTMBRRCSRANBIBHK");
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
    msg.setTimeStamp(0.0802422853261);
    msg.setSource(59797U);
    msg.setSourceEntity(168U);
    msg.setDestination(1127U);
    msg.setDestinationEntity(113U);
    msg.op = 25U;
    msg.system.assign("BWFPUMATACWSWCILNLYKAVSIMTXHWUHEDZPMGIEMXAQSVOQHIBNL");
    msg.range = 0.564621466246;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 54U;
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
    msg.setTimeStamp(0.280605892677);
    msg.setSource(16542U);
    msg.setSourceEntity(204U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(116U);
    msg.op = 1U;
    msg.system.assign("UXZUOFPXEJTNELQCKBPUJHWADFXCPVFWPXQGRGBWXWSNDBNKIJSKSGBDUNHTCQMEQILOCMFVOYHEOSRMQSTBTFMNTIATHJDNGMSIRDFTWQVBFZFAWMJVYULMQOIYZRITVSIVDDEESHBBMUYPYESJIJ");
    msg.range = 0.565076351795;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 418720469U;
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
    msg.setTimeStamp(0.580797379246);
    msg.setSource(45519U);
    msg.setSourceEntity(149U);
    msg.setDestination(45401U);
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
    msg.setTimeStamp(0.228722323281);
    msg.setSource(30149U);
    msg.setSourceEntity(181U);
    msg.setDestination(42192U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.480858781828);
    msg.setSource(24753U);
    msg.setSourceEntity(0U);
    msg.setDestination(60416U);
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
    msg.setTimeStamp(0.420365122145);
    msg.setSource(2802U);
    msg.setSourceEntity(144U);
    msg.setDestination(25722U);
    msg.setDestinationEntity(15U);
    msg.list.assign("RGRHWEZQVNYYHJHRNNGPYRIRBOXQGBYGQUEABRWFIMBJFIGVNFXJMVJKCDKMQKVMXMYZOJQWXDLJFUFHYWQWNYPGBGEMIMIPSZZFDLRXNUTVBEGNEXSOOSPSTLCLLUSDQFAOLACCTRALIJCYIPMQZXKYWHRHPHFUXJCPBDBLWSCUDZISQKLVKVSFZITXQS");

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
    msg.setTimeStamp(0.581556316827);
    msg.setSource(61431U);
    msg.setSourceEntity(141U);
    msg.setDestination(31439U);
    msg.setDestinationEntity(55U);
    msg.list.assign("ZRBZNRSUKWBRNI");

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
    msg.setTimeStamp(0.10569907264);
    msg.setSource(43386U);
    msg.setSourceEntity(114U);
    msg.setDestination(81U);
    msg.setDestinationEntity(169U);
    msg.list.assign("UXTPEGDLJOSGBYARFRNOTLDYENMAEKMDAXCBCQMFOVXKUHPPRKRIWVNKNRUABOHHSYTFZKKXZPSTJQVQXAWEZUQGBSRJCIZQELLQOZVBUJQZVMGLNTMFOLPPOWZRXWMDGGZCLFUSRIDWAJGPCJUHIINGVTZJUWHZHNXDE");

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
    msg.setTimeStamp(0.171562277368);
    msg.setSource(47180U);
    msg.setSourceEntity(120U);
    msg.setDestination(39470U);
    msg.setDestinationEntity(178U);
    msg.peer.assign("COULXVIWNFOVFZRBRTHRAMOLYJNBNUWTRMVKJCXKPJPYRTBUUWJMQSDSGDTQWUTLEISHSIDHXUFGXXRJEDXKPIFVWQVJZCNRSJXQ");
    msg.rssi = 0.316657461018;
    msg.integrity = 30978U;

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
    msg.setTimeStamp(0.299088439049);
    msg.setSource(49626U);
    msg.setSourceEntity(242U);
    msg.setDestination(50332U);
    msg.setDestinationEntity(244U);
    msg.peer.assign("HYSVLMADMATCWTBUBCELRKHBJSGBEFCIZKNACFPJCGWSWRTXDFZISZURUZOFEPRSPPZHYNHWRVVHKYGXALIJNTZKIJLVDTNWIREZLCYXCOAXMRLSVXDUVQEYWEUNLICEOIFOSADAAYHUFGDAOQMJYHSVYQNWPJXRQ");
    msg.rssi = 0.883290752203;
    msg.integrity = 35860U;

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
    msg.setTimeStamp(0.775871085405);
    msg.setSource(46486U);
    msg.setSourceEntity(189U);
    msg.setDestination(60387U);
    msg.setDestinationEntity(144U);
    msg.peer.assign("MTASTNWGTMXEOXRSHZJSFMGFGEIXWUUAJUBDNMYZKHQBAYWMKVEWHFWUGDQPVJWZKWEYYSHTBYHZLCBHIOKFTH");
    msg.rssi = 0.340809621261;
    msg.integrity = 49207U;

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
    msg.setTimeStamp(0.2439794511);
    msg.setSource(48165U);
    msg.setSourceEntity(199U);
    msg.setDestination(10869U);
    msg.setDestinationEntity(220U);
    msg.req_id = 22383U;
    msg.destination.assign("VUWSOMGKRLEMIZBTSKSQCICYLVQDHMVMWFHEOMKSDJUVWABCAMVEOIPJVQOTRFEGTOQLRHYRKXRZYISQAAQPPZYXTDXUTKILAWYEOMHPYZZARIPYURJNUOWHSTNVPXXTK");
    msg.timeout = 0.766068411024;
    msg.range = 0.18247228007;
    msg.type = 110U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NRQNSXELAROAQCCJNJRXQBTFCLZHHZVMPGAGVKUXNVYLDKOQCMZQQKCJSCSTNHZJWUVGENTJTYMTFSHVBYAPZKDHPNUHQOXRRXIFOPIIMBXWEKZYZIGNBIGUBHLTKUVXLUFPMIPWJSRSLGWLNOFREOYFTDPPTXRHYAAVEBWQEEJRFMPVJJQOWUXBWDVPDZKKEFUTUIBZDHXRDAYMCAKYSTZLOIWM");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 60283U;
    tmp_tmp_msg_0_0.custom.assign("RTFOIVDYXMYBAZLBWOFGADRI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredLinearState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.710262353632;
    tmp_tmp_msg_0_1.y = 0.692465170111;
    tmp_tmp_msg_0_1.z = 0.790657428702;
    tmp_tmp_msg_0_1.vx = 0.44149120307;
    tmp_tmp_msg_0_1.vy = 0.909072922304;
    tmp_tmp_msg_0_1.vz = 0.461118633553;
    tmp_tmp_msg_0_1.ax = 0.195683124773;
    tmp_tmp_msg_0_1.ay = 0.772875716342;
    tmp_tmp_msg_0_1.az = 0.412832433137;
    tmp_tmp_msg_0_1.flags = 17079U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryLedBrightness tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("IVEWGUJHGTFZLIKEHUBPGDKOOJHHBSYXMVXZUSBXBJWBNQWRSARCMJENTQVPFYWJOICMIDMOZRKUTUUQRHPWGJAYMWNDEBXPLOZOBPGCLBKOQARAOXDE");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.912524250971);
    msg.setSource(59369U);
    msg.setSourceEntity(192U);
    msg.setDestination(13994U);
    msg.setDestinationEntity(176U);
    msg.req_id = 50936U;
    msg.destination.assign("XCNYGYDNWOBZDSDBVUONCPTWJCGMPVHQQQYXFEOTKZBTACUGAOORZZIFKHVEESTLDZMASACCHNBAPDQYQPMHCMSRQUWRVVWJEAFKPMJKMBXFIFZCSHNWXEINNFWOITZPKLHKKHECFGMLRXXTBGKXSSDBQOXZQSAKMLO");
    msg.timeout = 0.806980074133;
    msg.range = 0.955215241298;
    msg.type = 246U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2899137718U;
    tmp_msg_0.state = 159U;
    tmp_msg_0.error.assign("OQUHCOBENTPWAMFLXLBVJAYITKXUJEXDXYAJNNLCXNHQVHAWUWAIJTWHZQNEPQXSUQLOGXTWLDEPNQHYYKFFPGDYEGMNMGZUQEOWJEAJVKGRXZBKTQIOTROMZCCLIZUBLBNWLPGVSSDFPAUBGSIVZPRVEVSFDLIZKFGMOJVRYIJEKSBTDOUSMFYTQTVELNYXRCRZWDRUHOFDBYYBRRXIMKVKWIDINAJSHDCHSKCKCHUPPOMCBZWGS");
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
    msg.setTimeStamp(0.866839288041);
    msg.setSource(64273U);
    msg.setSourceEntity(53U);
    msg.setDestination(8032U);
    msg.setDestinationEntity(196U);
    msg.req_id = 44306U;
    msg.destination.assign("JFPCIWDENMMLEWZDAIAFYXPYXUIRNBKOGLTDKDJBEOBWSJAESF");
    msg.timeout = 0.511236938187;
    msg.range = 0.504757150012;
    msg.type = 41U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.313950372272;
    tmp_msg_0.lon = 0.237182090382;
    tmp_msg_0.eta = 3213599196U;
    tmp_msg_0.duration = 35509U;
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
    msg.setTimeStamp(0.144905985759);
    msg.setSource(21934U);
    msg.setSourceEntity(60U);
    msg.setDestination(55156U);
    msg.setDestinationEntity(230U);
    msg.req_id = 3398U;
    msg.type = 249U;
    msg.status = 160U;
    msg.info.assign("UETVNNYXDMQWXWZTPWRJJBBLITUTNB");
    msg.range = 0.454192373525;

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
    msg.setTimeStamp(0.887752445685);
    msg.setSource(1473U);
    msg.setSourceEntity(43U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(197U);
    msg.req_id = 17131U;
    msg.type = 0U;
    msg.status = 84U;
    msg.info.assign("WEYDQXWPHRGGOXNCWTJYMYEUTJWLGNAKXLMRCIVTMMJJJHOVHSK");
    msg.range = 0.210409743586;

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
    msg.setTimeStamp(0.389798097671);
    msg.setSource(4754U);
    msg.setSourceEntity(127U);
    msg.setDestination(47503U);
    msg.setDestinationEntity(8U);
    msg.req_id = 25950U;
    msg.type = 48U;
    msg.status = 201U;
    msg.info.assign("INIPDOQCSEOBFHNPICNYYBSJCOZVAYRLJFQHVYGMTWJHZNRKDNWLLXRLIXRWVTSOIMALCCVOJCBUJPIKYXDJYAVMRDBIX");
    msg.range = 0.65658370968;

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
    msg.setTimeStamp(0.923029410412);
    msg.setSource(40530U);
    msg.setSourceEntity(17U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(38U);
    msg.value = -130;

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
    msg.setTimeStamp(0.866405135388);
    msg.setSource(14214U);
    msg.setSourceEntity(144U);
    msg.setDestination(57911U);
    msg.setDestinationEntity(48U);
    msg.value = -15537;

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
    msg.setTimeStamp(0.0754765552138);
    msg.setSource(13171U);
    msg.setSourceEntity(105U);
    msg.setDestination(27231U);
    msg.setDestinationEntity(186U);
    msg.value = 30910;

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
    msg.setTimeStamp(0.384252107719);
    msg.setSource(54290U);
    msg.setSourceEntity(112U);
    msg.setDestination(43070U);
    msg.setDestinationEntity(59U);
    msg.value = 0.555830928044;

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
    msg.setTimeStamp(0.579928760834);
    msg.setSource(20558U);
    msg.setSourceEntity(131U);
    msg.setDestination(6832U);
    msg.setDestinationEntity(41U);
    msg.value = 0.334367902785;

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
    msg.setTimeStamp(0.033233377937);
    msg.setSource(30569U);
    msg.setSourceEntity(132U);
    msg.setDestination(63266U);
    msg.setDestinationEntity(47U);
    msg.value = 0.924098707344;

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
    msg.setTimeStamp(0.390424022505);
    msg.setSource(39155U);
    msg.setSourceEntity(41U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(252U);
    msg.value = 0.858006451513;

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
    msg.setTimeStamp(0.532438534034);
    msg.setSource(6803U);
    msg.setSourceEntity(147U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(138U);
    msg.value = 0.512003108692;

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
    msg.setTimeStamp(0.688639763166);
    msg.setSource(11833U);
    msg.setSourceEntity(86U);
    msg.setDestination(38393U);
    msg.setDestinationEntity(35U);
    msg.value = 0.320363498049;

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
    msg.setTimeStamp(0.660572749614);
    msg.setSource(20951U);
    msg.setSourceEntity(245U);
    msg.setDestination(50884U);
    msg.setDestinationEntity(132U);
    msg.validity = 8343U;
    msg.type = 235U;
    msg.utc_year = 53507U;
    msg.utc_month = 183U;
    msg.utc_day = 127U;
    msg.utc_time = 0.501399505008;
    msg.lat = 0.617525565983;
    msg.lon = 0.518128917994;
    msg.height = 0.377959029866;
    msg.satellites = 42U;
    msg.cog = 0.000265343362512;
    msg.sog = 0.598462793261;
    msg.hdop = 0.943189298723;
    msg.vdop = 0.736806740012;
    msg.hacc = 0.928170785662;
    msg.vacc = 0.104643096275;

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
    msg.setTimeStamp(0.32484341788);
    msg.setSource(37824U);
    msg.setSourceEntity(176U);
    msg.setDestination(61228U);
    msg.setDestinationEntity(185U);
    msg.validity = 13734U;
    msg.type = 153U;
    msg.utc_year = 55929U;
    msg.utc_month = 119U;
    msg.utc_day = 9U;
    msg.utc_time = 0.234608729059;
    msg.lat = 0.883511625111;
    msg.lon = 0.892805921787;
    msg.height = 0.438465596884;
    msg.satellites = 134U;
    msg.cog = 0.00282007837975;
    msg.sog = 0.931007295609;
    msg.hdop = 0.571110872104;
    msg.vdop = 0.850294973316;
    msg.hacc = 0.45173103818;
    msg.vacc = 0.887848705243;

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
    msg.setTimeStamp(0.760210243685);
    msg.setSource(17614U);
    msg.setSourceEntity(250U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(125U);
    msg.validity = 62369U;
    msg.type = 110U;
    msg.utc_year = 12340U;
    msg.utc_month = 186U;
    msg.utc_day = 160U;
    msg.utc_time = 0.7303272593;
    msg.lat = 0.840260903495;
    msg.lon = 0.52157520272;
    msg.height = 0.544604145674;
    msg.satellites = 52U;
    msg.cog = 0.721459573712;
    msg.sog = 0.661439923791;
    msg.hdop = 0.422617634231;
    msg.vdop = 0.193627567645;
    msg.hacc = 0.926178089324;
    msg.vacc = 0.859524517816;

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
    msg.setTimeStamp(0.904891717139);
    msg.setSource(36U);
    msg.setSourceEntity(155U);
    msg.setDestination(51466U);
    msg.setDestinationEntity(249U);
    msg.time = 0.112265281804;
    msg.phi = 0.167514393372;
    msg.theta = 0.126423862913;
    msg.psi = 0.251507660913;
    msg.psi_magnetic = 0.281292311662;

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
    msg.setTimeStamp(0.750235682261);
    msg.setSource(20402U);
    msg.setSourceEntity(174U);
    msg.setDestination(15406U);
    msg.setDestinationEntity(132U);
    msg.time = 0.191844423109;
    msg.phi = 0.396844936371;
    msg.theta = 0.793943097188;
    msg.psi = 0.350438033095;
    msg.psi_magnetic = 0.457022053979;

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
    msg.setTimeStamp(0.649683738662);
    msg.setSource(44012U);
    msg.setSourceEntity(87U);
    msg.setDestination(7816U);
    msg.setDestinationEntity(113U);
    msg.time = 0.242261164063;
    msg.phi = 0.0822136038085;
    msg.theta = 0.276720097721;
    msg.psi = 0.726450916371;
    msg.psi_magnetic = 0.774294883634;

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
    msg.setTimeStamp(0.806636884725);
    msg.setSource(45017U);
    msg.setSourceEntity(160U);
    msg.setDestination(26750U);
    msg.setDestinationEntity(5U);
    msg.time = 0.498844461182;
    msg.x = 0.480650476527;
    msg.y = 0.228671247058;
    msg.z = 0.281937781447;
    msg.timestep = 0.845736336848;

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
    msg.setTimeStamp(0.247089081814);
    msg.setSource(16481U);
    msg.setSourceEntity(141U);
    msg.setDestination(4798U);
    msg.setDestinationEntity(5U);
    msg.time = 0.0714448309617;
    msg.x = 0.838440518792;
    msg.y = 0.687069286047;
    msg.z = 0.319522765728;
    msg.timestep = 0.924541186364;

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
    msg.setTimeStamp(0.897897435115);
    msg.setSource(27327U);
    msg.setSourceEntity(12U);
    msg.setDestination(40376U);
    msg.setDestinationEntity(126U);
    msg.time = 0.171439703954;
    msg.x = 0.72947269487;
    msg.y = 0.555602464816;
    msg.z = 0.495974774345;
    msg.timestep = 0.0181406691282;

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
    msg.setTimeStamp(0.858736969845);
    msg.setSource(25560U);
    msg.setSourceEntity(59U);
    msg.setDestination(59470U);
    msg.setDestinationEntity(131U);
    msg.time = 0.0154295638174;
    msg.x = 0.905149694309;
    msg.y = 0.85372224245;
    msg.z = 0.329025880098;

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
    msg.setTimeStamp(0.408902076689);
    msg.setSource(63796U);
    msg.setSourceEntity(32U);
    msg.setDestination(41991U);
    msg.setDestinationEntity(77U);
    msg.time = 0.496625854529;
    msg.x = 0.75186402196;
    msg.y = 0.831537191869;
    msg.z = 0.805041112195;

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
    msg.setTimeStamp(0.743514827277);
    msg.setSource(8964U);
    msg.setSourceEntity(69U);
    msg.setDestination(5752U);
    msg.setDestinationEntity(58U);
    msg.time = 0.427684178196;
    msg.x = 0.271764589799;
    msg.y = 0.681852282431;
    msg.z = 0.0928699533493;

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
    msg.setTimeStamp(0.88044164602);
    msg.setSource(64241U);
    msg.setSourceEntity(171U);
    msg.setDestination(38051U);
    msg.setDestinationEntity(35U);
    msg.time = 0.861985861272;
    msg.x = 0.204214483666;
    msg.y = 0.277106405399;
    msg.z = 0.291472311542;

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
    msg.setTimeStamp(0.854806080318);
    msg.setSource(965U);
    msg.setSourceEntity(211U);
    msg.setDestination(50601U);
    msg.setDestinationEntity(138U);
    msg.time = 0.591421353833;
    msg.x = 0.204666559423;
    msg.y = 0.843182712339;
    msg.z = 0.732534250901;

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
    msg.setTimeStamp(0.350793010889);
    msg.setSource(17392U);
    msg.setSourceEntity(234U);
    msg.setDestination(7925U);
    msg.setDestinationEntity(128U);
    msg.time = 0.332965517987;
    msg.x = 0.895386022807;
    msg.y = 0.71277518646;
    msg.z = 0.38453892668;

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
    msg.setTimeStamp(0.287544674421);
    msg.setSource(3281U);
    msg.setSourceEntity(171U);
    msg.setDestination(8513U);
    msg.setDestinationEntity(134U);
    msg.time = 0.0883073918628;
    msg.x = 0.213361684187;
    msg.y = 0.763303828715;
    msg.z = 0.0176766859944;

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
    msg.setTimeStamp(0.871225759572);
    msg.setSource(19283U);
    msg.setSourceEntity(58U);
    msg.setDestination(16277U);
    msg.setDestinationEntity(133U);
    msg.time = 0.452175177399;
    msg.x = 0.606639389501;
    msg.y = 0.375726255239;
    msg.z = 0.749313595495;

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
    msg.setTimeStamp(0.147793116405);
    msg.setSource(63175U);
    msg.setSourceEntity(15U);
    msg.setDestination(20643U);
    msg.setDestinationEntity(188U);
    msg.time = 0.893281848913;
    msg.x = 0.138484577984;
    msg.y = 0.931950825777;
    msg.z = 0.500259107766;

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
    msg.setTimeStamp(0.0443053170744);
    msg.setSource(26736U);
    msg.setSourceEntity(191U);
    msg.setDestination(28691U);
    msg.setDestinationEntity(105U);
    msg.validity = 33U;
    msg.x = 0.330904013616;
    msg.y = 0.799008802596;
    msg.z = 0.764529899129;

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
    msg.setTimeStamp(0.621640321872);
    msg.setSource(55228U);
    msg.setSourceEntity(188U);
    msg.setDestination(1120U);
    msg.setDestinationEntity(151U);
    msg.validity = 204U;
    msg.x = 0.54222903417;
    msg.y = 0.517057219264;
    msg.z = 0.384448147801;

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
    msg.setTimeStamp(0.0431192126118);
    msg.setSource(5795U);
    msg.setSourceEntity(11U);
    msg.setDestination(24306U);
    msg.setDestinationEntity(102U);
    msg.validity = 188U;
    msg.x = 0.845783184624;
    msg.y = 0.371629307605;
    msg.z = 0.44406519714;

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
    msg.setTimeStamp(0.317206157482);
    msg.setSource(33255U);
    msg.setSourceEntity(41U);
    msg.setDestination(48534U);
    msg.setDestinationEntity(173U);
    msg.validity = 251U;
    msg.x = 0.769254030182;
    msg.y = 0.561315554076;
    msg.z = 0.201105311392;

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
    msg.setTimeStamp(0.619578620232);
    msg.setSource(20316U);
    msg.setSourceEntity(172U);
    msg.setDestination(29388U);
    msg.setDestinationEntity(194U);
    msg.validity = 21U;
    msg.x = 0.969830831667;
    msg.y = 0.439874896248;
    msg.z = 0.175929731111;

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
    msg.setTimeStamp(0.285972814279);
    msg.setSource(11U);
    msg.setSourceEntity(40U);
    msg.setDestination(52084U);
    msg.setDestinationEntity(178U);
    msg.validity = 32U;
    msg.x = 0.433790179334;
    msg.y = 0.572169181917;
    msg.z = 0.317641564393;

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
    msg.setTimeStamp(0.701499390576);
    msg.setSource(59108U);
    msg.setSourceEntity(15U);
    msg.setDestination(53702U);
    msg.setDestinationEntity(167U);
    msg.time = 0.666494006645;
    msg.x = 0.162676683394;
    msg.y = 0.408500317341;
    msg.z = 0.487809620967;

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
    msg.setTimeStamp(0.947849232797);
    msg.setSource(50249U);
    msg.setSourceEntity(41U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(110U);
    msg.time = 0.383785106342;
    msg.x = 0.857656350897;
    msg.y = 0.166571323511;
    msg.z = 0.249465814284;

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
    msg.setTimeStamp(0.879903467741);
    msg.setSource(62135U);
    msg.setSourceEntity(53U);
    msg.setDestination(42355U);
    msg.setDestinationEntity(33U);
    msg.time = 0.197970124962;
    msg.x = 0.481673432776;
    msg.y = 0.903797132012;
    msg.z = 0.303643984451;

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
    msg.setTimeStamp(0.912222583013);
    msg.setSource(8900U);
    msg.setSourceEntity(116U);
    msg.setDestination(10516U);
    msg.setDestinationEntity(173U);
    msg.validity = 149U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.720797063336;
    tmp_msg_0.y = 0.785983648754;
    tmp_msg_0.z = 0.633372818846;
    tmp_msg_0.phi = 0.58737939788;
    tmp_msg_0.theta = 0.507035192431;
    tmp_msg_0.psi = 0.0888577355974;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.776259203537;
    tmp_msg_1.beam_height = 0.47824436581;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.736378341459;

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
    msg.setTimeStamp(0.402595371136);
    msg.setSource(27411U);
    msg.setSourceEntity(249U);
    msg.setDestination(35943U);
    msg.setDestinationEntity(180U);
    msg.validity = 53U;
    msg.value = 0.938841478926;

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
    msg.setTimeStamp(0.0759595453866);
    msg.setSource(3932U);
    msg.setSourceEntity(9U);
    msg.setDestination(61528U);
    msg.setDestinationEntity(182U);
    msg.validity = 254U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0702694803241;
    tmp_msg_0.y = 0.620050526102;
    tmp_msg_0.z = 0.485945888769;
    tmp_msg_0.phi = 0.272951742416;
    tmp_msg_0.theta = 0.0861226302341;
    tmp_msg_0.psi = 0.1036228857;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.300920010641;
    tmp_msg_1.beam_height = 0.775485895626;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.208040640898;

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
    msg.setTimeStamp(0.090039755175);
    msg.setSource(18891U);
    msg.setSourceEntity(99U);
    msg.setDestination(64303U);
    msg.setDestinationEntity(49U);
    msg.value = 0.578444736154;

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
    msg.setTimeStamp(0.727400766461);
    msg.setSource(59755U);
    msg.setSourceEntity(79U);
    msg.setDestination(58164U);
    msg.setDestinationEntity(214U);
    msg.value = 0.0466531840558;

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
    msg.setTimeStamp(0.755298511385);
    msg.setSource(44444U);
    msg.setSourceEntity(93U);
    msg.setDestination(31980U);
    msg.setDestinationEntity(10U);
    msg.value = 0.941774805711;

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
    msg.setTimeStamp(0.11281336861);
    msg.setSource(54260U);
    msg.setSourceEntity(72U);
    msg.setDestination(61361U);
    msg.setDestinationEntity(58U);
    msg.value = 0.422305995935;

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
    msg.setTimeStamp(0.721738820168);
    msg.setSource(64962U);
    msg.setSourceEntity(64U);
    msg.setDestination(11774U);
    msg.setDestinationEntity(126U);
    msg.value = 0.938369893066;

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
    msg.setTimeStamp(0.699096310463);
    msg.setSource(15566U);
    msg.setSourceEntity(38U);
    msg.setDestination(24741U);
    msg.setDestinationEntity(187U);
    msg.value = 0.750449027806;

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
    msg.setTimeStamp(0.0966004106136);
    msg.setSource(55685U);
    msg.setSourceEntity(71U);
    msg.setDestination(19410U);
    msg.setDestinationEntity(98U);
    msg.value = 0.765238440835;

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
    msg.setTimeStamp(0.114967828207);
    msg.setSource(45295U);
    msg.setSourceEntity(183U);
    msg.setDestination(30129U);
    msg.setDestinationEntity(28U);
    msg.value = 0.353425772346;

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
    msg.setTimeStamp(0.688212307407);
    msg.setSource(52619U);
    msg.setSourceEntity(236U);
    msg.setDestination(17068U);
    msg.setDestinationEntity(98U);
    msg.value = 0.586436932004;

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
    msg.setTimeStamp(0.867032019882);
    msg.setSource(6979U);
    msg.setSourceEntity(182U);
    msg.setDestination(5206U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0693117375734;

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
    msg.setTimeStamp(0.415344784131);
    msg.setSource(16280U);
    msg.setSourceEntity(6U);
    msg.setDestination(29903U);
    msg.setDestinationEntity(105U);
    msg.value = 0.491064221494;

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
    msg.setTimeStamp(0.889195088289);
    msg.setSource(63346U);
    msg.setSourceEntity(247U);
    msg.setDestination(8028U);
    msg.setDestinationEntity(235U);
    msg.value = 0.964642678645;

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
    msg.setTimeStamp(0.977161715221);
    msg.setSource(63447U);
    msg.setSourceEntity(120U);
    msg.setDestination(13275U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0887898305787;

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
    msg.setTimeStamp(0.907940243515);
    msg.setSource(36061U);
    msg.setSourceEntity(157U);
    msg.setDestination(65115U);
    msg.setDestinationEntity(55U);
    msg.value = 0.771239966075;

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
    msg.setTimeStamp(0.500283785843);
    msg.setSource(32427U);
    msg.setSourceEntity(245U);
    msg.setDestination(6702U);
    msg.setDestinationEntity(32U);
    msg.value = 0.994863127063;

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
    msg.setTimeStamp(0.60495805363);
    msg.setSource(13363U);
    msg.setSourceEntity(137U);
    msg.setDestination(29945U);
    msg.setDestinationEntity(99U);
    msg.value = 0.950557908536;

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
    msg.setTimeStamp(0.782278079193);
    msg.setSource(20456U);
    msg.setSourceEntity(111U);
    msg.setDestination(38824U);
    msg.setDestinationEntity(216U);
    msg.value = 0.908357245709;

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
    msg.setTimeStamp(0.586463198171);
    msg.setSource(25061U);
    msg.setSourceEntity(63U);
    msg.setDestination(55843U);
    msg.setDestinationEntity(217U);
    msg.value = 0.501190287812;

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
    msg.setTimeStamp(0.326429945375);
    msg.setSource(7271U);
    msg.setSourceEntity(82U);
    msg.setDestination(16367U);
    msg.setDestinationEntity(186U);
    msg.value = 0.00592013678342;

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
    msg.setTimeStamp(0.245800641708);
    msg.setSource(39311U);
    msg.setSourceEntity(114U);
    msg.setDestination(48690U);
    msg.setDestinationEntity(17U);
    msg.value = 0.407151108677;

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
    msg.setTimeStamp(0.427468582207);
    msg.setSource(51148U);
    msg.setSourceEntity(167U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(62U);
    msg.value = 0.400564016779;

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
    msg.setTimeStamp(0.423447550714);
    msg.setSource(20483U);
    msg.setSourceEntity(219U);
    msg.setDestination(45448U);
    msg.setDestinationEntity(29U);
    msg.value = 0.316945663556;

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
    msg.setTimeStamp(0.535838909324);
    msg.setSource(10914U);
    msg.setSourceEntity(188U);
    msg.setDestination(63612U);
    msg.setDestinationEntity(58U);
    msg.value = 0.787965788139;

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
    msg.setTimeStamp(0.837474876149);
    msg.setSource(7655U);
    msg.setSourceEntity(246U);
    msg.setDestination(41722U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0535722040235;

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
    msg.setTimeStamp(0.907021084355);
    msg.setSource(1344U);
    msg.setSourceEntity(53U);
    msg.setDestination(4473U);
    msg.setDestinationEntity(107U);
    msg.direction = 0.428177456971;
    msg.speed = 0.244562377531;
    msg.turbulence = 0.651394072641;

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
    msg.setTimeStamp(0.481458694152);
    msg.setSource(41125U);
    msg.setSourceEntity(186U);
    msg.setDestination(11372U);
    msg.setDestinationEntity(53U);
    msg.direction = 0.300630102347;
    msg.speed = 0.188586673226;
    msg.turbulence = 0.820441619826;

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
    msg.setTimeStamp(0.126200815695);
    msg.setSource(62391U);
    msg.setSourceEntity(42U);
    msg.setDestination(47931U);
    msg.setDestinationEntity(103U);
    msg.direction = 0.349058151803;
    msg.speed = 0.525182919301;
    msg.turbulence = 0.909259690083;

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
    msg.setTimeStamp(0.285117256685);
    msg.setSource(49510U);
    msg.setSourceEntity(27U);
    msg.setDestination(42569U);
    msg.setDestinationEntity(158U);
    msg.value = 0.492528416889;

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
    msg.setTimeStamp(0.226446996619);
    msg.setSource(41900U);
    msg.setSourceEntity(192U);
    msg.setDestination(23086U);
    msg.setDestinationEntity(66U);
    msg.value = 0.717527644049;

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
    msg.setTimeStamp(0.939122587914);
    msg.setSource(32776U);
    msg.setSourceEntity(89U);
    msg.setDestination(26104U);
    msg.setDestinationEntity(162U);
    msg.value = 0.0671284789818;

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
    msg.setTimeStamp(0.00825840309668);
    msg.setSource(49109U);
    msg.setSourceEntity(0U);
    msg.setDestination(21283U);
    msg.setDestinationEntity(207U);
    msg.value.assign("WZVIGVMICZCZQSEIUMICOPFDXQKFGVBZYPFNCKAHIUKVOBPDJJCDCBMYWSEYGE");

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
    msg.setTimeStamp(0.518860779302);
    msg.setSource(38616U);
    msg.setSourceEntity(66U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(74U);
    msg.value.assign("VVFABJQQMGTRKRTBYXHFGEXKM");

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
    msg.setTimeStamp(0.00332998427046);
    msg.setSource(22846U);
    msg.setSourceEntity(166U);
    msg.setDestination(28242U);
    msg.setDestinationEntity(26U);
    msg.value.assign("RANEZQJORYFMCMARXOSRHPJLFSOWIDANBDWNUCBNGZNKWWOPFKUTAEWV");

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
    msg.setTimeStamp(0.489177788348);
    msg.setSource(50653U);
    msg.setSourceEntity(213U);
    msg.setDestination(28527U);
    msg.setDestinationEntity(41U);
    const char tmp_msg_0[] = {-93, -10, 109, -99, 120, 26, 5, -32, 31, 111, -124, 123, -86, 116, 76, 99, 91, 55, 108, 103, -71, 95, 69, 13, 38, 81, -37, -108, 36, 112, 108, -116, -112, 15, 56, -41, 80, -49, -125, -65, -23, -93, 126, 62, 57, -20, -17, 37, -124, -43, 59, -55, 120, 100, 111, 112, 52, -20, 3, -12, -21, 88, 118, -24, 114, 113, -38, -40, 29, 47, -7, -94, -47, 35, -51, -4, 5, 109, -42, -11, 5, -83, 27, 99, 90, 92, 19, 33};
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
    msg.setTimeStamp(0.270073423896);
    msg.setSource(6431U);
    msg.setSourceEntity(190U);
    msg.setDestination(19856U);
    msg.setDestinationEntity(53U);
    const char tmp_msg_0[] = {110, -50, -109, -5, 95, -78, -79, -111, -102, -39, 85, -40, 24, 79, -93, -70, 57, 68, 49, -117, -2, 42, -92, -20, -23, -71, -92, 23, 80, -63, -39, 107, -87, 70, -24, 70, 20, -104, -72, 104, 39, 13, 52, -65, -64, 101, 4, -65, -118, -38, -70, 74, 10, 84, 121, -74, -18, 42, -59, -122, -53, 77, -6, -43, 125, 35, 1, 41, -62, -95, -47, 38, -7, 120, 115, -63, -45, 14, 119, 18, -59, -68, -32, 45, -27, -56, 21, 14, 123, 69, 93, -91, -74, -74, -73, -91, 21, -7, 106, 22, -113, -117, -103, 94, 97, -2, -96, 23, 6, 9, 112, 80, 13, -14, -90, -32, 54, 93, 7, 59, 50, 33, -35, 106, 105, -114, -31, -18, 104, 76, 60, 57, 44, 84, 33, -27, 26, -8, 1, -40, -27, 16, -118, -43, 112, 36, 57, 25, 37, -41, 91, 18, 45, 107, 51, -97, 43, 34, -14, 120, -107, 10, 60, 11, -41, 52, 19, 4, 111, 105, 22, 48, 81, -116, 28, -94, -116, 21, -110, 120, 52, 97, -4, 49, -35, -120, 5, 40, 73, -73, 87, 73, 30, 58, 104, -24, 63, 28, -41, 67, 35, -125, 59, 119, 35, -111, -54, -27, -115, -89, 77, -50};
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
    msg.setTimeStamp(0.0802164627484);
    msg.setSource(21655U);
    msg.setSourceEntity(24U);
    msg.setDestination(19026U);
    msg.setDestinationEntity(176U);
    const char tmp_msg_0[] = {-20, 13, 114, -49, -44, -41, -90, -26, 21, -6, 124, 116, 31, -88, 123, -55, -102};
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
    msg.setTimeStamp(0.942074827772);
    msg.setSource(54383U);
    msg.setSourceEntity(147U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(208U);
    msg.value = 0.868745726654;

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
    msg.setTimeStamp(0.17893027153);
    msg.setSource(40678U);
    msg.setSourceEntity(5U);
    msg.setDestination(19834U);
    msg.setDestinationEntity(115U);
    msg.value = 0.352089574292;

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
    msg.setTimeStamp(0.973758261567);
    msg.setSource(34846U);
    msg.setSourceEntity(45U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(228U);
    msg.value = 0.351208819081;

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
    msg.setTimeStamp(0.872552551757);
    msg.setSource(63646U);
    msg.setSourceEntity(90U);
    msg.setDestination(59255U);
    msg.setDestinationEntity(158U);
    msg.type = 152U;
    msg.frequency = 119129906U;
    msg.min_range = 64422U;
    msg.max_range = 34832U;
    msg.bits_per_point = 75U;
    msg.scale_factor = 0.248149498581;
    const char tmp_msg_0[] = {51, 9, -61, 96, -113, 26, 67, -75, -32, -1, -111, 81, -113, -55, -2, -86, 31, -124, 40, 16, 55, 105, -40, 47, 116, -15, 47, -12, -10, -34, -98, -119, 22, -81, 46, 116, 82, -47, 25, -65, -4, -19, 94, -109, -112, 32, -124, -115, 82, -46, 122, -5, -61, 98, -77, -82, -89, -34, -101, -86, -28, -37, -15, 28, 84, -124, -37, 59, -46, -97, 64, -47, 6, 34, 14, 20, 7, 45, -83, -99, -6, 5, -78, -5, 35, -46, -98, -22, 78, -93, 105, -28, -26, 9, -118, -73, -71, 64, -94, 96, 46, -114, 24, -69, 111, 64, 72, 73, -108, 108, -24, -36, -8, 9, 101, 59, 8, 63, -51, -117, -27, 41, -98, -126, 75, -102, 66, 94, 61, 4, -3, -31, -12, -96, -2, 28, -33, -92, -9, 81, -121, 108, 115, -50, 63, 112, 102, 27, -40, 8, 23, -109, -51, -16, -47, -9, -123, -61, -90, 56, -32, 81, -91, -38, -90, -67, -102, -128, 42, -11, 46, -52, 83, -98, 43, -114};
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
    msg.setTimeStamp(0.0140980007275);
    msg.setSource(34707U);
    msg.setSourceEntity(26U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(87U);
    msg.type = 95U;
    msg.frequency = 1074878439U;
    msg.min_range = 51423U;
    msg.max_range = 7195U;
    msg.bits_per_point = 228U;
    msg.scale_factor = 0.170079277552;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.586994894904;
    tmp_msg_0.beam_height = 0.851878954751;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-27, -25, -83, -122, 60, -94, -58, 97, -87, -105, -39, -128, 72, -80, -14, 93, 120, 68, -77, 20, 68, 123, 94, 97, 27, -90, 17, 87, 85, 106, -58, 70, -33, -84, -113, 5, -58, 6, -37, 0, 31, -74, -81, -56, 79};
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
    msg.setTimeStamp(0.370788195881);
    msg.setSource(4335U);
    msg.setSourceEntity(169U);
    msg.setDestination(43470U);
    msg.setDestinationEntity(220U);
    msg.type = 213U;
    msg.frequency = 2551348083U;
    msg.min_range = 20386U;
    msg.max_range = 21746U;
    msg.bits_per_point = 7U;
    msg.scale_factor = 0.493237020819;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.586024491692;
    tmp_msg_0.beam_height = 0.204154056044;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {118, 73, -105, -19, -51, -87, -85, 120, 86, 122, 117, -39, -81, -42, 126, -76, 117, -21, 58, -37, -61, -120, 1, 105, -108, -113, -48, -56, -105, -37, -103, -70, 38, 95, -5, 44, 54, -90, -54, -124, -48, -14, 75, -94, -123, -7, 12, 62, -41, -62, 36, -40, 118, -101, -56, 26, 5, -6, 44, -92, 85, -123, -104, -61, 120, -36, 69, 87, 90, 28, -109, 22, -65, -45, -25, -52, 61, 7, -24, 8, 7, 99, -69, 39, -94, 77, -111, -72, -79, -77, -115, 39, -25, -106, -7, -67, -82, -78, 91, 54, 70, -90, 123, -1, -13, 22, -15, -63, -27, -58, 45, 107, 46, -94, 60, 32, 79, 74, -76, -78, -115, 73, -75, -125, 28, -11, -100, 12, 41, -60, 6, 77, 63, 33, 23, 61, 117, 22, 37, 6, 124, -59, -57, 65, -93, 84, -118, -104, 64, 7, 31, -34, -106, -92, -60, -48, -110, -31, -12, -49, -28, -17, 109, 63, -21, 64, 44, 64, 0, -26, 93, -13, -126, -80, 124, 109, -54, 73, 23, -58, 103, -37, -76, 10, -96, 94, -77, 61, -37, -79, 39, 14, 55, -43, 68, 70, 90, -16, 101, 111, -77, 125, -122, -76, 116, 121, -39, 25, -66, 68};
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
    msg.setTimeStamp(0.861187602958);
    msg.setSource(54423U);
    msg.setSourceEntity(212U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.00137268256894);
    msg.setSource(62025U);
    msg.setSourceEntity(146U);
    msg.setDestination(37831U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.466878991418);
    msg.setSource(54684U);
    msg.setSourceEntity(201U);
    msg.setDestination(1878U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.714164446977);
    msg.setSource(8098U);
    msg.setSourceEntity(231U);
    msg.setDestination(37851U);
    msg.setDestinationEntity(21U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.00647211086587);
    msg.setSource(2893U);
    msg.setSourceEntity(252U);
    msg.setDestination(26898U);
    msg.setDestinationEntity(49U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.0681452911077);
    msg.setSource(62873U);
    msg.setSourceEntity(41U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(81U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.971462126732);
    msg.setSource(38699U);
    msg.setSourceEntity(113U);
    msg.setDestination(6672U);
    msg.setDestinationEntity(206U);
    msg.value = 0.348178737585;
    msg.confidence = 0.709304512145;
    msg.opmodes.assign("AVYFZDSUEVCAYIURUYCWNCCZALPNTVKTCOKSNDRQLLHIBKCWGNVGWJPTDLIBNGAZAZDKMAUNNMIXHHRUAYIKXIBYEVVEPKAXTJMMRWLOMWXRIQFHTVJOMQPYGQTCBIGXMXBZBSBULCZFTGYVSROWWMQJLRTLSSEDPOHYZGQXQPGGRHSMYUOUOCRDEOHWEATQELQYKJXFX");

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
    msg.setTimeStamp(0.363628423692);
    msg.setSource(15964U);
    msg.setSourceEntity(187U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(146U);
    msg.value = 0.632737273872;
    msg.confidence = 0.587097509738;
    msg.opmodes.assign("MHPSAXCXTZXNYGRCTRGSAJOKVOICZPOMLMOUHZOGYCYRTQCSYTUBXVPFDANIEVOGMNVGURBELYHVFJPSWQUXFPZJOUGRMPGNYZHDGFEZAIAEKL");

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
    msg.setTimeStamp(0.399770173481);
    msg.setSource(59851U);
    msg.setSourceEntity(152U);
    msg.setDestination(18084U);
    msg.setDestinationEntity(64U);
    msg.value = 0.872229980474;
    msg.confidence = 0.840295442769;
    msg.opmodes.assign("TBOYSARBPFHZCRTWGQABEJMFQZYMBLKVJDQCYNJCUDVCWLZZDEGOXRZJIZBNNIIHYRXYOGWCLWBSEWMAUNKHDTSANSOLISNXORQKXORLLBPFCAKTGFEVTVHJWJTYLAZQIVQFUGVFUICGDLHZOMQYMNMXNZMCGCEPDWAAUBDZSASPKFIRSKXMEYPXHFJWBVRFENYDBMUEVQTXSCTJ");

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
    msg.setTimeStamp(0.254537132876);
    msg.setSource(29168U);
    msg.setSourceEntity(236U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(13U);
    msg.itow = 3926942713U;
    msg.lat = 0.280416164607;
    msg.lon = 0.658010690241;
    msg.height_ell = 0.237466483633;
    msg.height_sea = 0.739865939283;
    msg.hacc = 0.642820399981;
    msg.vacc = 0.683412470334;
    msg.vel_n = 0.811027111659;
    msg.vel_e = 0.314499960477;
    msg.vel_d = 0.381503769632;
    msg.speed = 0.980285167611;
    msg.gspeed = 0.246818909607;
    msg.heading = 0.108313861698;
    msg.sacc = 0.225420390655;
    msg.cacc = 0.363801047928;

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
    msg.setTimeStamp(0.109535011407);
    msg.setSource(8797U);
    msg.setSourceEntity(111U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(74U);
    msg.itow = 675723783U;
    msg.lat = 0.665319986891;
    msg.lon = 0.525383349541;
    msg.height_ell = 0.116867336784;
    msg.height_sea = 0.855129914493;
    msg.hacc = 0.854700919106;
    msg.vacc = 0.914296877738;
    msg.vel_n = 0.435131743424;
    msg.vel_e = 0.87135420243;
    msg.vel_d = 0.67209166772;
    msg.speed = 0.468041190575;
    msg.gspeed = 0.232610498174;
    msg.heading = 0.68030173438;
    msg.sacc = 0.711013028657;
    msg.cacc = 0.646739054651;

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
    msg.setTimeStamp(0.0233843000099);
    msg.setSource(50531U);
    msg.setSourceEntity(227U);
    msg.setDestination(22718U);
    msg.setDestinationEntity(169U);
    msg.itow = 3066834936U;
    msg.lat = 0.18728325491;
    msg.lon = 0.531461457363;
    msg.height_ell = 0.575130370679;
    msg.height_sea = 0.102420656353;
    msg.hacc = 0.957108552231;
    msg.vacc = 0.273106406448;
    msg.vel_n = 0.617038900512;
    msg.vel_e = 0.122296921264;
    msg.vel_d = 0.349408344573;
    msg.speed = 0.183519083993;
    msg.gspeed = 0.49139175798;
    msg.heading = 0.353114515889;
    msg.sacc = 0.744952253797;
    msg.cacc = 0.547281941771;

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
    msg.setTimeStamp(0.56199167406);
    msg.setSource(53152U);
    msg.setSourceEntity(189U);
    msg.setDestination(4019U);
    msg.setDestinationEntity(228U);
    msg.id = 105U;
    msg.value = 0.841275354801;

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
    msg.setTimeStamp(0.527811009583);
    msg.setSource(10848U);
    msg.setSourceEntity(96U);
    msg.setDestination(27165U);
    msg.setDestinationEntity(253U);
    msg.id = 217U;
    msg.value = 0.0932318026252;

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
    msg.setTimeStamp(0.959527453262);
    msg.setSource(25923U);
    msg.setSourceEntity(127U);
    msg.setDestination(27637U);
    msg.setDestinationEntity(1U);
    msg.id = 54U;
    msg.value = 0.797525963022;

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
    msg.setTimeStamp(0.15200990078);
    msg.setSource(24480U);
    msg.setSourceEntity(60U);
    msg.setDestination(10651U);
    msg.setDestinationEntity(147U);
    msg.x = 0.845501504721;
    msg.y = 0.578896491748;
    msg.z = 0.333215421096;
    msg.phi = 0.630477134536;
    msg.theta = 0.714471776763;
    msg.psi = 0.392123463519;

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
    msg.setTimeStamp(0.226311409494);
    msg.setSource(21497U);
    msg.setSourceEntity(123U);
    msg.setDestination(56195U);
    msg.setDestinationEntity(102U);
    msg.x = 0.116763072422;
    msg.y = 0.12250328588;
    msg.z = 0.0682958405045;
    msg.phi = 0.0566229900437;
    msg.theta = 0.793874855769;
    msg.psi = 0.640379212021;

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
    msg.setTimeStamp(0.0442792971535);
    msg.setSource(53994U);
    msg.setSourceEntity(179U);
    msg.setDestination(62195U);
    msg.setDestinationEntity(236U);
    msg.x = 0.261261737518;
    msg.y = 0.375639829087;
    msg.z = 0.108487190088;
    msg.phi = 0.865693168303;
    msg.theta = 0.720099121586;
    msg.psi = 0.519889505842;

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
    msg.setTimeStamp(0.890951516026);
    msg.setSource(50849U);
    msg.setSourceEntity(73U);
    msg.setDestination(16363U);
    msg.setDestinationEntity(79U);
    msg.beam_width = 0.373787469332;
    msg.beam_height = 0.647859547474;

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
    msg.setTimeStamp(0.210110967191);
    msg.setSource(20050U);
    msg.setSourceEntity(58U);
    msg.setDestination(38635U);
    msg.setDestinationEntity(223U);
    msg.beam_width = 0.803945957949;
    msg.beam_height = 0.421383863458;

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
    msg.setTimeStamp(0.222080236376);
    msg.setSource(38236U);
    msg.setSourceEntity(154U);
    msg.setDestination(44229U);
    msg.setDestinationEntity(109U);
    msg.beam_width = 0.478669733408;
    msg.beam_height = 0.373000867813;

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
    msg.setTimeStamp(0.711594506642);
    msg.setSource(11392U);
    msg.setSourceEntity(215U);
    msg.setDestination(64145U);
    msg.setDestinationEntity(34U);
    msg.sane = 166U;

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
    msg.setTimeStamp(0.212653559599);
    msg.setSource(40951U);
    msg.setSourceEntity(236U);
    msg.setDestination(33424U);
    msg.setDestinationEntity(178U);
    msg.sane = 65U;

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
    msg.setTimeStamp(0.878355353475);
    msg.setSource(35261U);
    msg.setSourceEntity(75U);
    msg.setDestination(310U);
    msg.setDestinationEntity(97U);
    msg.sane = 212U;

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
    msg.setTimeStamp(0.786699071736);
    msg.setSource(39452U);
    msg.setSourceEntity(126U);
    msg.setDestination(31941U);
    msg.setDestinationEntity(88U);
    msg.value = 0.252029368248;

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
    msg.setTimeStamp(0.159520016625);
    msg.setSource(20032U);
    msg.setSourceEntity(103U);
    msg.setDestination(33899U);
    msg.setDestinationEntity(165U);
    msg.value = 0.745845422068;

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
    msg.setTimeStamp(0.0434053188448);
    msg.setSource(25095U);
    msg.setSourceEntity(152U);
    msg.setDestination(12439U);
    msg.setDestinationEntity(78U);
    msg.value = 0.710593823242;

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
    msg.setTimeStamp(0.477657120718);
    msg.setSource(32664U);
    msg.setSourceEntity(54U);
    msg.setDestination(39651U);
    msg.setDestinationEntity(150U);
    msg.value = 0.198613683317;

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
    msg.setTimeStamp(0.68022826194);
    msg.setSource(11740U);
    msg.setSourceEntity(233U);
    msg.setDestination(21845U);
    msg.setDestinationEntity(129U);
    msg.value = 0.134292912163;

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
    msg.setTimeStamp(0.371745743692);
    msg.setSource(24192U);
    msg.setSourceEntity(21U);
    msg.setDestination(3124U);
    msg.setDestinationEntity(81U);
    msg.value = 0.933518985084;

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
    msg.setTimeStamp(0.354653439571);
    msg.setSource(7172U);
    msg.setSourceEntity(150U);
    msg.setDestination(46915U);
    msg.setDestinationEntity(60U);
    msg.value = 0.738623283177;

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
    msg.setTimeStamp(0.564899946786);
    msg.setSource(36997U);
    msg.setSourceEntity(11U);
    msg.setDestination(59431U);
    msg.setDestinationEntity(76U);
    msg.value = 0.201290567175;

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
    msg.setTimeStamp(0.549204187427);
    msg.setSource(44282U);
    msg.setSourceEntity(114U);
    msg.setDestination(12287U);
    msg.setDestinationEntity(23U);
    msg.value = 0.177614581943;

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
    msg.setTimeStamp(0.610742816994);
    msg.setSource(24663U);
    msg.setSourceEntity(208U);
    msg.setDestination(38680U);
    msg.setDestinationEntity(23U);
    msg.value = 0.103681630801;

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
    msg.setTimeStamp(0.302384816667);
    msg.setSource(58147U);
    msg.setSourceEntity(123U);
    msg.setDestination(6837U);
    msg.setDestinationEntity(36U);
    msg.value = 0.124840891454;

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
    msg.setTimeStamp(0.216773270341);
    msg.setSource(25831U);
    msg.setSourceEntity(216U);
    msg.setDestination(16635U);
    msg.setDestinationEntity(158U);
    msg.value = 0.347127273538;

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
    msg.setTimeStamp(0.452555429904);
    msg.setSource(25143U);
    msg.setSourceEntity(172U);
    msg.setDestination(35030U);
    msg.setDestinationEntity(247U);
    msg.value = 0.861882316061;

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
    msg.setTimeStamp(0.36061264969);
    msg.setSource(16492U);
    msg.setSourceEntity(225U);
    msg.setDestination(26209U);
    msg.setDestinationEntity(14U);
    msg.value = 0.904401084867;

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
    msg.setTimeStamp(0.70077887967);
    msg.setSource(37302U);
    msg.setSourceEntity(124U);
    msg.setDestination(53328U);
    msg.setDestinationEntity(251U);
    msg.value = 0.180872393562;

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
    msg.setTimeStamp(0.140775274317);
    msg.setSource(23331U);
    msg.setSourceEntity(152U);
    msg.setDestination(13629U);
    msg.setDestinationEntity(101U);
    msg.value = 0.020159578692;

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
    msg.setTimeStamp(0.927729055206);
    msg.setSource(5820U);
    msg.setSourceEntity(143U);
    msg.setDestination(5953U);
    msg.setDestinationEntity(223U);
    msg.value = 0.989912698786;

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
    msg.setTimeStamp(0.863471100498);
    msg.setSource(13945U);
    msg.setSourceEntity(245U);
    msg.setDestination(54551U);
    msg.setDestinationEntity(65U);
    msg.value = 0.0913697957462;

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
    msg.setTimeStamp(0.553362637258);
    msg.setSource(61134U);
    msg.setSourceEntity(212U);
    msg.setDestination(12321U);
    msg.setDestinationEntity(158U);
    msg.value = 0.981695976375;

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
    msg.setTimeStamp(0.389241468819);
    msg.setSource(60768U);
    msg.setSourceEntity(130U);
    msg.setDestination(27583U);
    msg.setDestinationEntity(204U);
    msg.value = 0.549677042371;

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
    msg.setTimeStamp(0.809912083693);
    msg.setSource(22841U);
    msg.setSourceEntity(180U);
    msg.setDestination(56715U);
    msg.setDestinationEntity(43U);
    msg.value = 0.696175015333;

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
    msg.setTimeStamp(0.824198469851);
    msg.setSource(42249U);
    msg.setSourceEntity(111U);
    msg.setDestination(1724U);
    msg.setDestinationEntity(64U);
    msg.value = 0.885022202429;

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
    msg.setTimeStamp(0.753609029947);
    msg.setSource(9592U);
    msg.setSourceEntity(253U);
    msg.setDestination(58435U);
    msg.setDestinationEntity(32U);
    msg.value = 0.379206354709;

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
    msg.setTimeStamp(0.40638043359);
    msg.setSource(21209U);
    msg.setSourceEntity(178U);
    msg.setDestination(27868U);
    msg.setDestinationEntity(187U);
    msg.value = 0.581050451507;

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
    msg.setTimeStamp(0.373530138298);
    msg.setSource(53462U);
    msg.setSourceEntity(208U);
    msg.setDestination(34548U);
    msg.setDestinationEntity(163U);
    msg.validity = 22360U;
    msg.type = 234U;
    msg.tow = 3482772746U;
    msg.base_lat = 0.160162153074;
    msg.base_lon = 0.474770364834;
    msg.base_height = 0.00128382568644;
    msg.n = 0.119641198524;
    msg.e = 0.102849643149;
    msg.d = 0.748393387471;
    msg.v_n = 0.330276477085;
    msg.v_e = 0.905438878117;
    msg.v_d = 0.502198244595;
    msg.satellites = 200U;
    msg.iar_hyp = 32924U;
    msg.iar_ratio = 0.486498320402;

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
    msg.setTimeStamp(0.509487694843);
    msg.setSource(14429U);
    msg.setSourceEntity(254U);
    msg.setDestination(5046U);
    msg.setDestinationEntity(254U);
    msg.validity = 6483U;
    msg.type = 204U;
    msg.tow = 1868997144U;
    msg.base_lat = 0.780020026035;
    msg.base_lon = 0.430951231252;
    msg.base_height = 0.354872400092;
    msg.n = 0.495880323008;
    msg.e = 0.297915255173;
    msg.d = 0.857494596257;
    msg.v_n = 0.735219348021;
    msg.v_e = 0.478459149994;
    msg.v_d = 0.176046476849;
    msg.satellites = 19U;
    msg.iar_hyp = 6765U;
    msg.iar_ratio = 0.342149551398;

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
    msg.setTimeStamp(0.426041293973);
    msg.setSource(35048U);
    msg.setSourceEntity(76U);
    msg.setDestination(57742U);
    msg.setDestinationEntity(37U);
    msg.validity = 3142U;
    msg.type = 208U;
    msg.tow = 4204368152U;
    msg.base_lat = 0.903026475905;
    msg.base_lon = 0.193922174765;
    msg.base_height = 0.311164834346;
    msg.n = 0.0238514257407;
    msg.e = 0.939712686364;
    msg.d = 0.676509459779;
    msg.v_n = 0.860622981387;
    msg.v_e = 0.467606545942;
    msg.v_d = 0.857598765443;
    msg.satellites = 220U;
    msg.iar_hyp = 12856U;
    msg.iar_ratio = 0.862307160255;

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
    msg.setTimeStamp(0.389743018822);
    msg.setSource(64736U);
    msg.setSourceEntity(182U);
    msg.setDestination(30708U);
    msg.setDestinationEntity(149U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.119757813319;
    tmp_msg_0.lon = 0.725029142589;
    tmp_msg_0.height = 0.326205947214;
    tmp_msg_0.x = 0.846823798456;
    tmp_msg_0.y = 0.308502684545;
    tmp_msg_0.z = 0.610289386118;
    tmp_msg_0.phi = 0.456596500988;
    tmp_msg_0.theta = 0.803203925531;
    tmp_msg_0.psi = 0.946230391428;
    tmp_msg_0.u = 0.452452277035;
    tmp_msg_0.v = 0.362479551748;
    tmp_msg_0.w = 0.925435954878;
    tmp_msg_0.vx = 0.177200453078;
    tmp_msg_0.vy = 0.823034754478;
    tmp_msg_0.vz = 0.584427847332;
    tmp_msg_0.p = 0.141539230826;
    tmp_msg_0.q = 0.627768495993;
    tmp_msg_0.r = 0.970106149546;
    tmp_msg_0.depth = 0.922607847002;
    tmp_msg_0.alt = 0.0554207974743;
    msg.state.set(tmp_msg_0);
    msg.type = 124U;

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
    msg.setTimeStamp(0.372015849942);
    msg.setSource(62899U);
    msg.setSourceEntity(200U);
    msg.setDestination(47388U);
    msg.setDestinationEntity(139U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.60380717793;
    tmp_msg_0.lon = 0.536256249001;
    tmp_msg_0.height = 0.8500828817;
    tmp_msg_0.x = 0.374820132296;
    tmp_msg_0.y = 0.0159485159733;
    tmp_msg_0.z = 0.592269891524;
    tmp_msg_0.phi = 0.340804376161;
    tmp_msg_0.theta = 0.67150699768;
    tmp_msg_0.psi = 0.792176702542;
    tmp_msg_0.u = 0.584128375442;
    tmp_msg_0.v = 0.990102641267;
    tmp_msg_0.w = 0.595999047223;
    tmp_msg_0.vx = 0.150466394915;
    tmp_msg_0.vy = 0.536162925464;
    tmp_msg_0.vz = 0.153504931833;
    tmp_msg_0.p = 0.248509740135;
    tmp_msg_0.q = 0.057152223885;
    tmp_msg_0.r = 0.304647753472;
    tmp_msg_0.depth = 0.507325982022;
    tmp_msg_0.alt = 0.860270216492;
    msg.state.set(tmp_msg_0);
    msg.type = 187U;

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
    msg.setTimeStamp(0.248700204188);
    msg.setSource(1309U);
    msg.setSourceEntity(109U);
    msg.setDestination(10046U);
    msg.setDestinationEntity(89U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.525076948583;
    tmp_msg_0.lon = 0.751309714969;
    tmp_msg_0.height = 0.995090713287;
    tmp_msg_0.x = 0.227333707686;
    tmp_msg_0.y = 0.0152308182302;
    tmp_msg_0.z = 0.931816637744;
    tmp_msg_0.phi = 0.942358725066;
    tmp_msg_0.theta = 0.960930582287;
    tmp_msg_0.psi = 0.691746420149;
    tmp_msg_0.u = 0.137108870506;
    tmp_msg_0.v = 0.485417834158;
    tmp_msg_0.w = 0.585458600224;
    tmp_msg_0.vx = 0.144184086822;
    tmp_msg_0.vy = 0.124867260694;
    tmp_msg_0.vz = 0.162308612345;
    tmp_msg_0.p = 0.126468816227;
    tmp_msg_0.q = 0.950237229528;
    tmp_msg_0.r = 0.871674637282;
    tmp_msg_0.depth = 0.617668016728;
    tmp_msg_0.alt = 0.489491917103;
    msg.state.set(tmp_msg_0);
    msg.type = 144U;

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
    msg.setTimeStamp(0.951743107822);
    msg.setSource(26567U);
    msg.setSourceEntity(75U);
    msg.setDestination(18544U);
    msg.setDestinationEntity(175U);
    msg.value = 0.85969978541;

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
    msg.setTimeStamp(0.882179188658);
    msg.setSource(60527U);
    msg.setSourceEntity(229U);
    msg.setDestination(34821U);
    msg.setDestinationEntity(91U);
    msg.value = 0.782948643895;

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
    msg.setTimeStamp(0.295226127071);
    msg.setSource(28292U);
    msg.setSourceEntity(129U);
    msg.setDestination(44596U);
    msg.setDestinationEntity(189U);
    msg.value = 0.498330318785;

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
    msg.setTimeStamp(0.472737084254);
    msg.setSource(38138U);
    msg.setSourceEntity(83U);
    msg.setDestination(16381U);
    msg.setDestinationEntity(213U);
    msg.value = 0.68925198708;

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
    msg.setTimeStamp(0.659086216429);
    msg.setSource(28438U);
    msg.setSourceEntity(84U);
    msg.setDestination(59030U);
    msg.setDestinationEntity(19U);
    msg.value = 0.757460997676;

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
    msg.setTimeStamp(0.989468058975);
    msg.setSource(58276U);
    msg.setSourceEntity(34U);
    msg.setDestination(18762U);
    msg.setDestinationEntity(121U);
    msg.value = 0.267658576926;

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
    msg.setTimeStamp(0.165035199604);
    msg.setSource(40425U);
    msg.setSourceEntity(173U);
    msg.setDestination(39397U);
    msg.setDestinationEntity(131U);
    msg.value = 0.525067916617;

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
    msg.setTimeStamp(0.855882220123);
    msg.setSource(46620U);
    msg.setSourceEntity(134U);
    msg.setDestination(58551U);
    msg.setDestinationEntity(173U);
    msg.value = 0.88028863354;

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
    msg.setTimeStamp(0.77701231384);
    msg.setSource(32523U);
    msg.setSourceEntity(77U);
    msg.setDestination(44518U);
    msg.setDestinationEntity(16U);
    msg.value = 0.842123662506;

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
    msg.setTimeStamp(0.55858071231);
    msg.setSource(23383U);
    msg.setSourceEntity(183U);
    msg.setDestination(41754U);
    msg.setDestinationEntity(125U);
    msg.value = 0.728785248161;

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
    msg.setTimeStamp(0.109162098569);
    msg.setSource(1634U);
    msg.setSourceEntity(0U);
    msg.setDestination(46214U);
    msg.setDestinationEntity(181U);
    msg.value = 0.538711578457;

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
    msg.setTimeStamp(0.457465425092);
    msg.setSource(10625U);
    msg.setSourceEntity(165U);
    msg.setDestination(30592U);
    msg.setDestinationEntity(246U);
    msg.value = 0.648398048332;

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
    msg.setTimeStamp(0.900092810179);
    msg.setSource(44021U);
    msg.setSourceEntity(240U);
    msg.setDestination(9960U);
    msg.setDestinationEntity(133U);
    msg.value = 0.924485724727;

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
    msg.setTimeStamp(0.18872199284);
    msg.setSource(6791U);
    msg.setSourceEntity(111U);
    msg.setDestination(8769U);
    msg.setDestinationEntity(232U);
    msg.value = 0.784633713412;

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
    msg.setTimeStamp(0.339502708164);
    msg.setSource(44911U);
    msg.setSourceEntity(90U);
    msg.setDestination(27618U);
    msg.setDestinationEntity(116U);
    msg.value = 0.525319592219;

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
    msg.setTimeStamp(0.591219033985);
    msg.setSource(3226U);
    msg.setSourceEntity(231U);
    msg.setDestination(49725U);
    msg.setDestinationEntity(251U);
    msg.id = 15U;
    msg.zoom = 16U;
    msg.action = 246U;

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
    msg.setTimeStamp(0.566383875661);
    msg.setSource(63977U);
    msg.setSourceEntity(134U);
    msg.setDestination(48916U);
    msg.setDestinationEntity(63U);
    msg.id = 90U;
    msg.zoom = 44U;
    msg.action = 183U;

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
    msg.setTimeStamp(0.95080595751);
    msg.setSource(57042U);
    msg.setSourceEntity(145U);
    msg.setDestination(48725U);
    msg.setDestinationEntity(185U);
    msg.id = 81U;
    msg.zoom = 244U;
    msg.action = 244U;

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
    msg.setTimeStamp(0.433961721273);
    msg.setSource(53022U);
    msg.setSourceEntity(69U);
    msg.setDestination(24625U);
    msg.setDestinationEntity(30U);
    msg.id = 219U;
    msg.value = 0.406900902091;

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
    msg.setTimeStamp(0.218190382771);
    msg.setSource(33484U);
    msg.setSourceEntity(76U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(231U);
    msg.id = 126U;
    msg.value = 0.536186176949;

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
    msg.setTimeStamp(0.790063248225);
    msg.setSource(11312U);
    msg.setSourceEntity(177U);
    msg.setDestination(31455U);
    msg.setDestinationEntity(215U);
    msg.id = 221U;
    msg.value = 0.261370830943;

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
    msg.setTimeStamp(0.153485116078);
    msg.setSource(30886U);
    msg.setSourceEntity(106U);
    msg.setDestination(26228U);
    msg.setDestinationEntity(156U);
    msg.id = 141U;
    msg.value = 0.998274688785;

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
    msg.setTimeStamp(0.540035334908);
    msg.setSource(16157U);
    msg.setSourceEntity(141U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(65U);
    msg.id = 151U;
    msg.value = 0.520395982313;

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
    msg.setTimeStamp(0.348461815218);
    msg.setSource(54349U);
    msg.setSourceEntity(42U);
    msg.setDestination(36342U);
    msg.setDestinationEntity(148U);
    msg.id = 139U;
    msg.value = 0.275551146542;

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
    msg.setTimeStamp(0.657701215776);
    msg.setSource(20797U);
    msg.setSourceEntity(200U);
    msg.setDestination(54210U);
    msg.setDestinationEntity(54U);
    msg.id = 80U;
    msg.angle = 0.232581515149;

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
    msg.setTimeStamp(0.85094204436);
    msg.setSource(53482U);
    msg.setSourceEntity(221U);
    msg.setDestination(8001U);
    msg.setDestinationEntity(201U);
    msg.id = 19U;
    msg.angle = 0.612548336766;

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
    msg.setTimeStamp(0.0504831540358);
    msg.setSource(29093U);
    msg.setSourceEntity(176U);
    msg.setDestination(60018U);
    msg.setDestinationEntity(16U);
    msg.id = 204U;
    msg.angle = 0.533702986025;

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
    msg.setTimeStamp(0.777470423761);
    msg.setSource(25810U);
    msg.setSourceEntity(181U);
    msg.setDestination(28884U);
    msg.setDestinationEntity(173U);
    msg.op = 177U;
    msg.actions.assign("LDZXIESHBUWUDZHDNYCCVNZCQZUXBKTFTEBWNRATLZWLNRQPQBKVPOGJMEYGIUFHKDPOXMIONYPFDGUXMDDLMQLEIESVLGWDXBCASKATQJJPEACMSGMUGTOJTBRQPGZQFXWBMPDWYBXVFRSIKRSCYNJRQTJOFMIIPN");

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
    msg.setTimeStamp(0.717997717431);
    msg.setSource(53969U);
    msg.setSourceEntity(100U);
    msg.setDestination(47873U);
    msg.setDestinationEntity(170U);
    msg.op = 251U;
    msg.actions.assign("EODBKINWWPLPROGRAGTJZQHTOZBCTXRPKWLENOHRKYONUOFOGGTESIZHFXCDZCJCFSYYQBXRJJIDGXAVXFUSYEHAPJFFUBQMDVUQLIGWLLZRMRKWMNUMYYGBEMRA");

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
    msg.setTimeStamp(0.568059868057);
    msg.setSource(6983U);
    msg.setSourceEntity(197U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(214U);
    msg.op = 46U;
    msg.actions.assign("JSJBVFOXLUQZSCSDNBBHBIJZUGMFQQYSXYGDDADPREIMIDSYVRRXWDMATJKXUVEEJZFTRUEWLGIHWMZNLOFFMGMFWQVVRZAHJG");

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
    msg.setTimeStamp(0.0115251109734);
    msg.setSource(11879U);
    msg.setSourceEntity(69U);
    msg.setDestination(13169U);
    msg.setDestinationEntity(128U);
    msg.actions.assign("NDTZORMMTAMBMCUJJLRFRZYBMYDFKYKRQPTWXCNUWUZAAPVVIFCVTYBYFCXEGWPOXJFSICSXRSIQJWTUBBQVLYYHLKURHWOSMQKMWDEXTBSFAKUB");

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
    msg.setTimeStamp(0.756677915898);
    msg.setSource(862U);
    msg.setSourceEntity(138U);
    msg.setDestination(2654U);
    msg.setDestinationEntity(160U);
    msg.actions.assign("MFZHFOHTHMBFRGNMKKUVLSQUILIXBNKWHRPFLVDRDVGQQROTOJCETECTINUGYNMACVVSDSEBABDVYKJWIZDZXXXAFIEQLFMIWDWEJIOGUETAWCXGQVWUHGHZBPNKQKWSOADNANUUZYGPBLAAIKZLOXYECEJPWKIGFSLNQRJQNMTJVBMR");

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
    msg.setTimeStamp(0.348678422474);
    msg.setSource(28166U);
    msg.setSourceEntity(127U);
    msg.setDestination(20497U);
    msg.setDestinationEntity(0U);
    msg.actions.assign("CPAPPAYMIYDQZBUYEHSTLJMHXQRJOVMEHXFKTLALJLJBLCMAQYHFRWCNSZTNTIUHLGZYUNSMZQPHORRBYCMUZQXLEYBUQESXXGIISTGBWBFTFCVDLJNILVWONHJEZFCKBSMNWKWTBSEJIENCDFAZCOWGGOYTYMXDURVCPPZQFBUVORXWQIVAKFSNODPJJNVIAKTAUQSDHRKDDAREVEDGUHJWMGPKKHYRZFXIKIGX");

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
    msg.setTimeStamp(0.522322401225);
    msg.setSource(41773U);
    msg.setSourceEntity(110U);
    msg.setDestination(45881U);
    msg.setDestinationEntity(88U);
    msg.button = 90U;
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
    msg.setTimeStamp(0.247171797079);
    msg.setSource(360U);
    msg.setSourceEntity(242U);
    msg.setDestination(7068U);
    msg.setDestinationEntity(118U);
    msg.button = 152U;
    msg.value = 11U;

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
    msg.setTimeStamp(0.74744198581);
    msg.setSource(40863U);
    msg.setSourceEntity(245U);
    msg.setDestination(47482U);
    msg.setDestinationEntity(73U);
    msg.button = 91U;
    msg.value = 47U;

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
    msg.setTimeStamp(0.191573924608);
    msg.setSource(4799U);
    msg.setSourceEntity(28U);
    msg.setDestination(14223U);
    msg.setDestinationEntity(235U);
    msg.op = 21U;
    msg.text.assign("FAHIBKLPMEZYXLFFWKOSIGCSNDOSQKTVLZSPMYFZAYVIPWVUHGEGAZDSSE");

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
    msg.setTimeStamp(0.0435866428585);
    msg.setSource(19668U);
    msg.setSourceEntity(226U);
    msg.setDestination(45217U);
    msg.setDestinationEntity(20U);
    msg.op = 0U;
    msg.text.assign("GODPXLBVRFVBHCLWQPUQKVSTOEWHARQCYTXLZLRVBMBCGCKTSAAYLUXPIFMKAZXXHCNNJUKOYPNDJAQJVDPEDXDRJYLWVHBRITLLXTHSHSABXSQWDROUJGKXUVZVJXVDKMGDFVYFNIFSEQRSJOHHWFRSMOOZRMWZMQMEIPYKP");

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
    msg.setTimeStamp(0.873209232577);
    msg.setSource(34978U);
    msg.setSourceEntity(194U);
    msg.setDestination(39507U);
    msg.setDestinationEntity(190U);
    msg.op = 123U;
    msg.text.assign("FBHBAFOXZAIWHNWSBYGHPFBUKBZSEGXDSCMMJDRQJXXVUMFPIDVJGEOOQNTNARAH");

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
    msg.setTimeStamp(0.711548344056);
    msg.setSource(53879U);
    msg.setSourceEntity(96U);
    msg.setDestination(58429U);
    msg.setDestinationEntity(185U);
    msg.op = 228U;
    msg.time_remain = 0.874392640928;
    msg.sched_time = 0.054496923677;

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
    msg.setTimeStamp(0.183951485693);
    msg.setSource(55452U);
    msg.setSourceEntity(130U);
    msg.setDestination(10404U);
    msg.setDestinationEntity(123U);
    msg.op = 249U;
    msg.time_remain = 0.106512663597;
    msg.sched_time = 0.140423593622;

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
    msg.setTimeStamp(0.0772481480098);
    msg.setSource(39803U);
    msg.setSourceEntity(135U);
    msg.setDestination(21856U);
    msg.setDestinationEntity(84U);
    msg.op = 191U;
    msg.time_remain = 0.37879045977;
    msg.sched_time = 0.460026668132;

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
    msg.setTimeStamp(0.780622197193);
    msg.setSource(15262U);
    msg.setSourceEntity(209U);
    msg.setDestination(3103U);
    msg.setDestinationEntity(212U);
    msg.name.assign("HLRPAGOQCQPVFDISDQWNACVTREVNZVTCCQRXIQPFZUMXBBJTAJZNJWARESXXADXXZOUDYFXOBFOPSFNMMSDFRNEAKUISISL");
    msg.op = 195U;
    msg.sched_time = 0.81234033511;

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
    msg.setTimeStamp(0.239339837321);
    msg.setSource(38626U);
    msg.setSourceEntity(43U);
    msg.setDestination(3719U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ZEBTXPPJRGJIJLKUIVHBCQKHIUBYJCQDZQWPMLGYRPEOHLGNMRXRIDJASD");
    msg.op = 106U;
    msg.sched_time = 0.138495112027;

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
    msg.setTimeStamp(0.962548974183);
    msg.setSource(29383U);
    msg.setSourceEntity(223U);
    msg.setDestination(30740U);
    msg.setDestinationEntity(123U);
    msg.name.assign("TMLHZIMUKBPAXEWGFXAWQFKHBYLTNIRNULISOQHFIPFHNUUWRQMMWMAVEXNTTLTJQGFPUKYMGRDHLJMDWXGGDTNCRUYNNEDCJXDGKFKXVFHZSOYYQELBMYCCUISDORPXGWHHGCOZWEPRSRPAZZJSJUVUI");
    msg.op = 39U;
    msg.sched_time = 0.383102944398;

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
    msg.setTimeStamp(0.788979115415);
    msg.setSource(13218U);
    msg.setSourceEntity(212U);
    msg.setDestination(44692U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.356371596087);
    msg.setSource(42855U);
    msg.setSourceEntity(79U);
    msg.setDestination(52118U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.0642575367596);
    msg.setSource(5640U);
    msg.setSourceEntity(22U);
    msg.setDestination(49457U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.253582386959);
    msg.setSource(21031U);
    msg.setSourceEntity(101U);
    msg.setDestination(54425U);
    msg.setDestinationEntity(252U);
    msg.name.assign("VDNOKMFTDQRIG");
    msg.state = 189U;

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
    msg.setTimeStamp(0.743599222235);
    msg.setSource(6385U);
    msg.setSourceEntity(87U);
    msg.setDestination(39482U);
    msg.setDestinationEntity(220U);
    msg.name.assign("VYBJVWKHLDAYFHCDRURUFPMIVZNTPGHNIRXPLZBNPSZNWJBYGJSRQZBORFWPIRUHECLOVEPPNDBXQYFXZSEFJFAKYQXUOQYZMOGITEWFLGSGCDWLAQANXUNGCWHKEKPJADVAWYCRFPEHOCMSKVLODCTXXMZMAVTNEIFPOHTKDKJQLCSL");
    msg.state = 71U;

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
    msg.setTimeStamp(0.38079712918);
    msg.setSource(52460U);
    msg.setSourceEntity(178U);
    msg.setDestination(1315U);
    msg.setDestinationEntity(75U);
    msg.name.assign("ODNCNQLTRCQITIHYRVIVYTOPGOSRDWGNKXNLEESMUAZDJKTXKKCWOAYWLLJZCQXRGMCYEQWMIWNSRIYBKIVABORCTGHPCQUSFAOKDQUAUWRYFGUHJSWETZZZFDGWPNNPHUGPCEKMUJQMKJWACLUXFAFDBYIXFHVYQXJQNDDKTBOFPVUTRRFSLHSSXEIOGMVZYHALLGGXFXMHWUILBZMPPOCRZNESLJJHBOYVBZBTEIMAMED");
    msg.state = 214U;

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
    msg.setTimeStamp(0.620726979496);
    msg.setSource(41101U);
    msg.setSourceEntity(211U);
    msg.setDestination(46289U);
    msg.setDestinationEntity(108U);
    msg.name.assign("YCNLZSVHVCTXJNGJSACFOFETANVJMJAXDRVXZWRWSIYYSAEGQYWYKBPGF");
    msg.value = 187U;

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
    msg.setTimeStamp(0.298806991341);
    msg.setSource(24088U);
    msg.setSourceEntity(222U);
    msg.setDestination(14484U);
    msg.setDestinationEntity(249U);
    msg.name.assign("KCRJRQZJTLRXJBJNRYTLHYNGOKBMTPRNDYGNCUHDPSMGUMKTZOQWQNAPZISTIIFLDFGTIVIJHKALMBWVFNOEORHXDOWLDAKCEVEASBKMYPRDSCUOVNJGFLDKQNALYYAKEBWYVOZUHTHDCRQCHGPHYLXLSICABFQEOEXZA");
    msg.value = 224U;

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
    msg.setTimeStamp(0.587246079796);
    msg.setSource(25452U);
    msg.setSourceEntity(105U);
    msg.setDestination(1140U);
    msg.setDestinationEntity(137U);
    msg.name.assign("ZZHPHCHDAVXG");
    msg.value = 245U;

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
    msg.setTimeStamp(0.281413143137);
    msg.setSource(56555U);
    msg.setSourceEntity(13U);
    msg.setDestination(53408U);
    msg.setDestinationEntity(237U);
    msg.name.assign("IMPZZKAHLKHTHKJDARHWXNVGIFCXLCULNFFQKQEPNXQQTJIIXKUWREAWXAPYAEJIGBWUBPRQOMALS");

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
    msg.setTimeStamp(0.667526731373);
    msg.setSource(40018U);
    msg.setSourceEntity(153U);
    msg.setDestination(24680U);
    msg.setDestinationEntity(210U);
    msg.name.assign("NICVQWDNWUKARTBUPLHVFGYKVHDRMTLJTJYIYQAMNEPEBCHBPTZFCRCDRFVROETZLFHKQJQKWXXOBSNYBDDLCPRXLUYYZDLMXN");

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
    msg.setTimeStamp(0.586181931934);
    msg.setSource(43792U);
    msg.setSourceEntity(19U);
    msg.setDestination(32538U);
    msg.setDestinationEntity(153U);
    msg.name.assign("DPNPDBTCVNNTPODWWHQXNTISORIFOIKKFTEQMNJFLNGMBETDRPQMLGRGOSWAQGXEXYZGNBIYQWIUPPJCZLWBZWCVUVGJLYYDXLBTAASSMHKMHSPOBMCLZPQ");

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
    msg.setTimeStamp(0.865788114307);
    msg.setSource(4213U);
    msg.setSourceEntity(139U);
    msg.setDestination(21725U);
    msg.setDestinationEntity(226U);
    msg.name.assign("GQAWYGHMBAQDH");
    msg.value = 218U;

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
    msg.setTimeStamp(0.48851616124);
    msg.setSource(37927U);
    msg.setSourceEntity(21U);
    msg.setDestination(1348U);
    msg.setDestinationEntity(215U);
    msg.name.assign("CXWCRPOCBPGMEQVRZWXRFUUOYNQEYTMBVBWEVTCNOWOFFMPHMMMYJCGEFBSAQTUXZPFZYECALJULIVRDBOWENQWGXMBBPNUXAJDHRBGCPSDHFPUCNDYILIAJFFAIOKYIGIBKGNRDVKUXDAUZOIIYGGKHZZKELXTNEWLPNMKCHJHQQOJXNSPKCTZAHAXETVOS");
    msg.value = 18U;

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
    msg.setTimeStamp(0.888864805872);
    msg.setSource(20834U);
    msg.setSourceEntity(248U);
    msg.setDestination(49805U);
    msg.setDestinationEntity(179U);
    msg.name.assign("AVTKBPXPWFINCWZHFFLFOEZDYDRINITDTNXMREZUFAHAGSDDHOIMRCLXVQCPGNRHLHMPWVFXDVMUKZWSGCSRHOVSOAXJEATBCASPSGFODHQKHBQTWGOUAVXPELJPKZJMIXWKILTHRRUVEUIPXDDWJQUBLKMMVRBRZOCUC");
    msg.value = 208U;

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
    msg.setTimeStamp(0.507370176799);
    msg.setSource(37233U);
    msg.setSourceEntity(15U);
    msg.setDestination(56969U);
    msg.setDestinationEntity(237U);
    msg.id = 9U;
    msg.period = 2707103526U;
    msg.duty_cycle = 2526545542U;

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
    msg.setTimeStamp(0.438755631047);
    msg.setSource(1076U);
    msg.setSourceEntity(186U);
    msg.setDestination(40267U);
    msg.setDestinationEntity(250U);
    msg.id = 55U;
    msg.period = 3336902573U;
    msg.duty_cycle = 3802004509U;

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
    msg.setTimeStamp(0.382336765071);
    msg.setSource(33778U);
    msg.setSourceEntity(236U);
    msg.setDestination(61626U);
    msg.setDestinationEntity(59U);
    msg.id = 172U;
    msg.period = 3673481726U;
    msg.duty_cycle = 3951009262U;

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
    msg.setTimeStamp(0.766931048332);
    msg.setSource(64281U);
    msg.setSourceEntity(17U);
    msg.setDestination(24164U);
    msg.setDestinationEntity(175U);
    msg.id = 188U;
    msg.period = 26606698U;
    msg.duty_cycle = 2230329238U;

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
    msg.setTimeStamp(0.677830667306);
    msg.setSource(31922U);
    msg.setSourceEntity(87U);
    msg.setDestination(36335U);
    msg.setDestinationEntity(167U);
    msg.id = 38U;
    msg.period = 3436503222U;
    msg.duty_cycle = 3002287804U;

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
    msg.setTimeStamp(0.827389009242);
    msg.setSource(53873U);
    msg.setSourceEntity(52U);
    msg.setDestination(49828U);
    msg.setDestinationEntity(163U);
    msg.id = 88U;
    msg.period = 3445859540U;
    msg.duty_cycle = 4102885252U;

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
    msg.setTimeStamp(0.783345470179);
    msg.setSource(3613U);
    msg.setSourceEntity(178U);
    msg.setDestination(26299U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.815141829022;
    msg.lon = 0.466076136786;
    msg.height = 0.738896446807;
    msg.x = 0.443344622643;
    msg.y = 0.151234040493;
    msg.z = 0.06201983074;
    msg.phi = 0.30424644822;
    msg.theta = 0.0681236428221;
    msg.psi = 0.936920909965;
    msg.u = 0.929801092147;
    msg.v = 0.592513936222;
    msg.w = 0.45560431098;
    msg.vx = 0.226655192334;
    msg.vy = 0.295905611517;
    msg.vz = 0.896659627308;
    msg.p = 0.714620065375;
    msg.q = 0.67686525912;
    msg.r = 0.686632494623;
    msg.depth = 0.228317048066;
    msg.alt = 0.52855925958;

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
    msg.setTimeStamp(0.445776816813);
    msg.setSource(43989U);
    msg.setSourceEntity(211U);
    msg.setDestination(40185U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.00988646317797;
    msg.lon = 0.325170966;
    msg.height = 0.675611365356;
    msg.x = 0.842757953025;
    msg.y = 0.16240774872;
    msg.z = 0.661330893296;
    msg.phi = 0.821732703185;
    msg.theta = 0.87875374841;
    msg.psi = 0.829017344908;
    msg.u = 0.455058364593;
    msg.v = 0.61408320116;
    msg.w = 0.305737907001;
    msg.vx = 0.861958842244;
    msg.vy = 0.504068457319;
    msg.vz = 0.629851698968;
    msg.p = 0.766376390385;
    msg.q = 0.352768591425;
    msg.r = 0.0454108639482;
    msg.depth = 0.378180267031;
    msg.alt = 0.102813335468;

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
    msg.setTimeStamp(0.81969047026);
    msg.setSource(30633U);
    msg.setSourceEntity(143U);
    msg.setDestination(18236U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.869808623609;
    msg.lon = 0.764205750061;
    msg.height = 0.5537080386;
    msg.x = 0.402947697632;
    msg.y = 0.0764171264697;
    msg.z = 0.897584482579;
    msg.phi = 0.0438350053276;
    msg.theta = 0.28228286153;
    msg.psi = 0.640709579637;
    msg.u = 0.441617219726;
    msg.v = 0.791896550608;
    msg.w = 0.463274974167;
    msg.vx = 0.96824588431;
    msg.vy = 0.162182577829;
    msg.vz = 0.0574215224657;
    msg.p = 0.0469112577985;
    msg.q = 0.679427343936;
    msg.r = 0.405605212963;
    msg.depth = 0.918569067585;
    msg.alt = 0.798042588448;

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
    msg.setTimeStamp(0.182043955589);
    msg.setSource(39462U);
    msg.setSourceEntity(159U);
    msg.setDestination(41850U);
    msg.setDestinationEntity(252U);
    msg.x = 0.435417908851;
    msg.y = 0.197206644482;
    msg.z = 0.66109823792;

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
    msg.setTimeStamp(0.42694534413);
    msg.setSource(43188U);
    msg.setSourceEntity(248U);
    msg.setDestination(56808U);
    msg.setDestinationEntity(231U);
    msg.x = 0.567119676873;
    msg.y = 0.198549008863;
    msg.z = 0.590128522369;

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
    msg.setTimeStamp(0.664729396923);
    msg.setSource(28026U);
    msg.setSourceEntity(245U);
    msg.setDestination(24191U);
    msg.setDestinationEntity(20U);
    msg.x = 0.409611978363;
    msg.y = 0.225678966427;
    msg.z = 0.895338934762;

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
    msg.setTimeStamp(0.413881456169);
    msg.setSource(28555U);
    msg.setSourceEntity(43U);
    msg.setDestination(21606U);
    msg.setDestinationEntity(78U);
    msg.value = 0.897926187004;

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
    msg.setTimeStamp(0.768864443345);
    msg.setSource(65010U);
    msg.setSourceEntity(200U);
    msg.setDestination(14052U);
    msg.setDestinationEntity(137U);
    msg.value = 0.521992318966;

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
    msg.setTimeStamp(0.634836480327);
    msg.setSource(34977U);
    msg.setSourceEntity(190U);
    msg.setDestination(39297U);
    msg.setDestinationEntity(152U);
    msg.value = 0.755587604636;

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
    msg.setTimeStamp(0.0973002369219);
    msg.setSource(6795U);
    msg.setSourceEntity(152U);
    msg.setDestination(59344U);
    msg.setDestinationEntity(216U);
    msg.value = 0.519060230987;

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
    msg.setTimeStamp(0.884000443614);
    msg.setSource(17245U);
    msg.setSourceEntity(135U);
    msg.setDestination(9136U);
    msg.setDestinationEntity(17U);
    msg.value = 0.250162829019;

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
    msg.setTimeStamp(0.785522639251);
    msg.setSource(31530U);
    msg.setSourceEntity(132U);
    msg.setDestination(27579U);
    msg.setDestinationEntity(199U);
    msg.value = 0.937984990879;

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
    msg.setTimeStamp(0.062725456999);
    msg.setSource(5983U);
    msg.setSourceEntity(117U);
    msg.setDestination(45554U);
    msg.setDestinationEntity(159U);
    msg.x = 0.513212027722;
    msg.y = 0.757956044263;
    msg.z = 0.99067575712;
    msg.phi = 0.279324351993;
    msg.theta = 0.939158599306;
    msg.psi = 0.188619157119;
    msg.p = 0.997544395068;
    msg.q = 0.24210498029;
    msg.r = 0.902556709809;
    msg.u = 0.56461287548;
    msg.v = 0.807214779919;
    msg.w = 0.399559713051;
    msg.bias_psi = 0.433024135944;
    msg.bias_r = 0.0493500196557;

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
    msg.setTimeStamp(0.879723820003);
    msg.setSource(37094U);
    msg.setSourceEntity(96U);
    msg.setDestination(7586U);
    msg.setDestinationEntity(180U);
    msg.x = 0.145405747902;
    msg.y = 0.125408525807;
    msg.z = 0.860947543482;
    msg.phi = 0.935207229578;
    msg.theta = 0.943439799486;
    msg.psi = 0.710671437318;
    msg.p = 0.282065151667;
    msg.q = 0.0303661219292;
    msg.r = 0.2069813802;
    msg.u = 0.459751373274;
    msg.v = 0.658614620414;
    msg.w = 0.937313708071;
    msg.bias_psi = 0.797115890454;
    msg.bias_r = 0.21019051616;

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
    msg.setTimeStamp(0.168832175751);
    msg.setSource(61696U);
    msg.setSourceEntity(178U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(128U);
    msg.x = 0.770248379966;
    msg.y = 0.0721212480008;
    msg.z = 0.445070873398;
    msg.phi = 0.51220713146;
    msg.theta = 0.739481454691;
    msg.psi = 0.903380737348;
    msg.p = 0.744377282447;
    msg.q = 0.621792265681;
    msg.r = 0.328605356942;
    msg.u = 0.393949840384;
    msg.v = 0.717993867825;
    msg.w = 0.398498242455;
    msg.bias_psi = 0.770889570199;
    msg.bias_r = 0.583840542918;

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
    msg.setTimeStamp(0.704204715134);
    msg.setSource(15363U);
    msg.setSourceEntity(191U);
    msg.setDestination(5078U);
    msg.setDestinationEntity(200U);
    msg.bias_psi = 0.888078899321;
    msg.bias_r = 0.949163807916;
    msg.cog = 0.492724229266;
    msg.cyaw = 0.401035447119;
    msg.gps_rej_level = 0.174073209209;
    msg.lbl_rej_level = 0.692822485745;
    msg.custom_x = 0.996102049633;
    msg.custom_y = 0.647751889684;
    msg.custom_z = 0.77336583274;

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
    msg.setTimeStamp(0.956026679475);
    msg.setSource(2535U);
    msg.setSourceEntity(93U);
    msg.setDestination(44474U);
    msg.setDestinationEntity(189U);
    msg.bias_psi = 0.490047750791;
    msg.bias_r = 0.290237999779;
    msg.cog = 0.228854248035;
    msg.cyaw = 0.92613142649;
    msg.gps_rej_level = 0.640051544652;
    msg.lbl_rej_level = 0.195928703794;
    msg.custom_x = 0.871117929239;
    msg.custom_y = 0.797316770277;
    msg.custom_z = 0.120335310041;

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
    msg.setTimeStamp(0.0486655002004);
    msg.setSource(38742U);
    msg.setSourceEntity(234U);
    msg.setDestination(33558U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.464539818018;
    msg.bias_r = 0.62147434725;
    msg.cog = 0.279296726037;
    msg.cyaw = 0.236285165246;
    msg.gps_rej_level = 0.975312191895;
    msg.lbl_rej_level = 0.688923419243;
    msg.custom_x = 0.397017492597;
    msg.custom_y = 0.0609313664797;
    msg.custom_z = 0.849578171085;

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
    msg.setTimeStamp(0.632016767955);
    msg.setSource(13458U);
    msg.setSourceEntity(185U);
    msg.setDestination(13474U);
    msg.setDestinationEntity(164U);
    msg.utc_time = 0.615443741969;
    msg.reason = 2U;

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
    msg.setTimeStamp(0.99428749345);
    msg.setSource(10485U);
    msg.setSourceEntity(61U);
    msg.setDestination(22720U);
    msg.setDestinationEntity(57U);
    msg.utc_time = 0.39639422764;
    msg.reason = 224U;

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
    msg.setTimeStamp(0.186025682438);
    msg.setSource(12187U);
    msg.setSourceEntity(115U);
    msg.setDestination(16899U);
    msg.setDestinationEntity(147U);
    msg.utc_time = 0.249614346335;
    msg.reason = 72U;

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
    msg.setTimeStamp(0.468066817473);
    msg.setSource(13540U);
    msg.setSourceEntity(165U);
    msg.setDestination(20329U);
    msg.setDestinationEntity(72U);
    msg.id = 253U;
    msg.range = 0.372035343146;
    msg.acceptance = 220U;

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
    msg.setTimeStamp(0.449803192344);
    msg.setSource(29893U);
    msg.setSourceEntity(195U);
    msg.setDestination(6251U);
    msg.setDestinationEntity(59U);
    msg.id = 98U;
    msg.range = 0.723823830474;
    msg.acceptance = 150U;

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
    msg.setTimeStamp(0.998075964267);
    msg.setSource(63297U);
    msg.setSourceEntity(247U);
    msg.setDestination(45132U);
    msg.setDestinationEntity(80U);
    msg.id = 126U;
    msg.range = 0.459288664506;
    msg.acceptance = 23U;

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
    msg.setTimeStamp(0.859852110532);
    msg.setSource(45260U);
    msg.setSourceEntity(195U);
    msg.setDestination(44998U);
    msg.setDestinationEntity(19U);
    msg.type = 136U;
    msg.reason = 15U;
    msg.value = 0.904235105001;
    msg.timestep = 0.988250492766;

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
    msg.setTimeStamp(0.07846244087);
    msg.setSource(60324U);
    msg.setSourceEntity(122U);
    msg.setDestination(29597U);
    msg.setDestinationEntity(33U);
    msg.type = 97U;
    msg.reason = 103U;
    msg.value = 0.601942588313;
    msg.timestep = 0.979314704033;

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
    msg.setTimeStamp(0.0231125309621);
    msg.setSource(5392U);
    msg.setSourceEntity(125U);
    msg.setDestination(52104U);
    msg.setDestinationEntity(239U);
    msg.type = 127U;
    msg.reason = 205U;
    msg.value = 0.206918888181;
    msg.timestep = 0.118382988746;

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
    msg.setTimeStamp(0.85868850663);
    msg.setSource(12157U);
    msg.setSourceEntity(124U);
    msg.setDestination(12738U);
    msg.setDestinationEntity(84U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NXQLDXHMZBCQKRISUMLEACCMIONBYGXYPMJAFPWXPXDIDGEVWRYOINSJJLNMMICDLVJEWBTHMQLQTVEWFYFACDHGDQCMNWQTLOASCZCGFJXXUDIZTNZWHZAYKRKFRSJTGTXNRUSACCBNOQGYAVELBYPXIJHOLPFHUKLPHUASTRANSVMYDVAKUYKJVRIEGPFDBTXWEVBV");
    tmp_msg_0.lat = 0.692104089638;
    tmp_msg_0.lon = 0.154853039015;
    tmp_msg_0.depth = 0.845132246494;
    tmp_msg_0.query_channel = 160U;
    tmp_msg_0.reply_channel = 122U;
    tmp_msg_0.transponder_delay = 55U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.84186245679;
    msg.y = 0.642627521939;
    msg.var_x = 0.425999798443;
    msg.var_y = 0.821510408174;
    msg.distance = 0.0363704918543;

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
    msg.setTimeStamp(0.104542686956);
    msg.setSource(21204U);
    msg.setSourceEntity(224U);
    msg.setDestination(50024U);
    msg.setDestinationEntity(176U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CQIWOSGBXXPKKLSADKZCFGYZPFWYWPGBWBSOEO");
    tmp_msg_0.lat = 0.907878541549;
    tmp_msg_0.lon = 0.959277766693;
    tmp_msg_0.depth = 0.985417336958;
    tmp_msg_0.query_channel = 119U;
    tmp_msg_0.reply_channel = 223U;
    tmp_msg_0.transponder_delay = 144U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.480452360105;
    msg.y = 0.135113040838;
    msg.var_x = 0.570932131386;
    msg.var_y = 0.979942277816;
    msg.distance = 0.740440337599;

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
    msg.setTimeStamp(0.435797532639);
    msg.setSource(57694U);
    msg.setSourceEntity(198U);
    msg.setDestination(2690U);
    msg.setDestinationEntity(65U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BFNZLBVRYEYMU");
    tmp_msg_0.lat = 0.564194222963;
    tmp_msg_0.lon = 0.409687318424;
    tmp_msg_0.depth = 0.474514577051;
    tmp_msg_0.query_channel = 14U;
    tmp_msg_0.reply_channel = 30U;
    tmp_msg_0.transponder_delay = 101U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.982614327771;
    msg.y = 0.776200522803;
    msg.var_x = 0.574687121341;
    msg.var_y = 0.375128229513;
    msg.distance = 0.294194722071;

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
    msg.setTimeStamp(0.409091890139);
    msg.setSource(30742U);
    msg.setSourceEntity(156U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(21U);
    msg.state = 61U;

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
    msg.setTimeStamp(0.87457799749);
    msg.setSource(52844U);
    msg.setSourceEntity(205U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(166U);
    msg.state = 29U;

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
    msg.setTimeStamp(0.450921304869);
    msg.setSource(43293U);
    msg.setSourceEntity(38U);
    msg.setDestination(62098U);
    msg.setDestinationEntity(174U);
    msg.state = 137U;

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
    msg.setTimeStamp(0.310491844617);
    msg.setSource(5068U);
    msg.setSourceEntity(254U);
    msg.setDestination(62659U);
    msg.setDestinationEntity(162U);
    msg.x = 0.990647547163;
    msg.y = 0.164753935785;
    msg.z = 0.337595776865;

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
    msg.setTimeStamp(0.780674634092);
    msg.setSource(26693U);
    msg.setSourceEntity(154U);
    msg.setDestination(12512U);
    msg.setDestinationEntity(193U);
    msg.x = 0.755417943235;
    msg.y = 0.0817361528612;
    msg.z = 0.662014547347;

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
    msg.setTimeStamp(0.760594093342);
    msg.setSource(13604U);
    msg.setSourceEntity(32U);
    msg.setDestination(54354U);
    msg.setDestinationEntity(59U);
    msg.x = 0.707345275012;
    msg.y = 0.123607497162;
    msg.z = 0.104967085361;

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
    msg.setTimeStamp(0.0883773309786);
    msg.setSource(22240U);
    msg.setSourceEntity(187U);
    msg.setDestination(4118U);
    msg.setDestinationEntity(232U);
    msg.va = 0.868073337984;
    msg.aoa = 0.509154835555;
    msg.ssa = 0.552135912113;

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
    msg.setTimeStamp(0.970893744507);
    msg.setSource(55321U);
    msg.setSourceEntity(127U);
    msg.setDestination(57104U);
    msg.setDestinationEntity(9U);
    msg.va = 0.559420056458;
    msg.aoa = 0.384567218011;
    msg.ssa = 0.0605707024113;

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
    msg.setTimeStamp(0.491250723811);
    msg.setSource(50348U);
    msg.setSourceEntity(92U);
    msg.setDestination(30132U);
    msg.setDestinationEntity(92U);
    msg.va = 0.858006540259;
    msg.aoa = 0.373687654849;
    msg.ssa = 0.997876004489;

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
    msg.setTimeStamp(0.613040200511);
    msg.setSource(4286U);
    msg.setSourceEntity(197U);
    msg.setDestination(16452U);
    msg.setDestinationEntity(209U);
    msg.value = 0.491103546069;
    msg.off = 0.981760899734;

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
    msg.setTimeStamp(0.637585092452);
    msg.setSource(38640U);
    msg.setSourceEntity(8U);
    msg.setDestination(14530U);
    msg.setDestinationEntity(172U);
    msg.value = 0.824984836451;
    msg.off = 0.901072250795;

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
    msg.setTimeStamp(0.57820579786);
    msg.setSource(39698U);
    msg.setSourceEntity(224U);
    msg.setDestination(54963U);
    msg.setDestinationEntity(19U);
    msg.value = 0.712225923438;
    msg.off = 0.478103947855;

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
    msg.setTimeStamp(0.736584440998);
    msg.setSource(28082U);
    msg.setSourceEntity(194U);
    msg.setDestination(14542U);
    msg.setDestinationEntity(25U);
    msg.value = 0.659526011819;
    msg.z_units = 214U;

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
    msg.setTimeStamp(0.419159854471);
    msg.setSource(64362U);
    msg.setSourceEntity(122U);
    msg.setDestination(63937U);
    msg.setDestinationEntity(163U);
    msg.value = 0.431280594799;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.275712550989);
    msg.setSource(55234U);
    msg.setSourceEntity(231U);
    msg.setDestination(56188U);
    msg.setDestinationEntity(71U);
    msg.value = 0.632370332829;
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
    msg.setTimeStamp(0.40171233495);
    msg.setSource(42706U);
    msg.setSourceEntity(46U);
    msg.setDestination(17009U);
    msg.setDestinationEntity(210U);
    msg.value = 0.576656292935;
    msg.speed_units = 68U;

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
    msg.setTimeStamp(0.865762699747);
    msg.setSource(62356U);
    msg.setSourceEntity(125U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(97U);
    msg.value = 0.247195041054;
    msg.speed_units = 33U;

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
    msg.setTimeStamp(0.446258894202);
    msg.setSource(20509U);
    msg.setSourceEntity(37U);
    msg.setDestination(28882U);
    msg.setDestinationEntity(164U);
    msg.value = 0.0309601394487;
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
    msg.setTimeStamp(0.691621608458);
    msg.setSource(54501U);
    msg.setSourceEntity(87U);
    msg.setDestination(3334U);
    msg.setDestinationEntity(158U);
    msg.value = 0.903964997517;

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
    msg.setTimeStamp(0.228142595367);
    msg.setSource(35217U);
    msg.setSourceEntity(114U);
    msg.setDestination(58100U);
    msg.setDestinationEntity(235U);
    msg.value = 0.0266456064868;

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
    msg.setTimeStamp(0.816179862421);
    msg.setSource(5538U);
    msg.setSourceEntity(245U);
    msg.setDestination(15819U);
    msg.setDestinationEntity(200U);
    msg.value = 0.492184861626;

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
    msg.setTimeStamp(0.505426143663);
    msg.setSource(46942U);
    msg.setSourceEntity(135U);
    msg.setDestination(39905U);
    msg.setDestinationEntity(231U);
    msg.value = 0.882826811949;

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
    msg.setTimeStamp(0.804225237415);
    msg.setSource(26527U);
    msg.setSourceEntity(204U);
    msg.setDestination(14310U);
    msg.setDestinationEntity(5U);
    msg.value = 0.103913680447;

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
    msg.setTimeStamp(0.712692184311);
    msg.setSource(56005U);
    msg.setSourceEntity(238U);
    msg.setDestination(6304U);
    msg.setDestinationEntity(87U);
    msg.value = 0.59797614809;

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
    msg.setTimeStamp(0.740553360677);
    msg.setSource(1101U);
    msg.setSourceEntity(82U);
    msg.setDestination(50703U);
    msg.setDestinationEntity(252U);
    msg.value = 0.386982606363;

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
    msg.setTimeStamp(0.240602719781);
    msg.setSource(21510U);
    msg.setSourceEntity(104U);
    msg.setDestination(23104U);
    msg.setDestinationEntity(97U);
    msg.value = 0.508442210452;

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
    msg.setTimeStamp(0.546720156361);
    msg.setSource(41563U);
    msg.setSourceEntity(241U);
    msg.setDestination(47699U);
    msg.setDestinationEntity(251U);
    msg.value = 0.00881811192718;

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
    msg.setTimeStamp(0.0157886269583);
    msg.setSource(42881U);
    msg.setSourceEntity(62U);
    msg.setDestination(48981U);
    msg.setDestinationEntity(44U);
    msg.path_ref = 3133068085U;
    msg.start_lat = 0.831387231026;
    msg.start_lon = 0.541399681371;
    msg.start_z = 0.456662477689;
    msg.start_z_units = 126U;
    msg.end_lat = 0.735798671091;
    msg.end_lon = 0.116922820105;
    msg.end_z = 0.348971279931;
    msg.end_z_units = 6U;
    msg.speed = 0.772737793614;
    msg.speed_units = 211U;
    msg.lradius = 0.194476915578;
    msg.flags = 231U;

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
    msg.setTimeStamp(0.79602675242);
    msg.setSource(1388U);
    msg.setSourceEntity(125U);
    msg.setDestination(4974U);
    msg.setDestinationEntity(56U);
    msg.path_ref = 2965310526U;
    msg.start_lat = 0.266683663909;
    msg.start_lon = 0.337351748466;
    msg.start_z = 0.934083107084;
    msg.start_z_units = 126U;
    msg.end_lat = 0.132389781894;
    msg.end_lon = 0.48058452577;
    msg.end_z = 0.701441366184;
    msg.end_z_units = 231U;
    msg.speed = 0.668314420585;
    msg.speed_units = 193U;
    msg.lradius = 0.455365371242;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.424090211272);
    msg.setSource(56108U);
    msg.setSourceEntity(213U);
    msg.setDestination(18457U);
    msg.setDestinationEntity(37U);
    msg.path_ref = 1186860511U;
    msg.start_lat = 0.875477413159;
    msg.start_lon = 0.621280954129;
    msg.start_z = 0.72520523642;
    msg.start_z_units = 152U;
    msg.end_lat = 0.602210009803;
    msg.end_lon = 0.935892732379;
    msg.end_z = 0.234418084226;
    msg.end_z_units = 165U;
    msg.speed = 0.897218900692;
    msg.speed_units = 168U;
    msg.lradius = 0.740938939652;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.554185748211);
    msg.setSource(8701U);
    msg.setSourceEntity(98U);
    msg.setDestination(29566U);
    msg.setDestinationEntity(155U);
    msg.x = 0.379017248631;
    msg.y = 0.849606004594;
    msg.z = 0.440594044611;
    msg.k = 0.139656912672;
    msg.m = 0.442336331744;
    msg.n = 0.140864037117;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.450386393969);
    msg.setSource(28550U);
    msg.setSourceEntity(85U);
    msg.setDestination(43343U);
    msg.setDestinationEntity(191U);
    msg.x = 0.499872662199;
    msg.y = 0.157057526461;
    msg.z = 0.363148736432;
    msg.k = 0.0691437281517;
    msg.m = 0.022429936767;
    msg.n = 0.930797467534;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.251216349474);
    msg.setSource(35917U);
    msg.setSourceEntity(6U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(59U);
    msg.x = 0.250770019454;
    msg.y = 0.371989008092;
    msg.z = 0.768822219244;
    msg.k = 0.427153418696;
    msg.m = 0.66578100902;
    msg.n = 0.348104719133;
    msg.flags = 67U;

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
    msg.setTimeStamp(0.117356975048);
    msg.setSource(25025U);
    msg.setSourceEntity(35U);
    msg.setDestination(50102U);
    msg.setDestinationEntity(234U);
    msg.value = 0.291869372284;

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
    msg.setTimeStamp(0.135973057116);
    msg.setSource(65422U);
    msg.setSourceEntity(12U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(62U);
    msg.value = 0.182008722726;

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
    msg.setTimeStamp(0.415883899571);
    msg.setSource(14500U);
    msg.setSourceEntity(188U);
    msg.setDestination(35857U);
    msg.setDestinationEntity(71U);
    msg.value = 0.378293234836;

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
    msg.setTimeStamp(0.413768383839);
    msg.setSource(36949U);
    msg.setSourceEntity(26U);
    msg.setDestination(25259U);
    msg.setDestinationEntity(61U);
    msg.u = 0.495872365702;
    msg.v = 0.439339415515;
    msg.w = 0.606624568081;
    msg.p = 0.529663306104;
    msg.q = 0.734063240213;
    msg.r = 0.698404076443;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.7017126569);
    msg.setSource(51452U);
    msg.setSourceEntity(37U);
    msg.setDestination(48096U);
    msg.setDestinationEntity(127U);
    msg.u = 0.353207120249;
    msg.v = 0.767065383267;
    msg.w = 0.493812676805;
    msg.p = 0.393319221629;
    msg.q = 0.0451614527895;
    msg.r = 0.373938505151;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.0216045130619);
    msg.setSource(17182U);
    msg.setSourceEntity(34U);
    msg.setDestination(61928U);
    msg.setDestinationEntity(228U);
    msg.u = 0.686064188305;
    msg.v = 0.85150443465;
    msg.w = 0.197519429247;
    msg.p = 0.0218524687757;
    msg.q = 0.942204379037;
    msg.r = 0.70457693326;
    msg.flags = 248U;

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
    msg.setTimeStamp(0.171604359385);
    msg.setSource(46581U);
    msg.setSourceEntity(38U);
    msg.setDestination(16804U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 2936449626U;
    msg.start_lat = 0.194452226316;
    msg.start_lon = 0.937873927442;
    msg.start_z = 0.76230163925;
    msg.start_z_units = 234U;
    msg.end_lat = 0.561134198398;
    msg.end_lon = 0.887362926549;
    msg.end_z = 0.859641076994;
    msg.end_z_units = 172U;
    msg.lradius = 0.250297781341;
    msg.flags = 128U;
    msg.x = 0.277493875352;
    msg.y = 0.497651068956;
    msg.z = 0.905572856699;
    msg.vx = 0.0421568661836;
    msg.vy = 0.925929300637;
    msg.vz = 0.0441903633974;
    msg.course_error = 0.974698272255;
    msg.eta = 62694U;

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
    msg.setTimeStamp(0.921365118851);
    msg.setSource(64245U);
    msg.setSourceEntity(183U);
    msg.setDestination(39290U);
    msg.setDestinationEntity(6U);
    msg.path_ref = 164840931U;
    msg.start_lat = 0.431843679764;
    msg.start_lon = 0.997398462438;
    msg.start_z = 0.191780490499;
    msg.start_z_units = 250U;
    msg.end_lat = 0.250604986819;
    msg.end_lon = 0.771670589028;
    msg.end_z = 0.710832078721;
    msg.end_z_units = 194U;
    msg.lradius = 0.742104624676;
    msg.flags = 224U;
    msg.x = 0.834171988121;
    msg.y = 0.985501789081;
    msg.z = 0.404267831962;
    msg.vx = 0.295321842085;
    msg.vy = 0.18095428341;
    msg.vz = 0.181431457325;
    msg.course_error = 0.579707518875;
    msg.eta = 52542U;

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
    msg.setTimeStamp(0.705242913819);
    msg.setSource(53258U);
    msg.setSourceEntity(163U);
    msg.setDestination(27370U);
    msg.setDestinationEntity(112U);
    msg.path_ref = 136083672U;
    msg.start_lat = 0.492717732834;
    msg.start_lon = 0.488483826321;
    msg.start_z = 0.680580294107;
    msg.start_z_units = 2U;
    msg.end_lat = 0.597457966552;
    msg.end_lon = 0.183727351194;
    msg.end_z = 0.207289278828;
    msg.end_z_units = 194U;
    msg.lradius = 0.416589961821;
    msg.flags = 17U;
    msg.x = 0.478803487948;
    msg.y = 0.977462923872;
    msg.z = 0.739078882053;
    msg.vx = 0.871443871088;
    msg.vy = 0.222287219292;
    msg.vz = 0.534078827722;
    msg.course_error = 0.540339067849;
    msg.eta = 35289U;

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
    msg.setTimeStamp(0.452328535433);
    msg.setSource(52642U);
    msg.setSourceEntity(82U);
    msg.setDestination(58221U);
    msg.setDestinationEntity(13U);
    msg.k = 0.177695151455;
    msg.m = 0.692900484522;
    msg.n = 0.0839813762941;

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
    msg.setTimeStamp(0.0470916233153);
    msg.setSource(61412U);
    msg.setSourceEntity(113U);
    msg.setDestination(64095U);
    msg.setDestinationEntity(79U);
    msg.k = 0.101280210297;
    msg.m = 0.0244854362694;
    msg.n = 0.0210401052396;

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
    msg.setTimeStamp(0.651782116779);
    msg.setSource(42867U);
    msg.setSourceEntity(210U);
    msg.setDestination(57867U);
    msg.setDestinationEntity(108U);
    msg.k = 0.533303278545;
    msg.m = 0.204150614765;
    msg.n = 0.133099866204;

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
    msg.setTimeStamp(0.671520704897);
    msg.setSource(6177U);
    msg.setSourceEntity(93U);
    msg.setDestination(60138U);
    msg.setDestinationEntity(24U);
    msg.p = 0.0173457642893;
    msg.i = 0.929136792979;
    msg.d = 0.0809126048912;
    msg.a = 0.681250832185;

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
    msg.setTimeStamp(0.253554782672);
    msg.setSource(38447U);
    msg.setSourceEntity(176U);
    msg.setDestination(46281U);
    msg.setDestinationEntity(90U);
    msg.p = 0.595546294351;
    msg.i = 0.970277197745;
    msg.d = 0.0583049388456;
    msg.a = 0.721724667969;

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
    msg.setTimeStamp(0.208093189254);
    msg.setSource(64457U);
    msg.setSourceEntity(64U);
    msg.setDestination(12361U);
    msg.setDestinationEntity(149U);
    msg.p = 0.190881715258;
    msg.i = 0.290281594532;
    msg.d = 0.925598774958;
    msg.a = 0.935414781886;

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
    msg.setTimeStamp(0.85539281409);
    msg.setSource(4677U);
    msg.setSourceEntity(30U);
    msg.setDestination(41860U);
    msg.setDestinationEntity(167U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.316888525904);
    msg.setSource(5216U);
    msg.setSourceEntity(191U);
    msg.setDestination(27042U);
    msg.setDestinationEntity(96U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.928936959389);
    msg.setSource(47060U);
    msg.setSourceEntity(92U);
    msg.setDestination(7136U);
    msg.setDestinationEntity(89U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.671052417572);
    msg.setSource(51129U);
    msg.setSourceEntity(179U);
    msg.setDestination(53235U);
    msg.setDestinationEntity(24U);
    msg.x = 0.165472495286;
    msg.y = 0.825226180648;
    msg.z = 0.543559715598;
    msg.vx = 0.323292517313;
    msg.vy = 0.627076904024;
    msg.vz = 0.0872814418604;
    msg.ax = 0.135491708809;
    msg.ay = 0.138536226014;
    msg.az = 0.58251856342;
    msg.flags = 60742U;

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
    msg.setTimeStamp(0.768365505176);
    msg.setSource(3045U);
    msg.setSourceEntity(177U);
    msg.setDestination(43860U);
    msg.setDestinationEntity(218U);
    msg.x = 0.768966962434;
    msg.y = 0.932324219468;
    msg.z = 0.252303237182;
    msg.vx = 0.379666204428;
    msg.vy = 0.28678003109;
    msg.vz = 0.100663825825;
    msg.ax = 0.964008758285;
    msg.ay = 0.0848353309119;
    msg.az = 0.776766300029;
    msg.flags = 6456U;

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
    msg.setTimeStamp(0.694834278492);
    msg.setSource(46983U);
    msg.setSourceEntity(12U);
    msg.setDestination(1562U);
    msg.setDestinationEntity(250U);
    msg.x = 0.062037275055;
    msg.y = 0.721561187325;
    msg.z = 0.461831127743;
    msg.vx = 0.632352371991;
    msg.vy = 0.548387917148;
    msg.vz = 0.757914354988;
    msg.ax = 0.574604995483;
    msg.ay = 0.916921571855;
    msg.az = 0.575025399495;
    msg.flags = 13146U;

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
    msg.setTimeStamp(0.330381340868);
    msg.setSource(24987U);
    msg.setSourceEntity(125U);
    msg.setDestination(3814U);
    msg.setDestinationEntity(143U);
    msg.value = 0.890894694814;

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
    msg.setTimeStamp(0.809094693761);
    msg.setSource(25125U);
    msg.setSourceEntity(126U);
    msg.setDestination(23616U);
    msg.setDestinationEntity(239U);
    msg.value = 0.721126846225;

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
    msg.setTimeStamp(0.0196596085288);
    msg.setSource(28973U);
    msg.setSourceEntity(210U);
    msg.setDestination(26607U);
    msg.setDestinationEntity(141U);
    msg.value = 0.588741671865;

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
    msg.setTimeStamp(0.692512358289);
    msg.setSource(31393U);
    msg.setSourceEntity(28U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(124U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 704745325U;
    tmp_msg_0.start_lat = 0.975423839854;
    tmp_msg_0.start_lon = 0.519014792471;
    tmp_msg_0.start_z = 0.403606521049;
    tmp_msg_0.start_z_units = 154U;
    tmp_msg_0.end_lat = 0.0331198936134;
    tmp_msg_0.end_lon = 0.434165879632;
    tmp_msg_0.end_z = 0.892841377112;
    tmp_msg_0.end_z_units = 174U;
    tmp_msg_0.speed = 0.762561382982;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.lradius = 0.214208217422;
    tmp_msg_0.flags = 186U;
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
    msg.setTimeStamp(0.0617285094832);
    msg.setSource(43197U);
    msg.setSourceEntity(108U);
    msg.setDestination(33097U);
    msg.setDestinationEntity(46U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1167790379U;
    tmp_msg_0.start_lat = 0.877200485031;
    tmp_msg_0.start_lon = 0.150994020384;
    tmp_msg_0.start_z = 0.308515216965;
    tmp_msg_0.start_z_units = 206U;
    tmp_msg_0.end_lat = 0.446901744773;
    tmp_msg_0.end_lon = 0.608298831016;
    tmp_msg_0.end_z = 0.4088506063;
    tmp_msg_0.end_z_units = 156U;
    tmp_msg_0.speed = 0.263326838246;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.lradius = 0.0611446113007;
    tmp_msg_0.flags = 99U;
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
    msg.setTimeStamp(0.00621194677872);
    msg.setSource(64010U);
    msg.setSourceEntity(75U);
    msg.setDestination(56663U);
    msg.setDestinationEntity(121U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3922648518U;
    tmp_msg_0.start_lat = 0.923422800233;
    tmp_msg_0.start_lon = 0.640480616875;
    tmp_msg_0.start_z = 0.752224165735;
    tmp_msg_0.start_z_units = 236U;
    tmp_msg_0.end_lat = 0.803241018305;
    tmp_msg_0.end_lon = 0.128825821348;
    tmp_msg_0.end_z = 0.351016897625;
    tmp_msg_0.end_z_units = 241U;
    tmp_msg_0.speed = 0.0345059362021;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.lradius = 0.00616068593105;
    tmp_msg_0.flags = 51U;
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
    msg.setTimeStamp(0.808340831423);
    msg.setSource(64467U);
    msg.setSourceEntity(169U);
    msg.setDestination(55428U);
    msg.setDestinationEntity(89U);
    msg.timeout = 36010U;
    msg.lat = 0.768101084726;
    msg.lon = 0.0159231014774;
    msg.z = 0.267337112657;
    msg.z_units = 225U;
    msg.speed = 0.408024199367;
    msg.speed_units = 121U;
    msg.roll = 0.37961143824;
    msg.pitch = 0.935839125008;
    msg.yaw = 0.355415178232;
    msg.custom.assign("EIXMJWGSOLARMPJGAMRSAGSNHBPUSEGIEBNAWHLIXEYSQALZPBFTKQILRBZXQZLTDQJBFWCVFLUVYBJGMUJNECDEKSSJIEHXXCDJVEAKQTNWXRGAPMYZZOPPFNNPKMCRQWHTGDNXFKMVSOCNTSZYCIIPYUDWOVTFDJJXTPFOQNEHNLAYVWCXIBDGMCIZRFUIBYTEGYDUJUVK");

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
    msg.setTimeStamp(0.622002843756);
    msg.setSource(18528U);
    msg.setSourceEntity(129U);
    msg.setDestination(34366U);
    msg.setDestinationEntity(61U);
    msg.timeout = 4793U;
    msg.lat = 0.0142608473486;
    msg.lon = 0.584620291799;
    msg.z = 0.478090349471;
    msg.z_units = 219U;
    msg.speed = 0.593616728005;
    msg.speed_units = 240U;
    msg.roll = 0.249693433503;
    msg.pitch = 0.321910108476;
    msg.yaw = 0.395097695376;
    msg.custom.assign("YTJGHHZQLRPOXEUNZLGMYZSCIMQNSRTJKIKFOCDQELGRAHVDDUNTKCYTBGFNFPEJIYIYQVXWSWBVAPOFGW");

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
    msg.setTimeStamp(0.635378155759);
    msg.setSource(24045U);
    msg.setSourceEntity(27U);
    msg.setDestination(53709U);
    msg.setDestinationEntity(84U);
    msg.timeout = 12377U;
    msg.lat = 0.997673613591;
    msg.lon = 0.0791855793481;
    msg.z = 0.450137815199;
    msg.z_units = 149U;
    msg.speed = 0.0682003297023;
    msg.speed_units = 196U;
    msg.roll = 0.862526563483;
    msg.pitch = 0.86216962034;
    msg.yaw = 0.0983040056115;
    msg.custom.assign("TOFGSHMKCPIIJQPDYXHYWJTSTNYZLGPFKSKLUJFTLSCXMNMBDSZLCBRIHTCASJKWZAYXMGGXKRBJBUAMBEWYZYDMQEZAVECAHADFD");

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
    msg.setTimeStamp(0.160461939848);
    msg.setSource(18036U);
    msg.setSourceEntity(24U);
    msg.setDestination(31606U);
    msg.setDestinationEntity(245U);
    msg.timeout = 21447U;
    msg.lat = 0.0250533213637;
    msg.lon = 0.978891769007;
    msg.z = 0.478531522988;
    msg.z_units = 100U;
    msg.speed = 0.920780730585;
    msg.speed_units = 194U;
    msg.duration = 14397U;
    msg.radius = 0.651344514469;
    msg.flags = 141U;
    msg.custom.assign("UTBDJLBHGEDLBKW");

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
    msg.setTimeStamp(0.058837426831);
    msg.setSource(21404U);
    msg.setSourceEntity(186U);
    msg.setDestination(55759U);
    msg.setDestinationEntity(218U);
    msg.timeout = 33925U;
    msg.lat = 0.850236415886;
    msg.lon = 0.0289656161589;
    msg.z = 0.564520922899;
    msg.z_units = 185U;
    msg.speed = 0.568192490613;
    msg.speed_units = 45U;
    msg.duration = 18558U;
    msg.radius = 0.732396073646;
    msg.flags = 159U;
    msg.custom.assign("AUKEIMWUSLGRMWOAWMBDEBFPRJPHNYQRIICUUCGLKESRZAVRQOQJADYXOUOUXDBHRZHHJLKMQJSYEVFIYKRKLYQGRMTMNNQJVTDFZDEKKFKMNSBT");

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
    msg.setTimeStamp(0.204153211197);
    msg.setSource(16863U);
    msg.setSourceEntity(79U);
    msg.setDestination(17297U);
    msg.setDestinationEntity(190U);
    msg.timeout = 2088U;
    msg.lat = 0.689070240872;
    msg.lon = 0.559549946675;
    msg.z = 0.736593256586;
    msg.z_units = 68U;
    msg.speed = 0.894466997342;
    msg.speed_units = 158U;
    msg.duration = 62972U;
    msg.radius = 0.203284480606;
    msg.flags = 81U;
    msg.custom.assign("HHVXJKLNOTHPVGVFBZOTUDQPOCFWZLPEWMENXVGTKMMEZWXMMXXAGFKNLKISJYOCQTQHXHPIDBNEWCZRFRDZASGXMGJFPOQTIRQXTUQSZDYQIUNWASNVTGI");

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
    msg.setTimeStamp(0.782291737929);
    msg.setSource(9797U);
    msg.setSourceEntity(143U);
    msg.setDestination(8394U);
    msg.setDestinationEntity(237U);
    msg.custom.assign("QPDLMTVARNZGAITMYUCPZALOWNAKLQWOTEAGMDQJGFWAEJIBOVUOMHHTWCQOXKIVDLGKTFXUWZKIXPKTHSRDDNUQVUJOMPKSJHYJUICVSYYPJPOGFIETFNFIQMQWADHYXEKXJTLXENQUSORDNBRZSTMZIRMHB");

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
    msg.setTimeStamp(0.0968717925481);
    msg.setSource(33698U);
    msg.setSourceEntity(241U);
    msg.setDestination(22525U);
    msg.setDestinationEntity(122U);
    msg.custom.assign("NITAPGVVVJYPJDEFZLRZIZOFWBRRSJVHUQHAJQZOREZCSQLZ");

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
    msg.setTimeStamp(0.538592515027);
    msg.setSource(52981U);
    msg.setSourceEntity(21U);
    msg.setDestination(50371U);
    msg.setDestinationEntity(38U);
    msg.custom.assign("NKYBTTQBTECIANMKVTNUORKKMUFJPNYLSEVBWHYPVBRXFGLWPIOZJVUIMZKPDELXFKMQOPZMPOHLVJGNEAFYOUEGXLXSJKJISQWIFOQURJAYVIHOUGDQJZWHKOXGPUYNSSKPTDWRLLMGZQSBVCYGDJCTMQWTZHNPHVZZOUFIWYXBSJGFRKBQIDJAFLSURFVHWWXLWACXPMZ");

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
    msg.setTimeStamp(0.580108078463);
    msg.setSource(36087U);
    msg.setSourceEntity(149U);
    msg.setDestination(35096U);
    msg.setDestinationEntity(46U);
    msg.timeout = 18244U;
    msg.lat = 0.719705559943;
    msg.lon = 0.117697002251;
    msg.z = 0.239564286027;
    msg.z_units = 238U;
    msg.duration = 60479U;
    msg.speed = 0.134668470077;
    msg.speed_units = 185U;
    msg.type = 202U;
    msg.radius = 0.155063313802;
    msg.length = 0.631895367381;
    msg.bearing = 0.801198564252;
    msg.direction = 111U;
    msg.custom.assign("ROGRHQRYBEXVKGTZJDWULZENPTFTMYEJDNEAIAHQZSTTUDJALTSGHSJCUSYKVNEMLXMQCFZQUVDXBFWGARIJOAXDQRNBGCYHUKWCVNKKJHEXANORPRKDLPWHOETGIDGXSLZLZXKDFBPISLPBIZIQHC");

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
    msg.setTimeStamp(0.0399117495324);
    msg.setSource(32512U);
    msg.setSourceEntity(20U);
    msg.setDestination(7647U);
    msg.setDestinationEntity(182U);
    msg.timeout = 20573U;
    msg.lat = 0.653461832165;
    msg.lon = 0.985090318704;
    msg.z = 0.726031033258;
    msg.z_units = 121U;
    msg.duration = 1433U;
    msg.speed = 0.384314159916;
    msg.speed_units = 37U;
    msg.type = 43U;
    msg.radius = 0.102139061062;
    msg.length = 0.813165061246;
    msg.bearing = 0.915324521839;
    msg.direction = 197U;
    msg.custom.assign("AGOJARDSUHTEXPCSIFG");

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
    msg.setTimeStamp(0.579253469325);
    msg.setSource(57714U);
    msg.setSourceEntity(179U);
    msg.setDestination(28515U);
    msg.setDestinationEntity(31U);
    msg.timeout = 58354U;
    msg.lat = 0.347377144712;
    msg.lon = 0.71890693475;
    msg.z = 0.426310214389;
    msg.z_units = 28U;
    msg.duration = 26616U;
    msg.speed = 0.80750579775;
    msg.speed_units = 228U;
    msg.type = 157U;
    msg.radius = 0.726178496518;
    msg.length = 0.392860177763;
    msg.bearing = 0.602931637182;
    msg.direction = 206U;
    msg.custom.assign("ICAPXJFJHKTGHGYNPFXEJFJRSRCXBSKRGTMGOLHYPXAMUYDTTJZIRQLOTQTVPBICDAJFMNALCDMPMUGMLNVBYKRRWUODHOXDQVZUZHTPHCZRKZSAWRVGUWIKXMWLMICWEASFQKPEZGKJQBDJOAYRBHNXPUUBZZFISWRVN");

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
    msg.setTimeStamp(0.732394696077);
    msg.setSource(30688U);
    msg.setSourceEntity(12U);
    msg.setDestination(47468U);
    msg.setDestinationEntity(239U);
    msg.duration = 9112U;
    msg.custom.assign("HLYNUTXTPAVLFLKYLZXFHQGMFBUWSID");

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
    msg.setTimeStamp(0.591492695394);
    msg.setSource(30938U);
    msg.setSourceEntity(214U);
    msg.setDestination(34883U);
    msg.setDestinationEntity(165U);
    msg.duration = 41721U;
    msg.custom.assign("TZVXMRKBUQSLWDUMSFEISCKJMKMWINYHZUALHK");

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
    msg.setTimeStamp(0.37738342462);
    msg.setSource(46147U);
    msg.setSourceEntity(123U);
    msg.setDestination(63304U);
    msg.setDestinationEntity(82U);
    msg.duration = 39423U;
    msg.custom.assign("EKZQUVEMWCWFLIOGCNTHDSKMQGOGUFBPXOBEFBHOVYPPKODCFXSLVTARNUJYSEUBSKAGVBYXMKHTOAT");

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
    msg.setTimeStamp(0.0891970616092);
    msg.setSource(22202U);
    msg.setSourceEntity(228U);
    msg.setDestination(43621U);
    msg.setDestinationEntity(109U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.283141257798;
    tmp_msg_0.z_units = 131U;
    msg.control.set(tmp_msg_0);
    msg.duration = 6573U;
    msg.custom.assign("NNEGVEOYCCZDHKFBDFGHEQAFLOGRUEHMOAUQKXJZBNPGDUSCKSRUIAPJOYPWTDQ");

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
    msg.setTimeStamp(0.406752548464);
    msg.setSource(20425U);
    msg.setSourceEntity(238U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(242U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.477825234534;
    tmp_msg_0.z_units = 232U;
    msg.control.set(tmp_msg_0);
    msg.duration = 30872U;
    msg.custom.assign("DXMPJOQNMFKQJYKCABVFVTCREFIIQMTGEVSPRFONUUQEFDWQPRSRMBNATXONHETFLOELKEBUJVTHVHRFOOJNIQCXGXZYGHDXNKHUALV");

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
    msg.setTimeStamp(0.410049743613);
    msg.setSource(11038U);
    msg.setSourceEntity(101U);
    msg.setDestination(59489U);
    msg.setDestinationEntity(183U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.387285269896;
    msg.control.set(tmp_msg_0);
    msg.duration = 19687U;
    msg.custom.assign("MGZTVAUUQUGPNRITNQRJPSWWKIGAWMFRCYHETDBOZVPPJBSHWGDQXAUHZYNHQVXWSHHVFIRSCTZZDOEZNKQJYMOOMPKKSXYJOAPQIYZBKFGMOXXIVJNOEPDVBDDJVXWLCTVKGXCNLRNVCRHCSGYLQLASUPWST");

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
    msg.setTimeStamp(0.854209532505);
    msg.setSource(9343U);
    msg.setSourceEntity(215U);
    msg.setDestination(22416U);
    msg.setDestinationEntity(88U);
    msg.timeout = 56010U;
    msg.lat = 0.155519125835;
    msg.lon = 0.9115615303;
    msg.z = 0.367507993558;
    msg.z_units = 69U;
    msg.speed = 0.964219505944;
    msg.speed_units = 238U;
    msg.bearing = 0.294922983756;
    msg.cross_angle = 0.830893891634;
    msg.width = 0.918223056876;
    msg.length = 0.757932761187;
    msg.hstep = 0.625204164352;
    msg.coff = 38U;
    msg.alternation = 133U;
    msg.flags = 42U;
    msg.custom.assign("MGRMFCBEGTSNNIOOEORLHVTDKPSMBSOKLBYBLDLBBXKWGDYJPLAWDVXOAIQDWJHMUUZFZUKGXTCIAAHTYOLKTECEIVZLGVXSM");

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
    msg.setTimeStamp(0.937463983869);
    msg.setSource(46344U);
    msg.setSourceEntity(179U);
    msg.setDestination(50439U);
    msg.setDestinationEntity(5U);
    msg.timeout = 39566U;
    msg.lat = 0.79393180942;
    msg.lon = 0.718767124743;
    msg.z = 0.0213466743205;
    msg.z_units = 131U;
    msg.speed = 0.651075566259;
    msg.speed_units = 78U;
    msg.bearing = 0.388570160638;
    msg.cross_angle = 0.70699244972;
    msg.width = 0.510400675676;
    msg.length = 0.305205393605;
    msg.hstep = 0.878907066464;
    msg.coff = 187U;
    msg.alternation = 214U;
    msg.flags = 220U;
    msg.custom.assign("BMSUKRENMSNLIEDNTZPDAODNPEJTYVVXGUZLCTFKRQEZAXMJCOUHVQPFFSCOURPILYGWEIDLVPKYWOLMQQRCSFUIFNSSQTAQWVPFYXULXXWMSGIBOWRJHSZORBBBEHK");

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
    msg.setTimeStamp(0.402821039374);
    msg.setSource(16608U);
    msg.setSourceEntity(12U);
    msg.setDestination(49818U);
    msg.setDestinationEntity(208U);
    msg.timeout = 46152U;
    msg.lat = 0.319142674095;
    msg.lon = 0.640391722667;
    msg.z = 0.367111810188;
    msg.z_units = 249U;
    msg.speed = 0.4455317333;
    msg.speed_units = 156U;
    msg.bearing = 0.856778301002;
    msg.cross_angle = 0.558910440515;
    msg.width = 0.158868637225;
    msg.length = 0.475066789817;
    msg.hstep = 0.65245218676;
    msg.coff = 197U;
    msg.alternation = 50U;
    msg.flags = 118U;
    msg.custom.assign("PFUCBCLPERDOXTNPKSTSYKSLNIZSULCBRDAXBJXNHGQHAQJFDBVVHREZHHLOGWDQBIYHSUYTMWDNXJJWXZPBACSSFWQVVEAFOFQUG");

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
    msg.setTimeStamp(0.80017934648);
    msg.setSource(6660U);
    msg.setSourceEntity(6U);
    msg.setDestination(41882U);
    msg.setDestinationEntity(0U);
    msg.timeout = 430U;
    msg.lat = 0.187286410244;
    msg.lon = 0.874218801253;
    msg.z = 0.566220489186;
    msg.z_units = 127U;
    msg.speed = 0.119163259086;
    msg.speed_units = 184U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.565005567039;
    tmp_msg_0.y = 0.733128193348;
    tmp_msg_0.z = 0.640531964733;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XGQTIBKVNIAHJDATMMRIXESTPOWWGBWDKCBDZVHRGTGABRJTNOFKBATUBZXEWEDWQNNKIDJALXHVERQYOGBYVPENFYLPDAOWISFWCJTOKULOYRLZASSSKUKDVGUKLJQUAVJOPTEYWHSXZHFBMCFD");

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
    msg.setTimeStamp(0.0201264185842);
    msg.setSource(20236U);
    msg.setSourceEntity(198U);
    msg.setDestination(64331U);
    msg.setDestinationEntity(112U);
    msg.timeout = 25448U;
    msg.lat = 0.64354468432;
    msg.lon = 0.328396512835;
    msg.z = 0.666119481267;
    msg.z_units = 83U;
    msg.speed = 0.523318774917;
    msg.speed_units = 242U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.641392261103;
    tmp_msg_0.y = 0.268324428316;
    tmp_msg_0.z = 0.211575496813;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QZDXVEIPTJFPBCXEUASGMWCKRZIZTRVTDAMJNUQRJJUMDODZEHAFGJKJKBBNAQGHLPMOIRTRCEAIQGXIBCLUOKGOIVBQSLKHUFECXPZSOAKXESRHDYCNQWSMFYCVYEKJRYDRPIFXSENSAODYTWWSHFCRUBGJQQXLGLZQOIRNAUWYELKXGVZCNSFHGPTXMUVIAVSMLNVTVKJMKMYFZBPOBVDWFBWPZAUTJCQMYELYLNTIFODHLWTNGBNPDYPH");

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
    msg.setTimeStamp(0.98365756186);
    msg.setSource(61281U);
    msg.setSourceEntity(119U);
    msg.setDestination(8382U);
    msg.setDestinationEntity(227U);
    msg.timeout = 2536U;
    msg.lat = 0.550542331057;
    msg.lon = 0.427118419388;
    msg.z = 0.420904730471;
    msg.z_units = 43U;
    msg.speed = 0.946465312457;
    msg.speed_units = 201U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.173884397243;
    tmp_msg_0.y = 0.888351979123;
    tmp_msg_0.z = 0.782669708605;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RGDYVRQVXESKAAFZDDWEUNDZXGQLMICOTRSABDPYEQNOIWNJCYBFACDGGMIZZSTZEUXQGCKRUJLBLPPBRBLSUOLHRGNAIETVMTJNIWQILKBPMRYQPWHLHJYHLFMBNQONZXJKSOUBEHWWPJAEODVNXXWHGKVBYEVTYFHZSUPUSAXXHACKQFTFKCYIW");

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
    msg.setTimeStamp(0.0457604913101);
    msg.setSource(61516U);
    msg.setSourceEntity(40U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(103U);
    msg.x = 0.87001532181;
    msg.y = 0.0788460142326;
    msg.z = 0.0872267191974;

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
    msg.setTimeStamp(0.293029577079);
    msg.setSource(51794U);
    msg.setSourceEntity(40U);
    msg.setDestination(35069U);
    msg.setDestinationEntity(24U);
    msg.x = 0.850849480899;
    msg.y = 0.938038488195;
    msg.z = 0.0519089740871;

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
    msg.setTimeStamp(0.20196437776);
    msg.setSource(5904U);
    msg.setSourceEntity(208U);
    msg.setDestination(25879U);
    msg.setDestinationEntity(236U);
    msg.x = 0.463062824469;
    msg.y = 0.247850467405;
    msg.z = 0.420825479081;

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
    msg.setTimeStamp(0.237553232417);
    msg.setSource(12254U);
    msg.setSourceEntity(90U);
    msg.setDestination(24446U);
    msg.setDestinationEntity(195U);
    msg.timeout = 30744U;
    msg.lat = 0.442751738914;
    msg.lon = 0.35228225301;
    msg.z = 0.885230376531;
    msg.z_units = 96U;
    msg.amplitude = 0.140466973977;
    msg.pitch = 0.193926682232;
    msg.speed = 0.0474973182366;
    msg.speed_units = 129U;
    msg.custom.assign("GEOWLOICQFEECPGAHHFJHYSXYCMFOVZPYNXJBAEURUUKJQKGYTLFPBPWKT");

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
    msg.setTimeStamp(0.251323459118);
    msg.setSource(24743U);
    msg.setSourceEntity(222U);
    msg.setDestination(20126U);
    msg.setDestinationEntity(198U);
    msg.timeout = 14409U;
    msg.lat = 0.0771837216397;
    msg.lon = 0.392906577999;
    msg.z = 0.703078630187;
    msg.z_units = 165U;
    msg.amplitude = 0.0249943815817;
    msg.pitch = 0.475097328028;
    msg.speed = 0.355477116914;
    msg.speed_units = 52U;
    msg.custom.assign("RKYMDSLBCZWIPQLQRKFIAZGJKWYIZOBETNYPNCUGOFQMGPTXPYZQFVJHMGKTUMUFSTCVPRKUYPUAVKAJTXLWQFCQLFHLLIGDBSHPFYNXSHLGRVDAZWMJEHHBCTGEOICWPTISNYKRLMTDKJRNBQNBXJ");

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
    msg.setTimeStamp(0.606608738279);
    msg.setSource(35790U);
    msg.setSourceEntity(245U);
    msg.setDestination(20534U);
    msg.setDestinationEntity(160U);
    msg.timeout = 6133U;
    msg.lat = 0.624600745157;
    msg.lon = 0.503640148716;
    msg.z = 0.110315747044;
    msg.z_units = 243U;
    msg.amplitude = 0.967774004142;
    msg.pitch = 0.282706120467;
    msg.speed = 0.816202652418;
    msg.speed_units = 155U;
    msg.custom.assign("BXTLOKNMFCQMWBSGEDLRNLQRTPZDCYXHQOTJHHUSBVUKPVJLHQYNHIBGONXCEAOAJMJPZRKNKCWCHUFERHSNXRAXRCLDFIKSLXWRQQYGYODDADMKFDPKWGUVUZBNZGWCERSVQANDFMZIHIEVSUFVZPGIIVUWFUAYBTUGLPGPIEVOVJSUTQDLWXZBXTMVCKEAQWTEMEJYFEXGWZKJJBMCYSOHBAQFALMDTZGSBPR");

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
    msg.setTimeStamp(0.882708411307);
    msg.setSource(6354U);
    msg.setSourceEntity(134U);
    msg.setDestination(42039U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.274625167891);
    msg.setSource(27964U);
    msg.setSourceEntity(228U);
    msg.setDestination(22153U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.159517403921);
    msg.setSource(41134U);
    msg.setSourceEntity(238U);
    msg.setDestination(39629U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.592809007265);
    msg.setSource(1253U);
    msg.setSourceEntity(202U);
    msg.setDestination(45477U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.517756573312;
    msg.lon = 0.595841546731;
    msg.z = 0.795026725106;
    msg.z_units = 21U;
    msg.radius = 0.136804432114;
    msg.duration = 1355U;
    msg.speed = 0.205203628804;
    msg.speed_units = 232U;
    msg.popup_period = 48252U;
    msg.popup_duration = 38820U;
    msg.flags = 230U;
    msg.custom.assign("TYSBSMZEHAWZMRSVQUARZOXHZDELDRXPYJWXNZSLVUZKURVV");

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
    msg.setTimeStamp(0.579344543385);
    msg.setSource(58269U);
    msg.setSourceEntity(103U);
    msg.setDestination(15947U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.735306121309;
    msg.lon = 0.170427591439;
    msg.z = 0.699873324391;
    msg.z_units = 32U;
    msg.radius = 0.215979176144;
    msg.duration = 26233U;
    msg.speed = 0.643031013414;
    msg.speed_units = 124U;
    msg.popup_period = 50960U;
    msg.popup_duration = 19156U;
    msg.flags = 251U;
    msg.custom.assign("BWITQLCDKIFYOSUMNSQUMZVGNLIGIKHQEPWZRWKADDRZBEBJERJTHFSKZCKYCPBMGQTOUURLMLHIZQWTDYAYSJFOALDPBYRCVRWSCYNABUUXTKWOPSVZASKJPHYNKMNVK");

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
    msg.setTimeStamp(0.885539267807);
    msg.setSource(7632U);
    msg.setSourceEntity(244U);
    msg.setDestination(39104U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.359013020795;
    msg.lon = 0.371985272149;
    msg.z = 0.907383392019;
    msg.z_units = 104U;
    msg.radius = 0.123214446102;
    msg.duration = 53202U;
    msg.speed = 0.106905453014;
    msg.speed_units = 138U;
    msg.popup_period = 9254U;
    msg.popup_duration = 28640U;
    msg.flags = 21U;
    msg.custom.assign("OCKESEOWHESFZGTKDRSAAYFUBXZWLI");

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
    msg.setTimeStamp(0.205912626064);
    msg.setSource(35871U);
    msg.setSourceEntity(73U);
    msg.setDestination(31085U);
    msg.setDestinationEntity(133U);
    msg.timeout = 3967U;
    msg.flags = 33U;
    msg.lat = 0.896015489453;
    msg.lon = 0.895191703652;
    msg.start_z = 0.111754320046;
    msg.start_z_units = 63U;
    msg.end_z = 0.833746029736;
    msg.end_z_units = 29U;
    msg.radius = 0.748161348388;
    msg.speed = 0.17010025203;
    msg.speed_units = 43U;
    msg.custom.assign("USJWRLVXNLBMGVAJKUZGPQMVEEXLXZOTXOACISGSIU");

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
    msg.setTimeStamp(0.404806631846);
    msg.setSource(25398U);
    msg.setSourceEntity(136U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(71U);
    msg.timeout = 41269U;
    msg.flags = 118U;
    msg.lat = 0.48069211175;
    msg.lon = 0.81304636745;
    msg.start_z = 0.647111138223;
    msg.start_z_units = 11U;
    msg.end_z = 0.229069915639;
    msg.end_z_units = 232U;
    msg.radius = 0.646828706602;
    msg.speed = 0.131752734711;
    msg.speed_units = 177U;
    msg.custom.assign("DHMONLHWPZHMCZCWYBUCYSIMWCMGRUAUKIHXSZYUKBEZNLQRWKYTIMUYEJVJRLSDYFWABAKTQIJCYODSQJEGUEUQBCEQYQGPMRZGDBOGFBG");

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
    msg.setTimeStamp(0.677509850568);
    msg.setSource(59U);
    msg.setSourceEntity(46U);
    msg.setDestination(59637U);
    msg.setDestinationEntity(207U);
    msg.timeout = 11970U;
    msg.flags = 178U;
    msg.lat = 0.644568000225;
    msg.lon = 0.658605415194;
    msg.start_z = 0.0616569612687;
    msg.start_z_units = 213U;
    msg.end_z = 0.853600888165;
    msg.end_z_units = 15U;
    msg.radius = 0.497725217438;
    msg.speed = 0.985624326531;
    msg.speed_units = 153U;
    msg.custom.assign("IIECLOHPGSLKSGNGXZACKAOEDPFUQCJXSHEGCHCCTCZIYSIBNTHLRINFVTVVOFUQBGEGJEYVKPNBMAZRVWSKJUSSJVYXGPQYWAXSHTLBZRHAFUNITHAXCROECMGVLQWQOFHPNFOXKPBESTMWVMKYRUEEBGABLGVEJZDKRMDZYPJQU");

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
    msg.setTimeStamp(0.740959864786);
    msg.setSource(26307U);
    msg.setSourceEntity(48U);
    msg.setDestination(6950U);
    msg.setDestinationEntity(37U);
    msg.timeout = 60047U;
    msg.lat = 0.125817452009;
    msg.lon = 0.485964416087;
    msg.z = 0.123876916614;
    msg.z_units = 252U;
    msg.speed = 0.365242209944;
    msg.speed_units = 36U;
    msg.custom.assign("DEHKILBMTGVWYVWCBCRERKACZOVDTYWICTCUXNRVDNJEZPMWDVTLOGORHBJMEDYQMJUGQDSJBGLVFDFSYFKTGJZPMPZSFI");

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
    msg.setTimeStamp(0.195941041967);
    msg.setSource(17828U);
    msg.setSourceEntity(228U);
    msg.setDestination(18864U);
    msg.setDestinationEntity(45U);
    msg.timeout = 27935U;
    msg.lat = 0.467572371298;
    msg.lon = 0.833724809994;
    msg.z = 0.56184170401;
    msg.z_units = 90U;
    msg.speed = 0.644155215655;
    msg.speed_units = 93U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.127408085781;
    tmp_msg_0.y = 0.735275248533;
    tmp_msg_0.z = 0.311094820508;
    tmp_msg_0.t = 0.873073315075;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TNFKEJJFYPOZUANKVWTBEDYAKCFCUGKQBRSLQZEIUVHWYRSKFUPZQMSSHEAQLRJOLEB");

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
    msg.setTimeStamp(0.870983883414);
    msg.setSource(31883U);
    msg.setSourceEntity(47U);
    msg.setDestination(31436U);
    msg.setDestinationEntity(91U);
    msg.timeout = 45498U;
    msg.lat = 0.548722090475;
    msg.lon = 0.516786699766;
    msg.z = 0.699601856795;
    msg.z_units = 26U;
    msg.speed = 0.613149692864;
    msg.speed_units = 4U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.982353431527;
    tmp_msg_0.y = 0.730000654847;
    tmp_msg_0.z = 0.714619564765;
    tmp_msg_0.t = 0.929785908686;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IKIOBVUDTZDFPFISFRRNORDHCXWZVCANXIXKLFHQQWATO");

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
    msg.setTimeStamp(0.736990156463);
    msg.setSource(34426U);
    msg.setSourceEntity(14U);
    msg.setDestination(23466U);
    msg.setDestinationEntity(35U);
    msg.x = 0.932948274009;
    msg.y = 0.0801844183612;
    msg.z = 0.566214318628;
    msg.t = 0.541752125957;

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
    msg.setTimeStamp(0.869926453168);
    msg.setSource(28625U);
    msg.setSourceEntity(177U);
    msg.setDestination(59209U);
    msg.setDestinationEntity(100U);
    msg.x = 0.414153759723;
    msg.y = 0.705290516544;
    msg.z = 0.891786487905;
    msg.t = 0.741325865979;

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
    msg.setTimeStamp(0.218551343156);
    msg.setSource(9995U);
    msg.setSourceEntity(181U);
    msg.setDestination(35U);
    msg.setDestinationEntity(182U);
    msg.x = 0.367323285073;
    msg.y = 0.211567587787;
    msg.z = 0.857422009971;
    msg.t = 0.39874334687;

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
    msg.setTimeStamp(0.701623189996);
    msg.setSource(36346U);
    msg.setSourceEntity(126U);
    msg.setDestination(11360U);
    msg.setDestinationEntity(94U);
    msg.timeout = 42661U;
    msg.name.assign("SGHHIMCVWRFWUBUDOICWZXQERGKSBPGHGGSEFGIYSIZWPHFIKTSSCDIDREUMOEYKZNHXLMOQPJMTBPFNRNDIAHIUPCCNFLQYNMNYWLVFUVPJSMZTKZHZWPTILFVYAAJYSLDWOUPATVQTZVTPCQDRQDKNZLNVYEJUWBXUGFGLKAEEGATUAOOTOCFJR");
    msg.custom.assign("LZSPXVDGNMUHQNLFIRKUSTZUDRFQKGVRUXRWIWLEWCSSXYPMMNHPTBDCZDPZCMFKKOUJFMUVOXKYQLELKATPGHBIWNYSOLRBJTNJDYMRPAXVMAXBEQW");

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
    msg.setTimeStamp(0.329308294708);
    msg.setSource(50843U);
    msg.setSourceEntity(67U);
    msg.setDestination(37634U);
    msg.setDestinationEntity(36U);
    msg.timeout = 24245U;
    msg.name.assign("KWRJXGNCUYWNLTLMJYLEPEQAZATEFIXIGIFKDGGVTEVNLHYDTOUFWLBTSGJYLVNDGHNATMSDUDLYBWOIMJPHKMBPIGEXZIQMHMADGCDREJRZSSRVBCJJDSHRWOMISNNCKZUAOYURXHWTWZCMFYKOZENTVQRAOVLLRSNQSFYWUDZHOQVPXPPJSQPV");
    msg.custom.assign("KUHCBLKWQLVKONKIMOWRQFJPUPPSGPHLLUQNALBGJJNTUMMTPCJZSXTFZEGVIQSIXYAXVUDRZYORHPEXMXTPOONYJENACOQMAQXMOHFLNIKAWGYHYQSKICJFWEETJKBQRBYYWQOGDUVBGSKPXIVHIZFZPJFVZSVMBZIMSXYZETERFDCQDPJAKGREDDWCIENAEUBLRWTHVWFHWTWDHMCVCLDBZTORNUOX");

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
    msg.setTimeStamp(0.0731804182967);
    msg.setSource(48553U);
    msg.setSourceEntity(38U);
    msg.setDestination(41595U);
    msg.setDestinationEntity(125U);
    msg.timeout = 21595U;
    msg.name.assign("OFKMJNWYVRPJSLDUSXOMSPKRLPNYIKUMBQJHYHZICXNBPDKMDEOFUQQXDMROQRGIQEASRONEFPARXHCKMBQHPVKBDDTCDYZITVHXHDNYQMEMVUAFSWFAKL");
    msg.custom.assign("TYQZKSKPFKMKZCQHMNJGLHYIXEWSQDBKBOREIOTTQDUSDXDOJAPCADJRZKPTGXDZYANEYYOQMHUFXPHLCEHFIRUVFJWILFCJFSZNKTNHPGRVLJDOZEQEYXXXVQQFUZBGUBRIINRVCZIRKQCZTMNPWWUKHADLGBYVMYAAOI");

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
    msg.setTimeStamp(0.477967070175);
    msg.setSource(26229U);
    msg.setSourceEntity(152U);
    msg.setDestination(776U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.267934421309;
    msg.lon = 0.44112053;
    msg.z = 0.507953340662;
    msg.z_units = 58U;
    msg.speed = 0.618801564939;
    msg.speed_units = 254U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.435954946614;
    tmp_msg_0.y = 0.361985087105;
    tmp_msg_0.z = 0.668324009313;
    tmp_msg_0.t = 0.620820358829;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.851391073803;
    msg.custom.assign("CVMANZPODLHWJYTLSHQOUQRWYUOFZVUENSGIQSYBMVGTDXCIZEXHXPSAWENRXAJGZLANQPJPOHFSRGZYZEXFMMTUVOESMGHKJVTXTMUJHGFXSXLAKRSEMJKFZVQGQFZLKIIWIKEABGLCNBCIDUCQKRQEAPRNWHWIHCPLRXJBRHHCYNFOIVITGFTEEXWDAYVUVMGZCJODRDPABTNJBDUWYBYWBPFKYQQMTDYDSAICUPSDFBNKCVJMZL");

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
    msg.setTimeStamp(0.184202089065);
    msg.setSource(38768U);
    msg.setSourceEntity(96U);
    msg.setDestination(57388U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.797060980205;
    msg.lon = 0.689624478151;
    msg.z = 0.41136121769;
    msg.z_units = 59U;
    msg.speed = 0.242484194869;
    msg.speed_units = 149U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.228963548195;
    tmp_msg_0.y = 0.0236839708374;
    tmp_msg_0.z = 0.496105760772;
    tmp_msg_0.t = 0.935282602843;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 2865U;
    tmp_msg_1.off_x = 0.2705552514;
    tmp_msg_1.off_y = 0.712294100993;
    tmp_msg_1.off_z = 0.793850682441;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.111431277655;
    msg.custom.assign("DTEUHIKPKRMNAYJUPJUENOXPRNINDEIEVDXAPJKGQUCLFQFPOQGYATLIVNDGEFAZASMSRWCOYNORQDVGPZIRBJGKIMHWWXRTQNJMFXNHPDKCSWWLFQKUMEJYBVUDSTHTRVIAOPITCSWLZCPNKBJHEWRBFVSGXDBZWEQCCBTAKFGYYHXGVVFVWPLSBMDSOYUZYZXLCLLUIJOSTOXKVZQWLMXAOEORCHQYGACTG");

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
    msg.setTimeStamp(0.139058062193);
    msg.setSource(56618U);
    msg.setSourceEntity(242U);
    msg.setDestination(53540U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.319077839115;
    msg.lon = 0.463904846735;
    msg.z = 0.08341829984;
    msg.z_units = 92U;
    msg.speed = 0.484880978885;
    msg.speed_units = 212U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2879U;
    tmp_msg_0.off_x = 0.422511317603;
    tmp_msg_0.off_y = 0.844197140994;
    tmp_msg_0.off_z = 0.39390800655;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.87920627205;
    msg.custom.assign("FXICWIAXINTQUULQRKHLDAFOMVABQGWOVVSU");

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
    msg.setTimeStamp(0.688190643533);
    msg.setSource(47555U);
    msg.setSourceEntity(40U);
    msg.setDestination(61623U);
    msg.setDestinationEntity(202U);
    msg.vid = 22705U;
    msg.off_x = 0.566842232999;
    msg.off_y = 0.257646623801;
    msg.off_z = 0.18450472917;

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
    msg.setTimeStamp(0.790210419453);
    msg.setSource(49968U);
    msg.setSourceEntity(56U);
    msg.setDestination(30239U);
    msg.setDestinationEntity(175U);
    msg.vid = 14895U;
    msg.off_x = 0.0904465477651;
    msg.off_y = 0.86343909022;
    msg.off_z = 0.459777063942;

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
    msg.setTimeStamp(0.599554781945);
    msg.setSource(32179U);
    msg.setSourceEntity(252U);
    msg.setDestination(58635U);
    msg.setDestinationEntity(241U);
    msg.vid = 10896U;
    msg.off_x = 0.393367789436;
    msg.off_y = 0.463278346795;
    msg.off_z = 0.913521852493;

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
    msg.setTimeStamp(0.186266588679);
    msg.setSource(20998U);
    msg.setSourceEntity(182U);
    msg.setDestination(40489U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.268026623897);
    msg.setSource(49866U);
    msg.setSourceEntity(59U);
    msg.setDestination(47435U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.737316420033);
    msg.setSource(11100U);
    msg.setSourceEntity(164U);
    msg.setDestination(14602U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.999839683235);
    msg.setSource(32972U);
    msg.setSourceEntity(252U);
    msg.setDestination(23667U);
    msg.setDestinationEntity(146U);
    msg.mid = 4229U;

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
    msg.setTimeStamp(0.881020852048);
    msg.setSource(57296U);
    msg.setSourceEntity(141U);
    msg.setDestination(63310U);
    msg.setDestinationEntity(253U);
    msg.mid = 25419U;

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
    msg.setTimeStamp(0.322278819408);
    msg.setSource(333U);
    msg.setSourceEntity(22U);
    msg.setDestination(5758U);
    msg.setDestinationEntity(42U);
    msg.mid = 807U;

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
    msg.setTimeStamp(0.607017275471);
    msg.setSource(50691U);
    msg.setSourceEntity(119U);
    msg.setDestination(50329U);
    msg.setDestinationEntity(126U);
    msg.state = 149U;
    msg.eta = 61990U;
    msg.info.assign("TPSGCONJIOJDYIRYZECAWOQKWGZEGEVFUQVYUPFNVIKIOLQZFTKAPKHRXWOETWKEJUFUYTLTMAWLRBUJPVGQIFBVNWHFKPGXEIKANYTIWUHGUYXLZOCBUXNBVRRFCVQSEHBCGDHAABWHLHKXMG");

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
    msg.setTimeStamp(0.830859518089);
    msg.setSource(14005U);
    msg.setSourceEntity(118U);
    msg.setDestination(54074U);
    msg.setDestinationEntity(178U);
    msg.state = 167U;
    msg.eta = 38093U;
    msg.info.assign("NLUFDETQOVASZVBGGPKWCSJRTDULEUPAMUCGLOMRGZDGLCTQHZDRTXJISZRKJSPDPIAYHXJAFDAOWDYYHVISFQKAZVX");

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
    msg.setTimeStamp(0.962903835522);
    msg.setSource(8358U);
    msg.setSourceEntity(42U);
    msg.setDestination(33884U);
    msg.setDestinationEntity(99U);
    msg.state = 114U;
    msg.eta = 10487U;
    msg.info.assign("ZSFNARZMYHELKODYCMTZMBIJHPGUUYQDGZSTNAXUZAIXKNDIFDKHAQXLTQQIPQIQROWFXBNSJECIYVNOADBCRFQPJNWEPFXRXUMTSCNNIRGZHHEFROYRMWDQKOKDVEFPUGBFIIUVCJVVSFWLASQFKLMKJELHVZMKSLTXGVXLRUYCOYUGIYXWBHMTWBACPTACJTNXZJZPEJWWPAPW");

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
    msg.setTimeStamp(0.814605348816);
    msg.setSource(52917U);
    msg.setSourceEntity(157U);
    msg.setDestination(55733U);
    msg.setDestinationEntity(53U);
    msg.system = 47351U;
    msg.duration = 53867U;
    msg.speed = 0.550407793445;
    msg.speed_units = 68U;
    msg.x = 0.833459404118;
    msg.y = 0.909764845912;
    msg.z = 0.413897474282;
    msg.z_units = 176U;

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
    msg.setTimeStamp(0.0792076332304);
    msg.setSource(32785U);
    msg.setSourceEntity(213U);
    msg.setDestination(39971U);
    msg.setDestinationEntity(84U);
    msg.system = 8582U;
    msg.duration = 10295U;
    msg.speed = 0.539683395679;
    msg.speed_units = 131U;
    msg.x = 0.822850076267;
    msg.y = 0.0118901678673;
    msg.z = 0.698954199086;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.800324150594);
    msg.setSource(24569U);
    msg.setSourceEntity(162U);
    msg.setDestination(39122U);
    msg.setDestinationEntity(79U);
    msg.system = 5326U;
    msg.duration = 14152U;
    msg.speed = 0.410761327241;
    msg.speed_units = 206U;
    msg.x = 0.927569497885;
    msg.y = 0.596226901406;
    msg.z = 0.844575507207;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.0634580189528);
    msg.setSource(16710U);
    msg.setSourceEntity(26U);
    msg.setDestination(17058U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.745711158725;
    msg.lon = 0.0960358109285;
    msg.speed = 0.9949948008;
    msg.speed_units = 29U;
    msg.duration = 38776U;
    msg.sys_a = 9753U;
    msg.sys_b = 63866U;
    msg.move_threshold = 0.535363248686;

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
    msg.setTimeStamp(0.0383990510653);
    msg.setSource(18902U);
    msg.setSourceEntity(222U);
    msg.setDestination(15332U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.845334668657;
    msg.lon = 0.133711194127;
    msg.speed = 0.455356464706;
    msg.speed_units = 138U;
    msg.duration = 23627U;
    msg.sys_a = 23449U;
    msg.sys_b = 5171U;
    msg.move_threshold = 0.219011988479;

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
    msg.setTimeStamp(0.0949759191411);
    msg.setSource(4888U);
    msg.setSourceEntity(38U);
    msg.setDestination(21409U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.334229188997;
    msg.lon = 0.115000957694;
    msg.speed = 0.275579816991;
    msg.speed_units = 28U;
    msg.duration = 4538U;
    msg.sys_a = 2363U;
    msg.sys_b = 30733U;
    msg.move_threshold = 0.0788512058127;

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
    msg.setTimeStamp(0.0460763544516);
    msg.setSource(58200U);
    msg.setSourceEntity(112U);
    msg.setDestination(1528U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.179526036071;
    msg.lon = 0.121581828642;
    msg.z = 0.289187168482;
    msg.z_units = 58U;
    msg.speed = 0.75041120517;
    msg.speed_units = 211U;
    msg.custom.assign("SOKFZPHFZMCTGSYCTJLNPARGBDUSBLONRZCXYYGQNHJSVRPKAKNAZGKLHCLHEKLXXDWYZBGXGLIEADSZYWBPQZHMPMIYYVUARMNLSVFSMJXCIOTOWVCDTIPARTUQRTKTE");

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
    msg.setTimeStamp(0.139392680837);
    msg.setSource(14188U);
    msg.setSourceEntity(130U);
    msg.setDestination(46781U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.320243901887;
    msg.lon = 0.890042847219;
    msg.z = 0.687681324103;
    msg.z_units = 97U;
    msg.speed = 0.310255596421;
    msg.speed_units = 145U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.787582467624;
    tmp_msg_0.lon = 0.347717767299;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XNNPVXMEYKFZZRHSPTGRULFSEPWUEGIUAYJVLVAKASORMTHUELQNCITUSIJHTYBDWVPXWDDODVQHEWPAPGCZCMIVOAYNYLTKV");

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
    msg.setTimeStamp(0.939377055804);
    msg.setSource(986U);
    msg.setSourceEntity(9U);
    msg.setDestination(51438U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.0187863521587;
    msg.lon = 0.755170688311;
    msg.z = 0.664850194625;
    msg.z_units = 52U;
    msg.speed = 0.416679254068;
    msg.speed_units = 74U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.807554852261;
    tmp_msg_0.lon = 0.300738073788;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XIGIKFMCYBGVXALUTPSHHDBMFMYLWXFLGTPNEURVIQNZWFYGEZTHOVHMAXCGEHRZDCYIHSOQOMXCSROXKJTMJQPWBBJAAUNEKCFJONTXKSKQUAVYYUCSFTBSSZNPOKHAWQL");

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
    msg.setTimeStamp(0.040201299379);
    msg.setSource(35240U);
    msg.setSourceEntity(231U);
    msg.setDestination(13513U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.968039145357;
    msg.lon = 0.778079590749;

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
    msg.setTimeStamp(0.108557821792);
    msg.setSource(37226U);
    msg.setSourceEntity(224U);
    msg.setDestination(19355U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.976546257261;
    msg.lon = 0.29825293898;

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
    msg.setTimeStamp(0.0225494414939);
    msg.setSource(28059U);
    msg.setSourceEntity(180U);
    msg.setDestination(15325U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.0731505022865;
    msg.lon = 0.366977456501;

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
    msg.setTimeStamp(0.563872930702);
    msg.setSource(39154U);
    msg.setSourceEntity(153U);
    msg.setDestination(63175U);
    msg.setDestinationEntity(249U);
    msg.timeout = 24806U;
    msg.lat = 0.585618721526;
    msg.lon = 0.789673098036;
    msg.z = 0.732417194833;
    msg.z_units = 185U;
    msg.pitch = 0.52936956968;
    msg.amplitude = 0.972594067228;
    msg.duration = 5737U;
    msg.speed = 0.0746410562275;
    msg.speed_units = 213U;
    msg.radius = 0.507222268375;
    msg.direction = 194U;
    msg.custom.assign("XYCNSZSMRENKSBVUITPAXTALRACCTEIPEUSKPXFMDXJMMVNVGJJCQNMHIYYZPGOGYNNGUFHAFHKUFNYQUTXOWAZHFBIGERNPZHI");

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
    msg.setTimeStamp(0.220702430826);
    msg.setSource(9422U);
    msg.setSourceEntity(151U);
    msg.setDestination(20885U);
    msg.setDestinationEntity(185U);
    msg.timeout = 61359U;
    msg.lat = 0.292867742484;
    msg.lon = 0.358165847488;
    msg.z = 0.221557819343;
    msg.z_units = 178U;
    msg.pitch = 0.0572247977599;
    msg.amplitude = 0.0965571611506;
    msg.duration = 52891U;
    msg.speed = 0.45435881893;
    msg.speed_units = 173U;
    msg.radius = 0.571624918755;
    msg.direction = 182U;
    msg.custom.assign("OPGZPTPHNHFRACGIXCEUQPZMKJJFWIXHLOCTCEJCOQQAQKRLYQYTOVHOXGPJYHNYZ");

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
    msg.setTimeStamp(0.176041067419);
    msg.setSource(53246U);
    msg.setSourceEntity(80U);
    msg.setDestination(25333U);
    msg.setDestinationEntity(3U);
    msg.timeout = 34954U;
    msg.lat = 0.668696380585;
    msg.lon = 0.941811341523;
    msg.z = 0.993306863163;
    msg.z_units = 160U;
    msg.pitch = 0.433282471497;
    msg.amplitude = 0.304304226424;
    msg.duration = 35382U;
    msg.speed = 0.353268119007;
    msg.speed_units = 245U;
    msg.radius = 0.739609929965;
    msg.direction = 200U;
    msg.custom.assign("HYDKPCEMURJHJOOQZVXXOGHEOFGPZWUADIJYFPIVTEOMIPACFMSOWCMKQMUSGRSLPUQXGPKHLBBIPHQDNQRDAMFXTZKZVFHGGTWLQVBVWBERFLDMJFDRUDZXXEZMWXWVXXNJUZUJELVBCSVSEOKTULORIEZRYJKNLIRWSQGZAKDJHSARGXHJFF");

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
    msg.setTimeStamp(0.446555132431);
    msg.setSource(49607U);
    msg.setSourceEntity(112U);
    msg.setDestination(49506U);
    msg.setDestinationEntity(247U);
    msg.formation_name.assign("LXCNSHNBNNEYWZRNLXORRFPQZDGYFMPCDQWNKHWFNESIJEQHGKVSQWMILZDGZJPNEJRUMICMYTBILKTUBJUOJSKDNHNHDXTUUUOKYUZGGGSWCPAFHOXAXLJVBSRHQOZTYLEZHMYOSDBEAEAOALVA");
    msg.reference_frame = 157U;
    msg.custom.assign("EDGOEMBRAYGCZBSUOAUZGVLKMZNPZFIXMTCDQTQUTJBQNQMQDR");

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
    msg.setTimeStamp(0.431951254593);
    msg.setSource(33901U);
    msg.setSourceEntity(55U);
    msg.setDestination(52984U);
    msg.setDestinationEntity(44U);
    msg.formation_name.assign("DCMQSSSNARQXNDSZBUBBEFTLBVCAJGGBNIRCCXRQUIDWYWGMBYSPCARCPEPJXETJSZHWAMNGHEJLMNTWZWVGKIAMVAVPYDXMQFODUIKCWREBPZXFMLXHJOUJBUTJLMEYKPFRUOQKUSLDJTMZIPVUDIKAOLXVHVMORAUTHCLKQJQSQFNSFXKYOBTHYYNFVC");
    msg.reference_frame = 218U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6791U;
    tmp_msg_0.off_x = 0.95880961502;
    tmp_msg_0.off_y = 0.724458976604;
    tmp_msg_0.off_z = 0.115967321275;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DBTCDLTTVRKSOYHJWUHENDINYALIQGBJPMTXPJXNNZQWJSWGID");

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
    msg.setTimeStamp(0.431783722537);
    msg.setSource(23852U);
    msg.setSourceEntity(100U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(81U);
    msg.formation_name.assign("LDHUKBOEPMBUJCPVEDAJWZDQZARSOFHVFI");
    msg.reference_frame = 231U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1874U;
    tmp_msg_0.off_x = 0.893197895001;
    tmp_msg_0.off_y = 0.795013582748;
    tmp_msg_0.off_z = 0.497570105959;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BSAYQDMUYDDKFRSMRJZRMUOWZCPRFKBNYDXVEXLGABAGFYFZNCVMOMBJJLOZKEUZ");

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
    msg.setTimeStamp(0.652393493257);
    msg.setSource(38497U);
    msg.setSourceEntity(143U);
    msg.setDestination(26020U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("TSRWNSDKTVUFYGFQMIVYVEFLNAWCQUEJECFAXAXBKTFMYUOOPUHVIUEQIHMNTRNRDIXCMIRZBQEAVWFJWJBTCNFOJZRHKQDADZBQPYWSDOKXOPRAYSKMVHLLPROZLTLHNIGGCQXYXHMTHUQSPJWDSVPWUBUZVJJCVNUDRZLTLYIGYIGSOLZMZDHBQGJMHEPXAJBSFRQ");
    msg.formation_name.assign("GREZSITIWHGXICWJEDLZGBVJCZNOBTJEHCBLXMTZTYPZWFGYWKVJFLELZOUTMHFBUFXAYUUWYXUDEQXLGLUGKMNVPQNOAOKIQDQMVSW");
    msg.plan_id.assign("DCQTUKBPDZGBSMENLNYBUZIFAQKQPZRZONHUIUDHRRAOSIPXUAECVQYALRVBTCHLWFEXJQZBBLQAKOHPUWYOZYYMYWBDGFFXPAIYVDTWCZUSAHWNONAMOXLINZLVKCAMLOKQSLMJMUTPXVUENOKOICFJGHGQJEPEIRGJSCTKRLKTSTCHGAFMXCRWIGGDWTRNDSVOEXDEKWYEEZMJIXDWPHTPVVSRPHLSMSFJKVIBVXUYJQBCFXFQNYW");
    msg.description.assign("FNRREKOGHZUKAMPBNZYBPCSZRDFWRDPIOUKAAVTKOLQLSAHLXTUMBJOXZTUJTSQQCEMJIOZQAFMOFABHBPWVGXPLOXBXYKSJWFGMEHXDTHHYBVNLGDGVJYOGKSRAQQMMIAILSNHNFNCYZSKCGCYUYVNGVMULWRFWJBCUPARIOKNIIDDTNWDDCPYFHONTVSD");
    msg.leader_speed = 0.062795883255;
    msg.leader_bank_lim = 0.791708964665;
    msg.pos_sim_err_lim = 0.790099892387;
    msg.pos_sim_err_wrn = 0.534582615689;
    msg.pos_sim_err_timeout = 36815U;
    msg.converg_max = 0.225257886653;
    msg.converg_timeout = 63660U;
    msg.comms_timeout = 3953U;
    msg.turb_lim = 0.966817119461;
    msg.custom.assign("LKBLTOOAGSZYJHHJMPDXJCBMXDOSVKUVWQPZGBNLWAJVTUIBSDAOHEIZFDYGMDZOULBFWNQURNBEQJCKSSMPVUQBKAPRHCYQNMWYLGXCGZJUTVYPRUPMLVAQMATEPETIVZOJCHRETADIXQVGTWCKSYNECBFTFDRQLHFXJKRTWHONCIJZECGXFAGRNGXUNGPREYUJWQLSCSPHXIDHKZLBOVFKAEWVMNNIPRXSFX");

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
    msg.setTimeStamp(0.860522289883);
    msg.setSource(34330U);
    msg.setSourceEntity(169U);
    msg.setDestination(13765U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("PIFPDXGUUUYGZXKCCLRRXKZMCAUUELNNNHTVDIOYYXZXCZKCEPLBCXKSTRMTROWCNZTMLJWCAOBSSXEGZRMJLQHQDRFIHESQJYZEBPDQQRHPTXOIVLGABNJOMXFETFHVGDVWIDGBBKDGAAOUPJFAVSDAHCWDTWIKAWUSYQXMG");
    msg.formation_name.assign("KSGPXQKCYBVGQAUUXOFHPOLHQYTFBPAPKMRE");
    msg.plan_id.assign("OEPVKKXUVLVTTXWMYLAKDJAYQFDQJMOPALNIYHUGABDILUVIQLUAUGSNZWUFHEIGOBPBHMFMWGBWGSC");
    msg.description.assign("TMQUROAZZXGIWUWIMDSOICOMMIQHZZMRJWPJBVMUWKXXGSJQXRZLXHZUNVHICLDXZYULDYYHHKNFVMVKJEZFCCPCDZEOYPTVAJCGOSEPXSRKRTQRLBKEFOPUJYNCNVFMYNABQFWYAEUYJQTJSEIIGBMHFTVPNBTVUNLZPUNYAGCSFSGINBICGQOALTAOEWDORTBBRLBRXETWHKSLQAKWEMXJKDAQADODWKSPUDVHBEYFJPSXWHRTIG");
    msg.leader_speed = 0.0354604515102;
    msg.leader_bank_lim = 0.220454632069;
    msg.pos_sim_err_lim = 0.773740275621;
    msg.pos_sim_err_wrn = 0.144302613003;
    msg.pos_sim_err_timeout = 58543U;
    msg.converg_max = 0.13956765159;
    msg.converg_timeout = 47821U;
    msg.comms_timeout = 9813U;
    msg.turb_lim = 0.935354405106;
    msg.custom.assign("IFDOMWIVZCNPVWOWPFVTAAVHTMXWH");

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
    msg.setTimeStamp(0.10796596721);
    msg.setSource(26896U);
    msg.setSourceEntity(233U);
    msg.setDestination(18258U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("PUKTPVPEDCOCGGIZJOFREHHEYQYRTLDEVSMJUNU");
    msg.formation_name.assign("SYSDUYZNPZRDNOZJVWU");
    msg.plan_id.assign("XVHVEGRTLVAISTCPCMETTTFFTLMOWKFHBDMDBJPLQYAFQWHOSMMNEIZROLUTYKVDHXNFHKXRO");
    msg.description.assign("DKSAMOMHYPNMMADNLEXEWIGBSQAUYKOZGKGRIIZVBBNQNQIXZSUTJNTVGATLGHCOTVCSGTEMFFYISBCXGWEJQLDSTDPCZNAHBLWVRXCLOKOMRDPYKKMCRPEHFJVGVLRIVYQIYFBXAMQMNCLFDRVQAXUOTWGZNZJRYOOUUREYUJINYPODCSPYFCWBWGHWEFDMBSUCZQJTLFDPETHWKTXWBKXUJRQSJZHEFXPXLFAAERUIPHDVVZIAHJU");
    msg.leader_speed = 0.322755285039;
    msg.leader_bank_lim = 0.202614297932;
    msg.pos_sim_err_lim = 0.0748673193437;
    msg.pos_sim_err_wrn = 0.776639276766;
    msg.pos_sim_err_timeout = 25731U;
    msg.converg_max = 0.552936918479;
    msg.converg_timeout = 54864U;
    msg.comms_timeout = 3915U;
    msg.turb_lim = 0.508141919791;
    msg.custom.assign("EOOBORGWWPLTTPFLSYZKGUFHPOOGTKEAVORJYCMMMITSMNUSUFNEKI");

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
    msg.setTimeStamp(0.729497359856);
    msg.setSource(37199U);
    msg.setSourceEntity(220U);
    msg.setDestination(62844U);
    msg.setDestinationEntity(63U);
    msg.control_src = 37246U;
    msg.control_ent = 134U;
    msg.timeout = 0.864024502681;
    msg.loiter_radius = 0.573907145982;
    msg.altitude_interval = 0.0934115824934;

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
    msg.setTimeStamp(0.259464913552);
    msg.setSource(58046U);
    msg.setSourceEntity(179U);
    msg.setDestination(21379U);
    msg.setDestinationEntity(219U);
    msg.control_src = 49660U;
    msg.control_ent = 156U;
    msg.timeout = 0.0206500537254;
    msg.loiter_radius = 0.60504959305;
    msg.altitude_interval = 0.918390743827;

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
    msg.setTimeStamp(0.288887206147);
    msg.setSource(16525U);
    msg.setSourceEntity(135U);
    msg.setDestination(53305U);
    msg.setDestinationEntity(1U);
    msg.control_src = 21488U;
    msg.control_ent = 198U;
    msg.timeout = 0.123133014803;
    msg.loiter_radius = 0.410610524607;
    msg.altitude_interval = 0.544853043564;

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
    msg.setTimeStamp(0.796280656165);
    msg.setSource(50646U);
    msg.setSourceEntity(5U);
    msg.setDestination(11709U);
    msg.setDestinationEntity(202U);
    msg.flags = 65U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.863449371675;
    tmp_msg_0.speed_units = 148U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.628032283172;
    tmp_msg_1.z_units = 61U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.708268428049;
    msg.lon = 0.334210546938;
    msg.radius = 0.197526020531;

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
    msg.setTimeStamp(0.867827263831);
    msg.setSource(6721U);
    msg.setSourceEntity(44U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(231U);
    msg.flags = 146U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.39055124558;
    tmp_msg_0.speed_units = 112U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.17520536011;
    tmp_msg_1.z_units = 210U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.152933502863;
    msg.lon = 0.69449225842;
    msg.radius = 0.849637639235;

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
    msg.setTimeStamp(0.153873171545);
    msg.setSource(39700U);
    msg.setSourceEntity(201U);
    msg.setDestination(26090U);
    msg.setDestinationEntity(141U);
    msg.flags = 118U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.890687560728;
    tmp_msg_0.speed_units = 77U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.123121786932;
    tmp_msg_1.z_units = 71U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.102577327625;
    msg.lon = 0.913503453831;
    msg.radius = 0.430601107944;

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
    msg.setTimeStamp(0.275134006781);
    msg.setSource(19595U);
    msg.setSourceEntity(190U);
    msg.setDestination(16171U);
    msg.setDestinationEntity(201U);
    msg.control_src = 22823U;
    msg.control_ent = 117U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 59U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.32394108411;
    tmp_tmp_msg_0_0.speed_units = 64U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.83043822876;
    tmp_tmp_msg_0_1.z_units = 173U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.314360672077;
    tmp_msg_0.lon = 0.993166629613;
    tmp_msg_0.radius = 0.696814943747;
    msg.reference.set(tmp_msg_0);
    msg.state = 79U;
    msg.proximity = 87U;

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
    msg.setTimeStamp(0.851081345186);
    msg.setSource(48951U);
    msg.setSourceEntity(29U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(27U);
    msg.control_src = 42534U;
    msg.control_ent = 156U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.586496910764;
    tmp_tmp_msg_0_0.speed_units = 61U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.936591985333;
    tmp_tmp_msg_0_1.z_units = 236U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.650779275558;
    tmp_msg_0.lon = 0.28349098669;
    tmp_msg_0.radius = 0.220251767596;
    msg.reference.set(tmp_msg_0);
    msg.state = 106U;
    msg.proximity = 53U;

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
    msg.setTimeStamp(0.42186353695);
    msg.setSource(2401U);
    msg.setSourceEntity(150U);
    msg.setDestination(42017U);
    msg.setDestinationEntity(136U);
    msg.control_src = 41127U;
    msg.control_ent = 115U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 237U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.137953524659;
    tmp_tmp_msg_0_0.speed_units = 179U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.799891130833;
    tmp_tmp_msg_0_1.z_units = 197U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.307686643011;
    tmp_msg_0.lon = 0.229007703965;
    tmp_msg_0.radius = 0.27429382209;
    msg.reference.set(tmp_msg_0);
    msg.state = 234U;
    msg.proximity = 240U;

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
    msg.setTimeStamp(0.587233904235);
    msg.setSource(55315U);
    msg.setSourceEntity(7U);
    msg.setDestination(62255U);
    msg.setDestinationEntity(71U);
    msg.ax_cmd = 0.153164169588;
    msg.ay_cmd = 0.34316138495;
    msg.az_cmd = 0.00421402137118;
    msg.ax_des = 0.734906618555;
    msg.ay_des = 0.606322761041;
    msg.az_des = 0.0603116417623;
    msg.virt_err_x = 0.103949734097;
    msg.virt_err_y = 0.425412552211;
    msg.virt_err_z = 0.217263240758;
    msg.surf_fdbk_x = 0.149869927947;
    msg.surf_fdbk_y = 0.872218423413;
    msg.surf_fdbk_z = 0.238107215274;
    msg.surf_unkn_x = 0.342471938632;
    msg.surf_unkn_y = 0.953944922269;
    msg.surf_unkn_z = 0.320912021015;
    msg.ss_x = 0.838530958081;
    msg.ss_y = 0.192160535471;
    msg.ss_z = 0.141134613444;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OYTEJXVQUFFEDMMRQLLAMKEAABNCQLJOVZLWBTSEIBULRURPUKKTBHSOJEQWPCRSKNICOSIYZGRHEKJNKRWWTWELAMGFRBSTOVLDVTHKZUTBXVZJNLPDXIAYDXHCOZMMUUNVFPKPDYHUPHINTRSEGAXFIVDPAKAZOWSDVEXRKQHOIZTYGQOYQMLHYWCY");
    tmp_msg_0.dist = 0.554543550633;
    tmp_msg_0.err = 0.159014936977;
    tmp_msg_0.ctrl_imp = 0.854522210002;
    tmp_msg_0.rel_dir_x = 0.940060663305;
    tmp_msg_0.rel_dir_y = 0.983823799194;
    tmp_msg_0.rel_dir_z = 0.159488663443;
    tmp_msg_0.err_x = 0.348875967466;
    tmp_msg_0.err_y = 0.0108754990024;
    tmp_msg_0.err_z = 0.0830948242844;
    tmp_msg_0.rf_err_x = 0.960780089313;
    tmp_msg_0.rf_err_y = 0.151219633303;
    tmp_msg_0.rf_err_z = 0.972785237644;
    tmp_msg_0.rf_err_vx = 0.642714110491;
    tmp_msg_0.rf_err_vy = 0.289175422718;
    tmp_msg_0.rf_err_vz = 0.882554204385;
    tmp_msg_0.ss_x = 0.298195983526;
    tmp_msg_0.ss_y = 0.218608803086;
    tmp_msg_0.ss_z = 0.332809486528;
    tmp_msg_0.virt_err_x = 0.902480872563;
    tmp_msg_0.virt_err_y = 0.919167452758;
    tmp_msg_0.virt_err_z = 0.0700802472031;
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
    msg.setTimeStamp(0.188190591791);
    msg.setSource(64951U);
    msg.setSourceEntity(165U);
    msg.setDestination(26679U);
    msg.setDestinationEntity(223U);
    msg.ax_cmd = 0.605647177015;
    msg.ay_cmd = 0.521556319799;
    msg.az_cmd = 0.547656625535;
    msg.ax_des = 0.094272464437;
    msg.ay_des = 0.211477653434;
    msg.az_des = 0.252345455989;
    msg.virt_err_x = 0.950180190436;
    msg.virt_err_y = 0.00759532997434;
    msg.virt_err_z = 0.653895518168;
    msg.surf_fdbk_x = 0.948507636845;
    msg.surf_fdbk_y = 0.670887428566;
    msg.surf_fdbk_z = 0.194748689097;
    msg.surf_unkn_x = 0.309058974386;
    msg.surf_unkn_y = 0.0250738172112;
    msg.surf_unkn_z = 0.209212622436;
    msg.ss_x = 0.0928402939725;
    msg.ss_y = 0.531464681192;
    msg.ss_z = 0.0193167774528;

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
    msg.setTimeStamp(0.547972202669);
    msg.setSource(42409U);
    msg.setSourceEntity(14U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(230U);
    msg.ax_cmd = 0.769991244379;
    msg.ay_cmd = 0.436524162559;
    msg.az_cmd = 0.683442405054;
    msg.ax_des = 0.152095705384;
    msg.ay_des = 0.445474420507;
    msg.az_des = 0.609749481012;
    msg.virt_err_x = 0.794404331257;
    msg.virt_err_y = 0.301885847428;
    msg.virt_err_z = 0.733505469831;
    msg.surf_fdbk_x = 0.267383803252;
    msg.surf_fdbk_y = 0.429802331292;
    msg.surf_fdbk_z = 0.261848037001;
    msg.surf_unkn_x = 0.826575442577;
    msg.surf_unkn_y = 0.782757875124;
    msg.surf_unkn_z = 0.342911958973;
    msg.ss_x = 0.42337655781;
    msg.ss_y = 0.727978066655;
    msg.ss_z = 0.268114178541;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HFZOFMVBKLUYMOWSVDLVBCYYVRKHHZMKMQDYLLDDDUGXUJAGAOETWMUH");
    tmp_msg_0.dist = 0.820761031345;
    tmp_msg_0.err = 0.476479694479;
    tmp_msg_0.ctrl_imp = 0.274089490655;
    tmp_msg_0.rel_dir_x = 0.559993322921;
    tmp_msg_0.rel_dir_y = 0.0218381109608;
    tmp_msg_0.rel_dir_z = 0.133629033784;
    tmp_msg_0.err_x = 0.780004033475;
    tmp_msg_0.err_y = 0.339933598311;
    tmp_msg_0.err_z = 0.504160725202;
    tmp_msg_0.rf_err_x = 0.523897939697;
    tmp_msg_0.rf_err_y = 0.162969489702;
    tmp_msg_0.rf_err_z = 0.00292357115347;
    tmp_msg_0.rf_err_vx = 0.560793535902;
    tmp_msg_0.rf_err_vy = 0.404136194115;
    tmp_msg_0.rf_err_vz = 0.986290323441;
    tmp_msg_0.ss_x = 0.715540970668;
    tmp_msg_0.ss_y = 0.310901753797;
    tmp_msg_0.ss_z = 0.585176649608;
    tmp_msg_0.virt_err_x = 0.755451108023;
    tmp_msg_0.virt_err_y = 0.230473461957;
    tmp_msg_0.virt_err_z = 0.760484617526;
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
    msg.setTimeStamp(0.64165282006);
    msg.setSource(13346U);
    msg.setSourceEntity(43U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(7U);
    msg.s_id.assign("SBVACPCCSJGDZLJCTWSXJRAEGSQLABESNVKDYXVANQDMBMLCQGEXIQFKOUHUKMHOVRSDKVQYOBWCXSYWCFDZWVJHXUEDLFPSUNPHFTJNIEMIWDXUIBEPZLURSCNOQNCTATNAJKGIITRFTHLXDMWTQGVPG");
    msg.dist = 0.581596900532;
    msg.err = 0.669082176251;
    msg.ctrl_imp = 0.724973346547;
    msg.rel_dir_x = 0.573276580642;
    msg.rel_dir_y = 0.396145935445;
    msg.rel_dir_z = 0.422946747795;
    msg.err_x = 0.639629471262;
    msg.err_y = 0.80902405156;
    msg.err_z = 0.581556875085;
    msg.rf_err_x = 0.43426033998;
    msg.rf_err_y = 0.961120042568;
    msg.rf_err_z = 0.831101528385;
    msg.rf_err_vx = 0.331805846301;
    msg.rf_err_vy = 0.82477151514;
    msg.rf_err_vz = 0.143237988802;
    msg.ss_x = 0.487296057282;
    msg.ss_y = 0.895811486121;
    msg.ss_z = 0.357750992234;
    msg.virt_err_x = 0.101334896066;
    msg.virt_err_y = 0.953419068719;
    msg.virt_err_z = 0.00501496678977;

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
    msg.setTimeStamp(0.460096186471);
    msg.setSource(28938U);
    msg.setSourceEntity(157U);
    msg.setDestination(56397U);
    msg.setDestinationEntity(132U);
    msg.s_id.assign("FOPNJQQOHTBKEJPARXEUPNCWQXEHTAZLPUWXSCOQFOK");
    msg.dist = 0.0747581557132;
    msg.err = 0.832187020692;
    msg.ctrl_imp = 0.39206444102;
    msg.rel_dir_x = 0.113775758388;
    msg.rel_dir_y = 0.0715591440826;
    msg.rel_dir_z = 0.457476450004;
    msg.err_x = 0.431490071695;
    msg.err_y = 0.86309334015;
    msg.err_z = 0.845179700518;
    msg.rf_err_x = 0.895000765761;
    msg.rf_err_y = 0.995932648622;
    msg.rf_err_z = 0.512696669189;
    msg.rf_err_vx = 0.586587414412;
    msg.rf_err_vy = 0.740383731998;
    msg.rf_err_vz = 0.149332941006;
    msg.ss_x = 0.763922546948;
    msg.ss_y = 0.265617946541;
    msg.ss_z = 0.983578436517;
    msg.virt_err_x = 0.641907358661;
    msg.virt_err_y = 0.0249380999412;
    msg.virt_err_z = 0.72904440467;

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
    msg.setTimeStamp(0.557509088313);
    msg.setSource(59495U);
    msg.setSourceEntity(147U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(173U);
    msg.s_id.assign("YFGMBPLJUZPKJKYXHTPZXDKBR");
    msg.dist = 0.947577287893;
    msg.err = 0.154557482982;
    msg.ctrl_imp = 0.539889369095;
    msg.rel_dir_x = 0.517217861262;
    msg.rel_dir_y = 0.66018990806;
    msg.rel_dir_z = 0.425163394821;
    msg.err_x = 0.206357686095;
    msg.err_y = 0.223634780222;
    msg.err_z = 0.431358439117;
    msg.rf_err_x = 0.982540054787;
    msg.rf_err_y = 0.0573658350746;
    msg.rf_err_z = 0.0715621304383;
    msg.rf_err_vx = 0.51059095352;
    msg.rf_err_vy = 0.527043962793;
    msg.rf_err_vz = 0.225058753231;
    msg.ss_x = 0.991043318972;
    msg.ss_y = 0.683692016492;
    msg.ss_z = 0.793798767013;
    msg.virt_err_x = 0.610475973724;
    msg.virt_err_y = 0.990489871173;
    msg.virt_err_z = 0.662179872112;

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
    msg.setTimeStamp(0.498032931757);
    msg.setSource(37069U);
    msg.setSourceEntity(186U);
    msg.setDestination(50644U);
    msg.setDestinationEntity(228U);
    msg.timeout = 57266U;
    msg.rpm = 0.501972244013;
    msg.direction = 159U;
    msg.custom.assign("RLJWOVITOXTWZVBYTAVBULJQQXQOWTRZECPIGTICVEBSSGIQEPWIAKVEPOFBOUCYXQDBHDKVMLQRXAEWBFRBLVWXULMCOWZKJUZZFTSSERGBMAIGNZLJPGKFMHZLRSSHDSVQYFYZNNMPLUWCAUERCYDCYWCRQLKIWD");

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
    msg.setTimeStamp(0.335544160183);
    msg.setSource(8124U);
    msg.setSourceEntity(214U);
    msg.setDestination(16155U);
    msg.setDestinationEntity(163U);
    msg.timeout = 57927U;
    msg.rpm = 0.929555359838;
    msg.direction = 92U;
    msg.custom.assign("SLQRUMGTXOWXBKCJUCOZYHITGKSFYBTXVURZIESTVSNCEAYLNBMVQD");

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
    msg.setTimeStamp(0.69749420506);
    msg.setSource(31070U);
    msg.setSourceEntity(181U);
    msg.setDestination(40089U);
    msg.setDestinationEntity(95U);
    msg.timeout = 18129U;
    msg.rpm = 0.363647318766;
    msg.direction = 103U;
    msg.custom.assign("ELBWSKYADTUIOGTIAZONQWVUQKAIJADEMSQETXZLJOZQIIRRNJBFOCPVCMXCYLTEGJWMUBNXSIUTNVHMEELZEVXVFEOXSOVFTQZUHBXFZTBUFFVNAHVXCHBGKHYQZNWDKJTYKUEHWOLDIRKZNABPSRFFGSZAMQOXMKVZSOQGCNWMQPRSCDUYGASJDYTIXEHBGPRDHGWDJPJKCCBHKWRJSPYDCPVPLRLUUIHNRYKMAFLJPWXTIDGOGC");

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
    msg.setTimeStamp(0.4700931296);
    msg.setSource(11834U);
    msg.setSourceEntity(20U);
    msg.setDestination(24445U);
    msg.setDestinationEntity(243U);
    msg.formation_name.assign("POOCAEWOKNNEHSQBXYVDRJAJNPWLGTWUOFVSTVVFNGETIATMRMYWNJFLNBEOGUPXXTQYIKIXPZIXUSRLMGXUCBGJQBIWPYZJPCTRZAELGQDAOWJZKLBTGEORUESUFMWLTRHHQKVPMYSZSXILHFYDIHCDXOMRBMEULUCPNHKAWTUNDZMAJACDTWJKKBNESPOXJZ");
    msg.type = 114U;
    msg.op = 182U;
    msg.group_name.assign("MQDTMVAGZSXBNLAPFKRHXXRXBYJDXSSDRILDMNAAMCHAKPEEAWAVDOAEJFPQWLIUBQZPIULJGKQQXE");
    msg.plan_id.assign("KGKCFTSBQXNNBCQJWKGAWZJQJRBHRWOASTBHYLVJGMWPFBGILFDJTRHUV");
    msg.description.assign("BQQPUQOJENVWZUJTQCIDFXDQFOTRPPMAJHSOAPGIWFKEKPIAAXEHDSVCYZVHZC");
    msg.reference_frame = 161U;
    msg.leader_bank_lim = 0.0861281073269;
    msg.leader_speed_min = 0.186261780253;
    msg.leader_speed_max = 0.185422212456;
    msg.leader_alt_min = 0.320426065235;
    msg.leader_alt_max = 0.625555660912;
    msg.pos_sim_err_lim = 0.902120784242;
    msg.pos_sim_err_wrn = 0.163386150144;
    msg.pos_sim_err_timeout = 51934U;
    msg.converg_max = 0.815312444759;
    msg.converg_timeout = 40587U;
    msg.comms_timeout = 60220U;
    msg.turb_lim = 0.142005750362;
    msg.custom.assign("CXVBFDJUNQYZEVHIAONMLPSJBNELTNEZGBPDXDMTKQUECBKLAWVTGUSKRYBRJCHETBSGYIMWFDZTOHMQCDJMPPMVGZOOYAHLDYBSQATGXSLFHANFRUAHGYFPXWVRHWNSLQMMIOPRXFDCEIHYVBTGPIBEYEOIWDEURWFJJNCMIFZNOVMRFIXZDLQIGRXUKHTSRQKAQWNRXQLUGXZJOKJZVS");

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
    msg.setTimeStamp(0.903190794315);
    msg.setSource(63999U);
    msg.setSourceEntity(137U);
    msg.setDestination(20881U);
    msg.setDestinationEntity(14U);
    msg.formation_name.assign("BONKYOCMHQSYDZDCUZVXXMVVTEYHPJPFQLREERKQJIZRZGXHKVUEYQFFJJCWLDGITVEJNCLJTKLKQKQGFMGGQFJEUBHKNNMLLQSDYPXAMRBXIYMLVENSWTUOKTPBZDKFNTPUOGAHZBMSIID");
    msg.type = 3U;
    msg.op = 67U;
    msg.group_name.assign("OJFPLPGLVJGPCYKIEZUKPNAWOHNSTYHVUTTG");
    msg.plan_id.assign("LBVWUDGHLMXVICOADPWEVZGNAYEJOLNNOKEYGGPMTIJYIHKACPXSUEVRSGSREVQGNYHQRBXVVKWXQICFIHVXHPZYXPKTIOWHNHPDIJXAVTKJ");
    msg.description.assign("SCCHMCPGMHUVVIAIYIBZNWSBRZVEIDROD");
    msg.reference_frame = 158U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30593U;
    tmp_msg_0.off_x = 0.0166812549992;
    tmp_msg_0.off_y = 0.0324190883721;
    tmp_msg_0.off_z = 0.039162575273;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.958557379372;
    msg.leader_speed_min = 0.000754376204185;
    msg.leader_speed_max = 0.688389844862;
    msg.leader_alt_min = 0.133133115322;
    msg.leader_alt_max = 0.777741973064;
    msg.pos_sim_err_lim = 0.800669845417;
    msg.pos_sim_err_wrn = 0.615668289121;
    msg.pos_sim_err_timeout = 953U;
    msg.converg_max = 0.502184014666;
    msg.converg_timeout = 51976U;
    msg.comms_timeout = 56680U;
    msg.turb_lim = 0.132874514923;
    msg.custom.assign("ZAKGUJROMEGDTESCETYUIBBNMBSJTZWSJGROWXKQHIPPQILFSJGGHQVNTIQZWONZNUSOGUAFDRZJDAXAZKIFMSAYXRCP");

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
    msg.setTimeStamp(0.740342913161);
    msg.setSource(7934U);
    msg.setSourceEntity(211U);
    msg.setDestination(61603U);
    msg.setDestinationEntity(185U);
    msg.formation_name.assign("EECOIKXIOBYOWSBVINETMYXSTCXNLXZGQNVCJIVAVFLPOWRIAPRRSRCFHWXKQPOWKGKQDFNUHJHGHWZZFULCPBAMDOVYSOFCLZAISSUJUQHVMLEDTLJUKMUPGQAUEQACUFGHWBXYBLDEQAALGXL");
    msg.type = 165U;
    msg.op = 205U;
    msg.group_name.assign("DSKKJGGZXZVCSIVFRAOEOLNRABEVGAPJBEJWKGFJQHDEOTETZLHQNWHPSPYNYQWTLHZDAEXSIXSHKDPQTTUMLBELGXMSZXMGNSBWFLXXFSVPROWHDLHOZYRMJRHPKJXROYCFMUB");
    msg.plan_id.assign("REPMEHVJVNZGICSDVCJICYPTXMJRNCOEJRELJAXIQAQNWGANMUJHZAKBKSORKTAXXCHLKHNWRFOVXXKUIJLWICYJMWINGGWDRFPOSVZBSWEDFPOMJDPMASTHUDMQYYPFFDFSWRYDQKHMVBZLZLQHMTQPKFGT");
    msg.description.assign("PVTUZEJUSAGTBXWFTKLOOIRVPGWAYLTPMYBAUNWUWGRLHLHYTQRGJITTEEJVVAUMHRESYYEATPDSKKGHKQVFHLUSSANZDRUTXQVIGOJCFICWUMJGICLZQCWHCNUDQFARXVPQJHFRZCEBMJPDLOMKLPIJXRZNOXBKSFIEWOSIQKDWZITPBPXYAPRHVKSMBNMDNLMMYLCCNWONSXDXOXQMVOJIFKFDVHAQDGYZYBAZYGRKBECSJU");
    msg.reference_frame = 226U;
    msg.leader_bank_lim = 0.139888310068;
    msg.leader_speed_min = 0.728308925531;
    msg.leader_speed_max = 0.299865680357;
    msg.leader_alt_min = 0.662681573027;
    msg.leader_alt_max = 0.2708041327;
    msg.pos_sim_err_lim = 0.521041332103;
    msg.pos_sim_err_wrn = 0.104443208032;
    msg.pos_sim_err_timeout = 7466U;
    msg.converg_max = 0.665242640471;
    msg.converg_timeout = 24423U;
    msg.comms_timeout = 51377U;
    msg.turb_lim = 0.38510356385;
    msg.custom.assign("LVBSXKNQQYPTIHWMPHLRXJZCXMWUIUGMGQHINPAHGDEILWPHTAPXRZOHMEUXLYQIRTNWAKKMIADVDFWOKFPGBSOUGHLEOQWLVJRJSNRLGWSGPBRDQDUEHPERODGGTFULBHCYNJLXBXQACBYIYUUBCFZGAKZFJTVLOJFTZVWDFNABMWKNMOVSYCCVCAISE");

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
    msg.setTimeStamp(0.735408556149);
    msg.setSource(26346U);
    msg.setSourceEntity(64U);
    msg.setDestination(8888U);
    msg.setDestinationEntity(190U);
    msg.timeout = 64978U;
    msg.lat = 0.118550132689;
    msg.lon = 0.570075808552;
    msg.z = 0.796061372747;
    msg.z_units = 8U;
    msg.speed = 0.739798585768;
    msg.speed_units = 233U;
    msg.custom.assign("HISJPRTGLBXLTITJTLUIIMODWMSUMMWEEXVGEBFPCDKOPOGEHAFWTJYNFYROQQVKWVRKOCFDDZYMAQXKNRFVLCAQIZLJGCUJXGCDUDUDQHGZNQYMVXAWVODCCTWUIOWKWFEPRWYUPVQSXKKAUZQZIMIWFRAHZHMJSXAINMXEYSTIJTSVBNGPADBA");

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
    msg.setTimeStamp(0.867494227763);
    msg.setSource(27163U);
    msg.setSourceEntity(225U);
    msg.setDestination(8860U);
    msg.setDestinationEntity(213U);
    msg.timeout = 35750U;
    msg.lat = 0.346588449195;
    msg.lon = 0.128238823288;
    msg.z = 0.45204539993;
    msg.z_units = 126U;
    msg.speed = 0.39680386079;
    msg.speed_units = 56U;
    msg.custom.assign("JOMHBKTIATPMQXHBXMUPVSGTREAXZUKYHWXYORTMCMOYDMNP");

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
    msg.setTimeStamp(0.635614446009);
    msg.setSource(50654U);
    msg.setSourceEntity(66U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(226U);
    msg.timeout = 24740U;
    msg.lat = 0.461170775551;
    msg.lon = 0.10828290478;
    msg.z = 0.599507093315;
    msg.z_units = 79U;
    msg.speed = 0.882085261757;
    msg.speed_units = 153U;
    msg.custom.assign("GAXOLGKYEIYXKCDVDFRXVUFVQXWG");

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
    msg.setTimeStamp(0.98851988646);
    msg.setSource(58272U);
    msg.setSourceEntity(80U);
    msg.setDestination(13013U);
    msg.setDestinationEntity(21U);
    msg.timeout = 57161U;
    msg.lat = 0.689227228093;
    msg.lon = 0.875414705664;
    msg.z = 0.0546203386822;
    msg.z_units = 81U;
    msg.speed = 0.553344503896;
    msg.speed_units = 166U;
    msg.custom.assign("QZIQIDMHLKKNGKSXVWSTCZCOCSGWMTSBUPTYUUPQTLOZPAIJJNZOBSGYLSDTOHOQRVDIAKJHEHTYVDLLUPERNNLJRPEZWIMFNAYZHKNMGXHCWVZADAGJMXPCEVRPKRITSEUZJMBFSOLBDETPCWBIRVLJQGEPXVVMYFGWRGIWNLUUHVNCRQNQIRJOFXBKGBFSDHAFQXYQBTGCFWFWTUBIOZCZAPXJFDKXDUNKDMO");

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
    msg.setTimeStamp(0.753452499025);
    msg.setSource(47074U);
    msg.setSourceEntity(91U);
    msg.setDestination(19462U);
    msg.setDestinationEntity(188U);
    msg.timeout = 13375U;
    msg.lat = 0.340491519159;
    msg.lon = 0.848667002181;
    msg.z = 0.527893227766;
    msg.z_units = 148U;
    msg.speed = 0.803438106237;
    msg.speed_units = 59U;
    msg.custom.assign("ESBNJZRYSSZBOSIQZHQQNLDWDKNMKIWVZQCITECK");

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
    msg.setTimeStamp(0.405032519193);
    msg.setSource(29887U);
    msg.setSourceEntity(226U);
    msg.setDestination(40291U);
    msg.setDestinationEntity(115U);
    msg.timeout = 62108U;
    msg.lat = 0.508945500421;
    msg.lon = 0.821377448495;
    msg.z = 0.807385966976;
    msg.z_units = 227U;
    msg.speed = 0.381986921699;
    msg.speed_units = 161U;
    msg.custom.assign("AMCBJKTCKOZOPQMXZDWYEIUOPBXTTXEGNSJCVQNSYATAELXQVUPPI");

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
    msg.setTimeStamp(0.749360472542);
    msg.setSource(49348U);
    msg.setSourceEntity(67U);
    msg.setDestination(19513U);
    msg.setDestinationEntity(81U);
    msg.arrival_time = 0.750653442954;
    msg.lat = 0.673006362123;
    msg.lon = 0.15792578841;
    msg.z = 0.879637928345;
    msg.z_units = 43U;
    msg.travel_z = 0.250812802224;
    msg.travel_z_units = 101U;
    msg.delayed = 5U;

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
    msg.setTimeStamp(0.221455552257);
    msg.setSource(121U);
    msg.setSourceEntity(164U);
    msg.setDestination(42457U);
    msg.setDestinationEntity(24U);
    msg.arrival_time = 0.867395780113;
    msg.lat = 0.0536316579385;
    msg.lon = 0.547978186286;
    msg.z = 0.320393350987;
    msg.z_units = 179U;
    msg.travel_z = 0.222785748138;
    msg.travel_z_units = 190U;
    msg.delayed = 107U;

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
    msg.setTimeStamp(0.914541318877);
    msg.setSource(42899U);
    msg.setSourceEntity(116U);
    msg.setDestination(16907U);
    msg.setDestinationEntity(135U);
    msg.arrival_time = 0.929279610195;
    msg.lat = 0.355260432195;
    msg.lon = 0.690228625312;
    msg.z = 0.857983522568;
    msg.z_units = 173U;
    msg.travel_z = 0.595522581718;
    msg.travel_z_units = 210U;
    msg.delayed = 65U;

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
    msg.setTimeStamp(0.652560162622);
    msg.setSource(52771U);
    msg.setSourceEntity(28U);
    msg.setDestination(17768U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.301752303524;
    msg.lon = 0.0593674532701;
    msg.z = 0.65286612685;
    msg.z_units = 176U;
    msg.speed = 0.908135630355;
    msg.speed_units = 179U;
    msg.bearing = 0.0479751807487;
    msg.cross_angle = 0.694398575198;
    msg.width = 0.573445221023;
    msg.length = 0.532048981412;
    msg.coff = 77U;
    msg.angaperture = 0.119395545268;
    msg.range = 20171U;
    msg.overlap = 150U;
    msg.flags = 182U;
    msg.custom.assign("EOXZGTUDRWJIUYSRCRFMMAKLVNVQPNWRQDITYBUHIJTNWALOJMEOVYEIAUHYCPKGYYPRMNCEGRXVAOKTZQUDBJDCYBNZEUQSNFDGVQSGGGQLAENFCXPDLK");

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
    msg.setTimeStamp(0.193231038623);
    msg.setSource(62825U);
    msg.setSourceEntity(106U);
    msg.setDestination(42621U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.632355452874;
    msg.lon = 0.749163129031;
    msg.z = 0.43307403517;
    msg.z_units = 7U;
    msg.speed = 0.274561222794;
    msg.speed_units = 254U;
    msg.bearing = 0.573761827655;
    msg.cross_angle = 0.107789910537;
    msg.width = 0.248307730589;
    msg.length = 0.309885613276;
    msg.coff = 96U;
    msg.angaperture = 0.407957623475;
    msg.range = 2600U;
    msg.overlap = 73U;
    msg.flags = 140U;
    msg.custom.assign("WLMSUBNNFUAQWQNTVTVZJDLNOQTFKTAAQOOWQEHPUJJBAPFIJGXFVPMCRNCYMBLWLVLQNTJSUKLXIWUKFCNTCOEBOSQGSQORCTHCYFXJLEYKMHAZXPXVVAM");

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
    msg.setTimeStamp(0.566947096545);
    msg.setSource(23790U);
    msg.setSourceEntity(81U);
    msg.setDestination(62897U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.836819874632;
    msg.lon = 0.742175502712;
    msg.z = 0.52006451508;
    msg.z_units = 186U;
    msg.speed = 0.383056764426;
    msg.speed_units = 163U;
    msg.bearing = 0.993248373984;
    msg.cross_angle = 0.0629260458963;
    msg.width = 0.262557351923;
    msg.length = 0.958084112776;
    msg.coff = 54U;
    msg.angaperture = 0.413019327503;
    msg.range = 34354U;
    msg.overlap = 76U;
    msg.flags = 139U;
    msg.custom.assign("LSQKLNJNLJEZRGRXQQGAPDLLKTBTGOHZOOVTSMKMHIVMMHDGSEDOCRBMOWXAJIAXDTZDGCRCRVREIZUCQRDWFWFFZQXUDKIBXTZNXUVXEYIWHKPAIFUAKMKQOJVCFTJK");

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
    msg.setTimeStamp(0.206547569494);
    msg.setSource(45050U);
    msg.setSourceEntity(69U);
    msg.setDestination(61513U);
    msg.setDestinationEntity(45U);
    msg.timeout = 37990U;
    msg.lat = 0.51994160702;
    msg.lon = 0.896543616047;
    msg.z = 0.207578338558;
    msg.z_units = 106U;
    msg.speed = 0.688982010969;
    msg.speed_units = 32U;
    msg.syringe0 = 200U;
    msg.syringe1 = 199U;
    msg.syringe2 = 203U;
    msg.custom.assign("GFENYZWYYZCERUOBSOCPJFAZWHCPXNPUFDZXKLAVCTTISBHBTJBDWXLPLCJYIMIFBMOJRCQTOWZXIQVRHFCKNPCDELFTZPMYKAXYESDWBBQADGDAOSFGUMWLYRUHGNJWJTNYZVPMVKWXKDVSZIKJMNVDTDAFMINITVML");

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
    msg.setTimeStamp(0.104183935519);
    msg.setSource(22129U);
    msg.setSourceEntity(35U);
    msg.setDestination(61773U);
    msg.setDestinationEntity(124U);
    msg.timeout = 64622U;
    msg.lat = 0.23335654429;
    msg.lon = 0.628663574447;
    msg.z = 0.917469123541;
    msg.z_units = 252U;
    msg.speed = 0.396981044053;
    msg.speed_units = 69U;
    msg.syringe0 = 172U;
    msg.syringe1 = 155U;
    msg.syringe2 = 39U;
    msg.custom.assign("YVNUHDAROLBZIONFMOROAQLEMDYEHUJVIZKBTRTCWIPOPALZCKSVPPSKZXWTUXBTTAQIFMBQEVFAYBLZYCBNDMSKL");

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
    msg.setTimeStamp(0.331615147755);
    msg.setSource(65439U);
    msg.setSourceEntity(25U);
    msg.setDestination(58846U);
    msg.setDestinationEntity(224U);
    msg.timeout = 43078U;
    msg.lat = 0.433785973792;
    msg.lon = 0.592336591579;
    msg.z = 0.623805072891;
    msg.z_units = 146U;
    msg.speed = 0.385047559755;
    msg.speed_units = 173U;
    msg.syringe0 = 242U;
    msg.syringe1 = 10U;
    msg.syringe2 = 70U;
    msg.custom.assign("LIVPKHAWIYIHNJSMQLDKYFXUWTKOIDGZYKHS");

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
    msg.setTimeStamp(0.339758479403);
    msg.setSource(4674U);
    msg.setSourceEntity(47U);
    msg.setDestination(28900U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.927693401019);
    msg.setSource(59867U);
    msg.setSourceEntity(150U);
    msg.setDestination(32120U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.793688346123);
    msg.setSource(1195U);
    msg.setSourceEntity(15U);
    msg.setDestination(46927U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.330801531405);
    msg.setSource(49807U);
    msg.setSourceEntity(250U);
    msg.setDestination(18034U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.410699304729;
    msg.lon = 0.912531125079;
    msg.z = 0.730898076092;
    msg.z_units = 137U;
    msg.speed = 0.759904769828;
    msg.speed_units = 37U;
    msg.takeoff_pitch = 0.9859439139;
    msg.custom.assign("SKRWBMIHWTWLDQXWLNUDHNGNBWRSCQTIUEMSWYUOJFRCGQIGHPGXOFBWAUIGXVKOAOUHNYFXIYLVCOMBOVAYZNUECFIVLDDMECYATQJVZKJTZSQLFIKOEJRXPKBQRRFCVCVJRMKUZMLTGCHOFISZUZMANXHIRHQPEQSSHXCTAHNPSMDNPPPBTTXGDABPZPKRJFEDWSQWJTZXJNWSKQLAUBEPLHXOCYBKGJGLEFVBJEZTMMEDRG");

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
    msg.setTimeStamp(0.702850207053);
    msg.setSource(29676U);
    msg.setSourceEntity(17U);
    msg.setDestination(1186U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.606046685563;
    msg.lon = 0.810192959148;
    msg.z = 0.717242655887;
    msg.z_units = 176U;
    msg.speed = 0.997994968907;
    msg.speed_units = 5U;
    msg.takeoff_pitch = 0.862612747184;
    msg.custom.assign("DSIWPGMCDOSQHRMFJEFWYQNGYSVAGXXEYLTVCFJTZBCCWXRLXZEENYXVANOOBFKWZRRXKJRFIAVTPUQWTMNNBXHAWTRSVIFUBHKBTBPGXCQGIXCMZOZTNDXYJUEOSATLKULGMQUH");

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
    msg.setTimeStamp(0.494124020571);
    msg.setSource(55939U);
    msg.setSourceEntity(162U);
    msg.setDestination(38817U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.0661410543199;
    msg.lon = 0.498111698777;
    msg.z = 0.881163090049;
    msg.z_units = 41U;
    msg.speed = 0.222951920233;
    msg.speed_units = 82U;
    msg.takeoff_pitch = 0.199504190899;
    msg.custom.assign("LERYCSPWLXEZSCKTSQLFGXPQTRGTASNZFNHUULKQAUOZRIKWEGPNIKQUJNKVNTSJLADTBDVFKCJOQZYBETLFVHOBOMANYNHIYXXDJHVHQUEDXFJMQJOBQKSUPLHOJHGDINMXGXRRCFZHBMIENCQIJMAPYWRWCGWSGUYLYDQKDVIYDVHNJZWFKBUMCBOSAOAMPDZKICMFWYFPWPBEGVXTVZCA");

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
    msg.setTimeStamp(0.920404948715);
    msg.setSource(17789U);
    msg.setSourceEntity(210U);
    msg.setDestination(17888U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.0164980348243;
    msg.lon = 0.951166976051;
    msg.z = 0.74767991085;
    msg.z_units = 184U;
    msg.speed = 0.552372195965;
    msg.speed_units = 107U;
    msg.abort_z = 0.213648649062;
    msg.bearing = 0.531830311527;
    msg.glide_slope = 16U;
    msg.glide_slope_alt = 0.179370251164;
    msg.custom.assign("KRJYNTUBHRVKUJCFHFAVNTZLAVSVQULFBESKTRZPBLSFOPDLESYMIPRBWQCMIFNEUCIXOJMEAPYFAQCTHLDGQBKTXZZXWDTNIXWSASJLGPSWYRHYWZRMNQQENOGDSKMMJVAGEKLUUYTGJXWAWFUBPYXGZHXPVOOKZCXQGDEIAAHQIVHNUCWVCGPXJUDKOQKELVNZYKNORCAO");

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
    msg.setTimeStamp(0.537941027625);
    msg.setSource(52185U);
    msg.setSourceEntity(52U);
    msg.setDestination(4402U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.760617448671;
    msg.lon = 0.807026494253;
    msg.z = 0.744724047886;
    msg.z_units = 192U;
    msg.speed = 0.65411703732;
    msg.speed_units = 107U;
    msg.abort_z = 0.38866830043;
    msg.bearing = 0.135539173425;
    msg.glide_slope = 43U;
    msg.glide_slope_alt = 0.838265235871;
    msg.custom.assign("LSQTJVSNLSNZNEIWEISLRHSSVOQCPOMTKRHWRKOVKDPJCUBFIDPGYSAGWZHZLYMBPIJKMCBAZAWMADXONIXAYMUNEPADTEDXGFARWAGKQFVKUBOPOXGUTGYYVIJQMTOIISCNGCBTUKWAJTRAWEZZIVRXGPZRDKQQWLXZULFRGJGYSWVHTMEMUXHVZXYTMYCJELU");

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
    msg.setTimeStamp(0.333209674225);
    msg.setSource(43963U);
    msg.setSourceEntity(107U);
    msg.setDestination(35429U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.861824232344;
    msg.lon = 0.15747426;
    msg.z = 0.0480596712349;
    msg.z_units = 111U;
    msg.speed = 0.674662781925;
    msg.speed_units = 173U;
    msg.abort_z = 0.157286888811;
    msg.bearing = 0.582436689634;
    msg.glide_slope = 153U;
    msg.glide_slope_alt = 0.0725785857503;
    msg.custom.assign("WLWOKIWVKHXCLVKQYHCXJSTOGPPWP");

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
    msg.setTimeStamp(0.5581750883);
    msg.setSource(15007U);
    msg.setSourceEntity(10U);
    msg.setDestination(24759U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.811429956496;
    msg.lon = 0.958231436318;
    msg.speed = 0.0446027032227;
    msg.speed_units = 48U;
    msg.limits = 113U;
    msg.max_depth = 0.62318949173;
    msg.min_alt = 0.753593346767;
    msg.time_limit = 0.02055825048;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.683925691102;
    tmp_msg_0.lon = 0.445839508301;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("INGUGFZPBTVXCDUDJOEPAKRTHQTTCOCCCHCMBEKZISYWFZXHZIYADWGNOKLOLUGQRMPESIYWURNKFJXXWJYCALAVDNRDZUQJRBJDNZBVXLOMHUHLFQ");
    msg.custom.assign("ZZBOOFZADYVMBOGRQHJUFIEQSMIVOWQECVXYNUHKZAHECRHSAKZMDVKBOBYFLOLVSJYEGLPBNTLXHXMDGWGBMYWKOJWOAQEXCIOMUTLCPCEAAINVDXNTREXCNMOBGMGWDLADYTGRGWIIFXFUUTMJQDWRYDWWCUJDPVHSJHCVKSLZFBUEPLZZXBGLSGPTTATAKNTHQPMPQCKAFRVPQNRYIUNXURUXLNHFQICYJKRFIEZSRZEI");

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
    msg.setTimeStamp(0.493953264942);
    msg.setSource(16523U);
    msg.setSourceEntity(25U);
    msg.setDestination(5760U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.644006069559;
    msg.lon = 0.305114168453;
    msg.speed = 0.8608451129;
    msg.speed_units = 184U;
    msg.limits = 20U;
    msg.max_depth = 0.798942988916;
    msg.min_alt = 0.00835986444406;
    msg.time_limit = 0.0994577483719;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.309762636949;
    tmp_msg_0.lon = 0.0155247713274;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EIKHUITNEMIMSWWWPVVCULOYRSMYBDGZLLIKEEMVESFPUQBTNZEOVEXYJUZYVXZZURNCOLNSYMKABLJPMCDQUFMDOCHNAXGLMTQTSUTIDQGHWYGSKWDRPYHHRDPQALLAJEIKJRVBWJDHSFYQOTQXURJQMSTFHXVW");
    msg.custom.assign("WARDCGVKUUIOACTJFCSSBAOEFGOYBFNWCLXKZMPYNZOFRAQJWNYMZWGOVWYYBRCALPUTFHDVYWSAWMCLZKGJKBPLXTPVRMJRXHRTVXJXDDHPDHQJQAYIOTIGXQVOUIBZPSMDXTQZSDECSLZGJAFLUNIQYXEFBVEMUJKLUSPWCNXNNHWETEHNGLFVZHRDGINHFDJILEOAZFQRIIJKSYKVVBHBPRIC");

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
    msg.setTimeStamp(0.864251524469);
    msg.setSource(47399U);
    msg.setSourceEntity(35U);
    msg.setDestination(45350U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.124659306217;
    msg.lon = 0.16686115094;
    msg.speed = 0.631124586897;
    msg.speed_units = 205U;
    msg.limits = 178U;
    msg.max_depth = 0.345977986972;
    msg.min_alt = 0.546319419396;
    msg.time_limit = 0.675784158988;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.642346374802;
    tmp_msg_0.lon = 0.262309408063;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ESKFXDOMUPMUJUKDXLHWWSLYGAGVBBIMNNKLUZENYASZCONYWVGDMKBFAVPKMISRETXMAEXSSQLBIVCHICOLWREPSHTBDHPFYKQHAPZGRKLRXTFLTKCECXBPYXIRWOKUFHFNBIJWNUGBATJMDGOBZACFEYDVYSVGC");
    msg.custom.assign("ZBPRNTLQPYDFKEXGJZXIGVMWJOIUFQJYIPTOUAOSMTZVFCJGUPSKCJFYDWSQRDJPCMHXBGTIEUMEUSWEHSZBNSATPGLIULLMXKPFYOUEZZLTSIYANVXONVPNDKCLFXYSPCADOC");

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
    msg.setTimeStamp(0.792787978438);
    msg.setSource(50385U);
    msg.setSourceEntity(207U);
    msg.setDestination(25672U);
    msg.setDestinationEntity(105U);
    msg.target.assign("UDEWTEYWWZQLISWNQHGFZBKRYSPJBANHXSFYHYMDISDFPHMTZXEWXQORNUKRYZVJGGPUYNMCSLFZKGSLPNOUZTTSIICUZQFTDCACUIVWRQAVKDGAVRUXVOALVNHGBEJAKRLELLAHFYRSJGFDOMONEHYJEMQV");
    msg.max_speed = 0.586570132801;
    msg.speed_units = 2U;
    msg.lat = 0.88956997125;
    msg.lon = 0.832239824069;
    msg.z = 0.229481985854;
    msg.z_units = 115U;
    msg.custom.assign("XQFADEZQZGDHGCFXRISLMWOEWEYQGVGSIUYXHDPBAEECUFBNSTFNCTLIJHKIEUTYZBJOFSHZYMYPOKMQQSWHHUZPPVXFXPPDPNCLZMBVOEAGTGLEAAANXRLHPLNPRDDARKRQBVUWJGRGOOTVAZYMRRKULSYJDRKMEIMZBWFTNWWWJLSNUNKRPKSBDYCZCGQWCAVTIU");

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
    msg.setTimeStamp(0.0422567083831);
    msg.setSource(21496U);
    msg.setSourceEntity(231U);
    msg.setDestination(29607U);
    msg.setDestinationEntity(214U);
    msg.target.assign("VNCKLJIGOFEBAQDWKTAHIGMKHPGMHJEQENLPRFUHPFNHMSMVLDTHFRTLTBBXTJFYXMXCVZODNTOQKJUBDNUBZHXEMZDRPWY");
    msg.max_speed = 0.787151198346;
    msg.speed_units = 234U;
    msg.lat = 0.268868805063;
    msg.lon = 0.911083850104;
    msg.z = 0.898151119559;
    msg.z_units = 8U;
    msg.custom.assign("XGGQROXQETXTNUKPNFYFSIVMTJZOFJIDMGBQJTBYYPLIIHUGWDHUENRAHDEHYYDRISWUUZFQIIMGBOQPMOQQZXSMKPWYPGHAMGXTJLCZIDGUPNJIZLEQEUYBPOVGCDFNWZPKNJBBLVVCCCMHVOENSUXWPAZELUJFAXQRRMWOCKBNQDKVZKTIDAFZLRWBCENWJGKJLRHKSZBVWDCSLFHRPSOHTDK");

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
    msg.setTimeStamp(0.721455562258);
    msg.setSource(35163U);
    msg.setSourceEntity(45U);
    msg.setDestination(10959U);
    msg.setDestinationEntity(57U);
    msg.target.assign("IUWKMBMSEAVPTGJOXGJBHMZXWUAZROUZHLGWDRACWSVCKMLEMNXZUFZTNSTKUUIEPBBRHYRFADAIGXFDLEDNFLHWPUINVWCIFHMJQEERXSLGYPYKPDDWPXCNYTTZTQKHZNMHSJSDFGFPIO");
    msg.max_speed = 0.942766275458;
    msg.speed_units = 69U;
    msg.lat = 0.482346767199;
    msg.lon = 0.747428133344;
    msg.z = 0.617403469012;
    msg.z_units = 226U;
    msg.custom.assign("RSIRTTQRMJ");

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
    msg.setTimeStamp(0.690888401845);
    msg.setSource(9431U);
    msg.setSourceEntity(208U);
    msg.setDestination(60288U);
    msg.setDestinationEntity(105U);
    msg.timeout = 34174U;
    msg.lat = 0.390077964323;
    msg.lon = 0.243937705221;
    msg.speed = 0.0321141866577;
    msg.speed_units = 140U;
    msg.custom.assign("SNRVOUJLBIEIMLWJIGCQKZHJMRTMSNVXPZHLGYCDBISAYQVSHFHAEXDPGFSFWYGEWDQAKDNWOZTJTYALPVBSIZLYXRUIAWQNEJODFXGYVTNXBI");

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
    msg.setTimeStamp(0.530421968992);
    msg.setSource(63292U);
    msg.setSourceEntity(73U);
    msg.setDestination(5513U);
    msg.setDestinationEntity(7U);
    msg.timeout = 33594U;
    msg.lat = 0.805030388377;
    msg.lon = 0.447599222747;
    msg.speed = 0.759332347424;
    msg.speed_units = 22U;
    msg.custom.assign("DNISVDTOCGKUTELOLWTFHQTWQLIGFUKJQWIECHBFRHMLSOZEUJQSCBANKSWJVOOVRHLTCGFZTWRURBAOAZDYVJYOARXFUZYWXXZPCEHBPJVCIRPPSMMAVDJGQKCZXAIKXKRGNNMEAIRGBYVSQUK");

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
    msg.setTimeStamp(0.178427373799);
    msg.setSource(47879U);
    msg.setSourceEntity(211U);
    msg.setDestination(34125U);
    msg.setDestinationEntity(207U);
    msg.timeout = 39399U;
    msg.lat = 0.420055478637;
    msg.lon = 0.340491802915;
    msg.speed = 0.450367844452;
    msg.speed_units = 136U;
    msg.custom.assign("JINURTYUCQNVPJLMQAYECHKIZVGBZNJFBVGCACLSJDBJHVAERKDRPQWMTGHFLUGBNIZDBZRUCDZELNXICKMOMMXIDXTPYTDRIJUQRWQOSZMDMEQWYBFFEVSLASEMANKRPXSWMRPYAIWGVCHSQVQFZGXQIEXLBEYKSKFUTDHUXVWNOLIHKFPNYLDFEHINPOURXWOMFSNAZELWCQXGOKUABAT");

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
    msg.setTimeStamp(0.796189944409);
    msg.setSource(5507U);
    msg.setSourceEntity(141U);
    msg.setDestination(47919U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.465380137995;
    msg.lon = 0.472599790077;
    msg.z = 0.335834631379;
    msg.z_units = 40U;
    msg.radius = 0.877718633454;
    msg.duration = 50052U;
    msg.speed = 0.0241966489989;
    msg.speed_units = 50U;
    msg.popup_period = 15326U;
    msg.popup_duration = 45642U;
    msg.flags = 52U;
    msg.custom.assign("YKAALSDRRUDFUJCLXYJEPWQLZCUWKHOKEURGLRZVDIRGAQZNSJZHBQDAMFPBJQBOBEBFRMKHOWJLIYIVJTDKTOYBJXNIXFKUAUNWJYMCAVHAHCGMSQEPXSXNCGVCZVSUDIIFZDTLETVPWEFGUCXEQWZVQANZGMRGSLNDZKFYHIPWCTYSTPOVHPSZIPVLSWNXOFMJTMCLGOSXPBNROGCXMEH");

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
    msg.setTimeStamp(0.0726243828904);
    msg.setSource(37661U);
    msg.setSourceEntity(77U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.391963212025;
    msg.lon = 0.706736211931;
    msg.z = 0.37209165272;
    msg.z_units = 13U;
    msg.radius = 0.681470360582;
    msg.duration = 28163U;
    msg.speed = 0.442324808887;
    msg.speed_units = 146U;
    msg.popup_period = 11575U;
    msg.popup_duration = 18501U;
    msg.flags = 10U;
    msg.custom.assign("NXUIPPROBWXVFTRJ");

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
    msg.setTimeStamp(0.150340469862);
    msg.setSource(59201U);
    msg.setSourceEntity(6U);
    msg.setDestination(9468U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.890280343221;
    msg.lon = 0.258035494506;
    msg.z = 0.642336996086;
    msg.z_units = 126U;
    msg.radius = 0.981279781951;
    msg.duration = 62398U;
    msg.speed = 0.912363110023;
    msg.speed_units = 216U;
    msg.popup_period = 16890U;
    msg.popup_duration = 45470U;
    msg.flags = 100U;
    msg.custom.assign("OOUXIFPALZYLQWDVJAXODRBNOREPBYUGPTMTGIPWFQHKTUJZDZSSEJEKUZMZVIBUSPLGLDVWCBRFQNQITHCEPPRPGTTGVOFQKWESCJAJURCAEBKPHOBZZMIXXZAINMMAVWSMHJSYMYENJJNHXOVJNDBKWVHHS");

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
    msg.setTimeStamp(0.109553759638);
    msg.setSource(61132U);
    msg.setSourceEntity(127U);
    msg.setDestination(58313U);
    msg.setDestinationEntity(24U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GTIEYZTOYBUPVUKEZYVEPXJUHVPSJXATNMKYJDCAKFMLKJZVLJQHDGHWDHFFDQGJYNVMMJOGXCLFEKPQWCVQHGBJNUAPLVKHLBVPTTWIFUUKSPLHRRIISRWXHZBTGQAWGISMBVZPEOCQLXRYKJWLACSTYZDWZMAAFOTF");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 53654U;
    tmp_tmp_msg_0_0.lat = 0.559681503085;
    tmp_tmp_msg_0_0.lon = 0.295446048646;
    tmp_tmp_msg_0_0.z = 0.26684472684;
    tmp_tmp_msg_0_0.z_units = 39U;
    tmp_tmp_msg_0_0.speed = 0.39244248282;
    tmp_tmp_msg_0_0.speed_units = 181U;
    tmp_tmp_msg_0_0.custom.assign("NNVBKOPGJAVXXHWBQMJIGNWKNBSEQSVIZRXQVAMUHV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Land tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.165856718366;
    tmp_tmp_msg_0_1.lon = 0.913252946657;
    tmp_tmp_msg_0_1.z = 0.731620820471;
    tmp_tmp_msg_0_1.z_units = 144U;
    tmp_tmp_msg_0_1.speed = 0.750990359148;
    tmp_tmp_msg_0_1.speed_units = 211U;
    tmp_tmp_msg_0_1.abort_z = 0.398702690723;
    tmp_tmp_msg_0_1.bearing = 0.657343663337;
    tmp_tmp_msg_0_1.glide_slope = 225U;
    tmp_tmp_msg_0_1.glide_slope_alt = 0.0265783720988;
    tmp_tmp_msg_0_1.custom.assign("KGQVQISWLJQKZGDGBVWOSBUHIOWGBIANDEZFNPJFZSGFVIDKTHBTPUPPAYGXCMODCGFHYSDAHQMNUAPNOOKZAYRM");
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
    msg.setTimeStamp(0.312295435216);
    msg.setSource(65018U);
    msg.setSourceEntity(233U);
    msg.setDestination(63323U);
    msg.setDestinationEntity(52U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DHMMDTQBEMPEKNPWWLWAUXGKUZVKIETOPOYSANFNCXVKITOPGCQYZRIJJDJZTHLUAWPBDBUZTODQVOUHNIFADRNOCSYSMCFFEBVENPDLQSQBZXRRXKLNAVLFWUDFZYCFJCJCPFUVEKKTIDGIYKMAVXLMGBHGIBNWAUSYJQMT");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 25948U;
    tmp_tmp_msg_0_0.lat = 0.167444536273;
    tmp_tmp_msg_0_0.lon = 0.852371575893;
    tmp_tmp_msg_0_0.z = 0.348644566345;
    tmp_tmp_msg_0_0.z_units = 25U;
    tmp_tmp_msg_0_0.speed = 0.228305162515;
    tmp_tmp_msg_0_0.speed_units = 29U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.180958095344;
    tmp_tmp_tmp_msg_0_0_0.y = 0.0130649388561;
    tmp_tmp_tmp_msg_0_0_0.z = 0.906609945405;
    tmp_tmp_tmp_msg_0_0_0.t = 0.34163088212;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("UBHOYQTTZBIRWHVXSPIAWZGKAUHBFMXCGTQBMRZEUAHMGQASCOMLCRRYEJAINWLDYEPVQQVNDKIHPCULTAFYUWGINGN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CloseSession tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sessid = 3745948436U;
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
    msg.setTimeStamp(0.0128876867662);
    msg.setSource(8266U);
    msg.setSourceEntity(151U);
    msg.setDestination(7506U);
    msg.setDestinationEntity(115U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XFKKXSNRGFALOOWNSVAGSTNQSJYOOSWMOLUJCHEHEKYTUCAXFJOL");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 14617U;
    tmp_tmp_msg_0_0.lat = 0.509297268402;
    tmp_tmp_msg_0_0.lon = 0.739089819839;
    tmp_tmp_msg_0_0.z = 0.587823932828;
    tmp_tmp_msg_0_0.z_units = 206U;
    tmp_tmp_msg_0_0.speed = 0.67003793478;
    tmp_tmp_msg_0_0.speed_units = 245U;
    tmp_tmp_msg_0_0.roll = 0.40083235595;
    tmp_tmp_msg_0_0.pitch = 0.431354290519;
    tmp_tmp_msg_0_0.yaw = 0.472781248123;
    tmp_tmp_msg_0_0.custom.assign("JJHFSPZSZYEWOWBKQGKUPBDDCTPEDMUBARWLMKKNRCNDVNZRTGVPYXJHFGQQILVSKHVDVWLNEFBUTOETZSRINZTAWVSMBXXQHHNUBTBYKXCBFCQVKVUGQTURXNELBKQCOSPMAPDUCFECEYWVHACMAKTLYPGMGGNWVYJSDISAJJLCRZRKOSOLIXZRQSTELWCOWUPJALQIMGQYRDEIMGFPOZWYZGJHM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RemoteSensorInfo tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id.assign("ANZEMPTGJZKEUVNXTKJIQQGKEUFRBBRIYW");
    tmp_tmp_msg_0_1.sensor_class.assign("UKZCGOJBHDGFSWJVWENMYAFKRUYQXANQCXUAPUGVPCMASVQOPMPDPQUIEOSFPZNNMCOTLWZISTHRVUSCMSLBVOJGVK");
    tmp_tmp_msg_0_1.lat = 0.992452820908;
    tmp_tmp_msg_0_1.lon = 0.338884482899;
    tmp_tmp_msg_0_1.alt = 0.587723859383;
    tmp_tmp_msg_0_1.heading = 0.741297961925;
    tmp_tmp_msg_0_1.data.assign("WGFWOWSEPHXOPILTQGDOFLPJ");
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
    msg.setTimeStamp(0.295629868037);
    msg.setSource(15534U);
    msg.setSourceEntity(38U);
    msg.setDestination(22541U);
    msg.setDestinationEntity(239U);
    msg.timeout = 63457U;
    msg.lat = 0.0236362019136;
    msg.lon = 0.804709327573;
    msg.z = 0.79663634148;
    msg.z_units = 198U;
    msg.speed = 0.35809245192;
    msg.speed_units = 42U;
    msg.bearing = 0.251825849853;
    msg.width = 0.890818993002;
    msg.direction = 17U;
    msg.custom.assign("PDZJMAPDZUATLPKDGWRSIOGXHZYOVFOQIHACSSBEQFYDBW");

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
    msg.setTimeStamp(0.186584415252);
    msg.setSource(26472U);
    msg.setSourceEntity(74U);
    msg.setDestination(23896U);
    msg.setDestinationEntity(122U);
    msg.timeout = 64975U;
    msg.lat = 0.128700402895;
    msg.lon = 0.474492636394;
    msg.z = 0.628061564555;
    msg.z_units = 18U;
    msg.speed = 0.378780404666;
    msg.speed_units = 166U;
    msg.bearing = 0.394204525514;
    msg.width = 0.248809863154;
    msg.direction = 238U;
    msg.custom.assign("IACRWWIOPPPDIYXYHTDKACYDYIXBKZSCHPKTGWKFILBMXEZUNNVJRDUTCBQSBGHNVKMNOULPSXEVIATGENEYJERQUUNWJJSERWSKRQMXFTNMJFTNAJFDLIEZPQWRCIWQZZOXOKYLRMVLFSTZXODIGNWRQBJUIOHQZOFAKZSVCUMTZLPYGY");

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
    msg.setTimeStamp(0.00264480444887);
    msg.setSource(40489U);
    msg.setSourceEntity(37U);
    msg.setDestination(27078U);
    msg.setDestinationEntity(22U);
    msg.timeout = 42656U;
    msg.lat = 0.65053871172;
    msg.lon = 0.65905884297;
    msg.z = 0.477175977003;
    msg.z_units = 236U;
    msg.speed = 0.270165399787;
    msg.speed_units = 184U;
    msg.bearing = 0.238266893098;
    msg.width = 0.129504805465;
    msg.direction = 65U;
    msg.custom.assign("JBJCJYZFWUAEHGZHMRXLMZGKUPWPQBGZHZNAYGDCSEUTXF");

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
    msg.setTimeStamp(0.47831428299);
    msg.setSource(33872U);
    msg.setSourceEntity(230U);
    msg.setDestination(17938U);
    msg.setDestinationEntity(235U);
    msg.op_mode = 125U;
    msg.error_count = 206U;
    msg.error_ents.assign("TFTTRQIHJJVFC");
    msg.maneuver_type = 15025U;
    msg.maneuver_stime = 0.285405736245;
    msg.maneuver_eta = 65171U;
    msg.control_loops = 1595836118U;
    msg.flags = 171U;
    msg.last_error.assign("NIXQBBUNXJMKZIPMSKSKPBJSSRYCWUKTACNCFWHMGGQLDUBPTKKZVTAMYUAHAGYBRSCVEEQCVXXFPMIGPSHFGXBLYJOPGXLHJNGVDOIKBW");
    msg.last_error_time = 0.115259651315;

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
    msg.setTimeStamp(0.750328170245);
    msg.setSource(57645U);
    msg.setSourceEntity(89U);
    msg.setDestination(59223U);
    msg.setDestinationEntity(65U);
    msg.op_mode = 211U;
    msg.error_count = 230U;
    msg.error_ents.assign("JWMYAXKJUGDRDNIRHCJBSEYOMYFWEXNLLEEPRXBYFEFTPYQVONCOIRSTALRAGGJDAM");
    msg.maneuver_type = 54924U;
    msg.maneuver_stime = 0.933534408717;
    msg.maneuver_eta = 26672U;
    msg.control_loops = 3778029067U;
    msg.flags = 121U;
    msg.last_error.assign("EQTSMRTRSRTOSOUEVMZBCNUXUEDHUXLFNEBILBTZJZXXHEMMCLVLCJNOYPXVLYKBURHKMMGMDYIZCIJEEUTFXWNPPDOZOVFPIVDVDJJQJNEYSDZMIQSZLKQVMBGOPRFYBNUMOHSAVKROQSKCLANHAHHWKCAWGWRIHTUYBINXPIDOHLVGYSXGAZGBWWDNAYJQVRGEBLJJDESWYD");
    msg.last_error_time = 0.238941958182;

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
    msg.setTimeStamp(0.0385587531597);
    msg.setSource(37287U);
    msg.setSourceEntity(58U);
    msg.setDestination(34545U);
    msg.setDestinationEntity(73U);
    msg.op_mode = 157U;
    msg.error_count = 0U;
    msg.error_ents.assign("HYMRIOSKGPHVWVDGUDJXYUDHLQVSWGLKRRAGTWNFXA");
    msg.maneuver_type = 13085U;
    msg.maneuver_stime = 0.940174781679;
    msg.maneuver_eta = 60070U;
    msg.control_loops = 2716112378U;
    msg.flags = 7U;
    msg.last_error.assign("ODUBNUTOBBQYTKSUTBWTEMANDFVHWRKSFYPSJEFPUCMKXUZQKGMCXKOUYFZXDGEAXZRNEHNQXIEVGQSJWASOZXUNPQGVWHHWOXSHQDJFTYSWIRGBRSABYWMMIFTGULLPZRVBJQNCLYCEXZLNPPRDAGKOJZVHBUWQIAEIMEMMHCYKLDLXRTXNMQZIKIDTQEMJPAVHKYKA");
    msg.last_error_time = 0.44837763392;

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
    msg.setTimeStamp(0.41167202501);
    msg.setSource(33977U);
    msg.setSourceEntity(240U);
    msg.setDestination(46048U);
    msg.setDestinationEntity(211U);
    msg.type = 251U;
    msg.request_id = 29741U;
    msg.command = 188U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.739919251873;
    tmp_msg_0.lon = 0.0179201174175;
    tmp_msg_0.z = 0.0715264851134;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.radius = 0.902796017414;
    tmp_msg_0.duration = 6502U;
    tmp_msg_0.speed = 0.502525094119;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.popup_period = 3322U;
    tmp_msg_0.popup_duration = 39842U;
    tmp_msg_0.flags = 37U;
    tmp_msg_0.custom.assign("KANHZUHYRIFTKOUQYADGNJWGQZOXRBTGNDPEBFRYQKHQDWLWNXLWALKGLFOXKYQOYSOEVRLZLYQWUZHCSBPWBEVYDZSFNIAXMPHHVTOAMBCKCAJIQBXXSSZIZIEUFMUWEWMDPCMECETAOJUCVFIXSDZMNATVODZBLTFRNO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64490U;
    msg.info.assign("BTETNNHZAEHSHLGGWGOWRKKQLQ");

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
    msg.setTimeStamp(0.569743089296);
    msg.setSource(33638U);
    msg.setSourceEntity(127U);
    msg.setDestination(37647U);
    msg.setDestinationEntity(56U);
    msg.type = 217U;
    msg.request_id = 32906U;
    msg.command = 234U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 34886U;
    tmp_msg_0.lat = 0.646195344306;
    tmp_msg_0.lon = 0.257300583501;
    tmp_msg_0.z = 0.442094371366;
    tmp_msg_0.z_units = 122U;
    tmp_msg_0.speed = 0.114796985381;
    tmp_msg_0.speed_units = 212U;
    tmp_msg_0.duration = 28501U;
    tmp_msg_0.radius = 0.531239874269;
    tmp_msg_0.flags = 107U;
    tmp_msg_0.custom.assign("DQGAPKEVMLLZAYAHGZYKQYDUZIQJXXWSFORETWTFRVAXBKBUBMTWZTWDNOYHQSQKPRAJAHSOQCCVBDOLLKCXGIZZSHQIEBKTHQRRCKXZWEDBSVINZQVPSCENNZEPNLVNBGUKDJYPWKWHLCLYXGUBNMWGJOHBMRTC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49262U;
    msg.info.assign("CDVCCVKPESGHEZBLFBZQHEGOMVNQWKWTWXBDHJKNDWQYZXYAAY");

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
    msg.setTimeStamp(0.562125053882);
    msg.setSource(30510U);
    msg.setSourceEntity(141U);
    msg.setDestination(58142U);
    msg.setDestinationEntity(4U);
    msg.type = 67U;
    msg.request_id = 6869U;
    msg.command = 190U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.920992036087;
    tmp_msg_0.lon = 0.173146501663;
    tmp_msg_0.z = 0.554850112754;
    tmp_msg_0.z_units = 86U;
    tmp_msg_0.speed = 0.753770046579;
    tmp_msg_0.speed_units = 74U;
    tmp_msg_0.takeoff_pitch = 0.53115434108;
    tmp_msg_0.custom.assign("BZVZZRWYOEMSHACBSBACXMJEPHEQOHLKXEONHXXBRJDOLIAVWYZLYHJCDBERMRUZVPWELGPTDJTVOHKBAKTGUYGYPIDOBHWOKWUWKCBNKCUGIESNFTWAUKSXPGJVJCGEYQQATZOIKRXUFMJUMXGVAKFLLOSZOQWQURCLIPDERXDFNZPMKW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64369U;
    msg.info.assign("VCVYSJPRAUAYDPTRJVPFRKLDDGSMGZPFCZNYWJQKIXNCLAZMHWQZCYTFMXTVYIIJPZQQFL");

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
    msg.setTimeStamp(0.882187987577);
    msg.setSource(36198U);
    msg.setSourceEntity(151U);
    msg.setDestination(1770U);
    msg.setDestinationEntity(126U);
    msg.command = 112U;
    msg.entities.assign("GHJJMYLOIANMLJJTHRKQNUWWQMZBSPDQBXJFYGWIAUJNKBZQEMSOUNIZDFROVZHWRPCCEXZCZTEQLBEKBAVMJAGTYJLIOSCWAVREDCMUTLCGHXOAYKSDYJPXUQEFDSHTBRIPTDYSXIFHMGMZGBZAZXVKBINWSUPCFBLFLTTKVBFMQENAETOWCPGPYHRFVXRGFDVODCFUNPHMYCKGUQTOVZIXSLLYHHYIV");

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
    msg.setTimeStamp(0.906187819407);
    msg.setSource(443U);
    msg.setSourceEntity(248U);
    msg.setDestination(27301U);
    msg.setDestinationEntity(186U);
    msg.command = 215U;
    msg.entities.assign("MTVXPNFUPNIPPGTWGOKQVIIXUIQUOHAZFLDOFBWZGRDXAWEUZRHZJLVRDCOCYYSNERSXTJCVBXDDNP");

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
    msg.setTimeStamp(0.204137607777);
    msg.setSource(25967U);
    msg.setSourceEntity(133U);
    msg.setDestination(22230U);
    msg.setDestinationEntity(236U);
    msg.command = 45U;
    msg.entities.assign("LKFGZAOIMCWCZDELECTVRPXGDZXGNBWLSIVDQOGXEJRUGLVOFDAOZPESWHYHIUIJMVOZRHGOPTUSZCRZPJSAPISKFZGTQUWKOVNQDYBMVHVNRHQYLURMHMMPFEWABYOFAESPMUVYBJOKWKXLDRCXRWNKQSWJMTLCTBXUNRXYUPYIVHNCCJWISEUTRJBEDQBJYNVQGJGDQBFXCNAYZITSFKNLKMQTYHPOBWDTKLDJAFBUFHELZGCFMA");

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
    msg.setTimeStamp(0.324775962461);
    msg.setSource(40858U);
    msg.setSourceEntity(59U);
    msg.setDestination(32382U);
    msg.setDestinationEntity(235U);
    msg.mcount = 228U;
    msg.mnames.assign("QSXEJVXJOQJHNXYWCYSKRROVFZGIBVUJPBISSCQZMXTLCHCMFNFHMWKZIBRERQCSYALXULJHHGIWTBALWSLFCGIOFYKHDJNMAQODANTGPYVVNZPEPNIEGTIUWMYDQEHETQZGDCAQFNKFMSVLPOLIMCDTONENZMYQAOBOVVOUJVKLGAARBJRGUKEZOSAIXURJKZQLBBADFNRYMWKFFSYZUBHDBKPXCHRUUWPUTEXWESXPXJV");
    msg.ecount = 133U;
    msg.enames.assign("UFIXRKHFMQWKPLIKEWZSVLGSYGTAQSIGTBNKHNDJDFIGMRPHUDDCTTKNLVEMUNBRROACBXBIRONFVMDRWJYCGGBXAZKRDJYPUQZJWHLGPPOTHNGWLOJJUKCXSLDLTYQFBESEFJFOBOPZQDVQSXLZUTWWVEZUACHNCAPERLTMZAHAYGGSNOXXJYYRVEMHDYKIMKZQBFVXFKCSIACIPEILOVIEAHRYPMZBQDTQSFHNVUEMXBOZSCW");
    msg.ccount = 68U;
    msg.cnames.assign("TVDQVSULDDGZUSWEGMLEHSGOPLLNI");
    msg.last_error.assign("NFDLFLUTQHDOGUXVHMYPZJVQTTITIOIWICRBOPZAYPYPDXQHYUCMQNPDFHGBU");
    msg.last_error_time = 0.0177576515914;

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
    msg.setTimeStamp(0.861237009342);
    msg.setSource(35480U);
    msg.setSourceEntity(123U);
    msg.setDestination(61418U);
    msg.setDestinationEntity(10U);
    msg.mcount = 179U;
    msg.mnames.assign("ZFUZBCTOTVZZQMSEBUMQLDHQHOFPPKLSCDWLTALWGDLMAWYQJWJTURJKSFLEECEZNEDTGMGKQEORVYLSNTXMEBYFXJBAOUSZRPKPPBDXCTNDVXDRFWWVIWQMOKMAUOYAXHLZXUIANGFJTDOUJIXKWVPKEHGGLVQNINIXDJSNVZPYOMBBSBWYKEQSMAPCZFXQCYHROGVFHGJWCRYTARAFCBINGHSVOEXCHTPHLC");
    msg.ecount = 178U;
    msg.enames.assign("RNUGFSUFIOJEVPEWDUYTGNOGQZQHCPWYOMADLEUSNADJRMFYJYPQDERPEFKUAWISKZELERKCBZZQKPKZQRNRWAOXGAUEDNIWXOHCCBTVXAXTFCJSHDSUKWOBSMMFEHRVOGLTABHBAQDGCHSFOXNYKHBTFXCTXJMPCQJBINLWLYGMZRHKSFHYXPYCTOLUUXMXZWBTARLPGDJJQIWAYFMSTQY");
    msg.ccount = 72U;
    msg.cnames.assign("DHBHSBXCKRMNMMVFCAFZGWUSPEYCQSPISOFESMOVQDXMLVANHWZFIKHHOSYKOEZJGIBUIBLTRXPMSQMENQDWBZVYTWAPKXQYXGSAJICLTQRDFOMRSDLNRFCJOIKPOOPMGHYNGUHXJITZCKCJFQERDZBDTGEBWQGTBCW");
    msg.last_error.assign("CRROLUIGEWMFOQPAWSOWFCOFUNVIOAFZLXXRJCDJKQXDWKMGQDTVJVUIIKZHEHYRPRDCZYCNEMYMHGQXDGPPPQIKJCKSPSOILFHFKFAIGNHTPEDRTZOVTJDAQMWCUUEEBJMLBBJZXUDRQYQXHLZTNSLTBEZITGXASVQNLBNNNML");
    msg.last_error_time = 0.624671515686;

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
    msg.setTimeStamp(0.720933119988);
    msg.setSource(61215U);
    msg.setSourceEntity(245U);
    msg.setDestination(2145U);
    msg.setDestinationEntity(199U);
    msg.mcount = 186U;
    msg.mnames.assign("SCEWQQZGCHFPNEAXMMQKHNRKYH");
    msg.ecount = 4U;
    msg.enames.assign("FMUCLRNNUMQMRZSDWESIMTNYMDENGPOQGJDRIHLSFDQZARAFXYMUROVCKKAWXGCYXVQFCCFPQRYLRKLBIXKIUWKIFPUJQGIGYNKOBVEKGYQBQXPAWFYZTHVEVMTTPIEECWCWFQJAGVPTVDHFUPSHVAURDZTBMESSIPYENHRJDDDQNCEXCJAHLBZPFHMWZJOV");
    msg.ccount = 45U;
    msg.cnames.assign("YMPZJBGBWOAFBHFJVVTGFXX");
    msg.last_error.assign("DJPOUPAFQXVUOHZNKQOMJZQJYMNUTXBVDTNRFOTODMSJGVJX");
    msg.last_error_time = 0.0146520770319;

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
    msg.setTimeStamp(0.0260167149397);
    msg.setSource(45781U);
    msg.setSourceEntity(75U);
    msg.setDestination(23872U);
    msg.setDestinationEntity(231U);
    msg.mask = 45U;
    msg.max_depth = 0.71781333313;
    msg.min_altitude = 0.562111438428;
    msg.max_altitude = 0.771321730798;
    msg.min_speed = 0.136510881716;
    msg.max_speed = 0.516038700481;
    msg.max_vrate = 0.00237013969422;
    msg.lat = 0.470418279796;
    msg.lon = 0.690578646353;
    msg.orientation = 0.66289324493;
    msg.width = 0.402584729935;
    msg.length = 0.531068247902;

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
    msg.setTimeStamp(0.216120270055);
    msg.setSource(27645U);
    msg.setSourceEntity(254U);
    msg.setDestination(59257U);
    msg.setDestinationEntity(226U);
    msg.mask = 201U;
    msg.max_depth = 0.680311787301;
    msg.min_altitude = 0.1736097109;
    msg.max_altitude = 0.430648698842;
    msg.min_speed = 0.101499449092;
    msg.max_speed = 0.873838647251;
    msg.max_vrate = 0.643368730259;
    msg.lat = 0.771379618548;
    msg.lon = 0.534817607355;
    msg.orientation = 0.293320832212;
    msg.width = 0.278213794695;
    msg.length = 0.0764049155393;

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
    msg.setTimeStamp(0.146363869684);
    msg.setSource(1130U);
    msg.setSourceEntity(24U);
    msg.setDestination(14704U);
    msg.setDestinationEntity(231U);
    msg.mask = 172U;
    msg.max_depth = 0.520946541081;
    msg.min_altitude = 0.906916084389;
    msg.max_altitude = 0.0993620248813;
    msg.min_speed = 0.480506051809;
    msg.max_speed = 0.217887418769;
    msg.max_vrate = 0.7636409971;
    msg.lat = 0.702004703821;
    msg.lon = 0.195409201896;
    msg.orientation = 0.27155486444;
    msg.width = 0.442230708798;
    msg.length = 0.156942437625;

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
    msg.setTimeStamp(0.0530927848386);
    msg.setSource(17073U);
    msg.setSourceEntity(113U);
    msg.setDestination(20513U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.156182921762);
    msg.setSource(41879U);
    msg.setSourceEntity(246U);
    msg.setDestination(57678U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.926841607774);
    msg.setSource(48023U);
    msg.setSourceEntity(75U);
    msg.setDestination(5002U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.961820345115);
    msg.setSource(50887U);
    msg.setSourceEntity(67U);
    msg.setDestination(46412U);
    msg.setDestinationEntity(147U);
    msg.duration = 11284U;

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
    msg.setTimeStamp(0.145379376337);
    msg.setSource(26612U);
    msg.setSourceEntity(88U);
    msg.setDestination(7042U);
    msg.setDestinationEntity(115U);
    msg.duration = 7968U;

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
    msg.setTimeStamp(0.184720806994);
    msg.setSource(35748U);
    msg.setSourceEntity(128U);
    msg.setDestination(46310U);
    msg.setDestinationEntity(229U);
    msg.duration = 45045U;

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
    msg.setTimeStamp(0.920454814191);
    msg.setSource(47453U);
    msg.setSourceEntity(253U);
    msg.setDestination(5821U);
    msg.setDestinationEntity(150U);
    msg.enable = 115U;
    msg.mask = 2593106102U;
    msg.scope_ref = 241179234U;

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
    msg.setTimeStamp(0.325135351525);
    msg.setSource(53086U);
    msg.setSourceEntity(85U);
    msg.setDestination(35587U);
    msg.setDestinationEntity(67U);
    msg.enable = 167U;
    msg.mask = 2265784872U;
    msg.scope_ref = 2101347996U;

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
    msg.setTimeStamp(0.743110469994);
    msg.setSource(39125U);
    msg.setSourceEntity(185U);
    msg.setDestination(16290U);
    msg.setDestinationEntity(26U);
    msg.enable = 158U;
    msg.mask = 670309281U;
    msg.scope_ref = 508415007U;

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
    msg.setTimeStamp(0.363959564369);
    msg.setSource(764U);
    msg.setSourceEntity(124U);
    msg.setDestination(29450U);
    msg.setDestinationEntity(25U);
    msg.medium = 68U;

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
    msg.setTimeStamp(0.498682311517);
    msg.setSource(482U);
    msg.setSourceEntity(81U);
    msg.setDestination(26474U);
    msg.setDestinationEntity(58U);
    msg.medium = 58U;

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
    msg.setTimeStamp(0.195440024384);
    msg.setSource(65168U);
    msg.setSourceEntity(75U);
    msg.setDestination(5914U);
    msg.setDestinationEntity(138U);
    msg.medium = 214U;

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
    msg.setTimeStamp(0.434269058753);
    msg.setSource(52201U);
    msg.setSourceEntity(59U);
    msg.setDestination(41663U);
    msg.setDestinationEntity(80U);
    msg.value = 0.669211059411;
    msg.type = 219U;

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
    msg.setTimeStamp(0.0895790278627);
    msg.setSource(50259U);
    msg.setSourceEntity(216U);
    msg.setDestination(40214U);
    msg.setDestinationEntity(15U);
    msg.value = 0.323182571531;
    msg.type = 245U;

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
    msg.setTimeStamp(0.353786103132);
    msg.setSource(23258U);
    msg.setSourceEntity(62U);
    msg.setDestination(31437U);
    msg.setDestinationEntity(145U);
    msg.value = 0.0174499701632;
    msg.type = 239U;

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
    msg.setTimeStamp(0.396058098816);
    msg.setSource(35002U);
    msg.setSourceEntity(38U);
    msg.setDestination(29459U);
    msg.setDestinationEntity(117U);
    msg.possimerr = 0.585883660255;
    msg.converg = 0.307821487442;
    msg.turbulence = 0.0459205453004;
    msg.possimmon = 58U;
    msg.commmon = 232U;
    msg.convergmon = 22U;

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
    msg.setTimeStamp(0.360316118442);
    msg.setSource(32100U);
    msg.setSourceEntity(223U);
    msg.setDestination(35200U);
    msg.setDestinationEntity(15U);
    msg.possimerr = 0.89117711339;
    msg.converg = 0.66528154931;
    msg.turbulence = 0.757611441996;
    msg.possimmon = 29U;
    msg.commmon = 114U;
    msg.convergmon = 233U;

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
    msg.setTimeStamp(0.139354525726);
    msg.setSource(51371U);
    msg.setSourceEntity(216U);
    msg.setDestination(49097U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.888437659478;
    msg.converg = 0.624936054214;
    msg.turbulence = 0.497172578245;
    msg.possimmon = 112U;
    msg.commmon = 29U;
    msg.convergmon = 238U;

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
    msg.setTimeStamp(0.0592251443386);
    msg.setSource(9654U);
    msg.setSourceEntity(159U);
    msg.setDestination(6489U);
    msg.setDestinationEntity(232U);
    msg.autonomy = 4U;
    msg.mode.assign("YNRWXEOCCJEHHVFLOSGOZEIWILHHWMDGVWABUOTZQYIYCASCDXKVGKWUXNTCTPTJZFQHOLCHAMBOABWQISRGAINHJEQPKYIULQFZNNJBSSLTFKBSPAQAGEJPZUTGDSABTZBMODMXXGKXZJHHIZXPODWGGQWLXFMSTABBOVDYEZSVWFRTMREFPRYCROKIENTQPBDVIFUKXNAJNCDKNVUHVXMPFQLYJMLGLRDWMCRKVFMUPUYDUQVIRKZUE");

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
    msg.setTimeStamp(0.164493302705);
    msg.setSource(40544U);
    msg.setSourceEntity(217U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(152U);
    msg.autonomy = 232U;
    msg.mode.assign("QFQPXQDDZHMTXPTEPBLIMKGHUZZRXTJZYGVPXYWNCLUPRIUOBQEWWQRORITNEHQUAAAYNWSAFQNCEGHLXQKLTLYEDMTMHCCEDUMJNXLKNOWKECEAYHBKICVUWZABSYRBMKFVIIUGRFHXGYQEGRJMFPCDOOTOSDBAJJVNDRBPQKHMGOGVIWXFXSMSGKNOOYKNMAFSASLC");

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
    msg.setTimeStamp(0.52558566297);
    msg.setSource(58472U);
    msg.setSourceEntity(20U);
    msg.setDestination(45282U);
    msg.setDestinationEntity(85U);
    msg.autonomy = 159U;
    msg.mode.assign("MFNKSYCKSBGMUYJTFOIUZQXTAUYKJWYDBLTDVEFPIATNPEPRLFLYSTIHQWVFAVRCSLNMNJZCPIWNAMKKSHAQKUWIKRGTVGBGQPFVPOEDXUMBUAHEMGLQEFWHVVTAADJJXJCMGLOFOIUQTRWHPJZIOZPCCBTWGVXCOSOJDSNWYHZHIZKRLREWNGRCILRPHFRIJSZBDUXZQCMXYBSXUGLWQEBOQDKJKAVDNFDGHOABYLSNYOXYECEUR");

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
    msg.setTimeStamp(0.965485693719);
    msg.setSource(20572U);
    msg.setSourceEntity(235U);
    msg.setDestination(2076U);
    msg.setDestinationEntity(172U);
    msg.type = 74U;
    msg.op = 29U;
    msg.possimerr = 0.282537638641;
    msg.converg = 0.322287950003;
    msg.turbulence = 0.118173081494;
    msg.possimmon = 126U;
    msg.commmon = 38U;
    msg.convergmon = 141U;

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
    msg.setTimeStamp(0.0770558143839);
    msg.setSource(50618U);
    msg.setSourceEntity(84U);
    msg.setDestination(12789U);
    msg.setDestinationEntity(148U);
    msg.type = 129U;
    msg.op = 81U;
    msg.possimerr = 0.888944907115;
    msg.converg = 0.249610140793;
    msg.turbulence = 0.105677595132;
    msg.possimmon = 206U;
    msg.commmon = 1U;
    msg.convergmon = 8U;

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
    msg.setTimeStamp(0.655895774866);
    msg.setSource(41527U);
    msg.setSourceEntity(220U);
    msg.setDestination(24580U);
    msg.setDestinationEntity(124U);
    msg.type = 107U;
    msg.op = 214U;
    msg.possimerr = 0.0933758831827;
    msg.converg = 0.160237352252;
    msg.turbulence = 0.7946224172;
    msg.possimmon = 74U;
    msg.commmon = 244U;
    msg.convergmon = 3U;

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
    msg.setTimeStamp(0.173729490711);
    msg.setSource(4356U);
    msg.setSourceEntity(62U);
    msg.setDestination(60548U);
    msg.setDestinationEntity(228U);
    msg.op = 112U;
    msg.comm_interface = 56U;
    msg.period = 63336U;
    msg.sys_dst.assign("MIGTQPWVQWITJCFPXHGLRRNYWNKDCWGSYMUXEUEEGVDBFKXGDXHWYDGQLRHQVOVIJBCAQLDEZVDHTDHVLBMCPNXYANFXFLBOYWRERUJUSZTAFPOOOUHPTMCSOAYIVNFUKMHVIOIGCKVNXSUJWJUACOZTOTAFQFMOTG");

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
    msg.setTimeStamp(0.903644074332);
    msg.setSource(55723U);
    msg.setSourceEntity(16U);
    msg.setDestination(44831U);
    msg.setDestinationEntity(177U);
    msg.op = 167U;
    msg.comm_interface = 7U;
    msg.period = 39510U;
    msg.sys_dst.assign("LKBNAFDMLPWZCP");

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
    msg.setTimeStamp(0.867645392085);
    msg.setSource(10577U);
    msg.setSourceEntity(199U);
    msg.setDestination(45360U);
    msg.setDestinationEntity(130U);
    msg.op = 88U;
    msg.comm_interface = 149U;
    msg.period = 52291U;
    msg.sys_dst.assign("OWMKTJLNMFBUGLIEDPNGNDIIQFRKHPJ");

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
    msg.setTimeStamp(0.298293623675);
    msg.setSource(10909U);
    msg.setSourceEntity(197U);
    msg.setDestination(39142U);
    msg.setDestinationEntity(176U);
    msg.stime = 1703570013U;
    msg.latitude = 0.320236481248;
    msg.longitude = 0.545399410401;
    msg.altitude = 7560U;
    msg.depth = 9201U;
    msg.heading = 12500U;
    msg.speed = -21165;
    msg.fuel = -30;
    msg.exec_state = 20;
    msg.plan_checksum = 48297U;

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
    msg.setTimeStamp(0.165001658823);
    msg.setSource(7486U);
    msg.setSourceEntity(29U);
    msg.setDestination(35727U);
    msg.setDestinationEntity(137U);
    msg.stime = 3547676296U;
    msg.latitude = 0.102206287425;
    msg.longitude = 0.524387388756;
    msg.altitude = 23999U;
    msg.depth = 49896U;
    msg.heading = 27782U;
    msg.speed = -28146;
    msg.fuel = -22;
    msg.exec_state = -78;
    msg.plan_checksum = 29976U;

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
    msg.setTimeStamp(0.992482753113);
    msg.setSource(31047U);
    msg.setSourceEntity(41U);
    msg.setDestination(34487U);
    msg.setDestinationEntity(158U);
    msg.stime = 3034821941U;
    msg.latitude = 0.745397213037;
    msg.longitude = 0.52818997291;
    msg.altitude = 2501U;
    msg.depth = 2448U;
    msg.heading = 41958U;
    msg.speed = 7232;
    msg.fuel = -70;
    msg.exec_state = -91;
    msg.plan_checksum = 18957U;

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
    msg.setTimeStamp(0.557199031836);
    msg.setSource(22674U);
    msg.setSourceEntity(250U);
    msg.setDestination(16060U);
    msg.setDestinationEntity(51U);
    msg.req_id = 18053U;
    msg.comm_mean = 203U;
    msg.destination.assign("UNRILIDWRBSZKRMHLCXGLYDZBKADJEXZURXCBCQNFCAVNIKGFWL");
    msg.deadline = 0.547393981139;
    msg.range = 0.921543052436;
    msg.data_mode = 193U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.749636884771;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MIGOFSNCNCRSJDAOZSRCZUXPTIPRWSLGYYWTPXLARXAIQCVGSCKYUIGULOBKOVQOXDEFHJBMZFJFJEHFLTDPPPFANOZMOYMSRPYPHOTSEMVINBGMDHDCGYHAMLMZAUDWCBWQDWVUNQIBYAMGUTVNQZVLEBBHTQXAQUHXYWXZDSBEKEFYRKWQJYZSKLF");
    const char tmp_msg_1[] = {71, 8, 99, -26, 11, 102, 70, 102, -79, -57, -121, 101, 105, 109, 67, 80, -24, -112, 78, 125, -122, 116, -96, -58, 79, 32, -6, -53, -88, -72, 116, -126, 30, 99, -60, 26, -27, 61, -63, 17, -45, -81, -20, -86, -31, -2, 39, 92, 89, -38, 41, -74, -126, -81, 101, 75, -54, 10, 0, -123, 87, -14, -43, -106, -72, 102, -105, 108, 63, 29, 36, -80, -49, -113, -30, 102, 45, -57, 8, -73, 44, -120, -95, 56, -38, 123, 32, 17, -118, -111, 34, 121, -11, -48, 60, -104, -118, 65, -84, -10, -5, -21, -64, 10, 39, -120, 118, 89, -61, 71, -109, -38, 90, -12, -93, -8, -117, 112, -72, 14, -78, -17, 34, 41, -1, 43, -122, 120};
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
    msg.setTimeStamp(0.533447848721);
    msg.setSource(42054U);
    msg.setSourceEntity(42U);
    msg.setDestination(1036U);
    msg.setDestinationEntity(95U);
    msg.req_id = 12798U;
    msg.comm_mean = 212U;
    msg.destination.assign("XROIXZOQQPJPTCZDUWFNZUAMUYCBFEJIKTRDUALDECFYYKGYHFTKUCWILTGRASSJOPBCZOCLLZRLFEJGNCUNIBXMSJFIQKSRUUGXSFEOWBOQMSHSHTSAKXQVNYRWE");
    msg.deadline = 0.932808754501;
    msg.range = 0.608995883603;
    msg.data_mode = 43U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 55992U;
    tmp_msg_0.lat = 0.275768123077;
    tmp_msg_0.lon = 0.10425720038;
    tmp_msg_0.z = 0.297131133025;
    tmp_msg_0.z_units = 160U;
    tmp_msg_0.amplitude = 0.203868997923;
    tmp_msg_0.pitch = 0.0969092767595;
    tmp_msg_0.speed = 0.382080881362;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.custom.assign("FJECZSXRZCBGACJSCJQHXAKMLWPOQKNTQQFXDEYIAKHTHWQORJHWEDIOPDTMXRVIXUYXZGTPPZLDBHMFKSOGQLHVBAOYWYFVIQMHDZTUCPNSTLESDBTFJXAROLNRRSEGUZIOTXQMBSVFYZTRGKIBRENAHKKPYDZOQBPBPYJLKSWYUEOAEHWVSIFUITLMLCCFXIPGRMDVYBCNVDAXMBLWLMSWGZGUANUHAUKJCNFKNYJ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QNTOUMAYFYBHJKKYIQSVZXQFEZQGQFYMZUFWIUXPRKWNHUWYXJYPSHTNKHXPDDLSILMDLZFNSDZOPQFVXFAYAVDOORBQCSQTNECZAKIATAMUPUIAWGAUFCCWETWXZJDVVJFIPWPXRMKPSRJWZXSNRLERYMDERIOTIHMBVGRIEMTCBRUGBVOLKG");
    const char tmp_msg_1[] = {82, 6, 58, 54, -91, -19, 45, -96, -99, 33, 25, -99, 24, 19, 102, 35, 69, 69, -30, -17, -37, -111, 55, -8, -31, 24, 6, 41, -39, 30, -18};
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
    msg.setTimeStamp(0.854509040333);
    msg.setSource(27396U);
    msg.setSourceEntity(239U);
    msg.setDestination(2762U);
    msg.setDestinationEntity(44U);
    msg.req_id = 21904U;
    msg.comm_mean = 41U;
    msg.destination.assign("HBWJVKYWGDQDGYRKZFLNQNEQCUGIBVVTQBOSJPFZMFQKEDCFMEKRSIIJCKMO");
    msg.deadline = 0.198020879765;
    msg.range = 0.562518963822;
    msg.data_mode = 226U;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.825060090404;
    tmp_msg_0.y = 0.470502000127;
    tmp_msg_0.z = 0.458902845467;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GIIXRRAKKJUUOGVTTXWDIJPOFEJSZAFJDEPLOFTZRAKYXHMNUVDMWAPIYWUZUKCRGXQQBUZFEDEKWSCJYDBONWJHNQRGIFFJCOEQQXZHUSOQGKEAPLXLTCNFYGHZARTCEMMZCBNABGLTKYPBCSSTPTQBXGZHMIDVWVKBUDAJUXYRMSZPGMRKEIMHICLSOVNWOBPOJVSUTRHKPYDNDNHXVMCIRWNGFAVLQZYVOL");
    const char tmp_msg_1[] = {-39, -54, -66, 122, -47, 25, -110, -70, 36, -15, 98, -9, 93, -12, 29, 6, 63, -56, -126, 52, 32, -75, -13, -85, 52, -51, 70, 52, -27, -84, 106, 109, 25, -54, -34, 21, 100, 58, -105, -52, -38, -125, -76, -55, -69, -42, -47, -116, 95, 95, -121, 64, 33, -128, -49, 8, 14, 47, 112};
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
    msg.setTimeStamp(0.875342336884);
    msg.setSource(27973U);
    msg.setSourceEntity(65U);
    msg.setDestination(45479U);
    msg.setDestinationEntity(73U);
    msg.req_id = 43129U;
    msg.status = 173U;
    msg.range = 0.227882325648;
    msg.info.assign("QCWVWVLUBJANAVTFQSAKNEJGHAQCKJIXV");

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
    msg.setTimeStamp(0.550707247124);
    msg.setSource(53431U);
    msg.setSourceEntity(233U);
    msg.setDestination(6486U);
    msg.setDestinationEntity(43U);
    msg.req_id = 29914U;
    msg.status = 130U;
    msg.range = 0.652586378834;
    msg.info.assign("YJTDAGITBMNHJYLSTYAWFBZMSDAKUJEDZVWGIWZCHHTTLTUDSNOHLDQEGUAVEYCPPWUDVUOANYQREMUFOSFGROKSICBTTOODJRSRFIPXLWXIAIUQNQPDMVGVLENBSZPBUCACBMVCHNJYKXFFNIJKETCLSNGOBXRPLIXOQXXMRQAQHXPLKRVBHZPVAKFCWEMHLVKGGYMNHJCZTJWKGODRGWXQFYZPVEZDSZYPBBRUXZQR");

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
    msg.setTimeStamp(0.838530728995);
    msg.setSource(36643U);
    msg.setSourceEntity(193U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(16U);
    msg.req_id = 41888U;
    msg.status = 27U;
    msg.range = 0.965946934302;
    msg.info.assign("WBAKYXEDSLTEJAQYQIPCINEHTYEYQDMRPLQUMOFZESPGNEHFIWJWJCBBQA");

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
    msg.setTimeStamp(0.0575877289427);
    msg.setSource(60692U);
    msg.setSourceEntity(63U);
    msg.setDestination(1278U);
    msg.setDestinationEntity(244U);
    msg.req_id = 24663U;
    msg.destination.assign("HTQUTIHAVYFBPCZJVGXLYLZXNAVDEXFWQJDVRGGXANNGSHFBNWZNJPPUWWOCBMLOQEWJTOVAFJRIYGNASHNQJUQDNLXKTPFDKFJTFJKWQVTJPLELYBCLBFRZEBSPIPZZRVSSIPTAOGSXAHQAODCOHEIINMROIBWXZQOUWGWJDQUDGIMHAZEKYVMDCYTEBYMWUCMCKVRCVRKEKATXBOHNXBUKDKYULYRZSRLGHILSEODIMPYUFSFMCPUSXK");
    msg.timeout = 0.635255563132;
    msg.sms_text.assign("DLEAJEHLFLCNTEYZOLMARDNLWBBMSPGMXSEASKSVKLBADXQCLFTGVRTBWVPDGZPLQIEBAOWJXBUKHNTMNZVEGTUCAZSFFLYVJBRFHGMIVYTXQJFWOYMYWPXIUZOKWIVQJGRYDNSKUJKCAHZGRCAWZHQUXNBDPOQADISHLFDYOIJPZMXTRQIUUWG");

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
    msg.setTimeStamp(0.108975812081);
    msg.setSource(41892U);
    msg.setSourceEntity(52U);
    msg.setDestination(17138U);
    msg.setDestinationEntity(11U);
    msg.req_id = 59063U;
    msg.destination.assign("OTWTGEPNEPEWVGUJJZSWPYGTRFABVLSJPFLHMHSGZWOJAWRKPAANCRLRGKWADYBVQDEQXAPIZTBIVSIKLJRSQSBSUWCTBFUYLCJFIBXOIKVCZDAUQZERCQFZNNHKYUJLSBSNLAMTLQMXEWYULCWEQSFBGMDNZZOKZITOCKVJYDVQHHOMFPHUBOOYCTMGIJVRU");
    msg.timeout = 0.951789162179;
    msg.sms_text.assign("SVKBYNZGHGQCNBAZQHMEJHYBYWEGXZLAXEPSHOTSIOSOFDTIZKDRDUDNBOJWVTFKVPQCNWUBPFYVLRZRNPXGUVONQABQNERKIGRTBKDRSVGLLJPMCCYIYXGGMMWSLZHAQUJBLSCNOTJQABMUHOHHLWUOPCSRCCCHAXDLXVUUVMAFEZIEYJFKMDXMVMUYPLFKHCRJARUYSTDMXTQGIWDWFQKEYWDFTZRLPJBIANNXIQVIIPFXOTZTPZWE");

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
    msg.setTimeStamp(0.793191593541);
    msg.setSource(48538U);
    msg.setSourceEntity(5U);
    msg.setDestination(25751U);
    msg.setDestinationEntity(237U);
    msg.req_id = 50603U;
    msg.destination.assign("CRUMHQLGKRJWUFHMFGQWGEQVIACVPSMDZDXSRYDJOYKYMJTKLYFHYZTAGBZBHWZKLWXKOJBNSZBCFZPZNTPRRIXBUQUEDZRCURPXFPGYXNVUNPOWFXJR");
    msg.timeout = 0.426064014689;
    msg.sms_text.assign("NWNJEUZBOGGVPQRRTMHFQJQFNPOKDWSJTBXCWPRJMDWWFGYTHCGVOQIUSAHCOUPRBNAGMQMQAUZSNYUXLBDZUUCCSOEQCTSUWBHIKULKJTHMSRVYWGIBXGNDRAJTLXZRKFDLXACJXYKOSRQDYLVTVHLEVABKSLVYIVFBXVJMGNLYADHKHYNPDQMEIHGWMCIWKIAWIGZUBOJYCTFEZCVAQEEZPOLKEKHEJOMXMZLBPSFAZFINZDPDRF");

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
    msg.setTimeStamp(0.840289558172);
    msg.setSource(49141U);
    msg.setSourceEntity(236U);
    msg.setDestination(65349U);
    msg.setDestinationEntity(27U);
    msg.req_id = 40414U;
    msg.status = 170U;
    msg.info.assign("XPLYLLTPEZOIDKPVMRZYQJXBRWKCRQUKIVSTHWSSBGPPJQYOJCJTNVFFOYNMDTCJVNUJDUCBFAYGGBBGEYIDUBYKWKQCOMQXXUGKBAVKHMUNZOTITKRGZMEFRCYJLGCQEVPCILDPHDIHQXNDNJHOUVDAITVZFFBNOUIPZEZYDWMPKUJNVASTLAFLKMQWOWCSQEOTZGXYEILGUWR");

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
    msg.setTimeStamp(0.00575168296787);
    msg.setSource(12704U);
    msg.setSourceEntity(110U);
    msg.setDestination(24679U);
    msg.setDestinationEntity(91U);
    msg.req_id = 9055U;
    msg.status = 217U;
    msg.info.assign("VCXSZWZPRBQXKNDBASHJYNLPFTIYEEWKOJWUHYAPKGNAAPRFRMQESQMMDPJJICPMHZYZAQINJCZGFIKEEPUARFWLBBKSST");

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
    msg.setTimeStamp(0.807044640934);
    msg.setSource(6808U);
    msg.setSourceEntity(14U);
    msg.setDestination(51347U);
    msg.setDestinationEntity(38U);
    msg.req_id = 54006U;
    msg.status = 4U;
    msg.info.assign("SHYSEMIRGNYBZVLMHSDFSJOYKGXLEUITZBHWBLRQNAEXAXTIZPPBVBRCSFEMVKCDVJRQZSIWHPKZQSTDKAJUWLGRPVXDKPOITFMKVDLQBOXGSDASZJUHFCMZLFEXCHTYEVGBZ");

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
    msg.setTimeStamp(0.0466157355981);
    msg.setSource(16116U);
    msg.setSourceEntity(229U);
    msg.setDestination(32380U);
    msg.setDestinationEntity(226U);
    msg.state = 246U;

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
    msg.setTimeStamp(0.510237876204);
    msg.setSource(32463U);
    msg.setSourceEntity(31U);
    msg.setDestination(9442U);
    msg.setDestinationEntity(34U);
    msg.state = 127U;

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
    msg.setTimeStamp(0.00273816312511);
    msg.setSource(60298U);
    msg.setSourceEntity(163U);
    msg.setDestination(46409U);
    msg.setDestinationEntity(118U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.411143369849);
    msg.setSource(9648U);
    msg.setSourceEntity(154U);
    msg.setDestination(7089U);
    msg.setDestinationEntity(86U);
    msg.state = 31U;

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
    msg.setTimeStamp(0.20978807067);
    msg.setSource(52845U);
    msg.setSourceEntity(122U);
    msg.setDestination(22884U);
    msg.setDestinationEntity(242U);
    msg.state = 161U;

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
    msg.setTimeStamp(0.967009460907);
    msg.setSource(9250U);
    msg.setSourceEntity(250U);
    msg.setDestination(24496U);
    msg.setDestinationEntity(156U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.0146630682304);
    msg.setSource(27549U);
    msg.setSourceEntity(77U);
    msg.setDestination(30277U);
    msg.setDestinationEntity(113U);
    msg.req_id = 1127U;
    msg.destination.assign("SFFRZBTUOQVCGQXRORZFJCVECWCXHDHDMNISWTVTPKAOSATJAAYOBVHFVKDLOGTPYHPKZWKPKGFVUOQZVUXGSSNTEDSNAFMKDOFMCJMMTOBZXLXBIG");
    msg.timeout = 0.164092446791;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 78U;
    tmp_msg_0.flags = 32U;
    tmp_msg_0.description.assign("SRFCLKJGUQTBPLMOZPDBNHWWUCIASUV");
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
    msg.setTimeStamp(0.8814124288);
    msg.setSource(25363U);
    msg.setSourceEntity(67U);
    msg.setDestination(44968U);
    msg.setDestinationEntity(189U);
    msg.req_id = 19335U;
    msg.destination.assign("OHPOFECAQWOHGWHPKLOJTWYMUUFCMDVTRNKFSBAIRXEIMAZMNSTHSBULAOMUOSEKDEDUYBKJPQEPRURKPQVUEIKWLGWPPBLXSNLBIOTRRVQXBMHKZVRJDCTAXGVNSNHXUKDFDMKEJIZICBJJJYFHIAAQGYOLPJNVRVJFUOYGXFGXMZYYVNTGELSZWDQHXWAQDFPDZCCLSASYTQBFZE");
    msg.timeout = 0.501883967238;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1049887662U;
    tmp_msg_0.destination.assign("IRGTLAYHMPEEAYYGTJWGITEXUOJWLMBTQDQRVCCZEQXNTYNOSNUORYPWLFKCICVHQJSXIDHUMPKYCUFXRTLKLCQSNZOEYWAWVWHBWAKLGNSIMAKOPLEMFOESXJYIAXRBIAQNDVPGLTJOLGXBSZJHFTBS");
    tmp_msg_0.timeout = 30867U;
    const char tmp_tmp_msg_0_0[] = {58, -1, 65, -27, 4, -126, 35, -36, -1, 100, -127, 21, -116, 7, -123, -70, -103, 115, -94, -29, -124, -42, 100, 5, 120, -16, -116, -33, -23, 74, -114, 97, -11, -22, -24, 9, 66, 45, -62, -49, 16, -43, -74, -94, 46, 100, -2, 100, 84, -67, -49, 105, -62, 94, -52, -43, -115, -7, -78, -70, 46, -114, 119, 21, -68, -92, -29, 76, -19, -3, 21, -42, -57, 7, 44, 71, 78, -42, -124, -68, 109, 78, -61, 34, -115, -102, -59, 3, -48, -91, -58, -27, 57, -93, -120, 16, 77, -100, -73, 83, 106, 112, -62, -8, -63, 107, -128, -105, 28, 15, 97, -81, -14, -22, 30, 42, 3, -61, 82, -19, 49, -25, -112, 35, 104, -56, 81, -16, -91, -96, -10, -31, 78};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.95724993521);
    msg.setSource(29121U);
    msg.setSourceEntity(50U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(131U);
    msg.req_id = 54268U;
    msg.destination.assign("ORCGSFDOQOTWBNPWEHJCLTHMHYDVDAKBLKUVBWXIKZGAOTFJQRNSQGMLKITDSDVOMHTXVASPCMGFZHZHXUNCIPVEZLUCKHXQUXGOLTYYVOPNORBYZPXCHZWQBXAYNIJREAFIUZAYGOTMVSBIGJDZWWQERIRPULLAUIFJJQUTQ");
    msg.timeout = 0.465631553769;
    IMC::Correlation tmp_msg_0;
    tmp_msg_0.beam1 = 154U;
    tmp_msg_0.beam2 = 244U;
    tmp_msg_0.beam3 = 67U;
    tmp_msg_0.beam4 = 234U;
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
    msg.setTimeStamp(0.536890918619);
    msg.setSource(13957U);
    msg.setSourceEntity(75U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(26U);
    msg.req_id = 47148U;
    msg.status = 189U;
    msg.info.assign("JXBLSHCQRRHYDIFJWNCEMPGWCAVRVIZVKODJVGKOCGVLXVKTUXHGBSFGSXNAVPZKMZBNYOAIQZIAKSNWOPEWAIIRHQCETRLYWLSCEYHGVXTEMAUNGOLPLNOLFDZDYKRPBRKNQPPBYBQMLWCHDUJLITHDCZDJCGKIKXJANEIOGQAWTOXTAZUGMFRMDFTHZZRXUCQHWQSM");

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
    msg.setTimeStamp(0.0435545982838);
    msg.setSource(62829U);
    msg.setSourceEntity(234U);
    msg.setDestination(14674U);
    msg.setDestinationEntity(178U);
    msg.req_id = 25134U;
    msg.status = 119U;
    msg.info.assign("NEBSWRLACYNAOCDWUJJDXAYUKNQVPLUCIHPOVNHHFSDAQMJBGNXWMXUJKZFKVPYIMRUOVXUTMKAOFIBQBYZRXUHEGYTCBGBLFBHPSRHICLGHUITLYCGCGJKJOWZFOXWZVVUIXQLNDLSAREVLYTKYFNGDMAGYLPWSMFPSRHEJPEJITAMDJXUXGEEKHZSNLQYVJEDTGNMKBIOWXMQDRQII");

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
    msg.setTimeStamp(0.31149712489);
    msg.setSource(45510U);
    msg.setSourceEntity(29U);
    msg.setDestination(33033U);
    msg.setDestinationEntity(48U);
    msg.req_id = 37331U;
    msg.status = 85U;
    msg.info.assign("PNPIMDJIXUTPBWSERVJDHCUELHUVWADYBWDKHHJZKHWVFBKDZGYOEZRLTFKXHKOFOOITRCRIDIGILSPMPQDBTDUAVTJKMECAYXXCYOPZQYZMVQQRVNCFQKFESRJRASFNNJYFCMQCQWYBBZCSBNCGPIG");

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
    msg.setTimeStamp(0.190969459292);
    msg.setSource(26851U);
    msg.setSourceEntity(123U);
    msg.setDestination(24250U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.325769198269);
    msg.setSource(18192U);
    msg.setSourceEntity(188U);
    msg.setDestination(5414U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.943695850846);
    msg.setSource(39221U);
    msg.setSourceEntity(17U);
    msg.setDestination(16354U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.593552616735);
    msg.setSource(4746U);
    msg.setSourceEntity(29U);
    msg.setDestination(17498U);
    msg.setDestinationEntity(216U);
    msg.plan_id.assign("XKYWFTZIZAMTPINFUGXOCKDIOVNKGIDYIQLNHNYOJRDCMGRSYXQW");
    msg.description.assign("TJSKKZLXZKAHVQVYXQUDPCTXQDAJNVESNXCWEIBQB");
    msg.vnamespace.assign("HVVETOFUYJAIUWKVFDESSQRQBNQOPSZPKHYXLNJKNRDQTSFEAM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NUFLPBPUVGITDOOZSMULPRKAQLDJGHZMOHCGDDKHSLEQRTRDJTAJCEZIMXBCSJMFEKZYRIERTNJHKCZGFBCWUTXVVZHWUPBWPAPDSLWSZIBGEVVFUUAAGYNMVHMHYOPAIKD");
    tmp_msg_0.value.assign("WJLIJONSPRYMAXWECKZTVXJPKWUELDOLJQSWGHQTFVAWKUGDKZRUPGTTVOYKJJNWECWXPDERWAAVIPNEU");
    tmp_msg_0.type = 175U;
    tmp_msg_0.access = 87U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZJMIZJXUXRYQYWOPIHAQYKUFEPAH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MPQTMSWXYQVEYQDSGIFQSCWRVYRPGJLJNNNIIUUTU");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 14471U;
    tmp_tmp_msg_1_0.control_ent = 220U;
    tmp_tmp_msg_1_0.timeout = 0.348386754212;
    tmp_tmp_msg_1_0.loiter_radius = 0.565084177562;
    tmp_tmp_msg_1_0.altitude_interval = 0.138878199131;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("CCFNLBJGWIPCUDQDSEQDGYVQWUWLNWSDRUEUWRJXBTHIXDGOONLKCXCECZPBTCSVPJTPDOYZFFXCPWEBPMTHIUOTUTUSMMAQQXLHFTMKSWFGCRLVOS");
    tmp_msg_2.dest_man.assign("KIRBOSIHSOBBZOIMCGGMMDMVVVNRTQOFCFLXCVXZWIAXZVPWZBIXYREFULGNLTKTCAZMIYUMTYTAUCAQBFCEIMKQJQJFUTYNJDYPQDNBAODSWRGJLQUHHLFHFAIHCBKROSEJEKYBPGXXECGVDHJSUZGNFWLPWTRSNJZQRYZFOSDDGFUHIWKMMEQNEESQKTWEHYWHGXXDZVQNXXTAVLOKVLSGKAJEORA");
    tmp_msg_2.conditions.assign("AEBFICMCESRBEVAGTYJOVBZRUAJYURQZXALNNXJJNKPLRCERDMPAGKOXCVRXBWZSHDEFDCYKHCITNBXSDKNGFPZMXHYZSYNUOWLQJRONTNYZQQGYMLTTILRPHEJDWMLQCWOWMGXIQOGAAXFQIBBHKPISAQKJOOTIWDPPHFKVUEWDSMFFHFPUVVC");
    IMC::DmsDetection tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.ch01 = 0.8262896977;
    tmp_tmp_msg_2_0.ch02 = 0.78970746266;
    tmp_tmp_msg_2_0.ch03 = 0.243629677207;
    tmp_tmp_msg_2_0.ch04 = 0.82465347922;
    tmp_tmp_msg_2_0.ch05 = 0.82193941829;
    tmp_tmp_msg_2_0.ch06 = 0.48416515999;
    tmp_tmp_msg_2_0.ch07 = 0.0379597270771;
    tmp_tmp_msg_2_0.ch08 = 0.513160490452;
    tmp_tmp_msg_2_0.ch09 = 0.872157035195;
    tmp_tmp_msg_2_0.ch10 = 0.750196876107;
    tmp_tmp_msg_2_0.ch11 = 0.0949763510953;
    tmp_tmp_msg_2_0.ch12 = 0.899953233139;
    tmp_tmp_msg_2_0.ch13 = 0.787320914201;
    tmp_tmp_msg_2_0.ch14 = 0.776446790275;
    tmp_tmp_msg_2_0.ch15 = 0.33860879374;
    tmp_tmp_msg_2_0.ch16 = 0.458299680267;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::EstimatedFreq tmp_msg_3;
    tmp_msg_3.value = 0.891807401757;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.43636625835);
    msg.setSource(36922U);
    msg.setSourceEntity(135U);
    msg.setDestination(14817U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("VHSFEDBMIBAQXOHWUWSKGAPJHGTNFOGPOAZSPSVIHJSSEOGILOZNROLMWLURWWGKFFMPRGXCBVWFYKSBMNJIMAASNZUJFTTCETXHCHEDCVCZHPBJZOCZFVQABOWRULYNJTLIIPZUVTFQRGAXJYXMYXPVXNLKJMYQDSVXRUYNUQWBBIDKPMPBEODHRFXERTJATDDG");
    msg.description.assign("MEJONWFHDYWOBNWREQJEMJWKZHHSSNGNEHFAPFSKRPYHRUFMOGKPWUVSNFIDRGFEBZXKLQFXLCXVNQWMLTKLBPTDECQPXMMEYZXGWAZKIEQVYAVQPAFLRDAIQZWYDIOIYZCLCJJOBLCQUHYIIXTUVSPFCVJMTHBTGZENUQROVGJRS");
    msg.vnamespace.assign("MQMGOAOUIWCNEALXWQYNIECLQXUBOHGFMVPQZUKMDXKABNFMRHZASVCIDXBJH");
    msg.start_man_id.assign("DKQVYBWURZNAMPIUHALMEMRRZSFHYWNALVJJCYNFJYFSENZCQCVOOSPAMCQNUJNMBQHIRCFITVSNFBOOZAEYVRKODPVUBMEUGPSDKFZKFWQLZAXMQVDRFQJGHVTREXMQGKINAEAYPCIKJSOMSLGWNDPGKZHYXIXXQDJLULWIJVBXRGCSAIRZEFGHPUUX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SHMZJLETAHHAMBWHPRFFMSLEVOKYYFMSNVAFIIBOTZVBXSXIKJDKVCGMBUHHNQGZTNN");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 14486U;
    tmp_tmp_msg_0_0.lat = 0.301662450188;
    tmp_tmp_msg_0_0.lon = 0.473413627529;
    tmp_tmp_msg_0_0.z = 0.431820108273;
    tmp_tmp_msg_0_0.z_units = 204U;
    tmp_tmp_msg_0_0.speed = 0.761201123424;
    tmp_tmp_msg_0_0.speed_units = 228U;
    tmp_tmp_msg_0_0.custom.assign("NSYLDXTKLHKHQYKTOEBCSAJUTIYJUAWBVFMXLEEJJRUWDKHBOZZGSLZCKXHFBPEMIJKIZTZQYZHWDPCFMQPYJFLPXEOWVUDWWXIETICKCJONWPPCSNEVKIGQSGAHFGISIFKXLUAWAZXMDRNBELYAJWNHOUOOBGFFLGADPJRVRMOJMCXVMQWHPBARQQTBRVYNSDGEUXXCDTAPUDYQNTZQORKRUBZAQTLYVFP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::IridiumTxStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 10148U;
    tmp_tmp_msg_0_1.status = 251U;
    tmp_tmp_msg_0_1.text.assign("ZTGBYCXQXLLNSTSCQFETFVIENHVAIADEQHXKXMIUXUVFJHGFSTKMTZSGDMBIQGORYRDNRWXNSRKGPOJKBMBCYNGANMKZHQCLAXFAHFNEZUUXMCQIOZQSSWVUUZPKYASJ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.76079488399);
    msg.setSource(109U);
    msg.setSourceEntity(192U);
    msg.setDestination(4943U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("USKGCGKBOHXXIXVLHFJLEAXPQKHTWPDMZGNFUKCHBCPPVEOWODLENUSVZZUMRAQQJWRTHODYWAMITZ");
    msg.description.assign("CESLXXAENLQVBGUKMAYENAPGUMCDJJRMNZEWNCROYWSGPUZYACNOLMFTLXSPHTDGTHRFTPOPQGDCHBMVTYSUSXTUHXLDMQOZHAWYBAHNLNHPEUEAIDRSLIWXFRCOCXKUWBGTIQLFZHJLUKPVSNOAZGTVJPWKBUOYMKKTQZYSQIRZIISAEVJEXVJDFKHKVDWKQMQMLZOGZJTFNOSWXD");
    msg.vnamespace.assign("TIRMFMLRADACMEHOHEWPWIHXPSBUOCKEJIQGCPIFXLLDFSBZOPJJDKNSNECDBTTVIJMBZBWFCTIJVUGDFYYULAFXNOEUKMCOXILXXETFYSNGKZTWWPSNCLRHGVUVPDOVNQAQKZDQCJPWHJLWDNKT");
    msg.start_man_id.assign("HOODBQRTEOIJESVILVYWPIYHPFFVKEUJRZCOMHUAHEGYZOMZSYDUCJLNLOQPBGOTRFMRIMZDJKFSZPAQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RPYMCEEQBRIIYYFTWGTNZEJQOPNBXCZZCMOPDWVIXJUJPXKSOOEPLFLEZIAELGWTDRZAXPGTMSDFDAGNHGYPQSVLULLZYUIWCMGBTJLFQRKSQHRCNHTKHYWCIWVQB");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 10045U;
    tmp_tmp_msg_0_0.rpm = 0.623626379704;
    tmp_tmp_msg_0_0.direction = 252U;
    tmp_tmp_msg_0_0.custom.assign("TXYTQMLAXBQHJYO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Fluorescein tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.872061174793;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::GetWorldCoordinates tmp_msg_1;
    tmp_msg_1.tracking = 190U;
    tmp_msg_1.lat = 0.436244240914;
    tmp_msg_1.lon = 0.337061357504;
    tmp_msg_1.x = 0.361297071879;
    tmp_msg_1.y = 0.609352866253;
    tmp_msg_1.z = 0.856719110815;
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
    msg.setTimeStamp(0.201819537921);
    msg.setSource(6U);
    msg.setSourceEntity(142U);
    msg.setDestination(51846U);
    msg.setDestinationEntity(94U);
    msg.maneuver_id.assign("CLOJNYTEIVLVSESWNDZMOENKEDMOZRQMPKVXBEESIPRCYEATFDUYEWEOWNRIOHDAXRPQQPSQGYWHFEMBSLCBTULXGAFYIHBXSGWFUCZCUDVKQUNXMITSTYJRGGJALKZOTUJGKQRKHZIIITXVFHZG");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 7048U;
    tmp_msg_0.lat = 0.576603025875;
    tmp_msg_0.lon = 0.181508025296;
    tmp_msg_0.z = 0.761145709382;
    tmp_msg_0.z_units = 218U;
    tmp_msg_0.pitch = 0.606324344247;
    tmp_msg_0.amplitude = 0.913329401799;
    tmp_msg_0.duration = 33584U;
    tmp_msg_0.speed = 0.242943781585;
    tmp_msg_0.speed_units = 71U;
    tmp_msg_0.radius = 0.404321784223;
    tmp_msg_0.direction = 216U;
    tmp_msg_0.custom.assign("AWSZUAEXELSQOLAZGANZUHYEQGFPIUGKKXTVCIVXQHCGMWIRWTVDNWRDUEBHVFZPQSJFHMDFCMMZINZDHBOJUXEOZPYBNGKVIHEIJCNGMFMBWHZXQSBRFXKXLASEIBLOQYOXBRCRKBOGZOAOJGWROLSXSGFUDUVYNPCIBJADJPNEOJMHLERPTCP");
    msg.data.set(tmp_msg_0);
    IMC::GetOperationalLimits tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ArmingState tmp_msg_2;
    tmp_msg_2.state = 145U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.00960350939754);
    msg.setSource(2064U);
    msg.setSourceEntity(31U);
    msg.setDestination(41246U);
    msg.setDestinationEntity(86U);
    msg.maneuver_id.assign("IUSCLIMIFHVAIHBTDSLMTPUBLGXOXYYAYCICWHVNNPKKHWPTASOYQJDZLNZEDGVVQWJIFFTHEGAYFQSGQCBTXOFTNILZEVCAZVMQBENYYYSHUKRNSZHXWVJRYMXURESCHBLWZKVZRJRQNIWTKDXUHAPHQPUCQKGO");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.586585344832;
    tmp_tmp_msg_0_0.off = 0.671060773541;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 47614U;
    tmp_msg_0.custom.assign("UFKYKOJFCXDIBTKMCKZEJEEBZIKELRQPUZXWXEKSNBBQTQNMEAYHZFATUNQYWXVFROVYWCYRUKLHQYBDZVIHSOPNEJSSJ");
    msg.data.set(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 63653U;
    tmp_msg_1.off_x = 0.344338476336;
    tmp_msg_1.off_y = 0.3032833967;
    tmp_msg_1.off_z = 0.866487202665;
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
    msg.setTimeStamp(0.340281518808);
    msg.setSource(38506U);
    msg.setSourceEntity(98U);
    msg.setDestination(50617U);
    msg.setDestinationEntity(146U);
    msg.maneuver_id.assign("DWOVEOBCHGINDSUKGXLMCGKPYRXSSAVKXNBDJAYYWZRBQFTGVIODXXINABQBNSPTBWTEUVNYYEBQKDGIGFPRSTWIJFQZKZTJMPIUUFECWBCHKJARETFLZLGAK");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.868379900957;
    tmp_msg_0.lon = 0.513158195962;
    tmp_msg_0.z = 0.578003363493;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.speed = 0.133298770162;
    tmp_msg_0.speed_units = 14U;
    tmp_msg_0.takeoff_pitch = 0.718666605105;
    tmp_msg_0.custom.assign("DSUCGZYKVNTUKACJMH");
    msg.data.set(tmp_msg_0);
    IMC::CommSystemsQuery tmp_msg_1;
    tmp_msg_1.type = 175U;
    tmp_msg_1.comm_interface = 33094U;
    tmp_msg_1.model = 20266U;
    tmp_msg_1.list.assign("MZUWFTUOQTZFZMUDREIXSPLUPAQJOOUSSQDLIZYJEGBOOKJLIZTYDXCJRRADYLQVHIURACGPDACQOSBBRIFWEURGXCNWJLYIDXKICKNLACHVXMYWBWEJFMAHSSESFJXQSPBETRWVUENCZMMVYYG");
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
    msg.setTimeStamp(0.806560573013);
    msg.setSource(15436U);
    msg.setSourceEntity(107U);
    msg.setDestination(31674U);
    msg.setDestinationEntity(58U);
    msg.source_man.assign("OVLOZNWNYHZYLLYKMAKAZBEHXYZFVXJMGBGWKYQWFTKFXLNJTLECDWOMUHOYDBXOUJCISRBWVISSTZMAMOTGRLUPBKNQBMOZXCOIMSDRURZEVMXDBDPMALGPIRLIQAWQRHINKCEGWTHTXDSA");
    msg.dest_man.assign("UVYIRPXEKLALPIMUFLEKGDLVYRSKDBLKJOCCYEDOUOARHBVOXZSBFWABEAZXDBPMHGLCEXLIYJRAFMWKQXQTISTHUTNLDOAIZNHZXUHMNGZEJSMVUCHWKAFKWNTUJIQVNCCRXPIBTPCZPISRVQZWBE");
    msg.conditions.assign("PTUVRUWKKCOBBDRUVAXYYDNJCFPMVXPAEOGPWNNIWEZUGDQTINQZLXCFQUUQNDFKCCOSHYUXRIUOHEFZMFEAHZXJTATHYXLCSVYGJBMPKXPZEJJW");

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
    msg.setTimeStamp(0.556652260028);
    msg.setSource(49513U);
    msg.setSourceEntity(216U);
    msg.setDestination(26852U);
    msg.setDestinationEntity(179U);
    msg.source_man.assign("RZKHXDFLCVVATYCRLALSUXBNZCNEOUMEASUMKNPJQSHRLWXBNZYHH");
    msg.dest_man.assign("IUWVZEUXTCCHOHNBHRWFRAGWGBJQSIDOMHITPTDEIPVOCIMMKMJCEIDSSUYYMQJSBYTAJVQGRJCFVASRAUXKKJRFEVOAWSXLHZGPIEWELNGFZUQBPHXFAFBVBRFFCWBHXM");
    msg.conditions.assign("WEVOBDNJVXJZAKPXQFCYNDSLQPWTDMCQZOBQGYRZRUEBMSOTYNODSIGJIGDSL");

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
    msg.setTimeStamp(0.383256498664);
    msg.setSource(36942U);
    msg.setSourceEntity(132U);
    msg.setDestination(12951U);
    msg.setDestinationEntity(191U);
    msg.source_man.assign("FFYNMSVAUUPLLDZGIKZZTIIINXLULPVYSVKQBKVOSRRAGXHNWCPAEJQFGMJULHPJBJRCYCBIOQBWVXBDMAZWEXJBCJCLPFENSZHUXVPOOKHBEUNEWJVYGYHYCEROQWOFHTVRCOQDQMSLVCFNULKHYNADKHTYLFVTDLSXQIWAPSKYMRWWAHTCEOUT");
    msg.dest_man.assign("GFODCJDTJRPSWKXXLXGVOMBJGUNHUNFHOQXEBLRHSDNTEVICLTSAKHVQRXEMYBDIQFLHPJVOOJTCVXWFPVDOSGQFZAIIHFIMWUFOIUMJRYCHOYBMPGPPKNLZCRNKEXNRTKRTGUMWSDCTBAPOAUSQ");
    msg.conditions.assign("CEFSWTNHSJOBGUSGXCWHXOPLYYETLPDMKMONJRFQXYMIULZPCBUGGFLNFBFKLZFCVXBXXMGAOIRVIRHWSVOECHRVPQZNPZBEZIQRTRDCWLAPXEBYWAADVGNVWVYQBATXCMZSJXQEOHGDTPNTKCQGDZDJNTAJSHIOPRPORUIWFJDNLIJIQUDGIVEUQGHQAFOZWUEVLEKYVMUBSTUKQHYRJABBYMYDXKEKPHNFDCSKSIJWYNOJMLZMUSL");

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
    msg.setTimeStamp(0.912106083542);
    msg.setSource(57478U);
    msg.setSourceEntity(73U);
    msg.setDestination(45551U);
    msg.setDestinationEntity(137U);
    msg.command = 43U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FBCYZAWBRLFFXBPSPYJRDWQXSZSJVJDBQCEEMVSWNKKJVYCKMQHIHCDXSQBNFZSGFWNHIRSIKUEWICIDLRUBDNSGVLMZMRETTBOTTLTGAMEGCBWRCQATHYFPGEQUTNQIEXKYQXWZEVDHTVWXLHJPGAOPDMATAANBMYJUJRLJAMSOBZCHZZLYEIKGNCKUD");
    tmp_msg_0.description.assign("HWRBRYUPUPCAGUFJTMDNOMBXKWBUGDZSPRNNIRWMEEPYAPTDQBMTXWRZJGVNELUJKEZBLNFIIJCDVIMSJLGGUHNLNYPFWPXELQBT");
    tmp_msg_0.vnamespace.assign("VFBOCRIBLZIDPVNVKDNQYUPFDKJRVXVGYPCZYECPCJRXGUZAHKIEBDDXILUUFSXZHEPBXFLACRFERWXUOXIKKGWHSUEYZNYEYBJLSVCMNFKJNDJJVOZQHMPTJDMSQWLVVGNABYMTZUMFSPHBWYJJGLWJQRIFBOXLTHESAWWHQCWQRCCAGGFMNDAMSCLKTDSUTTELGV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TDASMNJAEQRAOEDXDTOGEQZGMCBAXAFUQBHPGYKDVOOJKHASJF");
    tmp_tmp_msg_0_0.value.assign("YAMHNRGWYXDRZWCMOFXZXJCXFSLXGWIWTOFRATPADKDGHDIHHMHDDIAZGMQSGSZEHARZQEBVGXGEYTXAUTNROFIELCXKEJJJQMHPKPMILZWXVKGBFNJYGS");
    tmp_tmp_msg_0_0.type = 203U;
    tmp_tmp_msg_0_0.access = 24U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RLYZAXDBEGJQMNZFKOYAQBWHRPSEPLKUSKETGPMCDFMHDRTOPLNDSSNIVJEBHJZNAMHOQGGNPWMKQGZRFQWNFWUUUJXTTYVCLIFMOZRKXTCUYWHDDTKUFE");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JADYWKUOSRLPRYQWPMXONFLTYUTQQZXPNUBGHKZYFECVVSZDLIAMDSVWFJENUKLRGLKLPYNQVQOPVCNBBAQWWIV");
    IMC::YoYo tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 62297U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.144179434712;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.604899488703;
    tmp_tmp_tmp_msg_0_1_0.z = 0.428839108288;
    tmp_tmp_tmp_msg_0_1_0.z_units = 231U;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.422207533897;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.900782883612;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.932942050186;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 66U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OJLZOQTLYJOHMJZGGTVHJNXQQYDPMDAXDHFCFFRICKPQWYNVEKXTMCZOWXOZGSIBDDIKIFTAWFRFLHMUYDPSTPJVBLRFMWRWEVEYKLYXLGSNOEHPBVOANRVFIUGSCSHQOADSYCEUJNAUIG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RSSI tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.921964535138;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::ParametersXml tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.locale.assign("QMQJNGMJJWMVLLDRLRCAFAIOHQDOZMCSKXBXOOGTUPXIATSXXRNWUEDWJPKLPYAB");
    const char tmp_tmp_tmp_tmp_msg_0_1_2_0[] = {-79, 51, 53, 84, -61, -68, -26, 112, 7, -107, 44, -106, 86, -62, -118, 59, 1, 34, -110, -82, -35, -77, 81, -70, 29, -54, 112, 42, 61, -37, -73, 36, 36, -107, 64, -99, -8, -21, 96, 29, -56, -51, -52, 21, -26, 118, -124, -81, 33, 74, 116, -103, -68, 118, 98, 54, -55, 17, -19, -69, -125, -7, -53, -24, -3, 50, -117, -87, -126, -35, -106, -38, 1, -46, -117};
    tmp_tmp_tmp_msg_0_1_2.config.assign(tmp_tmp_tmp_tmp_msg_0_1_2_0, tmp_tmp_tmp_tmp_msg_0_1_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_2_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("EUZAIHTTRKYYDOSIEQVEXYGMXHHIYUCGJCLVCBGBOEFHLSRDBWTDMMVRDQKHNFZLKZRUIKQYRZZYXPWQELVUEPWFWZPVJGCTGMXGPNKMUSZJITKLGEQQCAOEJFXIJVLBCSBATNJSPQIEQDDRKPSKUUNSQFJABHOPDTWAYABOANPFKUOGCLRWXXCHLHMIXAGVUTZXFVWZRDBDNFMBMBQYANUDGMJPYWMTAOXHPCOCK");
    tmp_tmp_msg_0_2.dest_man.assign("RIVSNQACWELGXRFKSAKENSJWOEBDFCDJCQNLGGPDRHHRIQYPZXPDWETBHPBXPIMFFMCOSNRBBWRKWMLNGVYHGHEUGGAARMLZRVFFXLLMRSDYOYJLCXIHBHEHIBJWJDZTKPKSTXTTU");
    tmp_tmp_msg_0_2.conditions.assign("BPIGLZYQHBHDYABHKCKXCQPCEFBXREULOOADRJUUZTHZRKBGKVYEHLWBORFGEMCZBDCKZJLUDIJCLPVGGRDEVYQVQDRXWSXVTJSSCQAARPSTGHYSALZZGEWNVNTAXFKPMTAPZTGNUXPIWKNAIVW");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::StationKeepingExtended tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.166583038964;
    tmp_tmp_msg_0_3.lon = 0.0872706240471;
    tmp_tmp_msg_0_3.z = 0.220120959621;
    tmp_tmp_msg_0_3.z_units = 116U;
    tmp_tmp_msg_0_3.radius = 0.171375655855;
    tmp_tmp_msg_0_3.duration = 36405U;
    tmp_tmp_msg_0_3.speed = 0.723895936584;
    tmp_tmp_msg_0_3.speed_units = 152U;
    tmp_tmp_msg_0_3.popup_period = 42990U;
    tmp_tmp_msg_0_3.popup_duration = 24173U;
    tmp_tmp_msg_0_3.flags = 140U;
    tmp_tmp_msg_0_3.custom.assign("VKDSXJKEDSBOFLXVQRCDIWUSFXFDOCAZLSMJDVGTEPJUSRCLZMXQFQGARMLQJOOFNVWLSGSKHKTGZNFEWZXTVDPALYKVMKTOHRXEZMSUHACTGBOJPPVCHIBEIETEYYRZQBVGHCQWTXAFMNJZPPGFHLGZYNYPQFHULLQQCWBM");
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
    msg.setTimeStamp(0.265804213855);
    msg.setSource(23623U);
    msg.setSourceEntity(149U);
    msg.setDestination(59300U);
    msg.setDestinationEntity(177U);
    msg.command = 110U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RYRAWZQHPTDCPIXUKNOFVRLSXZPMTUJDMSEGICSHHXFQYKPYUCNHGRQJUYSBLLLPWGMHE");
    tmp_msg_0.description.assign("FUZLXBLKDGXRAJGMQTLEVNIWHAQKJFMXTURKIBNCTCJOEMABSOSHZUSYBZLFXFZSGUMDOHXAWPESGHBEVFWTJQZVFUAAQZYNKRWDIPUXHAKRPKNVHHKECOJYOTCZGGINRILHGTSLKHZMEODUJPXXWKVBNDYPJPTCLTMRWPANLWPVTWOTFQYSCVBPRRAHZMUDFZYDXRPOSYJ");
    tmp_msg_0.vnamespace.assign("VNTLMRFOQGORWOTFHRCJQWTUYRHGPSLAKAGSCHQYEIHHRVHZSVWFPPPXMVEIOKVKMCYXNKDDZBXOUZOZXFSITWLCMJTQTWRDVAB");
    tmp_msg_0.start_man_id.assign("DOHJILBTQESIBUVCSNWVNXJHJZXGUGHIEQPZKDTEXHETDKALNNWTPGKKMSSKRMWOSGRGIMQIVBCATJRWJSEURAFUPCWPHJBBLFQBURAJJMWVPCCKPNUMLLTEFMFTCHXVARVWOQWVOYPZZDYGXWYIIOYZIDIZSLVZJJEDN");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("TSWCUDKUKOYQSQZDWVWATQJIZINDHLNBKBOXTBOWLECNSRASRGNSFHOFIUWYPHZPYRRDADRVUJHXLCWUFOHLSVFSNUYCXZPDVTPMMZCJRYNQQFJCYEZCFSYTVRWADPMFAGLHE");
    tmp_tmp_msg_0_0.dest_man.assign("SNXPNPYBTLCJQYSPAPOBIBOLMSCBUOUGDKDCEJKNWWWLAZATVLFCGZTFVZRMUBGBPIWUHFVYRWPYGFAWAZVTIMLDRSHJBALFVLOCEWINWLJHTXMKZSULCXEMNDZYIGSWNOUQXDHYVAJFEFQPKVKLVIKGJMUKFEDHGZCQRGYGQSBHIJXTRMYQRXOOGHCIDUVXKAINRTSDTOREQPH");
    tmp_tmp_msg_0_0.conditions.assign("ZFIFKVXBGFEOMGWPZALZLTOLYWGNEOKGVQVXTWYIXMAEUSPSDKUDMLEXOICTMBQJQBKHMJNBUYNPCDKYQDZJZMUFSOQLHUOQLEKXOVJVJIRWYBHUFRIVZCEMZDITVBLPDSYEUTUQXCNFORFIFIYTZEACNGGNYDDRHLFNAJZSZTHWXFHJCCETSJXWYTD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::TrexObservation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeline.assign("PCRPRYMWDEKPISHFGZSMQBCDLNITDNXXEVSEVYOCLRNEQILAIFLDTRJVOURRTZBPDAZNIAHSWZZAKJNDMMQKYCTRLYMZOFFMZAFWBQJNYQAVSWNLQXUNQPNFYGAIWCWOEJBZXVPSVOKVCUBYSLEYUAXIGNEQJXXJBGWGPURGGWBHEIGOVBMFZROSMTKTJOLFIJHDWPUJKAVBBVKQMECIQTTGTWXKGHFSHSYMLPUHFXRUHCDPHLTOZ");
    tmp_tmp_msg_0_1.predicate.assign("KLWBHRMJJQYYUJUXWZQCYGRNOSNMDOZKDTTEMEWVCBOBXEASMRLRZHYOARCAIZS");
    tmp_tmp_msg_0_1.attributes.assign("KHMFIGUABUZDOINYYMFGTZCGCIIMQVNPLGZOZPPTWUZAHBYLXRFSPJMUKJDSCTSCUMGVJLLWNEGKNVMFQETQXLSFSAYNBOYTKGEHKOPGHISAPRUSTVHNWDJSBCRWVVMOXNEITLAOOYQUQSMRBWNJIVRYBFHHKKWEONPDLIWD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::TransportBindings tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.consumer.assign("SRTZRFIFVXDYWPUCGKNFNVALLFFGMJOXPNAKBIWKEKQJSDXIQURVUCSVSQMNOBUJESUTPPAQLOMCAMZGBPBJXZQUDRSZVXCKPIQTENEDZZVRJ");
    tmp_tmp_msg_0_2.message_id = 44354U;
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
    msg.setTimeStamp(0.205919409375);
    msg.setSource(26532U);
    msg.setSourceEntity(154U);
    msg.setDestination(63269U);
    msg.setDestinationEntity(13U);
    msg.command = 41U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FUWXQUNPQEDYISHMJDUTKDUIVGOZVJGLFJGGIDRDYCEUKHQWZTHONCWARHNYRBGGCRYVEXFKMNWLCWABIAKTOLXZLNFTVTZKZPVNQKOIHPMTYXPSCNDPGZQQKXJKMM");
    tmp_msg_0.description.assign("OZMMPPAZDDIUEGJLLBRKXRLJGCQYOOKHCDUEVOZXKRDJYKISWVFHPVQFLCSMTMVTZXABWHYQWYNVJFNGLWFOBIOLUEHNQZPPDINPADYXGTTKOMJWABPKICDYXBHEFBBMNMRRKEHTXAKSZIWETHEJEQGQPUFBNXYOPICRPVUGSWSLQERLRASNUYIVNKHFQUCSEUMZJIUDFMWACVBXZUJSTGFGACDROCSLJHHGMIFWZDXOQNKYGTA");
    tmp_msg_0.vnamespace.assign("XWDEMFVJDVHDHBARDWQJOPRMTRJZTBXNEQCXIIHTOYPGWXJBNUMIDZTMGZMQQAGXNBCODYYTVIQYVQMNOTGWIQVMFNLIZZKSRRESZWLFYUXPSCNKSPFHVVBLXFRGXLLTRWGTIARLYJOKAGPGOHEADUFOYXUPJHEINLDAHWINEWCUSMQGAHCKK");
    tmp_msg_0.start_man_id.assign("MWYOPEVIUCUHKJB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YNODQONKIHEGAPPJIUACCLLXDSZVOGFWAQRPBVJOWHSGKLVPKPVCQNWEYTMREHZBOSXSTTNUJNGTJNXMMMKMQBIONFPKNMDSLOHAYWAPXCJELVW");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredPath tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.path_ref = 155172726U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_lat = 0.0338018628861;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_lon = 0.544627007552;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_z = 0.271531193299;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_z_units = 177U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_lat = 0.00760358387257;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_lon = 0.174661282426;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_z = 0.1656506795;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_z_units = 14U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.260767761522;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 69U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lradius = 0.0191573357576;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.flags = 168U;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 54423U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KUIJSHXDJZYYKMHVSHVDERWPZBIHQILABVRXGZTIHCMDOZXFFUSPPFCKTVYKDIQZ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VZGOKASBUMFYWXPIR");
    tmp_tmp_msg_0_1.dest_man.assign("WPKWHNMFYFWSPATJHGUWXZSIEQSMCYXPLQSFJPUYSELCLAWTUOJUHVADIDJNZRIDKIGJARCAKFFJPAVNYUUVGDYRFMCOOZNWRYZMODIQOJQVPETGXZTYAKFBKMJDCPBHXIOHDVNPRNVZJERKTRSOEGARDXMIEVGLVRQZXUBLBNLHKHLOKWQBZVAQTUBLPSHZRWUTSEX");
    tmp_tmp_msg_0_1.conditions.assign("UMEKMXZJYEFTZDVJQHGFQMQSDFBXMROUIPRGCSABTYJXEMXOTQWIICGSMBNBTCXFCYRWLKJSGJQXE");
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
    msg.setTimeStamp(0.328572999939);
    msg.setSource(9044U);
    msg.setSourceEntity(219U);
    msg.setDestination(26822U);
    msg.setDestinationEntity(101U);
    msg.state = 220U;
    msg.plan_id.assign("LGMDPTMQPCJZDGGMBNTWBXQWJSRMFKPPHOLSIREYSSWMGDDTWCCATQNDMGLSHHNKUNSFEEQTLJIOHNOBQBLYVPZCWASJIORDJOUBUNZVUFQXQDYOPMIMIKLBMVZFROETBLAJFQAXCRYYQXHCLIGCPEDOXWKWKAIXKBOJRJCAEXRWAYFVQWIKDYURJBPVHGSIWNVCTCLRKVEHSASE");
    msg.comm_level = 61U;

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
    msg.setTimeStamp(0.0147668981051);
    msg.setSource(27357U);
    msg.setSourceEntity(234U);
    msg.setDestination(57597U);
    msg.setDestinationEntity(201U);
    msg.state = 129U;
    msg.plan_id.assign("ADLHPRFTJLTDJDYLVDDECKLCOCKOPANQWNZHHPYGDMXZLSGBKYXLIGPBUAJZGUAAECXOYWJNKCUEWQSWTD");
    msg.comm_level = 116U;

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
    msg.setTimeStamp(0.1662303383);
    msg.setSource(26614U);
    msg.setSourceEntity(51U);
    msg.setDestination(62828U);
    msg.setDestinationEntity(103U);
    msg.state = 178U;
    msg.plan_id.assign("ZJRVJGYNRIPYAMXPDOXRQBTWDRKZFMYZKQBGWEPSSWSUDYHGUMVLBZDENQTBCKRTEECLJWZVUP");
    msg.comm_level = 181U;

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
    msg.setTimeStamp(0.419318704268);
    msg.setSource(46210U);
    msg.setSourceEntity(23U);
    msg.setDestination(34332U);
    msg.setDestinationEntity(70U);
    msg.type = 7U;
    msg.op = 33U;
    msg.request_id = 24309U;
    msg.plan_id.assign("DLDJWAVHMXGEZBTDWYEUBAEZKRYELZQCIZIVFOOXMVAMKBTUXLGVSQALBSUJTUBYMRXMJACFDQRUTXTQNZCCRIUEHNGLTTDYWVPLPXXPHMPFIPHCJEAPMPWHBJFFVSBGWSKGCNJKSLVDCJPYFHYIFFVKREGNCCJV");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 31U;
    tmp_msg_0.value = 0.47548509953;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IKIZSEVVLOZOBSE");

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
    msg.setTimeStamp(0.107227091921);
    msg.setSource(28751U);
    msg.setSourceEntity(145U);
    msg.setDestination(40019U);
    msg.setDestinationEntity(45U);
    msg.type = 29U;
    msg.op = 153U;
    msg.request_id = 7344U;
    msg.plan_id.assign("ZGTRSEBISGPLIOSPUOTYDNDVHRGDUZQXILNRCCGUIBYULEYFWXTVTNQLZCXQOUBSEZHUJFMSBMXBQMWDVRBJHFSCGOQAOGSTUYVYKIQKLIMVBEAGDDQFOGWXWTMTHWBFKAFWNKSZJJVY");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("UFPXEQDULYPAUHHXTYQHMJBBPAJBSKXWCDXUZZFGANXOEQMOPKVUIDIMFEUYZAESZIWYFIVEQASNXNWVUEGYCCZGIAUVIZRSKKHTCJLLWBZJMMNHBKGJVRTEXRBBCMHWQLWRVOOGXZSVFDRGDZWSOIKNTNRGDSQVEDRKCFLOJIHIMLUJPFQPWDTVWRPSKCMVQCHALNCORROJMFYQFTPAYKTDHBTYZEPGHEAXLXLGFJ");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("EDIRQUWIYECMZTFKMGPEOUEUTPZRWYDDIOSOXZXIRBQAKYCMUIMANJZFHCGCOXONLYABSOLROQXCWLTDKGILRTJKNEKVKEMVKFFDFOHLCQQP");
    tmp_tmp_msg_0_0.feature_type = 10U;
    tmp_tmp_msg_0_0.rgb_red = 72U;
    tmp_tmp_msg_0_0.rgb_green = 224U;
    tmp_tmp_msg_0_0.rgb_blue = 65U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.955721202648;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.763055037514;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.448878924068;
    tmp_tmp_msg_0_0.feature.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ADUAVFKVJXTGEFTIBGKXXKGVAMTDCGSCSYVUUZIRJQRQAVRZMIQIQJEWBHSTSFSQMZQJACNAEFAIEHDKJPKLYTNKUFXORBKOYPKXCBKDWNQONVIYJBHMFLCFEZUKTMNBXFLHBFIHYZSWULHGDSXWJYHDHVJTCDWRVMLIXLYPMBQDYMPPZLDNLXZCGOIRBZYZORHIOMGTEUMPORAONHC");

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
    msg.setTimeStamp(0.958030001429);
    msg.setSource(45985U);
    msg.setSourceEntity(220U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(1U);
    msg.type = 54U;
    msg.op = 66U;
    msg.request_id = 53345U;
    msg.plan_id.assign("TWBNFQWPBQSGVCRWJWLCUYOMNMGSORSVJDVQXRUHEYEOYDXBBRMPZXZCRQLDQOMVOELPEEVKNYWMSGGPMYCGXGVIUSYEWPJP");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 102U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("BDZUYVPEUNROGKPDYWNICRUCJDMPQGXQVTZAZXNCRVGFSHAMRWQQLXNLUTRMVIUTGDWFWSJYLZRVQEQSPFIKCBKECWTTAYEUTGNXYNORLYUBZMJYGDMPJZZIFFGUNCYSQJS");
    tmp_tmp_msg_0_0.lat = 0.173916716875;
    tmp_tmp_msg_0_0.lon = 0.461111059603;
    tmp_tmp_msg_0_0.depth = 0.76543666092;
    tmp_tmp_msg_0_0.query_channel = 238U;
    tmp_tmp_msg_0_0.reply_channel = 167U;
    tmp_tmp_msg_0_0.transponder_delay = 168U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("URNEIKITALZNLOWYBSKDHCKGMQNKGLIMVLIMHQPOBRSNNFZQBNTZMESSZGCJIQZZDHDAUWMTROVNJAHUSDECMSKEBEOOJ");

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
    msg.setTimeStamp(0.227960284402);
    msg.setSource(57618U);
    msg.setSourceEntity(136U);
    msg.setDestination(32835U);
    msg.setDestinationEntity(104U);
    msg.plan_count = 61506U;
    msg.plan_size = 1861320189U;
    msg.change_time = 0.104791645031;
    msg.change_sid = 60166U;
    msg.change_sname.assign("RTNFAJFYZCDDTIYYNACOSSOTTGOILUXAUAMHWPYLWETJITRLICCNRYIDWYULEAUVCFXHZQIKDRUBNZHMLVOVPTUVKXSLACIEJOBPZLWEHJIBBWNVAKQOBPOOBOSQDEPFPGKFMMXMSTBARRRZVKSFGUJGGCZNCESBDXQNCSSVMCYKVAQGHGNREENLKHGJHDXPZRHILUQZWNYUJWVTPDWFXWHYLYGZEPKKJMTFEBGBMUAQXMQOPSRQJX");
    const char tmp_msg_0[] = {78, -110, 29, 124, 124, -18, -36, 20, -60, -78, -83, -46, -124, -30, 52, -112, 81, 64, 27, 70, 3, 2, -47, -104, 102, 109, -89, -3, -24, 113, 91, 17, 30, -118, 11, -115};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QFHJRUDAUBDYLGHFIGAUAXNTOWDSKGADHLYYGQMASFIJMUKSFTJCMPLWKTVISXFOEUBTENKQOJYCRPXJZ");
    tmp_msg_1.plan_size = 51572U;
    tmp_msg_1.change_time = 0.135030623835;
    tmp_msg_1.change_sid = 43527U;
    tmp_msg_1.change_sname.assign("NICARKPYUFEBYJLQMVLQGKBHEVOCPSQAJVGQSORLAROJQDNPCYZWHYAWOBUPRRSQNYMMVTAUYWQPAWPFAUJJBIKRSZXGPJXFUYXZBTUMKBGHEDKWWSIOCTGMKEXXXOPGTYLZRSIVDCNJCTIEZODBBGZOQDWKXLIGTFWCAIXVNFUVWMVLFRVBUEDHMNSNXJTDHVIEUFPHCSEYGLXNSFHTUOWJLQLNEOCRMKEQZZTYMSHZADCAZDDHJTMIPF");
    const char tmp_tmp_msg_1_0[] = {-16, 99, -14, -75, 55, -28, 63, 13, 72, 52, 11, -82, -85, 33, -20, 55, -128, 42, 52, 52, 27, -112, 90};
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
    msg.setTimeStamp(0.964937353042);
    msg.setSource(46028U);
    msg.setSourceEntity(21U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(58U);
    msg.plan_count = 44457U;
    msg.plan_size = 2697205951U;
    msg.change_time = 0.819436148865;
    msg.change_sid = 32055U;
    msg.change_sname.assign("TAXPXMPYLSVFTQCEIAZWT");
    const char tmp_msg_0[] = {-48, 110, -72, -10, -42, -71, 3, 47, 1, 12, -53, -14, 52, -82, -70, -36, -8, -41, -64, 118, 45, -20, 86, -57, 116, 77, 89, -101, 47, -67, -53, -126, -119, -122, -122, 96, -105, -93, -67, -47, -119, -37, 60, 71, -39, -91, -118, -116, 39, -64, -75, -36, -86, 10, 59, 69, 18, 63, -57, -51, -109, -60, 100, -93, 42, -75, 59, -11, 99, -124, 84, -102, -71, -27, -83, 84, 94, -85, 106, 49, -121, -105, -97, -77, -8, 115, -78, -28, -47, 66, -120, -110, 30, 44, -3, -122, 81, -8, -123, 60, -75, 118, -32, -81, -115, -52, -114, -105, -99, -63, -128, 95, -70, -127, -81, 94, 79, -78, -99, 38, -114, 59, -7, -113, -78, -99, -43, -91, -90, 113, -70, 70, -82, -36, 98, -68, 0, -34, -96, -4, -38, 70, -3, -13, 2, 24, -65, -62, 110, -89, -34, -65, 121, 104, -70, 6, 54, 62, 60, 70, 2, -23, 67, 82, 66, -67, -80, 32, -110, 69, 91, 60, 10, 49, -81, -27, -104, -93, -4, -102, -57, -109, 52, 79, 33, -25, 123, -55, 114, -49, 52, -6, -75, 87, -80, 36, -100, 42, -14, 41, -80, -13, -3, -85};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RBHDKJZYJIPOYCELHMEKDHDHXCUDZMSSEIJOZMFEJGJPVZZNJBLIMJPIPSYEJBORSVDCDZDMGTLQFEBNSKOHNXRRLHIKEFQAUTRKVJBMMIBTNYAXZSIWPAQVDHLTBUAEOY");
    tmp_msg_1.plan_size = 16934U;
    tmp_msg_1.change_time = 0.325819835578;
    tmp_msg_1.change_sid = 24738U;
    tmp_msg_1.change_sname.assign("UDEBDDNNLALFOJKXAPRIKEPFHWSCBVCNAMMZZFGFCLDQQQVZNRJMUGNCYBBWCFXAMWLBUUBNTEVXDJQPAKRGILIXYSZAFYHPGXSWEEIQJIVJBXVWSBQSXYYUBGMWTTPFUINENQVJVOLTLWTUOPURKCFWRZEFXMJACDZQOYWOTNRDRNHKGPKQLZHGMFTHOVUIAYGPKSHVZSHQOUKAOZGLMOJIIYCY");
    const char tmp_tmp_msg_1_0[] = {68, 23, 22, -47, 82, 120, -65, -66, -68, -23, -66, 85, 109, 57, 3, 80, 33, 0, 47, 50, 89, 49, -99, 18, 120, -114, -53, 100, -36, -41, -7, -25, 125, -111, -51, -70, 18, -84, 60, -75, 121, 15, -4, 8, -12, -21, -113, 61, 118, -61, -104, 6, -51, -29, -108, -89, 23, -111, 105, -73, -105, 56, 37, 104, 61, 98, -2, 51, 96, -96, -115, 18, -71, -92, 68, 47, -78, 126, 101, 87, -31, -116, -60, -49, 83, -108, 88, -91, -87, -86, -67, -46, -45, -97, -45, -106, 12, -114, -48, 66, -50, 17, -119, -4, 89, 126, 40, 4, -23, 77, 8, 23, -116, -67, -101, -79, 49, 125, 74, 50, -49, 84, 44, -58, -5, 99, -110, 98, -123, -39, -113, -58, -52, -5, -12, -3, -89, -104, 79, 63, -67, -123, 1, 106, 13, 104, 63, 1, 77, -48, 98, -65, 84, 57, -58, 90, 92, 95, -87, -48, -54, 95, -5, -123, -61, -27, 9, -85, 23, -17, 60, -113, 29, -112, 107, 3, -118, 45, -5, 75, -13, -33, -42, -3, -52, 0, -127, -4, -125, -101, -33, -8, -100, -6, -85, 125, 36, -16, -60, -120, -114, 71, -110, 6, -61, -105, 73, 64};
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
    msg.setTimeStamp(0.463564694415);
    msg.setSource(61404U);
    msg.setSourceEntity(172U);
    msg.setDestination(21330U);
    msg.setDestinationEntity(254U);
    msg.plan_count = 52497U;
    msg.plan_size = 4025549622U;
    msg.change_time = 0.0864308747228;
    msg.change_sid = 14842U;
    msg.change_sname.assign("XWTRBQALAPOBECNBGGNMQBBBNSIVJAUFUDVVNIMRSRXMVGTDKSFNKZLRWEUUDZLCQHMFLAULRUXCERJFHWTPWAJELKQIYXIKHYICHTBJRZVQFINGXKPACMLOWRDGHOFHKOTWRDPUTAV");
    const char tmp_msg_0[] = {-127, -38, -49, 90, 57, 9, -3, -33, -8, 84, 103, 20, 29, -85, -65, 58, -117, -79, -89, 31, 92, 1, 29, -95, -58, -60, 110, -125, -109, -2, -71, -9, 68, -19, 48, 83, 65, 61, -80, 93, 71, -96, 97, -17, 75, 50, 115, -53, 73, -84, -86, 118, -85, -43, 117, 121, -78, 121, 12, -88, -98, 108, 36, -39, 114, -36, -11, 60, 51, -78, -80, 104, -34, -107, 96, 112, 26, 123, 73, 2, -115, 44, 107, -116, -91, 123, 38, -21, 19};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YOZMTAQLVRJXVTPKPIDZUIAKBEQRAXTSYSBWPYCTELGBQJDZQITBFKFCQOIECIMVNVMTKFEZBYGIEDGVIUGJILCQUFRH");
    tmp_msg_1.plan_size = 9829U;
    tmp_msg_1.change_time = 0.255768907147;
    tmp_msg_1.change_sid = 42173U;
    tmp_msg_1.change_sname.assign("NEIABAPIMRBYJODGHHSXJLYBATTKOUAQUFZNZGDJQUEPUQDHHYPFSTDRWWVMAUYSEKOMBGKPRSGMRNXIF");
    const char tmp_tmp_msg_1_0[] = {-107, -63, 109, 46, 103, 40, 77, -78, 125, -48, -23, 4, -37, 10, 123, 100, -69, -24, 18, -45, 69, -60, -124, -12, -17, 125, 29, -75, 20, -48, 38, -110, -103, -46, -91, -6, -119, 50, -113, -29, -42, -73, -44, 31, 125, 118, 71, 107, 2, 80, -51, 23, 7, 44, -78, -56, -1, 25, -38, 97, 3, 54, -27, 9, 67, -4, -22, -27, 11, 70, 105, 11, 10, 99, 73, -40, 38, 26, -55, -4, 47, 76, 37, -58, -120, 102, 126, 49, 2, 53, 29, -82, -85, 113, -61, -103, 11, -52, 17, -73, -94, 61, -121, -121, -118, 75, 80, 54, 76, 104, -124, 113, 15, 5, -16, -63, -55, -11, 41, 110, -105, -7, -93, -20, -80, -73, -50, -42, 6, 38, -16, -91, 21, 10, 125, 27, -36, -63, -125, 36, -83, -51, -19, 69, -27, -113, 39, -90, 71, -106, 53, -83, 60, 3, -115, 121, -1, 30, 36, 4, 4, -113, -88, 13, -89, -119, -9, -45, 43, -75, -118, -87, -11, 8, 101, -93, 88, 62, 1, -9, 110, 97, 99, -48, -33, 91, -128, 73, -121, 0, -21, 118, -96, -112, -18, 103, -115, -11, 71, -14, -68};
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
    msg.setTimeStamp(0.130182952923);
    msg.setSource(2510U);
    msg.setSourceEntity(94U);
    msg.setDestination(161U);
    msg.setDestinationEntity(128U);
    msg.plan_id.assign("MMKGLLBHKQDBTQDE");
    msg.plan_size = 44918U;
    msg.change_time = 0.875954820664;
    msg.change_sid = 8628U;
    msg.change_sname.assign("FPCQHQOYFWTBQOJMEDRJSDKXYDGCCLIFPOBFUMDLQDTNEBUXHJZOAJHLKPKQYLBRVISXLBYGMMTGIIRBFRDWFIZVLMUVYZWNUQIONGEPLZOVUKZTRDXAWYLEECKGXINXSRWXZTSJVGSPUBJZHUVWPHAUYAQVGXQPZPMFIYLSADJKMEW");
    const char tmp_msg_0[] = {-79, -12, 114, 50, 15, 57, 9, 21, -91, -21, -102, -17, -117, -12, 71, 80, 99, -57, -1, 40, 113, -104, 83, 117, 20, 93, -16, 37, 18, 95, -34, 1, 7, -79, -22, -117, 39, 21, -23, 75, -29, -117, 91, 126, -121, 89, -6, -53, 93, -95, 101, 99, 69, -108, 49, 104, 75, 114, -125, 34, 55, -28, 120, 96, -1, -15, 82, -115, 60, -8, -106, -60, -77, -29, -100, 73, -117, -15, 0, -116, -66, -106, -46, -83, 25, -74, 45, -1, -4, -120, -54, 75, 59, 124, 40, -48, -23, 32, -93, 85, 51, -101, -20, 32, -118, 88, -51, -105, -56, -107, 60, 79, 107, 11, -45, 13, 66, -110, 17, -125, 87, -86, 15, -62, 21, 113, 100, 53, -91, 13, 7, -8, 38, 58, -24, 64, 105, 101, -36, -118, -127, -119, -64, -70, -32, -50, -49, 88, -117, -105, -96, 34, -94, -119, 92, -120, 94, -81, -39, 45, -119, -18, -113, -116, -91, 34, -50, 74};
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
    msg.setTimeStamp(0.625952674678);
    msg.setSource(50322U);
    msg.setSourceEntity(31U);
    msg.setDestination(12977U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("GWTUXGLZXNYJGSNZIACNGSJZVCHEXYWWWQZYMEDULKWKFUILOMELQHOFCHQUHESPIUUSLZAWCRHGVTAIHMBSSKVNDJMQXVBXHVTMGALOAVJCHOZEVMNTWRZMVWXBKCKBYXJIKRJOKCRFLQGQCEITUQFFIPDONFSYLNRAXBELGUDBZRAPWIYPPPKVATYQPJGYPUKLPFZADOOBXQTJFNOVQKXBDOWMUFFDERYRGSHTCPSAECDBTYMSRJI");
    msg.plan_size = 35209U;
    msg.change_time = 0.0230705197813;
    msg.change_sid = 27893U;
    msg.change_sname.assign("ZCKRHAQKJLPBXEYTPUHBLKEMZTZGCLEDLETOSAVEBKPCGIJDUXPROSCPTYWRNSSOWDGYPVCQYAYHNVHQOJIMGFDWOKQMRYTKHKOXUTLTFYQVXKGSLHNMXIQUFBFQJYOBGUIJGSTCYUTQVEXUMQAXHOAFCWDZWUFIZJENXAUHMETKSNVRBOJXMWRRPDIINIEZGPFCVWKHMVDGBVACAVMCDZWLDAHGDJ");
    const char tmp_msg_0[] = {-28, 98, 49, -60, -114, 63, 114, -53, 97, 33, 25, 101, 120, -94, 49, -12, -54, 107, 29, 124, -61, -92, -65, 65, 53, 75, 109, 35, 38, 109, -36, 46, 12, 60, -35, -21, -105, -77, -65, 16, -2, -40, 34, 11, -86, -53, -93, 66, 125, -45, 66, -29, -6, 58, 81, 117, 53, 97, -46, 106, 50, -41, -28, -5, -123, 48, 41, 62, -127, 116, 56, -86, -116, -109, 65, -66, 108, 14, -58, -120, -123, 103, -73, -58, 97, -91, -16, 47, 10, 13, -119, -119, 116, -53, 69, -124, -85, -70, -52, -46, 61, -125, 114, 55, -24, 67, -22, -110, 98, 18, -96, 77, -113, -41, 123, 97, -100, 13, -72, -52, 84, -106, -79, 86, 121, 17, -65, -83, 48, 7, 9, -110, -68, -25, -94, -13, 17, -87, -79, 61, -100, 68, 1, -85, 19, 55, -69, -36, -57, 82, -56, 107, -25, 103, -34, 67, 119, 1, 52, -60, -22, 26, -87, -79, -68, 115, -9, 53};
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
    msg.setTimeStamp(0.636697840906);
    msg.setSource(53777U);
    msg.setSourceEntity(225U);
    msg.setDestination(14198U);
    msg.setDestinationEntity(96U);
    msg.plan_id.assign("VITVXMECVPCVRCGPTDKXZOHTGQJCAPSLENQMLZHYSJCCIGQDNXTXLXPGEDUAHEILHEUMUODSAQS");
    msg.plan_size = 20111U;
    msg.change_time = 0.145374826155;
    msg.change_sid = 9907U;
    msg.change_sname.assign("BCDUQAAVUWONSBHELWBRNVGBEZJPSFMZVUDYBTCSOXOJPTLODQPIVRBGCMRWAZBYTMZULYPMIKTXEKMTRHDEXNFDX");
    const char tmp_msg_0[] = {80, -81, 28, 99, -43, 101, 45, -82, -3, -8, 7, 42, -67, -124, 87, 118, 43, -118, -117, -61, 85, 60, -60, 70, 83, 116, -69, 15, 110, 28, -113, 66, 116, 118, -24, 126, 96, 120, -11, -1, 120, 76, -7, -96, 111, 19, -71, 106, 59, -21, -29, -53, -83, -28, -82, -26, -37, -7, 121, 118, -81, -81, -50, 92, 35, 32, -74, -24, -122, -103, 37, 14, 42, -86, -119, -14, 1, 66, 46, -48, 0, 19, -65, -28, -114, -65, 37, 84, -14, 58, -79, 52, -24, -53, -42, -36, -67, 71, 6, 24, -52, -76, 15, -71, 76, 107, 12, -10, 32, -122, -83, -39, -3, -110, 52, 45, 113, 3, 106, 16, 49, -93, 21, -88, 67, 35, -44, 76, 0, -27, 18, 89, -58, -99, -107, 38, 28, 75, -49, 49, -53, -112, -123, 91, 113, 85, 12, 97, 100, -76, 60, -51, 14};
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
    msg.setTimeStamp(0.764137600722);
    msg.setSource(36722U);
    msg.setSourceEntity(138U);
    msg.setDestination(57557U);
    msg.setDestinationEntity(179U);
    msg.type = 83U;
    msg.op = 19U;
    msg.request_id = 9884U;
    msg.plan_id.assign("MUJBQOSUZTREWSCLNJCDOSICFKVSWSWXDHSHHTQQLWA");
    msg.flags = 52267U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("KCJLGJAGYUCKTNSPRVLUXWRWUWPZYAZXGQQVHDCEGWCOSHTIVCZMBJFFPAHQPFWKBRG");
    tmp_msg_0.lat = 0.00472716321304;
    tmp_msg_0.lon = 0.966052523358;
    tmp_msg_0.z = 0.58323378292;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.cog = 0.388225257548;
    tmp_msg_0.sog = 0.132544708981;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SWRJUDAFDKUXVIOXCEKCFMWZGIRPUWBENAEBZHLVOWWDACUJLYCEXDQARDGHQMCDSPPTRZDPYHIVEGUNZLOKTPLFCWHXPDRTICBWVHJVFMSZXUKXWONJQVFZHOMMFNAYHGSGLNMLJTBQCZLPSRAUQGPGTTQJUSTPGEBKZRYNIYNVBNYIHXEHEKRWAOTMWIFAFJQYMQCNXODMUYAVTRMISJYIKZIYOJEKFZBBVTNXLHGAJOP");

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
    msg.setTimeStamp(0.778733140963);
    msg.setSource(61069U);
    msg.setSourceEntity(70U);
    msg.setDestination(38168U);
    msg.setDestinationEntity(3U);
    msg.type = 200U;
    msg.op = 94U;
    msg.request_id = 45629U;
    msg.plan_id.assign("OLSYHWCLSSJVPDMJNIKJIFLPEAGEJILJUPFXUWVHFGKCULVNQBJWUIAHQBOESDGYOKPUTBWRQAMZSJLREFLXNMMKNFDOHETOJZDVHZXBWWECMBXRQTQGUKZORWOKLKKNTKJTYHSYERRPPRQNOGADQEZIAUHTYVWZUHNUAIQFBYQMTVPUVDCGBYHTRZBVGRZVGXMIASTPGECVXWPDFNDCSMDAC");
    msg.flags = 64655U;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.125251866932;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MYZREBSMOOKDRJVOQBJRHPCTQRSYAZEBTRACZINRQZHD");

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
    msg.setTimeStamp(0.965748019318);
    msg.setSource(52681U);
    msg.setSourceEntity(179U);
    msg.setDestination(18546U);
    msg.setDestinationEntity(90U);
    msg.type = 121U;
    msg.op = 56U;
    msg.request_id = 30123U;
    msg.plan_id.assign("ANQNVDALGFHCKRRKZUJCOUUCUKGGWBRGNVXIPTEEWAQJZOZLKQFXGSBCBBPVZRVPNBTXTNPZBLDSYPQYZIOFBSAGYFLKZITEOJJFRGEBPMWUYWLYMHHNITFTQVURBIYCUYXDXFHKXJLTEDQTTUXOWDPXVWYFIJXGTMNVWDOLPQGIFALYDDEHJHQMMCEBNFPRRI");
    msg.flags = 63723U;
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.dir = 0.84596184373;
    tmp_msg_0.speed = 0.06310380765;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NDIVQTEEDGHZTFRWKMCQIKWBLEJACSHGONXCZAMJYRQBNTVYZZBNAZPJEBMPDCDYKPOZVEKNXWPBDUWHOGFIJYBXJSOSFBXCWEDXOGXQEPVUWKVXSZQHRUOKLB");

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
    msg.setTimeStamp(0.60634330702);
    msg.setSource(3417U);
    msg.setSourceEntity(7U);
    msg.setDestination(7386U);
    msg.setDestinationEntity(89U);
    msg.state = 124U;
    msg.plan_id.assign("OWAYPRZXYROBHOWKFUCYRVJUBDAFIQNBXQJNSUCMAOWLZUAPKRAPELHSBGORLKLTONJVDEPZRLZQYKMVPDUTJSHUPXCYGBYWQAPWCXQMRQNIJVTHGWPJETDMHMODEWEKKVKGZGFJNAKBYFGUEUDEXNEXSUKRXLLFVNVCFEJGOPIADIHSCTQGJSDWLSWTMPRTFLFRHOYZAVACYIEXSDHTHSB");
    msg.plan_eta = -533726634;
    msg.plan_progress = 0.562017819149;
    msg.man_id.assign("VNBHTAESDANQATHMVAJMEPQRUUZWZELVKOKSSIXSNKUGDLOMEIGPYPKDIJJCBFNGBYPETQGJOZKVBITBKIJNVPULHOFDFGWPCPNCALWMTHVBGWYEZPJNKXGCNDJQZSDDILHIQUTEOKLDICXXZRRABLSJDNHFFVRSVMGOFOWQGW");
    msg.man_type = 8855U;
    msg.man_eta = -610541007;
    msg.last_outcome = 242U;

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
    msg.setTimeStamp(0.194741253526);
    msg.setSource(63223U);
    msg.setSourceEntity(205U);
    msg.setDestination(5860U);
    msg.setDestinationEntity(251U);
    msg.state = 82U;
    msg.plan_id.assign("WORHEOWIKTJEEUEVEVWOBMKTZLGANOVODFIJPSXRSRF");
    msg.plan_eta = 2120181270;
    msg.plan_progress = 0.244143850895;
    msg.man_id.assign("RSYDKOJGRWBVTXHEHBHCCTZMSHLOPAMFYYCSIZBAETKCPBASWJREGQQVHAVLFXGQJIOLAIXCYKXWHRDONTJILLFYCNLPASWBXIJXMJYLMTWKHXESZCZQURDVMVGUHQFEPUWVFEPRNGDUHIBINFVQDTSNGWNKZZUVKXMSPEKEOPMAUQWZHIG");
    msg.man_type = 11056U;
    msg.man_eta = -1293678270;
    msg.last_outcome = 189U;

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
    msg.setTimeStamp(0.790858695521);
    msg.setSource(34549U);
    msg.setSourceEntity(2U);
    msg.setDestination(54472U);
    msg.setDestinationEntity(3U);
    msg.state = 78U;
    msg.plan_id.assign("OXZRACGOZBXIEAPJDLVQADJQAOABKVLZZJJSHVYHBWMTFPTLFDMNKHEVNCDWRIFQYVNNOUMKWFHPXVFGLYWCLRSWZUQAHCKCGYH");
    msg.plan_eta = -2139663592;
    msg.plan_progress = 0.843657284474;
    msg.man_id.assign("CWOTLRCVTUKAWAPHVQEQXEXWUTUYMAZZTVALSBFRCNEFGSOBKYSWHYQXREPKGUPHXDZFBUFYEXXRCBTOMDOJYWJPDMELSWPGOPXSQQKIEI");
    msg.man_type = 16117U;
    msg.man_eta = 2089579218;
    msg.last_outcome = 16U;

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
    msg.setTimeStamp(0.647939105234);
    msg.setSource(9198U);
    msg.setSourceEntity(144U);
    msg.setDestination(1646U);
    msg.setDestinationEntity(79U);
    msg.name.assign("ZQGHDJJJCYMQOPCRXGPFLTHKAVFNFVEDDBSPEKJHLBMLFQSWBZWGGHLVAIPHBQWXEUFSZKBZNOVOOQIMYGRBJFYLJTDTXEAMGSDSNYHZWUTTEFBGTCIKUBYPWVJSOUCZVXLAKABNXDFBCQKOMREUHOAUWLYHZXYCXEUVHJYWTLCVNRAIJQKPMRILCHWIVXZZRTWMMQGOISIOEDKWPDANNJPFUKFMMSLSQZYXIYGDNXED");
    msg.value.assign("DLCSRWWIGNYFAJVTFJNNOXTYCWBMHFIHIHWURQBUCXMPWKJEVDNQHQVUXTGUPYSVOLXJLKGAUVESSYKDZTCOFAGZXCKLAIJCCSITSWQPLPHURZQODUQFKJFMEDLRKOOXXVODYDTMBATTIRXIFDMAASYFGJ");
    msg.type = 98U;
    msg.access = 18U;

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
    msg.setTimeStamp(0.170238870623);
    msg.setSource(59326U);
    msg.setSourceEntity(90U);
    msg.setDestination(26550U);
    msg.setDestinationEntity(221U);
    msg.name.assign("UYPZNPCGEAGXVFCZDJRKCZIIZRGCEFZTRLOMKPIZJILKOXPJMWSFPUHFNODXLVTBRUCWOTUNKQDWSBXHLTXUCFHIQWWNLYVJTEPLVOSAPWBZKGLXWHAAJRMZESTMYLNLVVDAXTZSWYRSMAUHMEXAFHGGHJDLJQUBC");
    msg.value.assign("TRYIMPEIVGUQYIQMSJWPRZAJHYFWFEMLKKQHEXBKEUOLJQVFRUPGTOJCBTXLOOFPKXIXVIUTQUJNIERLZVXPETLJNISXGDYSQQVJYMQLGRDXUAMCXNUGRUCWCEDBGBVHJRFRRTWDVAOFMQGZKFSWPZSHWZGYSTBAANVNDKVPYAXODABBWNOCHWMNVBDSKAOUQGYEUHIYPHXRL");
    msg.type = 15U;
    msg.access = 239U;

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
    msg.setTimeStamp(0.681556311115);
    msg.setSource(48356U);
    msg.setSourceEntity(138U);
    msg.setDestination(35682U);
    msg.setDestinationEntity(25U);
    msg.name.assign("JJOJIQTJKKOCKVULACYVBNRLEWMZHYYVPDIJDIRUATVCRLAGMBSWRRIBPWWQQXVOKKXONOEQVHZURZTRLMXNQPPDWDPFZYEYNGX");
    msg.value.assign("EPRBIGTEJJXHHAWBEVZETYUXGXRJSFEJWLHJOICUZUSZWUITBIRZPVMJBZKM");
    msg.type = 206U;
    msg.access = 22U;

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
    msg.setTimeStamp(0.206611219854);
    msg.setSource(15866U);
    msg.setSourceEntity(47U);
    msg.setDestination(17028U);
    msg.setDestinationEntity(218U);
    msg.cmd = 143U;
    msg.op = 206U;
    msg.plan_id.assign("QUMRLYVLNASVTNMDWWNTVEINSUDCGOYPHXQYRLSPAPBNRWTJWHRCQZQMOAYUJGXYMHYSTMFNHZKBXMWGVBKUUTORNXOCGJCCGIHEFDYDFSPBIVKDSPQEMXXJPHCWBPOTGVOIPAJELZLKDGHDQDMZYREKDWJHOVGFGEIBHNUZKAQVROQFBJUJLLFUBARSIPZOWVEFDCLZZTQSJXI");
    msg.params.assign("OGLVIHHEDRDXYNMPGKXJMJJAFIJOGMQBESHLOGWYQPKBBCDZZVIRTSWZNIRKSULXECQLWFOKUMADATXITQYJUYNUNWANTQHPXNJIIDZELHUZUMHQFTCEVCRFGGMOKWSELKRJHQTKCD");

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
    msg.setTimeStamp(0.241681016036);
    msg.setSource(55120U);
    msg.setSourceEntity(110U);
    msg.setDestination(27001U);
    msg.setDestinationEntity(237U);
    msg.cmd = 82U;
    msg.op = 71U;
    msg.plan_id.assign("KEOQRVXUNPPWWTBZMBRDGBGL");
    msg.params.assign("BXQADPLYVNPDDYYLZLDKSFCEVJMOOCHFAOAXNRHXFMGEGJIMYUTKTBKCUTXTIYHWHSQEDVFVRZYRB");

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
    msg.setTimeStamp(0.685840942223);
    msg.setSource(46283U);
    msg.setSourceEntity(171U);
    msg.setDestination(27510U);
    msg.setDestinationEntity(206U);
    msg.cmd = 29U;
    msg.op = 79U;
    msg.plan_id.assign("OVTUPKAQHBIUHTFLKSZSLRWOPWDDDEAIORULINDNEAFNZUKDKHFXIOBCBKGLFXTUADQZJKTJKPZRIXBHM");
    msg.params.assign("PVATNASRXUYSZQHNRNGYVVJEUSYFJRBMTDBTJA");

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
    msg.setTimeStamp(0.0289003380635);
    msg.setSource(62157U);
    msg.setSourceEntity(246U);
    msg.setDestination(16020U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("BECCQIWAQMOFWZVHBUVJEHFFGZZBYLCUAWRPOROOMQGTYNNKANAIBGYLHDJEFCAHWPXJOYPYPERZATANVFXRCFQWGZRTQDSXLYUKNUGOZZYXJIPUUQUXFXLKLGRQXCDOKGBVDJVDRSMMVNSEBRRISOKTDSASOESKIKWERFTEVWYXNOUQCNHVDKVL");
    msg.op = 41U;
    msg.lat = 0.958377440269;
    msg.lon = 0.182095749016;
    msg.height = 0.142661185683;
    msg.x = 0.491217553276;
    msg.y = 0.91293457954;
    msg.z = 0.829627858837;
    msg.phi = 0.5760908473;
    msg.theta = 0.326355196591;
    msg.psi = 0.115601759886;
    msg.vx = 0.689644406895;
    msg.vy = 0.0173443527479;
    msg.vz = 0.275693730008;
    msg.p = 0.177970996149;
    msg.q = 0.63729590164;
    msg.r = 0.621143649867;
    msg.svx = 0.23359862666;
    msg.svy = 0.854711085305;
    msg.svz = 0.0467000488434;

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
    msg.setTimeStamp(0.23322827402);
    msg.setSource(30460U);
    msg.setSourceEntity(213U);
    msg.setDestination(2618U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("LCTAZIQJZOFGYUIZVAMUMSXXQHHFNUKGOVZNRILTOTNCXADNCYPSEBQKPSTRGXXLDLYJIJKLPRYLVQKGKLZAAWMIZMYAUQYKMMUAOANMATRKFRTSWWBGNRTIHVDPTEPWHFFDIFJKERNYBEOFIWXHASSOBXCPKMGRICTSBLGQEYUWEZRITUJUOQPDHXWXFCKHYQDDHGUVQQCVJNOZUMS");
    msg.op = 106U;
    msg.lat = 0.582974424104;
    msg.lon = 0.88357959855;
    msg.height = 0.772425074517;
    msg.x = 0.525344577271;
    msg.y = 0.367882734547;
    msg.z = 0.336984904169;
    msg.phi = 0.357140568522;
    msg.theta = 0.63017894243;
    msg.psi = 0.42737100614;
    msg.vx = 0.84659886879;
    msg.vy = 0.809929754394;
    msg.vz = 0.93195992068;
    msg.p = 0.679878520323;
    msg.q = 0.859616110658;
    msg.r = 0.356638879961;
    msg.svx = 0.759594394875;
    msg.svy = 0.249372520626;
    msg.svz = 0.359990529166;

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
    msg.setTimeStamp(0.42574152251);
    msg.setSource(22198U);
    msg.setSourceEntity(84U);
    msg.setDestination(46324U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("YYTOSCGWCJMZYYEWDSVBJQXQZGNIOMSTGBH");
    msg.op = 61U;
    msg.lat = 0.0201039617572;
    msg.lon = 0.148666828798;
    msg.height = 0.176996832152;
    msg.x = 0.231174017487;
    msg.y = 0.462290494103;
    msg.z = 0.954225169946;
    msg.phi = 0.770294642392;
    msg.theta = 0.707683212665;
    msg.psi = 0.159658861522;
    msg.vx = 0.657654754811;
    msg.vy = 0.671916885066;
    msg.vz = 0.247714270852;
    msg.p = 0.323494919082;
    msg.q = 0.523000702108;
    msg.r = 0.00322993006814;
    msg.svx = 0.883523153914;
    msg.svy = 0.609300403142;
    msg.svz = 0.123447016433;

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
    msg.setTimeStamp(0.462031704096);
    msg.setSource(55868U);
    msg.setSourceEntity(114U);
    msg.setDestination(33646U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("BVCRRZRKGYVIQANXIAMQFOHNQBZZTYTTEXCXDDASKDKTYJOFMQBHZBQVTHQDRVMLTEBBEDPGG");
    msg.type = 237U;
    msg.properties = 225U;
    msg.durations.assign("CQCNERKDOPNSPEEDQXQBPNVVJFMFBMDZFYPPKZZWTKSOYWUYXMULRQWAELDRCPETCD");
    msg.distances.assign("HQSWBSRZZDQAWUVFBXXINWOKEQTKWWCWACCZDSVHXHHUABHLTPIQTJSNEMESVMH");
    msg.actions.assign("YVQHFUBUXKNWSKNZYLPCMJWKIVNBUWXOZIANKAXCRTUOVDPACXUTKWMSNLEMIGRLEMJVFSEOUSLYWIEZZSAAKHOCSHTOQYHHPTHIDGPDXQCCDVFQNLMPMFBTUJFJMOOUMEVAODVEILZJYAXJBLDG");
    msg.fuel.assign("EMMKNDHSOQFYRGGBYLOMDDCZKNDFLBWJICNPQEAXKDMKGTSIDZNTLWEMWOEWVUAVVKPOXXGXNTSAHIBGUVNBBAFFJIQZESRPOWXZEUMCXCQJPLJPVPWGXYVIHLHTLVHAKYSRHROZGUNMIYDXTRFAVEQUABSQRRNOHFHMPDNKWATRRICXQYXCDTOPSJWWFPR");

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
    msg.setTimeStamp(0.300652287159);
    msg.setSource(54688U);
    msg.setSourceEntity(92U);
    msg.setDestination(25247U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("VFYAWUKGXXWQVNDVCQYTLZZWPJRVNPSKEDZLDODMKLPSFFSIITLWOPTDRAIUGHCHAYZEZOOJAXQVGCAZWQQPPKOGMMPBCREAWNCBKKYYMMWVZUECHVURSFYOHAXUHDUOTXQBKGBUSUJRDISFLMIVQUZAGYNJ");
    msg.type = 21U;
    msg.properties = 201U;
    msg.durations.assign("ECKURHCDCBXGAXEQFWOCOHHOIDFAQRDKJWYUWFDJRTFJHBBFIAZRWPRLVFESEIGGAFKAJY");
    msg.distances.assign("MISSJGPUTVXZCZUCNGHOPFCDDSOTXEAWTUNOHMIIKBYZAJJRNAQKFPDMTZWOIQGHRGFAXYLWNOXKQLDIKHSBIULPFOQYDGWBOLAIHPEU");
    msg.actions.assign("XXVSDUZKWXUKFILKLADZPORTZNAGZQHDTUCRPCESRBHAUANATRMECENJSYXHSYEZIVUDOTKNCZKJQPBEVRIBHTNLBJODYLULMJIPRAXCPCDJOVDEWZTQDQLZFIGUUYMOSWYDJBVXKKVGOPNQUYIGFMPWDHTPWSXBRQJRLCLMFXCQHAWFKVFOSAQBJBACQLCHEX");
    msg.fuel.assign("PYTPBJTTREFSBUXJOZELQBMQQKLCXXFVIOUCSDNVOAUNAGZCSAQDYPPHUPRUMIRVWZWKILUWCVSQGOIXKNWVAAADEZYSFNZRSZYLWIVRNDZAWOOZHKXUTGFQMVSMISAPBK");

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
    msg.setTimeStamp(0.580812610252);
    msg.setSource(15198U);
    msg.setSourceEntity(131U);
    msg.setDestination(22282U);
    msg.setDestinationEntity(243U);
    msg.plan_id.assign("LAJESSVYMTSHLSZYOBMXIZKLWMQYJVUORRFZRVTFEXCIZDCAANRBDLKJAKKWTQTIFRZCMUGZNOXILSAUJHRQPIIPHQGKWTPCPNJHIGOLDHEBWUENMNOLUW");
    msg.type = 165U;
    msg.properties = 207U;
    msg.durations.assign("NZCGHSWVUHQICHROFEOPJDPQFZU");
    msg.distances.assign("BVIAMOSNWQTXDIJOHXETTSBLVUDRFFSELQJJGUFUSWWGEIATTBYAXVPABYTVUCGKGWGWMGRHKBKUEPDYUDZSKXYQQAPCRRMLCOPVYNHUSVJGFTLQPLFLAMROAPMJDNGQHCXGIVNGSBZMPRWNCOOADRHJETZSZCSQZ");
    msg.actions.assign("LAYXJHYSFLWAERNZBIHWFSGVSZ");
    msg.fuel.assign("JWIGZSOXDHVRVFYHFNCLOAJFOTNAFDSHJGDRUUUAIELBCXJJYZXAKQBINDQFTPZWHXOMNPYBECNUVTNTYOJEFOVQSMMZHMIHALOSWRDKDBPHPHQWXJBJIPACRSWBSLCNGXYTAXTPMYEIURMCCEZADTOBUGIYLVRRQEEQNESZTKEDRWZOFYEKBFCCJKPYXSBHMPDA");

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
    msg.setTimeStamp(0.652188757188);
    msg.setSource(44829U);
    msg.setSourceEntity(203U);
    msg.setDestination(43531U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.617336162752;
    msg.lon = 0.838785565035;
    msg.depth = 0.544651848131;
    msg.roll = 0.581120339281;
    msg.pitch = 0.418884160136;
    msg.yaw = 0.1668119788;
    msg.rcp_time = 0.227815839895;
    msg.sid.assign("LEDLCSWUYBPKNQGVCBXGXAILVZCQRZBHBPHLMNGZORIFLQFAHZUCQUNZMEAFJKKT");
    msg.s_type = 0U;

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
    msg.setTimeStamp(0.673511963304);
    msg.setSource(8845U);
    msg.setSourceEntity(5U);
    msg.setDestination(26713U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.366689730447;
    msg.lon = 0.542257204807;
    msg.depth = 0.185889670276;
    msg.roll = 0.196182525717;
    msg.pitch = 0.736948284009;
    msg.yaw = 0.551238886503;
    msg.rcp_time = 0.831606131971;
    msg.sid.assign("HBDUWNFZVIABWLIVFKNTFIGQPGAGTUSTWPAYZXPENGPIECMBFGHOZOWJTHHLFAKRBCMIAEMJIYEEUNZDVROLUWDMKTSXOVORUHUGACCJQDUZRJVCGSMGXCIJEAXEIJKRVPQWOSTNFYBK");
    msg.s_type = 94U;

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
    msg.setTimeStamp(0.877640640809);
    msg.setSource(12457U);
    msg.setSourceEntity(14U);
    msg.setDestination(60832U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.578707183647;
    msg.lon = 0.932503336237;
    msg.depth = 0.772290395412;
    msg.roll = 0.439896085786;
    msg.pitch = 0.932758710621;
    msg.yaw = 0.77833021285;
    msg.rcp_time = 0.431205639007;
    msg.sid.assign("LUEZNGDNTWIHVUVEMATNCVXRMMDKYTLAIAIFGESJINEWRRTKGCSFFWRCMXCXALCBTZLALWNOWWKNQFQKIZCGPKLAYHTNOVEW");
    msg.s_type = 1U;

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
    msg.setTimeStamp(0.464107938619);
    msg.setSource(23609U);
    msg.setSourceEntity(55U);
    msg.setDestination(11290U);
    msg.setDestinationEntity(228U);
    msg.id.assign("TLTLRBCWPOPDIGSQQLEBJEDRCHALWJRKFCDKKMFTQZVZHNDJQSYUHTUMCIONPD");
    msg.sensor_class.assign("UHAPRLBYXTAEZSZCB");
    msg.lat = 0.337109825292;
    msg.lon = 0.800721035338;
    msg.alt = 0.549104474167;
    msg.heading = 0.129796343289;
    msg.data.assign("APRRKHXLDPMTNJUQDGOKOTZMZFTHOUWYCMDFKZSGPWZDWYELIDTQCHCONEIXYGNICPIWEBFGHLHNXHVVVSITFSUTIMYNYTXMYQDMPFROUZUUYEZNIQHJXXOWUFIKBKLAAVLRDLQHARFLEMNSAOCYBJRLJCQXWIMGEAPBBASHBGLKTU");

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
    msg.setTimeStamp(0.425898328282);
    msg.setSource(47723U);
    msg.setSourceEntity(4U);
    msg.setDestination(18718U);
    msg.setDestinationEntity(225U);
    msg.id.assign("AKNMZADMOAHZUAPQRBPTDPOYFDKUVHMRBXGESGMZCUZFTSGHBVKMFADCEJUVLJKPDWUNAINQPQRQBCDPIGJTJXBQKOQYGDWBVPWHGYCIWJWHIAABYSKVXPGFOVZNTPUZCTHGFTNSMIOYZNULGFDEBHCFUORZZGKAFWYDXNVLJXRLQJWRIWJWKSCMXYEEIZBCSNYCLEIYLM");
    msg.sensor_class.assign("OJLQYFBVUXXWFLHDKRMTMLWRJVMUZPQJZBVKFOSGHWDKZQLTCJIWPRMFOBSDDJWLYEPJMFGSPENUIPXUOTGRMHZAFAJMBHGPFIMKUFGAIQTAMGKSQGXENWAEBVIJNPIKYBEPIQZHTTHWDOVAYBWRKOCJYONHLPCEASCEVTXUZVLUNKXWXHARVSHIQLRYQODMOGSNXBKCVAZGXCDZWE");
    msg.lat = 0.864960668145;
    msg.lon = 0.199761604808;
    msg.alt = 0.301269690078;
    msg.heading = 0.823494318432;
    msg.data.assign("CPQOBMJZGVXHCKHNJTDNVQILSLOVYQBLUFJV");

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
    msg.setTimeStamp(0.258135015499);
    msg.setSource(14264U);
    msg.setSourceEntity(219U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(135U);
    msg.id.assign("DUJEUOMVXEQSTIPNPKGMJJCRKAMOXZBMKDAAYAWCULQOOEMFLBZRJBRCOWHGDQQOSLVMAKDCFICUYBOLKFKQENXJHOKSTWFVWURFJKTEPNJWRLEVRBYXJVGNGHXNIESSQBWWCISXATZYMLRNOGGNZTXSRPEHFTGPPAUMMBGHQTJYIYPA");
    msg.sensor_class.assign("SNJLWDTKMVUMXEWGVYLTJUBNMOXIBTKRSNHYPGGAKZVGUSMSUWJFSWWNMIXNARMOSWJLHBOHHJDCNWRLAQJ");
    msg.lat = 0.113691281498;
    msg.lon = 0.0594125358426;
    msg.alt = 0.739746546449;
    msg.heading = 0.988991480183;
    msg.data.assign("IPFFKVDBISGEWRIEOFIYQXDTZGOKNRPUUJMIBXFKBJVYVVRQJOCYIYDJSXRSDHDZZFEG");

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
    msg.setTimeStamp(0.0599210232917);
    msg.setSource(3619U);
    msg.setSourceEntity(149U);
    msg.setDestination(4387U);
    msg.setDestinationEntity(39U);
    msg.msg_type.assign("HGQOLFJRQIRCFIV");
    msg.sensor_class.assign("AISCQZEVGBJPFYWMKLZLWBKVNIXBMDLAVTUKCYDXZCVHPWZWDICEXEBLUSZKLKCTMTBDQFDRMHCHFSFZQK");
    msg.mmsi.assign("FETZIBNLOWYQMEALSIKKKMBDKBEFOOMBNSJSEHGFSPQTRGVMCTWFGRMYDIOOZVJZJXCRNGBFEKSDVVYARPNXW");
    msg.callsign.assign("NRTINIMNTOZAYSULZBHJMKQQRHHPBTUGODEWHVVDKPNTRIEGLSXLWOCZJZICPNTUUCAVLJDOOXXNKWAQXVFDVPEKCXEJDOIFLGFSVOSFOAYJZEISLZRDNLGLQWOYQRKYVECDFOECA");
    msg.name.assign("DCZCQVQMGDTPBFCJMNZJGBELHZRESCOHLPCUHUNOHCNFKJSBXXUTNMYOKUXFPNRORDPKRNNDRXYHPFWZIMISSUJGZJGPWCXBFBYQBIJYDQTZREAEQAYTCGLIUOWJAWGTOVSMZVKQVTSOABDVLWAFOIRXCBZGK");
    msg.nav_status = 53U;
    msg.type_and_cargo = 164U;
    msg.lat = 0.956994696938;
    msg.lon = 0.238640887612;
    msg.course = 0.691184785516;
    msg.speed = 0.528906001185;
    msg.a = 0.0299468589198;
    msg.b = 0.1108231402;
    msg.c = 0.120514424456;
    msg.d = 0.452136174571;
    msg.draught = 0.410704091777;

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
    msg.setTimeStamp(0.326682821404);
    msg.setSource(1986U);
    msg.setSourceEntity(239U);
    msg.setDestination(13471U);
    msg.setDestinationEntity(12U);
    msg.msg_type.assign("NZHRBTUVKLRSIRFJCQDPHKRZCH");
    msg.sensor_class.assign("PKFORXLVJNHTYOFRTMBJKWOYGMUFWBOGDDKQPAIWATWHOZLKITLYJIVSPWZHSNDETLUGCGLWHXNUUECGHJQSRBOWTYAJIODXYZFAHXMMDJPVGMEWEJEUNFQDNRKVVTAZFDKHGNCNDSBIXUEPJUISOQACIZNEPCAXPPZXLNIRHEMPGVUZSNXBBXFMAOKSLHRFCBZBWCCLZMOXJYVUBVSQLGMTQBRIMEFRYDPKQTWYQQLGCVSKJYDRCAKHYZFTI");
    msg.mmsi.assign("EKLREMGERYGUHSSVJKLUUAVPJPYNQCCFFMQBNSPFPGZJDPQBZIJJXLPSNYJDGBTLMXRRCNUVPIGCCRGOFOVCMATLXBXUQFSIAIICLZJEYJQSTVIJWCNCWEBDUWBFJHANOVLVOXHTLDNWEGWIFDAEBYAWETHHRQUMOSKOEEWWQ");
    msg.callsign.assign("IKWLGVVMWQCXHMGMKLPDDYQDQUJHDFXRCUOOHUAHFTPIRLBUSZOUVGRMHHFIHULSMLJOOJKLAQOWIETEWTIZZJEFODIXDSCNVPVQTXO");
    msg.name.assign("JZVRYVWBNDIUSDGHLXGXLLMOEMOQKPPNIZXQQIHTIALFAMS");
    msg.nav_status = 182U;
    msg.type_and_cargo = 221U;
    msg.lat = 0.436419914815;
    msg.lon = 0.29911292039;
    msg.course = 0.157704101767;
    msg.speed = 0.818236923639;
    msg.a = 0.0936637913387;
    msg.b = 0.354616884513;
    msg.c = 0.444907939128;
    msg.d = 0.427529571096;
    msg.draught = 0.992118567826;

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
    msg.setTimeStamp(0.994455623406);
    msg.setSource(26481U);
    msg.setSourceEntity(206U);
    msg.setDestination(15710U);
    msg.setDestinationEntity(116U);
    msg.msg_type.assign("APVMSXQZWIEJWRPGDCKMUTCFCEUKMXAFRBLIXYCSSTILQUSQPUFEEIRUMLYLBJCKPHOREPFUUWHFIEGYOLOYAZHRAPPSNEWQMHRPXKCFQVMVDOQZZGXQVDOJUKCBNPZNHGFDYYMSGSDPGBOERSAILDVWO");
    msg.sensor_class.assign("QUQHDSXUUVYAMLCDESZMJXBDUYNHWCUCFZLXZRIWKXONTZREEBKKQZIKJPNTLHWJSAYPPWRJCZTVM");
    msg.mmsi.assign("KXNWQOIISAEKRQJVSMWRNENTRFEHVPYBMRGHQCTVQXKFBHAHESIFKELTBZLD");
    msg.callsign.assign("FGZYPILQHMRKEJTKPQURQNTCCNPZYJFUHYBOMDOWMTFDEOUFUNFKVJXLESAJDWOUAEVSWXEXBRFBTGWYWIMCHTSXZDIIGCIEVGEDHJFXRHVNAZQWTAKPESPDJRLMZYECCRWSZIHHUBDCKFQDHMACCETHQABRBABIG");
    msg.name.assign("ALGHVOUIFUWLQHAQEZDJRBLRHJKEHRYRWKGMHBJMLSQJNTRZFFKLRYHIZVUXTDVHKBZBXDFDNJEJVIXLAEXICGDKLXEGONNPHMYVTDAIQPLMOJBRNUNUUUMSTCWKCVYFIJYOCSBPPCDFZRAWCZWPCFDWAYLXXIKTDMJ");
    msg.nav_status = 147U;
    msg.type_and_cargo = 242U;
    msg.lat = 0.866741651722;
    msg.lon = 0.89563660455;
    msg.course = 0.393603787926;
    msg.speed = 0.254032763582;
    msg.a = 0.0537222783138;
    msg.b = 0.375892251316;
    msg.c = 0.0691538871995;
    msg.d = 0.00818191457808;
    msg.draught = 0.474195711557;

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
    msg.setTimeStamp(0.181194460204);
    msg.setSource(16778U);
    msg.setSourceEntity(188U);
    msg.setDestination(64238U);
    msg.setDestinationEntity(112U);
    msg.id.assign("FKIOVUTZEROVGIWYDKRZOWKDTHNIINHQLLNCJAZVKEHVICCGSXMMWSMWVCWEOAJYRFLLSURKORQOUJMFTDZMUUJCAYJJQEDASDYWNCWSYAQSUZYSKGXKKXBYZPBEZMFBDFK");

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
    msg.setTimeStamp(0.914054575331);
    msg.setSource(37659U);
    msg.setSourceEntity(42U);
    msg.setDestination(14681U);
    msg.setDestinationEntity(55U);
    msg.id.assign("ETJWQMGQCHZSYIBTXGMYRKWGPUHTKDCPWWHFSCIXVCBERWKXJVCRHOATRDJCJXTDQLJALKSYQPIYKOGNZNNFOZMBAJAXNVPKEHDDBSYRCBYNIDOOGQQVULKRPAMBPGQBPMINIWTTFYBLQXUUOHPFEIELMFUPZQJSHTQZHSSSJUAFCMVXKNVVLVUYZDAWFZ");

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
    msg.setTimeStamp(0.511098032689);
    msg.setSource(24405U);
    msg.setSourceEntity(220U);
    msg.setDestination(48374U);
    msg.setDestinationEntity(68U);
    msg.id.assign("WZXEHFMHPJRAJWYOWJGIBLSCPMXCNXIHVSJDLUZSREKORUQGICDVPUFNTHZKIQSULPZRXVLYSOHBEXCR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UHORMFSKLNQCKWRMYCWKYASQECDVDFWVVULXUVYIATWIEXQMBEOEYJ");
    tmp_msg_0.feature_type = 209U;
    tmp_msg_0.rgb_red = 54U;
    tmp_msg_0.rgb_green = 111U;
    tmp_msg_0.rgb_blue = 63U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.871557551774;
    tmp_tmp_msg_0_0.lon = 0.556075648357;
    tmp_tmp_msg_0_0.alt = 0.247750547508;
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
    msg.setTimeStamp(0.930456211429);
    msg.setSource(26180U);
    msg.setSourceEntity(129U);
    msg.setDestination(26973U);
    msg.setDestinationEntity(76U);
    msg.id.assign("EUHMAUUGIVBVBJYBOONAGMLIETAWRHJRVFMPPEB");
    msg.feature_type = 49U;
    msg.rgb_red = 154U;
    msg.rgb_green = 105U;
    msg.rgb_blue = 242U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.497145329604;
    tmp_msg_0.lon = 0.388522352021;
    tmp_msg_0.alt = 0.0618648415693;
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
    msg.setTimeStamp(0.250447965332);
    msg.setSource(22336U);
    msg.setSourceEntity(37U);
    msg.setDestination(12647U);
    msg.setDestinationEntity(57U);
    msg.id.assign("JJDNQKAKPTBQNIHCOKRLSYQLBVCOMEXPUBZDHDPNOAGXJFUWPBQZKNSRZROHJFPRBGIMVRWSBUKZEFIWAZJFVRTSPGYLVYLAUEHMGQEYZQUVDKSVDZXTHZKXTTEEKEVUDHIIJLNFAIXQIOLCYFXMZEYBLGLWNGNKOLKWYX");
    msg.feature_type = 160U;
    msg.rgb_red = 85U;
    msg.rgb_green = 218U;
    msg.rgb_blue = 41U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.36550472594;
    tmp_msg_0.lon = 0.576559879287;
    tmp_msg_0.alt = 0.883298999377;
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
    msg.setTimeStamp(0.141147410221);
    msg.setSource(49890U);
    msg.setSourceEntity(109U);
    msg.setDestination(24170U);
    msg.setDestinationEntity(4U);
    msg.id.assign("RVMXJCOGKVNXTOVGSZWVGWAXRBXTPQEDEMKLJMPDKVMBKJWDFZRMLIPNTWLGRIQUIHYWPYGJDGMZCBBZOSYHQCIOGIDJFFIMHQFFJGNCAJJHTJUFCARBACUWNIXKXNESMRFUAZDCTDSQDCRSXLHQWKEYLIAP");
    msg.feature_type = 121U;
    msg.rgb_red = 89U;
    msg.rgb_green = 95U;
    msg.rgb_blue = 35U;

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
    msg.setTimeStamp(0.138889680018);
    msg.setSource(2848U);
    msg.setSourceEntity(177U);
    msg.setDestination(19919U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.193235867314;
    msg.lon = 0.246069321929;
    msg.alt = 0.368787752088;

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
    msg.setTimeStamp(0.669682301468);
    msg.setSource(1252U);
    msg.setSourceEntity(83U);
    msg.setDestination(16399U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.774479413398;
    msg.lon = 0.0185383349607;
    msg.alt = 0.717558983016;

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
    msg.setTimeStamp(0.295764883488);
    msg.setSource(48821U);
    msg.setSourceEntity(91U);
    msg.setDestination(57489U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.270954938592;
    msg.lon = 0.6863720237;
    msg.alt = 0.291465719569;

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
    msg.setTimeStamp(0.980041459424);
    msg.setSource(31547U);
    msg.setSourceEntity(132U);
    msg.setDestination(61444U);
    msg.setDestinationEntity(161U);
    msg.type = 159U;
    msg.id.assign("EDMGIVMBRSKBFNZSZZMWIEYDPGVIYJMLKYMZWNLFRNTVOEBGFBXTXBRURXTOJNVQCIKCMWDGHHVOPHRJDPUEKAYFXNR");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("UNHUAUTIDNQXKUFAOQFPLMQRTWUKYVPEKXSBULOQFLYLTKIJSFYQNPHTEFPVNOWDHNGNJFQDGJGMFUPNIISXDATZWMXYVPPBJOEAHIVOBCBSYFKCJGAMVZWVBDUCGGRZXWXUNRAVOMVWWFXHGBRSZOPCKFZYCHDALEKTJNLPPQMLYRRLLOAYBGBICMGTESAHDJJZVHCMMTRZCIUHXS");
    tmp_msg_0.htime = 0.767994234571;
    tmp_msg_0.lat = 0.105757413885;
    tmp_msg_0.lon = 0.980219659448;
    const char tmp_tmp_msg_0_0[] = {-105, -125, -41, -84, -113, 91, 27, 39, -121, -103, -96, -15, -105, 94, 36, -109, -37, 40, -60, 93, -101, -44, 80, 9, -54, -80, -28, 103, 5, -103, -8, 44, -72, 16, 79, 43, 107, -38, -40, 114, 15, -52, 1, -67, 43, 63, -25, -92, 17, 75, -15, -79, -36, 89, 84, 11, 38, 88, -41, 46, -73, -69, 126, 66, -60, 79, -20, 54, -92, -114, 5, -35, -37, -65, 11, -63, -75, 122, 22, 113, 37, -49, 81, 99, 86, -37, 55, 40, -14, 117, 98, 89, -38, -105, 86, -94, 125, 117, 35, 124, -47, 58, 91, 57, -109, 123, 81, -45, -48, 43, 113, 79, 39, 105, 63, 47, 112, -44, -73, 92, -126, 52, -26, 51, 90, 81, 60, 125, 101, -109, 54, 71, -85, 42, -42, -41, -31, 49, -22, 104, 9, 51, 125, 122, -96, 90, -63, -19, 96, 113, -71, -86, -125, 113, 64, 72, 68, -60, 35, -119, 39, -35, -46, 13, -84, 109, -8, -18, 69, -23, -42, 24, 63, 102, 86, 20, 3, 29, -105, -63, -116, 94, 68, 76, 12, -116, -45, -59, -72, 6, 71, -61, -19, -31, 97, 120, 93, -19, 2, -63, 107, 28, -100, -90, -44, 49, -46, 82, 34, 125, -29, -78, 32, 15, -48, 115, -105, 26, 53, 14, 34, -117, 57, 116, 67, 111};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.309314661015);
    msg.setSource(7575U);
    msg.setSourceEntity(155U);
    msg.setDestination(65498U);
    msg.setDestinationEntity(99U);
    msg.type = 146U;
    msg.id.assign("GGZVSEHHRXWINCBKQIJWKFSWETCXSCBHVOMCADJQPMPFLIWGSWBBBWOATBQUHQMSJFHOPEAHHVMKZNDUDDOIFANOCGOYNEVSVHLORUKXZFDOTXLESIIAUFLFKTBJUYGYCRHYSUUQNNESDJGIVALLRDUBGRSPTRLZUWVCIYNQGNTTQEVHPADRJTPAOXLCRNXPYJKMWGZRKXYXMEWR");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("BNWWBGRZCLLRGBEPFDVKJSIZZOFTKLHHVZWMVDNDHDZYDBAINJSXGWUITRNACMRMSQIWVOREQGSDQWUDMTHEERXZQYXNUISLPPHLCOYMQYCQUWTPHPAYVTRYETCJWSHJNKHBFBUAXAVAQQXFJFFZHINMTQVAYFLSHJKFXALJXPOYCGQKSEFFOSIDUIBIWCMYXPLBJMARTLDERGMJBCSZKONCTXV");
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
    msg.setTimeStamp(0.765152288073);
    msg.setSource(38850U);
    msg.setSourceEntity(135U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(170U);
    msg.type = 206U;
    msg.id.assign("JOEGAFRVQTWKSLJNIDVHWMWLTQWBAYZCTCBNPOPRJAKTZBLCJFSBAHYLDAQXGGJKMSXPQHSBAIHUIUTOMKONDXMSGRMCLRLKDKEOJEZPZ");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.960664647906;
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
    msg.setTimeStamp(0.180489751448);
    msg.setSource(45345U);
    msg.setSourceEntity(26U);
    msg.setDestination(7929U);
    msg.setDestinationEntity(117U);
    msg.localname.assign("PNBBRVVDYWCKFXRJWFYWXTYWLSCXMOOQSJMQTBPDSYTFHLNIEOSWIUHEQJVKSECMGXWMGVLTOKMLUCAALIJDPZIZVEIZP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XTQJJJZYPUBOASRWMIXHGIHCAYWCXEHRRKQKPLOPVQDVYSIHIPNNZYTJCLBHOVSWHLBNJBVFVXDWBJOJAUJWBEMKVMDFIQRFGZANYWASTNODKTDNLGLZIWPAXSTSGKDOYSKLEXUGREPHKSULFQZCENMMGDHIOBYCBOQFRCXMRNZMKZTXFVLAMXGAQRUFCOGSJUUCNEUODIBUPVYRWGRINPXWYSJTVDFLHETDTMYPZIQGPCVETLQUAZWBEK");
    tmp_msg_0.sys_type = 39U;
    tmp_msg_0.owner = 55288U;
    tmp_msg_0.lat = 0.667345240411;
    tmp_msg_0.lon = 0.124432331505;
    tmp_msg_0.height = 0.812664658945;
    tmp_msg_0.services.assign("CDYDDPEQILYABQVVCGLYYERZBEMIOKIXHNTHLQMLVCGSNXFWSZPUJRDYCWREPWHFGMFQLFIIWZZXKKWJEJNNTJARSPTQVGJMHDDGFLKTTKNCEUSSIOOVCNRQAGNFZQUBRPIWNVXJOSPKOEZOCUXUJHRCKQVZO");
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
    msg.setTimeStamp(0.468170861019);
    msg.setSource(47493U);
    msg.setSourceEntity(102U);
    msg.setDestination(49422U);
    msg.setDestinationEntity(26U);
    msg.localname.assign("MSAOYBIHMTZJALYYLWSMUWIIQBHWHMZQCGHJNAWASXDQRQONGLNZPBEPKBFNTIIBSCEDTWSHJXSUFRSBCOZWPKRCKLLNKODOYDPUIASKTVGDVYUCYEKLVFMKTJONCEMFXZNDAVUEAKRMPFOWZYVPPVF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VKZNUEKPMVGEBBVAIGUKYACLWXSWAEITGEVQIFTFJXRHQVJCJEZIBITLAQBBNQGYGPRHRMRTDDNRZBRIWCEHMWUHONYNKCOQPNYMLFXOTJSMAPDLYYWJFHPKZFWLKYCEJJMUCADMSKENUZVBPOURTNSHVLKHIALZSXUXKJYFRWSMMDASBOMZHHXOGCSQNBVQERGBOGUTQFZOYDFUCATFNXDXOJGRASD");
    tmp_msg_0.sys_type = 50U;
    tmp_msg_0.owner = 36382U;
    tmp_msg_0.lat = 0.911467905042;
    tmp_msg_0.lon = 0.0842898627608;
    tmp_msg_0.height = 0.495044326543;
    tmp_msg_0.services.assign("ANHOLSOIWFHEGVBNGXWEUYQLQLOBOEZMXXFQRMQIUUEZ");
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
    msg.setTimeStamp(0.0569389789905);
    msg.setSource(10743U);
    msg.setSourceEntity(75U);
    msg.setDestination(40529U);
    msg.setDestinationEntity(230U);
    msg.localname.assign("EHKWTITHYNALSLFYGTOZULMSBUBTQJKARQAHD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GNSDIHKASOXPWDEUCQIYDSCEBLIITXVMASDUICJHAQNFTTKRDSVVXQYLGRWZPTGXGZUUZAWREFMWKBDYVQMMOHFFRWKNLFLLPSKXUWJPBJIFZPNHAAWLUAQSQWUOTPHMRBPYGNURYXYYNFHRGHCMVOSEPFGAKHEMBDIZROOTKJXJTIEVKCNMVQELVNSKODLAETBPJBIOUQEFRQCOJXJCQZGCUDRJKYT");
    tmp_msg_0.sys_type = 170U;
    tmp_msg_0.owner = 62248U;
    tmp_msg_0.lat = 0.52468200521;
    tmp_msg_0.lon = 0.0727939731563;
    tmp_msg_0.height = 0.944616407736;
    tmp_msg_0.services.assign("KTRAVBLWRBPFUVMDUNVNWPEXGXLOMHFPJBEORQIUXYWIIQRRFTBHDHNWQGVTBPCFXBGOCIHXSEMUPACVLYEHNNNEZXOMCDSMFZSVYZRAIQTGGTUZLUWSSIKJWZNXVQAJRVCLZIHHYONMSGXVJDOJQMJJHOJHSLKFBATRRVEEGLKGCTMYUUOYKQAEFHYKKBMJTTBXYKWZQPWPODZAF");
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
    msg.setTimeStamp(0.376958403203);
    msg.setSource(61036U);
    msg.setSourceEntity(126U);
    msg.setDestination(63028U);
    msg.setDestinationEntity(251U);
    msg.timeline.assign("FNYIURNYSILZXDEVFUXSUDGGALSRERQVYXBSQLVUEYBBVXFKMYCFPMLHVXWKYJQPGBONQCTKJMCPUCPGKBLIUANAGFBIVRMPDSWAXTVJCFZVCKKAETJNGWAWULHZQQTYJOBCHZWYZMOJDRUSFEHUAIEDGMCHDIHBHSONOQ");
    msg.predicate.assign("NZQRYLTXXQNUJILBNBPODOJDRLGOYAHUMIYVZSDDPFSBKUHMUGVEIERVWJLDVTZSVYEYMEZBRLJHSIJJZTHCXWIMGEFSUQJRYPEIGAWDYHQQGKN");
    msg.attributes.assign("AMYRUDLVGPJSBYESWCEMXFNBNKSTUFHCSHIHFLPNBTKKMPRXJBNMVNLZEGSGOCIFOAIUCZIGPLMCXRYOISSBWDOXOYNRJGBTQNPQMDTVWAGTLCD");

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
    msg.setTimeStamp(0.37072145853);
    msg.setSource(64604U);
    msg.setSourceEntity(81U);
    msg.setDestination(52704U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("PQULXGRCBEAZFDFFDAPPRNJTSABBUBRL");
    msg.predicate.assign("AOYUVWFNEDMBMLMIVJFKHQVCUBDDWZBYZWCQIVABMSTVJLTFYLQCAJMDKSTSKGLBBOHTUXPEOIPBZRHUCGIKHEEIBHFXEFSFILUZTFXWBAGVDUYAMYQARCCNGOGORKKNTRXDFIXCNPNEPQBVZGLYJLFRUDRC");
    msg.attributes.assign("WSOOWGJYHOOYDDSDSCXYWBIPCULTIHRBBNUNGRLDIGXACUXACWSKVKRJBPYEEAYZHAYYKMDGZGGMODFWZLQDACILCQOOTISHTZMEOEMHJPIKKJEXXDVRFBUCLMYJQMIBAWQPSXVTXJLLQSFZJUAUPFJHTZBNANUC");

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
    msg.setTimeStamp(0.883226379249);
    msg.setSource(2060U);
    msg.setSourceEntity(89U);
    msg.setDestination(48674U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("VEXGHIPEASUVGUJPBAAKALPTYFKPHEGWUDZEWTGWQVPYPATYSSBKPZTCEXQIOLSIYDDWKZXBFCERNLNUODRHSIYRZWHTCRAMMPGMTGHUKNEGLQIBJMACURFFLXOSIOIWDIQUAQJVTCN");
    msg.predicate.assign("TGCWTLAUQQAHLHUZUERLLJHUIMRBRFGEJKJKSHSOUYIZLWGZGBZXGIEBODWJNKNASPAIORIWARCQNBMFSIOSETVDYZLJXKSLYIVQXLVYIQCRDEDTUOKCPTNQOKDFPHMSPGWNCDZAVTYTEHOKVJKDOQCQTBXHVEFWWJEBEXYJZRNN");
    msg.attributes.assign("IXXEXOJVWAQAHTJCLCIJPFJTSGHJOPKBNTZKNLZZLLAHFHREYUCPXKOMXRNIVOMVBRRVBRBMMDPCCNUHHMDEUZJVNTNMSIZXJHUULSKDYOWDPBCKZTJWYRYNFBWGDQVPQKOVIAUGFPYKSWBCSGIODOSFKFWEGHPTCFGLBSAMAXJBPDQQSEEIGYNETMQKMGIHAXXUMLWAGIWPFZ");

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
    msg.setTimeStamp(0.0619183185511);
    msg.setSource(6040U);
    msg.setSourceEntity(43U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(209U);
    msg.command = 189U;
    msg.goal_id.assign("PVXOHMXBNLVBUMHZOWXWJJVZCLOMQHBUWMZAAEOQKPRIUTXXNEZRAZLVBHBYZWKHKWQSCBFHUGAEAWFRPISQNUGOWUIJDVGYHQDRSDHGRMYYAJETLTBZPKFFEDKQSSXNEIGYRFDEIMVDRTSWCGEWBFRCGIXSTKUFYMKPLODOTTARTEJNYOLOMSYUPMCYPULISLPGCBNPYJIPVFJAAKLFHKTLTJWVXZHXQRDFID");
    msg.goal_xml.assign("KGQOQMQGWLKVBJEGMDJNUEXXQTLNSVXDMJEALXGDKSZMVVZRNNLSIVHJHHATNYAUNLSFJODKEPEYGHEMHHRXOXVDNZHJYZKXOGSHSELQYRMCTVTPOFVADLGAEWZFTKPOSTRRRTGKIZFCUZIRJQLDWUWUZBMIRQTTAZVCEICPOQUPNFPLIDYBLMKBXIAVFYFPSDWRDOUTCGBHSBBUXCKIYACBCPOCEJWXWAYYBIRJNSGHMJZCWQAOIUB");

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
    msg.setTimeStamp(0.474998790711);
    msg.setSource(9707U);
    msg.setSourceEntity(117U);
    msg.setDestination(8239U);
    msg.setDestinationEntity(193U);
    msg.command = 84U;
    msg.goal_id.assign("EGOMNTGCGPZVIEEGFPBTFKCQPBCRJKYWYZKHGRDVJTOVMRVBONRPJSFTKZULIKTTLASMRAZUYNEGVSXNXIPFJYPVIJBYHTVGBUUNXADECWMTNPZBJALYREOHZCGHRBEOLLUPWJHXNDMFLDVSLQUQVEQFNZICXAEUUDPQHULSWQDWKIOWSCQWNBWXXYDFSWGXSLJIMWMPOQKOAFNRKZVGEAJKOAHAMUOIKXQYDFXCBC");
    msg.goal_xml.assign("KWBCEROKYTITWJTPOJEEOGFVBVSOILCLLCXNC");

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
    msg.setTimeStamp(0.319204141621);
    msg.setSource(20251U);
    msg.setSourceEntity(85U);
    msg.setDestination(43674U);
    msg.setDestinationEntity(248U);
    msg.command = 129U;
    msg.goal_id.assign("PDDMUKMKTBFBMULOMPXQBOIAOIUECUUGTUCMKWJZDKZRYBOFTXZHACYIBSTFLKDOWJIAATGFGJQMQXSMLMCFXYEJQRLNHFPPAYNYVTDFTMSHWCQTZWVRIZXFWHASCHPAPROJBLSOQEECNIXYTMVHZBKGDNNNJRIXUSSVSLXFKIWGAAUPWGVRXGQEQBVDLPPLYAWDIGQYRKHENORSKEUGXECZDWBNSZFKVJZECHONYHVTGLRVEYPLCROD");
    msg.goal_xml.assign("TEEHEYXBSZJKTOLLCNYHSLPKFNSODRHRUAXHEFHNBAYBYLTSOFNTPBANVDBJLFSFWCVXZYRQMQOPVUVCICUGWVGWVZAUNQEILWEEBIDHDCKJCNGMDKQNKSQSHRCOMUPRJNJHBTMETRAJAPEIWTMBWDDGLSPEJOFQCGNXIZXZMTAZYIIMZYYVQDPZSLUKMIYVVFPCDWQGRKKUKGWTBLXGDRUOB");

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
    msg.setTimeStamp(0.277905843561);
    msg.setSource(16142U);
    msg.setSourceEntity(229U);
    msg.setDestination(56866U);
    msg.setDestinationEntity(99U);
    msg.op = 93U;
    msg.goal_id.assign("AENFPBPMBABZTQZDIXIPJMMYHVHXPHALFWFJNOLRUTA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PYFEZTALHITOMGKSIHQOZCMOZVRCWQAWUYEQSKBTJDFADEGOJXRQVTNXAWPKXWZNIFKAKGVRMCCJPJXRUSIZTCIHWQFYMZYHGSLJARXIOUVPEDYSEWYNLYTVQNNKPHHVXKBIJTWMJOFSLNMZPDBBSZUFXHR");
    tmp_msg_0.predicate.assign("TTYREAQILKNGRECJRDOMTTHNXGXAIQUJJPFHAQLLXUCSHVCKODPUYKPMDONICPVSSSMUQMWTXWEJILFMPAWE");
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
    msg.setTimeStamp(0.144358887944);
    msg.setSource(25154U);
    msg.setSourceEntity(211U);
    msg.setDestination(30059U);
    msg.setDestinationEntity(122U);
    msg.op = 243U;
    msg.goal_id.assign("AJZNXYWQBQHDEFPEKCULVSTUUMKONIKBSYQXXTNZCNZXNLWVVVFIDARGHNEFJDEVVBARIAVJPVUPGDMDXNGBZGMHGRRSQCJCQQTVEERMRJJHGZTCQOXXHWCHTCPHBPSQIIDWZZLJMXMHTXPQGPTQOJOJWKIPLNRYWMUFERBWHD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FXZFCIFODNFEAIOTXAEWJJUDNWNQTAMCJYDKMRTXUSDCHQJMWNOHBWOKQDRZWLYPUKLCHVBYPAKNNFYRFCTAQPUIFRXBKLEARTUGMVPLISIDGABVVLYPSWLEQYGPURZMIFHGPTHBNEBC");
    tmp_msg_0.predicate.assign("TGPWXZXQAUTLFTFEZGDQMNAUXQUCBNNSULFQIMBCRQIEISDCMIOSFMTPGSDJFOBLDSCDWIKAEVSIZEBJJVXQALDRYNCWOYHZTYZKVPHPGCCWUGMXGDLSPHYIASKWH");
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
    msg.setTimeStamp(0.694722786539);
    msg.setSource(31433U);
    msg.setSourceEntity(39U);
    msg.setDestination(19926U);
    msg.setDestinationEntity(199U);
    msg.op = 91U;
    msg.goal_id.assign("GIJSWBHYKRXCWSXXUHEFDDOYSNSQUUSWCO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YVJYRVGYBSUGZBHDRLWFNXOGLMGPAHAWWVPEQEQJURCWVUDXZPJ");
    tmp_msg_0.predicate.assign("ZDRAOIJTUFGTDAYQEMWAZYRPIGFJRRSNYGCFITUIKRFMYINCZGHLCKEDHSAZWRLKAIAHMEVMPJLSQEEZMVVGAGQXZRUSVRCNBXUPYAELK");
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
    msg.setTimeStamp(0.335735345787);
    msg.setSource(32799U);
    msg.setSourceEntity(234U);
    msg.setDestination(56941U);
    msg.setDestinationEntity(45U);
    msg.name.assign("EYXCRDZYERLMOBOUZCXQEXPAWIPSKBBYCCIEEKWSTQWXPYJBOCNFKKMVKLJDNTAYNMZRSTWTTGDCQIYRZBNXVPRAPYPVUKTUWGLIPOIWUDVHKFLMXDQYDQILHJKFCNBWQGHBNHHVANNWRJFFXLJLFGMHSWVSZIUEOAXSYGOVUGIDRRMASMYGPUCRODLHQTZGCNJZLNGQORZZPASHJSAMCIVJTFXDVAUVJSELFXBHOJBFZUQITKMHUW");
    msg.attr_type = 72U;
    msg.min.assign("QDBJSUNBKBUPRAXJZHCPGVNKBRHIMZDLXACFERQYRASWENEDIQRTLBAPSSAFLSUNVJJSLRKOBFBHJNDJAZOGTKVKQZQVIPDIWTMCEOSYOTYAMSUJHRJUHGCNW");
    msg.max.assign("BJEDTYIACUXDWECIMXQZRVLKJEPTMYQKEDCVPCTAONMZRYXKFNUSHZZFFGDGGXRHRNODCLHAYXDXMZGCLQNRRXASGUYVGBFJZWVESMQRVTULQBSRLSHBZJAAREUIKNCONBVSOLYKHETYMSKIABJKIIVVZFFMSQHYPGMKKGJDXIBWETZFQHCYLTC");

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
    msg.setTimeStamp(0.195761491694);
    msg.setSource(16119U);
    msg.setSourceEntity(79U);
    msg.setDestination(55493U);
    msg.setDestinationEntity(115U);
    msg.name.assign("DCSOWRMOKYTUSBWBYTHMTGZELQZNREAL");
    msg.attr_type = 92U;
    msg.min.assign("TPTKJWPGBUFIUBSTADQGVCANYMHFHIZOPBQVREUHUZOXKYLKWYPSTYXQRRRLFLNOFRFXMYKTDXMWNUVOVHEWZYFSRWJESSRPQFEWJDFCSXGJVUWMVBZKEJODUBLAPGCVRTKLRYFNGPVCONDQSPJLNKYDLOBUWHIMKDOAGQIURAJZLFA");
    msg.max.assign("GOGCPDDZFNCWKOYVGRSFOQGJHFNZZMRHBTSQEWYXKRXHGUOPKYDBJLEHIDXKAPFGEVPHEAJBVAQBJMZUTZXRTWMSWCTFWSDQJN");

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
    msg.setTimeStamp(0.621782700715);
    msg.setSource(10373U);
    msg.setSourceEntity(191U);
    msg.setDestination(6678U);
    msg.setDestinationEntity(66U);
    msg.name.assign("PQTVSJVNNSFMMEMHKRJBNXXPUARCIUOIBCCGTAUIKCYAVZNBGGBZRAVGRLSUFOSAWWMRINBFEYXEXLAWGJZOWQJJUGBPOCOBTJUDLYDAEEMPQZRIYPTQDIVJPXHLUDAHFHZXRTHCIKMRDZRLCFRUWQTGDSKSSEHTKNNMMHZSFWPFKUXQETYKWZKYOLIQOTWWYOLDETXDCQLV");
    msg.attr_type = 158U;
    msg.min.assign("XAWBGNQZQYAIMCQAHFDVSMYINKKFPLIYRDBRNANWTBPECVNVEUEEWDJLTAHBTNQSXWFWKOCFLWMSRCIUUGMXDJZVBIOGILOJHWERKPBPGUUXQILUHCEWKMLLDLHJTYDOFJPSIYTSRIAUGKAYOXWTVRHZTDYBGEBVCQAQFJPBHNLBGMCZKHFNDXHRQZLUTORQFAMEXCZMZMIHYSDXXDYJFPT");
    msg.max.assign("NKESMSKMRRJFZEAOXNHQRQAOZCCHNFQILHVVFYULKIJKLWRUFHOPGXBWHAJAQLVSOKIPOCZUQCHOUKXWPSGRVZGVICEWBGOUGUSGLFZTOYBMUWJMAEYPCIHYLTBFUFGDSNTDCDIYJGAKSSQYMOPPENRCQAUTXJLXTMIVMDYHJHRCBJPYQPBKQTEBNWDRGFITWPDVIDWVNTVJOLETAEYNEMKXLM");

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
    msg.setTimeStamp(0.0343620284892);
    msg.setSource(25179U);
    msg.setSourceEntity(235U);
    msg.setDestination(28517U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("KUUPEKJPMGZBHXTHDAZQZPOATTNCGLDJSNAKWMLIDBJWNLIVCQRHFDWUGLPJZAVGOWXDYRSZYMHPIEWBMCMT");
    msg.predicate.assign("TUAVKVNZEPOEKOGHMJWPPYNRRLDTYPJGLYAKZEFWZAYPCSSXGHETSVIBXFBNEYKBWJSCCMMGCMZIRCBUYCOFUVYTHRFIIOQKDSILKHPBXNAMUGYWECXWQEBFLAOOIHVDQZMQQZRFDJNSEATPUDXAZBVVWAGVKJXQBOMPGHZJXTFDEOMNHLLIICBQOHUZMLXSJUA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XZKMIZWBZCHTOGWYEPPCACABVRKOTYCERQDIXMLQRGKPJVOWUWFPSUQXDYOLMUROIFQNYWTAAOJFUPMIXHPMLJZVWNZBNWTQSDOPZASKALSFPSMTLUFGGQXKIOJSDKZHGNUJEBZEHJHHCTJUFNCYDBWQVJLVVPSHJPXSQMLGRHGGRRBAYBFACIZBCMYSKTDEIHR");
    tmp_msg_0.attr_type = 135U;
    tmp_msg_0.min.assign("PCLYYQNNGPOTIRIUENOCPIJCHMDBLHHFCWUPCDDQSLJFVRJTUNGQIYVFRIKJLLTXCRYIKWIWTOKNWUQAQUOBDBBKKAKVLGZOOMQDVSANHMSZPEZEBUXLSYMVMFYDFOJEJGSZOXMCYCHWANTPIXFTSGDXBXSEQAK");
    tmp_msg_0.max.assign("KLZSKHMQSFIAZLABN");
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
    msg.setTimeStamp(0.88733775802);
    msg.setSource(22871U);
    msg.setSourceEntity(28U);
    msg.setDestination(34096U);
    msg.setDestinationEntity(76U);
    msg.timeline.assign("XVIEUPQNPSLUPBCJZKTGHAPHFZEGDSVJLPIACFXNORLOFLWKRHMETQWWHRYIITCJAZJRTVQCMVSUJZZYAAIOHPMLDWXXXWBGYVRNMQTCNHOFDLOHKNTFPRCBORWU");
    msg.predicate.assign("FQGYKNXWIQHOHIJHVHWOGWKYINQXCSFRTNUHJRYDOTFVNLXBKLUCYDZOUWOZCHOFBSGSRETALC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XZLAJYOPYLACJIHTPEBIOOIXXUUBNNKWBJHWTUMVDWTJECPUQKQUXATCYCPXGGCVRTGADFDICU");
    tmp_msg_0.attr_type = 137U;
    tmp_msg_0.min.assign("ZNJDMYKUGODNPQKDKRMNQIMGENMRTPCINBTXSHWFBFXKKWSNSXHJAZFDHBZAAECCJKSUDQFLQHLHHPHVBFKVDCOS");
    tmp_msg_0.max.assign("OOEBKKWUIENCZRNYAYDJDLNGBRFJTRTSVQOXRIPRIPKJTVZBCUYAZGYHEUZNMVYGAGFIJOQUXDXCKQWYWNDPEQEWHQYGPVCBFDZONMFXDKEDYCKSXHFPWXJILHURAPSGIUJOWTZJFOXHTNSZXVQINOMATJIYMHSSLUMWFOLPDBHUSMTVISPFZSXVL");
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
    msg.setTimeStamp(0.713501595906);
    msg.setSource(51659U);
    msg.setSourceEntity(160U);
    msg.setDestination(25969U);
    msg.setDestinationEntity(64U);
    msg.timeline.assign("SKOMOYJMPDTVLDPGEFIOSFHFGWAEPLMJYDMEJADJXFAZWXWMCQKYHYXCHUGJBMVPUEQCMOENNEGBJLON");
    msg.predicate.assign("CWAVIIWDYHHQHFNZRJSHMLXMFLWHOKPSNGIPKCALNUAETVAYMGTWBDBSKOLOLE");

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
    msg.setTimeStamp(0.0742348500476);
    msg.setSource(56832U);
    msg.setSourceEntity(55U);
    msg.setDestination(4114U);
    msg.setDestinationEntity(223U);
    msg.reactor.assign("FALAISKDRHBVUCXSHOVZFKJNLNWXOUSSEMTHOYRSZZLVSYEPMRPBJJTEMLMQTLIXUXCVVMQKAQTOFYEMOFTTQIAGBUGOHFFEDCGWKIJCJUIHFNQHCWPROFMZIJJNZNSKLYXXGQEKALABUDBNWEAUQRANXDYVUYIZSMZNPGVDHYVWYZOPQITWINRBCSIOUJQRYKCTPGYW");

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
    msg.setTimeStamp(0.0147357516676);
    msg.setSource(30668U);
    msg.setSourceEntity(198U);
    msg.setDestination(10013U);
    msg.setDestinationEntity(214U);
    msg.reactor.assign("GKRVFKIZPJLRPAOZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QTYSUJKQLEOVHTDGMWIKGBDLICRITFORPCCBLQTXUDOLUHNCEMYMSPJGCYBCZUWCUXYTXKBZVUHPEFRKLXMQSIYMJWXGAHFMEJZLDGMEDEVIZEMFFAENOIQBJJWRPSGVDSLBIRIAQNORQDAZWHSHDWQQFKGTZAKNOUHPRVXCRJRNKONLNWAABVSGDP");
    tmp_msg_0.predicate.assign("CFWHEFEZOATWDNOMZQQPI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LTXIEBOCSNCGVRWKFVVRXSOGARFGFNXTNJLYEQRRLZQWBPPWBCHRZWPETXCGIHCZZOQQXRNECLUQNYHTMKNGFBWDYQPMSHJIBYDVSLRWOWQOVUMUEXYISKGMSGRFVUDJXIAVDITLYFWKKJVCADZAHAPLAOUMQCMKJREWD");
    tmp_tmp_msg_0_0.attr_type = 147U;
    tmp_tmp_msg_0_0.min.assign("OQPAIYNBERVBLBSRTDOXDHBLMVSHLTTTYCAGSGDYUMUESNTVWKGCWMFAMEQKPFORKKSGFUGZDVWEUQTLMRYWHJOSFKJHMZZPYZJLNEAFLYZACLZBEVVUQKGXQPIDBVHBDCTKNOZIOFOPFQMRZERSYKSHTCDJAXGFKHCQYZCFTIARNRIKUUPMJQPXYTXOOWLQBGOPWAHCMWGLVUVXIWXNXIEQHJCBNUJDBENYGRANSDMPPWIFWIVXCDZH");
    tmp_tmp_msg_0_0.max.assign("HMQMTCKNENRMGSYEBNDVRLTCCIOPSLCBWIDFRGFIHSCGHGARXJASXIGULLVZUHGZXFKFOWOLMFBJUWIBUVJVBXUKFITAKQNQHLDDEAFYXNIGEVWKQXJLKMVGZBJPAXWQJSEQACRRYXPAVWJQRSODBPZHBCWADJPKKUOZHLYXZAXOFSZCDUKNTZUQYNPWZLOZFNI");
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
    msg.setTimeStamp(0.970177218937);
    msg.setSource(46796U);
    msg.setSourceEntity(216U);
    msg.setDestination(11135U);
    msg.setDestinationEntity(207U);
    msg.reactor.assign("VOTHMLASHYDNXUOIRPLBOAYJPZYQFUUPHCMJLAAETVJWISRHCWFUWYEVPBIFGIGADQBKXGUMXRDFSDPYMFBXIZFAOSGYM");

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
    msg.setTimeStamp(0.275620274316);
    msg.setSource(18403U);
    msg.setSourceEntity(94U);
    msg.setDestination(31578U);
    msg.setDestinationEntity(45U);
    msg.topic.assign("OPRUICFXYTDR");
    msg.data.assign("VIOVWDSIYCSHIYVWQGZOWGLXGXTUFAHKNLRQQLYMXKBBFYNEUJVUZMNPNTPRIFUJJZOXPDJDWSAACFJSQVLIOMRKWCHNGYTTOFASWBOETTPMLBIYTGAJXNPNMPOAQXQKJJIFESCWHEXUEV");

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
    msg.setTimeStamp(0.704708882928);
    msg.setSource(34809U);
    msg.setSourceEntity(212U);
    msg.setDestination(50194U);
    msg.setDestinationEntity(77U);
    msg.topic.assign("QQERLHSYAKTMPPNGRKBSCODANOTTYMJAXEZLDQLFCVIJBTGGYKBLJDOFWMHQIUUSQZOFYBJNJYWSRNVDCBHEJPWUDXEGFIKFAIPYIAWGUUOFCYWVMOLHQVQKZSLLCIVUMXKIZSTAHUWDBPMFVNCUKNFPRNHZMPAXUIPYWSXPOSCYROZJXXHKRWLWTMIQQTVVMXPCRVDLHZ");
    msg.data.assign("YZOYCOLHQWCGXERJKDRJZDLTAWJCXZLIWGSGMYRCMOSFEQLHGFNHOFUUXVJECRQVNJHKAIZUMGNDYAXEXVJQEOSCIUIRGBSSEBUMGILCPWKXUAZUITPRXLDLDWMABTUVYSHOKDHYFTIBFBLCPEKNHWKQVWWTPWTYJCMJMHKTEPVCIYFLRPNDROXZOAETDRZYQGBQZSAIYVTKBANDQQHSGUBFSMGVBAMQPZNBH");

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
    msg.setTimeStamp(0.893393130162);
    msg.setSource(37005U);
    msg.setSourceEntity(172U);
    msg.setDestination(40639U);
    msg.setDestinationEntity(89U);
    msg.topic.assign("CIYCFSDPNKZEYGPMYJMICFNELTBQULTOHHDVOVVZUGYEJFVQCVDLPUWHOIFZJOFPCWATRYGRLREMSRAACDANBMDSAHGVDWBHFYCTUOPQXRZNHMQAPLKMABDZWKOSKTNFQZUMFEYHBSQEPWJGSIQPSNIQIBCIXTNYXMBVXLGXUBAUVJWMDTQRJLEBCUXIVHHJTURZTEZKXYKMIWPORGNJANXXSFSPGIOEZWYN");
    msg.data.assign("MYIUKPAWAMIRJTCEXSOUOGXARXVBTJPFTDCRAZBTVLPRDNZCPGDLOZYNBMHWTTYQNDHCHAUQBJVRCWDOTRFZJWFMDFSSQUHJYBFPXSVLZMIXUPALIMQUDANQFTGCLNIWGXXOKAODKYIEQGIOKLFNWCSPHWQVJZGKLUWEHXFBZGIYKIXEMVSMHZMUXZQVYJPJBJMKQTVNPAEVWZGBYQBOSDNRASTCERSKFPGGRNEKYOUOEFHBDRLVLHHUE");

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
    msg.setTimeStamp(0.00311464401281);
    msg.setSource(24320U);
    msg.setSourceEntity(171U);
    msg.setDestination(52585U);
    msg.setDestinationEntity(171U);
    msg.frameid = 3U;
    const char tmp_msg_0[] = {-12, 70, -19, 92, -7, 110, -68, -124, -48, -96, -56, -23, 13, -123, -5, 106, -113, -80, -86, 45, 112, 108, 24, 109, 110, -38, -109, -53, 33, -16, -19, 14, -49, -28, 80};
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
    msg.setTimeStamp(0.902680317394);
    msg.setSource(44422U);
    msg.setSourceEntity(228U);
    msg.setDestination(34278U);
    msg.setDestinationEntity(231U);
    msg.frameid = 253U;
    const char tmp_msg_0[] = {-85, -91, -120, 102, -21, 68, -3, -88, 48, 115, -25, -71, 26, -97, -114, -2, 6, -112, 18, -34, -16, -78, 27, -90, 57, 10, -109, 82, 76, 115, -78, 115, 59, 81, -20, 0, -46, 124, -109, -51, -14, 21, -59, 98, -121, -19, 36, -26, 17, -70, 33, 118, -73, 123, -116, 119, 46, 122, 29, 55, -117, -80, -37, 5, 87, 7, -60, -61, 97, -39, 21, -98, 124, -48, 48, -93, 120, 82, 95, -82, -23, 35, 55, 59, 70, -116, 44, 65, 93, 118, 58, -120, -109, -22, -74, -113, -125, -110, -105, 6, -67, -16, 49, 47, 9, -118, 108, 42, 89, -88, -43, 105, -61, 81, -29, -86, 6, 27, -119, 9, -118, 37, -51, -85, 33, -76, 120, -18, -111, -28, 66, -40, -66, -67, 58, -36, -28, 102, 50, 77, 23, -35, -90, 77, 37, 19, 49, 43, -82, -106, -108, -105, 1, 38, -67, 56, -122, -54, -58, 47, -14, 85, 29, 37, 9, -100, 58, -49, -46, -126, -65, 98, -6, -85, -95, -52, 18, 26, 112, 106, 121, 55, 7, 6, 113};
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
    msg.setTimeStamp(0.979776966604);
    msg.setSource(5275U);
    msg.setSourceEntity(115U);
    msg.setDestination(45793U);
    msg.setDestinationEntity(139U);
    msg.frameid = 182U;
    const char tmp_msg_0[] = {-18, 125, 10, 29, -99, 49, -123, -33, -15, 31, 124, -94, 112, 35, 124, -106, -94, -27, -115, -31, -43, 100, 110, -119, 50, -15, 118, 107, 108, 77, 12, -123, 45, -89, -28, -17, -68, 61, 76, -77, -53, -76, 90, -57, -1, 44, -101, -4, -7, -111, -74, -16, -11, -43, -123, -15, -69, 76, -67, -70, -45, -38, -82, 64, -124, 14, 83, 3, -13, 97, 41, 86, 105, 93, -48, -8, 81, -51, -8, 73, -104, 44, 125, -128, 82, -67, 57, 22, -106, 87, -85, 111, -54, 64, 63, 121, 81, -114, -4, 54, -43, 24, -24, -47, -106, 101, -9, -86, 16, 88, -26, -127, -70, 39, 60, 99, 126, 110, -43, -54, -38, 22, -111, 104, -16, -107, 52, 70, 53, -109, 94, 13, -82, 6, -63, 32, -19, 73, 87, -60, -105, 94, -103, 114, -54, 98, -9, -126, -105, 111, -53, 103, -112, -71, -18, -108, -75, -62, -117, -41, -18, -31, 114, 102, 27, -4, 18, 26, 107, 117, -22, 30, 22, 17, 13, -58, 44, 7, 31, -39, -36, -45, -13, -53, -88, -9, -80, -100, 26, -128, -93, 17, 121, -121, 105, 82, 116, 80, -68, -114, -110, -114, 38, -65, 63, 3, -100, -25, -116};
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
    msg.setTimeStamp(0.685337938241);
    msg.setSource(14239U);
    msg.setSourceEntity(182U);
    msg.setDestination(8809U);
    msg.setDestinationEntity(54U);
    msg.fps = 109U;
    msg.quality = 134U;
    msg.reps = 83U;
    msg.tsize = 90U;

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
    msg.setTimeStamp(0.376159111631);
    msg.setSource(23034U);
    msg.setSourceEntity(179U);
    msg.setDestination(9075U);
    msg.setDestinationEntity(24U);
    msg.fps = 95U;
    msg.quality = 233U;
    msg.reps = 164U;
    msg.tsize = 202U;

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
    msg.setTimeStamp(0.929150543085);
    msg.setSource(62574U);
    msg.setSourceEntity(82U);
    msg.setDestination(29871U);
    msg.setDestinationEntity(124U);
    msg.fps = 178U;
    msg.quality = 127U;
    msg.reps = 86U;
    msg.tsize = 214U;

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
    msg.setTimeStamp(0.842532066406);
    msg.setSource(59450U);
    msg.setSourceEntity(86U);
    msg.setDestination(24171U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.741619562082;
    msg.lon = 0.696853565212;
    msg.depth = 183U;
    msg.speed = 0.689320924464;
    msg.psi = 0.741390114662;

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
    msg.setTimeStamp(0.602015802498);
    msg.setSource(61657U);
    msg.setSourceEntity(75U);
    msg.setDestination(16232U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.536555581573;
    msg.lon = 0.590269593324;
    msg.depth = 57U;
    msg.speed = 0.974459482888;
    msg.psi = 0.633438405756;

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
    msg.setTimeStamp(0.0226914309762);
    msg.setSource(5573U);
    msg.setSourceEntity(127U);
    msg.setDestination(3534U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.233284239256;
    msg.lon = 0.838142680503;
    msg.depth = 54U;
    msg.speed = 0.326278868011;
    msg.psi = 0.764685378327;

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
    msg.setTimeStamp(0.663008958848);
    msg.setSource(40743U);
    msg.setSourceEntity(89U);
    msg.setDestination(55223U);
    msg.setDestinationEntity(143U);
    msg.label.assign("GXQDKMYVXUVIYGLUDKFSWAJAWOXHHPQTVXKNLESKOJQEEBEJCIDRBAWSZBHPCILRNKOHXFPTTPIFMQASDNYHCPKXTSEOJFXPRRBIZFDZNTJBNYXIOMYMZIYFUFAGYMBYDWBVOUZLLOTGICCKLJMSPJAXXQJEQCUNB");
    msg.lat = 0.180024684535;
    msg.lon = 0.272253161742;
    msg.z = 0.721483045984;
    msg.z_units = 203U;
    msg.cog = 0.435066457225;
    msg.sog = 0.782022058135;

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
    msg.setTimeStamp(0.945264537065);
    msg.setSource(10595U);
    msg.setSourceEntity(49U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(104U);
    msg.label.assign("VVPTYDAHBWMPRRLFNERJMU");
    msg.lat = 0.746423868815;
    msg.lon = 0.902798845445;
    msg.z = 0.425561796743;
    msg.z_units = 78U;
    msg.cog = 0.508981131126;
    msg.sog = 0.515474952298;

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
    msg.setTimeStamp(0.27787084563);
    msg.setSource(57638U);
    msg.setSourceEntity(118U);
    msg.setDestination(775U);
    msg.setDestinationEntity(132U);
    msg.label.assign("KOJHJTCIYPAMJFXIPKAYVWNCKUVCHKDBMQGRIGYRUFTAIROASVDRSPGTZWATPDURRWXEBIVGLSYKLUGVKCBUKVXOIFOJXSHCKQXEBTMPBCJJZLNVVEZDFDEBLMOWODNRLFWBBEMEQZSMOYVERPYNIZENVOEGPALQFFGZSEHZSZTUWZRXFCMHQXOKMDLCJRPNBBWYAMYWTQAKLG");
    msg.lat = 0.297528114683;
    msg.lon = 0.210470065886;
    msg.z = 0.281102333715;
    msg.z_units = 144U;
    msg.cog = 0.0293155992776;
    msg.sog = 0.758452857498;

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
    msg.setTimeStamp(0.725214268569);
    msg.setSource(54485U);
    msg.setSourceEntity(221U);
    msg.setDestination(3677U);
    msg.setDestinationEntity(66U);
    msg.name.assign("PRCJTWPSARNYEBUDNPVVKMAWAXWNROQPDYBNZIXLRCMFBTBODTQIVUSCMCEDVXGOEMIDZKIYHISLCZOUREJLXNQVFCUKQFXUOZTKHPYNELELTUTUSFKCSKQFAXCLJGBHVYPYVFLIXKHUPKWQDIGUOLLBWHTRJGBWQHFWHMRGJJIOODHLDMEJNZWKGRBGMFPQTVTNSRISAYJHYXMQEATJYSCAMQSAVIZHZNPFGWDZOXGCBZZAKOP");
    msg.value.assign("TQITZKVISFHGZNNPOBMMDUDHTRKGWSLPVFSJYGDNKVCCWIYVVAWGVULMQRSYJUEBGSCRYPZVISKFEMLZOYTYTKCSQVDZJAMANQEPLBGIKOQMLQOWFUTEOELJVDNMJZUNFQKQDLUWUEHOXUZWIPLRAMCWTBAGXXXCPKHDJFBSSZKTHOBZUMAARXGXIZHQ");

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
    msg.setTimeStamp(0.141428081922);
    msg.setSource(36011U);
    msg.setSourceEntity(100U);
    msg.setDestination(17667U);
    msg.setDestinationEntity(94U);
    msg.name.assign("IQRLSDFFBWLZPKHNOMJRTHKHQEONTCMLLTNPSUWJVACOCYNUUFDHABSJGOZRUSSXCRDVZQOBTLFKYWCFFARBIXFMEROVWEGYXKUSWCSXOIJWMENKKGXAHZFEFIGMPNWNQMXIRNZIYTEPDXJDGICISQPRPDVZMZUHKQJKBTTSMHAGALOYUCAEAVEXQBWIVGHMBEOSPJWGACVQXDWFAOUNTLEJ");
    msg.value.assign("SIXWPGHVMKHVGQENLMHWZWAMEUPNEEEDZHMV");

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
    msg.setTimeStamp(0.598004877637);
    msg.setSource(51453U);
    msg.setSourceEntity(211U);
    msg.setDestination(28142U);
    msg.setDestinationEntity(237U);
    msg.name.assign("QOMWFCKKBJUAPHXAGWJAEMCEMKLDQSDESVHZJXIPUBSRHRQQAYWHRYFBCNSHCVMLFOJCSTOZPAKVOINKTXIJWDQCXGFWTEWTBYCJLIQRTLXZVORBNKUSNBWBDSALMDZRYCLPSFENBGVHFNMGVOYEOUTHAHOJQMDSAIGANFPLCLURIGYDPYNYZBMZVUPJTKYUITHFHJZNIMORKVEGLXXRQBEKJFIQYZCFONQVZUGXPDMDEXX");
    msg.value.assign("LSBJVEFHSCTFOMKGBAUURCZMNGVFRRFHYDTWFZLGUYFAIPVAAKBOUUDQTQPGZJZKABSJCIIIQUVPTSXAXJUMMIJRCOHQPFSEVPSMDEXWAUSCWEYPUNHEMHALCPVHEBCRLEADDWRTQGQKANBSRVNBN");

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
    msg.setTimeStamp(0.885508677801);
    msg.setSource(14822U);
    msg.setSourceEntity(66U);
    msg.setDestination(3784U);
    msg.setDestinationEntity(45U);
    msg.name.assign("VZXCPQXUYUOTEZLUXKTLPQAFJLSNYK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PIBNWEOUKCFUTCSQQJTISQTDYICKKWJXYAFQLKJPSTDFGHFAHHZNCSKJYHIBLIMVNLMBVXFNJTMXYDSASKUM");
    tmp_msg_0.value.assign("ZYUVRADUBMNOAFARSSWEXXVOXCIKCDNAJJYEOUUIPFEFROGCGLQTFMOOXQVTLXCSIPTVNKNSJWZQMUYFLUWVRXGBUMWWDQBWJGSVLSQXNIIHACWJZVJKXTGVHZKTCUWYAXTZWDIHAODIEMYGPSDYPBKPPLSRRTXWMZTVIIGEPDMBKPURNZQNHEEMDCNSHMGYFHJATYQIJRVLRZYDAPOBGHKPNEQFGBDQFFBKBFLOULLTJCBRNZECYQEOHLM");
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
    msg.setTimeStamp(0.315053218869);
    msg.setSource(52765U);
    msg.setSourceEntity(102U);
    msg.setDestination(17875U);
    msg.setDestinationEntity(92U);
    msg.name.assign("FXACYAGRBZJNEXEVZJYYZFUUWIIOKWGCDZUHLVUDAERQBWMCGFCTZLOYMLIZGMDVPXPXZPTZUVYNOKWTTQSKSLCMQCOOBKKUVIOGNSEQDQJNFMIWPWMTEUJIRFLZTTNABRQQPWBRCFCYATAWSFUFHVAMPBEESAOGHBJVBFGKYGJXRDNSGHIPZLSHNKUDQJRXYWYBXKRJFKETHIA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BQIIXOJPITKFVPCBTWHRMIVPEEPMOCJ");
    tmp_msg_0.value.assign("GEPQYCAXDHNUJMANTWDYLZGJSUDGCUUXSICANTBCOLQJTTAKEETFRNBVPSUZQRDKHGTLEGOE");
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
    msg.setTimeStamp(0.814550157304);
    msg.setSource(5916U);
    msg.setSourceEntity(206U);
    msg.setDestination(19584U);
    msg.setDestinationEntity(92U);
    msg.name.assign("QHOCRBJZLWOJDLUQRBVUKMNDWZFXKZTFJGBSXDLHEDISOMPUMEKNSTFCHPKXGBQAFAPIYNXHUKAXGCQYKKKZFTJFIGYHBSDCVLPYUYJUOILMGTLSNZIRNDBIHSZLMJV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SHBKNIPEKMSGQCFYPOVWYRZZMJFGMAJRGELIPQVHTZGXUYWNCCVLYVKBGKUBIPNYTHOWQBCKIUGCROVBFVGIEOLGNJOJZVAZZTUTMXKFDTLQPKWTALIIQXZYXVEGJQUEHFNCKHSSTMWOIREPBHXRDOUPWLFNNMCYQFMUYWUEWXONHLZAEODZHQWHPQTJBURJBMLXXASXSRDYARISDGPNQCAHKVELXFOZADJFCUYDWAATLPJISJSRVDMCRB");
    tmp_msg_0.value.assign("NBMVGUGYKPWECXXPGDMECRLWHBHHXZBEQOTKVGYUCCSUTJXGONJIGDJZLGBNFXNEIYVMLTNOGMTIJRTDFMQLAQLLKAKCRFWAHBTKHSWMPDOQOJANXZUVCGDFHWVVROQRIJPMIEYHOENYFJSMLAJYPXSZRSSKBVPLBYSLZBYBEPNALCIVTKIUYQDPCSZVAHQHYMIEDKNUBFJGWWOIKCWRVPXTWFDUFUQR");
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
    msg.setTimeStamp(0.677189042219);
    msg.setSource(15139U);
    msg.setSourceEntity(28U);
    msg.setDestination(57803U);
    msg.setDestinationEntity(215U);
    msg.name.assign("RYQMLDQKCUDV");
    msg.visibility.assign("BVAPDWQXVCBUVBEEJTRAKMFKFRPCJEGFSAIQEMJTWXOTGPNOGIIOBMFSWHWKUUMXTKFLYYPVSMTYJZKDGCXDPRXPSHVHZL");
    msg.scope.assign("MRSFIWDVZKZUXXWLAEITPHIPEWTBPRZSTBOOPYAZTCRELTWJYYAKSEDUOQGMHWITUGFUSIRLKFDFBGRIYZHNSMAZJJWBQIKVGFEPNJKMOCYBYYBLKLVNYCQOTPYHZHOHLUVTQQKQDJCSDABATCDVSLBNWPIPQRKGGGVEYXXCUQXPAULWZJPWZUUNFLEXVHKMVFHXZCRGISSLDGJCFDJNNORBBAQXRCVJJMEFNXWENQMOFHOCS");

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
    msg.setTimeStamp(0.315409736442);
    msg.setSource(21950U);
    msg.setSourceEntity(62U);
    msg.setDestination(42101U);
    msg.setDestinationEntity(67U);
    msg.name.assign("OHRPDHJKRPREEFSDZPHLOCXQXQDHKYLHDRVKRYJKGIYQZRBIGBRVAOONZKXZALXMSIIWTAOIGWTRXGJZWXLXJGFJTSMJDPPFRSRDOPHBNWJECCCXTANMFSHVVZBPXNKDZEOCOIQCCWINMFCBQFTUBKDMFPDCLIDGVOFZKJJZIBHQVOUUSGHVHBWBSQTELLAVSVTTMUNQEY");
    msg.visibility.assign("TTZREQYRUZQFKABFBOUSHLKRVIQYYNRFJEHUGRUGJNRBABJAHZMJWLWSXCLKXHPUHWGNBMAGWTHQCIZRDPEVKCATQDPO");
    msg.scope.assign("WFMPEJQNMJBJUZZUVHIOOGYRFZYRIIVGEUYXLHEASLPNJOAWGMXRJODUYSFRYVAFZFUWKCWQRBAZNWNNRVTGPGBTLXUHD");

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
    msg.setTimeStamp(0.0350771775908);
    msg.setSource(44238U);
    msg.setSourceEntity(232U);
    msg.setDestination(15642U);
    msg.setDestinationEntity(219U);
    msg.name.assign("ATZWCBXTDLINLENKJQDYIEMDRZHQBGDPSW");
    msg.visibility.assign("HFRMWOHBYSRMJZXAOZRRODFVEAADPSZHNOETLXGSDPFCOHCLPDFGGSPBDFBMDKQUDSYLXMPPIOSCWILVVHPBMDZQENNGFTAXXIAZULCSTIOJZHKXEMSHJBTQRCOWKMVVSYBNQUEINEEUCWFUMKGXUCKEIMOVZCJCJIAQRATPNKKHGTZLUMYWFRIUABDNYJWCJXBJYVGGYOPKRPAWZUJQLEZWTLSGVWTTINRIDE");
    msg.scope.assign("TEZZPCJZGSXKZLTVQCKEJLBUWWNQFOGLCJLVULYWZANJEHZMSWICPZGPXMQORFRATHEQRYWYSIUEMEQGADBPWCDSAUQVAPYOMHHADHQIDOXOMDUBRFKAHIOMAXXIVLVBULFYYYWQGPQMITNDFWGGSFZUFSCICUHKJYLNXWJTFJXJNEXIGDHTNYLUOOTERQCDVSVBNBBKGTJPESBOWZPBGBAKSFVPFYNMHRNJKXARLTDTUMIIVXVKEDSRCCRK");

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
    msg.setTimeStamp(0.81330986241);
    msg.setSource(16442U);
    msg.setSourceEntity(70U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(155U);
    msg.name.assign("ZNHVYYGSWYDEBQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZUPADXTMHKRZJGRZRNYDVLIQWSLCYISZMWDQYROPZFWAVMVFHMDKBLEAJUBTXCVQDSNHOEODBZHLAFMGXLWGOVYCIFVBSUTHKGMGNOYBFJMLWQIBNHWPSLAFHLJSMUNYCFOCEVPNDHGFGMCMJKJYFQHIITEZUPDUNBQEQTBUBXSANPAOJUIXATWWSEPJGPGKOPNCTQXOUCKGRTEYFTKA");
    tmp_msg_0.value.assign("GCQCUKVHBUWDEQYKGEIQLCKPHIZKZJYSTFCQWZVZHBOPZUFMHTAWIQHSCVUPDAYJBRGETFRVGUCONRMQALAAEKBODPAHUONKVFSGYMMXTWBEXNGCWFAVRLLMGINSDVGBROXPLNWFBIYFNMGWLDYQJEWAXNHSFMMBKKIJQIFZPXKYJRQHUJEACKTDDOXCZJJV");
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
    msg.setTimeStamp(0.991805334501);
    msg.setSource(57351U);
    msg.setSourceEntity(28U);
    msg.setDestination(19754U);
    msg.setDestinationEntity(181U);
    msg.name.assign("BHBIMBJBFBLDKJYGMQVNDBNJIBLZQQFHXUTSRVWMGVYZCCFOFKBOSRYMIPMLQCXSQKK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LUFDCFAXFMOMQMODXHTFRSEVSPOQIWQHISBQDYDABYDBJWALDXABFXXSNKZCUVVZIFJPEQNVBFXUULAPNWRWJVMBCTIIRAKJEWRBMOFEZETJLVGOYZPUXGDIYCOXNKHFOANKQJMDXGRLZUAFTBWBMRHTCHZKCNPSRGEKIXQPQHYAWLJHJNGGWNTSLWHLRTHEPHLCKGPGOQSLVRVYEZGGPIIYRM");
    tmp_msg_0.value.assign("JNSZYIEUYOZWQYUXCWLHANMUSODIXMBQGGSGQGVYKNAGVJTMJDXJCCCCRKVAIZMKRQKCORHNWGAQBTXJPVIZFWCHEFODWLFFTMICHEPWYNGZSEGBMQTOUXNKRPAFHQBRYZTNWSCZQBRWEWSTSHVKJPLXIZPUJNPRTFLPDTMVFEUDLZAVKBFUQDXGLBIJAOLAJRXULRVDTWMZMU");
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
    msg.setTimeStamp(0.208393160466);
    msg.setSource(5275U);
    msg.setSourceEntity(216U);
    msg.setDestination(4570U);
    msg.setDestinationEntity(218U);
    msg.name.assign("AJSYVICNCGAAWYXCNAZOWZFSGFQQODANAIIUHRVYREHCEUSHUZYOLVDBPQNEDJKZZXOLLXQKJMQXRWBYEMAF");

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
    msg.setTimeStamp(0.464915664767);
    msg.setSource(2376U);
    msg.setSourceEntity(150U);
    msg.setDestination(10837U);
    msg.setDestinationEntity(149U);
    msg.name.assign("AMEPKXENEWCMEWUIGWGLHPRNGVYDHVSBBXBVTSNYPDPCMKUCACIJYQFDQWFXYEDVUB");

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
    msg.setTimeStamp(0.504843606043);
    msg.setSource(21813U);
    msg.setSourceEntity(149U);
    msg.setDestination(4321U);
    msg.setDestinationEntity(222U);
    msg.name.assign("ZKNLNZDBCYRTDATOCFXAMHSKHNPICHZPOZAIGCJPHIAQRPCQQJJLEGLJRUOZSTLBUKKFJIAZYNCONYGXVXPBGQGSVIPQTSXNODAAZPFLDHECFVVZXAOWLUJWMBXOYSBYWEDXBJVUWUHSWWLTFELXDWMEVWCIKRMTUKUQQPNMVFRXAUKFNCOQ");

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
    msg.setTimeStamp(0.839261291868);
    msg.setSource(31663U);
    msg.setSourceEntity(2U);
    msg.setDestination(818U);
    msg.setDestinationEntity(68U);
    msg.name.assign("UIJHSDBCPNYYNIZOKBLGJEHBIKZQPAQKQWENAESIEKHUHRDZHUZBOGEXBWFHTLLLJFBLSXOTGWWECZNJYDTP");

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
    msg.setTimeStamp(0.639731320863);
    msg.setSource(49990U);
    msg.setSourceEntity(52U);
    msg.setDestination(36121U);
    msg.setDestinationEntity(187U);
    msg.timeout = 832105474U;

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
    msg.setTimeStamp(0.48034557689);
    msg.setSource(5058U);
    msg.setSourceEntity(171U);
    msg.setDestination(46407U);
    msg.setDestinationEntity(72U);
    msg.timeout = 896514892U;

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
    msg.setTimeStamp(0.0128905943939);
    msg.setSource(7810U);
    msg.setSourceEntity(36U);
    msg.setDestination(14415U);
    msg.setDestinationEntity(119U);
    msg.timeout = 1605987419U;

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
    msg.setTimeStamp(0.0623527839647);
    msg.setSource(49566U);
    msg.setSourceEntity(18U);
    msg.setDestination(47160U);
    msg.setDestinationEntity(161U);
    msg.sessid = 2935195618U;

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
    msg.setTimeStamp(0.175516666396);
    msg.setSource(15489U);
    msg.setSourceEntity(117U);
    msg.setDestination(6884U);
    msg.setDestinationEntity(146U);
    msg.sessid = 4077959474U;

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
    msg.setTimeStamp(0.852269032664);
    msg.setSource(20125U);
    msg.setSourceEntity(12U);
    msg.setDestination(22551U);
    msg.setDestinationEntity(78U);
    msg.sessid = 3358625002U;

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
    msg.setTimeStamp(0.151912536801);
    msg.setSource(57053U);
    msg.setSourceEntity(222U);
    msg.setDestination(39017U);
    msg.setDestinationEntity(44U);
    msg.sessid = 1317772744U;
    msg.messages.assign("RWUJPOYUOJKHAUBCPLZNIERBRFJHCLHOCEHDUTXSVIGKLLXWNDMOEQYPECRCYKPPTZCNVEJQSXFFRRHYOEXUVGLUSBAWRVCQGDPMWNUWEYROAIAMNDQLYXYLHTXOCTYGHEBNFIZ");

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
    msg.setTimeStamp(0.116769343655);
    msg.setSource(41763U);
    msg.setSourceEntity(110U);
    msg.setDestination(56396U);
    msg.setDestinationEntity(72U);
    msg.sessid = 251450539U;
    msg.messages.assign("LVKAIAPAXFYUMHGRNJJXDTFMQAHSTJZZZDNBMYR");

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
    msg.setTimeStamp(0.125849420555);
    msg.setSource(60971U);
    msg.setSourceEntity(189U);
    msg.setDestination(49842U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2830975941U;
    msg.messages.assign("PBOAHGYZUOQVLWFKQKZVQEGVKQAWMTVHWFFTIGEVTJIEC");

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
    msg.setTimeStamp(0.833422730545);
    msg.setSource(27642U);
    msg.setSourceEntity(242U);
    msg.setDestination(49067U);
    msg.setDestinationEntity(116U);
    msg.sessid = 3314568448U;

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
    msg.setTimeStamp(0.678614839174);
    msg.setSource(38908U);
    msg.setSourceEntity(50U);
    msg.setDestination(25944U);
    msg.setDestinationEntity(141U);
    msg.sessid = 3397629541U;

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
    msg.setTimeStamp(0.573302155211);
    msg.setSource(62467U);
    msg.setSourceEntity(164U);
    msg.setDestination(47446U);
    msg.setDestinationEntity(151U);
    msg.sessid = 2287567536U;

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
    msg.setTimeStamp(0.305791436452);
    msg.setSource(32062U);
    msg.setSourceEntity(17U);
    msg.setDestination(53117U);
    msg.setDestinationEntity(107U);
    msg.sessid = 670114416U;
    msg.status = 239U;

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
    msg.setTimeStamp(0.601587614919);
    msg.setSource(11280U);
    msg.setSourceEntity(91U);
    msg.setDestination(2796U);
    msg.setDestinationEntity(29U);
    msg.sessid = 1047918161U;
    msg.status = 16U;

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
    msg.setTimeStamp(0.910384489035);
    msg.setSource(43473U);
    msg.setSourceEntity(56U);
    msg.setDestination(42401U);
    msg.setDestinationEntity(60U);
    msg.sessid = 322127032U;
    msg.status = 229U;

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
    msg.setTimeStamp(0.743319470826);
    msg.setSource(7489U);
    msg.setSourceEntity(28U);
    msg.setDestination(52868U);
    msg.setDestinationEntity(42U);
    msg.name.assign("LGHRPTCRFLILAQWEFRPCBTNNVWQUHYUGHAAHTEKAHXBLGZTSKEIWUISWMWSPNDYIXTUVGODOFRBDFV");

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
    msg.setTimeStamp(0.274090219044);
    msg.setSource(49208U);
    msg.setSourceEntity(225U);
    msg.setDestination(21767U);
    msg.setDestinationEntity(178U);
    msg.name.assign("LGQMNENQOWHQUSQSNPDPNOLFETSMNRXQHSYPGUFAOUAIAYBOJSMUIDTLKTXCDZHVUBRJXRVALRXYSZKCWGX");

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
    msg.setTimeStamp(0.38464794881);
    msg.setSource(54847U);
    msg.setSourceEntity(36U);
    msg.setDestination(49586U);
    msg.setDestinationEntity(194U);
    msg.name.assign("FVQALBQOLRNHSDSOLRSHNFUEUZJGUVTPXOAASMBRUTIRGU");

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
    msg.setTimeStamp(0.912164638574);
    msg.setSource(45028U);
    msg.setSourceEntity(120U);
    msg.setDestination(6085U);
    msg.setDestinationEntity(206U);
    msg.name.assign("ELMLMLWLVWBAXRSYY");

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
    msg.setTimeStamp(0.131743998064);
    msg.setSource(30590U);
    msg.setSourceEntity(155U);
    msg.setDestination(1429U);
    msg.setDestinationEntity(9U);
    msg.name.assign("MHBOPIKIFDSRSYWNIWTKUIIJWHSQYBKNUKAJAMCYTTQLRIEXMVWFEXRRYNBOFDQNKTJHZOWYAEDAZHXNTSZMHPHTCRGH");

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
    msg.setTimeStamp(0.0048449935703);
    msg.setSource(9213U);
    msg.setSourceEntity(50U);
    msg.setDestination(53275U);
    msg.setDestinationEntity(161U);
    msg.name.assign("YWFUBXYTHS");

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
    msg.setTimeStamp(0.193124468413);
    msg.setSource(30377U);
    msg.setSourceEntity(186U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(63U);
    msg.type = 180U;
    msg.error.assign("FXVNIXZECKJVXMJZHBMHIRZSZXFVRQGFWLLTOHVDDDCVZAEQLFWKNXXYMDCEYBFKSUIXOZYJWJKMHRTDYILZACATXNCEGCCODDCVBEBYJQFEQZMPOIOEHPVHFGQBKYGIRBEWTPJWOBQGNCKL");

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
    msg.setTimeStamp(0.938074296843);
    msg.setSource(32894U);
    msg.setSourceEntity(184U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(227U);
    msg.type = 237U;
    msg.error.assign("OUHEXKVAJMGEIYKNEVCJEEM");

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
    msg.setTimeStamp(0.670828835601);
    msg.setSource(52462U);
    msg.setSourceEntity(240U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(149U);
    msg.type = 211U;
    msg.error.assign("WQBUNCWHFADFODIDIKBLWTJXOMKDYIJRTXMQPVCPZCLHVVWATNYFMYQKLOWF");

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
    msg.setTimeStamp(0.56260434317);
    msg.setSource(60805U);
    msg.setSourceEntity(86U);
    msg.setDestination(49032U);
    msg.setDestinationEntity(111U);
    msg.seq = 58870U;
    msg.sys_dst.assign("QJJQWMSPOBUKGDIHK");
    msg.flags = 126U;
    const char tmp_msg_0[] = {-79, -77, -61, -85, -120, 31, 5, 119, -5, 118, 103, 109, -75, 14, -34, 88, -77, 47, -79, 20, -86, 26, -30, 39, 21, -114, 43, 115, -122, -80, -111, 87, 71, -60, -27, -74, 27, 108, -25, -114, -109, 91, 14, -57, 24, 62, -36, -57, -57, 13, 119, -52, 77, -56, -93, -118, -72, -101, -71, -62, 46, -44, -117, -102, 108, -126, 12, -77, 94, 46, 17, 35, 114, -53, -1, 20, 97, -20, -75, 109, 19, -80, 39, 93, -113, -123, -83, 38, 91, 119, 86, 116, -17, 70, 25, 121, -114};
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
    msg.setTimeStamp(0.823091751149);
    msg.setSource(24090U);
    msg.setSourceEntity(229U);
    msg.setDestination(47280U);
    msg.setDestinationEntity(13U);
    msg.seq = 56811U;
    msg.sys_dst.assign("ADRNQIISCCVVBBMGHZFAYGQLLYMDTXZGHZKVCBUALFLKSHRQANCETYNQKFVVHEJMMFANGZXMEBSASWFSKWNGEOIRFTXZQHDONTLQPQBPEPKUKDDTWOPSJQ");
    msg.flags = 186U;
    const char tmp_msg_0[] = {-61, 115, -108, -125, -2, -16, -67, -60, -9, 93, -11, 84, 28, 67, -16, -34, 68, -120, -21, -11, 55, -101, 19, 6, 44, -65, -116, 94, 66, -79, -53, -91, -12, -80, 69, -38, 17, -104, -41, -28, -31, 11, -27, -34, -103, 40, 126, 118, -51, 90, -85, 63, -35, -27, 67, -119, 17, 62, -64, -3, 18, 37, 116, -79, 93, -81, -128, 92, -94, -70, -48, -41, 98, -80, -83, -58, -70, 68, 106, -99, -3, -76, 17, 117, 120, -63, -125, -100, -93, 97, -100, 93, -30, -112, -105, 46, 30, -113, -54, -34, -93, -110, -56, 23, -10, -33, -56, -109, 55, -83, -6, -71, 24, 60, -90, 118, -92, 17, 30, -81, -51, 94, 81, -31, 54, 64, 81, -111, -121, 75, -8, -24, 85, -32, -98, 0, -109, 15, 58, 98, -38, -102, -66, 4, -94, -63, 16, 19, -86, -77, -51, -4, 4, 3, 81, -124, 9, -2, -57, 30, 124, -125, -72, -29, -29, 28, 35, 70, -70, 111, 111, -78, -67};
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
    msg.setTimeStamp(0.125829288268);
    msg.setSource(58331U);
    msg.setSourceEntity(21U);
    msg.setDestination(1431U);
    msg.setDestinationEntity(232U);
    msg.seq = 721U;
    msg.sys_dst.assign("LSBOTDJPGHPRQQMCARKYLDKVBPQZTVGEUJWQISVGCPGEFLRRXQRDHDUPBKEXUHQXFXIGSEUYDHALRUOIEPVX");
    msg.flags = 194U;
    const char tmp_msg_0[] = {-21, -3, 74, -10, 29, -67, -68, 52, -110, -41, -67, -34, 26, -38, 46, -115, 51, -83, 96, -123, 91, 84, -107, -1, -53, -83, -89, 32, 123, -4, -74, 28, -108, 72, -45, -35, 91, -45, -126, 93, 96, -91, -48, 61, 4, 4, 98, -52, 47, -107, 16, 105, -30, 94, -118, 46, -84, 43, 29, -102, -40, 48, 118, -81, -11, -124, -62, 119, -18, -104, 97, 60, -7};
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
    msg.setTimeStamp(0.688514353472);
    msg.setSource(5274U);
    msg.setSourceEntity(43U);
    msg.setDestination(14010U);
    msg.setDestinationEntity(135U);
    msg.sys_src.assign("ENHSTDQXORZVWSIOUU");
    msg.sys_dst.assign("LQNOTLZSTMOCQVIHEKKLPGGHNIFZEWMGWAFRTXEWPLCXJICDMPNVJGUDMBZSDZUVAHZEHSIFBXRJWUUFACJCIQPBROHURBIOOSRDVKLAWRYGKTLHTYRJBYNEFQXVLCXYYSXJTLTADWQILJBKEDCHGUUKPMBOSFUKRJEYHEFSLAXY");
    msg.flags = 14U;
    const char tmp_msg_0[] = {-69, -118, -115, 93, 54, -92, 83, -16, -30, 126, -32, -75, 52, -97, -95, -114, 32, 12, 57, 46, 106, 2, -31, 1, 122, 86, 97, -57, -51, 14, 48, 69, 65, -58, -85, -103, -4, 89, 36, 60, -126, -57, -114, -96, -74, -65, -41, -54, -1, -12, 29, 29, -120, 71, 51, 72, -53, 111, 60, 44, -87, 108, -84, 61, 116, 45, 26, -113, -42, -114, 17, 53, -93, 120, -2, -45, -119, -69, -51, 124, 4, -69, -108, -30, 63, -90, -11, 77, 95, 96, 64, 87, 118, 5, -113, -30, 94, 41, 99, -78, 77, -53, 108, -45, 68, -60, -127, -37, -1, 107, -86, -100, -68, -18, -45, -128};
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
    msg.setTimeStamp(0.890798524871);
    msg.setSource(25916U);
    msg.setSourceEntity(34U);
    msg.setDestination(60867U);
    msg.setDestinationEntity(231U);
    msg.sys_src.assign("CBHVMKGAKISTUJANYBJOBLYHARIYJHKFXYEKXRORPTCAANUCVSVBVIMNGXNXUYITKIZCDOUZJTXAWDQXPYFWXLRL");
    msg.sys_dst.assign("LSTYVZRCJTKHTEDNWAFWKLFSLGHVDZUJMPJCYZUEXQRASWNIDJGZRNKVNTQXCOGJCTXQJAQICFXIDZJZOXCBVWBANMBBROCLPVAMZQHKGKYETFQFYRHWPWAFMOMBBEPRDDJYFLXIQYUD");
    msg.flags = 153U;
    const char tmp_msg_0[] = {-75, -44, -30, -114, 34, 120, -81, -9, 1, 26, -108, -69, 102, 111, -116, -98, -49, -58, 69, 37, 20, 48, -95, -68, -52, -11, -112, 109, 4, 26, 0, -82, 28, -53, -76, 0, 8, 73, 41, -14, -61, 49, -56, -83, 62, -61, -35, 113};
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
    msg.setTimeStamp(0.62017433431);
    msg.setSource(51011U);
    msg.setSourceEntity(0U);
    msg.setDestination(63494U);
    msg.setDestinationEntity(128U);
    msg.sys_src.assign("VKGIFBEIASXBZKDFRLUAHQFLDDXJFQUJXTKYFUCNKJREUUPWBMOKDFRWCCHPCNNQLIKSRTEIZNLBXJMESHAEGQHHZRWLXWUOPZZTDISEMZTRFYTMXHEAIYNMR");
    msg.sys_dst.assign("HCPPKUNVVZILYIDCFMLZKYSRAJUYEBFSTIYQCMWXGHQVFGZBFLZWCODFWOIMFMQQFUSTBBJWTETYZZGUGNRXOAX");
    msg.flags = 76U;
    const char tmp_msg_0[] = {-83, 74, 44, -30, -64, -38, 48, -91, 39, -10, 104, 26, 117, 118, 22, -33, 60, -122, 118, 98, 105, 73, -106, -73, -92, -30, -33, -31, 32, -82, 42, -65, 124, 19, -64, -105, 6, -85, -56, -81, 55, 60, 42, 39, -114, 121, -46, 88, 12, 37, -38, -87, 57, -33, -39, -87, 91, 23, -1, -57, 110, -73, -119, 117, 22, -76, -34, -117, -54, 102, 126, 89, -127, 107, 21, -54, -59, 63, 44, -93, 110, -52, -71, -100, 74, 118, -77, -105, 52, 118, 65, 41, 85, -121, 70, 87, -85, 68, 100, 24, -23, -58, 92, -128, 100, -16, 74, -123, 10, 29, -11, 41, -10, 29, -125, -103, -67, 18, 120, 41, -115, 86, -94, 22, 12, -96, 84, 87, -77, -73, 85, -9, -115, -100, 103, 118, 120, -60, 58, 87, -86, -13, 35, 36, 90, 6, 25, 38, 34, -58, -43, 126, -93, 57, 20, -1, 86, -69, -4, -70, -73, 54, -12, -36, 94, -58, 32, 80, -70, -59, -127, -2, -77, -127, 71, -19, -2, -34, -48, 72, -73, -117, 76};
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
    msg.setTimeStamp(0.439426394366);
    msg.setSource(32940U);
    msg.setSourceEntity(7U);
    msg.setDestination(27000U);
    msg.setDestinationEntity(196U);
    msg.seq = 24647U;
    msg.value = 124U;
    msg.error.assign("BMYWTOURKNSADKWOTZGCMUIENHASKLZICRDTKPKGSCSRIRNPIELBLMEGDWOBNPHXEAKYSJULRJSWFZKHOXREYGFTARTLFIXZHCMQIWJQQPMDDFXRBSWDJYWZPQWZATNBGDUQHTCNCEGOFHAIFQGLIGBXTBYXKFCMWI");

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
    msg.setTimeStamp(0.946896596036);
    msg.setSource(53636U);
    msg.setSourceEntity(7U);
    msg.setDestination(38715U);
    msg.setDestinationEntity(183U);
    msg.seq = 62853U;
    msg.value = 77U;
    msg.error.assign("IMWHWOBHMGYAKQTLSNOJRISGUEVTBDNXZOLZO");

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
    msg.setTimeStamp(0.474782108832);
    msg.setSource(50560U);
    msg.setSourceEntity(73U);
    msg.setDestination(12968U);
    msg.setDestinationEntity(153U);
    msg.seq = 36850U;
    msg.value = 165U;
    msg.error.assign("TXXNPLMZJOPCHIXODJIKCJSRECKRTVRFWYLKTFJIUOY");

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
    msg.setTimeStamp(0.256809692532);
    msg.setSource(7645U);
    msg.setSourceEntity(12U);
    msg.setDestination(28617U);
    msg.setDestinationEntity(78U);
    msg.seq = 5443U;
    msg.sys.assign("WQOUUMPIXECQRSZHHUCCOYWKIIFZMYFQFFHHTPCDNARKKVJKLCEYWIJCXXCRBMWEIUFDLXNRHNZZHARFREOJTQSSVSMVJBAVXKMYJ");
    msg.value = 0.956099682775;

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
    msg.setTimeStamp(0.667397635858);
    msg.setSource(34833U);
    msg.setSourceEntity(31U);
    msg.setDestination(41959U);
    msg.setDestinationEntity(72U);
    msg.seq = 35252U;
    msg.sys.assign("BQDGKQHZAZHOIOHUQOTCRJVSKCMJYNDDTTTHXDYHTBIFMSDAVVUPZOHUOMWTAAXSWIWXBCSBFMAOUFJXGXUWEGYSFLQLHQJYNXWPEPTADGZYAXELUUKRJPNZBUKDWKZLLHABSPRONBCWXCHRFVEROJZGD");
    msg.value = 0.552344548799;

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
    msg.setTimeStamp(0.41732972754);
    msg.setSource(57271U);
    msg.setSourceEntity(6U);
    msg.setDestination(33009U);
    msg.setDestinationEntity(140U);
    msg.seq = 11636U;
    msg.sys.assign("OUXCVZZDNGENGTMXCPVWLSPHLKUYLKBIYKLNGCDDAEMFVXFORPEMRSXFKRJWVLROOUCXDJGQSHHDJTTWNMOYTARRBBZVNPZTGVIYYTYNCQDBIWEEGUIQAHAEYMJHOUSBWTVELHIZAXOLCFTTRFEQCJABKRBAHEZDOWIUCZKJKAPNMLQAGXVKECGXJZSDQFNRGSKQNFQOVCSSTBOHGSLBMXQHKWDVUXWFJHYZAUNQSJPULJFUMZMFWPPPI");
    msg.value = 0.243993374559;

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
    msg.setTimeStamp(0.355928005322);
    msg.setSource(65304U);
    msg.setSourceEntity(90U);
    msg.setDestination(16488U);
    msg.setDestinationEntity(197U);
    msg.action = 61U;
    msg.longain = 0.213121648154;
    msg.latgain = 0.501875641821;
    msg.bondthick = 1071256760U;
    msg.leadgain = 0.441943020547;
    msg.deconflgain = 0.381303513855;

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
    msg.setTimeStamp(0.296078048068);
    msg.setSource(53950U);
    msg.setSourceEntity(170U);
    msg.setDestination(39032U);
    msg.setDestinationEntity(213U);
    msg.action = 43U;
    msg.longain = 0.0525805879644;
    msg.latgain = 0.178149266587;
    msg.bondthick = 2674781661U;
    msg.leadgain = 0.854510989122;
    msg.deconflgain = 0.410149478119;

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
    msg.setTimeStamp(0.390950815577);
    msg.setSource(23239U);
    msg.setSourceEntity(139U);
    msg.setDestination(32601U);
    msg.setDestinationEntity(130U);
    msg.action = 19U;
    msg.longain = 0.852645305902;
    msg.latgain = 0.517504123947;
    msg.bondthick = 1302056530U;
    msg.leadgain = 0.383356460479;
    msg.deconflgain = 0.484397120758;

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
    msg.setTimeStamp(0.0326815377884);
    msg.setSource(48319U);
    msg.setSourceEntity(253U);
    msg.setDestination(44995U);
    msg.setDestinationEntity(166U);
    msg.err_mean = 0.302913071546;
    msg.dist_min_abs = 0.638297100597;
    msg.dist_min_mean = 0.247055034644;

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
    msg.setTimeStamp(0.826075121318);
    msg.setSource(3349U);
    msg.setSourceEntity(29U);
    msg.setDestination(57159U);
    msg.setDestinationEntity(227U);
    msg.err_mean = 0.814704939429;
    msg.dist_min_abs = 0.727273688783;
    msg.dist_min_mean = 0.939094626708;

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
    msg.setTimeStamp(0.162132064941);
    msg.setSource(3269U);
    msg.setSourceEntity(143U);
    msg.setDestination(37477U);
    msg.setDestinationEntity(89U);
    msg.err_mean = 0.504050169041;
    msg.dist_min_abs = 0.262714831856;
    msg.dist_min_mean = 0.96244233322;

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
    msg.setTimeStamp(0.971126226904);
    msg.setSource(13735U);
    msg.setSourceEntity(216U);
    msg.setDestination(63217U);
    msg.setDestinationEntity(19U);
    msg.action = 124U;
    msg.lon_gain = 0.549672455345;
    msg.lat_gain = 0.700682638549;
    msg.bond_thick = 0.399263115058;
    msg.lead_gain = 0.112504352613;
    msg.deconfl_gain = 0.133668658359;
    msg.accel_switch_gain = 0.838357164632;
    msg.safe_dist = 0.0568213700739;
    msg.deconflict_offset = 0.767765834348;
    msg.accel_safe_margin = 0.376330940789;
    msg.accel_lim_x = 0.799538270395;

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
    msg.setTimeStamp(0.851982333725);
    msg.setSource(29476U);
    msg.setSourceEntity(0U);
    msg.setDestination(44606U);
    msg.setDestinationEntity(185U);
    msg.action = 24U;
    msg.lon_gain = 0.722808080495;
    msg.lat_gain = 0.979977028616;
    msg.bond_thick = 0.995362449767;
    msg.lead_gain = 0.790596338222;
    msg.deconfl_gain = 0.257994594184;
    msg.accel_switch_gain = 0.352459221605;
    msg.safe_dist = 0.457500563478;
    msg.deconflict_offset = 0.247447354815;
    msg.accel_safe_margin = 0.558114240401;
    msg.accel_lim_x = 0.0537533882623;

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
    msg.setTimeStamp(0.800102929644);
    msg.setSource(13877U);
    msg.setSourceEntity(165U);
    msg.setDestination(50008U);
    msg.setDestinationEntity(250U);
    msg.action = 30U;
    msg.lon_gain = 0.711670297562;
    msg.lat_gain = 0.702147967442;
    msg.bond_thick = 0.0291578638548;
    msg.lead_gain = 0.444746535229;
    msg.deconfl_gain = 0.613977652217;
    msg.accel_switch_gain = 0.446035023813;
    msg.safe_dist = 0.470723886517;
    msg.deconflict_offset = 0.992189193298;
    msg.accel_safe_margin = 0.135746045788;
    msg.accel_lim_x = 0.514739225461;

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
    msg.setTimeStamp(0.303571992224);
    msg.setSource(1176U);
    msg.setSourceEntity(136U);
    msg.setDestination(50661U);
    msg.setDestinationEntity(50U);
    msg.type = 66U;
    msg.op = 21U;
    msg.err_mean = 0.377192602727;
    msg.dist_min_abs = 0.188758206663;
    msg.dist_min_mean = 0.92163570945;
    msg.roll_rate_mean = 0.623118813946;
    msg.time = 0.79279535973;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 198U;
    tmp_msg_0.lon_gain = 0.672031312129;
    tmp_msg_0.lat_gain = 0.459151922142;
    tmp_msg_0.bond_thick = 0.3975995382;
    tmp_msg_0.lead_gain = 0.277778828004;
    tmp_msg_0.deconfl_gain = 0.828530332727;
    tmp_msg_0.accel_switch_gain = 0.243019672588;
    tmp_msg_0.safe_dist = 0.0196111550611;
    tmp_msg_0.deconflict_offset = 0.164765920549;
    tmp_msg_0.accel_safe_margin = 0.478316453701;
    tmp_msg_0.accel_lim_x = 0.375720750872;
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
    msg.setTimeStamp(0.888594310172);
    msg.setSource(63940U);
    msg.setSourceEntity(231U);
    msg.setDestination(21377U);
    msg.setDestinationEntity(200U);
    msg.type = 61U;
    msg.op = 197U;
    msg.err_mean = 0.646403319925;
    msg.dist_min_abs = 0.309206624963;
    msg.dist_min_mean = 0.811978697213;
    msg.roll_rate_mean = 0.945431031253;
    msg.time = 0.540535303926;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 133U;
    tmp_msg_0.lon_gain = 0.399071574638;
    tmp_msg_0.lat_gain = 0.274217773736;
    tmp_msg_0.bond_thick = 0.0658988323052;
    tmp_msg_0.lead_gain = 0.746176964573;
    tmp_msg_0.deconfl_gain = 0.0692942691143;
    tmp_msg_0.accel_switch_gain = 0.772212255614;
    tmp_msg_0.safe_dist = 0.562718848056;
    tmp_msg_0.deconflict_offset = 0.393179691147;
    tmp_msg_0.accel_safe_margin = 0.893495586259;
    tmp_msg_0.accel_lim_x = 0.857475513082;
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
    msg.setTimeStamp(0.534663478041);
    msg.setSource(21962U);
    msg.setSourceEntity(234U);
    msg.setDestination(724U);
    msg.setDestinationEntity(103U);
    msg.type = 138U;
    msg.op = 84U;
    msg.err_mean = 0.806683396533;
    msg.dist_min_abs = 0.618398366497;
    msg.dist_min_mean = 0.837228310148;
    msg.roll_rate_mean = 0.928742275346;
    msg.time = 0.434815578394;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 91U;
    tmp_msg_0.lon_gain = 0.0869302663489;
    tmp_msg_0.lat_gain = 0.0176989914863;
    tmp_msg_0.bond_thick = 0.546135250338;
    tmp_msg_0.lead_gain = 0.0737118939768;
    tmp_msg_0.deconfl_gain = 0.702781055733;
    tmp_msg_0.accel_switch_gain = 0.622454739211;
    tmp_msg_0.safe_dist = 0.607670269138;
    tmp_msg_0.deconflict_offset = 0.602942640904;
    tmp_msg_0.accel_safe_margin = 0.467340464961;
    tmp_msg_0.accel_lim_x = 0.987598070247;
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
    msg.setTimeStamp(0.00185153123564);
    msg.setSource(274U);
    msg.setSourceEntity(104U);
    msg.setDestination(18512U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.795798915705;
    msg.lon = 0.138871892917;
    msg.eta = 1955691156U;
    msg.duration = 47379U;

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
    msg.setTimeStamp(0.734535296025);
    msg.setSource(32862U);
    msg.setSourceEntity(216U);
    msg.setDestination(63663U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.975114824912;
    msg.lon = 0.679934619051;
    msg.eta = 668019496U;
    msg.duration = 50256U;

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
    msg.setTimeStamp(0.497131709319);
    msg.setSource(49535U);
    msg.setSourceEntity(160U);
    msg.setDestination(54427U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.0336775115756;
    msg.lon = 0.66263932009;
    msg.eta = 561684214U;
    msg.duration = 24025U;

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
    msg.setTimeStamp(0.418054115209);
    msg.setSource(22969U);
    msg.setSourceEntity(82U);
    msg.setDestination(49698U);
    msg.setDestinationEntity(153U);
    msg.plan_id = 60937U;

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
    msg.setTimeStamp(0.958005133766);
    msg.setSource(63000U);
    msg.setSourceEntity(215U);
    msg.setDestination(24297U);
    msg.setDestinationEntity(51U);
    msg.plan_id = 30804U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.376832243574;
    tmp_msg_0.lon = 0.267647310883;
    tmp_msg_0.eta = 3536691898U;
    tmp_msg_0.duration = 60554U;
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
    msg.setTimeStamp(0.841720573194);
    msg.setSource(55464U);
    msg.setSourceEntity(96U);
    msg.setDestination(14500U);
    msg.setDestinationEntity(85U);
    msg.plan_id = 17339U;

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
    msg.setTimeStamp(0.0404986691869);
    msg.setSource(51091U);
    msg.setSourceEntity(94U);
    msg.setDestination(39700U);
    msg.setDestinationEntity(179U);
    msg.type = 91U;
    msg.command = 14U;
    msg.settings.assign("FZGWGAGYRRDUTESZYWJONFMGEGEOTORDQNCZFNPYJQFUHFKIYYOQOMMQEYBFTBMUOVDHDNWRVGIOZZEQUBIECPPUXYWEAWNRLIQZXGCPKU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9714U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZGASXJZQSEUMXUZENEZFZUNRAUMYQPWMBVKNJSOMTCXPASMXEZZWQTNFIGDRPDWBMJWQYEYRDEOCCDGJXRWMLSMFALWGCN");

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
    msg.setTimeStamp(0.0216414148033);
    msg.setSource(4576U);
    msg.setSourceEntity(122U);
    msg.setDestination(54703U);
    msg.setDestinationEntity(172U);
    msg.type = 141U;
    msg.command = 50U;
    msg.settings.assign("OCPJFJQRYXKPNGGTLBKBMMWWWPTEDBS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42147U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TKSCAVVNCIJFLMMTDPCCDJZFSIZNWXJSVJKGUAVPRHJBXEIOQOAPCEKKWCVNMAOUAVUBMIDFKGUYMXMVMZOSUEQQJRQYYRPMFFAZDPIDBUQNBAMJLZTVHDURGNKEPNBLAXIZJMWILGEFOOYWHLWYLZQFHTPDAXTWHDXXSWRLRKKYTTUHGNWXPSQCBGLSGHODOEOCSHCJYZRBULLEDUTKTXEHQYBQNRTERWZAKBGQONVRIIPFPGYZXSEI");

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
    msg.setTimeStamp(0.263660235196);
    msg.setSource(23672U);
    msg.setSourceEntity(75U);
    msg.setDestination(8752U);
    msg.setDestinationEntity(144U);
    msg.type = 100U;
    msg.command = 207U;
    msg.settings.assign("WYWHHPYEKBMSWHRQYIZAXLWUBC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 58727U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BBWSTWFYPOF");

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
    msg.setTimeStamp(0.150498450199);
    msg.setSource(15330U);
    msg.setSourceEntity(144U);
    msg.setDestination(22480U);
    msg.setDestinationEntity(141U);
    msg.state = 207U;
    msg.plan_id = 45996U;
    msg.wpt_id = 117U;
    msg.settings_chk = 44213U;

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
    msg.setTimeStamp(0.292703940764);
    msg.setSource(7661U);
    msg.setSourceEntity(152U);
    msg.setDestination(14484U);
    msg.setDestinationEntity(89U);
    msg.state = 29U;
    msg.plan_id = 58220U;
    msg.wpt_id = 74U;
    msg.settings_chk = 19917U;

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
    msg.setTimeStamp(0.492425594953);
    msg.setSource(45044U);
    msg.setSourceEntity(117U);
    msg.setDestination(7066U);
    msg.setDestinationEntity(161U);
    msg.state = 168U;
    msg.plan_id = 64346U;
    msg.wpt_id = 25U;
    msg.settings_chk = 20358U;

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
    msg.setTimeStamp(0.62809719699);
    msg.setSource(58305U);
    msg.setSourceEntity(108U);
    msg.setDestination(1551U);
    msg.setDestinationEntity(108U);
    msg.uid = 136U;
    msg.frag_number = 117U;
    msg.num_frags = 108U;
    const char tmp_msg_0[] = {104, 38, 26, -21, -9, 19, -48, 107, 47, 100, -56, 98, -96, -24, 70, 106, 100, -111, 63, 4, 59, -79, -7, -16, 9, 17, -53, 57, -118, 57, 60, 87, 20, 126, 30, -51, 88, 72, -97, 100, 17, 20, -36, -78, -3, -123, -80, -51, -90, -128, -57, -66, -55, -61, -100, -110, -108, -128, 73, -37, 76, 65, 31, -36, 71, 121, 117, -124, -67, -6, 23, -102, -96, 15, -95, -96, 62, 70, 29, 14, -109, -114, -69, 104, 76, -27, -122, 4, 62, -75, 112, 79, -39, 94, 43, -41, 36, 63, 58, -96, 90, 69, -73, -18, -108, -25, 88, -103, 5, -113, 101, -112, -97, 116, -120, 63, 81, 11, -88, 89, 58, -76, -103, -40, 29, 90, 122, -121, 83, -109, 113, 16, -46, -92, 69, -97, 65, 82, -90, 40, 120, -98, 68, -10, 122, -21, -67, -58, 58, -66, -86, 92, -13, -73, 102, -45, 5, 60, -30, 53, -128, -59, 36, -19, -25, 55, -113, 64, 104, 15, -62, -84, 53, -10, 88, -48, 15, 125, 82, -40, 47, 50, 44, 11, 113, -89, 17, -100, 104, -76, 63};
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
    msg.setTimeStamp(0.0734594925701);
    msg.setSource(62996U);
    msg.setSourceEntity(100U);
    msg.setDestination(31602U);
    msg.setDestinationEntity(129U);
    msg.uid = 99U;
    msg.frag_number = 137U;
    msg.num_frags = 20U;
    const char tmp_msg_0[] = {-128, -63, -35, 30, 114, -80, -27, 61, 111, -17, -24, -40, 25, -37, 125, 119, -91, -71, -111, -68, -24};
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
    msg.setTimeStamp(0.861210410347);
    msg.setSource(24031U);
    msg.setSourceEntity(233U);
    msg.setDestination(6216U);
    msg.setDestinationEntity(216U);
    msg.uid = 144U;
    msg.frag_number = 186U;
    msg.num_frags = 166U;
    const char tmp_msg_0[] = {-94, 108, -7, 16, 21, 117, -97, 6, -94, 12, 36, -125, -35, -29, 94, -80, -44, -75, 119, -65, 25, 13, 9, 96, -100, 43, -43, -85, 111, -94, -45, 115, -14, 100, 91, -55, -31, -92, -61, 89, -122, 96, -107, 109, 68, -28, -100, 10, 69, 3, -80, 8, 73, -98, -72, 15, -109, 45, 26, 19, -90, -10, 0, -98, -76, 30, -114, -22, -26, 1, 100, -21, -114, -76, 102, -128, -45, -98, 89, -107, 91, 44, 120, 16, -101, -101, -42, -90, -125, 99, 54, 98, -56, -89, -49, -7, 68, 28, -19, 2, -88, -1, -110, 81, -77, -120, -81, 109, -79, -36, -45, -20, -86, -1, 8, -53, 59, -80, 106, 75, 72, 42, -127, -49, -83, -36, 80, 69, 17, 122, 64, -117, 94, -128, 50, 33, -52, -90, 107, 8, -39, 101, -100, -103, -3, 1, -5, 55, 71, -63, -38, -71, -55, -30, -120, 57, 107, -74, 68, -27, -53, -50, -39, -110, 9, 12, 79, 96, -114, 38, -40, 84, -114, -119, 21, 76, 5, -4, -73, 39, 45, -115, 69, 14, -11, -58, -21, -111, -70, 40, 39};
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
    msg.setTimeStamp(0.58811808465);
    msg.setSource(7041U);
    msg.setSourceEntity(6U);
    msg.setDestination(11067U);
    msg.setDestinationEntity(154U);
    msg.content_type.assign("WIVVLVXIKNODCRWBRWJRKICPPUZYSKBJKOQOFYNTQGEEQWIAUPNFWLJNIOQVQXAXLUGMSMJMJTBIQHBZFYJIRUYHZXDBDQVUGCRAMNLTERRLTDKOHDEYDAFHEPWMJZMAUSNLEEDQPVNSIGZZAVEULCCFYENHSGOZCOABXDACMUKGVBYXZBPW");
    const char tmp_msg_0[] = {-12, -16, 24, -90, -71, 63, 113, 24, 107, 21, 40, -24, 99, 48, -122, 121, 42, 101, -43, 39, 76, 14, -90, 21, 95, 7, 61, 96, -101, -68, 39, -54, 97, 68, 13, 2, -24, 18, 50, 102, 122, 126, -112, -15, 36, -117, -93, -93, -81, 25, 65, 103, 103, 100, 47, -102, 101, -6, 99, 116, 121, -12, -7, 13, -118, -67, -59, 67, 74, 104, 96, 81, 36, -27, 18, 77, 122, 2, -22, 84, -120, 86, 33, -113, 75, 95, -13, 63, 67, 84, 25, 48, 77, 44, -112, 20, 0, 40, -46, -53, 16, -31, -121, 57, -28, 66, -128, 6, 124, 49, 66, -52, -23, 41, 73, -87, 53, -14, -77, -6, -66, 23, -99, 40, 79, -32, -27, 110, 23, 83, 8, 24, -55, 45, 69, -109, -126, 86, -79, -124, -39, 121, -109, 117, 84, -113, 92, 85, 38, 12, -10, -9, -114, 52, -4, -122, -90, 42, 120, -93};
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
    msg.setTimeStamp(0.499790236321);
    msg.setSource(24517U);
    msg.setSourceEntity(66U);
    msg.setDestination(36639U);
    msg.setDestinationEntity(177U);
    msg.content_type.assign("BGTEHNGSGYAHBKIISMTMDHXVUJMUWTUZVLRVFDKYZLOXHJZZIWGFJSDDTTGLBTEFIKMYRHXXZQBUWAILJPDYYLZXHERPOJETUOQAPRWCOQQIDDEFKMAVPAFLDEYXCPBBRCPMSVEELCBWBCIOQWQRNVPGMNTJJYXNVFSETZHAKNGXKNNRJKQKFRQQNSWOSVIOYMUIGFWJHBSLSCVCZVGOZURKUPTXPIEDNOAAGCMY");
    const char tmp_msg_0[] = {-87, -5, 58, -103, -106, 56, -76, 63, -14, -45, -44, 55, 3, 68, -91, -40, -24, -123, 113, 1, -21, -71, 125, -118, -72, -26, -98, 34, 86, 36, 68, -122, -50, -32, 55, 6, -69, 97, -75, 88, 0, -79, 125, 97, -100, 33, 23, -30, 74, 37, -42, -42, 41, -44, 73, 6, -89, -50, -128, -2, -8, -119, 105, -52, 32, -102, -8, 43, -2, 28, -124, 33, 115, 121, 39, 126, 0, -23, -45, 2, 15, -60, 15, -80, 107, -30, -10, 114, 14};
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
    msg.setTimeStamp(0.858169645936);
    msg.setSource(8505U);
    msg.setSourceEntity(14U);
    msg.setDestination(64003U);
    msg.setDestinationEntity(189U);
    msg.content_type.assign("CIVUOFWTJINFBJTMOBWIKFTZJVFCPCHPOUPYHZULLMKEIFLLUWRLPKHVNOUWPMY");
    const char tmp_msg_0[] = {91, 116, 49, -32, -81, -35, 51, 95, -24, -122, 41, -64, -41, 108, 65, 91, 48, 114, -38, -102, -96, 28, -13, -63, -81, -87, 113, -90, -32, 103, 93, 122, -126, 23, -88, 31, 40, 95, -59, 48, -32, 103, -73, -30, 105, -111, 53, -74, -26, -73, -116, -67, -44, 94, -104, -34, -54, -67, 22, 78, -16, 53, 0, -10, -126, -91, -121, 2, -86, -88, -11, -52, 18, 108, 77, 11, 88, -103, 13, -80, 37, -84, 62, 70, 37, -38, 115, 68, -34, 24, -128, 49, -25, 23, 94, 65, 82, -12, 59, 47, -50, -15, -56, -122, 16, -33, 72, -97, -7, 6, 49, 61, 13, 73, -70, -1, 101, -59, -110, -105, 58, -67, -71, 50, -47};
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
    msg.setTimeStamp(0.520756320511);
    msg.setSource(53760U);
    msg.setSourceEntity(85U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.035229981406);
    msg.setSource(156U);
    msg.setSourceEntity(159U);
    msg.setDestination(17710U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.899627039543);
    msg.setSource(50137U);
    msg.setSourceEntity(55U);
    msg.setDestination(63201U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.0205156566873);
    msg.setSource(15362U);
    msg.setSourceEntity(236U);
    msg.setDestination(392U);
    msg.setDestinationEntity(113U);
    msg.target = 31298U;
    msg.bearing = 0.0768266481986;
    msg.elevation = 0.931526126185;

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
    msg.setTimeStamp(0.930748311412);
    msg.setSource(50312U);
    msg.setSourceEntity(187U);
    msg.setDestination(4324U);
    msg.setDestinationEntity(182U);
    msg.target = 7612U;
    msg.bearing = 0.20592112763;
    msg.elevation = 0.912798534387;

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
    msg.setTimeStamp(0.618715056517);
    msg.setSource(43858U);
    msg.setSourceEntity(226U);
    msg.setDestination(41625U);
    msg.setDestinationEntity(174U);
    msg.target = 52764U;
    msg.bearing = 0.979205673479;
    msg.elevation = 0.0217868232733;

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
    msg.setTimeStamp(0.211092341145);
    msg.setSource(24336U);
    msg.setSourceEntity(180U);
    msg.setDestination(25645U);
    msg.setDestinationEntity(79U);
    msg.target = 13709U;
    msg.x = 0.656532785074;
    msg.y = 0.0982798190081;
    msg.z = 0.169093363738;

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
    msg.setTimeStamp(0.0721820545615);
    msg.setSource(52519U);
    msg.setSourceEntity(210U);
    msg.setDestination(48324U);
    msg.setDestinationEntity(2U);
    msg.target = 59542U;
    msg.x = 0.382173482885;
    msg.y = 0.450012417552;
    msg.z = 0.0729842914771;

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
    msg.setTimeStamp(0.630366316505);
    msg.setSource(16689U);
    msg.setSourceEntity(222U);
    msg.setDestination(35191U);
    msg.setDestinationEntity(51U);
    msg.target = 32133U;
    msg.x = 0.740103891697;
    msg.y = 0.945034131189;
    msg.z = 0.487324362578;

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
    msg.setTimeStamp(0.665219222984);
    msg.setSource(50964U);
    msg.setSourceEntity(194U);
    msg.setDestination(4295U);
    msg.setDestinationEntity(44U);
    msg.target = 58643U;
    msg.lat = 0.435570426793;
    msg.lon = 0.797116752939;
    msg.z_units = 154U;
    msg.z = 0.218447417134;

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
    msg.setTimeStamp(0.210727264802);
    msg.setSource(8105U);
    msg.setSourceEntity(238U);
    msg.setDestination(22834U);
    msg.setDestinationEntity(226U);
    msg.target = 24311U;
    msg.lat = 0.883849418815;
    msg.lon = 0.358891234211;
    msg.z_units = 25U;
    msg.z = 0.678761233696;

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
    msg.setTimeStamp(0.845130402042);
    msg.setSource(31948U);
    msg.setSourceEntity(238U);
    msg.setDestination(30785U);
    msg.setDestinationEntity(204U);
    msg.target = 48648U;
    msg.lat = 0.737572466898;
    msg.lon = 0.447662345152;
    msg.z_units = 70U;
    msg.z = 0.735432510529;

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
    msg.setTimeStamp(0.0834757565576);
    msg.setSource(51763U);
    msg.setSourceEntity(48U);
    msg.setDestination(33572U);
    msg.setDestinationEntity(116U);
    msg.locale.assign("OFELMZPNIWSIATABWSDRNELVXAMSZRMQBQJNFHYFRULMCAYGRGTGFMXLNKEFOJPCJYPODSUQVZXUKFNJNVFCWQOTSDFGYTTQTKOLWNQHAOLHZRNAXCBTEHBIMWTJNDVYEIRKZVZLYKRZFGXMLSBDXFCSAGOSEYSEUPJVRIWBBIWQKYDIIACXUDWDVJHCGHQCGPOY");
    const char tmp_msg_0[] = {-101, 66, 36, -121, 105, 97, 70, -117, -55, 9, -16, 82, -40, -99, 42, -35, -54, -128, -24, -25, 14, 22, 114, -10, 122, -60, -69, -25, 70, 17, 14, 97, 83, -70, -11, 3, 78, -50, -69, 82, 68, 5, 104, -27, -26, -5, 13, -26, -115, -18, 36, 36, -58, -3, -37, -108, -14, 5, 6, 32, 116, 70, -36, 81, -43, 125, -39, -78, -57, -82, 76, -118, 50, -24, 57, 70, -74, -20, -52, 105, 60, 57, -72, 57, -80, 72, -91, -69, 82, -121, 95, 105, 121, 72, -82, -24, 33, 71, 26, 82, -58, 105, -57, -57, -77, -29, -75, -43, 89, -13, -45};
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
    msg.setTimeStamp(0.0819853547442);
    msg.setSource(41943U);
    msg.setSourceEntity(184U);
    msg.setDestination(44536U);
    msg.setDestinationEntity(69U);
    msg.locale.assign("FXZWMROGNXDZJZBKWUIVQOHSMMUJSMNYOFYLSKJFYJWEDBYHOVYJIUQMRRTCHLAYGVHCENPDIAZIUJCYDHOFPTTICPDMXMBUTFQUAEGIPSMPQFKLFRTREGFVLUOLINRALLJGNSBHJFBWHYZCIJQNLTXDEEGNWX");
    const char tmp_msg_0[] = {54, -64, 59, -19, -111, 119, -65, -38, 125, -18, 49, -85, -91, -35, -48, 53, -123, 102, 7, 33, -90, -55, 24, 76, 43, -127, 111, -106, -54, -30, 112, -103, 96, 33, 74, 89, -10, -4, 104, -26, 13, -32, -27, -106, -60, 125, -59, 126, -39, -122, -42, 35, -116, 30, -43, 80, -36, 23, -30, 16, -18, 113, 22, -19, -26, -51, -97, -120, 9, -55, 67, 89, 13, 6, 29, 60, -39, 3, -40, -13, 31, -42, 123, 6, -18, 1, -116, -102, 23, 24, 71, -35, 75, 121, -27, 22, 81, 18, 91, -79, -9, 21, -3, -48, -40, 7, 8, -41, 117, 69, -19, 88, -42, -47, -38, -99, -95, -24, -82, -82, -125, 78, -111, 28, 44, 53, 54, 99, 115, 27, -51, -65, 34, 126, 64, 48, 112, -99, 87, -21, -114, 42, -126, -108, -33, 107, 112, 65, -71, 81, 68, 104, -17, 114, 111, -66, 16, -98, 45, 26, 14, -35, -69, 89, -107, 103, 53, -97, -38, 28, 115, -35, 118, -128, 51, 94, 111, -67, 107, 0, -104, 87, -38, 34, 94, -85, 96, -95, -31, -27};
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
    msg.setTimeStamp(0.553811302021);
    msg.setSource(44929U);
    msg.setSourceEntity(88U);
    msg.setDestination(16080U);
    msg.setDestinationEntity(105U);
    msg.locale.assign("DIULYDTGSNFXWGSKDXNHDJYKMHFEPVFJKNGJWZBJZLEDQMZXUMELKDGQFBOLCGAFBYPWZLRLOQTOCCBSCMKQCQNWERTD");
    const char tmp_msg_0[] = {34, -59, -89, -22, -91, -81, -11, 52, 41, 28, -85, 91, 24, 74, 94, 16, 59, -79, -124, 109, -63, -46, -126, 68, 121, 6, 84, 80, -29, -37, -44, 118, 42, -38, -54, 36, -4, 16, -113, 8, -41, 104, -100, 36, 81, -89, -7, 34, 111, 119, 7, 88, -113, 74, 31, -41, 81, 86, 86, -73, -124, -113, 89, -71, -14, 67, -93, -87, -78, -79, 8, -47, 15, 54, 39, -82, -95, -38, -78, -83, 15, 6, 117, -91, -57, -127, -116, 50, -103, -110, 62, 100, 75, 24, 47, 100, 21, 82, 11, 64, 52, 70, -125, -38, -70, -48, -122, -26, 116, -58, -8, -11, 22, 110, -74, -22, -8, -72, -113, -91, 64, 56, -113, -91, 68, 38, 87, -2, -37, 110, -78, 116, 0, 34, 93, 88, 43, -33, 60, -43, 53, 40, 46, 0, -25, 111, -40, 68, -42, -106, 54, 109, 8, -51, -7, 37, 19, -7, 15, 73, -34, -13, 105, 120, -88, -46, 67, -80, -92, -91, 0, -119, 125, 60, -127, 60, -51, -46, -98, 126, 3, 9, 117, -14, 118, -101, 20, 114, 73, -94, -101, 98, -17, 3, 7, 14, 8, -124, -25, 31, -98, 26, -89, 65, -3, -72, -6, 43, 99, 59};
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
    msg.setTimeStamp(0.134834829034);
    msg.setSource(29461U);
    msg.setSourceEntity(162U);
    msg.setDestination(12663U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.0419601280302);
    msg.setSource(1401U);
    msg.setSourceEntity(28U);
    msg.setDestination(17917U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.690020621555);
    msg.setSource(46770U);
    msg.setSourceEntity(165U);
    msg.setDestination(43062U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.56666484475);
    msg.setSource(52256U);
    msg.setSourceEntity(129U);
    msg.setDestination(50932U);
    msg.setDestinationEntity(116U);
    msg.camid = 249U;
    msg.x = 63238U;
    msg.y = 39612U;

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
    msg.setTimeStamp(0.378806469098);
    msg.setSource(51788U);
    msg.setSourceEntity(35U);
    msg.setDestination(61771U);
    msg.setDestinationEntity(71U);
    msg.camid = 249U;
    msg.x = 42231U;
    msg.y = 20900U;

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
    msg.setTimeStamp(0.506937739819);
    msg.setSource(64953U);
    msg.setSourceEntity(152U);
    msg.setDestination(26109U);
    msg.setDestinationEntity(80U);
    msg.camid = 171U;
    msg.x = 27499U;
    msg.y = 39289U;

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
    msg.setTimeStamp(0.765217655888);
    msg.setSource(18061U);
    msg.setSourceEntity(167U);
    msg.setDestination(33145U);
    msg.setDestinationEntity(70U);
    msg.camid = 81U;
    msg.x = 60681U;
    msg.y = 8565U;

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
    msg.setTimeStamp(0.14755691613);
    msg.setSource(4086U);
    msg.setSourceEntity(217U);
    msg.setDestination(25233U);
    msg.setDestinationEntity(98U);
    msg.camid = 238U;
    msg.x = 7570U;
    msg.y = 2223U;

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
    msg.setTimeStamp(0.721152559834);
    msg.setSource(9859U);
    msg.setSourceEntity(244U);
    msg.setDestination(44119U);
    msg.setDestinationEntity(153U);
    msg.camid = 70U;
    msg.x = 21438U;
    msg.y = 8157U;

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
    msg.setTimeStamp(0.748821901307);
    msg.setSource(32016U);
    msg.setSourceEntity(51U);
    msg.setDestination(9905U);
    msg.setDestinationEntity(141U);
    msg.tracking = 86U;
    msg.lat = 0.078479695916;
    msg.lon = 0.864016557829;
    msg.x = 0.451674501198;
    msg.y = 0.708298662447;
    msg.z = 0.557694871381;

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
    msg.setTimeStamp(0.949629389947);
    msg.setSource(18525U);
    msg.setSourceEntity(129U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(22U);
    msg.tracking = 247U;
    msg.lat = 0.454193898998;
    msg.lon = 0.103076628691;
    msg.x = 0.280343159219;
    msg.y = 0.777541073003;
    msg.z = 0.382295115767;

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
    msg.setTimeStamp(0.265550895344);
    msg.setSource(19942U);
    msg.setSourceEntity(194U);
    msg.setDestination(37732U);
    msg.setDestinationEntity(45U);
    msg.tracking = 230U;
    msg.lat = 0.545438247437;
    msg.lon = 0.571172494735;
    msg.x = 0.0499495382281;
    msg.y = 0.267928650249;
    msg.z = 0.558913201539;

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
    msg.setTimeStamp(0.8590182852);
    msg.setSource(39682U);
    msg.setSourceEntity(31U);
    msg.setDestination(51267U);
    msg.setDestinationEntity(197U);
    msg.target.assign("XEAZHAFPMFQUHVUJQQRCCXDGYIFLMBFPJHRVZTTKSKKCMHMTYBSGUNJHSADFIRDMCCPYYZWCOZIMIJJEHQTRPHYXFNOBHVLXNJWFJFBIDCQUIKUYCHESYCRTBMSOYMKKINUNLSDZQCOKOPWEJAWSLZNM");
    msg.lbearing = 0.534111934408;
    msg.lelevation = 0.785904341597;
    msg.bearing = 0.460147629715;
    msg.elevation = 0.980982750434;
    msg.phi = 0.241545091267;
    msg.theta = 0.869187667215;
    msg.psi = 0.702180151025;
    msg.accuracy = 0.745791223928;

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
    msg.setTimeStamp(0.665330373892);
    msg.setSource(37844U);
    msg.setSourceEntity(30U);
    msg.setDestination(50004U);
    msg.setDestinationEntity(151U);
    msg.target.assign("OQMYQEQSPUGKJALIVDWTFCRZSOYKXWNUFAADPCWXYULPLANUPC");
    msg.lbearing = 0.226857077537;
    msg.lelevation = 0.224770075914;
    msg.bearing = 0.982031829563;
    msg.elevation = 0.922518888855;
    msg.phi = 0.623949031758;
    msg.theta = 0.772499520727;
    msg.psi = 0.0762718177642;
    msg.accuracy = 0.35658269207;

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
    msg.setTimeStamp(0.161422638907);
    msg.setSource(58890U);
    msg.setSourceEntity(174U);
    msg.setDestination(65094U);
    msg.setDestinationEntity(64U);
    msg.target.assign("LABNUQIQCEPSNYIAJHVNRCPFXKAZTCYBLXBRTYSMRHOYLCQJCPQPSVBHOXKRRJMUKW");
    msg.lbearing = 0.105104746723;
    msg.lelevation = 0.927932991664;
    msg.bearing = 0.323785971355;
    msg.elevation = 0.548821243524;
    msg.phi = 0.701713458952;
    msg.theta = 0.794726009914;
    msg.psi = 0.912302172305;
    msg.accuracy = 0.188611247239;

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
    msg.setTimeStamp(0.566733348744);
    msg.setSource(7060U);
    msg.setSourceEntity(42U);
    msg.setDestination(57062U);
    msg.setDestinationEntity(87U);
    msg.target.assign("JWRDVBZRAKSZWUENPIMXQXJETUKKGFVPBSKOFYXSOODFVGJLKXPLNSFJBOLQYDEFTZPMCLMMNIWXEAHNQCFZYGXQDUNFBNXORRHECVLLUSSNGWCDDWIDHHBZOUAAMZHSITJVKICXPPOGVYOPEMGJAEANMZQZXLAFMRFBCKPMCAHLTJEGVZN");
    msg.x = 0.447781064996;
    msg.y = 0.82920202574;
    msg.z = 0.958109468866;
    msg.n = 0.421385589274;
    msg.e = 0.6163747045;
    msg.d = 0.0674245617659;
    msg.phi = 0.160491760576;
    msg.theta = 0.0715655728992;
    msg.psi = 0.161930485737;
    msg.accuracy = 0.529882184786;

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
    msg.setTimeStamp(0.584254975437);
    msg.setSource(8306U);
    msg.setSourceEntity(210U);
    msg.setDestination(4370U);
    msg.setDestinationEntity(101U);
    msg.target.assign("RFCPIVJCHEXGJZUVYBLMTYMWPFYIUET");
    msg.x = 0.739364069282;
    msg.y = 0.239644849684;
    msg.z = 0.765916662528;
    msg.n = 0.601919513031;
    msg.e = 0.30372046316;
    msg.d = 0.93284746539;
    msg.phi = 0.963995953703;
    msg.theta = 0.0538653153155;
    msg.psi = 0.227846612629;
    msg.accuracy = 0.864430109926;

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
    msg.setTimeStamp(0.834655710443);
    msg.setSource(61650U);
    msg.setSourceEntity(236U);
    msg.setDestination(23171U);
    msg.setDestinationEntity(59U);
    msg.target.assign("LNUECTLEGLKCXONRMOGUONITFYUWDCJBZWBFMSBXXDPFQAGYTKWUTGEQDJHSMIYPCAYZFBWOKOVDSIAZLTUEORSAHYTCIHNFJLRTAQKYRDZSKVIYJYEQMXASKWFNPSVBENKNTOWOHVENDYQCCMFRMUXXNSY");
    msg.x = 0.397350163906;
    msg.y = 0.320746954504;
    msg.z = 0.475680807438;
    msg.n = 0.747113102082;
    msg.e = 0.336663586417;
    msg.d = 0.253385833931;
    msg.phi = 0.0254917707405;
    msg.theta = 0.960578360601;
    msg.psi = 0.124686040296;
    msg.accuracy = 0.0972254983109;

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
    msg.setTimeStamp(0.666563083369);
    msg.setSource(26440U);
    msg.setSourceEntity(49U);
    msg.setDestination(4867U);
    msg.setDestinationEntity(38U);
    msg.target.assign("AFYSKQODTMUVKIXDATOYUYKIHCDTXUSBTWEKILCZLAGNQTQTJVBLDUMKZFZNNATQRTEEVQXXOYPESRKGBKAMUEIJRGASJPLXUDVSADGCKPHERLVISBGRTXEQLHGIIOFLNPBWMS");
    msg.lat = 0.484198756057;
    msg.lon = 0.341539769359;
    msg.z_units = 116U;
    msg.z = 0.988400302087;
    msg.accuracy = 0.647004543677;

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
    msg.setTimeStamp(0.373984516455);
    msg.setSource(11735U);
    msg.setSourceEntity(124U);
    msg.setDestination(35315U);
    msg.setDestinationEntity(167U);
    msg.target.assign("PLXPAREYWVWPYPLYFJOGGTAJQSULOBUUMBDHZIDOCXRNJKZVQEWNXSDOZCJDITROTAWXOOAUYLPCCFYHHZOJBVNXISPFHETMICNJRFLAKFSCGSRBAUXTAVKZGGKFYTRLSVWVUXISVMKBKTBRQTVLUGEVWEZQZJYISPTD");
    msg.lat = 0.794007966306;
    msg.lon = 0.317393154386;
    msg.z_units = 200U;
    msg.z = 0.93540764917;
    msg.accuracy = 0.468861376727;

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
    msg.setTimeStamp(0.145088654119);
    msg.setSource(7710U);
    msg.setSourceEntity(182U);
    msg.setDestination(14501U);
    msg.setDestinationEntity(151U);
    msg.target.assign("OVROQBOTPAJZASBCTEJQNJSKZMRDTYBBMNKHQZDWMNGNRFPTDVGCPWWACMWRGAKVIRSZLIKEAXVIXEHONSCUGOQSQZYXYGOYMUWEYSUFZVJCEJPDAOFHNREFRUKVDAAAZXYKSSHHHWVRNKXBFPXDGIAYDEVWIYLUPHKLCBOVUFTPBYJILVMQJCBELOEDJTTWYTSLUJPZWFUUQTGQPMJCGCIIKO");
    msg.lat = 0.463694541577;
    msg.lon = 0.701590265664;
    msg.z_units = 251U;
    msg.z = 0.142870041932;
    msg.accuracy = 0.741520962504;

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
    msg.setTimeStamp(0.332345381364);
    msg.setSource(46189U);
    msg.setSourceEntity(241U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(12U);
    msg.name.assign("NFXARYSPDRLXKIGQZHMKJYJXCMNGKQORTFTMJJJVXRDEWBURQJQZRFXIUMRJMWGKEADLLDFYEPLBYLTIVWCCCVDCZMPGJKXZOOADELGQUWQRONPMSEDKBOAPMSGPXTVLTVQZYCAEVUOPYJWYCIHFQDWEBHINSUTFVKCOAKWTMZTUFILPYJHWCVIHFBHZZQP");
    msg.lat = 0.333855404404;
    msg.lon = 0.156672050376;
    msg.z = 0.210219924916;
    msg.z_units = 190U;

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
    msg.setTimeStamp(0.285171217982);
    msg.setSource(24153U);
    msg.setSourceEntity(53U);
    msg.setDestination(54752U);
    msg.setDestinationEntity(200U);
    msg.name.assign("ZXMUDUIMEEVQYEGPCTOOWQUAZGBSDTIWBDQVXWNTMQGVXZNGLTFXYUVWVZICAJVRXYTADTAESPWNUITHCPMDAFDNZEALCDTIRRZJWHTKOSFCERCOLKNINULAHGUHFTBEYLSPCBPLZZKNJHGYBWSHRSRBGOIKABJZKXIHLRDXNQJQQWSRPOMQPJIXYKZMSVFPXFMWDAYCKCRDSXYFSIGMYHNNEWFPVJUQULKMBEU");
    msg.lat = 0.231239062648;
    msg.lon = 0.983865203324;
    msg.z = 0.572196803814;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.00055606356538);
    msg.setSource(38722U);
    msg.setSourceEntity(197U);
    msg.setDestination(7999U);
    msg.setDestinationEntity(74U);
    msg.name.assign("AGRPJEDYCBRDWOOAKFQLXHUKIBIJFNFSPXINMKGLRGEAJHWDWPLRCOZEMYVMPSZOUVEMCNBKPDQAPHBITCGYIMKCDLMMTXUUOIPCKKUNXQPALDGJRTJZUHUTXNVJV");
    msg.lat = 0.0861142018952;
    msg.lon = 0.300351314264;
    msg.z = 0.493769035088;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.213357738261);
    msg.setSource(21139U);
    msg.setSourceEntity(78U);
    msg.setDestination(23658U);
    msg.setDestinationEntity(196U);
    msg.op = 97U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OZHVWFDRXITMRUQTDJNPBQABGWFBADXHPRGBSNWSWCSWUHKFAYOUEFGKTRGLEYEPMKTZGOLPJEAZOVWYRMWRXIXZGBUASTNQBZCYK");
    tmp_msg_0.lat = 0.303829182719;
    tmp_msg_0.lon = 0.926528069461;
    tmp_msg_0.z = 0.780421125274;
    tmp_msg_0.z_units = 134U;
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
    msg.setTimeStamp(0.763636578684);
    msg.setSource(45296U);
    msg.setSourceEntity(218U);
    msg.setDestination(14012U);
    msg.setDestinationEntity(170U);
    msg.op = 197U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OYOIDSOYKLTRQUNJZKVHPRBZCQVWNWXUKVZJXLEDUCCPQ");
    tmp_msg_0.lat = 0.774996522365;
    tmp_msg_0.lon = 0.0689249103023;
    tmp_msg_0.z = 0.959922800956;
    tmp_msg_0.z_units = 107U;
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
    msg.setTimeStamp(0.491440679033);
    msg.setSource(7039U);
    msg.setSourceEntity(158U);
    msg.setDestination(51829U);
    msg.setDestinationEntity(130U);
    msg.op = 223U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IGBLAUIXYXURVXMCPCXMTCHCEWTLSYYKFQJVHSBNJQEHFSONDFQXYBNTZUIIIBTRFBRNPVMLUXJPFXSVBICEAGIDUNRSKELZ");
    tmp_msg_0.lat = 0.804226137781;
    tmp_msg_0.lon = 0.0508985487935;
    tmp_msg_0.z = 0.455443020112;
    tmp_msg_0.z_units = 78U;
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
    msg.setTimeStamp(0.907196679952);
    msg.setSource(42267U);
    msg.setSourceEntity(223U);
    msg.setDestination(3227U);
    msg.setDestinationEntity(40U);
    msg.value = 0.796367942501;
    msg.type = 109U;

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
    msg.setTimeStamp(0.927415310266);
    msg.setSource(6614U);
    msg.setSourceEntity(65U);
    msg.setDestination(28794U);
    msg.setDestinationEntity(30U);
    msg.value = 0.550838442329;
    msg.type = 228U;

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
    msg.setTimeStamp(0.658472251954);
    msg.setSource(48382U);
    msg.setSourceEntity(167U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(146U);
    msg.value = 0.603827908748;
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
    msg.setTimeStamp(0.248315381299);
    msg.setSource(52627U);
    msg.setSourceEntity(131U);
    msg.setDestination(47996U);
    msg.setDestinationEntity(66U);
    msg.value = 0.0870447223418;

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
    msg.setTimeStamp(0.623423645115);
    msg.setSource(37964U);
    msg.setSourceEntity(97U);
    msg.setDestination(62283U);
    msg.setDestinationEntity(170U);
    msg.value = 0.143188959816;

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
    msg.setTimeStamp(0.481423803295);
    msg.setSource(50997U);
    msg.setSourceEntity(28U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(34U);
    msg.value = 0.265931410391;

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
    msg.setTimeStamp(0.925889113006);
    msg.setSource(25465U);
    msg.setSourceEntity(184U);
    msg.setDestination(44994U);
    msg.setDestinationEntity(183U);
    msg.timestamp_last_service = 0.694247505239;
    msg.time_next_service = 0.0885166782606;
    msg.time_motor_next_service = 0.198020963506;
    msg.time_idle_ground = 0.113890154551;
    msg.time_idle_air = 0.204497273396;
    msg.time_idle_water = 0.243779410372;
    msg.time_idle_underwater = 0.0873608859144;
    msg.time_idle_unknown = 0.208747187864;
    msg.time_motor_ground = 0.280296725878;
    msg.time_motor_air = 0.916104563999;
    msg.time_motor_water = 0.913106390275;
    msg.time_motor_underwater = 0.722240086967;
    msg.time_motor_unknown = 0.574178160184;
    msg.rpm_min = 10858;
    msg.rpm_max = -31647;
    msg.depth_max = 0.872892652956;

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
    msg.setTimeStamp(0.893647496586);
    msg.setSource(28044U);
    msg.setSourceEntity(8U);
    msg.setDestination(50479U);
    msg.setDestinationEntity(95U);
    msg.timestamp_last_service = 0.599540483873;
    msg.time_next_service = 0.168377324527;
    msg.time_motor_next_service = 0.569747395275;
    msg.time_idle_ground = 0.409737067849;
    msg.time_idle_air = 0.449676440135;
    msg.time_idle_water = 0.587283470933;
    msg.time_idle_underwater = 0.946156452217;
    msg.time_idle_unknown = 0.234916093526;
    msg.time_motor_ground = 0.545781787831;
    msg.time_motor_air = 0.823143405442;
    msg.time_motor_water = 0.469994692591;
    msg.time_motor_underwater = 0.0989020797593;
    msg.time_motor_unknown = 0.870339567198;
    msg.rpm_min = -10681;
    msg.rpm_max = -27325;
    msg.depth_max = 0.596699084534;

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
    msg.setTimeStamp(0.185998769021);
    msg.setSource(48324U);
    msg.setSourceEntity(125U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(80U);
    msg.timestamp_last_service = 0.102594708829;
    msg.time_next_service = 0.244516875587;
    msg.time_motor_next_service = 0.651691658904;
    msg.time_idle_ground = 0.819649219675;
    msg.time_idle_air = 0.96204834559;
    msg.time_idle_water = 0.791120471071;
    msg.time_idle_underwater = 0.550809909383;
    msg.time_idle_unknown = 0.245814413036;
    msg.time_motor_ground = 0.349630700081;
    msg.time_motor_air = 0.602893099805;
    msg.time_motor_water = 0.649817513426;
    msg.time_motor_underwater = 0.573478577526;
    msg.time_motor_unknown = 0.311684440913;
    msg.rpm_min = -5591;
    msg.rpm_max = -26276;
    msg.depth_max = 0.664562669413;

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
    msg.setTimeStamp(0.197719300157);
    msg.setSource(65431U);
    msg.setSourceEntity(228U);
    msg.setDestination(12634U);
    msg.setDestinationEntity(118U);
    msg.severity = 254U;
    msg.text.assign("KLBFZQTDQVLHHBWHFBXQYLYUUJICUUYJZXVGDBJFDGXJWOVFPDXIWWUYUKCTQDXQMSNTKPRRSIDCPZGGSGOYWSNRGRMARTDFLZYONUAVQQFIPCGZBMNSEMXHZHMIKEDVHVZJTKMBEEHLMORHDNPSHLUFPXCLEUIYSTWWCTORSMTLYTVVNPCCAAF");

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
    msg.setTimeStamp(0.435828379345);
    msg.setSource(47494U);
    msg.setSourceEntity(247U);
    msg.setDestination(810U);
    msg.setDestinationEntity(92U);
    msg.severity = 206U;
    msg.text.assign("SWIGVMQRXKBCYEXAOKYINJGFIUNVAEIIBWCYOOOSACQLVHYEAYHHVBZQLFRXRPJSQUEMIZMSPLHVFBICZOMJUHLEBQLZVLHUHZTKQDNIPCGGPRPPGMNRBAVGKKDTLVRHJNYJNFDRCEBTFNZRYJWZHCBSJMQLNBDSMYCCOOKAAUYXWROBQEJGEJUOIDRLTZWFDTFEAFUPTHAGCWOXFTXM");

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
    msg.setTimeStamp(0.907082827939);
    msg.setSource(22923U);
    msg.setSourceEntity(246U);
    msg.setDestination(62597U);
    msg.setDestinationEntity(124U);
    msg.severity = 46U;
    msg.text.assign("BFHNCKSMFWXQRFTJQTPLATGEWGQRZWLUJOBWNRECUAXOGHCTLSMNUEUUDPEWEFJQJBHYHJIVTVEVMSVSPNVYKMRAHLZHCFXHYPVCLQBPHDAUCIAFTNUQQXVFIKDRSSTJHZGUITXOXALNKRNASGXTXKDIIODOBAQDPOFSRRDBJOLZYCMAMEINYKFDRPSXYAMWZQKXIKKZYJJL");

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
    msg.setTimeStamp(0.845230970701);
    msg.setSource(49235U);
    msg.setSourceEntity(239U);
    msg.setDestination(39132U);
    msg.setDestinationEntity(93U);
    msg.channel = 122;
    msg.value = -690135018;
    msg.gain = 248U;

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
    msg.setTimeStamp(0.103954173549);
    msg.setSource(26662U);
    msg.setSourceEntity(19U);
    msg.setDestination(51127U);
    msg.setDestinationEntity(155U);
    msg.channel = 10;
    msg.value = 1672556210;
    msg.gain = 198U;

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
    msg.setTimeStamp(0.618874519586);
    msg.setSource(21449U);
    msg.setSourceEntity(210U);
    msg.setDestination(64001U);
    msg.setDestinationEntity(92U);
    msg.channel = -37;
    msg.value = -1601790355;
    msg.gain = 150U;

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
    msg.setTimeStamp(0.378266992763);
    msg.setSource(28242U);
    msg.setSourceEntity(175U);
    msg.setDestination(51742U);
    msg.setDestinationEntity(162U);
    msg.ch01 = 0.231902954844;
    msg.ch02 = 0.670500465334;
    msg.ch03 = 0.368313859742;
    msg.ch04 = 0.775652884847;
    msg.ch05 = 0.222788895613;
    msg.ch06 = 0.712500904633;
    msg.ch07 = 0.481946724638;
    msg.ch08 = 0.156446221628;
    msg.ch09 = 0.494193465633;
    msg.ch10 = 0.325932912641;
    msg.ch11 = 0.044053499743;
    msg.ch12 = 0.598337403362;
    msg.ch13 = 0.615642224334;
    msg.ch14 = 0.231641498701;
    msg.ch15 = 0.752264332621;
    msg.ch16 = 0.730820637117;

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
    msg.setTimeStamp(0.164486243581);
    msg.setSource(23174U);
    msg.setSourceEntity(158U);
    msg.setDestination(22820U);
    msg.setDestinationEntity(169U);
    msg.ch01 = 0.723821849334;
    msg.ch02 = 0.183512389645;
    msg.ch03 = 0.921943369605;
    msg.ch04 = 0.976711749024;
    msg.ch05 = 0.40925021645;
    msg.ch06 = 0.129610376409;
    msg.ch07 = 0.27243061959;
    msg.ch08 = 0.0141783707495;
    msg.ch09 = 0.488733835967;
    msg.ch10 = 0.735048623958;
    msg.ch11 = 0.903168209233;
    msg.ch12 = 0.848067341042;
    msg.ch13 = 0.435020232797;
    msg.ch14 = 0.648790342754;
    msg.ch15 = 0.618671986599;
    msg.ch16 = 0.609669009182;

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
    msg.setTimeStamp(0.596910565842);
    msg.setSource(8239U);
    msg.setSourceEntity(15U);
    msg.setDestination(13934U);
    msg.setDestinationEntity(86U);
    msg.ch01 = 0.842544199483;
    msg.ch02 = 0.606896355763;
    msg.ch03 = 0.760881215212;
    msg.ch04 = 0.537571483765;
    msg.ch05 = 0.742619143002;
    msg.ch06 = 0.465562717051;
    msg.ch07 = 0.940805978745;
    msg.ch08 = 0.0222580317891;
    msg.ch09 = 0.854862535429;
    msg.ch10 = 0.212541799973;
    msg.ch11 = 0.231793599476;
    msg.ch12 = 0.617760312368;
    msg.ch13 = 0.042316091333;
    msg.ch14 = 0.86989086222;
    msg.ch15 = 0.497387643461;
    msg.ch16 = 0.574290547821;

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
    msg.setTimeStamp(0.279137655259);
    msg.setSource(18200U);
    msg.setSourceEntity(229U);
    msg.setDestination(52320U);
    msg.setDestinationEntity(217U);
    msg.time = 0.177207233774;
    msg.ang = 0.154510672784;

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
    msg.setTimeStamp(0.848532280762);
    msg.setSource(60588U);
    msg.setSourceEntity(140U);
    msg.setDestination(53611U);
    msg.setDestinationEntity(242U);
    msg.time = 0.0704889538309;
    msg.ang = 0.707289623539;

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
    msg.setTimeStamp(0.700560125665);
    msg.setSource(48432U);
    msg.setSourceEntity(58U);
    msg.setDestination(29209U);
    msg.setDestinationEntity(18U);
    msg.time = 0.108010321121;
    msg.ang = 0.433143982038;

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
    msg.setTimeStamp(0.137655087202);
    msg.setSource(25813U);
    msg.setSourceEntity(62U);
    msg.setDestination(41242U);
    msg.setDestinationEntity(178U);
    msg.value = 0.41480998626;

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
    msg.setTimeStamp(0.166235323545);
    msg.setSource(28799U);
    msg.setSourceEntity(171U);
    msg.setDestination(34220U);
    msg.setDestinationEntity(2U);
    msg.value = 0.202298804714;

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
    msg.setTimeStamp(0.445555899668);
    msg.setSource(29641U);
    msg.setSourceEntity(117U);
    msg.setDestination(45338U);
    msg.setDestinationEntity(47U);
    msg.value = 0.805250921879;

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
    msg.setTimeStamp(0.187763678802);
    msg.setSource(59288U);
    msg.setSourceEntity(198U);
    msg.setDestination(53514U);
    msg.setDestinationEntity(145U);
    msg.value = 0.426841263518;

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
    msg.setTimeStamp(0.95726040166);
    msg.setSource(2228U);
    msg.setSourceEntity(42U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(197U);
    msg.value = 0.425868559605;

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
    msg.setTimeStamp(0.838345812295);
    msg.setSource(6046U);
    msg.setSourceEntity(201U);
    msg.setDestination(10552U);
    msg.setDestinationEntity(127U);
    msg.value = 0.503919735734;

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
    msg.setTimeStamp(0.200022239473);
    msg.setSource(17791U);
    msg.setSourceEntity(203U);
    msg.setDestination(32008U);
    msg.setDestinationEntity(16U);
    msg.value = 0.498349141557;

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
    msg.setTimeStamp(0.660709205481);
    msg.setSource(4936U);
    msg.setSourceEntity(235U);
    msg.setDestination(49908U);
    msg.setDestinationEntity(200U);
    msg.value = 0.0993275253138;

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
    msg.setTimeStamp(0.889531826868);
    msg.setSource(54692U);
    msg.setSourceEntity(78U);
    msg.setDestination(24490U);
    msg.setDestinationEntity(134U);
    msg.value = 0.0511793665075;

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
    msg.setTimeStamp(0.836846185771);
    msg.setSource(51399U);
    msg.setSourceEntity(88U);
    msg.setDestination(24543U);
    msg.setDestinationEntity(146U);
    msg.l2 = -38;
    msg.l3 = 126;
    msg.iridium = 18;
    msg.modem = 36;
    msg.pumps = 108;
    msg.vhf = 46;

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
    msg.setTimeStamp(0.50408962873);
    msg.setSource(62066U);
    msg.setSourceEntity(4U);
    msg.setDestination(57538U);
    msg.setDestinationEntity(14U);
    msg.l2 = 125;
    msg.l3 = 42;
    msg.iridium = 35;
    msg.modem = 29;
    msg.pumps = 49;
    msg.vhf = -21;

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
    msg.setTimeStamp(0.968663203064);
    msg.setSource(331U);
    msg.setSourceEntity(131U);
    msg.setDestination(48721U);
    msg.setDestinationEntity(58U);
    msg.l2 = 96;
    msg.l3 = 83;
    msg.iridium = -55;
    msg.modem = -4;
    msg.pumps = 85;
    msg.vhf = -63;

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
    msg.setTimeStamp(0.845769491322);
    msg.setSource(52986U);
    msg.setSourceEntity(193U);
    msg.setDestination(28795U);
    msg.setDestinationEntity(216U);
    msg.angle = 0.138342295348;
    msg.reference.assign("MDEGJFVXULGDHYKOEMSOQKPDWSSIDUHMTOBOYKIGAJGCNTXYOLPNXIBHCYLLCIKPJJAXUFGZKYYZHIWHDDMAOGYSECRQPWARZJQFOVVUALRMKKSLRZEFHFQVGCTWPWXAKLFFLEAAMUWBPTBBUSDVZNWTZTNPATBJVHNMZIYUREBMOTLWRKPSQHBABXCJKIHYENZVBGLRNQQSFVRJEDFFXMOIHQCJRTMRQGDXSGCCNZPETYNCIN");
    msg.speed = 0.664996810528;

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
    msg.setTimeStamp(0.596862988661);
    msg.setSource(6371U);
    msg.setSourceEntity(189U);
    msg.setDestination(23075U);
    msg.setDestinationEntity(40U);
    msg.angle = 0.39203419711;
    msg.reference.assign("SKNLUTUGIQEDAKGBEASQXKSYINTQDDYRDEYQFZRIZPFIIFILYBJUFXOGGPOHHOPOSUJDTOJKFFOBDXRTTCGRUUXESJGQRAVAHQTUCPMLNNAWECLNKPZMUXASNXLLJVCHXKWWZFWZYMUSNQGVCYDEJVPWPYOVWMCVFVKBTQQGYRRCKHOZLRAJMVYLHENXIAXMMIRTZWSB");
    msg.speed = 0.376978303597;

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
    msg.setTimeStamp(0.510620522352);
    msg.setSource(23870U);
    msg.setSourceEntity(71U);
    msg.setDestination(15894U);
    msg.setDestinationEntity(34U);
    msg.angle = 0.315530447913;
    msg.reference.assign("GZRFNYELXFLZGUCDOCVMWGIFWOHBKWYYVASEMKIOQMCPSKXDRNVSFMAWUEEBWOVJJNXQFBYFTKRBHQASKKEHPRQELVLWMHAXJRCXQZZGFOOXYPNNZZILITQZBDSYRDANBPIKVCAXMTLIJVGDFDPEUDRT");
    msg.speed = 0.534211456221;

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
    msg.setTimeStamp(0.645456153046);
    msg.setSource(19931U);
    msg.setSourceEntity(103U);
    msg.setDestination(54522U);
    msg.setDestinationEntity(72U);
    msg.angle = 0.307973822539;
    msg.speed = 0.20592818499;

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
    msg.setTimeStamp(0.0335691738475);
    msg.setSource(8524U);
    msg.setSourceEntity(33U);
    msg.setDestination(59314U);
    msg.setDestinationEntity(125U);
    msg.angle = 0.292899125263;
    msg.speed = 0.584810714744;

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
    msg.setTimeStamp(0.431448498655);
    msg.setSource(40632U);
    msg.setSourceEntity(75U);
    msg.setDestination(22619U);
    msg.setDestinationEntity(181U);
    msg.angle = 0.880461854692;
    msg.speed = 0.951447249885;

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
    msg.setTimeStamp(0.735696227627);
    msg.setSource(4771U);
    msg.setSourceEntity(197U);
    msg.setDestination(36637U);
    msg.setDestinationEntity(95U);
    msg.dir = 0.567233693094;
    msg.speed = 0.786921422962;

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
    msg.setTimeStamp(0.205271098255);
    msg.setSource(11447U);
    msg.setSourceEntity(56U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(48U);
    msg.dir = 0.0294669276214;
    msg.speed = 0.816588941583;

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
    msg.setTimeStamp(0.9100049433);
    msg.setSource(2593U);
    msg.setSourceEntity(181U);
    msg.setDestination(61612U);
    msg.setDestinationEntity(104U);
    msg.dir = 0.794426717801;
    msg.speed = 0.481443026122;

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
    msg.setTimeStamp(0.770091236023);
    msg.setSource(64805U);
    msg.setSourceEntity(58U);
    msg.setDestination(31169U);
    msg.setDestinationEntity(129U);
    msg.x = 0.876891563077;
    msg.y = 0.126818380749;
    msg.z1 = 0.608232058681;
    msg.z2 = 0.71380417073;

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
    msg.setTimeStamp(0.398018350063);
    msg.setSource(26177U);
    msg.setSourceEntity(252U);
    msg.setDestination(15087U);
    msg.setDestinationEntity(202U);
    msg.x = 0.369890316735;
    msg.y = 0.349325635289;
    msg.z1 = 0.174307712089;
    msg.z2 = 0.32681879658;

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
    msg.setTimeStamp(0.613025000499);
    msg.setSource(2681U);
    msg.setSourceEntity(17U);
    msg.setDestination(7188U);
    msg.setDestinationEntity(209U);
    msg.x = 0.433480713672;
    msg.y = 0.22676193783;
    msg.z1 = 0.285751771632;
    msg.z2 = 0.547512982149;

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
    msg.setTimeStamp(0.842062079838);
    msg.setSource(31617U);
    msg.setSourceEntity(32U);
    msg.setDestination(62146U);
    msg.setDestinationEntity(154U);
    msg.mmsi = 0.565954608409;
    msg.lat = 0.161811538091;
    msg.lon = 0.194012899386;
    msg.x = 0.721219534417;
    msg.y = 0.512046908845;
    msg.speed = 0.998178290082;
    msg.course = 0.40760357533;
    msg.dist = 0.346642730199;
    msg.length = 0.385649452785;
    msg.width = 0.612176108381;
    msg.o_vect = 0.0949002459956;

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
    msg.setTimeStamp(0.494303656232);
    msg.setSource(54476U);
    msg.setSourceEntity(41U);
    msg.setDestination(26723U);
    msg.setDestinationEntity(58U);
    msg.mmsi = 0.276127493242;
    msg.lat = 0.0365447527594;
    msg.lon = 0.760654968767;
    msg.x = 0.871779076886;
    msg.y = 0.346019062403;
    msg.speed = 0.916509418525;
    msg.course = 0.743790650356;
    msg.dist = 0.212555457654;
    msg.length = 0.527825480565;
    msg.width = 0.318518958148;
    msg.o_vect = 0.944898030286;

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
    msg.setTimeStamp(0.104969452992);
    msg.setSource(28467U);
    msg.setSourceEntity(196U);
    msg.setDestination(41007U);
    msg.setDestinationEntity(84U);
    msg.mmsi = 0.413425799276;
    msg.lat = 0.454336633466;
    msg.lon = 0.722481112469;
    msg.x = 0.221282700214;
    msg.y = 0.946097413398;
    msg.speed = 0.249052139474;
    msg.course = 0.501653877267;
    msg.dist = 0.143702714996;
    msg.length = 0.480790381499;
    msg.width = 0.266044883297;
    msg.o_vect = 0.285184207523;

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
    msg.setTimeStamp(0.818251682754);
    msg.setSource(407U);
    msg.setSourceEntity(132U);
    msg.setDestination(17394U);
    msg.setDestinationEntity(188U);
    msg.locations.assign("UROQYIENCGWPDBWLVNGYXQZMPFRGSUJLFMLWSHUOEEKNWUYFQAHNIFFCKAEDWKZUNECGAJTDRRCKZVSKMRXGZIHLINRAKZLIOBRTFERHSATTQSKTMXOLOJDBJPJOZDLQMWFPECFSGXPY");

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
    msg.setTimeStamp(0.997999866695);
    msg.setSource(3774U);
    msg.setSourceEntity(153U);
    msg.setDestination(22798U);
    msg.setDestinationEntity(32U);
    msg.locations.assign("VSPJIMLQCYIBPOAVGRQBRJEDPOZXQEXSHUWVICWAGSQDKBNSREDZOLQNJUWQNZHMJLXFPLSWKTANLXRKRFGWDLRVDZOTELNXGLFDYJHXOYEN");

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
    msg.setTimeStamp(0.979554588201);
    msg.setSource(43759U);
    msg.setSourceEntity(188U);
    msg.setDestination(23839U);
    msg.setDestinationEntity(151U);
    msg.locations.assign("COKMUHFGPEBCZXLFJPGWIIIHSHEHHFMZTFLQKWMUAFICIKJQAPNBRLDQULOGQPWCPATTKRVGNTAQALWVZXYBOFZNLSBRDYAEKSXZRPTRMAODKRYOMVDEORGOSIBBVHMBJUDAUNZVNBWYVYVEOQWAYCPGLQIYTKMXESSMKGJDEQSFRZCVIKSIABCVJDXWIUVWPDLG");

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
    msg.setTimeStamp(0.260218009005);
    msg.setSource(55718U);
    msg.setSourceEntity(88U);
    msg.setDestination(3591U);
    msg.setDestinationEntity(95U);
    msg.value = 0.829963644625;

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
    msg.setTimeStamp(0.552773181261);
    msg.setSource(63535U);
    msg.setSourceEntity(140U);
    msg.setDestination(34343U);
    msg.setDestinationEntity(100U);
    msg.value = 0.375506552004;

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
    msg.setTimeStamp(0.0154339696768);
    msg.setSource(2552U);
    msg.setSourceEntity(173U);
    msg.setDestination(18329U);
    msg.setDestinationEntity(224U);
    msg.value = 0.88620425499;

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
    msg.setTimeStamp(0.435425741083);
    msg.setSource(46879U);
    msg.setSourceEntity(38U);
    msg.setDestination(43415U);
    msg.setDestinationEntity(6U);
    msg.beam1 = 0.0548773062338;
    msg.beam2 = 0.697798080728;
    msg.beam3 = 0.385477997489;
    msg.beam4 = 0.0538236347409;

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
    msg.setTimeStamp(0.796149149468);
    msg.setSource(18211U);
    msg.setSourceEntity(121U);
    msg.setDestination(4975U);
    msg.setDestinationEntity(8U);
    msg.beam1 = 0.183979055327;
    msg.beam2 = 0.500834998335;
    msg.beam3 = 0.930475444644;
    msg.beam4 = 0.828076584803;

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
    msg.setTimeStamp(0.0755533071594);
    msg.setSource(7932U);
    msg.setSourceEntity(229U);
    msg.setDestination(52461U);
    msg.setDestinationEntity(58U);
    msg.beam1 = 0.483758177532;
    msg.beam2 = 0.725174560086;
    msg.beam3 = 0.293525477279;
    msg.beam4 = 0.586981322047;

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
    msg.setTimeStamp(0.634115259875);
    msg.setSource(3398U);
    msg.setSourceEntity(77U);
    msg.setDestination(58987U);
    msg.setDestinationEntity(29U);
    msg.beam1 = 169U;
    msg.beam2 = 2U;
    msg.beam3 = 237U;
    msg.beam4 = 195U;

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
    msg.setTimeStamp(0.419704073573);
    msg.setSource(57245U);
    msg.setSourceEntity(34U);
    msg.setDestination(4835U);
    msg.setDestinationEntity(9U);
    msg.beam1 = 150U;
    msg.beam2 = 226U;
    msg.beam3 = 52U;
    msg.beam4 = 109U;

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
    msg.setTimeStamp(0.751781017614);
    msg.setSource(11078U);
    msg.setSourceEntity(76U);
    msg.setDestination(21426U);
    msg.setDestinationEntity(78U);
    msg.beam1 = 142U;
    msg.beam2 = 202U;
    msg.beam3 = 9U;
    msg.beam4 = 93U;

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
    msg.setTimeStamp(0.106312109272);
    msg.setSource(36427U);
    msg.setSourceEntity(185U);
    msg.setDestination(14337U);
    msg.setDestinationEntity(82U);
    msg.pos = 0.245525191219;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.726683754891;
    tmp_msg_0.amp = 0.846135522568;
    tmp_msg_0.cor = 2U;
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
    msg.setTimeStamp(0.542820416431);
    msg.setSource(40285U);
    msg.setSourceEntity(5U);
    msg.setDestination(22668U);
    msg.setDestinationEntity(249U);
    msg.pos = 0.597852260403;

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
    msg.setTimeStamp(0.232114927552);
    msg.setSource(62056U);
    msg.setSourceEntity(28U);
    msg.setDestination(55256U);
    msg.setDestinationEntity(107U);
    msg.pos = 0.240479018941;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.0850124993227;
    tmp_msg_0.amp = 0.487483545726;
    tmp_msg_0.cor = 197U;
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
    msg.setTimeStamp(0.880414575117);
    msg.setSource(50291U);
    msg.setSourceEntity(182U);
    msg.setDestination(59811U);
    msg.setDestinationEntity(7U);
    msg.beams = 210U;
    msg.cells = 172U;
    msg.coord_sys = 53U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.308868921119;
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
    msg.setTimeStamp(0.401712680108);
    msg.setSource(23239U);
    msg.setSourceEntity(166U);
    msg.setDestination(12091U);
    msg.setDestinationEntity(108U);
    msg.beams = 181U;
    msg.cells = 103U;
    msg.coord_sys = 10U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.523840081056;
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
    msg.setTimeStamp(0.989543229533);
    msg.setSource(1822U);
    msg.setSourceEntity(35U);
    msg.setDestination(17440U);
    msg.setDestinationEntity(63U);
    msg.beams = 209U;
    msg.cells = 38U;
    msg.coord_sys = 108U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.813493104001;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.807360997391;
    tmp_tmp_msg_0_0.amp = 0.165967694227;
    tmp_tmp_msg_0_0.cor = 151U;
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
    msg.setTimeStamp(0.356735149208);
    msg.setSource(44689U);
    msg.setSourceEntity(247U);
    msg.setDestination(59765U);
    msg.setDestinationEntity(140U);
    msg.vel = 0.233993965484;
    msg.amp = 0.239475195142;
    msg.cor = 67U;

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
    msg.setTimeStamp(0.63645953296);
    msg.setSource(39787U);
    msg.setSourceEntity(114U);
    msg.setDestination(57659U);
    msg.setDestinationEntity(17U);
    msg.vel = 0.649392822354;
    msg.amp = 0.562189609718;
    msg.cor = 213U;

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
    msg.setTimeStamp(0.522840207834);
    msg.setSource(5896U);
    msg.setSourceEntity(50U);
    msg.setDestination(27077U);
    msg.setDestinationEntity(147U);
    msg.vel = 0.181245713379;
    msg.amp = 0.92672334005;
    msg.cor = 89U;

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
    msg.setTimeStamp(0.850528505375);
    msg.setSource(63206U);
    msg.setSourceEntity(142U);
    msg.setDestination(12196U);
    msg.setDestinationEntity(34U);
    msg.serial_no = 3996694467U;
    msg.unix_timestamp = 4191465232U;
    msg.millis = 52280U;
    msg.trans_protocol = 113U;
    msg.trans_id = 612653207U;
    msg.trans_data = 26976U;
    msg.snr = 27U;
    msg.trans_freq = 130U;
    msg.recv_mem_addr = 38138U;
    msg.lat = 0.384233402923;
    msg.lon = 0.753450008337;

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
    msg.setTimeStamp(0.683623079519);
    msg.setSource(48173U);
    msg.setSourceEntity(98U);
    msg.setDestination(47443U);
    msg.setDestinationEntity(147U);
    msg.serial_no = 4071265527U;
    msg.unix_timestamp = 2184319903U;
    msg.millis = 63888U;
    msg.trans_protocol = 43U;
    msg.trans_id = 2216712483U;
    msg.trans_data = 62622U;
    msg.snr = 15U;
    msg.trans_freq = 232U;
    msg.recv_mem_addr = 7258U;
    msg.lat = 0.293229172945;
    msg.lon = 0.556990942079;

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
    msg.setTimeStamp(0.109403589831);
    msg.setSource(23284U);
    msg.setSourceEntity(240U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(183U);
    msg.serial_no = 17749856U;
    msg.unix_timestamp = 1336163782U;
    msg.millis = 53861U;
    msg.trans_protocol = 50U;
    msg.trans_id = 3313136131U;
    msg.trans_data = 5075U;
    msg.snr = 231U;
    msg.trans_freq = 52U;
    msg.recv_mem_addr = 18614U;
    msg.lat = 0.546423742781;
    msg.lon = 0.421231748654;

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
    msg.setTimeStamp(0.727809010693);
    msg.setSource(44486U);
    msg.setSourceEntity(38U);
    msg.setDestination(14131U);
    msg.setDestinationEntity(221U);
    msg.serial_no = 3571839479U;
    msg.unix_timestamp = 4245522476U;
    msg.temperature = 0.961501111208;
    msg.avg_noise_level = 38U;
    msg.peak_noise_level = 246U;
    msg.recv_listen_freq = 123U;
    msg.recv_mem_addr = 29547U;

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
    msg.setTimeStamp(0.0182078262989);
    msg.setSource(2797U);
    msg.setSourceEntity(179U);
    msg.setDestination(5725U);
    msg.setDestinationEntity(149U);
    msg.serial_no = 943147403U;
    msg.unix_timestamp = 967773239U;
    msg.temperature = 0.170214033731;
    msg.avg_noise_level = 94U;
    msg.peak_noise_level = 77U;
    msg.recv_listen_freq = 102U;
    msg.recv_mem_addr = 36143U;

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
    msg.setTimeStamp(0.600298616625);
    msg.setSource(47975U);
    msg.setSourceEntity(71U);
    msg.setDestination(56469U);
    msg.setDestinationEntity(220U);
    msg.serial_no = 1784685221U;
    msg.unix_timestamp = 2457772902U;
    msg.temperature = 0.931992462632;
    msg.avg_noise_level = 56U;
    msg.peak_noise_level = 138U;
    msg.recv_listen_freq = 26U;
    msg.recv_mem_addr = 62125U;

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
    msg.setTimeStamp(0.537748461285);
    msg.setSource(51707U);
    msg.setSourceEntity(144U);
    msg.setDestination(31822U);
    msg.setDestinationEntity(200U);
    msg.frequency = 3786504582U;
    msg.info.assign("VWHIDKDPMHRVDNBIWFVFDNRHIVORSYLFQKTPFMLGIFLKTYBJZAILNXCMOTHNHIXPVFTBOJNTWCRHYUZHOCZKIETXWZKJBMZTQGCGAZM");

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
    msg.setTimeStamp(0.421936652647);
    msg.setSource(57523U);
    msg.setSourceEntity(167U);
    msg.setDestination(52156U);
    msg.setDestinationEntity(69U);
    msg.frequency = 957962018U;
    msg.info.assign("KYQRHMTQPLACHYDXDAUKZEFOIZOEUSJXIQZLOBXSKJNBPHOFJQGMUJDBDDFYAZUERKWJUJGIVNOXIFRBZQGRPYSQRCDGSKKTLMGJOFFKVWIEOFAIQLGTCM");

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
    msg.setTimeStamp(0.84959325016);
    msg.setSource(1331U);
    msg.setSourceEntity(57U);
    msg.setDestination(32750U);
    msg.setDestinationEntity(196U);
    msg.frequency = 3604386269U;
    msg.info.assign("EAUSJABYGZKMSQNZVJAFGCWUXPLAGAZKKSKUIATOAUNWLCJJXKTPFZQNOWFEXEYLV");

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
    msg.setTimeStamp(0.1659354052);
    msg.setSource(55452U);
    msg.setSourceEntity(244U);
    msg.setDestination(32038U);
    msg.setDestinationEntity(162U);
    msg.adcp = -97;
    msg.adcp_dur = 3088743894U;
    msg.adcp_fr = 2928712993U;
    msg.ctd = -1;
    msg.ctd_dur = 3198774051U;
    msg.ctd_fr = 105092039U;
    msg.opt = 44;
    msg.opt_dur = 1402331767U;
    msg.opt_fr = 3098050865U;
    msg.tbl = -112;
    msg.tbl_dur = 3642883345U;
    msg.tbl_fr = 3728405333U;
    msg.eco = 19;
    msg.eco_dur = 1501770798U;
    msg.eco_fr = 3473988021U;
    msg.par = 16;
    msg.par_dur = 2601187860U;
    msg.par_fr = 966446660U;

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
    msg.setTimeStamp(0.223605566981);
    msg.setSource(49693U);
    msg.setSourceEntity(70U);
    msg.setDestination(17019U);
    msg.setDestinationEntity(61U);
    msg.adcp = -7;
    msg.adcp_dur = 1982202228U;
    msg.adcp_fr = 1695082281U;
    msg.ctd = 30;
    msg.ctd_dur = 6268971U;
    msg.ctd_fr = 4078899206U;
    msg.opt = 35;
    msg.opt_dur = 611113186U;
    msg.opt_fr = 878214982U;
    msg.tbl = 66;
    msg.tbl_dur = 2867729101U;
    msg.tbl_fr = 2862334701U;
    msg.eco = -121;
    msg.eco_dur = 3434431730U;
    msg.eco_fr = 2223050331U;
    msg.par = -24;
    msg.par_dur = 2648696343U;
    msg.par_fr = 799207927U;

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
    msg.setTimeStamp(0.573192720469);
    msg.setSource(3489U);
    msg.setSourceEntity(228U);
    msg.setDestination(20785U);
    msg.setDestinationEntity(16U);
    msg.adcp = -31;
    msg.adcp_dur = 851434209U;
    msg.adcp_fr = 1486967635U;
    msg.ctd = 0;
    msg.ctd_dur = 3909306454U;
    msg.ctd_fr = 2001425980U;
    msg.opt = 84;
    msg.opt_dur = 3743949032U;
    msg.opt_fr = 3584173130U;
    msg.tbl = 62;
    msg.tbl_dur = 1427242628U;
    msg.tbl_fr = 3950643285U;
    msg.eco = 102;
    msg.eco_dur = 1782730193U;
    msg.eco_fr = 3869302662U;
    msg.par = -54;
    msg.par_dur = 4222058507U;
    msg.par_fr = 2445741587U;

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
    msg.setTimeStamp(0.829504499493);
    msg.setSource(15849U);
    msg.setSourceEntity(233U);
    msg.setDestination(48766U);
    msg.setDestinationEntity(64U);
    msg.adcp = -93;
    msg.adcp_dur = 3049142812U;
    msg.adcp_fr = 3660424414U;
    msg.ctd = -91;
    msg.ctd_dur = 247987217U;
    msg.ctd_fr = 923536557U;
    msg.opt = -83;
    msg.opt_dur = 3213150445U;
    msg.opt_fr = 3513219146U;
    msg.tbl = -66;
    msg.tbl_dur = 2356270683U;
    msg.tbl_fr = 14869188U;
    msg.eco = -79;
    msg.eco_dur = 3899923933U;
    msg.eco_fr = 3069300658U;
    msg.par = 95;
    msg.par_dur = 3616851781U;
    msg.par_fr = 723098238U;

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
    msg.setTimeStamp(0.925606472033);
    msg.setSource(23784U);
    msg.setSourceEntity(229U);
    msg.setDestination(51622U);
    msg.setDestinationEntity(152U);
    msg.adcp = 34;
    msg.adcp_dur = 862657173U;
    msg.adcp_fr = 2877744759U;
    msg.ctd = 124;
    msg.ctd_dur = 3933353140U;
    msg.ctd_fr = 242844353U;
    msg.opt = -67;
    msg.opt_dur = 671858344U;
    msg.opt_fr = 908457144U;
    msg.tbl = 14;
    msg.tbl_dur = 265729853U;
    msg.tbl_fr = 3457712887U;
    msg.eco = 89;
    msg.eco_dur = 2358853922U;
    msg.eco_fr = 932008764U;
    msg.par = -8;
    msg.par_dur = 2624923704U;
    msg.par_fr = 3866445415U;

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
    msg.setTimeStamp(0.773617525982);
    msg.setSource(21482U);
    msg.setSourceEntity(119U);
    msg.setDestination(26532U);
    msg.setDestinationEntity(218U);
    msg.adcp = 112;
    msg.adcp_dur = 2709271643U;
    msg.adcp_fr = 836562327U;
    msg.ctd = 71;
    msg.ctd_dur = 1380141618U;
    msg.ctd_fr = 1061942807U;
    msg.opt = 95;
    msg.opt_dur = 3611057675U;
    msg.opt_fr = 3686526167U;
    msg.tbl = 17;
    msg.tbl_dur = 2767599024U;
    msg.tbl_fr = 1826184210U;
    msg.eco = 46;
    msg.eco_dur = 3597629276U;
    msg.eco_fr = 419937527U;
    msg.par = -127;
    msg.par_dur = 4059737098U;
    msg.par_fr = 147420780U;

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
    msg.setTimeStamp(0.0379503325553);
    msg.setSource(23950U);
    msg.setSourceEntity(96U);
    msg.setDestination(55112U);
    msg.setDestinationEntity(96U);
    msg.value = 0.626708441706;

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
    msg.setTimeStamp(0.032587078555);
    msg.setSource(34138U);
    msg.setSourceEntity(194U);
    msg.setDestination(19080U);
    msg.setDestinationEntity(41U);
    msg.value = 0.191007638467;

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
    msg.setTimeStamp(0.0808486000669);
    msg.setSource(17798U);
    msg.setSourceEntity(37U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(18U);
    msg.value = 0.262369648739;

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
    msg.setTimeStamp(0.970438517452);
    msg.setSource(24414U);
    msg.setSourceEntity(163U);
    msg.setDestination(2919U);
    msg.setDestinationEntity(13U);
    msg.validity = 43481U;
    msg.type = 168U;
    msg.utc_year = 6851U;
    msg.utc_month = 3U;
    msg.utc_day = 33U;
    msg.utc_time = 0.860843447847;
    msg.lat = 0.816932392798;
    msg.lon = 0.11568573174;
    msg.height = 0.339403719967;
    msg.satellites = 194U;
    msg.cog = 0.704850163828;
    msg.sog = 0.450277396685;
    msg.hdop = 0.123518241298;
    msg.vdop = 0.57211441126;
    msg.hacc = 0.678668383477;
    msg.vacc = 0.132341732124;

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
    msg.setTimeStamp(0.533656411192);
    msg.setSource(60612U);
    msg.setSourceEntity(131U);
    msg.setDestination(33204U);
    msg.setDestinationEntity(219U);
    msg.validity = 2637U;
    msg.type = 126U;
    msg.utc_year = 56980U;
    msg.utc_month = 65U;
    msg.utc_day = 223U;
    msg.utc_time = 0.07020886678;
    msg.lat = 0.154531491463;
    msg.lon = 0.103108154602;
    msg.height = 0.889638244689;
    msg.satellites = 211U;
    msg.cog = 0.834646978569;
    msg.sog = 0.243890954392;
    msg.hdop = 0.22374610456;
    msg.vdop = 0.22711898221;
    msg.hacc = 0.511711268756;
    msg.vacc = 0.153907744871;

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
    msg.setTimeStamp(0.768088945468);
    msg.setSource(11747U);
    msg.setSourceEntity(19U);
    msg.setDestination(42692U);
    msg.setDestinationEntity(113U);
    msg.validity = 52498U;
    msg.type = 163U;
    msg.utc_year = 53067U;
    msg.utc_month = 235U;
    msg.utc_day = 136U;
    msg.utc_time = 0.566683955703;
    msg.lat = 0.721916254943;
    msg.lon = 0.401149188645;
    msg.height = 0.352378793401;
    msg.satellites = 127U;
    msg.cog = 0.867173837906;
    msg.sog = 0.352308117503;
    msg.hdop = 0.0591939523598;
    msg.vdop = 0.244453130137;
    msg.hacc = 0.904564193477;
    msg.vacc = 0.686502030359;

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

  {
    IMC::SingleCurrentCell msg;
    msg.setTimeStamp(0.505582018771);
    msg.setSource(46537U);
    msg.setSourceEntity(18U);
    msg.setDestination(8152U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.293606539547;
    msg.lon = 0.623516761014;
    msg.depth.assign("TVHGYMEGQQFRXDHJPUFILTLVYEFCVMMFJNHTEBBAQHDPNULTLKJZRKRUEGTQKHBDKSYQOZAUOQAILNJZUVTEOICPSSRKIEWNBPFFVL");
    msg.vel.assign("WDVCXPSSLCBOEFFKDHMSTWHTOKURYAIIKFDLUTFVXTWUTDTGYZFZCGKARUITZLCSNXGJWZPRIAOQVAGVJZDAMRJPHZQISHEPOPENIYVXAUGMKWUFRRZSIHPBBNGMYRQJMALERMANBJDIHMBPOLEKCDYNGFOKXLHEXBLQMVDBRXFLAUJPEOMSHGQUBPWYTQKNOGTZWTIOJZLXNFKJLNQIDCYCVXEJH");
    msg.dir.assign("XJWDAHLRJAQNIYPYHJSKMLDYZGKPEORBIIXNJIETQWVUCGTIRPSFYYVGWGLINUDEHBWXWOEOOQNMZNZGUKCETXQTYARSGMVFOEZJVDHLLDRMAGQLNXSBJEAMGVDKOVBJKUJTGFXKIPIQCHMKENLWTPSNBZCSTRWTDAVWKFBBFAXFUYRZJVEQZSCBRHBFLMFXOHUU");

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
    msg.setTimeStamp(0.874062806716);
    msg.setSource(43713U);
    msg.setSourceEntity(44U);
    msg.setDestination(13881U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.0263964452816;
    msg.lon = 0.0554560130983;
    msg.depth.assign("TACBGFRYNXGBPIOVXJFJUJICZIUYVOMWNBHXYAPQCWOTGQUTFADKPZSXDCSCCAIQAJUOVKHTQZWPSUPYETMKGTIRNBURTBSUIKJWHEMXBYDYNSJDUOXQWGVGRWJEPKVPDFLHQFSEVZLJUYYFWNNARVQLTURMMMEOJMHKIBGYNMFEAQQPNRDOSCKLWESEBONDKSZKRXIBJZLKCHDOGGLLARFOH");
    msg.vel.assign("UAGRWXPQUWAQBFSUFYFCLGKPJMQODESEAXKEBUJHVOCPMPIMGFAVQHMUWKZCGKNTAPUFPAMZCPWDJOSROSTLBDEIBGRUPKGVXTIDZWYGQCOKVRZNMLKVVJCJASBHBSIOPEYIIXXHBYTRYLJTQLMALEWODHYNEMORGREKYCSDTQNDOFX");
    msg.dir.assign("XLJWXCMPOKTGFFZECCJZQIBEMKJVDXRKLPPCOHBCHANOFGKXATVNHKBUWBJJADENHDAYMVSOMAKMQBJFBBGSFEBCVTACPWHIGQILMPVWMIAQFEITMURKLI");

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
    msg.setTimeStamp(0.682625647228);
    msg.setSource(25925U);
    msg.setSourceEntity(165U);
    msg.setDestination(9916U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.938998906477;
    msg.lon = 0.881620006753;
    msg.depth.assign("PPBLDARQSURFINWTUWCOWRMWZNITHGGEXSJGBNTXZCKOXPFRXTMHCADKEUNNHOPYZV");
    msg.vel.assign("EOMBSBQTAQCVUDRDISHTBLWGDEGLIKFMZVXCXGUIAJWJUHGSFYCMMUXRLTORZEYQNVXDNYDIDAIFFTOFJVGVROVYAQUWLUZPZDMVFKXZAQPGJMCDIZBWKCHHJUBBBAVSSYTLYXLKPLEMXKNELAFEISFMEAVYTIFWKWCYNSRPJPRCCWQSPTHMBNDIEQQYJNRNXRNUWXBHYPQNEJOCWPTSGPOHALNUHZGUETPBIOWOVKTHRGZOJL");
    msg.dir.assign("MWCYHIKCLEMVPKCYOJLDLTYEQNEDIJTWKQBLCJNRENKPAPDHUFUETDHCIUFDGNRWMXSMJBJKXTBJWAZPREVTQPARNSIXEPFSDKYCWXDKFZOFEJRNFCRLTBLNZHAVOQIHZRKVASCYAGOXXZH");

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

  return test.getReturnValue();
}

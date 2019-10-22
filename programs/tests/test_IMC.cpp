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
// IMC XML MD5: 71d10281f7021f2c8a74ac9846be925b                            *
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
    msg.setTimeStamp(0.204258864379);
    msg.setSource(54559U);
    msg.setSourceEntity(0U);
    msg.setDestination(31525U);
    msg.setDestinationEntity(50U);
    msg.state = 72U;
    msg.flags = 248U;
    msg.description.assign("TMEMFFQUIHALKEAIARLOMEFOLBYQDJUQTLBRHVOUYUSVJAWCFRGIWQYWKJQVMEYSAMCGDMZNEQGIVCORHKZLJFUGKDJVJHQAOTSTEZRWHFBBXFPKOECMWGNTYYUMUBQHABDSRSXMBAIKXDHNIULZRGSJLYIACNBFAPPSPTRFILJX");

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
    msg.setTimeStamp(0.923385402643);
    msg.setSource(32033U);
    msg.setSourceEntity(20U);
    msg.setDestination(42298U);
    msg.setDestinationEntity(25U);
    msg.state = 121U;
    msg.flags = 205U;
    msg.description.assign("GVGRVDDUEGHTRFVQQRZYXJFCMEVWYDICESQGSMBXLQVRCTAZDCTMSATJFIHHXTJSSBGCUPNKXEUBHZNKYKPQMGMVUPPMKJQVZGWDPINHPINLXUQOZYFDPVYHNJQOGMLIPIDWEDJPULCTKLFEKHBMOZEVJWXRLFKBVRDIGKESSBFHMZOBXUAW");

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
    msg.setTimeStamp(0.846786340948);
    msg.setSource(39499U);
    msg.setSourceEntity(169U);
    msg.setDestination(55625U);
    msg.setDestinationEntity(97U);
    msg.state = 173U;
    msg.flags = 64U;
    msg.description.assign("NYVTDRUDLGMJQHSJBQCYRTRODXRXMMTZISJHA");

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
    msg.setTimeStamp(0.371986211508);
    msg.setSource(6539U);
    msg.setSourceEntity(115U);
    msg.setDestination(6674U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.564590070168);
    msg.setSource(41763U);
    msg.setSourceEntity(60U);
    msg.setDestination(27395U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.943306840241);
    msg.setSource(63744U);
    msg.setSourceEntity(195U);
    msg.setDestination(62225U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.615430715357);
    msg.setSource(56793U);
    msg.setSourceEntity(243U);
    msg.setDestination(22381U);
    msg.setDestinationEntity(172U);
    msg.id = 71U;
    msg.label.assign("EAUZKWAWGJBRYVBMRGWLVBEJZANESSFNXORDGFKYGMSXNJQQXSNLHSNNXLCCZGD");
    msg.component.assign("UBFYGAENYDTFCHBALHJEVTYAPYLWPMVHQYMLGSHR");
    msg.act_time = 16044U;
    msg.deact_time = 55714U;

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
    msg.setTimeStamp(0.423416001159);
    msg.setSource(45015U);
    msg.setSourceEntity(49U);
    msg.setDestination(56804U);
    msg.setDestinationEntity(37U);
    msg.id = 201U;
    msg.label.assign("AXABHYETBENLJEZPCHIIIBOJKXGYOOUTDOIRQGZKSMEQTSYKUOSKEUPPIHFDLQRKVFYPCAOTUACBRIRCRJZZVVPSYQBCFHHCWLQQBURGTDQXPKRFZSXLHDYZSLWIFPVBANZEMPOTNXFFBW");
    msg.component.assign("ZQJONSFZTVBEDNKZIYXAXOQAPHVTZVQKA");
    msg.act_time = 33275U;
    msg.deact_time = 10531U;

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
    msg.setTimeStamp(0.849700729435);
    msg.setSource(7973U);
    msg.setSourceEntity(203U);
    msg.setDestination(35722U);
    msg.setDestinationEntity(70U);
    msg.id = 122U;
    msg.label.assign("ZWYSYIKDVWCDNOMSQTWVDKUOZCSUCRCSVRJMVLXWOWPVPXYPCNLRLKQTCKTTGPGONIBMQLYKFHXUGVLFMHGXZNIGZBCKBFUVIRUJX");
    msg.component.assign("DULANGHFGHWVFYWQKMBPKHESTTVPELHXPVDXOXGYESVGTIMWXJDWCYGYRAEOBKEDAALQDABVWAGOGOYRBMAUJWDKZRIUJZQFIQFXUEINNXZRRYHJRCMOBNUP");
    msg.act_time = 35212U;
    msg.deact_time = 27451U;

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
    msg.setTimeStamp(0.997137153961);
    msg.setSource(35947U);
    msg.setSourceEntity(144U);
    msg.setDestination(21347U);
    msg.setDestinationEntity(33U);
    msg.id = 9U;

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
    msg.setTimeStamp(0.664136664217);
    msg.setSource(31838U);
    msg.setSourceEntity(66U);
    msg.setDestination(52061U);
    msg.setDestinationEntity(226U);
    msg.id = 77U;

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
    msg.setTimeStamp(0.159994497905);
    msg.setSource(19363U);
    msg.setSourceEntity(123U);
    msg.setDestination(33113U);
    msg.setDestinationEntity(252U);
    msg.id = 221U;

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
    msg.setTimeStamp(0.798096886844);
    msg.setSource(45963U);
    msg.setSourceEntity(184U);
    msg.setDestination(47106U);
    msg.setDestinationEntity(67U);
    msg.op = 251U;
    msg.list.assign("ISXRNWEZGZNQLCAYLAJNKIJPTTWCBBANMLRHNOWYXBPCIRAWKFJPFHOXIKPWDWPFIYOGEWUDBODAYCZTNHEZVYFMKKZOZTQYEZIJMXVDUAKPQDWFSQXXSNLPYVICTLORXEBTSVGQUMBVMCHRJLDXUFUXDKQNJEYODVUPPSJAKGRRCIHUJLAUZCOBBPEOULVRYUGKFGWMRABAQTSWDZHSCHJMTGDNQVCFHXIKMRQESESFLNVGLVOGJHY");

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
    msg.setTimeStamp(0.583714333341);
    msg.setSource(39924U);
    msg.setSourceEntity(160U);
    msg.setDestination(61311U);
    msg.setDestinationEntity(129U);
    msg.op = 57U;
    msg.list.assign("LTWINGKCRWJJUDLZROTIPLYZQMTXUYZNIQGYQSIMAIDOVUHKMDJFCKGUXFRBVQUGBXDYE");

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
    msg.setTimeStamp(0.892189204129);
    msg.setSource(10011U);
    msg.setSourceEntity(162U);
    msg.setDestination(4953U);
    msg.setDestinationEntity(11U);
    msg.op = 26U;
    msg.list.assign("QKXOENEJVUEUCRTTEILJKAYM");

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
    msg.setTimeStamp(0.646904879346);
    msg.setSource(64880U);
    msg.setSourceEntity(157U);
    msg.setDestination(39823U);
    msg.setDestinationEntity(75U);
    msg.value = 149U;

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
    msg.setTimeStamp(0.64650468799);
    msg.setSource(40743U);
    msg.setSourceEntity(251U);
    msg.setDestination(52373U);
    msg.setDestinationEntity(94U);
    msg.value = 64U;

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
    msg.setTimeStamp(0.536327284723);
    msg.setSource(53003U);
    msg.setSourceEntity(118U);
    msg.setDestination(29010U);
    msg.setDestinationEntity(15U);
    msg.value = 8U;

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
    msg.setTimeStamp(0.260427265403);
    msg.setSource(9548U);
    msg.setSourceEntity(26U);
    msg.setDestination(35856U);
    msg.setDestinationEntity(117U);
    msg.consumer.assign("MFLNNMANAIHGCWGWGRAYSFPLFONYOHCDAPHRZYSIYOGQVIZWBMMJTBNSXRJNBRDSFGZJCNECWTTKGAORIUPOYZVCDSXPGUBDHJEWQTWKRUSVGLBPZQBFUHXGIIQNVVTYTBBEMHJRLFZETIPKPJQWSPXBBOVKLEZLJDWUKPWCAAQTDSDYEOHMVFCVEZMXUUKAMXHDMFKTOSCGCOUKIY");
    msg.message_id = 20765U;

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
    msg.setTimeStamp(0.485170648819);
    msg.setSource(49806U);
    msg.setSourceEntity(252U);
    msg.setDestination(34942U);
    msg.setDestinationEntity(116U);
    msg.consumer.assign("MFSOGMYVCODQUCBXZDXSXFFINHOIQSWVECLYZPWBTYATRYTKLUFHQNYBTKCGJIQSCAIRPSYQJFSSCWZPVYQAGFMNHELKJUCMKRBBWDUZZMEUNJAHZYMNQTHILAIMWKTHXVWFFTSJCGJPZDPOQJSZGDWUUXEEKYWVWBHNERPFUMRCOVGDBRARDGAXQFUKONLNWRBYDXPKERCXHKOPRAELNBALKZEIBXTMVUGTJDPXLOODSEHJNVIZVMVQGTGII");
    msg.message_id = 44717U;

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
    msg.setTimeStamp(0.929287692308);
    msg.setSource(49706U);
    msg.setSourceEntity(253U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(226U);
    msg.consumer.assign("PHBVPVZKEGHNPAELCKLPAAOZVKSDFXRWYRNRKVHQCIGZFATZTPOCHNQBLUDABRTMWTYRTTWUNHCGJBYCUDSWMEWDCYQSMTICMUULPQXHKQTMXZFKPBLGVOIADFZVFWS");
    msg.message_id = 14289U;

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
    msg.setTimeStamp(0.217455446338);
    msg.setSource(24905U);
    msg.setSourceEntity(84U);
    msg.setDestination(61114U);
    msg.setDestinationEntity(228U);
    msg.type = 220U;

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
    msg.setTimeStamp(0.586110172518);
    msg.setSource(42717U);
    msg.setSourceEntity(180U);
    msg.setDestination(17137U);
    msg.setDestinationEntity(70U);
    msg.type = 108U;

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
    msg.setTimeStamp(0.953099474859);
    msg.setSource(58644U);
    msg.setSourceEntity(39U);
    msg.setDestination(16444U);
    msg.setDestinationEntity(227U);
    msg.type = 35U;

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
    msg.setTimeStamp(0.262172602878);
    msg.setSource(40333U);
    msg.setSourceEntity(187U);
    msg.setDestination(37713U);
    msg.setDestinationEntity(252U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.801565373427);
    msg.setSource(9719U);
    msg.setSourceEntity(77U);
    msg.setDestination(54376U);
    msg.setDestinationEntity(37U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.993572856368);
    msg.setSource(48171U);
    msg.setSourceEntity(78U);
    msg.setDestination(51205U);
    msg.setDestinationEntity(27U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.843610180824);
    msg.setSource(6695U);
    msg.setSourceEntity(39U);
    msg.setDestination(13558U);
    msg.setDestinationEntity(183U);
    msg.total_steps = 140U;
    msg.step_number = 193U;
    msg.step.assign("ARZFADLNPGYFDKOABXSEOOZBLEPQIDWYUCJZCXPGMKNOLBPYJCQQFSAQPIXTCATBDMTHGUGQXHNLUNYESZNGSXTHVDUEYRKMNMWCSUDIVWZBYQ");
    msg.flags = 210U;

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
    msg.setTimeStamp(0.023156107933);
    msg.setSource(41185U);
    msg.setSourceEntity(7U);
    msg.setDestination(41826U);
    msg.setDestinationEntity(114U);
    msg.total_steps = 128U;
    msg.step_number = 181U;
    msg.step.assign("DVAIXKGYYQZKYMVJFFOIUYFDJHGGVPGQTVGWVTHNUJOAHCUAKOJWRIDJCNGMDVVMUFGYFITKWYPGXXQUAIBSMZXBKHOACNLBQLTCCAREDQFCRBXZOZPNNTJSMWQRUDMYMEEZZZQPJRPWBRIBQKWBPAKXWLLVIQOJWJNWCQZPUMCSDKPDXTGNXTHVELNYKHFASERYELNLRHLMU");
    msg.flags = 124U;

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
    msg.setTimeStamp(0.662986832096);
    msg.setSource(52458U);
    msg.setSourceEntity(110U);
    msg.setDestination(61621U);
    msg.setDestinationEntity(166U);
    msg.total_steps = 22U;
    msg.step_number = 142U;
    msg.step.assign("CTIGXUBYEKBDNSSELYKFWMNJXZYJIVQDXSTTZCUNPRDXPAORUFVFWSIEZGSWSQGVHSPZBITAEKNHBNGAOHTSVFALCDLPRQJZKPXIQNORTRVKJNWFWJJMYMHERROUBFMEUXYKGKOW");
    msg.flags = 216U;

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
    msg.setTimeStamp(0.706706044513);
    msg.setSource(10104U);
    msg.setSourceEntity(69U);
    msg.setDestination(42269U);
    msg.setDestinationEntity(239U);
    msg.state = 101U;
    msg.error.assign("ATPGCZIBWKRYSNUZCDRDQVFKCSZQZCXKIFUWDAGYCIGYEYELHSORLNDEOWOHTZGUTJDWCPCAVABYWMDEUSYLOKHKVFMXUYCXXHTNVMSVPZNWGNSZURJOK");

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
    msg.setTimeStamp(0.973788337834);
    msg.setSource(22536U);
    msg.setSourceEntity(228U);
    msg.setDestination(32766U);
    msg.setDestinationEntity(171U);
    msg.state = 5U;
    msg.error.assign("YAFXLUITNUIHSNHGGCECOFBKLUZKXWFZIOOGOUSIOKRHYNSAYVBPICDWMKKZFEUTXPMQRDPOCBMPDHRXKYYWILFCNTLVGWGZGEVFHZVMXIXZBYEOCHPJWRFLUSTKBABATNCRGNTSVJIQZCQAQLZLJNRTVYVNEJWBUDPE");

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
    msg.setTimeStamp(0.671480182061);
    msg.setSource(46731U);
    msg.setSourceEntity(106U);
    msg.setDestination(50596U);
    msg.setDestinationEntity(169U);
    msg.state = 224U;
    msg.error.assign("BNNXJJKLRARZTMWDFJCOUFFISSPPDCAUYXPCQBTXCALXZVYPPBVNOIMTRTJQWNGRIVKOMBVHQUNEUWWWQCQOXIPROPAPSOMEDONCIAKYGQUCLAXCTVFEUGYVKRLDIHJEDURXIHVUQSSTGJBORLOJFYMPMSYOTQSFWDKJQVLKM");

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
    msg.setTimeStamp(0.297592771454);
    msg.setSource(28299U);
    msg.setSourceEntity(218U);
    msg.setDestination(38068U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.278557187321);
    msg.setSource(2277U);
    msg.setSourceEntity(253U);
    msg.setDestination(25479U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.0950049258345);
    msg.setSource(58423U);
    msg.setSourceEntity(61U);
    msg.setDestination(56136U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.673132340654);
    msg.setSource(61201U);
    msg.setSourceEntity(194U);
    msg.setDestination(34903U);
    msg.setDestinationEntity(146U);
    msg.op = 117U;
    msg.speed_min = 0.9654521252;
    msg.speed_max = 0.929591277437;
    msg.long_accel = 0.783427781976;
    msg.alt_max_msl = 0.636603244673;
    msg.dive_fraction_max = 0.505880975702;
    msg.climb_fraction_max = 0.839480979699;
    msg.bank_max = 0.570566106208;
    msg.p_max = 0.439599179723;
    msg.pitch_min = 0.246867059824;
    msg.pitch_max = 0.364580908224;
    msg.q_max = 0.668346897519;
    msg.g_min = 0.952879153961;
    msg.g_max = 0.454649632444;
    msg.g_lat_max = 0.316154905213;
    msg.rpm_min = 0.175525353837;
    msg.rpm_max = 0.17950966417;
    msg.rpm_rate_max = 0.375360781795;

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
    msg.setTimeStamp(0.33843327291);
    msg.setSource(62014U);
    msg.setSourceEntity(41U);
    msg.setDestination(28950U);
    msg.setDestinationEntity(168U);
    msg.op = 237U;
    msg.speed_min = 0.351306240306;
    msg.speed_max = 0.589476650939;
    msg.long_accel = 0.367092193832;
    msg.alt_max_msl = 0.106324181319;
    msg.dive_fraction_max = 0.136234300016;
    msg.climb_fraction_max = 0.157234059943;
    msg.bank_max = 0.45924804946;
    msg.p_max = 0.408314029093;
    msg.pitch_min = 0.814020614806;
    msg.pitch_max = 0.530792349;
    msg.q_max = 0.0377537472312;
    msg.g_min = 0.259372480145;
    msg.g_max = 0.0222538183966;
    msg.g_lat_max = 0.219103690221;
    msg.rpm_min = 0.51634129304;
    msg.rpm_max = 0.846562946205;
    msg.rpm_rate_max = 0.744917520053;

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
    msg.setTimeStamp(0.25897050682);
    msg.setSource(38564U);
    msg.setSourceEntity(137U);
    msg.setDestination(39080U);
    msg.setDestinationEntity(249U);
    msg.op = 139U;
    msg.speed_min = 0.45111610809;
    msg.speed_max = 0.99409399525;
    msg.long_accel = 0.939850284837;
    msg.alt_max_msl = 0.267562220308;
    msg.dive_fraction_max = 0.0396286522375;
    msg.climb_fraction_max = 0.390030550891;
    msg.bank_max = 0.655903962661;
    msg.p_max = 0.348900375877;
    msg.pitch_min = 0.877841099808;
    msg.pitch_max = 0.988376788822;
    msg.q_max = 0.672812053093;
    msg.g_min = 0.0266385731465;
    msg.g_max = 0.770147407533;
    msg.g_lat_max = 0.596173964985;
    msg.rpm_min = 0.069924170699;
    msg.rpm_max = 0.570994830911;
    msg.rpm_rate_max = 0.785451320199;

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
    msg.setTimeStamp(0.10485673041);
    msg.setSource(37816U);
    msg.setSourceEntity(123U);
    msg.setDestination(11062U);
    msg.setDestinationEntity(58U);
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.104879348439;
    tmp_msg_0.dist_min_abs = 0.296396424187;
    tmp_msg_0.dist_min_mean = 0.0777435992906;
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
    msg.setTimeStamp(0.10590085819);
    msg.setSource(2737U);
    msg.setSourceEntity(220U);
    msg.setDestination(25635U);
    msg.setDestinationEntity(61U);
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 47091U;
    tmp_msg_0.lat = 0.203368923459;
    tmp_msg_0.lon = 0.386056340211;
    tmp_msg_0.z = 0.90855150115;
    tmp_msg_0.z_units = 239U;
    tmp_msg_0.speed = 0.878064382535;
    tmp_msg_0.speed_units = 156U;
    tmp_msg_0.bearing = 0.550698992323;
    tmp_msg_0.cross_angle = 0.374092006883;
    tmp_msg_0.width = 0.323039058306;
    tmp_msg_0.length = 0.268536014671;
    tmp_msg_0.hstep = 0.754767365189;
    tmp_msg_0.coff = 20U;
    tmp_msg_0.alternation = 28U;
    tmp_msg_0.flags = 219U;
    tmp_msg_0.custom.assign("INWIAFIUOUNELGADOHHRTBKLOXDWIQALSQLNVCGQQYJMZYVTASEFPIXLATYVHRVBHDRPMHEBNENSPNUUBSIWHYWNOBUHCYXLKZ");
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
    msg.setTimeStamp(0.826788269043);
    msg.setSource(43805U);
    msg.setSourceEntity(192U);
    msg.setDestination(63178U);
    msg.setDestinationEntity(243U);
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 122U;
    tmp_msg_0.htime = 0.253452907677;
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
    msg.setTimeStamp(0.752326939617);
    msg.setSource(31569U);
    msg.setSourceEntity(30U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.142971850583;
    msg.lon = 0.584292759626;
    msg.height = 0.289986703771;
    msg.x = 0.914213002984;
    msg.y = 0.978656477264;
    msg.z = 0.0379037088934;
    msg.phi = 0.0682475883784;
    msg.theta = 0.822967261872;
    msg.psi = 0.943661986383;
    msg.u = 0.977711853582;
    msg.v = 0.853929764988;
    msg.w = 0.673635678771;
    msg.p = 0.476827942921;
    msg.q = 0.882134558326;
    msg.r = 0.660827319143;
    msg.svx = 0.0583707418331;
    msg.svy = 0.109609677723;
    msg.svz = 0.446180864076;

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
    msg.setTimeStamp(0.356514283896);
    msg.setSource(33815U);
    msg.setSourceEntity(149U);
    msg.setDestination(34929U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.996898193349;
    msg.lon = 0.787827952995;
    msg.height = 0.528142152819;
    msg.x = 0.000674740147282;
    msg.y = 0.582802294491;
    msg.z = 0.735129568757;
    msg.phi = 0.496014175549;
    msg.theta = 0.28652569988;
    msg.psi = 0.924631248391;
    msg.u = 0.753696720959;
    msg.v = 0.161015957355;
    msg.w = 0.734518783005;
    msg.p = 0.731907621124;
    msg.q = 0.555505505201;
    msg.r = 0.0219106289505;
    msg.svx = 0.989885047765;
    msg.svy = 0.0790558252128;
    msg.svz = 0.306320623188;

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
    msg.setTimeStamp(0.448467407369);
    msg.setSource(20650U);
    msg.setSourceEntity(109U);
    msg.setDestination(40182U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.0569181071722;
    msg.lon = 0.48508708548;
    msg.height = 0.606245954997;
    msg.x = 0.0282754058831;
    msg.y = 0.250794013388;
    msg.z = 0.036732116124;
    msg.phi = 0.371107496005;
    msg.theta = 0.36332861737;
    msg.psi = 0.271176068474;
    msg.u = 0.224326207842;
    msg.v = 0.985212416173;
    msg.w = 0.956364162166;
    msg.p = 0.508509128156;
    msg.q = 0.138432729842;
    msg.r = 0.144388401965;
    msg.svx = 0.667045045899;
    msg.svy = 0.818498316073;
    msg.svz = 0.444160512935;

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
    msg.setTimeStamp(0.293382369717);
    msg.setSource(49343U);
    msg.setSourceEntity(31U);
    msg.setDestination(37778U);
    msg.setDestinationEntity(235U);
    msg.op = 107U;
    msg.entities.assign("OMAUXDBIXPABGHVCEXPZYEUFHGTGPVYYYFLSKK");

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
    msg.setTimeStamp(0.139888288065);
    msg.setSource(41187U);
    msg.setSourceEntity(36U);
    msg.setDestination(17166U);
    msg.setDestinationEntity(154U);
    msg.op = 12U;
    msg.entities.assign("AGXODGMTZFNL");

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
    msg.setTimeStamp(0.76352111157);
    msg.setSource(12894U);
    msg.setSourceEntity(164U);
    msg.setDestination(33913U);
    msg.setDestinationEntity(243U);
    msg.op = 223U;
    msg.entities.assign("YPKWNXZBWWQZCCHDDWCSGIZHVIJAKCFMQSUTBLPTTWKY");

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
    msg.setTimeStamp(0.273024195729);
    msg.setSource(33533U);
    msg.setSourceEntity(95U);
    msg.setDestination(8711U);
    msg.setDestinationEntity(244U);
    msg.type = 217U;
    msg.speed = 52071U;
    const char tmp_msg_0[] = {-14, 3, -109, 109, 26, 69, 81, -26, -83, -127, -80, -67, 13, 11, -67, 74, 12, -54, 45, 0, -118, -21, 85, 96, 30, -28, -65, -123, 85, -81, -8, 22, -4, -25, 24, -93, -49, -14, -62, 43, 49, -3, -37, -103, -68, -118, 50, -50, 37, -35, 112, 24, -87, -85, 12, -108, 3, 94, -32, 93, -77, -16, 70, -121, -88, 16, 33, 31, 98, 79, 82, -110, 28, -53, -87, -115, 70, -114, -55, 65, 30, -38, -91, 56, 120, -102, 124, -116, 41, -119, 109, -109, 88};
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
    msg.setTimeStamp(0.119348694788);
    msg.setSource(4340U);
    msg.setSourceEntity(216U);
    msg.setDestination(52900U);
    msg.setDestinationEntity(105U);
    msg.type = 200U;
    msg.speed = 13338U;
    const char tmp_msg_0[] = {-52, 66, 41, -102, 15, 66, -49, 55, -81, -24, -5, 108, 83, 53, -124, 119, -58, 19, 44, -80, -48, -36, 98, -64, -71, 12, 30, 106, -17, -37, -25, -120, 110, -93, 107, 82, -75, -75, 95, -74, -73, -32, 101, 47, -109, 77, 49, -98, 78, 84, 119, 114, 124, 18, -73, -110, -50, -61, 44, -58};
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
    msg.setTimeStamp(0.332340534725);
    msg.setSource(33225U);
    msg.setSourceEntity(83U);
    msg.setDestination(5901U);
    msg.setDestinationEntity(92U);
    msg.type = 164U;
    msg.speed = 23168U;
    const char tmp_msg_0[] = {126, 93, 116, -42, -69, -121, 39, -81, 110, -71, -68, -80, 55, 44, -18, 77, -22, 115, 104, -46, 56, -124, -82, 11, -86, 112, -128, -92, 110, -84, 62, 23, -37, -37, -19, 92, -104, -30, 66, 76, 72, -65, 8, 78, -37, 86, -121, -89, -118, -115, -32, 105, 119, 38, 118, 84, -36, -120, -108, 125, -43, 117, -17, -56, 95, -34, -12, 62, 31, -22, -86, -99, -21, 73, -44, 7, -2, -59, 80, 19, -37, 60, -63, 38, 9, 33, -15, 82, -70, -69, 31, 54, 53, 14, 89, 7, 113, 34, -88, -14, -92, 33, -11, 116, 21, -75, 102, 14, -124, 67, 62, 47, 26, 82, 8, 97, 19, 111, 53, -18, 50, 29, 36, -43, -105, -48, 119, 109, 45, -41, -30, -26, -83, 117, -74, 33};
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
    msg.setTimeStamp(0.208248234473);
    msg.setSource(19129U);
    msg.setSourceEntity(160U);
    msg.setDestination(10373U);
    msg.setDestinationEntity(117U);
    msg.op = 76U;
    msg.tas2acc_pgain = 0.197701591737;
    msg.bank2p_pgain = 0.67430536416;

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
    msg.setTimeStamp(0.732634290916);
    msg.setSource(43081U);
    msg.setSourceEntity(88U);
    msg.setDestination(60889U);
    msg.setDestinationEntity(100U);
    msg.op = 14U;
    msg.tas2acc_pgain = 0.221615802179;
    msg.bank2p_pgain = 0.0489072652154;

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
    msg.setTimeStamp(0.811548875392);
    msg.setSource(65520U);
    msg.setSourceEntity(227U);
    msg.setDestination(41768U);
    msg.setDestinationEntity(169U);
    msg.op = 5U;
    msg.tas2acc_pgain = 0.971533542639;
    msg.bank2p_pgain = 0.390847334325;

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
    msg.setTimeStamp(0.285560518377);
    msg.setSource(35130U);
    msg.setSourceEntity(99U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(213U);
    msg.available = 2395479378U;
    msg.value = 250U;

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
    msg.setTimeStamp(0.442019465997);
    msg.setSource(45168U);
    msg.setSourceEntity(94U);
    msg.setDestination(43107U);
    msg.setDestinationEntity(26U);
    msg.available = 2537933231U;
    msg.value = 124U;

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
    msg.setTimeStamp(0.760933619698);
    msg.setSource(26194U);
    msg.setSourceEntity(248U);
    msg.setDestination(25677U);
    msg.setDestinationEntity(81U);
    msg.available = 2730182096U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.82896318051);
    msg.setSource(38303U);
    msg.setSourceEntity(126U);
    msg.setDestination(47356U);
    msg.setDestinationEntity(59U);
    msg.op = 221U;
    msg.snapshot.assign("BUIKMXYRLUXORYZWWNZLCXAVHLDQDWYAWGURDNKMTPRGTP");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0470020644709;
    tmp_msg_0.z_units = 121U;
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
    msg.setTimeStamp(0.730445464372);
    msg.setSource(59051U);
    msg.setSourceEntity(137U);
    msg.setDestination(17384U);
    msg.setDestinationEntity(96U);
    msg.op = 85U;
    msg.snapshot.assign("LPBLVXNCPILLVAJCBGTJDCXJLFMQEAQOFUXIHFSAQCGMGXGDN");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 65328U;
    tmp_msg_0.flags = 132U;
    tmp_msg_0.lat = 0.814536723438;
    tmp_msg_0.lon = 0.620324838894;
    tmp_msg_0.start_z = 0.178082409969;
    tmp_msg_0.start_z_units = 85U;
    tmp_msg_0.end_z = 0.461252363053;
    tmp_msg_0.end_z_units = 53U;
    tmp_msg_0.radius = 0.205634633969;
    tmp_msg_0.speed = 0.562236022187;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.custom.assign("OHELTYJPLIJSAXHSVVXGBZVFUBOZFHTDXWCJVJNTGQYDKATEIYOCCKICRCUJLMFSUDQAJESGXQAPTJHHNEVSUZDNOTKRTTDYEBURPVHIGDYWKCBWWFSLUGXJZYNOBGIXQNIWRLWSPVPWHPNLCSTNPYCOYHZIZRWDLYAOXPIMZURPALFRBUZGNHOFMXFKOX");
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
    msg.setTimeStamp(0.226254593012);
    msg.setSource(12129U);
    msg.setSourceEntity(220U);
    msg.setDestination(44123U);
    msg.setDestinationEntity(15U);
    msg.op = 143U;
    msg.snapshot.assign("UXUKWPINJMCYYZHUSEJEMWXZQWDKQKDFVWKXSYTHQZBZMDNPNEFYOOJTFYDPULCGJQVHPXXCJJSROTLGJKKMJGVOXENOXKFYOPODEHLZYCKQEVTANJK");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 38U;
    tmp_msg_0.reason = 170U;
    tmp_msg_0.value = 0.101275220949;
    tmp_msg_0.timestep = 0.724733328365;
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
    msg.setTimeStamp(0.505189576726);
    msg.setSource(10682U);
    msg.setSourceEntity(43U);
    msg.setDestination(64651U);
    msg.setDestinationEntity(168U);
    msg.op = 125U;
    msg.name.assign("FALPYOKBDCTFVTGDPE");

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
    msg.setTimeStamp(0.812444386874);
    msg.setSource(46032U);
    msg.setSourceEntity(130U);
    msg.setDestination(48421U);
    msg.setDestinationEntity(72U);
    msg.op = 234U;
    msg.name.assign("BHITKROBNLQALJNKBOUVHQISTXMCWOUWMJHZDAHGGLQTIFMLONCWWQZPIUGLEYOVBRXNWLHXFMVNTSBCDPNEPCCPSGYGFDMSEMGYKQNTZLVOPMPAUTVKBZLQHKESFDYUTSUZOEPGAONVUHWJGEAAVOMCFI");

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
    msg.setTimeStamp(0.487061241359);
    msg.setSource(45625U);
    msg.setSourceEntity(87U);
    msg.setDestination(33193U);
    msg.setDestinationEntity(108U);
    msg.op = 238U;
    msg.name.assign("HRGVVTHPOIICPXQGIZDJVPAUDFPIUFTIFQLAXGZLMILAUTRUUGZUXNHVJYYINMTZXOYGCLKWCQXICXWEBJWLMEVAPICSFQTWCYOERGESTROSYHMGHXJHTPWYQZVETKYEOZCHKBUOWMTJNUAWRYBDSGGBVBASQDVJUQJJPOASFFVRQKNMQFJBNVQHPRNBKEPZRYEXDDGU");

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
    msg.setTimeStamp(0.400947396529);
    msg.setSource(10899U);
    msg.setSourceEntity(30U);
    msg.setDestination(16033U);
    msg.setDestinationEntity(146U);
    msg.type = 89U;
    msg.htime = 0.570719853599;
    msg.context.assign("MYSVUULUHZQKRKAVUAPJ");
    msg.text.assign("LHIEHDMYATNP");

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
    msg.setTimeStamp(0.684471581507);
    msg.setSource(49580U);
    msg.setSourceEntity(138U);
    msg.setDestination(61364U);
    msg.setDestinationEntity(225U);
    msg.type = 95U;
    msg.htime = 0.0830251533116;
    msg.context.assign("DZVRXIQHIFPUZSNZLOGOXVVCPHDAAQEWRSRWEPZOMTPQECJOLHUHXSOSBIANFIUIJYKBAJIMCJ");
    msg.text.assign("QXCVZNMXYJBTYXVDMTQEPQDEYPILCOTBJSFOCMAFWVQCBECGRRZMAUJLTHSUJSGGGZHSRHHNNJBUCLZXPBACJUIXTSHKO");

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
    msg.setTimeStamp(0.79637507267);
    msg.setSource(45219U);
    msg.setSourceEntity(12U);
    msg.setDestination(27295U);
    msg.setDestinationEntity(13U);
    msg.type = 212U;
    msg.htime = 0.268817966971;
    msg.context.assign("EQSFBCFCGJNJLQQZHKQTFVXOSTNBCRISUVPTDXLAHLFEIHUMBXHVEEDVWALLZUCRWKEWJACMDLWSPXHBIVZEIZ");
    msg.text.assign("LPCKOWBJVUAKCNMYNMPAYHPXRQKJICJXBQSZYGULLIEQMUTVOHKQEMNSYJUJSJTIBCWIWGCEWXWTRGGRDENDZDZCXMIXSPVRDEGJTRSVLVSBQZAMOXHBYNLLIZDHTBKNVWAEGWYFBNYTLPIADNMXELTZRTFLDUF");

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
    msg.setTimeStamp(0.301817251397);
    msg.setSource(42185U);
    msg.setSourceEntity(154U);
    msg.setDestination(4673U);
    msg.setDestinationEntity(21U);
    msg.command = 74U;
    msg.htime = 0.103874037874;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 87U;
    tmp_msg_0.htime = 0.630612417447;
    tmp_msg_0.context.assign("ZALLVNRZQMSMFJFKCTKEDOHVWGBVLJECKZCAFOUYQRQAKJNJDBDRQBXLXNMFVOUBMBUDWFNHUYCORGYBMQHSSPNXWHBWJGSWCPWABPTYFFOOXCVYIJSHHLEGMNOAERZGMUDJQNYEBJOYOQAILHTGFEAIRLPUSWKECXNEPTUNRIATQRPRWYQKEZZIVIHXFLPJSDQTGXPHYYMSDKUTJXEVGUDPKSTZOSGLGLZDPCZV");
    tmp_msg_0.text.assign("VFDMWXRYOXTPNRSRSVCCSZPHLJCWOGGKLPGRFPXXQMUJYIDDXVFTBKPJBCAMUGZYPOADEZVOTMYQSQUEJKKVN");
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
    msg.setTimeStamp(0.247719516168);
    msg.setSource(44609U);
    msg.setSourceEntity(8U);
    msg.setDestination(1503U);
    msg.setDestinationEntity(124U);
    msg.command = 129U;
    msg.htime = 0.6564790692;

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
    msg.setTimeStamp(0.0799733440348);
    msg.setSource(37628U);
    msg.setSourceEntity(18U);
    msg.setDestination(20608U);
    msg.setDestinationEntity(84U);
    msg.command = 67U;
    msg.htime = 0.180032502578;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 72U;
    tmp_msg_0.htime = 0.37376153919;
    tmp_msg_0.context.assign("YFSWJNWHFEVK");
    tmp_msg_0.text.assign("IMWVXOFPDLYOHUUTQMMBKUNFHQEFRGVEJNPPSZSTVSGJUOQFXCTBASIMYLXENCOTTIGABLUUPHQIPHVWQITRENDH");
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
    msg.setTimeStamp(0.914719785531);
    msg.setSource(35402U);
    msg.setSourceEntity(107U);
    msg.setDestination(34548U);
    msg.setDestinationEntity(142U);
    msg.op = 138U;
    msg.file.assign("ABJWJDIEPHPNRNFHLTELYMCHTICPXVXHESZOPWAOGAKNVTU");

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
    msg.setTimeStamp(0.398708293432);
    msg.setSource(51160U);
    msg.setSourceEntity(140U);
    msg.setDestination(30156U);
    msg.setDestinationEntity(124U);
    msg.op = 51U;
    msg.file.assign("ZFCFRNJTVIOYIKVQOWRNUBSTSZJIKNHVMFMYNUXQQOCVWFJXKHFEWMUGMXSVRQCBIJDTBZECTZOZVKFONIGLQNWKBPTPIDHOHJJWEKIYDKZFPSAAAWTLXAXPSCRELGRANKGYQHVBPPTNLIFUPJORUDJZLBBZTJMSLVMRAGHHEEGPMXLFPAEICWRVIAMTBXSNSDBXWZDSCWH");

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
    msg.setTimeStamp(0.247949700033);
    msg.setSource(34293U);
    msg.setSourceEntity(26U);
    msg.setDestination(20053U);
    msg.setDestinationEntity(205U);
    msg.op = 150U;
    msg.file.assign("YNOXSUMPWVBLHCLBKTDIETXFHIPFYEQXJEMNPXJWQCGOMZYAXJEMOIQQQJRNJBSZWXFZZJQKCIAAAYISXBEYMWXFLNJCPHMUTHIKLEKWCNZVSLV");

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
    msg.setTimeStamp(0.552135587829);
    msg.setSource(15970U);
    msg.setSourceEntity(161U);
    msg.setDestination(29690U);
    msg.setDestinationEntity(43U);
    msg.op = 203U;
    msg.clock = 0.490313868154;
    msg.tz = -6;

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
    msg.setTimeStamp(0.759876230565);
    msg.setSource(36110U);
    msg.setSourceEntity(145U);
    msg.setDestination(23859U);
    msg.setDestinationEntity(241U);
    msg.op = 237U;
    msg.clock = 0.922170062556;
    msg.tz = -107;

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
    msg.setTimeStamp(0.512147426715);
    msg.setSource(44710U);
    msg.setSourceEntity(111U);
    msg.setDestination(53010U);
    msg.setDestinationEntity(53U);
    msg.op = 115U;
    msg.clock = 0.352335636056;
    msg.tz = 8;

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
    msg.setTimeStamp(0.325652112851);
    msg.setSource(8526U);
    msg.setSourceEntity(117U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(65U);
    msg.conductivity = 0.967109741982;
    msg.temperature = 0.927675066654;
    msg.depth = 0.634651871126;

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
    msg.setTimeStamp(0.323511221372);
    msg.setSource(45317U);
    msg.setSourceEntity(169U);
    msg.setDestination(39055U);
    msg.setDestinationEntity(84U);
    msg.conductivity = 0.354583066536;
    msg.temperature = 0.808454462956;
    msg.depth = 0.4442336187;

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
    msg.setTimeStamp(0.108691063866);
    msg.setSource(13580U);
    msg.setSourceEntity(185U);
    msg.setDestination(49753U);
    msg.setDestinationEntity(151U);
    msg.conductivity = 0.182795366841;
    msg.temperature = 0.268255969854;
    msg.depth = 0.39654937677;

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
    msg.setTimeStamp(0.817040512828);
    msg.setSource(54328U);
    msg.setSourceEntity(102U);
    msg.setDestination(46647U);
    msg.setDestinationEntity(157U);
    msg.altitude = 0.0383367361228;
    msg.roll = 56000U;
    msg.pitch = 51724U;
    msg.yaw = 32529U;
    msg.speed = -12745;

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
    msg.setTimeStamp(0.281212092024);
    msg.setSource(41922U);
    msg.setSourceEntity(179U);
    msg.setDestination(47692U);
    msg.setDestinationEntity(159U);
    msg.altitude = 0.527810892598;
    msg.roll = 25907U;
    msg.pitch = 46405U;
    msg.yaw = 18100U;
    msg.speed = -12195;

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
    msg.setTimeStamp(0.15241200087);
    msg.setSource(27863U);
    msg.setSourceEntity(185U);
    msg.setDestination(40852U);
    msg.setDestinationEntity(1U);
    msg.altitude = 0.22339991943;
    msg.roll = 20738U;
    msg.pitch = 9965U;
    msg.yaw = 811U;
    msg.speed = 26070;

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
    msg.setTimeStamp(0.205089823051);
    msg.setSource(40445U);
    msg.setSourceEntity(58U);
    msg.setDestination(51058U);
    msg.setDestinationEntity(253U);
    msg.altitude = 0.128980129095;
    msg.width = 0.390858786801;
    msg.length = 0.902539297543;
    msg.bearing = 0.859966074271;
    msg.pxl = -13716;
    msg.encoding = 112U;
    const char tmp_msg_0[] = {79, 126, -110, 40, 54, -102, 107, -14, -116, 98, -93, -87, -115, -67, -117, -63, -13, 114, 112, -16, -78, 28, -65, -64, 9, -41, 40, 3, -69, -55, 22, 102, -42, -32, 56, 43, 49, 80, 97, 112, 68, 97, 22, 68, -3, 122, -50, 106, 25, 39, 1, -10, -61, -97, 44, -29, -49, -125, -90, 101, 85, -7, -51, 57, -53, -109, -86, 35, -28, -26, -48, 59, -128, 105, 23, -122, 96, -2, -7, 71, 71, -47, 60, -78, 31, 5, 42, -36, -27, -107, -1, 104, 95, 105, -76};
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
    msg.setTimeStamp(0.00606722795556);
    msg.setSource(7312U);
    msg.setSourceEntity(239U);
    msg.setDestination(23009U);
    msg.setDestinationEntity(52U);
    msg.altitude = 0.576816665288;
    msg.width = 0.875770579294;
    msg.length = 0.940978343022;
    msg.bearing = 0.453303707452;
    msg.pxl = -22587;
    msg.encoding = 241U;
    const char tmp_msg_0[] = {-37, 29, 73, 11, 55, -59, 88, -17, 108, 21, -105, 123, 8, 29, -26, -36, 59, -70, 6, 24, -124, -14, 85, 55, 73, 33, -28, -97, 29, -75, -92, 57, 19, 11, 49, 86, -22, -36, -15, -102, 94, -51, -63, -57, -111, 48};
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
    msg.setTimeStamp(0.762400927284);
    msg.setSource(13397U);
    msg.setSourceEntity(46U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(24U);
    msg.altitude = 0.0448133431251;
    msg.width = 0.691638775625;
    msg.length = 0.935895486718;
    msg.bearing = 0.182183018528;
    msg.pxl = -24108;
    msg.encoding = 158U;
    const char tmp_msg_0[] = {66, -88, -104, 51, 86, 66, 69, 22, -94, -80, -39, -108, -111, 94, 39, -34, 38, 78, 30, -1, 49, -102, 126, -73, 31, 100, -19, -18, -66, -113, -106, 97, -88, -107, -32, -118, -38, -44, -92, -119, 99};
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
    msg.setTimeStamp(0.82673599781);
    msg.setSource(31590U);
    msg.setSourceEntity(158U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(91U);
    msg.text.assign("UMWRFXPEBXONWZRGODLWNWYVNDKMGADHZGRZOTPHFUFJOLFHVVSPBCCQTIJCFLQDWDHDJVYZVYQZLELNHMHMDRVQMFKENBPZMKRJKRXBVOSIHMBJSLEBPOKNJQTEICWTLSDPSKUQJOWSXBGTAAKYUCLMKUFKEBEIUNWZSOYXEKHTGUYGDPGPYXYVFIXXSFIABWTGZHR");
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
    msg.setTimeStamp(0.938516586299);
    msg.setSource(38341U);
    msg.setSourceEntity(108U);
    msg.setDestination(39107U);
    msg.setDestinationEntity(21U);
    msg.text.assign("YMGKQYPUVHUZBXNSMJXCQDAZGFNXBDLZFNFOHCDTPSAZFLDCSBRABSBOIWEEKVOYEDWKGHMXUJKKQPJLVWOYOWPWGWPNLCLQEQTPHDYAZJBRDSFHZMIJGEVSMICHMVOCUIDFGIZADQLQHMHONJXXALLAXIXYKOYRZQXVJTWLTSXDQUSHVJPHZTVRFNKEYNKVATTTJRPFBMCCUICOMIVESTNRNBKUMGQAU");
    msg.type = 214U;

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
    msg.setTimeStamp(0.417713498437);
    msg.setSource(47506U);
    msg.setSourceEntity(51U);
    msg.setDestination(2173U);
    msg.setDestinationEntity(37U);
    msg.text.assign("ZRUEZIWMRARQYPVYKXHCUIGUCNPFOJQBZMNZGTXTHJWWJBWENXSDTEDYUSMAR");
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
    msg.setTimeStamp(0.0425249692234);
    msg.setSource(49505U);
    msg.setSourceEntity(194U);
    msg.setDestination(57773U);
    msg.setDestinationEntity(133U);
    msg.parameter = 55U;
    msg.numsamples = 250U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 63200U;
    tmp_msg_0.avg = 0.697507860566;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.397488595609;
    msg.lon = 0.706562554932;

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
    msg.setTimeStamp(0.248629010018);
    msg.setSource(21070U);
    msg.setSourceEntity(86U);
    msg.setDestination(56814U);
    msg.setDestinationEntity(207U);
    msg.parameter = 71U;
    msg.numsamples = 118U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 49580U;
    tmp_msg_0.avg = 0.880178864191;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.404701922497;
    msg.lon = 0.416516980622;

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
    msg.setTimeStamp(0.388115430139);
    msg.setSource(47293U);
    msg.setSourceEntity(43U);
    msg.setDestination(31308U);
    msg.setDestinationEntity(150U);
    msg.parameter = 6U;
    msg.numsamples = 198U;
    msg.lat = 0.725644359596;
    msg.lon = 0.327793877365;

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
    msg.setTimeStamp(0.739481214527);
    msg.setSource(29782U);
    msg.setSourceEntity(105U);
    msg.setDestination(6842U);
    msg.setDestinationEntity(116U);
    msg.depth = 61981U;
    msg.avg = 0.0990020042388;

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
    msg.setTimeStamp(0.932558075459);
    msg.setSource(56129U);
    msg.setSourceEntity(183U);
    msg.setDestination(46383U);
    msg.setDestinationEntity(157U);
    msg.depth = 56748U;
    msg.avg = 0.17049478551;

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
    msg.setTimeStamp(0.519167171824);
    msg.setSource(48714U);
    msg.setSourceEntity(33U);
    msg.setDestination(58411U);
    msg.setDestinationEntity(110U);
    msg.depth = 27342U;
    msg.avg = 0.123112423698;

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
    msg.setTimeStamp(0.536328916024);
    msg.setSource(6084U);
    msg.setSourceEntity(242U);
    msg.setDestination(45730U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.765460097956);
    msg.setSource(38484U);
    msg.setSourceEntity(5U);
    msg.setDestination(11241U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.193000639181);
    msg.setSource(46194U);
    msg.setSourceEntity(182U);
    msg.setDestination(8753U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.729177433064);
    msg.setSource(42717U);
    msg.setSourceEntity(131U);
    msg.setDestination(15558U);
    msg.setDestinationEntity(254U);
    msg.sys_name.assign("QIJMMFAODXBOVORSRESNCPXLTSWGVKZBAUABLGVPQJAFXZCBNXHWOIXBJFDDUHRUCLTHCWVNDJHYITZFCFHHRJNGSJTVLGXSRFRXAPOKNORYCQZU");
    msg.sys_type = 243U;
    msg.owner = 15416U;
    msg.lat = 0.794927525161;
    msg.lon = 0.311243045922;
    msg.height = 0.182993967052;
    msg.services.assign("BDWDPGOYFGDUKUFFRQDJBTBHFPCKIGSQATMTWIXEVHLNQLQCTILMERPOYTEKEWDXWQHXJFMUPKDGIRKVWBQSHZOPMYRGZYIBOKAUZVANNTTXLRVUKPEXHYCSWGNAJMOAOOWLXSQJRPAVSHCIKXHOFAXKZNRHCNAIGABDRF");

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
    msg.setTimeStamp(0.876440481684);
    msg.setSource(27096U);
    msg.setSourceEntity(211U);
    msg.setDestination(62434U);
    msg.setDestinationEntity(71U);
    msg.sys_name.assign("UQAZWQKLPCWVZDCEBDXPDRJNYZOJQTNSSPXDHUPULZOMVWLIBIAOXSEKVEJKNWLPXSOFIUMRBCBVOYPQJSLMKRTTOXTBEMECEXBGIRZDHBGLZBFXOCTSCGESZMQIADMGXSYFPHHVGGJFOKVHIRHABUWTNNLCCGQKRFKZAVDEAMDUD");
    msg.sys_type = 133U;
    msg.owner = 4458U;
    msg.lat = 0.176275287716;
    msg.lon = 0.767096574501;
    msg.height = 0.621193317183;
    msg.services.assign("ETTDVVXGSTJUVMLKHOMAIRHBUEWDBHRXZOGSOEJVCKUANIUCCTVCMEEFLYUEKABPKWRDRYNTROMOYEBNRUBLNIPQIDKWLSAIYQAYSVQGJFNAEIXZZHZQJHRLX");

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
    msg.setTimeStamp(0.222619431144);
    msg.setSource(58891U);
    msg.setSourceEntity(93U);
    msg.setDestination(820U);
    msg.setDestinationEntity(253U);
    msg.sys_name.assign("PBOUQHKBKZNIHVRCSMXMAPBEWJESIQBAXOE");
    msg.sys_type = 242U;
    msg.owner = 45310U;
    msg.lat = 0.304124443719;
    msg.lon = 0.805685708846;
    msg.height = 0.432770331305;
    msg.services.assign("CAWENHGBRZUBUKUJPCZFMYFETUUTDLOSFWYSAPCWDCCTXGHYJYXWSPOATMYOKEQSAQDJNTVXOVIPWCRVVVCNFRADWRTEYFMTOEKSAYUQPZGHYUSNZERUMTTNXGJMKPWOEXVZIHWLIXVFAQGMBXLVLKGJXIDDIMVZ");

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
    msg.setTimeStamp(0.64541443667);
    msg.setSource(20183U);
    msg.setSourceEntity(210U);
    msg.setDestination(30553U);
    msg.setDestinationEntity(70U);
    msg.service.assign("WJUENBROWKICPLBOGNSIVDXSTGPZGRAGLDAHSGQXRUEOHEWPJXJNVABNXZJKQULMEQHWCDSTWVZINUBJQQHMKBKFLYVRKHYCFADBXSIXZJEJMZJFTYOCEPNCBZLYCFIQYTCLRMDHVJXYBDSTWYUSOQFBAHOKCURTCWUGRPVHDVAFYAKWPGASQMDIQWMEFRZNFSEEKPRYSONAVVONQGTLHGZIMU");
    msg.service_type = 234U;

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
    msg.setTimeStamp(0.839057787441);
    msg.setSource(34713U);
    msg.setSourceEntity(120U);
    msg.setDestination(36364U);
    msg.setDestinationEntity(85U);
    msg.service.assign("MOREDXNDYVWIFQDQQMIKLMBGWRVKDATZJPWHVWFCFEOMGVNBNAZNPKSAZHRXYRFYCTEOWSJGHROABYFZEMPLSEONOUOVQSYRNSMJTGXEPHZITUVXQXHWBMZCAODJNTQTPQUHADDBLGKTZJUNGXA");
    msg.service_type = 98U;

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
    msg.setTimeStamp(0.159393636984);
    msg.setSource(43452U);
    msg.setSourceEntity(174U);
    msg.setDestination(34387U);
    msg.setDestinationEntity(172U);
    msg.service.assign("GOIVPCWXGMYJLRJLQMXPDVENZFEQXSLTISMVGNRCXGPWOPYKPAGXLUKZITIBUHDOTJFRWLKNSXKWCBAJFGFNGIENTFMQOOJSKCYEKTMCLTAZHSBDWUSHZAPRMCJYEQRAGYHSCZFIVOPAURR");
    msg.service_type = 243U;

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
    msg.setTimeStamp(0.72693685927);
    msg.setSource(442U);
    msg.setSourceEntity(193U);
    msg.setDestination(3797U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0511269558901;

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
    msg.setTimeStamp(0.904764863155);
    msg.setSource(6383U);
    msg.setSourceEntity(4U);
    msg.setDestination(37973U);
    msg.setDestinationEntity(187U);
    msg.value = 0.347170747201;

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
    msg.setTimeStamp(0.159595771205);
    msg.setSource(23203U);
    msg.setSourceEntity(116U);
    msg.setDestination(16182U);
    msg.setDestinationEntity(188U);
    msg.value = 0.479237549163;

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
    msg.setTimeStamp(0.739890376729);
    msg.setSource(6489U);
    msg.setSourceEntity(117U);
    msg.setDestination(14726U);
    msg.setDestinationEntity(75U);
    msg.value = 0.757670421926;

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
    msg.setTimeStamp(0.591533049455);
    msg.setSource(49217U);
    msg.setSourceEntity(99U);
    msg.setDestination(32007U);
    msg.setDestinationEntity(85U);
    msg.value = 0.184324275033;

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
    msg.setTimeStamp(0.786226482965);
    msg.setSource(28234U);
    msg.setSourceEntity(139U);
    msg.setDestination(18596U);
    msg.setDestinationEntity(12U);
    msg.value = 0.263478709708;

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
    msg.setTimeStamp(0.45668245317);
    msg.setSource(19583U);
    msg.setSourceEntity(139U);
    msg.setDestination(11460U);
    msg.setDestinationEntity(103U);
    msg.value = 0.791495544824;

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
    msg.setTimeStamp(0.544768285193);
    msg.setSource(49201U);
    msg.setSourceEntity(64U);
    msg.setDestination(25730U);
    msg.setDestinationEntity(60U);
    msg.value = 0.647832606125;

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
    msg.setTimeStamp(0.445597534894);
    msg.setSource(57224U);
    msg.setSourceEntity(242U);
    msg.setDestination(48471U);
    msg.setDestinationEntity(76U);
    msg.value = 0.872972896635;

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
    msg.setTimeStamp(0.772372917123);
    msg.setSource(61222U);
    msg.setSourceEntity(177U);
    msg.setDestination(56993U);
    msg.setDestinationEntity(80U);
    msg.number.assign("OJIIVUMGDJGASRMIQUEYDUQMMNVLGIZRFKGLSSQAAXSPKGWXQUHRTQBSWKERWFVEBFZXYBAOMGQFNMZXVTHIYHUSJJVRPPWVTQLJWZDWLDUONAEPHLWOOXSTSRHJJHKKBBLTRNHCCXOAOAFVOPRDTSLDBXCNEQYXUEPKWFAZNRDHINMJWPGKKDZYZIMDC");
    msg.timeout = 27812U;
    msg.contents.assign("FEGINLKBOROQMSJMJLYHWTAVANPYGOBODJMQFMJVOISBZULPRDQIVXUCGTXHSSQUCGLREFTUFWTPGPRQHYKADJHOXGVMYETEVRNJRNCYKUIKLBHSHYEIYPOKZBUVHFTFDZIGDKUDZYSXCLXXGWNFNXKGVWWRWZJHUBGBRAQDCKAQXDHVYPCBMJEPNASTAOSZWHXRZJSUMBTPCERKQFQMNLXTPOAMEVY");

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
    msg.setTimeStamp(0.0124853433658);
    msg.setSource(64615U);
    msg.setSourceEntity(251U);
    msg.setDestination(15347U);
    msg.setDestinationEntity(0U);
    msg.number.assign("XNKKAWEEFMSNFHVKVYEQRHRAERJPTSDKTEVTDYLFAGWNPOEBZZQQRJCCCEQSOOVSYZGLFYXRJZGOXNKMPOOSCNCCPIBUXGIMBHTHMYTCWWKLQMRNQBJJUXLFMPSYXBXAIMRNKXPCAISIYUHVWASWLCZVDXDVZRUPQVITEFHNWIJABYVJHJOSAIVFFUGGGZAJPULQHIWKG");
    msg.timeout = 59631U;
    msg.contents.assign("TNLRLQGOZIECABIVZCWSVNQCJDGWTAELUQDKKGSMVFFXHTJI");

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
    msg.setTimeStamp(0.317503095495);
    msg.setSource(7270U);
    msg.setSourceEntity(219U);
    msg.setDestination(58904U);
    msg.setDestinationEntity(140U);
    msg.number.assign("PSYDTJGCCORNOFERMCHLCSVALEWBZRMIBBCHZQGUDESEHYFUXRTLSGEVQOJZNMGWTMZFHRLYYNGWXNXQNZILJCMWFXKJSWHPPGXQBFZYEPAIUKOIBWPRJZWPHQLKLIRTWATYFAXSTUTNJVJSBVYNBFUXDNIKKKQNKUDUDMBADCRWPFUIVTHOPPGCVYBSULAVYEVJCAIMJIBHDIXGXEVCHEXKOSAWKQMKMDTAAGLDZFOMZTV");
    msg.timeout = 28420U;
    msg.contents.assign("QCVEAHBDRLFVZVVCCZGSTWUHJMGOMAJGHGRKBJAUNYMESHFEVJDOQFCQQFTZMRITYC");

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
    msg.setTimeStamp(0.449863726956);
    msg.setSource(48762U);
    msg.setSourceEntity(129U);
    msg.setDestination(10732U);
    msg.setDestinationEntity(110U);
    msg.seq = 4077429495U;
    msg.destination.assign("TDPNFPROGKHRYZTBGXOFYJLXEJPZZKRUOFDDDOUSAKAZEBDBHNURVGZWNUCUHVXMDYVMCLXLLTNXVTLWMYWSRSXQTOKVOBZUHLDNRVEJBYIHJPVGSLCNQTRDKQJSFJPAZNBKVJYHJALACVCMXTQEPEWAIBQSNBFMGF");
    msg.timeout = 38275U;
    const char tmp_msg_0[] = {-74, 12, -7, 23, 19, -70, -61, -27, -79, 33, 116, 66, -41, -36, 87, -51, 22, -95, -21, 117, -8, -113, 36, -93, -64, -98, -20, -76, 76, 45, 99, -41, -91, 111, 118, 121, 51, -14, -37, -30, -126, 45, 9, 28, 101, 81, 59, -18, 23};
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
    msg.setTimeStamp(0.758002896871);
    msg.setSource(29766U);
    msg.setSourceEntity(121U);
    msg.setDestination(1514U);
    msg.setDestinationEntity(74U);
    msg.seq = 1930484530U;
    msg.destination.assign("VGZMNCGSTMYZRFVNBFDHTHCYSMHEPMXKANIRJSEJVRJLLFVRGMAGKMWMQECQAYHZIQVCRDFDJIJLEBYKKNKALWJKWEUWEOPDQYGPZHBQTKUD");
    msg.timeout = 1498U;
    const char tmp_msg_0[] = {-77, -6, -24, 17, 65, -108, -47, -45, 74, -11, 61, 57, -104, -1, 125, -55, -103, 20, 62, -95, 126, -115, 98, 12, 75, -45, 55, 48, -15, 71, -60, -105, -112, 27, -118, -18, -90, -28, 103, -92, 48, 75, -42, 18, -44, -121, -12, -116, 116, -53, 31, 77, -40, -17, -46, 5, 92, 103, 60, 83, -40, 29, 85, -67, -21, -64, -78, 11, 120, -3, 102, 115, 12, 81, 79, -90, -85, 7, -108, 35, 78, 29, 51, 125, 110, -14, -9, 3, -114, -49, 112, -20, -124, -11, -116, 117, 126, -29, 51, 25, 100, -36, 50, -27, 123, -119, 75, 90, 63, 64, 64, -15, -112, -90, 100, -38, -4, -58, 114, 42, 14, 18, 113, 62, -43, -79, 106, 25, 76, -100, -79, 43, -64, -7, 12, 49, 110, -124, -18, 102, 68, -11, 105, -43, -99, -111, 81, -23, -81, -48, 106, -66, 20, 40, 34, 14, 113, 122, 102, 3, -32, 30, 31, -48, -112, 109, -74, -2, -63, -106, -41, -72, 26, -58, 52, -52, -72, 89, -42, 23, 81, 62, 114, -51, -65, 57, 11, 58, -81, 68, 52, 61, 28, 63, -83, 30, 79, -91, -49, 90, 82, -27, 60, -94, 52, 86, -44, -45, -86, 116, -106, 45, -108, -64, -46, -85, 34, 104, 65, -52, -37, -96, 21, 34, 49, -127, 125, 90, 0, -76, -24, 86, 104, -128, 19, -24, 1, 123, -23, 1, -31, 119, -17, 120, -90, -6, -45, -16, -50, 58};
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
    msg.setTimeStamp(0.850193361777);
    msg.setSource(37004U);
    msg.setSourceEntity(136U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(225U);
    msg.seq = 2757690090U;
    msg.destination.assign("HPTXOLAESOGXJSWCIEXICZGHNQQOSZJZJUHHRJNAKFIAILQHFRQELUPDCBPCPGSZXQKQ");
    msg.timeout = 46592U;
    const char tmp_msg_0[] = {-21, -85, -83, 29, 76, -25, -106, -58, 69, -18, -37, -18, 124, 26, 42, -57, 15, 0, -70, 40, 53, 55, -104, 53, 98, -80, 7, 75, 17, -51, 66, -7, -90, 9, -59, -25, 88, 84, 41, 110, 68, -117, -128, 68, -72, 117, -5, -11, 112, -46, 38, 38, -75, 76, -111, 71, 22, -121, -35, -55, -33, -120, -125, 54, -107, -2, -58, -66, -77, -114, -85, -104, -99, 23, 109, 53, 59, -60, 89, -107, 39, -100, 98, 12, 114, -98, 58, -100, 60, -49, 70, -28, 50, 99, -37, 67, 14, -115, 118, -126, 71, 2, 118, 19, 9, 104, -89, 14, -120, 86, -106, 76, -16, 59, 94, 58, 39, 111, -68, -124, 4, -22, -105, -27, 70, 20, 94, 117, 116, 13, 93, 122, 126, 112, -117, -117, 22, 71, 31, -9, 116, 89, -2, 84, -94, -107, -25, -90, 66, 80, 103, 84, -14, -120, 29, 106, -39, -89, 34, 58, -100, 123, 88, -91, -81, 117, -37, 49, -101, -83, 68, -125, -4, 88, -2, 57, 84, 65, 82, -66, -22, -80, 101, -77, -62, 25, -59, -82, 113, -16, 62, 93, -114, 27, -18, 41, -108, 11, 13, 58, -55, -119, -124, 22, 108, 39, -39, 60, 92, -104, -18, -2, -9, 10, -101, -68, 94, -90, 114, 66, -37, -29, -101, -35, -96, -35, 112, 9, 53, 70, 47, -87, 23, 75, -56, -98, -58, 83, -68, -84, -58, -81, -9, 60};
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
    msg.setTimeStamp(0.925514171668);
    msg.setSource(22520U);
    msg.setSourceEntity(184U);
    msg.setDestination(39094U);
    msg.setDestinationEntity(120U);
    msg.source.assign("RELZBJONPPNPHTIBRYRGSSIUCQIGUFRFFNSVDCCAKZBFZDLCDMXLZEZICKLOEIQEXGAVWGJUHILCJSFSBZNPVTYYBUVDWOZDKGKIJEFDKVXZSOBYMWMV");
    const char tmp_msg_0[] = {-63, 45, -70, 32, 104, 70, -6, 70, 19, 97, 59, 101, -26, -2, 48, -83, 2, -93, -61, 122, 21, -103, -45, 84, 35, 51, -127, 80, 51, -64, 123, -49, 64, 89, 81, -11, 44, -40, 83, 8, -82, 106, -10, 90, -58, 114, 116, -35, -35, -82, 63, -48, 61, -33, -60, 3, 26, 49, -77, 52, 30, -68, -13, 50, 84, -92, 119, 63, -51, -119, -112, -38, -62, -105, 40, 54, 115, -104, 5, 118, 26, 48, -38, -100, 102, 69, 32, 108, 77, 109, 32, 61, -99, -67, 111, 4, 8, 43, 86, -121, 100, 1, -55, 48, -55, 29, -56, 62, 60, -41, 17, 107, 102, -69, -81, -30, 22, -84, -128, -84, -29, 120, -31, -61, -71, 50, 72, -96, 109, -100, -53, -41, -89, -105, -1, -82, -2, 1, 69, -70, 3, -21, -70, 105, -91, 116, -43, 24, 8, -38, -105, -76, 78, 3, -35, -49, -78, 11, -110, 0, 63, -124, -54, 81, -71, -42, -119, -12, 68, 122, 8, 37, 115, 25, 50, 6, -1, -62, 43, -12, -75, -24, 43, -69, -63, -39, 52, 25, -114, -48, 64, 38, -65, -32, 72, 8, -11};
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
    msg.setTimeStamp(0.49853151432);
    msg.setSource(62253U);
    msg.setSourceEntity(59U);
    msg.setDestination(8693U);
    msg.setDestinationEntity(168U);
    msg.source.assign("IPDPVKCUHNECHSHGTLEYUHGPDLYDJVXVBBQEFLNQMOBDLRIFSTRSEGVPWTYZCGKTWYZI");
    const char tmp_msg_0[] = {98, -1, 76, -74, -39, 95, -56, 77, 63, 37, 56, 123, -36, 41, -87, -85, 87, 67, 102, -34, 115, 43, -105, 16, 16, -47, 106, -64, -3, -48, -49, 118, 72, -29, -44, 39, 107, 33, 122, -15, -107, 37, -45, -95, -52, -116, 82, -17, 97, 78, -10, -75, -56, -77, -68, -106, 22, -32, -1, 61, -122, -2, -39, -47, -17, 2, -66, 101, -107, -16, 10, -119, -33, -118, 121, -101, 40, -58, -121, 78, -8, 109, -108, 47, 101, -84, -25, 3, -116, -15, 95, 116, 45, 110, 32, 1, 3, -64, 102, 19, -117, -116, 102, 74};
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
    msg.setTimeStamp(0.707854123423);
    msg.setSource(19321U);
    msg.setSourceEntity(20U);
    msg.setDestination(57934U);
    msg.setDestinationEntity(118U);
    msg.source.assign("ONGQUUUUXYHECYPXSFAGJZDRYV");
    const char tmp_msg_0[] = {68, 121, -123, 34, 112, -37, -81, -95, 120, 99, -63, -49, -33, 66, 22, -3, 91, 53, -121, 92, 34, -71, -108, -13, 32, 124, -118, -15, -42, -3, 11, 8, 26, 49, 75, -125, 90, 43, -31, -66, 39, -119, -55, -2, 95, -27, 55, 109, -128, -29, -76, 9, 120, 98, 43, -100, -67, -80, -116, -35, -19, -106, -36, 52, -62, -40, -105, -102, -54, 38, -83, -97, -122, 25, 109, -14, -9, 111, 92, 84, -69, -81, -106, -53, 111, 119, -103, -107};
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
    msg.setTimeStamp(0.100219511951);
    msg.setSource(21898U);
    msg.setSourceEntity(19U);
    msg.setDestination(18236U);
    msg.setDestinationEntity(114U);
    msg.seq = 640307723U;
    msg.state = 21U;
    msg.error.assign("ASLIFYCAHZUGQDBQKXLJYMAEDVLFQUHRGUAQECPYBJVTPYTGAYWGLYRPNYBWVXLUVSHNCOJEWQRAYEJZRGWAUDZIBEMPWZLDSLTCFBTFSOHTMOQDTMQHCRIOCGNIDTMIIQTJOGUOQBXVVBDRKXSZHNZCNIKDWOVHWHMEIXEZOKOTKBVJFIFCSJGKPLZNSHYFWMV");

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
    msg.setTimeStamp(0.728356997648);
    msg.setSource(35389U);
    msg.setSourceEntity(43U);
    msg.setDestination(3774U);
    msg.setDestinationEntity(176U);
    msg.seq = 1606072654U;
    msg.state = 137U;
    msg.error.assign("JTDXZWYLEKDMPBUMOKBDOSGSGCBYROLKPIGAVKHOGABCMQOLMGLMKKEYEYQSWGGBFREWPDBBQKAFJDAPEPXNIREIMSTIWVRPJBFLCPRVRRUWREUXKXFUYIAHQLVHAFPVKBYJZWXAURMZDHVQRAQCYTFZQAZHNTBIAQKSICSGXZQLCWCYHVZOXJXPNUTECVZCSZUJOJQWDNSWUNHDLMHTSJGTDFWENIFXLXOTEYH");

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
    msg.setTimeStamp(0.157820507753);
    msg.setSource(23723U);
    msg.setSourceEntity(70U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(14U);
    msg.seq = 2727839432U;
    msg.state = 46U;
    msg.error.assign("FATCAYYEGJVYQRZZTHPNGZRPIZYGUNSGWZXPNVLGTEFVOUBNQXHYDKMCEQOXFJEFXRSPMZLIECHXYSWCTUFKGTVHZVTAXQOLICLMLOYLXDQJJHXHABARSQMSBRBKORN");

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
    msg.setTimeStamp(0.376800983202);
    msg.setSource(40417U);
    msg.setSourceEntity(105U);
    msg.setDestination(1775U);
    msg.setDestinationEntity(211U);
    msg.origin.assign("LVBXZTVXIJYGAQPAVUUDUJEIGWOCKDOHWRGLSACFMXOZUKKDCBWDMDPBUCSTQEKBJSPNMQTXOGIEZURMFKNNTYLLQIAQVQSWBTCHKNEDZFWZBDIVOKBXTHHPICGUWMPXZARFQYYIJJMFEFITOLDVHDHPPTABGACGFHSZQPOUNRJRWIYRCMSAADXVWTSCFYJKTKUQORLHEFSWVHGPZORMLEGSUZWFYMJELJEXRVJNBOYVICLMYPGQAYENXNNSZ");
    msg.text.assign("VREEHSTHTKDZOSPCKMHSVUBWRBF");

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
    msg.setTimeStamp(0.210304638565);
    msg.setSource(21664U);
    msg.setSourceEntity(16U);
    msg.setDestination(34363U);
    msg.setDestinationEntity(229U);
    msg.origin.assign("CICFUPNLPCFEQFFOKOTYBRCOYQRLNTGLVEVYWXBFNGDQGKCASSZYMBKPPWNAPQXTYWIFDTAXMPJEHESMPE");
    msg.text.assign("WWLMEHVVYEAAIFPKXLNIJJHWRWUGWOOGYRDVTGZDPKBTJXWQDHTSECXKPR");

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
    msg.setTimeStamp(0.787199172482);
    msg.setSource(8446U);
    msg.setSourceEntity(98U);
    msg.setDestination(2870U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("BYOFKCQKWOFLHBFAPIOMLABSZPZJYWLUKEXFABLIVMOZVHDTCEKIDTRBYSGWTWZQRSIGRBVMFJQKJPFAHYUEQRMTRYUOHSJSMUMGFQPNAYXPVKMAILLVPPCDKDOHSMELJJRSJTQZOAQEEANYWWXEFKIUBXQIGQBDDG");
    msg.text.assign("FCVPNAQYXPDXNJYHEDNEPTXBIJGSEUFGVLFHRVZCOWFYSAMCKEWTKLXVXMVWHBIMTXOJKWQUNBSYOCGGHJ");

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
    msg.setTimeStamp(0.753734637924);
    msg.setSource(27363U);
    msg.setSourceEntity(232U);
    msg.setDestination(47529U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("MDZBIGFFGRBUTQTXCUEPXHVWYLCXKOGMOKZLRAJHCJDBYVJHEGTNFLRUISUOOHT");
    msg.htime = 0.164094415939;
    msg.lat = 0.339854035958;
    msg.lon = 0.0469651250204;
    const char tmp_msg_0[] = {62, -38, 79, 59, 64, 31, -20, 56, 4, -121, -109, 95, 5, 100, -24, -82, -64, 90, 52, 98, -20, 94, 46, 32, 114, -37, -111, -51, 116, 51, -70, 67, 11, 106, -73, -34, 77, 111, 34, 82, -71, 6, 7, -65, 40, -79, 85, -113, -117, 104, -116, 125, 40, -26, 23, -119, 105, 69, 61, -60, -3, -41, -96, -110, 2, 39, -29, 51, -27, -94, -28, -98, 31, 109, 61, 93, -16, 54, 104, -40, 95, -54, -32, 44, 66, 17, -9, -63, -47, 16, -8, 75, -94, 46, -54, -45, 10, 70, -51, -123, -122, -115, 68, 86, -122, 2, 48, -114, -62, 66, 37, -115, -20, 100, -52, -117, 63, -29, -98, 7, 99, -16, -9, 91, 29, 19, -69, 60, -66, 73, 50, 81, -48, 15, -72, 64, 102, -77, -110, -52, 101, 16, -113, -93, 115, -80, 82, -95, -38, -26, -4, -37, 44, -93, 78, -128, -66, -87, -3, -36, 67, 36, 79, -119, 69, -75, -65, 86, -37, -128, 106, 77, -99, 33, 17, 21, 79, 122, -57, 64, 91, -7, 102};
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
    msg.setTimeStamp(0.477531676273);
    msg.setSource(54414U);
    msg.setSourceEntity(107U);
    msg.setDestination(51493U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("FMSRSGPGTWDRBZQGQIUCTISJLAGOWMBDEQTWCBVLZLYKHHJGD");
    msg.htime = 0.884644501976;
    msg.lat = 0.181275140721;
    msg.lon = 0.662249797859;
    const char tmp_msg_0[] = {-62, 105, -22, -110, 8, -77, -22, 41, 121, -117, 64, -95, 73, 57, 47, 8, -62, -119, -37, -5, 55, 81, -10, 74, 7, 105, 35, -94, -50, -34, 48, -101, -2, -85, -52, -101, -50, -20, 101, 4, 85, 12, -1, 109, -91, 68, 110, -49, -96, 74, 84, -99, -124, -16, -102, 53, 60, 99, 109, -42, 119, 97, -101, -30, -1, -1, -56, 83, -97, -102, -18, 80, 41, 17, -80, -104, 55, 82, 100, -50, -13, -99, -117, 124, 123, -66, 14, -39, 103, -89, 32, -101, 26, 9, 46, 45, -98, 35, 84, -33, -23, 65, 95, 72, 123, 108, 42, 30, 87, 82, -80, -121, -18, 113, -11, 47, 17, -50, -115, 35, 61, 82, -87, 119, 79, 77, -27, 86, 80, 23, -54, 81, 47, 2, 61, -32, 72, 101, 124, 81, -36, 76, -56, -30, -65, 113, -47, 20, -26, 124, -33, -94, 50, 82, -38, 51, 62, 93, 32, -128, 25, 45, -14, 36, 100, -89, 97, 114, -27, 0, -36, 115, -25, 57, 100, 40, 95, -52, -44, -82, 90, -25, -85, 51, -100, 33, -40, -5, -49, -78, 113, -85, 87, -117, -4};
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
    msg.setTimeStamp(0.754522874219);
    msg.setSource(47865U);
    msg.setSourceEntity(203U);
    msg.setDestination(25655U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("KEJLFMEEVZRRSNLQQNUYPJECASKISLMGMT");
    msg.htime = 0.702671638842;
    msg.lat = 0.421415088356;
    msg.lon = 0.0707485970225;
    const char tmp_msg_0[] = {14, 121, 110, -42, 106, 84, -39, 8, 120, 108, -61, -34, -76, -94, 23, 2, -35, -16, 31, -104, -36, 55, -57, -14, -100, 114, 40, 93, -29, -83, 21, 2, 95, -92, -18, 110, -82, -26, 39, -37, 74, -108, -110, 2};
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
    msg.setTimeStamp(0.41787794179);
    msg.setSource(15024U);
    msg.setSourceEntity(186U);
    msg.setDestination(56033U);
    msg.setDestinationEntity(144U);
    msg.req_id = 11229U;
    msg.ttl = 56267U;
    msg.destination.assign("NYZQDJSHNEERGKZMNNIAMFYALYBGZDSRBOQJPUBDKOFLASRGZURDRQBGUSQXCHWTBHOAOCFUXDXZYKWCUKMDAFNGJSHSVGFBEOUCDNBZMRXKBOSKGTCTWVEXTNPQNZIKLCARXPMTLJHUFDCFAHVWMVEEXLLPVHVRITQXORUJFDJLIUVYWWBIPDPAXVZUWNIQMFEGTQPEOYJAIGOSQHTIZJ");
    const char tmp_msg_0[] = {-37, -91, 106, 15, -70, -23, 64, -15, -108, 90, 82, -31, -92, -23, -49, -36, 51, 97, 82, -60, 49, -29, 11, 109, 59, -18, 101, 91, 29, -113, 18, 115, 16, -127, -123, 102, 40, 41, 114, -10, -117, -75, -123, -62, 4, 103, -87, -77, 107, 74, 86, 20, -107, 106, 16, -15, 68, -93, 106, 74, 126, 47, -54, -15, 115, 37, 110, 15, 51, 20, 3, 44, -46, -99, -77, -51, 24, -35, 72, -62, -118, -69, -126, 104, 86, 63, -58, -61, 80, -100};
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
    msg.setTimeStamp(0.178216614829);
    msg.setSource(18533U);
    msg.setSourceEntity(139U);
    msg.setDestination(28175U);
    msg.setDestinationEntity(10U);
    msg.req_id = 50564U;
    msg.ttl = 48407U;
    msg.destination.assign("MJSSNRZWQGOQYMDDUMYARSBMTQWMTMNFZYUFUQSVPWEGIMAYGJFVDBPHLNRQLLKYZV");
    const char tmp_msg_0[] = {105, 25, 109, 0, -16, 16, -126, -72, -121, -98, -78, 94, 33, -15, 91, 10, 0, 73, -17, -8, 65, 93, 111, -31, -49, 48, -3, -74, -50, 24, -89, -46, -97, -124, -37, -6, 66, 97, -16, -58, 121, -8, -70, -55, -17, -81, 5, -61, 95, -86, -106, -74, -77, -48, -127, 82, 8, 108, 97, 1, -23, 94, -27, -57, -116, -85, 35, 107, 104, 19, 7, -62, -92, -106, -56, 3, -45, 0, 118, -29, 19, -118, -68, -72, -86, 117, 25, 120, -7, 54, -7, 49, 97, -123, 91, 126, 124, -79, 54, -122, -59, -109, -44, 22, -63, 68, 74, 19, 20, 114, -66, 20, -103, -25, -74, -15, 65, 114, -30, 4, 2, -37, 18, -107, 0, 115, -37, -32, -126, 9, -18, 60, 24, -1, 39, -107, 30, 120, 9, -39, 111, 75, -13, -123, -36, 66, -107, 68, 80, 110, -25, -109, 27, 26, -95, -16, -22, -91, 108, 3, 63, 74, -26, -13, 53, -34, 71, 56, 79, 90, -98, 59};
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
    msg.setTimeStamp(0.577397535554);
    msg.setSource(32432U);
    msg.setSourceEntity(119U);
    msg.setDestination(64162U);
    msg.setDestinationEntity(135U);
    msg.req_id = 61099U;
    msg.ttl = 49909U;
    msg.destination.assign("HNGFIKSRMRJOTILIBUNHXMCWVGIGMSFZYCUGSLOACCJEPWGIRTLJQKVNFSJDPPQQLLFTLBKCCWVXLSGQOCAQTZMQRLASUBOHUEDEYAHREIXZMNRAPJZPHSXJKIDHYYZUUQDQOMANZKXPZCHZDMOAFBIVYXVTTWBVXBPPJIWSIVUYGSSBMHNXOOWYMPVXKOJFFNWZRRCVLQCJETBEZTEWWYYYNAGFEOKDEFADTTUUAPDRNMGKEFWKXBRDHLQ");
    const char tmp_msg_0[] = {67, -34, 64, -106, 83, -34, 80, -93, 116, -26, 40, -48, 39, -105, -88, 29, 32, 50, -107, -51, -119, -15, -106, 65, -78, 74};
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
    msg.setTimeStamp(0.191569751468);
    msg.setSource(13691U);
    msg.setSourceEntity(100U);
    msg.setDestination(14985U);
    msg.setDestinationEntity(32U);
    msg.req_id = 36206U;
    msg.status = 80U;
    msg.text.assign("GAGQUJLMKJJMDUOUCVRKNIBLPNIEQQAWEXXWGJIGFHFMXBKAWLZVSUDXFRALYEWHQOOUCKUVCDRTCLSQDMDXMVIWPTGTAHCCEFEOHMAKOKZDIQBFXYFGXASYTHWSJSMVAANYZOFPUBNKCJJFXZGPJZRCAFSFTLBUHOJBZYRZRGWDNBVDVSITZYLHRWQHISMTMYVXULDKGRCWKNGRYLIOZNNVSUHIQQJTPPEBTWTBPLVOKYPQHMEXSNNCEE");

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
    msg.setTimeStamp(0.157541627357);
    msg.setSource(40391U);
    msg.setSourceEntity(11U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(50U);
    msg.req_id = 47876U;
    msg.status = 195U;
    msg.text.assign("QPEAEIOLVPDUXRCAQSKYOZBTHEKQPRUVMDQTMQNTGYRUBFRFCVTAZWKVAPHJVADCWRLCDFXXFYWNAFOONQVWVSEKLSOXZFZVXDWZKQRSKOFLSCNMHQJMGQRGYZEUWEHSMXBPJUHMDVUPBXAXNUNZMLTDCAJLZHYRXIRDTPUKWBRBGBATUKILHNNLCJGIYEIESLMCFBMGJTIHOPKVJXJJDCNZFEWPGHIGEJIUFSPGOQBB");

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
    msg.setTimeStamp(0.731235105072);
    msg.setSource(31669U);
    msg.setSourceEntity(246U);
    msg.setDestination(900U);
    msg.setDestinationEntity(118U);
    msg.req_id = 22083U;
    msg.status = 83U;
    msg.text.assign("IZZRBLUVKPLKQAHMZIWQMVXKGZWOEIHTFBNSIVCSQXGWWZSFCTCXEUYCOGYMYRBSLQNIKXBPBARPZRCFYIUOEYDFHCHAUHOMBVXPODEYJNHOESTMILRHOCMSRIJABTNAVPSLGTDFICIUZULJGQDXNFNKXHWDZXRUZQYJJNDVQNVWUDUWWSOFAKBQPNA");

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
    msg.setTimeStamp(0.834276185227);
    msg.setSource(34713U);
    msg.setSourceEntity(109U);
    msg.setDestination(31960U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("REVAVWREOVGOBCGSWKAHQNVURCFNCDHBMFHYJNJJSZXAOSJPXXZQGADUPNCCIUTEMODOTXGZMCWVYJVETQFIYAUQERJXPYIWKLZNBPWHHWAUNZRUTDFTFPLDJZLQYPV");
    msg.links = 2840711291U;

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
    msg.setTimeStamp(0.638678704111);
    msg.setSource(9154U);
    msg.setSourceEntity(136U);
    msg.setDestination(44975U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("AXAUAKNJEVJAFWFDFYBABNVHGJWUPTMSULNXEVVILOMKXXXELPURHMUWGYCCQGDIYWWOJYBSCCQPCWWWDBMJHHHMABGNTKZBXGOXTZ");
    msg.links = 1342079045U;

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
    msg.setTimeStamp(0.940667448759);
    msg.setSource(15831U);
    msg.setSourceEntity(63U);
    msg.setDestination(49080U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("FRSIWLNEHUADBBMQRKPUINCYNVKEUSSLCQHTSOVTCOWXQGPSFZBTVZPQSWIMBZRHTWAGXTBVEUNAADCNEYJIJHHUHDAMXZFNOMQIWYRYGXKMEOFDCXSFBJXGIIKZZDVNQFJDDRZEOXPAXLB");
    msg.links = 3627530915U;

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
    msg.setTimeStamp(0.445837249705);
    msg.setSource(25350U);
    msg.setSourceEntity(102U);
    msg.setDestination(10377U);
    msg.setDestinationEntity(122U);
    msg.groupname.assign("RJFSNIFINDHARKGRUDJGJPKUACGVJREUTLTOIBNSERXETMYQDXDRGGZFHBDCJZKZDZJQSYONVGNEBUJQCSIANBQSHKAPWVDLMBLEHQUCOUTLFPZAGQYVPOPLXPCJTAYVSGFNSPFRMOYIVHAVTIHZIGLVXNVMHHIXWO");
    msg.action = 221U;
    msg.grouplist.assign("UVTNVLBCWCFWCATZNNZXCWZKSLPPUNFFGJHHCDFSEIHRLJDQUDXGOMPZKFZAQIUQCGXISTOOOFHWZGEOPIVZQPCXSVESUIJKVBVRQFHWQKNSTREVJXOSJEVNYLKHGDUDMIAEZHJNMXBRGGUMCPLSHAJBYDZODUIAFLXBQPCTRROGAUWWUMDHQQTBYBLMIBLHPNTAJATQADZINWISXTYSLDKYPFOGYGKEWRTWAPXYNYXMFMM");

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
    msg.setTimeStamp(0.140047691234);
    msg.setSource(44208U);
    msg.setSourceEntity(247U);
    msg.setDestination(29664U);
    msg.setDestinationEntity(110U);
    msg.groupname.assign("NXIBEYZRPQVSWEPBZHHTCBGNZQKLMQXCRZKJZADSPGVJWFPGACONUEOSMNNTBXLUPVVXARBOPGEZXYFYNYKWABXBFWCRDMFZDJODHTEQJWMWXDDEOOOSMRNUQRPXFNYUMHIDYIJTILTYFFCKKYMQTJFUPBKALDUJQMZJVUSTLKATBESDCMGGKHLNWJGXARVMOOPGSVHHALFRI");
    msg.action = 126U;
    msg.grouplist.assign("TNXDMGSLLFXCIEPVXPXEKOYZTHNCEUVJBVKXDAILERXOICMCYNUSMVZDEBSLWAZHDBNONFEFCVXOSVPSHXNUUCIQRVLBHIOFRUWWGAJK");

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
    msg.setTimeStamp(0.624190223131);
    msg.setSource(21760U);
    msg.setSourceEntity(143U);
    msg.setDestination(61341U);
    msg.setDestinationEntity(211U);
    msg.groupname.assign("PMBIMRUYSQCAIUVQTHYJJWBAETEVPENOSBUNGNHQLDBKWFTIUFKQKHWERDMTMCPOZZQTXKUZGEZBLYQXKAM");
    msg.action = 28U;
    msg.grouplist.assign("HTJLDWOLYLBMESUJDCXYLGQAWGVLDPNYDXCTKJ");

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
    msg.setTimeStamp(0.179825738986);
    msg.setSource(20922U);
    msg.setSourceEntity(32U);
    msg.setDestination(27822U);
    msg.setDestinationEntity(73U);
    msg.value = 0.835918255712;
    msg.sys_src = 16367U;

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
    msg.setTimeStamp(0.402175060549);
    msg.setSource(34916U);
    msg.setSourceEntity(61U);
    msg.setDestination(1865U);
    msg.setDestinationEntity(75U);
    msg.value = 0.582334526181;
    msg.sys_src = 45777U;

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
    msg.setTimeStamp(0.149000241603);
    msg.setSource(1692U);
    msg.setSourceEntity(196U);
    msg.setDestination(62225U);
    msg.setDestinationEntity(183U);
    msg.value = 0.827254421416;
    msg.sys_src = 15169U;

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
    msg.setTimeStamp(0.231492574488);
    msg.setSource(9884U);
    msg.setSourceEntity(162U);
    msg.setDestination(19870U);
    msg.setDestinationEntity(64U);
    msg.value = 0.296741476231;
    msg.units = 45U;

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
    msg.setTimeStamp(0.328846999063);
    msg.setSource(30362U);
    msg.setSourceEntity(212U);
    msg.setDestination(48098U);
    msg.setDestinationEntity(13U);
    msg.value = 0.745195231804;
    msg.units = 195U;

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
    msg.setTimeStamp(0.669227449948);
    msg.setSource(34540U);
    msg.setSourceEntity(156U);
    msg.setDestination(10194U);
    msg.setDestinationEntity(92U);
    msg.value = 0.202828830008;
    msg.units = 38U;

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
    msg.setTimeStamp(0.336899811883);
    msg.setSource(10171U);
    msg.setSourceEntity(23U);
    msg.setDestination(32926U);
    msg.setDestinationEntity(87U);
    msg.base_lat = 0.281773728514;
    msg.base_lon = 0.777665293921;
    msg.base_time = 0.182110159746;

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
    msg.setTimeStamp(0.663494619814);
    msg.setSource(18304U);
    msg.setSourceEntity(69U);
    msg.setDestination(47900U);
    msg.setDestinationEntity(5U);
    msg.base_lat = 0.658391417824;
    msg.base_lon = 0.558187232259;
    msg.base_time = 0.236238792717;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 62619U;
    tmp_msg_0.priority = 72;
    tmp_msg_0.x = 28350;
    tmp_msg_0.y = -28550;
    tmp_msg_0.z = 1261;
    tmp_msg_0.t = -25224;
    IMC::TransmissionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 15440U;
    tmp_tmp_msg_0_0.status = 82U;
    tmp_tmp_msg_0_0.info.assign("ARRTPLUVDKIKJXSKCKTFOVOAIHSMMALGWHLXBRAUDGRVFFSHDAELCBICYXYNPG");
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
    msg.setTimeStamp(0.593372613851);
    msg.setSource(30368U);
    msg.setSourceEntity(57U);
    msg.setDestination(33944U);
    msg.setDestinationEntity(101U);
    msg.base_lat = 0.298060321542;
    msg.base_lon = 0.659139415862;
    msg.base_time = 0.0508033149618;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 27720U;
    tmp_msg_0.priority = -77;
    tmp_msg_0.x = 22515;
    tmp_msg_0.y = -4338;
    tmp_msg_0.z = -14417;
    tmp_msg_0.t = 17198;
    IMC::Tachograph tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timestamp_last_service = 0.562413531337;
    tmp_tmp_msg_0_0.time_next_service = 0.0440849774893;
    tmp_tmp_msg_0_0.time_motor_next_service = 0.691551772718;
    tmp_tmp_msg_0_0.time_idle_ground = 0.0378483119297;
    tmp_tmp_msg_0_0.time_idle_air = 0.90977572218;
    tmp_tmp_msg_0_0.time_idle_water = 0.413207258565;
    tmp_tmp_msg_0_0.time_idle_underwater = 0.307989965194;
    tmp_tmp_msg_0_0.time_idle_unknown = 0.624355441634;
    tmp_tmp_msg_0_0.time_motor_ground = 0.837158080813;
    tmp_tmp_msg_0_0.time_motor_air = 0.249752524589;
    tmp_tmp_msg_0_0.time_motor_water = 0.420319401715;
    tmp_tmp_msg_0_0.time_motor_underwater = 0.584179332787;
    tmp_tmp_msg_0_0.time_motor_unknown = 0.0865832815932;
    tmp_tmp_msg_0_0.rpm_min = -32313;
    tmp_tmp_msg_0_0.rpm_max = 24675;
    tmp_tmp_msg_0_0.depth_max = 0.981685209405;
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
    msg.setTimeStamp(0.528335932104);
    msg.setSource(10838U);
    msg.setSourceEntity(176U);
    msg.setDestination(54701U);
    msg.setDestinationEntity(165U);
    msg.base_lat = 0.838082273372;
    msg.base_lon = 0.733045415398;
    msg.base_time = 0.871282904379;
    const char tmp_msg_0[] = {66, -84, 47, 1, 77, 12, 112, 125, 43, 124, 37, 52, -8, -121, 32, -32, 18, 126, -30, -114, 33, -114, -44, -66, 89, 7, 114, -55, 43, -7, -7, -40, -22, 4, -41, 44, 69, 105, 39, 88, 102, -17, -14, -39, -102, -71, 113, 59, -13, -96, -57, 18, -125, -48, -94, 125, -102, 121, 4, -28, 126, 60, -122, 72, 122, -108, 80, 2, 6, 107, 101, -31, -53, -52, -111, 47, -107, 26, -112, 87, -47, -108, -22, -111, 18, 45, 34, 113, -126, 96, 82, 62, 96, 29, 10, 86, 1, -32, -105, -24, -13, 9, -92, 97, 3, 92, -57, 106, -118, -59, -126, 32, -30, -35, -26, -17, 91, -49, 74, -97, -110, -10, 36, 36, 35, -88, -99, 47, -50, -8, 53, 27, -96, -116, 108, -33, 21, -119, -76, 104, -100, -101, -116, 12, 56, -61, -55, -56, 51, -56, -109, 72, 58, 65, 86, 119, -77, -21, 25, -1, 12, -124, 29, -60, 3, -41, 106, -108, -38, 120, -87, -118, 117, -69, -107, 48, -30, 17, -39, -107, 115, 30, 60, 25, 27, 84, -30, 0, 44, 44, 43, 95, -25, 71, 41, -88, 21, 12, -59, 98, 109, 81, 33, 52, 4, -6, -107, -80, -18, 56, -37, 73, -54, -5, -103, -101};
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
    msg.setTimeStamp(0.982752025251);
    msg.setSource(27306U);
    msg.setSourceEntity(108U);
    msg.setDestination(4463U);
    msg.setDestinationEntity(220U);
    msg.base_lat = 0.361808172025;
    msg.base_lon = 0.0131241459413;
    msg.base_time = 0.295079284898;
    const char tmp_msg_0[] = {6, 16, -6, 36, -46, -49, -97, 35, -93, 126, 23, 10, 19, -108, -75, -13, -33, 52, 24, 71, -77, -20, 28, 114, -67, -17, -35, 5, -107, -16, -74, -40, 93, 37, -42, -68, -12, 115, -21, -87, 37, 94, -58, 116, 113, -91, -53, -120, 18, -112, 111, -3, -116, 54, 54, -127, 17, 27, 100, -107, -125, 12, 38, 65, -73, 44, -44, 105, -92, -127, 53, 20, -53, -65, 30, 73, -14, -59, 34, -62, -66, -18, -95, -2, 45, -119, -7, 30, -87, 126, -62, 100, -34, 55, 40, -79, -80, -50, 9, -7, -77, -23, -104, -57, 58, 17, 54, -33, 115, 102, 77, -84, -21, -31, -15, -63, 91, 96, -119, -30, 17, 14, 95, 9, -21, 59, 65, 99, -24, -14, 30, -105, 27, 126, 116, 42, -83, 3, 27, 90, -17, -55, 73, -70, 76, 37, -115, -12, 12, -61, 31, 89, 60, -119, -114, 117, -84, 0, 34, 20, 25, -18, 124, -107, 13, 56, 26, 82, 4, 42, 78, 41, 106, 72, -84, 30, -42, 60, -107, -76, 21, -83, -112, -35, -81, -26, -13, -78, 64, -118, 3, -53, -111, -95, 68, -109, 106, -29, 4, -56, 125, -33, 70, 80, -52, -15, 33, -68, -33, 59, 88, -24, 66, 70, 58, 61, 112, -120, 126, -104, 121, -121, 105, -38, -95, -98, -128, -17, 112, 100, 45};
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
    msg.setTimeStamp(0.927884197288);
    msg.setSource(15307U);
    msg.setSourceEntity(119U);
    msg.setDestination(48104U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.322992968287;
    msg.base_lon = 0.448875831384;
    msg.base_time = 0.889430237027;
    const char tmp_msg_0[] = {-75, -44, -125, 1, 81, 33, -71, -47, -39, 0, -118, -107, -117, 125, -45, -35, 20, -45, -127, 113, 11, 35, 72, -24, -92, -78, -39, 47, 121, -22, 84, 81, -27, -48, -33, -100, -54, -20, -96, -103, -106, -20, 88, 84, -112, -18, -82, 86, -34, -41, 121, 56, -125, -73, -68, 51, -68, -78, 104, -73, 54, 104, 105, -76, 59, 44, 123, 89, 6, -8, -33, 111, -61, 27, -114, -93, 3, 101, 118, -63, -49, -21, -63, -3, 94, 90, 3, 111, -76, -56, -69, -128, -118, -51, 82, 43, 43, 24, -102, -111, -45, 27, -97, -50, 44, 14, 93, -123, -7, 114, 26, -14, -105, 18, 38, -52, 62, 89, -25, -85, -114, 116, 8, -34, -25, -39, -115, 12, 8, 121, -66, -76, 48, -126, -126, -64, -92, -27, -68, 71, -71, -90, -87, -125, -100, -67, 98, -33, 103, -74, -83, 2, -81, -100, -53, -11, 115, 111, -63, -108, -62, 126, 74, -73, -65, -124, -22, 25, -5, -40, -10, 117, 66, 12, 119, 114, -93, -102, -51, 32, 114, -6, -65, 34, -111, 93, -44, -127, 8, 123, -14, 90, -27, 33, -7, 28, -81, -6, 54, 104, 79, 43, -123, -50, 77, -47, 93, -110, -97, -26};
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
    msg.setTimeStamp(0.356473163888);
    msg.setSource(35845U);
    msg.setSourceEntity(25U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(15U);
    msg.sys_id = 24957U;
    msg.priority = 66;
    msg.x = 24392;
    msg.y = 16648;
    msg.z = -1666;
    msg.t = 3108;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 9282U;
    tmp_msg_0.type = 14U;
    tmp_msg_0.max_size = 31775U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.0858605721079;
    tmp_tmp_msg_0_0.base_lon = 0.485403390292;
    tmp_tmp_msg_0_0.base_time = 0.347148527539;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0098214902987);
    msg.setSource(55380U);
    msg.setSourceEntity(78U);
    msg.setDestination(14875U);
    msg.setDestinationEntity(118U);
    msg.sys_id = 31863U;
    msg.priority = -103;
    msg.x = 28270;
    msg.y = -28495;
    msg.z = 17219;
    msg.t = 9897;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 223U;
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
    msg.setTimeStamp(0.196773827565);
    msg.setSource(63849U);
    msg.setSourceEntity(139U);
    msg.setDestination(40135U);
    msg.setDestinationEntity(253U);
    msg.sys_id = 42202U;
    msg.priority = -21;
    msg.x = -18823;
    msg.y = -6690;
    msg.z = 16724;
    msg.t = 21537;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17416U;
    tmp_msg_0.off_x = 0.250955419697;
    tmp_msg_0.off_y = 0.811816669208;
    tmp_msg_0.off_z = 0.590959105882;
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
    msg.setTimeStamp(0.423154004679);
    msg.setSource(60632U);
    msg.setSourceEntity(36U);
    msg.setDestination(58706U);
    msg.setDestinationEntity(16U);
    msg.req_id = 36025U;
    msg.type = 29U;
    msg.max_size = 22699U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.682509817155;
    tmp_msg_0.base_lon = 0.124337216717;
    tmp_msg_0.base_time = 0.750679924467;
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
    msg.setTimeStamp(0.0790806049046);
    msg.setSource(20296U);
    msg.setSourceEntity(23U);
    msg.setDestination(64053U);
    msg.setDestinationEntity(33U);
    msg.req_id = 57819U;
    msg.type = 218U;
    msg.max_size = 15347U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.935635854543;
    tmp_msg_0.base_lon = 0.90224863562;
    tmp_msg_0.base_time = 0.03145213302;
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
    msg.setTimeStamp(0.42861722038);
    msg.setSource(15089U);
    msg.setSourceEntity(183U);
    msg.setDestination(44635U);
    msg.setDestinationEntity(185U);
    msg.req_id = 21536U;
    msg.type = 36U;
    msg.max_size = 30825U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.143665698627;
    tmp_msg_0.base_lon = 0.0421435409385;
    tmp_msg_0.base_time = 0.270347974933;
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
    msg.setTimeStamp(0.94000882359);
    msg.setSource(33365U);
    msg.setSourceEntity(65U);
    msg.setDestination(18330U);
    msg.setDestinationEntity(26U);
    msg.original_source = 41293U;
    msg.destination = 16251U;
    msg.timeout = 0.0240017782263;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NREKLPIQIPVOSPAWJJEJOORTBFYDAJTYOGMXQCCZCAGXDEWXPTKUDIJAVUHMRQBTPWRIOPPCEHAFMKANYLTGDCQHVNRWHJGBPHETIZVXFUZOQEFDSJTHZZCYMXUGJIENBFYAKWQTFQIKPWCXXMNGLDZVISFLQZBLUYMBIVSEQOKVSNKTLZLYDHKWVWDCRNUUTMSUVANBQGORSDWPFYZGSUKNLGYHAXCWRV");
    tmp_msg_0.sys_type = 192U;
    tmp_msg_0.owner = 63518U;
    tmp_msg_0.lat = 0.16717456222;
    tmp_msg_0.lon = 0.520839289019;
    tmp_msg_0.height = 0.709403055028;
    tmp_msg_0.services.assign("OLNBCKTLZCALRZORLUFHZSMJUUCNXFZYQCOZTVCAXIAZ");
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
    msg.setTimeStamp(0.143875400756);
    msg.setSource(65174U);
    msg.setSourceEntity(128U);
    msg.setDestination(65029U);
    msg.setDestinationEntity(109U);
    msg.original_source = 7340U;
    msg.destination = 9109U;
    msg.timeout = 0.847000039419;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.418252936534;
    tmp_msg_0.ay_cmd = 0.432732801143;
    tmp_msg_0.az_cmd = 0.778925637717;
    tmp_msg_0.ax_des = 0.156858900373;
    tmp_msg_0.ay_des = 0.781791900543;
    tmp_msg_0.az_des = 0.942269474853;
    tmp_msg_0.virt_err_x = 0.742826580474;
    tmp_msg_0.virt_err_y = 0.00575232058178;
    tmp_msg_0.virt_err_z = 0.627167612663;
    tmp_msg_0.surf_fdbk_x = 0.89098359434;
    tmp_msg_0.surf_fdbk_y = 0.136012513237;
    tmp_msg_0.surf_fdbk_z = 0.397801495112;
    tmp_msg_0.surf_unkn_x = 0.0689610072433;
    tmp_msg_0.surf_unkn_y = 0.752083468788;
    tmp_msg_0.surf_unkn_z = 0.566491899015;
    tmp_msg_0.ss_x = 0.943713449764;
    tmp_msg_0.ss_y = 0.685090614772;
    tmp_msg_0.ss_z = 0.447073355232;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("KVFYUMCQXI");
    tmp_tmp_msg_0_0.dist = 0.285883656301;
    tmp_tmp_msg_0_0.err = 0.685753508435;
    tmp_tmp_msg_0_0.ctrl_imp = 0.593071725814;
    tmp_tmp_msg_0_0.rel_dir_x = 0.890329024115;
    tmp_tmp_msg_0_0.rel_dir_y = 0.406419699388;
    tmp_tmp_msg_0_0.rel_dir_z = 0.930878902205;
    tmp_tmp_msg_0_0.err_x = 0.702470136033;
    tmp_tmp_msg_0_0.err_y = 0.122224433276;
    tmp_tmp_msg_0_0.err_z = 0.699182733688;
    tmp_tmp_msg_0_0.rf_err_x = 0.63711452102;
    tmp_tmp_msg_0_0.rf_err_y = 0.259018575572;
    tmp_tmp_msg_0_0.rf_err_z = 0.237084584809;
    tmp_tmp_msg_0_0.rf_err_vx = 0.336977555156;
    tmp_tmp_msg_0_0.rf_err_vy = 0.105248251744;
    tmp_tmp_msg_0_0.rf_err_vz = 0.931299903834;
    tmp_tmp_msg_0_0.ss_x = 0.0961378566637;
    tmp_tmp_msg_0_0.ss_y = 0.188996599455;
    tmp_tmp_msg_0_0.ss_z = 0.176216353937;
    tmp_tmp_msg_0_0.virt_err_x = 0.219417050227;
    tmp_tmp_msg_0_0.virt_err_y = 0.882088954494;
    tmp_tmp_msg_0_0.virt_err_z = 0.872528321121;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.454312566782);
    msg.setSource(31301U);
    msg.setSourceEntity(197U);
    msg.setDestination(21664U);
    msg.setDestinationEntity(249U);
    msg.original_source = 53060U;
    msg.destination = 5643U;
    msg.timeout = 0.319007902964;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 81U;
    tmp_msg_0.speed = 51561U;
    const char tmp_tmp_msg_0_0[] = {-18, 92, -64, 23, 2, -84, -42, 123, -118, 44, 122, -83, -79, -21, -11, 2, 50, -112, 117, 80, 72, -52, 101, -64, -53, -70, -43, -45, -98, 89, 5, 41, 59, 102, -78, -99, -36, 16, -69, 63, -67, 107, 28, 80, -36, 13, 27, 72, 63, 6, 112, -39, -10, 18, 76, 51, 56, 24, -56, -64, -54, 119, -88, 126, 49, -117, -33, 91, -18, -125, 13, -96, 90, 72, -103, 24, -125, -102, 120, 122, -60, -66, 117, 94, 109, -117, -70, -108, 16, 52, -30, -126, 31, 68, -76, 29, 93, 69, -112, -85, -42, -84, 112, 105, -97, -42, -48, -103, -116, 100, -29, -49, 74, -103, 1, 82, -40, -103, -105, 60, -90, 93, -98, 40, -86, -105, 83, 15, -15, 119, 64, -51, -18, 67, -102, -46, 10, -44, 21, 4, 46, -64, -108, -117, -32, 89, 67, -81, 0, 97, -8, 111, -123, -4, -102, -111, -114, -3, 98, -123, 15, -79, 58, -71, 4, 14, 65, -64, -97, 34, 88, 123, -104, 113, 116, -73, -16, 85, 55, 102, -127, -47, 63, 10, 41, -51, 34, -59, 73, 26, -40, -9, -12, 77, 88, -116, -7, 58, 3, 104, 2, 87, 35, 44, -111, -13, -116, -14, -80, -10, -119, 44, -59, 107, -35, 25, -18, 115, -46, -99, -11, -111, -57, -1, -74, -122, -39, -19, 33, 97, -91, 22, -67, -76, 100, -28, -7, -5, 16};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.996439932892);
    msg.setSource(5108U);
    msg.setSourceEntity(219U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(125U);
    msg.type = 167U;
    msg.comm_interface = 18021U;
    msg.model = 3622U;
    msg.list.assign("HYGFONXNHVWOHMHYNHIKKNJTGLBYAEWKTQXOXSSJICTAOSBIZYPKQLPXLSJJNXRC");

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
    msg.setTimeStamp(0.0853063579995);
    msg.setSource(63424U);
    msg.setSourceEntity(76U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(28U);
    msg.type = 147U;
    msg.comm_interface = 54028U;
    msg.model = 42527U;
    msg.list.assign("NTACEGUXOZPFDFWCUSOEKOLFKAODQKRWYLSNQQZMBIOENZUZJFUOYQLTPJHYQCLHVZBHKVMWNBRWYDGXXRZZOCXMQYQFHHVALJXWSRKNDGLASMPUKVNRXPSSAQZLNBFVLWCUEKIMIJESAWOIIQZYAGCWUY");

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
    msg.setTimeStamp(0.876111305184);
    msg.setSource(53913U);
    msg.setSourceEntity(153U);
    msg.setDestination(14724U);
    msg.setDestinationEntity(78U);
    msg.type = 217U;
    msg.comm_interface = 55797U;
    msg.model = 62313U;
    msg.list.assign("CFHEAIMEOIWTGAHBCIEJXXVMZPYNAMIWWYJERRGJLHTSGTVNFBRAQUIGEYSLKNVTFYCSXUNUNBFMVJQOPHJKZIUBCJLCWPLBODGMIFYUZAKCZQWUDSTBQBSLZBYODYVDZLROTWAITTKVCFFQLFDORGKESDNGLJHKPAXCXHDJOQAVYRPQXPGEONTEPMPYRSDKSAXWKRKNQMLEHEIFPAVNTGDUFLDWUXHHJRVWZRQSGMPMWOJXBZZCQ");

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
    msg.setTimeStamp(0.315926877746);
    msg.setSource(3717U);
    msg.setSourceEntity(137U);
    msg.setDestination(18039U);
    msg.setDestinationEntity(156U);
    msg.type = 151U;
    msg.req_id = 286409408U;
    msg.ttl = 7864U;
    msg.code = 136U;
    msg.destination.assign("IXJXRYDHZPXHCSKIJAKYMBYRZKZISHGMZJGNLMNJJGCDFOIYOUZJTNZRRBXHSCPFLPSVQQOTTETAYPBPUA");
    msg.source.assign("BNFKTGZJPSJEGMGVMYRTCIEQKTAEEPMMKPUYJXLN");
    msg.acknowledge = 73U;
    msg.status = 53U;
    const char tmp_msg_0[] = {58, -126, -47, 77, 61, -98, 16, -18, -97, -2, 59, 66, -116, 26, 40, -95, 29, -59, 89, 76, -112, -114, 25, -47, -8, -128, -50, 38, -77, -15, 38, -73, -33, 7, -81, -27, -91, -13, 122, 12, -85, -26, -81, 111, -122, 112, -128, -45, -62, -94, 65, 1, -27, 101, 82, -100, 95, 90, -42, 87, -124, -25, 95, -76, 25, -53, -34, -109, 126, 120, 87, -125, -27, 100, 10, -12, -75, 14, 75, 23, -126, -34, 106, -128, 59, 37, 31, -110, -85, -13, -24, -56, 85, -111, 22, 3, -28, 13, 41, -47, 116, 7, -112, 66, 92, -59, 88, -114, 42, -12, 87, 62, 77, -99, 32, 43, 98, 36, 97, -4, 11, 111, 96, 74, 43, 84, 76, -58, -70, -108, 55, 76, -96, 58, 117, 97, -122, -56, 42, 110, -110, -18, -28, 122, 92, -100, -21, -63, -127, -113, -46, -124, 35, 63, -34, -83, 36, -7, -98, 66, 57, 35, -68, -53, 113, 85, -67, -128, -8, -33, -43, -58, -116, 17, -98, 21, 1, -61, 101, -118, 39, -86, -50, 121, 16, 103, -58, 61, -92, -89, 65, -91, -122, 114, -37, 86, 124, -23, -89, -123, -123, 35, 28, -83, -93, -78, -96, 72, 114, 12, 12, 45, -9};
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
    msg.setTimeStamp(0.0559863947195);
    msg.setSource(27794U);
    msg.setSourceEntity(11U);
    msg.setDestination(48834U);
    msg.setDestinationEntity(74U);
    msg.type = 144U;
    msg.req_id = 4260415340U;
    msg.ttl = 41493U;
    msg.code = 41U;
    msg.destination.assign("ENJNVDNPDINKWTTKRPERGLNFWAUKLQMQWMUSPSDFYUGOAVITSEXQTHIHJIBRIZHJODCPERHUSVFRDKMQLHJEYJEEOPKAKJBVXPLAZYDISXPGAUCTBJFLFMHTMTGZYXVZKCPZAYHSOSOTZRKBNUXYBXWUAZLQYQSCMARZRNQSKFFOWOLCVELMFDDQHHYGVJIODCOWVCMBZGTCZGVUFHLXEOYMRXNAU");
    msg.source.assign("RBYMOAQLXEGYTVULDZHZEQVAQFTMKCVJSQLQNBOWCXKWGHHBFNQPRNJJAIRVGLDGMUBEKYTANFUXXYGCDDAVZYOLMTBPTMMFHCMRURWYYAKVHKDLUIGEIXRVESEWSOLZXJUHNKQEKKMLJZHATGJPPIFTAFOUIIFEXCUZFOYVPFJSDDSUYSZPPSTCANWIYOBIKSTVHROCWRFJEELQBSCAJQHIWPNCQCZPXLOMBNGXKHZDMJRWWBZI");
    msg.acknowledge = 32U;
    msg.status = 155U;
    const char tmp_msg_0[] = {90, -15, -38, -95, -49, 80, -16, -99, -105, -100, 12, -54, -53, -9, 2, -2, -4, -9, -35, 71, -127, 42, -15, -4, 96, -73, 42, 82, 25, 93, -100, -83, 50, -115, -25, 75, 82, -5, -39, 54, -123, -48, -92, -49, -12, -100, 121, 55, -23, -96, -43, -73, -15, 95, 96, -81, 49, 119, -109, 1, -60, 43, -101, -53, -80, -21, 95, 21, -69, 1, -112, -99, -88, -76, 74, -62, 7, -37, 27, -73, -60, 119, -8, -71, 105, -108, -10, -118, -97, -52, 104, 13, 32, 40, -11, 87, 61, -115, -97, 91, 76, -81, 74, 63, 6, 97, -73, -116, -102, 39, -17, 62, -114, 49, 52, 26, 6, -67, -51, -8, -53, 93, -10, -56, 42, -77, -112, 46, -45, -68, 58, 24, -91, -9, 26, 14, 94, -21, 72, -95, 80, 92, 57, -85, 12, -120, 77, 43, 57, -39, 79, -94, -122, 115, -66, -86, -111, -82, 3, 57, 1, 87, 34, 75, 66, 72, -22, 99, -123, 36, -6, -21, -41, 117, 84, 77, -74, 32, 3, 124, -78, 97, -34, -62, 69, -104, -63, -6, -103, -37, 101, 78, -30, 99, 69, -30, -19, 48, 52, 55, -47, 18, 47, 125, -69, 11, -19, 122, 116, 125, -31, 103, -45, 78, -12, 94, -9, -72, -37, 84, 2, -24, 81, 72, 74, 124, 1, -125, -89, -42, -45, 16, -3};
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
    msg.setTimeStamp(0.542879606948);
    msg.setSource(12622U);
    msg.setSourceEntity(36U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(214U);
    msg.type = 162U;
    msg.req_id = 3282040400U;
    msg.ttl = 11037U;
    msg.code = 45U;
    msg.destination.assign("XEVTPUCDVKCBAXUSZLSYRMKWEILLCUUIWFBMVVVOXXLPTXSJOOWUOREYWJNJGNYBAAETGBDTOKOPKUVAPMCGEAMTZZWCYHHFIGQZOZQYWJDKFIXSGSLYEDPUDVKKHCTIJNLVREUPCLBSDQXGWHURSFYQNDISJRIFRNDGD");
    msg.source.assign("YHIQGRXCLMNSZTXFCPHEATMNAYVXSTSZPGUCRPKBCIOUEAMUWQWMVGMRXEDJQWLPDIPGQLNPIICNDOQJYGNTZLFYLGPSWXAPSCWKBFNKCJYUBWOMEJVDJHJREEQWUQAYWRQIDWABRHZF");
    msg.acknowledge = 246U;
    msg.status = 187U;
    const char tmp_msg_0[] = {107, -40, -12, 12, 66, -72, 70, 120, 8, -89, 41, 63, -111, 66, -69, -40, 81, -95, -77, -84, 18, 12, 107, -90, -88, 25, 62, -83, 100, 39, -41, 71, -23, -77, 59, -95, 48, 78, -23, -114, -121, 22, -67, -69, -126, 73, 126, -119, 110, 37, 99, -87, 107, 60, 92, -109, 64, 22, 111, -14, -20, -108, -115, 5, -102, -96, -8, -113, -12, -41, -20, 115, -72, -126, -111, 85, 124, 99, -52, 101, 61, -65, 46, -56, -45, 120, -82, -17, -50, 81, -5, 96, -17, 97, 2, 105, -105, 8, 115, -98, -109, 20, -84, 0, 43, -62, -55, -44, -27, 17, 99, 13, 27, -43, 112, -25, -90, 9, -49, -102, -91, -98, 39, 86, -44, 45, -29, 42, -71, 52, 12, 58, 86, 85, -60, -65, 59, -49, -14, 126, 22, -73, 6, -24, -117, 9, 42, -24, 41, 36, -12, 72, -2, 10, 67, 25, -110, -94, -73, -16, 106, -104, -118, -110, -111, 7, -127, 101, -106, -62, -62, 74, 45, -112, -28, 69, 104};
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
    msg.setTimeStamp(0.314550535077);
    msg.setSource(60891U);
    msg.setSourceEntity(48U);
    msg.setDestination(55953U);
    msg.setDestinationEntity(247U);
    msg.id = 95U;
    msg.range = 0.383097050261;

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
    msg.setTimeStamp(0.0403642507624);
    msg.setSource(42874U);
    msg.setSourceEntity(41U);
    msg.setDestination(34547U);
    msg.setDestinationEntity(92U);
    msg.id = 157U;
    msg.range = 0.105142734025;

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
    msg.setTimeStamp(0.361231152165);
    msg.setSource(1460U);
    msg.setSourceEntity(178U);
    msg.setDestination(53526U);
    msg.setDestinationEntity(110U);
    msg.id = 65U;
    msg.range = 0.348698627068;

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
    msg.setTimeStamp(0.0763825549587);
    msg.setSource(55611U);
    msg.setSourceEntity(149U);
    msg.setDestination(59104U);
    msg.setDestinationEntity(66U);
    msg.beacon.assign("XAPQXRAAAZFPZFYZLGDSEBESKNOHWOUL");
    msg.lat = 0.491173699173;
    msg.lon = 0.598430374868;
    msg.depth = 0.623236914008;
    msg.query_channel = 80U;
    msg.reply_channel = 24U;
    msg.transponder_delay = 101U;

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
    msg.setTimeStamp(0.27630834726);
    msg.setSource(11564U);
    msg.setSourceEntity(202U);
    msg.setDestination(54111U);
    msg.setDestinationEntity(85U);
    msg.beacon.assign("UIKJYLGMIICFRSZJOWXFQFGTCVDEPFYWVSEFWEKMZJHHOVDAMNXZOHKJQDBLVPNWYQZGMNNOGJQRMGWTSBJIFEXVKBUQWEWDSBTIPRSPHGY");
    msg.lat = 0.799644684292;
    msg.lon = 0.0667235029246;
    msg.depth = 0.926597981347;
    msg.query_channel = 202U;
    msg.reply_channel = 118U;
    msg.transponder_delay = 130U;

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
    msg.setTimeStamp(0.425080726356);
    msg.setSource(58192U);
    msg.setSourceEntity(63U);
    msg.setDestination(25405U);
    msg.setDestinationEntity(254U);
    msg.beacon.assign("MOKCPHOCQPRXQHSDOYMQRORUMITQZGPEPOCAXRDFGEBNJTVMQSAAEHGGKEUZELWDNSJXRMILUNYYUCCWMYEJYBPOQQRTVNHHBRVLRDVLJWXCQWLNSXIFWBJGCOGHJTBGQDJIZECSNBHTVETNEXVMPLGDXSZWNMKCAUAWHLIVPAFBIWBKREGZKII");
    msg.lat = 0.609816319616;
    msg.lon = 0.0691552128233;
    msg.depth = 0.443182205522;
    msg.query_channel = 110U;
    msg.reply_channel = 122U;
    msg.transponder_delay = 199U;

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
    msg.setTimeStamp(0.814966135962);
    msg.setSource(41925U);
    msg.setSourceEntity(120U);
    msg.setDestination(12503U);
    msg.setDestinationEntity(155U);
    msg.op = 15U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QBFUSJALTAFNWKHAAEGMTWVXYILDSQZJLQMSCZCNYBV");
    tmp_msg_0.lat = 0.302163750967;
    tmp_msg_0.lon = 0.0401281829063;
    tmp_msg_0.depth = 0.163987691057;
    tmp_msg_0.query_channel = 201U;
    tmp_msg_0.reply_channel = 200U;
    tmp_msg_0.transponder_delay = 13U;
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
    msg.setTimeStamp(0.869432778409);
    msg.setSource(49141U);
    msg.setSourceEntity(103U);
    msg.setDestination(36725U);
    msg.setDestinationEntity(174U);
    msg.op = 115U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NHCSKCVHUKWKXBMPOPGRDPJJWZSAISBLLNYXUZUAMKCEODRBUQVYZLGXXBQKYPKWXNIIQVFCEAAGOAPNOGUAYAILFYZJJFLMGWEWNOSUZVGQJPFRDPJYNCFSVCMDUQLMRYOODBWBHWKFTEBPKSHHVHCZIRQOUTZSBTFOWXDVFEJTDJBNLYNARJLKPGESXEZIYLCFZIOZNRRXJSGXMTNCTVBUEDRWAIMDKDVHUCEHTPTHYQITGGQQTMEFXMMRWH");
    tmp_msg_0.lat = 0.751673283638;
    tmp_msg_0.lon = 0.194129969203;
    tmp_msg_0.depth = 0.0699113263575;
    tmp_msg_0.query_channel = 172U;
    tmp_msg_0.reply_channel = 85U;
    tmp_msg_0.transponder_delay = 115U;
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
    msg.setTimeStamp(0.105390482126);
    msg.setSource(57881U);
    msg.setSourceEntity(148U);
    msg.setDestination(53023U);
    msg.setDestinationEntity(32U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.573686561588);
    msg.setSource(27409U);
    msg.setSourceEntity(178U);
    msg.setDestination(61685U);
    msg.setDestinationEntity(141U);
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 37437U;
    tmp_msg_0.ttl = 57420U;
    tmp_msg_0.destination.assign("NXUQKYVKLGBZKELPGYMKSOGYXRBPYWAQPDTRSSIACCRLUSTLGYFSSOPDMTBILYJZQVJOMQPFZCVIELDNRUOPJXONLGQHCXLAHATENZJTNHFFBYHIFACNIOORMNEADWUJYBCXKVJRZOQAFEYWZJDMJQSUVNMGRWDBGQVPBRGFDBPSTPCKPVWKUWWGHOWTKHZTVAEQGSN");
    const char tmp_tmp_msg_0_0[] = {-118, 100, 26, -103, 65, 20, 60, -84, -121, -4, 47, -112, -128, -122, 80, -125, -30, 118, -45, -22, 26, -72, -94, -103, -101, -49, 1, -125, 58, -110, -61, 87, -6, 96, -81, -29, 63, 47, -53, 122, -113, -8, 84, 86, -18, 110, 102, -38, 84, 87, 109, -11, -6, -96, -87, -33, -90, -118, -101, -98, -1, -127, 63, -101, -123, -99, 77, -38, -97, 125, -10, 35, -88, 6, -22, 111, 64, 88, -55, 44, -54, 48, -103, 108, 24, -52, 67, -25, 53, 114, -53, -38, 120, 56, 21, 28, -100, 18, 76, 66, -47, 101, 33};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.129813115762);
    msg.setSource(35341U);
    msg.setSourceEntity(59U);
    msg.setDestination(15301U);
    msg.setDestinationEntity(53U);
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VLQLRGNYQYKZRTVEYPTRQEEIAXCKNADUFMXZEVCXSMQAHUPLMXSRLJPECFULHWYDRDFGWQDRYKKOD");
    tmp_msg_0.predicate.assign("SLKWRTYIJHSOHARUKJLYCIVWQCAXXVXQNZKSBDHYRGOMYWQZARPJDVYXBHSDICEBPMEHGLQKXQFPAFERTMIPTGCQFOECNEZZRKDOLNWNLYWTMOMBCGJXTOENLKLFQSAHKBJKVWAJUJVWQOVZJDNBVGCVM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LLYXAYYBRFGVCVKHRPJJMPZHICHHTTWKPPBZKUSIIDCHRGKBTEVXLRCATULNVCZSEFWBIRZVQJCOEPJYVUKHQQYSDUOUSNOTVKDFHIFAJMWTJJIOSJYWXQNJSOJGZZMPNCSGMMEBFIHWKWVUWQRQSINLUPQKFZABFRAFPWDCNYGWUPMYGOCXEYASASWGXATBGQBZLLOULCQNTZRMQDHXDMGAFDEXVBYLDOTOFGZXVP");
    tmp_tmp_msg_0_0.attr_type = 42U;
    tmp_tmp_msg_0_0.min.assign("LIXSSYEJCVCPLXNIMKQXCFRFYXSZWMWFPOQY");
    tmp_tmp_msg_0_0.max.assign("WNTDTUBRFGTHUZETNUQFWPPJALLSHZXBYBSZXYTBCZQPKRIIORHSFRLIECLUSKFPJASODBJDLNMUGWZLLZSBBPKKJEHQQUJWYWGTXAAKZFCXVFFQCOVAHIFEPDJIWIRHPXTKYQSOOS");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.092023476693);
    msg.setSource(60606U);
    msg.setSourceEntity(210U);
    msg.setDestination(30874U);
    msg.setDestinationEntity(246U);
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.806623353561;
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
    msg.setTimeStamp(0.350333273983);
    msg.setSource(8890U);
    msg.setSourceEntity(71U);
    msg.setDestination(1735U);
    msg.setDestinationEntity(94U);
    msg.op = 12U;
    msg.system.assign("ZGQSUMNMPZYVBPYIWWIHFYIMGZRICKAJNUTYIPCFYJTNGNGHHVXVJBJLDVKSOUSALOENUDKLSAAECWORUMFNXJEAXMKOHUEFWTQDRNXZUZZJGTBQOXXOFDXTENRISLPLMMDFVRDMXPHNBRTORUJQEEAHPPAGQTBZIYJRCPIWBTCZBQCOPBTVWYUHZHJLGWZVSYQFIFKFWXSPYVENRSQCKDKCODALQRCJUVVMLDBGKWGIHOB");
    msg.range = 0.892629423367;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.249833567789;
    tmp_msg_0.width = 0.844962982555;
    tmp_msg_0.length = 0.567599013292;
    tmp_msg_0.bearing = 0.575301841376;
    tmp_msg_0.pxl = -16081;
    tmp_msg_0.encoding = 130U;
    const char tmp_tmp_msg_0_0[] = {40, -106, 120, -41, -12, 94, -59, -106, 81, 22, 56, 40, 94, -44, 3, -66, -70, 111, -98, 51, -46, -58, -117, 119, -96, -55, 60, -19, 43, -14, -107, 88, 21, -81, 57, -8, 101, 76, -127, -32, -37, 97, 58, 93, 48, 16, 70, -28, -101, 114, -90, 64, -120, 17, -58, -104, 116, -5, 29, -15, 51, -122, -96, 25, 48, 104, 118, 76, -30, -16, -87, 113, 112, 14, 9, 55, -20, 83, 24};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.783510315756);
    msg.setSource(38403U);
    msg.setSourceEntity(107U);
    msg.setDestination(29556U);
    msg.setDestinationEntity(238U);
    msg.op = 135U;
    msg.system.assign("ZEHHPBZSFYRXGDLWMJMFVRRDUMDIOMUXFHNHNDOULYOCPPYHWEGSWIQSKSACJBZVEMAHKPZLBYTSUQCQHJAWFICYRFXAPNBXVALNDNPPTDGRLFGWVOLIQKAGSVSJIJIBPOTPWGAOKNTHOENXBKFVUZZDUL");
    msg.range = 0.65736485998;
    IMC::VesselWind tmp_msg_0;
    tmp_msg_0.angle = 0.136806514466;
    tmp_msg_0.reference.assign("WELIKVNEQNWFWKWWATQDILKEZHPQJIPFHSBIKLEBXPRRKGIAWXLTASJCOSRFNMPBAUKDVXBRAMAJIJTBPBNHULCOTQJBZGYRZHYGQOBBZXCEJYYPQUDXDRFTWUGEQDCGIYCYFEOZZVVYSVHXDVPFSXULXUERGPHYFSDFKXCJOWMCQVOJVEYNUALOGCT");
    tmp_msg_0.speed = 0.776058754515;
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
    msg.setTimeStamp(0.349672357391);
    msg.setSource(1597U);
    msg.setSourceEntity(145U);
    msg.setDestination(34427U);
    msg.setDestinationEntity(143U);
    msg.op = 33U;
    msg.system.assign("WDHQXVONTFDLICTIWDNVLLWOPPAIHBJKTDPIXKQMEWSAKRJESIVGTEKCRGCMNRCYUNQUCGMFYMUBQAIPYHOMSVAFQEZBWHAZRAVJIEZXQZHJQYXLRUOBPOSBOCELSNGFFULQRVXBYDSMPOJEWHCXFABTUCJRZKFRYEMJPDPTQHINBZHBDKTCZAZRXBRVMYEATKILVFJSYGONYJZNAMSLPKUTYXJUKDWFSGMLWZGTQNOHDWNPVVGCUDSHOXUGFX");
    msg.range = 0.426395945279;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 40782U;
    tmp_msg_0.type = 229U;
    tmp_msg_0.utc_year = 65387U;
    tmp_msg_0.utc_month = 147U;
    tmp_msg_0.utc_day = 91U;
    tmp_msg_0.utc_time = 0.891297612379;
    tmp_msg_0.lat = 0.747167204736;
    tmp_msg_0.lon = 0.683786311818;
    tmp_msg_0.height = 0.712793762463;
    tmp_msg_0.satellites = 8U;
    tmp_msg_0.cog = 0.281614299453;
    tmp_msg_0.sog = 0.397104641803;
    tmp_msg_0.hdop = 0.668595161603;
    tmp_msg_0.vdop = 0.999847870898;
    tmp_msg_0.hacc = 0.629112826397;
    tmp_msg_0.vacc = 0.347508516294;
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
    msg.setTimeStamp(0.877966587859);
    msg.setSource(11607U);
    msg.setSourceEntity(145U);
    msg.setDestination(40010U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.22583131292);
    msg.setSource(43392U);
    msg.setSourceEntity(176U);
    msg.setDestination(24141U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.075374231895);
    msg.setSource(27722U);
    msg.setSourceEntity(29U);
    msg.setDestination(9208U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.537532938458);
    msg.setSource(25232U);
    msg.setSourceEntity(33U);
    msg.setDestination(22212U);
    msg.setDestinationEntity(187U);
    msg.list.assign("YMAKGQBISINNWHEVEREDULRXIPNEWKSZNMGEAREMABRADFCBIYOVZQSWGZOLBTTKLLCDPEAJWXAUMTCKYPRHTXMMUHDTQEDONYGNZ");

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
    msg.setTimeStamp(0.789248108075);
    msg.setSource(60384U);
    msg.setSourceEntity(199U);
    msg.setDestination(48734U);
    msg.setDestinationEntity(161U);
    msg.list.assign("TIOLYRKTMOFUYJUQTBJSCYXSKCZRZMILVTFCIGGMIXLMTLYDKAOWAF");

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
    msg.setTimeStamp(0.404663726212);
    msg.setSource(30320U);
    msg.setSourceEntity(205U);
    msg.setDestination(29426U);
    msg.setDestinationEntity(157U);
    msg.list.assign("MYGAENZGBXFMSLQVZYICRWITVNNQGGKNOOFNMUUVWZVCOIEAQJBJOZNHWOCCNWARFOKXBTZKYFXPHFLHQMBPPCDVUFTUERRPXGOUWBLESYHEFRTGRUPADKSZCMOQYRNXTTJSIJQOOLUYKEGEJLDABQVCYITMZTLXTKBLMSXHHBXVWXZEC");

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
    msg.setTimeStamp(0.744626886042);
    msg.setSource(19485U);
    msg.setSourceEntity(142U);
    msg.setDestination(47679U);
    msg.setDestinationEntity(45U);
    msg.peer.assign("SFFZFHYYDKGPMOURKLWCSSQORLUMNEJNEPIHFPHXZCGCCEPZGVXRUFPEC");
    msg.rssi = 0.946151158819;
    msg.integrity = 22688U;

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
    msg.setTimeStamp(0.60094404426);
    msg.setSource(65104U);
    msg.setSourceEntity(29U);
    msg.setDestination(36555U);
    msg.setDestinationEntity(150U);
    msg.peer.assign("EGPMIMAPRJYFKNYRSCDVYHJQGNCBALMLQXERJFZXXD");
    msg.rssi = 0.442057214076;
    msg.integrity = 42363U;

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
    msg.setTimeStamp(0.808053628023);
    msg.setSource(4527U);
    msg.setSourceEntity(233U);
    msg.setDestination(8440U);
    msg.setDestinationEntity(102U);
    msg.peer.assign("NQHGDVFLMDOBONBJNQOLYRNTCIZWHVWKWRNOFYBYRRSTEN");
    msg.rssi = 0.338575839099;
    msg.integrity = 44001U;

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
    msg.setTimeStamp(0.299695697077);
    msg.setSource(57093U);
    msg.setSourceEntity(121U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(135U);
    msg.value = 11389;

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
    msg.setTimeStamp(0.329156061948);
    msg.setSource(33506U);
    msg.setSourceEntity(175U);
    msg.setDestination(131U);
    msg.setDestinationEntity(75U);
    msg.value = 28825;

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
    msg.setTimeStamp(0.347688473011);
    msg.setSource(60926U);
    msg.setSourceEntity(0U);
    msg.setDestination(56098U);
    msg.setDestinationEntity(75U);
    msg.value = 31452;

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
    msg.setTimeStamp(0.523927832088);
    msg.setSource(28943U);
    msg.setSourceEntity(124U);
    msg.setDestination(19609U);
    msg.setDestinationEntity(251U);
    msg.value = 0.928261578264;

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
    msg.setTimeStamp(0.87516295895);
    msg.setSource(666U);
    msg.setSourceEntity(98U);
    msg.setDestination(41370U);
    msg.setDestinationEntity(76U);
    msg.value = 0.554698709019;

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
    msg.setTimeStamp(0.946967250632);
    msg.setSource(17899U);
    msg.setSourceEntity(159U);
    msg.setDestination(38138U);
    msg.setDestinationEntity(218U);
    msg.value = 0.168275005714;

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
    msg.setTimeStamp(0.322744768568);
    msg.setSource(64410U);
    msg.setSourceEntity(182U);
    msg.setDestination(63152U);
    msg.setDestinationEntity(160U);
    msg.value = 0.0650012345588;

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
    msg.setTimeStamp(0.335320663044);
    msg.setSource(58599U);
    msg.setSourceEntity(207U);
    msg.setDestination(47567U);
    msg.setDestinationEntity(215U);
    msg.value = 0.218662301435;

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
    msg.setTimeStamp(0.967074390922);
    msg.setSource(30589U);
    msg.setSourceEntity(167U);
    msg.setDestination(33855U);
    msg.setDestinationEntity(113U);
    msg.value = 0.662036447183;

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
    msg.setTimeStamp(0.596355749918);
    msg.setSource(39741U);
    msg.setSourceEntity(22U);
    msg.setDestination(47382U);
    msg.setDestinationEntity(57U);
    msg.validity = 45554U;
    msg.type = 76U;
    msg.utc_year = 26183U;
    msg.utc_month = 118U;
    msg.utc_day = 115U;
    msg.utc_time = 0.193963527184;
    msg.lat = 0.952206010696;
    msg.lon = 0.461793800764;
    msg.height = 0.14350633569;
    msg.satellites = 44U;
    msg.cog = 0.035458112286;
    msg.sog = 0.405449450879;
    msg.hdop = 0.298659829944;
    msg.vdop = 0.0462757998845;
    msg.hacc = 0.490341318804;
    msg.vacc = 0.872276385229;

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
    msg.setTimeStamp(0.399578243307);
    msg.setSource(28924U);
    msg.setSourceEntity(157U);
    msg.setDestination(46212U);
    msg.setDestinationEntity(167U);
    msg.validity = 49257U;
    msg.type = 161U;
    msg.utc_year = 19180U;
    msg.utc_month = 202U;
    msg.utc_day = 236U;
    msg.utc_time = 0.381139644991;
    msg.lat = 0.396390289249;
    msg.lon = 0.807520877928;
    msg.height = 0.587577360607;
    msg.satellites = 252U;
    msg.cog = 0.368983531372;
    msg.sog = 0.0351178441595;
    msg.hdop = 0.790753228163;
    msg.vdop = 0.168096552504;
    msg.hacc = 0.507311347166;
    msg.vacc = 0.680772954262;

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
    msg.setTimeStamp(0.813813319586);
    msg.setSource(64006U);
    msg.setSourceEntity(15U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(128U);
    msg.validity = 24259U;
    msg.type = 113U;
    msg.utc_year = 25899U;
    msg.utc_month = 8U;
    msg.utc_day = 29U;
    msg.utc_time = 0.886507002642;
    msg.lat = 0.891137402616;
    msg.lon = 0.00842667338521;
    msg.height = 0.108794402001;
    msg.satellites = 82U;
    msg.cog = 0.0269256176038;
    msg.sog = 0.399575530629;
    msg.hdop = 0.186411127695;
    msg.vdop = 0.0296292621951;
    msg.hacc = 0.0335114788448;
    msg.vacc = 0.68218332519;

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
    msg.setTimeStamp(0.605264755761);
    msg.setSource(24248U);
    msg.setSourceEntity(164U);
    msg.setDestination(13320U);
    msg.setDestinationEntity(191U);
    msg.time = 0.0706177022633;
    msg.phi = 0.878930510071;
    msg.theta = 0.101651585757;
    msg.psi = 0.0921928102691;
    msg.psi_magnetic = 0.74892919734;

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
    msg.setTimeStamp(0.178902184536);
    msg.setSource(14283U);
    msg.setSourceEntity(184U);
    msg.setDestination(33854U);
    msg.setDestinationEntity(113U);
    msg.time = 0.461110412741;
    msg.phi = 0.612250593413;
    msg.theta = 0.0182309243869;
    msg.psi = 0.37811397045;
    msg.psi_magnetic = 0.661055136504;

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
    msg.setTimeStamp(0.192735536681);
    msg.setSource(20297U);
    msg.setSourceEntity(140U);
    msg.setDestination(55820U);
    msg.setDestinationEntity(204U);
    msg.time = 0.51911846374;
    msg.phi = 0.0330570374521;
    msg.theta = 0.80804870506;
    msg.psi = 0.827412394757;
    msg.psi_magnetic = 0.0172187758701;

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
    msg.setTimeStamp(0.616781664979);
    msg.setSource(16647U);
    msg.setSourceEntity(74U);
    msg.setDestination(48054U);
    msg.setDestinationEntity(211U);
    msg.time = 0.196812409753;
    msg.x = 0.496745602013;
    msg.y = 0.657480056811;
    msg.z = 0.829956160225;
    msg.timestep = 0.982139316413;

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
    msg.setTimeStamp(0.62875056895);
    msg.setSource(57118U);
    msg.setSourceEntity(82U);
    msg.setDestination(7934U);
    msg.setDestinationEntity(122U);
    msg.time = 0.400399454581;
    msg.x = 0.15957503286;
    msg.y = 0.37540871216;
    msg.z = 0.968898127111;
    msg.timestep = 0.520064833473;

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
    msg.setTimeStamp(0.620033792541);
    msg.setSource(36639U);
    msg.setSourceEntity(93U);
    msg.setDestination(26119U);
    msg.setDestinationEntity(195U);
    msg.time = 0.108046933232;
    msg.x = 0.892676872434;
    msg.y = 0.890376607332;
    msg.z = 0.329474265467;
    msg.timestep = 0.860219464326;

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
    msg.setTimeStamp(0.947468248168);
    msg.setSource(3711U);
    msg.setSourceEntity(214U);
    msg.setDestination(36839U);
    msg.setDestinationEntity(91U);
    msg.time = 0.204694042456;
    msg.x = 0.971565107934;
    msg.y = 0.606234704494;
    msg.z = 0.216401635725;

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
    msg.setTimeStamp(0.776495174352);
    msg.setSource(30033U);
    msg.setSourceEntity(253U);
    msg.setDestination(21509U);
    msg.setDestinationEntity(100U);
    msg.time = 0.296217361853;
    msg.x = 0.984554762779;
    msg.y = 0.786327653007;
    msg.z = 0.367674356811;

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
    msg.setTimeStamp(0.665506773036);
    msg.setSource(3345U);
    msg.setSourceEntity(96U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(104U);
    msg.time = 0.936718374449;
    msg.x = 0.110887609846;
    msg.y = 0.0855374168723;
    msg.z = 0.980663918742;

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
    msg.setTimeStamp(0.122349458475);
    msg.setSource(629U);
    msg.setSourceEntity(191U);
    msg.setDestination(33012U);
    msg.setDestinationEntity(163U);
    msg.time = 0.893912958224;
    msg.x = 0.261060124916;
    msg.y = 0.132502344771;
    msg.z = 0.177111218019;

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
    msg.setTimeStamp(0.14503908783);
    msg.setSource(4803U);
    msg.setSourceEntity(217U);
    msg.setDestination(17325U);
    msg.setDestinationEntity(182U);
    msg.time = 0.156043861762;
    msg.x = 0.494880039373;
    msg.y = 0.968449897151;
    msg.z = 0.821175943184;

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
    msg.setTimeStamp(0.191279416278);
    msg.setSource(23844U);
    msg.setSourceEntity(173U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(245U);
    msg.time = 0.237936082045;
    msg.x = 0.111125355277;
    msg.y = 0.271951736635;
    msg.z = 0.33261959596;

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
    msg.setTimeStamp(0.604666040625);
    msg.setSource(44530U);
    msg.setSourceEntity(219U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(53U);
    msg.time = 0.0817559516117;
    msg.x = 0.393815403735;
    msg.y = 0.632437356221;
    msg.z = 0.217908763663;

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
    msg.setTimeStamp(0.35343293534);
    msg.setSource(9186U);
    msg.setSourceEntity(5U);
    msg.setDestination(54750U);
    msg.setDestinationEntity(123U);
    msg.time = 0.19178554593;
    msg.x = 0.289419344093;
    msg.y = 0.483040881263;
    msg.z = 0.43178121822;

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
    msg.setTimeStamp(0.419068684381);
    msg.setSource(19693U);
    msg.setSourceEntity(98U);
    msg.setDestination(4919U);
    msg.setDestinationEntity(241U);
    msg.time = 0.768538083581;
    msg.x = 0.245233663738;
    msg.y = 0.873117239824;
    msg.z = 0.0782785002796;

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
    msg.setTimeStamp(0.213576252455);
    msg.setSource(18570U);
    msg.setSourceEntity(38U);
    msg.setDestination(46229U);
    msg.setDestinationEntity(191U);
    msg.validity = 149U;
    msg.x = 0.74114257556;
    msg.y = 0.0866601805828;
    msg.z = 0.797030930278;

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
    msg.setTimeStamp(0.294047470652);
    msg.setSource(48256U);
    msg.setSourceEntity(186U);
    msg.setDestination(32701U);
    msg.setDestinationEntity(9U);
    msg.validity = 2U;
    msg.x = 0.260412933779;
    msg.y = 0.561964818751;
    msg.z = 0.556798382148;

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
    msg.setTimeStamp(0.583096707627);
    msg.setSource(23407U);
    msg.setSourceEntity(209U);
    msg.setDestination(53110U);
    msg.setDestinationEntity(208U);
    msg.validity = 148U;
    msg.x = 0.214946151745;
    msg.y = 0.28520353765;
    msg.z = 0.993248285707;

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
    msg.setTimeStamp(0.520135889039);
    msg.setSource(51U);
    msg.setSourceEntity(101U);
    msg.setDestination(20570U);
    msg.setDestinationEntity(136U);
    msg.validity = 89U;
    msg.x = 0.387288745878;
    msg.y = 0.841987152518;
    msg.z = 0.860241977657;

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
    msg.setTimeStamp(0.181412581892);
    msg.setSource(15855U);
    msg.setSourceEntity(77U);
    msg.setDestination(19763U);
    msg.setDestinationEntity(10U);
    msg.validity = 156U;
    msg.x = 0.7099224342;
    msg.y = 0.363536415518;
    msg.z = 0.42906685738;

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
    msg.setTimeStamp(0.719031733084);
    msg.setSource(38806U);
    msg.setSourceEntity(42U);
    msg.setDestination(63756U);
    msg.setDestinationEntity(164U);
    msg.validity = 56U;
    msg.x = 0.665550380691;
    msg.y = 0.0167324358868;
    msg.z = 0.739557092439;

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
    msg.setTimeStamp(0.0456246934555);
    msg.setSource(44746U);
    msg.setSourceEntity(93U);
    msg.setDestination(19536U);
    msg.setDestinationEntity(162U);
    msg.time = 0.037177245723;
    msg.x = 0.457543722061;
    msg.y = 0.957266670059;
    msg.z = 0.937688621403;

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
    msg.setTimeStamp(0.620639227168);
    msg.setSource(20013U);
    msg.setSourceEntity(154U);
    msg.setDestination(63486U);
    msg.setDestinationEntity(108U);
    msg.time = 0.0256134969862;
    msg.x = 0.252561189368;
    msg.y = 0.393629566411;
    msg.z = 0.2532832214;

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
    msg.setTimeStamp(0.375670192357);
    msg.setSource(18369U);
    msg.setSourceEntity(21U);
    msg.setDestination(52744U);
    msg.setDestinationEntity(217U);
    msg.time = 0.140979936186;
    msg.x = 0.555053741424;
    msg.y = 0.736637111241;
    msg.z = 0.649245128984;

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
    msg.setTimeStamp(0.140481929817);
    msg.setSource(65061U);
    msg.setSourceEntity(150U);
    msg.setDestination(38988U);
    msg.setDestinationEntity(148U);
    msg.validity = 190U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.229699630777;
    tmp_msg_0.y = 0.375608708738;
    tmp_msg_0.z = 0.206662583711;
    tmp_msg_0.phi = 0.938756170008;
    tmp_msg_0.theta = 0.700023831037;
    tmp_msg_0.psi = 0.469818181528;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.684075448867;
    tmp_msg_1.beam_height = 0.662559434507;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.802949435202;

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
    msg.setTimeStamp(0.0568150766257);
    msg.setSource(61436U);
    msg.setSourceEntity(11U);
    msg.setDestination(29885U);
    msg.setDestinationEntity(227U);
    msg.validity = 91U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.881976549323;
    tmp_msg_0.y = 0.916913658351;
    tmp_msg_0.z = 0.247309087633;
    tmp_msg_0.phi = 0.398693555136;
    tmp_msg_0.theta = 0.739595549464;
    tmp_msg_0.psi = 0.666058776932;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.163037409236;
    tmp_msg_1.beam_height = 0.612963811762;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0756192226702;

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
    msg.setTimeStamp(0.857275109731);
    msg.setSource(62613U);
    msg.setSourceEntity(200U);
    msg.setDestination(3234U);
    msg.setDestinationEntity(131U);
    msg.validity = 218U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.201676100764;
    tmp_msg_0.beam_height = 0.458218513169;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0607129752097;

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
    msg.setTimeStamp(0.01475451842);
    msg.setSource(5187U);
    msg.setSourceEntity(239U);
    msg.setDestination(10457U);
    msg.setDestinationEntity(211U);
    msg.value = 0.173183572722;

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
    msg.setTimeStamp(0.657331679073);
    msg.setSource(63763U);
    msg.setSourceEntity(63U);
    msg.setDestination(42447U);
    msg.setDestinationEntity(238U);
    msg.value = 0.757960793127;

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
    msg.setTimeStamp(0.786766160992);
    msg.setSource(6975U);
    msg.setSourceEntity(134U);
    msg.setDestination(47426U);
    msg.setDestinationEntity(184U);
    msg.value = 0.721987590459;

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
    msg.setTimeStamp(0.314793567258);
    msg.setSource(19065U);
    msg.setSourceEntity(168U);
    msg.setDestination(22662U);
    msg.setDestinationEntity(111U);
    msg.value = 0.334463263228;

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
    msg.setTimeStamp(0.853356283659);
    msg.setSource(26701U);
    msg.setSourceEntity(146U);
    msg.setDestination(38266U);
    msg.setDestinationEntity(150U);
    msg.value = 0.891727200845;

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
    msg.setTimeStamp(0.846511762362);
    msg.setSource(421U);
    msg.setSourceEntity(143U);
    msg.setDestination(56909U);
    msg.setDestinationEntity(239U);
    msg.value = 0.142124411452;

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
    msg.setTimeStamp(0.218393172692);
    msg.setSource(18403U);
    msg.setSourceEntity(205U);
    msg.setDestination(35074U);
    msg.setDestinationEntity(94U);
    msg.value = 0.540115874682;

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
    msg.setTimeStamp(0.0362577350963);
    msg.setSource(28196U);
    msg.setSourceEntity(137U);
    msg.setDestination(36873U);
    msg.setDestinationEntity(117U);
    msg.value = 0.627679689974;

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
    msg.setTimeStamp(0.11561795637);
    msg.setSource(11512U);
    msg.setSourceEntity(184U);
    msg.setDestination(57709U);
    msg.setDestinationEntity(118U);
    msg.value = 0.608243192189;

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
    msg.setTimeStamp(0.154510340462);
    msg.setSource(19924U);
    msg.setSourceEntity(155U);
    msg.setDestination(34865U);
    msg.setDestinationEntity(68U);
    msg.value = 0.786852531725;

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
    msg.setTimeStamp(0.775852193674);
    msg.setSource(58719U);
    msg.setSourceEntity(222U);
    msg.setDestination(54552U);
    msg.setDestinationEntity(193U);
    msg.value = 0.299710963117;

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
    msg.setTimeStamp(0.396502857624);
    msg.setSource(50420U);
    msg.setSourceEntity(199U);
    msg.setDestination(15477U);
    msg.setDestinationEntity(242U);
    msg.value = 0.130217684442;

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
    msg.setTimeStamp(0.380361346249);
    msg.setSource(475U);
    msg.setSourceEntity(146U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(71U);
    msg.value = 0.949236905126;

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
    msg.setTimeStamp(0.157861324693);
    msg.setSource(38755U);
    msg.setSourceEntity(221U);
    msg.setDestination(32256U);
    msg.setDestinationEntity(123U);
    msg.value = 0.693393052359;

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
    msg.setTimeStamp(0.833408687721);
    msg.setSource(51807U);
    msg.setSourceEntity(14U);
    msg.setDestination(3311U);
    msg.setDestinationEntity(98U);
    msg.value = 0.00600037600031;

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
    msg.setTimeStamp(0.0428047478794);
    msg.setSource(39942U);
    msg.setSourceEntity(60U);
    msg.setDestination(62336U);
    msg.setDestinationEntity(12U);
    msg.value = 0.214274529396;

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
    msg.setTimeStamp(0.312447139079);
    msg.setSource(57669U);
    msg.setSourceEntity(49U);
    msg.setDestination(14898U);
    msg.setDestinationEntity(223U);
    msg.value = 0.208010926525;

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
    msg.setTimeStamp(0.894124592746);
    msg.setSource(57779U);
    msg.setSourceEntity(125U);
    msg.setDestination(10253U);
    msg.setDestinationEntity(19U);
    msg.value = 0.616145642445;

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
    msg.setTimeStamp(0.878169155801);
    msg.setSource(65150U);
    msg.setSourceEntity(129U);
    msg.setDestination(22930U);
    msg.setDestinationEntity(1U);
    msg.value = 0.549947685571;

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
    msg.setTimeStamp(0.340379030699);
    msg.setSource(63495U);
    msg.setSourceEntity(61U);
    msg.setDestination(54801U);
    msg.setDestinationEntity(22U);
    msg.value = 0.747871456679;

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
    msg.setTimeStamp(0.773756684677);
    msg.setSource(53301U);
    msg.setSourceEntity(203U);
    msg.setDestination(59707U);
    msg.setDestinationEntity(149U);
    msg.value = 0.145634930595;

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
    msg.setTimeStamp(0.0135978013693);
    msg.setSource(48831U);
    msg.setSourceEntity(69U);
    msg.setDestination(9063U);
    msg.setDestinationEntity(202U);
    msg.value = 0.549929077791;

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
    msg.setTimeStamp(0.213447719698);
    msg.setSource(19112U);
    msg.setSourceEntity(62U);
    msg.setDestination(36104U);
    msg.setDestinationEntity(213U);
    msg.value = 0.846741552466;

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
    msg.setTimeStamp(0.505288027604);
    msg.setSource(39380U);
    msg.setSourceEntity(43U);
    msg.setDestination(8858U);
    msg.setDestinationEntity(101U);
    msg.value = 0.527423962337;

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
    msg.setTimeStamp(0.341120595293);
    msg.setSource(5836U);
    msg.setSourceEntity(145U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(171U);
    msg.direction = 0.720672900768;
    msg.speed = 0.144016981436;
    msg.turbulence = 0.116308327167;

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
    msg.setTimeStamp(0.819914104883);
    msg.setSource(27526U);
    msg.setSourceEntity(233U);
    msg.setDestination(20686U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.367047854119;
    msg.speed = 0.958482611046;
    msg.turbulence = 0.624855604394;

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
    msg.setTimeStamp(0.4686228541);
    msg.setSource(1338U);
    msg.setSourceEntity(176U);
    msg.setDestination(32927U);
    msg.setDestinationEntity(248U);
    msg.direction = 0.297301068969;
    msg.speed = 0.802867730133;
    msg.turbulence = 0.621760588818;

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
    msg.setTimeStamp(0.345990522001);
    msg.setSource(48739U);
    msg.setSourceEntity(33U);
    msg.setDestination(11369U);
    msg.setDestinationEntity(231U);
    msg.value = 0.254248007719;

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
    msg.setTimeStamp(0.00215779721404);
    msg.setSource(34461U);
    msg.setSourceEntity(113U);
    msg.setDestination(21436U);
    msg.setDestinationEntity(197U);
    msg.value = 0.283066111612;

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
    msg.setTimeStamp(0.890540168224);
    msg.setSource(18736U);
    msg.setSourceEntity(90U);
    msg.setDestination(9836U);
    msg.setDestinationEntity(181U);
    msg.value = 0.560400929405;

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
    msg.setTimeStamp(0.343357508194);
    msg.setSource(42078U);
    msg.setSourceEntity(167U);
    msg.setDestination(26530U);
    msg.setDestinationEntity(81U);
    msg.value.assign("FEREQWITIGSWTYNSCGAWEJPHLZWNVXVHKNKWRIWTLCOHWAZUIPPBPFMDFCDOFPJMOLIQEBSQXMUDAUUZOHDKZSDJTIVJMJXVFIWFZFSGVOCIMEHQSUMUKNPOVKOZBRGHHNKFAKCGEQBZFQMLIDTEYTKGURYGNRMKRJRNSCFUBXEAYRPCTDYYTPGARJUH");

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
    msg.setTimeStamp(0.259629364453);
    msg.setSource(36624U);
    msg.setSourceEntity(49U);
    msg.setDestination(64979U);
    msg.setDestinationEntity(24U);
    msg.value.assign("JFCKPTRCPGOXWPYOSPUPFIFRIQRTLXROQNBOSNHNTJQASIVEGSZMUBUXAXAOZMJJECQOAVAJMIJIIRXHOLWVHXTBULKKNSQDWMTKMREYQHZJZSLNYUJPKHGQMHLHAYYBVHTW");

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
    msg.setTimeStamp(0.752387136213);
    msg.setSource(19583U);
    msg.setSourceEntity(173U);
    msg.setDestination(54188U);
    msg.setDestinationEntity(147U);
    msg.value.assign("GTPCKDLCYFAFEXJHWEQRGNPUIXYLZLQAAIMSTMMAYOMDUUGHRVRVKLVGHTTJGWXSDFVGQRNECTNNYPYRYSSZJEDF");

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
    msg.setTimeStamp(0.226472091889);
    msg.setSource(36041U);
    msg.setSourceEntity(12U);
    msg.setDestination(45010U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {78, -49, 91, 93, 114, -37, -63, -44, 3, 61, -18, -91, 17, 61, -4, 61, 70, 9, 18, -91, 100, -111, -103, -59, 24, 0, 34, -39, -61, -2, 39, -127, -16, 16, -33, -116, 105, -72, 95, 47, 85, -79, -27, -121, -86, -38, -124, 42, 124, 19, 77, -114, -18, -120, 49, -1, -123, 65, 76, 42, -25, -10, 30, 44, -95, -90, -89, -1, 63, -116, 23, -75, -49, -127, 124, -34, -105, 99, 9, -57, -23, 29, -79, 15, 27, 100, -120, -31, -102, 61, 63, -54, -49, 101, 126, -66, 42, 105, -7, -105, 3, -25, -113, 93, 28, 79, 111, -126, -67, -57, -10, -121, -108, 45, -124, -26, 92, 1, 61, 105, 93, -73, 73, -95, -120, 33, -35};
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
    msg.setTimeStamp(0.740753395058);
    msg.setSource(17444U);
    msg.setSourceEntity(96U);
    msg.setDestination(11875U);
    msg.setDestinationEntity(217U);
    const char tmp_msg_0[] = {-31, 18, 108, 31, -105, -61, -88, 116, 7, -89, -108, 68, 31, -44, -9, 79, -8, -106, -102, -102, 63, -12, -65, -69, -64, 6, 6, 25, 66, -25, 118, 40, -86, 90, -107, -16, 1, 84, -109, -56, -32, 38, -22, 28, -4, 19, 111, -66, 63, 19, -70, 124, -15, 81, -27, -28, -66, 69, 4, -37, 43, -59, 30, 115, -3, -37, -9, 82, -48, 74, -52, 31, 115, 77, 102, 56, -34, -37, 106, 116, -78, -53, 117, 30, -24, -94, -72, -67, -99, -5, 61, -23, -3, -62, -13, -98, -89, -126};
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
    msg.setTimeStamp(0.716408548549);
    msg.setSource(18471U);
    msg.setSourceEntity(52U);
    msg.setDestination(31996U);
    msg.setDestinationEntity(99U);
    const char tmp_msg_0[] = {-38, -113, -72, -115, -94, 57, -22, -43, 13, 25, 40, -113, 101, 38, -55, 114, -95, -43, -46, -101, -76, -31, -99, -26, 40, -12, -10, -36, 90, 64, 103, -21, 110, 108, -104, -30, 91, -64, 18, -75, -5, 115, 76, -89, 76, -107, -124, 44, 57, 19, -105, -10, 49, 26, 66, 102, 64, -101, -123, -34, -61, 118, -55, 9, -5, 78, 14, 117, 37, 13, 55, -70, 115, -85, 45, 35, 53, 72, 57, 120, 115, -87, 102, 48, -25, -77, -64, -126, 61, -112, -8, 55, -54, 123, -115, -105, 73, -66, -92, -79, 122, 71, -84, 74, 97, 125, 109, 52, 80, -18, 3, -90, 69, 1, -3, -110, -115, -32, -18, -78, -42, -117, 72, 93, -51, -117, 119, 105, -16, 86, -30, -80, 80, -71, -21, -103, 79, 80, 114, -128, 22, -39, -76, 72, 95, -28, 49, -105, 76, -106, -51, -54, -123, -26, -75, 92, -103, 6, 37, 23, -122, 104, -65, 99, -8};
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
    msg.setTimeStamp(0.471764827408);
    msg.setSource(57424U);
    msg.setSourceEntity(126U);
    msg.setDestination(5809U);
    msg.setDestinationEntity(237U);
    msg.value = 0.739144089925;

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
    msg.setTimeStamp(0.984133236169);
    msg.setSource(55412U);
    msg.setSourceEntity(185U);
    msg.setDestination(29817U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0386201996888;

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
    msg.setTimeStamp(0.270605548605);
    msg.setSource(33779U);
    msg.setSourceEntity(134U);
    msg.setDestination(59346U);
    msg.setDestinationEntity(128U);
    msg.value = 0.628942023657;

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
    msg.setTimeStamp(0.474586770039);
    msg.setSource(8916U);
    msg.setSourceEntity(252U);
    msg.setDestination(47935U);
    msg.setDestinationEntity(185U);
    msg.type = 74U;
    msg.frequency = 2265201482U;
    msg.min_range = 57394U;
    msg.max_range = 12276U;
    msg.bits_per_point = 31U;
    msg.scale_factor = 0.510863339766;
    const char tmp_msg_0[] = {111, 42, -78, -84, -7, 63, 42, -95, -118, 117, -43, 81, -77, -89, 35, -92, -30, 30, 4, 27, 18, 91, 3, 111, 56, -67, 38, -128, 37, 75, 33, -94, 1, 117, 7, 34, -24, 90, 116, 1, 71, -15, 67, 97, -60, 11, -123, 52, 7, -35, 35, 110, 61, -4, -74, -74, -92, -85, -109, 16, 16, 64, -22, -37, -54, -98, 52, 55, 66, -122, -77, 110, 69, 29, 35, -62, -38, -76, 78, 89, -61, -40, 31, -19, -11, -73, 27, 19, 36, -1, 39, 60, 7, 74, -12, 18, -90, -74, -84, 27, 45, 40, 110, 8, -77, -14, 59, 93, 8, 47, -19, 93, -29, -42, 40, 63, -74, -115, -108, 67, -63, -19, -32, 32, 123, 74, -72, 51, -51, 63, 1, -103, 78, -61, 8, 8, -41, 48, 73, 69, 68, 38, -17};
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
    msg.setTimeStamp(0.961245235328);
    msg.setSource(2311U);
    msg.setSourceEntity(24U);
    msg.setDestination(49104U);
    msg.setDestinationEntity(69U);
    msg.type = 244U;
    msg.frequency = 316754151U;
    msg.min_range = 38361U;
    msg.max_range = 47023U;
    msg.bits_per_point = 65U;
    msg.scale_factor = 0.480700586645;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.799477414997;
    tmp_msg_0.beam_height = 0.579477354602;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {99, 30, 30, -15, 88, -36, -126, -73, -59, 37, 92, 9, -55, -36, 29, -71, -94, -43, -12, 96, 93, -101, 6, -107, -95, 34, 51, 110, 123, 55, 120, -38, 119, 75, 17, -15, 33, -76, -42, 26, -18, -93, -17, -45, 28, 77, -50, -50, 95, 108, -51, -100, 70, 76, -34, 25, 27, -108, 80, 27, -41, -97, 115, 60, -63, 49, 22, -58, 80, -41, 6, 91, 32, 95, -27, -30, 23, -116, 82, -49, 37, 46, 48, 27, 93, 39, -125, -103, -119, 96, 62, -8, 115, 125, 42, -75, -102, 54, -125, 4, -3, 60, 7, 35, -39, 117, 24, -22, 88, 3, 81, 105, -53, -77, 69, -77, 56, 90, 45, -17, 59, 13, 119, -33, -64, 90, 83, -114, 62, 97, -13, -4, 119, 9, -83, 35, -100, -8, 21, -15, -127, -59, -33, -69, -79, 56, 4, -10, 15, -30, -8, 42, -93, -115, -45, -27, 26, -73, 90, -49, 90, -76, 62, -42, 100, 121, 25, -59, 54, 73, -110, 26, -20, -29, -111, 43, 91, -114, -26, -111, 119, -62, 42, 101, -92, -87, -107, 41, -69, -23, -56, 126, -70, -112, -12, 69, -76, -38, -42, 34, -14, 85, -13, -77, 65, -91, -42, -13, 5, 66, -57, -116, -11, -64, 77, -94, 111, -86, -63, -39, -110, 106, -113, -43, -1, -54, -112};
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
    msg.setTimeStamp(0.733929100272);
    msg.setSource(50167U);
    msg.setSourceEntity(80U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(118U);
    msg.type = 190U;
    msg.frequency = 1163042748U;
    msg.min_range = 50079U;
    msg.max_range = 36138U;
    msg.bits_per_point = 119U;
    msg.scale_factor = 0.199694162424;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.428546936294;
    tmp_msg_0.beam_height = 0.586362475507;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-124, 98, 81, -7, 66, -50, 23, -3, 84, -10, 63, -128, -50, -77, 118, -37, -35, -82, 88, 104, 57, 9, 59, -84, 121, -95, -50, 5, 92, -62, 16, -81, -74, -36, -98, 85, -73, -103};
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
    msg.setTimeStamp(0.899171115759);
    msg.setSource(32802U);
    msg.setSourceEntity(232U);
    msg.setDestination(9374U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.0165891011228);
    msg.setSource(42929U);
    msg.setSourceEntity(66U);
    msg.setDestination(43067U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.933079239346);
    msg.setSource(9462U);
    msg.setSourceEntity(245U);
    msg.setDestination(28069U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.49656069829);
    msg.setSource(8309U);
    msg.setSourceEntity(164U);
    msg.setDestination(4826U);
    msg.setDestinationEntity(239U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.7512017289);
    msg.setSource(15573U);
    msg.setSourceEntity(184U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(90U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.18497028468);
    msg.setSource(1427U);
    msg.setSourceEntity(0U);
    msg.setDestination(62021U);
    msg.setDestinationEntity(230U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.105296770957);
    msg.setSource(63414U);
    msg.setSourceEntity(142U);
    msg.setDestination(28040U);
    msg.setDestinationEntity(206U);
    msg.value = 0.245138070912;
    msg.confidence = 0.620895197451;
    msg.opmodes.assign("HKDOEYOPSLHUTHYKBUBFPIKDXUACICZAVESOSFWFHWTZYUGMLZENCEMPKKJCMLWNRGINTWXCEJWIDGHRRWXGUTGUZYZUCBJRSFCJWVSXBUEAJXADPXKRFQKVWIHSVDEYATTGBHCFVGMQMAIDTNQFUCOVKKVLANXFMRYGMNQHERBRILT");

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
    msg.setTimeStamp(0.992502907769);
    msg.setSource(56173U);
    msg.setSourceEntity(193U);
    msg.setDestination(31124U);
    msg.setDestinationEntity(157U);
    msg.value = 0.996543113265;
    msg.confidence = 0.017215575158;
    msg.opmodes.assign("NMTNJUIVMWJOKOGJTKNJCMZWXEAOALBJVCEBPDCRBRHJGJAGMXMOANPMOBTMYKFORFVYHNOYDZYCSLCQGJLTWWPZMVLNKQQFLISXMFQULIXJBTBHSHEFIVJVPRNSKSGFAZQFQOIQXORYFVZWSQSERUEXDLTZUBZXEWBGWWPDL");

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
    msg.setTimeStamp(0.39177654011);
    msg.setSource(43447U);
    msg.setSourceEntity(183U);
    msg.setDestination(5543U);
    msg.setDestinationEntity(70U);
    msg.value = 0.531553946375;
    msg.confidence = 0.362304210045;
    msg.opmodes.assign("GFNEUDLMKDDEGDPJOAG");

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
    msg.setTimeStamp(0.313270809309);
    msg.setSource(49312U);
    msg.setSourceEntity(99U);
    msg.setDestination(48511U);
    msg.setDestinationEntity(3U);
    msg.itow = 898192764U;
    msg.lat = 0.229268896082;
    msg.lon = 0.306741195307;
    msg.height_ell = 0.450222743171;
    msg.height_sea = 0.73433321064;
    msg.hacc = 0.284542644854;
    msg.vacc = 0.672731433983;
    msg.vel_n = 0.142704757666;
    msg.vel_e = 0.313649947211;
    msg.vel_d = 0.179384192851;
    msg.speed = 0.464638700464;
    msg.gspeed = 0.439754729995;
    msg.heading = 0.673940960865;
    msg.sacc = 0.507351812659;
    msg.cacc = 0.197479369266;

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
    msg.setTimeStamp(0.526141005828);
    msg.setSource(39539U);
    msg.setSourceEntity(205U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(206U);
    msg.itow = 2148320579U;
    msg.lat = 0.157310015026;
    msg.lon = 0.0576150401756;
    msg.height_ell = 0.567788324817;
    msg.height_sea = 0.526461364845;
    msg.hacc = 0.736900735063;
    msg.vacc = 0.181812678384;
    msg.vel_n = 0.168656962282;
    msg.vel_e = 0.641069312679;
    msg.vel_d = 0.964159707638;
    msg.speed = 0.848531854777;
    msg.gspeed = 0.0818246745872;
    msg.heading = 0.670244045901;
    msg.sacc = 0.758076162794;
    msg.cacc = 0.16212376328;

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
    msg.setTimeStamp(0.346528224154);
    msg.setSource(57705U);
    msg.setSourceEntity(129U);
    msg.setDestination(41892U);
    msg.setDestinationEntity(91U);
    msg.itow = 785160453U;
    msg.lat = 0.672741676745;
    msg.lon = 0.622887897838;
    msg.height_ell = 0.238586556121;
    msg.height_sea = 0.0211311555991;
    msg.hacc = 0.794510557669;
    msg.vacc = 0.596874497474;
    msg.vel_n = 0.482772231202;
    msg.vel_e = 0.786789096343;
    msg.vel_d = 0.0134178225488;
    msg.speed = 0.329772109196;
    msg.gspeed = 0.430840317529;
    msg.heading = 0.837829012747;
    msg.sacc = 0.667054132374;
    msg.cacc = 0.263520489104;

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
    msg.setTimeStamp(0.806902408945);
    msg.setSource(2890U);
    msg.setSourceEntity(55U);
    msg.setDestination(16961U);
    msg.setDestinationEntity(146U);
    msg.id = 171U;
    msg.value = 0.236760290504;

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
    msg.setTimeStamp(0.0903114946551);
    msg.setSource(7927U);
    msg.setSourceEntity(227U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(159U);
    msg.id = 56U;
    msg.value = 0.55574790598;

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
    msg.setTimeStamp(0.785365838316);
    msg.setSource(37166U);
    msg.setSourceEntity(166U);
    msg.setDestination(21955U);
    msg.setDestinationEntity(134U);
    msg.id = 70U;
    msg.value = 0.00849306789069;

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
    msg.setTimeStamp(0.332691291166);
    msg.setSource(34308U);
    msg.setSourceEntity(153U);
    msg.setDestination(23564U);
    msg.setDestinationEntity(16U);
    msg.x = 0.410825381575;
    msg.y = 0.566444813874;
    msg.z = 0.288206518389;
    msg.phi = 0.754198457604;
    msg.theta = 0.264583133456;
    msg.psi = 0.18087956352;

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
    msg.setTimeStamp(0.288620459814);
    msg.setSource(45715U);
    msg.setSourceEntity(183U);
    msg.setDestination(15304U);
    msg.setDestinationEntity(153U);
    msg.x = 0.204223064317;
    msg.y = 0.149347999489;
    msg.z = 0.59952107658;
    msg.phi = 0.566808066871;
    msg.theta = 0.919028949282;
    msg.psi = 0.708766111974;

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
    msg.setTimeStamp(0.962469798281);
    msg.setSource(42123U);
    msg.setSourceEntity(35U);
    msg.setDestination(56676U);
    msg.setDestinationEntity(54U);
    msg.x = 0.470711576988;
    msg.y = 0.225378862558;
    msg.z = 0.447443462639;
    msg.phi = 0.756948176091;
    msg.theta = 0.345583010771;
    msg.psi = 0.475195500536;

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
    msg.setTimeStamp(0.2997074577);
    msg.setSource(37908U);
    msg.setSourceEntity(247U);
    msg.setDestination(38309U);
    msg.setDestinationEntity(203U);
    msg.beam_width = 0.988990278002;
    msg.beam_height = 0.94111172869;

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
    msg.setTimeStamp(0.960051110037);
    msg.setSource(46308U);
    msg.setSourceEntity(23U);
    msg.setDestination(25626U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.0434018321926;
    msg.beam_height = 0.886299307664;

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
    msg.setTimeStamp(0.950239225117);
    msg.setSource(35954U);
    msg.setSourceEntity(135U);
    msg.setDestination(46205U);
    msg.setDestinationEntity(150U);
    msg.beam_width = 0.8774176861;
    msg.beam_height = 0.171291430582;

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
    msg.setTimeStamp(0.262986435789);
    msg.setSource(48762U);
    msg.setSourceEntity(118U);
    msg.setDestination(822U);
    msg.setDestinationEntity(69U);
    msg.sane = 210U;

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
    msg.setTimeStamp(0.0258599384648);
    msg.setSource(8870U);
    msg.setSourceEntity(151U);
    msg.setDestination(59515U);
    msg.setDestinationEntity(62U);
    msg.sane = 117U;

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
    msg.setTimeStamp(0.941330720912);
    msg.setSource(21076U);
    msg.setSourceEntity(55U);
    msg.setDestination(24751U);
    msg.setDestinationEntity(17U);
    msg.sane = 161U;

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
    msg.setTimeStamp(0.0954827811612);
    msg.setSource(11701U);
    msg.setSourceEntity(99U);
    msg.setDestination(63162U);
    msg.setDestinationEntity(240U);
    msg.value = 0.696205884638;

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
    msg.setTimeStamp(0.337346882028);
    msg.setSource(21529U);
    msg.setSourceEntity(237U);
    msg.setDestination(10147U);
    msg.setDestinationEntity(229U);
    msg.value = 0.589999595424;

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
    msg.setTimeStamp(0.547844269889);
    msg.setSource(6268U);
    msg.setSourceEntity(45U);
    msg.setDestination(2795U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0532030116491;

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
    msg.setTimeStamp(0.607895764917);
    msg.setSource(56819U);
    msg.setSourceEntity(50U);
    msg.setDestination(1349U);
    msg.setDestinationEntity(200U);
    msg.value = 0.818707938992;

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
    msg.setTimeStamp(0.0532041397817);
    msg.setSource(1657U);
    msg.setSourceEntity(201U);
    msg.setDestination(41162U);
    msg.setDestinationEntity(235U);
    msg.value = 0.213521685074;

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
    msg.setTimeStamp(0.238304564936);
    msg.setSource(14990U);
    msg.setSourceEntity(82U);
    msg.setDestination(49629U);
    msg.setDestinationEntity(60U);
    msg.value = 0.263992035294;

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
    msg.setTimeStamp(0.149532787572);
    msg.setSource(20650U);
    msg.setSourceEntity(145U);
    msg.setDestination(40463U);
    msg.setDestinationEntity(88U);
    msg.value = 0.301968393258;

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
    msg.setTimeStamp(0.970512507002);
    msg.setSource(27378U);
    msg.setSourceEntity(70U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(63U);
    msg.value = 0.00141768413794;

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
    msg.setTimeStamp(0.556132373504);
    msg.setSource(5017U);
    msg.setSourceEntity(170U);
    msg.setDestination(3847U);
    msg.setDestinationEntity(67U);
    msg.value = 0.811321089021;

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
    msg.setTimeStamp(0.965996436277);
    msg.setSource(44231U);
    msg.setSourceEntity(201U);
    msg.setDestination(42683U);
    msg.setDestinationEntity(132U);
    msg.value = 0.340486131963;

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
    msg.setTimeStamp(0.746742926277);
    msg.setSource(7330U);
    msg.setSourceEntity(95U);
    msg.setDestination(50850U);
    msg.setDestinationEntity(194U);
    msg.value = 0.969793361461;

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
    msg.setTimeStamp(0.841911311186);
    msg.setSource(61006U);
    msg.setSourceEntity(31U);
    msg.setDestination(62072U);
    msg.setDestinationEntity(223U);
    msg.value = 0.0534651734717;

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
    msg.setTimeStamp(0.7770941473);
    msg.setSource(10123U);
    msg.setSourceEntity(92U);
    msg.setDestination(10114U);
    msg.setDestinationEntity(184U);
    msg.value = 0.149701921007;

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
    msg.setTimeStamp(0.389159803391);
    msg.setSource(16161U);
    msg.setSourceEntity(54U);
    msg.setDestination(40358U);
    msg.setDestinationEntity(90U);
    msg.value = 0.379764545488;

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
    msg.setTimeStamp(0.861116484162);
    msg.setSource(4912U);
    msg.setSourceEntity(188U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(233U);
    msg.value = 0.558923234726;

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
    msg.setTimeStamp(0.644692916405);
    msg.setSource(36147U);
    msg.setSourceEntity(101U);
    msg.setDestination(43573U);
    msg.setDestinationEntity(43U);
    msg.value = 0.337436711261;

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
    msg.setTimeStamp(0.339807567794);
    msg.setSource(35017U);
    msg.setSourceEntity(39U);
    msg.setDestination(28295U);
    msg.setDestinationEntity(72U);
    msg.value = 0.769862662211;

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
    msg.setTimeStamp(0.436749218346);
    msg.setSource(8472U);
    msg.setSourceEntity(19U);
    msg.setDestination(24263U);
    msg.setDestinationEntity(16U);
    msg.value = 0.856441744058;

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
    msg.setTimeStamp(0.75183379387);
    msg.setSource(63065U);
    msg.setSourceEntity(5U);
    msg.setDestination(49142U);
    msg.setDestinationEntity(57U);
    msg.value = 0.439728696515;

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
    msg.setTimeStamp(0.348835499755);
    msg.setSource(48188U);
    msg.setSourceEntity(136U);
    msg.setDestination(49218U);
    msg.setDestinationEntity(184U);
    msg.value = 0.731994173337;

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
    msg.setTimeStamp(0.111013058655);
    msg.setSource(53617U);
    msg.setSourceEntity(252U);
    msg.setDestination(50968U);
    msg.setDestinationEntity(216U);
    msg.value = 0.410271600551;

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
    msg.setTimeStamp(0.327433832809);
    msg.setSource(31882U);
    msg.setSourceEntity(53U);
    msg.setDestination(3020U);
    msg.setDestinationEntity(32U);
    msg.value = 0.577951462783;

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
    msg.setTimeStamp(0.798047356087);
    msg.setSource(30331U);
    msg.setSourceEntity(73U);
    msg.setDestination(37545U);
    msg.setDestinationEntity(64U);
    msg.value = 0.588799528559;

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
    msg.setTimeStamp(0.868135080441);
    msg.setSource(5927U);
    msg.setSourceEntity(86U);
    msg.setDestination(22710U);
    msg.setDestinationEntity(31U);
    msg.value = 0.513209263087;

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
    msg.setTimeStamp(0.940117318823);
    msg.setSource(8971U);
    msg.setSourceEntity(231U);
    msg.setDestination(10625U);
    msg.setDestinationEntity(213U);
    msg.validity = 65397U;
    msg.type = 251U;
    msg.tow = 3206115371U;
    msg.base_lat = 0.997856893616;
    msg.base_lon = 0.613936393831;
    msg.base_height = 0.183295834655;
    msg.n = 0.608163286753;
    msg.e = 0.239676727006;
    msg.d = 0.00302854394886;
    msg.v_n = 0.744450179506;
    msg.v_e = 0.223953372648;
    msg.v_d = 0.0869336457267;
    msg.satellites = 135U;
    msg.iar_hyp = 50790U;
    msg.iar_ratio = 0.998271674902;

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
    msg.setTimeStamp(0.0371687399399);
    msg.setSource(5859U);
    msg.setSourceEntity(167U);
    msg.setDestination(31300U);
    msg.setDestinationEntity(181U);
    msg.validity = 51048U;
    msg.type = 53U;
    msg.tow = 3786006381U;
    msg.base_lat = 0.486495335908;
    msg.base_lon = 0.420457835161;
    msg.base_height = 0.100891681694;
    msg.n = 0.415697472967;
    msg.e = 0.0168049361461;
    msg.d = 0.359463792751;
    msg.v_n = 0.648341062666;
    msg.v_e = 0.650823876726;
    msg.v_d = 0.651804089231;
    msg.satellites = 44U;
    msg.iar_hyp = 10942U;
    msg.iar_ratio = 0.868048940552;

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
    msg.setTimeStamp(0.480979611523);
    msg.setSource(13723U);
    msg.setSourceEntity(99U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(112U);
    msg.validity = 19U;
    msg.type = 36U;
    msg.tow = 1414121844U;
    msg.base_lat = 0.38182073596;
    msg.base_lon = 0.37802586882;
    msg.base_height = 0.123456038638;
    msg.n = 0.0682743639875;
    msg.e = 0.131785221322;
    msg.d = 0.291926305409;
    msg.v_n = 0.319102871343;
    msg.v_e = 0.592321055886;
    msg.v_d = 0.390776901259;
    msg.satellites = 96U;
    msg.iar_hyp = 59364U;
    msg.iar_ratio = 0.0505186985381;

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
    msg.setTimeStamp(0.431369836685);
    msg.setSource(59259U);
    msg.setSourceEntity(225U);
    msg.setDestination(11983U);
    msg.setDestinationEntity(19U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.273737350203;
    tmp_msg_0.lon = 0.863963611367;
    tmp_msg_0.height = 0.675136065312;
    tmp_msg_0.x = 0.5895517725;
    tmp_msg_0.y = 0.224405286445;
    tmp_msg_0.z = 0.626824977022;
    tmp_msg_0.phi = 0.906044439159;
    tmp_msg_0.theta = 0.73119367829;
    tmp_msg_0.psi = 0.377712207255;
    tmp_msg_0.u = 0.690287753687;
    tmp_msg_0.v = 0.236689509389;
    tmp_msg_0.w = 0.620493318682;
    tmp_msg_0.vx = 0.919001753315;
    tmp_msg_0.vy = 0.0816651559947;
    tmp_msg_0.vz = 0.576788509093;
    tmp_msg_0.p = 0.166161747057;
    tmp_msg_0.q = 0.862816341363;
    tmp_msg_0.r = 0.134018157014;
    tmp_msg_0.depth = 0.634402422105;
    tmp_msg_0.alt = 0.185775460454;
    msg.state.set(tmp_msg_0);
    msg.type = 196U;

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
    msg.setTimeStamp(0.663283574411);
    msg.setSource(7177U);
    msg.setSourceEntity(196U);
    msg.setDestination(35102U);
    msg.setDestinationEntity(149U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.873017881472;
    tmp_msg_0.lon = 0.426824698422;
    tmp_msg_0.height = 0.865191705088;
    tmp_msg_0.x = 0.967347719879;
    tmp_msg_0.y = 0.207704492009;
    tmp_msg_0.z = 0.103061986759;
    tmp_msg_0.phi = 0.0861871108643;
    tmp_msg_0.theta = 0.779155643535;
    tmp_msg_0.psi = 0.924906556328;
    tmp_msg_0.u = 0.847436087489;
    tmp_msg_0.v = 0.761925356968;
    tmp_msg_0.w = 0.923048963157;
    tmp_msg_0.vx = 0.178307060301;
    tmp_msg_0.vy = 0.0322290330289;
    tmp_msg_0.vz = 0.442168696714;
    tmp_msg_0.p = 0.479793930233;
    tmp_msg_0.q = 0.450182104568;
    tmp_msg_0.r = 0.87682470335;
    tmp_msg_0.depth = 0.231888509226;
    tmp_msg_0.alt = 0.949049955987;
    msg.state.set(tmp_msg_0);
    msg.type = 155U;

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
    msg.setTimeStamp(0.0808438272613);
    msg.setSource(55166U);
    msg.setSourceEntity(195U);
    msg.setDestination(12970U);
    msg.setDestinationEntity(33U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.595491253261;
    tmp_msg_0.lon = 0.719426155645;
    tmp_msg_0.height = 0.847506708442;
    tmp_msg_0.x = 0.815928597753;
    tmp_msg_0.y = 0.339549479651;
    tmp_msg_0.z = 0.169248754055;
    tmp_msg_0.phi = 0.103691107994;
    tmp_msg_0.theta = 0.939330988796;
    tmp_msg_0.psi = 0.821200698033;
    tmp_msg_0.u = 0.803639315482;
    tmp_msg_0.v = 0.864696707215;
    tmp_msg_0.w = 0.267454939211;
    tmp_msg_0.vx = 0.800544454709;
    tmp_msg_0.vy = 0.242002878214;
    tmp_msg_0.vz = 0.383266382679;
    tmp_msg_0.p = 0.610002378487;
    tmp_msg_0.q = 0.28633759819;
    tmp_msg_0.r = 0.580646486209;
    tmp_msg_0.depth = 0.613456633206;
    tmp_msg_0.alt = 0.853830697096;
    msg.state.set(tmp_msg_0);
    msg.type = 187U;

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
    msg.setTimeStamp(0.18308006124);
    msg.setSource(45393U);
    msg.setSourceEntity(121U);
    msg.setDestination(1611U);
    msg.setDestinationEntity(45U);
    msg.value = 0.61843427861;

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
    msg.setTimeStamp(0.316301751873);
    msg.setSource(24847U);
    msg.setSourceEntity(3U);
    msg.setDestination(3053U);
    msg.setDestinationEntity(155U);
    msg.value = 0.883312914037;

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
    msg.setTimeStamp(0.466009596922);
    msg.setSource(54278U);
    msg.setSourceEntity(91U);
    msg.setDestination(47181U);
    msg.setDestinationEntity(170U);
    msg.value = 0.224590137316;

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
    msg.setTimeStamp(0.0217808970268);
    msg.setSource(16294U);
    msg.setSourceEntity(187U);
    msg.setDestination(58269U);
    msg.setDestinationEntity(133U);
    msg.value = 0.715656897517;

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
    msg.setTimeStamp(0.456299933008);
    msg.setSource(1978U);
    msg.setSourceEntity(117U);
    msg.setDestination(24584U);
    msg.setDestinationEntity(60U);
    msg.value = 0.901443937615;

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
    msg.setTimeStamp(0.350531147965);
    msg.setSource(45937U);
    msg.setSourceEntity(218U);
    msg.setDestination(23545U);
    msg.setDestinationEntity(232U);
    msg.value = 0.920648178265;

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
    msg.setTimeStamp(0.00683319669234);
    msg.setSource(3566U);
    msg.setSourceEntity(164U);
    msg.setDestination(56330U);
    msg.setDestinationEntity(254U);
    msg.value = 0.262009432246;

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
    msg.setTimeStamp(0.870759437882);
    msg.setSource(19071U);
    msg.setSourceEntity(170U);
    msg.setDestination(13933U);
    msg.setDestinationEntity(19U);
    msg.value = 0.80904446613;

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
    msg.setTimeStamp(0.717977379774);
    msg.setSource(5656U);
    msg.setSourceEntity(248U);
    msg.setDestination(35970U);
    msg.setDestinationEntity(126U);
    msg.value = 0.0893952052725;

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
    msg.setTimeStamp(0.0306638401065);
    msg.setSource(35078U);
    msg.setSourceEntity(10U);
    msg.setDestination(37013U);
    msg.setDestinationEntity(30U);
    msg.value = 0.239988123351;

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
    msg.setTimeStamp(0.775923418625);
    msg.setSource(58520U);
    msg.setSourceEntity(74U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(147U);
    msg.value = 0.806653395542;

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
    msg.setTimeStamp(0.238034266687);
    msg.setSource(35365U);
    msg.setSourceEntity(187U);
    msg.setDestination(57099U);
    msg.setDestinationEntity(149U);
    msg.value = 0.340096483406;

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
    msg.setTimeStamp(0.63666146854);
    msg.setSource(28286U);
    msg.setSourceEntity(163U);
    msg.setDestination(2016U);
    msg.setDestinationEntity(67U);
    msg.value = 0.313217819354;

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
    msg.setTimeStamp(0.553280529188);
    msg.setSource(64611U);
    msg.setSourceEntity(6U);
    msg.setDestination(60384U);
    msg.setDestinationEntity(57U);
    msg.value = 0.796017547938;

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
    msg.setTimeStamp(0.505734126781);
    msg.setSource(33759U);
    msg.setSourceEntity(42U);
    msg.setDestination(3768U);
    msg.setDestinationEntity(12U);
    msg.value = 0.783554676199;

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
    msg.setTimeStamp(0.308529346141);
    msg.setSource(46080U);
    msg.setSourceEntity(25U);
    msg.setDestination(1429U);
    msg.setDestinationEntity(96U);
    msg.id = 11U;
    msg.zoom = 1U;
    msg.action = 198U;

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
    msg.setTimeStamp(0.614355678333);
    msg.setSource(2219U);
    msg.setSourceEntity(144U);
    msg.setDestination(35696U);
    msg.setDestinationEntity(205U);
    msg.id = 203U;
    msg.zoom = 98U;
    msg.action = 162U;

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
    msg.setTimeStamp(0.0952482157496);
    msg.setSource(11680U);
    msg.setSourceEntity(239U);
    msg.setDestination(64530U);
    msg.setDestinationEntity(183U);
    msg.id = 213U;
    msg.zoom = 0U;
    msg.action = 124U;

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
    msg.setTimeStamp(0.422441542471);
    msg.setSource(24336U);
    msg.setSourceEntity(110U);
    msg.setDestination(20643U);
    msg.setDestinationEntity(146U);
    msg.id = 70U;
    msg.value = 0.370440840282;

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
    msg.setTimeStamp(0.159764077867);
    msg.setSource(18610U);
    msg.setSourceEntity(118U);
    msg.setDestination(47501U);
    msg.setDestinationEntity(207U);
    msg.id = 153U;
    msg.value = 0.739649902347;

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
    msg.setTimeStamp(0.568886330585);
    msg.setSource(52408U);
    msg.setSourceEntity(184U);
    msg.setDestination(7322U);
    msg.setDestinationEntity(14U);
    msg.id = 210U;
    msg.value = 0.109233626594;

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
    msg.setTimeStamp(0.107394257728);
    msg.setSource(64704U);
    msg.setSourceEntity(175U);
    msg.setDestination(36435U);
    msg.setDestinationEntity(108U);
    msg.id = 210U;
    msg.value = 0.671864920363;

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
    msg.setTimeStamp(0.687129391486);
    msg.setSource(47093U);
    msg.setSourceEntity(20U);
    msg.setDestination(10912U);
    msg.setDestinationEntity(246U);
    msg.id = 176U;
    msg.value = 0.313207410463;

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
    msg.setTimeStamp(0.22677486629);
    msg.setSource(5464U);
    msg.setSourceEntity(106U);
    msg.setDestination(20216U);
    msg.setDestinationEntity(50U);
    msg.id = 106U;
    msg.value = 0.585725948749;

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
    msg.setTimeStamp(0.802366440769);
    msg.setSource(15698U);
    msg.setSourceEntity(175U);
    msg.setDestination(365U);
    msg.setDestinationEntity(233U);
    msg.id = 232U;
    msg.angle = 0.401498778098;

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
    msg.setTimeStamp(0.23820838087);
    msg.setSource(50930U);
    msg.setSourceEntity(4U);
    msg.setDestination(51469U);
    msg.setDestinationEntity(183U);
    msg.id = 71U;
    msg.angle = 0.253347444085;

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
    msg.setTimeStamp(0.106111390849);
    msg.setSource(16345U);
    msg.setSourceEntity(27U);
    msg.setDestination(54585U);
    msg.setDestinationEntity(13U);
    msg.id = 222U;
    msg.angle = 0.486025636161;

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
    msg.setTimeStamp(0.687062629566);
    msg.setSource(1017U);
    msg.setSourceEntity(169U);
    msg.setDestination(20840U);
    msg.setDestinationEntity(99U);
    msg.op = 158U;
    msg.actions.assign("RQMGXLGXFZJQNDFSVEAHUEVXDPSYKWJCJLNBVOYNZUSTFDYDWNRWZMPJLLJTDRMAITJUKKJTUSTGGINFZXAJXBKVTILULBEEZCIRMXZQMQGCSMYZMMISICYHRBWPSQWRUHRNALLHMWHAKFJHAORYNFLL");

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
    msg.setTimeStamp(0.478957372198);
    msg.setSource(3034U);
    msg.setSourceEntity(249U);
    msg.setDestination(34426U);
    msg.setDestinationEntity(25U);
    msg.op = 238U;
    msg.actions.assign("LVIECDQGKRQVQFCOEJPFOLERCQNDUXTYKZNZKLVQMDKAAEDZFMEIZBEKVBQHCIWDRYAPXJGPZOJUHBPUNOJGIVZHJVQFMRGRXPTA");

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
    msg.setTimeStamp(0.885220336527);
    msg.setSource(8323U);
    msg.setSourceEntity(94U);
    msg.setDestination(63783U);
    msg.setDestinationEntity(19U);
    msg.op = 160U;
    msg.actions.assign("OZROOGAGXKEAGDRUUYQVJMSMCFRKJOWPNLWFFZWGXOQNQHQTBJEUIUJFKHKA");

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
    msg.setTimeStamp(0.684694589072);
    msg.setSource(21710U);
    msg.setSourceEntity(235U);
    msg.setDestination(18503U);
    msg.setDestinationEntity(252U);
    msg.actions.assign("YOTXUQPDTXRLMXZSDWOMROXHMLQKDZEDYMHJJGDVAKLYZATCCONYKAXEQOVZOQIISIPSXCV");

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
    msg.setTimeStamp(0.921433201153);
    msg.setSource(11958U);
    msg.setSourceEntity(241U);
    msg.setDestination(3799U);
    msg.setDestinationEntity(133U);
    msg.actions.assign("AZVJLRTVQRYNUDECJUWSLYPSKDHQVBUBAOJUKOZHRHMQFZGKGMITPWXRSZEAFHWPFXOOHCOTFABQRZWMMXKZXEDRLTAYWFFJOMCSHVEZPTQUJPMYIGEPBLKEPDJGUTRYNZRGJLSNGHEVDIKMIPKDYGPXWLFOTIFWGKQMONIVOXRIQVXABZNNWQGSFXYCSUVBNILDCATRMCMVJUZHDCSNLAVYKLYBAAEINFQIWESXEODQYUJJGWHCNDBTCULK");

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
    msg.setTimeStamp(0.789054025937);
    msg.setSource(5781U);
    msg.setSourceEntity(178U);
    msg.setDestination(21292U);
    msg.setDestinationEntity(131U);
    msg.actions.assign("AVSEKDQULNVTACIHAOEAGILFMWHYJAKYUYUCYLZBJWMBKOGTRTVAHGKCEFSDPDZMEPSEXNCUXVFJBNUDGS");

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
    msg.setTimeStamp(0.685413678767);
    msg.setSource(56776U);
    msg.setSourceEntity(26U);
    msg.setDestination(63539U);
    msg.setDestinationEntity(159U);
    msg.button = 23U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.793434771884);
    msg.setSource(21831U);
    msg.setSourceEntity(133U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(45U);
    msg.button = 40U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.331901807954);
    msg.setSource(9586U);
    msg.setSourceEntity(71U);
    msg.setDestination(63311U);
    msg.setDestinationEntity(74U);
    msg.button = 225U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.640002704597);
    msg.setSource(64472U);
    msg.setSourceEntity(155U);
    msg.setDestination(8673U);
    msg.setDestinationEntity(193U);
    msg.op = 222U;
    msg.text.assign("BCALMVDATHYIDZOUHRPJZZKHRAGVMEXGKNJDXBMRIUZGPPITNVUFJOB");

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
    msg.setTimeStamp(0.80371063065);
    msg.setSource(9517U);
    msg.setSourceEntity(3U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(247U);
    msg.op = 202U;
    msg.text.assign("PGCITCGTXEUVWGUXABUQLCJXYTVMFHXOJMEUKSZGFWRZKMYQYLHOTTNGCGWXAPRBYOTIZDJXTJOQLXMEARXTJADNUPGOVKYIBDTOUVHPMPNSIZYLYESOLDNHSBZHVMDPYBEDQFBZVWCKPCOEPAFGDFSBFUWHHQWBEVJMLOYZVLIDZDRHELKPMUECIBFNFCRSIDHWWFJXRANGWCRQVJMNNIBRZMAT");

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
    msg.setTimeStamp(0.589328438469);
    msg.setSource(27516U);
    msg.setSourceEntity(133U);
    msg.setDestination(60700U);
    msg.setDestinationEntity(197U);
    msg.op = 76U;
    msg.text.assign("DMVVFXHRACMHAOERYXBOORKAGRZNQQUCHJQWZFZLIJUZIMXVDZFPNPCHKOTDWXGQJTWDGFGESEBBPDJCSIAXAKPTZVRRIWDKQPIEKSLQNQIJGEBMBDYSFEOBNMCWSMHUYXYGEUNLTRHYLMQDLCFXPWEROVIEJFCKZTLAFGUTNZJOHYRAUSXKGXMDSZVOULPUJCFZYTPDICP");

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
    msg.setTimeStamp(0.561780761632);
    msg.setSource(8224U);
    msg.setSourceEntity(39U);
    msg.setDestination(6558U);
    msg.setDestinationEntity(212U);
    msg.op = 79U;
    msg.time_remain = 0.634149287897;
    msg.sched_time = 0.209286014331;

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
    msg.setTimeStamp(0.369155606271);
    msg.setSource(33632U);
    msg.setSourceEntity(169U);
    msg.setDestination(34225U);
    msg.setDestinationEntity(0U);
    msg.op = 165U;
    msg.time_remain = 0.283339663311;
    msg.sched_time = 0.453489462852;

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
    msg.setTimeStamp(0.541064006434);
    msg.setSource(63607U);
    msg.setSourceEntity(89U);
    msg.setDestination(19704U);
    msg.setDestinationEntity(44U);
    msg.op = 43U;
    msg.time_remain = 0.941806239559;
    msg.sched_time = 0.410107950759;

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
    msg.setTimeStamp(0.571188994533);
    msg.setSource(43973U);
    msg.setSourceEntity(22U);
    msg.setDestination(16201U);
    msg.setDestinationEntity(201U);
    msg.name.assign("DUVSLAFSWJRXGKKSIKWQJMSJBIWITVLZGPBWOYBQHTUMZUPDWZXZIHHNEXVCRBJJICUZSFTJYRXBROPQKEEVQDJV");
    msg.op = 146U;
    msg.sched_time = 0.537776341323;

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
    msg.setTimeStamp(0.135214802048);
    msg.setSource(12084U);
    msg.setSourceEntity(223U);
    msg.setDestination(40572U);
    msg.setDestinationEntity(24U);
    msg.name.assign("ZAFDINVDWZBGRBNITVHDCXPHSYKCVRUYRLEBHVAYTOAYSZWQLORCXDWDLYOQLCXHGFTZSQUUSGFJYOWGRANDPGHLFVGAWEXZIGWASTCZBFUHXKQFWWONRRUIJKIOVVWQJMUPPPPRKPOOGZQRBBVFUUTXSATNPMERZHMEASIFHXDQTKWGCTMLVMLTCZKHACDNDQMTYNSKK");
    msg.op = 192U;
    msg.sched_time = 0.738752993441;

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
    msg.setTimeStamp(0.748990564776);
    msg.setSource(44899U);
    msg.setSourceEntity(129U);
    msg.setDestination(24760U);
    msg.setDestinationEntity(112U);
    msg.name.assign("XLNRBDLBADREXYYAFSLUEILHEXTZIQCFNDZFFJZXURGXSXOWVONJAQUOGZBVFEUYCZXRZQWSLOKKOMJGTPPWMUQWJSLSFZEEXRAEUTONOGFIXCAYBTHHCJNGDLVXRVWHOBYIFRDRRKQIDEDKJHNLBHSMCVFYQAWQONTIAQPNDBKLHHVGFSSENGVJM");
    msg.op = 221U;
    msg.sched_time = 0.818407264817;

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
    msg.setTimeStamp(0.600206062165);
    msg.setSource(3100U);
    msg.setSourceEntity(105U);
    msg.setDestination(26118U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.356796105283);
    msg.setSource(44732U);
    msg.setSourceEntity(58U);
    msg.setDestination(45972U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.158499068556);
    msg.setSource(64653U);
    msg.setSourceEntity(104U);
    msg.setDestination(32522U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.181779747391);
    msg.setSource(11178U);
    msg.setSourceEntity(105U);
    msg.setDestination(62346U);
    msg.setDestinationEntity(117U);
    msg.name.assign("DVAMSQGHWITFNLNUZRFRXERVWPHIPKMSRIXDXGANIXPYEYSNPKIOTOVTSUWPCABOOFZRDUDYKKUOJANTXFOA");
    msg.state = 182U;

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
    msg.setTimeStamp(0.256877288775);
    msg.setSource(63751U);
    msg.setSourceEntity(106U);
    msg.setDestination(12685U);
    msg.setDestinationEntity(138U);
    msg.name.assign("NHRIHYTOHDTJKBCVGGGZPKJJEKCZPBSNMSPPWSNHWJVQIASNJQIKHFPZECGXOJBRDMUZOLLJLETREXIZWEKRXLTYIKMPWDNDMMIMDPLPUVXUESZASLXQRIQDBKFAMYBAWZQFQGCUGZXORNVALTVCAVUTMANUQUYVFRWFDBUXYBFARWSJOWHGYVYOQYCPWLREHNSBTHAWBGXYMCNIFAITOO");
    msg.state = 36U;

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
    msg.setTimeStamp(0.510308148346);
    msg.setSource(62693U);
    msg.setSourceEntity(36U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RQHDYCVVXSPGNPBFACMBODGALFWKCWAIXSSCOMTBDZDKWOSTGMEUMMIPRXHJYYPSZYLPTCBDHDRSRDLUKMIIFEZJLQJWRVQGFEELTVWTUEBNMQIEZPLYJMOUHIQHTCODHYCXKXSKBAFNJURILYLRGUKJHKVTEUNDNDSFYKNZTUWBJRLYFVYAUPWVGICIIGXTTECWFENAZQHQWBBLJSONEPZAQXRAUWQOONMJMXN");
    msg.state = 242U;

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
    msg.setTimeStamp(0.0733455075494);
    msg.setSource(44123U);
    msg.setSourceEntity(60U);
    msg.setDestination(52140U);
    msg.setDestinationEntity(128U);
    msg.name.assign("DQMINZCYIVWBIYEUEWLBJHDTENMUAQHTIQEZZXKUVHCKBPMTVFVHXOYCWCYEQASF");
    msg.value = 143U;

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
    msg.setTimeStamp(0.97812898642);
    msg.setSource(32338U);
    msg.setSourceEntity(241U);
    msg.setDestination(9707U);
    msg.setDestinationEntity(98U);
    msg.name.assign("QELBLJDIQPYZLWQFMT");
    msg.value = 233U;

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
    msg.setTimeStamp(0.941251536686);
    msg.setSource(58386U);
    msg.setSourceEntity(152U);
    msg.setDestination(22269U);
    msg.setDestinationEntity(69U);
    msg.name.assign("AVETARZBAGPMYEFHGMDIOJMAQICHZLULRXNOIWUVZCXPYTNDVNI");
    msg.value = 175U;

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
    msg.setTimeStamp(0.911926784112);
    msg.setSource(5389U);
    msg.setSourceEntity(96U);
    msg.setDestination(54374U);
    msg.setDestinationEntity(227U);
    msg.name.assign("KIWDCJRZJJARXXOYIMYAZQKXBSMNTHGKTUFYNVPLVGDAXYELDOIWKSHHPJSXBEXLZFCUYBOKIQFZWNXCSBVWCUVQTHZUOTMPNVRUEUMEMFJZAMBDGRRYTSPIAXAQGBSNLEFFNOVVBXKKQHMRC");

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
    msg.setTimeStamp(0.806315057463);
    msg.setSource(37763U);
    msg.setSourceEntity(251U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(15U);
    msg.name.assign("HOWYBRWSDXOBABVTMQGYRTKTCAHKWAVRPMLFWAYWQLRPVPCISNXAFGSAZZJBFJWUVMKEWIHVEFJCUXMNMWGDUEHLN");

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
    msg.setTimeStamp(0.701836477901);
    msg.setSource(44875U);
    msg.setSourceEntity(33U);
    msg.setDestination(8233U);
    msg.setDestinationEntity(31U);
    msg.name.assign("HDWOGMCGMLKMDHKWVTEKXVUEEDVXTPRNCXNMTSHSNELEVTOQQKLGYMWCBBIAEFKGK");

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
    msg.setTimeStamp(0.28105069688);
    msg.setSource(10460U);
    msg.setSourceEntity(26U);
    msg.setDestination(1010U);
    msg.setDestinationEntity(121U);
    msg.name.assign("YOPOHZIMHVIVBHVMNOJXSFMMZGZUOCEQDUCEFDZJQGHHGCBNVEDVPHMATUPWKXJEWXGKNBCBKFPDBEIDHQPQJXOLYKMJXMJKDCVWCNDYPFTYYYESTOVQLRNQUAXRZKCXZWOUKSXRTYUFALWSELLNAIQSOHBIZFEWNTIDLNFYATRARRNB");
    msg.value = 43U;

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
    msg.setTimeStamp(0.203601826287);
    msg.setSource(63246U);
    msg.setSourceEntity(190U);
    msg.setDestination(3638U);
    msg.setDestinationEntity(241U);
    msg.name.assign("UTHIRAQUBEURTMPGXCNZQYUNKIZHBICIDWUHCGNYUWZDJKGNYRGRXXCZLEVEQIOFPBLYNECTRXZASVSXIHOYQLZFCOAKFDGVTSMZRSJJNPVWLYZODMVRWZBPDITYZOPTLWOWUFYJRHYABYACP");
    msg.value = 192U;

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
    msg.setTimeStamp(0.332586719778);
    msg.setSource(10428U);
    msg.setSourceEntity(123U);
    msg.setDestination(58315U);
    msg.setDestinationEntity(163U);
    msg.name.assign("LLQHEHHOICWQISRNRVLHXWQDCVWIAXGTAKEBUFEOXMZHYFSNVUJCJFPJUKVDYPNNGVUXSOBSVJ");
    msg.value = 243U;

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
    msg.setTimeStamp(0.583600094314);
    msg.setSource(8906U);
    msg.setSourceEntity(136U);
    msg.setDestination(288U);
    msg.setDestinationEntity(160U);
    msg.id = 84U;
    msg.period = 84103246U;
    msg.duty_cycle = 4254466423U;

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
    msg.setTimeStamp(0.511841617648);
    msg.setSource(24335U);
    msg.setSourceEntity(177U);
    msg.setDestination(60669U);
    msg.setDestinationEntity(50U);
    msg.id = 215U;
    msg.period = 3645658211U;
    msg.duty_cycle = 3704389656U;

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
    msg.setTimeStamp(0.966877439789);
    msg.setSource(36458U);
    msg.setSourceEntity(203U);
    msg.setDestination(58262U);
    msg.setDestinationEntity(48U);
    msg.id = 163U;
    msg.period = 598986286U;
    msg.duty_cycle = 1978810551U;

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
    msg.setTimeStamp(0.190618806316);
    msg.setSource(53742U);
    msg.setSourceEntity(78U);
    msg.setDestination(9886U);
    msg.setDestinationEntity(216U);
    msg.id = 87U;
    msg.period = 577665253U;
    msg.duty_cycle = 3908741372U;

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
    msg.setTimeStamp(0.430556855255);
    msg.setSource(22569U);
    msg.setSourceEntity(247U);
    msg.setDestination(54899U);
    msg.setDestinationEntity(114U);
    msg.id = 183U;
    msg.period = 3805126030U;
    msg.duty_cycle = 2525517850U;

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
    msg.setTimeStamp(0.78462051635);
    msg.setSource(6502U);
    msg.setSourceEntity(249U);
    msg.setDestination(65497U);
    msg.setDestinationEntity(242U);
    msg.id = 232U;
    msg.period = 1300545207U;
    msg.duty_cycle = 853293740U;

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
    msg.setTimeStamp(0.822192974764);
    msg.setSource(38467U);
    msg.setSourceEntity(38U);
    msg.setDestination(22737U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.834121185918;
    msg.lon = 0.376204407311;
    msg.height = 0.872022286606;
    msg.x = 0.131747957185;
    msg.y = 0.305514481699;
    msg.z = 0.366395367439;
    msg.phi = 0.357664869654;
    msg.theta = 0.1129099489;
    msg.psi = 0.47905400532;
    msg.u = 0.89139383977;
    msg.v = 0.214840533584;
    msg.w = 0.169070433083;
    msg.vx = 0.907586470851;
    msg.vy = 0.861306559676;
    msg.vz = 0.187000811788;
    msg.p = 0.634174908483;
    msg.q = 0.43675766663;
    msg.r = 0.121337309923;
    msg.depth = 0.261865099145;
    msg.alt = 0.128769549342;

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
    msg.setTimeStamp(0.846746790242);
    msg.setSource(32399U);
    msg.setSourceEntity(121U);
    msg.setDestination(13125U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.61619085368;
    msg.lon = 0.285131305607;
    msg.height = 0.233569289084;
    msg.x = 0.305177048569;
    msg.y = 0.865425288629;
    msg.z = 0.82919460232;
    msg.phi = 0.827508309592;
    msg.theta = 0.0261643938817;
    msg.psi = 0.390570364433;
    msg.u = 0.1081000894;
    msg.v = 0.403452671167;
    msg.w = 0.821894048183;
    msg.vx = 0.279360902609;
    msg.vy = 0.0689804482218;
    msg.vz = 0.958528170927;
    msg.p = 0.873825291024;
    msg.q = 0.648859388921;
    msg.r = 0.474647276815;
    msg.depth = 0.466775669462;
    msg.alt = 0.71472794336;

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
    msg.setTimeStamp(0.813360317144);
    msg.setSource(3047U);
    msg.setSourceEntity(33U);
    msg.setDestination(36810U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.0762193644604;
    msg.lon = 0.704351254335;
    msg.height = 0.0925768552798;
    msg.x = 0.11487343129;
    msg.y = 0.367022522239;
    msg.z = 0.264033471061;
    msg.phi = 0.162062298639;
    msg.theta = 0.160814983215;
    msg.psi = 0.673738912738;
    msg.u = 0.442250500166;
    msg.v = 0.173459808642;
    msg.w = 0.166899463803;
    msg.vx = 0.887044541346;
    msg.vy = 0.428103797489;
    msg.vz = 0.590791619254;
    msg.p = 0.351506047023;
    msg.q = 0.727039634213;
    msg.r = 0.617839834086;
    msg.depth = 0.173596261331;
    msg.alt = 0.0971775157356;

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
    msg.setTimeStamp(0.0920348439912);
    msg.setSource(8241U);
    msg.setSourceEntity(128U);
    msg.setDestination(19265U);
    msg.setDestinationEntity(157U);
    msg.x = 0.846082417585;
    msg.y = 0.719971837214;
    msg.z = 0.484229901712;

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
    msg.setTimeStamp(0.530210287005);
    msg.setSource(51983U);
    msg.setSourceEntity(44U);
    msg.setDestination(42125U);
    msg.setDestinationEntity(222U);
    msg.x = 0.00298644628464;
    msg.y = 0.839418949924;
    msg.z = 0.393760186786;

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
    msg.setTimeStamp(0.520481561669);
    msg.setSource(10706U);
    msg.setSourceEntity(12U);
    msg.setDestination(1254U);
    msg.setDestinationEntity(247U);
    msg.x = 0.803623730963;
    msg.y = 0.0714574018369;
    msg.z = 0.080894732027;

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
    msg.setTimeStamp(0.752751915641);
    msg.setSource(20535U);
    msg.setSourceEntity(20U);
    msg.setDestination(56807U);
    msg.setDestinationEntity(66U);
    msg.value = 0.595816437427;

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
    msg.setTimeStamp(0.490111534061);
    msg.setSource(47912U);
    msg.setSourceEntity(75U);
    msg.setDestination(8063U);
    msg.setDestinationEntity(62U);
    msg.value = 0.725010265752;

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
    msg.setTimeStamp(0.106112330401);
    msg.setSource(20364U);
    msg.setSourceEntity(193U);
    msg.setDestination(46519U);
    msg.setDestinationEntity(9U);
    msg.value = 0.691077782111;

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
    msg.setTimeStamp(0.530452548755);
    msg.setSource(53150U);
    msg.setSourceEntity(202U);
    msg.setDestination(33600U);
    msg.setDestinationEntity(19U);
    msg.value = 0.445148379086;

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
    msg.setTimeStamp(0.799454501322);
    msg.setSource(19810U);
    msg.setSourceEntity(203U);
    msg.setDestination(10619U);
    msg.setDestinationEntity(88U);
    msg.value = 0.740829903659;

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
    msg.setTimeStamp(0.336214363848);
    msg.setSource(33588U);
    msg.setSourceEntity(90U);
    msg.setDestination(17267U);
    msg.setDestinationEntity(226U);
    msg.value = 0.656961714635;

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
    msg.setTimeStamp(0.45933665092);
    msg.setSource(13427U);
    msg.setSourceEntity(216U);
    msg.setDestination(51136U);
    msg.setDestinationEntity(88U);
    msg.x = 0.196845629969;
    msg.y = 0.94818295482;
    msg.z = 0.709413063469;
    msg.phi = 0.954834237943;
    msg.theta = 0.817062591009;
    msg.psi = 0.623353169527;
    msg.p = 0.558892120157;
    msg.q = 0.764476714614;
    msg.r = 0.546525291953;
    msg.u = 0.568765105257;
    msg.v = 0.98694420237;
    msg.w = 0.948706366588;
    msg.bias_psi = 0.931894119217;
    msg.bias_r = 0.333987235096;

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
    msg.setTimeStamp(0.139851676145);
    msg.setSource(26640U);
    msg.setSourceEntity(237U);
    msg.setDestination(21346U);
    msg.setDestinationEntity(55U);
    msg.x = 0.172933456991;
    msg.y = 0.146615082537;
    msg.z = 0.759328390036;
    msg.phi = 0.245670044213;
    msg.theta = 0.871888773429;
    msg.psi = 0.0271468336846;
    msg.p = 0.998866655624;
    msg.q = 0.088555731086;
    msg.r = 0.248307916299;
    msg.u = 0.376118345015;
    msg.v = 0.485041918414;
    msg.w = 0.419948236692;
    msg.bias_psi = 0.514811711161;
    msg.bias_r = 0.441159087826;

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
    msg.setTimeStamp(0.530489135471);
    msg.setSource(45560U);
    msg.setSourceEntity(199U);
    msg.setDestination(29100U);
    msg.setDestinationEntity(115U);
    msg.x = 0.159188496543;
    msg.y = 0.671406154439;
    msg.z = 0.751774136533;
    msg.phi = 0.273718969156;
    msg.theta = 0.927135308591;
    msg.psi = 0.369922728488;
    msg.p = 0.246546580643;
    msg.q = 0.752779404433;
    msg.r = 0.792652453873;
    msg.u = 0.346136537732;
    msg.v = 0.0934508847156;
    msg.w = 0.629617723283;
    msg.bias_psi = 0.223760357616;
    msg.bias_r = 0.0626807204703;

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
    msg.setTimeStamp(0.0077863384342);
    msg.setSource(6467U);
    msg.setSourceEntity(51U);
    msg.setDestination(3040U);
    msg.setDestinationEntity(89U);
    msg.bias_psi = 0.120241751904;
    msg.bias_r = 0.767908729381;
    msg.cog = 0.959590804245;
    msg.cyaw = 0.810266322925;
    msg.gps_rej_level = 0.898830943977;
    msg.lbl_rej_level = 0.0169270888893;
    msg.custom_x = 0.36796461583;
    msg.custom_y = 0.63052919127;
    msg.custom_z = 0.847561575858;

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
    msg.setTimeStamp(0.229463418591);
    msg.setSource(41061U);
    msg.setSourceEntity(139U);
    msg.setDestination(20987U);
    msg.setDestinationEntity(23U);
    msg.bias_psi = 0.220646218126;
    msg.bias_r = 0.624044673348;
    msg.cog = 0.105038105877;
    msg.cyaw = 0.168739685923;
    msg.gps_rej_level = 0.254678673547;
    msg.lbl_rej_level = 0.980782715715;
    msg.custom_x = 0.880819517679;
    msg.custom_y = 0.176379426755;
    msg.custom_z = 0.536904900021;

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
    msg.setTimeStamp(0.607643120727);
    msg.setSource(7200U);
    msg.setSourceEntity(111U);
    msg.setDestination(4684U);
    msg.setDestinationEntity(86U);
    msg.bias_psi = 0.394414997495;
    msg.bias_r = 0.162517744601;
    msg.cog = 0.812401351509;
    msg.cyaw = 0.121365464894;
    msg.gps_rej_level = 0.969418522629;
    msg.lbl_rej_level = 0.887116608438;
    msg.custom_x = 0.82431980378;
    msg.custom_y = 0.450078839719;
    msg.custom_z = 0.572764437285;

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
    msg.setTimeStamp(0.00122528662335);
    msg.setSource(56685U);
    msg.setSourceEntity(249U);
    msg.setDestination(39843U);
    msg.setDestinationEntity(6U);
    msg.utc_time = 0.0891711432701;
    msg.reason = 147U;

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
    msg.setTimeStamp(0.00142236562142);
    msg.setSource(5640U);
    msg.setSourceEntity(60U);
    msg.setDestination(26638U);
    msg.setDestinationEntity(213U);
    msg.utc_time = 0.132859294568;
    msg.reason = 195U;

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
    msg.setTimeStamp(0.150198314221);
    msg.setSource(51999U);
    msg.setSourceEntity(45U);
    msg.setDestination(59617U);
    msg.setDestinationEntity(248U);
    msg.utc_time = 0.271870222766;
    msg.reason = 8U;

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
    msg.setTimeStamp(0.238725320844);
    msg.setSource(3281U);
    msg.setSourceEntity(76U);
    msg.setDestination(55307U);
    msg.setDestinationEntity(143U);
    msg.id = 90U;
    msg.range = 0.110296878916;
    msg.acceptance = 81U;

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
    msg.setTimeStamp(0.127281082338);
    msg.setSource(41754U);
    msg.setSourceEntity(35U);
    msg.setDestination(30276U);
    msg.setDestinationEntity(99U);
    msg.id = 107U;
    msg.range = 0.0955623005123;
    msg.acceptance = 193U;

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
    msg.setTimeStamp(0.175730276773);
    msg.setSource(58837U);
    msg.setSourceEntity(159U);
    msg.setDestination(35079U);
    msg.setDestinationEntity(234U);
    msg.id = 61U;
    msg.range = 0.21202251212;
    msg.acceptance = 58U;

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
    msg.setTimeStamp(0.0923017207354);
    msg.setSource(19325U);
    msg.setSourceEntity(246U);
    msg.setDestination(36516U);
    msg.setDestinationEntity(210U);
    msg.type = 223U;
    msg.reason = 247U;
    msg.value = 0.158000171236;
    msg.timestep = 0.519901100361;

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
    msg.setTimeStamp(0.182983012869);
    msg.setSource(45733U);
    msg.setSourceEntity(75U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(105U);
    msg.type = 145U;
    msg.reason = 81U;
    msg.value = 0.1121640605;
    msg.timestep = 0.693979827017;

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
    msg.setTimeStamp(0.376309724802);
    msg.setSource(46125U);
    msg.setSourceEntity(11U);
    msg.setDestination(4913U);
    msg.setDestinationEntity(160U);
    msg.type = 62U;
    msg.reason = 80U;
    msg.value = 0.501813111371;
    msg.timestep = 0.327357888841;

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
    msg.setTimeStamp(0.397858202638);
    msg.setSource(14276U);
    msg.setSourceEntity(197U);
    msg.setDestination(1977U);
    msg.setDestinationEntity(204U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NCVTAECGGNKMKNOOONZAIFQTLPCGMZVVDXGLRQPAJCQYXWSYGZIGCRDCFRCPLWBHWBYFTHHFGJEJVLBILLTEFSXPXSSMZDRZTEODEFBDULKRDRBBLERNQBVSUJTUWKVUUEZKAHJMOKZEWRIPSYVELJWZGTKANSDHKTQDMMMQSWFCMFVNQKAQTJPAFXOMYXWDUIYZONAHYHOIUSKTSYVUIMJQCLYBNXBHZPNP");
    tmp_msg_0.lat = 0.130575052625;
    tmp_msg_0.lon = 0.322288701519;
    tmp_msg_0.depth = 0.430802836378;
    tmp_msg_0.query_channel = 140U;
    tmp_msg_0.reply_channel = 171U;
    tmp_msg_0.transponder_delay = 109U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0826482183667;
    msg.y = 0.407731209264;
    msg.var_x = 0.429501302665;
    msg.var_y = 0.542750849216;
    msg.distance = 0.800547882384;

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
    msg.setTimeStamp(0.925978352575);
    msg.setSource(27825U);
    msg.setSourceEntity(60U);
    msg.setDestination(204U);
    msg.setDestinationEntity(163U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XDIPCABMCKDIJEBDPXIKZZHJBIUAQNYJRJACFPBDYHRSXRGNFPGTQRBSMKXXHYVDUBYZEZCVCJJKZLZOTWFGHLAODYORUENVJLJTDMYLNYLNEKVLMHQELOGTBWFNSQMMVAJRIBCYCTPTWOQVXWAEJGFCLSYTXADKSGMWMIBQDEAXXTFUORACNUVPMUNYG");
    tmp_msg_0.lat = 0.881465906178;
    tmp_msg_0.lon = 0.44276575263;
    tmp_msg_0.depth = 0.60485799842;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 49U;
    tmp_msg_0.transponder_delay = 10U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.619349930564;
    msg.y = 0.885957371611;
    msg.var_x = 0.534293002903;
    msg.var_y = 0.234238666854;
    msg.distance = 0.906900714504;

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
    msg.setTimeStamp(0.761626909547);
    msg.setSource(39844U);
    msg.setSourceEntity(42U);
    msg.setDestination(777U);
    msg.setDestinationEntity(41U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VGPDVSCWYVEKHMHQDICTD");
    tmp_msg_0.lat = 0.964309984722;
    tmp_msg_0.lon = 0.755835768144;
    tmp_msg_0.depth = 0.541893091497;
    tmp_msg_0.query_channel = 221U;
    tmp_msg_0.reply_channel = 143U;
    tmp_msg_0.transponder_delay = 20U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.851675081568;
    msg.y = 0.940705528644;
    msg.var_x = 0.227602400282;
    msg.var_y = 0.0872836884203;
    msg.distance = 0.691051960484;

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
    msg.setTimeStamp(0.34643125975);
    msg.setSource(8445U);
    msg.setSourceEntity(224U);
    msg.setDestination(50049U);
    msg.setDestinationEntity(130U);
    msg.state = 36U;

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
    msg.setTimeStamp(0.0441801735174);
    msg.setSource(46643U);
    msg.setSourceEntity(117U);
    msg.setDestination(11018U);
    msg.setDestinationEntity(188U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.458906771197);
    msg.setSource(39987U);
    msg.setSourceEntity(146U);
    msg.setDestination(20835U);
    msg.setDestinationEntity(195U);
    msg.state = 121U;

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
    msg.setTimeStamp(0.500836933058);
    msg.setSource(3008U);
    msg.setSourceEntity(132U);
    msg.setDestination(6353U);
    msg.setDestinationEntity(30U);
    msg.x = 0.320247722334;
    msg.y = 0.0735284520269;
    msg.z = 0.0379287692678;

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
    msg.setTimeStamp(0.485882136381);
    msg.setSource(61147U);
    msg.setSourceEntity(136U);
    msg.setDestination(40144U);
    msg.setDestinationEntity(111U);
    msg.x = 0.584771637822;
    msg.y = 0.768711042121;
    msg.z = 0.616230031298;

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
    msg.setTimeStamp(0.903494150408);
    msg.setSource(52056U);
    msg.setSourceEntity(246U);
    msg.setDestination(6135U);
    msg.setDestinationEntity(12U);
    msg.x = 0.717601120918;
    msg.y = 0.399019936177;
    msg.z = 0.879983376597;

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
    msg.setTimeStamp(0.103369880859);
    msg.setSource(32803U);
    msg.setSourceEntity(68U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(144U);
    msg.va = 0.0296154646784;
    msg.aoa = 0.0263736317263;
    msg.ssa = 0.846915911622;

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
    msg.setTimeStamp(0.679366953274);
    msg.setSource(30525U);
    msg.setSourceEntity(147U);
    msg.setDestination(12573U);
    msg.setDestinationEntity(228U);
    msg.va = 0.663461396111;
    msg.aoa = 0.0984049271179;
    msg.ssa = 0.420177477559;

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
    msg.setTimeStamp(0.341563732484);
    msg.setSource(23129U);
    msg.setSourceEntity(12U);
    msg.setDestination(65345U);
    msg.setDestinationEntity(232U);
    msg.va = 0.00665909895375;
    msg.aoa = 0.211171128204;
    msg.ssa = 0.348602760161;

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
    msg.setTimeStamp(0.930601032408);
    msg.setSource(46684U);
    msg.setSourceEntity(231U);
    msg.setDestination(57624U);
    msg.setDestinationEntity(135U);
    msg.mmsi = 557786755U;
    msg.lon = 0.985148820969;
    msg.lat = 0.24608622195;
    msg.x = 0.637961731474;
    msg.y = 0.314702764544;
    msg.psi = 0.237121296252;
    msg.u = 0.521307072919;
    msg.v = 0.787294886197;
    msg.a = 0.121337802349;
    msg.b = 0.950125184372;
    msg.c = 0.408226427543;
    msg.d = 0.479785532963;

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
    msg.setTimeStamp(0.373792409421);
    msg.setSource(41493U);
    msg.setSourceEntity(99U);
    msg.setDestination(27822U);
    msg.setDestinationEntity(151U);
    msg.mmsi = 1725099849U;
    msg.lon = 0.0995845972423;
    msg.lat = 0.139349661171;
    msg.x = 0.535371765448;
    msg.y = 0.00353896626676;
    msg.psi = 0.684671400226;
    msg.u = 0.980526354493;
    msg.v = 0.849442626382;
    msg.a = 0.678803902146;
    msg.b = 0.583961447685;
    msg.c = 0.6550168718;
    msg.d = 0.691921341669;

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
    msg.setTimeStamp(0.345880381716);
    msg.setSource(57525U);
    msg.setSourceEntity(97U);
    msg.setDestination(58821U);
    msg.setDestinationEntity(244U);
    msg.mmsi = 2284902042U;
    msg.lon = 0.306536624241;
    msg.lat = 0.194286138128;
    msg.x = 0.0506637029705;
    msg.y = 0.995371949794;
    msg.psi = 0.0437260017469;
    msg.u = 0.642704082394;
    msg.v = 0.170747451623;
    msg.a = 0.0887367715594;
    msg.b = 0.815325316523;
    msg.c = 0.916877743936;
    msg.d = 0.184582302006;

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
    msg.setTimeStamp(0.613718499271);
    msg.setSource(51891U);
    msg.setSourceEntity(224U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(29U);
    msg.value = 0.288690337297;

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
    msg.setTimeStamp(0.218258474732);
    msg.setSource(31294U);
    msg.setSourceEntity(145U);
    msg.setDestination(17713U);
    msg.setDestinationEntity(32U);
    msg.value = 0.169917557188;

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
    msg.setTimeStamp(0.524643464236);
    msg.setSource(18282U);
    msg.setSourceEntity(215U);
    msg.setDestination(42733U);
    msg.setDestinationEntity(250U);
    msg.value = 0.707726571716;

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
    msg.setTimeStamp(0.922447490703);
    msg.setSource(31145U);
    msg.setSourceEntity(158U);
    msg.setDestination(18400U);
    msg.setDestinationEntity(233U);
    msg.value = 0.980144755681;
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
    msg.setTimeStamp(0.304978146803);
    msg.setSource(23605U);
    msg.setSourceEntity(93U);
    msg.setDestination(20436U);
    msg.setDestinationEntity(230U);
    msg.value = 0.658124297997;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.918795540121);
    msg.setSource(53519U);
    msg.setSourceEntity(225U);
    msg.setDestination(45223U);
    msg.setDestinationEntity(49U);
    msg.value = 0.175465598814;
    msg.z_units = 52U;

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
    msg.setTimeStamp(0.46325287858);
    msg.setSource(45252U);
    msg.setSourceEntity(62U);
    msg.setDestination(32979U);
    msg.setDestinationEntity(176U);
    msg.value = 0.214757088574;
    msg.speed_units = 234U;

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
    msg.setTimeStamp(0.0446702937343);
    msg.setSource(49813U);
    msg.setSourceEntity(226U);
    msg.setDestination(42675U);
    msg.setDestinationEntity(232U);
    msg.value = 0.366744046533;
    msg.speed_units = 71U;

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
    msg.setTimeStamp(0.975448215019);
    msg.setSource(46347U);
    msg.setSourceEntity(229U);
    msg.setDestination(53582U);
    msg.setDestinationEntity(151U);
    msg.value = 0.48004507092;
    msg.speed_units = 16U;

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
    msg.setTimeStamp(0.647484564532);
    msg.setSource(32231U);
    msg.setSourceEntity(43U);
    msg.setDestination(47527U);
    msg.setDestinationEntity(42U);
    msg.value = 0.483956236027;

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
    msg.setTimeStamp(0.32605841581);
    msg.setSource(51768U);
    msg.setSourceEntity(194U);
    msg.setDestination(64812U);
    msg.setDestinationEntity(44U);
    msg.value = 0.696430372746;

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
    msg.setTimeStamp(0.327730065624);
    msg.setSource(8535U);
    msg.setSourceEntity(18U);
    msg.setDestination(25646U);
    msg.setDestinationEntity(206U);
    msg.value = 0.51831560753;

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
    msg.setTimeStamp(0.0800131599477);
    msg.setSource(25925U);
    msg.setSourceEntity(248U);
    msg.setDestination(59639U);
    msg.setDestinationEntity(68U);
    msg.value = 0.459545972976;

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
    msg.setTimeStamp(0.185075535849);
    msg.setSource(37143U);
    msg.setSourceEntity(98U);
    msg.setDestination(25558U);
    msg.setDestinationEntity(54U);
    msg.value = 0.756242126539;

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
    msg.setTimeStamp(0.118683050286);
    msg.setSource(26979U);
    msg.setSourceEntity(156U);
    msg.setDestination(12817U);
    msg.setDestinationEntity(87U);
    msg.value = 0.659644947833;

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
    msg.setTimeStamp(0.462556447692);
    msg.setSource(55491U);
    msg.setSourceEntity(229U);
    msg.setDestination(8231U);
    msg.setDestinationEntity(79U);
    msg.value = 0.802798416829;

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
    msg.setTimeStamp(0.226976835834);
    msg.setSource(1399U);
    msg.setSourceEntity(121U);
    msg.setDestination(47495U);
    msg.setDestinationEntity(1U);
    msg.value = 0.171219110473;

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
    msg.setTimeStamp(0.453633363682);
    msg.setSource(14415U);
    msg.setSourceEntity(202U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(92U);
    msg.value = 0.516591819742;

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
    msg.setTimeStamp(0.444325414201);
    msg.setSource(8070U);
    msg.setSourceEntity(211U);
    msg.setDestination(1794U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 3755089316U;
    msg.start_lat = 0.876961835325;
    msg.start_lon = 0.563385771319;
    msg.start_z = 0.35074131271;
    msg.start_z_units = 240U;
    msg.end_lat = 0.826512015599;
    msg.end_lon = 0.809689191619;
    msg.end_z = 0.121727800418;
    msg.end_z_units = 72U;
    msg.speed = 0.252574322171;
    msg.speed_units = 154U;
    msg.lradius = 0.633459324167;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.647881693673);
    msg.setSource(61648U);
    msg.setSourceEntity(190U);
    msg.setDestination(1376U);
    msg.setDestinationEntity(91U);
    msg.path_ref = 3407061894U;
    msg.start_lat = 0.800919393786;
    msg.start_lon = 0.455059007415;
    msg.start_z = 0.0205352385942;
    msg.start_z_units = 2U;
    msg.end_lat = 0.998536677706;
    msg.end_lon = 0.00447766790298;
    msg.end_z = 0.731436649571;
    msg.end_z_units = 47U;
    msg.speed = 0.645888236217;
    msg.speed_units = 73U;
    msg.lradius = 0.797911802849;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.611515482066);
    msg.setSource(22889U);
    msg.setSourceEntity(126U);
    msg.setDestination(34837U);
    msg.setDestinationEntity(35U);
    msg.path_ref = 3087653324U;
    msg.start_lat = 0.0590029282553;
    msg.start_lon = 0.135191519607;
    msg.start_z = 0.144684199754;
    msg.start_z_units = 87U;
    msg.end_lat = 0.774506212831;
    msg.end_lon = 0.838154903463;
    msg.end_z = 0.73267587446;
    msg.end_z_units = 101U;
    msg.speed = 0.385618471392;
    msg.speed_units = 54U;
    msg.lradius = 0.668840109074;
    msg.flags = 70U;

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
    msg.setTimeStamp(0.986562360357);
    msg.setSource(8U);
    msg.setSourceEntity(40U);
    msg.setDestination(35198U);
    msg.setDestinationEntity(20U);
    msg.x = 0.480508988396;
    msg.y = 0.892541477149;
    msg.z = 0.295443087484;
    msg.k = 0.753645624173;
    msg.m = 0.807573320038;
    msg.n = 0.205025396494;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.275979360896);
    msg.setSource(45698U);
    msg.setSourceEntity(2U);
    msg.setDestination(33903U);
    msg.setDestinationEntity(44U);
    msg.x = 0.887862092617;
    msg.y = 0.943766288262;
    msg.z = 0.140122150777;
    msg.k = 0.953736242335;
    msg.m = 0.397060698067;
    msg.n = 0.422896253992;
    msg.flags = 80U;

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
    msg.setTimeStamp(0.872812949756);
    msg.setSource(30831U);
    msg.setSourceEntity(225U);
    msg.setDestination(17373U);
    msg.setDestinationEntity(32U);
    msg.x = 0.804626175319;
    msg.y = 0.396070833935;
    msg.z = 0.417532871967;
    msg.k = 0.987590294261;
    msg.m = 0.398579012978;
    msg.n = 0.10255897645;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.539141861674);
    msg.setSource(14150U);
    msg.setSourceEntity(172U);
    msg.setDestination(21713U);
    msg.setDestinationEntity(168U);
    msg.value = 0.052214300045;

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
    msg.setTimeStamp(0.434807383796);
    msg.setSource(53760U);
    msg.setSourceEntity(224U);
    msg.setDestination(21086U);
    msg.setDestinationEntity(198U);
    msg.value = 0.90336406135;

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
    msg.setTimeStamp(0.837408151456);
    msg.setSource(28884U);
    msg.setSourceEntity(69U);
    msg.setDestination(31789U);
    msg.setDestinationEntity(243U);
    msg.value = 0.845380522095;

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
    msg.setTimeStamp(0.773636726665);
    msg.setSource(22599U);
    msg.setSourceEntity(235U);
    msg.setDestination(65128U);
    msg.setDestinationEntity(70U);
    msg.u = 0.511058191313;
    msg.v = 0.484716713624;
    msg.w = 0.521702992565;
    msg.p = 0.996057471464;
    msg.q = 0.293043598859;
    msg.r = 0.989776719217;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.284150703495);
    msg.setSource(14769U);
    msg.setSourceEntity(76U);
    msg.setDestination(12778U);
    msg.setDestinationEntity(131U);
    msg.u = 0.0458750266348;
    msg.v = 0.41549629172;
    msg.w = 0.37653321959;
    msg.p = 0.956364349524;
    msg.q = 0.219670734626;
    msg.r = 0.312635489883;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.382973030663);
    msg.setSource(3938U);
    msg.setSourceEntity(66U);
    msg.setDestination(13869U);
    msg.setDestinationEntity(242U);
    msg.u = 0.720840970062;
    msg.v = 0.4899995024;
    msg.w = 0.392344803227;
    msg.p = 0.122502926483;
    msg.q = 0.915827406387;
    msg.r = 0.609407293657;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.695556867062);
    msg.setSource(35547U);
    msg.setSourceEntity(2U);
    msg.setDestination(1686U);
    msg.setDestinationEntity(72U);
    msg.path_ref = 2305020641U;
    msg.start_lat = 0.638750697791;
    msg.start_lon = 0.821762984472;
    msg.start_z = 0.450697710879;
    msg.start_z_units = 56U;
    msg.end_lat = 0.444011337633;
    msg.end_lon = 0.311516221499;
    msg.end_z = 0.107591980143;
    msg.end_z_units = 248U;
    msg.lradius = 0.589555130974;
    msg.flags = 190U;
    msg.x = 0.765590229659;
    msg.y = 0.491778845544;
    msg.z = 0.507067042488;
    msg.vx = 0.502201917356;
    msg.vy = 0.876163021513;
    msg.vz = 0.416379903535;
    msg.course_error = 0.849521994051;
    msg.eta = 20106U;

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
    msg.setTimeStamp(0.577620782814);
    msg.setSource(33685U);
    msg.setSourceEntity(243U);
    msg.setDestination(34057U);
    msg.setDestinationEntity(155U);
    msg.path_ref = 3969688956U;
    msg.start_lat = 0.951110014515;
    msg.start_lon = 0.153983942881;
    msg.start_z = 0.856537669009;
    msg.start_z_units = 46U;
    msg.end_lat = 0.591698134339;
    msg.end_lon = 0.368734039715;
    msg.end_z = 0.685735470712;
    msg.end_z_units = 59U;
    msg.lradius = 0.374522302984;
    msg.flags = 98U;
    msg.x = 0.769028294754;
    msg.y = 0.954991724156;
    msg.z = 0.00488471761517;
    msg.vx = 0.300156202327;
    msg.vy = 0.937162831357;
    msg.vz = 0.791976371385;
    msg.course_error = 0.998843587339;
    msg.eta = 39852U;

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
    msg.setTimeStamp(0.503449843534);
    msg.setSource(3204U);
    msg.setSourceEntity(219U);
    msg.setDestination(11408U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 2589191526U;
    msg.start_lat = 0.0555613398573;
    msg.start_lon = 0.329582858645;
    msg.start_z = 0.486939351501;
    msg.start_z_units = 32U;
    msg.end_lat = 0.500827201103;
    msg.end_lon = 0.92786340708;
    msg.end_z = 0.543931142883;
    msg.end_z_units = 241U;
    msg.lradius = 0.259021588681;
    msg.flags = 99U;
    msg.x = 0.589631983428;
    msg.y = 0.450240624549;
    msg.z = 0.416517949147;
    msg.vx = 0.55054639683;
    msg.vy = 0.774045395491;
    msg.vz = 0.854199297548;
    msg.course_error = 0.423789149798;
    msg.eta = 31730U;

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
    msg.setTimeStamp(0.0773384598808);
    msg.setSource(55026U);
    msg.setSourceEntity(69U);
    msg.setDestination(39429U);
    msg.setDestinationEntity(80U);
    msg.k = 0.0564217026751;
    msg.m = 0.369922394302;
    msg.n = 0.136125426065;

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
    msg.setTimeStamp(0.21222809975);
    msg.setSource(27109U);
    msg.setSourceEntity(154U);
    msg.setDestination(40853U);
    msg.setDestinationEntity(80U);
    msg.k = 0.373377144039;
    msg.m = 0.0622050629437;
    msg.n = 0.104051472335;

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
    msg.setTimeStamp(0.458864898749);
    msg.setSource(23141U);
    msg.setSourceEntity(181U);
    msg.setDestination(53067U);
    msg.setDestinationEntity(188U);
    msg.k = 0.135742849833;
    msg.m = 0.709778079902;
    msg.n = 0.867878727871;

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
    msg.setTimeStamp(0.479513800216);
    msg.setSource(43411U);
    msg.setSourceEntity(202U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(195U);
    msg.p = 0.988595136349;
    msg.i = 0.664079810901;
    msg.d = 0.222733978656;
    msg.a = 0.140746927063;

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
    msg.setTimeStamp(0.537725817485);
    msg.setSource(8920U);
    msg.setSourceEntity(77U);
    msg.setDestination(9790U);
    msg.setDestinationEntity(235U);
    msg.p = 0.748239337747;
    msg.i = 0.0326906362796;
    msg.d = 0.472167820761;
    msg.a = 0.0233685515722;

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
    msg.setTimeStamp(0.959875353595);
    msg.setSource(33386U);
    msg.setSourceEntity(123U);
    msg.setDestination(51577U);
    msg.setDestinationEntity(47U);
    msg.p = 0.744519959805;
    msg.i = 0.964755062017;
    msg.d = 0.572273043847;
    msg.a = 0.280056605613;

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
    msg.setTimeStamp(0.199791021503);
    msg.setSource(24280U);
    msg.setSourceEntity(90U);
    msg.setDestination(44801U);
    msg.setDestinationEntity(218U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.7607025725);
    msg.setSource(10923U);
    msg.setSourceEntity(9U);
    msg.setDestination(28753U);
    msg.setDestinationEntity(2U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.752093695562);
    msg.setSource(47609U);
    msg.setSourceEntity(166U);
    msg.setDestination(926U);
    msg.setDestinationEntity(200U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.806791639762);
    msg.setSource(24424U);
    msg.setSourceEntity(133U);
    msg.setDestination(9229U);
    msg.setDestinationEntity(242U);
    msg.x = 0.561059537544;
    msg.y = 0.315997839051;
    msg.z = 0.0295535012021;
    msg.vx = 0.358073475991;
    msg.vy = 0.207539689327;
    msg.vz = 0.0545661079072;
    msg.ax = 0.9082405382;
    msg.ay = 0.606936654979;
    msg.az = 0.128170784321;
    msg.flags = 53143U;

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
    msg.setTimeStamp(0.877224733476);
    msg.setSource(30231U);
    msg.setSourceEntity(229U);
    msg.setDestination(8431U);
    msg.setDestinationEntity(248U);
    msg.x = 0.460169314649;
    msg.y = 0.0167917174877;
    msg.z = 0.420300299682;
    msg.vx = 0.425850720719;
    msg.vy = 0.207719537002;
    msg.vz = 0.817464954879;
    msg.ax = 0.507877104173;
    msg.ay = 0.485072509336;
    msg.az = 0.292078262016;
    msg.flags = 32272U;

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
    msg.setTimeStamp(0.818373612348);
    msg.setSource(25018U);
    msg.setSourceEntity(189U);
    msg.setDestination(31407U);
    msg.setDestinationEntity(248U);
    msg.x = 0.622998717364;
    msg.y = 0.647552550485;
    msg.z = 0.0849564695002;
    msg.vx = 0.318280281012;
    msg.vy = 0.964631246477;
    msg.vz = 0.765677249567;
    msg.ax = 0.209013111138;
    msg.ay = 0.305435864033;
    msg.az = 0.45154278655;
    msg.flags = 20440U;

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
    msg.setTimeStamp(0.610719403051);
    msg.setSource(46028U);
    msg.setSourceEntity(144U);
    msg.setDestination(31203U);
    msg.setDestinationEntity(171U);
    msg.value = 0.525090494485;

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
    msg.setTimeStamp(0.300108682688);
    msg.setSource(41133U);
    msg.setSourceEntity(120U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(169U);
    msg.value = 0.29245027017;

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
    msg.setTimeStamp(0.500376323743);
    msg.setSource(24600U);
    msg.setSourceEntity(0U);
    msg.setDestination(6308U);
    msg.setDestinationEntity(232U);
    msg.value = 0.58643048694;

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
    msg.setTimeStamp(0.483294698814);
    msg.setSource(32591U);
    msg.setSourceEntity(69U);
    msg.setDestination(12142U);
    msg.setDestinationEntity(201U);
    msg.timeout = 21064U;
    msg.lat = 0.838517638681;
    msg.lon = 0.802619055248;
    msg.z = 0.682499314772;
    msg.z_units = 64U;
    msg.speed = 0.836234459683;
    msg.speed_units = 123U;
    msg.roll = 0.809598168503;
    msg.pitch = 0.391754791747;
    msg.yaw = 0.538985185124;
    msg.custom.assign("SAILUREFUBOLMDRPQKWQQJECNGSNBIDCOOGYEOEEBKLIWXPILVWAYFBGGXFUXULDYMRGISXXLKVVFMEHYTBCPXVENNDAORWRVTNEISKVMOMMJXHAHOMGQPFIIRQBSEWADSQJCXQNYDOFLACZBCJKVZPFZXUGABHTCCVRLVASLNRCUIYJUOZZTWFLDMXNRGBFUN");

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
    msg.setTimeStamp(0.385628320893);
    msg.setSource(64418U);
    msg.setSourceEntity(23U);
    msg.setDestination(4473U);
    msg.setDestinationEntity(81U);
    msg.timeout = 22912U;
    msg.lat = 0.0338674835587;
    msg.lon = 0.794757580786;
    msg.z = 0.941590229118;
    msg.z_units = 102U;
    msg.speed = 0.789461455064;
    msg.speed_units = 211U;
    msg.roll = 0.411506126087;
    msg.pitch = 0.0187461569087;
    msg.yaw = 0.95129650176;
    msg.custom.assign("RZRSNTMDJUNCWIIPTLIEYPOB");

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
    msg.setTimeStamp(0.0712404816695);
    msg.setSource(20243U);
    msg.setSourceEntity(42U);
    msg.setDestination(44136U);
    msg.setDestinationEntity(230U);
    msg.timeout = 51329U;
    msg.lat = 0.0466778915737;
    msg.lon = 0.856164530631;
    msg.z = 0.0316843538645;
    msg.z_units = 158U;
    msg.speed = 0.158515845761;
    msg.speed_units = 167U;
    msg.roll = 0.431813998043;
    msg.pitch = 0.474103490783;
    msg.yaw = 0.49657605182;
    msg.custom.assign("ZCTPIHJIKUVNRVLDXDJLTTGHSNAFFZEUNOVUVOQFGEYKFCTEBGUZEFHSPQQSYNITIXRSWAGIPXJVQJCZPWFKV");

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
    msg.setTimeStamp(0.567973653468);
    msg.setSource(55202U);
    msg.setSourceEntity(40U);
    msg.setDestination(40543U);
    msg.setDestinationEntity(31U);
    msg.timeout = 38854U;
    msg.lat = 0.930322440564;
    msg.lon = 0.714195566147;
    msg.z = 0.647519719754;
    msg.z_units = 209U;
    msg.speed = 0.440442495872;
    msg.speed_units = 248U;
    msg.duration = 28448U;
    msg.radius = 0.457872879267;
    msg.flags = 186U;
    msg.custom.assign("NFWMXZSVERKFVMCXSDPZUCDTMDZCLXUEHLSZFJULTHYTWVDDLVVIPYNBYSIRUNGJVY");

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
    msg.setTimeStamp(0.861010185864);
    msg.setSource(25188U);
    msg.setSourceEntity(73U);
    msg.setDestination(12967U);
    msg.setDestinationEntity(243U);
    msg.timeout = 45585U;
    msg.lat = 0.49167861457;
    msg.lon = 0.277076636364;
    msg.z = 0.680235523516;
    msg.z_units = 212U;
    msg.speed = 0.778203372502;
    msg.speed_units = 153U;
    msg.duration = 57257U;
    msg.radius = 0.423887235896;
    msg.flags = 56U;
    msg.custom.assign("YFWMLLUYKBARNUXGLRODVMHBAMZJVIGAERDEMYQHUORUJJJKEQGZPCHCEIMHBWRBZMTCBPPBAGVTRVKMVZLPNKWYTDMQXSZWQOUWWPFLNCDTTSLHIPTHAICTDSXALCPLEAQZKSNNHAFRLFTSFOKNNYYKSSPGJYFFOQPZXHXEVHBXVEBFIKSUJEQKOIUSOIJBNYDQCYRDRWGCIUZQGNFVVTKOOPDUIEAMHVZRWZXEGDDXJ");

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
    msg.setTimeStamp(0.378470566048);
    msg.setSource(48087U);
    msg.setSourceEntity(32U);
    msg.setDestination(35007U);
    msg.setDestinationEntity(115U);
    msg.timeout = 10364U;
    msg.lat = 0.276028838243;
    msg.lon = 0.120231906936;
    msg.z = 0.993742353332;
    msg.z_units = 185U;
    msg.speed = 0.159338213427;
    msg.speed_units = 35U;
    msg.duration = 54675U;
    msg.radius = 0.760407749745;
    msg.flags = 130U;
    msg.custom.assign("HDIAVMGVKPYUJUCBMYMBKGFRICKVZGSNPGZBWHKNBUQREWRNCHIZFOZSELXKKQIWHJUIROOGFQACWLJLQAOYDJWLGWEQDONLTABXZNIGVERDVFMXJLISMMSGQHVYXVVDLPIASRUDYPISVJ");

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
    msg.setTimeStamp(0.268798427469);
    msg.setSource(38297U);
    msg.setSourceEntity(161U);
    msg.setDestination(16018U);
    msg.setDestinationEntity(158U);
    msg.custom.assign("ISSASUXABEVSXSOCAUWXZDVOBFJRQAYKWDBPWNJLMQYGBUUOLZDKDYVLCXCPHPQMINDFWZTEVGLCBCHTJLHFGPPRONRTGWXXOVEXCDEWHRQHIMFUWVFYXWZNTIDEYSQZXFJZMTSEKUNDVOKNBGPIIVKYLHQQPWXEQYADHKEZTCHSQMGPZOULCGPRWBYIUDBKALAJMOBAVGNHYCAGRLIJOMZIVTMEFMJS");

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
    msg.setTimeStamp(0.66036247167);
    msg.setSource(35272U);
    msg.setSourceEntity(152U);
    msg.setDestination(24099U);
    msg.setDestinationEntity(118U);
    msg.custom.assign("HEGYHOWQRGHCSQRVIRXGBRTLSGMUEYUDFRBIDTVAVWHUPOOENNMWKWXFRBMMZRJUNYUXJAZAWNBSLQVGJKVZTAOFRCBWYMGIWGNODJ");

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
    msg.setTimeStamp(0.895696514936);
    msg.setSource(64082U);
    msg.setSourceEntity(18U);
    msg.setDestination(938U);
    msg.setDestinationEntity(69U);
    msg.custom.assign("RGUEVCVGDIWVIWWHUFXNJFSDVTZGRAYDSNOPQKCTMGBRTDZMJSGDYSXQKRMGZA");

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
    msg.setTimeStamp(0.411946616575);
    msg.setSource(1408U);
    msg.setSourceEntity(75U);
    msg.setDestination(46712U);
    msg.setDestinationEntity(149U);
    msg.timeout = 50268U;
    msg.lat = 0.689956870679;
    msg.lon = 0.165578696646;
    msg.z = 0.76241701676;
    msg.z_units = 130U;
    msg.duration = 19987U;
    msg.speed = 0.747825470519;
    msg.speed_units = 122U;
    msg.type = 23U;
    msg.radius = 0.0266935684453;
    msg.length = 0.935120952157;
    msg.bearing = 0.935312582134;
    msg.direction = 148U;
    msg.custom.assign("OCJBNBRZXPUTHYLBCRWDEXZGZNMOWZFTLUAHFIZM");

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
    msg.setTimeStamp(0.591895124461);
    msg.setSource(46757U);
    msg.setSourceEntity(224U);
    msg.setDestination(45937U);
    msg.setDestinationEntity(7U);
    msg.timeout = 6823U;
    msg.lat = 0.485123511966;
    msg.lon = 0.117856557856;
    msg.z = 0.361455567369;
    msg.z_units = 27U;
    msg.duration = 5960U;
    msg.speed = 0.103894004201;
    msg.speed_units = 201U;
    msg.type = 203U;
    msg.radius = 0.180396832014;
    msg.length = 0.453412481438;
    msg.bearing = 0.637858549662;
    msg.direction = 145U;
    msg.custom.assign("INFMUCHJCMBAGLVREBPGQNPPLOWIQRJKHTWT");

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
    msg.setTimeStamp(0.430325488334);
    msg.setSource(34608U);
    msg.setSourceEntity(87U);
    msg.setDestination(14272U);
    msg.setDestinationEntity(118U);
    msg.timeout = 853U;
    msg.lat = 0.695881440243;
    msg.lon = 0.584795151307;
    msg.z = 0.818192411353;
    msg.z_units = 157U;
    msg.duration = 36004U;
    msg.speed = 0.471114876948;
    msg.speed_units = 158U;
    msg.type = 187U;
    msg.radius = 0.426163047027;
    msg.length = 0.249991977136;
    msg.bearing = 0.861320464946;
    msg.direction = 33U;
    msg.custom.assign("MMZTQPBMHLQWTYTSIGHDBYJINPSVFSOMLPFBRMQKKCSDJGFZDQISTPWQBCRCWJCJPNTOGOGACBWXUJVMQEKXPRLHWXIFCFKGPJYFRWBVHYREIHRUXVZLCFMFMSRAUKAZXAABQTROVJLZGLHFOHUQSXYSDJGSIUVHIENKTPJLGEEBABPXYUNLZHIQNAYCCWKAXUDBMTHEETC");

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
    msg.setTimeStamp(0.712146439591);
    msg.setSource(8941U);
    msg.setSourceEntity(44U);
    msg.setDestination(40173U);
    msg.setDestinationEntity(166U);
    msg.duration = 64218U;
    msg.custom.assign("UJIIVZXYRKBKYIQHDTAXMVLBMNPUEVDRVNEGIKFOIXQVMXOOKWAMVXKYDTGTTEFLXQEARUJLNTUAGUOZJZZGOSXWZHLAPQCHKGFSZCCRXUISTAYVSRMWGYARVPGZYXFSKEDKHNFTDFQOHZGQMBSKBDLEPPAMXRPFDWNMGJBKQJUJLOPNHCNDRQUIRRWVSYCHJIYDLHWFPEELBHSEINCZNUIWLFLSTGBVJYJBZD");

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
    msg.setTimeStamp(0.399118864926);
    msg.setSource(44648U);
    msg.setSourceEntity(233U);
    msg.setDestination(36102U);
    msg.setDestinationEntity(170U);
    msg.duration = 52489U;
    msg.custom.assign("QZHOLXMZHIGQTKFCBUJGBGEW");

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
    msg.setTimeStamp(0.495950118335);
    msg.setSource(52349U);
    msg.setSourceEntity(135U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(19U);
    msg.duration = 12347U;
    msg.custom.assign("KSSFCIRRCISEXSPDHGIGPMCZPSDNYYVDKQXJNHTQQONETUYPQYMGVATIMNLCGIVDYMXBJSLMAMJGAGSZEEOELRDLIOTKTOBOGHPKCWHHVFHEOXAFIALUFVFBJPOYUYQJWLKWGWVFXAWXKOWTUYCHDBPELXNLUHCPTRSWLGKXWDADYZCSZQVNZWZRLUERZMSOMBVIX");

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
    msg.setTimeStamp(0.144867206255);
    msg.setSource(47678U);
    msg.setSourceEntity(203U);
    msg.setDestination(5688U);
    msg.setDestinationEntity(147U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.547353280307;
    msg.control.set(tmp_msg_0);
    msg.duration = 12861U;
    msg.custom.assign("IIVLPRQJWCATWSXAZKRUYZNSWFIZWDZOUBUXTSZYOCOSFRHQTGKOGMKLXIRVPGNZBFVLSLTIHYJYGNHTRBUGCCRJCYGQUBBKFQLDXOOEHONMQIJZBLVXDRLPDJMTHEOWDAHMLZDNHPMKQVYGFOBPLYRSMPYAECRNEXCGAXDKQEAMITIAAOCTPJFFBECJTETYXJBAWXVEJFWXDSUUVFWUNQABKCEPQEFDDNNUVKPGZSQYWHKWMVVNSHSGMKHJ");

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
    msg.setTimeStamp(0.283400145845);
    msg.setSource(3748U);
    msg.setSourceEntity(71U);
    msg.setDestination(29594U);
    msg.setDestinationEntity(205U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.477137849731;
    msg.control.set(tmp_msg_0);
    msg.duration = 15832U;
    msg.custom.assign("PAIZHHSNTZUMLKFAHAYCTERXUKQYVHGSPRMBVXOEBAAGBTLTGVWSYNMPHFOBZINEYQJVDQYOJTOGLEMEDVDIDKCNWZFUQCWXBQBZTBIECHUDJGJFQXLLVBZURDWCVHPUAAQSIRIPROACIGHSVODMBOUKESCSTLOGRXTHAPENXTNRKQYUI");

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
    msg.setTimeStamp(0.769762234049);
    msg.setSource(4386U);
    msg.setSourceEntity(219U);
    msg.setDestination(33183U);
    msg.setDestinationEntity(239U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.377156156667;
    msg.control.set(tmp_msg_0);
    msg.duration = 51590U;
    msg.custom.assign("XUSWQBJBHRQZRJHINSZSKBDBMFXOSEKYDEOMILWQWXKTUYXCGTKZOIBIRPMXQZZHZUTXIJNTVNRUJHQTCLDOPYNLJIHRDCREIITFAHBZCKTWZEJPLHHPNUAXSPMKGLQVTOLEFAGNZVEPHFDSQTV");

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
    msg.setTimeStamp(0.346111963729);
    msg.setSource(49901U);
    msg.setSourceEntity(48U);
    msg.setDestination(58847U);
    msg.setDestinationEntity(125U);
    msg.timeout = 16847U;
    msg.lat = 0.729148595266;
    msg.lon = 0.372668380664;
    msg.z = 0.483453611866;
    msg.z_units = 158U;
    msg.speed = 0.15306366333;
    msg.speed_units = 11U;
    msg.bearing = 0.727586088703;
    msg.cross_angle = 0.956959214613;
    msg.width = 0.217285659615;
    msg.length = 0.576655917179;
    msg.hstep = 0.596555865085;
    msg.coff = 217U;
    msg.alternation = 199U;
    msg.flags = 79U;
    msg.custom.assign("LDPJAVREUKIJWKMHVJSIQFOADMNP");

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
    msg.setTimeStamp(0.210857987742);
    msg.setSource(16963U);
    msg.setSourceEntity(134U);
    msg.setDestination(41892U);
    msg.setDestinationEntity(191U);
    msg.timeout = 27630U;
    msg.lat = 0.509489175659;
    msg.lon = 0.16125010488;
    msg.z = 0.6676034056;
    msg.z_units = 165U;
    msg.speed = 0.946204667854;
    msg.speed_units = 93U;
    msg.bearing = 0.300975885873;
    msg.cross_angle = 0.465916111825;
    msg.width = 0.0911155437274;
    msg.length = 0.559524778088;
    msg.hstep = 0.320171951009;
    msg.coff = 23U;
    msg.alternation = 86U;
    msg.flags = 109U;
    msg.custom.assign("TRIIXQWEXZCEXPWEGJFJDBLQDGKGFFKUJVOVIGDJTTSDPROQZDYJRBNKZGAEQHSAMXUHPPCSVFXCZKERTFKDXQCOEEVUWUSJOCRMLVRDHEURNQGWQHDIMUHONNTNZILVOBYPANIXZZOQMWNKJDCGFICXAQXBRPXGBNCWLAAYQY");

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
    msg.setTimeStamp(0.79744262664);
    msg.setSource(53292U);
    msg.setSourceEntity(23U);
    msg.setDestination(51757U);
    msg.setDestinationEntity(132U);
    msg.timeout = 251U;
    msg.lat = 0.176976513979;
    msg.lon = 0.387234702516;
    msg.z = 0.254105957841;
    msg.z_units = 153U;
    msg.speed = 0.367971209589;
    msg.speed_units = 121U;
    msg.bearing = 0.127305549078;
    msg.cross_angle = 0.934058942342;
    msg.width = 0.311698227394;
    msg.length = 0.417816832464;
    msg.hstep = 0.543463602436;
    msg.coff = 112U;
    msg.alternation = 119U;
    msg.flags = 115U;
    msg.custom.assign("ATGYHLCSEKNCRMKXFEBUHVNMJUWJKWEYIADBTNLESRTEOFZJKFADDYITFHXXPGOEVYTJBBMZVAWSSHRONAPIMPJIYZXARMVTXQFCGWTFSPEVVKWJUXMUDOQMFDDVXTPTKBORYXCNOHXZXUKUHRGALZTGWJKNBSZHSYKIALOCIAJGYZCRARPIGDWMEOZRSLSFNVWCCOLCIHCIKGQLNEDBVQSHPMJWDUULIJQYWQZLFQD");

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
    msg.setTimeStamp(0.677343071306);
    msg.setSource(54912U);
    msg.setSourceEntity(21U);
    msg.setDestination(35892U);
    msg.setDestinationEntity(199U);
    msg.timeout = 53583U;
    msg.lat = 0.27418903664;
    msg.lon = 0.118381414881;
    msg.z = 0.678718767321;
    msg.z_units = 38U;
    msg.speed = 0.584554507766;
    msg.speed_units = 182U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.714540186062;
    tmp_msg_0.y = 0.566353053312;
    tmp_msg_0.z = 0.350470824452;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VKCSJXOVUWJMIHVUVOBZXEBMWRHMBNXVJSWPPFCLOBHJJFFCDUKEELUQCKNOPNUBNADOYNEGLDZRPYYTWHQJDJCXXYIDCEQRMEQKSTUPLYXFQRYGSTWARKKAKIFYUIHAGMBDFITEXHVXXGZGHCLGRZTJCWSAVBMUHCSZRNVPQUMKMAKLOOGWCPTIMTEXZBZAIASIBSOOQGLRPNTGDLRALEVQDBYYFWOFKSNQIZHGIZWNMUJJPAQWTVYLZ");

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
    msg.setTimeStamp(0.445650031288);
    msg.setSource(1902U);
    msg.setSourceEntity(17U);
    msg.setDestination(32758U);
    msg.setDestinationEntity(160U);
    msg.timeout = 57928U;
    msg.lat = 0.52583291311;
    msg.lon = 0.174595217356;
    msg.z = 0.153524857649;
    msg.z_units = 227U;
    msg.speed = 0.819235697605;
    msg.speed_units = 76U;
    msg.custom.assign("EVTQIRKTYPPEOJCQPMIGLZFXUBITFBEUTHRLWREKIJBFNHQTCXZGFHZIDZNUAAMSKXHJUWRGAQQNXMLIOZGKDOWHBKQLYJMKJOZMFDOACVLNANBPTMODVOPWLFH");

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
    msg.setTimeStamp(0.626969780089);
    msg.setSource(13675U);
    msg.setSourceEntity(79U);
    msg.setDestination(61188U);
    msg.setDestinationEntity(97U);
    msg.timeout = 49986U;
    msg.lat = 0.737794597999;
    msg.lon = 0.122085437189;
    msg.z = 0.318891048927;
    msg.z_units = 20U;
    msg.speed = 0.829016692605;
    msg.speed_units = 183U;
    msg.custom.assign("JHXMHZYKLWGFPYIKUEHDBESBWPGFYOYZNQFHZLYEBTQEWVOQELQTVVHFDHMJKHDMONFACCALGTPLDDJQSRKZRFKMCRVTIJZEOUZNOWOGNAVBVBGP");

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
    msg.setTimeStamp(0.700755625232);
    msg.setSource(62258U);
    msg.setSourceEntity(220U);
    msg.setDestination(3046U);
    msg.setDestinationEntity(247U);
    msg.x = 0.0427475397915;
    msg.y = 0.801527975061;
    msg.z = 0.482509827485;

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
    msg.setTimeStamp(0.743411752301);
    msg.setSource(10480U);
    msg.setSourceEntity(83U);
    msg.setDestination(50783U);
    msg.setDestinationEntity(196U);
    msg.x = 0.876229615304;
    msg.y = 0.572468735427;
    msg.z = 0.359174890855;

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
    msg.setTimeStamp(0.92505325289);
    msg.setSource(23539U);
    msg.setSourceEntity(18U);
    msg.setDestination(36101U);
    msg.setDestinationEntity(176U);
    msg.x = 0.475504491121;
    msg.y = 0.999731932889;
    msg.z = 0.333291686968;

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
    msg.setTimeStamp(0.649406221004);
    msg.setSource(16027U);
    msg.setSourceEntity(78U);
    msg.setDestination(7449U);
    msg.setDestinationEntity(5U);
    msg.timeout = 60917U;
    msg.lat = 0.861425174388;
    msg.lon = 0.632085330818;
    msg.z = 0.249398705018;
    msg.z_units = 162U;
    msg.amplitude = 0.331960568717;
    msg.pitch = 0.10876825955;
    msg.speed = 0.395836746731;
    msg.speed_units = 206U;
    msg.custom.assign("JGIYIZMEEJWWLEDUNTUNQVNLOWBJCZKQRMKAYRGAFKNYZYQFUQVNSKSSUP");

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
    msg.setTimeStamp(0.997153064907);
    msg.setSource(56154U);
    msg.setSourceEntity(93U);
    msg.setDestination(65112U);
    msg.setDestinationEntity(183U);
    msg.timeout = 18443U;
    msg.lat = 0.0186639586726;
    msg.lon = 0.356372655845;
    msg.z = 0.333358423736;
    msg.z_units = 35U;
    msg.amplitude = 0.230917175761;
    msg.pitch = 0.093052111226;
    msg.speed = 0.990969797039;
    msg.speed_units = 61U;
    msg.custom.assign("PZYHKWUWDMTIOEATHCZBIXESXZNGFFMIKFGJIQPNZZVPGFXOKXNVQJWGJOGTPKYOPAZIRLTVAHSBBQWNNVFJSEYLHXMYJMTUXVWEEWDKHPYCDSFAOBCWBKUJTZCQVMMLQXDACQURYINOHDDKGHBDBY");

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
    msg.setTimeStamp(0.803685558771);
    msg.setSource(15721U);
    msg.setSourceEntity(119U);
    msg.setDestination(38998U);
    msg.setDestinationEntity(241U);
    msg.timeout = 57513U;
    msg.lat = 0.260576569821;
    msg.lon = 0.645404079566;
    msg.z = 0.0634775055986;
    msg.z_units = 131U;
    msg.amplitude = 0.748328510775;
    msg.pitch = 0.650004058998;
    msg.speed = 0.415145709024;
    msg.speed_units = 230U;
    msg.custom.assign("YNNDLRVIWVZONANJXUKRMXPXF");

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
    msg.setTimeStamp(0.425479955741);
    msg.setSource(40592U);
    msg.setSourceEntity(120U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.895035041868);
    msg.setSource(21494U);
    msg.setSourceEntity(45U);
    msg.setDestination(63416U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.186310991343);
    msg.setSource(29946U);
    msg.setSourceEntity(59U);
    msg.setDestination(35086U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.352673145128);
    msg.setSource(51810U);
    msg.setSourceEntity(19U);
    msg.setDestination(21225U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.074590680873;
    msg.lon = 0.22781815982;
    msg.z = 0.354948305866;
    msg.z_units = 91U;
    msg.radius = 0.653650894372;
    msg.duration = 54909U;
    msg.speed = 0.756249071004;
    msg.speed_units = 221U;
    msg.popup_period = 7069U;
    msg.popup_duration = 43900U;
    msg.flags = 129U;
    msg.custom.assign("IXYXVRZACMURGWKBKPHQMQTNBROTJBTSVEJTV");

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
    msg.setTimeStamp(0.182442970591);
    msg.setSource(49636U);
    msg.setSourceEntity(227U);
    msg.setDestination(61625U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.532600399665;
    msg.lon = 0.0798035081543;
    msg.z = 0.0149047985246;
    msg.z_units = 177U;
    msg.radius = 0.231842128826;
    msg.duration = 47673U;
    msg.speed = 0.621366411071;
    msg.speed_units = 242U;
    msg.popup_period = 42644U;
    msg.popup_duration = 6089U;
    msg.flags = 184U;
    msg.custom.assign("JVJWQIPIVKUYGACTYKQAKYAILKRIJTVOYQZPDMCUVAFRONYWHBLNNFMGYXRFSIZEZIGOICZYRCPMCKQJRHWVJHEHQLVKWTNLGXKBFOSWVZCLISDCYDEEODLDRQSSSKTBOAGNIMHUPUMNDAYVBTXPEMAUTZZBTYGEKWTPQOAZXSROQLVRBVACCJXJGDD");

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
    msg.setTimeStamp(0.717590926006);
    msg.setSource(16864U);
    msg.setSourceEntity(97U);
    msg.setDestination(4176U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.892473695954;
    msg.lon = 0.325344243591;
    msg.z = 0.922281987708;
    msg.z_units = 83U;
    msg.radius = 0.947345283975;
    msg.duration = 45322U;
    msg.speed = 0.815043102179;
    msg.speed_units = 135U;
    msg.popup_period = 12201U;
    msg.popup_duration = 63813U;
    msg.flags = 133U;
    msg.custom.assign("UYFELRLUATYIVMGOPDKNE");

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
    msg.setTimeStamp(0.382804075627);
    msg.setSource(29712U);
    msg.setSourceEntity(83U);
    msg.setDestination(40335U);
    msg.setDestinationEntity(153U);
    msg.timeout = 41664U;
    msg.flags = 81U;
    msg.lat = 0.705596311903;
    msg.lon = 0.41688136168;
    msg.start_z = 0.034078790505;
    msg.start_z_units = 176U;
    msg.end_z = 0.306698405736;
    msg.end_z_units = 33U;
    msg.radius = 0.132226090557;
    msg.speed = 0.528343623096;
    msg.speed_units = 119U;
    msg.custom.assign("TPPIRDDRQUYZYDHHWQWDAEWYEUU");

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
    msg.setTimeStamp(0.985361337685);
    msg.setSource(37845U);
    msg.setSourceEntity(70U);
    msg.setDestination(36729U);
    msg.setDestinationEntity(75U);
    msg.timeout = 21812U;
    msg.flags = 42U;
    msg.lat = 0.673302965994;
    msg.lon = 0.997521131998;
    msg.start_z = 0.969450774228;
    msg.start_z_units = 114U;
    msg.end_z = 0.44500937562;
    msg.end_z_units = 122U;
    msg.radius = 0.782235431181;
    msg.speed = 0.474098943146;
    msg.speed_units = 224U;
    msg.custom.assign("EXAQAZUYTPDFJZBJVEOXWMKASJKKTOAIJUYYTCITELZMZJDGCFLBXPCSJSGLLVEZOUDHMRAQHAREFBDZWBBAYM");

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
    msg.setTimeStamp(0.918356606342);
    msg.setSource(9367U);
    msg.setSourceEntity(61U);
    msg.setDestination(57338U);
    msg.setDestinationEntity(228U);
    msg.timeout = 5793U;
    msg.flags = 44U;
    msg.lat = 0.9679740719;
    msg.lon = 0.0644848826448;
    msg.start_z = 0.369324502602;
    msg.start_z_units = 116U;
    msg.end_z = 0.578579117841;
    msg.end_z_units = 132U;
    msg.radius = 0.812243948874;
    msg.speed = 0.8242955273;
    msg.speed_units = 254U;
    msg.custom.assign("QJZHYCUEGCHTTYGMTYDOFUUYYLIPQERIASDBNIBSNBXOOKFUDBRSPCLKOGMHHRZCAZTKNVRWMNHLCH");

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
    msg.setTimeStamp(0.993560600067);
    msg.setSource(31110U);
    msg.setSourceEntity(161U);
    msg.setDestination(28302U);
    msg.setDestinationEntity(95U);
    msg.timeout = 37260U;
    msg.lat = 0.444481842255;
    msg.lon = 0.778638255833;
    msg.z = 0.237166332984;
    msg.z_units = 10U;
    msg.speed = 0.262746862731;
    msg.speed_units = 249U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.487169008892;
    tmp_msg_0.y = 0.416793544495;
    tmp_msg_0.z = 0.73735179892;
    tmp_msg_0.t = 0.541421218803;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WTCLCWKQWGJDQRQONIGUKSIUNCBPIOUGNGOIHSJKEFJYZMLRPYTVOSEMTQEDJCZAQHWYBRYRDKXZXTTMGFDTQYXIVLUYHOKYRXA");

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
    msg.setTimeStamp(0.553127160547);
    msg.setSource(33509U);
    msg.setSourceEntity(91U);
    msg.setDestination(48978U);
    msg.setDestinationEntity(24U);
    msg.timeout = 34925U;
    msg.lat = 0.511375949695;
    msg.lon = 0.0110617840685;
    msg.z = 0.48970181639;
    msg.z_units = 60U;
    msg.speed = 0.158639293258;
    msg.speed_units = 75U;
    msg.custom.assign("ISXDVRYKOWMPWIAAQGDEPSNQQPLAZDLWSXCJFLVSNOQWASLKKTATHJPJYULWNUXKOBPYEIDDTEARGCJNYWCONVTMHRZXKUTURKWHVZORNDVGUFSNQQETSBXCFOFJMPIASRETIDCSYRRK");

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
    msg.setTimeStamp(0.841516498068);
    msg.setSource(11101U);
    msg.setSourceEntity(15U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(237U);
    msg.timeout = 15342U;
    msg.lat = 0.513758141303;
    msg.lon = 0.0324872874834;
    msg.z = 0.782750824791;
    msg.z_units = 7U;
    msg.speed = 0.240144261334;
    msg.speed_units = 178U;
    msg.custom.assign("KAXCOFUPWRQKUUSTWJIMQQCZUSYZYVFBCOMIOXXSLGVHTCWCBJGUOYHMENILRBWDDNJAGVHGFISWSRNJABSEKOLRESRKGTDFBINZLGJQPKFXQ");

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
    msg.setTimeStamp(0.592934599129);
    msg.setSource(34229U);
    msg.setSourceEntity(230U);
    msg.setDestination(2281U);
    msg.setDestinationEntity(29U);
    msg.x = 0.241105305908;
    msg.y = 0.865635369637;
    msg.z = 0.29409755121;
    msg.t = 0.0647473202778;

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
    msg.setTimeStamp(0.771980649038);
    msg.setSource(25610U);
    msg.setSourceEntity(145U);
    msg.setDestination(49757U);
    msg.setDestinationEntity(42U);
    msg.x = 0.491169679904;
    msg.y = 0.235678754908;
    msg.z = 0.885700050472;
    msg.t = 0.746403702961;

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
    msg.setTimeStamp(0.63119758004);
    msg.setSource(48424U);
    msg.setSourceEntity(37U);
    msg.setDestination(35269U);
    msg.setDestinationEntity(16U);
    msg.x = 0.0679508343362;
    msg.y = 0.108855314384;
    msg.z = 0.539693177155;
    msg.t = 0.0321577737793;

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
    msg.setTimeStamp(0.729324993307);
    msg.setSource(6219U);
    msg.setSourceEntity(45U);
    msg.setDestination(44492U);
    msg.setDestinationEntity(87U);
    msg.timeout = 41755U;
    msg.name.assign("PRVNESKFXVDPJIKWTRIFDKVAWGQTTCOQYCPLTVPMWZCIMZETOLXJMHHEWDLIQYGCCHIYBLAJGGHVAXTHPHYTG");
    msg.custom.assign("WFGVMQSWARANUBZUBBLOCVCNRVFEIWRFNWKRSYJZUSEDEYEKHNJOJJQJBSHBQYOUZOANCYXRWBISEXPLHATCYLGZMOHJFTTDGZOALKUDTHXVPDDPUQBASUMNGTGDRFHZQAUWTXETIWEAHLQKWVPXMDYEMXMVMZCGYVXUQELQFYDCRKPAIPGBTIPMYILRFVJDWXUIYSSZNHCQFWSZOIHGCAKRIJBDKLSFIRGCNJMZKXBOCLOPMN");

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
    msg.setTimeStamp(0.589455942217);
    msg.setSource(62003U);
    msg.setSourceEntity(230U);
    msg.setDestination(27005U);
    msg.setDestinationEntity(162U);
    msg.timeout = 17419U;
    msg.name.assign("RYCTLPNWLVYNEIVHFNRGREWNPTPBKTQIALJMCSLEZFOIKNXUIWEIJSHIKIWVFJUPRBOKANUIUGUOOAMDCJVGPBKSENKGWMQXODVMLZRUKSUDBCEPOLFHEPEJZYZRFFSAXAMIXYVFCHQOGTMQJVSSQKTDL");
    msg.custom.assign("QXAIYVQTWGCSFRWKIJFMAWYQBJJFPYRQPBHXMA");

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
    msg.setTimeStamp(0.802716934508);
    msg.setSource(42134U);
    msg.setSourceEntity(112U);
    msg.setDestination(9935U);
    msg.setDestinationEntity(153U);
    msg.timeout = 52009U;
    msg.name.assign("MBKOOGHOYVEDGUXTTPNUAAPJGCUTOPMBWDYANZZSSWJNUDZKBXNSJTSREYAVFMSIJNXHRCFPTHDTKRJFINUYCGZGYHZSZRWYMQAUVBMVDBCOXTNEJFOILPWGTYIHCJMLWNNEKIPXCOVQZAVRJCHAQLEIRCLOCQG");
    msg.custom.assign("WSXFOAGXLIIOAKSHIQUQYGWUWIZJSIAMRCEKLGPLNEACOSDUFNVGCEFHXXFMSHQJWUYTTZDRZRJMFMHVIDAIKBZPQXIRHKJTYRLACYYHNKFIFBWJYPGPAGFKWHDVEUWHNZUMYNQBCGRXUZUPVFPOBRTMCTTVZQESBSKVXULLPPUBNQQJZKAPQIKJGRJLLVOCMBDVDOEDSSHTDXXCFETHCDZGCYAXGOTEK");

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
    msg.setTimeStamp(0.0314764494231);
    msg.setSource(32356U);
    msg.setSourceEntity(65U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.296894105539;
    msg.lon = 0.246197269736;
    msg.z = 0.790006558406;
    msg.z_units = 4U;
    msg.speed = 0.964471744375;
    msg.speed_units = 126U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.969211474797;
    tmp_msg_0.y = 0.00553306462385;
    tmp_msg_0.z = 0.169855271147;
    tmp_msg_0.t = 0.374226719114;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 38108U;
    tmp_msg_1.off_x = 0.617833845945;
    tmp_msg_1.off_y = 0.132549197668;
    tmp_msg_1.off_z = 0.570932302451;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.464023992666;
    msg.custom.assign("FDIGLPQRFHHDGIRRFMVANSVHZQFUGJKEBORYBJSSTDPUSAVDVZYZLDOEQXSWAJUVIMHKZBACQNWJCVHJKCOBKUZXXUPEKXRLMPSEHFNPOLCGIUBYGCPEAPWKEGHMQVWUECYSVKENDWYJMLTGINDYXXIMFCXNZRTFMJLLUZYBIAYQURSRZTQBWSWPDVOWTXOALNFGPVWYTYSAHADORWNIIZBZQHMK");

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
    msg.setTimeStamp(0.378194146241);
    msg.setSource(16659U);
    msg.setSourceEntity(39U);
    msg.setDestination(26710U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.319085859227;
    msg.lon = 0.360228125399;
    msg.z = 0.981278700718;
    msg.z_units = 201U;
    msg.speed = 0.913054068504;
    msg.speed_units = 25U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18948U;
    tmp_msg_0.off_x = 0.851579638101;
    tmp_msg_0.off_y = 0.494538373734;
    tmp_msg_0.off_z = 0.603123600609;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0809395128409;
    msg.custom.assign("XOVHHNEAIYRPWWGDWLELQPCJSMDSCLMFBYMJEEBQODKQUGHBGARWKOVOGGPMFXZANSYRUYIQJLMSVSZLIAICFDZAKKXLHFDSSTPRAHBHOYXWIRIOMUSITBCSUZHHNQKAVAJYVYGKYXPL");

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
    msg.setTimeStamp(0.189999511927);
    msg.setSource(30129U);
    msg.setSourceEntity(63U);
    msg.setDestination(36180U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.272565825276;
    msg.lon = 0.0738432565154;
    msg.z = 0.739401375327;
    msg.z_units = 26U;
    msg.speed = 0.157157928836;
    msg.speed_units = 148U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1196U;
    tmp_msg_0.off_x = 0.498505464063;
    tmp_msg_0.off_y = 0.250035555652;
    tmp_msg_0.off_z = 0.942298037675;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0541182375516;
    msg.custom.assign("DOSROUJBMVNESHVNSLUUWJUDIBPCZJWMUVKIIUIOTYBHPAJURDLCFHOQHEZTJBBXVEYYWIZUDILWOMQQZGBGESTZLZKORYHALRTVDXRVPNENCUXWFKMOORMXASACXIFQFHYRCTPCTFSPQMEMHNNAIBVKPXKZIVPDXQYVGWFHGVWPSIALGRLMCHJRFNCKLYEBXGOXQKBNGAOYELSJJXTYHM");

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
    msg.setTimeStamp(0.417214741582);
    msg.setSource(24720U);
    msg.setSourceEntity(25U);
    msg.setDestination(11173U);
    msg.setDestinationEntity(91U);
    msg.vid = 61862U;
    msg.off_x = 0.783615343163;
    msg.off_y = 0.453394491742;
    msg.off_z = 0.0574196465568;

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
    msg.setTimeStamp(0.351831525454);
    msg.setSource(20436U);
    msg.setSourceEntity(160U);
    msg.setDestination(14134U);
    msg.setDestinationEntity(154U);
    msg.vid = 11302U;
    msg.off_x = 0.428237825316;
    msg.off_y = 0.22775099506;
    msg.off_z = 0.706704825846;

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
    msg.setTimeStamp(0.526153033078);
    msg.setSource(10064U);
    msg.setSourceEntity(27U);
    msg.setDestination(5721U);
    msg.setDestinationEntity(59U);
    msg.vid = 26656U;
    msg.off_x = 0.927588879341;
    msg.off_y = 0.343698933543;
    msg.off_z = 0.66501942754;

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
    msg.setTimeStamp(0.939339129649);
    msg.setSource(46497U);
    msg.setSourceEntity(248U);
    msg.setDestination(6263U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.277629605272);
    msg.setSource(33889U);
    msg.setSourceEntity(25U);
    msg.setDestination(21769U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.468383216184);
    msg.setSource(23938U);
    msg.setSourceEntity(216U);
    msg.setDestination(42477U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.882714611117);
    msg.setSource(61167U);
    msg.setSourceEntity(239U);
    msg.setDestination(17488U);
    msg.setDestinationEntity(6U);
    msg.mid = 56822U;

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
    msg.setTimeStamp(0.0293186594128);
    msg.setSource(59925U);
    msg.setSourceEntity(38U);
    msg.setDestination(9759U);
    msg.setDestinationEntity(197U);
    msg.mid = 35344U;

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
    msg.setTimeStamp(0.164143224068);
    msg.setSource(40271U);
    msg.setSourceEntity(5U);
    msg.setDestination(63298U);
    msg.setDestinationEntity(112U);
    msg.mid = 12544U;

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
    msg.setTimeStamp(0.105990062035);
    msg.setSource(5681U);
    msg.setSourceEntity(27U);
    msg.setDestination(10052U);
    msg.setDestinationEntity(234U);
    msg.state = 0U;
    msg.eta = 41584U;
    msg.info.assign("LHXZYWBZPCWHTOECDBJBHESJSZMHGNFQLCYXGHDUNXNILBCPWVVFLPHQTYJSC");

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
    msg.setTimeStamp(0.321623560562);
    msg.setSource(62669U);
    msg.setSourceEntity(231U);
    msg.setDestination(62941U);
    msg.setDestinationEntity(85U);
    msg.state = 4U;
    msg.eta = 53572U;
    msg.info.assign("VZUAACPMLMPMLFOJBCJQHVWSAEZOSKPUNDTBWETEZQSBDYYICHVEXLKWCACSRENYHVBOMPBEQTHWUXROBTURQRSNICPZSNPFHDGKJBDINQOBYGDULFFFZGACZOAXOHDHPLCKILGCGXZKSRQRUFYMXUFIOTHEVIVYMSJGTTZEJNWOAUMRJJRIFQGIMCNRPGBGSVIQRHDFKJV");

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
    msg.setTimeStamp(0.880806349561);
    msg.setSource(40466U);
    msg.setSourceEntity(0U);
    msg.setDestination(20146U);
    msg.setDestinationEntity(109U);
    msg.state = 56U;
    msg.eta = 51969U;
    msg.info.assign("QYRBDWGEIHTMSKVRVFXJULEZYZCULJBMZYJKQKNURMSPQDDQXPITIUBCSINKETYSFFTPGTKWJPBXSDNECTBDVSGAUMEUHEXFFHYPRHBQIDQOLHKNQFSZWJFXRWQNSOVYBDGLLVMLCQXTKUCOUZAOYIGUJMC");

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
    msg.setTimeStamp(0.730606033735);
    msg.setSource(63160U);
    msg.setSourceEntity(151U);
    msg.setDestination(47931U);
    msg.setDestinationEntity(227U);
    msg.system = 50358U;
    msg.duration = 49203U;
    msg.speed = 0.585275914639;
    msg.speed_units = 47U;
    msg.x = 0.721216310944;
    msg.y = 0.993044278597;
    msg.z = 0.258224959947;
    msg.z_units = 214U;

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
    msg.setTimeStamp(0.191120673397);
    msg.setSource(7998U);
    msg.setSourceEntity(193U);
    msg.setDestination(9177U);
    msg.setDestinationEntity(189U);
    msg.system = 47352U;
    msg.duration = 5443U;
    msg.speed = 0.733449698497;
    msg.speed_units = 14U;
    msg.x = 0.922974370435;
    msg.y = 0.661765081939;
    msg.z = 0.909520965759;
    msg.z_units = 178U;

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
    msg.setTimeStamp(0.574255541193);
    msg.setSource(61995U);
    msg.setSourceEntity(159U);
    msg.setDestination(65347U);
    msg.setDestinationEntity(193U);
    msg.system = 49304U;
    msg.duration = 28666U;
    msg.speed = 0.454236564625;
    msg.speed_units = 235U;
    msg.x = 0.0307280865213;
    msg.y = 0.458288981793;
    msg.z = 0.413786466177;
    msg.z_units = 30U;

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
    msg.setTimeStamp(0.0134527028609);
    msg.setSource(57708U);
    msg.setSourceEntity(67U);
    msg.setDestination(50216U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.434240264513;
    msg.lon = 0.803863289729;
    msg.speed = 0.411834163717;
    msg.speed_units = 248U;
    msg.duration = 20425U;
    msg.sys_a = 42291U;
    msg.sys_b = 26959U;
    msg.move_threshold = 0.327515348174;

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
    msg.setTimeStamp(0.894105361682);
    msg.setSource(35182U);
    msg.setSourceEntity(77U);
    msg.setDestination(64364U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.367926693113;
    msg.lon = 0.276580167018;
    msg.speed = 0.582737237781;
    msg.speed_units = 201U;
    msg.duration = 48443U;
    msg.sys_a = 57337U;
    msg.sys_b = 47888U;
    msg.move_threshold = 0.367396958464;

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
    msg.setTimeStamp(0.743527043372);
    msg.setSource(49300U);
    msg.setSourceEntity(76U);
    msg.setDestination(33350U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.676585311018;
    msg.lon = 0.0273854350375;
    msg.speed = 0.669840949677;
    msg.speed_units = 78U;
    msg.duration = 50981U;
    msg.sys_a = 48230U;
    msg.sys_b = 62609U;
    msg.move_threshold = 0.432469533374;

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
    msg.setTimeStamp(0.3650169363);
    msg.setSource(6608U);
    msg.setSourceEntity(251U);
    msg.setDestination(10899U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.623387221701;
    msg.lon = 0.128948047808;
    msg.z = 0.183700218651;
    msg.z_units = 41U;
    msg.speed = 0.897899541585;
    msg.speed_units = 191U;
    msg.custom.assign("OWFGHTZNZNVNFQCITZWQHVOHCJGUNCKLTANNVUZGIUJAXQDHKVLKHHIYRGRWDFJSLEFXWQCBWXXTQSGUDLQXNBCBIFRCQVFPDDPMQOIGFTFGTSAKUAVZPODJZVBPLLAMGEWEOUGYBRPKESTDMYBRUXSKACSNAOZJBEOUXES");

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
    msg.setTimeStamp(0.97121177593);
    msg.setSource(55326U);
    msg.setSourceEntity(217U);
    msg.setDestination(19212U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.28583153612;
    msg.lon = 0.699078224751;
    msg.z = 0.268638991066;
    msg.z_units = 21U;
    msg.speed = 0.286342339914;
    msg.speed_units = 238U;
    msg.custom.assign("GEVYOATJCHGJJNOEAABDQVCIFFXFIRIZIWBHZNL");

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
    msg.setTimeStamp(0.695684551439);
    msg.setSource(42220U);
    msg.setSourceEntity(84U);
    msg.setDestination(49468U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.325211197163;
    msg.lon = 0.00666995352318;
    msg.z = 0.130876526073;
    msg.z_units = 209U;
    msg.speed = 0.382196536764;
    msg.speed_units = 68U;
    msg.custom.assign("PDABIUOAJUYKVXAKXVIXCXBJOFSUPCBWYMLMEKHDGBLFLYZLJWQOHQIHFEIGBYTCGPLEHRNMRYEUVHIQQFKSPAHMZEAIDFWQWWUHNGZKACQGODVSUFPLGQKAEJZSDKBJPZOEGLSTMIUKOVKTALGBRQBSWBZQXSMPNXQRWVRICMWRCVSMHWNKNGLTFNPUSUMODTBGOYDJOARSNXVYRXYREDAZ");

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
    msg.setTimeStamp(0.962753005767);
    msg.setSource(26535U);
    msg.setSourceEntity(240U);
    msg.setDestination(39078U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.355007280562;
    msg.lon = 0.34495595565;

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
    msg.setTimeStamp(0.891670733657);
    msg.setSource(32338U);
    msg.setSourceEntity(102U);
    msg.setDestination(18156U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.584233256061;
    msg.lon = 0.506276712658;

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
    msg.setTimeStamp(0.733772754958);
    msg.setSource(60770U);
    msg.setSourceEntity(225U);
    msg.setDestination(20556U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.889169657107;
    msg.lon = 0.448600405533;

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
    msg.setTimeStamp(0.71339837693);
    msg.setSource(16839U);
    msg.setSourceEntity(37U);
    msg.setDestination(60347U);
    msg.setDestinationEntity(51U);
    msg.timeout = 43492U;
    msg.lat = 0.436710902956;
    msg.lon = 0.887403443502;
    msg.z = 0.605947359827;
    msg.z_units = 239U;
    msg.pitch = 0.618371676477;
    msg.amplitude = 0.489510181185;
    msg.duration = 36728U;
    msg.speed = 0.531573930609;
    msg.speed_units = 175U;
    msg.radius = 0.342465460959;
    msg.direction = 3U;
    msg.custom.assign("ZXXAIZYQAAPWMSUDIZMLNV");

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
    msg.setTimeStamp(0.0760318823104);
    msg.setSource(23591U);
    msg.setSourceEntity(43U);
    msg.setDestination(30756U);
    msg.setDestinationEntity(178U);
    msg.timeout = 33526U;
    msg.lat = 0.563866007578;
    msg.lon = 0.72125637723;
    msg.z = 0.647714225874;
    msg.z_units = 101U;
    msg.pitch = 0.988692985523;
    msg.amplitude = 0.628081555353;
    msg.duration = 35509U;
    msg.speed = 0.4324466057;
    msg.speed_units = 247U;
    msg.radius = 0.102270959403;
    msg.direction = 74U;
    msg.custom.assign("YUTDPODPQOSLOITFYCNLQJIBJYFNNXJWVFZHODHUGHBWVSHLKYESBITGMNPULFRXOVPLRZMQMVNPBLAUW");

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
    msg.setTimeStamp(0.224574160469);
    msg.setSource(59290U);
    msg.setSourceEntity(127U);
    msg.setDestination(63739U);
    msg.setDestinationEntity(72U);
    msg.timeout = 60420U;
    msg.lat = 0.1113171331;
    msg.lon = 0.0506427657562;
    msg.z = 0.917860151915;
    msg.z_units = 153U;
    msg.pitch = 0.0687531974123;
    msg.amplitude = 0.253295122155;
    msg.duration = 27494U;
    msg.speed = 0.919546328041;
    msg.speed_units = 195U;
    msg.radius = 0.441354208996;
    msg.direction = 211U;
    msg.custom.assign("MWQMBKELOFAZHJZEETUMPWARNYTSCYZSLANJJDKWXXNXGOZOCWQTEIHVYNVJWTDTDVHIPXVVMQDIDVDNVRTHYCNWXLMZPNQUOGSUCYQREYJQPGNMSIGCJSMFCVTFUCQEPYIDJUBZGBAEVGFKWBKXRIQLBKALHZLRASZXLFXPSRMOAHBGUYJQPOKHMTNGPABPYFFWQRDIOCFCUGZKSUZIR");

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
    msg.setTimeStamp(0.945065065898);
    msg.setSource(53165U);
    msg.setSourceEntity(146U);
    msg.setDestination(22139U);
    msg.setDestinationEntity(116U);
    msg.formation_name.assign("HRYIQYUYRLHHTBPCLNBEXAMTXGQIPTZWYWRJMALDKVTGMNXAUUCOHBEAAZSKRBGYIWHPVILEQIITNSCLBWPOKCVFQZURSVMHHLTMVSNJXEJXDYMFVHGPAFPKGEIIVBDNJQTPGQQYOSJGKBMWNFZOOPGTSBOVADLNLDISGCQSBWYXUB");
    msg.reference_frame = 148U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61839U;
    tmp_msg_0.off_x = 0.195122149385;
    tmp_msg_0.off_y = 0.657032571942;
    tmp_msg_0.off_z = 0.00687248695961;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MTMNCWRDSZFJOINGJYUNEIPWYQFRBKNEVWYMSCLDAQKVFUXOYSPAEPVJSITQGEYUIPZHHJRTUVWHREUJBZVSWEFZHNYOMJDXBYOZBBZEOUPJKVXIBCEGRHFKGKSPIBQIQIOHOLLOATZWDENDMRB");

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
    msg.setTimeStamp(0.687249278922);
    msg.setSource(43355U);
    msg.setSourceEntity(94U);
    msg.setDestination(59713U);
    msg.setDestinationEntity(215U);
    msg.formation_name.assign("MMRLRHPMYCXOVFGOPJUIERDHHYJCKSKXFXJZELUPXXESWTFNXXPDKSUTWJVYFQDPUJQWDAQJIQGMABTZKRHDEDLHLVTWKPTWSATJUCUGIMBGDHOWGGXCVTOVFNMZZCOYZZQHPVGJOZBSDNFKTBRDQWOIHVWUBSPQYYGYCXMOTQNKIILUZWBUSRNCDEVMGIPESFRYLLNBOBEAMCEAAJEBVWAXFMQNKABHIZGELCZSYRN");
    msg.reference_frame = 125U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5775U;
    tmp_msg_0.off_x = 0.817090457879;
    tmp_msg_0.off_y = 0.174972193604;
    tmp_msg_0.off_z = 0.0725295109373;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MQRKFTBDKDBRPRWYJEHJNBHDCXGYNINSISGURJLVIDKXEPUVDGVMMTJIPOLYTPAZNRPWOWPPDZFBICQHJWOILAKHMEANVATMCCVWRUIYHXXUFAELICQSCKWALEWLHGHCGXFGSOPVEKUAMZOLIZJGKUXYRMRCJMSBRDEOJBXFZPOQXLBFJVFYYKBB");

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
    msg.setTimeStamp(0.90217741935);
    msg.setSource(25986U);
    msg.setSourceEntity(177U);
    msg.setDestination(13699U);
    msg.setDestinationEntity(170U);
    msg.formation_name.assign("ZAVPZFMJZEAOUUGWKLVDKNAYXJVECORENZTFXRL");
    msg.reference_frame = 18U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64662U;
    tmp_msg_0.off_x = 0.18671454049;
    tmp_msg_0.off_y = 0.406926971538;
    tmp_msg_0.off_z = 0.636311148106;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CBYADUWJPVUDTXPAIHAURDWVPZVSNZKSFYILBFMRPVLLWDSOHWSLBCWXBHTEKVFVMCOYCHNIJXNDQRQLRPIQXEUWDAALQEMUKGHFAOEZMHNPMQFAXKISZEKFMKERZUECUGSCZCTZNVOYKXDGVGNXTNGJJWFWETTHCCRBYRUOWYLJFYSMKHBPHYSGZRSQXALJYROLPLVZTJNIFBGPABTUTDOSB");

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
    msg.setTimeStamp(0.432988140471);
    msg.setSource(27344U);
    msg.setSourceEntity(44U);
    msg.setDestination(55585U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("VSCSRQGSROTHQLQPSVCJXTBGAXGMBIPYMTIWQPBCUZXYTUPVYLETLQZRKFXJVEBKVRCJJALNOAYGOPHTHINDYOVFFZBQQXUNMPUZDJWADGNVDSASJAJFOJCMKGIDMCYHRNGPNKMBBWEI");
    msg.formation_name.assign("MZYZQVEGCRGJWDAVZXIUGQFBHO");
    msg.plan_id.assign("OBWOKPVXHPKCTRVTFAMAIZVPVRCAQUQORRYCNVDZOVIXVYLSJOQIPCSHDEPTHFMVT");
    msg.description.assign("HZFJTFGDHBHVPKBEYGSYJTLINMSSMWZAJOANDGNQAYIKWFLRLHOYRHDOMEQYZHURXKXTWNPYGRYVUCABWSPZSNBFLQGMXBUADTETRMSHFYARKMPESEMOPQNIJVIMWOCCJYVFSEGFKXXTUSTIAQUBWLJAJDDMGVXOZCEVQONZZBPDWVEPQWPXCB");
    msg.leader_speed = 0.62068515114;
    msg.leader_bank_lim = 0.617829387243;
    msg.pos_sim_err_lim = 0.0984822173382;
    msg.pos_sim_err_wrn = 0.378631898142;
    msg.pos_sim_err_timeout = 33205U;
    msg.converg_max = 0.775410493738;
    msg.converg_timeout = 45537U;
    msg.comms_timeout = 48527U;
    msg.turb_lim = 0.305206139875;
    msg.custom.assign("KIWBLVQMNBERDAWZXPNZUPPIBFIGJLBKBVEENSLJKJIUSLGOLOYSWRYFIEYITKVNXHROJVGCXAKSIVWNTPDHHBTWIECYCRNBSDKAQQZJHPRDPMBJZZPCFXODGCDTDBQSPCMJHQJGCNGOZKDYRFUZQGAGUUCLEEQOWSWRZTKXAMKEYHWFYMXDRATKWAH");

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
    msg.setTimeStamp(0.19595486189);
    msg.setSource(49709U);
    msg.setSourceEntity(80U);
    msg.setDestination(34895U);
    msg.setDestinationEntity(111U);
    msg.group_name.assign("HVTAHQDYEQMDTHOPTKDFGKFSSRZJBOLJELDJCXRDPWARHCFGIVSUZPQLZLOEUWTEHQGXZVNZEOXYIUBTXCPYKWKBWYLWJBWTIHAYLBJ");
    msg.formation_name.assign("PXEVGPNQQHGJHUHFCSNCARZGFHRLNPPVIIWTPVYOTNQSMKAMRDDNQMPADIMYHKKAZWOEINRFBYQMLSWOVXZXBPMCONVWVFUCJSFEWDFPARRLIYGALEELNMIOEDBYSQKMRACLZVODHPICPIOGXKJQIXDJUYEBUQSHTKUDRBXSNROCXSBLYOMZEGMLKNAEGWGJUBYUKFQGKVHTZHFTWQYDVACXZZBGJWYTACSFTKBXOTWTVLLIJ");
    msg.plan_id.assign("VEMUSXSOPGNTRNCUFZHGTMCKEEDMDHHDACBZJFHLJQFHCVKBQEGHVIXMQPWVJFVRJZDROWYZMZRKSUALIR");
    msg.description.assign("AROOBJOQPLWNIHAFCREXOZIPCSIRWYNQELRKESERTJHZJXQTQHBWTHYJMTTSCWEAYSHNULDMOBTUZYQUXPSUMWPCKMLSUAISNQKYVKULAYKYFPSMIZBXGSCERHRILPZJHGEGNCGRTMWPYLKJLKZDNJBDXATPEVMQNUZQVWJIGBFQNUFJEFDKNDODXGZIXAFFDZCEMUGIHHQDHVSBCKXOORCAFCVAFGWTWYBZOVKWRXVV");
    msg.leader_speed = 0.343097720802;
    msg.leader_bank_lim = 0.890167804702;
    msg.pos_sim_err_lim = 0.68856974386;
    msg.pos_sim_err_wrn = 0.412910783746;
    msg.pos_sim_err_timeout = 44507U;
    msg.converg_max = 0.31530540923;
    msg.converg_timeout = 24574U;
    msg.comms_timeout = 29872U;
    msg.turb_lim = 0.989141965977;
    msg.custom.assign("RXPWWFGLZARLTOWQDLIOONMWNSMHAFABBJUQNOQAVQVUWHXZJRHZVXCKAXB");

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
    msg.setTimeStamp(0.779472265853);
    msg.setSource(15963U);
    msg.setSourceEntity(179U);
    msg.setDestination(9726U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("JAVRBGAAIOJFAXWQJDJZDDOKTPXNPVHUSPROOEYKVLLRJKHZRQASFMRVNEVBQPHWYHGRTUDEBHKDDBVQFQRTYWMKGRPSBTNXDMAFKNLISMFWANMIEYIWCWYPMQYKMKIUECGGHNIURBSCSCZXPNDYRVECSQCMLVWZAEWWZOJCHZWOIKCYLFNBULDTOXQTFJJZTEIFICLLLB");
    msg.formation_name.assign("AZXAAKBARFCTHEYKUYKUMFBTXPXWUSQDGIQDIJNHLSEBMHXVIRZNOOBNVAFNWEFQFABJYHQZNQIDMELTRYTADVDESQQUOUTJQPLGODIMWRYLZPTELKWNWCEHKKOPVJASZQQOCPUICIMPWFPZOWN");
    msg.plan_id.assign("PZWOOQADYUNAQSMSXSGYUPPVRXFJTC");
    msg.description.assign("JMSWDONQBSWDSYCPKKQFWJUNKGCHSLDNMHGEIEKACRFJTNTFHBJZOZNUBIRKXQEKDTWGOQBLFVEGCVJWQCSOQWURRDXOEMNZARNNHXTYMSMOAABZHZBLXHPOXHIGOGFFSUCEXYVJWKZTDWQFAEIIFUFBVXLMEVTSDMEVPDZ");
    msg.leader_speed = 0.535639752918;
    msg.leader_bank_lim = 0.127236108117;
    msg.pos_sim_err_lim = 0.680003117141;
    msg.pos_sim_err_wrn = 0.695132382776;
    msg.pos_sim_err_timeout = 3787U;
    msg.converg_max = 0.404803838294;
    msg.converg_timeout = 44773U;
    msg.comms_timeout = 61502U;
    msg.turb_lim = 0.352954072111;
    msg.custom.assign("ZFQRXHMHPMWMXNCAPITTHAWQOZQZEBZRCWYYIDRFQCTPCK");

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
    msg.setTimeStamp(0.562352716848);
    msg.setSource(25071U);
    msg.setSourceEntity(89U);
    msg.setDestination(1849U);
    msg.setDestinationEntity(183U);
    msg.control_src = 25876U;
    msg.control_ent = 84U;
    msg.timeout = 0.42907964061;
    msg.loiter_radius = 0.704287395238;
    msg.altitude_interval = 0.652083822585;

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
    msg.setTimeStamp(0.852134516961);
    msg.setSource(51520U);
    msg.setSourceEntity(111U);
    msg.setDestination(12206U);
    msg.setDestinationEntity(19U);
    msg.control_src = 36911U;
    msg.control_ent = 0U;
    msg.timeout = 0.590352358563;
    msg.loiter_radius = 0.229628423419;
    msg.altitude_interval = 0.229831822566;

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
    msg.setTimeStamp(0.898594415053);
    msg.setSource(15784U);
    msg.setSourceEntity(212U);
    msg.setDestination(62811U);
    msg.setDestinationEntity(13U);
    msg.control_src = 45175U;
    msg.control_ent = 174U;
    msg.timeout = 0.643658053665;
    msg.loiter_radius = 0.41225795796;
    msg.altitude_interval = 0.234147675934;

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
    msg.setTimeStamp(0.366494291626);
    msg.setSource(17673U);
    msg.setSourceEntity(191U);
    msg.setDestination(61993U);
    msg.setDestinationEntity(192U);
    msg.flags = 110U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.214928031829;
    tmp_msg_0.speed_units = 253U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.83016933026;
    tmp_msg_1.z_units = 4U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.938989528897;
    msg.lon = 0.897545735245;
    msg.radius = 0.637714327531;

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
    msg.setTimeStamp(0.814023952714);
    msg.setSource(25159U);
    msg.setSourceEntity(46U);
    msg.setDestination(55798U);
    msg.setDestinationEntity(87U);
    msg.flags = 239U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.730655765052;
    tmp_msg_0.speed_units = 7U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.611772289158;
    tmp_msg_1.z_units = 132U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.889428897384;
    msg.lon = 0.413750853571;
    msg.radius = 0.892887765989;

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
    msg.setTimeStamp(0.122893018626);
    msg.setSource(12712U);
    msg.setSourceEntity(27U);
    msg.setDestination(15553U);
    msg.setDestinationEntity(1U);
    msg.flags = 60U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.990846195389;
    tmp_msg_0.speed_units = 13U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.553711054533;
    tmp_msg_1.z_units = 211U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.10870896747;
    msg.lon = 0.0610488524967;
    msg.radius = 0.626346181861;

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
    msg.setTimeStamp(0.359993256077);
    msg.setSource(55784U);
    msg.setSourceEntity(22U);
    msg.setDestination(39423U);
    msg.setDestinationEntity(91U);
    msg.control_src = 53355U;
    msg.control_ent = 187U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 251U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.527933753939;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0291956028861;
    tmp_tmp_msg_0_1.z_units = 154U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.787284539542;
    tmp_msg_0.lon = 0.400029546443;
    tmp_msg_0.radius = 0.898467419164;
    msg.reference.set(tmp_msg_0);
    msg.state = 215U;
    msg.proximity = 28U;

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
    msg.setTimeStamp(0.640079833873);
    msg.setSource(53898U);
    msg.setSourceEntity(61U);
    msg.setDestination(57727U);
    msg.setDestinationEntity(135U);
    msg.control_src = 44552U;
    msg.control_ent = 230U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 164U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.849127576874;
    tmp_tmp_msg_0_0.speed_units = 193U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0314716206707;
    tmp_tmp_msg_0_1.z_units = 178U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.58436298463;
    tmp_msg_0.lon = 0.429339375729;
    tmp_msg_0.radius = 0.309012220513;
    msg.reference.set(tmp_msg_0);
    msg.state = 199U;
    msg.proximity = 120U;

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
    msg.setTimeStamp(0.323044510548);
    msg.setSource(4824U);
    msg.setSourceEntity(177U);
    msg.setDestination(15399U);
    msg.setDestinationEntity(40U);
    msg.control_src = 31843U;
    msg.control_ent = 223U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 173U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.946305871889;
    tmp_tmp_msg_0_0.speed_units = 129U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.879826745738;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.661384842364;
    tmp_msg_0.lon = 0.457363540072;
    tmp_msg_0.radius = 0.703879515862;
    msg.reference.set(tmp_msg_0);
    msg.state = 226U;
    msg.proximity = 13U;

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
    msg.setTimeStamp(0.744475707909);
    msg.setSource(48592U);
    msg.setSourceEntity(95U);
    msg.setDestination(63344U);
    msg.setDestinationEntity(133U);
    msg.ax_cmd = 0.757437830181;
    msg.ay_cmd = 0.385245638277;
    msg.az_cmd = 0.165249098523;
    msg.ax_des = 0.66316234735;
    msg.ay_des = 0.87029435486;
    msg.az_des = 0.269810834279;
    msg.virt_err_x = 0.733838230045;
    msg.virt_err_y = 0.457067103392;
    msg.virt_err_z = 0.236028583939;
    msg.surf_fdbk_x = 0.706055165635;
    msg.surf_fdbk_y = 0.329827907111;
    msg.surf_fdbk_z = 0.533763049964;
    msg.surf_unkn_x = 0.0983749946864;
    msg.surf_unkn_y = 0.0938726816953;
    msg.surf_unkn_z = 0.934687509898;
    msg.ss_x = 0.66706430643;
    msg.ss_y = 0.195626877027;
    msg.ss_z = 0.260697095487;

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
    msg.setTimeStamp(0.125476248106);
    msg.setSource(20677U);
    msg.setSourceEntity(185U);
    msg.setDestination(20609U);
    msg.setDestinationEntity(154U);
    msg.ax_cmd = 0.872423547088;
    msg.ay_cmd = 0.260204752424;
    msg.az_cmd = 0.65802258829;
    msg.ax_des = 0.10057888115;
    msg.ay_des = 0.60871132336;
    msg.az_des = 0.125338062928;
    msg.virt_err_x = 0.980117050717;
    msg.virt_err_y = 0.783271119155;
    msg.virt_err_z = 0.886099432394;
    msg.surf_fdbk_x = 0.0312179627714;
    msg.surf_fdbk_y = 0.140445879115;
    msg.surf_fdbk_z = 0.0326165474515;
    msg.surf_unkn_x = 0.840846711396;
    msg.surf_unkn_y = 0.0260773565063;
    msg.surf_unkn_z = 0.528062774896;
    msg.ss_x = 0.398035758921;
    msg.ss_y = 0.497553738113;
    msg.ss_z = 0.902909279158;

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
    msg.setTimeStamp(0.79404357476);
    msg.setSource(6697U);
    msg.setSourceEntity(239U);
    msg.setDestination(40293U);
    msg.setDestinationEntity(159U);
    msg.ax_cmd = 0.0716500514607;
    msg.ay_cmd = 0.512287712179;
    msg.az_cmd = 0.726380083092;
    msg.ax_des = 0.994941400863;
    msg.ay_des = 0.857483007283;
    msg.az_des = 0.607310758184;
    msg.virt_err_x = 0.217290920972;
    msg.virt_err_y = 0.780506616836;
    msg.virt_err_z = 0.267517926659;
    msg.surf_fdbk_x = 0.00583990804632;
    msg.surf_fdbk_y = 0.81826726849;
    msg.surf_fdbk_z = 0.233525502275;
    msg.surf_unkn_x = 0.0434331556756;
    msg.surf_unkn_y = 0.984696921385;
    msg.surf_unkn_z = 0.238987200028;
    msg.ss_x = 0.42179557236;
    msg.ss_y = 0.178434926333;
    msg.ss_z = 0.650560043844;

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
    msg.setTimeStamp(0.365091032097);
    msg.setSource(4239U);
    msg.setSourceEntity(164U);
    msg.setDestination(16928U);
    msg.setDestinationEntity(118U);
    msg.s_id.assign("BNHNRJSAYRSXCOPNXLBZOQBXCZRHLDHMVXMRUDHKLFLOUDEPZYBDWYGAGKXJFBEBGMDXWGUNDJPPEFZMAHIGIROVTEZZFPPEQQWAQAOYSWVUYOJLCFETYVHFIAOKBUKULKZJOLADRCNXXORTTVVEZIEWSVPZNWAGRBS");
    msg.dist = 0.933131861902;
    msg.err = 0.398689011582;
    msg.ctrl_imp = 0.950417755189;
    msg.rel_dir_x = 0.424477905133;
    msg.rel_dir_y = 0.620116008992;
    msg.rel_dir_z = 0.0494422833227;
    msg.err_x = 0.785878809198;
    msg.err_y = 0.380764967783;
    msg.err_z = 0.0265329766887;
    msg.rf_err_x = 0.971798584316;
    msg.rf_err_y = 0.16305241861;
    msg.rf_err_z = 0.423056020573;
    msg.rf_err_vx = 0.996558534396;
    msg.rf_err_vy = 0.687878812934;
    msg.rf_err_vz = 0.839921632145;
    msg.ss_x = 0.487420022448;
    msg.ss_y = 0.878265245257;
    msg.ss_z = 0.174855809278;
    msg.virt_err_x = 0.623559821893;
    msg.virt_err_y = 0.934602500722;
    msg.virt_err_z = 0.710001957395;

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
    msg.setTimeStamp(0.700374516717);
    msg.setSource(6561U);
    msg.setSourceEntity(110U);
    msg.setDestination(13872U);
    msg.setDestinationEntity(137U);
    msg.s_id.assign("QXFHNRELPVBOHGWBBYSMTFET");
    msg.dist = 0.391086801605;
    msg.err = 0.192479187491;
    msg.ctrl_imp = 0.318053191418;
    msg.rel_dir_x = 0.526050473764;
    msg.rel_dir_y = 0.48060189979;
    msg.rel_dir_z = 0.379188637387;
    msg.err_x = 0.813047463589;
    msg.err_y = 0.595904348816;
    msg.err_z = 0.0861091434339;
    msg.rf_err_x = 0.749815532503;
    msg.rf_err_y = 0.972017975799;
    msg.rf_err_z = 0.737051967235;
    msg.rf_err_vx = 0.0715790375327;
    msg.rf_err_vy = 0.936817696013;
    msg.rf_err_vz = 0.72273791803;
    msg.ss_x = 0.114366135012;
    msg.ss_y = 0.504029030537;
    msg.ss_z = 0.610325714164;
    msg.virt_err_x = 0.864140614797;
    msg.virt_err_y = 0.702023422397;
    msg.virt_err_z = 0.315946402499;

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
    msg.setTimeStamp(0.211047478745);
    msg.setSource(236U);
    msg.setSourceEntity(36U);
    msg.setDestination(54442U);
    msg.setDestinationEntity(85U);
    msg.s_id.assign("WKKXYBDUVOMHHWQZRNPHEYSFVYFJPGSGYKYSILGRVOAUZTC");
    msg.dist = 0.322114385739;
    msg.err = 0.980537370242;
    msg.ctrl_imp = 0.480262218975;
    msg.rel_dir_x = 0.671025918703;
    msg.rel_dir_y = 0.045902037542;
    msg.rel_dir_z = 0.490710921581;
    msg.err_x = 0.455632978704;
    msg.err_y = 0.753034372445;
    msg.err_z = 0.463947050375;
    msg.rf_err_x = 0.0139611620236;
    msg.rf_err_y = 0.00275781726038;
    msg.rf_err_z = 0.565991631908;
    msg.rf_err_vx = 0.144138984928;
    msg.rf_err_vy = 0.474675709139;
    msg.rf_err_vz = 0.918428791653;
    msg.ss_x = 0.729302465478;
    msg.ss_y = 0.610977937462;
    msg.ss_z = 0.789400687138;
    msg.virt_err_x = 0.825653389684;
    msg.virt_err_y = 0.981188558624;
    msg.virt_err_z = 0.960604803731;

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
    msg.setTimeStamp(0.719424236423);
    msg.setSource(2154U);
    msg.setSourceEntity(139U);
    msg.setDestination(21694U);
    msg.setDestinationEntity(246U);
    msg.timeout = 48848U;
    msg.rpm = 0.582159543761;
    msg.direction = 53U;
    msg.custom.assign("CRZVWRUUOTGVYXMROYSQLPGTSQRHPILFEVODOKGKXQTHJMPTKEJXRSXBOIJDVPEDCWKASHBGYAROSTWLRMYSUCHZETIVUTVNNMCFBGKJKPKHGFAYLZNIDAGJICQNNVZIILWRDGBXFNFLANTNDZCBFXX");

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
    msg.setTimeStamp(0.0271012471794);
    msg.setSource(29463U);
    msg.setSourceEntity(28U);
    msg.setDestination(21119U);
    msg.setDestinationEntity(45U);
    msg.timeout = 58056U;
    msg.rpm = 0.371635252854;
    msg.direction = 67U;
    msg.custom.assign("TYIBHQBUHFFPVZDKGJYNBENMWRBMKWNCNJSNHFIXWXJQETVGZTAXLL");

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
    msg.setTimeStamp(0.896285286334);
    msg.setSource(42444U);
    msg.setSourceEntity(143U);
    msg.setDestination(63311U);
    msg.setDestinationEntity(162U);
    msg.timeout = 9525U;
    msg.rpm = 0.77752438823;
    msg.direction = 242U;
    msg.custom.assign("MRHUCGJCPRSKJDXPXTVIUHPRWVMBAYPTJ");

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
    msg.setTimeStamp(0.0760036967432);
    msg.setSource(25597U);
    msg.setSourceEntity(132U);
    msg.setDestination(17150U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("GVIFQZNDFNBHERSMUGDOSLKFLWMETVOQPIQSFTNSYCFBCZNJKAPCKPJITANHCAHVOXXKFLRFRQAOKOMUEOSGOGAWYJYXNYNTAXXPWRGMBYUUQNHJVPLZDJLWCRHUECDUIKXIPSMRXWGGNXEBXDGRLGABHTMSVWCFAIOVQKWEVSDTVJRLBBYYUHEBHWKQUBLLDHKPUB");
    msg.type = 79U;
    msg.op = 128U;
    msg.group_name.assign("HRLALURQEAYLEYRPQUHPAYTCOCAACZDMXUXBEBBHMJLNWBQYDSCZGWKVJABMEMOXCR");
    msg.plan_id.assign("DKIKJFTSYIJTQFOMOQRNYPBVXLVICMASGUBAOHINLQKJRUDBXZRHVYGTUDLEMPDFCXAGQMWSANMJPWDLUIHHOEOIBLDKIAFGSZUUXTRBINJSLLRXSXFACTHRQUNRUNXYBWXEDOHECVNPKGGLBZBVZFWGMKAYWECEVKTGHVNLTEWHPWCWJCVPUAHTAJTQAFEUXYZTSKM");
    msg.description.assign("EUKVQKJRHILUJXABRWPMTWFSTJDEHDAQLRZGTVQNCJZ");
    msg.reference_frame = 64U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15202U;
    tmp_msg_0.off_x = 0.355686833197;
    tmp_msg_0.off_y = 0.0911776928423;
    tmp_msg_0.off_z = 0.619530347457;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.692327331716;
    msg.leader_speed_min = 0.428870203056;
    msg.leader_speed_max = 0.988502655172;
    msg.leader_alt_min = 0.463074682593;
    msg.leader_alt_max = 0.875578406896;
    msg.pos_sim_err_lim = 0.0847723440499;
    msg.pos_sim_err_wrn = 0.477206160605;
    msg.pos_sim_err_timeout = 13908U;
    msg.converg_max = 0.965480879328;
    msg.converg_timeout = 4873U;
    msg.comms_timeout = 56687U;
    msg.turb_lim = 0.634124770135;
    msg.custom.assign("TPCKUWIDXJYAZVOTBIFSGGSAPEAHWXGPAZBCKGONPPIVTHWCAVNMNEHOUXS");

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
    msg.setTimeStamp(0.945937628405);
    msg.setSource(14617U);
    msg.setSourceEntity(94U);
    msg.setDestination(21777U);
    msg.setDestinationEntity(115U);
    msg.formation_name.assign("ZWMNROZBKINXLYMZOHTKWYYKEJNASKQSOWTKLMBXJFDCJFEPUOVIW");
    msg.type = 116U;
    msg.op = 221U;
    msg.group_name.assign("IYVAULSVKBXDDWNPUBDJUPEQMCGSCXPEVTFHFODRUJVIYGVCCNYPYTIJXSMLKAKNXIYWSOJHQGDRUXRJAZLBLF");
    msg.plan_id.assign("CDBHKWFTQQEGEYNXETRGZJOKFDCUKNSEYJSEWSKRZRYZJYNRXIOGHZIDVUVFWGNCLMJMDLHOEXUPMVDWIBRLCCYYTSAESIYXHARDWXFWMLOFPBKVHFAPABYMABVQLPDQVTIELTLJBMNVMUNBKZYJOVPZCXGQFVZLHUCHTNIJCHJPIIFWROXYMMONZZOWAJTWPFKTVDKGHUQOQKOSLSFEAP");
    msg.description.assign("GRKQWZVVLSWBNMDWLETNXCQMOTZWYVMUAWLRGOGBRECJHJIEBOPBCAMBOQVYSFDAMGIATTXMSFBSJZLNERKSFCYIYBSLQRHDVKJFXQUPUFEIJPAPXLXCTMILYMPRUZRIDXULXKDTQTHFUOHXDQHJJFEKPNJISTNYJYPYPLVBEXGOWNRCCOOIGJVSSGKWAUBAKKACZOVGHCIZXWMICKOHLNUEFUFSZPQHADVKHNNYZG");
    msg.reference_frame = 200U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25243U;
    tmp_msg_0.off_x = 0.176214180062;
    tmp_msg_0.off_y = 0.828813580124;
    tmp_msg_0.off_z = 0.884551075229;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.913295785536;
    msg.leader_speed_min = 0.405050574341;
    msg.leader_speed_max = 0.384504321086;
    msg.leader_alt_min = 0.613237501509;
    msg.leader_alt_max = 0.699601559891;
    msg.pos_sim_err_lim = 0.504871773767;
    msg.pos_sim_err_wrn = 0.482023345383;
    msg.pos_sim_err_timeout = 36290U;
    msg.converg_max = 0.346858810216;
    msg.converg_timeout = 21900U;
    msg.comms_timeout = 33836U;
    msg.turb_lim = 0.981972215557;
    msg.custom.assign("EQCHFSUZOPNIIBWETKRYDRISOACJBWNUYNMQMRALZYUYUZMBEKMNCVQXNVHNQHIRCPJYAQEVJTRTKEHAADHXEQCFDJWPTVQYFZXJSTZUGBIFTOBPZXGLJGOBGETYIKXZPXGURNPDGLNWLAAJFXVRBOHGJXA");

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
    msg.setTimeStamp(0.180018906584);
    msg.setSource(62186U);
    msg.setSourceEntity(123U);
    msg.setDestination(64413U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("YEEDFKPFMAHIRSNXBVETDIPNOGXXFQIRTGKPOYEAMBWLKN");
    msg.type = 131U;
    msg.op = 104U;
    msg.group_name.assign("BDWWFBFINPQNXUIDZUBAOAEPDWRYJVJFOYTREMWHVOSCBYHNPRJAPDZUEUKQVNAJQHNASIPXIBMYRMFMCRSDTPZSHVTNBTEXHFQMBUVKJWFKVHVBXLGISWOJUYQEPJUKVLIEHYZUHXWGFRGI");
    msg.plan_id.assign("OYZIDFJHEFADVCRVOYHLWMZQQNWQTIIAGWPATCUHAXUROYHSQMUGZOLTSVHRRTGDFOWQ");
    msg.description.assign("LOTGBMZSHC");
    msg.reference_frame = 94U;
    msg.leader_bank_lim = 0.490481684118;
    msg.leader_speed_min = 0.0213603768639;
    msg.leader_speed_max = 0.123993422597;
    msg.leader_alt_min = 0.0698433013926;
    msg.leader_alt_max = 0.118320772051;
    msg.pos_sim_err_lim = 0.500147274841;
    msg.pos_sim_err_wrn = 0.853465928854;
    msg.pos_sim_err_timeout = 32683U;
    msg.converg_max = 0.550675292036;
    msg.converg_timeout = 23117U;
    msg.comms_timeout = 45229U;
    msg.turb_lim = 0.271564180131;
    msg.custom.assign("IFJWNLYNCLVPGUJXVKVSMXCMDYBQAKEENCEXADYRRLACNWHELFPDZLUNMNRKUKAKGIGCZRMZNLTIGGDIBCJSPWXQQNAFXTON");

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
    msg.setTimeStamp(0.635629574109);
    msg.setSource(7302U);
    msg.setSourceEntity(152U);
    msg.setDestination(42280U);
    msg.setDestinationEntity(84U);
    msg.timeout = 39080U;
    msg.lat = 0.0706233256971;
    msg.lon = 0.456268442262;
    msg.z = 0.126033931585;
    msg.z_units = 65U;
    msg.speed = 0.377819193609;
    msg.speed_units = 245U;
    msg.custom.assign("YWYARPCTEHTLLXRRZWXUBXOIBDHBMMHPRQQJZSKPLPGR");

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
    msg.setTimeStamp(0.918792204784);
    msg.setSource(1551U);
    msg.setSourceEntity(250U);
    msg.setDestination(28614U);
    msg.setDestinationEntity(101U);
    msg.timeout = 44869U;
    msg.lat = 0.726686322722;
    msg.lon = 0.557858267589;
    msg.z = 0.812669183433;
    msg.z_units = 130U;
    msg.speed = 0.60552477828;
    msg.speed_units = 231U;
    msg.custom.assign("FWKNLSGELNIWVXZVDHARMETAGKQIPECMCCIQYBWLYXYMCUZWEGCDBYBVPHZPWQSQMGMJCVYHNHXLDKRTKMEGROFKHTYULHFJUUSRIHXMYDRXKPVMFRNNCVLJGSAQZKPYORSJUZPOQ");

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
    msg.setTimeStamp(0.261478023109);
    msg.setSource(53678U);
    msg.setSourceEntity(102U);
    msg.setDestination(17327U);
    msg.setDestinationEntity(177U);
    msg.timeout = 60466U;
    msg.lat = 0.386404933279;
    msg.lon = 0.757830507721;
    msg.z = 0.294819300881;
    msg.z_units = 196U;
    msg.speed = 0.806436880172;
    msg.speed_units = 196U;
    msg.custom.assign("DRFQINRQMCAAFALZPINHYHOIZFJUOHBBCBIYYEMTWMVYDFMXVRGUGCVSUEOWRTEIDUMFOWFVOGHCPYDOXCWVNSUUHSYOLHTFKZTKWPLZRSGDWNIMHTPTKOJEEPGTGDQKQBWZBALLXXBBK");

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
    msg.setTimeStamp(0.603601374595);
    msg.setSource(49983U);
    msg.setSourceEntity(158U);
    msg.setDestination(61374U);
    msg.setDestinationEntity(141U);
    msg.timeout = 47513U;
    msg.lat = 0.674448037151;
    msg.lon = 0.140951246969;
    msg.z = 0.822375179159;
    msg.z_units = 68U;
    msg.speed = 0.752251543296;
    msg.speed_units = 9U;
    msg.custom.assign("NSNOLUUHRSLMOFUWFTOIRJYRWBCMNQRQRQBXSPOTPADFCDEJGLXDTJDOMGKMQIMDZCOWYJTNWKWQMYXOPWPSFVPAGHNCYZR");

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
    msg.setTimeStamp(0.290732075529);
    msg.setSource(38574U);
    msg.setSourceEntity(40U);
    msg.setDestination(16054U);
    msg.setDestinationEntity(180U);
    msg.timeout = 22688U;
    msg.lat = 0.871801168807;
    msg.lon = 0.731798390283;
    msg.z = 0.980528147592;
    msg.z_units = 41U;
    msg.speed = 0.462405151286;
    msg.speed_units = 107U;
    msg.custom.assign("UOXEDZJWXWUBJFLQBLFASNMMXIQDLSTISSYUMFKCGDZDLILSUGWMWVAEJNVQFTCCOWZBNVTTPKEQJHMYXSINEHNJBOQNMHMGVKU");

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
    msg.setTimeStamp(0.0834279664482);
    msg.setSource(34712U);
    msg.setSourceEntity(73U);
    msg.setDestination(35873U);
    msg.setDestinationEntity(244U);
    msg.timeout = 36691U;
    msg.lat = 0.608398130599;
    msg.lon = 0.64069783883;
    msg.z = 0.111249225671;
    msg.z_units = 90U;
    msg.speed = 0.221005160129;
    msg.speed_units = 162U;
    msg.custom.assign("OERIICMJCOKBPXCDOSTLWJVAYHBTENSUCKEYEKURXKVBCBMGJENHJY");

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
    msg.setTimeStamp(0.993320393755);
    msg.setSource(50062U);
    msg.setSourceEntity(126U);
    msg.setDestination(46289U);
    msg.setDestinationEntity(98U);
    msg.arrival_time = 0.627025583298;
    msg.lat = 0.193249464325;
    msg.lon = 0.691816442989;
    msg.z = 0.998939948359;
    msg.z_units = 117U;
    msg.travel_z = 0.00255160102148;
    msg.travel_z_units = 29U;
    msg.delayed = 171U;

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
    msg.setTimeStamp(0.224570847817);
    msg.setSource(50422U);
    msg.setSourceEntity(218U);
    msg.setDestination(37238U);
    msg.setDestinationEntity(26U);
    msg.arrival_time = 0.397280363004;
    msg.lat = 0.924362761968;
    msg.lon = 0.893130993321;
    msg.z = 0.915846507997;
    msg.z_units = 153U;
    msg.travel_z = 0.381650265912;
    msg.travel_z_units = 113U;
    msg.delayed = 18U;

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
    msg.setTimeStamp(0.962902643989);
    msg.setSource(49306U);
    msg.setSourceEntity(157U);
    msg.setDestination(12744U);
    msg.setDestinationEntity(17U);
    msg.arrival_time = 0.417192671056;
    msg.lat = 0.815822071893;
    msg.lon = 0.22175592222;
    msg.z = 0.236107799274;
    msg.z_units = 55U;
    msg.travel_z = 0.857381663458;
    msg.travel_z_units = 208U;
    msg.delayed = 119U;

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
    msg.setTimeStamp(0.41114165168);
    msg.setSource(61647U);
    msg.setSourceEntity(34U);
    msg.setDestination(60619U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.0425394770397;
    msg.lon = 0.411945671389;
    msg.z = 0.0427071479785;
    msg.z_units = 202U;
    msg.speed = 0.304253762413;
    msg.speed_units = 41U;
    msg.bearing = 0.737208414314;
    msg.cross_angle = 0.244152020719;
    msg.width = 0.974486970468;
    msg.length = 0.954927724931;
    msg.coff = 62U;
    msg.angaperture = 0.99200812408;
    msg.range = 62602U;
    msg.overlap = 54U;
    msg.flags = 104U;
    msg.custom.assign("AFRGIGNCJZZSQHWYPRF");

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
    msg.setTimeStamp(0.567284969352);
    msg.setSource(59063U);
    msg.setSourceEntity(104U);
    msg.setDestination(27131U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.637507459135;
    msg.lon = 0.300047249157;
    msg.z = 0.29562446306;
    msg.z_units = 69U;
    msg.speed = 0.773768582754;
    msg.speed_units = 78U;
    msg.bearing = 0.0288190628163;
    msg.cross_angle = 0.700147839234;
    msg.width = 0.144834154652;
    msg.length = 0.375528962304;
    msg.coff = 123U;
    msg.angaperture = 0.77958496943;
    msg.range = 37305U;
    msg.overlap = 137U;
    msg.flags = 242U;
    msg.custom.assign("HBIGDUBZGSMAPYYYRBKEFMVGCHOEMSEOZCHJXMHEOXEOCEGQXPSMXNRBLVBCISPKYNSFZIRTLJRFHJPSTOJJUJNGNRLWADYCJUTZQCUQFVBEDKANGKNQUAHFJLZXWVOWNOONBDTTWOKIOBPEGJLKAGVRWFHSHVJKIBYLMXWUPRYQPDAQVBMSDLNZKXIAQHUZEFUDVPTIWFXSWPNLMCZUKRCIYMFTXASIVWVTHZEZDQTAQPYMCQGLIRKDX");

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
    msg.setTimeStamp(0.390252767777);
    msg.setSource(27079U);
    msg.setSourceEntity(174U);
    msg.setDestination(47514U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.289745037705;
    msg.lon = 0.46133404636;
    msg.z = 0.876728949739;
    msg.z_units = 239U;
    msg.speed = 0.996248933541;
    msg.speed_units = 158U;
    msg.bearing = 0.63325591856;
    msg.cross_angle = 0.969924747421;
    msg.width = 0.312591709891;
    msg.length = 0.796858806237;
    msg.coff = 151U;
    msg.angaperture = 0.099839163051;
    msg.range = 53707U;
    msg.overlap = 90U;
    msg.flags = 213U;
    msg.custom.assign("HHHGBWTHUJATCZJSMJWZARPGHMILFNHHNRJKLMZVVMDEIYGOJEUKVXPJJLYYOIPKQABLGFOSDRQHSQISTAALCZYKNVMSBAXQJBODKAWRUSNMLTWZEYUVBQXXODTURPBVYOFWYGAXBJBTBDWXSPONIDPENWNCKLQHDSFCWVEMTVMYGMUNNKQZFWDYVEXXZPXPHGYFLPTCICFIPIQTURGSXMQGCUEOZENALKCLDBOGRECFTOERKIUKCRRQAVJ");

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
    msg.setTimeStamp(0.720427416328);
    msg.setSource(49349U);
    msg.setSourceEntity(131U);
    msg.setDestination(54384U);
    msg.setDestinationEntity(229U);
    msg.timeout = 63487U;
    msg.lat = 0.415474893194;
    msg.lon = 0.390183899737;
    msg.z = 0.649930509619;
    msg.z_units = 41U;
    msg.speed = 0.291766379507;
    msg.speed_units = 132U;
    msg.syringe0 = 4U;
    msg.syringe1 = 22U;
    msg.syringe2 = 173U;
    msg.custom.assign("UPVNTPZSKNEEKTLIBGRZNVUBJAPANWQXHJGKKLWYNYMMERTRXDAWYWLLMHODXFBXXCGCATMJVFMCSXZMFOEEUTGUAGCXTJSPEOLGTXJIKOBSLSWIBGKWYSANTOCBQMHFFZHVZMUCWCQPQULAPTDMRIACIDZEYXQNWYIAUIDYFQFOOVYCKEHHQGSXZSVDZORZMPRLLQVSDVBOSUQVEJGRINPWNIJGBQRPVFYHHRDKFDKYLJ");

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
    msg.setTimeStamp(0.536065895138);
    msg.setSource(42937U);
    msg.setSourceEntity(114U);
    msg.setDestination(35252U);
    msg.setDestinationEntity(139U);
    msg.timeout = 64909U;
    msg.lat = 0.425624040666;
    msg.lon = 0.0302051614191;
    msg.z = 0.899111227923;
    msg.z_units = 231U;
    msg.speed = 0.320994951979;
    msg.speed_units = 118U;
    msg.syringe0 = 115U;
    msg.syringe1 = 240U;
    msg.syringe2 = 67U;
    msg.custom.assign("ZOLERYHIFOOESBWCMXNIMCDJRFEIVVDZCRDWYQEAFHSQHCMJKAVESEZFYALLYIMYZPMYG");

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
    msg.setTimeStamp(0.0960640421639);
    msg.setSource(8845U);
    msg.setSourceEntity(69U);
    msg.setDestination(28298U);
    msg.setDestinationEntity(142U);
    msg.timeout = 31623U;
    msg.lat = 0.182060206377;
    msg.lon = 0.082131750343;
    msg.z = 0.53754032258;
    msg.z_units = 144U;
    msg.speed = 0.0626429344675;
    msg.speed_units = 7U;
    msg.syringe0 = 166U;
    msg.syringe1 = 164U;
    msg.syringe2 = 76U;
    msg.custom.assign("JDSJEAHMPCUTESTAFPXLMAZFNJGMHVGDWPKYHPXDCBVYVWSUZVGSEDDXRQXIULEHWQGGCWXUPQOPHQXJUSCOOFFXKBGKBOWORIMCCHTEYAICSBLNEFIUNZVQNELISNUQSOIPTJQTRHDOLLYERWLQRAHBYKJGDHKU");

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
    msg.setTimeStamp(0.917151247019);
    msg.setSource(62488U);
    msg.setSourceEntity(106U);
    msg.setDestination(36074U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.892817820891);
    msg.setSource(50463U);
    msg.setSourceEntity(132U);
    msg.setDestination(49510U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.269817376813);
    msg.setSource(9555U);
    msg.setSourceEntity(228U);
    msg.setDestination(46665U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.849398112476);
    msg.setSource(32087U);
    msg.setSourceEntity(7U);
    msg.setDestination(12570U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.910358435617;
    msg.lon = 0.670173033645;
    msg.z = 0.611113590365;
    msg.z_units = 67U;
    msg.speed = 0.497789399639;
    msg.speed_units = 101U;
    msg.takeoff_pitch = 0.943177120715;
    msg.custom.assign("FIKPTFVFKIKMYPYDTOWBOVJXPZSLVMFHUOXIWZLIJLZHIKNBKRXNEFBGBXMQXJEZDBSVENMJSUGMBFWOYZMFVYWXPSUCRJVOWHRDCZPQELOHRFUCQORHENXNIBYSLEWRTWXYNYZGMGGTMCCCTDVTTFKAMSQXKUIVLZANJFQDRLCAU");

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
    msg.setTimeStamp(0.299731328883);
    msg.setSource(568U);
    msg.setSourceEntity(205U);
    msg.setDestination(18749U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.324995088466;
    msg.lon = 0.332582190029;
    msg.z = 0.643758023864;
    msg.z_units = 225U;
    msg.speed = 0.156735282231;
    msg.speed_units = 247U;
    msg.takeoff_pitch = 0.236498022374;
    msg.custom.assign("OMQZWSFWORHKYGGAZPXHRTEIXDEYLOKPFZLNQUPPHKBYLJYICNACOPRMZLHWFFKDCGZMDVKGLNQGGXDHPDUCXBLIXIUNGREUDLHURSBSKSUZSFBAALCMSCWZVVIOJIGQZ");

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
    msg.setTimeStamp(0.000810225436266);
    msg.setSource(24062U);
    msg.setSourceEntity(213U);
    msg.setDestination(57803U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.683112908743;
    msg.lon = 0.382450146461;
    msg.z = 0.313590292857;
    msg.z_units = 228U;
    msg.speed = 0.0133948355003;
    msg.speed_units = 72U;
    msg.takeoff_pitch = 0.442140247321;
    msg.custom.assign("KEZYDMAFVWXUOVUTYWVHGHRGLBLJKVWXEHZOSSAMEIYCBLIEGL");

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
    msg.setTimeStamp(0.204367357723);
    msg.setSource(24421U);
    msg.setSourceEntity(34U);
    msg.setDestination(25410U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.708029558217;
    msg.lon = 0.0719325504385;
    msg.z = 0.0187886177452;
    msg.z_units = 46U;
    msg.speed = 0.811297571188;
    msg.speed_units = 107U;
    msg.abort_z = 0.750901716036;
    msg.bearing = 0.0205151075761;
    msg.glide_slope = 10U;
    msg.glide_slope_alt = 0.182321765793;
    msg.custom.assign("JKEWBPLUGCDRZSLZOIHBD");

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
    msg.setTimeStamp(0.412176412148);
    msg.setSource(33242U);
    msg.setSourceEntity(207U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.19416580199;
    msg.lon = 0.161179643047;
    msg.z = 0.411043353456;
    msg.z_units = 41U;
    msg.speed = 0.7694941714;
    msg.speed_units = 129U;
    msg.abort_z = 0.986043575724;
    msg.bearing = 0.319893646943;
    msg.glide_slope = 165U;
    msg.glide_slope_alt = 0.998071880889;
    msg.custom.assign("AWBCCMNBPBHROQDQZQDJICFAPSXZAQGEZYNNQXZTNMWPPCCDIURTDHFRKBITWEEGRBFMONPFVFLYVUELVWECTFSVLIIOWUJEROJHNYADBSQUJBNLTYHTVBJYRLDFZJAZHDGONUOYHPJTYNPKKCHJAOXLEIWUVTKFWGQIGJRVSDDSWSBZMYAGGUCPUXKXSXOKTRUKSHJPDSQYLLRIZXIGRKEMVKSZQEUTWLLYPIWOHXVZMMAGEGB");

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
    msg.setTimeStamp(0.562605818683);
    msg.setSource(56439U);
    msg.setSourceEntity(250U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.0514800372237;
    msg.lon = 0.514331602957;
    msg.z = 0.0591101205418;
    msg.z_units = 206U;
    msg.speed = 0.989750441394;
    msg.speed_units = 17U;
    msg.abort_z = 0.277719561609;
    msg.bearing = 0.458801152231;
    msg.glide_slope = 140U;
    msg.glide_slope_alt = 0.0730808245958;
    msg.custom.assign("QJNDIVVMACNZUUISMBOMKDEMBULYKIRTMJGDZAXYOFJBYKIEZTCGUGCSLTRDVQUMGQSHWDXQZMUHGFXXALDYNTYUWCEHABXSKVXOPJZB");

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
    msg.setTimeStamp(0.552905865641);
    msg.setSource(21627U);
    msg.setSourceEntity(52U);
    msg.setDestination(50796U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.200220671471;
    msg.lon = 0.334130916498;
    msg.speed = 0.0440186520876;
    msg.speed_units = 187U;
    msg.limits = 56U;
    msg.max_depth = 0.908446698693;
    msg.min_alt = 0.933806482988;
    msg.time_limit = 0.727132162786;
    msg.controller.assign("QXQRKYICISEYCDHOWJHWCJYXJSWHMW");
    msg.custom.assign("PRGWBDWIRQYVWDAQFASBBAWZKKGFYVPSCXVWLBXQNIDDSAFPIJLRVQIALIQWZFZFOOZHULLYANUZATCNSEHKXSJQSCTMKQNRLFDPPKHHUTUGSSIIEQOPVCPMDCTEBUWTHZEUCIGREEIVFWFBHTCHMQEKJCETXJYNRXZBYKJUSMFLXCGUJVRXTMMYNYYOTJGZDGVAPORWVCMPJDQLZNAGZELOJIPREUDUYYMF");

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
    msg.setTimeStamp(0.249224109598);
    msg.setSource(44575U);
    msg.setSourceEntity(40U);
    msg.setDestination(33051U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.0500985961167;
    msg.lon = 0.387168304539;
    msg.speed = 0.255861858943;
    msg.speed_units = 141U;
    msg.limits = 110U;
    msg.max_depth = 0.702554256943;
    msg.min_alt = 0.519764136526;
    msg.time_limit = 0.836404381576;
    msg.controller.assign("XAMTFYQNERSNXNRQTIQLJMVZOCUYIRGPWUVLF");
    msg.custom.assign("EOWUCMONQGFLTHZDEGQYLKKQBFBZKQGHORXKYRYYTVOOBWMJGTBROADJIQNLHGZSIQVFUZLVUEZERLDPYVGMOMWMSCEUDGTPOPAURVVFENGWVPCBEBQWRCJMUEAKWCDTSAYIXBNQUSBYHZJHIDISWROAPLVFJVKQQBHCSDAKXWJXNFEXIDCGZCDNIYKAMFZNZIUTWVLFRBHTIMUYALTYHHZXTMHCPGMRNFCJJLSRPTLXKJFPEAPNAIXNXPDSW");

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
    msg.setTimeStamp(0.699156486561);
    msg.setSource(55789U);
    msg.setSourceEntity(207U);
    msg.setDestination(45827U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.76358758655;
    msg.lon = 0.0387848940589;
    msg.speed = 0.296743366346;
    msg.speed_units = 248U;
    msg.limits = 83U;
    msg.max_depth = 0.271472118985;
    msg.min_alt = 0.24988865612;
    msg.time_limit = 0.104753044901;
    msg.controller.assign("IBLAXKJCFVIMPOUAGYIUKHWX");
    msg.custom.assign("LBACUUJRHLIBADFDYIJWLVYDWKGINGZSDTOTADKJCQTPAUKHQOROFPFJIGZKOSSNCSZEOWAMQLKVNTDRWTVVOWBMYURLQERQHMWXXXYXZUMURMZYBYPGVSHTHAIWSVRWKEXBEVDFPIHJCGLISCDQVFGYKGTUEVBMPA");

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
    msg.setTimeStamp(0.917170436582);
    msg.setSource(11708U);
    msg.setSourceEntity(244U);
    msg.setDestination(39781U);
    msg.setDestinationEntity(80U);
    msg.target.assign("UYVFTANSCIOVZKMTVUQPQXXVEBEGOXJOJXUZKFCVAFHMUUFJEYDTRPSZFGYJAWQNZRMDSASWCEIYCHDJWFMPLENMTQUUGXZGRB");
    msg.max_speed = 0.910912882784;
    msg.speed_units = 8U;
    msg.lat = 0.161821074971;
    msg.lon = 0.827714769175;
    msg.z = 0.216594476391;
    msg.z_units = 246U;
    msg.custom.assign("VPVFJBAXONKFCOHSTIHEQOJXAHTLKZCHOIG");

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
    msg.setTimeStamp(0.844888203226);
    msg.setSource(934U);
    msg.setSourceEntity(19U);
    msg.setDestination(22189U);
    msg.setDestinationEntity(237U);
    msg.target.assign("SFMISEGCDEQSAZJDWYDQBEZBCNOSCVWATNWPJRWKXLIAKBKTKXGBCIVJRHRUBDMNROHULUVHTOZYQPCMRWRBPRTZIFXAAUREVGIZSVFBCE");
    msg.max_speed = 0.173793908679;
    msg.speed_units = 24U;
    msg.lat = 0.736434597599;
    msg.lon = 0.128152576109;
    msg.z = 0.494494939586;
    msg.z_units = 175U;
    msg.custom.assign("NUXYSAIDFCJYXSZCRPBCYZPCYMORMZMKQIKMJJPLHLIPNTSQIIKAYZHHWFAJCRJXMSGRBGXSWNDNTVNRABXEOFWYKQOOAKXHUXQKPGWEPZOQWUPOGSWHFGIVTUJYALTU");

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
    msg.setTimeStamp(0.477395348163);
    msg.setSource(27616U);
    msg.setSourceEntity(145U);
    msg.setDestination(26665U);
    msg.setDestinationEntity(200U);
    msg.target.assign("UWOATOGWRTQPHSKHVKMBZWASNGIJTNYCXXEILJRWSINMRYCKZDGFGMMEOBJBOZUITJMUSLMA");
    msg.max_speed = 0.492647956597;
    msg.speed_units = 217U;
    msg.lat = 0.623322813054;
    msg.lon = 0.702954464531;
    msg.z = 0.230782669701;
    msg.z_units = 96U;
    msg.custom.assign("PEUZFXQKTKLTTAOTWUDAQLVSQTQBPNAFMXDIVNKHBAYJYDFNQILHDDAJKEXGPVNZQVK");

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
    msg.setTimeStamp(0.265418326344);
    msg.setSource(12863U);
    msg.setSourceEntity(130U);
    msg.setDestination(2535U);
    msg.setDestinationEntity(119U);
    msg.timeout = 10465U;
    msg.lat = 0.12288213243;
    msg.lon = 0.721375510868;
    msg.speed = 0.857415504056;
    msg.speed_units = 184U;
    msg.custom.assign("BLRWRARUZAFHVVIWTYUYWBUDCQUHUTNNTCZMPERKNGSYNMVDRRECLEODJLHDJKLYHOFTIWDSUILTRDSGJGWEBYAIPDNZSNNCCJOGJOLMHGVA");

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
    msg.setTimeStamp(0.863220392241);
    msg.setSource(23271U);
    msg.setSourceEntity(37U);
    msg.setDestination(64752U);
    msg.setDestinationEntity(244U);
    msg.timeout = 15110U;
    msg.lat = 0.785064883627;
    msg.lon = 0.163782971159;
    msg.speed = 0.663943458607;
    msg.speed_units = 145U;
    msg.custom.assign("YPZTVXVTFZWFDKZTJSGBUEUFBCSXBVPYZQEONOWJHPACOGADLVEWNIWKIICIKMIXFHTZWVUIOGAQJLPYARRLBHADXPOJUNKBLNVVRTSCQPUTGBCHAXNPFXMHDFZSLRTJYDQLXMQVZIDCMRAVISFBGPMDGRZZCNMW");

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
    msg.setTimeStamp(0.794038700688);
    msg.setSource(8211U);
    msg.setSourceEntity(163U);
    msg.setDestination(27006U);
    msg.setDestinationEntity(182U);
    msg.timeout = 60307U;
    msg.lat = 0.202423700013;
    msg.lon = 0.998104979506;
    msg.speed = 0.420734702361;
    msg.speed_units = 110U;
    msg.custom.assign("HJCBHXYOTNRQFOFLAWJWMOZCYBAPEKMTMQKNEIJ");

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
    msg.setTimeStamp(0.143030512158);
    msg.setSource(36303U);
    msg.setSourceEntity(58U);
    msg.setDestination(55756U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.975641547166;
    msg.lon = 0.223049022631;
    msg.z = 0.403252019408;
    msg.z_units = 174U;
    msg.radius = 0.721860354983;
    msg.duration = 51442U;
    msg.speed = 0.175061707274;
    msg.speed_units = 122U;
    msg.popup_period = 40418U;
    msg.popup_duration = 55644U;
    msg.flags = 178U;
    msg.custom.assign("TFQKVCPOZYHIHGTQK");

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
    msg.setTimeStamp(0.366979934258);
    msg.setSource(7503U);
    msg.setSourceEntity(230U);
    msg.setDestination(63987U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.567269115703;
    msg.lon = 0.812446638254;
    msg.z = 0.0409659763648;
    msg.z_units = 220U;
    msg.radius = 0.648681388625;
    msg.duration = 1581U;
    msg.speed = 0.399947997;
    msg.speed_units = 59U;
    msg.popup_period = 41835U;
    msg.popup_duration = 49471U;
    msg.flags = 231U;
    msg.custom.assign("HXRCOQXVDHKDOHEFPWLELNCUWZZNYSNTUHMKWOEQGAPJPITRJLQOCTNITWRNESQUXWGATUYBTLROBPJMXNAVGXOBJCSQXTLGOZDPGARHXDDKHWPQBHSRYADQZLLVIYGYIYMDFJPVFFI");

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
    msg.setTimeStamp(0.439860072086);
    msg.setSource(4675U);
    msg.setSourceEntity(127U);
    msg.setDestination(4020U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.091563309645;
    msg.lon = 0.63702785278;
    msg.z = 0.345532768194;
    msg.z_units = 102U;
    msg.radius = 0.028595443828;
    msg.duration = 53484U;
    msg.speed = 0.590377760178;
    msg.speed_units = 156U;
    msg.popup_period = 1574U;
    msg.popup_duration = 31741U;
    msg.flags = 172U;
    msg.custom.assign("BGYSLMYZSSMSREOTSQANRFEFHZJTVKVMPQKZSPBDUFXYUUKLVXAEZVOGQECXPSDBCAUITFFRYJLUZHZGDWFMRJWTIPNKWOBP");

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
    msg.setTimeStamp(0.745272111399);
    msg.setSource(64029U);
    msg.setSourceEntity(215U);
    msg.setDestination(18641U);
    msg.setDestinationEntity(169U);
    msg.timeout = 36776U;
    msg.lat = 0.65775723144;
    msg.lon = 0.471700607905;
    msg.z = 0.170493214975;
    msg.z_units = 79U;
    msg.speed = 0.0917108858529;
    msg.speed_units = 104U;
    msg.bearing = 0.265889414618;
    msg.width = 0.590069803131;
    msg.direction = 39U;
    msg.custom.assign("RWHUENFKIVXBUYADKRSQLLIGZLPSWWGTVGXYEERVBPJWHYXPKQZFVQRBUWQGACNJKUDSHMVWIHIZTEKSFSNYDCMDUYTVLAJJNCQQHYIATORCPIIKDRVRBMFDOQSQPEQCEMJVKCPLCFKKNBUMEGSYCLJWZKUWZMTRSUFFBZZGLXHAJOFHTJILOPXMORWBOVPJBTGYAUTAYSJPNXXOXNTEGHFQNHC");

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
    msg.setTimeStamp(0.488153317907);
    msg.setSource(45668U);
    msg.setSourceEntity(113U);
    msg.setDestination(11198U);
    msg.setDestinationEntity(201U);
    msg.timeout = 49324U;
    msg.lat = 0.650213876776;
    msg.lon = 0.744440863882;
    msg.z = 0.408195311325;
    msg.z_units = 202U;
    msg.speed = 0.225702896107;
    msg.speed_units = 221U;
    msg.bearing = 0.75612949342;
    msg.width = 0.882192935163;
    msg.direction = 222U;
    msg.custom.assign("UQCKHGQCPHETGHJECFRJXKOBESXAABFLYOPTKKHSWISGLPIB");

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
    msg.setTimeStamp(0.908033971144);
    msg.setSource(15487U);
    msg.setSourceEntity(225U);
    msg.setDestination(13284U);
    msg.setDestinationEntity(57U);
    msg.timeout = 23652U;
    msg.lat = 0.449665652175;
    msg.lon = 0.548715808835;
    msg.z = 0.203628605556;
    msg.z_units = 23U;
    msg.speed = 0.353250204598;
    msg.speed_units = 56U;
    msg.bearing = 0.783791227726;
    msg.width = 0.996713967163;
    msg.direction = 163U;
    msg.custom.assign("WREJLCVZMKBRPEQGOAWCDXZJSGSAQFJXMWCFBYFIOANKDNQHMEGQQHXXW");

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
    msg.setTimeStamp(0.735586043696);
    msg.setSource(1258U);
    msg.setSourceEntity(120U);
    msg.setDestination(33912U);
    msg.setDestinationEntity(251U);
    msg.op_mode = 63U;
    msg.error_count = 158U;
    msg.error_ents.assign("HIVXEKZKCBVRYPJKCCFOFAZOURCQPNXHTFZSRGXSDAELOJHTFVBKSIOTQSGIDJQAFLHYQDIBWHZTDH");
    msg.maneuver_type = 42016U;
    msg.maneuver_stime = 0.718376801378;
    msg.maneuver_eta = 53444U;
    msg.control_loops = 3403360276U;
    msg.flags = 115U;
    msg.last_error.assign("AXMKPNSKZZGEMWKPWKDUXEYTMQGLVJDZGEFWYRBIXPTSLACNOOBWUZKIRTHVTECUESABLFNSGIHXLACOLCUFHMUDWJJDSUGIFSTLAFNVUSNIKHK");
    msg.last_error_time = 0.410512516741;

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
    msg.setTimeStamp(0.506701569761);
    msg.setSource(7157U);
    msg.setSourceEntity(16U);
    msg.setDestination(12598U);
    msg.setDestinationEntity(154U);
    msg.op_mode = 178U;
    msg.error_count = 0U;
    msg.error_ents.assign("UGEBBVVCZQVGYQKIQJGXZSNYZFLQERNWPZGEFLIIHLHLECAVGMXMAOWWUGYSOYBUCULPTBKPORDHUUHSXQEUUKJMNZBAFIIEKOCPXRDKSWZMIADTV");
    msg.maneuver_type = 31154U;
    msg.maneuver_stime = 0.819420628984;
    msg.maneuver_eta = 40339U;
    msg.control_loops = 3729018768U;
    msg.flags = 43U;
    msg.last_error.assign("AHCHWZASBNJPZPUTLSXUCJNIPOAGIXGZKJKFUSLZKXESKXAODQK");
    msg.last_error_time = 0.407569615297;

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
    msg.setTimeStamp(0.245449516121);
    msg.setSource(33743U);
    msg.setSourceEntity(165U);
    msg.setDestination(17098U);
    msg.setDestinationEntity(95U);
    msg.op_mode = 191U;
    msg.error_count = 122U;
    msg.error_ents.assign("GFHQJKCOMWCIHRSTZXEIDUJKLOGLFCCZQYXJJFVVGGJMQBYSVOLBQJNDUKSZHOXFFVCWISYMXUFULKUHBMBYYPLGUQHOMMXPKSVXPKXNYONXSIFWIEDNIICZXZVHDULPNDALTZOPCBHRHIAJSCYTPWGTRTGZAHE");
    msg.maneuver_type = 1016U;
    msg.maneuver_stime = 0.585466638679;
    msg.maneuver_eta = 41305U;
    msg.control_loops = 3891978082U;
    msg.flags = 102U;
    msg.last_error.assign("UEGTPXDWGSIUGXTZDANJZCPVPGTPCWGQHAMTZBECZZUICMYUSRJMKQIKVALHYEIHXYYJJNLICIRUFRRSFETNSUDLOLFKBDJHNWIOQZKJXQKLIHSKPBVBPJEEYTQKQXTFBAMQFAGWADRRYYOA");
    msg.last_error_time = 0.726800131254;

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
    msg.setTimeStamp(0.729235051246);
    msg.setSource(50836U);
    msg.setSourceEntity(236U);
    msg.setDestination(48600U);
    msg.setDestinationEntity(213U);
    msg.type = 131U;
    msg.request_id = 36605U;
    msg.command = 10U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 29653U;
    tmp_msg_0.lat = 0.706072659152;
    tmp_msg_0.lon = 0.298065788777;
    tmp_msg_0.z = 0.385680358254;
    tmp_msg_0.z_units = 118U;
    tmp_msg_0.speed = 0.534858084245;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.bearing = 0.164093952415;
    tmp_msg_0.width = 0.618421748707;
    tmp_msg_0.direction = 153U;
    tmp_msg_0.custom.assign("RBCUHIDAQAGDTISUZDNMCDCEICAJIXTVOSHCLKKADBNWYMFWNADANOGIFQVKROGOPOJBEMYLLPGQIRHPYJSUGWFNPYQPNZXYKGYVZHLLHNKZQAELXPXMGFZQJRAXFEDFTJERLGMQAZZNCDTRVPMXECGHYIUDROJMXRZYOSFZSHUWBTKKMVLPBUQVWSMFEBYJIHVVHIBUBWMTWJOOTBRHISELEVPKAJWTYKUWETPXSXTC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12258U;
    msg.info.assign("TZTEIQHDOFVCSOCYQLFUWBWDNLTJJATEPNUMZCOZVRRJKPVDRGOVKTMHZVJDGDYOBKANRHNZWNHZFFDWDLXPAHUSNMYKHNSQGXUKKKSXCDPVGBOASYIEVJONYBPRZYRJMGQPSCFUXGCPPFHLXWMGUIHLORGDTMABIJTTWQVAIYEAXYRMBYSRXFIFFGLAUGWBQBLLBWIOATRELNEYWLQMDU");

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
    msg.setTimeStamp(0.328664274486);
    msg.setSource(29044U);
    msg.setSourceEntity(8U);
    msg.setDestination(5389U);
    msg.setDestinationEntity(117U);
    msg.type = 9U;
    msg.request_id = 1118U;
    msg.command = 1U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 33152U;
    tmp_msg_0.lat = 0.347041385816;
    tmp_msg_0.lon = 0.256745086436;
    tmp_msg_0.z = 0.416807330548;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.amplitude = 0.400469557523;
    tmp_msg_0.pitch = 0.184211469029;
    tmp_msg_0.speed = 0.323759386862;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.custom.assign("PLGESIFUONUXDXBPWTBBSTYJRUELFGJNBGXRFASQVDKKDVWJGROMCIYJHJTVJQOWMFOIRXYZYWJVGVUXZKITMAUASRLZKHABOTCT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38003U;
    msg.info.assign("BOTWYFTFKHFJQCINKDQSBMKBUUMZDYPXPBAVSIOQRFZBCEZRWFVHZLVTZQRGWJAOWLVXCQMMYFANDO");

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
    msg.setTimeStamp(0.750955309598);
    msg.setSource(46622U);
    msg.setSourceEntity(24U);
    msg.setDestination(16809U);
    msg.setDestinationEntity(30U);
    msg.type = 54U;
    msg.request_id = 44454U;
    msg.command = 222U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 65274U;
    tmp_msg_0.lat = 0.885201606877;
    tmp_msg_0.lon = 0.754648123876;
    tmp_msg_0.z = 0.720599850437;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.speed = 0.272580260177;
    tmp_msg_0.speed_units = 5U;
    tmp_msg_0.roll = 0.170161796841;
    tmp_msg_0.pitch = 0.849024946933;
    tmp_msg_0.yaw = 0.117459368634;
    tmp_msg_0.custom.assign("TLEKAKNNSEBWGZUHHPTOPPYOGXQISWIOUFRFWLIFDGBYQIKKXTMWNXJAKQPYAEOCWVXLPHYHETSVHVGUGBOLLNBTQBDBVFWHDCYMIFXZSJWYGPATJFUUKOKRIMGK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10511U;
    msg.info.assign("NPLSSBEALZGIDNPBMKTOZVCCNTXCARTTJZSZMQAGSQAIBPGXKMLKLYFVOQAXSAXKQMFBYSOYC");

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
    msg.setTimeStamp(0.087869493887);
    msg.setSource(15314U);
    msg.setSourceEntity(232U);
    msg.setDestination(63456U);
    msg.setDestinationEntity(156U);
    msg.command = 236U;
    msg.entities.assign("RIQLUSSHQOMBFYCSIMMSTSNBCQHZQJHRJZVAFJRDVNWKKALILTCPNQAERLVZNJOWVIBPWOXCDSXTZEGYFUWFARNGJGNWKOOYXGKMBUCKKEBTYOAHMRLLYWBDBPKKWPMISGVKWEUPXQSEYEIIFVFJWDOTGIYRPMPUPQNB");

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
    msg.setTimeStamp(0.851212379664);
    msg.setSource(5897U);
    msg.setSourceEntity(26U);
    msg.setDestination(23773U);
    msg.setDestinationEntity(139U);
    msg.command = 32U;
    msg.entities.assign("TZUBGNASUAKDNYQUXCFHWVXMMGMOSRBRBWRELRDKJKEPFLPWOYGVMQPFFHFJEIZIHSGHRJSNFJAJPXLTLO");

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
    msg.setTimeStamp(0.786908103788);
    msg.setSource(58890U);
    msg.setSourceEntity(195U);
    msg.setDestination(59032U);
    msg.setDestinationEntity(223U);
    msg.command = 25U;
    msg.entities.assign("KOBUNQYCIRFRPHVJUNPDUOIJAKYJXTLHXWNGZUKXUNLLZSPSEWATRXILACOATGPCDDZSZMCBUZOBLLYFMNTKUHEQRUCVBFRDMEATXYOGNONWTQHUZPWVSEFMGVHTAXDVZWLDIVWIYXBYOOOEVQQTNPRVCDJKPJEYNYHKMIFSEZAMHCK");

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
    msg.setTimeStamp(0.848298866904);
    msg.setSource(34994U);
    msg.setSourceEntity(20U);
    msg.setDestination(36515U);
    msg.setDestinationEntity(53U);
    msg.mcount = 16U;
    msg.mnames.assign("ZCLVDURQEDXUXHTYBVEWOMITOFMWSEQYZXGHTVTJRCCNKJXTZLYSIELXLHVLBMYXSCBJKFFFMGAAAGZTBNFYHKRAKMYPLGFDNYXPOPRVYEXGBAUBGUMOOCEADFUQLIZITNHZQJXJHPLJGQDBPXIJKUURBDVEARISDQLSCWNPVCIYFRVPZHDGWKSUNCNOSFEOHPSIYUGONQOWZWILZWMAWBDTERWRJQWTNFMEJQVPMGSZC");
    msg.ecount = 224U;
    msg.enames.assign("CMNPDZNVCJHLNBIYJUUGAXSEMCTHKCIRSQVBKOOCUSXIQFVPRGBOOEYIUQKJSQDYRIRWKMRKITTOG");
    msg.ccount = 144U;
    msg.cnames.assign("QAUOPMTYUPNUTAOYLWZGQTQAEARQBYSBLSOGDWUJLVXCWWIKBLXOFSVCMUITSCAZRIBRZFG");
    msg.last_error.assign("MUZJDCDQCLPHWXMPVPXULKJEJIJALJMNPIGRSVFQGHUYPTWLOFLQDADMYXXQZXHDLOFPQZRDUBRXFWYKWTXBOMJQHGSYLSHVLIPSVSKAIVWFUWHGIMIZZEOVYETXAYEZCBHUAPVRXSKDBFOFZQNAGHOJUOGJSADYRJRIMKOMCZEFETMEQUYITTRLFGWLZNXJUSYC");
    msg.last_error_time = 0.634114198866;

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
    msg.setTimeStamp(0.0586664531207);
    msg.setSource(58447U);
    msg.setSourceEntity(3U);
    msg.setDestination(37411U);
    msg.setDestinationEntity(103U);
    msg.mcount = 59U;
    msg.mnames.assign("EOXYIWXJMTPOUFZFVGOANMTEZMUKDJTMOMQNZWCRTVKSFUJPJLEWYNLCXXOHDXNDVMOFYDLNESIYLTVHRNHXOBKMHGERAQLNLSUSDFSPQNCAECTPQQWVWTXEUPGCRZRIBPPFQWCWYQAHAZGDBRAZKSAUJNCAJWNIEUVBKODYPBHJGKEQJRWZMPFDKFSSBBMYKYLTGWTZVLIYFIHFLDLBKVHIDTGBJSIVEUMXRIQXGCCAUHYPGH");
    msg.ecount = 183U;
    msg.enames.assign("FJRMKKTAKBSISLGSGKGKVJQEMBOQCUXRZNXNQEXTIDNFELHSWGMNRJUMRZPINFONUQCINQPEWHWMPQUVVRXUYPXPRALOOYNOPRLXEDHVFJAJJSXUCUUXFZXPYQMPXZOSYEHCKYTWWDCYHHZMYLZDYEYGOLUCVSEENAVLWTBAJPSDKSAODGMTMAFBWOZVTWZVBINLGTLTRFLAHIDDDVBBKCSUQVRQDEFTJFJQCAPJRIIFTGBZBBKIHO");
    msg.ccount = 252U;
    msg.cnames.assign("CXKYRMJSZWLQQMSOABJNMJGHWYTPLYPBVOYWTZFVWPLVAYPXLBJIYAEDJDKLVQUVIMICZIHSTIAKXKGACBTJNKFYRLHCIIFINURAPWD");
    msg.last_error.assign("HJKDAJTOHPCGCUFHKAFDOQSWPWAFDARKLKIUHYATPVLJEGDOTBMNMQSPBARKZAOAVHSSTIOXNUHZGRLPOGAXKITYGSEPZMROHWEEEIYCHOUWYCYHMVVJBWYCDYNKXJKVPNFVSOKTCIBMJCWTTXULMNPNLD");
    msg.last_error_time = 0.288920340394;

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
    msg.setTimeStamp(0.43665026465);
    msg.setSource(3845U);
    msg.setSourceEntity(24U);
    msg.setDestination(25967U);
    msg.setDestinationEntity(96U);
    msg.mcount = 29U;
    msg.mnames.assign("HTPZURMALJFIRSWXCGNKQVQYONKROIPHQOJPPYUSXTHFWTMTZODCYMIGPTVBLKNQGMEVTBZSODPVWTZTMRKDNSMGDJDQPIZEXLNJXENKKBDISUCIAXGAXRBCYEHYKLTDXNJDZZESOYRQI");
    msg.ecount = 82U;
    msg.enames.assign("EZDKQBNJXFVRCOIIZGKHTPKHROINMBCWHHNWKYSHEWJXBKJCFOKCRZYKVWSRABXHRBLQTKRXTNPYELIBQPVZDRJKZGYIAUTMQTGJACMEYSJOTAXXNZOBOCMOGZNWEHLFLYMNZDJDPHUDWCFFHUNUDQTERGLIMZPLOYQDBXVWEKAWTUNEISIMSPPXGQGYVUPLLEVDQDPBEABCGVVWYICAGFZSGRVLHUUFUOSVWDMTMANIJPF");
    msg.ccount = 64U;
    msg.cnames.assign("KHAVOCJGDXXQOMKNJLCLYPFIZNSRPDTBYUGJRIJEOPDWBHVJOZWAWEOACVNQBFSAILZDSGAKJKEWZDXIMAHSOGLLTHEOQBOTZNEWSFETBXWCTPYRDCFRHYRGQVZBNUJIPTURYGNXTTDUBSYGZHLNMYRACEVHUVXHUSIPZFNJGBPBASCQFVAFFFWDPDVKYMWHXASXKDEUUUZILUZYJGYNNCKIWBHCMIQMQQQWL");
    msg.last_error.assign("NKQXWBPQMOZNYAWYXIVUREYJWUQNPKJXIGORLLRJMZIFQPSJFNQHSZGOTSEVPVXEXAWMUAZTGEKHTAVIFDGKDGFWYTQDBGPCCUZYOTRLCHVTEHNFHCPGYETCHCCWLJWRJNLHFPQXADUIBXSTXZXPBAERYNIFKUMAWLEYAZOUZKOBIDGYSXKRIHNOMCSQGPMWMQMKLLJMHEFYMVOJOFRDUKSKUPVFBBBJAVNCDORQVIHSJWRBZTZIBDCGDSVL");
    msg.last_error_time = 0.642617604718;

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
    msg.setTimeStamp(0.426429587983);
    msg.setSource(59206U);
    msg.setSourceEntity(94U);
    msg.setDestination(6356U);
    msg.setDestinationEntity(199U);
    msg.mask = 205U;
    msg.max_depth = 0.0624475364863;
    msg.min_altitude = 0.2468394386;
    msg.max_altitude = 0.295578459517;
    msg.min_speed = 0.439933710733;
    msg.max_speed = 0.567149321914;
    msg.max_vrate = 0.065917724475;
    msg.lat = 0.201641008819;
    msg.lon = 0.758695466949;
    msg.orientation = 0.444641665088;
    msg.width = 0.866776031004;
    msg.length = 0.805742777785;

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
    msg.setTimeStamp(0.826007240745);
    msg.setSource(15900U);
    msg.setSourceEntity(132U);
    msg.setDestination(44336U);
    msg.setDestinationEntity(52U);
    msg.mask = 152U;
    msg.max_depth = 0.377389494406;
    msg.min_altitude = 0.843937602538;
    msg.max_altitude = 0.0616934907036;
    msg.min_speed = 0.95050839806;
    msg.max_speed = 0.871928238706;
    msg.max_vrate = 0.994177499303;
    msg.lat = 0.576202917043;
    msg.lon = 0.0307621894131;
    msg.orientation = 0.634235276999;
    msg.width = 0.632268937755;
    msg.length = 0.320528446147;

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
    msg.setTimeStamp(0.0717505231022);
    msg.setSource(40024U);
    msg.setSourceEntity(210U);
    msg.setDestination(36914U);
    msg.setDestinationEntity(193U);
    msg.mask = 4U;
    msg.max_depth = 0.297820755282;
    msg.min_altitude = 0.213532799969;
    msg.max_altitude = 0.000615436235774;
    msg.min_speed = 0.385820358718;
    msg.max_speed = 0.747342389081;
    msg.max_vrate = 0.202121850492;
    msg.lat = 0.738912917119;
    msg.lon = 0.334793219946;
    msg.orientation = 0.038545046297;
    msg.width = 0.0392762065895;
    msg.length = 0.257428027029;

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
    msg.setTimeStamp(0.154824076593);
    msg.setSource(28719U);
    msg.setSourceEntity(19U);
    msg.setDestination(30147U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.798771552153);
    msg.setSource(4419U);
    msg.setSourceEntity(173U);
    msg.setDestination(4459U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.510492956661);
    msg.setSource(42501U);
    msg.setSourceEntity(42U);
    msg.setDestination(35736U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.227545562991);
    msg.setSource(59654U);
    msg.setSourceEntity(211U);
    msg.setDestination(7240U);
    msg.setDestinationEntity(70U);
    msg.duration = 58414U;

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
    msg.setTimeStamp(0.639365185368);
    msg.setSource(34188U);
    msg.setSourceEntity(126U);
    msg.setDestination(63235U);
    msg.setDestinationEntity(122U);
    msg.duration = 55450U;

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
    msg.setTimeStamp(0.494034747024);
    msg.setSource(14383U);
    msg.setSourceEntity(85U);
    msg.setDestination(20257U);
    msg.setDestinationEntity(79U);
    msg.duration = 30241U;

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
    msg.setTimeStamp(0.897062896608);
    msg.setSource(19393U);
    msg.setSourceEntity(51U);
    msg.setDestination(11170U);
    msg.setDestinationEntity(162U);
    msg.enable = 194U;
    msg.mask = 2477887729U;
    msg.scope_ref = 3031749958U;

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
    msg.setTimeStamp(0.0623841635633);
    msg.setSource(21386U);
    msg.setSourceEntity(148U);
    msg.setDestination(571U);
    msg.setDestinationEntity(147U);
    msg.enable = 208U;
    msg.mask = 2401667688U;
    msg.scope_ref = 288910072U;

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
    msg.setTimeStamp(0.563058846535);
    msg.setSource(27214U);
    msg.setSourceEntity(85U);
    msg.setDestination(6359U);
    msg.setDestinationEntity(213U);
    msg.enable = 114U;
    msg.mask = 2271747470U;
    msg.scope_ref = 1837794701U;

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
    msg.setTimeStamp(0.741887954359);
    msg.setSource(36392U);
    msg.setSourceEntity(108U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(10U);
    msg.medium = 190U;

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
    msg.setTimeStamp(0.106129893201);
    msg.setSource(14339U);
    msg.setSourceEntity(163U);
    msg.setDestination(11329U);
    msg.setDestinationEntity(228U);
    msg.medium = 3U;

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
    msg.setTimeStamp(0.857469954218);
    msg.setSource(6205U);
    msg.setSourceEntity(31U);
    msg.setDestination(2371U);
    msg.setDestinationEntity(48U);
    msg.medium = 192U;

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
    msg.setTimeStamp(0.978300319543);
    msg.setSource(50218U);
    msg.setSourceEntity(72U);
    msg.setDestination(47732U);
    msg.setDestinationEntity(166U);
    msg.value = 0.622692474275;
    msg.type = 69U;

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
    msg.setTimeStamp(0.285420917777);
    msg.setSource(6186U);
    msg.setSourceEntity(63U);
    msg.setDestination(61592U);
    msg.setDestinationEntity(83U);
    msg.value = 0.19724277545;
    msg.type = 37U;

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
    msg.setTimeStamp(0.634576228726);
    msg.setSource(9609U);
    msg.setSourceEntity(192U);
    msg.setDestination(55408U);
    msg.setDestinationEntity(193U);
    msg.value = 0.347963512544;
    msg.type = 184U;

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
    msg.setTimeStamp(0.462197233533);
    msg.setSource(12841U);
    msg.setSourceEntity(155U);
    msg.setDestination(58384U);
    msg.setDestinationEntity(127U);
    msg.possimerr = 0.191308665374;
    msg.converg = 0.374770829682;
    msg.turbulence = 0.255762210644;
    msg.possimmon = 2U;
    msg.commmon = 5U;
    msg.convergmon = 52U;

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
    msg.setTimeStamp(0.456016496286);
    msg.setSource(53837U);
    msg.setSourceEntity(109U);
    msg.setDestination(20178U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.344426467536;
    msg.converg = 0.982264390697;
    msg.turbulence = 0.0924711664282;
    msg.possimmon = 43U;
    msg.commmon = 99U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.505020067478);
    msg.setSource(39685U);
    msg.setSourceEntity(247U);
    msg.setDestination(56225U);
    msg.setDestinationEntity(14U);
    msg.possimerr = 0.698889248983;
    msg.converg = 0.574322626557;
    msg.turbulence = 0.0356422897175;
    msg.possimmon = 67U;
    msg.commmon = 124U;
    msg.convergmon = 158U;

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
    msg.setTimeStamp(0.0049099140831);
    msg.setSource(376U);
    msg.setSourceEntity(235U);
    msg.setDestination(38530U);
    msg.setDestinationEntity(58U);
    msg.autonomy = 22U;
    msg.mode.assign("PLAFZPJFLZXNYAISYZKENVLWNOGAUUNIHHZLXVYMXHUJGIRRMQZYURGEBYRICRXJXOQWKOQGIMFBDKHOVSUTFJTRIXHPBVLWOAZBSNJXQWJMNPTTAVSKUFDYIPUDOAHIGGVQKVGNEKAIHMXMEXCTTZGXIWUKBSREYCPDMNQWVTYBOELKPQERQQBMCZHLCYDDWHSFFAJSVCDKOWPOSNLYGMRREUAJQFV");

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
    msg.setTimeStamp(0.828956080687);
    msg.setSource(39279U);
    msg.setSourceEntity(82U);
    msg.setDestination(64541U);
    msg.setDestinationEntity(162U);
    msg.autonomy = 59U;
    msg.mode.assign("NRGOQBJUCYSJZDEKOKLDYJZTIWDAGJUFAHGXENMNHKLLQQSUTWRJMJZAEKQNYHSWPIHTWBETROSHVIOEAKCVVUMMINNMAIYYEVVJSBCROTHXX");

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
    msg.setTimeStamp(0.935357960673);
    msg.setSource(35041U);
    msg.setSourceEntity(72U);
    msg.setDestination(17142U);
    msg.setDestinationEntity(87U);
    msg.autonomy = 114U;
    msg.mode.assign("RSUSHYZQXNXJJGCZBIZQFKCMSKJOZUXXLMNHDCJTLOUWLEBFCWMPPOIBAMDPPUSENIVCNBITQFQLRYTEKARFFCLEXQDZMPBEIKDYXJFORDTAICNLQSTIWJLHHESXJGBZWIRVNMWAQRYEOJMGCVYKPTYZHXXDVVLFBRTZFUDWMZSHQ");

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
    msg.setTimeStamp(0.0555994435632);
    msg.setSource(11938U);
    msg.setSourceEntity(244U);
    msg.setDestination(41536U);
    msg.setDestinationEntity(44U);
    msg.type = 40U;
    msg.op = 108U;
    msg.possimerr = 0.111818062621;
    msg.converg = 0.207732646915;
    msg.turbulence = 0.299911615042;
    msg.possimmon = 225U;
    msg.commmon = 17U;
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
    msg.setTimeStamp(0.637776671156);
    msg.setSource(11706U);
    msg.setSourceEntity(226U);
    msg.setDestination(50626U);
    msg.setDestinationEntity(162U);
    msg.type = 179U;
    msg.op = 166U;
    msg.possimerr = 0.704568018618;
    msg.converg = 0.358615844695;
    msg.turbulence = 0.409697614562;
    msg.possimmon = 102U;
    msg.commmon = 128U;
    msg.convergmon = 161U;

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
    msg.setTimeStamp(0.702036203424);
    msg.setSource(22606U);
    msg.setSourceEntity(98U);
    msg.setDestination(53417U);
    msg.setDestinationEntity(197U);
    msg.type = 200U;
    msg.op = 14U;
    msg.possimerr = 0.818256618459;
    msg.converg = 0.210170964658;
    msg.turbulence = 0.713621854372;
    msg.possimmon = 237U;
    msg.commmon = 89U;
    msg.convergmon = 46U;

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
    msg.setTimeStamp(0.70853179194);
    msg.setSource(9041U);
    msg.setSourceEntity(63U);
    msg.setDestination(52817U);
    msg.setDestinationEntity(35U);
    msg.op = 116U;
    msg.comm_interface = 29U;
    msg.period = 31762U;
    msg.sys_dst.assign("WFYGHLFGKDIZCCYUNVODVDTOWSSNXWPHF");

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
    msg.setTimeStamp(0.0165450915226);
    msg.setSource(42458U);
    msg.setSourceEntity(194U);
    msg.setDestination(38303U);
    msg.setDestinationEntity(233U);
    msg.op = 160U;
    msg.comm_interface = 254U;
    msg.period = 11218U;
    msg.sys_dst.assign("PCZJBRJHEVECDSWVAHMFMOIBOPPVUQCMRZBAUPFFVSCIYVTXOOJYHGJMDJBGCFQPTYTTDXOYTVLCMYYVRIFHQPDXHPHWBIJODUQIWSKAUMTXGRIWGQUFHNGNWPJSQPANYFDXLZKGTZALKNWQCABSVRLPWABUQDAWDEOBQSHRKKXRIEFKLR");

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
    msg.setTimeStamp(0.402177711458);
    msg.setSource(11541U);
    msg.setSourceEntity(159U);
    msg.setDestination(39424U);
    msg.setDestinationEntity(163U);
    msg.op = 86U;
    msg.comm_interface = 78U;
    msg.period = 60679U;
    msg.sys_dst.assign("AJPMSUYUIQXCQAVMZROWYQZYFNNIUJXWQOAQGSHWLFBCTLSHTAMXMOUWD");

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
    msg.setTimeStamp(0.276550024945);
    msg.setSource(24306U);
    msg.setSourceEntity(151U);
    msg.setDestination(58835U);
    msg.setDestinationEntity(150U);
    msg.stime = 3696535446U;
    msg.latitude = 0.914789030559;
    msg.longitude = 0.542697026478;
    msg.altitude = 59877U;
    msg.depth = 45635U;
    msg.heading = 63959U;
    msg.speed = 17999;
    msg.fuel = 67;
    msg.exec_state = 44;
    msg.plan_checksum = 39943U;

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
    msg.setTimeStamp(0.593125724625);
    msg.setSource(32675U);
    msg.setSourceEntity(249U);
    msg.setDestination(13726U);
    msg.setDestinationEntity(30U);
    msg.stime = 3559882894U;
    msg.latitude = 0.43630061874;
    msg.longitude = 0.477477274821;
    msg.altitude = 10035U;
    msg.depth = 61574U;
    msg.heading = 1670U;
    msg.speed = -32491;
    msg.fuel = -84;
    msg.exec_state = 80;
    msg.plan_checksum = 50666U;

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
    msg.setTimeStamp(0.638936217521);
    msg.setSource(54233U);
    msg.setSourceEntity(141U);
    msg.setDestination(6851U);
    msg.setDestinationEntity(32U);
    msg.stime = 2374330990U;
    msg.latitude = 0.447574244956;
    msg.longitude = 0.0033513671955;
    msg.altitude = 4010U;
    msg.depth = 37613U;
    msg.heading = 56817U;
    msg.speed = 27523;
    msg.fuel = -22;
    msg.exec_state = 89;
    msg.plan_checksum = 34746U;

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
    msg.setTimeStamp(0.39270461743);
    msg.setSource(35162U);
    msg.setSourceEntity(142U);
    msg.setDestination(27158U);
    msg.setDestinationEntity(100U);
    msg.req_id = 20296U;
    msg.comm_mean = 161U;
    msg.destination.assign("TTVGQBGFDKHFRVQWEAJWUJHXXUIZDDTSKPKGLLQCHBMXRJZNUOZFCNWSSGPDZMTXUTSSIMLTLILTTDFCABBDNUHNQTNHABEGRDNJBSOVWEAXKSFFXNZKNVVMWZOWCXZLEYRPILMJNJAVYYSPZIAEIKICRGPBKZOHURCCWUIFKVH");
    msg.deadline = 0.350092683518;
    msg.data_mode = 130U;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.582815728123;
    tmp_msg_0.lon = 0.977513378275;
    tmp_msg_0.height = 0.173468206249;
    tmp_msg_0.x = 0.11772517406;
    tmp_msg_0.y = 0.948700467328;
    tmp_msg_0.z = 0.47823579284;
    tmp_msg_0.phi = 0.875503212063;
    tmp_msg_0.theta = 0.591372919463;
    tmp_msg_0.psi = 0.945316113705;
    tmp_msg_0.u = 0.538381332921;
    tmp_msg_0.v = 0.287958357254;
    tmp_msg_0.w = 0.644360994057;
    tmp_msg_0.vx = 0.60578030896;
    tmp_msg_0.vy = 0.0159240504355;
    tmp_msg_0.vz = 0.293767967297;
    tmp_msg_0.p = 0.816630393912;
    tmp_msg_0.q = 0.499776685515;
    tmp_msg_0.r = 0.150593036696;
    tmp_msg_0.depth = 0.142955624085;
    tmp_msg_0.alt = 0.460315897039;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XYRRIOXVSCKTHDGHNOIMKWWPPOWGSEWBMUAOCRVZLKUQJDTPKCJNRCSPXEQWZWZVQSJWFUAXVHWZRJLNHPJUFMEODPIKVPYDUTAGSBETUGZQRCJEQSOXYPMIYMDNBTAGQTIYSANHBTFUFFMINRMWHLOKKVFLGZZHRURQBOBQMHLOLYXSFEVINLVHDHAKBYZJBAGXANVBYJTAXISYAFPGXEEJGXSVBFZIICCMPNDCNWQTELQL");
    const char tmp_msg_1[] = {-96, 42, -23, 101, -96, 97, 0, 108, -120, 102, -3, -54, -40, -84, 121, 51, 38, 94, -2, -40, -110, 48, -66, -27, -94, -28, 89, -103, 42, 82, 31, 49, 72, -99, 113, -111, -88, -124, -40, -69, 74, -66, 125, -107, -24, 22, 69, 2, -89, -49, -117, -87, -50, 1, -108, 18, -100, -48, -79, 15, -128, 118, 58, -97, 55, -32, -84, 71, -117, 120, 105, -97, 67, -31, -108, 110, -54, 72, -14, -97, 61, -9, -85, 75, -42, 44, -20, 68, 121, 37, 95, -69, 97, -40, -121, 79, -51, -45, 110, -41, -64, -58, 48, -56, -109, -21, 86, -11, -100, 67, 118, 72, -38, 15, -83, -106, 91, -82, 96, 29, -113, 118, -99, -31, -39, -21, 32, 66, -110, 65};
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
    msg.setTimeStamp(0.915053699657);
    msg.setSource(59415U);
    msg.setSourceEntity(222U);
    msg.setDestination(19728U);
    msg.setDestinationEntity(53U);
    msg.req_id = 22464U;
    msg.comm_mean = 98U;
    msg.destination.assign("IGSYJDUPEOEEWHDCVKFBFDJSKUQSQXCEYFLYYXMLKUTXQLMYAPMOPJJIRWDNHQLFGOETIEVHXPIZXUGLWBUCIAPYRGLISZWAXKJQTZJKVZLODOYRSACVVWHJCNPLLXTQGAFFCOFTQBGHKRHCNRPEHZNCBGXXLMRSKZBOJIWIMKWZRMRTAFVDOASGQHVIEJNTNHEJPS");
    msg.deadline = 0.560762772992;
    msg.data_mode = 223U;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZGNPMEFJWMBUZKDUGSMGIZYYDNIYGGKYMLERSMQVILWUFZTWVITIHCXKFSBYBTQMPKLAHTDFPXFVTAGARUV");
    tmp_msg_0.sys_type = 169U;
    tmp_msg_0.owner = 62912U;
    tmp_msg_0.lat = 0.188339461555;
    tmp_msg_0.lon = 0.853592512521;
    tmp_msg_0.height = 0.382858072492;
    tmp_msg_0.services.assign("TMOSNHUQBOYVVGKHHQDEAUGZNHFLOXXXVLYJSTSIUCQCYDPJWXJGCJCKU");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WPLYVULOAGMJJONUHKTZNIFYVVLTYEVIBVDFGPFRTMOUMHNDJJAOZKRDWASADQOWSXGYXCZRCDKQTZGHHMRHIMJVAFJEGQTMDWYGFIUANEXXCHEQDOOECPSMBNFKICS");
    const char tmp_msg_1[] = {-30, 25, -21, -63, 80, -32, -51, -16, 79, -80, -123, 61, -77, -28, -111, 107, -56, 83, -55, 58, 91, -60, 63, 40, 60, 25, 17, -123, 111, -67, -47, 117, 94, -118, -102, -73, 13, -30, -60, -66, -18, -29, -96, -9, -87, 10, -74, -15, -19};
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
    msg.setTimeStamp(0.418163166158);
    msg.setSource(21414U);
    msg.setSourceEntity(80U);
    msg.setDestination(27913U);
    msg.setDestinationEntity(139U);
    msg.req_id = 44759U;
    msg.comm_mean = 155U;
    msg.destination.assign("JSUBMMZZOTENFYYKFQZHPUDAOKAYIHPXUBPKSUOFHECTQMCRPQNDXOTVGMHMFGTFVVFERAYWQJYZXNLIBFPFXTDKSZCWRSNJTIVCGAWURUJNIBQHLMNOTAYDXVKVQHPDKJHMCJYRCJKEIUGVWCXLPFLIRYUWTOSRMZEDKVOMCOWV");
    msg.deadline = 0.830909009549;
    msg.data_mode = 163U;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 205U;
    tmp_msg_0.htime = 0.744542862134;
    tmp_msg_0.context.assign("RMKJCSXXYGHADVLIQSBNCEESPTASTAUNFALBVLODPFRDPTNVWKXCWZQWUCFHAUUDCLLOITIBEQGYYVTMXIOFHWHKCNZTZHKSVGDRQXMWLKEJJETZPPGGYCYZPFVANQNIJXKIUUZO");
    tmp_msg_0.text.assign("CUMDQXHBRJGZGPHLAVBEOZVFPTRDSRYTIRRYFQNXJKHBJADQRWUCBBVXMRMILOLHUYDFUYLXXZUKDKIMLNSMKTVWTOVMWTWBQSXFYTATWTDVJHEINSDZCMFVNZYAYEIKJCPKLSIWFJJBCPOQH");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MXIYRLLVVWUKSQSLZRFDTPZDAQGEIPUBKWECQLLDHOOVLZVZHRFEGAWFCVAKKLBNYDYSYPVBBTUYGCEHKTHJPGMZPIOYSZTSTFFMLIQDHDFOJZKNOJRLZUCQCEXBZRTAWOOUKIPMNTFUCNSYZOANXANUPMGJKIHQWYCMPIQXJDHNBTFTMGURIPYFCOQGMVXNUBSDP");
    const char tmp_msg_1[] = {-77, -29, 9, -1, -41, 7, 102, 97, -5, 1, -1, 5, 19, -31, -59, 48, 12, -41, -113, 58, 60, -39, 78, -55, 83, 114, -30, 13, -84, 13, -41, 39, -76, -124, 59, 97, -86, -2, 27, -59, -109, -27, -74, -36, -60, -113, 93, 92, 108, 118, 93, 61, 116, -101, -37, -63, 126, 98, -99, 45, -118, 71, 117, 30, 64, 34, 71, -31, -94, 46, 102, -100, 69, -104, -102, -72, -128, -25, 36, -22, -80, -58, -114, 59, 21, 29, -104, 41, -127, -60, 104, -35, 20, 106, 71, 0, -128, -25, -26, -128, 35, 2, 101, -33, -36, -75, -105, -84, 57, -123, 104, -108, -86, 73, -16, 126, 18, 78, 8, 88, 84, 80, -82, -26, -17, -59, 42, -38, 122, 83, -121, -63, -40, -110, -113, -105, 75, -57, 72, 18, 70, -73, -39, -85, -52, -32, -116, 47, 79, -57, 1, 123, 109, -60, -113, 20, 74, -54, 95, -77, 106, -85, -6, 123, -62, -93, -18, -127, -128, -65, 82, 65, 98, 28, 46, 44, -44, -70, -4, 85, -102, -19, -77, 89, 126, 72, 84, 94, 96, -84, -63, 19, -106, 1, -8, 105, -58, -30, -83, -114, -122, -16, 41, 9, 105, 70, 83, -101, -67, -55, -77, 83, -71, -17, -69, -55, -53, -70, 39, -32, 6, 66, -23, 4, -111, 122, -57, -97, -49, 121, 83, -24, 120, 27, -79, 83, 81, 7, 75, 48, 32, 90, -27, -71, 98, -44, 85, -32, 83, -106, 60, -113, -113};
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
    msg.setTimeStamp(0.492225214258);
    msg.setSource(51466U);
    msg.setSourceEntity(9U);
    msg.setDestination(52605U);
    msg.setDestinationEntity(17U);
    msg.req_id = 62286U;
    msg.status = 242U;
    msg.info.assign("SWOGJTGDHFSDOTTNEKQKTYWPJBGUVUTMGPAQNZRXQLYTZJQXMFIPWRWUCIDUDXNTHBKWZCQILAOIFLFLRPKVMJLCESVFJ");

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
    msg.setTimeStamp(0.330627187398);
    msg.setSource(43766U);
    msg.setSourceEntity(169U);
    msg.setDestination(1565U);
    msg.setDestinationEntity(27U);
    msg.req_id = 43815U;
    msg.status = 25U;
    msg.info.assign("MDJBYWHPAWGISDZURASVTBAVWGHKUNGOECJEVEDXPCNBOLQPUGKFYLBBJIDKWXKKZNNKUDTJELVIQJSDHARPLESVYCWVJBTVDPEQCDGOGKXWGPPZRNZZGYCFICPOAMXALIXTUHFDQQRKEUGSITMTFMTZJKMZRLLCIOXQUCHNOSEEJALZYRYRMPYVCQMQLBBOVYGKRQW");

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
    msg.setTimeStamp(0.993222901518);
    msg.setSource(21835U);
    msg.setSourceEntity(189U);
    msg.setDestination(24666U);
    msg.setDestinationEntity(185U);
    msg.req_id = 7732U;
    msg.status = 221U;
    msg.info.assign("UTIPMGSFXBAESURTZIMOWTFBGYV");

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
    msg.setTimeStamp(0.694006759161);
    msg.setSource(16049U);
    msg.setSourceEntity(172U);
    msg.setDestination(58468U);
    msg.setDestinationEntity(21U);
    msg.req_id = 3475U;
    msg.destination.assign("AGVQCGNBXZLZBCKJPXIRNPKRMYLTHVGSUSDWJEXAEYFPQMDJV");
    msg.timeout = 0.53279689919;
    msg.sms_text.assign("BPCAETPGNAUQTCLPEFRKFFHUCDVVRTTFENWQBPALCKZMAGXKHYWQIJDPMDTBLEJESWVZHYNGXEGHCTCOIHCKXXEDVTJUBPSDSVLIGPJGZQIORPYXUZBUQVWZSDMVWTMAARBMQSYSBLJAXKUFXEHCCIYBYJNWLONGKIUGMOHMSRYRQLFGZRJJNWIHPMNVEMYSZLBLDHQJEBIARNKIOD");

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
    msg.setTimeStamp(0.962111611804);
    msg.setSource(61688U);
    msg.setSourceEntity(229U);
    msg.setDestination(28256U);
    msg.setDestinationEntity(244U);
    msg.req_id = 58302U;
    msg.destination.assign("JGVDMQWRUMYPHTGLXBTRKZFYABTJEMMAFWHZDOSFRKWGLQWYPPJDYYVUKKEVHCVTHYRJLCIABQNDQKALXPRDWJBOUOKURQKWIWHCIXBTSVNRETXTSXHMCJHUZXGLIDQPINEACGOKTJPZWUCGOEGXXTNAGVFYCPZSVFZAEFLSLWIKQFYAOXCDIMPSBHMIMONEFUGREQEGBCSUURBLEZYDMNSLANHZJSZXRNZBHDOVFBKVTDSOOCVNQINJAQP");
    msg.timeout = 0.865586458105;
    msg.sms_text.assign("WKCZUJPRJNGANLXIRIBEXNGEAHOISZTGCEYWIBSXDFBKDQZSNKAFTZNRRAMMJWLHSRJOGLBUELKJPMWDHSLLQWGHUBKUWQGPVNPOJXMMZIDAHYHFTVTUPQKYQZXVUCQNVOSDIIZBMCKLOTOWFOVXVJAHDOSMYVCMYJFX");

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
    msg.setTimeStamp(0.792085064637);
    msg.setSource(11755U);
    msg.setSourceEntity(32U);
    msg.setDestination(60412U);
    msg.setDestinationEntity(138U);
    msg.req_id = 34998U;
    msg.destination.assign("UJDWQPPWUWRHIBVOUTEYWUMGKRBDVLIQKMIUYAAETDZSTELRKUVTHVFQXZCIPG");
    msg.timeout = 0.438810396477;
    msg.sms_text.assign("FHEFJCTWHQPPDIBFIZGBTBONORAPPIZILQRXHLQNHGUXMVSGOGVBGQTYQHLIALXRTUEJVDLPRDNJCSKYZIVHDTTTCDMPFWTYFVGGFZEQGQLANJOYSHHNRDEYCLUCJYVKDSEGOIXSFCZARAEOVIJQTMFEMRJEMPSSWSUVZNHMWJUYKLQKWLWXBTXNWAUYJOSMLOAIYZDSPZEAHGENRKUWNKBYOXZDBMIKAUPDMFOF");

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
    msg.setTimeStamp(0.0734658045185);
    msg.setSource(9983U);
    msg.setSourceEntity(69U);
    msg.setDestination(7237U);
    msg.setDestinationEntity(24U);
    msg.req_id = 62203U;
    msg.status = 188U;
    msg.info.assign("SAABANPOKVVZFOMKYIIOOQWHKMWPHZUVFNDDYCFIGDPKIQWRJG");

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
    msg.setTimeStamp(0.433814874143);
    msg.setSource(15861U);
    msg.setSourceEntity(32U);
    msg.setDestination(38811U);
    msg.setDestinationEntity(58U);
    msg.req_id = 11228U;
    msg.status = 143U;
    msg.info.assign("QHCABXXUOMSDHVDVPNSHWQ");

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
    msg.setTimeStamp(0.207136758336);
    msg.setSource(19692U);
    msg.setSourceEntity(15U);
    msg.setDestination(14214U);
    msg.setDestinationEntity(120U);
    msg.req_id = 7213U;
    msg.status = 32U;
    msg.info.assign("DKNDXAEDRIIYCVSIBGOFIDVWLYZHPMNCLRHDBJWMKLWCPYHWAHWZQTHJKBTISEMVGNVNAVRUPINTJCTGFRXKCYQNGUKOECJXUEVPYEALRUGRE");

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
    msg.setTimeStamp(0.938143959812);
    msg.setSource(9870U);
    msg.setSourceEntity(73U);
    msg.setDestination(51707U);
    msg.setDestinationEntity(30U);
    msg.state = 43U;

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
    msg.setTimeStamp(0.0445268422962);
    msg.setSource(55942U);
    msg.setSourceEntity(78U);
    msg.setDestination(53434U);
    msg.setDestinationEntity(230U);
    msg.state = 92U;

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
    msg.setTimeStamp(0.108144149009);
    msg.setSource(11184U);
    msg.setSourceEntity(187U);
    msg.setDestination(12393U);
    msg.setDestinationEntity(67U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.351771351721);
    msg.setSource(62668U);
    msg.setSourceEntity(194U);
    msg.setDestination(40261U);
    msg.setDestinationEntity(139U);
    msg.state = 118U;

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
    msg.setTimeStamp(0.264210475845);
    msg.setSource(11989U);
    msg.setSourceEntity(99U);
    msg.setDestination(58053U);
    msg.setDestinationEntity(111U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.703758750723);
    msg.setSource(2241U);
    msg.setSourceEntity(41U);
    msg.setDestination(35098U);
    msg.setDestinationEntity(70U);
    msg.state = 49U;

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
    msg.setTimeStamp(0.179144442561);
    msg.setSource(26371U);
    msg.setSourceEntity(106U);
    msg.setDestination(14347U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.931611862569);
    msg.setSource(37106U);
    msg.setSourceEntity(76U);
    msg.setDestination(52198U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.683085484158);
    msg.setSource(26378U);
    msg.setSourceEntity(60U);
    msg.setDestination(61317U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.205922138156);
    msg.setSource(8787U);
    msg.setSourceEntity(174U);
    msg.setDestination(27918U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("QUSJMOQFWNPWISMSVOLKZSONHUYAYIDGAKWMEXECQEGNZCKEXJORRTJFUTDU");
    msg.description.assign("ZWFLLIENZSWELEOCBIDGRADQUNIXOPAHIQYZOUHPVUYCWKATHVSKGMAPREEVYYDOSZCTDHGFWPDOLSOWXWOVQFNMRBFSDGOYIXCHFOFKFZZLJQTHUGREXYQKIURMTCSWAPCTBHLB");
    msg.vnamespace.assign("BNBJBCVCSAEAPIDSIZGMSATLLUREUTHCZHOHTIOKLFYLGVODRWDYLVFYYHYZPDMXBGHRZJUDXMCDGHKVBKPPCCPAKUXNYOHGZGWGCWNKBN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HCTQAYRZBKOUWPMKETSPZJKJBPMLGBQMBQZYZGKDCAPFHLAAKOGPVNTESRGGVRLQORYAAUJTEWYGFUSBULODVRDSKFWTSYWZPVNBQQJHLXYAHHWDMXXPZWIHUIWREBKCOECNGQXLUXISOSFDKEIATFPD");
    tmp_msg_0.value.assign("AKIWJWYPKBPVNQGRRJUDAYTLQAXJEPUOBGIDPIAAWXJWZVUNELRYGENUSKFZLMCLSSAXLEXCUBLHSVKDOOPPFRCVKTDHPMQKJEITXHNVQVMHDYRCNBAYJMJZVUTFOUKZFDNCEZEFIODHMRGGTQSYZJXWTGBMPFHMLNYAZTQYAYOBCFCWIUKSLFQLCVJWAZKWLICNUIORFHJRISPOXEFHUDVENINEZMBGDOH");
    tmp_msg_0.type = 114U;
    tmp_msg_0.access = 15U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OPIOKGLVWPHBYNIZGWVRHULZWSABQDVAAULBXGKMGOCXMTUHQINNRRCUJGIJSZDJGEISLGABAZBVSRDHUXFINAMRFQUCIYBXXKREVDQFRPLYHIMCMIISXGQVDKYWYOA");
    IMC::ReportedState tmp_msg_1;
    tmp_msg_1.lat = 0.0963331580673;
    tmp_msg_1.lon = 0.221645104447;
    tmp_msg_1.depth = 0.000956570148908;
    tmp_msg_1.roll = 0.948024844606;
    tmp_msg_1.pitch = 0.357584364129;
    tmp_msg_1.yaw = 0.179132204008;
    tmp_msg_1.rcp_time = 0.218697497851;
    tmp_msg_1.sid.assign("AZCWCDNWSPNJZYAHAXHSFLTKJWEXRFQODCUYXZYJMAPIOQTOGCROCHSCUEKAKRLBWDWRTNOLXIPKTSFLKTJDMVDCRVQYNKQOTWVSOEHNHDBAHPEBFVBGYIDMSLOJPMEXXYIGZVFXNCQFGRHYRLEUQPQBCUZBIEGAKXGYIOEYYKJWJX");
    tmp_msg_1.s_type = 90U;
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
    msg.setTimeStamp(0.349929537414);
    msg.setSource(51286U);
    msg.setSourceEntity(84U);
    msg.setDestination(13051U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("PULKAKRCUEJPXNKXZEZDNMXZXPMG");
    msg.description.assign("FHGUIPFTAAGGKCXATZXBNUASMRIONNYGVHLIRIXYFWPUMKLKYAMHPSRGFAWGDOZDOCXTGLXHOTDCDLFLKLGICRNGZCYGCSCQJSQSRDTOBRXQYWBMTSJFDRHBMCBBUQUVTWIBYQQXIRDLSYMKVUVPELZTHYNSPUFKCFDQPVEXLXAZKWONHZQHPAIEISZMYMQNKWZVPVEWSXFWHBBOJVEHJJFWEUDBCVYPIOZOQZVNOMNEDE");
    msg.vnamespace.assign("FWVUFHZRAGJMZXNTYTPBPVADJGLSETARBKLOSBILUCAKHNGJVIWYDUCSIWFFAGYRIXEMFKCCKFQLCHSDFJQSXHLLOREUMESOXCPDBZBBYVVJQEPIOCTQXZHZYLHYNAGNMEAVRCZRUMWEDHQDQIIOGUMWKGFFNZRTXTWVJPAASJPBRHDWQSKGVYILHFPMRBWCSOQNXYEJUUGUV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PHVYMMZZTOWODGBUVGERLFWGJJWAGFVIPKQRTLUUDCSBTBIMASYCAQGZMSKDPSHNCUXNTVUFQRAXXKUKPXQOOWGBBXVDFERHJIFZZQIMKLTGYPJEKMQMODJGKHUHWVUPQNTAWTYFCOLZQWAAMYKSYX");
    tmp_msg_0.value.assign("MYQRPNHQLBBLRDFKAKXPQLQCSWFIGUPUFEHAREMJPSJFEYUXDDNVKGWBYTGCHADNZNQMTOLNXYBZQMRYINSVOWABXIXLNCMOJNZDGTVJCAEYWHKVYUOAPVZZBCJIAVLXURTKZFOEHWLTWKTPVAGCJFKRHBTBIGJBVNCTDZKLEMJJDDYZFRWDSBSOMYHDHQUUOWURSERWXMKSGOTJXLQSPCRXFPHLGMTVIXIQUZOGZF");
    tmp_msg_0.type = 3U;
    tmp_msg_0.access = 22U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YBZDZGLBJQZJIYGHBXCLVOUTWVPUXPUYRAUUWSUMBUOCLHRXOSJCOMPLZYNWVWSHROEWCEGXLGYPJICMHMFTVBEQQYFRBQDDHIEKDCPANWVHLBEOXRNXNIYWMEUS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("CRNVYFDKOVZKAPMHOLTYCHPBNWSSDBXRYEUTWNBMRUFEUXQLVYZJDUGXKMAORLAVNPKGBXECNWECVADPDBNETOTSMBUHXQMDZAEJWZGCERSJYEQZFVHISUQNKBQVXNZTWITKZIPGVGCYPRCJIROWZIFMLSTCFL");
    IMC::Dislodge tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 44783U;
    tmp_tmp_msg_1_0.rpm = 0.061471903286;
    tmp_tmp_msg_1_0.direction = 221U;
    tmp_tmp_msg_1_0.custom.assign("JILXKOGRBZSKQHQEXDXAASMGARWINHYLVNFBQFFBUHAVRMUNJQMRSTLEZXYADAHMEXIPCHQEZALRHKHVCNFXHCJTUOTUZDMEGVPQCIYGJOOBIQDGOR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("XEPRKTWYWKACJGJVYCDGTBAZHNNWRMVJTMUUESSFXLEIC");
    tmp_msg_2.dest_man.assign("CDQBTYJZYNEBQFCPDSGVKUNQRXPNEKEUAILPKFIMMRIYBYXSYTQHOGOOPNMDUEGQFHJNJDCVNSYKDNUOIEAARJLIIUJPXIBHXOOPAPBTFOKWQBWQZFEDGXGCSNRVGWRZPUHOKL");
    tmp_msg_2.conditions.assign("NWHLKICFPPQJZFZBGENZQAKULJSPSWAEOVKIWOQQFKXYNBTTMFSWCCDTHWQLQTPSBX");
    msg.transitions.push_back(tmp_msg_2);
    IMC::PlanManeuver tmp_msg_3;
    tmp_msg_3.maneuver_id.assign("UEGBABQKSMYTZMIYGNQAWKPKNNXWQMHSZTUPKVVMHCVVMQEAQVWDRUTVCUODXQNJPJNIIGFKWXIUFOHMDBAPEUSPJHLSNDYURYXEJIUANBICNDGBZCSQZCXWIYLNOTHMDVLFMBJFXTIRXDLKPRKEJYZCLHJEDBRBZSEJ");
    IMC::Teleoperation tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.custom.assign("LWUXHRCKBJVDGBSSWFPAMBOFIJUPZMIYRJKKJYZGFNGALPZVDQLUXTQKVBGZPHSCLNZYPZMNDXTITXBKLWUIGUIVHPBNGQNRFWIOATKQEJCPJYFADMTUUZCYRWHCLEXTCWAVJX");
    tmp_msg_3.data.set(tmp_tmp_msg_3_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_3_1;
    tmp_tmp_msg_3_1.vid = 25629U;
    tmp_tmp_msg_3_1.off_x = 0.501642823874;
    tmp_tmp_msg_3_1.off_y = 0.756275286274;
    tmp_tmp_msg_3_1.off_z = 0.105792275068;
    tmp_msg_3.start_actions.push_back(tmp_tmp_msg_3_1);
    IMC::VehicleOperationalLimits tmp_tmp_msg_3_2;
    tmp_tmp_msg_3_2.op = 41U;
    tmp_tmp_msg_3_2.speed_min = 0.99142165752;
    tmp_tmp_msg_3_2.speed_max = 0.405116960032;
    tmp_tmp_msg_3_2.long_accel = 0.509122982375;
    tmp_tmp_msg_3_2.alt_max_msl = 0.698360801043;
    tmp_tmp_msg_3_2.dive_fraction_max = 0.421991774391;
    tmp_tmp_msg_3_2.climb_fraction_max = 0.382125134545;
    tmp_tmp_msg_3_2.bank_max = 0.0315888104466;
    tmp_tmp_msg_3_2.p_max = 0.722484387135;
    tmp_tmp_msg_3_2.pitch_min = 0.062970282287;
    tmp_tmp_msg_3_2.pitch_max = 0.76279248253;
    tmp_tmp_msg_3_2.q_max = 0.464067787376;
    tmp_tmp_msg_3_2.g_min = 0.250357921744;
    tmp_tmp_msg_3_2.g_max = 0.62959849664;
    tmp_tmp_msg_3_2.g_lat_max = 0.945059344867;
    tmp_tmp_msg_3_2.rpm_min = 0.336317636859;
    tmp_tmp_msg_3_2.rpm_max = 0.231627520035;
    tmp_tmp_msg_3_2.rpm_rate_max = 0.325474243957;
    tmp_msg_3.end_actions.push_back(tmp_tmp_msg_3_2);
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
    msg.setTimeStamp(0.378094985746);
    msg.setSource(48070U);
    msg.setSourceEntity(71U);
    msg.setDestination(17053U);
    msg.setDestinationEntity(137U);
    msg.plan_id.assign("IANIGNGXNCDAETWQUYZNOJWPLXCGRXMFTZECNBSYGCUOVVCYVXQXDQELITHFMPRBJXSSZSQJLVMBSAJWTYJAPDPEPUANODOWHWDETJULHWRYVIFQNYPWWICROBZZXXIXLOUBUYZATXMPZMISLRLTUHKQKKTDLQAHUGIJJBBJHDVFPQCAV");
    msg.description.assign("YEAXSVPCSETKWCXBRUGWFWJTFMVQBUTUASWIHWYDQVPPBTVOWYTHKJHZMAFHKHYFBAUMBKNLSBSJTONTAGPXZRQQAPXOIAKCIATVJLROYGNQCXYDNNZNDSYCOCNQJXGSVREHRQKZXOGEFBNFPU");
    msg.vnamespace.assign("PGLGHOMEMFRCBLZYXAWKCNTOXFBOQTIXZWRALNT");
    msg.start_man_id.assign("DWMOJQBRUNGYEGCQDYUHLUQFVIF");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.732233260334;
    tmp_msg_0.lon = 0.305523742866;
    tmp_msg_0.speed = 0.926388251695;
    tmp_msg_0.speed_units = 190U;
    tmp_msg_0.limits = 42U;
    tmp_msg_0.max_depth = 0.0353965331465;
    tmp_msg_0.min_alt = 0.572355497159;
    tmp_msg_0.time_limit = 0.490170136912;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.412523236074;
    tmp_tmp_msg_0_0.lon = 0.0757929167099;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("QRZMGZQGMMCZUZKMGBAIHJPZRVBBJLNJYMDKUTJBNFWNUNZWODTALFTD");
    tmp_msg_0.custom.assign("KDRSVGUXYWJNGSFCGVFQQC");
    msg.start_actions.push_back(tmp_msg_0);
    IMC::VehicleCommand tmp_msg_1;
    tmp_msg_1.type = 134U;
    tmp_msg_1.request_id = 30052U;
    tmp_msg_1.command = 157U;
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 6255U;
    tmp_tmp_msg_1_0.lat = 0.132007043642;
    tmp_tmp_msg_1_0.lon = 0.222881957303;
    tmp_tmp_msg_1_0.z = 0.38235016654;
    tmp_tmp_msg_1_0.z_units = 113U;
    tmp_tmp_msg_1_0.speed = 0.999709411722;
    tmp_tmp_msg_1_0.speed_units = 45U;
    tmp_tmp_msg_1_0.custom.assign("JTBABGYKTIKNAWYBUGIRIXFGDDBVBWRHHCZHIOMPPNXPQPGDEKKLBGASNXVUGEIQVSOKVHOFOTWCEXSSUELRHGPOQLZIHLPFRRJYOHXOTUJFVLWUUCQZZDMIDSCDVILFMZRBAOIOAQTNCJFAKCNNMJWJPMXRKWOFDKGSWYSTJTCJZQLYXEADMFLUJFRDHULPYUKNZGEEVEWWTBHZACSYYMXZHRGPMPNQMCYTNKSAJRF");
    tmp_msg_1.maneuver.set(tmp_tmp_msg_1_0);
    tmp_msg_1.calib_time = 12468U;
    tmp_msg_1.info.assign("XDATPOLLZKLFMGSBDALYRBI");
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
    msg.setTimeStamp(0.867596958422);
    msg.setSource(40638U);
    msg.setSourceEntity(1U);
    msg.setDestination(47155U);
    msg.setDestinationEntity(166U);
    msg.maneuver_id.assign("AYEOCWZMKXGUVLAYYHDUKVUKGZGSTIPLVZJJKHKLWBYSFMINFCQPAGZVCMTMWXNFDBENTC");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 35982U;
    tmp_msg_0.lat = 0.788247461513;
    tmp_msg_0.lon = 0.306526239701;
    tmp_msg_0.z = 0.277528037109;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.speed = 0.417069568727;
    tmp_msg_0.speed_units = 192U;
    tmp_msg_0.custom.assign("TWGMRMFEHYULZIXZATKIZNRIUJPVVQSQSTYAXUFOLIKBOOHJRKIINHHRSBVEGBMNDLXGAPHKECVUNPBUIFKQDYK");
    msg.data.set(tmp_msg_0);
    IMC::HistoricDataQuery tmp_msg_1;
    tmp_msg_1.req_id = 31391U;
    tmp_msg_1.type = 246U;
    tmp_msg_1.max_size = 58014U;
    IMC::HistoricData tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.base_lat = 0.336117952992;
    tmp_tmp_msg_1_0.base_lon = 0.870812983959;
    tmp_tmp_msg_1_0.base_time = 0.0860611877591;
    IMC::RemoteCommand tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.original_source = 55338U;
    tmp_tmp_tmp_msg_1_0_0.destination = 322U;
    tmp_tmp_tmp_msg_1_0_0.timeout = 0.607293944017;
    IMC::LedBrightness tmp_tmp_tmp_tmp_msg_1_0_0_0;
    tmp_tmp_tmp_tmp_msg_1_0_0_0.name.assign("OMQEEETRCAGYDDOBIRCARGNFIIJFIPVZTNDLZFKZVRNVQVDTSVECGHTMJPWKUXJHJSYOQKOQGCXIIXMPSBOHWPLUSGASALYJQPKKFUUDZXSWDQXKNJGYNWZHZYLWLKYVCKHTHOMBYBSFOOBZQDMICTXVROMBQNECXUBAWMGOZ");
    tmp_tmp_tmp_tmp_msg_1_0_0_0.value = 245U;
    tmp_tmp_tmp_msg_1_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_1_0_0_0);
    tmp_tmp_msg_1_0.data.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.878402950825);
    msg.setSource(21132U);
    msg.setSourceEntity(28U);
    msg.setDestination(52986U);
    msg.setDestinationEntity(79U);
    msg.maneuver_id.assign("BPLCGHYBVMUKDRKVDDRGHBYXDMVKIEYNOPOLUQEDZOPGUKLZFHTYNEBFTDZROPXTTAFHWQTCYQXOYUAMNQHEJPKLJJVPHUSNYEMQJYWUPKXJNRFSPFGYSJBOWTCIOINEDWLMIWBEIVWXKAGWSINBRNXCFCMJKFCAZESZITHOHQBSMZFSYKFGAIGSFVMDSVCQORZKVIPNEL");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.644879328857;
    tmp_msg_0.lon = 0.910281914258;
    tmp_msg_0.z = 0.481337234489;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.speed = 0.0619368589262;
    tmp_msg_0.speed_units = 15U;
    tmp_msg_0.abort_z = 0.623920864665;
    tmp_msg_0.bearing = 0.372489893504;
    tmp_msg_0.glide_slope = 236U;
    tmp_msg_0.glide_slope_alt = 0.543305616804;
    tmp_msg_0.custom.assign("XWYZWSIPVDDMKOLFXGHGGOAEPERJPPFSDBWRHDBGYDAUKRSCUFRMWHXYQFJYCQLMZEARGVTJOFMKJCXSNLAKFNLAUPUTIBOIZMHINTLVNKTBUVWJRTENWCXRBLCXBSXKADEJZHGQEBTVZGXHQTEVLDJNCYMIOQWDBCDXBLIZPVVRKIOFYZWCZXSWGF");
    msg.data.set(tmp_msg_0);
    IMC::OpticalBackscatter tmp_msg_1;
    tmp_msg_1.value = 0.21613330588;
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
    msg.setTimeStamp(0.0430411986507);
    msg.setSource(53182U);
    msg.setSourceEntity(202U);
    msg.setDestination(60417U);
    msg.setDestinationEntity(22U);
    msg.maneuver_id.assign("TNJOBNHZPRCBFOWYMKZEYMQTXFZKWUJOXCFGWNCYIAUNQOINJPGRYSHGXWZCSQUOSUAAXMMITNASAPVJWBYQPQDBEECFTYRFGHXFVAKFTJFYZORSNCBVJPZMRMKGUJEVIBCAONIVWCRFKWQCUIILIEUSBDZDLPKAAQNCLXBUHGRPNPTLXLGQVJMWWHTLSLRHJDDVXIOWVLHMESGODKZMFPYEJZRVEKEGDGQSLHHYSEKXURODBTXPZUDTI");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.410148269358;
    tmp_msg_0.lon = 0.22873388698;
    tmp_msg_0.z = 0.529607896921;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.speed = 0.857815758111;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.abort_z = 0.280404377494;
    tmp_msg_0.bearing = 0.789495064625;
    tmp_msg_0.glide_slope = 25U;
    tmp_msg_0.glide_slope_alt = 0.569668793834;
    tmp_msg_0.custom.assign("ZCATOGQAWNDTMNUKEPLGBSFTWFRNZYIOGKKJVLDOSEZUYEWQPTRKMN");
    msg.data.set(tmp_msg_0);
    IMC::Takeoff tmp_msg_1;
    tmp_msg_1.lat = 0.991073399569;
    tmp_msg_1.lon = 0.931362611987;
    tmp_msg_1.z = 0.411368049202;
    tmp_msg_1.z_units = 120U;
    tmp_msg_1.speed = 0.751113816925;
    tmp_msg_1.speed_units = 96U;
    tmp_msg_1.takeoff_pitch = 0.233818998516;
    tmp_msg_1.custom.assign("ARGEESGILNHXPAOXNIQMFNOQXWEJDZVZVAVFDUTEQRCVRAMKUUDCRGGUNFWXMTAEDPZBSUSFZMCSAFOQNTBDHMGDRAJAZUOIHFLFHVJTMEOCKICKRPYYQWSSMYXXMCVPOPKOTHZFIULLXVYNHJIBIZQQLGEKNHZLYBOCSNUKIKBSYXWRFTDKCQUGHVWHNEE");
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
    msg.setTimeStamp(0.853728613443);
    msg.setSource(34692U);
    msg.setSourceEntity(56U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("SFYGORCUSFIYGUHZMHPILA");
    msg.dest_man.assign("BWYIFHFTNKGBEAXDPUGGLORDYDTITSJCBEHAVZWLIZFDAUOGYIGLQSXJQMJCSVWOLSICPVNYTUVSUIOVYMVRFQDQCOGUPHNTRBICRNBYAGHYVCOKC");
    msg.conditions.assign("FPEGNCHTSZQAWSEVGOYLXXUZUZORFHSXIBLMBSSLFGUJFMVZCEGVRCVWNBPQNNDVAEPELJOWUAGURCAFVAMTFNIINRERHYMXVOKAMWYQBGRIKYWPCJCLOMKKSJODITXFXVW");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.349798720113;
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
    msg.setTimeStamp(0.500399170568);
    msg.setSource(18587U);
    msg.setSourceEntity(81U);
    msg.setDestination(33791U);
    msg.setDestinationEntity(201U);
    msg.source_man.assign("ROQFJFZKXGUGVEEWHNDIFDRQJHSJZTMJYXMIBKLKATIYMOWHDLDCZKBRWNOLDLQFBBFUYOWWTRLTGGOZMJBMLRSNTBASVVSMJCPGENFGFARHUVPNEEGOXKPUIHYYSYCMTTBQSQQWJNCSREYBUMRLVSTDXOQDHSIKGFACJVWWXIDXIHHMANVSVDFF");
    msg.dest_man.assign("JJAWSTVDXWNHQANXPXXOFGJSSKZLOXOXLBABDZRZWKNMAUHXEVINMNKJHDPMECQUDJKIZTSLRUEGYOK");
    msg.conditions.assign("TETWSLILLQABWSYBNYIMZMGXHQVHVXDJRGCGQCZKCCTKTYLRPVYWFAMJCBKAWZPEYKJFBRJAMTUFTXSFXVAQSRSJV");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.515984176731;
    tmp_msg_0.x = 0.456334722668;
    tmp_msg_0.y = 0.207401865416;
    tmp_msg_0.z = 0.561271712884;
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
    msg.setTimeStamp(0.914919561815);
    msg.setSource(18614U);
    msg.setSourceEntity(81U);
    msg.setDestination(29785U);
    msg.setDestinationEntity(232U);
    msg.source_man.assign("SFYLRILWNPVDETITAVYHDJXUXBLIRGTWGAYRFQHEJZRJHWZEPOWKMRVWPMKBHDSQQRJIHYPZFXAUOFQOKLGCWQWPXECAPRWYJKGTCUXQTFVBEXOZACIBERUMQSHBAGNVNPOGCSHOYZZNPNAMSIKZSJKILDLSJQUXUKEDVCTBOYWEYELUEYAMQKO");
    msg.dest_man.assign("OFAGKQVRBQLCIJGACFLEXNUJVMHFLUNQWFBNYHFYHJPQKDUYCMPEORTISSHTHVTVDRNOXLEJLMONQDAUCKTZGSSMFFAIITXZPEGEUWRUFHKZXVHCRDCXZHXOKIZDUXHACTEJBSSWVWIBNBADINIYSZBOWDAVGNKQJGEAMRXMMSJOLYKFWVWPYIPZDXTKOQRJPIPP");
    msg.conditions.assign("ORWUKQFXVFICAYEAWIMGSPQPJZUISYFBDAJPFKDIWNFURHZUZYJDODVPTTTBJDMVIAXWPUXNDSNNZX");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.840009286531;
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
    msg.setTimeStamp(0.910453362849);
    msg.setSource(29574U);
    msg.setSourceEntity(175U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(18U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OHBUKXEYGBVPMMFQZMHEAALTMWAMDSYAASRCEZEOJHAPRUIPVJKQQOOLHNQFXNRZIQPMVSOVCLRYFDLIXOLYMBDECFNVBSOTPGIVDVBCKZYJIFK");
    tmp_msg_0.description.assign("HJXUQEYGISNKQCXYGZIORPSRDYYDUPBRMRQMLLNTBDAEBOAJSFIYOHCFAOGVEJLJCZSIUNUXMUQMHYSZTBHVHRDKFCNEJZVDXMDVEQVWOZNZGRQUVNBIBOVCUKZWWCZSKXUFPGGUSYAJGINZLWLDNXVMFDYFSTVMTJAXWPBTXAKTAXQOKIAPWBKHHJLRLPXHNWCKGQLQLCSIFORVKMMODIGQRWOEYKTFLEIHEFTSFGBAWCJCWYHJTEDBNRTE");
    tmp_msg_0.vnamespace.assign("NXJDYUSKTYDKPSGMQOKFLBWYZEATXCUUEITFFMCOSXBRZQTLULXCVSBSBQJVAIANIFZFQVFZRYJOZMDIKXTNLOVNFQUPPAOAAVGPOHKKEHXNEIDWOZJKOGBCUYNTGMVPHDYADRQCGDHVLDLHHRGIAFZWPHEGKROBJNWJXYUSREZHMZBFWYPCQCELCDFJMMPBEXGI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AGMKRSGTYSEFIVNBTNFQJVQOZHYRCRVXLHIMBEIHWWRLAUSUGUBDOOIYBZCKDXAOPIJAFSKXXZOFGUVWFUSQDEGTCJFGHEYPPNKNJCLXOQGOQMYGZJEKPPLLIWWTRNACMEXI");
    tmp_tmp_msg_0_0.value.assign("MZBEJVKLOFFAEGQWGXZFDGXKHQIZAWDAHHBKPOUUPOKHIHRZIDNPGUJGNMHYBHOUTNDKQSRCVTWKSNZVDSTNNUXLRLTCBRODZIURZOYPZULUYYWVLIAAAPDIYCRFDMJBQQKEMCMMKCTBRMIZEXCVSWEXQTOXRPYRTTJOSXECVGVTBDXYGLTOHBOQIUCDLNGSFJZWPABIHLQQKJXJJEFSMIVWQCEPGXGMNWSCAVRSNEHL");
    tmp_tmp_msg_0_0.type = 139U;
    tmp_tmp_msg_0_0.access = 104U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WGYZKPKUOYBTSRPZGQPOBDAMHCNIRSKMKMPFLXGLVZDRHDDDTE");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("KRVXQTDOZCKYETMAXZWDGZAIJMAVZIPQB");
    tmp_tmp_msg_0_1.dest_man.assign("TVSOMOGUWGBDVZJEZPJVZCJJQOOPNHIUTDVIQCRCLHNBUSVSWEFSRDXCITUBNAAQKAFVXYYRIUEBSSBNZBGKRLXHHXAADAHGQFQXKWAPNPPMGLQGKTBEBQJVNXDDNPIXFRDMHIMSLMYIOZFKSSRAPYLAYKXOURNVCWLWQWLNNKOOYRMYEAJHXFPIJIDGGGKETCLMSTVUTTEYMWRFZWEFWFHCFRPCZHQPCKBCOB");
    tmp_tmp_msg_0_1.conditions.assign("ELLMTPHHKDVVOHZKNXTGZLXYNPUYPWDURUVUIKEFNILJDMSHWJFPCLJKFEBOAUKAEGONRNGBCZHDVWJCWMZWVMHBVXSUMXZROMXSWCYCSXVCDIDFASWRSZYBSGJFBLJVXRHADZFIITUYOACCRDGBWRYBMAMYTAFRTXOPVLQGQESQFQHASPIIQJTILUGBYKHBCTOQZMDET");
    IMC::GpsFix tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.validity = 51671U;
    tmp_tmp_tmp_msg_0_1_0.type = 121U;
    tmp_tmp_tmp_msg_0_1_0.utc_year = 61320U;
    tmp_tmp_tmp_msg_0_1_0.utc_month = 62U;
    tmp_tmp_tmp_msg_0_1_0.utc_day = 43U;
    tmp_tmp_tmp_msg_0_1_0.utc_time = 0.76932722546;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.569560672664;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.310329877214;
    tmp_tmp_tmp_msg_0_1_0.height = 0.615284682746;
    tmp_tmp_tmp_msg_0_1_0.satellites = 186U;
    tmp_tmp_tmp_msg_0_1_0.cog = 0.0967136989798;
    tmp_tmp_tmp_msg_0_1_0.sog = 0.268259547459;
    tmp_tmp_tmp_msg_0_1_0.hdop = 0.612120110951;
    tmp_tmp_tmp_msg_0_1_0.vdop = 0.966660029898;
    tmp_tmp_tmp_msg_0_1_0.hacc = 0.464047342392;
    tmp_tmp_tmp_msg_0_1_0.vacc = 0.969831055316;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.831837237825);
    msg.setSource(63607U);
    msg.setSourceEntity(68U);
    msg.setDestination(63785U);
    msg.setDestinationEntity(224U);
    msg.command = 232U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TAVFIGRHKWLOMVLCKSBYEVZBFDDNLDNQOUGUNLUKLUYSSLXQTFVWTSBJFOKK");
    tmp_msg_0.description.assign("HGQLGXKGPXYLBQXJVSFBUDPUKWZFZYWLUOZJWDENZNCNBLMTZMNTOMOYRRWISMGUOWLXMYGYOIBSAAGJYOEKCDAQAIHZKXAXNFMITPHBAMMV");
    tmp_msg_0.vnamespace.assign("UCYTXPTWACQVRXYOMRLTDFIAJRFAAEBYMTJJSEMGMBNXQNKPWXJ");
    tmp_msg_0.start_man_id.assign("OUMWPPHSXVZYVBTMPLDQJYXAPLPNADVEFWXZBIYOUJMDXRCKAOZCFHCZKRXTNWJDVTAOHENIQKLOMKFEHNPTYZKASQLSSCLDIXHJEHUAZBDKRJAN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KFVVNMZRNTOQFDRQOGKECKRHOVCXPRAUHITWMHXCPKANBPMVGWAAUMYKAJEWOGBOLLXWSTSURZALEUSIOLRFXJEDVYIRPJCREAEHVPXQYYMIHDJ");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 15374U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.148269253679;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0568912401739;
    tmp_tmp_tmp_msg_0_0_0.z = 0.621562551975;
    tmp_tmp_tmp_msg_0_0_0.z_units = 203U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.943468741076;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.533743014188;
    tmp_tmp_tmp_msg_0_0_0.duration = 59477U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.972258203498;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 251U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.121902526269;
    tmp_tmp_tmp_msg_0_0_0.direction = 43U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("EPNKPWKTNEYWKKVYWJZJBUFEVGCZZDNXDRISLMOYLSOIAGMIUPQDDIFJHGBHXDTJCRWFDCSGCAYNJYQIARFKENROPDZEKGMVPRELMVOSUHMZETBCBTVQIZWWXWBXQXWHZVFLHHGOYYKIQMUNRTMRUHYRGHVJLGSUPOKISCNRPAZJSIUCAQXHXEFUBALTHXOSFYLWJLPRQJWUEQBFMNTGBZYAAS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::CompassHeading tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.076547457286;
    tmp_tmp_msg_0_1.ang = 0.355201509349;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.680220430603);
    msg.setSource(12924U);
    msg.setSourceEntity(127U);
    msg.setDestination(57497U);
    msg.setDestinationEntity(207U);
    msg.command = 190U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QMQOHYWYLJWISKUFSAVMZCOBXLFGTHMYRXAGHONIPMRMYRJNGLKUEUIPNWZDAKLTZUGXCNQVXDGNEDPMTCK");
    tmp_msg_0.description.assign("DIAEVNSTPMKEIEIHHBPBYTMPLPEKALUNJUGHCQJUPFILTQZCKSLDOLZVDZWZRQBJVKFSYDNVSSPPCRXHXHJNDJTHYUVTRUXOUEOVHT");
    tmp_msg_0.vnamespace.assign("IOUIZVEJTPSKBGVTDUBCCLKCQKZQOATKCJKTCJAWEZXPGITFRKKAAOLPZPUXXRDCBHVSRRLOBEJZFMZQWDWGMSMLXCFOAXFGVLYPJYSBVXSDSPQNZGXYYFMUKEDBNOHNOPJETZNPNNWYIIJCVMBODZIMGWRHASBCEATYOYDHWGFJCMHKMQHQOFSUJGQEYAXINTSIRLFHIERWRHWLWNKGV");
    tmp_msg_0.start_man_id.assign("PIHUGNPWLBWWNLRCBBUXOVGFVQJQCRJDYCRUNKABNZIYLOIJRMVFEDOCKVBFAWQTRHSGTIIGXPGSMNEOCOAAYQLDXFEIKJDQWHRVJUPFZACXBDDXCSSMPVCMBEUVGKZNWIEJFJYRZZXHANRTCYGPXSWKYIBPRTDFPHKTHGETGQUHOHSSJJZWZLTVKACKFJDIAIUYUSNMELUMQWNLLMTLFMOMGTQZQS");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SMFPCXKZCUPAZHSOHARXTSUIGOEVCEKPYCPXMTAHHOXWORIRIRDZGKKYZDDZBQVINHCUTJFVCALWBBIKVRYGFOZFODDJNWBLBQMEMCJQBEKSMBQUUPLVJIKLBJCSJDAAGHYSWEOWWDMBVLRRQNIOSMEGXNKJENPYITFYWGLPQIUQZPBCXJDVZEUGKMNNRQJTYELTGJWNYWNQFTWNUMKLARUAHVGYDQDUPLTARMI");
    tmp_tmp_msg_0_0.dest_man.assign("QKJHVCXCVGBLCPIUVIQALCWRSCRUOLQEWOZTQBXGAJKMXHDPYANJRZXJLJINZZLSPPQTSOMYKQGMDNENMSATGUCMVD");
    tmp_tmp_msg_0_0.conditions.assign("SWWVASXJNSEJNEAYZWLQFKUNOMWARUXKHIIECRQISNTXJOBEPVJVRMFUCWG");
    IMC::Formation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("JVLHNSPOUFDXHLQMUEKZMRXMETVPTOKAWFSQOIC");
    tmp_tmp_tmp_msg_0_0_0.type = 116U;
    tmp_tmp_tmp_msg_0_0_0.op = 166U;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("GOJFHCQFWXCVUMMDTZWVDLIVYYPEDMNNKWTSMRRA");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("MWWHIPXIMFGLGGFPKRQKUAMITFEAIFTQBTRUBCPCZKJKPODTDNYHJSLEABDAGXZCNPEMJVPWRORUBWJIPXEVQRTCFXNHEZOUTEKXCIZLOZCWVSVGXOPOFKJULSYRDXWYBCTZOQZNPMMYFYFYMLNXTQVQBZNWEMRFHBYCYJKSHZLJHSNNUUPHZQLRQKVISARBCEJJUWCAASIDAUMLBTLTIEAYHSAWNSQDGGKFVERXMONDBGKYV");
    tmp_tmp_tmp_msg_0_0_0.description.assign("DEXCYZKOCWGFUEIKUJLGUJDRNAROTBHUVXJXOXCKUFVQTBPLXOLJOFNQHXVZQHDQIHMTOUVTCYVPRCEYDPBJYZMGORFOZVDBCGGIVVAUXQAGCWZDXIPWLENYBWQNAYBTWMZPTLFDNK");
    tmp_tmp_tmp_msg_0_0_0.reference_frame = 47U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vid = 33972U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_x = 0.106833854515;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_y = 0.725296797349;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.off_z = 0.445847154065;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.582015141019;
    tmp_tmp_tmp_msg_0_0_0.leader_speed_min = 0.688073380563;
    tmp_tmp_tmp_msg_0_0_0.leader_speed_max = 0.905675043233;
    tmp_tmp_tmp_msg_0_0_0.leader_alt_min = 0.624109842544;
    tmp_tmp_tmp_msg_0_0_0.leader_alt_max = 0.818053613111;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.858309147096;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.766644356926;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 8330U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.139187186288;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 15098U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 58696U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.883153359684;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SOIWXSMNCLQVLGWOXMHCFYFLMLORFHZKRDGRXKUFADDBILOEAYBZZMSCMQYIAJTCJRKDBPUJUENEFGYSJTFIXHPUNCEHWBYAAXFLZDEIMXJMNLLUN");
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.233198060683);
    msg.setSource(28376U);
    msg.setSourceEntity(195U);
    msg.setDestination(64686U);
    msg.setDestinationEntity(156U);
    msg.state = 85U;
    msg.plan_id.assign("ADLLCXUKTWMMSULJCQUUOAGABCIYXFQJYWXRDVPFHRPCJZXGRSIKCESWMVQTCRYFNMBFRDBDTPVOLWHLWOAKVIQXECSYHUTQGNMHLZGYGOPVIEFSAJYISAZIBDXKZENEKDZBKREVZPCNNPREXEVA");
    msg.comm_level = 43U;

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
    msg.setTimeStamp(0.653213887184);
    msg.setSource(4210U);
    msg.setSourceEntity(113U);
    msg.setDestination(28525U);
    msg.setDestinationEntity(21U);
    msg.state = 88U;
    msg.plan_id.assign("IUJBCPACMAKGHPKFOJAXEGHKHNTTJJJOSSABIMRWXYKLHDZBTMJIJKBZOQZUVPPNRYIDDLEUWHFUWEGJYCXKWAVCCYOQGCFTISLTNJAZVOQFBTLRIRFVAHZXZPESNQFYWZYBDHAVVSQRQACWSWDPYVBBHYRXSLFUUEQMLWBQGUYCIGFWIGSPKPUDIMMINNTZXVNGBGKTMVOOMLYXWLHCKPCLHFTQXDERZRETMQORLEONVENENDZDR");
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
    msg.setTimeStamp(0.671103910375);
    msg.setSource(35429U);
    msg.setSourceEntity(41U);
    msg.setDestination(65445U);
    msg.setDestinationEntity(123U);
    msg.state = 178U;
    msg.plan_id.assign("AIVKHAMOYGQGQNMGBQOXEQRNI");
    msg.comm_level = 148U;

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
    msg.setTimeStamp(0.947062251102);
    msg.setSource(53474U);
    msg.setSourceEntity(65U);
    msg.setDestination(40142U);
    msg.setDestinationEntity(174U);
    msg.type = 79U;
    msg.op = 160U;
    msg.request_id = 8263U;
    msg.plan_id.assign("QODXPVWNWTCMYDYKRIHPZBTNMKYCQWTEEV");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.756732863318;
    tmp_msg_0.i = 0.181222329274;
    tmp_msg_0.d = 0.78745949879;
    tmp_msg_0.a = 0.533997614142;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RZDZHGNUIZHEWINCBBLAPLYYITOPJEMMPTYMFLWHJAXPICCNEPZPMFKXEHBGMYQVRCJYBXOATXDQKIQVJDXSGKLVRHUJBTCJQFZQYGALSFSVOBWKJFBDLZOTFFROKRMOVAFUNKFPMCCSLWMDWORILGXZKCVWJSKVBBDGHEATIAUZZTEFRIYSKQLNWRQPXDNWPEOOTSQDTYAHDRGXQMHYPSRZGQUU");

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
    msg.setTimeStamp(0.20473226722);
    msg.setSource(64591U);
    msg.setSourceEntity(223U);
    msg.setDestination(53544U);
    msg.setDestinationEntity(17U);
    msg.type = 183U;
    msg.op = 151U;
    msg.request_id = 40346U;
    msg.plan_id.assign("MHVYDTNBFHKQYCPTSXIQQKNBPDPCMUGITTSDWFBRAJWWTGVCDSHERVHZKXEFOZDVADRDVDQNBCMLAEXJPKOYCZUUIPLBGSNPZEQFDNWUOLVAYKFLQMWLLANURRBNKAZFQISUYRJXEMVAISHWSQGCHHJBXYEARUATJKZYIPGCMUOJTRMSEWGHMNTIGRTJOVISIWOYXXXOHFJNV");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 215U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FVHUVDWHOGXVYFXDIIV");

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
    msg.setTimeStamp(0.454313692394);
    msg.setSource(25247U);
    msg.setSourceEntity(37U);
    msg.setDestination(46564U);
    msg.setDestinationEntity(77U);
    msg.type = 148U;
    msg.op = 2U;
    msg.request_id = 51422U;
    msg.plan_id.assign("PORQIPTJHSRUOKTETPLMGPABZWNTDRYCMYNFKHXYMAMUQVTACFLJDJWQELDCZDSMKKFSSMSZESFIABECVUXUFWHHKYQKWEZXVXEPUKGNHHTPGLGCTZQYKTMNXAYPREXJNJSHGBZWLJVNCRXAEEVWVHZYDTWBDNZCLPJUJSJK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GCEJUEIKKQPAZKKFBSXDPVNZUUQRSADRIDJBMOJVEKHHHPSVKFGGZFVYVVEYHAAIRMFJLMJLUUHWIPVGBWBRPIXCCDTDQYCYNMTAFCOSLZXKGRWRXXFZEJBOZCDDUYLWXEPHXSWOHOQBYLHYIPGMGPTUWJSKETDMXFXOIHNTOHYAATGVLSKMAMFVNBQEPENTZEQFTNBNALLLQWY");
    tmp_msg_0.value.assign("WSTSUVPHBDQZSXFAOKYYGTCDXBWJYUCIFQTZNCKVMLPOFXZVERHKLRSRAPTBEIRYOJJJOSIPNBKCZROVLJLHXOEIJHQZOCWTVBWNPDPFEQPRSKDWMQYGGHNEZRGPJMMCAYLXUFVKQPTUDQGDFGMUFGKETKSOIJNMBYCQXEN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EOTFDNSZBMNGZSYRUNZWWMBJPBWPFRKIZRLQHCHYYQGUHDNBFGPQCEFYOLKVFZBHIZSSVIFMALKEISBCMOUQVTYCBLTXCVAPJGAMVZCMJKQCIUYXLZDSUIPYCODHKSGROXSQNXCNDFGRPXIOXJTWRUVBEYTJEGZDBWTYWIPOTBMJMMZULJQWEPPOOILAWEFDXFNJQVXRDFJAXEURXGKLRJPTHKHUVHAQQS");

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
    msg.setTimeStamp(0.834701669924);
    msg.setSource(17615U);
    msg.setSourceEntity(194U);
    msg.setDestination(16137U);
    msg.setDestinationEntity(34U);
    msg.plan_count = 5633U;
    msg.plan_size = 2243898272U;
    msg.change_time = 0.0894067517962;
    msg.change_sid = 43776U;
    msg.change_sname.assign("PGRCQCXRWMSHNKFJZMNGIGYASLHEDJKQUBBRXCBLJZFYADAPXGOIURXGELBOYMABPKMVUTALPVPLXKFXQJYPLRHIWNWCBEPBSOSCKRRNNTGACOJNBSABUPSGOGILEJOHQKXNK");
    const char tmp_msg_0[] = {111, -91, -67, -105, -112, -122, -53, -44, 25, 101, 46, -106, 123, -24, 73, 103, 58, 19, -59, -69, 20, 41, -39, -53, 95, -2, -90, -56, -24, -94, 58, -92, -97, -127, 93, -92, 47, -41, -117, -16, 85, -102, -2, -109, 85, -77, 77, 88, -120, 65, -75, 15, 28, 5, 34, 11, 42, 22, 72, 99, -50, 29, 87, 72, 5, 90, 71, -101, 80, 36, 33, 50, -97, 53, -10, -62, 24, -11, -72, 5, 18, -66, -7, 98, 20, 3, 7, -1, 96, 69, 74, 86, 116, 39, 112, 39, 83, -81, 103, -100, 59, 56, 13, 79, 81, 121, -94, -21, 113, 22, -4, 17, -103, 41, 36, 107, 4, -12, -48, 20, -92, -125, 93, 108, -29, -9, -50, -54, 48, -26, 29, 33, -17, 61, -17, -82, 101, -34, -44, 99, 19, 123, -25, 122, -47, 30, 117, -57, 43, 87, 8, 47, 53, 107, 45, 18, 83, -74, 47, 33, -91, -115, 1, 113, 72, -71, -17, 116, 79, -6, 2, -118, 113, 11, -102, 101, -110};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DZSPTZRWJNRTFPVKDVQSMGLCLSIFBCURONIXGRASXXYGNVKVTHEHBHPGEYOXAEWKYEYOSGJMANSCDKNIFHSDFKIUPEBEINOMNKGEQTZNYNMCEXXQRFGSWZOZBMDXJASMZVXBDTWTDJXROJYLRIUAVIRQPUGAWYFLHSOWVCUUKZFQIFRHUMTBVNQHTCYUKZLOGQMDFDQILPCOPLCUY");
    tmp_msg_1.plan_size = 64168U;
    tmp_msg_1.change_time = 0.601806277939;
    tmp_msg_1.change_sid = 20284U;
    tmp_msg_1.change_sname.assign("LUOFAXBEVWDBNGDYYTFYYBINDRRSEVWKHPDMLCUAGGQIRPTVETCOAIVQKPPCHEATSRABYBAWSKXZMYYELNQKJIXGSSANTRYBBN");
    const char tmp_tmp_msg_1_0[] = {-82, -125, 0, 57, -128, 71, 44, 78, -74, 64, -79, 113, -77, 10, 122, 110, -46, 47, -112, -100, -116, 30, 68, 23, -117, 90, 77, 50, 28, -124, 64, 30, 90, -119, 56, -122, 33, 119, 15, 109, 84, -50, 120, 9, 88, -56, -38, -76, -11, 43, -11, -92, -34, -29, 4, -73, 120, 43, -74, 58, 7, -59, 81, 112, -30, -79, -88, 21, -62, -42, 43, -125, -80, -28, -126, -98, 48, -127, -53, -128, -27, -123, -5, 108, -27, -109, 87, 2, 84, -3, -87, -112, -55, 17, 27, -87, -10, -23, 1, 7, -26, -21, 119, -67, -113, 59, -51, -9, -25, 97, -72, 5, 49, 94, 100, 6, 44, 118, 112, -27, 22, 100, 28, 71, -26, -15, 73, -37, 4, 99, 40, 64, 66, 113, 26, 18, 120, -104, 65, -51, 76, -51, 107, -91, 12, 86, 106, -122, 62, -18, 108, 50, -39, 40, 84};
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
    msg.setTimeStamp(0.625272095738);
    msg.setSource(49300U);
    msg.setSourceEntity(160U);
    msg.setDestination(56776U);
    msg.setDestinationEntity(48U);
    msg.plan_count = 24962U;
    msg.plan_size = 2458190688U;
    msg.change_time = 0.650883332073;
    msg.change_sid = 62622U;
    msg.change_sname.assign("DGWMBOXKAESDZXGZASDIERHWXXDYXPPCFVALSYFWCENNCKLNGTTDSSEIUHJBUVLTULECEAMUPYSRZCFQKPE");
    const char tmp_msg_0[] = {93, 12, -90, 97, 22, 50, -30, -30, -70, 50, 17, 2, 3, -65, 46, -128, -2, 111, -73, -112, 58, -120, -105, -12, 106, -84, -5, 100, 16, -67, 122, -110, -46, -19, 98, -90, 97, 10, 93, -16, 55, -117, -124, 93, 31, 103, 21, 19, 85, 123, 80, -80, 54, -37};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CZRPZKOXYAHSQWYBHLVXEBPGMXXFVCQOWJZLCDZFQFTFUVMHIOSNSXSSTMZKIEATOWFYETABNNLEGAQZCDMSTNSZGUUDUJJHHKQWRRJQJNKATELRHBVSBCYYWVDXKTLRKIMUGOUDIVDPBVLNFGNKFRHYYCMENEWDAADSUQOKOJBLCTWBPLUZWYYWJOMXVHUQTQNGGIPHGEIZVMQIWABPCPXRPKDCGNEIVZCJE");
    tmp_msg_1.plan_size = 61704U;
    tmp_msg_1.change_time = 0.747057821649;
    tmp_msg_1.change_sid = 63104U;
    tmp_msg_1.change_sname.assign("XBVMEDSDJFGDTCQJVUUBJFVFFNAIOXAJFPMFRUPSZWBXIPMIIILGKJLQEWDSLQUXNIZAPOJVWCXMMGHYYKLJUYZTQFUOEVFQIRCAACXZTHYAWKWQTVBMFWPCGLOAOHKKLYKNNADELEYYYYUIJZUKHECKSZEHCGZVFJNPSXMLSWCDAJPETBYHNGSLHKNXTHRCOORVKVGLSPRGGQTCRTSEWNXQRDDGIMVQBZUNBBPZWIHR");
    const char tmp_tmp_msg_1_0[] = {-112, -54, -3, -100, -90, 32, 81, 117, 90, -62, 64, -87, 115, 14, -88, 85, -72, -45, -48, -88, 34, 112, -93, -44, 93, 57, 61, -79, -43, 6, -83, -100, -115, -19, 42, -39, 70, -1, -67, 104, -75, -46, 48, -9, -121, 68, -81, -120, 24, -34, 113, 70, -2, -119, 120, -17, 116, 59, -104, 23, 70, -17, -71, -63, -83, -5, -102, 37, -69, 116, -34, -77, -124, 63, -26, 91, 87, -88, -52, -101, -102, -91, -2, -83, -92, -66, -113, 62, -6, -66, -36, -117, -95, -92, -7, -4, -94, -13, 64, 79, 60, -22, -75, -85, -55, 71, 89, 1, 10, -21, -11, 102, -83, -125, -93, 31, -21, 42, -119, 113, 121, -54, -89, -59, -84, 8, -96, -112, -63, 111, 84, 114, 98, -1, 65, -78, 105, 40, 30, 0, -50, 14, 31, -68, 25, -8, 3, 64, 40, 100, 44, 123, -45, 97, 106, 74, -56, -72, 115, 121, -3, -29, 33, 12, -117, 94, -101, -22, 89, -93, -23, -22, -118, 7, 0, 33, -118, 126, 43, -118, -81, -99, -118, -66, 96, 75, 126, 63, 62, 3, 1, -88, 101, -31, 125, -105};
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
    msg.setTimeStamp(0.25591834965);
    msg.setSource(32449U);
    msg.setSourceEntity(68U);
    msg.setDestination(21364U);
    msg.setDestinationEntity(62U);
    msg.plan_count = 5425U;
    msg.plan_size = 1374328949U;
    msg.change_time = 0.811143524184;
    msg.change_sid = 42873U;
    msg.change_sname.assign("FPKNHDTZBKOISXGBLLEVBEIGIZFGEXRHDLWZCAVFOKWVYVMYLPAGKJDXPAOXYUFGJJKSWBIVNUGBJDKJMXTVQMILOUHCOMTP");
    const char tmp_msg_0[] = {5, -8, 34, -44, 99, -91, 122, 2, -57, -120, -82, -54, -25, 101, -102, -95, 42, 97, -56, 6, -87, 81, -48, -78, 67, 13, 38, -53, -60, 68, 92, 47, -33, -12, 60, -92, 118, -16, -114, 36, -89, -49, -90, 40, 123, 41, 11, -93, -28, -66, -96, 25, 21, 79, -50, 81, 106, -60, -63, -45, -125, 94, -29, 90, -18, 84, -115, -3, 45, -35, 72, -123, 106, -58, 42, 111, -54, 93, -18, 64};
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
    msg.setTimeStamp(0.0228578154523);
    msg.setSource(28963U);
    msg.setSourceEntity(88U);
    msg.setDestination(58255U);
    msg.setDestinationEntity(220U);
    msg.plan_id.assign("IMMIEDEFGSDOIFXWAQVMPTXEJXQGKRJUCZFNWLZDROGPJRZRPQOZBYIUENYUVVOXENYKICJFLPTGVSTQOSDBTXSUDIKVUSIFPLHKNWIIEHSTVRWHKYJHMPKYCATUEKQMSACTYBZODG");
    msg.plan_size = 4618U;
    msg.change_time = 0.983818528577;
    msg.change_sid = 14297U;
    msg.change_sname.assign("XQZSMWPJRRZCXPGVWDSYNFLUPATFCHGZDUKNXSJSHLSOOVESDXLGDIZUNXYQUVAHNZRYZFFKZQMTNGZQYMTAPFXHAVMOFSUKBYKYPJTFVFICKYQAWPJAHTHBAZMCRBVVBOPSHJAGILWGMXONGVPTCQENUQOHDTNJLG");
    const char tmp_msg_0[] = {-65, -26, 20, -95, 33, -25, 59, 72, 15, -126, -42, -16, 119, -56, -57, -97, -27, -48, 24, 49, -32, -59, -8, -82, 10, -19, 77, -70, 6, -19, -23, -54, 39, 50, -27, 16, -6, 18, 96, 109, 30, 5, 10, -92, -113, -124, 119, 1, 92, -112, 45, 96, -126, -41, -80, 67, 34, -60, 100, -64, -113, 69, -112, -42, 112, 78, 57, 79, -16, 29, 33, 77, -41, -11, 82, -34, 80, 109, 19, -17, -50, -21, -52, 126, -56, -91, 10, -48, -35, -125, 29, -39, 35, -126, 87, 44, 13, -117, -73};
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
    msg.setTimeStamp(0.792202810073);
    msg.setSource(48728U);
    msg.setSourceEntity(100U);
    msg.setDestination(1420U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("QNUPXCKTEKZFUIPQNGMRXEAIAODSYNPPEVJBIQJVLIHGTXCDPEVKBNRCGOKWBOIVZFQCMKXJWUVHHTXSIOHBBACLLEYGLRZJYTQKWZYOKFBKHUJJSRUTGECBSEAHTZZVXGT");
    msg.plan_size = 29422U;
    msg.change_time = 0.394813764805;
    msg.change_sid = 9653U;
    msg.change_sname.assign("MTTZVXCOSXNUVHKZWSZBPEXKORWIRAAUGJBBMEXRGLVPDIRSBECFTTYKGDTQRHPKCRXZBDYBWNOTSOPPNQEKYQKGXIYXISOGHOSRWTMZNPLSOZOLUDVYQUQCJUUHSUEVZIEQVTNPRRSNYEXGBJAZGNNWTMLJEVSLICDGLMZCYWVCIFBRMJHQBFAFPJFUOAKJMMDGFCKDWIWPEA");
    const char tmp_msg_0[] = {-11, 62, -100, -57, -63, 17, -75, -59, -86, -17, -16, -10, -87, -75, -68, 79, 76, 105, -106, -19, 20, -79, 83, 44, 48, 123, -77, -101, 102, -69, 57, 56, -11, 85, -5, -123, -71, -81, -31, 105, 56, 83, -38, -118, 102, 61, 68, -75, -46, -118, 15, -114, 67, -43, 27, -35, 58, 85, 112, 124, 96, 70, 45, 67, -113, -39, -13, 61, 61, -59, -20, 111, 7, 20, 76, 27, 34, 47, -34, 114, -115, 107, 108, -118, -20, 110, 107, -89, -17, 70, -18, 36, 23, -13, 121, 55, -84, 81, 91, 60, -44, -31, 67, 106, -29, -128, -32, 67, 116, 62, -55, 111, 36, -74, -47, -8, -115, 50, 71, -86, -32, 53, 98, 50, -85, 98, -60, -44, -119, -71, 119, 116, -25, -16, -33, -42, -74, -10, 36, 41, 63, -97, -7, -25, 76, -56, 44, 24, -15, -110, 0, -15, -36, -72, -110, 84, 6, 44, 51, 51, 51, 31, -34, -7, 38, 11, -126, -93, -126, 120, -119, 102, -14, 123, 121, 44, -50, 8, 86, -7, 32, -97, 89, 78, -84, 95, -55, 74, 98, -120, -128, 90, 66, -66, 16, 55, 90, -127, -126, -38, -64, -113, -39, -73, -32, -112, 20, 122, -115, -64, -55, -94, 120};
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
    msg.setTimeStamp(0.237832426432);
    msg.setSource(46374U);
    msg.setSourceEntity(178U);
    msg.setDestination(20903U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("RDGHFJPTDUOIEMIFEOWIJTTDNASKQHWMVGYPKEFDDYKAEVCFWZOGRUPYJKKPTAPPFESFTQYBFRANNBLHFWKURNZCYLNZAGHPHQOUWAIXJTBGZQMDSNGVLCIWXGRMLVDSSZHVITCLUJCCRXAIOPIZSZHSMMVPCLDPVVVEFQEJMWBAIEDSWXEYGBRIRBYDXBLLKTFQQ");
    msg.plan_size = 13782U;
    msg.change_time = 0.960797145869;
    msg.change_sid = 46548U;
    msg.change_sname.assign("EOJSXCPGVOBOUSYLVUAEIESAKNAPKPDZYNDOKIMTTSTYJODPGXJFNMEPLOWTQYIUADGHEPCOJNSTLUDBWCAHGFMKLVZNCHHVVHJGIMARBZBLVWKAFARTJRQMIYKWHFKXXCFBSQWBQUHMRREKIGDJZRWDUBCQPXBOYSVQTVWKNYIGRUI");
    const char tmp_msg_0[] = {-85, 116, 64, 7, -105, 86, -61, 110, -14, -113, -78, 96, -66, 28, -34, -24, 96, 47, -13, 11, 4, -54, -71, -3, 48, 104, -42, -92, -60, 75, -10, -84, -20, 50, 38, -36, 50, 36, 107, 63, -27, 26, -101, 37, -47, -85, 35, 0, -94, 59, -71, 11, -114, -98, 82, -122, -37, 85, -41, -109, -42, 124, -20, 36, 48, -92, -103, -59, 38, -128, -105, 40, 92, -51, 37, 36, -73, -83, 115, 105, 125, -61, 17, -36, 111, -86, 32, -37, 62, 77};
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
    msg.setTimeStamp(0.936459259521);
    msg.setSource(19637U);
    msg.setSourceEntity(39U);
    msg.setDestination(44913U);
    msg.setDestinationEntity(97U);
    msg.type = 198U;
    msg.op = 162U;
    msg.request_id = 3112U;
    msg.plan_id.assign("HJXEMHVHCWDDTARUSQOQMCCUGITDLBYOKRBMEKX");
    msg.flags = 65016U;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.18308883554;
    tmp_msg_0.roll = 28960U;
    tmp_msg_0.pitch = 30852U;
    tmp_msg_0.yaw = 61146U;
    tmp_msg_0.speed = 11482;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DSRIANVBFCRLDDAJWNFVBRTPPURSDNDTHZOXAITSAXFKYPEZMFXVMZKJHQOQMPGMDRJLTNVHTBYMELKNFYLOVHTTIKMYISQWKBGZHYGXSNKIKPBSDEICBOCXALQT");

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
    msg.setTimeStamp(0.668151153863);
    msg.setSource(61378U);
    msg.setSourceEntity(9U);
    msg.setDestination(16130U);
    msg.setDestinationEntity(23U);
    msg.type = 148U;
    msg.op = 76U;
    msg.request_id = 10650U;
    msg.plan_id.assign("FXHTBZFDCXRNOWJSCSZFNMUZXTVMNABYBGHQIRBMUNEVKRSIQRJUVJDIDUAHSIVGWDALRZHHVIMPRVPYHJWCAFGSQODWDQCLRKFXWGMWHCXTHKPUOABTYZAEVAGBNFOMJEPGXT");
    msg.flags = 48253U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("XBFDWLGQTFCFHIIMEDFATNVVITFMHZGGYGKRUVIAVUSGRAHGJRDIVQWKZOKHAXCDJPCQTBFSMRPUQIQSUAEYUMPTSMHBQYROUBWYPLJVNEPLLTLFMSXFJQNECYOUXBXPCKWGENZTRLCQEXLZPAWGNPQSHFIAOEEROWLXWBHOAPYMHK");
    tmp_msg_0.lat = 0.0778961411196;
    tmp_msg_0.lon = 0.541146812398;
    tmp_msg_0.z = 0.67205647923;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.cog = 0.100500691295;
    tmp_msg_0.sog = 0.346707487586;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NWZKHWFZZUSJIWKLUNCUBFLUCGQQHCDTCZJFWOYVPDTFRZZYLQPQEJRYMLARLOVSKWAGMIKWKXOZKUOVXMNVVDXRDHYHIITGGXSHEEUTRDHLMYTKQOMSBNJNTNMLIVGAVNZXBHLNCBQJGRHPBBSHSMYCKVGFOD");

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
    msg.setTimeStamp(0.557867480502);
    msg.setSource(16067U);
    msg.setSourceEntity(179U);
    msg.setDestination(49306U);
    msg.setDestinationEntity(120U);
    msg.type = 190U;
    msg.op = 229U;
    msg.request_id = 57710U;
    msg.plan_id.assign("MVJEVUGQRMPQTIUHAZDZAJTOFEEXLLABHNANCICGSQTOODRELBVLKNZNLDJTIFBXYSUFCKHFKVWPQXYAAPHHVOVUOGYZAZCYNKUGMQMBDZEZBDUGTQGSOJANGZFXCFHPDWIWWYWDYEESGXIKSIBTZMRNWHI");
    msg.flags = 34766U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 66U;
    tmp_msg_0.text.assign("UWALRTAXDTPENDWHAKYEFWHILFGIWLZVLYMPDIDHDZTSKWNIAXCDOLNZSRKSJGLJFBUQUEGHUPOZZXVABNQZEFRBHOWCEESGTREGCJDFTOHXRPBBVIUEHYNRBENNSSJXCZWYETUCVQJYANVVPILODICFXRFMDMKZMJAWITOVBUKBLGINCXJSWOQYTSYVHURBVGOKQCOXYJFUODACAXCYJMHKMSINVJSZHTQQQMGYL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MBNODYZEPVOQZIURFUXWSDHOQUKKFPMDIQAEOGXAKSSEOTDDBUKTWIWYTMGLAVVSSBTLFIHDHBYSSCRKECJBVKJOVOAOQHIFCBJOHYNXVEWHQYDHARJDCMXEAEGMKYUNPLGDLZPWHIB");

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
    msg.setTimeStamp(0.572475857751);
    msg.setSource(32385U);
    msg.setSourceEntity(200U);
    msg.setDestination(60312U);
    msg.setDestinationEntity(20U);
    msg.state = 41U;
    msg.plan_id.assign("PMHTRHMBRSNQUUYVBGTIEPKFIUACTQXBKSVPBELTDXFZVAUYHOUJFDFMLTYWYNNIPTRJHZJJXSJWBLNWRVMHNDXFRLWSVGGTIBUXQ");
    msg.plan_eta = 1020537859;
    msg.plan_progress = 0.900762337427;
    msg.man_id.assign("CRWELGKMGFIXRAONQEZCRQHZRTWYYJTGUXPNECHHVZCNJUSHFPLMUBDDNLLBEUZYFSMJMDAPZFMAXOEUVZGTITKEAJIEFVTUFATMPJBVFWCOCOFRRALZXOICGOSEBNVTHGYGQZSYFWPQJDBSLEXYFKWZCVTUXWOZQDAORHCDXGYUQSQYUNBNKLKMSH");
    msg.man_type = 37519U;
    msg.man_eta = 1262691381;
    msg.last_outcome = 149U;

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
    msg.setTimeStamp(0.438013336729);
    msg.setSource(21073U);
    msg.setSourceEntity(135U);
    msg.setDestination(35785U);
    msg.setDestinationEntity(220U);
    msg.state = 93U;
    msg.plan_id.assign("GQEHQWYOWBRIAQAOCCJPRHCLGYLDSLFDEPDOQJETWXPOKFIYJLQSLLPIMOBHTXHSAUUHEINIKWIYXOEKVZZXARDODFLFPPKJPELFHTHSFRPZBYFWCNSCANXWGNKHGVMFIDJFZVIMEUEQHTUNSGJBYUTVCBUMBPYNOINVJZERSZSCKQGRKJMXCBBMARWUMNTJGXSHKVLMTOUWQYRBZCTMXAXA");
    msg.plan_eta = 2099104267;
    msg.plan_progress = 0.0846734638128;
    msg.man_id.assign("LFLMEJKPNCBFFKCYZGJFMTQPAFHQUZLSJXZOZMUFAGURHKYUDGUEN");
    msg.man_type = 46737U;
    msg.man_eta = 1180117685;
    msg.last_outcome = 186U;

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
    msg.setTimeStamp(0.193003194199);
    msg.setSource(28331U);
    msg.setSourceEntity(242U);
    msg.setDestination(32599U);
    msg.setDestinationEntity(254U);
    msg.state = 219U;
    msg.plan_id.assign("USSFNAUWDKVJOSVYWVQRENGQBLTDJOAALFINABNJPMYXIFWTAGTPKOWEGLLJDHNZVLQMYCCIOBEBDJGSUPFLZHFONWUXOHMWVFYEBYMTFARLHAJTNFCZXYCNXDZZHHNJOQCHXTIULHESRGGQFYDKTGKKLGHMHXGZDYIIWMRREZQSOXIADTQBPUSPZAKOWKUVXMEWGJMRWXDBICMQIJVJCUQRKQEYCTCZKSATFVMVBYPPCPBOXUIRRV");
    msg.plan_eta = 429014219;
    msg.plan_progress = 0.47102890688;
    msg.man_id.assign("SQVIDIGWVQIQMGCYCGSRMEQSWAALPWLTBH");
    msg.man_type = 15677U;
    msg.man_eta = 1936372389;
    msg.last_outcome = 165U;

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
    msg.setTimeStamp(0.105409087594);
    msg.setSource(59459U);
    msg.setSourceEntity(165U);
    msg.setDestination(51796U);
    msg.setDestinationEntity(102U);
    msg.name.assign("DVQZEDILYXORTEMHATFUXQTNMKFMGNZOFFJSKCWBBODYVVPXRIDOOTYZNCNMQPWXSQGVAFYDBLOT");
    msg.value.assign("JXOYNWEWQZYKOINOAPKSWEBTPBQYP");
    msg.type = 41U;
    msg.access = 2U;

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
    msg.setTimeStamp(0.514244092418);
    msg.setSource(19497U);
    msg.setSourceEntity(159U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(37U);
    msg.name.assign("YEACLXFFSXSMVDZGTSTDDMQQHYZNSZYJXFURFLQJFVBDBDIGDZRJJOZTAPHQQLACKHRBNWOCSLVFAGKIUDEUIPKAN");
    msg.value.assign("WITXNYSTLKVVMJDVUIKKDFYJTBEVWWWVMIAQKFGBHNFUXUMVGLZZIKXBZIJYTKDXZMSCYHROTQZKTTIJEGDBAFCUXQRDSUXAPUASRVLCAAAWPKEKZQMTRFAKHJBOBOCCNRBICDPYNOJPYSXMCRLG");
    msg.type = 58U;
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
    msg.setTimeStamp(0.961796452462);
    msg.setSource(32578U);
    msg.setSourceEntity(252U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(1U);
    msg.name.assign("LNXXIRCWFXZKCRRNPTHFILPRTSRMMTQTBYJZABBXKGDZYMNXESWAPLGEEUGHIZAMRFBVCYXRXNIQCJPYJHMPUOVLVVVMQQGMCPQVFKPQWVCELDGBJSUVQEKADDFWWBFREGIBSFIZKZSWAPJKBAWAHOFTDTHAJGY");
    msg.value.assign("PSCRAWNCQMDUMGBJTHSECMYTKTWMBIUIRHLVRVIVOCTUSWQRQRDUTMVHNBDSBO");
    msg.type = 179U;
    msg.access = 21U;

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
    msg.setTimeStamp(0.462926155867);
    msg.setSource(39491U);
    msg.setSourceEntity(243U);
    msg.setDestination(14244U);
    msg.setDestinationEntity(10U);
    msg.cmd = 216U;
    msg.op = 197U;
    msg.plan_id.assign("PMQNARTVKUPUMCJNBVNOZIDXIEUBJJGOXVVQDSYOWALBDGRZIITDXAFXNQSEGTTWEFYZLAQT");
    msg.params.assign("ETCMQBMKNXEGQCDSUYWLULARGYTTNEWICFSNPPXSEJJHHVSOBPCYXORZVSOFXQICHIDWENNTWAYEKZBAFTWDWAKYOBUVDZFWSNGVZTLOLSAVGLHKZZDIBCUEQAPKHIYPXABNBZRAPTMUJIQKBZMVULTKXQQUGGXZRFRNGOYYFSAFLJRDVVBJCIMOPNLDIVCMXAHGIYMOJFXPLQIEXOBTKUHDNJPDHEJOSZSDWWRUPQHFHEFKR");

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
    msg.setTimeStamp(0.608236433162);
    msg.setSource(59179U);
    msg.setSourceEntity(14U);
    msg.setDestination(624U);
    msg.setDestinationEntity(104U);
    msg.cmd = 161U;
    msg.op = 123U;
    msg.plan_id.assign("HEAUZCVHJSYDOQJBHZEKRRIGFCSYREUXUNQQTCQANFUDYLZOFEZSUYQUFNTAYEACNKLNUGEAUYDTVWKRJOOKHTWAPDUZQRSHUCKIHLQGVFVTPHPYLADGOPZLETIZMKTDNBBVPHPSAWNYFTRCMMNXJPKXOXXNPVBWMLWSCFGYFCXVWQBMSJGRXWWYRRHM");
    msg.params.assign("GAXTFOOIKKPQFQOVMEVIAHYTQGLZBKNIHDYEHTPRSKSYDHPXDSNACLHZYUOOWEIRLXSBVUQLFPMDZICJRYHIFSLPNQETARQHWDRGODUJMMGGYCXACIEHBSUDFCTTIJFWMOGSFOEVKQBMQEUWWVSZXKPPRKUCGAXN");

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
    msg.setTimeStamp(0.00751406323432);
    msg.setSource(10004U);
    msg.setSourceEntity(26U);
    msg.setDestination(28255U);
    msg.setDestinationEntity(166U);
    msg.cmd = 193U;
    msg.op = 64U;
    msg.plan_id.assign("TOUBEINMFDRQYQHKCGTVPIHBLWQJVFAJQNXOPBFTJACGMLIXJGKHHHLJSSCYZEANZBHSZYTKISNYSJUJDELTVFGQYCIWRZMRRWCEQVQSCPQTZAJLQZDTRTVCUWOXZPNGCKMBOVORAULTXGAOCXKOKEBFGBXIEMYUIRKWWFGOAIHDZUMVNAPPBYMPJHKBMFROWZDMPRSFDWSYHDCMTEVFYXJGVPSPYHESXN");
    msg.params.assign("GRSORRGWEOFUDLEXTPHBNPJQTCJAGCUHINTOIWMDRFAYYXUZLAZVVXQBCIDSWJHP");

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
    msg.setTimeStamp(0.983818574474);
    msg.setSource(14709U);
    msg.setSourceEntity(133U);
    msg.setDestination(18920U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("TEHEIPSRTFGLZEDNSRARHBGSZQUTUYNGJQQMVGPQRDEUSRBJYIWXHSTALXWCDZMUNDQBEAVAMOVJNXMDWZXSHXUQEPPVBUQHXKHNAFJYKPNRWJNFTIRFJFMGGOFOPAAQFGXXGCYPWZRMDBZVSEMPBTLKOVDOBEHFWDLICLTSBIWHZLJARKOICLUKZOXQKKUNRDTOYAHCYLEWISGU");
    msg.op = 161U;
    msg.lat = 0.715156679071;
    msg.lon = 0.456063753439;
    msg.height = 0.524781087876;
    msg.x = 0.256194332784;
    msg.y = 0.206778909671;
    msg.z = 0.915550629611;
    msg.phi = 0.763080247323;
    msg.theta = 0.664276414881;
    msg.psi = 0.882474388233;
    msg.vx = 0.908352292929;
    msg.vy = 0.201563892377;
    msg.vz = 0.213710343045;
    msg.p = 0.302868112023;
    msg.q = 0.12417684752;
    msg.r = 0.425825760213;
    msg.svx = 0.663459058926;
    msg.svy = 0.94920388094;
    msg.svz = 0.470481845686;

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
    msg.setTimeStamp(0.621289752227);
    msg.setSource(49563U);
    msg.setSourceEntity(95U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("ADUDXYWHDHNGFKYREMVJQKISBVJLJEGHUAMPNLTSDGSMAEZJFKSAZVSMYORHYKDYTWYBGIGDUBLBHXNQBQTTWMJTTMRFNANTZFNOWOLDXVYOQOKGFYWGNZQVTUVQAJKJNYHPUEUIVMXGBJURSPY");
    msg.op = 223U;
    msg.lat = 0.431573819323;
    msg.lon = 0.117040245384;
    msg.height = 0.0783173247908;
    msg.x = 0.331743366186;
    msg.y = 0.440863188374;
    msg.z = 0.139600664549;
    msg.phi = 0.75035475802;
    msg.theta = 0.418727528244;
    msg.psi = 0.0181279123897;
    msg.vx = 0.685814634585;
    msg.vy = 0.778300282919;
    msg.vz = 0.0913786306397;
    msg.p = 0.532002411248;
    msg.q = 0.525536983314;
    msg.r = 0.810842814404;
    msg.svx = 0.26639975287;
    msg.svy = 0.783357866484;
    msg.svz = 0.0154756865318;

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
    msg.setTimeStamp(0.574461043979);
    msg.setSource(19438U);
    msg.setSourceEntity(12U);
    msg.setDestination(4221U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("NPEGPOUCUTDHEYDEEGLNVKKIPERHAWWYJCJLXQJSRABDOWNOMTIOOGQXYXZVLFAFSKSPRTLQXJJIYTMCFXG");
    msg.op = 121U;
    msg.lat = 0.935733930708;
    msg.lon = 0.129499735345;
    msg.height = 0.8363623237;
    msg.x = 0.245469321813;
    msg.y = 0.57781880864;
    msg.z = 0.44269827491;
    msg.phi = 0.562675738436;
    msg.theta = 0.531014175356;
    msg.psi = 0.523525477195;
    msg.vx = 0.808091272431;
    msg.vy = 0.563350432784;
    msg.vz = 0.358796946135;
    msg.p = 0.476898271577;
    msg.q = 0.26223183081;
    msg.r = 0.8867912397;
    msg.svx = 0.848268060306;
    msg.svy = 0.639138301764;
    msg.svz = 0.0033962907509;

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
    msg.setTimeStamp(0.885875432849);
    msg.setSource(11523U);
    msg.setSourceEntity(244U);
    msg.setDestination(42552U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("UNUAOMMBOYNIVWJSXETZLKADFULIERJQGWBBGVGDQVBMJFMUIILNUYHOGTCPKVDBTZXKLKQYASTLKKZQRPSGEMYCQRCRJWIFPDGIZJOVXGIUNHZUTNIXJAAXNYKAPNRHFWRPBOPDCZTSMMJVZWORSLOXEYHYSEUXTWYIIHGDSPFKMQGCBMWQUCENCCQBPKPNFQVPYRJHH");
    msg.type = 46U;
    msg.properties = 110U;
    msg.durations.assign("UZWIBYFYCSUCBUOKEOHPTDZMQJVYIJZJSDKKASIEGUJRCVFDBJKSPHMZXMYDHAUL");
    msg.distances.assign("CUIGNRVWPSLEXIQHJKVCMABZYQNTBNTVOXWOPCSBPPRIQHYVGAATAGHTMVIKSPDRLFCUKFJHYUKMUIDFMTWWRODGSZXUXDNNKJDNSYMZJPPGOYQHLOSGFRJOHRTNEPCWVWKAUZUSBBYUQGIVERZPJUHLIFSJCZARAWGDDNDQSXVELYXWBXKTHLEKZOMVJXCTKJXQYIBAZMNKGNCXEQUPGLRBMEJMECFRLCHWDYQVFFMAB");
    msg.actions.assign("NGXKSSGCSSQFWHFZOIVRLRBXEKEMTQULRYZSIRXDPWDBDPOTQLDNKVUHLWAWEJCKHVICPJNAWIIQVFRMZKPNTOURXOHUFBTSZUPQTYCHLTOGITSCHVDLXXVIYBUQJGFCSFOZDF");
    msg.fuel.assign("ONXXVVQHZUIYRGTLIYRJJTHFMNGGYIXSCDDR");

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
    msg.setTimeStamp(0.971003281219);
    msg.setSource(47511U);
    msg.setSourceEntity(38U);
    msg.setDestination(14149U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("SVJSGNUPZNEAIGLHIEWNGJXBKLQGVWINFFWSGDOBMAQYAPRTRELFPRLYXHRZFOFKVIATAKCHLVXMVDTYGWGUZOFZMRBABVXBRJNQKGDZQESECJUBTZZCEXTWKAUDHHIBPVBXDKTFFCCENIWDCCMHFZSDYQSYKGHFTOPPJUPSXTMOWAXIHRYCGYVMCEPBSQIHOLWTOXMOABRUWHJUQEO");
    msg.type = 219U;
    msg.properties = 152U;
    msg.durations.assign("FLUZCRMKPYKZRJMXVHVBHWNFYJUJXBURYDSAETDZCCZXHHIMVPWWYDAJBGYKCRKDAMWARBIOPWEHVUOPNKNFQDKHEMSIOWPLRLANUECATMNGQQEXUBLGAEIZGZBGLSSOPPBLQAQSHZGWLSDIGFJDEPLVQXFNUKOYTMORXAQVSEJIJWPDIOCTDYUPSYFOFGFNQBTGUCMJQKSTVCITWZVIOYCAGLCKFUNWKTDRVJNJNIOBXHT");
    msg.distances.assign("TNOMACWJEUDCZQMBLSRHVSKROROJCVQIPZLM");
    msg.actions.assign("GWKOOINCVFOQYYBPAZXBQIBZEGEATECDCQUQEOJULWSJKPWSAVFBGHBYULTFQDRBZDIKOZOZJPEWTUFRYKZI");
    msg.fuel.assign("TDXUWIENZDLJGSUGROZJFUAYNYHLAXROCKQWBPNACMQOYOMSFBJPDKSTDAKXTJMPZWZKLGHHCWJTYSVVUXGAMJPOYNYZVIFKEXKUKFRHBCLETHZDQSIRFDXTJRPUCGFLHIATMWLBNKWBSXZHUTMNPCAPBMYGYTGHBIVEXHTWMDNPI");

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
    msg.setTimeStamp(0.189626732602);
    msg.setSource(16222U);
    msg.setSourceEntity(211U);
    msg.setDestination(43550U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("FHHSPMPQNCWZZMWLIAQEDJRBQFOUVRAOSJTJSBNIZLBTXYLGNPJDEGHRZTMIFKDKSALPKSFSMOYRCUBKEFIRYHMYJMIE");
    msg.type = 56U;
    msg.properties = 135U;
    msg.durations.assign("IKFIOBAHGFOHDFPHINFYUDGDSEVETEXARTETVCYHHNKTYPXERQBPWDPDOPJUSCYFCFLNMUVOWMRIQTGYWEQNGUQNDRGRSKQLZXBGHHRLUETPLXXZNZYYCVLULNVNWQAYK");
    msg.distances.assign("UJAPPKNJSYRTZKJTOGWRAUOMQEFMNXQVUDTYZWLGACWKFMOVOLUYCMDTQOWGJZFBZCDCDVJQZQQVLFVRKWHBRLDQXMCEXHSCBRNIYBYNVGVLRHASASAMZNOHHEXGPKDKACAGTGBLFSRELCPEKXIFLBIONFNEXPPTNGXYQXDIELDCOHIIRMJGLSWXMNUUMFEVZUHUIHWKGWDBZXSFITZPDEORSJ");
    msg.actions.assign("BGKEYPIGYBZTPSRCWAKXYRESHVVVPAISFGCRCDILOQRADQDLSVMQGHHXBZRJVKLBYTSQXXLIKMNFEQMHGTQPOFZTIPUUBMVDOHKJBPDLJOFEZMJYWIWGJXOFZLYFNBSTRWPLJMTAJDCZAABCWQYBJWGFHMUAXDNZQUTHGN");
    msg.fuel.assign("CYDMNYYELZRWUJTQBDVNAUNJZNIKAEFOCOVTQVGBBBO");

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
    msg.setTimeStamp(0.594798043091);
    msg.setSource(32396U);
    msg.setSourceEntity(130U);
    msg.setDestination(38014U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.19488022605;
    msg.lon = 0.988572517912;
    msg.depth = 0.989211622002;
    msg.roll = 0.303224993737;
    msg.pitch = 0.00153930675927;
    msg.yaw = 0.445361079846;
    msg.rcp_time = 0.5705351475;
    msg.sid.assign("ROVFUDCWLFAQOSLHNCLDEHBQGHHHBIYRGJPZDNKEVARREOECQZAOATLXVEWFFCHNSMCPXMCKQHENWYBRZXWMPIYMIXDUHDVVJFQPZUJKFCMTBPHRYUXHZDPSLDRLFSWTGIONKMOUJYPYPQZWLTBEQIVSCJUAFGZIXZOJXSLLKTKONTEMKKAIDBJVNZWIXKRQIUGGXQTVGAPBPDGQFZYMOBCXSYGMJWVTBONREYWWSNUJEJA");
    msg.s_type = 16U;

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
    msg.setTimeStamp(0.510592857605);
    msg.setSource(41037U);
    msg.setSourceEntity(139U);
    msg.setDestination(63908U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.466638577718;
    msg.lon = 0.680100930861;
    msg.depth = 0.924666359371;
    msg.roll = 0.590677250194;
    msg.pitch = 0.503114764442;
    msg.yaw = 0.106503555228;
    msg.rcp_time = 0.621855559223;
    msg.sid.assign("KMKBCOCXGDHGOXAKRULSNYWEFELIHCQCHSJXFEMKYSDPXYQXRPRSRODQYJNWQN");
    msg.s_type = 105U;

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
    msg.setTimeStamp(0.878168389196);
    msg.setSource(46357U);
    msg.setSourceEntity(52U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.365143803674;
    msg.lon = 0.627746332912;
    msg.depth = 0.763520984268;
    msg.roll = 0.529795246192;
    msg.pitch = 0.477688747385;
    msg.yaw = 0.289599912059;
    msg.rcp_time = 0.551292054002;
    msg.sid.assign("MMBPGBFZRFJNABCYGALEBMEZLTOWFEQOJNMCNTQYEYQIOEJUILATNJFRVUYVUDJBGQRBXSDJZVNCHXVLNGYXZFGAXNG");
    msg.s_type = 167U;

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
    msg.setTimeStamp(0.706305869067);
    msg.setSource(41884U);
    msg.setSourceEntity(100U);
    msg.setDestination(53974U);
    msg.setDestinationEntity(97U);
    msg.id.assign("MUCUANJVWSYTEDWMVRCYJQNYAUOHIXPBRDKMCIQIJFBOGAXOQBRJQDHYXNFTQPRUOZCPEJJVMWWSFBQBFNYMYHNZJIKTZQXLHMMZZCHCFFBZGNOXTKIU");
    msg.sensor_class.assign("HUAAXHIEEDXMCQJYBBKJXLFNLINHUGXMLWZOGPKLXQEMRNJPFSOALOFLUHVVMGPBPBWSBFWROQSJWOWDIUZVHZSZXRCJYKNYTSHTOKKWIVVDBNVIGRTERATDSUNKSSBQHUFZQEXOUTVNFRIBYTDNQEGH");
    msg.lat = 0.103065797832;
    msg.lon = 0.866918513728;
    msg.alt = 0.0899411453917;
    msg.heading = 0.755307047494;
    msg.data.assign("BKIQMWSYXVKPKPJRIEGXYDPEVZINZUGWQKUSAWVTTJEPDDIKMGSJJTDAOLOKBIHPMUQQZSSZHCAFWSCLHHFLQGNCDOLOLWMFFQTLAYILASVLNTCOTKIMJVBXOEVFRNEBKKHSEMPRADHUAOFDWATVQWGBMBUYRCIZTDY");

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
    msg.setTimeStamp(0.356190211378);
    msg.setSource(13409U);
    msg.setSourceEntity(16U);
    msg.setDestination(38699U);
    msg.setDestinationEntity(101U);
    msg.id.assign("DWQDGEGPHVIEIT");
    msg.sensor_class.assign("TQSIURJVYLNTJEMQUJAQCIICLRDRWDSKF");
    msg.lat = 0.0250025721724;
    msg.lon = 0.342422822908;
    msg.alt = 0.818084672658;
    msg.heading = 0.733595809446;
    msg.data.assign("GCHJVRULBENWDDERQIZKZPXXNHJCAILVHUOOGUQIAMPOGZVMKVUMTJBDLGRFXMARZBELGJSJVYERCLHNSZKZDYRCKSCOAPWQWJQDBH");

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
    msg.setTimeStamp(0.979396512712);
    msg.setSource(5403U);
    msg.setSourceEntity(71U);
    msg.setDestination(13120U);
    msg.setDestinationEntity(18U);
    msg.id.assign("OXULQSEOWPXSMENTAXTSQVPBFNIMECBEYRKGOBGSALKNKEUPQXOXFKQYUZOHHRQRGHUBAZGBCANECHCHKJDLDHMXJOSGNRNPDTMPIYXFAUZNDZXJXWICZGZAJBTOUKFYKOILINOVBVEUCKYYDYMJIVFFPZQSHJHLCVWSEIJPTLVMQWAGKHYYDHEIWCXZJWQDIDULFMUQGJOTWBMAFDESPTTGRMRBWPWGZVYCLLZTBRANK");
    msg.sensor_class.assign("JADLGNKAQTKNTTSLWEQRLOKJNUBMEUSPMDMUIWXZAOZXOJQAQBWUMOYYKTWVGKNSEKJYFEMUIZPSCVWPCJSDYBGILRRSJRCSHAOHZIDEGEPLNFXXFDWVYJTNGBEFCBLOSHVNAYQRXEN");
    msg.lat = 0.311929545307;
    msg.lon = 0.784056947119;
    msg.alt = 0.812176527277;
    msg.heading = 0.607068868011;
    msg.data.assign("BTPEBLDYVAMCDXECOFEOFGPUSXKJRILQQSZQBTXNZICCMJIGNLGVMNSJXSFWYGIUUNVPFKVTKCHJOTOGJUYCHEBYBZRNPIIUYBRRYDVZZJMPQNNAOUSCJDHOGDLWFSQBSAJQIEHUPHARAWAMINOJZYXVBEDJRFYCSMAXALEZPTOVOAMFXHADPIRXLHKNCEXKKFKMFLGYYKXWHMSRHWETCHLOQUDQWBTDLTRWDWPZTRSWETVVGLVWB");

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
    msg.setTimeStamp(0.302972391167);
    msg.setSource(37385U);
    msg.setSourceEntity(91U);
    msg.setDestination(8063U);
    msg.setDestinationEntity(221U);
    msg.id.assign("GYHAWPJQPQPOWGEUQFSDVUEFNZQKLHGVBIVQZAFTJUBDPBYHMNNCHOTWLNOCPLOJIBNSODNDZPHERUWGNITTMXTZX");

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
    msg.setTimeStamp(0.0542720343584);
    msg.setSource(34880U);
    msg.setSourceEntity(28U);
    msg.setDestination(18361U);
    msg.setDestinationEntity(202U);
    msg.id.assign("LEGCKDFCUBPJMMIOBHNWMEFMYCDZBXMJTWTQAZTPPORRHJDZNAVNGLADCOAMWACTPXJILSTNEKKLVZCEGGWRIIOLUHMPQLEFEUEMORVUYQUBHGNRPBYSRKZZFW");

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
    msg.setTimeStamp(0.650519227727);
    msg.setSource(48561U);
    msg.setSourceEntity(174U);
    msg.setDestination(8918U);
    msg.setDestinationEntity(207U);
    msg.id.assign("VEZZTWAMCPMHFCRUOOAOGLXQDQDSXQHKFPJANMRSUFJITRRMSZHWMVNDSGOQMHAUQGRPCFEZZSPWQTXPLPI");

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
    msg.setTimeStamp(0.939879652302);
    msg.setSource(41034U);
    msg.setSourceEntity(148U);
    msg.setDestination(31463U);
    msg.setDestinationEntity(174U);
    msg.id.assign("VULOMGGSKZEVLTBLTGZQSEZWJXVQCUTDM");
    msg.feature_type = 71U;
    msg.rgb_red = 67U;
    msg.rgb_green = 194U;
    msg.rgb_blue = 203U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.592286513274;
    tmp_msg_0.lon = 0.345205172627;
    tmp_msg_0.alt = 0.113344990265;
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
    msg.setTimeStamp(0.56482355509);
    msg.setSource(13762U);
    msg.setSourceEntity(92U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(12U);
    msg.id.assign("UKHNIJLIAYZDBAUNXJJRWMBLQDSCALEVBG");
    msg.feature_type = 37U;
    msg.rgb_red = 226U;
    msg.rgb_green = 38U;
    msg.rgb_blue = 91U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.109024125696;
    tmp_msg_0.lon = 0.693746792606;
    tmp_msg_0.alt = 0.284237809988;
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
    msg.setTimeStamp(0.107775052879);
    msg.setSource(22161U);
    msg.setSourceEntity(21U);
    msg.setDestination(60311U);
    msg.setDestinationEntity(216U);
    msg.id.assign("XJCZNEXZXXWPTRZCJIZCBCPGUFWWDVSNOYG");
    msg.feature_type = 155U;
    msg.rgb_red = 142U;
    msg.rgb_green = 185U;
    msg.rgb_blue = 203U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.339910194482;
    tmp_msg_0.lon = 0.504521941534;
    tmp_msg_0.alt = 0.486564759885;
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
    msg.setTimeStamp(0.84131781314);
    msg.setSource(51861U);
    msg.setSourceEntity(172U);
    msg.setDestination(13373U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.615666609968;
    msg.lon = 0.126990274886;
    msg.alt = 0.420676770005;

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
    msg.setTimeStamp(0.79810240265);
    msg.setSource(640U);
    msg.setSourceEntity(44U);
    msg.setDestination(34161U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.230093541886;
    msg.lon = 0.881878706037;
    msg.alt = 0.887425681058;

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
    msg.setTimeStamp(0.314259760504);
    msg.setSource(9931U);
    msg.setSourceEntity(176U);
    msg.setDestination(59995U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.793962739282;
    msg.lon = 0.718291054122;
    msg.alt = 0.994713326934;

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
    msg.setTimeStamp(0.665599354728);
    msg.setSource(25564U);
    msg.setSourceEntity(121U);
    msg.setDestination(39663U);
    msg.setDestinationEntity(164U);
    msg.type = 148U;
    msg.id.assign("XZORXCBJQNLVEGUWAGEEUPUOOOMTLVJPMAMHGOJBIASRRHQFWKKRWHPMWCDNBTPSNUIILBKEXZUTWDTPJMVZINIHXYMPFNOVDPXJAGTBRNVVHQTAWUBRCSCIGGQQM");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 32377U;
    tmp_msg_0.lat = 0.709929913977;
    tmp_msg_0.lon = 0.014997836415;
    tmp_msg_0.z = 0.426806273026;
    tmp_msg_0.z_units = 80U;
    tmp_msg_0.speed = 0.0672283033234;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.bearing = 0.516199386536;
    tmp_msg_0.width = 0.760559954397;
    tmp_msg_0.direction = 41U;
    tmp_msg_0.custom.assign("MGUAHLCSKKQUFLJDNNTNGUZFDQBGBNPFCDXWWNKOSHMJRUXZJ");
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
    msg.setTimeStamp(0.849058837427);
    msg.setSource(43729U);
    msg.setSourceEntity(207U);
    msg.setDestination(59502U);
    msg.setDestinationEntity(179U);
    msg.type = 253U;
    msg.id.assign("EQLNRKBUOAKEMRNVXGIAAHWITQIPKLSPKJETYNIMFCVOTHTSWUERXDGPSVESWHKVVCXBZLBABYJJWHBSBFIIMHQYUPJLKEFKWYPWUAXXDYCUVCKFTBHDWMCUXUDKMYTSVLQFRBLZQOCZOYMGJWROLJUDSRGQLUIJGLZBURTEDOVNJNGTENT");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 73U;
    tmp_msg_0.error.assign("TKNLEHDDHUVZVBKEXBIBPYFKWDDRMTIOEIUWTPRFZNGFYVACUIPMHNTMKPHBESXTV");
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
    msg.setTimeStamp(0.560864928236);
    msg.setSource(43733U);
    msg.setSourceEntity(195U);
    msg.setDestination(839U);
    msg.setDestinationEntity(192U);
    msg.type = 205U;
    msg.id.assign("QAFVQCXMDXZQGITUFGHLFRJKMIOQCSVGMNXIOYSSDGUXSLTHRZEUWISNNUERNBLAODRPSYMQTKNUDASKGLKVEAJ");
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.299747695008;
    tmp_msg_0.units = 59U;
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
    msg.setTimeStamp(0.501731991318);
    msg.setSource(56813U);
    msg.setSourceEntity(184U);
    msg.setDestination(5590U);
    msg.setDestinationEntity(114U);
    msg.id.assign("VDLGFWIEQBDSGITKEOPKZQEIMAIWUXJJPWUYBXNCFFQWEXVLXJALXIHKVCYUCIZMCVSSCHXTRYBJRZKKCPQCHGTVNJXBWCILSRPPOQUYBJMJHNFOUBPGZJIQWNZRQVQAVNCRMN");
    msg.callsign.assign("LUAFKABNOWAAVPGMKSUSGLAQVZGETBCZWFDPGIVXIOUFNURIMMWWZGNKNKTFZKBKSJBYQPESPYXCJVIYTDRWMXPCPCQHLVYDRREOAATRYTQOHQXMNUFHYHPBGGNRYRMXOQVHMDKLFL");
    msg.name.assign("MTIGQFHTDOWDCIKQCABQVLGROOZXGRIVZWZRFYJMQCJNLUIWTNYUEKVDGEPWESVZLBIJUUBMNBVDICWWJSJYGLHDBCKMJQXPDOTUXZVMOFKKHWHZFVQLHQESXIEYLMYFANPMBPNAGWFMBRHXSJGJPVOETMUWOSPUOEJNRPUAASTBLXRSVYIZNTPURKKAWFHXPEYCCATBCADGEYUADNQNOEZYTSLHRJKQHCRNDQKXOSGIRDFPFXFT");
    msg.type_and_cargo = 8U;
    msg.a = 0.113354116;
    msg.b = 0.540566132689;
    msg.c = 0.820557025156;
    msg.d = 0.297988300339;

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
    msg.setTimeStamp(0.0474234849262);
    msg.setSource(44488U);
    msg.setSourceEntity(238U);
    msg.setDestination(6781U);
    msg.setDestinationEntity(209U);
    msg.id.assign("RKGHLDSLEQQQOMKARGEUJBASAYZVFCEFQNZIKPAUPKAHBOSKVHJFWNYOHSHLNECYYJDVWFETDNSJNYPZYGKBLTMNGXOQRLDKVJTUXCRUTVMCLLWJVVVCWMDQDFZRRIHIGXSEDZCMTGNUAIACWITKYAZZFIELGIOOAWTMUDCPOJEOQPBKNFWQHSUBZJXPPPXIBFAWPTRYCBHXSVYUBGXJRKHGNTMSMSXVFMQX");
    msg.callsign.assign("INXOLKKIBOZGASJCFJWHZHHTBZHOMRLPRMEK");
    msg.name.assign("YFWPJUUHJUJSAKWCRCDYXCTNPSDWLXMMNILMVDCTRJBTBOEXVSXPFXUYKMLWJGDYEDOZBGWTCADSMGVBQIYPGMQDFKYIEUVASRGVYHFQEFJYWLEQIJZHZNVFQBGDCGZEVROUMKOPEXJZBOKIKINSKZSCKLXGGTJAWXHVDNFAP");
    msg.type_and_cargo = 139U;
    msg.a = 0.702566704413;
    msg.b = 0.317411148551;
    msg.c = 0.857966931468;
    msg.d = 0.60821873575;

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
    msg.setTimeStamp(0.0334979108111);
    msg.setSource(26209U);
    msg.setSourceEntity(139U);
    msg.setDestination(32166U);
    msg.setDestinationEntity(59U);
    msg.id.assign("RBWBDDAERADLSCUHUEBBVKVNJVVCHJNOERRXXTWNDOYQAFHOXBTOYFIUIBZGAADHGJKWJZJKPVFPZQJGCWOTH");
    msg.callsign.assign("EQOHDVAXYKTLYIINUIYEAYIUDFRXJHOQKMZJQDLXKZBEBBMHIFBJLHHSMTESEBEIYCJPPPWRJLQRBUMCMCPNEXFFDDDAGZORIHUPPWVTSPGDVJQOTYBFLXNDSSGFTKZUMTQLDNHJVOLGUVPTUVPMKYZMEZKZARNFWRQGQTGCCOR");
    msg.name.assign("BGFKWOWNKGEHODOXPKA");
    msg.type_and_cargo = 215U;
    msg.a = 0.0629928396014;
    msg.b = 0.349071391139;
    msg.c = 0.45173801417;
    msg.d = 0.929097556733;

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
    msg.setTimeStamp(0.222332703083);
    msg.setSource(57209U);
    msg.setSourceEntity(207U);
    msg.setDestination(469U);
    msg.setDestinationEntity(114U);
    msg.localname.assign("RQOOHGFSCYJWKVILEXZZDTZTVUUZEYUODJIVHCLRIYTZHUCVFNIAWABYOEOWXUWJUPPB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HNRCDWKHVBMIZIJYNIMDTMMJFLIZLYTMQUKYTMSPNAXWHSVHAMOXWYNTSUGGQUBOZGRQBOZGVKNPIJQHXFPAOJKLFRJQWCRBFRXZEVBUWCWGRLHQSUWLRSJERFDQUJZCZOMDBTSONLXTUFGRNPATKCEYPWJCVBQDBKKHLEVOZXDZDACEEAVDEWRPHJPHGIYPOXAMSCAFBLMLVANVTSNSPXXBGIUINUCZYVETPQYOEA");
    tmp_msg_0.sys_type = 174U;
    tmp_msg_0.owner = 62316U;
    tmp_msg_0.lat = 0.505130064348;
    tmp_msg_0.lon = 0.348298516771;
    tmp_msg_0.height = 0.94132087611;
    tmp_msg_0.services.assign("XJWVTZVEGUXBVDZHPIOJKKEULCEVRRVHSSGNWQQTIJTRBHMMXAGZNJXMHHKWKX");
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
    msg.setTimeStamp(0.413525044048);
    msg.setSource(35112U);
    msg.setSourceEntity(66U);
    msg.setDestination(23791U);
    msg.setDestinationEntity(196U);
    msg.localname.assign("SYZNGTRMPFSIVSDEZMPZBLTQTLJCMILBNMAUMOMVQDFFJPEDYTBEFIAOOXRUEUCTOQGOXKQOKXKXKLHMSTJNPFIAXPBXETKLNPVUXYTJFJOBKLAZDDWZSUYBHIHBRNVIGAWVCCIQ");

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
    msg.setTimeStamp(0.59881489021);
    msg.setSource(57178U);
    msg.setSourceEntity(201U);
    msg.setDestination(7395U);
    msg.setDestinationEntity(81U);
    msg.localname.assign("AMCMZZNDTUXSYHRTXHOCPSVAPFDYEUICFSLPXUXLTBYLQWFJKNZLJCJSBZCGQDISUSLSBVCEAZOUDAAWCFBXFATTZCYWBUFFHIVKZJKHOQLBIEWYCDVJNMEIORERIEZDTXRITGBFGMRPNVNWMMNOKPHRQGEYVYVPBIZOULRJPHWTABRKUOLZHUNGGFQQPQCDWJVHENKAIXXDIXVMNWQXKSADSGAWDQJRNKUGTOGLLYS");

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
    msg.setTimeStamp(0.475276271242);
    msg.setSource(58128U);
    msg.setSourceEntity(68U);
    msg.setDestination(7892U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("AYDDBCKLVOCWKHQPWMGMRJGKMSXFYCZPLMHLHQQLALXABKCMZIOTPZPHYBOCEEVIOFAYJSKORDECJPHTBIWUYLPBTHIVNPYXSWEGZNFGKAKNHVFDJGSM");
    msg.predicate.assign("TBWSQWJONMRBDQQUTREKSISOJSMEKPXNUGDMPERZDEENFFKYBOWDZGVEBUTTYCGCHCARDMWCLZHKXWFBEDDUHCOAPSAGTMKHAAXLEGBGULSXKRAUFJUSUYDGVOLAOMNTBZIHINOJZWIAIWRRYWNNOQROVRMKQXLLKLFMXPEHFVVTSIXIGCJWTKJYPBPVPLIHVFRZVPQUCMQDTGNDMJHQAFGSTJVYXXYJYQFEZPQHXACCLY");
    msg.attributes.assign("BVANNUXMHXZXYCTHZCJRQHRQVVYUDGQDEOPYFSBSBEFOAGGII");

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
    msg.setTimeStamp(0.908940526465);
    msg.setSource(18901U);
    msg.setSourceEntity(154U);
    msg.setDestination(34645U);
    msg.setDestinationEntity(19U);
    msg.timeline.assign("LSIKWHLZPECXARNKWFGIETZJSLXXSREAEAHKOUNEZMQCNFMWZDQXWETVRPWZFOTZOYPYNWUYYKNMFTATCDZJKTHXVDEMKKOAVGJSFDDOHWRPTJMCHGPNPJPURHGXLGYVFDUMUGHVQLEYUVGGDMQMQANRSXPVQKXSJNUWAQVRBCGIIYJICPCZNDSPJBOBECBOKSLLENLHVLZYXOXIFGBBASLYORWCVKQMHBRIJ");
    msg.predicate.assign("EYIFWETFDTCSAKOVVGRREBJQEPNMJIVMJGTVMZLWOFZYXZUUYBHELUYRVWJONNIUADGMMQWRXQKKIZRCPCFOHLZGQBSKGQDMUKWWIUIEGFAXXCNPILRKBHYLITFVHDCDHBKOBNHHNMZWPDDYBUBDZKVQQOLLYSREGCSZINPLGJFTTPIFWDE");
    msg.attributes.assign("REUHNUSSMNMCFCJJEEQUKS");

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
    msg.setTimeStamp(0.889400189224);
    msg.setSource(39629U);
    msg.setSourceEntity(3U);
    msg.setDestination(10490U);
    msg.setDestinationEntity(146U);
    msg.timeline.assign("PSPCNXVJSFJKUEWVDHBNAFPPTNKQQSWXZBKUIDHQBZPFNWZQHBWHQDJAOJNRGGBIUUXTWSKGXKOUGIHVWJOAHJNWLVMLJLBMOGRQPEOVYBKWDQGXCACCNEWORPQNFTHTXYQUATGYGZSCYLYHVIDYZYYAJHMCXZUGGERXRRRPKMJYOECFUJZTRCSVAIIHLAVSESLOA");
    msg.predicate.assign("UQNMVQPQKOZHEZZDIARPKSGLDAHCHJLNJUOBWMRMPYUTPYUHBFEQTZWHSQPDDFRJAEAROXAFIESKMVHKVMWWTUYESCHIGUKHZLVSPKDQONGRCFVKXYLOBCQRGTXDEOZFEYWYZZHRNPVZWRFWREUXBYAOVPBSKLSLTNALVUIWSLLNFAJJCNOIIRFICBOCXNKIDPDJUXPCGGJBBJEZTGTXAATXITQGYVSDQIKXQG");
    msg.attributes.assign("BVGTHJSCTEOENEPEKKIIRJLQDTVNUWGLTUIAZDKYBWOQACEGGZCLCMIUBIFXBAYJYQLDFFPWOYOMZQWPRKZRWHHYSIGXLODTBZYBSXGVHLCGUPDXNQXUZSARMJAEZMHPWOQKCMUWVDVORPGRYAUHBXIEVFQKUZWPEIZMLHFSNXROTQJIOSDJEPKHPCAVDNFCGTXRSRUAQ");

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
    msg.setTimeStamp(0.79300648427);
    msg.setSource(30300U);
    msg.setSourceEntity(197U);
    msg.setDestination(21279U);
    msg.setDestinationEntity(13U);
    msg.command = 153U;
    msg.goal_id.assign("HPLVUNXSYPDQYFGLRWTLATSXFSGTHEEMKQWREAIHUSEJHZFPRWFYXNGVRFWCAMKBKDTTHNLMPMRKTRMSXUYTXQQLNBFGYJFQLACZKIANEKOIGQ");
    msg.goal_xml.assign("SLWCFAETHMTQNXWZQMRUPXPRVRJZSRAWIFDKKCYHZIGTLXTVRHSCVTKTNJEWZELPYADFYUNZFHNMMQBSQXQKLRHXASXHMDHIAAOFJTNYVNSWVWERHX");

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
    msg.setTimeStamp(0.95525804393);
    msg.setSource(32723U);
    msg.setSourceEntity(33U);
    msg.setDestination(51535U);
    msg.setDestinationEntity(146U);
    msg.command = 144U;
    msg.goal_id.assign("VHMOIUEAKHPZGGABBOGWDXMIXQEGYUPHHCLRQOPFSYJSMKPZNUTUNMCZXBTTBRCBKHXODUXWUTCZSASJDIOSTJBLKHRXVH");
    msg.goal_xml.assign("ZCFPXXOWCHUMQMXLTPACBEKTJQGHACDUHKRGXEULAYNWBFATWJRKKDYHOSYZMPTPVELCFZFYIPLNBBIOATMLADPABEYRTFVOUYMQWMSWJQNZGKVDYQGOGKTZLDWTCKKMVNTAEMRIGNXZLSFYSEIZNGLJRMQIHNUYDWKIZUFRJSDWIRDFCLCOBVCHBSSUERDUZAOHSUQSSZLFWIIQBRPJQ");

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
    msg.setTimeStamp(0.184970332991);
    msg.setSource(696U);
    msg.setSourceEntity(101U);
    msg.setDestination(64605U);
    msg.setDestinationEntity(19U);
    msg.command = 146U;
    msg.goal_id.assign("MBOGLUWDTDBXMWUSSVWOWXCOFUEJVBHOSJHLGBYGKQMCFTNZIYIPVSRGUYWSQXIAMNUZYVRJLNTNSNAEKMDRRZFGZQPVBKTQPTXMCHHYUNQHBHTKKYBIRCCJCZCXP");
    msg.goal_xml.assign("UHNQWQBZIDJCCOSFIFJYZOSZOGDEXAROINCVMFKSVWHURUOTAHWMABVTQPILQPTLGZFYBXNPKJHEHSPMFRXWONDJPZZPSEGJECGJYZQUNMNYHTVWVGSEMWAUEQYBWULOCLVTQJMJHNTIRYTGDRBVRWRZXJMUBBKYLPAXLLXJAIGNISIKXKNRADSKQ");

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
    msg.setTimeStamp(0.128579027402);
    msg.setSource(5539U);
    msg.setSourceEntity(101U);
    msg.setDestination(61936U);
    msg.setDestinationEntity(61U);
    msg.op = 159U;
    msg.goal_id.assign("BBWKGZIVNOLIQR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OVDAGMPFQLWJVISXIJQUTZBQBPFGUDIQAIEBCCLSKSNVQJBWUOHRBDVZKTRYYGHTAUYBCCXRORWZZGPAHMYXQYEILPNLVITIZNVBMKOPLGBEMTARELUEOASFVXWSKPM");
    tmp_msg_0.predicate.assign("PFDTXBPAUECNFVJMTEJHSIJYACWXGPNZWHPTSXUOBMZIHFZXRQCZGQSWGLKKCPBRICVMAEJIZMSAYNNYRTAIDDBYCOWPVLHRBTMRSYCNGJKIRZMUAXIMPAATODLWANXBOEYQPYFUWSKVEUFGQFLK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XTXIXGGPGWKKMRQAVPAKWPIRCLJKJQR");
    tmp_tmp_msg_0_0.attr_type = 230U;
    tmp_tmp_msg_0_0.min.assign("MXRTOOAUTRBSCOEXWMCUIEZCGYFIJXLMZRXDHQSMMNSYJXUQAJWRJYLMFVZUACFVQDJPQJADONWXFRUFXPJHTBGWLNIKSCIWPVQYZFDSVHGJZUPNLSETRUIBBLHOMTEIEPHLYLNZPY");
    tmp_tmp_msg_0_0.max.assign("JIQDBQJSYMQUFOSXEBDDUQSNNAYYXKCOBTVCUTGKVXMQUAHPEVBDPPKHXSYUWDDPEBCHRVMUZJPZLYKZUJAYFWOCFLCDYINRRTEMBZGKLXGXHJIPETRURCVTNFMGPFSDMOG");
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
    msg.setTimeStamp(0.881713622536);
    msg.setSource(54082U);
    msg.setSourceEntity(151U);
    msg.setDestination(38467U);
    msg.setDestinationEntity(59U);
    msg.op = 148U;
    msg.goal_id.assign("SREUFRUAUS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YQJZQAETPULFMXEPONKMZXCIOCANQJXXLUWJXIDTTHYOLNYIBFWHKLVIBEARDSWUDIFSUNKRHIQEJOFDBTS");
    tmp_msg_0.predicate.assign("FFXYLLHRQBTQAPKADNNYNEPKUSGYCLFXFWKVAWSZRBVPXGBJVEIWUFRWDNQZDQSAZBVBSNBMUGITHM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DROCYSINBGFTXIBAPCNVPWPSHUVGWLHEEPDWPZIJRYYCOHBNKOLCEXFJVVBPHQTXFCEEFOWFMLGIUAGYNRTDUOQMFXJYZMRKWYTQYZTVZKAVVIBFORBKIIJZJXBDWLZTBFQXUKQOQVFVEZMZKDJSUMXILXW");
    tmp_tmp_msg_0_0.attr_type = 199U;
    tmp_tmp_msg_0_0.min.assign("QBPSWCEKLVVYUKKBSSYAFAHESUOAKSKWJRUHGYXJOERJVGJNEHWQEQIJGTCKIAYFTFAFFWHEGAPMVCAOOYIDBKCHXDIMJVMSDVLCRBURNOJQPESPWQZORZLVMWPTTJXDHLHLLPFRLXWUBCLBKRYDNKXYREGFMPNMAYTSHDQDBNQXQIOZTGCYJIDDCXBUUNVWXBTSZZYRPTHENMRQWUPMZGWLJXGEOX");
    tmp_tmp_msg_0_0.max.assign("DZLSEXBANQJ");
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
    msg.setTimeStamp(0.359150972652);
    msg.setSource(7161U);
    msg.setSourceEntity(8U);
    msg.setDestination(30592U);
    msg.setDestinationEntity(232U);
    msg.op = 99U;
    msg.goal_id.assign("LWUNXFSCQDHBMHJPEKYXEWVZOPTPLXRJYRVHTMEAYWLIFJSEBUFJYTOCXLYBECQHBDHOBGOISQNIOZHNEQMPFWPZIYCDZZKULOWMQFGVZGVKWAMSTTEKRKMXGDCEWBFLRMLKNZYNAGYGOWTGDELMAFURKFZIUSXNNQSCGARUTJNTFNVU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KAGZWJKYUEDVFGWMKCZAFQIOXOUODUAVIORMIUQWRYPHGXLKCQFSDOLNMLNDY");
    tmp_msg_0.predicate.assign("TYXDVVXZCUTEYEOPLHQJZKDBALAUTGWKUQYKKSXGVMOAJZYOEHBVADRSIMDFPPOEAQJEXHITXASCWRIICGD");
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
    msg.setTimeStamp(0.326976868341);
    msg.setSource(42577U);
    msg.setSourceEntity(78U);
    msg.setDestination(8676U);
    msg.setDestinationEntity(137U);
    msg.name.assign("FTGBLXXFEOBCAPGPFPMTXZKFHZHDVMFGUEEAIFWJCH");
    msg.attr_type = 251U;
    msg.min.assign("UGTFLDVVGCJZWERVJMIAQCRSVPDIMALULXAYVZIIQMYTQUVCGRBUAKNSARKSOGCVOKMXRLHBLYUSPIQEAKOPBFOLPGOOCKPOQYMXTNKBRNGWKYNTEBJVTQDHYRXPMRCEFNRZOXXIVSCCATHQTGGOBWHYDAHIEFLKHJGWBUFONWGQVWUUKPEJ");
    msg.max.assign("MVXVJIZRIVTOEPBGIPEFGDWEHHUBGRQJMPKZQWOLXZMWMTLHRSJPNHKDMRNGNAXLABUEXFIDBAVALGUKUKDYZWL");

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
    msg.setTimeStamp(0.546635284602);
    msg.setSource(14479U);
    msg.setSourceEntity(1U);
    msg.setDestination(43036U);
    msg.setDestinationEntity(89U);
    msg.name.assign("NRJIPFSYEUQCLHISPTRULKIGQORHQWQNUCKPT");
    msg.attr_type = 230U;
    msg.min.assign("DWBEXJIXAIAIBAOUPLGTCVBVRTRUROBVXKPHWWQOSZKKIXVNFJDFCDFDTFXXWMBEQBTZKYRYSOELESDYZGKOYHVZQEKPFYQFCNJGWZADGCGLUTWRPR");
    msg.max.assign("RQFXEOGBYUZQHOCRNZGAMJSAMUXFFWQCHTQJWLWADMYNPLWPXXPIQTYWOLVHAQDOFSSLLWUKQPEZLMJGYYNJRPDKFLCTGBSNYDEIQPJACBEJKIBUEVULHRGPNZGEDNIINHRHTDKUOAHTCTZECFFMVISPLUDYMWDJAIZWMXUCIAFZYRXOOGLQKZTIHHPPBSVGHRRWJYXOEIKTVEWSMDCUGKJKVEYXCU");

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
    msg.setTimeStamp(0.577275682789);
    msg.setSource(62284U);
    msg.setSourceEntity(162U);
    msg.setDestination(10463U);
    msg.setDestinationEntity(37U);
    msg.name.assign("RYXIEVNPNQDVYBOQAZSWFJGFSPIHYOXJOWCIASLREVECGMVPSPPLQHVTETYUKXGJKYZNEKNRPYENDBKJUTXXOUXQFCAHVZISDABHCNUGFWLIJDWUUACWHIJBEUWTQUNZTLADOASGOHXSQCBHW");
    msg.attr_type = 164U;
    msg.min.assign("BPRYKETEDDMRNUMJUBBPGMVIUYJHQVQZBCPYFQUYHNIUPGNBAECGMJSBFLKLDLZAFVIRRIWODDXEKCFFBKSUKLBXIJNAKVXKANQCKSHYIUBYBPOCOLQSXXCEQUXVUUHSKGYSJWHAEFDHHTRGXIFPZLZDATJRJLDJGTPZHWNEWAZCLCZVREZOWQHIOLFFZNYXXVTAHRAWGPWMOGSVSTETGMJGNPYKRFVYRMODCDQN");
    msg.max.assign("OGFZIARZZUPQTMPYVKUEBXUXKONJVSAJXZVDYANUOEIHTQEIKGEYQT");

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
    msg.setTimeStamp(0.901855641564);
    msg.setSource(26398U);
    msg.setSourceEntity(66U);
    msg.setDestination(22644U);
    msg.setDestinationEntity(9U);
    msg.timeline.assign("LTYCOZELGJFXVCAQOGDVBVNEBIJSGOEYHGLKRJFXWIZHBYUXJVFDYGKRRSKCSWNFVAQXOEYBTNMJESIFHSCQTRJUPUPDDCWUMY");
    msg.predicate.assign("CEHNYDPKJMIUXPFNLGUKXCNRZHCLIEXHOEXBLBZRYNFJPCUCAXJPJZMSZRFVQBHOMVVAKGIQTGREQZPBUNT");

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
    msg.setTimeStamp(0.946873462072);
    msg.setSource(28727U);
    msg.setSourceEntity(46U);
    msg.setDestination(17827U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("CGNSEAHFOONMQWOKCPXFLRENQQFTIENKMALPQVASQSBEHFOOYRJAPSTCJJRGFGBDPCWTJDBUSHVXIBADVRFVZZQSYQLUXRNN");
    msg.predicate.assign("FEMNFBIHQTUKOXLQFSIWVHJXGUGMA");

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
    msg.setTimeStamp(0.442133498503);
    msg.setSource(48882U);
    msg.setSourceEntity(25U);
    msg.setDestination(26335U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("NKVPPMWGSDNCVJYKZXFQCOPZVVFSXUPURGJHRIBRXSDADAIWMLHUZPQYOLVJWMKDSEAZFYGQSMCGLBKVBAYIJIDGEHQWTXRJOLDKBQHXTGBHXLTFBDWGKCAZQNPUEPNFWMTNWMOFHE");
    msg.predicate.assign("HLBRBQJVJBMTXWFDDXKBVVJZBQMHFCAZEAMZRYGCKTHSUTBLNWLJIIWPPVJXDEAOYQSCCPWWNDBTHOWDPFYYDOOIBANGDPGNTCKRLOCRLANUOZSIKLIXUMXKKZELFOVRSLSIVBHMHEGJJGQWKWXYZJHRTOGKAFAMMQSSUFTPGEYRCGQUQQIEPUORVIOGZXZTPDNMYWFYMVEIACLVJWFKSNUFNXCUHNLUZESBQUGYVCSYIRTDFAPE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IJFUXTOYMYRRDAUXBUWQRLJSWRQWUYTCCQHYOZLNPKBNNGCHDMWGAZWKMB");
    tmp_msg_0.attr_type = 167U;
    tmp_msg_0.min.assign("BTIRUTCBVOXNZHFGOADKBBQGDZEFPRMTLCIZXEKGGFGOXEJBTJZMECPSGLPJZGFBUHEYVQCVQHHJTQRWOETQMNUSWPOMZWDNSALCIEYWCMJUGPNQKRHXEAQTYLKZWYAVSUUPOCLSDRNPSXKORXFGYJFIHKIBWVAODNWNBDZBVRICHTXNKMAUJKYIXATVEGMXWBLDNJSQFWSYFAOVUXACWPIMKDAIEDIDQ");
    tmp_msg_0.max.assign("MIVSWRBNEJIJLYLEKKTRHNDAZGAFJZDAZVBPFWTCKJGQBWCIWDBODRFPGYZQSCPMURSQVPWAIHKFADNU");
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
    msg.setTimeStamp(0.177620625758);
    msg.setSource(46687U);
    msg.setSourceEntity(57U);
    msg.setDestination(45096U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("GOKRIZFALNFTDCBEVHDMCSKWQALNZLRVRBDJVAUQYHEEUMFTPFXAPLVZSAOGHQNPZMSSPJSIFGGHBLKUVJCIPETBZGYUUYTGLKKHLDNYYRMFBGINKIOSPFAOICPTCHRYGOHWTBAXQALKJXDXHOIFQAORJZBRZOPDPNBMLETESTNMU");

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
    msg.setTimeStamp(0.971094538107);
    msg.setSource(21001U);
    msg.setSourceEntity(81U);
    msg.setDestination(697U);
    msg.setDestinationEntity(133U);
    msg.reactor.assign("FUZAONMGPFFVJAVSLAEGTJVUIMEPOSDVXCZBDWRTDNXWQWRCQQUIMTIVDBNKQAYHCDYAKQMEFHFCHIQFUWZSSJFZOBJZNSKSVBIHOELWUSPGKHVRZDFYDARAYEPXVZLMTOGBBUPS");

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
    msg.setTimeStamp(0.611522519987);
    msg.setSource(49413U);
    msg.setSourceEntity(47U);
    msg.setDestination(50974U);
    msg.setDestinationEntity(54U);
    msg.reactor.assign("TPYELZWURUSMTHSTUCGJVXKDGMZAXSLLDGTXVKNWEUOQYHRHQIWCQBUJRXJQSBHCZKFWKYGFLSWIJKXTVOJQPONBSAVZIYNBAFVDNIDXVTKUMFFLYJCKTYKZJHNOMIGABCYWANVFDMLBPRXCLKBQIAFDLJHEXAWQEQWNRNPDPEVTM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LYUGPGNWXKJHACCJSUHDMZGTOZLZTCTDLJYNHGCDTJIPIS");
    tmp_msg_0.predicate.assign("JLOKPWIIQNHVSCJVAEWDBQKPPQZOBZUYDMUDGQBZLLZLTDWMMUXOQNNTROQMRUTUEAVJZCMVNJFUUUNDSGWKAXFVFHNETSPUHSMIQDBYNZEFBVJFUGYFXEBSGOJIOXZBLRREXHYZIMCQTFIKCOLAWNNSVEWRDXKJWOJMCKALW");
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
    msg.setTimeStamp(0.940572018695);
    msg.setSource(20232U);
    msg.setSourceEntity(148U);
    msg.setDestination(53655U);
    msg.setDestinationEntity(234U);
    msg.topic.assign("HDNDLPUFYBNMJTZMUVFQBMNVTZYWLSSWLMOQJMRKKPBSQENVPAJRKXBDLUCRGPPBNGIIHGCEXYEWMGUGTOVWIJLTTVJUQTKKVDNREOOHLQQXWEILNMCSZTLCNUTSEPRDIXSJAIOFKFXUTUZAPZPFAFHIKJKCGEOQREMLIAOMYF");
    msg.data.assign("MZAREQIPTOVKIHUNQEKTLQHRRCSHIGWOYSGQQEBTSUFLCZTQNOADBWPJYAWBSGLANHC");

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
    msg.setTimeStamp(0.747782562665);
    msg.setSource(3967U);
    msg.setSourceEntity(212U);
    msg.setDestination(33319U);
    msg.setDestinationEntity(16U);
    msg.topic.assign("EGKCSQFXMJRKVLYAVTOAAKYPXUVWZIYLNZBYUTNIGZVWASTQOCHYLHMDEFZHUMJJNCDGWONAWGITQZJHAFHKJUBPUONARNIFRTUKMYYDEMDQDULKWXXZGPDELPFSLPVCIKEWHBGFDYISMFANAJBMZKVEDDOSWCSKQOBQILGXU");
    msg.data.assign("HDWZYMDSGMSRUNDKRBXVNUVWBSABGPWMMFKVQYCHLFSXGFEYALILAFYJXPWGVGUOQZNEJORVTZDCWHEZIPEBTJWAJUQLIMLJZRMZNKWOFACESUDOYCSIAJITCDOYCSLGRLXEAKHPSKLSNXJ");

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
    msg.setTimeStamp(0.676189527562);
    msg.setSource(13808U);
    msg.setSourceEntity(28U);
    msg.setDestination(33120U);
    msg.setDestinationEntity(20U);
    msg.topic.assign("ZNUGFXFVUGXERHJZAKWGAKTGSZOQPYOVUDSOWCNOKVFOISZNLITSWIFPQMJKWNNMULS");
    msg.data.assign("JZLQBEJBVBIMGNAFBRWGXWZKPIVSEOGPXWGKGFIRMANJRKXWNEGDUFENEEBVCURWRJCMATSUTNFXMMOFELKMVHQKLQKKZVQSUWCEEYXQXIHDOFBSYQWQVLZOJBCZXUMZDNDISMNRJXPYTRKCBLQIAFQPOTTDATLGHTLNTGJDYTUOCBIYARIXPOGUZMHYWSCYYCPOTKFHOYQARHUPCHHJYDFJVFHZSSNGCVPSVZBUAXLIDPWL");

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
    msg.setTimeStamp(0.11660008729);
    msg.setSource(63734U);
    msg.setSourceEntity(61U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(159U);
    msg.frameid = 134U;
    const char tmp_msg_0[] = {-69, -27, 77, -83, -32, -92, 4, 73, -117, -127, -77, 46, 93, -41, -19, -36, -18, -33, 77, -91, 52, -14, 42, 56, -87, -57, -88, 69, -112, -88, 6, 41, 113, -92, -128, -97, 110, 96, 83, 24, 120, -105, 110, 111, 55, -61, -95, -10, -58, 18, 42, -26, 46, 62, -1, 94, 68, 38, -56, -51, 86, 22, -63, -63, -105, 21, 96, 86, -83, 76, -127, 49, 62, -52, -39, 117, -101, 20, -78, -71, -14, -43, 64, 126, 14, 21, 4, 63, -99, -10, 14, -74};
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
    msg.setTimeStamp(0.754041618833);
    msg.setSource(2432U);
    msg.setSourceEntity(35U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(135U);
    msg.frameid = 97U;
    const char tmp_msg_0[] = {-31, -6, -50, -97, -26, -39, -18, 77, 77, 36, 7, 85, 47, 101, -28, -123, 8, -96, 85, -117, -128, 37, 114, -12, -40, 4, -87, -109, -19, -103, -9, 91, -84, -61, 88, -84, -59, 57, -118, -8, -96, -40, 33, -11, 71, -9, 87, -57, -91, 62, -67, 69, 1, 120, 114, 55, -82, 6, 37, -84, -19, 100, -74, -19, -69, 107, -89, -120, 46, 35, 114, 5, 69, 77, 48, -27, 60, 41, 108, 121, -53, 60, -53, 46, -113, 102, 74, -63, 44, -120, -67, -18, -104, -54, 107, 90, 68, -12, 42, 112, 38, 85, -98, -54, -10, 68, 104, -53, 10, 125, 18, -53, -109, -91, -45, -9, 96, 26, 96, 72, 30, -106, 36, -41, -85, 111, 47, -17, 51, 79, 105, 27, 80, -109, 103, -123, -50, -114, 114, 91, 125, -28, 95, 48, -101, 99, 116, -95, -53, -37, 112, 25, -96, -27, -83, 97, 120, -5, -112, 124, -78, 95, 18, -44, 118, -95, -48, -29, 88, 64, -69, 59, -87, -58, -40, 47, -22, -10, 89, 92, -123, 84, 113, 32, -49, 46, -46, 25, 42, -4, -93, 14, -68, 126, -64, 28, -54, 81, -72, 63, 31, 9, 55, 97, -59, -91, 82, 113, 92, 94, -109, 17, -78, -120, -47, 54, 13, 94, 66, 10, 95};
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
    msg.setTimeStamp(0.980544484511);
    msg.setSource(9702U);
    msg.setSourceEntity(78U);
    msg.setDestination(11210U);
    msg.setDestinationEntity(71U);
    msg.frameid = 28U;
    const char tmp_msg_0[] = {85, -122, 36, -107, 41, 29, -95, 86, 113, -39, 18, -13, -49, 70, -121, -5, 99, -121, 94, -8, -73, -112, 52, -23, 75, -62, -99, 125, 1, 92, -100, 12, 78, -70, 81, -59, -9, 91, 105, 64, -84, 107, 22, -38, -56, -29, -23, -52, -4, -83, -97, -25, -74, -91, 119, 13, -104, 118, 51, 51, -79, 115, -79, 115, -81, 123, -33, 0, 35, 18, -68, 49, 4, 44, -88, 52, 27, -83, 42, -4, -60, -1, 35, 39, 84, -22, 1, 72, -78, -122, 64, -26, 100, -18, -81, -7, -96, -127, -84, -26, -69, 65, -126, 43, 124, 60, -63, 6, 76, -16, 121, -27, -96, -114, 79, -126, -98, -128, 86, -21, -89, 32, 56, 116, -67, 47, 91, 12, -69, 39, 24, 4, -121, -1, 105, 120, -8, -41, -121, 124, 96, -9, 108, 35, 92, 85, -27, -60, 93, -126, 117, 10, -3, 123, 21, -107, 24, 58, -76, 7, -66, -89, -60, -5, 15, 76, 14, 61, -102, 32, 83, -21, 16, 83, -118, 100, -25, 12, -102, 6, 40, 57, 55, 2, 7, -26, 57, 59, 30, -39, 101, 19, -126, 59, 41, 50, -117, -112, 116, -104, 111, -112, -107, 122, 14, 68, -11, -105, 117, 64, 82, 78, 60, -46, 92, 42, -120, -86, 67, 94, -84, -32, 100, -111, -101, -126, 114, -13, 13, -89, -37, -24, -91, -85, -33, 90, 56, -11, -98, 110, -32, -82, 113, -73, 126, 76};
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
    msg.setTimeStamp(0.990539875444);
    msg.setSource(10554U);
    msg.setSourceEntity(225U);
    msg.setDestination(43773U);
    msg.setDestinationEntity(227U);
    msg.fps = 164U;
    msg.quality = 140U;
    msg.reps = 122U;
    msg.tsize = 49U;

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
    msg.setTimeStamp(0.101588673989);
    msg.setSource(23772U);
    msg.setSourceEntity(65U);
    msg.setDestination(33551U);
    msg.setDestinationEntity(202U);
    msg.fps = 217U;
    msg.quality = 134U;
    msg.reps = 192U;
    msg.tsize = 39U;

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
    msg.setTimeStamp(0.0347996590505);
    msg.setSource(19005U);
    msg.setSourceEntity(100U);
    msg.setDestination(35845U);
    msg.setDestinationEntity(70U);
    msg.fps = 20U;
    msg.quality = 226U;
    msg.reps = 170U;
    msg.tsize = 253U;

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
    msg.setTimeStamp(0.362747798479);
    msg.setSource(62154U);
    msg.setSourceEntity(52U);
    msg.setDestination(55300U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.564157341425;
    msg.lon = 0.256809539625;
    msg.depth = 250U;
    msg.speed = 0.0797986696717;
    msg.psi = 0.883660520058;

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
    msg.setTimeStamp(0.313535719925);
    msg.setSource(1865U);
    msg.setSourceEntity(144U);
    msg.setDestination(47515U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.912297912091;
    msg.lon = 0.98862073668;
    msg.depth = 250U;
    msg.speed = 0.81572754217;
    msg.psi = 0.851157249149;

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
    msg.setTimeStamp(0.664115384534);
    msg.setSource(34614U);
    msg.setSourceEntity(47U);
    msg.setDestination(30515U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.221163616713;
    msg.lon = 0.996856936269;
    msg.depth = 206U;
    msg.speed = 0.615488996852;
    msg.psi = 0.890182024673;

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
    msg.setTimeStamp(0.327132491151);
    msg.setSource(25182U);
    msg.setSourceEntity(242U);
    msg.setDestination(26609U);
    msg.setDestinationEntity(64U);
    msg.label.assign("SABAKJBZWBCZIYQNZQRHUJWQXBUOOUCMPWNLEZPLDWKSBXWTZTRJTHJEKLIGUYHPEDAUFYMFNZOSIBLMQXXHBDHSWVFOACFHLIPGCAWNJJOXYXYNGCANWXIFK");
    msg.lat = 0.718964324952;
    msg.lon = 0.876508869257;
    msg.z = 0.919349546098;
    msg.z_units = 137U;
    msg.cog = 0.675461729298;
    msg.sog = 0.876800661299;

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
    msg.setTimeStamp(0.387340297678);
    msg.setSource(63766U);
    msg.setSourceEntity(32U);
    msg.setDestination(45690U);
    msg.setDestinationEntity(181U);
    msg.label.assign("MGDHTIJJIENMOVHTRPPTNNBYQLVNCMDPSEPBYGKXC");
    msg.lat = 0.03583744946;
    msg.lon = 0.425286557014;
    msg.z = 0.997517322404;
    msg.z_units = 5U;
    msg.cog = 0.965577753844;
    msg.sog = 0.619904904501;

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
    msg.setTimeStamp(0.531849995392);
    msg.setSource(2536U);
    msg.setSourceEntity(205U);
    msg.setDestination(25017U);
    msg.setDestinationEntity(177U);
    msg.label.assign("LTCEWJECHMNDVTXVCWHCWLAOUWEJOCCEQPGXNQVEZQ");
    msg.lat = 0.150280609478;
    msg.lon = 0.232124983874;
    msg.z = 0.897258021514;
    msg.z_units = 25U;
    msg.cog = 0.829958686298;
    msg.sog = 0.0835629212576;

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
    msg.setTimeStamp(0.767043720545);
    msg.setSource(57709U);
    msg.setSourceEntity(158U);
    msg.setDestination(48590U);
    msg.setDestinationEntity(18U);
    msg.name.assign("YLUXFOFQYSXNWVAZQJGEGLSIJCZWKXBURXPNQMIMLVWPMRPVZETFKLELVHQHFVLMANYJXCBAHLDHKWGDROYXATHSQTWOSPVJKZBIQJTJTKAJIGFMAQUHVZSIIYIMEDHIOSEVZFBDNQOWNDYCRAEY");
    msg.value.assign("TFHGNQIMDVUAKVCHPNOKUXWASWAMYXCPMCBYNRFJGMZYLAVKNISUSQLYOMRNEAULNUSIUIOMRVTALHTBIKGLLBMPOZGMMUYDHQFHSKHFVATPNXJHORYJFCVOIKRWUORXGWSPQPQZNQWXOCILEASZZJJYCUPSCZREERWTETVLPIXHJJ");

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
    msg.setTimeStamp(0.359937667845);
    msg.setSource(40040U);
    msg.setSourceEntity(238U);
    msg.setDestination(11347U);
    msg.setDestinationEntity(190U);
    msg.name.assign("HBTXEPKQLBUHGPGOIDMARPZLEQBQPKHWCKLWYROHMOSDWLDSAXUSGLPOYCRDJCNIEMTBIFRFFPZGLLCVVDSBTFQPPNZXXWYZYHKNIGCIFYDMKAHFRETUEJZ");
    msg.value.assign("QKMZJRYKCESBPTVVCYWKPBJIXRGTOVYUCHFXDFPUUJPIMJBYIFNQAKTEPTSKUUDZAIYANFLCIHTXGSLMBOFDAYJNOMFQZLZHRYKQVDTBWZMNDHANIMCIGRHXLVUANQKSWKILBYSFOUQJATEHARSDWQXHOJPVOHHEYJIFDL");

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
    msg.setTimeStamp(0.98517060788);
    msg.setSource(6175U);
    msg.setSourceEntity(146U);
    msg.setDestination(4040U);
    msg.setDestinationEntity(179U);
    msg.name.assign("YTJWUMVZYWVCJBWSFFBZVWICLMEXGBKRMYNBXTBBRHVKTJXU");
    msg.value.assign("ZBSZRPHKGUUNVKDPUCDYSBSXNPZCIQPZALJQFHCMNCHGBSRYNYVDFDCZVOTIFYAVXERJDRLDNSPVDAEDXWVYHYSMUBLXWBQVLZEFFWVAIQWQEOJYLPQWZUJOOABAKFFMGTTDJHKIHUAXEKOIIMOKWMIFNMCPPBRESUCWLOMPERCIFQKXWXGXZASJFXEMWQOKKGRQDLWUYPTGZNJGYGBTILJHANIXEGC");

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
    msg.setTimeStamp(0.53845363825);
    msg.setSource(1657U);
    msg.setSourceEntity(76U);
    msg.setDestination(49723U);
    msg.setDestinationEntity(107U);
    msg.name.assign("QKLYZCGAEMDSEUYWUGBVGUYYYMPFOBFIGNRMBKWKWLCHVTK");

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
    msg.setTimeStamp(0.529377766596);
    msg.setSource(15079U);
    msg.setSourceEntity(223U);
    msg.setDestination(6005U);
    msg.setDestinationEntity(144U);
    msg.name.assign("DFNLXLLLAGLKVXIAJRDSEFVVSSDKHGOHZQOBJXNONDTIPEYTCWAIQWMMBPBNQXERBAHJPHMRJDNCATJIZWRHXYUVKFUHZXYRKVYQPKVDNYCCSZGUXTDQLQBXRFGIGLCWWMIRFMDSSAPKEBUCFEJRJYTIBUOHZML");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EHVSBLGNSGUBMKOYZXNACUPWQTSCRFLPZZJERQGSGELZEJPZIZSUWMLRRKTIINMMFRKPDESZUZAUXVDYHLOUMFAOIOHYVDHDHVRYFWXXFQMCMDDWBFZCHI");
    tmp_msg_0.value.assign("EXOPRYSDYLHCULZKVVTCRAXLDCEQVLVTKCLOSVOMXIKNKDMGJSEPEWHOL");
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
    msg.setTimeStamp(0.718889966703);
    msg.setSource(63114U);
    msg.setSourceEntity(236U);
    msg.setDestination(30013U);
    msg.setDestinationEntity(1U);
    msg.name.assign("WJDULSNKGEPTVU");

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
    msg.setTimeStamp(0.611212132917);
    msg.setSource(61854U);
    msg.setSourceEntity(105U);
    msg.setDestination(4900U);
    msg.setDestinationEntity(46U);
    msg.name.assign("JTPPGHBNLETFEOIPFSGWGMCSRYUQBFDPLOAMKPBKDFHQUWXRQSMDZJBSHFXCHUMZUDVVGWCVLIGEJAZMKEYPATCTNKDHURGFWPPWQOXQENNKFSBDNZNCQWSRYIFWEOKJZUTSRVYUKINIAJGJJZIYGBDCYLVHYIJIRDNKISXYULXOH");
    msg.visibility.assign("EDMOFOWNERABOQXNKXTVLRICCZNJRCUKOGFTBRBPVVAWGCJURPDIFWCIEABEHSSTWPWUAQVNXMEGHKDARQGCYYDMYDPIGSJYNHDVTFLLKJTQAVBLPJBUCSQSBPIKQJUSMUMQQPUSUPZYMOCOHOIICZFZONVVTHOXHJKAQNVIXSRTUMLTSMFKTSNERIOFABALEKBWRZHYWJNZNXPHKFGEJDYMYDUZJYFLGGLXEXFZDCYBGXVTIXLWMGAELRPWKH");
    msg.scope.assign("XUGRNWCLLBBLWZNFZBPQWKRMWUFZJEGPAETOCDSHXKBXDYKNUDGDEIJLXIVRRIHUNKMJOLSDJWFE");

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
    msg.setTimeStamp(0.557785099057);
    msg.setSource(38643U);
    msg.setSourceEntity(133U);
    msg.setDestination(45784U);
    msg.setDestinationEntity(48U);
    msg.name.assign("ZNZPDSOMMPUUZEVFYOTJCYKEOADBQRMLGTYFCJVWBHHGWPCOCCIYVENDBJOIMGAHTOICLYHFDCAUDRYKBLZAPGHAYSLQLMBFJSBNQBYZBURKFGRZPWUEAQUWKKJEXTRMHNTDHGIUUUTKMIONRYWWZIXNQ");
    msg.visibility.assign("HWMYDCXCUCZZTUCFRHOBXPPWZQDYOGVYIGLVXOUQEFVFVGKLOIGNIVRSBUEWXYWQMJCTQGLDXFKQRGDSVJWPAKFFRSZAUHTDQKQAIAWWCICEVWCXLLGBTNOQHASSOANMKRNZKJEZYTREELSZMBLNRRKTKKIWNJYDD");
    msg.scope.assign("SCLKFADTRHDMZCMXNYLAVLKSWHCKAUSYRSUXFWAPZIGULWVTOYEPYSBJQXNFOHBZXPNDRXANDJINCJRGCMHELE");

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
    msg.setTimeStamp(0.424640635716);
    msg.setSource(15810U);
    msg.setSourceEntity(190U);
    msg.setDestination(38200U);
    msg.setDestinationEntity(213U);
    msg.name.assign("WTSFRJWXLOVVPZPNCUTABKNJBFEMPIXLIDF");
    msg.visibility.assign("SSCJGZRICPEWTRAGHLXSWKQYHIFDZBHAQFOPNYYUDWTPDZKZEUETEBTMCCJPLSQYOHEJVOLCFXLFZHNIOBBZALZVJYBGJVFASMLQWISUMXUBPQUWTBMNHODCRECQYITAYRXHVJRQLDDYMKTLELXGDJOIQUGWGINKJFPKILUSVZXHRYJRPGNTAWVCXUAXAYTWRSXGKUEBMZJGMRNHFGBNNNKE");
    msg.scope.assign("RPQLYFGTOFHKEVTKMXUUMDEHOCWEDWLLASMCYNFBARMKQGBUPLIMAUIIOLLYPBQTQWABDUFPIVJPFYSWQPUDCJGHEOESAPOHHGLCBUJUOSDZKJMOYPFKHIZSFTNYCSBMXVQHZLULECGVJSXWJETOAXWTAVZSCCYCKYDJVWFGNUMQTBXVWZIWNZHDJTRAZGEA");

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
    msg.setTimeStamp(0.265215860525);
    msg.setSource(40941U);
    msg.setSourceEntity(111U);
    msg.setDestination(14345U);
    msg.setDestinationEntity(79U);
    msg.name.assign("RNVEPXIXLUUZYQANSAKBNONCCMWWBFCHAYAEGICLKWJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZOXJAVAZVOCFXRVKJCMOBOFUAJOHFKWEJFWCHH");
    tmp_msg_0.value.assign("HLHSWILMHYCJMTKHTVKVTCCPERWAAWGZBTUYQOPUGYNUIUDGDSKAZIJEHDNHQMIWVBSVEUXCXKIACROYLGJJNFOLQPAJHWZZV");
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
    msg.setTimeStamp(0.143282360533);
    msg.setSource(37331U);
    msg.setSourceEntity(226U);
    msg.setDestination(55095U);
    msg.setDestinationEntity(57U);
    msg.name.assign("PQIIIEVRZDMEPXBUKAKBEJSCNBEQADKNEHQTGDKMCGWQCPXCFDRLEWFAOOFIHQSEQVUTYRHMLGPZBRHLRUBWYUXAPPDVCJCGNVTHFNFXISRUGOVVGAHAFOIYWMJHUFUOTEFBGZLNBWZXMIRWYYHMLAVUTIYOLRFWSKRTEASWSXCKUDXEBRVYXZQTMNJLQFKUP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PFPSMDZGXQYATFACAEWAKAFNUEZVBEVTYZCTNERIYOTCZWYXKSKMQVSDGYJXOZBQJQMEPICDSHSFWVUNJZFBXIHFIBHWTXDDRKLWMMTSKPSCQYDSIHFHVYHAJJLFRLUNLYVMOGTVKIXNBHNCXLQDOSMCHUZHRMYCMRPPPI");
    tmp_msg_0.value.assign("CIKFFOOMTSLAIDEPGZHOJKFAQAXXJCSJDORJBGWGQCPKRJYDPGZUFOBPILJZPDKNNXRDCNTIGZIDEXGXLWMVAKLMYSIXANABHFKZSMEXETEPQVMSYCUAHYCVNLQVLDMORIMYNBUSZBFSKWBYVXIDXVZSLTMJEPTQDWWJPFERTGXZFRTTBNQJRQPWHUOIVVQENMSKYLBRFCU");
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
    msg.setTimeStamp(0.920910320099);
    msg.setSource(28117U);
    msg.setSourceEntity(57U);
    msg.setDestination(11305U);
    msg.setDestinationEntity(110U);
    msg.name.assign("HXDSZYDABJLGZADGTIEKZHLRMTCEELZRIBESSQCCPUYYTCGJPMFGAXSVISGQZEYRSGAPZHWOHIJYHPBRQMQMVCFMRAVXMFONVFS");

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
    msg.setTimeStamp(0.438614276389);
    msg.setSource(34521U);
    msg.setSourceEntity(61U);
    msg.setDestination(51071U);
    msg.setDestinationEntity(98U);
    msg.name.assign("CNNDDSTXGXSIQTXHVBJURXTJNBZKAGKOXPKYVUGKZDPIQDGKBMSWMYZEQHSQUGJFBENZIMHZNYKUAIFFXDYLFESRLIKZAZEMVLUEBHDBCUJSIPILECEANZTRKOEWWPVVXCVVMFQFCJTLRMVMLNCRWPPBTRPWKUFFWGFTMOUDWDXQSXVAOCHNMOGGRTTZYLXWOW");

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
    msg.setTimeStamp(0.634906974329);
    msg.setSource(47170U);
    msg.setSourceEntity(166U);
    msg.setDestination(15565U);
    msg.setDestinationEntity(143U);
    msg.name.assign("HAGUYSXGTZUPFKQGSRIWLVWJKHZGMBKEZNHXVUEYFHMFPLALDBURPCNLXEPNODCILJIUDQVLVSITDJYNXOCFHTRZBQYTEFCPEYYFNXURKGYXLGKWNAISTFIBMZJMSWCMTSBQZSTAEICOKFKXHPOZMHPR");

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
    msg.setTimeStamp(0.573199154675);
    msg.setSource(30223U);
    msg.setSourceEntity(53U);
    msg.setDestination(21620U);
    msg.setDestinationEntity(92U);
    msg.name.assign("LYZMSUXWPSNGWTOYKKTLWCDFOIIVUTGSNWAYFPZI");

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
    msg.setTimeStamp(0.0648501924609);
    msg.setSource(25396U);
    msg.setSourceEntity(197U);
    msg.setDestination(8638U);
    msg.setDestinationEntity(198U);
    msg.timeout = 2698995382U;

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
    msg.setTimeStamp(0.864711064611);
    msg.setSource(9424U);
    msg.setSourceEntity(94U);
    msg.setDestination(59311U);
    msg.setDestinationEntity(66U);
    msg.timeout = 1362085296U;

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
    msg.setTimeStamp(0.873415836493);
    msg.setSource(29661U);
    msg.setSourceEntity(199U);
    msg.setDestination(45880U);
    msg.setDestinationEntity(174U);
    msg.timeout = 3060282036U;

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
    msg.setTimeStamp(0.205685730295);
    msg.setSource(38417U);
    msg.setSourceEntity(27U);
    msg.setDestination(9203U);
    msg.setDestinationEntity(98U);
    msg.sessid = 3913260793U;

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
    msg.setTimeStamp(0.929094553166);
    msg.setSource(12555U);
    msg.setSourceEntity(233U);
    msg.setDestination(8701U);
    msg.setDestinationEntity(79U);
    msg.sessid = 3305651496U;

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
    msg.setTimeStamp(0.827545039676);
    msg.setSource(37140U);
    msg.setSourceEntity(19U);
    msg.setDestination(48232U);
    msg.setDestinationEntity(127U);
    msg.sessid = 60446196U;

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
    msg.setTimeStamp(0.767684036274);
    msg.setSource(26135U);
    msg.setSourceEntity(234U);
    msg.setDestination(31523U);
    msg.setDestinationEntity(121U);
    msg.sessid = 1421758957U;
    msg.messages.assign("KJMYJLFLCPHRVVHVUZDWPIEZXITNLSXMJIAODLSQDCNOGBQAKDIHFQYVWYBXSWFGMBVQKGRANTZWQCMYIUVIRBNAUVZYOJQBDBUOOHEGHGTOAPTTXKCLFYFSR");

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
    msg.setTimeStamp(0.0505444160489);
    msg.setSource(12446U);
    msg.setSourceEntity(227U);
    msg.setDestination(43622U);
    msg.setDestinationEntity(167U);
    msg.sessid = 3604773574U;
    msg.messages.assign("BNMHSITANAWYSZFBQMAKTYXBYPFFWOIRJQQWAWLGEUPRBTZPRVMVENKVKRWDZTOCUFOCREVSBYXZYHHFXSKFGKMIYLQZFRNGHOXVEDKOLQAHMSZETCUDPAW");

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
    msg.setTimeStamp(0.0710236277214);
    msg.setSource(5600U);
    msg.setSourceEntity(88U);
    msg.setDestination(60567U);
    msg.setDestinationEntity(211U);
    msg.sessid = 2963875845U;
    msg.messages.assign("YRJZVLRQPWASTPFBAIGBBASXRJAEUULCYQJSDROZKKVCUGFTYSRONVNTAUBZBVEKYZLMQJVNCLOVYVJTEUCEOSQQSLPMGFMZAMFPDXXYUCXMWTMKNKUAHGBIKYXIWMCYDWDBQHPWEK");

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
    msg.setTimeStamp(0.72890663652);
    msg.setSource(6908U);
    msg.setSourceEntity(24U);
    msg.setDestination(14602U);
    msg.setDestinationEntity(206U);
    msg.sessid = 1108506007U;

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
    msg.setTimeStamp(0.519570997419);
    msg.setSource(61244U);
    msg.setSourceEntity(164U);
    msg.setDestination(31181U);
    msg.setDestinationEntity(196U);
    msg.sessid = 433983624U;

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
    msg.setTimeStamp(0.369971104385);
    msg.setSource(55760U);
    msg.setSourceEntity(18U);
    msg.setDestination(52413U);
    msg.setDestinationEntity(125U);
    msg.sessid = 2541889715U;

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
    msg.setTimeStamp(0.464807339951);
    msg.setSource(31877U);
    msg.setSourceEntity(215U);
    msg.setDestination(16437U);
    msg.setDestinationEntity(163U);
    msg.sessid = 1898662747U;
    msg.status = 0U;

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
    msg.setTimeStamp(0.609097702009);
    msg.setSource(39822U);
    msg.setSourceEntity(224U);
    msg.setDestination(16215U);
    msg.setDestinationEntity(214U);
    msg.sessid = 2101279991U;
    msg.status = 148U;

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
    msg.setTimeStamp(0.432916485389);
    msg.setSource(32768U);
    msg.setSourceEntity(208U);
    msg.setDestination(5176U);
    msg.setDestinationEntity(28U);
    msg.sessid = 2311318028U;
    msg.status = 103U;

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
    msg.setTimeStamp(0.414662641362);
    msg.setSource(9333U);
    msg.setSourceEntity(30U);
    msg.setDestination(197U);
    msg.setDestinationEntity(141U);
    msg.name.assign("XHJRMZAAUJYQILPEQLQSKYBMKNOPYTSDIO");

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
    msg.setTimeStamp(0.358779342926);
    msg.setSource(45780U);
    msg.setSourceEntity(106U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(25U);
    msg.name.assign("JHVTSPSCUFGRIC");

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
    msg.setTimeStamp(0.66806784159);
    msg.setSource(21192U);
    msg.setSourceEntity(96U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(136U);
    msg.name.assign("GHCQVMGOSEZSATCKEJLLQOCUWSHIBKRUBNMQLJWDDWLLHSQYUGZIGGRHVBPKKVHOAQJJYNGNBPLKOTRFQATDMFVHYXXXCWXDBEQKRBTJAYFMPDHYEIKGLZXKYFYYUCRWKTANIWYFIPFBIVNZDAJDRUPZIJMXEWASPTPEWNIZQWQBCCEGRODBCMESCHVFYEGSSQPJRVFHOXWJMGIAVRSUTOUUDXKAPOHJMLVFSTB");

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
    msg.setTimeStamp(0.967721176535);
    msg.setSource(6890U);
    msg.setSourceEntity(57U);
    msg.setDestination(33152U);
    msg.setDestinationEntity(180U);
    msg.name.assign("OJWGHFPPKOSEGFFYPXTVPKLNPFGMPIOEJJNBEYAMFHJKDHBIPWOZWSQETIXSFBOARIUCWCOSQSXFNSRQGYUHJLXZWKYIBKYVAADQTMJRBDDHXCBGQMVGBZUFRELEAL");

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
    msg.setTimeStamp(0.218522603384);
    msg.setSource(62022U);
    msg.setSourceEntity(8U);
    msg.setDestination(53254U);
    msg.setDestinationEntity(208U);
    msg.name.assign("HXUQXMBWRRMCDRYJIEXBFCPQNDQOSDEXPZATXIISWHARFFNITYZVKQFGYJZHBNWCJNORGNZRYJLCTZHEOKZUKYGCLKAVHGEMWOWGUEKBRKDAMNTQWLVSWQILILVIDSXZBOSUPVSIWCAIZTDOADSGOKJOUXMRJAKSQYHCMHDKXXJFVUEPENNJMCBBGTZLPLFDDI");

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
    msg.setTimeStamp(0.414318982823);
    msg.setSource(7479U);
    msg.setSourceEntity(67U);
    msg.setDestination(62642U);
    msg.setDestinationEntity(63U);
    msg.name.assign("DSXIGASBOHMNRDCLRORVIQNEIPJJOUDURTXDQZUBPPGFDNFJZEKYMSGERLRCBAXLPQYTUWUCWHGXETZYNHCXHHVNNGRZUNPFCISVTMQJXPZKAGYKHSJWOYWZKOESWTMJOJCVMLGXQRKHVBKTGQVPLNUHCLVMIF");

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
    msg.setTimeStamp(0.781077269481);
    msg.setSource(22802U);
    msg.setSourceEntity(19U);
    msg.setDestination(53624U);
    msg.setDestinationEntity(159U);
    msg.type = 161U;
    msg.error.assign("OZCCZOIBFLXZCKPSCCZJMTASRWVVFWGJRPRNRWMLNCSJHQENAIKTVQFUNHPYCDIEVSYDBBSSAUTYSEWGBFRDKQRNVHOPQFKUXDKTNCXAYZNHIPXBGAVHWPKEJFQODCWPDDOEOYJLWHDIPZIXJTYBJHLMTVBLFGLITSAFUQMDEKNKMINLEEBYUO");

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
    msg.setTimeStamp(0.140347098005);
    msg.setSource(22455U);
    msg.setSourceEntity(248U);
    msg.setDestination(12124U);
    msg.setDestinationEntity(225U);
    msg.type = 214U;
    msg.error.assign("FUKKSAXOAXGYAZFIJVMMKNNVOUXSRHVUAVKVEQMRUTVTMLKQDGEWYZWLRMTOSNJTYCTYIBKBQOWNPPBNEJUPLSPDJLXHECQYATCGUPBMDJYVQXIPDDQMGECDLDRHFGWSTZYQEBFYLYDIUQTJTHBBCMWOPNQIOYLEZCZCKHSVSJZRUJZXEWUZNPUAONHADHAEVZCVIRZFHRIONPXGQBORLRSKHRLOPIWBSXBJCGCMMWFFSWGFDGGXA");

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
    msg.setTimeStamp(0.730859738231);
    msg.setSource(33099U);
    msg.setSourceEntity(223U);
    msg.setDestination(16529U);
    msg.setDestinationEntity(81U);
    msg.type = 169U;
    msg.error.assign("IRUGWPEVMIHBRALOLJPKILXXNICXGAIZWOEECZSMJQNVXLRSWKAXRNMPCSSUBPZLUWDXZADFTMQHBRCGPOZDXDWTCHBJQXNEMVVYQLAUEOQKTHYAMFNQYMSJJFWCHAOBZBEFXUFQKHFWKGATQLCVEZBLCKNSPDUIBJXNYVVRWIJRHONYUGDHKTUMYVURNGJWOKNPCGZIIMZQTAISFBTLOFKY");

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
    msg.setTimeStamp(0.51900516381);
    msg.setSource(45709U);
    msg.setSourceEntity(200U);
    msg.setDestination(36839U);
    msg.setDestinationEntity(117U);
    msg.seq = 303U;
    msg.sys_dst.assign("STIAVAUMXKQHWRNHMDTRKLYPQUBRLOWKJTMZDCRLJVAJPSCLELFPVGEDMIXRQBJNJLTKQXEHORBCHHYKKFUWWZIUJEVDDICEPHLHXZVWYSYCYQLDHRUFZJVACTSBTZWHNXFSQYGIXMPRPBWYELJBCATNNFSGEOXCOOCFKUITVVBGKEIIZFDRYEQZSSGNGVSULWQAYMNBPMFOSUIBDOOJ");
    msg.flags = 97U;
    const char tmp_msg_0[] = {-3, -38, 68, 30, -81, 24, 30, -71, -51, -50, 10, -18, -58, -128, -99, -83, -106, -101, -61, -84, -50, -65, 43, 87, -16, -3, 5, 90, -72, -72, -81, -61, -81, 86, 22, -49, 81, -47, -84, 102, 87, -87, -41, -113, 18, 93, -88, 54, 25, -79, 115, 3, 57, 74, -31, 58, -96, 109, 102, 86, 109, -69, -44, -49, -5, -70, 29, 48, 29, -72, -30, -22, -85, -116, 65, 107, 64, 7, -83, 71, 9, 43, 55, 96, 49, -86, 7, -75, -120, -52, -4, 65, -37, 12, -127, -7, 57, 48, 10, 39, -69, 18, -105, -92, -4, -50, 85, -28, 14, 53, 1, 63, 84, -78, 99, -115, -72, -93, -104, 121, -123, -21, -93, 114, 65, -101, 118, -106, 14, 33, 61, 44, -124, -20, -114, -111, -20, -30, -112, -3, 14, -61, 95, 117, -79, -124, -29, 2, -45, -32, -4, -109, -60, -16, 85, 66, -27, -72, -13, 55, 67, 99, 52, 92, -121, 9, -62, 16, 106, 71, 119, -96, 84, -105, 45, -95, -113, -128, -69, 5, -115, 73, -5, 28, -85, -48, -12, -124, 108, 78, -52, -101, -101, -8, -14, 38, 110, -93, -63, 81, 107, 125, -99, 56, -59, -34, 50, 103, 87, -77, 10, -4, 108, 103, 43, 26, 19, 118, -89, 89, -79, 7, -51, 68, -31, 41, 27, -43, 25};
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
    msg.setTimeStamp(0.650031598089);
    msg.setSource(61434U);
    msg.setSourceEntity(100U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(58U);
    msg.seq = 31670U;
    msg.sys_dst.assign("LTZZGDTMVIIHOAGBRLROTKUVLHKRPXQVKHFLOCAMWXCXTIDOOUSNVCJUL");
    msg.flags = 167U;
    const char tmp_msg_0[] = {58, 29, 124, -58, 50, -82, 22, -20, 3, 105, -90};
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
    msg.setTimeStamp(0.237805866891);
    msg.setSource(50884U);
    msg.setSourceEntity(68U);
    msg.setDestination(16568U);
    msg.setDestinationEntity(74U);
    msg.seq = 52586U;
    msg.sys_dst.assign("LZBBZCRIGCMQGNJETYQYPJXUENIBRASLOLRUAPFQQCDGLESTOPWUCOOLFJFBYARAHNSXUZOIKRNPKYKIUAJCBBDYRTHIDMGZDVQZIMUQHYVOPVABIHXKWADZZOWTHTDIVJOULWBOWKQIXAAGCYEJMXEJPXWCFRAHSES");
    msg.flags = 50U;
    const char tmp_msg_0[] = {-54, 13, 76, 23, -2, 81, 76, -93, -100, 78, -97, 83, 49, 1, 89, 57, 107, -6, -127, -26, 113, -19, 65, 99, -70, 82, 86, -41, -75, -28, 50, -90, 74, 122, -27, -92, 57, 0, 92, 108, 117, -3, 50, -1, -58, 85, 105, 8, 32, -9, -29, 0, -112, -77, -52, -94, -66, -118, 21, 73, 95, 106, 61, 84, 64, 64, 107, -59, -52, 55, 73, 63, 24, 61, 119, 43, -7, -17, 22, -77, -52, -3, 57, 38, 98, 48, -121, -39, 32, -46, 24, 33, -77, 52, 53, 35, -100, -24, 53, -87, -44, -47, -85, -101, 31, 45, -14, 64, -8, 85, 80, -124, 1, -12, -56, -78, -44, -105, 9, 96, 17, 32, -40, 81, -62, 91, -104, 85, -91, 88, 68, -58, 72, -75, 102, 126, -80, -106, -49, 2, 19, -68, 44, 116, 97, 39, 62, 65, 66, 102, 5, -99, -103, -45, 37, 36, 91, 100, -96, 50, -41, 51, 36, 82, -30, 104, -56, -92, 29, -68, 106, -38, -62, 121, 19, 98, -67, 71, -94, -19, 104, 23, 100, 13, -82, 52, 71, 94, -107, 101, 11, 42, 41, -17, 49, -70, 90, -35, -81, -51, 51, -10, 93, 68, -90, -49, -117, -93, -26, -22, 99, -71, -6, 110, 75, 105, 122, -83, 70, 100, -108, -53, -109, -41, -105, 69, -54, 122, 108, -86, 120, 118, 111, 57, 65, -116, -3, -30, 42, 116, -36, 42, 43, 26, 5, -43, 1, 126, -114, -77, -25, 71, -105, -117};
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
    msg.setTimeStamp(0.644296278356);
    msg.setSource(32663U);
    msg.setSourceEntity(187U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(27U);
    msg.sys_src.assign("WPWRAZLXQSNGCENNPLUPRIKZFFCAGDAUYCSIJM");
    msg.sys_dst.assign("PVVCVBFRZMSWZPCGQHYUZALKHRVMVGJLKBUDWZXHZKQXETEBPRDABG");
    msg.flags = 110U;
    const char tmp_msg_0[] = {111, -62, -93, -29, 33, -58, -5, -64, 66, 46, 38, 56, -112, 13, 39, -14, -44, 18, 46, -84, 39, 74, -80, 2, -82, -68, -80, -109, -59, -99, -29, -55, -2, -6, -2, -73, 1, 25, -38, -126, -60, -73, 8, -25, -15, -34, 49, -84, -17, -71, -115, 107, -84, -127, 53, -77, -43, -89, 116, -105, 20, 32, -77, 23, -69, 1, 40, 89, -124, 88, -105, 44, 115, 119, -88, -121, 26, 32, -11, 8, -45, -21, -15, 46, -28, 69, -17, -41, 110, -79, 107, -119, -30, -87, -111, -97, 67, 35, -108, -3, 112, 36, -97, -22, -40, 7, -38, -14, -42, -87, 31, 112, -68, -98, -27, -114, -19, 57, 125, 33, -9, 59, 116, 79, -35, 62, -40, -86, -85, 126, 77, -111, 90, -54, 28, 96, -63, 24, -98, -93, 41, 122, -89, 69, 94, 62, 3, -19, 112, 48, 69, -48, -114, 51, -25, -117, -62, -45, -97, 16, -76, -84, -77, -80, -72, -101, -118, -50, 18, -61, 18, 103, -69, 73, -111, 45, 97, 72, 78, -9, 71, 4, 3, 104, 110, 22, 25, -102, -14, -90, 5, 21, 94, -8, -117, -99, -81, -81, -71, -19, 13, -9, -84, 38, -125, 97, -113, 108, -15, -25, -1, -1, 84, -112, 59, -44, 84, 94, 26, -109, -71, -66, 65, -78, -99, -35, -71, -66, 70, -100};
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
    msg.setTimeStamp(0.990279708696);
    msg.setSource(4606U);
    msg.setSourceEntity(92U);
    msg.setDestination(52127U);
    msg.setDestinationEntity(104U);
    msg.sys_src.assign("PQCAFKNQHHCDUKOSESIVVELKQMRZPWYDYVIIHFAVJABJQBONMEJIRRPMCOHYLKGTPWAOYGRMMGSSNAYMOPZAELUI");
    msg.sys_dst.assign("KXKTVYWCAUPSAQOEPFDENYUQUQQSHKTYYJTMZPXMOKYEUBRLHYEMRESWGVRQXRMSCWWZGWFFAGJNFDIPCCIWFRTMOYNHKSDUCHDRQMAQUJLTNLOOBAATAACOBGOHNUYIVGWBBOFNTXPZRYKJLBLQFGTPNGZXLMZURIROVDSEYIFZAITWHOJENDFXSJDPIRGHBHUIPJIMLGBHDZKLBXZNSEVPCJJWMELBXQCCX");
    msg.flags = 109U;
    const char tmp_msg_0[] = {-76, -125, 22, -119, 3, 62, 11, -23, -93, -29, -113, 109, 69, 81, -47, 24, -107, 52, -41, 68, 45, -25, 82, 106, 79, -45, 113, -70, -75, 11, 113, 74, -77, 92, -124, 32, -84, 80, 90, -74, 49, 124, 116, 2, -108, 104, -1, -88, -19, -74, -42, 27, 102, 69, 126, 89, 125, 39, -71, -31, 100, 34, -38, 78, 42, -109, 7, 24, 45, -69, 12, -49, 114, 14, 120, -44, -38, -6, -113, -67, 73, 62, -23, 81, 88, 0, 103, 53, 59, 28, 98, 26, -12, 36, -109, 120, -119, -21, 40, 40, -63, -42, 35, -119, -71};
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
    msg.setTimeStamp(0.359624830837);
    msg.setSource(19705U);
    msg.setSourceEntity(244U);
    msg.setDestination(24796U);
    msg.setDestinationEntity(165U);
    msg.sys_src.assign("UGFSFFUVQNNDIVMBFVTMIJPMEGEJYWSSANPRAEHZNLMACHXQBZHFWTZZSAHXCDWCXKNPYWFHBETHGIQHJRULXYOJUYQYRTLEPQVQLXLDUMTJTLZNYIOESSDXIUAX");
    msg.sys_dst.assign("PKKBIYGPMFGBRERWRYMFEMDQZJTYUFHMLDEWIDADOFQGPQNCSLV");
    msg.flags = 198U;
    const char tmp_msg_0[] = {-20, -114, -73, 59, 20, 107, -15, 57, 106, 51, 27, -109, 88, 77, -37, -65, -70, 38, 74, -48, 76, -65, -50};
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
    msg.setTimeStamp(0.202037211412);
    msg.setSource(63212U);
    msg.setSourceEntity(103U);
    msg.setDestination(25833U);
    msg.setDestinationEntity(117U);
    msg.seq = 59353U;
    msg.value = 110U;
    msg.error.assign("PETNXGVKXEJXACWYHHBKQGLRLTYJJCLCHYMRVJJFPEZGAJDQPVZBBHAUQKPEZJOFDXDYNWZQBZQLWUZACUEADIRTOEEXISAIUXMVFNMXKNEGSEWOIUFNANRBOQADYRIZGMFYZCVAOODCUWSPHR");

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
    msg.setTimeStamp(0.506608042835);
    msg.setSource(5185U);
    msg.setSourceEntity(137U);
    msg.setDestination(7297U);
    msg.setDestinationEntity(212U);
    msg.seq = 39808U;
    msg.value = 75U;
    msg.error.assign("LQDTRINAUCWBIHJJRAAFCMFWZRPPTIODUFODVQPZUREDVLJCFGZLMMDFMQIVDYUXXKBSKIGSBLONSSEEFKUXVTKVTPYMJMLUYCLTUNUDBARQONPKAOSHWXHORAKHPGGGDFRGZQZUDBJCPTZYHQYMGOQPLVEWMNQFWBESIJEZQYBXBCDJEYVWMCHGNJVVZYIXXNTLWRKHXAEPGLWCRQOETFBJYZRLTHTCWFGIYKK");

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
    msg.setTimeStamp(0.629625051664);
    msg.setSource(64677U);
    msg.setSourceEntity(238U);
    msg.setDestination(35996U);
    msg.setDestinationEntity(76U);
    msg.seq = 8483U;
    msg.value = 197U;
    msg.error.assign("YWWOBRASCNQHVNARQKVGRPDHYPEJEFEMLARZBTNFJOKFWMLNRCFZSYMMMXSDXNVRLYYVGJGICYOIOIDBTCIWTQTJFZDUWWJZUZTDSKQOAPIMZLPKLNHERFQFGYHETINLVBTBDBRIEWWDCQHJPQGGKXVRAUGZDHQOOEJMFXGNSBPEYULZH");

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
    msg.setTimeStamp(0.836528199294);
    msg.setSource(41638U);
    msg.setSourceEntity(81U);
    msg.setDestination(136U);
    msg.setDestinationEntity(204U);
    msg.seq = 7887U;
    msg.sys.assign("LELPNJLMFVXILWSYUUOUCPKECBQONNEBBEDLXPVTQZPWRRPKNFNIQBHCAIGARDRLMXIKAYXYYCBDJKLCKMKWFFFAASVJWJWGFAMVYZNORSYZDSJKSSWRZQXQPHNKMIZRVUABQVGTFIDHHZHLCLGWUWTORGIFQTHVXXNRUT");
    msg.value = 0.869913870262;

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
    msg.setTimeStamp(0.269225312495);
    msg.setSource(4026U);
    msg.setSourceEntity(55U);
    msg.setDestination(30079U);
    msg.setDestinationEntity(208U);
    msg.seq = 17696U;
    msg.sys.assign("SZMCHUARIGQWFBSEWUMAPTGKDOKKVSFDKRMBRACBKTNNAGCRDHQRVTOZIJQDSRJJHBNSCWOEHFMOYNMWIAUILSUHYOFIBCZEOWCZHJWPSEKGYNFXRZKRGXCFPDQQOVXZSYDDNXPXGJNGEFZETJFBFOJLVZIXLVWELYEIRKBPWOMXGLMDYUUANHULZ");
    msg.value = 5.3877169817e-05;

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
    msg.setTimeStamp(0.202131716561);
    msg.setSource(22028U);
    msg.setSourceEntity(43U);
    msg.setDestination(55987U);
    msg.setDestinationEntity(31U);
    msg.seq = 46206U;
    msg.sys.assign("UXYNGDLYRKWMEXJBAGNVJMHZIXDVURYBHQTPZZYZQNIUCHHEGBNWORCMLUPJCIDKJNBOLRLKAFUGOAHFISSLDETXUPBGEWGJJLFPIIMYEPKGSVGVUIAXSOF");
    msg.value = 0.069678470983;

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
    msg.setTimeStamp(0.198582832712);
    msg.setSource(64451U);
    msg.setSourceEntity(225U);
    msg.setDestination(33691U);
    msg.setDestinationEntity(76U);
    msg.action = 230U;
    msg.longain = 0.87079642497;
    msg.latgain = 0.0613542864189;
    msg.bondthick = 2453180721U;
    msg.leadgain = 0.0178300070147;
    msg.deconflgain = 0.201196811561;

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
    msg.setTimeStamp(0.703880227274);
    msg.setSource(12712U);
    msg.setSourceEntity(186U);
    msg.setDestination(63327U);
    msg.setDestinationEntity(68U);
    msg.action = 80U;
    msg.longain = 0.197262285264;
    msg.latgain = 0.0648937891795;
    msg.bondthick = 1470093774U;
    msg.leadgain = 0.337598380016;
    msg.deconflgain = 0.874459328629;

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
    msg.setTimeStamp(0.974388328613);
    msg.setSource(40986U);
    msg.setSourceEntity(133U);
    msg.setDestination(48893U);
    msg.setDestinationEntity(219U);
    msg.action = 41U;
    msg.longain = 0.899615434864;
    msg.latgain = 0.0886339537074;
    msg.bondthick = 3780686567U;
    msg.leadgain = 0.167082121724;
    msg.deconflgain = 0.574127858788;

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
    msg.setTimeStamp(0.302319483812);
    msg.setSource(53136U);
    msg.setSourceEntity(108U);
    msg.setDestination(24179U);
    msg.setDestinationEntity(244U);
    msg.err_mean = 0.747803358166;
    msg.dist_min_abs = 0.605237058138;
    msg.dist_min_mean = 0.245023867866;

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
    msg.setTimeStamp(0.870827834164);
    msg.setSource(64763U);
    msg.setSourceEntity(121U);
    msg.setDestination(49269U);
    msg.setDestinationEntity(104U);
    msg.err_mean = 0.130621101771;
    msg.dist_min_abs = 0.142601212602;
    msg.dist_min_mean = 0.941290884264;

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
    msg.setTimeStamp(0.720203543443);
    msg.setSource(11926U);
    msg.setSourceEntity(132U);
    msg.setDestination(55611U);
    msg.setDestinationEntity(40U);
    msg.err_mean = 0.147739304994;
    msg.dist_min_abs = 0.297272722381;
    msg.dist_min_mean = 0.939405471496;

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
    msg.setTimeStamp(0.581703040678);
    msg.setSource(5345U);
    msg.setSourceEntity(36U);
    msg.setDestination(6105U);
    msg.setDestinationEntity(30U);
    msg.action = 44U;
    msg.lon_gain = 0.61911521679;
    msg.lat_gain = 0.0380678121995;
    msg.bond_thick = 0.0256888950255;
    msg.lead_gain = 0.749229992305;
    msg.deconfl_gain = 0.42340301683;
    msg.accel_switch_gain = 0.750140190799;
    msg.safe_dist = 0.963724388048;
    msg.deconflict_offset = 0.540647262297;
    msg.accel_safe_margin = 0.383538966968;
    msg.accel_lim_x = 0.836258621659;

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
    msg.setTimeStamp(0.00907419456452);
    msg.setSource(54354U);
    msg.setSourceEntity(202U);
    msg.setDestination(15553U);
    msg.setDestinationEntity(122U);
    msg.action = 197U;
    msg.lon_gain = 0.856821513773;
    msg.lat_gain = 0.698195432857;
    msg.bond_thick = 0.517226870867;
    msg.lead_gain = 0.9740788036;
    msg.deconfl_gain = 0.199637083008;
    msg.accel_switch_gain = 0.868425570924;
    msg.safe_dist = 0.308362175992;
    msg.deconflict_offset = 0.953091682056;
    msg.accel_safe_margin = 0.955091672689;
    msg.accel_lim_x = 0.335975953564;

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
    msg.setTimeStamp(0.435540842905);
    msg.setSource(28026U);
    msg.setSourceEntity(245U);
    msg.setDestination(38406U);
    msg.setDestinationEntity(97U);
    msg.action = 236U;
    msg.lon_gain = 0.0841273014976;
    msg.lat_gain = 0.964592769605;
    msg.bond_thick = 0.0245799365985;
    msg.lead_gain = 0.463772490689;
    msg.deconfl_gain = 0.401478980066;
    msg.accel_switch_gain = 0.840134067718;
    msg.safe_dist = 0.0688906522169;
    msg.deconflict_offset = 0.18043641066;
    msg.accel_safe_margin = 0.312684027434;
    msg.accel_lim_x = 0.490733763835;

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
    msg.setTimeStamp(0.715861261029);
    msg.setSource(27559U);
    msg.setSourceEntity(20U);
    msg.setDestination(14013U);
    msg.setDestinationEntity(188U);
    msg.type = 31U;
    msg.op = 33U;
    msg.err_mean = 0.883028601333;
    msg.dist_min_abs = 0.495505838093;
    msg.dist_min_mean = 0.339806065564;
    msg.roll_rate_mean = 0.500005066666;
    msg.time = 0.615348779293;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 28U;
    tmp_msg_0.lon_gain = 0.890030401707;
    tmp_msg_0.lat_gain = 0.9741908004;
    tmp_msg_0.bond_thick = 0.288532581218;
    tmp_msg_0.lead_gain = 0.434452958911;
    tmp_msg_0.deconfl_gain = 0.897863541651;
    tmp_msg_0.accel_switch_gain = 0.490908372949;
    tmp_msg_0.safe_dist = 0.385692216517;
    tmp_msg_0.deconflict_offset = 0.261995716807;
    tmp_msg_0.accel_safe_margin = 0.462559808795;
    tmp_msg_0.accel_lim_x = 0.511214776134;
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
    msg.setTimeStamp(0.0871579108624);
    msg.setSource(60496U);
    msg.setSourceEntity(188U);
    msg.setDestination(62198U);
    msg.setDestinationEntity(23U);
    msg.type = 5U;
    msg.op = 236U;
    msg.err_mean = 0.0352265429031;
    msg.dist_min_abs = 0.955345092723;
    msg.dist_min_mean = 0.020065144706;
    msg.roll_rate_mean = 0.779116210223;
    msg.time = 0.335457856696;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 115U;
    tmp_msg_0.lon_gain = 0.304973834316;
    tmp_msg_0.lat_gain = 0.742533162894;
    tmp_msg_0.bond_thick = 0.84168118482;
    tmp_msg_0.lead_gain = 0.849246379471;
    tmp_msg_0.deconfl_gain = 0.936785170273;
    tmp_msg_0.accel_switch_gain = 0.904118510853;
    tmp_msg_0.safe_dist = 0.841613926124;
    tmp_msg_0.deconflict_offset = 0.00389472739321;
    tmp_msg_0.accel_safe_margin = 0.378096067682;
    tmp_msg_0.accel_lim_x = 0.558888658635;
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
    msg.setTimeStamp(0.966525152349);
    msg.setSource(55946U);
    msg.setSourceEntity(191U);
    msg.setDestination(9349U);
    msg.setDestinationEntity(96U);
    msg.type = 172U;
    msg.op = 31U;
    msg.err_mean = 0.336533042298;
    msg.dist_min_abs = 0.249567133113;
    msg.dist_min_mean = 0.581632149191;
    msg.roll_rate_mean = 0.451130591622;
    msg.time = 0.55405547117;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 218U;
    tmp_msg_0.lon_gain = 0.586330789497;
    tmp_msg_0.lat_gain = 0.380421401536;
    tmp_msg_0.bond_thick = 0.703070169117;
    tmp_msg_0.lead_gain = 0.877008261881;
    tmp_msg_0.deconfl_gain = 0.330367597117;
    tmp_msg_0.accel_switch_gain = 0.936835824042;
    tmp_msg_0.safe_dist = 0.169037370258;
    tmp_msg_0.deconflict_offset = 0.292868586047;
    tmp_msg_0.accel_safe_margin = 0.571471836497;
    tmp_msg_0.accel_lim_x = 0.848031634067;
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
    msg.setTimeStamp(0.834558244571);
    msg.setSource(51609U);
    msg.setSourceEntity(114U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.519306510403;
    msg.lon = 0.924633557279;
    msg.eta = 4037306225U;
    msg.duration = 20384U;

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
    msg.setTimeStamp(0.937950953214);
    msg.setSource(47520U);
    msg.setSourceEntity(21U);
    msg.setDestination(43194U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.317038002242;
    msg.lon = 0.890064965065;
    msg.eta = 2277324535U;
    msg.duration = 12411U;

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
    msg.setTimeStamp(0.486173766428);
    msg.setSource(38499U);
    msg.setSourceEntity(84U);
    msg.setDestination(46425U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.582843618048;
    msg.lon = 0.984269476075;
    msg.eta = 1036134176U;
    msg.duration = 45198U;

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
    msg.setTimeStamp(0.622632521965);
    msg.setSource(17293U);
    msg.setSourceEntity(46U);
    msg.setDestination(34583U);
    msg.setDestinationEntity(245U);
    msg.plan_id = 8409U;

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
    msg.setTimeStamp(0.123841740689);
    msg.setSource(40943U);
    msg.setSourceEntity(159U);
    msg.setDestination(44409U);
    msg.setDestinationEntity(94U);
    msg.plan_id = 32696U;

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
    msg.setTimeStamp(0.608093399494);
    msg.setSource(25390U);
    msg.setSourceEntity(28U);
    msg.setDestination(3302U);
    msg.setDestinationEntity(120U);
    msg.plan_id = 36252U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.323503467442;
    tmp_msg_0.lon = 0.235625779013;
    tmp_msg_0.eta = 1740197383U;
    tmp_msg_0.duration = 15265U;
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
    msg.setTimeStamp(0.886984160443);
    msg.setSource(64091U);
    msg.setSourceEntity(245U);
    msg.setDestination(14390U);
    msg.setDestinationEntity(168U);
    msg.type = 130U;
    msg.command = 121U;
    msg.settings.assign("VPAOJFCOQFTYTUVKJXIYKHWBDRPNEIIVAHWEACLVCDETZKBFDSGBEJWMJIMHQULQMUAJXYURQTBMLCABVDOBUBSDCFMJOGAXZHWWGPNOXIUDZPCERTZUTZOHSQISQODLGLYDMFZNSNFMLHSNJGMKYIDXWUPVVEESAZNFLQKVEZRUNNCRCKXKXBEQXXORGKFBVY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 39812U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CPGGNJTMFWYMPRUXNLRPQSPMIVOXHWDAJTRZYROCABZWBVM");

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
    msg.setTimeStamp(0.431140976399);
    msg.setSource(9850U);
    msg.setSourceEntity(227U);
    msg.setDestination(9243U);
    msg.setDestinationEntity(146U);
    msg.type = 122U;
    msg.command = 7U;
    msg.settings.assign("DSQHZKKYVNKAJPTPXFLNBCIEQMVBEDVVFKGUWFQGRKXCEGPTVVSHJYHZACMPNXFLJOARMRPQDUUIDTPLCWBQHODMLJNFCJIHXUZUIZDCVDCVWRIKXSXPZABOYMTRCSZRFUZNCEAWQQNFEXJEPYJMKVTMSXANGAWQRWEKHOLYAWNMFXBBWJLLQRKELYYWBIHNUAPCGFOGGGYYEOGDUOZPJM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 63543U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AUDDPTJYWLDDBKPVMNDMBNISEQIMEJFXZPOEEAUWATHHUKBSFLIVQPUSQFBFFHJNDJPXFHXTTSXTKLPJBNLLBWCDYGVOEZWALXVQYSKULWIAGYWYYQIJBLZAOCERFNUZMKEORSPPDOJWHUTCSTCIYRMMMZICXZTJGPMYRHVVAUCLCBTOAXOSMKRGCYSKZGWRFUPORF");

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
    msg.setTimeStamp(0.165551269596);
    msg.setSource(57154U);
    msg.setSourceEntity(247U);
    msg.setDestination(1035U);
    msg.setDestinationEntity(82U);
    msg.type = 44U;
    msg.command = 230U;
    msg.settings.assign("OONURTXHHKQIJFMMLGDPWNKHUKGEYRNORYXDPMBWCAZYKDQCUCPHYXBFCMNGFZWDEAFKRXFASJIJFYBJUQLYVYFDOLRZBOQWQQSWLQSHVLPSQZWXGOTHIBUIJBWDRLEECOVMSFOWXVNDZIKUGETZMWAPMAUSFSUQHGJCITVCAELGGVOJLPJNRDPAMUDSKKILDREOYXXZPAXYHZHTZNGRNCKAEABCVKZQGTMEVJBPSYHMNNBXVTVP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43421U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TXMQFVAQKSNDNFQJWHXCPEQOZBUNIMHOUYUPRDMJZJXCKFGYJUAGFXNKEHDZIWJDVNBCFFJZRBEKWALWSHHIEHBMBFXREMGIBRZRHSATYQSBUTUOLFOCYTPWXXNLKQXLOQSVVMGADZXIYGJOCJPQRBKILQGEUODAKVCGYHYZXK");

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
    msg.setTimeStamp(0.0469064348998);
    msg.setSource(29489U);
    msg.setSourceEntity(60U);
    msg.setDestination(41211U);
    msg.setDestinationEntity(189U);
    msg.state = 165U;
    msg.plan_id = 29975U;
    msg.wpt_id = 200U;
    msg.settings_chk = 42911U;

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
    msg.setTimeStamp(0.966683567149);
    msg.setSource(41591U);
    msg.setSourceEntity(192U);
    msg.setDestination(15115U);
    msg.setDestinationEntity(88U);
    msg.state = 249U;
    msg.plan_id = 46839U;
    msg.wpt_id = 29U;
    msg.settings_chk = 7256U;

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
    msg.setTimeStamp(0.844518176177);
    msg.setSource(33000U);
    msg.setSourceEntity(226U);
    msg.setDestination(28723U);
    msg.setDestinationEntity(244U);
    msg.state = 52U;
    msg.plan_id = 37512U;
    msg.wpt_id = 248U;
    msg.settings_chk = 47021U;

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
    msg.setTimeStamp(0.101000785509);
    msg.setSource(58537U);
    msg.setSourceEntity(118U);
    msg.setDestination(48849U);
    msg.setDestinationEntity(38U);
    msg.uid = 222U;
    msg.frag_number = 43U;
    msg.num_frags = 23U;
    const char tmp_msg_0[] = {-28, 74, -90, -15, 5, 38, 17, 8, 123, 22, 91, -97, -91, 42, -42, 40, -70, -9, 77, 4, -81, 96, -106, -8, -127, 62, -50, 73, -10, -66, 126, -86, 20, 107};
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
    msg.setTimeStamp(0.793912725728);
    msg.setSource(53452U);
    msg.setSourceEntity(150U);
    msg.setDestination(33288U);
    msg.setDestinationEntity(193U);
    msg.uid = 229U;
    msg.frag_number = 175U;
    msg.num_frags = 197U;
    const char tmp_msg_0[] = {93, -10, -67, -104, -2, 124, 30, 101, -92, 113, -51, -58, 104, -112, -118, -18, 38, 26, 48, -22, -13, -30, 118, 27, 21, -53, 111, -89, -92, 33, -100, 1, 56, -94, 14, 59, -4, -8, 14, -13, -80, 117, -45, -65, -65, 77, 53, 26, 88, -45, -63, 32, -107, 78, 67, -32, -116, 71, 54, 123, -90, -80, -7, -39, 86, -115, -56, 111, 40, -18, 68, -78, -88, -66, 88, -49, 59, -34, -119, 126, 80, -33, -93, 7};
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
    msg.setTimeStamp(0.955982192299);
    msg.setSource(30718U);
    msg.setSourceEntity(57U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(82U);
    msg.uid = 59U;
    msg.frag_number = 138U;
    msg.num_frags = 96U;
    const char tmp_msg_0[] = {-84, -108, -89, -103, -19, 23, 18, -23, 4, -108, -83, -57, -23, -118, -62, 3, -125, -77, -114, -5, -103, 112, -68, -71, -28, -17, -78, -80, 55, -105, -78, 93, 50, 65, -9, -76, -13, -32, -23, -108, 11, -78, 0, -62, 0, -43, -70, 20, 20, 48, -83, -5, -7};
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
    msg.setTimeStamp(0.620330222349);
    msg.setSource(48689U);
    msg.setSourceEntity(220U);
    msg.setDestination(57871U);
    msg.setDestinationEntity(253U);
    msg.content_type.assign("KBYAHYCQCDFMOSJNNXFEPKTMVYNOLLTSPFWCLZQBFLWRMXNTWBSXRQUYGDUUPMRQEIGGPPTNTISGWDWOWGUXRZGVVIDJDVCRKJZJJDZROBANGXUYZQRTHZQEYNTBHOEKHSBKEXEVGMPUFTKHPHFCEBYFINAWMISLDUIGZODMQALXLPEMGOXFJYHZBTCHSQNOWEIOCDIBSQZBUKRLCSPVSAZXEATFLVFRHJJAKAPLUKV");
    const char tmp_msg_0[] = {125, 59, 126, 33, 72, 50, -78, -110, -120, -91, 17, -118, -115, -80, -104, 15, 121, 85, 88, 13, -25, -97, -77, -124, 101, -112, -32, 32, -55, 4, 57, -68, -121, -4, 43, 65, -81, 58, -7, -92, -51, -88, 22, 30, 1, -96, 19, -54, 4, -83, -4, -14, 71, 73, -64, 32, 111, 80, -111, 82, -113, -22, 108, -34, -66, -84, 29, -89, -123, -23, 25, 101, -72, 25, -58, 102, -107, 25, -99, 99, 121, 8, 66, 64, 65, -98, -70, -84, -97, 88, 93, 11, 83, -8, -67, -11, 106, 33, -5, 69};
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
    msg.setTimeStamp(0.948354759703);
    msg.setSource(21848U);
    msg.setSourceEntity(22U);
    msg.setDestination(53046U);
    msg.setDestinationEntity(239U);
    msg.content_type.assign("RJTXRLHPUABCLIEFNCHYPSBCMZVGLICYZEDWNESNUUSZBAJXPGPWJGHILIKQTOFSFSLYUNSOHBTKPVCOCITJQBYOXRKQNWBWXLBRQFDWTGMASMHCZVZQNIJQDLCDBKVPRNCPKQDMEVUXKHWMQXTYIYBAEFMJKZLFDYQNIPRZDUVKJTOQZWDAJZ");
    const char tmp_msg_0[] = {-42, 109, 10, 27, -1, 64, 101, 99, -81, -67, -61, -36, -90, -62, 42, -18, 55, -71, -107, 116, -48, 95, 68, -128, 5, -119, -53, -48, 0, -91, -47, -92, -71, -126, -98, -8, -71, 99, -95, -70, -75, 47, 98, 91, -61, 0, -127, 110, -27, 21, 58, 96, 68, -36, 96, 113, 93, -106, -124, -40, 67, 18, -60, 89, 77, -42, 73, 22, -36, 126, 83, -123, -106, 75, 95, 54, -42, -57, -128, -104, -46, -92, 72, 81, -33, -63, 88, 23, -48, -6, -123, -128, -92, -107, 55, 37, -89, 19, -34, -65, 32, -14, -71, 110, 27, 19, 90, 58, 118, -97, -38, -117, 85, 52, -30, -79, 87, -86, 64, 125, 60, 42, 8, 45, 5, 112, 33, -86, -2, -40, -101, 124, -116, -51, 14, 26, -108, -97, 103, -113, 62, -116, -34, -72, 79, -27, 67, -84, -107, -73, -38, 64, 67, 125, -128, 3, 74, -122, 79, -75, -79, -78, -23, 2, -20, -42, 88, 25, -2, -27, 110, -58, 105, 2, -49, -42, -20, 83, -71, -103, -77, -46, 68, -86, 76, -34, 78, 60, 26, 113, 114, -100, 3, 114, 86, 34};
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
    msg.setTimeStamp(0.213340984875);
    msg.setSource(64088U);
    msg.setSourceEntity(73U);
    msg.setDestination(16811U);
    msg.setDestinationEntity(222U);
    msg.content_type.assign("UBKAXGJATKBHEKMVPELEWTBZKDIMCUM");
    const char tmp_msg_0[] = {-118, 5, -100, 55, 8, -33, -120, -94, -43, 89, -123, 6, 37, 39, 63, 92, 12, -114, 20, -16, 52, 53, 28, 50, -93, -11, 102, 36, -100, 92, -97, -102, 63, 53, -11, 22, 38, -92, 34, 17, 8, 125};
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
    msg.setTimeStamp(0.312438810456);
    msg.setSource(13213U);
    msg.setSourceEntity(77U);
    msg.setDestination(50247U);
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
    msg.setTimeStamp(0.373123464122);
    msg.setSource(29261U);
    msg.setSourceEntity(89U);
    msg.setDestination(134U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.0142496818524);
    msg.setSource(32513U);
    msg.setSourceEntity(149U);
    msg.setDestination(9366U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.191840624772);
    msg.setSource(8424U);
    msg.setSourceEntity(42U);
    msg.setDestination(55828U);
    msg.setDestinationEntity(42U);
    msg.target = 13284U;
    msg.bearing = 0.437725036758;
    msg.elevation = 0.429500281924;

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
    msg.setTimeStamp(0.876080686459);
    msg.setSource(2876U);
    msg.setSourceEntity(212U);
    msg.setDestination(26747U);
    msg.setDestinationEntity(228U);
    msg.target = 55529U;
    msg.bearing = 0.938309033662;
    msg.elevation = 0.445359860503;

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
    msg.setTimeStamp(0.115690209292);
    msg.setSource(45169U);
    msg.setSourceEntity(84U);
    msg.setDestination(50694U);
    msg.setDestinationEntity(1U);
    msg.target = 47934U;
    msg.bearing = 0.331360851733;
    msg.elevation = 0.124288816407;

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
    msg.setTimeStamp(0.590752236119);
    msg.setSource(61032U);
    msg.setSourceEntity(114U);
    msg.setDestination(28699U);
    msg.setDestinationEntity(244U);
    msg.target = 692U;
    msg.x = 0.388425006112;
    msg.y = 0.355963974294;
    msg.z = 0.319429789914;

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
    msg.setTimeStamp(0.51699354742);
    msg.setSource(42633U);
    msg.setSourceEntity(185U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(104U);
    msg.target = 44961U;
    msg.x = 0.769972923439;
    msg.y = 0.130930582269;
    msg.z = 0.0690617370976;

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
    msg.setTimeStamp(0.280028269602);
    msg.setSource(58855U);
    msg.setSourceEntity(93U);
    msg.setDestination(65420U);
    msg.setDestinationEntity(134U);
    msg.target = 60408U;
    msg.x = 0.673611502824;
    msg.y = 0.965386265768;
    msg.z = 0.188083457501;

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
    msg.setTimeStamp(0.579193444035);
    msg.setSource(1752U);
    msg.setSourceEntity(132U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(75U);
    msg.target = 26543U;
    msg.lat = 0.767133497376;
    msg.lon = 0.210545431592;
    msg.z_units = 49U;
    msg.z = 0.0895127487785;

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
    msg.setTimeStamp(0.194641219376);
    msg.setSource(14970U);
    msg.setSourceEntity(224U);
    msg.setDestination(32398U);
    msg.setDestinationEntity(34U);
    msg.target = 7411U;
    msg.lat = 0.48518644986;
    msg.lon = 0.0766190790285;
    msg.z_units = 45U;
    msg.z = 0.663792738123;

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
    msg.setTimeStamp(0.690613536146);
    msg.setSource(50799U);
    msg.setSourceEntity(182U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(52U);
    msg.target = 41445U;
    msg.lat = 0.92333665946;
    msg.lon = 0.553072437159;
    msg.z_units = 238U;
    msg.z = 0.857880285919;

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
    msg.setTimeStamp(0.788278053337);
    msg.setSource(36463U);
    msg.setSourceEntity(200U);
    msg.setDestination(56740U);
    msg.setDestinationEntity(200U);
    msg.locale.assign("UYGOHEUFZFHBEVDPFIUWSFHISTUTYRFMIVZYXPHQDMNMCCEPIRQGZPCENMECHMWNYFJYVZHVLXAXXATOFJVNCRIMTADQNUKSWLDDCSWVBWRNAROJEJNMJTHHXKFNKRAZUDHQVIMIEPUGA");
    const char tmp_msg_0[] = {85, -75, -73, -75, -80, 66, 19, 11, 124, 106, 58, 0, -51, -40, 14, 97, -66, 53, -36, 92, 115, 1, -79, 72, 93, -119, -7, -66, -4, -51, 16, 38, 71, 16, 57, -105, -82, -27, 85, -55, -105, 68, -41, -104, -96, -99, 78, -18, 90, 44, -34, 78, 110, -105, 75, 38, -97, 39, 59, 29, 0, 23, 7, -46, -6, -40, -24, 107, 103, 53, -16, -106, 75, 31, -73, 18, -27, 116, 105, 63, -5, -47, -124, -108, 125, -26, -110, -96, -57, -106, 102, -108, 106, 63, 67, 55, -90, -12, 80, 108, 86, -36, -44, 23, -8, 126, -38, -32, 20, 89, 40, 84, 36, -37, 80, -76, 37, 68, -37, -56, -49, 105, -74, 45, 22, -1, 60, -11, -76, -44, 105, 95, 90, -80, 113, -59, -33, -101, 16, 16, -38, -58, -53, -87, -79, 70, -90, -126, 125, -75, 111, -26, -70, -50, 66, 62, 44, 33, 33, -112, -51, -84, -64, -114, -21, -92, 63, 50, -81, 3, -49, -97, -3, 108, -93};
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
    msg.setTimeStamp(0.99698969419);
    msg.setSource(17193U);
    msg.setSourceEntity(153U);
    msg.setDestination(5609U);
    msg.setDestinationEntity(33U);
    msg.locale.assign("ZLXYNRPZVMMPRESLJAQUETTNKSYXDIMHBVJRTCKFTFYSAWMHFUAKFQEDZAPWPLPYEVKQGPHBNKINCFPZ");
    const char tmp_msg_0[] = {67, 19, 83, 9, -21, -98, -57, -5, 47, -103, -103, -119, -44, -17, -14, -120, 59, 83, -79, -68, -103, -11, 76, -23, -28, -90, 75, 107, 121, 81, -44, -10, -125, -105, 113, 121, -112, 96, -46, 64, 110, 110, 39, 54, 7, 61, 111, 106, 71, -47, -87, 99, 48, 40, 98, -89, -24, 54, 78, -88, -33, 8, 51, 19, 81, 123, -46, 117, -101, -125, 96, 89, -120, -48, -96, -2, 91, -55, -112, -29, -69, -17, 25, 65, -7, -112, 0, 79, -122, -61, -49, -15, 119, 28, 2, -23, -84, 53, -96, -24, -117, -12, 81, -3, -117, 6, 48, 104, 107, -112, -111, 43, -112, -89, -65, 32, -37, 105, 112, 54, -73, -93, -49, -52, 67, -61, 31, 84, -67, -52, -34, -116, -127, 105, 15, -109, -29, 83, -108, 82, -55, -114, -48, -1, -109, -119, -92, -35, -93, 45, -1, 14, 31, -50, 56, -30, 99, 2, 125, 22, -82, -7, 50, -1, 53, 92, 79, 80, 96, -58, 101, 101, 61, 20, -126, -59, 67, -66, 36, -93, -8, 97, 68, -32, -100, 21, 32, -104, 83, -112, -122, -86, 95, -17, 57, -34, 95, 87, 6, 125, -77, -52, 71, -50, -30, -83, -90, 24, 54, 101, 107, -79, -15, -61, 79, 105, -3, 47, 93, -7, -92, 37, 38, -74, -16, 109, 69, -52, -41, -88, -8, -55, -16, 86, 81, -22, 62, -86, -93, -17, 122, -78, -8, 0, 100, 72};
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
    msg.setTimeStamp(0.803107670535);
    msg.setSource(27991U);
    msg.setSourceEntity(132U);
    msg.setDestination(13212U);
    msg.setDestinationEntity(217U);
    msg.locale.assign("OIMLMKPKBYCQWDKTUVXWMEVNCRQTNXCFLYTNAUASFUIWWVRDWURNWWADMESTMSDZMOESLGKJFSTMYBZEHHILJIALVUDVPNXJXCOZAFOBIJPLRSJAOYSJMNTZOGGBJD");
    const char tmp_msg_0[] = {47, -1, 54, 40, -14, 86, 44, 63, -40, -29, -60, 100, 84, 15, 53, 94, -101, 60, 24, 26, -84, 70, 18, -3, 23, 54, 81, -2, 82, -124, -107, 42, 38, -67, 83, -83, 118, 47, -60, -7, -66, -20, 101, -112, -90, -22, -67, 72, -49, -96, -111, 123, 61, 40, 100, -77, -29, 101, -53, -28, 9, 23, -114, 108, -43, 5, 38, 95, 29, 45, -106, -99, 76, -3, 118, 32, -92, -48, 35, -24, -116, -97, 81, -67, -90, -64, -91, 61, 102, -33, 98, 74, 35, 63, 2, 55, 7, -120, 116, 67, 73, 89, 47, 115, -26, 107, 14, 117, 125, 82, -54, 94, 43, 74, 15, -100, -28, -115, 61, 32, 7, -105, -8, -30, 99, -76, 65, -88, 108, -30, 51, 120, -14, 65, -113, 61, -90, 56, 82, -40, 6, 41, 44, -6, -124, 77, 27, -25, -7, -104, -32, -52, 87, 72, -32, -40, -47, 37, -121, -1, -94, 23, -2, -127, 103, -112, 8, -107, 86, -110, 69, -61, -53, -64, 53, -68, -28, -29, 74, -109, -104, -32, 87, -75, -39, -95, 0, -127, 98, 91, -55, -90, 99, 20, -15, 68, 64, -85, -124, -10, 9, -81, -15, -8, 30, -29};
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
    msg.setTimeStamp(0.956196720266);
    msg.setSource(31167U);
    msg.setSourceEntity(199U);
    msg.setDestination(31038U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.321454128979);
    msg.setSource(45056U);
    msg.setSourceEntity(127U);
    msg.setDestination(20816U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.876380039908);
    msg.setSource(34363U);
    msg.setSourceEntity(71U);
    msg.setDestination(47609U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.115776879915);
    msg.setSource(36686U);
    msg.setSourceEntity(46U);
    msg.setDestination(35529U);
    msg.setDestinationEntity(60U);
    msg.camid = 65U;
    msg.x = 31776U;
    msg.y = 33817U;

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
    msg.setTimeStamp(0.3135161364);
    msg.setSource(39254U);
    msg.setSourceEntity(249U);
    msg.setDestination(64505U);
    msg.setDestinationEntity(11U);
    msg.camid = 12U;
    msg.x = 42056U;
    msg.y = 15780U;

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
    msg.setTimeStamp(0.366651288385);
    msg.setSource(46127U);
    msg.setSourceEntity(22U);
    msg.setDestination(47170U);
    msg.setDestinationEntity(182U);
    msg.camid = 111U;
    msg.x = 13430U;
    msg.y = 61732U;

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
    msg.setTimeStamp(0.0930431019613);
    msg.setSource(38937U);
    msg.setSourceEntity(196U);
    msg.setDestination(40850U);
    msg.setDestinationEntity(162U);
    msg.camid = 13U;
    msg.x = 55748U;
    msg.y = 59318U;

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
    msg.setTimeStamp(0.287234434437);
    msg.setSource(62856U);
    msg.setSourceEntity(7U);
    msg.setDestination(25916U);
    msg.setDestinationEntity(159U);
    msg.camid = 203U;
    msg.x = 7081U;
    msg.y = 13938U;

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
    msg.setTimeStamp(0.660328732631);
    msg.setSource(30683U);
    msg.setSourceEntity(140U);
    msg.setDestination(34935U);
    msg.setDestinationEntity(94U);
    msg.camid = 224U;
    msg.x = 2894U;
    msg.y = 26324U;

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
    msg.setTimeStamp(0.396655036001);
    msg.setSource(63440U);
    msg.setSourceEntity(124U);
    msg.setDestination(48981U);
    msg.setDestinationEntity(13U);
    msg.tracking = 169U;
    msg.lat = 0.702078151514;
    msg.lon = 0.0707414301332;
    msg.x = 0.480352627621;
    msg.y = 0.410281139573;
    msg.z = 0.771630207181;

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
    msg.setTimeStamp(0.300105853418);
    msg.setSource(63634U);
    msg.setSourceEntity(93U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(178U);
    msg.tracking = 158U;
    msg.lat = 0.637129913215;
    msg.lon = 0.290697146541;
    msg.x = 0.101266875809;
    msg.y = 0.468608863363;
    msg.z = 0.988671566373;

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
    msg.setTimeStamp(0.501709847984);
    msg.setSource(514U);
    msg.setSourceEntity(188U);
    msg.setDestination(60299U);
    msg.setDestinationEntity(80U);
    msg.tracking = 90U;
    msg.lat = 0.940741377363;
    msg.lon = 0.280785481734;
    msg.x = 0.149335841359;
    msg.y = 0.815651728327;
    msg.z = 0.910213879619;

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
    msg.setTimeStamp(0.590314706439);
    msg.setSource(24951U);
    msg.setSourceEntity(84U);
    msg.setDestination(16216U);
    msg.setDestinationEntity(122U);
    msg.target.assign("UYGRCCWRGHRQJVQOCYAUVOTEPQFBEVINBGDNOIHMKCKEXPIJEBNEMWZUBGRQSPEHZOSNPYILNUCZXWHTRIDFCUKPUHABKALJNUZVJBEYXLOBLGIJTSYBWRMFUXYEQBRWSMIKXTKBQSZKFOERMJWVXHWMCXQGYZNDUYVEQDSYSVYWACDLF");
    msg.lbearing = 0.569409377748;
    msg.lelevation = 0.369400740369;
    msg.bearing = 0.917562339879;
    msg.elevation = 0.0050042246767;
    msg.phi = 0.115308780405;
    msg.theta = 0.440045325375;
    msg.psi = 0.779099348041;
    msg.accuracy = 0.235531961761;

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
    msg.setTimeStamp(0.787964314126);
    msg.setSource(57872U);
    msg.setSourceEntity(119U);
    msg.setDestination(54286U);
    msg.setDestinationEntity(223U);
    msg.target.assign("ZOEKVOZBNZLIUGYVPXXUFEBKWRQLKRODKXQAHSZXJYDAKBQTDNNUQHICGKPPIYBLOIQHXJYMPWONGJHFUCIJACCHNDZTOXWVCVVYQBGSBSEETKSJTGNVWYYKIAMEXQEBAIDADRQDZTOFWHYKBSURDPGNWITCVYSJCCWMUFDFHTULNMNRXKFPELAMOSOWGLELLIMURRXUFZYRVAHURPHPX");
    msg.lbearing = 0.39983577623;
    msg.lelevation = 0.663754122949;
    msg.bearing = 0.655239429756;
    msg.elevation = 0.00438659654463;
    msg.phi = 0.865349990892;
    msg.theta = 0.218467882169;
    msg.psi = 0.67181997989;
    msg.accuracy = 0.040740105014;

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
    msg.setTimeStamp(0.237290422293);
    msg.setSource(62090U);
    msg.setSourceEntity(131U);
    msg.setDestination(25890U);
    msg.setDestinationEntity(146U);
    msg.target.assign("WRQLPGIJYCTMCMAMUKFHHCHWQNYXBNANQEENOXADLSXJDRKMTLYQQLJUBRYJXZJHKYAYT");
    msg.lbearing = 0.648964105166;
    msg.lelevation = 0.766864395458;
    msg.bearing = 0.756185746495;
    msg.elevation = 0.760346321389;
    msg.phi = 0.937581195051;
    msg.theta = 0.509931046625;
    msg.psi = 0.844098280235;
    msg.accuracy = 0.624422371657;

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
    msg.setTimeStamp(0.0806841252876);
    msg.setSource(28793U);
    msg.setSourceEntity(130U);
    msg.setDestination(45232U);
    msg.setDestinationEntity(207U);
    msg.target.assign("CGREXYNWUPKJLJBDCFASTTUWHJBVHWBOEFAIMWFVQOZJGEEGXQAEBALDULPKBNCHSJECQPEJAZLKOSUPKRQZVTXWVUZSOLRGTIDVXHCAEWFNUDKDRNLIOMFTJXWORUTPCBQQDPD");
    msg.x = 0.930312172555;
    msg.y = 0.56876193733;
    msg.z = 0.475371001707;
    msg.n = 0.823436098619;
    msg.e = 0.41793351017;
    msg.d = 0.700767480908;
    msg.phi = 0.473218266791;
    msg.theta = 0.552485314787;
    msg.psi = 0.541956845329;
    msg.accuracy = 0.882170564235;

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
    msg.setTimeStamp(0.976994954642);
    msg.setSource(60861U);
    msg.setSourceEntity(107U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(176U);
    msg.target.assign("IWCUGLUCDJVZZDJPJTSSFQRMYNYIOZLFCEBQFWADUFZSEXUIBVOOHGAKHJAWJEHBUQILBQHPGKS");
    msg.x = 0.316209793322;
    msg.y = 0.389774503872;
    msg.z = 0.542875068023;
    msg.n = 0.461704413378;
    msg.e = 0.329430291297;
    msg.d = 0.782778094108;
    msg.phi = 0.432594190668;
    msg.theta = 0.282971015376;
    msg.psi = 0.272908048846;
    msg.accuracy = 0.352541483524;

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
    msg.setTimeStamp(0.764907751764);
    msg.setSource(24728U);
    msg.setSourceEntity(26U);
    msg.setDestination(7027U);
    msg.setDestinationEntity(253U);
    msg.target.assign("XEVZKPCBUMFQTAVDXSSGNYEQDLHBPOSCLWOUCZPWOUBNALOIFYQDXTWOTPZQXBPZPRPAGMBTCUTGMBSCRDYJYKMLUXRZWSQTQKUATXGWVYCEDKKFAIRWMWSWUQOADVYVJZKMBSDCGIJHJTAPEVAOGNZEVFHJUYRSCJGLFMAHODTZESXLWBLCGBHNRDHUOQAGCIMLEHZKXLYQ");
    msg.x = 0.366489512936;
    msg.y = 0.891333459122;
    msg.z = 0.156455252341;
    msg.n = 0.212182574808;
    msg.e = 0.379296144316;
    msg.d = 0.749260329363;
    msg.phi = 0.611186808272;
    msg.theta = 0.773408415949;
    msg.psi = 0.163287998231;
    msg.accuracy = 0.218773231886;

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
    msg.setTimeStamp(0.328887034052);
    msg.setSource(65181U);
    msg.setSourceEntity(195U);
    msg.setDestination(43587U);
    msg.setDestinationEntity(26U);
    msg.target.assign("ILBDQPGORIOQGIOJLLIVPZZTDXDWSMWLEJQTKPXUFGTFNYNSNQYDCUQTTBHZMVBBYLYNJKBCTXOEEJCVHLFZGXXQMAPSWMXWIUPBRFWRRFUHVPHEIGCPPERHMBZGUZYZMCLBRJWIKNQASHLCCKBMXVROHCDFYAITLA");
    msg.lat = 0.938133193969;
    msg.lon = 0.17183028611;
    msg.z_units = 183U;
    msg.z = 0.336047989686;
    msg.accuracy = 0.611953995795;

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
    msg.setTimeStamp(0.581926403321);
    msg.setSource(5137U);
    msg.setSourceEntity(81U);
    msg.setDestination(23709U);
    msg.setDestinationEntity(6U);
    msg.target.assign("HCACGDFLMJAUFEFKOQZUNJWLLWIIGKKOBSSPKBWVPFUUEYNABZCFYDTXOXSVZIOARHCZMQTQBRNAMGIGOFUMTNPYTFLIJWHBMVZJKIDHWNUTWHWBKBGOLADWRHJFKXQTGQEVLDVPILNFMAECCUMOQQNTBWCXQOSDJZYNEYSJZRJOTEERUSXSATYMHPAJJGPRIFCXMKTPSEDLNKCOYZZUYHEP");
    msg.lat = 0.681047182833;
    msg.lon = 0.228562782029;
    msg.z_units = 114U;
    msg.z = 0.350919809439;
    msg.accuracy = 0.336528417275;

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
    msg.setTimeStamp(0.766477273656);
    msg.setSource(57680U);
    msg.setSourceEntity(142U);
    msg.setDestination(39956U);
    msg.setDestinationEntity(11U);
    msg.target.assign("BCGRCXSRYMTLYBJZUGISULHAQYYNRGLZUOAMSAZLVQSQUNQFMFPFFCQAMSCZSNDQVTRPEJPBTPODEDJDNNIEDWUTSGKEYIMUROLMGTNFBXKXWNFAIKZWNBXEHDAHTTRDPJSPVIAJPETEYKLLIVMOKXCWHHJBNCQIVRBBURZKXWZXDIXGZDVVOOJLCLMTYHAHGHIFQCPSFEDJANTMYXFCFA");
    msg.lat = 0.764053251361;
    msg.lon = 0.359287739084;
    msg.z_units = 54U;
    msg.z = 0.227094697819;
    msg.accuracy = 0.705518506795;

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
    msg.setTimeStamp(0.469703918759);
    msg.setSource(51561U);
    msg.setSourceEntity(2U);
    msg.setDestination(54354U);
    msg.setDestinationEntity(67U);
    msg.name.assign("ASREFMOBSPWYUSRDCIWTAWEZPKBHAGEFPDQZELIVITWICPQBYKMSFUZJCWSNCEPIRNEHONHNLKYIXFNYJVXQLFRUNDADCXKVTWGTJZWNFJFUVBXMBUTGXNQVZIBDTVITPDORLHVURBKDSLHGBCOSJOKPZJFKXIBZQROCSUNDGGDPOJGQEFAUGMXQYLGHYQTUQRYZNLMMYDJBPFJHTLWMXMOOCTXXEIA");
    msg.lat = 0.130358635385;
    msg.lon = 0.269296654253;
    msg.z = 0.0134805085229;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.866293184374);
    msg.setSource(46797U);
    msg.setSourceEntity(23U);
    msg.setDestination(34030U);
    msg.setDestinationEntity(138U);
    msg.name.assign("CYHKTHFCBMFJAHLTONLQKXUHROAEPYMYDAVBZHITOJOWEKTHNGYWTAYCZWNXNINCEEXZLMFJVMJDMHDRFSVESJPYFBMMRPDVEUFWVZPRVLIIQEYHIJXWGIJUTCBPYZMQSZKCVOQGUBVXBYWXOGWLRGVZKNTPNGIGENAAWHLAHUJCTDEBGFDAGWTSOOBFRZRNMXCDUQQWKIQBNUJJPAQCRXPKTLIS");
    msg.lat = 0.0935327982017;
    msg.lon = 0.350680187524;
    msg.z = 0.165385785544;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.37587731044);
    msg.setSource(22317U);
    msg.setSourceEntity(200U);
    msg.setDestination(9245U);
    msg.setDestinationEntity(20U);
    msg.name.assign("PWCZKGEXQLPWYCXANIRGOIPNZYEMNOAWTSUDQYZNZVQRPSLEABGJSBUZGTMMWRQCLCKYVNGXVQRCAFSCGJNWUUZWLHFMGMWAADXJZCUFFOLBFJFXOTKBXKHQTEIVAHIVFNSDMQTCUHWGHAFTYRDBVKHUOXDDIPOQG");
    msg.lat = 0.417366639002;
    msg.lon = 0.0781257415691;
    msg.z = 0.230838786495;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.821763024002);
    msg.setSource(65422U);
    msg.setSourceEntity(8U);
    msg.setDestination(29328U);
    msg.setDestinationEntity(42U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.882910830502);
    msg.setSource(62844U);
    msg.setSourceEntity(155U);
    msg.setDestination(10160U);
    msg.setDestinationEntity(156U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.152071938116);
    msg.setSource(12699U);
    msg.setSourceEntity(117U);
    msg.setDestination(43291U);
    msg.setDestinationEntity(31U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.618193103883);
    msg.setSource(55354U);
    msg.setSourceEntity(125U);
    msg.setDestination(45260U);
    msg.setDestinationEntity(16U);
    msg.value = 0.221776072691;
    msg.type = 106U;

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
    msg.setTimeStamp(0.621853055277);
    msg.setSource(25824U);
    msg.setSourceEntity(176U);
    msg.setDestination(12733U);
    msg.setDestinationEntity(250U);
    msg.value = 0.381734581649;
    msg.type = 32U;

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
    msg.setTimeStamp(0.465119440199);
    msg.setSource(50174U);
    msg.setSourceEntity(177U);
    msg.setDestination(26222U);
    msg.setDestinationEntity(160U);
    msg.value = 0.494952952539;
    msg.type = 128U;

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
    msg.setTimeStamp(0.847139605613);
    msg.setSource(21825U);
    msg.setSourceEntity(160U);
    msg.setDestination(50923U);
    msg.setDestinationEntity(184U);
    msg.value = 0.274532283574;

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
    msg.setTimeStamp(0.980498011513);
    msg.setSource(25808U);
    msg.setSourceEntity(87U);
    msg.setDestination(56576U);
    msg.setDestinationEntity(239U);
    msg.value = 0.652298697492;

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
    msg.setTimeStamp(0.866708622248);
    msg.setSource(54502U);
    msg.setSourceEntity(36U);
    msg.setDestination(56199U);
    msg.setDestinationEntity(249U);
    msg.value = 0.408067595854;

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
    msg.setTimeStamp(0.601175735697);
    msg.setSource(5743U);
    msg.setSourceEntity(72U);
    msg.setDestination(47366U);
    msg.setDestinationEntity(60U);
    msg.timestamp_last_service = 0.313308936593;
    msg.time_next_service = 0.103647482766;
    msg.time_motor_next_service = 0.49873627653;
    msg.time_idle_ground = 0.774569300971;
    msg.time_idle_air = 0.481091415731;
    msg.time_idle_water = 0.547033285423;
    msg.time_idle_underwater = 0.995381154118;
    msg.time_idle_unknown = 0.106681803369;
    msg.time_motor_ground = 0.0301446282907;
    msg.time_motor_air = 0.886727758042;
    msg.time_motor_water = 0.809464320241;
    msg.time_motor_underwater = 0.150450814565;
    msg.time_motor_unknown = 0.208892779616;
    msg.rpm_min = 40;
    msg.rpm_max = 8311;
    msg.depth_max = 0.790243230951;

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
    msg.setTimeStamp(0.579165726594);
    msg.setSource(56550U);
    msg.setSourceEntity(156U);
    msg.setDestination(35782U);
    msg.setDestinationEntity(143U);
    msg.timestamp_last_service = 0.617095365283;
    msg.time_next_service = 0.632017939655;
    msg.time_motor_next_service = 0.0818201330462;
    msg.time_idle_ground = 0.113034496079;
    msg.time_idle_air = 0.191977060883;
    msg.time_idle_water = 0.988013476237;
    msg.time_idle_underwater = 0.615719284511;
    msg.time_idle_unknown = 0.790274232602;
    msg.time_motor_ground = 0.617028922172;
    msg.time_motor_air = 0.789488427878;
    msg.time_motor_water = 0.607355497257;
    msg.time_motor_underwater = 0.260013320741;
    msg.time_motor_unknown = 0.00651681416355;
    msg.rpm_min = 16384;
    msg.rpm_max = 31835;
    msg.depth_max = 0.306878087691;

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
    msg.setTimeStamp(0.792977814508);
    msg.setSource(60394U);
    msg.setSourceEntity(153U);
    msg.setDestination(50738U);
    msg.setDestinationEntity(222U);
    msg.timestamp_last_service = 0.308177473097;
    msg.time_next_service = 0.849822678209;
    msg.time_motor_next_service = 0.951001057836;
    msg.time_idle_ground = 0.510059065952;
    msg.time_idle_air = 0.800083696763;
    msg.time_idle_water = 0.200873138683;
    msg.time_idle_underwater = 0.69214564737;
    msg.time_idle_unknown = 0.646132995477;
    msg.time_motor_ground = 0.618648612908;
    msg.time_motor_air = 0.482894957911;
    msg.time_motor_water = 0.896416427556;
    msg.time_motor_underwater = 0.527361202015;
    msg.time_motor_unknown = 0.822134035002;
    msg.rpm_min = -26799;
    msg.rpm_max = -3891;
    msg.depth_max = 0.570194404934;

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
    msg.setTimeStamp(0.95585112465);
    msg.setSource(35588U);
    msg.setSourceEntity(96U);
    msg.setDestination(16598U);
    msg.setDestinationEntity(77U);
    msg.severity = 26U;
    msg.text.assign("DURSJMFYWCTMGNJOHYOPKNLTKCKXAOIYZVAMOTXZCWDHTQTQQLRIETVQSDUBCPSLRUWAJJRXGHEPBCJGYNZUZXCMIFPBBHNSIAIYTTELMPIVGWOFS");

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
    msg.setTimeStamp(0.510240628673);
    msg.setSource(40031U);
    msg.setSourceEntity(233U);
    msg.setDestination(21425U);
    msg.setDestinationEntity(90U);
    msg.severity = 7U;
    msg.text.assign("TTACWEDBFYCPUIIHBNQTQWAJLPVMIOMOXLOYPZIPULKVJTJMXBKOTAGEPMFWRKYDPJRNKUTDEUQDFUHZMZBLKVVYQNMOMOYGLZVBVBZGWRZPGAKSAXNBNPRWYZIPQVVEFLEUCNDTGEQIXROSBCYJNJJGNBHVXOTZRMWRSJGARSFUECRPOWQEGSCDHZTYYDVCAHSHKKMGFXSTQUNQFEEUHUAWIZDAOSFWXCNLWCSDLLF");

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
    msg.setTimeStamp(0.78227065953);
    msg.setSource(33696U);
    msg.setSourceEntity(16U);
    msg.setDestination(64441U);
    msg.setDestinationEntity(251U);
    msg.severity = 60U;
    msg.text.assign("VOQPCTLQCQFNUMIJVULGIHFKRBRSMBEOMTAASYYLGPGUYLKELFMEXCBEPXXJOTPOTUPSMHBZIOSDGJRJV");

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
    msg.setTimeStamp(0.329467551477);
    msg.setSource(52133U);
    msg.setSourceEntity(230U);
    msg.setDestination(13258U);
    msg.setDestinationEntity(170U);
    msg.channel = 88;
    msg.value = 76271356;
    msg.gain = 237U;

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
    msg.setTimeStamp(0.0848620470019);
    msg.setSource(10294U);
    msg.setSourceEntity(110U);
    msg.setDestination(1677U);
    msg.setDestinationEntity(10U);
    msg.channel = 73;
    msg.value = 503919381;
    msg.gain = 39U;

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
    msg.setTimeStamp(0.382691736784);
    msg.setSource(61874U);
    msg.setSourceEntity(4U);
    msg.setDestination(2637U);
    msg.setDestinationEntity(5U);
    msg.channel = 34;
    msg.value = 1193413391;
    msg.gain = 7U;

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
    msg.setTimeStamp(0.419959085561);
    msg.setSource(52707U);
    msg.setSourceEntity(249U);
    msg.setDestination(63522U);
    msg.setDestinationEntity(119U);
    msg.ch01 = 0.633540608638;
    msg.ch02 = 0.306664640459;
    msg.ch03 = 0.0243499066543;
    msg.ch04 = 0.800268950167;
    msg.ch05 = 0.821484942074;
    msg.ch06 = 0.911671243071;
    msg.ch07 = 0.870981937011;
    msg.ch08 = 0.745190027516;
    msg.ch09 = 0.788357532794;
    msg.ch10 = 0.554335530961;
    msg.ch11 = 0.974646420901;
    msg.ch12 = 0.660086710948;
    msg.ch13 = 0.681855075014;
    msg.ch14 = 0.134817261895;
    msg.ch15 = 0.148821420355;
    msg.ch16 = 0.199116443569;

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
    msg.setTimeStamp(0.252974120857);
    msg.setSource(58440U);
    msg.setSourceEntity(73U);
    msg.setDestination(7370U);
    msg.setDestinationEntity(118U);
    msg.ch01 = 0.898941254167;
    msg.ch02 = 0.484786417276;
    msg.ch03 = 0.0990310737176;
    msg.ch04 = 0.54164072717;
    msg.ch05 = 0.940506428549;
    msg.ch06 = 0.346541391765;
    msg.ch07 = 0.913501349194;
    msg.ch08 = 0.409051868115;
    msg.ch09 = 0.731120784401;
    msg.ch10 = 0.854852614544;
    msg.ch11 = 0.427031412182;
    msg.ch12 = 0.433695400707;
    msg.ch13 = 0.255543979142;
    msg.ch14 = 0.823853202141;
    msg.ch15 = 0.91527549577;
    msg.ch16 = 0.875603156497;

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
    msg.setTimeStamp(0.19524852262);
    msg.setSource(55793U);
    msg.setSourceEntity(2U);
    msg.setDestination(55393U);
    msg.setDestinationEntity(15U);
    msg.ch01 = 0.135987560404;
    msg.ch02 = 0.840553171568;
    msg.ch03 = 0.277705627293;
    msg.ch04 = 0.578981425761;
    msg.ch05 = 0.025165487761;
    msg.ch06 = 0.22193317306;
    msg.ch07 = 0.392121736162;
    msg.ch08 = 0.759506041646;
    msg.ch09 = 0.743694821873;
    msg.ch10 = 0.328200233405;
    msg.ch11 = 0.744834200493;
    msg.ch12 = 0.755992221208;
    msg.ch13 = 0.82754731967;
    msg.ch14 = 0.577969670067;
    msg.ch15 = 0.390634582569;
    msg.ch16 = 0.57539053453;

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
    msg.setTimeStamp(0.869430433617);
    msg.setSource(21099U);
    msg.setSourceEntity(47U);
    msg.setDestination(64489U);
    msg.setDestinationEntity(43U);
    msg.time = 0.314730536419;
    msg.ang = 0.680817113056;

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
    msg.setTimeStamp(0.683920431256);
    msg.setSource(16659U);
    msg.setSourceEntity(190U);
    msg.setDestination(6986U);
    msg.setDestinationEntity(167U);
    msg.time = 0.0399770307945;
    msg.ang = 0.145243016611;

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
    msg.setTimeStamp(0.341339977863);
    msg.setSource(18077U);
    msg.setSourceEntity(203U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(246U);
    msg.time = 0.353966258684;
    msg.ang = 0.0435461619052;

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
    msg.setTimeStamp(0.99976302092);
    msg.setSource(14864U);
    msg.setSourceEntity(24U);
    msg.setDestination(33813U);
    msg.setDestinationEntity(14U);
    msg.value = 0.441484349393;

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
    msg.setTimeStamp(0.854240768055);
    msg.setSource(22514U);
    msg.setSourceEntity(207U);
    msg.setDestination(64658U);
    msg.setDestinationEntity(211U);
    msg.value = 0.744700070224;

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
    msg.setTimeStamp(0.487954273126);
    msg.setSource(1915U);
    msg.setSourceEntity(152U);
    msg.setDestination(37399U);
    msg.setDestinationEntity(120U);
    msg.value = 0.730260120893;

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
    msg.setTimeStamp(0.55434063583);
    msg.setSource(47012U);
    msg.setSourceEntity(22U);
    msg.setDestination(38293U);
    msg.setDestinationEntity(73U);
    msg.value = 0.82997005824;

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
    msg.setTimeStamp(0.262903593301);
    msg.setSource(40388U);
    msg.setSourceEntity(171U);
    msg.setDestination(50894U);
    msg.setDestinationEntity(122U);
    msg.value = 0.0877829254278;

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
    msg.setTimeStamp(0.900348265265);
    msg.setSource(19653U);
    msg.setSourceEntity(24U);
    msg.setDestination(25709U);
    msg.setDestinationEntity(228U);
    msg.value = 0.105768581146;

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
    msg.setTimeStamp(0.509825420091);
    msg.setSource(47673U);
    msg.setSourceEntity(105U);
    msg.setDestination(16857U);
    msg.setDestinationEntity(154U);
    msg.value = 0.126421841396;

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
    msg.setTimeStamp(0.127570086309);
    msg.setSource(59551U);
    msg.setSourceEntity(218U);
    msg.setDestination(23595U);
    msg.setDestinationEntity(62U);
    msg.value = 0.0373228781847;

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
    msg.setTimeStamp(0.630799540147);
    msg.setSource(51200U);
    msg.setSourceEntity(239U);
    msg.setDestination(39075U);
    msg.setDestinationEntity(107U);
    msg.value = 0.338740596556;

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
    msg.setTimeStamp(0.951217735425);
    msg.setSource(54148U);
    msg.setSourceEntity(108U);
    msg.setDestination(3622U);
    msg.setDestinationEntity(120U);
    msg.l2 = 9;
    msg.l3 = -115;
    msg.iridium = 124;
    msg.modem = 9;
    msg.pumps = 86;
    msg.vhf = -124;

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
    msg.setTimeStamp(0.0796344371489);
    msg.setSource(39683U);
    msg.setSourceEntity(145U);
    msg.setDestination(61382U);
    msg.setDestinationEntity(35U);
    msg.l2 = 118;
    msg.l3 = 22;
    msg.iridium = 123;
    msg.modem = -52;
    msg.pumps = -22;
    msg.vhf = 117;

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
    msg.setTimeStamp(0.41378572027);
    msg.setSource(28041U);
    msg.setSourceEntity(53U);
    msg.setDestination(27747U);
    msg.setDestinationEntity(187U);
    msg.l2 = -112;
    msg.l3 = 31;
    msg.iridium = 69;
    msg.modem = 125;
    msg.pumps = 66;
    msg.vhf = 121;

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
    msg.setTimeStamp(0.806497426453);
    msg.setSource(51650U);
    msg.setSourceEntity(200U);
    msg.setDestination(20U);
    msg.setDestinationEntity(175U);
    msg.angle = 0.701055756112;
    msg.reference.assign("WWTHEDHCJZPDLQSYMWHXUUXFPZGMYYTEVTBHROZRKCZJERIGFKXQZBCJSHQNPLM");
    msg.speed = 0.521770484711;

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
    msg.setTimeStamp(0.476670819681);
    msg.setSource(19488U);
    msg.setSourceEntity(86U);
    msg.setDestination(20452U);
    msg.setDestinationEntity(109U);
    msg.angle = 0.612768695897;
    msg.reference.assign("BDVGCTRVGNQHCDXZGUQFOQLDHABWNCPYFHYZITZWQNMAJSFEDFRFVOHQBSYLSHPKJMZZKHXMNZVJEUYOPZILKFAMSCJWUDSIUQDCFKRXWEWWULCLFPIWHKJMRTJCRGNMCKNXOOVEVGTJNWRYXRGQPOMMQSSBXAIALVYTFERAXFIUJHXKYLYACMRIOSOWMIPZANJLNGDUQVSKKBPVZEJTGZXGE");
    msg.speed = 0.675746085249;

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
    msg.setTimeStamp(0.319556344075);
    msg.setSource(6643U);
    msg.setSourceEntity(124U);
    msg.setDestination(5971U);
    msg.setDestinationEntity(159U);
    msg.angle = 0.147255493568;
    msg.reference.assign("FTPJDBGPZDQIPXINYPESUCPLUUCIFSVHQAFJQTPKKUBZYVRZUORQGLAXFNGERNXDVOIKWHUNCXFQTVRFPIQNBZEAYTBMEVLKTZODOFNEHBABUVKAQMUOXSYNVRXOCPMBYVHAYGMBJPJLAXMZWKJHSCTHWUWLOSYOJLQINZDXPCMFSIHACRNWNOGZMDQAKKZMYWLXJWIUWDCIMDSRCLSTSEDHGYFMJWWHGGJTARBDKLJQOYXERESKTCEREZ");
    msg.speed = 0.648294050522;

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
    msg.setTimeStamp(0.515854810155);
    msg.setSource(9078U);
    msg.setSourceEntity(220U);
    msg.setDestination(53019U);
    msg.setDestinationEntity(192U);
    msg.angle = 0.592327798836;
    msg.direction.assign("BAYKRIDOHXTMFZGDPZAVEGKBWKQMQGOPAQPDKPTCZMNVHYVQUWYAXWKQVRYKZJUKTZPSCQRZNB");
    msg.speed = 0.034621872972;

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
    msg.setTimeStamp(0.0402815438256);
    msg.setSource(31095U);
    msg.setSourceEntity(216U);
    msg.setDestination(6572U);
    msg.setDestinationEntity(117U);
    msg.angle = 0.864933534104;
    msg.direction.assign("ETPGAKUKMVKMXFPSFVAMNDQRGNHXUXMJIUAYESJIPSECCGUTVJF");
    msg.speed = 0.162533504677;

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
    msg.setTimeStamp(0.244050967167);
    msg.setSource(1595U);
    msg.setSourceEntity(253U);
    msg.setDestination(12684U);
    msg.setDestinationEntity(40U);
    msg.angle = 0.665901839658;
    msg.direction.assign("EUTWGUBIYMKVGBLDEFATIOLDJZRDBXOTAIXNJWBWGGBJLRISFQSXHDLPYLEOKQDTUGJKDJYYHGPPFZFPFHSCRUICSIXVTQRWKNNWAMBBMPH");
    msg.speed = 0.0736450366824;

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

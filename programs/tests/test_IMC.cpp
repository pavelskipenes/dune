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
// IMC XML MD5: 8276afd2231790a289b4b93413c38162                            *
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
    msg.setTimeStamp(0.526414866522);
    msg.setSource(29247U);
    msg.setSourceEntity(171U);
    msg.setDestination(5178U);
    msg.setDestinationEntity(190U);
    msg.state = 207U;
    msg.flags = 72U;
    msg.description.assign("GWRKNUIYOAPUFFPNNCKEVHFHSCJAFYJADCUUIIVLGTDYDGRIYPHYRHSHGLDBDRXLLHAXVSAMTCSEEBUYPRUWJLNCEOBBRENCJFBCTBKMKABVIZIWQAFVMZKWMJXKBUSFMNVOIRWITTKJEHZGQTHVXLIVZVXWVQQNQLAQMPJNPFGLZXHPWNZTWOCOWJXZQCDEOO");

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
    msg.setTimeStamp(0.42259635411);
    msg.setSource(18620U);
    msg.setSourceEntity(169U);
    msg.setDestination(60571U);
    msg.setDestinationEntity(40U);
    msg.state = 161U;
    msg.flags = 31U;
    msg.description.assign("IANQROJCFZWWQRLSSNTAYETXKRKJSDIDGJWNHHLRXSGQQJFGCKCHAIAABZKKWRCZLDYILXMBBGTATEHVPPCFFCGRKJTGTWPYCEUUVYBFVQKDWUEPBUEBVDDZQJEAQEZHXXKPPOFACWLUYRRXTSSAWRLRMACDBXWSQXKOZUYESNBHEDNOQMIMOVGMHLNZZUYIFMMZIYVUCSFMNMJNDGPVHMPOQFXTTUO");

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
    msg.setTimeStamp(0.972625540848);
    msg.setSource(18756U);
    msg.setSourceEntity(111U);
    msg.setDestination(49481U);
    msg.setDestinationEntity(169U);
    msg.state = 229U;
    msg.flags = 30U;
    msg.description.assign("CILRIRSXUWRKGJXDJCUQNQJOTRKCQJEBQDXZNCBDHLVNTCDZSHDIPJCCTLXQXAULFSBYHMVJGMGHGWBDOXWYXPOOAVPXEVDEUCKCKKFZDJNVKSNDTITQWZZSVYEPEIPFUUHZVGWLVYXAYKITKKFGMZYJHYOGMHHUPSEUOQQFDGLHASBTRQNEZBZNFOMPGIALVRJOMTBPALEOFYRNFAWNYKBRZVTISACMJUTLMRMAS");

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
    msg.setTimeStamp(0.223392605044);
    msg.setSource(23918U);
    msg.setSourceEntity(46U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.79889172656);
    msg.setSource(22374U);
    msg.setSourceEntity(33U);
    msg.setDestination(25665U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.782246565682);
    msg.setSource(39198U);
    msg.setSourceEntity(37U);
    msg.setDestination(13965U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.499288972068);
    msg.setSource(40222U);
    msg.setSourceEntity(139U);
    msg.setDestination(59671U);
    msg.setDestinationEntity(206U);
    msg.id = 140U;
    msg.label.assign("XFCOOOVOWSCYHVIGQXFSYANPDZ");
    msg.component.assign("GRQVNHYQEPNDIBFZLSZDZBIELIVKFSIWDXTOCOGZMUPGBWJEQFLNTYLPJREEHFOZWASOSNQWJUQXCWDVBBDTTRJEGRFASWQP");
    msg.act_time = 26318U;
    msg.deact_time = 30548U;

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
    msg.setTimeStamp(0.0673872780164);
    msg.setSource(3954U);
    msg.setSourceEntity(214U);
    msg.setDestination(14445U);
    msg.setDestinationEntity(142U);
    msg.id = 63U;
    msg.label.assign("NWIGDVHOOBEAOLAMPQIRJUOZZCTRUBVCBFDYFXAAGIQULSRUVQCEFIALRESBGYHTGKNAZQYTHHJHPNGUXQQGFAUWWLXOWDPYIRZNCDPOJVFMTKYFBSVOWDWBDTSELVSGNHGBEPWOTTXMLBEMSSXIRBPKOQGMKYBORHKWUZCUENSEMZTYVLKZHQHEJFJSKSCIYEKRJAMILDJJKXJJ");
    msg.component.assign("HOWRQJJZDDTKXZOSWBQFLBGDHYBQYOVPMVUMKGFXRAQMEORBJCYTZTQQPIRLXGR");
    msg.act_time = 43496U;
    msg.deact_time = 8740U;

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
    msg.setTimeStamp(0.998378439039);
    msg.setSource(34380U);
    msg.setSourceEntity(132U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(246U);
    msg.id = 124U;
    msg.label.assign("WMAVUPNLPQDZNGRZSQYZMCQXXKLLKWLBAMEOXJAJBERYLGKCPTZFDXUWYSFRTQEUKIUZYGOMIBHOYHTBFAKDXITYTNJDNHXYCIEZPKRNNWVARGIDDXTRCROUQPHLGGHQSELZOAMYGITSQBENSBOKPUQCVJHCZVAEIFAWTBHPFIPJVNVVCAYJFSCQJSCOSRQWIVWOHMKZDKJXUMGPNMDJBEDLWBJHFHULPETRGEZSNLXRMSXOUWVKWCF");
    msg.component.assign("CCAVQSAOYRPECSVCDGHKPXBWOSMIMFMLMDBRJSEUPBKVLPXACIRRBBUDXKHBVGPKYXLLIGAHLAYQNRKAFGKGHOHSWQUQIUWUWTPYJFYTRTFXNWMM");
    msg.act_time = 53909U;
    msg.deact_time = 58646U;

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
    msg.setTimeStamp(0.335590015879);
    msg.setSource(60566U);
    msg.setSourceEntity(162U);
    msg.setDestination(8023U);
    msg.setDestinationEntity(96U);
    msg.id = 109U;

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
    msg.setTimeStamp(0.789848353125);
    msg.setSource(57911U);
    msg.setSourceEntity(81U);
    msg.setDestination(26449U);
    msg.setDestinationEntity(10U);
    msg.id = 244U;

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
    msg.setTimeStamp(0.631916748241);
    msg.setSource(18035U);
    msg.setSourceEntity(65U);
    msg.setDestination(5488U);
    msg.setDestinationEntity(171U);
    msg.id = 50U;

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
    msg.setTimeStamp(0.971107783687);
    msg.setSource(23306U);
    msg.setSourceEntity(11U);
    msg.setDestination(14144U);
    msg.setDestinationEntity(149U);
    msg.op = 174U;
    msg.list.assign("SKYTKFMABJICJJXJKWPQNUOGKFQWZOUIEWDJPRLHSDTLSEUUNJFMHHDWTMIATSXYWVANWXFEKVKYUVCAQGBKDEONDFNGZBARXT");

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
    msg.setTimeStamp(0.624912190044);
    msg.setSource(9169U);
    msg.setSourceEntity(11U);
    msg.setDestination(33354U);
    msg.setDestinationEntity(81U);
    msg.op = 228U;
    msg.list.assign("WNXTJFKRUMFQHHZZOOMBPRCFKXLONMXPGPUEXVEIYDHSQPJWZVYVWVRABJNTCZUGZYPUY");

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
    msg.setTimeStamp(0.759080741357);
    msg.setSource(40471U);
    msg.setSourceEntity(102U);
    msg.setDestination(23394U);
    msg.setDestinationEntity(145U);
    msg.op = 143U;
    msg.list.assign("ZZANYNIFXYVEXTTNQQVOBEJCRCTBDAUVORUQSTLUGWDHUCKVSVEJZCD");

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
    msg.setTimeStamp(0.111561792139);
    msg.setSource(1754U);
    msg.setSourceEntity(204U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(239U);
    msg.value = 29U;

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
    msg.setTimeStamp(0.210733786256);
    msg.setSource(1762U);
    msg.setSourceEntity(101U);
    msg.setDestination(42580U);
    msg.setDestinationEntity(192U);
    msg.value = 236U;

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
    msg.setTimeStamp(0.912639627199);
    msg.setSource(38271U);
    msg.setSourceEntity(18U);
    msg.setDestination(16778U);
    msg.setDestinationEntity(27U);
    msg.value = 232U;

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
    msg.setTimeStamp(0.864872317397);
    msg.setSource(27184U);
    msg.setSourceEntity(53U);
    msg.setDestination(56514U);
    msg.setDestinationEntity(188U);
    msg.consumer.assign("MRACXERDKRXFWIUMZOLXFARHCJICWDEIPKRABWSSGBFDKMQENSUVMEMNAPLTVLWOGEYHNAYRTNGGPSG");
    msg.message_id = 41127U;

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
    msg.setTimeStamp(0.536621951011);
    msg.setSource(38972U);
    msg.setSourceEntity(226U);
    msg.setDestination(3304U);
    msg.setDestinationEntity(184U);
    msg.consumer.assign("BTGGYXZCNWYPAEGXJEQYUENBSCLHBTABEXIXTEIJVTNHCPROFEBCPPAOVLSQQSZVNIEFYBUWPMQQDOKVMCSRRIIVRFJTBFIJ");
    msg.message_id = 42714U;

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
    msg.setTimeStamp(0.624625398175);
    msg.setSource(48648U);
    msg.setSourceEntity(110U);
    msg.setDestination(51860U);
    msg.setDestinationEntity(98U);
    msg.consumer.assign("TSMRZREFJHPAJWMIIPHULNNREUJHCSKXPGKYSASKVIFXAEJGOMQIVKKQCDWTVQRCGDRYAUFQCVPZLANFBYPLZHZXVLTVACSRUEDQBOUGYJIAJZXOTOBKRFPPDDTFQBHGQVECJNLYTNMRWXHHZOSUVKKWMNFZAAJGHBPOXSHZQIBXVPENEYXMRYWLZJZJOXSGMLTWKDKGOEYUWBHVROBCQS");
    msg.message_id = 13509U;

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
    msg.setTimeStamp(0.400533623625);
    msg.setSource(24337U);
    msg.setSourceEntity(214U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(150U);
    msg.type = 245U;

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
    msg.setTimeStamp(0.0148829976777);
    msg.setSource(18737U);
    msg.setSourceEntity(143U);
    msg.setDestination(55054U);
    msg.setDestinationEntity(141U);
    msg.type = 12U;

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
    msg.setTimeStamp(0.789847978156);
    msg.setSource(19742U);
    msg.setSourceEntity(79U);
    msg.setDestination(39856U);
    msg.setDestinationEntity(161U);
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
    msg.setTimeStamp(0.65575926614);
    msg.setSource(47245U);
    msg.setSourceEntity(3U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(89U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.871085230667);
    msg.setSource(43111U);
    msg.setSourceEntity(107U);
    msg.setDestination(56316U);
    msg.setDestinationEntity(1U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.0972346144685);
    msg.setSource(24983U);
    msg.setSourceEntity(199U);
    msg.setDestination(41064U);
    msg.setDestinationEntity(33U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.290149800839);
    msg.setSource(48414U);
    msg.setSourceEntity(163U);
    msg.setDestination(61106U);
    msg.setDestinationEntity(238U);
    msg.total_steps = 62U;
    msg.step_number = 148U;
    msg.step.assign("ZMELBRMPSLUAWOEQFXYSWHNAZVSZWEXYEMBRGYEYJPJAZMUVZOYZDQTCIPUGFYNBJFIUUIRSYFOTDKQCHIOUDRIIWXOOCAGYMQRBRGSNWTCCRKFVVMCHTOEHXWKJWKBCIFJIXSRDQCDLQNDHTHQVELVJQFFBTWZXDTHGZWUXMPNEGJPLZTAGAKVRPGBKBSLFNSGVKMQDUVYXXHPQUCZMMX");
    msg.flags = 44U;

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
    msg.setTimeStamp(0.15557774213);
    msg.setSource(58181U);
    msg.setSourceEntity(116U);
    msg.setDestination(40597U);
    msg.setDestinationEntity(29U);
    msg.total_steps = 114U;
    msg.step_number = 174U;
    msg.step.assign("AFTXYSNIWNKGZWQXSHBCJFTCUWNBFWMYDAHAOAZYOYQTGGEELOQYAXZHURPKOJZEVTUPLAHMWXDESTKYFANRXTWGDDLXRMBRTXANOFGHSIFKJQNTCKMF");
    msg.flags = 48U;

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
    msg.setTimeStamp(0.389418670478);
    msg.setSource(45846U);
    msg.setSourceEntity(215U);
    msg.setDestination(17768U);
    msg.setDestinationEntity(167U);
    msg.total_steps = 33U;
    msg.step_number = 54U;
    msg.step.assign("PJUDSBMJOPMPFJDCCKXEIZEVHTRFVCGKAFVIBRHEIGSWHYBWJYQFSDMTOQSHUZNBZLECZOJIJIMSUGYGRKDNWOHRNXPUKYVIEESGJOHULLIZARYGMNNQLYVXCJFBWAOQESAUTPQARTQXLTYXWIXCDZWLRPBPEANTPGLOCADUBVFHHKTFYWGAXZQVTJXKBSWCJPKUEWNUNXOQODMFMISTBMVCKVMRHNGFLDE");
    msg.flags = 111U;

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
    msg.setTimeStamp(0.562787482476);
    msg.setSource(41670U);
    msg.setSourceEntity(6U);
    msg.setDestination(22881U);
    msg.setDestinationEntity(76U);
    msg.state = 122U;
    msg.error.assign("XQEGMWWXFBOPVBFRBCWDTBEJSIJOMKCLUKSNKB");

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
    msg.setTimeStamp(0.978339748389);
    msg.setSource(26621U);
    msg.setSourceEntity(85U);
    msg.setDestination(25040U);
    msg.setDestinationEntity(154U);
    msg.state = 63U;
    msg.error.assign("UECDUIJWNKFKZNKVYUYXZFQIEFBRFFTUGJAKEXWOAJNXAOFAESJZDXJNLWZQORAASVXMHUVVY");

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
    msg.setTimeStamp(0.518763076652);
    msg.setSource(22589U);
    msg.setSourceEntity(99U);
    msg.setDestination(2253U);
    msg.setDestinationEntity(118U);
    msg.state = 149U;
    msg.error.assign("GUVCYTKMCVTYVPNJXKTSGTMPONXNQEAAMIBSLEODB");

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
    msg.setTimeStamp(0.748379186901);
    msg.setSource(32635U);
    msg.setSourceEntity(26U);
    msg.setDestination(65157U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.487551294168);
    msg.setSource(21330U);
    msg.setSourceEntity(242U);
    msg.setDestination(25416U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.285924209334);
    msg.setSource(29884U);
    msg.setSourceEntity(111U);
    msg.setDestination(6419U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.000852896274743);
    msg.setSource(33898U);
    msg.setSourceEntity(75U);
    msg.setDestination(56550U);
    msg.setDestinationEntity(116U);
    msg.op = 8U;
    msg.speed_min = 0.477220523336;
    msg.speed_max = 0.567887014646;
    msg.long_accel = 0.476522328813;
    msg.alt_max_msl = 0.626080824835;
    msg.dive_fraction_max = 0.950035537325;
    msg.climb_fraction_max = 0.0513886077302;
    msg.bank_max = 0.387309207008;
    msg.p_max = 0.782761425639;
    msg.pitch_min = 0.444229384965;
    msg.pitch_max = 0.646539786597;
    msg.q_max = 0.139557548703;
    msg.g_min = 0.127595595803;
    msg.g_max = 0.728302166424;
    msg.g_lat_max = 0.357506067547;
    msg.rpm_min = 0.778881161321;
    msg.rpm_max = 0.789890054607;
    msg.rpm_rate_max = 0.0240425396167;

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
    msg.setTimeStamp(0.715809849796);
    msg.setSource(7100U);
    msg.setSourceEntity(6U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(233U);
    msg.op = 187U;
    msg.speed_min = 0.251510106859;
    msg.speed_max = 0.84760945055;
    msg.long_accel = 0.667821665369;
    msg.alt_max_msl = 0.0237097068863;
    msg.dive_fraction_max = 0.217445589018;
    msg.climb_fraction_max = 0.683601943353;
    msg.bank_max = 0.0187889199779;
    msg.p_max = 0.104803338877;
    msg.pitch_min = 0.371480773245;
    msg.pitch_max = 0.00480892114846;
    msg.q_max = 0.241787809523;
    msg.g_min = 0.477377671116;
    msg.g_max = 0.956230247158;
    msg.g_lat_max = 0.56754442224;
    msg.rpm_min = 0.481114406188;
    msg.rpm_max = 0.941616472364;
    msg.rpm_rate_max = 0.811044974971;

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
    msg.setTimeStamp(0.226086573883);
    msg.setSource(33125U);
    msg.setSourceEntity(245U);
    msg.setDestination(63341U);
    msg.setDestinationEntity(167U);
    msg.op = 97U;
    msg.speed_min = 0.206772554286;
    msg.speed_max = 0.0458585948936;
    msg.long_accel = 0.122335421101;
    msg.alt_max_msl = 0.0263513270583;
    msg.dive_fraction_max = 0.672397890738;
    msg.climb_fraction_max = 0.780359375469;
    msg.bank_max = 0.724953465479;
    msg.p_max = 0.81127826473;
    msg.pitch_min = 0.39883096354;
    msg.pitch_max = 0.146641283086;
    msg.q_max = 0.619724551899;
    msg.g_min = 0.462699566318;
    msg.g_max = 0.200057329625;
    msg.g_lat_max = 0.511777550476;
    msg.rpm_min = 0.324355632669;
    msg.rpm_max = 0.374362538069;
    msg.rpm_rate_max = 0.522701467519;

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
    msg.setTimeStamp(0.788773477051);
    msg.setSource(39394U);
    msg.setSourceEntity(17U);
    msg.setDestination(44061U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.737181157675);
    msg.setSource(36687U);
    msg.setSourceEntity(170U);
    msg.setDestination(53408U);
    msg.setDestinationEntity(233U);
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 91U;
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
    msg.setTimeStamp(0.28437928278);
    msg.setSource(18671U);
    msg.setSourceEntity(143U);
    msg.setDestination(26864U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.634038103559);
    msg.setSource(48563U);
    msg.setSourceEntity(226U);
    msg.setDestination(33259U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.14885542365;
    msg.lon = 0.629716418769;
    msg.height = 0.758050111589;
    msg.x = 6.90432627672e-05;
    msg.y = 0.210690901238;
    msg.z = 0.523740482351;
    msg.phi = 0.487034338505;
    msg.theta = 0.126563241089;
    msg.psi = 0.673133688394;
    msg.u = 0.0845136200001;
    msg.v = 0.426403090548;
    msg.w = 0.112955328115;
    msg.p = 0.963910014904;
    msg.q = 0.831443454489;
    msg.r = 0.667692492643;
    msg.svx = 0.480267552294;
    msg.svy = 0.233311412466;
    msg.svz = 0.923222260626;

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
    msg.setTimeStamp(0.620759648567);
    msg.setSource(17187U);
    msg.setSourceEntity(137U);
    msg.setDestination(46079U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.299845965996;
    msg.lon = 0.347771781914;
    msg.height = 0.737787905944;
    msg.x = 0.0592009640153;
    msg.y = 0.540984829408;
    msg.z = 0.566573191033;
    msg.phi = 0.677271545072;
    msg.theta = 0.684345561198;
    msg.psi = 0.867750674967;
    msg.u = 0.0749555796209;
    msg.v = 0.743202402865;
    msg.w = 0.432213062581;
    msg.p = 0.528970267832;
    msg.q = 0.408697461529;
    msg.r = 0.278941041803;
    msg.svx = 0.232411129949;
    msg.svy = 0.127484482996;
    msg.svz = 0.60395272089;

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
    msg.setTimeStamp(0.204185693981);
    msg.setSource(42120U);
    msg.setSourceEntity(34U);
    msg.setDestination(8346U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.794435415538;
    msg.lon = 0.338478969219;
    msg.height = 0.486284764267;
    msg.x = 0.109856819279;
    msg.y = 0.534853337609;
    msg.z = 0.803398739926;
    msg.phi = 0.668445525492;
    msg.theta = 0.338964185209;
    msg.psi = 0.977950220423;
    msg.u = 0.775343068207;
    msg.v = 0.83648797243;
    msg.w = 0.83670423392;
    msg.p = 0.659591010491;
    msg.q = 0.944587354528;
    msg.r = 0.230589301658;
    msg.svx = 0.94221578686;
    msg.svy = 0.232898279373;
    msg.svz = 0.103564056423;

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
    msg.setTimeStamp(0.976958776388);
    msg.setSource(19620U);
    msg.setSourceEntity(74U);
    msg.setDestination(35721U);
    msg.setDestinationEntity(159U);
    msg.op = 34U;
    msg.entities.assign("XDIYLRJUCPQYJUEIPBSTRXWGVQZPXZWRSLVGSIRVYAYXUKWCHSZILJOMBNAJPJBOQCSMACYJUXOXXGVVAZQZQYYG");

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
    msg.setTimeStamp(0.076044467442);
    msg.setSource(13037U);
    msg.setSourceEntity(248U);
    msg.setDestination(24565U);
    msg.setDestinationEntity(235U);
    msg.op = 145U;
    msg.entities.assign("TRTEGGXCXFMEELDNOSMHCGOUSPXSOXBRWRTNCZGIZTLVFGKDLVSCBJZBNOOIUNLPMLUUKERTDWHHRMAXVCAPIPLAIJPGY");

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
    msg.setTimeStamp(0.648853436032);
    msg.setSource(13661U);
    msg.setSourceEntity(72U);
    msg.setDestination(32800U);
    msg.setDestinationEntity(12U);
    msg.op = 166U;
    msg.entities.assign("EHGEPMVHTIUYRWULOQUWKSCXFWNJNBFKDNFYCWUOTJDNSMFWJTXUQWGAJIWMVOITBRRVVYACJGLFBZNXSZMAUOPGPUKEGXWRXJTDMPXQMUCKCZLDG");

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
    msg.setTimeStamp(0.110830684284);
    msg.setSource(35062U);
    msg.setSourceEntity(80U);
    msg.setDestination(56515U);
    msg.setDestinationEntity(7U);
    msg.type = 78U;
    msg.speed = 51739U;
    const char tmp_msg_0[] = {96, -27, -57, 26, -66, 16, -74, 39, -26, -20, -54, 42, 53, 49, -95, -65, 50, 0, 53, 71, 110, -110, -60, -85, 71, -46, 63, 34, -106, 21, -39, -69, -52, 1, 79, -79, -28, -124, -89, -65, 86, 78, 73, -68, 78, 111, 70, -68, -68, 94, -5, -112, 107, -1, -3, 82, 81, 7, 69, 105, -21, -98, -85, -40, 73, 28, -47, -24, -14, 11, -38, 118, -19, 12, -35, 45, -33, -121, -19, 109, -59, -111, -107, 104, -128, 107, 18, -105, 67, -81, -39, -5, 2, 58, 119, 118, 22, 59, 10, 118, 20, 14, 54, -32, -103, 64, -65, -4, -96, 87, 26, -101, -12, 94, 6, -81, -69, -61, -112, -96, 63, -97, -86, -80, -34, 94, -72, -57, -88, 97, 87, -24, 34, 28, 46, -72, -19, 106, -56, -61, 47, -33, 31, 22, -47, 79, -115, -68, -118, -110, -43, 119, 21, -9, 20, 80, -88, 1, 45, 51, 76, 79, -82};
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
    msg.setTimeStamp(0.69803404978);
    msg.setSource(56378U);
    msg.setSourceEntity(40U);
    msg.setDestination(27844U);
    msg.setDestinationEntity(218U);
    msg.type = 131U;
    msg.speed = 37601U;
    const char tmp_msg_0[] = {21, -68, -6, 52, -79, -87, -74, 3, -48, 45, 104, -99, -66, 67, -95, -72, 65, 89, -84, -44, -98, 44, -115, -70, -66, 40, -11, 9, -7, 47, -8, -66, -47, -40, 53, 75, 124, -26, 68, 84, -37, -70, 23, -26, 123, -88, -114, -6, -46, 69, -2, -10, -39, -69, -46, 100, -9, -62, -62, -71, -15, -20, 80, -45, 101, 101, 25, 120, 123, -111, -98, 126, 1, -33, -56, 94, 40, -47, 26, 74, -85, -124, -107, -45, -55, -40, 108, -20, -82, 66, 46, 53, -123, 65, 90, 65, 122, 59, -43, -4, -86};
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
    msg.setTimeStamp(0.88677219669);
    msg.setSource(51684U);
    msg.setSourceEntity(108U);
    msg.setDestination(834U);
    msg.setDestinationEntity(252U);
    msg.type = 10U;
    msg.speed = 19469U;
    const char tmp_msg_0[] = {71, 80, -51, 82, 45, -123, 11, 105, -116, 52, -49, -31, -29, -94, -6, -44, -56, -71, -80, -58, -14, -48, -90, 100, 16, -6, 106, -8, -25, 25, -100, -20, -123, 121, 94, -46, -94, 16, 82, -127, 110, -105, 106, 48, -104, 45, 74, 68, 125, -27, 38, -99, -119, -69, 116, -52, 64, -106, 22, 97, -13, -83, -118, 45, -121, -88, 65, 20, 6, -30, 78, -35, -9, -24, -44, -122, 69, 126, 94, 73, -64, 38, 70, -97, 34, -26, 116, 82, -75, 75, -4, -99, -38, -74, 79, 51, -30, -40, 98, -27, 112, 27, 122, -75, 56, -15, -79, -96, -116, -121, -8, 65, 61, 26, 94, 11, 109, -43, 59, 82, 109, -50, -16, 63, 48, -97, 86, -59, 30, 0, -59, 79, -76, 16, 64, 119, -22, -103, -53, 95, -52, -106, -29, 3, 116, 106, 115, -47, -34, -20, -56, -67, -8, 124, -84, -73, -85, 91, 105, -39, 116, -9, -9, -38, 122, -95, -2, -55, -66, 72, -27, 103, -5, 4, -77, 121, -71, 115, -94, 48, -20, -88, -21, -92, -125, 89, -42, 103, -21, -69, -44, 66, -2, 33, -98, -99, -67, 4, -67, 82, 124, 38, 33, 31, 82, -7};
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
    msg.setTimeStamp(0.883578179631);
    msg.setSource(10016U);
    msg.setSourceEntity(94U);
    msg.setDestination(2058U);
    msg.setDestinationEntity(189U);
    msg.op = 46U;
    msg.tas2acc_pgain = 0.764479790063;
    msg.bank2p_pgain = 0.532063659346;

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
    msg.setTimeStamp(0.249798920426);
    msg.setSource(44785U);
    msg.setSourceEntity(112U);
    msg.setDestination(21325U);
    msg.setDestinationEntity(207U);
    msg.op = 233U;
    msg.tas2acc_pgain = 0.0162776407616;
    msg.bank2p_pgain = 0.174406105001;

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
    msg.setTimeStamp(0.864295321172);
    msg.setSource(18518U);
    msg.setSourceEntity(17U);
    msg.setDestination(16437U);
    msg.setDestinationEntity(113U);
    msg.op = 128U;
    msg.tas2acc_pgain = 0.19736686439;
    msg.bank2p_pgain = 0.93444819588;

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
    msg.setTimeStamp(0.925522906057);
    msg.setSource(3960U);
    msg.setSourceEntity(84U);
    msg.setDestination(44394U);
    msg.setDestinationEntity(153U);
    msg.available = 2436521567U;
    msg.value = 58U;

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
    msg.setTimeStamp(0.0725157176673);
    msg.setSource(20467U);
    msg.setSourceEntity(197U);
    msg.setDestination(59899U);
    msg.setDestinationEntity(124U);
    msg.available = 2340957947U;
    msg.value = 141U;

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
    msg.setTimeStamp(0.884788604454);
    msg.setSource(51300U);
    msg.setSourceEntity(174U);
    msg.setDestination(40254U);
    msg.setDestinationEntity(218U);
    msg.available = 3092714005U;
    msg.value = 146U;

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
    msg.setTimeStamp(0.114401239635);
    msg.setSource(30243U);
    msg.setSourceEntity(45U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(3U);
    msg.op = 174U;
    msg.snapshot.assign("CVREXXETPKEGOXQWCJJOCGTEECEOHSQXYQHVWKLZHNADJRRVNDGVBZHPTFAHHXQMTNQWASGTYCMPCUJWIYXDVCNAILEQMRUWOPOOEWKLYRDXHZALLAUFPXQGUBFNUAQADBCCBSZJRWJFUZFNPYYITXYKKVMBBKZWINDIVOPWLBSZFJRDSCJQGSUVAHIFHGWEXQIKVFULRGMOBLSSKYHKOGBZSTJFITSZRERVTNLPMDJMMGNUNBFYMIUIPPTAM");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 152U;
    tmp_msg_0.entities.assign("QCKMCOIDMMUUFYAJRIBJVMQIBECOVULVWBPQZUIRYQDYKCXEUWARBJHNTRQSZNABNWXDYFLUKTJPHWISESLWOWOSNDKWVOCIXHQGOQZHVJKGDAIZETAXLFZAPGOXKBONSPKXNINBUXVKP");
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
    msg.setTimeStamp(0.287722391799);
    msg.setSource(52684U);
    msg.setSourceEntity(139U);
    msg.setDestination(48597U);
    msg.setDestinationEntity(151U);
    msg.op = 59U;
    msg.snapshot.assign("JCGWMNPTUDTTUKKSRAEWUOONCBVXINCJSVGSWTXFSFROJUXTDWHBCLHPEZJLFDLCGVSBMARHYPNNZRXZZPCXAHLQEIQOLPKQXWWHMA");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.460274268796;
    tmp_msg_0.sys_src = 28290U;
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
    msg.setTimeStamp(0.761876511085);
    msg.setSource(17942U);
    msg.setSourceEntity(132U);
    msg.setDestination(29824U);
    msg.setDestinationEntity(30U);
    msg.op = 192U;
    msg.snapshot.assign("SMWDPSQCXEDTVRYKYHEYYFNUJLGKJFVZAU");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 35697U;
    tmp_msg_0.lat = 0.453808341205;
    tmp_msg_0.lon = 0.586664548094;
    tmp_msg_0.z = 0.956562152521;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.speed = 0.703362370692;
    tmp_msg_0.speed_units = 52U;
    tmp_msg_0.roll = 0.0634208016652;
    tmp_msg_0.pitch = 0.246749591134;
    tmp_msg_0.yaw = 0.58811846922;
    tmp_msg_0.custom.assign("EQDIDYDPZDUYMZCDTGKBDJNZOFQNCMSOEENWYBZRGZPAKJIQQIUVVRGENAPBXVLGHSUWHYDWVTIOXIRPCOTSRUDECHOFGKKCAPRRFMJFLOSWVUKFHWHQVQJQABLUFOAGXZMSOXKAO");
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
    msg.setTimeStamp(0.744330001592);
    msg.setSource(36565U);
    msg.setSourceEntity(29U);
    msg.setDestination(1412U);
    msg.setDestinationEntity(117U);
    msg.op = 109U;
    msg.name.assign("NZRJJKYWJQXJQLTPXQQTUXWNCTARBGOHBTSXBEAKYXGZXZEATLVGTWJCDIGGZBOBHEIRFFPYDNNMDMCVCUGRBWQCAKCIFAFHPYLAWHIVIHVJEOKZRMJMHUMINPDWDSKXYXTPYVDGVOHVFPFEJMKIDZJAOLZMUKAKWMOUQCOGSVCUHRNIXOPBSBLQDDWT");

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
    msg.setTimeStamp(0.975307253463);
    msg.setSource(16650U);
    msg.setSourceEntity(195U);
    msg.setDestination(16757U);
    msg.setDestinationEntity(152U);
    msg.op = 15U;
    msg.name.assign("UPOYGBWRJVGJDSLWXEPFAPMGVDHVTYLDXUKNDVHNTMPQLTXHZURBTGAEINQGXMNUVKFUZDWKHTPOROPESUZKFONAEIJIARQWLFKPSTOOWSTXCZLJAMPQGTZSCLINOOFEVIYBMLNRMBCECEYGDBWUCBQQCBDQPFINHBHMLAUCVSIYNFJHXRKVFZHZJBYRXFESJCCHIKJBKWRTYZWGDKWAYOQTGYMK");

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
    msg.setTimeStamp(0.966729136086);
    msg.setSource(52878U);
    msg.setSourceEntity(177U);
    msg.setDestination(55880U);
    msg.setDestinationEntity(219U);
    msg.op = 12U;
    msg.name.assign("EWTZAIRMUFMQLFFAREMCTXTHU");

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
    msg.setTimeStamp(0.126847024872);
    msg.setSource(28424U);
    msg.setSourceEntity(159U);
    msg.setDestination(64742U);
    msg.setDestinationEntity(125U);
    msg.type = 205U;
    msg.htime = 0.0834805810142;
    msg.context.assign("UQJTXYIQUBBOZPMLLGPVMCIGRZXOEKJQTEVDORQTTUNHNAFBVNAJAGHGJCJQWPGEZXLYEQHWOBPXOBLTJIWDKYCNKMLENSXEPVNCDFDUXMIQSMSVFSUVRORCYVCDQLEAVWDSFIFFMNEYWTBRZOAKKJMKB");
    msg.text.assign("OAWHFPUURCXFQDWWLYELUBYYGVISPBMKFGPYWOSGIDVKCMQFKGTCETETTKNNBYQYYBUPDMXLQZTQMXFBTXSDKZUDZDRJEEUNWZUNUNVDMHIJABPLVITLUCIVDHCVONQMRQRDKB");

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
    msg.setTimeStamp(0.526394737142);
    msg.setSource(12135U);
    msg.setSourceEntity(206U);
    msg.setDestination(9658U);
    msg.setDestinationEntity(115U);
    msg.type = 218U;
    msg.htime = 0.436733793234;
    msg.context.assign("QPVPQXLGCUHTZZUXCTMNXAYJMHIWVQDJMWSCCWOTPRKRNFLKFRFNLOEWCUPZFRSWWNZKRFUSCUQRQVFEDJVMRTNKLKLJIYESPPHYWOBVZLUGECXMGPEUVCUDAGEHQAISHAQKBXOIGTFOBZTSPBAKCJNYANYMPJTXHQZZTSIYMLMUANFEOLVPEYIWACVHGWODGZB");
    msg.text.assign("HIEHEYDCPGXKZMCUJDNWOZELBJYTLKHHRNKIQQNUXTDRTJDZCHPOHNJSSXRCQVVOXVRKBFGQBBEELWISANAZKXQODVEKWGULUXBYPEWJWURVGWMFVRMHGXKAQINUAZCBGITQCVJYOTPZKUZSRMFMMQBCPXEUYTACSVYDIDBREIWMJUKAPCDMFQLZQHULJWCPFNYZBFPREDTYGLJKPLNIFGNZM");

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
    msg.setTimeStamp(0.764110346199);
    msg.setSource(31467U);
    msg.setSourceEntity(90U);
    msg.setDestination(39337U);
    msg.setDestinationEntity(232U);
    msg.type = 180U;
    msg.htime = 0.315498061451;
    msg.context.assign("HPIZKSFNTXZFLTZYWCKRKYBG");
    msg.text.assign("FQZPALAMHIDPHVXFOBWQOZWLBIKBCKGXZJQAWUHJIZYSSGRQNDMJFQIMGULKYKNVTIOKEAEEETHSSIYYETFLKLWNZQSUVXZRAIOVUXPTNSRLHWURXXMJYLNUCTBSN");

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
    msg.setTimeStamp(0.12585678248);
    msg.setSource(64044U);
    msg.setSourceEntity(175U);
    msg.setDestination(16405U);
    msg.setDestinationEntity(164U);
    msg.command = 78U;
    msg.htime = 0.129333692293;

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
    msg.setTimeStamp(0.307465322165);
    msg.setSource(15937U);
    msg.setSourceEntity(36U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(211U);
    msg.command = 171U;
    msg.htime = 0.683514625731;

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
    msg.setTimeStamp(0.155661758115);
    msg.setSource(53854U);
    msg.setSourceEntity(113U);
    msg.setDestination(16359U);
    msg.setDestinationEntity(149U);
    msg.command = 171U;
    msg.htime = 0.865528820654;

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
    msg.setTimeStamp(0.230587758448);
    msg.setSource(2721U);
    msg.setSourceEntity(47U);
    msg.setDestination(59467U);
    msg.setDestinationEntity(147U);
    msg.op = 3U;
    msg.file.assign("ZBOPWHYYVPQNNRGFDHHVPVCNQWWTIOBFJRJSUFEHGNSXLQDCYCRMCIRUMJGZQVQVNJLNUFOBMKAFWQSBCPZXKSTOXQFKLIUDXRTDEMCKCWIBTSDSGFYHRTFLHEXOQUSSWOSZTDOVCGIPEZADUISKLL");

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
    msg.setTimeStamp(0.520194485274);
    msg.setSource(47551U);
    msg.setSourceEntity(66U);
    msg.setDestination(59134U);
    msg.setDestinationEntity(57U);
    msg.op = 177U;
    msg.file.assign("QYVYBUZMXDNLWGOCKSRODNQBKXDPTQKYIIRFBJINEFBBEZEVPTXMMUWJGEEWVQPKWNJTNAUHKRZTQQHAGRFYSSVWYEZBHCGOMLOUIEJFLRDUONOVUJPBPTVPEISJNMMCADYOXIKHICVWZTIHVQQWDLQXZHGNMGATPXUSSRORXAFSUMSHIFNAPXGEYJCAFJXHWHFWFRLTVBUHKSQKCZDKZLMPYCBAA");

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
    msg.setTimeStamp(0.172004479106);
    msg.setSource(4739U);
    msg.setSourceEntity(186U);
    msg.setDestination(19297U);
    msg.setDestinationEntity(45U);
    msg.op = 35U;
    msg.file.assign("HDAQMOKVNVWDAXELJVOFHHGASMEOCOQSZ");

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
    msg.setTimeStamp(0.146758696104);
    msg.setSource(63408U);
    msg.setSourceEntity(56U);
    msg.setDestination(26557U);
    msg.setDestinationEntity(144U);
    msg.op = 167U;
    msg.clock = 0.284827596472;
    msg.tz = 70;

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
    msg.setTimeStamp(0.858997428204);
    msg.setSource(60849U);
    msg.setSourceEntity(76U);
    msg.setDestination(31390U);
    msg.setDestinationEntity(177U);
    msg.op = 206U;
    msg.clock = 0.88102683129;
    msg.tz = -106;

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
    msg.setTimeStamp(0.878198766537);
    msg.setSource(31774U);
    msg.setSourceEntity(233U);
    msg.setDestination(24047U);
    msg.setDestinationEntity(226U);
    msg.op = 61U;
    msg.clock = 0.138495557088;
    msg.tz = 4;

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
    msg.setTimeStamp(0.892296756243);
    msg.setSource(46144U);
    msg.setSourceEntity(6U);
    msg.setDestination(10802U);
    msg.setDestinationEntity(134U);
    msg.conductivity = 0.708433992347;
    msg.temperature = 0.500024678673;
    msg.depth = 0.225789853478;

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
    msg.setTimeStamp(0.624041463901);
    msg.setSource(44573U);
    msg.setSourceEntity(20U);
    msg.setDestination(37750U);
    msg.setDestinationEntity(188U);
    msg.conductivity = 0.840315390142;
    msg.temperature = 0.145257507052;
    msg.depth = 0.394380852691;

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
    msg.setTimeStamp(0.289432170276);
    msg.setSource(44168U);
    msg.setSourceEntity(167U);
    msg.setDestination(15711U);
    msg.setDestinationEntity(107U);
    msg.conductivity = 0.519775211971;
    msg.temperature = 0.952159244258;
    msg.depth = 0.756936686184;

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
    msg.setTimeStamp(0.972067392509);
    msg.setSource(33523U);
    msg.setSourceEntity(127U);
    msg.setDestination(6968U);
    msg.setDestinationEntity(18U);
    msg.altitude = 0.641240519937;
    msg.roll = 29011U;
    msg.pitch = 36696U;
    msg.yaw = 30312U;
    msg.speed = -21205;

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
    msg.setTimeStamp(0.612212069097);
    msg.setSource(30512U);
    msg.setSourceEntity(76U);
    msg.setDestination(58796U);
    msg.setDestinationEntity(131U);
    msg.altitude = 0.377624508226;
    msg.roll = 56958U;
    msg.pitch = 28083U;
    msg.yaw = 32979U;
    msg.speed = 17688;

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
    msg.setTimeStamp(0.480665493237);
    msg.setSource(20596U);
    msg.setSourceEntity(79U);
    msg.setDestination(45879U);
    msg.setDestinationEntity(205U);
    msg.altitude = 0.0309296518905;
    msg.roll = 17783U;
    msg.pitch = 53895U;
    msg.yaw = 56328U;
    msg.speed = 9992;

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
    msg.setTimeStamp(0.270173029019);
    msg.setSource(39582U);
    msg.setSourceEntity(139U);
    msg.setDestination(32811U);
    msg.setDestinationEntity(141U);
    msg.altitude = 0.234354813951;
    msg.width = 0.482444648431;
    msg.length = 0.243515793932;
    msg.bearing = 0.623775882924;
    msg.pxl = -5574;
    msg.encoding = 53U;
    const char tmp_msg_0[] = {95, -58, -64, -94, -124, -115, -35, 73, -117, 52, 124, -106, 99, -86, -7, 111, -6, -49, -11, 124, -58, 29, 77, -7, -127, 6, 91, 16, -4, -31, 88, 3, -48, -116, -78, -37, -98, -77, -98, 36, -127, -33, 86, 7, -106, 60, -37, 67, 104, -101, -115, 51, -6, -25, 54, -16, -95, -27, -64, -45, -81, 113, -116, -36, 56, 19, 80, 30, -18, 112, 21, 107, -108, 49, -31, 109, 76, -71, -14, 82, 19, -45, 93, 126, 6, 89, 60, 81, -84, -54, 66, 72, -59, -88, 75, 62, -87, 61, 124, -97, 23, 37, -114, 46, 11, -4, 38, -51, -36, -127, -90, 120, -99, -2, -21, 115, 123, 105, 52, -66, 117, 78, 76, -85, 67, 76, 65, 24, -87, -124, 102, 100, -103, -61, 86, -119, 25, 8, -33, 9, -63, 81, -17, 14, -122, -81, -93, 53, 98, -4, 5, 15, -74, 101, 23, 10, -101, 75, 52, 124, 107, 108, 91, -123, -43, 38, 104, -86, 20, -93, -118, 3, -70, -25, 40, 21, -118, 80, -11, -49, 48, -46, -114, 64, 96, 64, 42, 24, 51, 48, -34, 121, -14, -65, 10, 81, 60, -19, -86, 77, 46, 28, 42, -74, 68, 24, 93, 13, 78, 101, 91, 43, 37, -85};
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
    msg.setTimeStamp(0.675904909949);
    msg.setSource(49185U);
    msg.setSourceEntity(81U);
    msg.setDestination(30458U);
    msg.setDestinationEntity(194U);
    msg.altitude = 0.353803453019;
    msg.width = 0.808567808486;
    msg.length = 0.926533018707;
    msg.bearing = 0.947927015008;
    msg.pxl = -5296;
    msg.encoding = 195U;
    const char tmp_msg_0[] = {-115, -101, 105, -19, -52, -18, -98, 79, 112, -36, 53, 61, 52, 112, -9, 91, -88, -35, -53, -103, 43, -52, 4, -75, -119, -16, -50, 89, -87, -87, 82, 91, 121, -26, 75, -111, -21, 24, -102, -6, -59, -25, 21, 24, -99, -34, 120, 124, 84, -109, -70, 59, -63, 26, 28, -17, -74, 32, -125, 85, 64, 10, -92, 2, 4, 68, 97, -89, 95, -20, 49, 124, -115, 106, 48, 109, 56, -108, -118, -42, 96, -113, 49, -114, 55, -116, 28, -31, -7, -40, -96, -84, -71, -25, -29, -4, 95, -92, -52, 72, 126, -10, 15, 51, 70, 39, 9, 86, 22, 71, 103, 114, 47, -19, -81, -15, 2, -111, 90, -71, -44, 79, -111, 22, -35, -117, -35, 4, 70, -63, 43, 85, -101, -41, 3, -40, -77, -98, -57, 9, 18, -83, -10, -36, -9, -29, 30, 3, -22, 39, -94, 4, -94, -105, -116, 5, -112, -83, -92, 116, 37, 34, -112, -106, 60, -76, -77, -8, -17, -76, 103, -94, 99, -127, 78, 35, -4, 94, -35, 33, -72, -71, 49, -42, 113, 89, 67, 55, 82, 93, 35, 45, -29, 112, 62, -4, -121, -27, 107, 108, -48, 48, -45, -98, 96, -98, -92, 70};
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
    msg.setTimeStamp(0.206572833259);
    msg.setSource(10152U);
    msg.setSourceEntity(184U);
    msg.setDestination(44948U);
    msg.setDestinationEntity(142U);
    msg.altitude = 0.225849788375;
    msg.width = 0.658724305221;
    msg.length = 0.218631408271;
    msg.bearing = 0.952950261807;
    msg.pxl = 20313;
    msg.encoding = 180U;
    const char tmp_msg_0[] = {-40, -61, -95, 46, -56, -50, 5, -81, 80, -51, -65, -89, 28, 105, 85, 104, -59, -113, 18, 83, 71, 53, 84, 52, -82, -9, -69, -100, 31, 126, 59, 93, -55, -127, -28, 104, -12, 16, -120, 64, 97, 29, -57};
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
    msg.setTimeStamp(0.936098382459);
    msg.setSource(58450U);
    msg.setSourceEntity(38U);
    msg.setDestination(780U);
    msg.setDestinationEntity(100U);
    msg.text.assign("UOAXNOMWZXBXVZAAIBRSRIMIKNUPKOLGCRNMCTBFAFSRNVSQPRFLIPGUHAKZVIJFQBDMOJAFTKDVQCFELEHKHQJNGLPEIUKVLHPBVYGBUOKEWRLEXCDBJKTPRJCKPMQSXUYJAZMQJJTKSSCAXBLWNEYDQGPWSPOFEUYUZLHRBHNGDOMGYZTHHDCSYYNPDTXJQVWVXQTUOZIHTWGVGCAZMOGJYXAZLRIONVWUZWSMHWDF");
    msg.type = 22U;

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
    msg.setTimeStamp(0.26622080982);
    msg.setSource(63294U);
    msg.setSourceEntity(231U);
    msg.setDestination(12510U);
    msg.setDestinationEntity(169U);
    msg.text.assign("QJJPYZJQABYDEQTNNKQXOBUCVYBSZYAPLWZIOFNFMDKARHLNFRVBF");
    msg.type = 47U;

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
    msg.setTimeStamp(0.696961851758);
    msg.setSource(35596U);
    msg.setSourceEntity(167U);
    msg.setDestination(52464U);
    msg.setDestinationEntity(242U);
    msg.text.assign("QXORSAUEFPYDZYGRTSKSCZYNMUBGAJQHOVXPTBEGLQKVUYAXSEDLTVCAPTHYDUSZHDOQKXXRJYGMELFUFOJLIGNCWZKWZBPYGCBVRJLZDOADAUVQHHMKBPZWWSAVCGAQHLCNGQCRMFYIRKFGRXBPMISVPEVBLTQQWEUFCYJTKBNGJLDKNAIEJOSZUKWEINENTATZTHBXDFPDIKBEPMWWNMWMZRJCILOIDSYOIWVFFHIUQSHU");
    msg.type = 5U;

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
    msg.setTimeStamp(0.14114659311);
    msg.setSource(49657U);
    msg.setSourceEntity(12U);
    msg.setDestination(44720U);
    msg.setDestinationEntity(48U);
    msg.parameter = 181U;
    msg.numsamples = 38U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 23393U;
    tmp_msg_0.avg = 0.704537758903;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0259638306402;
    msg.lon = 0.361201168942;

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
    msg.setTimeStamp(0.731833618245);
    msg.setSource(8807U);
    msg.setSourceEntity(229U);
    msg.setDestination(56021U);
    msg.setDestinationEntity(177U);
    msg.parameter = 202U;
    msg.numsamples = 4U;
    msg.lat = 0.079958198789;
    msg.lon = 0.285769111919;

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
    msg.setTimeStamp(0.788955159484);
    msg.setSource(60139U);
    msg.setSourceEntity(240U);
    msg.setDestination(65328U);
    msg.setDestinationEntity(121U);
    msg.parameter = 170U;
    msg.numsamples = 82U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 4105U;
    tmp_msg_0.avg = 0.445548555128;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.775683175365;
    msg.lon = 0.660101977427;

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
    msg.setTimeStamp(0.275954826729);
    msg.setSource(44610U);
    msg.setSourceEntity(81U);
    msg.setDestination(36594U);
    msg.setDestinationEntity(117U);
    msg.depth = 28466U;
    msg.avg = 0.603550166276;

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
    msg.setTimeStamp(0.466320413073);
    msg.setSource(33066U);
    msg.setSourceEntity(174U);
    msg.setDestination(6700U);
    msg.setDestinationEntity(62U);
    msg.depth = 21776U;
    msg.avg = 0.410581495593;

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
    msg.setTimeStamp(0.165005245718);
    msg.setSource(21003U);
    msg.setSourceEntity(112U);
    msg.setDestination(50110U);
    msg.setDestinationEntity(197U);
    msg.depth = 19507U;
    msg.avg = 0.510266335625;

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
    msg.setTimeStamp(0.10899012197);
    msg.setSource(40098U);
    msg.setSourceEntity(38U);
    msg.setDestination(31U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.355321801083);
    msg.setSource(31388U);
    msg.setSourceEntity(88U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.888673821731);
    msg.setSource(36580U);
    msg.setSourceEntity(208U);
    msg.setDestination(37804U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.244560681717);
    msg.setSource(49661U);
    msg.setSourceEntity(160U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(124U);
    msg.sys_name.assign("AESTLQGQJQGSCGDOVHWPRKMNXKILJHKLSSTZMFKFMXIOHUNWCUQPSAXSPLRNNZXHAAJSATDEZLCKBHXFVMEERRHMWJRNYEYZNYZEUGAEYDARCYBIFYUGFPHTQFVGEMYNYHFDITCSODKQYZRCIZNQKCZNFOTMOCQJQWKVBIOILCZBNPUDFOOFWVJMJWVVJOTPSGCRQT");
    msg.sys_type = 126U;
    msg.owner = 36499U;
    msg.lat = 0.354063673994;
    msg.lon = 0.116297517398;
    msg.height = 0.732148008753;
    msg.services.assign("VHMTOANTHADHBVWWOHCEMRFKASGDXBTKCLZIUDUCWRQFUNYQKWORVXSFXRSFGGXICUESCOLXNMZLPZTGACGLYIWCDJKKZNHSVHTRVAQWAYIK");

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
    msg.setTimeStamp(0.270540227388);
    msg.setSource(53231U);
    msg.setSourceEntity(23U);
    msg.setDestination(20883U);
    msg.setDestinationEntity(156U);
    msg.sys_name.assign("OEQTZASOCEGWBRRDCBFIHCQCUXFELTJVTZPMKIXLADYANKSRKHEYYAMJBGLKTMANVYXEVGRJGYFBYIWROFPLTGFBWNZXOVCXIZMDZKCFBHSCAKQNHRHQWODMRIWVQSIFYWHUQQPNQNGDGUMHITBGAOFYDHPVSQNMZXPCEJRDWDZVGXESIVBK");
    msg.sys_type = 70U;
    msg.owner = 57657U;
    msg.lat = 0.932287521944;
    msg.lon = 0.109727750003;
    msg.height = 0.133026710008;
    msg.services.assign("YUTLGKBHZZFSQPZRH");

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
    msg.setTimeStamp(0.460461839494);
    msg.setSource(56155U);
    msg.setSourceEntity(169U);
    msg.setDestination(2028U);
    msg.setDestinationEntity(233U);
    msg.sys_name.assign("FXNBOZBQQCAVFBGCXBDFXRZYMDIEWAQIEQOJVUWDHANRNLQALNELCMVMNRKYZIWSYXJMHJDSKCMBSHUDEKPZSDRANBFQUAWPWJGHYAXOPLWGRCGZCWCVBKAKFGKEOHTYTTUOTYHWQMPHOAGPVOISHFEPJRPIVLELWLUKQXTVMZJITFUDNGMTLOSSIJTIPFDHLORJVWTTYXUULKGEKRNNECGONUFBYGESSQPDVFRIYCXY");
    msg.sys_type = 107U;
    msg.owner = 25008U;
    msg.lat = 0.197879799645;
    msg.lon = 0.296123111676;
    msg.height = 0.380004643855;
    msg.services.assign("GBZIADXUYUVRXBKWLYDPTNAHYDRESKMOXOPBTWFMUYMURGQXSY");

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
    msg.setTimeStamp(0.612330310393);
    msg.setSource(15785U);
    msg.setSourceEntity(106U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(74U);
    msg.service.assign("KCSZGHYJUZPIIAWBSIBKQNCKJOLIMJPXNGDNCDXGIYCAVHOVOT");
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
    msg.setTimeStamp(0.277760702418);
    msg.setSource(5549U);
    msg.setSourceEntity(234U);
    msg.setDestination(18857U);
    msg.setDestinationEntity(108U);
    msg.service.assign("GMOKICSKGTZGOSVXWHAQODJPZCVU");
    msg.service_type = 241U;

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
    msg.setTimeStamp(0.614699773273);
    msg.setSource(62055U);
    msg.setSourceEntity(30U);
    msg.setDestination(33411U);
    msg.setDestinationEntity(156U);
    msg.service.assign("JBHIFJZIXQLPSJRUANWKVZVZSQIMEEBTTJSCGXRGNRRFVGYWAKSDZPUFUFDOXRHOBMYMPPVVEFAHAPTKDOXYLCISAADDQDPBTITTPJJYNBKYMZNXWMMGZWVYPWNZWIOESAUDPQGLXGRUOGHMMSUBZVKLCEIZCEBTGNLEYKCTLWXWQVOHYNQJJHOEDCFOVHOJLSQXLYBKCLKCXOPKT");
    msg.service_type = 185U;

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
    msg.setTimeStamp(0.978657257053);
    msg.setSource(28254U);
    msg.setSourceEntity(72U);
    msg.setDestination(41956U);
    msg.setDestinationEntity(75U);
    msg.value = 0.376264264818;

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
    msg.setTimeStamp(0.0543795444192);
    msg.setSource(41749U);
    msg.setSourceEntity(142U);
    msg.setDestination(52041U);
    msg.setDestinationEntity(241U);
    msg.value = 0.199604837121;

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
    msg.setTimeStamp(0.914262827075);
    msg.setSource(48739U);
    msg.setSourceEntity(108U);
    msg.setDestination(3045U);
    msg.setDestinationEntity(117U);
    msg.value = 0.829645755421;

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
    msg.setTimeStamp(0.282012220812);
    msg.setSource(30184U);
    msg.setSourceEntity(148U);
    msg.setDestination(65184U);
    msg.setDestinationEntity(235U);
    msg.value = 0.398402923628;

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
    msg.setTimeStamp(0.140879300496);
    msg.setSource(45239U);
    msg.setSourceEntity(77U);
    msg.setDestination(46160U);
    msg.setDestinationEntity(209U);
    msg.value = 0.478184069423;

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
    msg.setTimeStamp(0.481901616119);
    msg.setSource(44647U);
    msg.setSourceEntity(253U);
    msg.setDestination(47348U);
    msg.setDestinationEntity(194U);
    msg.value = 0.111798963353;

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
    msg.setTimeStamp(0.0838918156898);
    msg.setSource(33632U);
    msg.setSourceEntity(245U);
    msg.setDestination(139U);
    msg.setDestinationEntity(120U);
    msg.value = 0.683993655767;

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
    msg.setTimeStamp(0.794501993484);
    msg.setSource(32772U);
    msg.setSourceEntity(214U);
    msg.setDestination(43780U);
    msg.setDestinationEntity(56U);
    msg.value = 0.590799634609;

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
    msg.setTimeStamp(0.602661426836);
    msg.setSource(32433U);
    msg.setSourceEntity(128U);
    msg.setDestination(44789U);
    msg.setDestinationEntity(213U);
    msg.value = 0.453805791184;

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
    msg.setTimeStamp(0.706849159036);
    msg.setSource(26546U);
    msg.setSourceEntity(121U);
    msg.setDestination(52288U);
    msg.setDestinationEntity(30U);
    msg.number.assign("HWIKHLVJYGJBECQLSRIVAMTYQSDUSIXM");
    msg.timeout = 60774U;
    msg.contents.assign("ZDBTHIJFYALHHXECDSKTKLPYUXLJELRWYMJUNLQVXUDAYWFVVIBSSCNOCRRQGVBHGVDODOZEMTNFHRRHYGGAXTBMQAWVUFRXKHEPZMTIFJJDMGNOJAYBEZWMKHJONR");

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
    msg.setTimeStamp(0.166090656049);
    msg.setSource(23198U);
    msg.setSourceEntity(146U);
    msg.setDestination(60945U);
    msg.setDestinationEntity(96U);
    msg.number.assign("DCHOQMYZOODPOIZAFIIGBEEEEJRBKJVVHIWYDTRHUBCCGHOIRSBLTSKFQNLGTGGUHTNTOXPFXJYZCSTZLWCPISQUVBYGSXGKJACXDVGKZMMPNVZLIQWYUWEEJAVVWZNCLBRQNFNCKWNHAMDSZKJFUEORKBETACHQMINV");
    msg.timeout = 35874U;
    msg.contents.assign("TEPSIHJFKOLSUGINYEIDWVCJIKUMWEGNKTRSGUPRVXNNVFQLOPFVOCZMTJJBLKMZOLQPQQGZWXRBJGFCQBFDUCHLHDXQANESUSTIXXCRXDT");

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
    msg.setTimeStamp(0.0538071437456);
    msg.setSource(14020U);
    msg.setSourceEntity(246U);
    msg.setDestination(57382U);
    msg.setDestinationEntity(213U);
    msg.number.assign("XEVPYFUKUIFTRNXLHVDDQTOCUCLOEQALGUBSFQQBAMMXOGBFOLAZQQOONMPPLBKZWRKKDJCWHHYYIXYXPTTNNBBLDRNRSCEZNCFCMUS");
    msg.timeout = 24543U;
    msg.contents.assign("ODTZUVQQAZAGRTCFWIPZVRFWDBWRPLSAGUETWLHFZQDSCWDPSLKDOUHCDVRYSVGUBLJRMPEVJXKPRKJCLVGHCJEPWAEKXYASMFLRNHMILTQMQTJAZBUABOWRLCMYZZBTPMYRKWAXSETUUVQXXCUSRPQWNHTEBLJSNGVNX");

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
    msg.setTimeStamp(0.501383698387);
    msg.setSource(51545U);
    msg.setSourceEntity(73U);
    msg.setDestination(20451U);
    msg.setDestinationEntity(119U);
    msg.seq = 2175367826U;
    msg.destination.assign("HRJTLUNKVESJJMOLFHTLHOQLHSUHDUXJFNOWDSPOAPFNVQUSWIUTPRVWZMUAYIBKPDSCUKYVUKZCJFOJSYEHFBYOP");
    msg.timeout = 47517U;
    const char tmp_msg_0[] = {55, -61, 2, 111, -90, 109, 109, 78, 94, -91, -3, -103, 103, 94, -7, -83, 0, -114, 84, -2, -121, -68, -109, -64, -14, -65, 82, 48, -101, -96, -39, -19};
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
    msg.setTimeStamp(0.407070095371);
    msg.setSource(17889U);
    msg.setSourceEntity(17U);
    msg.setDestination(51780U);
    msg.setDestinationEntity(205U);
    msg.seq = 1597215337U;
    msg.destination.assign("IWOUWMSBNXZKZYDEPAXBQQNWCIXANRKCAVHVGSPYXBPLASYGK");
    msg.timeout = 11697U;
    const char tmp_msg_0[] = {-30, -5, -14, -53, 109, -59, -7, 61, -95, -3, -9, -23, -104, 36, 32, -127, -86, -74, 29, -82, -44, -18, 3, -22, -62, 105, 24, -104, 89, 126, 5, -28, 6, -23, 86, -11, -98, 5, -57, -35, -12, -123, -10, -127, -52, -58, -124, -105, -14, 60, 123, -91, -83, -86, 92, 120, -78, 29, -51, -48, 79, -23, 85, -89, -62, 76, 68, 75, 53, -3, -16, -6, 117, 63, -120, 34, -89, -29, 32, 97, 68, -87, -101, -110, -57, -15, -67, 32, 66, -62, -88, 82, 74, -103, -62, -6, 50, 2, -94, 87, 117, 96, 67, 17, -64, 36, -109, 91, -4, -67, -6, 92, -103, -44, -123, 93, -71, 12, 33, -19, 25, -101, -70, 65, -5, 60, -103, 121, -16, 52, 45, -50, 45, 7, -125, 26, 18, 30, 111, 40, -72, 25, -27, -106, -16, -116};
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
    msg.setTimeStamp(0.85072079425);
    msg.setSource(16578U);
    msg.setSourceEntity(251U);
    msg.setDestination(28068U);
    msg.setDestinationEntity(238U);
    msg.seq = 135787837U;
    msg.destination.assign("GGVCVYKBWBLFSRLVNJPEPXNFVMTUJXLTFLZSGRAYERPWDJAPQUZIDCBISPCKKVYTYJZFBDAPRSDCZNQQYSGYAWUFOVGGEDHOLYHTIQMOAWJGIESUFCRFYNOHZTEZRBMDRRCNSBZLWTCDWZBLBKUJSHJIVURMONAMOQSGYJXQIBUJWIXTDMHXWQTEEPWTEFFIZKDHBHH");
    msg.timeout = 58084U;
    const char tmp_msg_0[] = {24, -40, -8, 21, 18, -116, -32, 99, -55, 125, -92, -108, 5, -29, -65, -79, -85, -10, 106, 49, -103, 85, 110, -84, -28, 123, 41, -65, 0, 22, -91, -107, 117, 54, -57, 40, -88, -19, -51, 91, 20, 28, -10, 70, -34, 68, -11, -125, 63, -121, -127, 51, -107, -45, 23, 45, -104, -98, 105, 29, 57, -29, 33, 100, 28, 105, -9, 87, -61, 28, -127, -88, 23, 122, 0, 60, -23, -20, 62, 34, -37, 25, -8, -72, 75, 8, 17, 99, -75, -51, -63, -32, 113, 46, 30, 34, -77, -26, 7, 19};
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
    msg.setTimeStamp(0.160507039698);
    msg.setSource(18397U);
    msg.setSourceEntity(130U);
    msg.setDestination(51199U);
    msg.setDestinationEntity(210U);
    msg.source.assign("LRIQBBYXHKDFHPLPDSMONBMRZOEKYWIWNNTXPPZUYXVMLUEQJOTVNFZSSQECLDXXRRLNKHGRUWSBGCSJAAHUZJIVBKTGDDGV");
    const char tmp_msg_0[] = {121, -101, -83, 42, -126, 124, 14, 24, 20, -72, -84, 117, -79, 29, 80, -9, -31, -124, -18, 52, 84, -128, 23, -91, -14, -26, -44, 121, 113, 72, 121, 101, 122, -98, -61, -14, -115, -28, 112, 29, 69, 122, -46, -94, 29, -103, 103, 90, -66, 22, 12, 57, -64, -88, 32, -36, -125, -10, -84, 44, 78, 30, -6, -93, 11, 23, -15, 79, -76, 4, -17, -123, 33, 90, 44, 92, 54, 91, -40, 7, -70, -77, 112, 24, -126, -71, -33, 38, 102, 47, -96, 83, 7, -70, 14, -87, -66, 51, -6, -1, 44, 116, 68, -128, 13, -95, -3, -68, -34, 117, -8, 44, -54, -57, -125, 91, -108, 47, -31, -51, -30, 17, -75, -32, -89, -11, 73, 117, 42, 56, 73, -86, 22, -36, -30, -34, -59, -55, -87, 74, -112, 96, 87, -77, 108, 32, -23, -118, -120, -7, 21, -121, 86, -18, -84, -89, -39, 30, 123, 43, -46, 95, 88, 121, 33, -64, -58, 49, 60, -83, -73, 67, 8, 97, 116, 21, 104, 81, 77, 46, -61, -91, 9, 33, -74, -98, -67, -123, 123, -60, 97, 98, -61, -36, 60, 125, -59, -81, -118, 9, -96, -106, 88, 75, 43, -94, -27, -8, 77};
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
    msg.setTimeStamp(0.126740532842);
    msg.setSource(39004U);
    msg.setSourceEntity(36U);
    msg.setDestination(46953U);
    msg.setDestinationEntity(12U);
    msg.source.assign("RPGCMROXFSHJUGRWCKZOQUAWQNVZQGZAAMXZQEYDCBEFUBOHQFFMRHTEXNZXAVBZHVYOPTRYRQPUNEXSGYPZZPWTGXWIOIOXJLCCGKGEADK");
    const char tmp_msg_0[] = {-127, -77, -1, -113, 37, -79, -101, -92, 73, 24, 82, -102, 74, 84, 125, 62, 31, 12, -120, -34, 56, -26, 6, 24, 33, 69, -109, 91, -71, -23, -14, 90, -122, -35, 116, -3, 119, -23, -70, 28, -47, 80, -34, -52, -117, 54, -11, 47, -9, -96, -2, -33, 11, -103, -15, 64, -102, -98, -19, -22, 0, -83, -116, -47, -51, 107, 49, 52, -37, 61, 20, -41, -86, 15, 53, -113, -5, -63, 40, 45, -34, -102, 28, 54, 90, 50, 93, -94, -74, -128, -87, 119, -19, -97, 91, -15, 38, -53, 59, 12, -51, -76, 52, 91, 59, -77, -15, 109, 27, 67, -16, -106, 113};
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
    msg.setTimeStamp(0.302131920046);
    msg.setSource(3368U);
    msg.setSourceEntity(207U);
    msg.setDestination(2214U);
    msg.setDestinationEntity(39U);
    msg.source.assign("GYIUPCFXSOZWGCASZIZPAIGHTVXHMGTNQNLRAFONVESCODZUKZGWIXUOIRPHPLVTIMBDQLWHAFEAVBWBDCKXFKWKTJRESFQYPXGEJEZFCSAVVNSZDETSNPSHLCPJRMDKVQHIYXGNAJLXKMSDBRYTCRJOCEWURJQN");
    const char tmp_msg_0[] = {68, 23, 113, 7, 15, 106, -4, -40, -10, 28, 16, -7, 57, 73, -128, -119, 29, 63, 47, -116, 69, -19, -11, 123, 69, 119, -96, 54, -118, -77, -60, 23, -46, -106, -120, -47, -5, -31, 39, -48, 46, 26, 87, 46, -40, -42, -102, 97, 22, -121, -87, 125, -35, 43, 37, -75, -101, 75, -43, 95, -50, -46, 94, 43, 96, -8, -113, 53, -70, 47, -128, 51, 78, 59, -17, 29, -16, 94, -96, 96, -10, 17, 23, 95, -81, 14, 63, 74, -23, 21, 57, -25, 14, 4, 50, 33, -104, -60, -108, -52, 33, -57, -35, -127, 113, 106, -61, 27, 58, 26, 120, -16, 100, -60, -11, 52, 17, 58, -32, -92, -47, -65, 56, 37, 11, -88, -25, -30, -19, 113, -56, 44, 26};
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
    msg.setTimeStamp(0.485978790581);
    msg.setSource(62170U);
    msg.setSourceEntity(149U);
    msg.setDestination(35057U);
    msg.setDestinationEntity(26U);
    msg.seq = 2745313944U;
    msg.state = 244U;
    msg.error.assign("UNMINCKSITXTVMMONTMKLYQWRBWEPRLISEZAVLYXLVLLUCIZPJDHWKQJJXHFHEXAQVGXUXTBITVJSIAHWKHHCFEZEUIKTUDTULZJSEMRKPZCLZPGCNYDOJGFGPORQBYPEQRDYMDLVEBOQSNSRGAVCHZIZFO");

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
    msg.setTimeStamp(0.827877587141);
    msg.setSource(7190U);
    msg.setSourceEntity(216U);
    msg.setDestination(18061U);
    msg.setDestinationEntity(196U);
    msg.seq = 4199954326U;
    msg.state = 0U;
    msg.error.assign("PAMFDWEGXQCXMRYMRNUHJ");

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
    msg.setTimeStamp(0.854106681248);
    msg.setSource(61292U);
    msg.setSourceEntity(249U);
    msg.setDestination(28804U);
    msg.setDestinationEntity(237U);
    msg.seq = 2054235121U;
    msg.state = 230U;
    msg.error.assign("PWCMTRLSWIVZCQBSYTFWASUZGDAQYGLHIJYNKIXRWHXJNPKFJZQONQORHPEGXAVNBTJKUUMRXMBBNPEYHDLCMFZVRMLGAECCJMEEKJULRMGHLEIMBWQBWJPWUEQIVDLSTRXAGIDOKXOAXOHWSGNDELTYSZCHKUKWFJTAXXBKSTTIPFEMPHFKDUVOIGYNZYFNIHVQFVFSIQDJBOZBJV");

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
    msg.setTimeStamp(0.744076059849);
    msg.setSource(34399U);
    msg.setSourceEntity(58U);
    msg.setDestination(54179U);
    msg.setDestinationEntity(4U);
    msg.origin.assign("LUFJXOKWWZVRNQPNKCEXKLWKSHGSYTJJVSFDVTXIQRLERXUCE");
    msg.text.assign("HQMHTWHYXSZORSLHGQEOPIWVOEVPEBSWJAGZHCQPOXYVKOFDAVWGSTNTBRGFGLSNZCYKCPKUHHTNMWRMXMSAFAUKMIBAUQFAWXWEIBCOSZIYXDQUVHRKMRICDDYBCEJSZMFRQMWMDIKFSUBJKRNRWIBJQDIEGTZNFVOZAZNYIYELEXJRA");

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
    msg.setTimeStamp(0.555204083064);
    msg.setSource(45474U);
    msg.setSourceEntity(179U);
    msg.setDestination(6114U);
    msg.setDestinationEntity(12U);
    msg.origin.assign("RYYMXSRBLXAXWDIXCOSOHEQJFKQFRPTOXOVIBHFTWBHJEGFXGUUQKVNIIHXYMYYULCTXTJARPRGQRQEGZRBDTQUMDIJUHJFPANSJHWMLVWDZOHCRCL");
    msg.text.assign("RMNDZXEYTATWQBAUETJLWQCLRFOAHEUQCBXMYWBBPFEBONGKODYEHTQXHKSLIKTYJZJUIJSJHZNCOMZNVVPINSAZKOXCRESPJAPVRPLNYQYNICJRPXDTRUGNFKFAEGFDLMSKBPWYBDCGYHXDSSFIMIDHR");

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
    msg.setTimeStamp(0.622772705361);
    msg.setSource(60640U);
    msg.setSourceEntity(119U);
    msg.setDestination(31105U);
    msg.setDestinationEntity(218U);
    msg.origin.assign("CXZDQYADLTAIKUQZNMPUKLDOGCEEYNRDSBBCVNPZVRFZZQLCPBERYWUEGJRVDXKCFBARMHUQUXYLGTBXCIWMUEFQKQPUHSSREVSVZKSOOSPILJXWPIRWOSL");
    msg.text.assign("IDQQJWXVLNRTOQGXMTSWHFWYQYHHKUOFXFKRLQCONIGICBCKEGXROAXFTTTWEMBEZJOVWXPRLAZIBFJYHVCLJXNMGDYBUDCBTRUDILOFCKLQKDCHPLNDAVYNVUQZYEEOZSZOSJNZZMKYJEUTLHSXLCAAHJGPQHIF");

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
    msg.setTimeStamp(0.3275546529);
    msg.setSource(15349U);
    msg.setSourceEntity(114U);
    msg.setDestination(230U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("UZUGNLEANWSXRLODUJWMXGHAJVNUHCROHBQYASTTCRBKPSEUBEFZJXTIWUJJVGJYSMDTGXODJHEFFMNG");
    msg.htime = 0.602974550729;
    msg.lat = 0.671352237772;
    msg.lon = 0.30828062198;
    const char tmp_msg_0[] = {19, -27, 111, -108, 85, -44, 27, 82, 0, -122, 81, -84, -37, -32, 9, 11, 53, 52, 42, 121, -16, -118, -85, -81, 6, 77, 68, 35, 9, 96, -65, 114, 33, -127, 125, -41, -79, 22, 118, 125, 105, 56, 112, -19, -97, 10, -106, -37, 15, 113, -7, 101, -34, -61, -72, -99, -41, 40, -38, 58, 13, 74, 55, 79, -77, 24, 64, -3, -27, -39, -115, -22, -20, 46, -91, -126, -114, -106, 69, 116, 22, 36, 86, -121, 46, -32, 60, 106, -10, 118, -94, 110, -122, -54, 118, -28, -83, 124, -113, -46, -6, -86, 84, 40, -89, -31, -63, -8, -38, -15, 105, -122, 93, -61, -26, -64, -91, 15, 93, -12, 124, 54, -97, 46, 80, -14, 102, 66, 5, 18, 124, 116, -47, -26, 14, 29, -36, -107, -67, 26, -109, 80, -92, 93, -112, -121, -62, -37, 79, -61, 35, -127, 30, 103, -109, 36, -122, -69, -120, 88, 43, -115, -113, 23, -12, -98, 79, 118, 106, 46, 97, -8, -82, -51, 113, -61, 109, -102, -72, -58, -121, -6, -13, -53, 83, 72, 73, 46, 47, 8, -60, -21, 35, -96, -4, 75, -62, -35, 86, 51, 58, 69, -23, 77, -3, -79, 92, -86, -1, -102};
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
    msg.setTimeStamp(0.0227969337895);
    msg.setSource(3903U);
    msg.setSourceEntity(173U);
    msg.setDestination(26611U);
    msg.setDestinationEntity(200U);
    msg.origin.assign("IVZTKSGDOBLWYMIURUVBWXJAHQCLWCCJDYFTXQQYUVUSATRKRACNJGOSCADLVMKWP");
    msg.htime = 0.289870285639;
    msg.lat = 0.868612245978;
    msg.lon = 0.695840017863;
    const char tmp_msg_0[] = {-105, -90, -105, -116, 24, 126, -32, -74, 4, -12, -66, -92, -71, 72, -59, -33, 26, 39, 17, 19, 0, 14, 74, 34, 30, 96, 64, -11, 81, 113, 37, 52, 16, -120, 111, -44, 59, -64, -84, 1, 57, 117};
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
    msg.setTimeStamp(0.827810377631);
    msg.setSource(54263U);
    msg.setSourceEntity(168U);
    msg.setDestination(53743U);
    msg.setDestinationEntity(216U);
    msg.origin.assign("UJZTCCATRFBWGOFNGELZKDXTCGJVZGDVYQAIWPLUPVAVAFJRFIMUCPLSMSHJKIEOQYDWJOPOZJXRMKCSGPEQHEWXOLXBHPQSIA");
    msg.htime = 0.380015711;
    msg.lat = 0.190951756343;
    msg.lon = 0.825382804929;
    const char tmp_msg_0[] = {70, 3, 88, -50, 47, -31, -76, -46, 45, 85, 116, 36, -107, 36, -34, -69, 63, -35, -33, -104, -88, 94, 94, -16, -46, 106, -17, 16, -118, 124, 63, 100, -52, 46, 112, -87, -127, -18, 126, 6, 14, -26, 56, -71, -112, -53, -97, -119, 31, -22, 38, -40, -50, -59, 119, -30, -104, -61, -25, 32, -71, 72, -42, -9, 40, 62, 81, -58, -35, -116, -1, -81, 4, 11, 58, 13, -88, 94, -51, -44, 121, 62, -21, 28, -115, 58, -35, -59, -33, -108, -120, -3, 6, 45, 72, -113, 93, -103, -116, 67, -43, 27, 90, -42, -51, -19, -63, -118, 117, 40, -39, 121, -114, -112, 28, -52, -95, -73, -29, -93, 103, 64, -118, 74, -37, -80, 15, 55, 61, 116, 8, -109, -37, -33, 92, -105, -108, 61, -47, -101, -117, 84, -1, -34, 93, -42, -106, 57, -126, 14, 124, 15, 40, 80, 12, 69, 70, 62, -72, -13, -58, 82, -44, -111, -14, 29, -51, 33, -61, 50, 87, -72, 14, 104, -99, 46, 111, -80, -53, -55, -51, -122, -30, 70, -69, 23, 116, -60, -90, -39, -54, 20, 18, -12, -96, 110, -35, -77, -46, 74, 101, 97, 57, 66, -103, -42, 64, -41, 10, 73, 9, 99, -119, 26, 108, 106, -76, -38, 41, 51, -116, -43, -86, 89, -19, -3, -117, 75, -15, 50, 120, -15, 0, -47, 126, 99, -24, 111, -57, 8, 5, 36, 48, -27, -30, -16, -19, -32, -104, 103, -6, -27, 115};
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
    msg.setTimeStamp(0.902686074569);
    msg.setSource(4006U);
    msg.setSourceEntity(93U);
    msg.setDestination(16516U);
    msg.setDestinationEntity(11U);
    msg.req_id = 30494U;
    msg.ttl = 1464U;
    msg.destination.assign("HPTCNDGOEMALNJENYHUCRJQWISGHYXABSKMYWDKKVPRDPVHUVRFXCIRYXDLRTZTIUFJUWQVFJQJKQLBAZQMRHPJMSWACCUAKXEGWMPKBUHGVFQGBOOTZSCOYXSVAHWFYGDCXLLNMTPKTLGHYZDQXGAEARDZWEKHIGDPBVNJN");
    const char tmp_msg_0[] = {44, -87, -96, -56, -104, 60, -81, 97, 70, 88, 121, 11, -105, 87, -85, -65, -88, -94, -26, -21, 0, 52, 88, 90, -27, -110, 80, 3, 33, -34, -103, 116, -58, 33, 3, 115, -59, -39, -105, -62, 19, 117, -90, -121, -90, 52, 113, -56, -23, -122, -61, 31, 59, -125, -11, 19, -104, 118, 124, 52, -123, -39, 53, -121, -13, 43, 0, -79, -102, -44, -106, 87, -14, 113, -89, -60, -38, -59, -128, -127, 32, -106, -71, -1, -16, -49, 61, -59, -109, 75, 18, -127, -84, -3, 107, -17, -71, 38, -16, 97, -82, -56, 37, 109, 83, -66, -18, 21, 105, 118, 17, 5, -127, -91, -38, 58, 18, -111, -20, 2, 34, -40, -113, -103, -11, 67, -80, -128, 11, 126, -20, -102, -83, 50, -1, -107, 90, -123, -61, 104, -76, -51, 112, 4, -1, -15, 107, -18, 95, -23, -125, 101, 22, 22, 43, 60, 88, 37, -122, 42, -104, -12, -123, -28, 58, -124, 123, -68, -87, -51, 0, -61, 79, -84, -62, -114, 37, -89, 4, -58, -76, -102, -93, 59, -90, -55, -53, 75, 103, 19, -69, 56, 87, -63, 105, 64, 45, -94, 85, 117, -34, -51, -61, 59, -72, 107, 93, -31, 39, -36, 50, 32, 102, -128, 36, -79, -127, 48, -113, -99, -22, -72, 30, 30, 81, -70, -71};
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
    msg.setTimeStamp(0.936519316854);
    msg.setSource(47924U);
    msg.setSourceEntity(36U);
    msg.setDestination(52811U);
    msg.setDestinationEntity(104U);
    msg.req_id = 755U;
    msg.ttl = 22737U;
    msg.destination.assign("NMOJADMABTSNLPZSPIPAZAXJWHELUUFRDGXCNSXEJQJXRDHFSKATPHIOZMIQUGDLQGXKYLVVEODSYSJAOEYECFBGWFSKKA");
    const char tmp_msg_0[] = {-57, 21, 8, -88, -76, -65, 74, -20, -15, -13, 1, 126, -13, 75, -6, -19, 113, -128, 38, 24, 123, 115, -46, 8, 35, -99, -7, 112, -126, 22, -113, -49, 120, 89, -104, -16, 83, 63, 25, 57, -49, -70, 17, -76, 89, 57, 32, 113, -73, 8, -125, 118, -53, -8, 70, 25, -110, 120, 83, -86, -86, 57, 110, -7, 126, -91, 53, 42, 58, -65, -116, 7, 78, -86, -92, 109, 100, -19, 35};
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
    msg.setTimeStamp(0.398183621168);
    msg.setSource(31938U);
    msg.setSourceEntity(18U);
    msg.setDestination(54594U);
    msg.setDestinationEntity(27U);
    msg.req_id = 3228U;
    msg.ttl = 39550U;
    msg.destination.assign("XMNOBPTWBBYUKQWMZKWQHVEHKIXRAGQDRESSNIAFVSSTRTIXCFJWLZRCVPEXHVSYLGFUHUOHEDLF");
    const char tmp_msg_0[] = {-25, 10, 67, -102, -70, 92, 116, 108, 71, -123, -36, 47, -49, 125, -87, -87, -38, -66, -30, 2, -110, 123, -11, -127, 78, -23, -107, 57, -13, 120, 55, 96, -56, 42, 90, -29, 112, -21, 122, 5, 24, 53, 23, -73, 116, 62, 19, 87, 23, -128, -32, 115, -31, 69, -83, -49, 49, -126, 50, 106, -32, -58, -27, 62, 71, -83, -52, -26, -77, -62, -14, -49, -16, 50, 39, -122, 108, 122, -113, 113, 67, 82, 65, 72, -103, 121, -58, 19, -41, 22, -63, -102, -24, 52, -41, 27, 113, -34, -47, -100, 112, 2, 55, 8, 52, -90, -2, -3, 93, -9, 9, -47, -96, 71, 55, 53, 22, 78, 66, 29, -15, 0, -14, -20, -71, 76};
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
    msg.setTimeStamp(0.322319598226);
    msg.setSource(7756U);
    msg.setSourceEntity(39U);
    msg.setDestination(28975U);
    msg.setDestinationEntity(200U);
    msg.req_id = 817U;
    msg.status = 86U;
    msg.text.assign("GLXWHJGELIVFRJVZNKIWFSOFMXRNKRTKDLEZKEAZGXIOHSKUXDXDGVWBBSWCCNYBJQHOBHUWCQEGMEPUQXTGFCSDQLATWWNHUOVFPAXDPRYKCJOYCQADMXTUMTBMFPRUIJWLVUXAIQRIMGTAANTIQCOPANPJSMRSQTVMUVVWJ");

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
    msg.setTimeStamp(0.21605906825);
    msg.setSource(45793U);
    msg.setSourceEntity(244U);
    msg.setDestination(40768U);
    msg.setDestinationEntity(158U);
    msg.req_id = 13449U;
    msg.status = 78U;
    msg.text.assign("QXSQJHUWCUYJLXAYROBOFMOQKYDUYTCVKCNLTVAGHXRPZIGRKLNYZNDNUGARZFTHKEZPCQYDBXSDQENEGOJXVDMMQWZWIFFVCPMOWEHRKBHZAXBXHSGWQOCJLSHPJUMFGBIJILGQGEISLUSDNNVMVZAPNJPLPWCBTSTIPPANOIBUZFMRYKAUORHZKWKBVTNRTEFAGXSLU");

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
    msg.setTimeStamp(0.0186784232477);
    msg.setSource(4779U);
    msg.setSourceEntity(243U);
    msg.setDestination(3420U);
    msg.setDestinationEntity(59U);
    msg.req_id = 59356U;
    msg.status = 221U;
    msg.text.assign("ZKNDZZXWJIKGJGLFDNGOBYYNOHXTYLIKUKFBJSIRPZGCENXPROYHFIULVTRIFSEBARPYVQLXBYY");

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
    msg.setTimeStamp(0.833836439491);
    msg.setSource(52499U);
    msg.setSourceEntity(133U);
    msg.setDestination(57974U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("ABWFZSWQZYNAZQKJHYOMFDPBQGEYEERMIWMEJHMNXZNSEFOWHGJBYYSOLULRNMXAHKCUIJHJAWHIXXCCTOYTKPFNTIIKUYSTFMMJVJDWNOFFOBVPXOKEHBIYRFFRPSDLSVVQBZLCUEDTGYTLVDLGURGKIXXRAAQGSLTIULGNVUKPAKKWHBPPBDALSUHGTZGVUFOZXZYSQNZAQRQO");
    msg.links = 224735317U;

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
    msg.setTimeStamp(0.774381980143);
    msg.setSource(39587U);
    msg.setSourceEntity(136U);
    msg.setDestination(25557U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("GXLMFMBEPHQBEHRNUQNJDNFWMZOKWLUTAZVVSSOCQYXMYTZFIARGWAXUKLYKILHNDSUOWCJMKTPYNPKKGVRJLTKVQFHGXGEQOYKQXJHCLZCSDOW");
    msg.links = 618772891U;

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
    msg.setTimeStamp(0.603719735096);
    msg.setSource(45255U);
    msg.setSourceEntity(55U);
    msg.setDestination(26127U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("NFSRGRNZKUQHFJVDEKWEIGXLLWKYSXFABAZDWOURLEIZJNFGXQGPCRTDTEBYHRBPPJWJVKATNMZRWAIBOPBWZSALHGOACRBXKCUHIUVJZEYZPPDYVMBHHWRBTCVNN");
    msg.links = 3910018118U;

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
    msg.setTimeStamp(0.621726571071);
    msg.setSource(40293U);
    msg.setSourceEntity(140U);
    msg.setDestination(8272U);
    msg.setDestinationEntity(226U);
    msg.groupname.assign("HPRDINAJLDCOAEWQFZEFQEHAGUOANQBYSCRXZIHVIDEBILMTDKLBPGOQUHNVOWWCGYXCZXKPGXFZTKIWDQJNAWGMVRRNRZVJFOLZHKRYVSAHSKBCQOWPDPZVNCMLIKSYONRFMPBJTHDKITZTAHFVAQCQMMLGYGCZTHHEBOLJYAXJYTXWTVUMKSGSBUEQPTMNCQUEMUIKRBGFJB");
    msg.action = 181U;
    msg.grouplist.assign("XAIIVLISXXTFVIWKKLRYSOIRMKEYEYMYYWIOOLUEDGQGGGJGXMMOHCBHJUGJMCZYDCMUAYDVVXPNQTPJUVIHKDMQZDIKOWALBKYNZSUVOKQPZSPWXWAAMBTTPPDGVVFUEFTNNNPBIEJOMCTXMFBFPVHDCWRQJXLSENAHHTKCUCSLCEARGOERWFSDUZLELXHHCDBFKJXJOQWQBVJAHFACUGSLBTDRHZFSPQURTQYPNYSOBIQKWFLWZRTR");

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
    msg.setTimeStamp(0.157928107597);
    msg.setSource(3089U);
    msg.setSourceEntity(177U);
    msg.setDestination(40840U);
    msg.setDestinationEntity(22U);
    msg.groupname.assign("ZBHGSFWJRHUCWDFOJXIVGJVIMQECQVESIBTTBXPJKOUTSNTSNKMOWUSGCWFSZOPQECAYARUPYGMQZIGFIXWVHDKFPJBARGKYVUWJOJINKBAPTZGQXVRTULRVHKVABNHDLFNFLMUTHMILAKIDSLMDTERYPHAUSMJETEFPLLCLGZDQZQONNYRXKNMQTWMZHOBYIS");
    msg.action = 111U;
    msg.grouplist.assign("FNWNSJKXVMIYMHYBES");

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
    msg.setTimeStamp(0.36004727707);
    msg.setSource(7196U);
    msg.setSourceEntity(3U);
    msg.setDestination(46041U);
    msg.setDestinationEntity(24U);
    msg.groupname.assign("JBWUWMIYGDFPETNPLBRVUJCASZNLBRKYWITITEFVQFVYEVYIECHOIC");
    msg.action = 56U;
    msg.grouplist.assign("YIVTJAQBLHGZHBDDKZEHDUHBG");

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
    msg.setTimeStamp(0.281733989239);
    msg.setSource(40905U);
    msg.setSourceEntity(197U);
    msg.setDestination(5735U);
    msg.setDestinationEntity(210U);
    msg.value = 0.425136109018;
    msg.sys_src = 20470U;

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
    msg.setTimeStamp(0.807989255195);
    msg.setSource(3266U);
    msg.setSourceEntity(175U);
    msg.setDestination(31218U);
    msg.setDestinationEntity(209U);
    msg.value = 0.603072956506;
    msg.sys_src = 16401U;

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
    msg.setTimeStamp(0.394529961218);
    msg.setSource(33064U);
    msg.setSourceEntity(15U);
    msg.setDestination(3783U);
    msg.setDestinationEntity(117U);
    msg.value = 0.691477072498;
    msg.sys_src = 51370U;

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
    msg.setTimeStamp(0.947549264726);
    msg.setSource(33153U);
    msg.setSourceEntity(79U);
    msg.setDestination(25809U);
    msg.setDestinationEntity(166U);
    msg.value = 0.12505386273;
    msg.units = 239U;

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
    msg.setTimeStamp(0.820224384323);
    msg.setSource(15119U);
    msg.setSourceEntity(137U);
    msg.setDestination(6726U);
    msg.setDestinationEntity(252U);
    msg.value = 0.817073847515;
    msg.units = 125U;

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
    msg.setTimeStamp(0.320187072656);
    msg.setSource(17250U);
    msg.setSourceEntity(194U);
    msg.setDestination(30152U);
    msg.setDestinationEntity(21U);
    msg.value = 0.480358509781;
    msg.units = 88U;

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
    msg.setTimeStamp(0.69196811533);
    msg.setSource(52348U);
    msg.setSourceEntity(82U);
    msg.setDestination(56950U);
    msg.setDestinationEntity(55U);
    msg.base_lat = 0.0760740294227;
    msg.base_lon = 0.362422046762;
    msg.base_time = 0.39579902851;

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
    msg.setTimeStamp(0.482403667597);
    msg.setSource(61137U);
    msg.setSourceEntity(114U);
    msg.setDestination(47301U);
    msg.setDestinationEntity(130U);
    msg.base_lat = 0.523360276089;
    msg.base_lon = 0.746138454051;
    msg.base_time = 0.170493045213;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 64303U;
    tmp_msg_0.destination = 49909U;
    tmp_msg_0.timeout = 0.175790351485;
    IMC::AirSaturation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.201828697892;
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
    msg.setTimeStamp(0.610724165753);
    msg.setSource(12423U);
    msg.setSourceEntity(227U);
    msg.setDestination(52911U);
    msg.setDestinationEntity(131U);
    msg.base_lat = 0.00934785291919;
    msg.base_lon = 0.868869197674;
    msg.base_time = 0.671055499077;

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
    msg.setTimeStamp(0.890880082303);
    msg.setSource(27972U);
    msg.setSourceEntity(7U);
    msg.setDestination(12133U);
    msg.setDestinationEntity(90U);
    msg.base_lat = 0.497905295353;
    msg.base_lon = 0.629062492133;
    msg.base_time = 0.604426119536;
    const char tmp_msg_0[] = {-83, 90, 55, -109, 89, 77, -108, 32, 84, -26, -73, -81, 23, -36, 49, 20, -96, 85, 58, 71, 44, 6, -3, 25, -37, 96, -83, 97, 20, 47, 8, -120, -107, -20, -25, 57, 40, -64, 52, 78, -107, -59, 12, -17, -46, -100, -127, 39, 125, 55, -86, 90, 9, -110, -112, 72, 79, -44, 23, 34, -83, -27, -76, 36, 50, 8, 119, 41, -30, 51, 109, -115, 58, -60, 94, -73, -49, -113, 116, 8, -66, 78, 12, 33, 35, -127, -74, -72, -59, -123, 34, -72, -92, 20, -48, -84, -79, -53, 93, 106, -26, -32, 43, -110, 81, -73, 87, 73, 76, -93, -99, 55, 71, -67};
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
    msg.setTimeStamp(0.968551365229);
    msg.setSource(4352U);
    msg.setSourceEntity(159U);
    msg.setDestination(21312U);
    msg.setDestinationEntity(108U);
    msg.base_lat = 0.135308999029;
    msg.base_lon = 0.416956690492;
    msg.base_time = 0.355421586148;
    const char tmp_msg_0[] = {-112, -53, -126, -56, -82, 7, -35, 92, -113, 85, 103, -125, 70, -16, -119, -2, 72, -4, -16, 89, -41, -100, 38, 42, -88, -85, 102, -51, 36, 23, -59, -93, -38, -88, -64, 30, -68, 59, -57, 33, -128, -63, -11, -98, 66, -84, 103, -77, 104, -98, 37, -38, 34, -104, 13, -126, -102, 50, -61, -86, 108, -48, 3, 85, -29, -114, -58, 5, -92, 51, 35, 17, -126, -109, -1, 113, -57, 87, 63, 51, -38, -70, -124, -49, -117, -64, 126, -31, -55, 5, 36, -6, -43, -15, -66, 112, 126, -6, -34, -128, 68, 25, -58, 21, -98, 117, 58, 84, 69, 101, 13, -20, -30, 14, 31, -128, -26, 10, -123, -126, -18, 89, -19, -69, 124, -61, 103, 107, 35, 102, -44, 79, 58, -110, 67, -117, -93, 17, 110, 97, -33, -116, -82, -6, 21, -31, 116, 105, -93, -11, -7, 112, -33, 82, 94, -76, 82, -122, -14, -23, 120, 66, -120, 101, 43, 59, 100, -128, 49, 105, -93, -36, 82, 74, 120, -89, 8, -38, 121, 60, -1, 22, 98, 118, 23};
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
    msg.setTimeStamp(0.754919966952);
    msg.setSource(57807U);
    msg.setSourceEntity(130U);
    msg.setDestination(16658U);
    msg.setDestinationEntity(248U);
    msg.base_lat = 0.512396891337;
    msg.base_lon = 0.81456499889;
    msg.base_time = 0.926301535229;
    const char tmp_msg_0[] = {-2, 13, -31, 9, 78, -30, 8, 1, -42, -38, -16, -119, 23, -82, 23, -122, 79, 28, 45, 95, -55, 114, 17, 78, 67, -81, -12, 54, 17, -121, 64, -118, 19, 102, 35, 66, 46, -25, 91, -48, 49, 50, 85, 121, -89, 106, 81, -66, -32, -106, -112, 89, -79, -28, -46, 50, 91, 105, 106, -8, -92, 3, 123, 83, -75, -123, 24, 99, 21, 80, 94, -19, 52, -51, -14, 80, -122, -58, 77, 26, 64, 50, -36, -37, 27, -52, 90, -46, 79, -74, 61, -1, -8, -60, -110, -54, 0, 47, 44, -26, 30, 31, -20, -92, -83, 26, -40, 49, -60, 126, 117, -68, -12, 117, 31, -10, 19, 88, 93, -50, 33, -76, 45, -13, 36, -106, 26, -124, 115, -43, -10, 96, -75, -75, -99, -110, -107, 111, -115, 56, 27, -2, 81, 6, -104, -9, -126, 71, 53, 23, 38, -31, 118, 30, -24, 36, -27, -80, 17, -44, 78, 41, 1, -1, 75, -2, 28, -40, -81, -88, 95, -92, 1, -119, -100, 101, -44, 25, -11, -84, 6, -9, -82, -97, -116, -100, 19, 122, -70, 43, -56, 77, -115, 115, -6, 39, 97, -8, -95, 103, -113, -73, 10, -45, 71, 47, -47, -111, 22, 91, -89, 102, -41, -88, -121, -87, 18, 37};
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
    msg.setTimeStamp(0.815088149718);
    msg.setSource(46205U);
    msg.setSourceEntity(200U);
    msg.setDestination(55953U);
    msg.setDestinationEntity(63U);
    msg.sys_id = 37102U;
    msg.priority = 114;
    msg.x = 20725;
    msg.y = -19232;
    msg.z = -15239;
    msg.t = -15931;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 34121U;
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
    msg.setTimeStamp(0.265491302575);
    msg.setSource(16771U);
    msg.setSourceEntity(145U);
    msg.setDestination(55700U);
    msg.setDestinationEntity(97U);
    msg.sys_id = 739U;
    msg.priority = -9;
    msg.x = 3571;
    msg.y = 27351;
    msg.z = -12290;
    msg.t = -19095;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("PDANDKKIHCJQMABDHTHXWSEKYGMMRGEQZGRSDNGNPLTUSWUVRXEZCBLMROVY");
    tmp_msg_0.reference_frame = 73U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 22099U;
    tmp_tmp_msg_0_0.off_x = 0.722808358944;
    tmp_tmp_msg_0_0.off_y = 0.0787043968686;
    tmp_tmp_msg_0_0.off_z = 0.451451623994;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("RPZQHWMDUUNFECOZIOFWYATIAKYYNQXOVQHMNOXZEMQROXHPWGILYWHVKQLJTIMKFZGJSXQEAQLQFWNSSHETXBCPVYJCZJAKREHBEKMUMORULYDUZIUFKXJYCEYSRMFLKAWNKLOEZCBUWGNPXVQTOXEMDJIPSVIAHTDDDSZMPASBYDBFDRLEPQCBWGGNLNJALJRTVLNVAF");
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
    msg.setTimeStamp(0.410270265537);
    msg.setSource(44193U);
    msg.setSourceEntity(244U);
    msg.setDestination(29426U);
    msg.setDestinationEntity(186U);
    msg.sys_id = 8724U;
    msg.priority = 42;
    msg.x = -24287;
    msg.y = -21886;
    msg.z = 29602;
    msg.t = -9087;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 218U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("AOWFHXNBLVSINCDALEDFFWSJPDZNOJUYGXONRDTRLLQZUWNMEQWIWM");
    tmp_tmp_msg_0_0.description.assign("HGHMSVQAKMUXPPHICFZLAEIEFWFQWEAPGAOZBGECMHCYPUNQNDEMCAYKILSXVUDUTLJCTQXPJDADCWUXJPKILRNTEYJHPUWKVGRRYIKXYTXBFWBHMZTSFOQTSAJFKOLUUOKWDVMYKBSJLBTDLIFLXEYAWBTROUVGWZNRVZNLDAVRCBVDCCPGFMJH");
    tmp_tmp_msg_0_0.vnamespace.assign("ZCKIPKFKXXVCHJNXYBZWPNOVRVPPPMLUVIHHOSEUYQONUMWRLRTDAJLDLVEIYMDNEEORFKWAXGGXFASUFXDNYJMNTITSWZZGMKGUCMLYNLAEBDJDMBRBMASQYOJSCZIGRGCZXNTQLQFILSXOIHWAYRFOAWKAPGJQBIMHMEGGQEK");
    tmp_tmp_msg_0_0.start_man_id.assign("AKPGUABDGKDUHRLCANCMLYHFCSWQHTVINNPTIVJQFENNWTFKJTTKBERODZLJBFECKVBWWSXMOGOQCUJCYZLGTDWLSIAWUAAWZSBZFMFUPWUENBEDRGSPQOIJTCGGEDXSYDURIXEMTOAVRIDHOLDLXOXKVTYVHZQVXZGASWHAJPKCMZEPNABPQXCUMOGSTLMPHFQ");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.source_man.assign("KSCKJPXPBJEGXXGKWSJGEVUTFQSNGJQFMZYYBIEJULSQENIIEECYFEHGMVWOHYVATDUQHQPZKAABAOZNXPAESOZCRNZGDUSFHWLSQKNAOLURGTMFYLIOBBYZWHWBFXZRKRSVPCVVILCXXUBLOAXKMDRCDCQVZWHXDXHVQESHPDBODKHIQAII");
    tmp_tmp_tmp_msg_0_0_0.dest_man.assign("CPKBZBWPBHQWYMTHKZIYZXUJWVNBKDADOHJDYCUESMFOUVVWGFLECQZSHTEXIVGRRMPSESOVXICHKTLBJDFTNLVPWNLNWVEFMQIRMKYOAPNFJOKDRUBDGIKNYUNSUMQVZAAJPUBSAEHRTXTRUXBJRHRUEYQYVNMJUJCXXZEGQGTFESPMONRZONLIKYLIQYGAXSQPZWDIHVDOMA");
    tmp_tmp_tmp_msg_0_0_0.conditions.assign("IAYYJEQNKJPKWZLOJVTGZPXHASNEOCQQEWRBJYFWGSTUXLSOLACXKUPXPLYPDCLTDYDSZFMBFXMIPQVIIWGPGU");
    IMC::QueryPowerChannelState tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.669440123449);
    msg.setSource(60205U);
    msg.setSourceEntity(200U);
    msg.setDestination(48993U);
    msg.setDestinationEntity(43U);
    msg.req_id = 33901U;
    msg.type = 73U;
    msg.max_size = 6344U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.830397052678;
    tmp_msg_0.base_lon = 0.541409023051;
    tmp_msg_0.base_time = 0.277741237332;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 41902U;
    tmp_tmp_msg_0_0.priority = -58;
    tmp_tmp_msg_0_0.x = 27250;
    tmp_tmp_msg_0_0.y = 7012;
    tmp_tmp_msg_0_0.z = 6177;
    tmp_tmp_msg_0_0.t = 18786;
    IMC::ReportControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 169U;
    tmp_tmp_tmp_msg_0_0_0.comm_interface = 170U;
    tmp_tmp_tmp_msg_0_0_0.period = 40400U;
    tmp_tmp_tmp_msg_0_0_0.sys_dst.assign("SYQKUVWOVDJFIKREHBUDBRS");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.354143612674);
    msg.setSource(34844U);
    msg.setSourceEntity(172U);
    msg.setDestination(40744U);
    msg.setDestinationEntity(185U);
    msg.req_id = 55537U;
    msg.type = 252U;
    msg.max_size = 51981U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.736722558811;
    tmp_msg_0.base_lon = 0.962253367123;
    tmp_msg_0.base_time = 0.20778625681;
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
    msg.setTimeStamp(0.0474946466271);
    msg.setSource(20040U);
    msg.setSourceEntity(116U);
    msg.setDestination(61316U);
    msg.setDestinationEntity(91U);
    msg.req_id = 19722U;
    msg.type = 53U;
    msg.max_size = 8215U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.547068660102;
    tmp_msg_0.base_lon = 0.829834427997;
    tmp_msg_0.base_time = 0.323108223277;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 14449U;
    tmp_tmp_msg_0_0.priority = 47;
    tmp_tmp_msg_0_0.x = -7461;
    tmp_tmp_msg_0_0.y = 7308;
    tmp_tmp_msg_0_0.z = -19403;
    tmp_tmp_msg_0_0.t = -5872;
    IMC::MonitorEntityState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.command = 169U;
    tmp_tmp_tmp_msg_0_0_0.entities.assign("UDDQSBBBJRYWSFSMOPTKGHXDTELXWGNOHJCXGREPNBQNJLMWCXGJLPXRXTFYWVAPIQFQSINVKXTRXOUYFBSFITDEKFFJUAYAZHOPXHNZNUAGGAWUVKUZCPIJIKLLCJUDRDNMZZEKRHEFHTFYBAWWVVCMPUDGLZYKJZOQEGVMKKEWSCNQQOIDITHHWVDGVOBLROJLR");
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
    msg.setTimeStamp(0.299832507891);
    msg.setSource(51167U);
    msg.setSourceEntity(3U);
    msg.setDestination(35735U);
    msg.setDestinationEntity(186U);
    msg.original_source = 43873U;
    msg.destination = 15915U;
    msg.timeout = 0.534946376074;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("TQTXQIAGKVRYFAFHVDTJOROINKATKDCMEDZFONGGVRNPVOYFKFDPOQCPPDIQTJKFQZQYBSDJQDBOXXBUUAFNHDJOUBGCENQGXWZWSMNLKZCPIXIKGUHHMIZBOVVQCLLTX");
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
    msg.setTimeStamp(0.720285314284);
    msg.setSource(2641U);
    msg.setSourceEntity(175U);
    msg.setDestination(673U);
    msg.setDestinationEntity(35U);
    msg.original_source = 47333U;
    msg.destination = 4495U;
    msg.timeout = 0.832084091699;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 57281U;
    tmp_msg_0.rpm = 0.665568287967;
    tmp_msg_0.direction = 176U;
    tmp_msg_0.custom.assign("RVXUHSNYJSXAKKUUXVEHJVHWKRTNTHFITQGPMPHDZMWQGFSQKEKIAGEUYTBOOODZGMPTOWHPJBHBIJOCRQGGYNCXPBBVQGTTKSBZWOWCDYPDPCFRFBRFXPL");
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
    msg.setTimeStamp(0.424677440591);
    msg.setSource(3470U);
    msg.setSourceEntity(98U);
    msg.setDestination(17376U);
    msg.setDestinationEntity(3U);
    msg.original_source = 18067U;
    msg.destination = 60551U;
    msg.timeout = 0.133254290981;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 80U;
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
    msg.setTimeStamp(0.00400018636731);
    msg.setSource(43939U);
    msg.setSourceEntity(204U);
    msg.setDestination(59203U);
    msg.setDestinationEntity(232U);
    msg.type = 233U;
    msg.comm_interface = 19244U;
    msg.model = 24969U;
    msg.list.assign("RMYAIIRCPZFNHTJUMGVYOHSDHIXGYWSEOOTDZJALZWGPGRADYPTOVQKXZGFRFHCRCWXYXKDHEXZSVWZACNXVGXLOKTSWEJGQWNZOIQFEMMJBKTDCLBLNMNRHAYGTWCA");

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
    msg.setTimeStamp(0.113827773706);
    msg.setSource(47006U);
    msg.setSourceEntity(104U);
    msg.setDestination(63174U);
    msg.setDestinationEntity(188U);
    msg.type = 64U;
    msg.comm_interface = 46401U;
    msg.model = 2169U;
    msg.list.assign("YMZLBRPUJIYYWTWKRAQZOAQIUIPIEKLVTYGHQLDPLO");

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
    msg.setTimeStamp(0.602318659076);
    msg.setSource(56607U);
    msg.setSourceEntity(139U);
    msg.setDestination(32030U);
    msg.setDestinationEntity(8U);
    msg.type = 166U;
    msg.comm_interface = 62112U;
    msg.model = 13754U;
    msg.list.assign("FSOJEBWGZJIECHVWNAYGSTJZGUTUXPKTKMZPWHJRDTEXCIDKDUVNVSCKRRPOUEQWSIRQLHFPHXXGZAXBYRLPOCTNFSAAGCJAHZLKRMEBSCSFQWBVNNESXPXTJYOEQVDYJJU");

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
    msg.setTimeStamp(0.122311217446);
    msg.setSource(12966U);
    msg.setSourceEntity(55U);
    msg.setDestination(55748U);
    msg.setDestinationEntity(147U);
    msg.type = 120U;
    msg.req_id = 945517194U;
    msg.ttl = 27382U;
    msg.code = 153U;
    msg.destination.assign("GVPWXSYUXBSUXHRMVUEILHZZBTWXEHKFXKLOGRMCLWQOTAMCYGJFGPNQGHCJVJTOPLYUOGFAFTBNDVTAYPDBREMECSAJXOLXATWCKUTRZDQFNVUHZCISEFZDDHJVNNW");
    msg.source.assign("QBHMKKJUBBDHDEVDJSPSHYGXMAGSGDDHVKURWVAIIYWVIBOGWFTPSRPFFUEZURSSTIPLOJGXMHGWLWFOVRFEICJKUFTZYLGNARZYLHNLOWZXLAQN");
    msg.acknowledge = 219U;
    msg.status = 205U;
    const char tmp_msg_0[] = {101, 18, 90, -39, -4, -66, -49, -101, -112, 115, -10, 100, 76, 17, 10, 21, -79, -120, 48, 112, 70, -63, -104, 57, 119, -1, -103, 87, 52, -19, 85, -4, -81, 27, -54, 90, -35, 66, -74, 68, 68, -82, -7, 105};
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
    msg.setTimeStamp(0.397655823663);
    msg.setSource(33323U);
    msg.setSourceEntity(196U);
    msg.setDestination(41407U);
    msg.setDestinationEntity(199U);
    msg.type = 104U;
    msg.req_id = 1673405988U;
    msg.ttl = 15118U;
    msg.code = 92U;
    msg.destination.assign("TSDUGOWAOYZYW");
    msg.source.assign("AVKGYZBGBSBJLRZQEFCJVHRAKCWOKKQDTMMLJSFCHVNPDUXOBDRZPHYMZMFCZIQVAMKWXXFXZTNZLKAEGVVAMPUTTCUGWMXIUVBNUMVKUCJGFAPPNIBAKNYOIFHGQPYRZUIOUXUQJJYYHDFGXCTRNPBWTEEWSWESXOCKSPG");
    msg.acknowledge = 53U;
    msg.status = 139U;
    const char tmp_msg_0[] = {63, -91, -128, 45, 73, -85, 106, -23, -101, -40, 117, 124, -86, -99, -29, 14, -36, 81, 58, -32, 23, 14, -125, 19, -97, -76, 120, 68, -93, 94, 16, -82, -101, 14, -68, 11, 103, 117, 38, -37, 123, -18, 14, 24, 27, 21, 92, -96, -116, 92, -112, -106, -24, 44, -2, 19, 1, -9, -74, -60, -38, 59, -21, -9, 7, -124, -86, 64, 41, -68, -114, -6, 55, 71, 58, -69, -12, -127, -53, 27, -123, -109, 45, -22, -56, -34, 104, -82, 6, 19, -114, 85, -108, -89, -45, -118, -2, 19, -60, -48, 24, 32, -104, 104, -86, 60, 118, 33, 61, -2, -35, 118, -93, -125, 94, 43, 93, 114, -20, 43, -99, 37, -39, -3, 45, 0, 4, -94, -24, -116, 125, 17, 116, -103, -76, -99, -73, -4, 76, -2, 126, 121, 63, 95, -103, 73, -5, -105, -115, -9, 33, -9, -120, 27, 52, 81, 89, 16, -68, 92, -76, 90, 94, -114, 50, 17, -20, -128, 106, -8, -74};
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
    msg.setTimeStamp(0.251823886601);
    msg.setSource(2906U);
    msg.setSourceEntity(223U);
    msg.setDestination(5892U);
    msg.setDestinationEntity(34U);
    msg.type = 230U;
    msg.req_id = 2526521268U;
    msg.ttl = 8572U;
    msg.code = 183U;
    msg.destination.assign("TOAGJPTMOVOGKSIBJDYNLVVMGKOUHAXCVJAIKGTNPRRRBRKA");
    msg.source.assign("XULDPOZUMSHFCFRDCMBIGXQPQDWNJZW");
    msg.acknowledge = 134U;
    msg.status = 28U;
    const char tmp_msg_0[] = {16, 74, 102, -18, -26, 63, 3, 26, 61, -64, -13, 46, -45, -15, -44, 84, -51, 33, -74, 110, 120, -112, -122, 92, -23, -25, 0, -39, -120, 27, 40, -56, -95, 74, 27, 61, -59, -111, 42, 79, -60, 40, 125, -42, 64, 84, -27, -99, 34, 107, 118, -96, 0, 40, -109, -21, 79, -48, 105, -86, 63, -109, 102, -49, 111, -79, 91, -25, -105, -9, -114, -33, -5, -125, -32, 51, -13, -5, -81, -47, 86, 10, -3, 79, -126, -69, 9, -8, -95, -43, 48, 51, 113, -105, 61, -109, 5, -107, 39, 55, -120, -119, 79, -3, -62, -56, -75, 50, -38, -79, 91, -94, -55, -80, 68, -90, 104, -58, -111, 49, -110, -32, -105, 91, -126, -88, -52, -25, 73, -17, -128, -51, 89, -91, -113, -49, 47, -35, 118, -102, -20, -68, 77, 13, 115, -74, -81, -110, 19, 105, -78, 89, 88, -24, 91, -33, 61, -75, 100, 109, 47, 109, 111, 50, 29, 82, 76, -68, 24, -63, -61, -108, -63, 85, -54, 85, 47, 105, 75, 6, 94, 112, 6, -79, -30, 9, -33, 91, 4, -117, -1, -70, 112, -73, 14, 80, -61, -47, -125, 106, 112, -74, 50, 103, -28, -105, 106, 5, 9, 38};
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
    msg.setTimeStamp(0.635019679879);
    msg.setSource(34068U);
    msg.setSourceEntity(105U);
    msg.setDestination(47683U);
    msg.setDestinationEntity(211U);
    msg.id = 158U;
    msg.range = 0.236016111302;

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
    msg.setTimeStamp(0.839066680569);
    msg.setSource(16274U);
    msg.setSourceEntity(227U);
    msg.setDestination(42817U);
    msg.setDestinationEntity(167U);
    msg.id = 38U;
    msg.range = 0.0925623300921;

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
    msg.setTimeStamp(0.960916640882);
    msg.setSource(16165U);
    msg.setSourceEntity(233U);
    msg.setDestination(53089U);
    msg.setDestinationEntity(83U);
    msg.id = 187U;
    msg.range = 0.373813211841;

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
    msg.setTimeStamp(0.151560865342);
    msg.setSource(49306U);
    msg.setSourceEntity(70U);
    msg.setDestination(49982U);
    msg.setDestinationEntity(160U);
    msg.beacon.assign("TVLSURZUMEVSFZZLSZDAXJXVIYQDJRYYTXNZTVCKIPEDFJULUAURZYYUIFMOKBKHBLGANWOOJIDGPPFNGHVXXCXMTQLHRJDLHYBBUERXSRNTCEBKHOSKAMRZJWSQCGOVSWTTNPJWGIFFWEKKDNOUWJKCWEHHXDOLFCVOTBWCPYZQO");
    msg.lat = 0.990383719963;
    msg.lon = 0.459517015478;
    msg.depth = 0.617277984298;
    msg.query_channel = 223U;
    msg.reply_channel = 79U;
    msg.transponder_delay = 109U;

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
    msg.setTimeStamp(0.0922511519763);
    msg.setSource(24302U);
    msg.setSourceEntity(116U);
    msg.setDestination(37591U);
    msg.setDestinationEntity(164U);
    msg.beacon.assign("FJHFAWVFXWYZYJOMECFWXVPINOLMDIWOJCQJXYZTLCDDWOSBIMLGAQALZQKUJJFNCEBGIBXKPNORVTUQKEPTTJHRZJQUUOBGWLTFUVLIEXNCIAYZHFUGZHFGF");
    msg.lat = 0.829438618952;
    msg.lon = 0.715035757893;
    msg.depth = 0.0392853687416;
    msg.query_channel = 63U;
    msg.reply_channel = 168U;
    msg.transponder_delay = 70U;

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
    msg.setTimeStamp(0.914278704762);
    msg.setSource(32509U);
    msg.setSourceEntity(244U);
    msg.setDestination(27559U);
    msg.setDestinationEntity(247U);
    msg.beacon.assign("KBHINVQRXUPYLULUTOKIRJAMZJQFGRNDTMYSVAZNHHAOBPOZHKKYKRMJIPMQRREMPPKYJOLCPCCCFJADRIXJQQUVUFEVDGROOGLGNUFYHTKNTQTULXHJEFJAWDEZWSRWMXTTZBYKWUOPNATV");
    msg.lat = 0.793590897977;
    msg.lon = 0.138950999148;
    msg.depth = 0.949656444072;
    msg.query_channel = 15U;
    msg.reply_channel = 170U;
    msg.transponder_delay = 161U;

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
    msg.setTimeStamp(0.856501455364);
    msg.setSource(53970U);
    msg.setSourceEntity(203U);
    msg.setDestination(44112U);
    msg.setDestinationEntity(32U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.861144898218);
    msg.setSource(20915U);
    msg.setSourceEntity(197U);
    msg.setDestination(39027U);
    msg.setDestinationEntity(199U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.4180340938);
    msg.setSource(29906U);
    msg.setSourceEntity(153U);
    msg.setDestination(40818U);
    msg.setDestinationEntity(83U);
    msg.op = 99U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZPWQRBKHXUOKBCTMFNGORERAXGOJDJCDHQXCWPBIMWD");
    tmp_msg_0.lat = 0.584152271321;
    tmp_msg_0.lon = 0.519649791793;
    tmp_msg_0.depth = 0.172499122754;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 214U;
    tmp_msg_0.transponder_delay = 150U;
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
    msg.setTimeStamp(0.184371750165);
    msg.setSource(60304U);
    msg.setSourceEntity(124U);
    msg.setDestination(65461U);
    msg.setDestinationEntity(143U);
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 31632U;
    tmp_msg_0.value = 134U;
    tmp_msg_0.error.assign("TOGVQMWXFYBR");
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
    msg.setTimeStamp(0.760153684483);
    msg.setSource(5783U);
    msg.setSourceEntity(111U);
    msg.setDestination(11712U);
    msg.setDestinationEntity(13U);
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.467555020773);
    msg.setSource(36555U);
    msg.setSourceEntity(21U);
    msg.setDestination(6653U);
    msg.setDestinationEntity(192U);
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.548321648017);
    msg.setSource(42753U);
    msg.setSourceEntity(227U);
    msg.setDestination(15299U);
    msg.setDestinationEntity(94U);
    msg.op = 53U;
    msg.system.assign("VIQDMVOCKBDZVEHQNPPWDILNNTHXYYWAEUMKFXMGONXPRDQKMRTZUKXSEPTESJHLYJFHOTBVODEJJNMTRKBZWSQQWXPQYSVUZBSXQJUFAKZYKWUBWRVSLJFQGECHVDYFPMROCGTIHCGFOJJPALVLDISGTIIFZNGRZQRGEXSXMPVAMCYTZCYUMOFWZFNXSWKEI");
    msg.range = 0.0705413310399;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.762895907004);
    msg.setSource(64187U);
    msg.setSourceEntity(220U);
    msg.setDestination(56130U);
    msg.setDestinationEntity(232U);
    msg.op = 231U;
    msg.system.assign("MFKATWAENDSQRVKHKJNEXPJTKLMMEBCNRHYYVQCRG");
    msg.range = 0.666432826639;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 61375U;
    tmp_msg_0.lat = 0.490371151232;
    tmp_msg_0.lon = 0.281935920143;
    tmp_msg_0.z = 0.623816610939;
    tmp_msg_0.z_units = 119U;
    tmp_msg_0.speed = 0.61129477833;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.bearing = 0.94256709594;
    tmp_msg_0.cross_angle = 0.168268296219;
    tmp_msg_0.width = 0.370562044545;
    tmp_msg_0.length = 0.401637585731;
    tmp_msg_0.hstep = 0.902404252721;
    tmp_msg_0.coff = 111U;
    tmp_msg_0.alternation = 88U;
    tmp_msg_0.flags = 51U;
    tmp_msg_0.custom.assign("NPKBUNVWAVDFUZPGILDYOVNUHTBTIXXJDHTQAMAINZPBCKESWRLFQYGEJPTHVTMSCUCLJFOVPTYVFGKWDOUJXZRSMEQPWWPKXJPRYAXLKTGDBTOPSSRMAESXGDMJNVGKGOLXWALTZBRXCNZULSPUDSHYYBQSDLHBSXYWRHDCYFOWFIZNCVJZIFGIJMNQHTQYNMQIQHJYC");
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
    msg.setTimeStamp(0.0181900286973);
    msg.setSource(48252U);
    msg.setSourceEntity(245U);
    msg.setDestination(39516U);
    msg.setDestinationEntity(56U);
    msg.op = 240U;
    msg.system.assign("FRPKUEVJWMVCBMIBBVOSFLHOAVGQNMYWPGENAOPZDJRXYBPEXMNPGMUUZSVQMLHWOCVBNSXWJGNHBPWXQWCOCITFDUBYONFHUXSUDQVWTIDMRRRRQBFTGKA");
    msg.range = 0.930129711205;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 56293U;
    tmp_msg_0.lat = 0.568414400093;
    tmp_msg_0.lon = 0.444507398711;
    tmp_msg_0.z = 0.867734071578;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.486840984345;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.custom.assign("FAUUYMOCEAYLISRJXFFVNRRRBXCZIIPDCXDHZVDMHNUEOBSAPBQLYCSQSUFVTASWHLLMDXSNPTEHHGFONUYMQDTUDLBDRWBDJCBTLJSHXWYVYQGOBTWZEPUIWBUFCMVHOOPOVTNGWVWCGECNPZNXKRYEPUCVGGWTZJFYXKOJMIZIQMCIURAEQIQZNLENEJVSEOHKJANYGWFPIRAKMHRPZBYKFTVJKRKAGQHPBSTOXAIJSFZZKMGJMKGXK");
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
    msg.setTimeStamp(0.477404476056);
    msg.setSource(54528U);
    msg.setSourceEntity(189U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.0422500001466);
    msg.setSource(19324U);
    msg.setSourceEntity(211U);
    msg.setDestination(55641U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.825780735751);
    msg.setSource(1505U);
    msg.setSourceEntity(29U);
    msg.setDestination(21591U);
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
    msg.setTimeStamp(0.697421128054);
    msg.setSource(31210U);
    msg.setSourceEntity(175U);
    msg.setDestination(45637U);
    msg.setDestinationEntity(30U);
    msg.list.assign("ZUFOQYWKGKFTGNHYJYRIXTVHPNJEQCSLCZNLDMUWALNCTXYIVMSFQGZWTEIHCOOCARYGLUOPMNWTMNSPILSIC");

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
    msg.setTimeStamp(0.827333698632);
    msg.setSource(23139U);
    msg.setSourceEntity(104U);
    msg.setDestination(17444U);
    msg.setDestinationEntity(182U);
    msg.list.assign("YYDBRRLQRMHJLEZMMJPMGWDSHWCXUQNBBXOJJLLURGLCOQNBUPLZIDCXCRYFOZEXXTVPLENYDYTNPEREFFYXQJBZFNSHNUARGXIVTEQNAGUWVAHUPIWZSOEKWAOTSMIBVGMKVHTNJYWKFFLHXHDSUWWSMBKNIQEYDQMVZXFGVCTTSRGFZMKINBQCMBOBACSJKYOZW");

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
    msg.setTimeStamp(0.659813612838);
    msg.setSource(60557U);
    msg.setSourceEntity(78U);
    msg.setDestination(56484U);
    msg.setDestinationEntity(43U);
    msg.list.assign("PFWCDYMOZMLACSIXGJGAZWQCSECPHMLKRLZYWPZXRUZXMTDBLEZJKWJZVGNLTQSTXLPWYIUMMTMEDONAXIVEXJKORRVIBTUJYRGFAOQVNQHGIQLVENFGHAOPWAXDYUGFAUKJSHKPBBUVHIWKOIQUNBYTYPGDOXZWRBUOCETABDIPREGHCENHSJFDDGXLKCCDSLVBYJJCUURMMTDVNSSFFNQNWOQZFIFOHQRJLYETMQY");

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
    msg.setTimeStamp(0.409380988982);
    msg.setSource(8922U);
    msg.setSourceEntity(89U);
    msg.setDestination(24298U);
    msg.setDestinationEntity(214U);
    msg.peer.assign("JDJYIZAEDOAFMCYKMZZYWGNXIUJMOHEYNMWVSVBCUOSBQGRTPXDHCMZASQCCCVBGCNMEWLOQHHZVRUGLKWCUVDEJFZIJNQRATXBXHUIRQFGOWVEFRENSSYGDFBRDDXHALGLW");
    msg.rssi = 0.133645432945;
    msg.integrity = 62404U;

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
    msg.setTimeStamp(0.264826623662);
    msg.setSource(3270U);
    msg.setSourceEntity(248U);
    msg.setDestination(28324U);
    msg.setDestinationEntity(174U);
    msg.peer.assign("QFVEKZWBPKHXCYPUGESHLGLTNBTPJXHKFECFXVBDAEBMUOWTUCIOESMDCPOJHLIMVOANVQYLERQSVDNIBKRAHYOTMLQBGUGQHVULMBQPCSACTCJOJPDZGZUDUZJWAMAWJEKDXZCDWMRXVFMFUHKKANIFJTNCHHOXDDESNIYBPRQHIQAVZZROYSWGLRJTRYJRNFLUXQKOFTDIMWLLYMGWJGXIKPIIYFVBP");
    msg.rssi = 0.829351728967;
    msg.integrity = 9638U;

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
    msg.setTimeStamp(0.639590071023);
    msg.setSource(47008U);
    msg.setSourceEntity(187U);
    msg.setDestination(37960U);
    msg.setDestinationEntity(222U);
    msg.peer.assign("HYYXQTUMFIYNXUITJSMOVDFGJMVVCBXNVCAROQDXQENTKBIYVRYYTIHCZEQJZSAZSUJWMBEVTJJZKURFNJNWCHBRZSPHGTYSXFNFPWYNLKBHECSGKVTLAMSQBAXRHUCKPRASBSGAJDGWXOOMHOBDQLLPZDIDRZEOOFMAMQJEZIEVGIWDIFTBUQRLCHPIPOHKUTIKXKWCBOFNWADEULYRLRPAQPXMLALWCZL");
    msg.rssi = 0.839190704197;
    msg.integrity = 41310U;

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
    msg.setTimeStamp(0.493873747117);
    msg.setSource(23365U);
    msg.setSourceEntity(179U);
    msg.setDestination(55030U);
    msg.setDestinationEntity(214U);
    msg.value = 27540;

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
    msg.setTimeStamp(0.631727450793);
    msg.setSource(52709U);
    msg.setSourceEntity(65U);
    msg.setDestination(30102U);
    msg.setDestinationEntity(142U);
    msg.value = 1527;

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
    msg.setTimeStamp(0.593362516882);
    msg.setSource(38065U);
    msg.setSourceEntity(54U);
    msg.setDestination(44985U);
    msg.setDestinationEntity(84U);
    msg.value = -15220;

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
    msg.setTimeStamp(0.343105852359);
    msg.setSource(46211U);
    msg.setSourceEntity(105U);
    msg.setDestination(3582U);
    msg.setDestinationEntity(252U);
    msg.value = 0.764560910307;

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
    msg.setTimeStamp(0.639466021781);
    msg.setSource(48025U);
    msg.setSourceEntity(55U);
    msg.setDestination(38855U);
    msg.setDestinationEntity(186U);
    msg.value = 0.211771138858;

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
    msg.setTimeStamp(0.000576478000585);
    msg.setSource(27277U);
    msg.setSourceEntity(185U);
    msg.setDestination(43800U);
    msg.setDestinationEntity(167U);
    msg.value = 0.938881261225;

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
    msg.setTimeStamp(0.0671586100608);
    msg.setSource(55985U);
    msg.setSourceEntity(80U);
    msg.setDestination(47871U);
    msg.setDestinationEntity(159U);
    msg.value = 0.998259572159;

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
    msg.setTimeStamp(0.681196778984);
    msg.setSource(47456U);
    msg.setSourceEntity(194U);
    msg.setDestination(61149U);
    msg.setDestinationEntity(213U);
    msg.value = 0.221244611464;

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
    msg.setTimeStamp(0.520073174638);
    msg.setSource(52800U);
    msg.setSourceEntity(49U);
    msg.setDestination(7974U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0231728007233;

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
    msg.setTimeStamp(0.084668081842);
    msg.setSource(4427U);
    msg.setSourceEntity(125U);
    msg.setDestination(42657U);
    msg.setDestinationEntity(128U);
    msg.validity = 44532U;
    msg.type = 161U;
    msg.utc_year = 63982U;
    msg.utc_month = 13U;
    msg.utc_day = 240U;
    msg.utc_time = 0.85872646558;
    msg.lat = 0.682362448011;
    msg.lon = 0.190678189817;
    msg.height = 0.62125000867;
    msg.satellites = 34U;
    msg.cog = 0.39953715589;
    msg.sog = 0.72303415751;
    msg.hdop = 0.605110677875;
    msg.vdop = 0.889426311043;
    msg.hacc = 0.571636889824;
    msg.vacc = 0.119273734126;

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
    msg.setTimeStamp(0.740136562521);
    msg.setSource(40800U);
    msg.setSourceEntity(63U);
    msg.setDestination(59115U);
    msg.setDestinationEntity(101U);
    msg.validity = 52466U;
    msg.type = 37U;
    msg.utc_year = 26095U;
    msg.utc_month = 8U;
    msg.utc_day = 12U;
    msg.utc_time = 0.617995949469;
    msg.lat = 0.0126590185914;
    msg.lon = 0.937918816115;
    msg.height = 0.496242844015;
    msg.satellites = 5U;
    msg.cog = 0.351816449241;
    msg.sog = 0.488344572796;
    msg.hdop = 0.422615942737;
    msg.vdop = 0.520629093805;
    msg.hacc = 0.589215080225;
    msg.vacc = 0.85137217305;

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
    msg.setTimeStamp(0.947301111441);
    msg.setSource(23080U);
    msg.setSourceEntity(59U);
    msg.setDestination(49402U);
    msg.setDestinationEntity(123U);
    msg.validity = 65500U;
    msg.type = 119U;
    msg.utc_year = 55079U;
    msg.utc_month = 75U;
    msg.utc_day = 22U;
    msg.utc_time = 0.384728185726;
    msg.lat = 0.588650760432;
    msg.lon = 0.383233503229;
    msg.height = 0.659495936711;
    msg.satellites = 54U;
    msg.cog = 0.894618579405;
    msg.sog = 0.89957253658;
    msg.hdop = 0.711040856025;
    msg.vdop = 0.903100542992;
    msg.hacc = 0.670510530911;
    msg.vacc = 0.711985015337;

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
    msg.setTimeStamp(0.470013248286);
    msg.setSource(41234U);
    msg.setSourceEntity(117U);
    msg.setDestination(57022U);
    msg.setDestinationEntity(69U);
    msg.time = 0.688735826813;
    msg.phi = 0.345783450212;
    msg.theta = 0.602459842303;
    msg.psi = 0.0756154028045;
    msg.psi_magnetic = 0.0531964492291;

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
    msg.setTimeStamp(0.78641530213);
    msg.setSource(16380U);
    msg.setSourceEntity(162U);
    msg.setDestination(63668U);
    msg.setDestinationEntity(18U);
    msg.time = 0.125910564108;
    msg.phi = 0.591281354608;
    msg.theta = 0.479329709082;
    msg.psi = 0.91942027883;
    msg.psi_magnetic = 0.268361465053;

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
    msg.setTimeStamp(0.635539692783);
    msg.setSource(17648U);
    msg.setSourceEntity(231U);
    msg.setDestination(38669U);
    msg.setDestinationEntity(55U);
    msg.time = 0.486664596371;
    msg.phi = 0.0179350780683;
    msg.theta = 0.215996654292;
    msg.psi = 0.119841303806;
    msg.psi_magnetic = 0.577165558903;

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
    msg.setTimeStamp(0.365912007695);
    msg.setSource(40130U);
    msg.setSourceEntity(14U);
    msg.setDestination(45031U);
    msg.setDestinationEntity(31U);
    msg.time = 0.201353014568;
    msg.x = 0.970077123096;
    msg.y = 0.461090037695;
    msg.z = 0.775726808354;
    msg.timestep = 0.457936166787;

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
    msg.setTimeStamp(0.169759988879);
    msg.setSource(30962U);
    msg.setSourceEntity(156U);
    msg.setDestination(29638U);
    msg.setDestinationEntity(221U);
    msg.time = 0.875123529552;
    msg.x = 0.368919297805;
    msg.y = 0.282439697893;
    msg.z = 0.593683398957;
    msg.timestep = 0.579481098682;

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
    msg.setTimeStamp(0.50218444856);
    msg.setSource(27001U);
    msg.setSourceEntity(8U);
    msg.setDestination(1262U);
    msg.setDestinationEntity(250U);
    msg.time = 0.0905841019474;
    msg.x = 0.657226253856;
    msg.y = 0.166773248493;
    msg.z = 0.805452382196;
    msg.timestep = 0.396521621919;

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
    msg.setTimeStamp(0.225536105057);
    msg.setSource(54472U);
    msg.setSourceEntity(2U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(164U);
    msg.time = 0.0678599391312;
    msg.x = 0.667560080929;
    msg.y = 0.894405666234;
    msg.z = 0.233541240912;

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
    msg.setTimeStamp(0.281974217159);
    msg.setSource(15895U);
    msg.setSourceEntity(216U);
    msg.setDestination(9376U);
    msg.setDestinationEntity(137U);
    msg.time = 0.403041741176;
    msg.x = 0.538108431783;
    msg.y = 0.510604992976;
    msg.z = 0.883161080485;

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
    msg.setTimeStamp(0.438953988886);
    msg.setSource(3523U);
    msg.setSourceEntity(54U);
    msg.setDestination(25845U);
    msg.setDestinationEntity(62U);
    msg.time = 0.855164419529;
    msg.x = 0.436225387548;
    msg.y = 0.55498435059;
    msg.z = 0.827920311192;

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
    msg.setTimeStamp(0.518875614043);
    msg.setSource(24736U);
    msg.setSourceEntity(185U);
    msg.setDestination(27683U);
    msg.setDestinationEntity(165U);
    msg.time = 0.665590304766;
    msg.x = 0.720867196065;
    msg.y = 0.415479953334;
    msg.z = 0.810535665082;

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
    msg.setTimeStamp(0.168230466179);
    msg.setSource(15436U);
    msg.setSourceEntity(144U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(118U);
    msg.time = 0.140290751437;
    msg.x = 0.183891361864;
    msg.y = 0.206741408761;
    msg.z = 0.177800307239;

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
    msg.setTimeStamp(0.614449405886);
    msg.setSource(10824U);
    msg.setSourceEntity(226U);
    msg.setDestination(10793U);
    msg.setDestinationEntity(7U);
    msg.time = 0.628604667222;
    msg.x = 0.815716443018;
    msg.y = 0.653028558146;
    msg.z = 0.0519486324256;

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
    msg.setTimeStamp(0.271613196611);
    msg.setSource(4476U);
    msg.setSourceEntity(12U);
    msg.setDestination(60486U);
    msg.setDestinationEntity(5U);
    msg.time = 0.924277983087;
    msg.x = 0.907202152334;
    msg.y = 0.00219287472783;
    msg.z = 0.308353038755;

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
    msg.setTimeStamp(0.758161002544);
    msg.setSource(18738U);
    msg.setSourceEntity(224U);
    msg.setDestination(62696U);
    msg.setDestinationEntity(93U);
    msg.time = 0.629705439957;
    msg.x = 0.566694833428;
    msg.y = 0.274583929343;
    msg.z = 0.710572720597;

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
    msg.setTimeStamp(0.765829345216);
    msg.setSource(11249U);
    msg.setSourceEntity(122U);
    msg.setDestination(63404U);
    msg.setDestinationEntity(23U);
    msg.time = 0.616135871879;
    msg.x = 0.959691907883;
    msg.y = 0.930465911273;
    msg.z = 0.666071342339;

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
    msg.setTimeStamp(0.779763397507);
    msg.setSource(39836U);
    msg.setSourceEntity(28U);
    msg.setDestination(63336U);
    msg.setDestinationEntity(211U);
    msg.validity = 142U;
    msg.x = 0.987993139808;
    msg.y = 0.0159968589316;
    msg.z = 0.0695599363871;

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
    msg.setTimeStamp(0.307379842065);
    msg.setSource(6071U);
    msg.setSourceEntity(80U);
    msg.setDestination(57813U);
    msg.setDestinationEntity(156U);
    msg.validity = 196U;
    msg.x = 0.796906350039;
    msg.y = 0.211942928953;
    msg.z = 0.977649966197;

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
    msg.setTimeStamp(0.724421498513);
    msg.setSource(38369U);
    msg.setSourceEntity(111U);
    msg.setDestination(31918U);
    msg.setDestinationEntity(171U);
    msg.validity = 157U;
    msg.x = 0.332410222632;
    msg.y = 0.00382190309527;
    msg.z = 0.603124806074;

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
    msg.setTimeStamp(0.680682774577);
    msg.setSource(15028U);
    msg.setSourceEntity(53U);
    msg.setDestination(3520U);
    msg.setDestinationEntity(49U);
    msg.validity = 73U;
    msg.x = 0.970373113598;
    msg.y = 0.261533421311;
    msg.z = 0.0752306776624;

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
    msg.setTimeStamp(0.279115692378);
    msg.setSource(41516U);
    msg.setSourceEntity(46U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(228U);
    msg.validity = 88U;
    msg.x = 0.113153068662;
    msg.y = 0.580022636714;
    msg.z = 0.703041454458;

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
    msg.setTimeStamp(0.311050725302);
    msg.setSource(2738U);
    msg.setSourceEntity(60U);
    msg.setDestination(15288U);
    msg.setDestinationEntity(193U);
    msg.validity = 49U;
    msg.x = 0.463986885252;
    msg.y = 0.856758395448;
    msg.z = 0.132138493141;

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
    msg.setTimeStamp(0.874645956251);
    msg.setSource(11278U);
    msg.setSourceEntity(227U);
    msg.setDestination(32198U);
    msg.setDestinationEntity(243U);
    msg.time = 0.18022153114;
    msg.x = 0.69758356223;
    msg.y = 0.184147753577;
    msg.z = 0.821635830488;

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
    msg.setTimeStamp(0.40442998901);
    msg.setSource(8188U);
    msg.setSourceEntity(43U);
    msg.setDestination(63241U);
    msg.setDestinationEntity(56U);
    msg.time = 0.655586863866;
    msg.x = 0.950612213486;
    msg.y = 0.38331023879;
    msg.z = 0.0780203032094;

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
    msg.setTimeStamp(0.587687678825);
    msg.setSource(37481U);
    msg.setSourceEntity(204U);
    msg.setDestination(34068U);
    msg.setDestinationEntity(254U);
    msg.time = 0.368205734101;
    msg.x = 0.37301976894;
    msg.y = 0.429515583435;
    msg.z = 0.31548315359;

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
    msg.setTimeStamp(0.693280570018);
    msg.setSource(16399U);
    msg.setSourceEntity(83U);
    msg.setDestination(17752U);
    msg.setDestinationEntity(72U);
    msg.validity = 113U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.556554578804;
    tmp_msg_0.y = 0.0777451906135;
    tmp_msg_0.z = 0.351869194179;
    tmp_msg_0.phi = 0.594748796533;
    tmp_msg_0.theta = 0.140188124926;
    tmp_msg_0.psi = 0.0334025840192;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.446168588876;

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
    msg.setTimeStamp(0.360752294875);
    msg.setSource(40605U);
    msg.setSourceEntity(125U);
    msg.setDestination(23037U);
    msg.setDestinationEntity(10U);
    msg.validity = 146U;
    msg.value = 0.156112854145;

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
    msg.setTimeStamp(0.251369400477);
    msg.setSource(15355U);
    msg.setSourceEntity(138U);
    msg.setDestination(56749U);
    msg.setDestinationEntity(120U);
    msg.validity = 17U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.824206316105;
    tmp_msg_0.beam_height = 0.440010183184;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0200573351206;

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
    msg.setTimeStamp(0.268875406666);
    msg.setSource(60274U);
    msg.setSourceEntity(125U);
    msg.setDestination(18909U);
    msg.setDestinationEntity(68U);
    msg.value = 0.319887035384;

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
    msg.setTimeStamp(0.962061561461);
    msg.setSource(10854U);
    msg.setSourceEntity(254U);
    msg.setDestination(45870U);
    msg.setDestinationEntity(66U);
    msg.value = 0.895308406005;

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
    msg.setTimeStamp(0.123384934951);
    msg.setSource(15335U);
    msg.setSourceEntity(14U);
    msg.setDestination(38649U);
    msg.setDestinationEntity(127U);
    msg.value = 0.32590405096;

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
    msg.setTimeStamp(0.212188298082);
    msg.setSource(38178U);
    msg.setSourceEntity(168U);
    msg.setDestination(64461U);
    msg.setDestinationEntity(217U);
    msg.value = 0.683436613536;

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
    msg.setTimeStamp(0.552650722161);
    msg.setSource(5962U);
    msg.setSourceEntity(60U);
    msg.setDestination(17003U);
    msg.setDestinationEntity(211U);
    msg.value = 0.992916391112;

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
    msg.setTimeStamp(0.992184182372);
    msg.setSource(33212U);
    msg.setSourceEntity(159U);
    msg.setDestination(63946U);
    msg.setDestinationEntity(155U);
    msg.value = 0.211305451337;

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
    msg.setTimeStamp(0.42712827765);
    msg.setSource(25182U);
    msg.setSourceEntity(104U);
    msg.setDestination(31595U);
    msg.setDestinationEntity(57U);
    msg.value = 0.764906343268;

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
    msg.setTimeStamp(0.345180653089);
    msg.setSource(31605U);
    msg.setSourceEntity(88U);
    msg.setDestination(1654U);
    msg.setDestinationEntity(249U);
    msg.value = 0.13732278717;

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
    msg.setTimeStamp(0.446577873579);
    msg.setSource(47303U);
    msg.setSourceEntity(157U);
    msg.setDestination(53885U);
    msg.setDestinationEntity(59U);
    msg.value = 0.203590730676;

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
    msg.setTimeStamp(0.724539284423);
    msg.setSource(17294U);
    msg.setSourceEntity(249U);
    msg.setDestination(33436U);
    msg.setDestinationEntity(235U);
    msg.value = 0.121466617937;

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
    msg.setTimeStamp(0.436986936775);
    msg.setSource(42772U);
    msg.setSourceEntity(108U);
    msg.setDestination(42376U);
    msg.setDestinationEntity(44U);
    msg.value = 0.618530440612;

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
    msg.setTimeStamp(0.477278223617);
    msg.setSource(53199U);
    msg.setSourceEntity(46U);
    msg.setDestination(56214U);
    msg.setDestinationEntity(25U);
    msg.value = 0.721184222987;

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
    msg.setTimeStamp(0.117182059679);
    msg.setSource(20304U);
    msg.setSourceEntity(152U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(14U);
    msg.value = 0.603648796794;

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
    msg.setTimeStamp(0.156291367384);
    msg.setSource(47256U);
    msg.setSourceEntity(128U);
    msg.setDestination(29752U);
    msg.setDestinationEntity(222U);
    msg.value = 0.243947246405;

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
    msg.setTimeStamp(0.0752612035766);
    msg.setSource(33084U);
    msg.setSourceEntity(60U);
    msg.setDestination(64545U);
    msg.setDestinationEntity(104U);
    msg.value = 0.489972499923;

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
    msg.setTimeStamp(0.567940084631);
    msg.setSource(58412U);
    msg.setSourceEntity(196U);
    msg.setDestination(39393U);
    msg.setDestinationEntity(120U);
    msg.value = 0.298784087731;

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
    msg.setTimeStamp(0.617822515851);
    msg.setSource(58057U);
    msg.setSourceEntity(249U);
    msg.setDestination(57793U);
    msg.setDestinationEntity(87U);
    msg.value = 0.49027271244;

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
    msg.setTimeStamp(0.960525744799);
    msg.setSource(7133U);
    msg.setSourceEntity(157U);
    msg.setDestination(31346U);
    msg.setDestinationEntity(0U);
    msg.value = 0.385427099136;

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
    msg.setTimeStamp(0.467418400872);
    msg.setSource(9266U);
    msg.setSourceEntity(75U);
    msg.setDestination(4592U);
    msg.setDestinationEntity(98U);
    msg.value = 0.0247543506671;

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
    msg.setTimeStamp(0.261110411037);
    msg.setSource(16435U);
    msg.setSourceEntity(164U);
    msg.setDestination(63481U);
    msg.setDestinationEntity(198U);
    msg.value = 0.461107825483;

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
    msg.setTimeStamp(0.827595633833);
    msg.setSource(45314U);
    msg.setSourceEntity(139U);
    msg.setDestination(26493U);
    msg.setDestinationEntity(145U);
    msg.value = 0.270253995611;

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
    msg.setTimeStamp(0.370922050948);
    msg.setSource(23023U);
    msg.setSourceEntity(254U);
    msg.setDestination(34397U);
    msg.setDestinationEntity(38U);
    msg.value = 0.202752069101;

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
    msg.setTimeStamp(0.126248832422);
    msg.setSource(7118U);
    msg.setSourceEntity(152U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(11U);
    msg.value = 0.0975657506137;

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
    msg.setTimeStamp(0.346392415494);
    msg.setSource(36631U);
    msg.setSourceEntity(28U);
    msg.setDestination(4726U);
    msg.setDestinationEntity(209U);
    msg.value = 0.446326141427;

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
    msg.setTimeStamp(0.657413707025);
    msg.setSource(16953U);
    msg.setSourceEntity(58U);
    msg.setDestination(50019U);
    msg.setDestinationEntity(219U);
    msg.direction = 0.0976929479764;
    msg.speed = 0.592144956831;
    msg.turbulence = 0.490835037317;

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
    msg.setTimeStamp(0.21331431478);
    msg.setSource(6863U);
    msg.setSourceEntity(87U);
    msg.setDestination(21095U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.866299627894;
    msg.speed = 0.698153674644;
    msg.turbulence = 0.347223955223;

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
    msg.setTimeStamp(0.64915704802);
    msg.setSource(36929U);
    msg.setSourceEntity(38U);
    msg.setDestination(54564U);
    msg.setDestinationEntity(184U);
    msg.direction = 0.66838239459;
    msg.speed = 0.566946335539;
    msg.turbulence = 0.678035748878;

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
    msg.setTimeStamp(0.755678755002);
    msg.setSource(63333U);
    msg.setSourceEntity(228U);
    msg.setDestination(53438U);
    msg.setDestinationEntity(24U);
    msg.value = 0.137546853555;

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
    msg.setTimeStamp(0.239929315681);
    msg.setSource(21300U);
    msg.setSourceEntity(59U);
    msg.setDestination(28603U);
    msg.setDestinationEntity(98U);
    msg.value = 0.813535029533;

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
    msg.setTimeStamp(0.323453280867);
    msg.setSource(54698U);
    msg.setSourceEntity(97U);
    msg.setDestination(49185U);
    msg.setDestinationEntity(215U);
    msg.value = 0.673800260335;

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
    msg.setTimeStamp(0.882259894657);
    msg.setSource(57834U);
    msg.setSourceEntity(37U);
    msg.setDestination(32277U);
    msg.setDestinationEntity(116U);
    msg.value.assign("IVOQBZEIDFRDIYQNMKIYAQLFLFZVNQKMEWASIAEJRJCSYGJKDWYTCGRWXGNUPIPPCZFLHUNVMMMUOVYCOGJKRHLAOSOXTBOXTIHHFPWZCRNHSWWNJZRJUKCELDAJXZKDUTSQ");

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
    msg.setTimeStamp(0.928930403895);
    msg.setSource(36595U);
    msg.setSourceEntity(169U);
    msg.setDestination(2612U);
    msg.setDestinationEntity(132U);
    msg.value.assign("WGBPWVDUGXLXJCUZFIECRHWKQYRRQDKGMMDVXYFAZESFAKAWPEAPYKILUDYJYPUGMHSXEZFUCJWXHQECOPJTAEOTNSHNISMWRBZVNBVOWQQTUZNHRGLDSMICKOJNSZHFSPRJYGIBGYILDJ");

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
    msg.setTimeStamp(0.78400460163);
    msg.setSource(56558U);
    msg.setSourceEntity(117U);
    msg.setDestination(3918U);
    msg.setDestinationEntity(163U);
    msg.value.assign("SZERIRLAESFHALTNDMRFOKJLPPM");

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
    msg.setTimeStamp(0.589548771979);
    msg.setSource(25167U);
    msg.setSourceEntity(122U);
    msg.setDestination(20465U);
    msg.setDestinationEntity(209U);
    const char tmp_msg_0[] = {-57, 115, 77, 39, -92, 64, 89, 116, -31, 16, -22, -31, -111, 87, -128, 108, -73, 34, 105, -28, 92, -98, 3, -27, -24, 110, -61, -123, -72, 77, 28, -114, -101, 34, 66, -5, 57, -27, -75, 14, -126, 68, 41, 100, -108, 27, -76, -115, -53, -127, 64, -39, -42, 18, 69, 18, 66, 18, 11, 34};
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
    msg.setTimeStamp(0.795297400313);
    msg.setSource(2503U);
    msg.setSourceEntity(124U);
    msg.setDestination(60782U);
    msg.setDestinationEntity(172U);
    const char tmp_msg_0[] = {42, 19, 91, -20, 58, -11, -80, -100, -105, 77, 74, 23, 124, -20, -1, -22, -114, 87, -112, -75, 71, 99, -59, 46, 58, -45, -106, -86, 25, -20, 110, -39, -55, 118, -47, -113, -64, 107, 121, 73, 65, 103, -116, -89, 12, -35, 116, 95, 113, -32, -111, 8, -3, 126, -86, -53, 125, 72, -70, -98, 49, -17, 26, 42, 5, -43, -60, -127, 71, 74, 29, -50, -98, -62, -30, 88, 26, -28, -39, 94, -6, 67, -39, -59, 35, 6, 79, -50, -118, -110, 106, -24, 117, 117, -31, 12, 79, 86, 99, 46, 53, 63, 63, 81, 37, -104, 86, 122, 89, -56, -99, -114, -128, 61, 113, 39, -43, -114, 75, 88, -16, -20, -76, -56, 49, 113, 95, -27, -68, 90, -125, -14, -47, 118, -91, 30, 68, 30, -100, 10, -11, 118, -61, -36, 41, -42, 113, 75, -94, 27, -118, -34, 37, 36, 106, 59, 115, -82, 19, 109, -111, -9, 6, 106, -78, 33, -112, -34, -29, 13, 49, -73, 15, 33, 123, -54, 90, 43, -19, 63, 7, 21, 98, -93, -94, -68, -105, -37, -120, 121, -50, 126, 36, -87, 103, -122, -128, -54, -85, -21, -113, 16, -98, -121, -99, -7, 104, -39, 112, -103, 72, 59, 39, -117, -114, -30, -40, 72, 80, 95, 113, -40, 58, -59, -75, 50, 33, -56, -22, -98, -50, -126, -54, -71, 113, 107, -72, 40, 9, 117, 75, -65, 21, -121};
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
    msg.setTimeStamp(0.921205097208);
    msg.setSource(11767U);
    msg.setSourceEntity(252U);
    msg.setDestination(14934U);
    msg.setDestinationEntity(35U);
    const char tmp_msg_0[] = {104, 94, -52, 14, -28, 81, 116, -22, -51, 9, -2, 111, 59, -73, 86, 4, 20, -104, -18, 89, -72, -6, -60, 0, -38, -120, -59, 79, -46, -84, -71, 57, -101, -114, -60, 39, 74, -98, 93, -43, 122, 9, 31, -85, -110, 51, 91, 54, -117, -112, 70, 39, 126, -76, 20, 71, -4, 90};
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
    msg.setTimeStamp(0.111556145881);
    msg.setSource(47699U);
    msg.setSourceEntity(197U);
    msg.setDestination(18842U);
    msg.setDestinationEntity(13U);
    msg.value = 0.891911960159;

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
    msg.setTimeStamp(0.258176141299);
    msg.setSource(38355U);
    msg.setSourceEntity(154U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(121U);
    msg.value = 0.32198916265;

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
    msg.setTimeStamp(0.579163738057);
    msg.setSource(54628U);
    msg.setSourceEntity(176U);
    msg.setDestination(52900U);
    msg.setDestinationEntity(80U);
    msg.value = 0.803595088122;

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
    msg.setTimeStamp(0.0766433948574);
    msg.setSource(16452U);
    msg.setSourceEntity(249U);
    msg.setDestination(43803U);
    msg.setDestinationEntity(125U);
    msg.type = 99U;
    msg.frequency = 2187995412U;
    msg.min_range = 26695U;
    msg.max_range = 35346U;
    msg.bits_per_point = 171U;
    msg.scale_factor = 0.428835297369;
    const char tmp_msg_0[] = {107, 57, 76, 77, -30, 88, 119, -110, -23, -58, 52, 20, 68, -7, -51, 116, 100, 51, -10, -9, -50, 1, -17, 69, 25, 50, -17, -58, 98, -33, 126, -15, -87, -45, -26, 50, -114, -75, -80, 122, -8, 20, -117, 51, 4, -47, -83, -95, 2, 80, 30, -67, -68, 71, -4, -17, -113, 126, 88, 22, -20, -79, 82, 10, -33, -96, 122, -113, -37, 126, 38, -61, -25, 14, -47, 46, 37, 91, -55, -63, -81, 65, -6, 113, -23, 84, -34, -53, -53, 14, 34, 55, 43, -117, 84, 93, 28, -21, -7, 0, -69, 90, 116, 29, 72, 106, 25, -98, 14, 48, -118, 37, -55, -16, 122, -70, 22, 91, 101, -98, -64, -127, 87, 34, 94, -55, 15, 77, -113, 4, -40, -123, -48, -81, -65, 124, -37, 43, 31, -96, 80, -46, 20, -99, 80, 31, 93, 79, -75, -2, 49, -22, -18, 74, -72, 81, -30, -8, -1, 31, -88, 67, 109, -68, 23, -108, 99, 48, 61, 33, -10, 43, 29, -57, -79, 114, -67, -117, -117, 16, -87, -90, 48, 95, -11, 22, 96, -113, 56};
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
    msg.setTimeStamp(0.202016236321);
    msg.setSource(4050U);
    msg.setSourceEntity(253U);
    msg.setDestination(51919U);
    msg.setDestinationEntity(53U);
    msg.type = 44U;
    msg.frequency = 1367213429U;
    msg.min_range = 26657U;
    msg.max_range = 39405U;
    msg.bits_per_point = 138U;
    msg.scale_factor = 0.362826138955;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.962348818663;
    tmp_msg_0.beam_height = 0.843294900143;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {30, -119, -93, -100, 28, 58, -36, -12, 36, 53, 9, 32, 57, 34, 30, -16, -78, 46, -126, -30, -75, 115, -10, -61, -88, 39, 24, -110, -19, -42, -60, 54, -77, 113, 29, 88, -72, 108, 21, 75, -98, 68, 32, 37, 25, -28, 105, 73, 28, 76, -126, 77, -41, 120, -109, -104, -106, -91, 7, -93, -116, -14, -9, -57, 45, 97, 55, 50, 57, 29, 20, 121, -49, 121, -117, -112, 106, 80, 73, 120, -45, 37, 44, 10, -76, -84, -42, -23, -28, 20, 47, -111, 30, 117, 119, 117, 24, 5, -37, -103, 16, -121, 65, 38, -46, 80, -1, -122, 11, 53, -127, -88, 120, 100, -107, -120, 35, 105, -14, -21, -89, 118, 72, 92, -95, 90, 72, 118, -89, -89, -103, 71, 92, -70, -116, -68, -76, 9, 97, 106, 35, 26, 55, 64, 46, -116, -87};
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
    msg.setTimeStamp(0.092728269315);
    msg.setSource(31596U);
    msg.setSourceEntity(196U);
    msg.setDestination(9731U);
    msg.setDestinationEntity(16U);
    msg.type = 13U;
    msg.frequency = 1255710129U;
    msg.min_range = 11347U;
    msg.max_range = 1614U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.412698978702;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.917988202427;
    tmp_msg_0.beam_height = 0.523334513502;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-113, 14, -39, 66, -116, 15, -125, -99, -110, -38, -8, -38, 11, 104, -99, 47, 123, 118, 53, -84, 75, -22, 112, -63, 78, -100, -101, -60, -109, -23, 26, 75, -46, 64, 20, -50, 106, 121, -109, -45, 68, -22, -116, 83, -79, 122, -78, -96, 50, -108, 17, -7, 43, -42, 102, -97, -81, -63, -114, -96, 96, 79, -106, -126, -116, 99, -10, 109, 121, 36, 115, 45, -5, 28, -66, 24, -71, 34, 107, 100, 109, -35, 101, -111, 68, 24, -3, 71, -92, -87, 2, 44, 37, -97, 27, -40, 47, -120, 52, 16, 103, -24, 118, -50, -115, -124, 28, -14, -91, -18, -68, 28, 13, 81, 12, -13, 44, 84, -98, 30, 87, -104, -102, 40, 22, 90, 104, 75, -60, -103, -3, -70, 93, -120, -111, -50, -52, -84, 2, 37, 63, 6, -39, 101, -123, -37, -79, -6, 80, -36, 105, 55, -17, -68, -118, -9, -68, 12, -35, -98, 60, 50, 13, -108, 32, -62, 31, 51, -5, -37, 47, 81, -70, -103, -12, 67, 15, 81, 60, -125, 66, -118, 36, 8, -88, -99, 45, 93, 106, 27, 12, -60, -21, -26, 9, -109, -119, 24, 86, -74, 78, -116};
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
    msg.setTimeStamp(0.908560899003);
    msg.setSource(49834U);
    msg.setSourceEntity(40U);
    msg.setDestination(64878U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.591983204551);
    msg.setSource(21294U);
    msg.setSourceEntity(151U);
    msg.setDestination(54681U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.332366650175);
    msg.setSource(7064U);
    msg.setSourceEntity(197U);
    msg.setDestination(237U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0261981506651);
    msg.setSource(986U);
    msg.setSourceEntity(249U);
    msg.setDestination(63804U);
    msg.setDestinationEntity(89U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.215110823325);
    msg.setSource(25948U);
    msg.setSourceEntity(95U);
    msg.setDestination(16749U);
    msg.setDestinationEntity(10U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.884259258377);
    msg.setSource(17879U);
    msg.setSourceEntity(142U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(130U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.0798374708737);
    msg.setSource(13311U);
    msg.setSourceEntity(201U);
    msg.setDestination(6978U);
    msg.setDestinationEntity(201U);
    msg.value = 0.719882674321;
    msg.confidence = 0.842586864253;
    msg.opmodes.assign("GQOTYKZBTAPPEAAZZDCRYWXGVMEPBVVPBDYPTZFIFGDYRWOPGDNHNQABHGMUEXWZSCJAWHLBMMQONIJMFITHNCBCWZCOEQHUFNHDMSOQRJKYUIJZGYNOSKIKSNROLUJLMOITPSIGUASXJJERVRFTLHPXXAGRDQKNEVWMFITHZCKUXJXLAETPVOYDVFQKNRFUIFBBVQZJW");

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
    msg.setTimeStamp(0.812684468329);
    msg.setSource(34296U);
    msg.setSourceEntity(68U);
    msg.setDestination(48085U);
    msg.setDestinationEntity(40U);
    msg.value = 0.987298814193;
    msg.confidence = 0.238317464246;
    msg.opmodes.assign("NIMTUQFWGUCZVNVWTWTULZPDYNGGAXGIRFSOBRPSOUQMCDWKEFTJRFIPAYHUPICMZAQJKNZLXZZMAWHYKAEYODGXXIIIMUDDWCWLCSHIZLNUEBVGNGFABXDVWZPMRAYOWCTENLSGVBYODDXPGJOOQPNYVNRJSTEPQUHZWTUVNELYFOTZJERCYLPBRDABKMJTUXHHXBKHHQSEBHLVMKOAQQSRXJBDMKATJKCJVEFEFVFRKPSSJCGX");

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
    msg.setTimeStamp(0.556818750106);
    msg.setSource(12736U);
    msg.setSourceEntity(207U);
    msg.setDestination(65002U);
    msg.setDestinationEntity(83U);
    msg.value = 0.648254355118;
    msg.confidence = 0.759084458991;
    msg.opmodes.assign("AMXNOCNKBCNCYWZRQFLGSNDLRQJTOEIKOPWTYWHYQMHAPADQOVOVACDPZMRTSSHSEJVLSMKBZJZXHPGKWBKWXBYLBKNLZSBEDQUIQPURXMTDHTWICXSTNUMVGJEUUUHL");

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
    msg.setTimeStamp(0.937543940931);
    msg.setSource(13551U);
    msg.setSourceEntity(220U);
    msg.setDestination(18995U);
    msg.setDestinationEntity(231U);
    msg.itow = 2907229741U;
    msg.lat = 0.831775881694;
    msg.lon = 0.813204814947;
    msg.height_ell = 0.0309855323578;
    msg.height_sea = 0.907371125021;
    msg.hacc = 0.599835108197;
    msg.vacc = 0.495554756689;
    msg.vel_n = 0.235107375672;
    msg.vel_e = 0.0482624177371;
    msg.vel_d = 0.299095456856;
    msg.speed = 0.715276552172;
    msg.gspeed = 0.926158008862;
    msg.heading = 0.573471274928;
    msg.sacc = 0.634107138927;
    msg.cacc = 0.17603748742;

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
    msg.setTimeStamp(0.777396984611);
    msg.setSource(28576U);
    msg.setSourceEntity(185U);
    msg.setDestination(30961U);
    msg.setDestinationEntity(177U);
    msg.itow = 2887381894U;
    msg.lat = 0.401344495709;
    msg.lon = 0.618638524608;
    msg.height_ell = 0.354916091418;
    msg.height_sea = 0.521081578875;
    msg.hacc = 0.155456922616;
    msg.vacc = 0.683415443712;
    msg.vel_n = 0.617921280459;
    msg.vel_e = 0.817793184904;
    msg.vel_d = 0.352366182943;
    msg.speed = 0.931130410362;
    msg.gspeed = 0.577709684759;
    msg.heading = 0.289276867922;
    msg.sacc = 0.945248913485;
    msg.cacc = 0.0656371037355;

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
    msg.setTimeStamp(0.836393102872);
    msg.setSource(9760U);
    msg.setSourceEntity(237U);
    msg.setDestination(9025U);
    msg.setDestinationEntity(33U);
    msg.itow = 1232363477U;
    msg.lat = 0.400381457959;
    msg.lon = 0.862665061672;
    msg.height_ell = 0.0158995952138;
    msg.height_sea = 0.803655008892;
    msg.hacc = 0.476632598949;
    msg.vacc = 0.466886762243;
    msg.vel_n = 0.487949213131;
    msg.vel_e = 0.0742311371811;
    msg.vel_d = 0.397819347292;
    msg.speed = 0.00323814913357;
    msg.gspeed = 0.0686481967086;
    msg.heading = 0.0201085743567;
    msg.sacc = 0.802793435559;
    msg.cacc = 0.750497378932;

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
    msg.setTimeStamp(0.823689940657);
    msg.setSource(2825U);
    msg.setSourceEntity(204U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(66U);
    msg.id = 88U;
    msg.value = 0.475666345911;

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
    msg.setTimeStamp(0.723099557912);
    msg.setSource(60947U);
    msg.setSourceEntity(38U);
    msg.setDestination(60282U);
    msg.setDestinationEntity(66U);
    msg.id = 99U;
    msg.value = 0.159915641218;

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
    msg.setTimeStamp(0.957667502227);
    msg.setSource(56318U);
    msg.setSourceEntity(135U);
    msg.setDestination(33759U);
    msg.setDestinationEntity(143U);
    msg.id = 110U;
    msg.value = 0.823133442714;

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
    msg.setTimeStamp(0.145526130179);
    msg.setSource(58813U);
    msg.setSourceEntity(45U);
    msg.setDestination(58385U);
    msg.setDestinationEntity(166U);
    msg.x = 0.483072355485;
    msg.y = 0.909945332083;
    msg.z = 0.646335261863;
    msg.phi = 0.101052122735;
    msg.theta = 0.641947309287;
    msg.psi = 0.924664035595;

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
    msg.setTimeStamp(0.702497681863);
    msg.setSource(4513U);
    msg.setSourceEntity(103U);
    msg.setDestination(57463U);
    msg.setDestinationEntity(14U);
    msg.x = 0.183292127537;
    msg.y = 0.701040835561;
    msg.z = 0.0438137792558;
    msg.phi = 0.412871466207;
    msg.theta = 0.243016659428;
    msg.psi = 0.491378160252;

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
    msg.setTimeStamp(0.50470830954);
    msg.setSource(55284U);
    msg.setSourceEntity(43U);
    msg.setDestination(23123U);
    msg.setDestinationEntity(250U);
    msg.x = 0.0095781775201;
    msg.y = 0.108290340811;
    msg.z = 0.269872848416;
    msg.phi = 0.673170847542;
    msg.theta = 0.673175174152;
    msg.psi = 0.324358571086;

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
    msg.setTimeStamp(0.659669605403);
    msg.setSource(37214U);
    msg.setSourceEntity(92U);
    msg.setDestination(14590U);
    msg.setDestinationEntity(227U);
    msg.beam_width = 0.653027811458;
    msg.beam_height = 0.355964406919;

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
    msg.setTimeStamp(0.990886116558);
    msg.setSource(23093U);
    msg.setSourceEntity(47U);
    msg.setDestination(26178U);
    msg.setDestinationEntity(161U);
    msg.beam_width = 0.62359514763;
    msg.beam_height = 0.177054439275;

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
    msg.setTimeStamp(0.0276088210386);
    msg.setSource(37404U);
    msg.setSourceEntity(67U);
    msg.setDestination(3830U);
    msg.setDestinationEntity(109U);
    msg.beam_width = 0.922242322844;
    msg.beam_height = 0.178691416115;

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
    msg.setTimeStamp(0.731157940832);
    msg.setSource(65305U);
    msg.setSourceEntity(75U);
    msg.setDestination(20395U);
    msg.setDestinationEntity(86U);
    msg.sane = 195U;

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
    msg.setTimeStamp(0.90395050652);
    msg.setSource(7323U);
    msg.setSourceEntity(235U);
    msg.setDestination(38594U);
    msg.setDestinationEntity(65U);
    msg.sane = 157U;

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
    msg.setTimeStamp(0.289285764391);
    msg.setSource(29487U);
    msg.setSourceEntity(32U);
    msg.setDestination(17670U);
    msg.setDestinationEntity(234U);
    msg.sane = 160U;

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
    msg.setTimeStamp(0.737117730856);
    msg.setSource(32160U);
    msg.setSourceEntity(242U);
    msg.setDestination(729U);
    msg.setDestinationEntity(242U);
    msg.value = 0.45752223525;

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
    msg.setTimeStamp(0.725480497813);
    msg.setSource(61249U);
    msg.setSourceEntity(242U);
    msg.setDestination(21464U);
    msg.setDestinationEntity(219U);
    msg.value = 0.890400716058;

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
    msg.setTimeStamp(0.59199635163);
    msg.setSource(18203U);
    msg.setSourceEntity(158U);
    msg.setDestination(54535U);
    msg.setDestinationEntity(148U);
    msg.value = 0.460408724626;

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
    msg.setTimeStamp(0.372779313104);
    msg.setSource(59712U);
    msg.setSourceEntity(73U);
    msg.setDestination(61935U);
    msg.setDestinationEntity(156U);
    msg.value = 0.703729711256;

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
    msg.setTimeStamp(0.187516266663);
    msg.setSource(9750U);
    msg.setSourceEntity(216U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(87U);
    msg.value = 0.538811153075;

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
    msg.setTimeStamp(0.389588577701);
    msg.setSource(27778U);
    msg.setSourceEntity(106U);
    msg.setDestination(7584U);
    msg.setDestinationEntity(68U);
    msg.value = 0.848001156765;

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
    msg.setTimeStamp(0.773849906265);
    msg.setSource(55078U);
    msg.setSourceEntity(184U);
    msg.setDestination(35479U);
    msg.setDestinationEntity(97U);
    msg.value = 0.135683608492;

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
    msg.setTimeStamp(0.911562173049);
    msg.setSource(6383U);
    msg.setSourceEntity(156U);
    msg.setDestination(63242U);
    msg.setDestinationEntity(80U);
    msg.value = 0.927617643909;

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
    msg.setTimeStamp(0.706647052694);
    msg.setSource(22592U);
    msg.setSourceEntity(121U);
    msg.setDestination(1586U);
    msg.setDestinationEntity(123U);
    msg.value = 0.894481530962;

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
    msg.setTimeStamp(0.136985423601);
    msg.setSource(36962U);
    msg.setSourceEntity(241U);
    msg.setDestination(55523U);
    msg.setDestinationEntity(97U);
    msg.value = 0.492505799506;

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
    msg.setTimeStamp(0.542426958668);
    msg.setSource(23929U);
    msg.setSourceEntity(72U);
    msg.setDestination(11278U);
    msg.setDestinationEntity(89U);
    msg.value = 0.951998652819;

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
    msg.setTimeStamp(0.795719272446);
    msg.setSource(40372U);
    msg.setSourceEntity(200U);
    msg.setDestination(41539U);
    msg.setDestinationEntity(153U);
    msg.value = 0.310883551633;

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
    msg.setTimeStamp(0.827149680825);
    msg.setSource(29096U);
    msg.setSourceEntity(147U);
    msg.setDestination(46032U);
    msg.setDestinationEntity(239U);
    msg.value = 0.763426182978;

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
    msg.setTimeStamp(0.139830816017);
    msg.setSource(61137U);
    msg.setSourceEntity(228U);
    msg.setDestination(40648U);
    msg.setDestinationEntity(221U);
    msg.value = 0.823723473817;

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
    msg.setTimeStamp(0.921623556006);
    msg.setSource(44425U);
    msg.setSourceEntity(13U);
    msg.setDestination(36714U);
    msg.setDestinationEntity(85U);
    msg.value = 0.153996250605;

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
    msg.setTimeStamp(0.874454248978);
    msg.setSource(60011U);
    msg.setSourceEntity(158U);
    msg.setDestination(25348U);
    msg.setDestinationEntity(11U);
    msg.value = 0.234266495748;

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
    msg.setTimeStamp(0.130082991081);
    msg.setSource(64660U);
    msg.setSourceEntity(223U);
    msg.setDestination(52936U);
    msg.setDestinationEntity(194U);
    msg.value = 0.862290339491;

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
    msg.setTimeStamp(0.603224595469);
    msg.setSource(317U);
    msg.setSourceEntity(206U);
    msg.setDestination(28051U);
    msg.setDestinationEntity(142U);
    msg.value = 0.959981667443;

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
    msg.setTimeStamp(0.495251521748);
    msg.setSource(17302U);
    msg.setSourceEntity(143U);
    msg.setDestination(59416U);
    msg.setDestinationEntity(144U);
    msg.value = 0.263387514596;

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
    msg.setTimeStamp(0.251424955913);
    msg.setSource(7285U);
    msg.setSourceEntity(18U);
    msg.setDestination(14472U);
    msg.setDestinationEntity(119U);
    msg.value = 0.833119268528;

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
    msg.setTimeStamp(0.534918805278);
    msg.setSource(8104U);
    msg.setSourceEntity(138U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(120U);
    msg.value = 0.354831261839;

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
    msg.setTimeStamp(0.376099586488);
    msg.setSource(20018U);
    msg.setSourceEntity(31U);
    msg.setDestination(57705U);
    msg.setDestinationEntity(60U);
    msg.value = 0.429702180818;

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
    msg.setTimeStamp(0.0330377672277);
    msg.setSource(63748U);
    msg.setSourceEntity(74U);
    msg.setDestination(44203U);
    msg.setDestinationEntity(35U);
    msg.value = 0.932107015905;

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
    msg.setTimeStamp(0.330399474197);
    msg.setSource(45U);
    msg.setSourceEntity(196U);
    msg.setDestination(49454U);
    msg.setDestinationEntity(66U);
    msg.value = 0.56636924128;

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
    msg.setTimeStamp(0.381705523602);
    msg.setSource(25055U);
    msg.setSourceEntity(238U);
    msg.setDestination(52945U);
    msg.setDestinationEntity(245U);
    msg.validity = 21206U;
    msg.type = 188U;
    msg.tow = 2144173910U;
    msg.base_lat = 0.63755322038;
    msg.base_lon = 0.12340487086;
    msg.base_height = 0.72016206928;
    msg.n = 0.542939225332;
    msg.e = 0.566749001979;
    msg.d = 0.320831108699;
    msg.v_n = 0.809924120175;
    msg.v_e = 0.908407154101;
    msg.v_d = 0.497416883292;
    msg.satellites = 72U;
    msg.iar_hyp = 19540U;
    msg.iar_ratio = 0.533826778127;

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
    msg.setTimeStamp(0.183625446243);
    msg.setSource(32023U);
    msg.setSourceEntity(30U);
    msg.setDestination(58157U);
    msg.setDestinationEntity(45U);
    msg.validity = 29512U;
    msg.type = 39U;
    msg.tow = 3144813122U;
    msg.base_lat = 0.427050786922;
    msg.base_lon = 0.605263852774;
    msg.base_height = 0.244578384755;
    msg.n = 0.648910203248;
    msg.e = 0.215059780761;
    msg.d = 0.770365656011;
    msg.v_n = 0.627905583943;
    msg.v_e = 0.739951774087;
    msg.v_d = 0.191539430998;
    msg.satellites = 226U;
    msg.iar_hyp = 32406U;
    msg.iar_ratio = 0.243857765121;

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
    msg.setTimeStamp(0.96386698358);
    msg.setSource(795U);
    msg.setSourceEntity(81U);
    msg.setDestination(47899U);
    msg.setDestinationEntity(27U);
    msg.validity = 63155U;
    msg.type = 164U;
    msg.tow = 4008882603U;
    msg.base_lat = 0.58205813237;
    msg.base_lon = 0.348567292012;
    msg.base_height = 0.977869389372;
    msg.n = 0.346410567739;
    msg.e = 0.0539846776693;
    msg.d = 0.049490429209;
    msg.v_n = 0.319632279561;
    msg.v_e = 0.810926628285;
    msg.v_d = 0.040855016396;
    msg.satellites = 235U;
    msg.iar_hyp = 28776U;
    msg.iar_ratio = 0.562966106782;

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
    msg.setTimeStamp(0.8297150165);
    msg.setSource(32377U);
    msg.setSourceEntity(125U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(80U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.982028692399;
    tmp_msg_0.lon = 0.131291893169;
    tmp_msg_0.height = 0.137524489223;
    tmp_msg_0.x = 0.364805880979;
    tmp_msg_0.y = 0.689372599393;
    tmp_msg_0.z = 0.324773621714;
    tmp_msg_0.phi = 0.205794714805;
    tmp_msg_0.theta = 0.838057451276;
    tmp_msg_0.psi = 0.929243746273;
    tmp_msg_0.u = 0.795080373363;
    tmp_msg_0.v = 0.669260108237;
    tmp_msg_0.w = 0.136367385743;
    tmp_msg_0.vx = 0.0190907541572;
    tmp_msg_0.vy = 0.0274348936722;
    tmp_msg_0.vz = 0.715865032534;
    tmp_msg_0.p = 0.480366327912;
    tmp_msg_0.q = 0.833420080025;
    tmp_msg_0.r = 0.5692901208;
    tmp_msg_0.depth = 0.429520200554;
    tmp_msg_0.alt = 0.734870651247;
    msg.state.set(tmp_msg_0);
    msg.type = 140U;

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
    msg.setTimeStamp(0.0552208528931);
    msg.setSource(61735U);
    msg.setSourceEntity(67U);
    msg.setDestination(39643U);
    msg.setDestinationEntity(42U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.103133145822;
    tmp_msg_0.lon = 0.294210883204;
    tmp_msg_0.height = 0.337703660659;
    tmp_msg_0.x = 0.567863568835;
    tmp_msg_0.y = 0.352625258589;
    tmp_msg_0.z = 0.703898291613;
    tmp_msg_0.phi = 0.0453362915816;
    tmp_msg_0.theta = 0.721961098331;
    tmp_msg_0.psi = 0.706443378872;
    tmp_msg_0.u = 0.416284088836;
    tmp_msg_0.v = 0.338466709722;
    tmp_msg_0.w = 0.464031171872;
    tmp_msg_0.vx = 0.968699402138;
    tmp_msg_0.vy = 0.413620963858;
    tmp_msg_0.vz = 0.503336214243;
    tmp_msg_0.p = 0.0916909628969;
    tmp_msg_0.q = 0.203078027328;
    tmp_msg_0.r = 0.17884954775;
    tmp_msg_0.depth = 0.854151860141;
    tmp_msg_0.alt = 0.180839395945;
    msg.state.set(tmp_msg_0);
    msg.type = 8U;

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
    msg.setTimeStamp(0.862097883495);
    msg.setSource(34622U);
    msg.setSourceEntity(73U);
    msg.setDestination(25424U);
    msg.setDestinationEntity(17U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.719486676774;
    tmp_msg_0.lon = 0.44571403709;
    tmp_msg_0.height = 0.167256923145;
    tmp_msg_0.x = 0.241022544128;
    tmp_msg_0.y = 0.0338312164576;
    tmp_msg_0.z = 0.204224165812;
    tmp_msg_0.phi = 0.904427620379;
    tmp_msg_0.theta = 0.904877911847;
    tmp_msg_0.psi = 0.795428270137;
    tmp_msg_0.u = 0.140630757111;
    tmp_msg_0.v = 0.145493359061;
    tmp_msg_0.w = 0.303052631331;
    tmp_msg_0.vx = 0.939616470664;
    tmp_msg_0.vy = 0.515918957468;
    tmp_msg_0.vz = 0.1605427947;
    tmp_msg_0.p = 0.139254160139;
    tmp_msg_0.q = 0.40959936349;
    tmp_msg_0.r = 0.908469759794;
    tmp_msg_0.depth = 0.502372526758;
    tmp_msg_0.alt = 0.0472113142213;
    msg.state.set(tmp_msg_0);
    msg.type = 173U;

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
    msg.setTimeStamp(0.809261069059);
    msg.setSource(4433U);
    msg.setSourceEntity(5U);
    msg.setDestination(42015U);
    msg.setDestinationEntity(221U);
    msg.value = 0.209974101485;

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
    msg.setTimeStamp(0.291639435469);
    msg.setSource(57187U);
    msg.setSourceEntity(151U);
    msg.setDestination(23897U);
    msg.setDestinationEntity(55U);
    msg.value = 0.36938904355;

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
    msg.setTimeStamp(0.391354654362);
    msg.setSource(8881U);
    msg.setSourceEntity(138U);
    msg.setDestination(12489U);
    msg.setDestinationEntity(28U);
    msg.value = 0.343765746719;

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
    msg.setTimeStamp(0.885992521989);
    msg.setSource(52883U);
    msg.setSourceEntity(150U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(2U);
    msg.value = 0.777484141858;

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
    msg.setTimeStamp(0.637259701755);
    msg.setSource(41512U);
    msg.setSourceEntity(88U);
    msg.setDestination(63346U);
    msg.setDestinationEntity(4U);
    msg.value = 0.290306876776;

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
    msg.setTimeStamp(0.733429547755);
    msg.setSource(43607U);
    msg.setSourceEntity(37U);
    msg.setDestination(27508U);
    msg.setDestinationEntity(180U);
    msg.value = 0.0353989025064;

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
    msg.setTimeStamp(0.0918703876763);
    msg.setSource(53980U);
    msg.setSourceEntity(93U);
    msg.setDestination(48835U);
    msg.setDestinationEntity(178U);
    msg.value = 0.274603504458;

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
    msg.setTimeStamp(0.252946287462);
    msg.setSource(41945U);
    msg.setSourceEntity(189U);
    msg.setDestination(27017U);
    msg.setDestinationEntity(42U);
    msg.value = 0.0501584889479;

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
    msg.setTimeStamp(0.115575750727);
    msg.setSource(38189U);
    msg.setSourceEntity(41U);
    msg.setDestination(63487U);
    msg.setDestinationEntity(169U);
    msg.value = 0.903484333441;

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
    msg.setTimeStamp(0.800118003721);
    msg.setSource(43509U);
    msg.setSourceEntity(93U);
    msg.setDestination(39836U);
    msg.setDestinationEntity(54U);
    msg.value = 0.151570745554;

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
    msg.setTimeStamp(0.709446922201);
    msg.setSource(60685U);
    msg.setSourceEntity(100U);
    msg.setDestination(33755U);
    msg.setDestinationEntity(6U);
    msg.value = 0.249535619252;

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
    msg.setTimeStamp(0.965225481679);
    msg.setSource(5514U);
    msg.setSourceEntity(240U);
    msg.setDestination(42945U);
    msg.setDestinationEntity(1U);
    msg.value = 0.792713860114;

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
    msg.setTimeStamp(0.0341972867601);
    msg.setSource(33208U);
    msg.setSourceEntity(105U);
    msg.setDestination(7828U);
    msg.setDestinationEntity(46U);
    msg.value = 0.418486246748;

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
    msg.setTimeStamp(0.417179997149);
    msg.setSource(44849U);
    msg.setSourceEntity(137U);
    msg.setDestination(26011U);
    msg.setDestinationEntity(230U);
    msg.value = 0.80480511765;

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
    msg.setTimeStamp(0.841894713505);
    msg.setSource(50526U);
    msg.setSourceEntity(33U);
    msg.setDestination(6328U);
    msg.setDestinationEntity(146U);
    msg.value = 0.75128068156;

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
    msg.setTimeStamp(0.555253035757);
    msg.setSource(48098U);
    msg.setSourceEntity(103U);
    msg.setDestination(31481U);
    msg.setDestinationEntity(117U);
    msg.id = 128U;
    msg.zoom = 198U;
    msg.action = 160U;

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
    msg.setTimeStamp(0.597266710079);
    msg.setSource(53838U);
    msg.setSourceEntity(166U);
    msg.setDestination(13638U);
    msg.setDestinationEntity(6U);
    msg.id = 104U;
    msg.zoom = 191U;
    msg.action = 53U;

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
    msg.setTimeStamp(0.603210670043);
    msg.setSource(22252U);
    msg.setSourceEntity(158U);
    msg.setDestination(19654U);
    msg.setDestinationEntity(12U);
    msg.id = 252U;
    msg.zoom = 193U;
    msg.action = 57U;

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
    msg.setTimeStamp(0.719783357298);
    msg.setSource(34207U);
    msg.setSourceEntity(33U);
    msg.setDestination(64621U);
    msg.setDestinationEntity(118U);
    msg.id = 71U;
    msg.value = 0.380342300061;

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
    msg.setTimeStamp(0.42570519195);
    msg.setSource(6079U);
    msg.setSourceEntity(181U);
    msg.setDestination(43550U);
    msg.setDestinationEntity(209U);
    msg.id = 144U;
    msg.value = 0.674277170644;

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
    msg.setTimeStamp(0.62316681456);
    msg.setSource(17796U);
    msg.setSourceEntity(234U);
    msg.setDestination(46016U);
    msg.setDestinationEntity(193U);
    msg.id = 155U;
    msg.value = 0.686119833365;

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
    msg.setTimeStamp(0.378001373006);
    msg.setSource(21012U);
    msg.setSourceEntity(39U);
    msg.setDestination(32163U);
    msg.setDestinationEntity(62U);
    msg.id = 80U;
    msg.value = 0.585512978177;

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
    msg.setTimeStamp(0.165683976627);
    msg.setSource(63399U);
    msg.setSourceEntity(31U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(101U);
    msg.id = 190U;
    msg.value = 0.263571373615;

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
    msg.setTimeStamp(0.164615664675);
    msg.setSource(25157U);
    msg.setSourceEntity(109U);
    msg.setDestination(5349U);
    msg.setDestinationEntity(125U);
    msg.id = 186U;
    msg.value = 0.483620302725;

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
    msg.setTimeStamp(0.810005236839);
    msg.setSource(18611U);
    msg.setSourceEntity(198U);
    msg.setDestination(53337U);
    msg.setDestinationEntity(216U);
    msg.id = 145U;
    msg.angle = 0.741652322829;

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
    msg.setTimeStamp(0.54319304754);
    msg.setSource(64753U);
    msg.setSourceEntity(167U);
    msg.setDestination(59000U);
    msg.setDestinationEntity(89U);
    msg.id = 8U;
    msg.angle = 0.154823803691;

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
    msg.setTimeStamp(0.52837621588);
    msg.setSource(38341U);
    msg.setSourceEntity(174U);
    msg.setDestination(29105U);
    msg.setDestinationEntity(171U);
    msg.id = 168U;
    msg.angle = 0.923513607168;

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
    msg.setTimeStamp(0.434807273459);
    msg.setSource(50040U);
    msg.setSourceEntity(107U);
    msg.setDestination(32260U);
    msg.setDestinationEntity(141U);
    msg.op = 148U;
    msg.actions.assign("XMOURAEPHCFKYWULENRPTWFFUHGSTVMNGIBXVVFSAPMJOIAOJZKPFOCUOGTMHZJFIKDYWWHUJAYRVAFANHZTDSIYFJINUHSKVVOLMWQUTBWRCEEZPXDZWMBKNBMENTOHXCRCLRYBGCLLDNIQLKNGDSZZQBIETJFOUPJQDKKRXQP");

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
    msg.setTimeStamp(0.623819076911);
    msg.setSource(30413U);
    msg.setSourceEntity(198U);
    msg.setDestination(3152U);
    msg.setDestinationEntity(129U);
    msg.op = 175U;
    msg.actions.assign("IKNFSQDCGKTBOWQQXJCMXHCZRWVEAIVGDSAMELZRGYNSZQFUCODPEZXHHGALCM");

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
    msg.setTimeStamp(0.103457056546);
    msg.setSource(18663U);
    msg.setSourceEntity(78U);
    msg.setDestination(64691U);
    msg.setDestinationEntity(100U);
    msg.op = 67U;
    msg.actions.assign("XBPJBJGZYOHGUMLZAMBRTIKOOEHUNWZPADKTENIXKOIPVSLLNYPHJYQRWQPAGQHQKPYBIOYOTGOCAYDRPCGOIAMPZFNMWLWVECUCDETYENMCFJCGRJWZEQKGFWKFANLJPNXBADDVTTXWHETQQBSIDCBKRUUQNRMNWDMUIYRAZZBHMRQBLSCFVULSDFBLMFVWQMZSOKXGJIDVHNRAZVEDAX");

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
    msg.setTimeStamp(0.491104079482);
    msg.setSource(45135U);
    msg.setSourceEntity(132U);
    msg.setDestination(63410U);
    msg.setDestinationEntity(40U);
    msg.actions.assign("ZCOPEUCQLYYFMDMRKRDWLKQQHWNQCTPOMDFVLNMWMKREWYYAYHRHBAFZQQFPCXBRNXWEWSFPSYLDISSXUQGIKXNCDHMOSHGRAUNVRSOBXEDWGZBAYLIAAGCBRYFZDNWNLNTAZXWJTPTFSOGKLJVAXEEVXQIHNOLVXKT");

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
    msg.setTimeStamp(0.542054287439);
    msg.setSource(6238U);
    msg.setSourceEntity(38U);
    msg.setDestination(18884U);
    msg.setDestinationEntity(129U);
    msg.actions.assign("NVATNEYYGGMRWHFLSJJYCFZLYTJFHFUQDNQYCAGUNKKOVFWPRLH");

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
    msg.setTimeStamp(0.441235358433);
    msg.setSource(1839U);
    msg.setSourceEntity(31U);
    msg.setDestination(1946U);
    msg.setDestinationEntity(92U);
    msg.actions.assign("UFZUUMJWBZRWUXOOESLXVGAEVTPQEKBNSKRXJOOYGKMNKFFYFUCHIISSTAQDDOYNLBTNZZOPABXENFPNBBYAXHEZEYQVJCURXRRKTJPTVMQ");

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
    msg.setTimeStamp(0.0520382250729);
    msg.setSource(60340U);
    msg.setSourceEntity(178U);
    msg.setDestination(40714U);
    msg.setDestinationEntity(181U);
    msg.button = 51U;
    msg.value = 83U;

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
    msg.setTimeStamp(0.775553957743);
    msg.setSource(24063U);
    msg.setSourceEntity(247U);
    msg.setDestination(34159U);
    msg.setDestinationEntity(214U);
    msg.button = 211U;
    msg.value = 196U;

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
    msg.setTimeStamp(0.156194652212);
    msg.setSource(44884U);
    msg.setSourceEntity(52U);
    msg.setDestination(8423U);
    msg.setDestinationEntity(111U);
    msg.button = 48U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.689964476971);
    msg.setSource(58460U);
    msg.setSourceEntity(35U);
    msg.setDestination(5680U);
    msg.setDestinationEntity(157U);
    msg.op = 24U;
    msg.text.assign("URLRRORTQLCSZBCENWMSXZFXTMV");

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
    msg.setTimeStamp(0.177985631496);
    msg.setSource(8322U);
    msg.setSourceEntity(109U);
    msg.setDestination(60393U);
    msg.setDestinationEntity(202U);
    msg.op = 37U;
    msg.text.assign("KWNRGFXPEWZLMIWMVOJJMFUAOGIQKUNGTXNLEYESWMRFYRKVPVXZKHKUFVEEGQHHONYLTMZDXQMDYCGCTFJ");

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
    msg.setTimeStamp(0.677944051605);
    msg.setSource(30057U);
    msg.setSourceEntity(124U);
    msg.setDestination(29305U);
    msg.setDestinationEntity(89U);
    msg.op = 166U;
    msg.text.assign("YQVWGHRKDKWJDIURZRKUERGGTOCKACDLGGJNKQGAOJYSVZAVCWHPSCPABZEQBDGMIHGHBOFDYUFOTXLKMMILFQWXCBAYGNDVVIDFJQHIJABQUNHPCHMVOJFEVCLFBXTMJEYSXAQISNIWUAXILNLSSHBDOYUQSSXWEKUJWMVYTFELEZMBPFNRRTXRPMKEPKGTBUNAXOCNNTPSOZPZDLFVFPVJXBEIZTIR");

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
    msg.setTimeStamp(0.32923647751);
    msg.setSource(56228U);
    msg.setSourceEntity(219U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(235U);
    msg.op = 2U;
    msg.time_remain = 0.197333035771;
    msg.sched_time = 0.23876893059;

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
    msg.setTimeStamp(0.106211398078);
    msg.setSource(40590U);
    msg.setSourceEntity(94U);
    msg.setDestination(62517U);
    msg.setDestinationEntity(199U);
    msg.op = 243U;
    msg.time_remain = 0.484673181458;
    msg.sched_time = 0.167944333717;

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
    msg.setTimeStamp(0.523508316833);
    msg.setSource(43604U);
    msg.setSourceEntity(76U);
    msg.setDestination(35337U);
    msg.setDestinationEntity(243U);
    msg.op = 204U;
    msg.time_remain = 0.703788296242;
    msg.sched_time = 0.803834678381;

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
    msg.setTimeStamp(0.965779384071);
    msg.setSource(58821U);
    msg.setSourceEntity(71U);
    msg.setDestination(35786U);
    msg.setDestinationEntity(157U);
    msg.name.assign("QLIXQNABMNZRHAAOHWGQLT");
    msg.op = 70U;
    msg.sched_time = 0.658679419086;

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
    msg.setTimeStamp(0.12655461649);
    msg.setSource(34125U);
    msg.setSourceEntity(224U);
    msg.setDestination(28268U);
    msg.setDestinationEntity(238U);
    msg.name.assign("PVYDGOZVPMFCXRACNKJFHPVGMZNIIWUXDJMMEVYSCZTRAUNUEGORKQKFHOSLEEKCUZPXGQJOAIVQKUQJYRHIADZUBFBGIHTTQOZWAGCQNSTTJXEYGKRYNYCMDGDLTBBXSWJBAMYPZTOXXALFCCDBKEIHSIUWLIRVVYTBMPWRBOHLONKXSLQMDFHEARUUFWBDTUHXLENYJDXRSEQFMZJPWVZSCWKPJSNILILHETPVH");
    msg.op = 163U;
    msg.sched_time = 0.993809448047;

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
    msg.setTimeStamp(0.0888838416805);
    msg.setSource(62546U);
    msg.setSourceEntity(59U);
    msg.setDestination(27784U);
    msg.setDestinationEntity(131U);
    msg.name.assign("PIFQZOCUNBHALYMIETKOPGOGWDZBFLCPBEGFDLZHSBVJWBUXJCRZILFAITCAHRNFUQDTIGAZAWNVSMCTMHBPZSDEVNVUPQVYAKMTWJYVEKAUTMQEYETRVSISQWIJCMAXRHKLHKYLMQNDGPFTOREBNENJTYGEUTGLZJFBCXMRSAKOYVDNOFHRXUJXZZMURDKJUJHNGKZGBRXPNSLCOPOQUFCBLXHFQJWKSWIDI");
    msg.op = 248U;
    msg.sched_time = 0.715615979404;

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
    msg.setTimeStamp(0.318697559879);
    msg.setSource(17340U);
    msg.setSourceEntity(207U);
    msg.setDestination(58859U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.687200182971);
    msg.setSource(14345U);
    msg.setSourceEntity(67U);
    msg.setDestination(41882U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.0365495437285);
    msg.setSource(21218U);
    msg.setSourceEntity(144U);
    msg.setDestination(48351U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.623200112392);
    msg.setSource(11397U);
    msg.setSourceEntity(80U);
    msg.setDestination(16704U);
    msg.setDestinationEntity(123U);
    msg.name.assign("QYXEDMKIMXQNGUTEIXUADBBSWKOEDONJPQXZFFXRYTPAQRRITTASVJGDBVULIDYHPENEFCPWOMJIQMWUMRBTQ");
    msg.state = 166U;

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
    msg.setTimeStamp(0.956128078429);
    msg.setSource(40380U);
    msg.setSourceEntity(92U);
    msg.setDestination(45112U);
    msg.setDestinationEntity(146U);
    msg.name.assign("DDBYOQXUGIYSQPRIQC");
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
    msg.setTimeStamp(0.952996844667);
    msg.setSource(53648U);
    msg.setSourceEntity(142U);
    msg.setDestination(61575U);
    msg.setDestinationEntity(177U);
    msg.name.assign("VFRBOMJFEUBXRTRZSMEIQKANIYC");
    msg.state = 199U;

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
    msg.setTimeStamp(0.611433176318);
    msg.setSource(46679U);
    msg.setSourceEntity(20U);
    msg.setDestination(21899U);
    msg.setDestinationEntity(193U);
    msg.name.assign("PKEPNMNLNQSOABTLMNGEDJWUZPXFDNCYLJYIFOJMBVQGKXSUMZHDXMDHAYKVTOJBQPWUPUIUEOOLLHPXTVQCORQZBPKGROSPZJNQV");
    msg.value = 237U;

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
    msg.setTimeStamp(0.582750126574);
    msg.setSource(62261U);
    msg.setSourceEntity(149U);
    msg.setDestination(64617U);
    msg.setDestinationEntity(182U);
    msg.name.assign("HLVVNGFROFTKKUCKXSFVUWQGBAMIHTIRNQZCAEDLJPQJWBSXZTAYXCQBXGOETNAIRGMROVGQDPUTDLVHGKAP");
    msg.value = 192U;

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
    msg.setTimeStamp(0.161763133299);
    msg.setSource(59520U);
    msg.setSourceEntity(223U);
    msg.setDestination(25465U);
    msg.setDestinationEntity(139U);
    msg.name.assign("SYVDNXAWJVDPOFMITBXGUGPFOCURIUKSKJVYVLXXMCRUEIEQSRTHZDHEXQMTSIHXVUDQOAPEJXUOWCRKNETHZFLWAQGFHCUM");
    msg.value = 22U;

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
    msg.setTimeStamp(0.202970639317);
    msg.setSource(62227U);
    msg.setSourceEntity(114U);
    msg.setDestination(27020U);
    msg.setDestinationEntity(191U);
    msg.name.assign("ARJVUWMZQAKCNLFRUTHGPUTWCKOXRZNNSWBBUSQSMKCMBZVKCKKJXKPQFHWKFTRXSRONJSLKQITUMSINHZBLJBTBMH");

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
    msg.setTimeStamp(0.198788692995);
    msg.setSource(63766U);
    msg.setSourceEntity(49U);
    msg.setDestination(58691U);
    msg.setDestinationEntity(83U);
    msg.name.assign("HPKLLKUCXIDFVEJUWUACDOYDPVFOFZSTSGAMWQLMLYZVOLKKRXNGRHKKOEUSNIFEYJOSEQHZTMWMFSXZJA");

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
    msg.setTimeStamp(0.869873150328);
    msg.setSource(58815U);
    msg.setSourceEntity(149U);
    msg.setDestination(48711U);
    msg.setDestinationEntity(103U);
    msg.name.assign("DTGMRAIRLHRRVQEHKTNUCOPOIGXIFLGKJAIKTLYUJCBOAMUQJUPUVFFFGBDMQCTMYSPVCUFQNOHIMYDYKHTELENSMFZLKWZULOWHZBMXPQGVJXPXSUYNJKXSSENNDDEFSASCSYXICDTIMEWOAGYQCQFVCZFKAJBJKZCVBBMZGPJXEGAICN");

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
    msg.setTimeStamp(0.195407586273);
    msg.setSource(39702U);
    msg.setSourceEntity(193U);
    msg.setDestination(18377U);
    msg.setDestinationEntity(149U);
    msg.name.assign("NJSNSVUOHQQFVESFNBYSHOUDRMELMWWJCISWBGJWMCAPYMGOUDGYJZRPBOVXHGYWAUHZUSZJMAFBTVKSFLTQXBDJCWJMTJYTCWHFKQRTFQIVIKPWHOFRMMBXBHGIDWEVIAATPEEBCXELQLECENOYVDGPDSUXOCPNYRFKXYZRUQELLZRHIDNLLJ");
    msg.value = 216U;

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
    msg.setTimeStamp(0.832700973214);
    msg.setSource(52755U);
    msg.setSourceEntity(137U);
    msg.setDestination(52934U);
    msg.setDestinationEntity(96U);
    msg.name.assign("DQLCTWGQHPOHAWFMRGFZNYJXYCSCNDDSFHLPRIVHRMWSIBJDAYMOPDYGBVOUXNKYVJOTLPVZQQNBUGTOICMOECMKJHAUUEEJPLWLLOYSEKQEOPLGFIQRMSNKWHGNQ");
    msg.value = 124U;

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
    msg.setTimeStamp(0.463275456778);
    msg.setSource(30027U);
    msg.setSourceEntity(76U);
    msg.setDestination(50366U);
    msg.setDestinationEntity(214U);
    msg.name.assign("RSGIUBHQAKAOFZTAVKYDEAOX");
    msg.value = 104U;

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
    msg.setTimeStamp(0.996803620429);
    msg.setSource(56919U);
    msg.setSourceEntity(244U);
    msg.setDestination(258U);
    msg.setDestinationEntity(132U);
    msg.id = 205U;
    msg.period = 4260026810U;
    msg.duty_cycle = 936303170U;

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
    msg.setTimeStamp(0.465271465318);
    msg.setSource(37336U);
    msg.setSourceEntity(127U);
    msg.setDestination(59547U);
    msg.setDestinationEntity(106U);
    msg.id = 247U;
    msg.period = 514149243U;
    msg.duty_cycle = 490665817U;

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
    msg.setTimeStamp(0.571540397042);
    msg.setSource(3756U);
    msg.setSourceEntity(80U);
    msg.setDestination(39141U);
    msg.setDestinationEntity(101U);
    msg.id = 56U;
    msg.period = 858157024U;
    msg.duty_cycle = 4103480612U;

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
    msg.setTimeStamp(0.508340040265);
    msg.setSource(2473U);
    msg.setSourceEntity(143U);
    msg.setDestination(19418U);
    msg.setDestinationEntity(204U);
    msg.id = 69U;
    msg.period = 3199834424U;
    msg.duty_cycle = 387446971U;

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
    msg.setTimeStamp(0.970302313322);
    msg.setSource(41504U);
    msg.setSourceEntity(171U);
    msg.setDestination(15066U);
    msg.setDestinationEntity(213U);
    msg.id = 59U;
    msg.period = 4049829418U;
    msg.duty_cycle = 1053743674U;

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
    msg.setTimeStamp(0.475623124829);
    msg.setSource(15243U);
    msg.setSourceEntity(183U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(148U);
    msg.id = 223U;
    msg.period = 4197559367U;
    msg.duty_cycle = 590072790U;

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
    msg.setTimeStamp(0.867735577795);
    msg.setSource(37976U);
    msg.setSourceEntity(53U);
    msg.setDestination(28546U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.934595641431;
    msg.lon = 0.912341508918;
    msg.height = 0.420923831411;
    msg.x = 0.175382043997;
    msg.y = 0.796949967751;
    msg.z = 0.76457116349;
    msg.phi = 0.747388628538;
    msg.theta = 0.223295852466;
    msg.psi = 0.814011846496;
    msg.u = 0.232500531596;
    msg.v = 0.869658313797;
    msg.w = 0.365843934248;
    msg.vx = 0.755301380441;
    msg.vy = 0.83421496834;
    msg.vz = 0.332827981924;
    msg.p = 0.263471788852;
    msg.q = 0.324825053589;
    msg.r = 0.504054481707;
    msg.depth = 0.241142287604;
    msg.alt = 0.605748601769;

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
    msg.setTimeStamp(0.100801654784);
    msg.setSource(26123U);
    msg.setSourceEntity(28U);
    msg.setDestination(47941U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.997826525318;
    msg.lon = 0.291788026405;
    msg.height = 0.23159890347;
    msg.x = 0.976002729734;
    msg.y = 0.137117538847;
    msg.z = 0.0686492087252;
    msg.phi = 0.427045487562;
    msg.theta = 0.168734705581;
    msg.psi = 0.813993177181;
    msg.u = 0.123425760287;
    msg.v = 0.625933257666;
    msg.w = 0.159244616528;
    msg.vx = 0.725835897096;
    msg.vy = 0.0302048118466;
    msg.vz = 0.620063066103;
    msg.p = 0.794165118627;
    msg.q = 0.283742091576;
    msg.r = 0.953564211031;
    msg.depth = 0.787488338963;
    msg.alt = 0.8134924031;

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
    msg.setTimeStamp(0.451369815448);
    msg.setSource(22887U);
    msg.setSourceEntity(84U);
    msg.setDestination(45537U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.0720353058092;
    msg.lon = 0.192812176751;
    msg.height = 0.346639566079;
    msg.x = 0.81926343623;
    msg.y = 0.967684340934;
    msg.z = 0.277410910347;
    msg.phi = 0.627412585265;
    msg.theta = 0.336617197881;
    msg.psi = 0.654956605937;
    msg.u = 0.563748485067;
    msg.v = 0.824244452911;
    msg.w = 0.467430485058;
    msg.vx = 0.725208310151;
    msg.vy = 0.485857788283;
    msg.vz = 0.714579588691;
    msg.p = 0.844717150198;
    msg.q = 0.392477097914;
    msg.r = 0.450500566901;
    msg.depth = 0.33465413158;
    msg.alt = 0.204564579511;

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
    msg.setTimeStamp(0.950899542707);
    msg.setSource(11996U);
    msg.setSourceEntity(230U);
    msg.setDestination(44409U);
    msg.setDestinationEntity(61U);
    msg.x = 0.391397376164;
    msg.y = 0.703057805335;
    msg.z = 0.684073678968;

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
    msg.setTimeStamp(0.494957859385);
    msg.setSource(56362U);
    msg.setSourceEntity(185U);
    msg.setDestination(27832U);
    msg.setDestinationEntity(29U);
    msg.x = 0.912194912634;
    msg.y = 0.000875238090404;
    msg.z = 0.432037665857;

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
    msg.setTimeStamp(0.447181166534);
    msg.setSource(57770U);
    msg.setSourceEntity(69U);
    msg.setDestination(59190U);
    msg.setDestinationEntity(50U);
    msg.x = 0.98534571984;
    msg.y = 0.0320002921704;
    msg.z = 0.581127655599;

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
    msg.setTimeStamp(0.569168368935);
    msg.setSource(24429U);
    msg.setSourceEntity(206U);
    msg.setDestination(44907U);
    msg.setDestinationEntity(217U);
    msg.value = 0.380223333162;

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
    msg.setTimeStamp(0.827216276766);
    msg.setSource(45502U);
    msg.setSourceEntity(171U);
    msg.setDestination(46985U);
    msg.setDestinationEntity(211U);
    msg.value = 0.831682465375;

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
    msg.setTimeStamp(0.190262051446);
    msg.setSource(6043U);
    msg.setSourceEntity(182U);
    msg.setDestination(12930U);
    msg.setDestinationEntity(234U);
    msg.value = 0.454209842893;

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
    msg.setTimeStamp(0.434942011651);
    msg.setSource(62175U);
    msg.setSourceEntity(151U);
    msg.setDestination(21190U);
    msg.setDestinationEntity(148U);
    msg.value = 0.321519948193;

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
    msg.setTimeStamp(0.690334312066);
    msg.setSource(33153U);
    msg.setSourceEntity(159U);
    msg.setDestination(48136U);
    msg.setDestinationEntity(94U);
    msg.value = 0.901548013099;

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
    msg.setTimeStamp(0.294227850661);
    msg.setSource(6765U);
    msg.setSourceEntity(13U);
    msg.setDestination(33008U);
    msg.setDestinationEntity(110U);
    msg.value = 0.901523292011;

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
    msg.setTimeStamp(0.924904792875);
    msg.setSource(317U);
    msg.setSourceEntity(214U);
    msg.setDestination(13474U);
    msg.setDestinationEntity(40U);
    msg.x = 0.138269831687;
    msg.y = 0.288063249682;
    msg.z = 0.0983894413445;
    msg.phi = 0.103425611569;
    msg.theta = 0.551604565313;
    msg.psi = 0.728341495489;
    msg.p = 0.0188041718568;
    msg.q = 0.224266217581;
    msg.r = 0.58744311751;
    msg.u = 0.352831969325;
    msg.v = 0.60061343291;
    msg.w = 0.20581264515;
    msg.bias_psi = 0.0807119501973;
    msg.bias_r = 0.478923291536;

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
    msg.setTimeStamp(0.570340172306);
    msg.setSource(51048U);
    msg.setSourceEntity(27U);
    msg.setDestination(59790U);
    msg.setDestinationEntity(225U);
    msg.x = 0.380723813116;
    msg.y = 0.337666606551;
    msg.z = 0.997196937246;
    msg.phi = 0.809630211438;
    msg.theta = 0.19539153056;
    msg.psi = 0.223657749004;
    msg.p = 0.0610484337468;
    msg.q = 0.323709941177;
    msg.r = 0.791240932697;
    msg.u = 0.0781731560298;
    msg.v = 0.512043052115;
    msg.w = 0.115944281194;
    msg.bias_psi = 0.0548371960978;
    msg.bias_r = 0.732939868998;

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
    msg.setTimeStamp(0.492178723872);
    msg.setSource(28278U);
    msg.setSourceEntity(156U);
    msg.setDestination(25323U);
    msg.setDestinationEntity(172U);
    msg.x = 0.0177577386264;
    msg.y = 0.193875572388;
    msg.z = 0.0180329156777;
    msg.phi = 0.217219453059;
    msg.theta = 0.892792988356;
    msg.psi = 0.457400791807;
    msg.p = 0.713543914552;
    msg.q = 0.122564826735;
    msg.r = 0.945493247531;
    msg.u = 0.360783201047;
    msg.v = 0.875428650621;
    msg.w = 0.707351691182;
    msg.bias_psi = 0.171679220401;
    msg.bias_r = 0.582996217243;

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
    msg.setTimeStamp(0.849620676924);
    msg.setSource(36090U);
    msg.setSourceEntity(251U);
    msg.setDestination(63628U);
    msg.setDestinationEntity(237U);
    msg.bias_psi = 0.157375277108;
    msg.bias_r = 0.438487132784;
    msg.cog = 0.115622926562;
    msg.cyaw = 0.82082737836;
    msg.gps_rej_level = 0.225504003324;
    msg.lbl_rej_level = 0.241627693689;
    msg.custom_x = 0.547689437634;
    msg.custom_y = 0.886078445599;
    msg.custom_z = 0.0446817536702;

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
    msg.setTimeStamp(0.34792447496);
    msg.setSource(20731U);
    msg.setSourceEntity(189U);
    msg.setDestination(30044U);
    msg.setDestinationEntity(140U);
    msg.bias_psi = 0.0521257069013;
    msg.bias_r = 0.0823220439806;
    msg.cog = 0.751570535432;
    msg.cyaw = 0.833747472456;
    msg.gps_rej_level = 0.0935691359946;
    msg.lbl_rej_level = 0.936580357225;
    msg.custom_x = 0.732637282691;
    msg.custom_y = 0.292363714838;
    msg.custom_z = 0.731852086276;

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
    msg.setTimeStamp(0.0189705752342);
    msg.setSource(51838U);
    msg.setSourceEntity(31U);
    msg.setDestination(50686U);
    msg.setDestinationEntity(187U);
    msg.bias_psi = 0.28648144251;
    msg.bias_r = 0.197287545985;
    msg.cog = 0.128797700883;
    msg.cyaw = 0.314078460242;
    msg.gps_rej_level = 0.693533444426;
    msg.lbl_rej_level = 0.650924541752;
    msg.custom_x = 0.818329836661;
    msg.custom_y = 0.986492208483;
    msg.custom_z = 0.20912930479;

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
    msg.setTimeStamp(0.232943961462);
    msg.setSource(16666U);
    msg.setSourceEntity(228U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(187U);
    msg.utc_time = 0.907249221332;
    msg.reason = 56U;

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
    msg.setTimeStamp(0.522196957062);
    msg.setSource(9332U);
    msg.setSourceEntity(175U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(23U);
    msg.utc_time = 0.126399092191;
    msg.reason = 235U;

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
    msg.setTimeStamp(0.675427479906);
    msg.setSource(25428U);
    msg.setSourceEntity(126U);
    msg.setDestination(14689U);
    msg.setDestinationEntity(38U);
    msg.utc_time = 0.851264361576;
    msg.reason = 36U;

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
    msg.setTimeStamp(0.268179939567);
    msg.setSource(43032U);
    msg.setSourceEntity(75U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(206U);
    msg.id = 217U;
    msg.range = 0.742594509407;
    msg.acceptance = 111U;

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
    msg.setTimeStamp(0.27441673452);
    msg.setSource(14787U);
    msg.setSourceEntity(74U);
    msg.setDestination(12227U);
    msg.setDestinationEntity(3U);
    msg.id = 57U;
    msg.range = 0.945903252387;
    msg.acceptance = 49U;

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
    msg.setTimeStamp(0.486357563291);
    msg.setSource(51544U);
    msg.setSourceEntity(112U);
    msg.setDestination(7516U);
    msg.setDestinationEntity(144U);
    msg.id = 23U;
    msg.range = 0.795966410928;
    msg.acceptance = 168U;

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
    msg.setTimeStamp(0.0872568067767);
    msg.setSource(19212U);
    msg.setSourceEntity(28U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(141U);
    msg.type = 119U;
    msg.reason = 4U;
    msg.value = 0.47061926685;
    msg.timestep = 0.614416224141;

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
    msg.setTimeStamp(0.910781554564);
    msg.setSource(25562U);
    msg.setSourceEntity(39U);
    msg.setDestination(54976U);
    msg.setDestinationEntity(96U);
    msg.type = 241U;
    msg.reason = 107U;
    msg.value = 0.438993719487;
    msg.timestep = 0.128110345761;

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
    msg.setTimeStamp(0.888260987226);
    msg.setSource(9844U);
    msg.setSourceEntity(38U);
    msg.setDestination(18738U);
    msg.setDestinationEntity(153U);
    msg.type = 159U;
    msg.reason = 167U;
    msg.value = 0.390463950288;
    msg.timestep = 0.183488357926;

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
    msg.setTimeStamp(0.856228035111);
    msg.setSource(37834U);
    msg.setSourceEntity(81U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(112U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZSXOSIGHCTAOCWYXQPMCLROXREYEMUPTHNUFAKQVNHLJLKZLJYQJUEDNCHWKQIRSOJKSTPRGMUAWHKYSQBEDRXDKMQCGJTLBHBHDIZFGLYKUIZCPWAEAMXWAXPAEWXZIG");
    tmp_msg_0.lat = 0.75268679578;
    tmp_msg_0.lon = 0.912219182002;
    tmp_msg_0.depth = 0.423155938045;
    tmp_msg_0.query_channel = 34U;
    tmp_msg_0.reply_channel = 93U;
    tmp_msg_0.transponder_delay = 28U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.984555298683;
    msg.y = 0.947941641206;
    msg.var_x = 0.43455490315;
    msg.var_y = 0.350709356596;
    msg.distance = 0.503315592225;

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
    msg.setTimeStamp(0.498243097451);
    msg.setSource(47107U);
    msg.setSourceEntity(93U);
    msg.setDestination(37640U);
    msg.setDestinationEntity(164U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KGUHSGYHJIROJPDIYWXMAZFPNPJWXEUMLBXDWVCOGPWIZNKUQTMOBRVUMVLAJATEFYTZPAMKXAGA");
    tmp_msg_0.lat = 0.766953866429;
    tmp_msg_0.lon = 0.645344285724;
    tmp_msg_0.depth = 0.936035486904;
    tmp_msg_0.query_channel = 202U;
    tmp_msg_0.reply_channel = 231U;
    tmp_msg_0.transponder_delay = 89U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.23846735851;
    msg.y = 0.452199321129;
    msg.var_x = 0.622012766995;
    msg.var_y = 0.0256541329189;
    msg.distance = 0.892471537411;

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
    msg.setTimeStamp(0.213007209853);
    msg.setSource(11811U);
    msg.setSourceEntity(142U);
    msg.setDestination(64053U);
    msg.setDestinationEntity(97U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AFPCPGYPPZOFWFQZXESIOGKQTVDSZHGKITIFFGYDZKJTNBJKROCFROZGJIOTHCSWHJXHZMSULCYXEALTILWSMRMBDNB");
    tmp_msg_0.lat = 0.307815288608;
    tmp_msg_0.lon = 0.689512024755;
    tmp_msg_0.depth = 0.142021370185;
    tmp_msg_0.query_channel = 247U;
    tmp_msg_0.reply_channel = 210U;
    tmp_msg_0.transponder_delay = 37U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.667226468918;
    msg.y = 0.102926893845;
    msg.var_x = 0.671869696486;
    msg.var_y = 0.272354047292;
    msg.distance = 0.302119804118;

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
    msg.setTimeStamp(0.7916029277);
    msg.setSource(28375U);
    msg.setSourceEntity(23U);
    msg.setDestination(19480U);
    msg.setDestinationEntity(122U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.347754300696);
    msg.setSource(1508U);
    msg.setSourceEntity(19U);
    msg.setDestination(50521U);
    msg.setDestinationEntity(103U);
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
    msg.setTimeStamp(0.315863756744);
    msg.setSource(58172U);
    msg.setSourceEntity(254U);
    msg.setDestination(65392U);
    msg.setDestinationEntity(130U);
    msg.state = 26U;

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
    msg.setTimeStamp(0.938930364718);
    msg.setSource(29813U);
    msg.setSourceEntity(206U);
    msg.setDestination(43883U);
    msg.setDestinationEntity(200U);
    msg.x = 0.984281384441;
    msg.y = 0.341205899554;
    msg.z = 0.865809421508;

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
    msg.setTimeStamp(0.754487933252);
    msg.setSource(21217U);
    msg.setSourceEntity(125U);
    msg.setDestination(41936U);
    msg.setDestinationEntity(26U);
    msg.x = 0.58976515388;
    msg.y = 0.975607936568;
    msg.z = 0.775602138246;

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
    msg.setTimeStamp(0.410720103679);
    msg.setSource(21921U);
    msg.setSourceEntity(128U);
    msg.setDestination(12985U);
    msg.setDestinationEntity(22U);
    msg.x = 0.237461753058;
    msg.y = 0.7572389966;
    msg.z = 0.246812197818;

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
    msg.setTimeStamp(0.947425564637);
    msg.setSource(38588U);
    msg.setSourceEntity(85U);
    msg.setDestination(51578U);
    msg.setDestinationEntity(125U);
    msg.va = 0.985416609603;
    msg.aoa = 0.83430836986;
    msg.ssa = 0.814023711556;

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
    msg.setTimeStamp(0.728637938569);
    msg.setSource(16212U);
    msg.setSourceEntity(82U);
    msg.setDestination(251U);
    msg.setDestinationEntity(65U);
    msg.va = 0.268821763116;
    msg.aoa = 0.445421653764;
    msg.ssa = 0.474538671255;

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
    msg.setTimeStamp(0.0795640878942);
    msg.setSource(35777U);
    msg.setSourceEntity(43U);
    msg.setDestination(51478U);
    msg.setDestinationEntity(92U);
    msg.va = 0.370612033759;
    msg.aoa = 0.44486725174;
    msg.ssa = 0.161037055877;

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
    msg.setTimeStamp(0.499374089668);
    msg.setSource(50921U);
    msg.setSourceEntity(76U);
    msg.setDestination(48816U);
    msg.setDestinationEntity(190U);
    msg.mmsi = 3116387305U;
    msg.lon = 0.417994734565;
    msg.lat = 0.497724623272;
    msg.x = 0.252537901149;
    msg.y = 0.937144064353;
    msg.psi = 0.941113754748;
    msg.u = 0.574378571261;
    msg.v = 0.805523455908;
    msg.a = 0.361215550568;
    msg.b = 0.254291013097;
    msg.c = 0.483892992715;
    msg.d = 0.882399518318;

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
    msg.setTimeStamp(0.443316509152);
    msg.setSource(55220U);
    msg.setSourceEntity(121U);
    msg.setDestination(43096U);
    msg.setDestinationEntity(129U);
    msg.mmsi = 489582110U;
    msg.lon = 0.406139595358;
    msg.lat = 0.0778585398522;
    msg.x = 0.384966208023;
    msg.y = 0.0880489341719;
    msg.psi = 0.169300464896;
    msg.u = 0.0444374479868;
    msg.v = 0.00136887320718;
    msg.a = 0.616660871366;
    msg.b = 0.0464845371828;
    msg.c = 0.0942737494211;
    msg.d = 0.12122240813;

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
    msg.setTimeStamp(0.661370409521);
    msg.setSource(53569U);
    msg.setSourceEntity(50U);
    msg.setDestination(44175U);
    msg.setDestinationEntity(228U);
    msg.mmsi = 2454965998U;
    msg.lon = 0.255877280934;
    msg.lat = 0.578223343064;
    msg.x = 0.891062244631;
    msg.y = 0.884218126687;
    msg.psi = 0.96406441654;
    msg.u = 0.506901923088;
    msg.v = 0.44537434555;
    msg.a = 0.570283418933;
    msg.b = 0.698193588159;
    msg.c = 0.393126228881;
    msg.d = 0.841093207608;

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
    msg.setTimeStamp(0.757804808941);
    msg.setSource(36234U);
    msg.setSourceEntity(56U);
    msg.setDestination(9806U);
    msg.setDestinationEntity(56U);
    msg.value = 0.638556004965;

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
    msg.setTimeStamp(0.199227636701);
    msg.setSource(9011U);
    msg.setSourceEntity(131U);
    msg.setDestination(21637U);
    msg.setDestinationEntity(122U);
    msg.value = 0.896168502591;

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
    msg.setTimeStamp(0.0115715254927);
    msg.setSource(54273U);
    msg.setSourceEntity(48U);
    msg.setDestination(64962U);
    msg.setDestinationEntity(106U);
    msg.value = 0.560443031941;

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
    msg.setTimeStamp(0.422963850504);
    msg.setSource(51635U);
    msg.setSourceEntity(49U);
    msg.setDestination(30943U);
    msg.setDestinationEntity(127U);
    msg.value = 0.957762296452;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.00990086306848);
    msg.setSource(44046U);
    msg.setSourceEntity(62U);
    msg.setDestination(54468U);
    msg.setDestinationEntity(110U);
    msg.value = 0.935920915666;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.317763866064);
    msg.setSource(13203U);
    msg.setSourceEntity(9U);
    msg.setDestination(41754U);
    msg.setDestinationEntity(40U);
    msg.value = 0.408949143727;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.436658693066);
    msg.setSource(22140U);
    msg.setSourceEntity(50U);
    msg.setDestination(44128U);
    msg.setDestinationEntity(39U);
    msg.value = 0.471151422878;
    msg.speed_units = 238U;

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
    msg.setTimeStamp(0.88378569243);
    msg.setSource(48835U);
    msg.setSourceEntity(175U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(76U);
    msg.value = 0.0405507596106;
    msg.speed_units = 11U;

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
    msg.setTimeStamp(0.0667008023004);
    msg.setSource(37355U);
    msg.setSourceEntity(36U);
    msg.setDestination(58358U);
    msg.setDestinationEntity(77U);
    msg.value = 0.353650488308;
    msg.speed_units = 211U;

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
    msg.setTimeStamp(0.103855090902);
    msg.setSource(29581U);
    msg.setSourceEntity(178U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(151U);
    msg.value = 0.617178748737;

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
    msg.setTimeStamp(0.83421094246);
    msg.setSource(54903U);
    msg.setSourceEntity(92U);
    msg.setDestination(38810U);
    msg.setDestinationEntity(229U);
    msg.value = 0.533709514095;

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
    msg.setTimeStamp(0.575885479464);
    msg.setSource(52524U);
    msg.setSourceEntity(205U);
    msg.setDestination(25247U);
    msg.setDestinationEntity(222U);
    msg.value = 0.409803058244;

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
    msg.setTimeStamp(0.805281993492);
    msg.setSource(31851U);
    msg.setSourceEntity(192U);
    msg.setDestination(20980U);
    msg.setDestinationEntity(214U);
    msg.value = 0.735380254789;

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
    msg.setTimeStamp(0.528012442706);
    msg.setSource(465U);
    msg.setSourceEntity(224U);
    msg.setDestination(13899U);
    msg.setDestinationEntity(26U);
    msg.value = 0.775613232232;

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
    msg.setTimeStamp(0.441916478635);
    msg.setSource(40776U);
    msg.setSourceEntity(147U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(1U);
    msg.value = 0.717020256719;

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
    msg.setTimeStamp(0.154038267925);
    msg.setSource(51751U);
    msg.setSourceEntity(12U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(88U);
    msg.value = 0.911529183479;

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
    msg.setTimeStamp(0.0200432804793);
    msg.setSource(63672U);
    msg.setSourceEntity(12U);
    msg.setDestination(22198U);
    msg.setDestinationEntity(204U);
    msg.value = 0.938135557232;

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
    msg.setTimeStamp(0.250022308159);
    msg.setSource(55390U);
    msg.setSourceEntity(213U);
    msg.setDestination(60929U);
    msg.setDestinationEntity(18U);
    msg.value = 0.377090799581;

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
    msg.setTimeStamp(0.315667601838);
    msg.setSource(24365U);
    msg.setSourceEntity(90U);
    msg.setDestination(55073U);
    msg.setDestinationEntity(10U);
    msg.path_ref = 259520989U;
    msg.start_lat = 0.95760328532;
    msg.start_lon = 0.272439583839;
    msg.start_z = 0.252808292667;
    msg.start_z_units = 95U;
    msg.end_lat = 0.668728394404;
    msg.end_lon = 0.411465052273;
    msg.end_z = 0.553306151113;
    msg.end_z_units = 226U;
    msg.speed = 0.475923630712;
    msg.speed_units = 135U;
    msg.lradius = 0.0901611812251;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.0123274904912);
    msg.setSource(8019U);
    msg.setSourceEntity(227U);
    msg.setDestination(65065U);
    msg.setDestinationEntity(202U);
    msg.path_ref = 3402775969U;
    msg.start_lat = 0.0109397999154;
    msg.start_lon = 0.356886596368;
    msg.start_z = 0.872347218756;
    msg.start_z_units = 102U;
    msg.end_lat = 0.0423708982429;
    msg.end_lon = 0.193339025445;
    msg.end_z = 0.124269355862;
    msg.end_z_units = 175U;
    msg.speed = 0.659539772094;
    msg.speed_units = 74U;
    msg.lradius = 0.865522044612;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.870652543672);
    msg.setSource(54735U);
    msg.setSourceEntity(30U);
    msg.setDestination(57015U);
    msg.setDestinationEntity(185U);
    msg.path_ref = 3112608361U;
    msg.start_lat = 0.644778502703;
    msg.start_lon = 0.875357726933;
    msg.start_z = 0.202127047312;
    msg.start_z_units = 213U;
    msg.end_lat = 0.411893754106;
    msg.end_lon = 0.671345714736;
    msg.end_z = 0.970229828664;
    msg.end_z_units = 227U;
    msg.speed = 0.784656203881;
    msg.speed_units = 161U;
    msg.lradius = 0.381223508082;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.550014817229);
    msg.setSource(52209U);
    msg.setSourceEntity(231U);
    msg.setDestination(41620U);
    msg.setDestinationEntity(132U);
    msg.x = 0.867915233606;
    msg.y = 0.417494341217;
    msg.z = 0.800884457771;
    msg.k = 0.73450182016;
    msg.m = 0.85771031509;
    msg.n = 0.276467906979;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.370639202403);
    msg.setSource(53097U);
    msg.setSourceEntity(103U);
    msg.setDestination(43201U);
    msg.setDestinationEntity(232U);
    msg.x = 0.114038423399;
    msg.y = 0.285535034738;
    msg.z = 0.109884206448;
    msg.k = 0.806744794146;
    msg.m = 0.41116657489;
    msg.n = 0.461443752583;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.141261957556);
    msg.setSource(51462U);
    msg.setSourceEntity(162U);
    msg.setDestination(60014U);
    msg.setDestinationEntity(121U);
    msg.x = 0.700359660154;
    msg.y = 0.218076183418;
    msg.z = 0.237028602315;
    msg.k = 0.829845771798;
    msg.m = 0.0833372039028;
    msg.n = 0.246983016492;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.98362629495);
    msg.setSource(58144U);
    msg.setSourceEntity(200U);
    msg.setDestination(37961U);
    msg.setDestinationEntity(77U);
    msg.value = 0.905520452923;

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
    msg.setTimeStamp(0.537171780085);
    msg.setSource(46808U);
    msg.setSourceEntity(23U);
    msg.setDestination(58728U);
    msg.setDestinationEntity(125U);
    msg.value = 0.831400065025;

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
    msg.setTimeStamp(0.256385507357);
    msg.setSource(29992U);
    msg.setSourceEntity(23U);
    msg.setDestination(42400U);
    msg.setDestinationEntity(48U);
    msg.value = 0.81766917213;

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
    msg.setTimeStamp(0.517003780929);
    msg.setSource(59370U);
    msg.setSourceEntity(155U);
    msg.setDestination(63317U);
    msg.setDestinationEntity(19U);
    msg.u = 0.887730693158;
    msg.v = 0.277222126867;
    msg.w = 0.576512472011;
    msg.p = 0.0121889208531;
    msg.q = 0.249105602623;
    msg.r = 0.660164946249;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.155787979537);
    msg.setSource(56327U);
    msg.setSourceEntity(85U);
    msg.setDestination(41087U);
    msg.setDestinationEntity(25U);
    msg.u = 0.315222313219;
    msg.v = 0.767112090092;
    msg.w = 0.550939206257;
    msg.p = 0.178295755297;
    msg.q = 0.620365305104;
    msg.r = 0.0306602977943;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.68074276673);
    msg.setSource(5019U);
    msg.setSourceEntity(88U);
    msg.setDestination(15317U);
    msg.setDestinationEntity(12U);
    msg.u = 0.47270751036;
    msg.v = 0.17203171405;
    msg.w = 0.101096237167;
    msg.p = 0.489119181716;
    msg.q = 0.897443439687;
    msg.r = 0.833919705727;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.869437150605);
    msg.setSource(1943U);
    msg.setSourceEntity(18U);
    msg.setDestination(56248U);
    msg.setDestinationEntity(139U);
    msg.path_ref = 2612471901U;
    msg.start_lat = 0.0815182649037;
    msg.start_lon = 0.828934617356;
    msg.start_z = 0.548378594002;
    msg.start_z_units = 18U;
    msg.end_lat = 0.112827969065;
    msg.end_lon = 0.683776916578;
    msg.end_z = 0.755622696037;
    msg.end_z_units = 140U;
    msg.lradius = 0.902319977054;
    msg.flags = 144U;
    msg.x = 0.743361867102;
    msg.y = 0.494439756679;
    msg.z = 0.48820031778;
    msg.vx = 0.466138016477;
    msg.vy = 0.198509794638;
    msg.vz = 0.743540938769;
    msg.course_error = 0.328536672739;
    msg.eta = 65178U;

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
    msg.setTimeStamp(0.575242925142);
    msg.setSource(195U);
    msg.setSourceEntity(92U);
    msg.setDestination(4010U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 3907708681U;
    msg.start_lat = 0.762010318931;
    msg.start_lon = 0.370320203763;
    msg.start_z = 0.313987054586;
    msg.start_z_units = 131U;
    msg.end_lat = 0.298627784484;
    msg.end_lon = 0.881267688052;
    msg.end_z = 0.442922364685;
    msg.end_z_units = 63U;
    msg.lradius = 0.264522536391;
    msg.flags = 250U;
    msg.x = 0.108161031762;
    msg.y = 0.668967336636;
    msg.z = 0.0743608924454;
    msg.vx = 0.339913276606;
    msg.vy = 0.489077448404;
    msg.vz = 0.514794576028;
    msg.course_error = 0.148656990955;
    msg.eta = 44975U;

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
    msg.setTimeStamp(0.942347910757);
    msg.setSource(28352U);
    msg.setSourceEntity(18U);
    msg.setDestination(63261U);
    msg.setDestinationEntity(161U);
    msg.path_ref = 1512572135U;
    msg.start_lat = 0.224497446401;
    msg.start_lon = 0.542196919111;
    msg.start_z = 0.814647212702;
    msg.start_z_units = 191U;
    msg.end_lat = 0.0321466069466;
    msg.end_lon = 0.789554885752;
    msg.end_z = 0.0355734574034;
    msg.end_z_units = 112U;
    msg.lradius = 0.590974195448;
    msg.flags = 222U;
    msg.x = 0.835506093908;
    msg.y = 0.396655389018;
    msg.z = 0.167634746055;
    msg.vx = 0.341026847072;
    msg.vy = 0.352005621633;
    msg.vz = 0.870362246648;
    msg.course_error = 0.538285518064;
    msg.eta = 22486U;

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
    msg.setTimeStamp(0.447376093983);
    msg.setSource(33431U);
    msg.setSourceEntity(41U);
    msg.setDestination(15861U);
    msg.setDestinationEntity(228U);
    msg.k = 0.334571985134;
    msg.m = 0.903715662557;
    msg.n = 0.632422663343;

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
    msg.setTimeStamp(0.422512341364);
    msg.setSource(50246U);
    msg.setSourceEntity(186U);
    msg.setDestination(34849U);
    msg.setDestinationEntity(105U);
    msg.k = 0.932728817964;
    msg.m = 0.678698222259;
    msg.n = 0.173281835883;

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
    msg.setTimeStamp(0.676259947859);
    msg.setSource(37628U);
    msg.setSourceEntity(209U);
    msg.setDestination(27584U);
    msg.setDestinationEntity(149U);
    msg.k = 0.46346368166;
    msg.m = 0.362272259074;
    msg.n = 0.956829756172;

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
    msg.setTimeStamp(0.875251935296);
    msg.setSource(24782U);
    msg.setSourceEntity(236U);
    msg.setDestination(32436U);
    msg.setDestinationEntity(244U);
    msg.p = 0.755989943456;
    msg.i = 0.0385012931729;
    msg.d = 0.924558269735;
    msg.a = 0.467767507908;

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
    msg.setTimeStamp(0.591815638682);
    msg.setSource(59512U);
    msg.setSourceEntity(8U);
    msg.setDestination(62694U);
    msg.setDestinationEntity(186U);
    msg.p = 0.325851114261;
    msg.i = 0.0063979507558;
    msg.d = 0.261925211315;
    msg.a = 0.112167230718;

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
    msg.setTimeStamp(0.279945824627);
    msg.setSource(36041U);
    msg.setSourceEntity(160U);
    msg.setDestination(40271U);
    msg.setDestinationEntity(231U);
    msg.p = 0.581907611877;
    msg.i = 0.579311986015;
    msg.d = 0.80161384753;
    msg.a = 0.885050852492;

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
    msg.setTimeStamp(0.567768102053);
    msg.setSource(56050U);
    msg.setSourceEntity(54U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(208U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.162830432147);
    msg.setSource(56224U);
    msg.setSourceEntity(191U);
    msg.setDestination(42648U);
    msg.setDestinationEntity(149U);
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
    msg.setTimeStamp(0.569514020847);
    msg.setSource(12010U);
    msg.setSourceEntity(237U);
    msg.setDestination(21727U);
    msg.setDestinationEntity(133U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.652139005221);
    msg.setSource(38271U);
    msg.setSourceEntity(71U);
    msg.setDestination(33362U);
    msg.setDestinationEntity(0U);
    msg.x = 0.0786953677804;
    msg.y = 0.704697782925;
    msg.z = 0.568071342674;
    msg.vx = 0.882037476677;
    msg.vy = 0.484841691636;
    msg.vz = 0.190705288608;
    msg.ax = 0.840594423925;
    msg.ay = 0.140001002347;
    msg.az = 0.536101234474;
    msg.flags = 10104U;

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
    msg.setTimeStamp(0.718564732817);
    msg.setSource(55061U);
    msg.setSourceEntity(99U);
    msg.setDestination(54569U);
    msg.setDestinationEntity(167U);
    msg.x = 0.786483116481;
    msg.y = 0.686142010681;
    msg.z = 0.269779573675;
    msg.vx = 0.204923304375;
    msg.vy = 0.581807691907;
    msg.vz = 0.266823037218;
    msg.ax = 0.0221713522931;
    msg.ay = 0.924490715688;
    msg.az = 0.739457617343;
    msg.flags = 7664U;

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
    msg.setTimeStamp(0.562213796986);
    msg.setSource(63888U);
    msg.setSourceEntity(73U);
    msg.setDestination(24357U);
    msg.setDestinationEntity(243U);
    msg.x = 0.504518215175;
    msg.y = 0.375601758614;
    msg.z = 0.103279993974;
    msg.vx = 0.270346453082;
    msg.vy = 0.568701082365;
    msg.vz = 0.131711218378;
    msg.ax = 0.926841108023;
    msg.ay = 0.350326293124;
    msg.az = 0.274669845955;
    msg.flags = 49201U;

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
    msg.setTimeStamp(0.758433034306);
    msg.setSource(17043U);
    msg.setSourceEntity(98U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(163U);
    msg.value = 0.704747646427;

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
    msg.setTimeStamp(0.674902213133);
    msg.setSource(45293U);
    msg.setSourceEntity(167U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(16U);
    msg.value = 0.976535947638;

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
    msg.setTimeStamp(0.612942553368);
    msg.setSource(18979U);
    msg.setSourceEntity(135U);
    msg.setDestination(19088U);
    msg.setDestinationEntity(79U);
    msg.value = 0.405238967994;

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
    msg.setTimeStamp(0.820053007046);
    msg.setSource(50655U);
    msg.setSourceEntity(86U);
    msg.setDestination(36296U);
    msg.setDestinationEntity(77U);
    msg.timeout = 12640U;
    msg.lat = 0.834165702047;
    msg.lon = 0.869915371403;
    msg.z = 0.947173087233;
    msg.z_units = 101U;
    msg.speed = 0.417755028294;
    msg.speed_units = 166U;
    msg.roll = 0.773712219097;
    msg.pitch = 0.604610300338;
    msg.yaw = 0.845847285371;
    msg.custom.assign("EWFPOTFRDPZAASKTLHBUXXFPGWJGYNWZJDYMLRQNWSEVGAGLBHDSQLIOXMXSISUPRPVMKOLOCROLBCGPHTPAOLMYBJYDKWZLXEJKVEKQVAHSQCVOWCYYQORKBIVZETSFCRMUZXFRWQYSRWNMYEEDEVUZGMXBVXKMNXNDHMTOJEQDTALGFUSWIANAUJFHHVYCQTQNBNIAGZBDEHXGFTQUJIHYKBRICFTBIPTZZJNKNGPSWIPJUC");

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
    msg.setTimeStamp(0.702353555811);
    msg.setSource(10461U);
    msg.setSourceEntity(94U);
    msg.setDestination(39517U);
    msg.setDestinationEntity(245U);
    msg.timeout = 52386U;
    msg.lat = 0.513706794151;
    msg.lon = 0.133556512841;
    msg.z = 0.37570010705;
    msg.z_units = 147U;
    msg.speed = 0.227904078465;
    msg.speed_units = 118U;
    msg.roll = 0.837669188283;
    msg.pitch = 0.915860097176;
    msg.yaw = 0.691232787753;
    msg.custom.assign("TGEJEPCAWXVZFFZLOPZMAJYZBWZRWBKVXBQLRNVJQPWDRID");

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
    msg.setTimeStamp(0.0228953137055);
    msg.setSource(44783U);
    msg.setSourceEntity(128U);
    msg.setDestination(32701U);
    msg.setDestinationEntity(34U);
    msg.timeout = 45351U;
    msg.lat = 0.248847934336;
    msg.lon = 0.363621505503;
    msg.z = 0.464381874821;
    msg.z_units = 129U;
    msg.speed = 0.231363531279;
    msg.speed_units = 233U;
    msg.roll = 0.145371982962;
    msg.pitch = 0.703544072937;
    msg.yaw = 0.941308601566;
    msg.custom.assign("KYXGRONERMITTLIYYZKDMZQYDDLWZUARINNNRSIGWPJUESHOZKKIHBDXMSTNGCGEZVLZNYDAJQNALDBI");

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
    msg.setTimeStamp(0.518947455459);
    msg.setSource(39959U);
    msg.setSourceEntity(65U);
    msg.setDestination(55892U);
    msg.setDestinationEntity(111U);
    msg.timeout = 30158U;
    msg.lat = 0.587533634488;
    msg.lon = 0.66984841555;
    msg.z = 0.121979013718;
    msg.z_units = 111U;
    msg.speed = 0.939770331685;
    msg.speed_units = 18U;
    msg.duration = 60794U;
    msg.radius = 0.96126308878;
    msg.flags = 65U;
    msg.custom.assign("HOLRDJJENARZURZXNVDJTCVPGOUNHKCSDZFXLQSBDMLPJWTEXPUKYREZFHMWSIFYWCLBIXHYHYATMHRGDGXVWWVTKTJNPBZQUEMCYRABWHXZXBQNUDMCCWVUQHMQNSKDXNPKLNQWUAGBGEUOVTOCFRDIIABAQTPDERTFWFDBYYQIYZLABLUVMOVHIJYEPKGUEJMGEJFCFAXK");

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
    msg.setTimeStamp(0.185482733421);
    msg.setSource(32445U);
    msg.setSourceEntity(196U);
    msg.setDestination(44106U);
    msg.setDestinationEntity(100U);
    msg.timeout = 7842U;
    msg.lat = 0.33536862862;
    msg.lon = 0.0244303441881;
    msg.z = 0.847214410191;
    msg.z_units = 135U;
    msg.speed = 0.430194091912;
    msg.speed_units = 36U;
    msg.duration = 35212U;
    msg.radius = 0.532711689028;
    msg.flags = 90U;
    msg.custom.assign("LZWYIMXZJFPWHGZWZEPGLACDVFDXKXQCYAGUBRERZCBSKYBQXZUAOOJXDANBUTRQKDLJTVOFLCNVCLBJKVXQGSHJACOAOPCPTVSBBJMMRFXKVJRAKDYJUFYWHMGEZPVOQLWVCSTPHTNDNTEEDULNRWQISUMBCBFIIKHHGJFNQIKJHAHRNTWEPDNNDGOUMWHUYBIGFVDSFQPXLZUHURYTG");

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
    msg.setTimeStamp(0.785593250237);
    msg.setSource(54662U);
    msg.setSourceEntity(15U);
    msg.setDestination(2809U);
    msg.setDestinationEntity(38U);
    msg.timeout = 28861U;
    msg.lat = 0.524503011815;
    msg.lon = 0.801668135795;
    msg.z = 0.346446300839;
    msg.z_units = 67U;
    msg.speed = 0.130258268957;
    msg.speed_units = 167U;
    msg.duration = 19832U;
    msg.radius = 0.304172562945;
    msg.flags = 244U;
    msg.custom.assign("BGPZVVEZLIRGRJLKWTYZBHQAFTLENBMWYILGGTYUTYISUDICDHIROCJUQZAQNWKKBSLRPWDYODATYXOXFDJJWEOFGEDQWMOLCBTMOCDFEGCWPXRIEPLEDJNBMOSOZVIYVBAXVRSPFGXUBUMYMQZUONLWXZJPZIKTPNQSQMNUSHRAPCTQMW");

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
    msg.setTimeStamp(0.174231630213);
    msg.setSource(51097U);
    msg.setSourceEntity(127U);
    msg.setDestination(52545U);
    msg.setDestinationEntity(217U);
    msg.custom.assign("GGKQQADLNKFMJILHNSVYXNAZLRTXWHSNIFUQRMOPJHHHHJZGFYBPOJMQYTECWOVGGTXAOYJJJ");

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
    msg.setTimeStamp(0.381326315298);
    msg.setSource(60174U);
    msg.setSourceEntity(62U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(0U);
    msg.custom.assign("JLHTAOOTDCBLBRAMEMPWXCIDGQOBZMLTLVSKIAJTKIOVYFZNUDRZWTACJYMEFNQCCZGUABZNXMLGWIBWHHTYLRLRXZSSQJGDHUWUKFWCEBHHICSVRQTIAHRFUSYZEVPWVWVBX");

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
    msg.setTimeStamp(0.614021787541);
    msg.setSource(17511U);
    msg.setSourceEntity(112U);
    msg.setDestination(5050U);
    msg.setDestinationEntity(6U);
    msg.custom.assign("UYOZJEDAPRMAJWRTSMKLDZFHZUIHOHMELZCCSPOYIMXINMDPUWKUHGUEOPAFZOHHOGVALVOYKGIDCSMCBVSHJBLPYWFKQNSJWAQFQQRFBDUVIAWRRVUNKGJKBXAZQMUEETUZNFLBLNCSEGQAVWFEAUTNFMJYEWBYXXWLZLYEZMDZWIBNCXKHYYCGPSDLKRWTIXSTRGFIBQPLROHPXCKGNCIGXRGTXV");

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
    msg.setTimeStamp(0.509730768343);
    msg.setSource(42701U);
    msg.setSourceEntity(213U);
    msg.setDestination(45491U);
    msg.setDestinationEntity(223U);
    msg.timeout = 57954U;
    msg.lat = 0.813378851325;
    msg.lon = 0.426908426746;
    msg.z = 0.48857710194;
    msg.z_units = 41U;
    msg.duration = 30082U;
    msg.speed = 0.264199754825;
    msg.speed_units = 135U;
    msg.type = 36U;
    msg.radius = 0.127660744388;
    msg.length = 0.0504605811017;
    msg.bearing = 0.794652945033;
    msg.direction = 205U;
    msg.custom.assign("WWQCMNEMMTXYYCNPYHDWQRTMFNSUZXSDYFJXFMBSECFSOWAWPVHUBBUPGLDPGACVNWLWZLDAKVVIKQGDKACFHSQAMXYSHEGKNCUATPLSDZVLZNYXOWHYBUWBJSBZRNLCJTETQRGPDHLXKIKSVIVJRBERYLGJCIWCERKGKZZMTPXQAAYUVTZETUDXNRPFDOBDXQVPFZRIUXGFMTKLOIONIOSZUHE");

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
    msg.setTimeStamp(0.0988702211901);
    msg.setSource(35123U);
    msg.setSourceEntity(206U);
    msg.setDestination(23517U);
    msg.setDestinationEntity(129U);
    msg.timeout = 8395U;
    msg.lat = 0.337726703485;
    msg.lon = 0.111144375365;
    msg.z = 0.964577465482;
    msg.z_units = 97U;
    msg.duration = 5548U;
    msg.speed = 0.903879003556;
    msg.speed_units = 177U;
    msg.type = 154U;
    msg.radius = 0.809400398045;
    msg.length = 0.312689624915;
    msg.bearing = 0.895462449236;
    msg.direction = 130U;
    msg.custom.assign("NNEQCDBEXAHTFHMCJSLDGLANGCXHOBBIDAIGOZFQUJWKWFXYYQHRCPBKVSDINARXLZYBXDXDTMMKEVGBJEPZWYXSJHYTTOBVKQCMPOVYFP");

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
    msg.setTimeStamp(0.508703287142);
    msg.setSource(28314U);
    msg.setSourceEntity(126U);
    msg.setDestination(40731U);
    msg.setDestinationEntity(0U);
    msg.timeout = 45653U;
    msg.lat = 0.46238793147;
    msg.lon = 0.554310953018;
    msg.z = 0.848715036532;
    msg.z_units = 244U;
    msg.duration = 17084U;
    msg.speed = 0.103279337863;
    msg.speed_units = 227U;
    msg.type = 168U;
    msg.radius = 0.785574261982;
    msg.length = 0.608968760405;
    msg.bearing = 8.97447354579e-05;
    msg.direction = 201U;
    msg.custom.assign("RUSSOMBNXKVZHFFDBIXHLGEOITCNKSAYKQDUJQD");

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
    msg.setTimeStamp(0.524142128677);
    msg.setSource(21519U);
    msg.setSourceEntity(138U);
    msg.setDestination(54837U);
    msg.setDestinationEntity(6U);
    msg.duration = 51644U;
    msg.custom.assign("XZZSRTCFNKXPEWSTQSUPHVZQCKVEFAQIYYIGCLVWEUBJRGJICFNFMOSDZYMAYOZIKYCTDWVWCRZHEYVLBHRAJAJBRXIQUTJGADLVTYMYKPJPMABEUHKKNBSREHPJZFPTILXUIRSMONQFVFASHTGCVXBYWGUWGXTFKGEVDQDSUHENLPWDSHOXDZXTTHZGROOUM");

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
    msg.setTimeStamp(0.964695518411);
    msg.setSource(30349U);
    msg.setSourceEntity(188U);
    msg.setDestination(5913U);
    msg.setDestinationEntity(150U);
    msg.duration = 65312U;
    msg.custom.assign("TVPNTHJFSPOFPEXKRAZHSSQIDARWCWISPJQBOUBJOTKDELCBBTYDIIICNYIXGWQGQTILWAKEGDWCTUFODVCNWMARLETFOMFXBYLKVLMUKZVZRRSMJKICRJFHONVJEQSEBEQSXDAGJVKTZKFLCZPXXHALQYXMXLRTAFNGDPYQOGGZMMAUCZTBNNWHQPGBVUONRYUDSPA");

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
    msg.setTimeStamp(0.982090938889);
    msg.setSource(11556U);
    msg.setSourceEntity(123U);
    msg.setDestination(16034U);
    msg.setDestinationEntity(35U);
    msg.duration = 38622U;
    msg.custom.assign("FJMJDWFAKECHWXNBEHGEFRGFVYDHWKQSKFYWLBXLHFRYIDMZSNELTUXANPGHMHESORWCITNMQANIOUDPGLDOLVYIYWSAVKUMBMGUVXDMTCRUDWYITPEZSLOSVYJPNLQXZEXAOYLAXNGKQJEQGHVRVRPJVBOVSPZFKGNTTUDLCUDWPUORAHIIVAPOJMUBTBTTSSFJZHFPKCQQQUYRBGAXWZJXGJLJSBKNMIMNFZOWOIKCPIBKCZTCYHZZE");

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
    msg.setTimeStamp(0.509542475848);
    msg.setSource(23051U);
    msg.setSourceEntity(232U);
    msg.setDestination(11824U);
    msg.setDestinationEntity(73U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3255270335U;
    tmp_msg_0.start_lat = 0.122682841852;
    tmp_msg_0.start_lon = 0.449763601125;
    tmp_msg_0.start_z = 0.443955370295;
    tmp_msg_0.start_z_units = 223U;
    tmp_msg_0.end_lat = 0.765686918014;
    tmp_msg_0.end_lon = 0.865742639557;
    tmp_msg_0.end_z = 0.687806169901;
    tmp_msg_0.end_z_units = 116U;
    tmp_msg_0.speed = 0.149799170767;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.lradius = 0.522112805029;
    tmp_msg_0.flags = 217U;
    msg.control.set(tmp_msg_0);
    msg.duration = 57455U;
    msg.custom.assign("AFIKBHPIUCXHBSOFBOTVCFFJGCGRBANMXVHBPOJQPUDLGZVTPXZRNUFWLNMKDFXQNNUJBVGWHTTOAEZGJYMKKADQMRQKHNPEWIQHMZAIDLWMXIJVSRZWXYPQFLYYYOZSHBZJ");

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
    msg.setTimeStamp(0.467266358325);
    msg.setSource(33663U);
    msg.setSourceEntity(227U);
    msg.setDestination(11695U);
    msg.setDestinationEntity(25U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.704505287445;
    msg.control.set(tmp_msg_0);
    msg.duration = 46067U;
    msg.custom.assign("CRNGZUUHRDGPCKOAKSHEMXWLUSSQNECJJLLJXJQVLRXDXSAXUVBEYAGSOHSZRYQVBZWJECOINNATKMZYIOLXRENWTBUINHGFGJOSTBDLYSYIMZJVMDTFRHXAQNPCEAYHTDYVLSFIOOPDWDFXZWWEGXPZRWQOTINUYOUMQEBCVNODT");

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
    msg.setTimeStamp(0.433211182688);
    msg.setSource(58895U);
    msg.setSourceEntity(252U);
    msg.setDestination(12474U);
    msg.setDestinationEntity(189U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 574416891U;
    tmp_msg_0.start_lat = 0.184800582576;
    tmp_msg_0.start_lon = 0.421088580242;
    tmp_msg_0.start_z = 0.786211220205;
    tmp_msg_0.start_z_units = 200U;
    tmp_msg_0.end_lat = 0.963245189478;
    tmp_msg_0.end_lon = 0.563756215285;
    tmp_msg_0.end_z = 0.277015745527;
    tmp_msg_0.end_z_units = 167U;
    tmp_msg_0.speed = 0.140424850316;
    tmp_msg_0.speed_units = 9U;
    tmp_msg_0.lradius = 0.991227410637;
    tmp_msg_0.flags = 38U;
    msg.control.set(tmp_msg_0);
    msg.duration = 14074U;
    msg.custom.assign("QTRMVOEWBZBHCOYSSXOMCNHWPXKYSIPZDGWLFXTGGGFYWUSODOKRCKDBCBJNFMILZXCJBYRLFTZJUYDNEDFKLTXAWLIUSJIHDNCMKJCPMM");

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
    msg.setTimeStamp(0.652085397469);
    msg.setSource(28983U);
    msg.setSourceEntity(125U);
    msg.setDestination(17037U);
    msg.setDestinationEntity(120U);
    msg.timeout = 8872U;
    msg.lat = 0.347013888827;
    msg.lon = 0.457359439686;
    msg.z = 0.896036615672;
    msg.z_units = 85U;
    msg.speed = 0.976290932485;
    msg.speed_units = 31U;
    msg.bearing = 0.562253929585;
    msg.cross_angle = 0.59842056915;
    msg.width = 0.847847145699;
    msg.length = 0.898703693498;
    msg.hstep = 0.286285486104;
    msg.coff = 47U;
    msg.alternation = 35U;
    msg.flags = 78U;
    msg.custom.assign("LBISFNMTVYZVNDLTNQAIYLZBKWMCAHOV");

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
    msg.setTimeStamp(0.0378692188505);
    msg.setSource(23788U);
    msg.setSourceEntity(172U);
    msg.setDestination(65141U);
    msg.setDestinationEntity(212U);
    msg.timeout = 13963U;
    msg.lat = 0.430104465605;
    msg.lon = 0.508312438201;
    msg.z = 0.549194715973;
    msg.z_units = 219U;
    msg.speed = 0.0578853509382;
    msg.speed_units = 95U;
    msg.bearing = 0.984472198003;
    msg.cross_angle = 0.962157611288;
    msg.width = 0.633603359766;
    msg.length = 0.130330550741;
    msg.hstep = 0.913271781317;
    msg.coff = 236U;
    msg.alternation = 28U;
    msg.flags = 108U;
    msg.custom.assign("NWBVAREOEYSDJRSYDKCOWYYGPYJIXLZLRRXQCUHHNUZMGELTBDKUVAYZIKFKSHHIGMDPJCTBEAHQOPZCJLVPSKXGOWSIFBVTWNAHVBMFYVQWDQSLCXUAUTVEKPPQZF");

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
    msg.setTimeStamp(0.853871910033);
    msg.setSource(42136U);
    msg.setSourceEntity(25U);
    msg.setDestination(59441U);
    msg.setDestinationEntity(243U);
    msg.timeout = 26499U;
    msg.lat = 0.281340653574;
    msg.lon = 0.293344038285;
    msg.z = 0.0804731964459;
    msg.z_units = 239U;
    msg.speed = 0.167165383584;
    msg.speed_units = 108U;
    msg.bearing = 0.814726438997;
    msg.cross_angle = 0.107393196304;
    msg.width = 0.245138365596;
    msg.length = 0.202079339597;
    msg.hstep = 0.828594505431;
    msg.coff = 127U;
    msg.alternation = 219U;
    msg.flags = 127U;
    msg.custom.assign("EAVVCBJDEMFFJEZFIPISCWLHJZLMWDVFQZCCNAJSKOEGWILFDPRUHTYDBGRHXGNCYFNGZFUWDVFHHCCPWKGIOQQGMYJYYPEYJMOGQJIVY");

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
    msg.setTimeStamp(0.450987431759);
    msg.setSource(49344U);
    msg.setSourceEntity(38U);
    msg.setDestination(19673U);
    msg.setDestinationEntity(89U);
    msg.timeout = 24773U;
    msg.lat = 0.525136367829;
    msg.lon = 0.265235330244;
    msg.z = 0.0497112206038;
    msg.z_units = 98U;
    msg.speed = 0.3605090903;
    msg.speed_units = 234U;
    msg.custom.assign("PBYZBYKXRBUYSFZYYYLBYDJGTNOEUWZLFQDVLPRMQWDHMEHNOIF");

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
    msg.setTimeStamp(0.26557473269);
    msg.setSource(13582U);
    msg.setSourceEntity(10U);
    msg.setDestination(24772U);
    msg.setDestinationEntity(253U);
    msg.timeout = 52132U;
    msg.lat = 0.42281127754;
    msg.lon = 0.129896874103;
    msg.z = 0.088582500657;
    msg.z_units = 24U;
    msg.speed = 0.976455445162;
    msg.speed_units = 32U;
    msg.custom.assign("ONDPKNYVTJUMCNAKWMEVVGZJINHOPQVZXXLZJQDKYLLWXWETKNDZXJHBLGDQSXWOKSMLQGEOSNMOMCSECPCMQTADRTYXWGLZTOIBHUTHUQIHVUHCIKDFIGTUIGJKZAHTPELVESYOMNGYCTMKKBRAMORURHSEQYOWCCXBFDITANBWUGFPDXHCRAVFYAJVZJXBZSALYLQBASZVIUWUVJPDSBNFBFYSFLPDCRWZUKYGOEQQMEFBF");

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
    msg.setTimeStamp(0.749604241021);
    msg.setSource(57314U);
    msg.setSourceEntity(144U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(4U);
    msg.timeout = 41879U;
    msg.lat = 0.542385597899;
    msg.lon = 0.624092578758;
    msg.z = 0.299798601932;
    msg.z_units = 157U;
    msg.speed = 0.352027327774;
    msg.speed_units = 143U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.68935606427;
    tmp_msg_0.y = 0.6218322425;
    tmp_msg_0.z = 0.418735384918;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SWMFZJWOPLNEEQVZSJCIWQFIYIPCTGXFRJAXXLXDPVPHCVAZYKBIZKRMMLGURKLUXEQECVCRGZKRVYKWNFUBQUOBVATIIHTYXFSJUKOKGDOFUVNPEGTNRKHYJRYXTQSDQLMCSIRYWGBTNTHJCHTRKBIHJNQZLDOERDPEDSAHXFHLFNDMQIGPOCJUAZNG");

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
    msg.setTimeStamp(0.2618063939);
    msg.setSource(37052U);
    msg.setSourceEntity(95U);
    msg.setDestination(27113U);
    msg.setDestinationEntity(79U);
    msg.x = 0.893334179535;
    msg.y = 0.177966309835;
    msg.z = 0.626480766038;

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
    msg.setTimeStamp(0.236040010172);
    msg.setSource(37401U);
    msg.setSourceEntity(167U);
    msg.setDestination(13492U);
    msg.setDestinationEntity(126U);
    msg.x = 0.943600695128;
    msg.y = 0.864274075633;
    msg.z = 0.396342376881;

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
    msg.setTimeStamp(0.153406893222);
    msg.setSource(11759U);
    msg.setSourceEntity(85U);
    msg.setDestination(58275U);
    msg.setDestinationEntity(237U);
    msg.x = 0.865654008717;
    msg.y = 0.355331400838;
    msg.z = 0.125114177485;

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
    msg.setTimeStamp(0.297241882315);
    msg.setSource(58980U);
    msg.setSourceEntity(159U);
    msg.setDestination(56062U);
    msg.setDestinationEntity(183U);
    msg.timeout = 25537U;
    msg.lat = 0.980543161688;
    msg.lon = 0.794290819367;
    msg.z = 0.701306249949;
    msg.z_units = 125U;
    msg.amplitude = 0.996027675572;
    msg.pitch = 0.326999469178;
    msg.speed = 0.115742966725;
    msg.speed_units = 241U;
    msg.custom.assign("UPMXEVMBKGHWHBNOCIERUGSBOFLBDOVRFFSUZLVYSERQCGPPCDAMVPJIMTWQHLGRANFIICXYBFARWFTXQVYKQQNZPKROPLSTNENPCHXNZMYYWJMAWZOWCXNLFUJTKHOATVQIFOOUWJYLYASZNTVWCYURTGDBQXTKCBTOEBEGLJMXBIUNWEKSHFQAHKZBXQDHHIFHYZJXRDYOMUCMGTLVZPZJUPDCRKIEILASPSKDAVMSRJNGJ");

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
    msg.setTimeStamp(0.470291443831);
    msg.setSource(11553U);
    msg.setSourceEntity(212U);
    msg.setDestination(17075U);
    msg.setDestinationEntity(22U);
    msg.timeout = 42710U;
    msg.lat = 0.671288409051;
    msg.lon = 0.157566622813;
    msg.z = 0.995984327254;
    msg.z_units = 240U;
    msg.amplitude = 0.283251056837;
    msg.pitch = 0.636122928509;
    msg.speed = 0.812203681055;
    msg.speed_units = 36U;
    msg.custom.assign("JOFEAPUFNARNDWJNKCYVSPGZHCYLWTNEIMZRTHUSRUGHKDCVUCVZEUWKILCLLGBTPVZEWZJBJBGQIQWJWNJLBCPVNWOGZLBIMKYTVELCPADZXVRQMJYRTHFGUXHFHFAMOUUQXKTFHZSITFDCINAXEAWSODARPQQVHYQYSOZBYRBAIZYPMDLPVMYIOGDHSSGNLOYESTFMTUBTKAMEINXAKUIRNDXJSXJOVMXLJQEOPKHXPOSGGXREW");

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
    msg.setTimeStamp(0.238047167995);
    msg.setSource(34474U);
    msg.setSourceEntity(2U);
    msg.setDestination(5626U);
    msg.setDestinationEntity(178U);
    msg.timeout = 24152U;
    msg.lat = 0.398534493323;
    msg.lon = 0.490421257842;
    msg.z = 0.654443501183;
    msg.z_units = 40U;
    msg.amplitude = 0.581809715609;
    msg.pitch = 0.260271048375;
    msg.speed = 0.746674792989;
    msg.speed_units = 235U;
    msg.custom.assign("VJDIORHNLLYHIBGITGVFNLOQQNBZTPAVYMSAYERSUIPQZCQGASBUSTCWDDJYUPEBIGKAABZBNZPPCJCRRDYXNQURNGFTKTKMUHPXUIEWFEOOFKVLZBHXZVXEDVFKDHVDAAEFCPDCAZBJWGIEEZVPLMPRQSVJREXOARRGYKUSZQUKQMCYCJHZLXY");

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
    msg.setTimeStamp(0.588828221584);
    msg.setSource(20946U);
    msg.setSourceEntity(105U);
    msg.setDestination(8589U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.323158276309);
    msg.setSource(21453U);
    msg.setSourceEntity(156U);
    msg.setDestination(27398U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.800700408218);
    msg.setSource(22562U);
    msg.setSourceEntity(236U);
    msg.setDestination(55784U);
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
    msg.setTimeStamp(0.134632161148);
    msg.setSource(6073U);
    msg.setSourceEntity(81U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.504412475343;
    msg.lon = 0.954371293043;
    msg.z = 0.832805269253;
    msg.z_units = 5U;
    msg.radius = 0.878778410661;
    msg.duration = 24685U;
    msg.speed = 0.26022384754;
    msg.speed_units = 120U;
    msg.popup_period = 17619U;
    msg.popup_duration = 773U;
    msg.flags = 202U;
    msg.custom.assign("UXPSHWQSVABMJYFXRFIEPQLLMPRNUTPCGSWBZANMWCEGKQJTWGWMOMDVFODRUYQVTZTYXNUHABHJEEATJLVFTVLFARVDXRRPZUEKKFQYOWKNNICSXLUBCVXYRMMKVDXPCCYSVPAMDDJNKYAOJETOQXIZOQEIFZDQIHRJSECSILGZRHZGBIHLERKGHLZLDGJHYMLZWKECFPU");

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
    msg.setTimeStamp(0.39720367794);
    msg.setSource(57482U);
    msg.setSourceEntity(220U);
    msg.setDestination(41264U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.143680008689;
    msg.lon = 0.559197584188;
    msg.z = 0.719718231296;
    msg.z_units = 115U;
    msg.radius = 0.551458792317;
    msg.duration = 61077U;
    msg.speed = 0.835540773582;
    msg.speed_units = 168U;
    msg.popup_period = 62741U;
    msg.popup_duration = 58153U;
    msg.flags = 56U;
    msg.custom.assign("QVTBAPFAANLMPTMORKXRVUEWUSKRHRSTNZPLJYZXVLYJWZWVHTHBTTYDIFBPYOLWDMGZEEANFGSGFGCNHRQUKZMNXXXPYWSJCMAZOQHTZWPQFRVJSSERGUCEVOIXTJALCGFZWOHSPWYHCBDNYEBFYXIKIUBZNJCRQIIGXUJJ");

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
    msg.setTimeStamp(0.680777031117);
    msg.setSource(58228U);
    msg.setSourceEntity(0U);
    msg.setDestination(14578U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.269208727682;
    msg.lon = 0.77034120911;
    msg.z = 0.174608523949;
    msg.z_units = 15U;
    msg.radius = 0.63356002478;
    msg.duration = 35183U;
    msg.speed = 0.246546644904;
    msg.speed_units = 91U;
    msg.popup_period = 34248U;
    msg.popup_duration = 25162U;
    msg.flags = 240U;
    msg.custom.assign("DZBNEOHHYKHTBBNSDHWEEFDTBUMGXCCRSIDCIKWHJDSTVXBMUJPUZWGMP");

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
    msg.setTimeStamp(0.128986301778);
    msg.setSource(10772U);
    msg.setSourceEntity(192U);
    msg.setDestination(2510U);
    msg.setDestinationEntity(134U);
    msg.timeout = 39142U;
    msg.flags = 13U;
    msg.lat = 0.212779623189;
    msg.lon = 0.948757806608;
    msg.start_z = 0.659805980143;
    msg.start_z_units = 111U;
    msg.end_z = 0.672988402233;
    msg.end_z_units = 144U;
    msg.radius = 0.0423494901045;
    msg.speed = 0.525350995967;
    msg.speed_units = 50U;
    msg.custom.assign("LXHBQPBYSDSDEFSSHHMNXDALRXHXRSVJNCALIWRRNZOYMXVCUVRYVYKHWAAUYBNMKQMZRIPPPFQGLCBWHLENAKQINTGMPEUGLQHNZKIQGFTXWTHVHCFEWZUDPORAYVSTWCEFUBJSAJIBFOVABLTOCIDXNOTJCCCZOFKQMPMPMWIBELFKMAFYJUQSTEOWWGUWJUXOIENJNEMHGKVAGGKKJOTJTGBUBCZTKUDPZYX");

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
    msg.setTimeStamp(0.773266088342);
    msg.setSource(20529U);
    msg.setSourceEntity(19U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(100U);
    msg.timeout = 7646U;
    msg.flags = 3U;
    msg.lat = 0.133501902672;
    msg.lon = 0.695389169716;
    msg.start_z = 0.221675140314;
    msg.start_z_units = 68U;
    msg.end_z = 0.259901489197;
    msg.end_z_units = 80U;
    msg.radius = 0.384265737095;
    msg.speed = 0.716720842369;
    msg.speed_units = 159U;
    msg.custom.assign("ATQHBGNNGYNUTIPHEVVUPHKMKWXMBMMFRLFVKNFARKCWOJWBEONLQPKLPLOZPCYUGLJUMMEVIWPWLYESVEHUOLTROFMLCRANIXJYOQSOCGSGZJIXIQHDKIRDVZIEOUVKNSZSADJBXIYRWQNAPSUZTXEFHCCBZFWQOGQQDBZTQSNXADF");

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
    msg.setTimeStamp(0.456651294479);
    msg.setSource(29181U);
    msg.setSourceEntity(127U);
    msg.setDestination(58128U);
    msg.setDestinationEntity(0U);
    msg.timeout = 58757U;
    msg.flags = 99U;
    msg.lat = 0.568251599603;
    msg.lon = 0.82441710383;
    msg.start_z = 0.971234522728;
    msg.start_z_units = 50U;
    msg.end_z = 0.130322003664;
    msg.end_z_units = 89U;
    msg.radius = 0.201362035458;
    msg.speed = 0.0339775160658;
    msg.speed_units = 167U;
    msg.custom.assign("LUJSUCKENDDJIFCSVXIVQTFFXHAFAUQYLYZBYGTFWITCOPPQJTCLFYCUUCYMQIHNBKVVGKNESBHYQDRMAKNJLYZYTGUABVXOZLNXZWDOAGLHICFXFKJIGFSJCMMBDKUHONSIZMUWBGVRAMPXLXSMEDWJ");

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
    msg.setTimeStamp(0.33466105528);
    msg.setSource(32232U);
    msg.setSourceEntity(162U);
    msg.setDestination(63762U);
    msg.setDestinationEntity(224U);
    msg.timeout = 14497U;
    msg.lat = 0.477495438474;
    msg.lon = 0.327849855629;
    msg.z = 0.61832815975;
    msg.z_units = 101U;
    msg.speed = 0.812434072869;
    msg.speed_units = 104U;
    msg.custom.assign("UEYIQUXOKHYKVFXKLUZMZWFNWZZDYQNAXEZVFLOJSIZRGCPOTSPGTDLATCJODLJSFSQUATJTMOIXIRYSNM");

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
    msg.setTimeStamp(0.888612346302);
    msg.setSource(15684U);
    msg.setSourceEntity(109U);
    msg.setDestination(60937U);
    msg.setDestinationEntity(232U);
    msg.timeout = 2797U;
    msg.lat = 0.927007363419;
    msg.lon = 0.629404643667;
    msg.z = 0.864296109997;
    msg.z_units = 161U;
    msg.speed = 0.13456323113;
    msg.speed_units = 48U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.593780946426;
    tmp_msg_0.y = 0.409904138126;
    tmp_msg_0.z = 0.30779084575;
    tmp_msg_0.t = 0.917077374282;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VTSDVPTSYAQDDZGPSFEUUOWGO");

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
    msg.setTimeStamp(0.562926855128);
    msg.setSource(58359U);
    msg.setSourceEntity(161U);
    msg.setDestination(2530U);
    msg.setDestinationEntity(238U);
    msg.timeout = 55940U;
    msg.lat = 0.0274872410329;
    msg.lon = 0.61597166391;
    msg.z = 0.234596596721;
    msg.z_units = 139U;
    msg.speed = 0.0141694665089;
    msg.speed_units = 75U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.823557086412;
    tmp_msg_0.y = 0.324583896902;
    tmp_msg_0.z = 0.914834805889;
    tmp_msg_0.t = 0.726647359779;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BAVUFMQFBSEGVQTOZIXVBPIDFWKFHVKZVGFDNBEJELWNQJAIBGMJEPKXMGJCXEXZMJWAYLHRUVZKFDDITFHYQRQMSPUCCLESZGPFWJYOEAUPUATCJTPLLFULNZUJJEQGLHYCOKUAISLBTBGOKISXRKXANXQOBNCHPTKTWXHOQYZPYRUYH");

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
    msg.setTimeStamp(0.0405555687247);
    msg.setSource(6972U);
    msg.setSourceEntity(166U);
    msg.setDestination(57820U);
    msg.setDestinationEntity(176U);
    msg.x = 0.284424108197;
    msg.y = 0.546791775277;
    msg.z = 0.35049423954;
    msg.t = 0.0572838097102;

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
    msg.setTimeStamp(0.141844910688);
    msg.setSource(43298U);
    msg.setSourceEntity(185U);
    msg.setDestination(4197U);
    msg.setDestinationEntity(198U);
    msg.x = 0.275253842748;
    msg.y = 0.279366030827;
    msg.z = 0.340151618414;
    msg.t = 0.430671886286;

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
    msg.setTimeStamp(0.88386656689);
    msg.setSource(13287U);
    msg.setSourceEntity(7U);
    msg.setDestination(16844U);
    msg.setDestinationEntity(141U);
    msg.x = 0.59367034259;
    msg.y = 0.2440112312;
    msg.z = 0.996491547678;
    msg.t = 0.206961477725;

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
    msg.setTimeStamp(0.834196511061);
    msg.setSource(33212U);
    msg.setSourceEntity(153U);
    msg.setDestination(46301U);
    msg.setDestinationEntity(239U);
    msg.timeout = 32862U;
    msg.name.assign("NVXFWNGDBPRIKPGKGATIWKYMGWDHRUUJQEZEIFLVRMCUKJFVZUTUXEICNIQSSUXYXMROWPIHHTCELNARAQXPDLSACCIJTXGSDEUANBDWKZOZPLCRYCDRTNFGPGGESSD");
    msg.custom.assign("NFPWSKWEVZSGDQTXHCVPFRHBVPWULIHMRGEAORHZWRWKBLBNXROXEYBCRSZGOALUOSWDQGKTZAWJGNXTXVBEYSBOXZUPFLFYMACHZLKMNOPLTCGJDGQTZVVJLMJHQIYUOJEBDFDTXUZOMIDQCSITSTCQIMPNQFNAFKRUE");

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
    msg.setTimeStamp(0.557037416281);
    msg.setSource(19207U);
    msg.setSourceEntity(186U);
    msg.setDestination(35851U);
    msg.setDestinationEntity(201U);
    msg.timeout = 63979U;
    msg.name.assign("PRERQAIYIBDBQWCKPVACFCHWJTVWOSKGGKUJLGTFQSDWXLIZJHNJMUOWDTAXQWHQEDRI");
    msg.custom.assign("HESYCDJZOXOOKXRVRKMD");

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
    msg.setTimeStamp(0.237200400223);
    msg.setSource(34482U);
    msg.setSourceEntity(167U);
    msg.setDestination(36616U);
    msg.setDestinationEntity(174U);
    msg.timeout = 51775U;
    msg.name.assign("TIAFQXMGMZABJIYHNXOSEGQJUBXAJUNPKZMQLLOMELOHUPDFKTCSPYJHENATVXAQBEVNFKQCAIEKNUFRLKLICREWZYDGQEVGCIQWXTZXAMWXWGQYRTZYVUIHXBUQBSPHHXFNCEVWTDNPMIGGZXRSRUPVJRWZQVPDVRZFTNTWO");
    msg.custom.assign("ABFSIMVXSIFUEXMURLNKLTWYKEYQXWTSGHYQQASVRTTPECOWAWNXYJNLULQUJFEILSWGBJURXILCGJBZFFMNEKKAKOEQDBMZGECIBTZCSYOYWLCHQJKBIVLDQBXEDMTNBQZPOJDZZSWUZEUAAQPVVGJAKCPJSDONHOMRTZDYYBVDCIVWPRFKYHTAGNVAMYVDPMLOJOJFWROPTUVPLPUTGPRQKCX");

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
    msg.setTimeStamp(0.979315947933);
    msg.setSource(32193U);
    msg.setSourceEntity(145U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.794339756396;
    msg.lon = 0.280368274987;
    msg.z = 0.548157010281;
    msg.z_units = 181U;
    msg.speed = 0.558306904295;
    msg.speed_units = 226U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.818969520617;
    tmp_msg_0.y = 0.878461234409;
    tmp_msg_0.z = 0.540923021595;
    tmp_msg_0.t = 0.829813215493;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.180640516065;
    msg.custom.assign("LDLOIHQAGMTANXQGFVLYCAMCRZFYMPGWPXKUBCNWOIZNWODL");

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
    msg.setTimeStamp(0.724204524051);
    msg.setSource(46043U);
    msg.setSourceEntity(135U);
    msg.setDestination(2582U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.811008115095;
    msg.lon = 0.599991469095;
    msg.z = 0.789098597738;
    msg.z_units = 4U;
    msg.speed = 0.612560486666;
    msg.speed_units = 61U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20783U;
    tmp_msg_0.off_x = 0.0198102301378;
    tmp_msg_0.off_y = 0.194839876228;
    tmp_msg_0.off_z = 0.862533653576;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.375874545845;
    msg.custom.assign("ZQOCBYNCWOWVNNYTFCQEBZGJSUMDWJIJNXEPEEMGAUTDBPOASZFEQJLLRPPVFCXTQYMFRVHXJKETQWTMNPQDVXQRINCKFUSTXMSTPBAJMHLRTHXLKBVPCMDMAIVJNXSGZLIAUHGNIRCFHHSEXZNGVEYEKSEAZQLLGYHFXYDKXKFSOTUTRGSFUAMYRKGWBYAYBFDBCDIKQIHWJUZP");

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
    msg.setTimeStamp(0.302872872079);
    msg.setSource(59588U);
    msg.setSourceEntity(110U);
    msg.setDestination(58147U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.334171745856;
    msg.lon = 0.147490928809;
    msg.z = 0.877188460505;
    msg.z_units = 113U;
    msg.speed = 0.556146428366;
    msg.speed_units = 198U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53865U;
    tmp_msg_0.off_x = 0.325808063055;
    tmp_msg_0.off_y = 0.0754131366596;
    tmp_msg_0.off_z = 0.673806651819;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.316906024087;
    msg.custom.assign("FEKFSDCTOJUMLMPLDIWJCFIBSCDXWGCTTRWZSLCZMFEZ");

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
    msg.setTimeStamp(0.950091793838);
    msg.setSource(24509U);
    msg.setSourceEntity(245U);
    msg.setDestination(20452U);
    msg.setDestinationEntity(64U);
    msg.vid = 7646U;
    msg.off_x = 0.846351709984;
    msg.off_y = 0.11886202413;
    msg.off_z = 0.401965713787;

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
    msg.setTimeStamp(0.0196061211652);
    msg.setSource(58516U);
    msg.setSourceEntity(163U);
    msg.setDestination(55337U);
    msg.setDestinationEntity(213U);
    msg.vid = 11983U;
    msg.off_x = 0.0143670432225;
    msg.off_y = 0.695474049895;
    msg.off_z = 0.908188879166;

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
    msg.setTimeStamp(0.738743093764);
    msg.setSource(33689U);
    msg.setSourceEntity(96U);
    msg.setDestination(52760U);
    msg.setDestinationEntity(97U);
    msg.vid = 63706U;
    msg.off_x = 0.563682436842;
    msg.off_y = 0.480491170462;
    msg.off_z = 0.546791168943;

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
    msg.setTimeStamp(0.555932758254);
    msg.setSource(35395U);
    msg.setSourceEntity(105U);
    msg.setDestination(38231U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.634828151648);
    msg.setSource(2098U);
    msg.setSourceEntity(236U);
    msg.setDestination(54406U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.365129680496);
    msg.setSource(37910U);
    msg.setSourceEntity(1U);
    msg.setDestination(53963U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.204114999365);
    msg.setSource(36138U);
    msg.setSourceEntity(208U);
    msg.setDestination(1178U);
    msg.setDestinationEntity(201U);
    msg.mid = 58687U;

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
    msg.setTimeStamp(0.339505994335);
    msg.setSource(7883U);
    msg.setSourceEntity(246U);
    msg.setDestination(53836U);
    msg.setDestinationEntity(202U);
    msg.mid = 23498U;

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
    msg.setTimeStamp(0.442189760646);
    msg.setSource(23165U);
    msg.setSourceEntity(22U);
    msg.setDestination(44782U);
    msg.setDestinationEntity(244U);
    msg.mid = 44624U;

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
    msg.setTimeStamp(0.448980126069);
    msg.setSource(32875U);
    msg.setSourceEntity(208U);
    msg.setDestination(34105U);
    msg.setDestinationEntity(173U);
    msg.state = 167U;
    msg.eta = 16545U;
    msg.info.assign("RWGYOVDLXTZJFOJMYNIOATGZHXUKBLRRDVPBRLZXUZTQHVQSALTBLHEOZOJOHXNPEWWDYCNWNXHRLQMNDFCZQGGEVWVWKSZALTHOEBBSQGMREAKDMDPFVYLGVYIITIKUJFVSQNFMTPDSPXCBOPCBDAWNCJHWMZZBVMPKRUWPGYNCGASSAEPLBHKJHYIYAFEIEXJNMSCURJUMRFYWQAPIJKQUFSHNYCTSTIULJGXQTKVRQB");

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
    msg.setTimeStamp(0.260576330983);
    msg.setSource(30798U);
    msg.setSourceEntity(136U);
    msg.setDestination(8176U);
    msg.setDestinationEntity(35U);
    msg.state = 66U;
    msg.eta = 33952U;
    msg.info.assign("ZJGDFRNRYWIXJMOQDRNSOGQEGKOHMATWDWTYFLGATVVIHVKRQFYOFMFAYLJACVVICQETCJVNDRZSIKMQHXADWPPSMRXXZPALGKRLKLCEHHKKMWNTFTIHZCYXHFL");

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
    msg.setTimeStamp(0.556608204661);
    msg.setSource(62356U);
    msg.setSourceEntity(21U);
    msg.setDestination(22400U);
    msg.setDestinationEntity(144U);
    msg.state = 0U;
    msg.eta = 6546U;
    msg.info.assign("GQODJDBHEFHUETNSSBCWWRPEGFMBCDBOCCAPIGVGQAFKOAPWGGURANYTBMGVMLWTTKRVRWNGQRDZEUQUSNCVPBROLYCPOXWMUWUJQMAAZPHLQKZJHRVSTYMIHPCSOEMIB");

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
    msg.setTimeStamp(0.100503742014);
    msg.setSource(58146U);
    msg.setSourceEntity(190U);
    msg.setDestination(10391U);
    msg.setDestinationEntity(227U);
    msg.system = 26037U;
    msg.duration = 46766U;
    msg.speed = 0.0846144592416;
    msg.speed_units = 200U;
    msg.x = 0.924290806794;
    msg.y = 0.0589698396085;
    msg.z = 0.832796521661;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.538990568151);
    msg.setSource(62336U);
    msg.setSourceEntity(231U);
    msg.setDestination(16147U);
    msg.setDestinationEntity(218U);
    msg.system = 58829U;
    msg.duration = 32934U;
    msg.speed = 0.818024824665;
    msg.speed_units = 232U;
    msg.x = 0.661359103817;
    msg.y = 0.176919755131;
    msg.z = 0.793056932786;
    msg.z_units = 156U;

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
    msg.setTimeStamp(0.963000739354);
    msg.setSource(46630U);
    msg.setSourceEntity(185U);
    msg.setDestination(61745U);
    msg.setDestinationEntity(190U);
    msg.system = 60552U;
    msg.duration = 61500U;
    msg.speed = 0.44415990568;
    msg.speed_units = 223U;
    msg.x = 0.555414190197;
    msg.y = 0.73575708789;
    msg.z = 0.874679725034;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.960234050835);
    msg.setSource(37243U);
    msg.setSourceEntity(77U);
    msg.setDestination(51539U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.960981308555;
    msg.lon = 0.772728118466;
    msg.speed = 0.204571642507;
    msg.speed_units = 245U;
    msg.duration = 32804U;
    msg.sys_a = 24521U;
    msg.sys_b = 53941U;
    msg.move_threshold = 0.847932167103;

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
    msg.setTimeStamp(0.373333681616);
    msg.setSource(20361U);
    msg.setSourceEntity(14U);
    msg.setDestination(6187U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.808384836226;
    msg.lon = 0.0773229305838;
    msg.speed = 0.00271876472297;
    msg.speed_units = 246U;
    msg.duration = 51811U;
    msg.sys_a = 9828U;
    msg.sys_b = 14504U;
    msg.move_threshold = 0.0106615297103;

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
    msg.setTimeStamp(0.100838447008);
    msg.setSource(59206U);
    msg.setSourceEntity(235U);
    msg.setDestination(56109U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.0663064627206;
    msg.lon = 0.726967804997;
    msg.speed = 0.966306640791;
    msg.speed_units = 72U;
    msg.duration = 25205U;
    msg.sys_a = 50754U;
    msg.sys_b = 39078U;
    msg.move_threshold = 0.173674717545;

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
    msg.setTimeStamp(0.132064374782);
    msg.setSource(44726U);
    msg.setSourceEntity(15U);
    msg.setDestination(6708U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.833551327239;
    msg.lon = 0.107902692608;
    msg.z = 0.695043786472;
    msg.z_units = 187U;
    msg.speed = 0.13149402855;
    msg.speed_units = 208U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.764174970535;
    tmp_msg_0.lon = 0.741096768867;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BRQPGTXEHBFKTIGJWYMTHBXWARPHVASMDEIYDNSMYRRYLTXYCLVKNRUZIVOTOGSIUEYRRFOKOCMCTSHRXQRH");

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
    msg.setTimeStamp(0.380268842079);
    msg.setSource(64568U);
    msg.setSourceEntity(248U);
    msg.setDestination(11726U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.587277593085;
    msg.lon = 0.955181847778;
    msg.z = 0.453972653082;
    msg.z_units = 139U;
    msg.speed = 0.24169257145;
    msg.speed_units = 54U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.891845125408;
    tmp_msg_0.lon = 0.644758397281;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YILMYTGANZMMYBWNPKVEADWYGCHXZSJBTMKTCTSEMMJGIDFTQPZFVYLKYROZWUEEOFFTRIHJCJXBCDKMZQIOBXRYUTVFWKLHOBQRAJBLAQUDPXZEVCWAQNRXHSLUWPUSRQILKDJPWPYBGHJSVTOAJBMEXQWNWTEFESUFIWPRL");

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
    msg.setTimeStamp(0.850548784415);
    msg.setSource(4655U);
    msg.setSourceEntity(122U);
    msg.setDestination(2358U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.613236979733;
    msg.lon = 0.738372162194;
    msg.z = 0.774945292735;
    msg.z_units = 167U;
    msg.speed = 0.945244263325;
    msg.speed_units = 69U;
    msg.custom.assign("FEOSPMNBBYSVQZIIUBZVDNGNHKZRLTHAUMIQSYQTLGKVUKNCKVYKPIENJATTLDJWMRDWGWWZCQEQOOGFMMJAXVFCLLCXJDQJTSDYRXUDFKZPXUJNWBDJWYGQXBCHMKRCEOFKIYXGHTBIUAXNEWPBZZTLXRHVSUXOHVSFHTQZA");

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
    msg.setTimeStamp(0.336365842058);
    msg.setSource(50177U);
    msg.setSourceEntity(213U);
    msg.setDestination(42085U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.500582830337;
    msg.lon = 0.243461684791;

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
    msg.setTimeStamp(0.336086472677);
    msg.setSource(48525U);
    msg.setSourceEntity(188U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.0682698909044;
    msg.lon = 0.581306376328;

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
    msg.setTimeStamp(0.184869603186);
    msg.setSource(64331U);
    msg.setSourceEntity(119U);
    msg.setDestination(11079U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.882133006506;
    msg.lon = 0.74686427893;

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
    msg.setTimeStamp(0.161813552072);
    msg.setSource(2032U);
    msg.setSourceEntity(242U);
    msg.setDestination(51487U);
    msg.setDestinationEntity(203U);
    msg.timeout = 32619U;
    msg.lat = 0.198496091027;
    msg.lon = 0.158178968273;
    msg.z = 0.0665789901321;
    msg.z_units = 52U;
    msg.pitch = 0.394776456917;
    msg.amplitude = 0.742558667379;
    msg.duration = 56265U;
    msg.speed = 0.600608175184;
    msg.speed_units = 82U;
    msg.radius = 0.113686036252;
    msg.direction = 46U;
    msg.custom.assign("EMWNEQMKPQPLSTSVZHSRCGACKMDOZICPOMRKHTHDALSWPXYUWALNUAAFLEJEGBWBJKNPGZEDNRKRJGTCBISCPHRSQBJQDVXNFIDQIDY");

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
    msg.setTimeStamp(0.220672561881);
    msg.setSource(35032U);
    msg.setSourceEntity(163U);
    msg.setDestination(34924U);
    msg.setDestinationEntity(96U);
    msg.timeout = 34086U;
    msg.lat = 0.540698034034;
    msg.lon = 0.906989426936;
    msg.z = 0.374777759517;
    msg.z_units = 239U;
    msg.pitch = 0.277588400558;
    msg.amplitude = 0.249344626337;
    msg.duration = 27943U;
    msg.speed = 0.775007973793;
    msg.speed_units = 77U;
    msg.radius = 0.803029911624;
    msg.direction = 0U;
    msg.custom.assign("IZDELQMLNMINGMZDRWNSOMTDPLGIALFSOSHEQXINPUWAVVMYWDUUWBNJMYWGOLZEQFKSFGGFCVAZQKQBFTXWEQTDTQCFHUECDINBGILZGRFVBXOKVJJMYOIXRSCMTXUCRJJEHRHQNIEOLSKBRLYRIDJXUYZSMNBWAUDLXAZYKUGAGGBFCKRNEDLCTPYQHJJSZYZOSVWNHYOOJ");

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
    msg.setTimeStamp(0.787112096963);
    msg.setSource(54501U);
    msg.setSourceEntity(93U);
    msg.setDestination(38716U);
    msg.setDestinationEntity(185U);
    msg.timeout = 61523U;
    msg.lat = 0.154201264287;
    msg.lon = 0.700813742395;
    msg.z = 0.572145325636;
    msg.z_units = 149U;
    msg.pitch = 0.221419072188;
    msg.amplitude = 0.470182539123;
    msg.duration = 59371U;
    msg.speed = 0.66807338477;
    msg.speed_units = 89U;
    msg.radius = 0.581299838921;
    msg.direction = 60U;
    msg.custom.assign("FHQJTPJDGESRGBWLBUTXTWQYJUQGLCZSPADDTSTVZCWETPKYLZYZISJTXWICIWQLYOUCKKREBFZBEYFZQJVOURAIPSXBCMAPICEVYBHNMSWTDFRLCUJEYIHKMPIEZSKUDVPXQAMPRNOSAVGTHHVCAGJYHHMKQQQQIHKLNARNZLNBOBGSDVHNKFUCXDDCXGMVFO");

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
    msg.setTimeStamp(0.794472300281);
    msg.setSource(50987U);
    msg.setSourceEntity(58U);
    msg.setDestination(40863U);
    msg.setDestinationEntity(184U);
    msg.formation_name.assign("PCINTAEIODDJJEYNWDYTVYYSTJGCOKABKZJJCHKUGYLWRUCBHPWFTPDIQJPLMLSFDYGXCABUBRPHSHCTAMLGWFCQRYEHBUMOIRQXLNEIVCMJUFIMQGCVNZBZGZXDOMREEZSTQLZQVAQTSZPNIPTBAWJKRMUWSPWIFMROKGKZWVPSOZUTNXFCXVDLZLHSUAYVSQFVKYXVIGNHLXEAFUWAQBSXOHRXNTJOMBOJDMRAHERKWDOEPLKNXV");
    msg.reference_frame = 159U;
    msg.custom.assign("PUPOFIBLDWZJGUEZMQKSDIJGFASJRLVWOKLBANFW");

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
    msg.setTimeStamp(0.0850180425481);
    msg.setSource(12188U);
    msg.setSourceEntity(147U);
    msg.setDestination(62221U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("LIEOYIUZBIZIGDQOVKHEPMVZDUJJYQVEGQHHQOLXRMAUYMTNNDRKLFKZHPDCXIDWXKJXLNIFFWWOYMOEWOVQKELLCAHDSKAFQVBELPYNBRNWVYTGCRIAJLSQNTGUXKVLTYEJFHDZNRXMUYTUFGTISWESEKTKPUWSJBPVPJBOM");
    msg.reference_frame = 68U;
    msg.custom.assign("CKDWHOGBZWZEUWSVPIQAWPQJYFLXZFANSIBIBBDLUEMPMUMGFBMEWNCDYDRUVLJCQKDRYKOBZMCPEKTCTXWKHIVXJUEESRARGTGFIJLRCGPWNGEOHUDQAKJAZSTBLMN");

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
    msg.setTimeStamp(0.346881571786);
    msg.setSource(37768U);
    msg.setSourceEntity(132U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("PIGJDSQYWQVFLEHSIEIHYGOKJFUWGISNTVJKUCCYXICDSMJNAZFEJSSXYBEKDLYUBBPPMADQJHFEGMIEZHPBHRRUMTDVNEJHOLQNSWWNEQKLTXOACZOOMXUPIYBFTNE");
    msg.reference_frame = 205U;
    msg.custom.assign("LVUVGZWDRWUZXLKUNIZKTIUNDRJFKRSMKHPKYLOCYIFRAUGQAP");

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
    msg.setTimeStamp(0.804017296951);
    msg.setSource(21057U);
    msg.setSourceEntity(62U);
    msg.setDestination(11605U);
    msg.setDestinationEntity(105U);
    msg.group_name.assign("KKSJHZDCCTVTZSJARLQQKAAXTOINLEGONPMLRYOHSJGMHKUNEETSPMWSRLSWPBVRNCOSVYRSFVGQKVGLEDZZEUYXSCVREGBAOOYOXWPMITYXZXFWWGIFQQYWCTGDBWAJPRBHGACBZPMTKVHHQFUDXZNUJJDUWFBVNTPBCNBDDNIKZRUZEMHUPHILYGDBJQFESXDLMNMNICIYEGHFQVIOTARHKBOLFMKPEWIJWLYMYXJUZJVFITKOCAPAUDXQXR");
    msg.formation_name.assign("GHSFRVBJPTKTRKASGMLQVPMZIFUGLSVUDSGLOTNGUGJDPOJLALEUZBVATBQLEWEJCNMIFMLNDWWCVYRPNHUQAVWZTCWMYONDLSXJSGHIJBBEZZAAUXXBFVKWFCYRJQGQFFNYRIKTONKQVDJGXIDZEAMHUCCLWWKEMTSZMCXICPPDTXHAIIXIOMOYCUHQYNGRKHAQRBSOKBYXODKZWPPETCTWJIVBMOUFHHHRXPDEVULBAX");
    msg.plan_id.assign("IJOTYVSVOBBMLNGCKXTPAVQHBWYEIJNFQZRJYHFDZPDLPCMBYILKMRPUAXMPTCZJFICNZZZOEFGCVHZSRTXUBXNDQDEMKDANMAPMBFEPZGIDNJHB");
    msg.description.assign("PXMTXCJFNHEKQHZGISOEENIIYVMKCRCBOLZ");
    msg.leader_speed = 0.462055216949;
    msg.leader_bank_lim = 0.0673346869343;
    msg.pos_sim_err_lim = 0.603248856953;
    msg.pos_sim_err_wrn = 0.692303400215;
    msg.pos_sim_err_timeout = 1024U;
    msg.converg_max = 0.281226845605;
    msg.converg_timeout = 11840U;
    msg.comms_timeout = 12109U;
    msg.turb_lim = 0.190482640555;
    msg.custom.assign("IGINTSJGKNGTGMEIDFOQUSQXBZHGLTRNEGRVDBNWUZAXQMKPBMCKRBWLNNSMXKWVVXPIMMLJES");

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
    msg.setTimeStamp(0.367704089186);
    msg.setSource(62210U);
    msg.setSourceEntity(150U);
    msg.setDestination(27770U);
    msg.setDestinationEntity(51U);
    msg.group_name.assign("NNKZEJODHBAVPDLGTQLVLGTYSQSIKXXAIIKBCMVXTQSZUSLLXUKJPJEUNQYQBFKBKAUHOOVECYKXIJTOONHASCMJIEWRCEZKRKDPXWDACEQZBCTVUIJRRBYLHBSBSULUAWZHMOGTEOEFVTWVDIGQAEJZYWCOEOTWGFVCWDXZCYYMYKNFJRATPRCZGQHLUYHFRF");
    msg.formation_name.assign("NDXPMGYSQBRJHTUILRXLDLVOPBMFNFHSKGBXUBHUPWBQCAKKGABQUSYORXETDJYEVNFBZJMZHADIHIIAQGEQVINJJOMHVYWKZZCECL");
    msg.plan_id.assign("MGEQUECOWLKNWTELCQP");
    msg.description.assign("BWONMNPJYGMYCGTXMICVJUVDAYEAILGO");
    msg.leader_speed = 0.26139555973;
    msg.leader_bank_lim = 0.422267410239;
    msg.pos_sim_err_lim = 0.750440562561;
    msg.pos_sim_err_wrn = 0.350268015448;
    msg.pos_sim_err_timeout = 11142U;
    msg.converg_max = 0.847767714119;
    msg.converg_timeout = 16516U;
    msg.comms_timeout = 3183U;
    msg.turb_lim = 0.840589424981;
    msg.custom.assign("OFUQEZJHQUMELDSAMMFADNOUOZWRVECTYLVQHLXXGYUVRQOOHRWXSRCXZLUKCMDIGOWNFGMOJTFUMHMMFUEJR");

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
    msg.setTimeStamp(0.153802000756);
    msg.setSource(5706U);
    msg.setSourceEntity(81U);
    msg.setDestination(11226U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("INKOJYLLTQIUUBANGRWFLALQQQHVGBVBEGAYLKCGCWKSMSMLHWLRCAUMYJWBXEFJRBPVWDZJHHKAOBCWPJSCWKGXWFOZEFYETCHQHEKQVASYRZDTMJNCFZQDIBUIFTSDZCFOLRCIMUZSRJUVMGBYVZIXUVPDXYNTZIGXOWQHKUXVFTEHDQ");
    msg.formation_name.assign("ZJYKERNIFATYCBXORMMXXPHQIRGQZVWEKGDZFGDNDQFQUEYLWGBOCMHDSRFRXPXSSCBYJFRXAQLHOYUSHQTQJPBKLKTOUUSEZHVALIAOIVMAHACAUIUFNXIIBWDHBCLRKNMGOWJPXYIGUNCAEVIYRLBEHOZTBDSJYQBLQAVEYDJTUMRXGFPGTLJAUVE");
    msg.plan_id.assign("RLTYKKVQWVWEBYCWYHYXAKZEEYVPBSCTSQZEAKLSXCTABWTOQOJLZZNMLAPERUUDQGSMXPDNQZHYCIIJJECRSQNFSKQDLXBBAATJAEIHDVLLXUGWHGIBPRCYVMNMVWJFGGNFVQGUDWKWOFMNFXEQICTVPLFAKOHIOINDCSKDFFOJRBOPHMQORRUCWXMELTPNUZFIZUOTMCPXYHSHPBNOVGTBGNUBPYJMIGAMXXSZ");
    msg.description.assign("SGXJZKDCIWMHVHULRVTTV");
    msg.leader_speed = 0.974627800523;
    msg.leader_bank_lim = 0.766126024667;
    msg.pos_sim_err_lim = 0.799335120491;
    msg.pos_sim_err_wrn = 0.631866883769;
    msg.pos_sim_err_timeout = 52234U;
    msg.converg_max = 0.63073042222;
    msg.converg_timeout = 32622U;
    msg.comms_timeout = 50325U;
    msg.turb_lim = 0.725010442036;
    msg.custom.assign("GASGANZCFKRXKFQUPWHSPLBTF");

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
    msg.setTimeStamp(0.365839305677);
    msg.setSource(12721U);
    msg.setSourceEntity(215U);
    msg.setDestination(12812U);
    msg.setDestinationEntity(238U);
    msg.control_src = 25180U;
    msg.control_ent = 30U;
    msg.timeout = 0.58749410903;
    msg.loiter_radius = 0.468126834192;
    msg.altitude_interval = 0.0859562001165;

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
    msg.setTimeStamp(0.017090530989);
    msg.setSource(37693U);
    msg.setSourceEntity(94U);
    msg.setDestination(32393U);
    msg.setDestinationEntity(238U);
    msg.control_src = 35824U;
    msg.control_ent = 119U;
    msg.timeout = 0.706930978472;
    msg.loiter_radius = 0.123025098715;
    msg.altitude_interval = 0.918216012875;

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
    msg.setTimeStamp(0.655400846284);
    msg.setSource(1384U);
    msg.setSourceEntity(220U);
    msg.setDestination(44685U);
    msg.setDestinationEntity(59U);
    msg.control_src = 28468U;
    msg.control_ent = 49U;
    msg.timeout = 0.691149649111;
    msg.loiter_radius = 0.070804450719;
    msg.altitude_interval = 0.0809004008827;

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
    msg.setTimeStamp(0.592042294634);
    msg.setSource(44989U);
    msg.setSourceEntity(65U);
    msg.setDestination(31502U);
    msg.setDestinationEntity(112U);
    msg.flags = 182U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.531891932109;
    tmp_msg_0.speed_units = 69U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.686616418162;
    tmp_msg_1.z_units = 167U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.428688249724;
    msg.lon = 0.847647606802;
    msg.radius = 0.435711274025;

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
    msg.setTimeStamp(0.913488311284);
    msg.setSource(22692U);
    msg.setSourceEntity(81U);
    msg.setDestination(14921U);
    msg.setDestinationEntity(81U);
    msg.flags = 2U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.329577959325;
    tmp_msg_0.speed_units = 15U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.212871231809;
    tmp_msg_1.z_units = 89U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.874855008902;
    msg.lon = 0.553365997645;
    msg.radius = 0.146362584302;

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
    msg.setTimeStamp(0.0315999811871);
    msg.setSource(56630U);
    msg.setSourceEntity(204U);
    msg.setDestination(40186U);
    msg.setDestinationEntity(130U);
    msg.flags = 36U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.60098119757;
    tmp_msg_0.speed_units = 53U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.584679949203;
    tmp_msg_1.z_units = 244U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.94587183691;
    msg.lon = 0.611873871436;
    msg.radius = 0.597412368902;

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
    msg.setTimeStamp(0.027277734698);
    msg.setSource(58009U);
    msg.setSourceEntity(214U);
    msg.setDestination(42163U);
    msg.setDestinationEntity(206U);
    msg.control_src = 24377U;
    msg.control_ent = 173U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 87U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.613942491248;
    tmp_tmp_msg_0_0.speed_units = 157U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.787568207264;
    tmp_tmp_msg_0_1.z_units = 32U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.494736301647;
    tmp_msg_0.lon = 0.202057782904;
    tmp_msg_0.radius = 0.6000591362;
    msg.reference.set(tmp_msg_0);
    msg.state = 110U;
    msg.proximity = 39U;

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
    msg.setTimeStamp(0.480408194042);
    msg.setSource(38016U);
    msg.setSourceEntity(235U);
    msg.setDestination(41810U);
    msg.setDestinationEntity(155U);
    msg.control_src = 35715U;
    msg.control_ent = 7U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 246U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.854789167619;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.54715562904;
    tmp_tmp_msg_0_1.z_units = 39U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.44548071312;
    tmp_msg_0.lon = 0.0436867554052;
    tmp_msg_0.radius = 0.522940705093;
    msg.reference.set(tmp_msg_0);
    msg.state = 94U;
    msg.proximity = 31U;

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
    msg.setTimeStamp(0.414144738928);
    msg.setSource(22014U);
    msg.setSourceEntity(109U);
    msg.setDestination(28551U);
    msg.setDestinationEntity(225U);
    msg.control_src = 21717U;
    msg.control_ent = 99U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 135U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.369628799487;
    tmp_tmp_msg_0_0.speed_units = 236U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.575320279907;
    tmp_tmp_msg_0_1.z_units = 102U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.457036579248;
    tmp_msg_0.lon = 0.639419878373;
    tmp_msg_0.radius = 0.227288034529;
    msg.reference.set(tmp_msg_0);
    msg.state = 79U;
    msg.proximity = 180U;

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
    msg.setTimeStamp(0.861980816639);
    msg.setSource(43126U);
    msg.setSourceEntity(62U);
    msg.setDestination(7630U);
    msg.setDestinationEntity(44U);
    msg.ax_cmd = 0.366573670248;
    msg.ay_cmd = 0.984531355335;
    msg.az_cmd = 0.253713761235;
    msg.ax_des = 0.14792104935;
    msg.ay_des = 0.353003989033;
    msg.az_des = 0.888165764646;
    msg.virt_err_x = 0.409354194268;
    msg.virt_err_y = 0.922441663921;
    msg.virt_err_z = 0.915704000711;
    msg.surf_fdbk_x = 0.77192906632;
    msg.surf_fdbk_y = 0.195073662462;
    msg.surf_fdbk_z = 0.735244945585;
    msg.surf_unkn_x = 0.144568717403;
    msg.surf_unkn_y = 0.680479057458;
    msg.surf_unkn_z = 0.130773937245;
    msg.ss_x = 0.755534576635;
    msg.ss_y = 0.675851973426;
    msg.ss_z = 0.528854464579;

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
    msg.setTimeStamp(0.993840606315);
    msg.setSource(20567U);
    msg.setSourceEntity(252U);
    msg.setDestination(12973U);
    msg.setDestinationEntity(155U);
    msg.ax_cmd = 0.81390992601;
    msg.ay_cmd = 0.242918567585;
    msg.az_cmd = 0.117714762977;
    msg.ax_des = 0.985444244152;
    msg.ay_des = 0.913355041581;
    msg.az_des = 0.465049127678;
    msg.virt_err_x = 0.860741527946;
    msg.virt_err_y = 0.21851454729;
    msg.virt_err_z = 0.627443620722;
    msg.surf_fdbk_x = 0.284338337419;
    msg.surf_fdbk_y = 0.473447382579;
    msg.surf_fdbk_z = 0.932281382236;
    msg.surf_unkn_x = 0.546033266688;
    msg.surf_unkn_y = 0.848513932631;
    msg.surf_unkn_z = 0.627579885522;
    msg.ss_x = 0.158926560025;
    msg.ss_y = 0.44763531669;
    msg.ss_z = 0.567619706586;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WIKKTWRILXSGNJIEYHFJWYRIUIKJVPZIUMELGOPXQFDVUSTRMEQKTBJHWCSDFQLAVLYCHONCJSFMEEAKJ");
    tmp_msg_0.dist = 0.806159939423;
    tmp_msg_0.err = 0.21670365413;
    tmp_msg_0.ctrl_imp = 0.832856757924;
    tmp_msg_0.rel_dir_x = 0.441418395704;
    tmp_msg_0.rel_dir_y = 0.527905157185;
    tmp_msg_0.rel_dir_z = 0.200489043907;
    tmp_msg_0.err_x = 0.0579191818725;
    tmp_msg_0.err_y = 0.097072150605;
    tmp_msg_0.err_z = 0.0676661248851;
    tmp_msg_0.rf_err_x = 0.244048251294;
    tmp_msg_0.rf_err_y = 0.504919925414;
    tmp_msg_0.rf_err_z = 0.129717306709;
    tmp_msg_0.rf_err_vx = 0.0851926708932;
    tmp_msg_0.rf_err_vy = 0.917526148312;
    tmp_msg_0.rf_err_vz = 0.499410089189;
    tmp_msg_0.ss_x = 0.713414428572;
    tmp_msg_0.ss_y = 0.324554500876;
    tmp_msg_0.ss_z = 0.656074723519;
    tmp_msg_0.virt_err_x = 0.681642248492;
    tmp_msg_0.virt_err_y = 0.674921858884;
    tmp_msg_0.virt_err_z = 0.911068589469;
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
    msg.setTimeStamp(0.527838418389);
    msg.setSource(11348U);
    msg.setSourceEntity(170U);
    msg.setDestination(1938U);
    msg.setDestinationEntity(139U);
    msg.ax_cmd = 0.254621839009;
    msg.ay_cmd = 0.25310331694;
    msg.az_cmd = 0.18575059833;
    msg.ax_des = 0.166277797197;
    msg.ay_des = 0.160308568394;
    msg.az_des = 0.538431302065;
    msg.virt_err_x = 0.627738252591;
    msg.virt_err_y = 0.762885991642;
    msg.virt_err_z = 0.42874353619;
    msg.surf_fdbk_x = 0.755411545408;
    msg.surf_fdbk_y = 0.315114676684;
    msg.surf_fdbk_z = 0.483026118991;
    msg.surf_unkn_x = 0.913623436242;
    msg.surf_unkn_y = 0.760828035601;
    msg.surf_unkn_z = 0.688663290381;
    msg.ss_x = 0.544303575806;
    msg.ss_y = 0.0288400186826;
    msg.ss_z = 0.189851475036;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZAGQPCDKHPIRWPFSNQISEXBIRTSUTVFYSLRMOOEPSVQRYTWUOXXYKJUPSJAWVNZUUNLNXIKOKENCCUGJOARVZWVZLQUCAHOUBOWKTIFK");
    tmp_msg_0.dist = 0.736281807322;
    tmp_msg_0.err = 0.539009239049;
    tmp_msg_0.ctrl_imp = 0.725297961212;
    tmp_msg_0.rel_dir_x = 0.325394666462;
    tmp_msg_0.rel_dir_y = 0.160317125355;
    tmp_msg_0.rel_dir_z = 0.763424543045;
    tmp_msg_0.err_x = 0.876789164808;
    tmp_msg_0.err_y = 0.0109747167922;
    tmp_msg_0.err_z = 0.398158181119;
    tmp_msg_0.rf_err_x = 0.930146751709;
    tmp_msg_0.rf_err_y = 0.862939596227;
    tmp_msg_0.rf_err_z = 0.452422313947;
    tmp_msg_0.rf_err_vx = 0.452483030585;
    tmp_msg_0.rf_err_vy = 0.745776660636;
    tmp_msg_0.rf_err_vz = 0.171864831452;
    tmp_msg_0.ss_x = 0.0488253956743;
    tmp_msg_0.ss_y = 0.21095991317;
    tmp_msg_0.ss_z = 0.564852034312;
    tmp_msg_0.virt_err_x = 0.263338889764;
    tmp_msg_0.virt_err_y = 0.992964033785;
    tmp_msg_0.virt_err_z = 0.272356869192;
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
    msg.setTimeStamp(0.989349906741);
    msg.setSource(44295U);
    msg.setSourceEntity(101U);
    msg.setDestination(41555U);
    msg.setDestinationEntity(88U);
    msg.s_id.assign("KCZQAHPNWWUKCAYTINRVYKCHGYUUHJQDIFPNMSQLBZBFOMNVOMRZNMWWLJTRYAGSFQCFELOYUIKDPFWZTGQQKGRWGUXLBSVXRUVTHJYZFKASVSZPXLNGEDFNRNVBIQTWHLLHCCYQP");
    msg.dist = 0.865890747425;
    msg.err = 0.853526943186;
    msg.ctrl_imp = 0.427001607984;
    msg.rel_dir_x = 0.143165737294;
    msg.rel_dir_y = 0.426823393013;
    msg.rel_dir_z = 0.318246355763;
    msg.err_x = 0.900091504673;
    msg.err_y = 0.182505233304;
    msg.err_z = 0.460293042639;
    msg.rf_err_x = 0.201418161787;
    msg.rf_err_y = 0.64923312375;
    msg.rf_err_z = 0.78731476329;
    msg.rf_err_vx = 0.798401469849;
    msg.rf_err_vy = 0.189358335112;
    msg.rf_err_vz = 0.0713537436445;
    msg.ss_x = 0.81570808807;
    msg.ss_y = 0.862741948411;
    msg.ss_z = 0.196343027361;
    msg.virt_err_x = 0.0395273306038;
    msg.virt_err_y = 0.387782729698;
    msg.virt_err_z = 0.0270882607334;

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
    msg.setTimeStamp(0.539029734038);
    msg.setSource(7712U);
    msg.setSourceEntity(11U);
    msg.setDestination(63645U);
    msg.setDestinationEntity(210U);
    msg.s_id.assign("DJFUEVRETFYVMMZIZROFZKNLHXXGFRRWPKWTCBIYWVDHJTNUYMIVSVGGHBHRQUKTTBLQITQNYDAPATRZXAMDGPBIIXOOJXQMJPOKUWFBSIGHLMGRCNLGPYECCZBAAOCDRSMTCOKUA");
    msg.dist = 0.555646109923;
    msg.err = 0.97518750277;
    msg.ctrl_imp = 0.0352396345009;
    msg.rel_dir_x = 0.702687897287;
    msg.rel_dir_y = 0.249821088664;
    msg.rel_dir_z = 0.10413567151;
    msg.err_x = 0.502000840059;
    msg.err_y = 0.215316972067;
    msg.err_z = 0.855904131495;
    msg.rf_err_x = 0.743145523039;
    msg.rf_err_y = 0.923558860212;
    msg.rf_err_z = 0.654575857904;
    msg.rf_err_vx = 0.461628774324;
    msg.rf_err_vy = 0.800342373911;
    msg.rf_err_vz = 0.661368042356;
    msg.ss_x = 0.259118448103;
    msg.ss_y = 0.4855375249;
    msg.ss_z = 0.67468665228;
    msg.virt_err_x = 0.998642703777;
    msg.virt_err_y = 0.326787964771;
    msg.virt_err_z = 0.185216345584;

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
    msg.setTimeStamp(0.621562087572);
    msg.setSource(982U);
    msg.setSourceEntity(28U);
    msg.setDestination(32297U);
    msg.setDestinationEntity(128U);
    msg.s_id.assign("DQSDLALFAGKFPWGOAOYIDBUBTMCXKLUKQJYSPNFDZODXSNYGWFSBTOLGERZXUBVEXGYPBCAKKRBQHJQEMUOMNGBTTLYXEGUOMKYJRZFH");
    msg.dist = 0.662686934531;
    msg.err = 0.48325674031;
    msg.ctrl_imp = 0.99444648238;
    msg.rel_dir_x = 0.901669435816;
    msg.rel_dir_y = 0.999061648868;
    msg.rel_dir_z = 0.790854669834;
    msg.err_x = 0.762227030672;
    msg.err_y = 0.735841399224;
    msg.err_z = 0.962177298899;
    msg.rf_err_x = 0.319009192795;
    msg.rf_err_y = 0.361580124132;
    msg.rf_err_z = 0.315841627669;
    msg.rf_err_vx = 0.600958569763;
    msg.rf_err_vy = 0.743362144843;
    msg.rf_err_vz = 0.639831853798;
    msg.ss_x = 0.184049794378;
    msg.ss_y = 0.307334577903;
    msg.ss_z = 0.21431041452;
    msg.virt_err_x = 0.792985407069;
    msg.virt_err_y = 0.910420960918;
    msg.virt_err_z = 0.301735022213;

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
    msg.setTimeStamp(0.398622146433);
    msg.setSource(62613U);
    msg.setSourceEntity(189U);
    msg.setDestination(3987U);
    msg.setDestinationEntity(245U);
    msg.timeout = 38876U;
    msg.rpm = 0.503559644306;
    msg.direction = 161U;
    msg.custom.assign("PSRRGRFHXOWYNHKVNNAWMUIUTZGVYQLDIWBZVNZTIJAYEAQWNVNAPYYLBHVPWXDOARDJZQJOCPXAXBUMOCOSQTCK");

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
    msg.setTimeStamp(0.905659879343);
    msg.setSource(10426U);
    msg.setSourceEntity(163U);
    msg.setDestination(29703U);
    msg.setDestinationEntity(182U);
    msg.timeout = 2109U;
    msg.rpm = 0.477830934805;
    msg.direction = 194U;
    msg.custom.assign("FHBRUMUSLYTWCGSRONLZNLAZUTGFJKWTEXCYBVPWWZPGEUMGROWGPFHFHPHA");

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
    msg.setTimeStamp(0.0811597125695);
    msg.setSource(25657U);
    msg.setSourceEntity(62U);
    msg.setDestination(29322U);
    msg.setDestinationEntity(190U);
    msg.timeout = 6301U;
    msg.rpm = 0.00171274428145;
    msg.direction = 252U;
    msg.custom.assign("HGMMTSOSGUEZSTBYSHUCNWPNECITZCBUZSGSXRANKWKCLBWBAYZFRODLPRLWSJIBKDSFTOUBYKKKNGQBATVZDDFHZXCXHUEJVJSINLRJOOAZJHYIUYXETDEZYVWZJXAADVMXSJMHNBMCNJKQDOETQ");

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
    msg.setTimeStamp(0.168881945837);
    msg.setSource(28155U);
    msg.setSourceEntity(123U);
    msg.setDestination(22145U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("MYCGENQUARQNLHFRPJIUVBWILPVVPGLTZWTQJHBPKWQFEDGEYYUXWGQJAUNSERIFTCZAQKXMYZKIHVJIULWJXHCIDGDFNSAXLTLFFKTFBSUVVMGLFKFOPAGRDBJXTPYAZWLCLZJAQSNXZMXNBXYCPQVRHUHSUIRREEEVAZGOOMOYDJBUOPNOSNKGEBQOPUMKHPDBTFGTAYYMEDBJWKRCWADVLHOMOMHCSCDBXQEMHISISTCVOZTYZINZDCXRNW");
    msg.type = 254U;
    msg.op = 165U;
    msg.group_name.assign("OATYQPIOMRWPARBZWDSRQPYXGXADIYOCHVFNMPPAYTLZTJIXNECUBBGLGWKOMJKDQBMAQAOBHXFGKCKZHYNLMBLJCFGUNLMNHUVYFQCZRSMEWVVMOFNHNXUIBDKUFJCXZWIZFZIDTCFLDPAZCSJHWYXUKLAWEXUVQFLLCREMHPTEQESCKHNSZRPUJALVGH");
    msg.plan_id.assign("NJDILJHIIVRPWYHBKOIDMAHZAUCOJVSZZFLTEKMPPABMMOAPBTETQNELZEFLBHXULOYYVXCTEGMJETHCEYVAROXKNXEQFSRXCRIBHRSGTTWGZUZFSKGQCLGJBQYUYLZFFUCSKKUDRD");
    msg.description.assign("OKXVNDQXYXCAKGGTUEGAEQBRJFFWHGGBCWGVQLABBSASH");
    msg.reference_frame = 89U;
    msg.leader_bank_lim = 0.252539018723;
    msg.leader_speed_min = 0.586691177833;
    msg.leader_speed_max = 0.715068821026;
    msg.leader_alt_min = 0.164181227961;
    msg.leader_alt_max = 0.523950662031;
    msg.pos_sim_err_lim = 0.313862890575;
    msg.pos_sim_err_wrn = 0.274177450189;
    msg.pos_sim_err_timeout = 58630U;
    msg.converg_max = 0.279768874612;
    msg.converg_timeout = 9965U;
    msg.comms_timeout = 30129U;
    msg.turb_lim = 0.0937510764494;
    msg.custom.assign("NMLVSXAOXEXPOUFALFQPPWPFLPGIEBDPUVPFWJMJFDTJYGDUVNALMEIDHSBDMUKLVFHNZPGNI");

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
    msg.setTimeStamp(0.28408071588);
    msg.setSource(937U);
    msg.setSourceEntity(197U);
    msg.setDestination(46139U);
    msg.setDestinationEntity(192U);
    msg.formation_name.assign("ERZODTNAEICEDNHLLTHFQAVNJXZCMGHQOLRSDPXSUQXWGAZIGVGUPSYOMJERCUJEQAKMCTTWMWVOPNUFWTBWTJFMJAOINKCRHDOYETSUUKACZYTLWCSLGSQOKKIEFVXEQYKOFXHILQXCYDVNFXDGIKXKFRHRNBBJGXYR");
    msg.type = 141U;
    msg.op = 4U;
    msg.group_name.assign("KXDGSUEVOZEUHMNCIWZS");
    msg.plan_id.assign("GEIZKVQFMOVKXWYNLXBPKNPHJVGDBLUXMEQHKRCPTZH");
    msg.description.assign("ZIYNNSQCHVNOQBYEKXNYWLJLAIGAYURLZCXVLGEUQITYMPNIYFKBCAFMDESHDJHDIPVONAMOLSGGTXRATKUZVIWTSDVULFUNPDOQ");
    msg.reference_frame = 115U;
    msg.leader_bank_lim = 0.727784480245;
    msg.leader_speed_min = 0.0477321918775;
    msg.leader_speed_max = 0.360744108348;
    msg.leader_alt_min = 0.530458368839;
    msg.leader_alt_max = 0.0587005705506;
    msg.pos_sim_err_lim = 0.499053546072;
    msg.pos_sim_err_wrn = 0.972049314067;
    msg.pos_sim_err_timeout = 5114U;
    msg.converg_max = 0.489173313117;
    msg.converg_timeout = 11072U;
    msg.comms_timeout = 8747U;
    msg.turb_lim = 0.130771020014;
    msg.custom.assign("QTKYHYORAYEGXILIDNNJMWASECWTQXVSXSEKHJSHBQSMWYIXRPMRBTWCWUZIZCBHZGTFPGXLIJQVNVFIRLCNKTOZBOOAQDAMMMJKKIZVUVFLXDTFPUFIMRPFFKHSPFPNTLEQDDIGUOAOHLTBEWNKLBCUWUDUCHORJQKPSNAAKAJYXZGOQBKWEGTYBBCQZYXIHHZPXVOLUJDERDPBVWGNTXGAYDSLAVGQHCSRWULYEUSMEDGFJRJZVNZR");

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
    msg.setTimeStamp(0.701979239975);
    msg.setSource(39235U);
    msg.setSourceEntity(226U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(241U);
    msg.formation_name.assign("YKBSFGIWSTUXLIUSUZRXHLDQRZZFBMPNYAAXHIEENGLVLNBLXCCGHORBWAJQZEIWMMJFVLERXABNTAWEUYEPFYKKMNDHQREEFJAKHPNKVJUHTAJZTZLSJPBHLKUSJGOGZYZINKQDWJGJZVTYWSDYKSXFCOAPIXQWWZTQXDRVMCMQFOCFOHBIPQXSPOCIQGBRXVT");
    msg.type = 227U;
    msg.op = 30U;
    msg.group_name.assign("TIRJFUDLMRXJFYSIUHIZSNCQQTXARWHYXYIEBFPUQOVHGMEEPZKIDCOWCAKUYXFLTBXOPMNATVPGXVGSEXAROYVSLMCCTORQTKBTFWVDCGYOEMLQHUZEVQHPHCRWJICDBRFKSJOPLIBKTCZPRIFGHZZDSASSDGYVSGVJLLKOXEQIAUXWHCBWDJJENEEZDWMJBDYHODTKLUWGNFNPZNAYFBAQHWANZYLTUJQXBK");
    msg.plan_id.assign("ZKNIQULYBDGZVKSEYUBRZZGDAXVBMESCVBFQIXPIGYYDXTFXTQUMJKHJNWEAUICOFRWBTBKHAGQDTJNSARFNLNDYJPECJJOIVQPOWVMMYMBJDOPTCPZLZTVPYXLUSHKHMKGOVLSUJAQOWHVGBXKERGHWHUAPYTJNDM");
    msg.description.assign("VCMUZVZEDFTXBBMJJZLLOYSAHWGNEDLPAXUUDFFAXVILT");
    msg.reference_frame = 143U;
    msg.leader_bank_lim = 0.852526694233;
    msg.leader_speed_min = 0.394688376916;
    msg.leader_speed_max = 0.879098334065;
    msg.leader_alt_min = 0.57869159104;
    msg.leader_alt_max = 0.932825845786;
    msg.pos_sim_err_lim = 0.165578798942;
    msg.pos_sim_err_wrn = 0.653404124621;
    msg.pos_sim_err_timeout = 19568U;
    msg.converg_max = 0.212987865358;
    msg.converg_timeout = 49645U;
    msg.comms_timeout = 63404U;
    msg.turb_lim = 0.951762040309;
    msg.custom.assign("EXIXMJWGJVIGBAIBZCSPMEVPDRAQDDLJCLNQDTSSGJDGXWEDBPYJKOCCIGXBARIWTYMCBKVXQCRRFWTLYZTNIKVFKUNZMVFOPFLGRTLBYZRSHAIEEYULWBXOPZMJQUPDEQIKPTNFDHEFMSXEAJMNMWWLPHCOOCLGVHNQWZTJSQHFAIYDZJXFKOUUKSRSRCOMOAZXFPHOEURQVNUTHBDHNMASZWJLGYXGUKQTVKYK");

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
    msg.setTimeStamp(0.30847634469);
    msg.setSource(48106U);
    msg.setSourceEntity(153U);
    msg.setDestination(12499U);
    msg.setDestinationEntity(156U);
    msg.timeout = 61490U;
    msg.lat = 0.0483815030213;
    msg.lon = 0.0675813980264;
    msg.z = 0.417808966078;
    msg.z_units = 136U;
    msg.speed = 0.203612840363;
    msg.speed_units = 122U;
    msg.custom.assign("URGJWGQKTVXEVUMFAYLKMJDDJAWXIGUCWUMCYFDWEKIHXYZJOUZYOZDAPBPSYBXXLZTHMPQFRIGTZKPURLXGIORLYNNNCCHYMTASTFGQVNCWRXQOCIWFSTISHIBDOMLHMNVJPAKDRUEPOIXKHSCGLYGOIJVAJYWNWSQEEEZQ");

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
    msg.setTimeStamp(0.881824213131);
    msg.setSource(8793U);
    msg.setSourceEntity(244U);
    msg.setDestination(25913U);
    msg.setDestinationEntity(22U);
    msg.timeout = 32106U;
    msg.lat = 0.934463509526;
    msg.lon = 0.842320702886;
    msg.z = 0.481222891406;
    msg.z_units = 229U;
    msg.speed = 0.904694669321;
    msg.speed_units = 173U;
    msg.custom.assign("BCMZEXBHSUEIYQACUFNJH");

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
    msg.setTimeStamp(0.424199875391);
    msg.setSource(21896U);
    msg.setSourceEntity(165U);
    msg.setDestination(29843U);
    msg.setDestinationEntity(209U);
    msg.timeout = 26621U;
    msg.lat = 0.528051843345;
    msg.lon = 0.493338395516;
    msg.z = 0.141965208273;
    msg.z_units = 88U;
    msg.speed = 0.457813047974;
    msg.speed_units = 128U;
    msg.custom.assign("KXTKDRTKTUXTSRRUUVSURCRZBWAOCJLMDJNMBEIWZFTXPGUFIYKSXUUWPLLGSMRHBKZLXQVOEBJLOIFIXIPLHVEOZFMQAHOUQNPUYYBWFLGGVNZWKSQCEHWTVSDMHGYVCDQIWQJAEDVYHIRDEEQUMNZFCNCYFAOORQF");

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
    msg.setTimeStamp(0.458810822951);
    msg.setSource(60356U);
    msg.setSourceEntity(151U);
    msg.setDestination(4971U);
    msg.setDestinationEntity(201U);
    msg.timeout = 44571U;
    msg.lat = 0.360183671813;
    msg.lon = 0.678556044977;
    msg.z = 0.449302311251;
    msg.z_units = 203U;
    msg.speed = 0.832947962362;
    msg.speed_units = 98U;
    msg.custom.assign("QFLTVFUWJXMKAYWIWJRTAEXWJEUXNBQNPDHTCYTPYXMCDUGZRNWFBCGDOOTWGWZDHBVHASUVOQBZCGBYCTMJAVKWYPHPNNBATKFBSOHLGAGOLLNFMESRKNLTJXSCECZDHJIJDPVOFV");

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
    msg.setTimeStamp(0.860565066858);
    msg.setSource(31437U);
    msg.setSourceEntity(24U);
    msg.setDestination(49150U);
    msg.setDestinationEntity(88U);
    msg.timeout = 48872U;
    msg.lat = 0.306665858088;
    msg.lon = 0.747582085519;
    msg.z = 0.457579990613;
    msg.z_units = 110U;
    msg.speed = 0.0465769213334;
    msg.speed_units = 47U;
    msg.custom.assign("YULBIWPSLTCZHAJZIDOOTYVR");

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
    msg.setTimeStamp(0.183243725076);
    msg.setSource(18080U);
    msg.setSourceEntity(234U);
    msg.setDestination(15429U);
    msg.setDestinationEntity(60U);
    msg.timeout = 23898U;
    msg.lat = 0.762631282654;
    msg.lon = 0.837476330181;
    msg.z = 0.930760145082;
    msg.z_units = 21U;
    msg.speed = 0.854549198316;
    msg.speed_units = 77U;
    msg.custom.assign("KWYSHSVYQLHVFZVGBT");

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
    msg.setTimeStamp(0.488131584129);
    msg.setSource(52093U);
    msg.setSourceEntity(193U);
    msg.setDestination(16888U);
    msg.setDestinationEntity(69U);
    msg.arrival_time = 0.693144120131;
    msg.lat = 0.284687470153;
    msg.lon = 0.212714554711;
    msg.z = 0.223849840913;
    msg.z_units = 71U;
    msg.travel_z = 0.337474829778;
    msg.travel_z_units = 2U;
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
    msg.setTimeStamp(0.269333775145);
    msg.setSource(24714U);
    msg.setSourceEntity(46U);
    msg.setDestination(1248U);
    msg.setDestinationEntity(58U);
    msg.arrival_time = 0.756414116341;
    msg.lat = 0.573158658279;
    msg.lon = 0.108252227024;
    msg.z = 0.569866131045;
    msg.z_units = 212U;
    msg.travel_z = 0.102782293815;
    msg.travel_z_units = 230U;
    msg.delayed = 188U;

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
    msg.setTimeStamp(0.114253587803);
    msg.setSource(60692U);
    msg.setSourceEntity(79U);
    msg.setDestination(8076U);
    msg.setDestinationEntity(200U);
    msg.arrival_time = 0.231013805591;
    msg.lat = 0.315102795462;
    msg.lon = 0.383581292204;
    msg.z = 0.833673459147;
    msg.z_units = 29U;
    msg.travel_z = 0.588352989006;
    msg.travel_z_units = 247U;
    msg.delayed = 223U;

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
    msg.setTimeStamp(0.476517214338);
    msg.setSource(28292U);
    msg.setSourceEntity(14U);
    msg.setDestination(26820U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.0170623797991;
    msg.lon = 0.611150592046;
    msg.z = 0.532387474857;
    msg.z_units = 88U;
    msg.speed = 0.0659022778894;
    msg.speed_units = 174U;
    msg.bearing = 0.658842363507;
    msg.cross_angle = 0.452647484314;
    msg.width = 0.253800195074;
    msg.length = 0.426320148978;
    msg.coff = 110U;
    msg.angaperture = 0.0223740999113;
    msg.range = 34588U;
    msg.overlap = 85U;
    msg.flags = 199U;
    msg.custom.assign("YLVNAJABZJOQPBHUXTUOYORCUCKGEFDTMKGJEEVFAZHCZVELEVBMXJPRVUMFGDSSXIRVWEGLLCQNLMOWISRZVUBPXCBIXUIWPSCZOBHFVDPYNQKOTQAYDNWZWTNRMCAXEPCHFAGDFLHSUAORDQJIKTM");

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
    msg.setTimeStamp(0.701022826894);
    msg.setSource(65382U);
    msg.setSourceEntity(44U);
    msg.setDestination(23715U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.686540838529;
    msg.lon = 0.946368624235;
    msg.z = 0.373599117728;
    msg.z_units = 4U;
    msg.speed = 0.0581645142753;
    msg.speed_units = 239U;
    msg.bearing = 0.858042759537;
    msg.cross_angle = 0.913397802365;
    msg.width = 0.91109172275;
    msg.length = 0.260981854988;
    msg.coff = 220U;
    msg.angaperture = 0.0735619545996;
    msg.range = 24401U;
    msg.overlap = 35U;
    msg.flags = 164U;
    msg.custom.assign("VMYOIFWEZJEDNDOWDJGWQFCLXXDQSRDBINOICYTM");

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
    msg.setTimeStamp(0.136496927735);
    msg.setSource(45265U);
    msg.setSourceEntity(215U);
    msg.setDestination(50849U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.370649098878;
    msg.lon = 0.0409404023842;
    msg.z = 0.84009891967;
    msg.z_units = 41U;
    msg.speed = 0.544572450787;
    msg.speed_units = 239U;
    msg.bearing = 0.153047281401;
    msg.cross_angle = 0.44393195431;
    msg.width = 0.919474289304;
    msg.length = 0.355155428571;
    msg.coff = 81U;
    msg.angaperture = 0.00765822080378;
    msg.range = 9027U;
    msg.overlap = 188U;
    msg.flags = 174U;
    msg.custom.assign("AVPVHQCNEYRCOPAJYZGCBSENFINMOSDEUWZXLXNDBDJRCEYLMCMSSVSPWEWAIAZAZZJUWGJFQTYZZFQXVWJQGOYADOMMFTBXUQOWDOBNWTHWGOQVSMBWKEXEVOULDQPFNCVFSAHURULZNIRBPYJEIAZTVBBJIKCHUDJDOLIXTQTIKUMKHAJRMLKKUF");

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
    msg.setTimeStamp(0.303509333649);
    msg.setSource(36191U);
    msg.setSourceEntity(230U);
    msg.setDestination(46214U);
    msg.setDestinationEntity(198U);
    msg.timeout = 52045U;
    msg.lat = 0.876756094628;
    msg.lon = 0.542458355203;
    msg.z = 0.88061751063;
    msg.z_units = 225U;
    msg.speed = 0.534891740338;
    msg.speed_units = 35U;
    msg.syringe0 = 78U;
    msg.syringe1 = 148U;
    msg.syringe2 = 242U;
    msg.custom.assign("UMDQDZDWQDYPSQNQZUAFHLQYMEJACSSQCZXUCPXCNHGTZGDOXYKMIEFJMORDAVVPLLBDHPZBBNVESFGRYKVWRCGRGUICAGDKEGRBTMNLSKVAZQECWDLBQUMSWNUHSPXAZHVYFUFTJZIETHJMNIHKOIRTCOZEMCQTVXBCYAGNIUXPNTFXKFFMBWEVROJLQVBISKGNPXZFRTHLELPYVJYWOY");

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
    msg.setTimeStamp(0.153802283168);
    msg.setSource(65300U);
    msg.setSourceEntity(114U);
    msg.setDestination(58157U);
    msg.setDestinationEntity(19U);
    msg.timeout = 32021U;
    msg.lat = 0.675286023313;
    msg.lon = 0.738814003868;
    msg.z = 0.43362822781;
    msg.z_units = 90U;
    msg.speed = 0.0994279252856;
    msg.speed_units = 201U;
    msg.syringe0 = 191U;
    msg.syringe1 = 132U;
    msg.syringe2 = 20U;
    msg.custom.assign("UEWOLXVZFQXYMXKWEJANHVKTKZBMFFNAFBRIHHVELINDSRNYXDUPKQCQLYOTOQBPWCSYGDIVOFYFMVDZTGPMVGIQDGKHJCUULJQTPIJXMCHGLNAPVBAWJNWWFQNBJNHCUYIGIKSFCNTSTXQCPJNLZZOBOSURG");

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
    msg.setTimeStamp(0.0211750967095);
    msg.setSource(1690U);
    msg.setSourceEntity(80U);
    msg.setDestination(26483U);
    msg.setDestinationEntity(118U);
    msg.timeout = 39662U;
    msg.lat = 0.070309988653;
    msg.lon = 0.183803461857;
    msg.z = 0.121360785671;
    msg.z_units = 31U;
    msg.speed = 0.46388965577;
    msg.speed_units = 232U;
    msg.syringe0 = 139U;
    msg.syringe1 = 134U;
    msg.syringe2 = 87U;
    msg.custom.assign("XIQIGDPJDULEFZGNBHBZHBCLCTOAXINTUCNPUBCASWTJZUXBVQWHLMQEFBHMYRFTLZFCJVGAOFUYVURSOWCZURMXBVRUSSZMDTDJAPQWSVKTYOIVONYUPKWXXNGMEKBIGHJFNKLRXRKSYLALMQGNJELPFIECRHEOEVP");

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
    msg.setTimeStamp(0.0513263236698);
    msg.setSource(55683U);
    msg.setSourceEntity(167U);
    msg.setDestination(3576U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.469889026813);
    msg.setSource(28595U);
    msg.setSourceEntity(37U);
    msg.setDestination(59592U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.848529585056);
    msg.setSource(55903U);
    msg.setSourceEntity(10U);
    msg.setDestination(14608U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.180393927206);
    msg.setSource(18646U);
    msg.setSourceEntity(70U);
    msg.setDestination(48229U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.311862161811;
    msg.lon = 0.273422020839;
    msg.z = 0.696870499223;
    msg.z_units = 166U;
    msg.speed = 0.6266329187;
    msg.speed_units = 153U;
    msg.takeoff_pitch = 0.318091440123;
    msg.custom.assign("BORWOUKQPXELUPMCHYQWJZNJCYFWSJOYGJACKFGEAXBUVUZSZSDNBRDSHTDJYGVBVRECHTTVRIJEFDANPOUMAWBIKCGHVGYAOQIYNNTLTYDFUESAGKZDZGMPPDRPKMQIXUVUFURLVWLSOXBDYXAKOJMXRQKHLSNOTSHHEGUCJLHRFZTFOQKLNWXSMHMIQMQZEICVYIELFJPGQPPRGWOXHZCVKCLWETPZLMQT");

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
    msg.setTimeStamp(0.206322196581);
    msg.setSource(40780U);
    msg.setSourceEntity(225U);
    msg.setDestination(12082U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.454301662001;
    msg.lon = 0.96609264141;
    msg.z = 0.223693598108;
    msg.z_units = 39U;
    msg.speed = 0.0368210823029;
    msg.speed_units = 208U;
    msg.takeoff_pitch = 0.543836326963;
    msg.custom.assign("JSYPNKUHVLOGRSDVMFCRMXJDMFNEMJIEXEBCWCMPSQVXCFXIPWZWVHONBQEGIDPZKOLDOERQHRVNMZPAZMJIQDSLIGQDHKSTHPKNTQKPSQAOERLYPXYNBFAKSEBCHCJTBHAZLYAIZOGLKTURFGKOCFGRMIZLEQY");

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
    msg.setTimeStamp(0.174703245798);
    msg.setSource(11723U);
    msg.setSourceEntity(52U);
    msg.setDestination(46774U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.0790367891575;
    msg.lon = 0.271070719632;
    msg.z = 0.597887033668;
    msg.z_units = 6U;
    msg.speed = 0.890770329967;
    msg.speed_units = 53U;
    msg.takeoff_pitch = 0.995413419522;
    msg.custom.assign("JHBFCGSRYTHEOSIAYAQJTOHDLXMQBNCYZUFTWJLJRRJQPGVMBZZWNXGQWMYCYIINSXNISIPNYDLEIXONOHSOIIXUDQWSNJDQFHFRBGETLLKOLPKQRNVCGGATJREUTKEZPPMGWLPZKJKAVYEOBFXPACGBDSQYGMHTWWNTHBRUVBJXZHLJKCCYKLWWMHEZPLKXIEQUFVOEVRGDDDUVWKTFFCZXU");

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
    msg.setTimeStamp(0.323674620285);
    msg.setSource(37041U);
    msg.setSourceEntity(64U);
    msg.setDestination(46494U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.787842405216;
    msg.lon = 0.723391159131;
    msg.z = 0.839237894788;
    msg.z_units = 231U;
    msg.speed = 0.119562081586;
    msg.speed_units = 193U;
    msg.abort_z = 0.626628317786;
    msg.bearing = 0.271757445458;
    msg.glide_slope = 198U;
    msg.glide_slope_alt = 0.652862354158;
    msg.custom.assign("FIHFWOMRWBGUSSTYLTORUNQDNUBMVZFJGQKQMMVENVCEXOCLAOTIDHHOERZJDKWZSCXLKEGATGPIMVPJZNSNMBDOUYIPWCHXLSYWDFBJLESDCVYWBOGKTLRWSHQCCFDAIRQPXPUBQRJQCEQVHKZX");

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
    msg.setTimeStamp(0.660017010661);
    msg.setSource(46251U);
    msg.setSourceEntity(163U);
    msg.setDestination(64925U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.336542536567;
    msg.lon = 0.375648743588;
    msg.z = 0.668292095649;
    msg.z_units = 163U;
    msg.speed = 0.316249875661;
    msg.speed_units = 236U;
    msg.abort_z = 0.443568770545;
    msg.bearing = 0.589864111703;
    msg.glide_slope = 199U;
    msg.glide_slope_alt = 0.286603772432;
    msg.custom.assign("XBWQQKYKNGDMTDTJARFFEUBALKXFUFQ");

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
    msg.setTimeStamp(0.810758405356);
    msg.setSource(2204U);
    msg.setSourceEntity(175U);
    msg.setDestination(27483U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.731648305925;
    msg.lon = 0.216478517244;
    msg.z = 0.895592753511;
    msg.z_units = 225U;
    msg.speed = 0.230051928373;
    msg.speed_units = 183U;
    msg.abort_z = 0.891430563477;
    msg.bearing = 0.89681207541;
    msg.glide_slope = 239U;
    msg.glide_slope_alt = 0.307700767888;
    msg.custom.assign("BIHFLZGVOGNDMAUWZCTRETKWLLCWVXCFEQYNT");

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
    msg.setTimeStamp(0.634224981343);
    msg.setSource(56902U);
    msg.setSourceEntity(203U);
    msg.setDestination(57739U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.88136264839;
    msg.lon = 0.0737144452668;
    msg.speed = 0.987310396281;
    msg.speed_units = 11U;
    msg.limits = 34U;
    msg.max_depth = 0.00139441995847;
    msg.min_alt = 0.724258625884;
    msg.time_limit = 0.472118961096;
    msg.controller.assign("IELDFDKAUVAQUCWDEHFTJRRBHZFYMTYPNSYFBGMSDJXDMKMBLGPQJVPPERSQWZDKCUYFUVMDIJRVRBTVGMRCWTBNGVZSXCKXWYQEOPRYZFMOJUHHZLWUAHRFGJWOXGNYZWMXZKDEUIIPXTYBAVEQUERGJNYLHPNFUZNAVBOUVZCRSYQHSONXWPCAPAKNOLKACGFESPNSEHMDIFTW");
    msg.custom.assign("JVKSGYVXJMLACYQEEIRMHEBAHOIQNSYXZGDADIELRMVMYREQTRHLFAWVYQNWVUMKNMJXQOWXFBQHOJOUEJGUWDLTNERAPUTTJPNOLKEVNHSOCNIKNMXXOQVBQAZXHWBKIJWGAGXIOLJQDFRIKXCYTFLCGGMBUHDGDKWZCSHUYAKSAFDXPRYJYVH");

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
    msg.setTimeStamp(0.324593695424);
    msg.setSource(29386U);
    msg.setSourceEntity(247U);
    msg.setDestination(7341U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.203987835613;
    msg.lon = 0.418739541156;
    msg.speed = 0.513002277716;
    msg.speed_units = 15U;
    msg.limits = 62U;
    msg.max_depth = 0.90682446785;
    msg.min_alt = 0.951183152948;
    msg.time_limit = 0.0495201326039;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.00142281532538;
    tmp_msg_0.lon = 0.976823457336;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RGJYHUFGWLHIJFTGVTOJNAYNCKWQCOEHJUDKWLRAPBMCYAXCOHWATTZKFBXCSOFHUKCEHLLRITULBOQMAQBZYMXDKEZPFVGGDNNDVRBRLQSMXDLSJGGTMFXDSMETXMVISRPZVUCINQ");
    msg.custom.assign("SQHSPCBFPVJXPMHDXVGXYSZROTBBMZLNBGWAYJKJAFAXSAXSCIOFWDREJLYXPOBFVTKFCAOFHUPBSLPZELBEYTQUFJWKNCEGIASKNVXFMVJGFDCNKFGWIABQTQVVMXTPLLEIJMZNUZAETSVRHYQWZGZOOUIGREWNOXPMORGPKKOKSTVMNUUDCWYQRRLDJITRRSDDUXLLGEWBHCBILRJIODAHUNEWHHCZKDY");

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
    msg.setTimeStamp(0.849334434246);
    msg.setSource(25528U);
    msg.setSourceEntity(46U);
    msg.setDestination(34843U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.298493692598;
    msg.lon = 0.0623715114732;
    msg.speed = 0.798238862558;
    msg.speed_units = 210U;
    msg.limits = 200U;
    msg.max_depth = 0.571459532729;
    msg.min_alt = 0.464033500278;
    msg.time_limit = 0.951654956453;
    msg.controller.assign("ZRZBKCOLIMOJVQK");
    msg.custom.assign("NSRRJGJAGFCBHPQKFUTCKIAMVLJGYEQHWZZUGHPFCCBVADJWOTDPNQZVAJBIMSPEOOXHQYSYVLFLMEKXTAHCBKKBJMZYCHNPEMUOOQONDTUKGDLSSTMXRUUWEVPWPNEMUDDWEFGR");

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
    msg.setTimeStamp(0.627289908698);
    msg.setSource(53683U);
    msg.setSourceEntity(153U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(217U);
    msg.target.assign("RTDISNFOXQVGEWJDT");
    msg.max_speed = 0.844468046542;
    msg.speed_units = 131U;
    msg.lat = 0.239503428231;
    msg.lon = 0.429768411234;
    msg.z = 0.505808028053;
    msg.z_units = 144U;
    msg.custom.assign("IFRNSTTATGPPSSJZWUMHWIH");

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
    msg.setTimeStamp(0.370638823049);
    msg.setSource(36635U);
    msg.setSourceEntity(250U);
    msg.setDestination(30052U);
    msg.setDestinationEntity(208U);
    msg.target.assign("YGCNULQXWZBE");
    msg.max_speed = 0.670470793227;
    msg.speed_units = 13U;
    msg.lat = 0.276550487476;
    msg.lon = 0.0199209114289;
    msg.z = 0.357865796538;
    msg.z_units = 183U;
    msg.custom.assign("JAOXPUXCRVCWHMROLJIEOOLHYARDCAWIYJNFAEIKOBJYRBWBWXPQRKLTFBDVPEYCMXSSRTEAIPYUECBLMDKPNQNHGYIKLHPVZCXUFFIJTNKWUDVGDNFGUASKHRWEPJQEFTAIMYXFSQHSCSQDJCHRWCYAGXSUODIBKWKLTUMNSDXQLHPLDRYIZZMSBEOLZBTSVQM");

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
    msg.setTimeStamp(0.847237797951);
    msg.setSource(64754U);
    msg.setSourceEntity(51U);
    msg.setDestination(1012U);
    msg.setDestinationEntity(136U);
    msg.target.assign("LJWIVHTJDKDRUVDVABWBGHEIOLCSTIXAXHCCFPGYSTBUQJOAGBMPMDXMFMQGIPPHVFBFDVNUXJRHFRAODDRPBBQNKGSEWHGPZIKXLKMEWLXONZKSLIZWJDEDYNSXMUYZKZWFAEC");
    msg.max_speed = 0.980419840495;
    msg.speed_units = 197U;
    msg.lat = 0.934673709557;
    msg.lon = 0.599450305429;
    msg.z = 0.269085657777;
    msg.z_units = 151U;
    msg.custom.assign("XELQCJEJEUMCEYUSTRGHBNXSATGHSRRKOTMPRBWHPUNGIOPZEZVMJCUOMIKLLNUVAWAOVJAAHITJISDXGYLWAWZGXECPZF");

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
    msg.setTimeStamp(0.924086739758);
    msg.setSource(17969U);
    msg.setSourceEntity(122U);
    msg.setDestination(9937U);
    msg.setDestinationEntity(252U);
    msg.timeout = 11924U;
    msg.lat = 0.864357511177;
    msg.lon = 0.201525507447;
    msg.speed = 0.444391214137;
    msg.speed_units = 34U;
    msg.custom.assign("CCQHONVEGSXROJJZMFTFVLDWQCFZIUPDFEVQPHRIATKFBUESJVYTVSUTXHNIFOWVLAWVGMIIXYOSALTZOHXLDQXHDAQMERZZUBSKUKGTENGIAHDXWJWHLNIJGMNSFNSCQHEYJWYUZPFZJDTBXUTYELRMOABKGGTZCPECRMDMRNCRHYCPOWEOGQBNZLKKXRYPHUNMUSYBZACPODYMIRWL");

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
    msg.setTimeStamp(0.240433391474);
    msg.setSource(25648U);
    msg.setSourceEntity(235U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(172U);
    msg.timeout = 45170U;
    msg.lat = 0.371062473034;
    msg.lon = 0.752070861165;
    msg.speed = 0.0414840616108;
    msg.speed_units = 71U;
    msg.custom.assign("YGRWIVHLMJOTSBICLDVEFREMLNSILKAUHOM");

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
    msg.setTimeStamp(0.602517772843);
    msg.setSource(16367U);
    msg.setSourceEntity(42U);
    msg.setDestination(23981U);
    msg.setDestinationEntity(220U);
    msg.timeout = 43197U;
    msg.lat = 0.522284322948;
    msg.lon = 0.225913428597;
    msg.speed = 0.186751851728;
    msg.speed_units = 129U;
    msg.custom.assign("YDUNPKZMSDYHDRNUUFGKEFBYSAAUFLWOTIDBCNLTTXWSNOTGQASVUHQZBUSBDSZMEQQDAKFRMZOLEIXQEUXLJZLFRNVVQQJQAPMGTCSECGVUEHYEGAPKVGBKBCTNGTB");

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
    msg.setTimeStamp(0.766048435054);
    msg.setSource(25952U);
    msg.setSourceEntity(225U);
    msg.setDestination(41020U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.271359871988;
    msg.lon = 0.194534449015;
    msg.z = 0.699575811254;
    msg.z_units = 196U;
    msg.radius = 0.065507533401;
    msg.duration = 41885U;
    msg.speed = 0.295385409421;
    msg.speed_units = 64U;
    msg.popup_period = 63576U;
    msg.popup_duration = 14632U;
    msg.flags = 39U;
    msg.custom.assign("ODLMRSPFVWZDUSVKTLAJTNMDFZLUISJABQKCVZGEPEKQNMURKDTMYIXNHRPNYYYPZYKCFWGABASWGTOUIQQVVPKGDVJDWCODXDVKBWJFXXGIRQCGGREFBNLMLHBCJDLUMCHBHSTWPDQYPMWPBEJHTCBVVSNGEXRZEEZOHOZSMQFISUCQQBYTFPIUYLOUJZFSH");

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
    msg.setTimeStamp(0.951513621916);
    msg.setSource(59340U);
    msg.setSourceEntity(41U);
    msg.setDestination(32493U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.901132595523;
    msg.lon = 0.585355949196;
    msg.z = 0.822228759479;
    msg.z_units = 8U;
    msg.radius = 0.978255007267;
    msg.duration = 65518U;
    msg.speed = 0.18217152051;
    msg.speed_units = 60U;
    msg.popup_period = 35153U;
    msg.popup_duration = 28660U;
    msg.flags = 119U;
    msg.custom.assign("UFZIEVBADRUKQTFFAPRTVNUTYSKGTMPRRCKABCSEIUQESQQDWVKBNCMWOYYOFMDEGIOPDJJULLXWRXPNEENLFYGGLWBZHKIGNALMPRQAZHDXTKTNFGJHMRBIPMAAIEYHSVGYOIGBAUILXTZZUO");

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
    msg.setTimeStamp(0.411616936635);
    msg.setSource(18647U);
    msg.setSourceEntity(48U);
    msg.setDestination(15751U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.573654128096;
    msg.lon = 0.902453053631;
    msg.z = 0.109475107829;
    msg.z_units = 69U;
    msg.radius = 0.253796164814;
    msg.duration = 60844U;
    msg.speed = 0.147158516341;
    msg.speed_units = 104U;
    msg.popup_period = 25253U;
    msg.popup_duration = 20103U;
    msg.flags = 16U;
    msg.custom.assign("UWRNKJTAFQFEQDZGNMISMZGQQVIKSPDJOWYYKGZWKUQEWUCVHNPEEACSVPMVFBXQMSJLOZLIJC");

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
    msg.setTimeStamp(0.876955315117);
    msg.setSource(61372U);
    msg.setSourceEntity(35U);
    msg.setDestination(33387U);
    msg.setDestinationEntity(204U);
    msg.timeout = 53685U;
    msg.lat = 0.0230058032762;
    msg.lon = 0.277215859103;
    msg.z = 0.0949616798049;
    msg.z_units = 145U;
    msg.speed = 0.968002950415;
    msg.speed_units = 28U;
    msg.bearing = 0.403851954125;
    msg.width = 0.713341053263;
    msg.direction = 56U;
    msg.custom.assign("OTOERBFJVKUZNTKFDEFLOJBSIWVDZPHRTIQXOMJHCLSDPRSTNIZYQWBBTXBPGKHQCVVRYAJXHTPMMBAJRYWNMLXXAVNZKEVTMJGHCPPKRIALJUFQLYQQYLXYSWDNRIETLKOYIEPCNLBFH");

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
    msg.setTimeStamp(0.232276396177);
    msg.setSource(19695U);
    msg.setSourceEntity(62U);
    msg.setDestination(1547U);
    msg.setDestinationEntity(88U);
    msg.timeout = 61118U;
    msg.lat = 0.435115503347;
    msg.lon = 0.144026292999;
    msg.z = 0.780516272441;
    msg.z_units = 89U;
    msg.speed = 0.382276188807;
    msg.speed_units = 71U;
    msg.bearing = 0.905929967622;
    msg.width = 0.2327697569;
    msg.direction = 134U;
    msg.custom.assign("WGBBIVMPFYLQDUGTAPQEFISZVNRURQIIXMAWKZBTOBYFVVCKZJKEPYHYSIJHNZBTSOHWIGTSXDTQJUPBXWEJICEAPUHKPJRHQNMUAFUSCLHVLUCOOKAIXJYLQPEREMJLETQVHOINJOYCTRGKAWHTEVZFBNBWETNVVXZPZTGGOYZOQKRDZLDDPCMFW");

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
    msg.setTimeStamp(0.192600108886);
    msg.setSource(22726U);
    msg.setSourceEntity(227U);
    msg.setDestination(33309U);
    msg.setDestinationEntity(22U);
    msg.timeout = 59087U;
    msg.lat = 0.527281943987;
    msg.lon = 0.391331401325;
    msg.z = 0.000771405558093;
    msg.z_units = 181U;
    msg.speed = 0.0483371062438;
    msg.speed_units = 231U;
    msg.bearing = 0.864510193669;
    msg.width = 0.791618777868;
    msg.direction = 56U;
    msg.custom.assign("IUKYPRFIJOSENCHEFOXBDBIPJSQOMGKNFBUAEIMNTFWYJROZTEMUQBHKNSPLEYGQPLDLKYYCLJFLHICVKAIQYRXDINJZCOBMAFBAL");

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
    msg.setTimeStamp(0.165983124268);
    msg.setSource(49295U);
    msg.setSourceEntity(253U);
    msg.setDestination(13698U);
    msg.setDestinationEntity(59U);
    msg.op_mode = 78U;
    msg.error_count = 212U;
    msg.error_ents.assign("SKGFCFYULFECTVKTLRLHYXRBZTKOQOVIBJOJDRHVSYLLWQFIFUMSFESPJMHXCAVXHMQCPPXL");
    msg.maneuver_type = 19139U;
    msg.maneuver_stime = 0.747978405125;
    msg.maneuver_eta = 28418U;
    msg.control_loops = 1154613084U;
    msg.flags = 60U;
    msg.last_error.assign("BNSASTGPHRBZVSNGXOQVMHGIFJJNZKXXKHAVFLNTOOEMANERRCYSZIIPWYXDKJFRDZYHHUEBBCMTDXSVHWARMNCRBLQLFXVKUOERPWKCYAMUDWCIJEEMSYHQPTGLXTQKIDSSZHQQUBALYKZYZTSJMPKPFTNWOXWLDIUBOPOGZWJWIQGVLYNQTFPUFFMURJAHGYVKCOEJZPQKUDLYGXHMEIRXNVACJGBTLAW");
    msg.last_error_time = 0.460347050984;

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
    msg.setTimeStamp(0.503417579405);
    msg.setSource(34035U);
    msg.setSourceEntity(241U);
    msg.setDestination(37025U);
    msg.setDestinationEntity(195U);
    msg.op_mode = 150U;
    msg.error_count = 84U;
    msg.error_ents.assign("VJZAYMLCFYOGXTNGRDWUVRONYEUKROGCQOQRAGBO");
    msg.maneuver_type = 23483U;
    msg.maneuver_stime = 0.4365318489;
    msg.maneuver_eta = 26909U;
    msg.control_loops = 3125741544U;
    msg.flags = 115U;
    msg.last_error.assign("KPCPSFRZWFETNYMJKDYTJBQUEBOPJULHHDDJVMEIQBIMPZOAMKXNTYJLMKUDNGIEOTVNATQBWOUATGEKGGEMQPJPUSNFKUVOIFGORLHDMWFYQEWGWAISYIETLVWGCHCOSLSRCXGWYTXCVJRDYQSWYMZZBELNUGGHQLFWZPQXSVCDELCLHKVNHXFD");
    msg.last_error_time = 0.512802167196;

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
    msg.setTimeStamp(0.71417239756);
    msg.setSource(50335U);
    msg.setSourceEntity(12U);
    msg.setDestination(57397U);
    msg.setDestinationEntity(64U);
    msg.op_mode = 52U;
    msg.error_count = 169U;
    msg.error_ents.assign("WYZDZMNTJRNFTQSZZFVLOGGOPF");
    msg.maneuver_type = 6812U;
    msg.maneuver_stime = 0.540668693587;
    msg.maneuver_eta = 34188U;
    msg.control_loops = 2845832177U;
    msg.flags = 237U;
    msg.last_error.assign("AICVBEBEAJJDSFYCDTONVKDAHKMYXJALETSLKAYSCMIIECMWVUUHLGWTBMRQZYUYJVOBFULKHSHONQELQZCESFQITOTTHJGSWGNKZUXXULOGUBPPOERPCJKZYIFWRIKFILICXXTRYBGXSRGNDTCXVRHZMGQGNMQAQWZVKFINAQJQDUXUZLPAOVJSBEPYRWHYBFMMROBGAFONDCVXFBJDLEHMQVHWPPPZTWDOAUDLXGVWSNHRFJKTRCSYKPPIWE");
    msg.last_error_time = 0.508776747717;

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
    msg.setTimeStamp(0.0565862622764);
    msg.setSource(63763U);
    msg.setSourceEntity(55U);
    msg.setDestination(16644U);
    msg.setDestinationEntity(37U);
    msg.type = 120U;
    msg.request_id = 42280U;
    msg.command = 76U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 36367U;
    tmp_msg_0.custom.assign("CTGVXEASIELDYDEBJDOVZEOZCLSFWVZBAPLKYIBRLTRZFMRITPKUBDYVDDUTKOVTHMKLIIMHQHFVPFEEXARZTWCGREQXTKJLGAJA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12496U;
    msg.info.assign("EUNCJKRNLXHBRIQQHAKRGNMXYPMEIDETDGSGABBDQFUCMVCRYFDHJMCBRBSTRKPQBPZUCPOPENMRFTVKFHDJUJJZFS");

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
    msg.setTimeStamp(0.303649914526);
    msg.setSource(63036U);
    msg.setSourceEntity(217U);
    msg.setDestination(13428U);
    msg.setDestinationEntity(41U);
    msg.type = 199U;
    msg.request_id = 6079U;
    msg.command = 116U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.728394870766;
    tmp_msg_0.lon = 0.076784169908;
    tmp_msg_0.z = 0.0591338378182;
    tmp_msg_0.z_units = 129U;
    tmp_msg_0.radius = 0.761953584626;
    tmp_msg_0.duration = 45306U;
    tmp_msg_0.speed = 0.914150079624;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.popup_period = 4165U;
    tmp_msg_0.popup_duration = 35459U;
    tmp_msg_0.flags = 82U;
    tmp_msg_0.custom.assign("PUSSHILRRMDFWYTNSQGFKUYSJQVVWYJKYZZRJTBAOBFDBHXPSZELEBGHAXHFCEENFIIMZZWQJVLQRCXVUJVSWOHPWFRXNCQPGESGODLTKYLWLBDYIDAKITXRUNKGCZUMVUMMOCOCVQAKIPXKAFTXJTBYPNIEQAQX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32808U;
    msg.info.assign("YQDGCAKVDHAWWXOSJLZWYJODNACRPNQISFSCEXAOURNCZUDSWPMOEEEJRQBMOBRNJIAWTRLUQWMZSMHQERHMEUTNAONJHIDOLYHBTHYPSQKDUZJVEOYDGCLXRSRMTNGIVJTXGTKRMXXDKBXFJH");

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
    msg.setTimeStamp(0.811406949736);
    msg.setSource(52157U);
    msg.setSourceEntity(100U);
    msg.setDestination(39626U);
    msg.setDestinationEntity(184U);
    msg.type = 78U;
    msg.request_id = 10572U;
    msg.command = 177U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 6443U;
    tmp_msg_0.lat = 0.0668729321777;
    tmp_msg_0.lon = 0.871470547054;
    tmp_msg_0.z = 0.499598518812;
    tmp_msg_0.z_units = 89U;
    tmp_msg_0.speed = 0.453877065801;
    tmp_msg_0.speed_units = 131U;
    tmp_msg_0.roll = 0.486882496446;
    tmp_msg_0.pitch = 0.103115516903;
    tmp_msg_0.yaw = 0.209136242881;
    tmp_msg_0.custom.assign("TYPWSSJLIRTWPVMVFZNRJELBSHWTLCSQOCZTEVJSROVAUZFJUPXZBNBQYTQLYXFILSLCORKFGXIGGNXAGQVBIMUJKERTGTWWBKZBNHZGJFRAWEYDNPFQBXBEPVOQUXOOXVODUTCRQYMVKYCPIMOGMGHZLDJW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2691U;
    msg.info.assign("UMTISHHWPOZVZDOUPKERAKLRGFAWSMFMVINCEAKRVPZNOHNDEJWKNXSTFHHYGCDDRQPCZPTZUWOEKZXYTTZFKPZWQKTUDYQWGGUICLMDJZHACQVDMJEZJSOIFGDESNYECGBEYXGXWAXYJYMJEAUHPGVTHSQEVSLOPJBRINPVUWAQFRJCBPIRLXSIIRBY");

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
    msg.setTimeStamp(0.67955783491);
    msg.setSource(38427U);
    msg.setSourceEntity(206U);
    msg.setDestination(6276U);
    msg.setDestinationEntity(235U);
    msg.command = 59U;
    msg.entities.assign("ZBCINIUYXDKSRMASQVBGNVFMJERHPHJGLYSEPQVRLRJMT");

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
    msg.setTimeStamp(0.0636097944265);
    msg.setSource(28970U);
    msg.setSourceEntity(22U);
    msg.setDestination(46105U);
    msg.setDestinationEntity(118U);
    msg.command = 204U;
    msg.entities.assign("KZUVQCAVQARKOJYFBEYRPHHBKTGIZHAPEGHPPJ");

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
    msg.setTimeStamp(0.800463253465);
    msg.setSource(18947U);
    msg.setSourceEntity(148U);
    msg.setDestination(34488U);
    msg.setDestinationEntity(150U);
    msg.command = 189U;
    msg.entities.assign("QNOXXLCGVAOXYNGJPIQRMMMWMROWHORWWLTENRSZBRGSRSOEXKUZLUPQCIUDHFEHYEOBHJCZBLJBMDAKAJEVHEDBDWCMFPITXSGGZCMAKFOQLJTNSYVQUWIYQAVXTK");

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
    msg.setTimeStamp(0.950810270763);
    msg.setSource(3185U);
    msg.setSourceEntity(220U);
    msg.setDestination(54968U);
    msg.setDestinationEntity(143U);
    msg.mcount = 20U;
    msg.mnames.assign("JCQEXFHFUAORWBBWDHNUGSDJXJCVPDBGFYHUHITEJNUTGFCYEKLYOIJRBSAPNMSIGALRHUXWAPYFHVGRSBIIVLTDMTTCIESONLQZAOEAYAXYKJSPDPELABTOZKNNGSYLVCOGKXVLYRTXMMKXENJIWZOMZLKROTCXHWOJBSCDEQ");
    msg.ecount = 50U;
    msg.enames.assign("IWAELSTSTZCTYCNOWVMUQTVQYDRPBLHHHWLOGENDWAXGAAOZIXJIDSLJIDBPMOBQVMTBIPUCWDXWRZVKBNZJAJCFNTSOMKJAYXYARYZAKPUZEBJXCFDEGHGGNOSEEQASLDHYUZVMHSLJQSWICIQIYG");
    msg.ccount = 248U;
    msg.cnames.assign("MIMVVFSYTVAYEQUODAMQRPCMAMJRGCYKHRPBEWHNXRADFIDDAYNOPWEDVQSVUFMWBIHSRJUZBHNQGLSOSPDZBOFLWLYRJQKSKQRGECDEEZNDICOVLWRUJEFENFKTNLNJKLXAVGRGZBHYZBWFITNLUHOZHWTHTMETSFJYNWUPFUWXRZCVKOKJALYGXLKBXWCOIAIDLVJPMIOCXSKASQH");
    msg.last_error.assign("WBBCLHVQBWYDLRABQWQVTCSZNWKIHFQAJWPRMXRAXHDBSJZSALQEFXCGRFMEKKJRJPEPWMAIZOKRIUGGLHNXKJQDDILSBNUSPMEYGOZTABIXCTEVUI");
    msg.last_error_time = 0.917744191795;

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
    msg.setTimeStamp(0.883617037447);
    msg.setSource(49048U);
    msg.setSourceEntity(227U);
    msg.setDestination(28817U);
    msg.setDestinationEntity(116U);
    msg.mcount = 239U;
    msg.mnames.assign("LCDQNVYWNSCTFGDZFDYDZWNOIMNGSUPSKDIUZWZKJVKNUBEMDMANGHRCSOWBOCIVWAHEEQQKYHCNFTIHTOXDXPPMLJFEIDVCXJGOMEEJPABPXGJBRPAASCJHUBKRIGFRIKYFLTTNPWYXJKXXTTNXEOWGHUQNCSMALL");
    msg.ecount = 155U;
    msg.enames.assign("DZBXILSHIZSFVCYDGNDIXLNEDGPHSGAMENCPFERVVKWGMVSUXKAHGNMYWRLTGNYEUYIQRSAFCMRMOSWWQQKYIKPYBBLOFTCOYCLRSYSTYOCKTOHHQZMHASIIVNTIBVDXZAWYMXJNMZDONGMDXZCBZEPJGUFANFKDQEAGQTIRDRAPHPEBTTXIWMDWLOOPXZSJRQBVJALNTHVFQJUBHVWKXKEJKGPUWJVEFJUBFRQWXQ");
    msg.ccount = 164U;
    msg.cnames.assign("DBMYTOJVJKAZGJRBZTSVLHHALPUNPOTECKUIINXRVUWNFITLNHHDCQGXCHFDWWZUGJMAPGQLDAEPLYGUPSOYEYQTF");
    msg.last_error.assign("YJQAQVEIHDAXPHBWSPLDKRFZNEJCMGDOUCEDCRZQMBGPXIQMENYHMMKWBJDXNSVYTJOVIWVGIIFGDVNGKQOVFVAJIMWTEOKYIFRVEZLZGAIORZRFMKBZ");
    msg.last_error_time = 0.399631356793;

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
    msg.setTimeStamp(0.37389567486);
    msg.setSource(39523U);
    msg.setSourceEntity(28U);
    msg.setDestination(56862U);
    msg.setDestinationEntity(117U);
    msg.mcount = 153U;
    msg.mnames.assign("GNWXJSWLMEFZKBYAFMULLTNQYSNZPOWLVPUWHUNWDEBNTEJFLFQMGAZWLRVROZRRNTQKEQITQCRSMDVRMKVHZJTAJMZIVOODDYIBSDTZSSHXIARQGWVBDGIMXQUSKLWUDEYBXOFPYOXIUIOCMJPCULAHVNBEPPYQAYNIRCVTGJHROFEZUXAGRVHUOTMCOVZHGZCBHFAKLJJW");
    msg.ecount = 20U;
    msg.enames.assign("TWLSGXXVZVHCHBYGRGDCRXEOHRJUSIPUDVIUTQSHAFAZYIWNBICRVCCXWKKVEEPJITBXUBXMNQEVLLQCWFGIBLAPHSOUDKEXNNYVKLPNEBGGYJUPXHDWSAQNOHCLUYMDFWWWLMAFCYKFUYMO");
    msg.ccount = 9U;
    msg.cnames.assign("PBLVKGMEORXFYCLSGVPESRZAFQHXVUJDLOBMARNAVLXRIIHUQSITQXNRTASHZJLCAZWVHMKYF");
    msg.last_error.assign("USDWWDQXOHPFFWHBYTHFCDIBMNIYCZDMFIFFYLIY");
    msg.last_error_time = 0.11719969371;

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
    msg.setTimeStamp(0.197477908876);
    msg.setSource(636U);
    msg.setSourceEntity(41U);
    msg.setDestination(31794U);
    msg.setDestinationEntity(246U);
    msg.mask = 154U;
    msg.max_depth = 0.569477931584;
    msg.min_altitude = 0.450010499397;
    msg.max_altitude = 0.814388918507;
    msg.min_speed = 0.814372478584;
    msg.max_speed = 0.933007292134;
    msg.max_vrate = 0.0590552602379;
    msg.lat = 0.416003274151;
    msg.lon = 0.334838088031;
    msg.orientation = 0.765155792615;
    msg.width = 0.9844259081;
    msg.length = 0.656305531945;

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
    msg.setTimeStamp(0.3773369952);
    msg.setSource(26454U);
    msg.setSourceEntity(31U);
    msg.setDestination(44049U);
    msg.setDestinationEntity(202U);
    msg.mask = 101U;
    msg.max_depth = 0.227102023831;
    msg.min_altitude = 0.999598497126;
    msg.max_altitude = 0.703421779373;
    msg.min_speed = 0.516662833387;
    msg.max_speed = 0.847932527837;
    msg.max_vrate = 0.142671149138;
    msg.lat = 0.419595144903;
    msg.lon = 0.0313375419724;
    msg.orientation = 0.0047654813161;
    msg.width = 0.472913678087;
    msg.length = 0.334919608149;

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
    msg.setTimeStamp(0.886850130513);
    msg.setSource(58874U);
    msg.setSourceEntity(106U);
    msg.setDestination(43796U);
    msg.setDestinationEntity(215U);
    msg.mask = 238U;
    msg.max_depth = 0.55995504525;
    msg.min_altitude = 0.979617514137;
    msg.max_altitude = 0.841611843674;
    msg.min_speed = 0.242907195664;
    msg.max_speed = 0.47781702621;
    msg.max_vrate = 0.660478505484;
    msg.lat = 0.18028339933;
    msg.lon = 0.0328648736565;
    msg.orientation = 0.675682389941;
    msg.width = 0.785985928375;
    msg.length = 0.414161216694;

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
    msg.setTimeStamp(0.0741024656276);
    msg.setSource(35201U);
    msg.setSourceEntity(153U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.642311385714);
    msg.setSource(12635U);
    msg.setSourceEntity(35U);
    msg.setDestination(52849U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.788865198438);
    msg.setSource(53997U);
    msg.setSourceEntity(197U);
    msg.setDestination(20444U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.134452788551);
    msg.setSource(42776U);
    msg.setSourceEntity(45U);
    msg.setDestination(59199U);
    msg.setDestinationEntity(29U);
    msg.duration = 14580U;

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
    msg.setTimeStamp(0.406477046729);
    msg.setSource(36702U);
    msg.setSourceEntity(78U);
    msg.setDestination(35577U);
    msg.setDestinationEntity(91U);
    msg.duration = 44744U;

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
    msg.setTimeStamp(0.0480904977962);
    msg.setSource(4259U);
    msg.setSourceEntity(229U);
    msg.setDestination(55706U);
    msg.setDestinationEntity(232U);
    msg.duration = 28692U;

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
    msg.setTimeStamp(0.942280290262);
    msg.setSource(4864U);
    msg.setSourceEntity(3U);
    msg.setDestination(3061U);
    msg.setDestinationEntity(172U);
    msg.enable = 55U;
    msg.mask = 1440378598U;
    msg.scope_ref = 3943344500U;

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
    msg.setTimeStamp(0.664199785132);
    msg.setSource(49405U);
    msg.setSourceEntity(164U);
    msg.setDestination(60404U);
    msg.setDestinationEntity(248U);
    msg.enable = 39U;
    msg.mask = 4010842459U;
    msg.scope_ref = 3246863644U;

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
    msg.setTimeStamp(0.756551138239);
    msg.setSource(59325U);
    msg.setSourceEntity(208U);
    msg.setDestination(43580U);
    msg.setDestinationEntity(102U);
    msg.enable = 157U;
    msg.mask = 2928517266U;
    msg.scope_ref = 1953024906U;

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
    msg.setTimeStamp(0.632845126354);
    msg.setSource(64616U);
    msg.setSourceEntity(28U);
    msg.setDestination(50917U);
    msg.setDestinationEntity(191U);
    msg.medium = 121U;

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
    msg.setTimeStamp(0.351142483662);
    msg.setSource(28333U);
    msg.setSourceEntity(100U);
    msg.setDestination(51894U);
    msg.setDestinationEntity(96U);
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
    msg.setTimeStamp(0.589442142708);
    msg.setSource(36235U);
    msg.setSourceEntity(20U);
    msg.setDestination(2619U);
    msg.setDestinationEntity(207U);
    msg.medium = 5U;

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
    msg.setTimeStamp(0.344502464266);
    msg.setSource(55796U);
    msg.setSourceEntity(45U);
    msg.setDestination(49490U);
    msg.setDestinationEntity(208U);
    msg.value = 0.110850880148;
    msg.type = 242U;

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
    msg.setTimeStamp(0.974973036523);
    msg.setSource(34934U);
    msg.setSourceEntity(238U);
    msg.setDestination(61176U);
    msg.setDestinationEntity(229U);
    msg.value = 0.973589273065;
    msg.type = 131U;

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
    msg.setTimeStamp(0.440111925531);
    msg.setSource(56735U);
    msg.setSourceEntity(162U);
    msg.setDestination(13157U);
    msg.setDestinationEntity(94U);
    msg.value = 0.474312467443;
    msg.type = 189U;

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
    msg.setTimeStamp(0.173028034609);
    msg.setSource(9514U);
    msg.setSourceEntity(161U);
    msg.setDestination(40420U);
    msg.setDestinationEntity(9U);
    msg.possimerr = 0.779280920947;
    msg.converg = 0.477394710697;
    msg.turbulence = 0.144373298612;
    msg.possimmon = 128U;
    msg.commmon = 154U;
    msg.convergmon = 47U;

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
    msg.setTimeStamp(0.41569841912);
    msg.setSource(41187U);
    msg.setSourceEntity(66U);
    msg.setDestination(231U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.400468250609;
    msg.converg = 0.681186106325;
    msg.turbulence = 0.237917571423;
    msg.possimmon = 0U;
    msg.commmon = 14U;
    msg.convergmon = 34U;

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
    msg.setTimeStamp(0.206536966459);
    msg.setSource(32627U);
    msg.setSourceEntity(36U);
    msg.setDestination(63172U);
    msg.setDestinationEntity(40U);
    msg.possimerr = 0.989686152567;
    msg.converg = 0.668746243863;
    msg.turbulence = 0.90319661142;
    msg.possimmon = 66U;
    msg.commmon = 237U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.135248974412);
    msg.setSource(7240U);
    msg.setSourceEntity(98U);
    msg.setDestination(47849U);
    msg.setDestinationEntity(227U);
    msg.autonomy = 182U;
    msg.mode.assign("FQLSAQNTMRQEAFHQJYDEGYOOFPOCEKDYWXIVMQACJVGKSVKAHTFSKSJNZOFZZRBINZARC");

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
    msg.setTimeStamp(0.875443922);
    msg.setSource(29533U);
    msg.setSourceEntity(158U);
    msg.setDestination(28725U);
    msg.setDestinationEntity(245U);
    msg.autonomy = 166U;
    msg.mode.assign("WFPHEIWARUYLZXEUBWMANUSCOQDNSKHIHQWGEQOZVNXSWTSYUJTXHMDMUHBFJNBWOUPTBHKZKYDUANXRYYZZICZPMCQBGFYDEKRNSFJZWAVLGVJSPPDAWBOAQLPAOYGXFRVPKIGCR");

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
    msg.setTimeStamp(0.834721348774);
    msg.setSource(25763U);
    msg.setSourceEntity(8U);
    msg.setDestination(22983U);
    msg.setDestinationEntity(16U);
    msg.autonomy = 251U;
    msg.mode.assign("MJSWBEJSQFQAPVXITCWFONRZVHYFVTXOLYVHCJJAARDDNEEIYKTRGTULABOUVPDHJAIFPJAIUTDORKADCCADQMDCCHMKQYDDZXZOEMGIVKRYWLJPUGW");

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
    msg.setTimeStamp(0.464752766708);
    msg.setSource(63848U);
    msg.setSourceEntity(254U);
    msg.setDestination(17998U);
    msg.setDestinationEntity(114U);
    msg.type = 161U;
    msg.op = 111U;
    msg.possimerr = 0.341642147238;
    msg.converg = 0.875689925836;
    msg.turbulence = 0.229653974187;
    msg.possimmon = 248U;
    msg.commmon = 241U;
    msg.convergmon = 128U;

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
    msg.setTimeStamp(0.224115439225);
    msg.setSource(35749U);
    msg.setSourceEntity(6U);
    msg.setDestination(38655U);
    msg.setDestinationEntity(213U);
    msg.type = 25U;
    msg.op = 41U;
    msg.possimerr = 0.0708189240995;
    msg.converg = 0.0818295964832;
    msg.turbulence = 0.728802182625;
    msg.possimmon = 10U;
    msg.commmon = 25U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.501630597734);
    msg.setSource(20373U);
    msg.setSourceEntity(21U);
    msg.setDestination(2719U);
    msg.setDestinationEntity(247U);
    msg.type = 98U;
    msg.op = 42U;
    msg.possimerr = 0.295009081769;
    msg.converg = 0.2665091061;
    msg.turbulence = 0.925955618161;
    msg.possimmon = 199U;
    msg.commmon = 159U;
    msg.convergmon = 6U;

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
    msg.setTimeStamp(0.194518018974);
    msg.setSource(18788U);
    msg.setSourceEntity(116U);
    msg.setDestination(12702U);
    msg.setDestinationEntity(104U);
    msg.op = 6U;
    msg.comm_interface = 213U;
    msg.period = 38447U;
    msg.sys_dst.assign("XOVHUSBVLOLZEMCDZLKUWAIZUTCZPARHZP");

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
    msg.setTimeStamp(0.217396352849);
    msg.setSource(27869U);
    msg.setSourceEntity(179U);
    msg.setDestination(60142U);
    msg.setDestinationEntity(95U);
    msg.op = 29U;
    msg.comm_interface = 112U;
    msg.period = 36465U;
    msg.sys_dst.assign("COJFMVBPUKKRGOLKRXHZSHJRMEAACJOKETWHPTYWEOQAJIWYFMXBNECRFBDHJSGGKRHJOKTNIVYUXFKFDZFPCWEYGZWISAQPTRJTCNCDWTYMPUHGWDEDPCZOWTHDWLZMQEIIZAIUDBROMMPQGUGRTDYVCLZZBPCNQKRSCQZFISFEV");

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
    msg.setTimeStamp(0.690312533313);
    msg.setSource(48625U);
    msg.setSourceEntity(40U);
    msg.setDestination(24451U);
    msg.setDestinationEntity(208U);
    msg.op = 100U;
    msg.comm_interface = 243U;
    msg.period = 64415U;
    msg.sys_dst.assign("APIRICYROPWWMSMKENSCTTSCFFQMCWEXZPVNVKTZPMRZL");

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
    msg.setTimeStamp(0.883367142074);
    msg.setSource(35413U);
    msg.setSourceEntity(175U);
    msg.setDestination(48036U);
    msg.setDestinationEntity(218U);
    msg.stime = 2985731707U;
    msg.latitude = 0.000937954029188;
    msg.longitude = 0.645028582394;
    msg.altitude = 55567U;
    msg.depth = 8371U;
    msg.heading = 5087U;
    msg.speed = 21721;
    msg.fuel = 111;
    msg.exec_state = 43;
    msg.plan_checksum = 28015U;

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
    msg.setTimeStamp(0.178132608586);
    msg.setSource(32335U);
    msg.setSourceEntity(78U);
    msg.setDestination(54292U);
    msg.setDestinationEntity(67U);
    msg.stime = 2876993046U;
    msg.latitude = 0.145366591558;
    msg.longitude = 0.0802878636022;
    msg.altitude = 58206U;
    msg.depth = 43829U;
    msg.heading = 32504U;
    msg.speed = 29444;
    msg.fuel = 97;
    msg.exec_state = -80;
    msg.plan_checksum = 59070U;

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
    msg.setTimeStamp(0.927204477744);
    msg.setSource(24105U);
    msg.setSourceEntity(144U);
    msg.setDestination(34138U);
    msg.setDestinationEntity(126U);
    msg.stime = 1280653578U;
    msg.latitude = 0.419140774084;
    msg.longitude = 0.665492046999;
    msg.altitude = 3627U;
    msg.depth = 60783U;
    msg.heading = 38996U;
    msg.speed = 26706;
    msg.fuel = 97;
    msg.exec_state = -98;
    msg.plan_checksum = 10073U;

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
    msg.setTimeStamp(0.451178992022);
    msg.setSource(55013U);
    msg.setSourceEntity(232U);
    msg.setDestination(12270U);
    msg.setDestinationEntity(250U);
    msg.req_id = 21158U;
    msg.comm_mean = 183U;
    msg.destination.assign("QGQECNRSYNPCTWKJAVVTPDMWZXBMDJWTWHXVWCBAKHZBYHTNXROOETOUCIERXQILUAHLCOBJGPRKKOTRFAKJYMXTNCVEJQDDCNCRDRMJKSNIQNUXVCIZZROQYXYBLMDXMVGGGQQ");
    msg.deadline = 0.912021843046;
    msg.data_mode = 210U;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 52U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("AXLBUDSUMCEGPANWTYRJEFMDOSHFDIMPYSVDSLFZIDGZXZMINOYVEUCPBKGKPFONRAOROXJWJNBRRMDVCSFTQZMJFUKGKTAMBLXTUARGNEJZLDXFKBUHOHKUHUAVWVQMHHKLTITYCXXGEZYCMSONSCQVTXSWRDQYZWLGABHPEPSLHBRLAXGEQWEVRIOSXRBILAKPGGTQTQBCWZUQIPFDJFTWWBYNWZNVFHOJPY");
    const char tmp_msg_1[] = {-75, 117, -66, 59, -49, 27, -31, 18, -49, -111, -75, -94, 18, -117, 77, -94, 70, -32, -102, -111, -102, -17, -82, -11, 85, 117, 83, 84, 54, 94, -69, 24, -7, -79, 41, -100, -15, -112, 107, -114, 125, -85, -79, -118, -31, 20, 12, -125, 100, -50, 59, -3, 1, -118, 104, -2, -88, -95, -118, 9, 100, -92, 44, -20, -32, 85, -124, -9, -82, -83, 108, 12, -45, -70, -14, 101, -75, 85, -49, -79, -89, -83, -100, -99, 111, 10, 17, 96, -23, -80, -128, 116, 74, 77, -122, 43, 81, 105, 45, 85, 13, 43, 104, -123, -105, 3, 100, 57, 91, -65, 25, 118, -78, 17, 102, 125, -8, -65, 124, 19, -78, -57, 85, 124, -22, 76, 69, 87, -50, 21, -104, 38, 2, 39, -76, -92, -2, -42, 75, -14, 13, 68, -3, -11, 85, -90, -35, -62, -5, 85, 48, -32, 29, -98, -115, 45, -5, 40, -121, -19, 37, -111, 13, -112, 34, 62, -30, -95, 11, 72, -72, 76, -77, -76, -24, 25, -88, 91, 41, 72, 82, -111, 87, 30, -64, 16, 74, -54, 50, 82, 24, -56, -128, 72, 120, 38, -67, 22, 107, 100, 52, 67, 72, -29, -43, 117, 80, -121, -49, 11, -56, -63, -53, -84, 46, -23, 52, -106, -95, 44, 23, -91, -92, -44, 57, -102, -76, -38, 4, -94, 87, -38, -5, -37, 74, -17, -83, 42, -123};
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
    msg.setTimeStamp(0.815045345144);
    msg.setSource(51416U);
    msg.setSourceEntity(92U);
    msg.setDestination(1752U);
    msg.setDestinationEntity(206U);
    msg.req_id = 19984U;
    msg.comm_mean = 22U;
    msg.destination.assign("CXYPIEHLIYMNEASHJOOUDQCKKVJMPBHAOEVHBCUTYIRXHGAQTKYDFSPZGCRURMVUZKXHFPBFXEFNDSDBDTUCLCPOGDAPYSVIMEUZQFRFVNWOTILMNFZGJSTGNKWREOCPKBIWJQUNMNTWRXHPMNLWSKXFSSUVJEGEZUQFKLLPXBOADQBWYCPEOAQJLALKROZRYLVWGAZRGQK");
    msg.deadline = 0.375105208822;
    msg.data_mode = 214U;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.712301726516;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FJUCRJJEBQWHNTESVWYNUCTDBLBKPNAENDPUDHWKBPZVVRQSTUDCPVSRKRCSGMPKAZFJVDQREENLHHOLTYIFNCDMQHWFRDYXADOYQJUPKMCPWOMZBTCZSEGWL");
    const char tmp_msg_1[] = {-111, 71, 124, 125, -122, -21, -113, -60, 46, -107, -40, -45, -95, 16, 70, -57, 106, 77, -99, 50, -119, -2, 59, -21, 48, -101, 102, -46, -119, -17, -114, -56, 48, -124, 61};
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
    msg.setTimeStamp(0.67137121761);
    msg.setSource(63187U);
    msg.setSourceEntity(38U);
    msg.setDestination(26725U);
    msg.setDestinationEntity(53U);
    msg.req_id = 30696U;
    msg.comm_mean = 57U;
    msg.destination.assign("PYLZJAFGRXIFTEETRQFPLULECYLBBBKAWDWTUIYQENBQBLVLWSSONBIYSJFAEDHBJBRMESNGTJZWKGQHDJUNZOMAJOVPFXIACJKIRC");
    msg.deadline = 0.36488701586;
    msg.data_mode = 78U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.692819896695;
    tmp_msg_0.temperature = 0.804874616067;
    tmp_msg_0.depth = 0.263400978663;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RZYIZFRDYVJSSALPNYRYJUBYRUNSLPWJEHMHTCEPFNRUKUHYLKTSGCXUPXELAUKSVZAGOJZUIRPZVYOZID");
    const char tmp_msg_1[] = {34, -104, -39, 2, -40, 80, 15, -40, -101, 6, 85, -8, 123, -74, 94, -62, 63, 111, -79, 44, -8, 93, 3, -126, -103, -30, -38, 53, 64, -60, -67, 31, -115, 96, 121, -114, 41, -62, -62, 25, 85, 92, 53, -22, -25, -1, 89};
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
    msg.setTimeStamp(0.414865729822);
    msg.setSource(51397U);
    msg.setSourceEntity(135U);
    msg.setDestination(22543U);
    msg.setDestinationEntity(157U);
    msg.req_id = 59300U;
    msg.status = 52U;
    msg.info.assign("JMKDFHDKEDYQLVYAIQSWRRFSVUMORRQYBPZJJTEUIXVULFESIOPMWTUXBUNSVXVNDWLTMUXGPBOMONNALDDEGJLZDCEPXRSAOCCAOCFHKZYVWMZCTTNJHYIRLYLWQWKFVGSCOXHVZQRZGNJJZAFQSGOLMNLHVETYEAOTUTKABFGKIRSHASXBV");

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
    msg.setTimeStamp(0.352706207528);
    msg.setSource(36582U);
    msg.setSourceEntity(174U);
    msg.setDestination(26318U);
    msg.setDestinationEntity(11U);
    msg.req_id = 60162U;
    msg.status = 230U;
    msg.info.assign("JUTBMUZOLLQCIZGONPXUGCTIBUSDBDKUHGJNSFPJEWDABRGXVYOAYSGKMVMAVOBTCNFYSYLJDVBIEIQXKTFHVUCEYUCVLFWTWGUQWYRSQTATZXGDLQRVLPFHHFQYQWLWXAMXAAFPQDL");

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
    msg.setTimeStamp(0.686901118702);
    msg.setSource(35710U);
    msg.setSourceEntity(200U);
    msg.setDestination(58473U);
    msg.setDestinationEntity(182U);
    msg.req_id = 10086U;
    msg.status = 106U;
    msg.info.assign("QOJOYLSDXQJGGVSEYWQMARSDJKNALFLHZITXRTMBCQEP");

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
    msg.setTimeStamp(0.927113091446);
    msg.setSource(57952U);
    msg.setSourceEntity(18U);
    msg.setDestination(36848U);
    msg.setDestinationEntity(155U);
    msg.req_id = 57203U;
    msg.destination.assign("SZXWDKNKYHDCVGUJSCSZVIAAF");
    msg.timeout = 0.552285027157;
    msg.sms_text.assign("IQUODXNNHRJYUHMSVGHEPNDHEJKKGICPOTZVNMSKPAPDKXRYNDEWTELBLEJRFAMTYGKADSMZRWJFUYZIOVLDIEJVWTTCIYREWLZIMVJYZXVFGPOZKSCVJTGCHHOAYSTBWUHMLCKRLPWCHBDFTGOEZGVBYSPCTLCOQAKRBOGUNSOAWXXUDKBXUGBSQUIFPYXZJUMFUZBQQAQKRFNXAPVJEGQQLFWSLRN");

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
    msg.setTimeStamp(0.81307427108);
    msg.setSource(59656U);
    msg.setSourceEntity(195U);
    msg.setDestination(14492U);
    msg.setDestinationEntity(49U);
    msg.req_id = 53521U;
    msg.destination.assign("ADSUBCLHGVSQOASGFOPGOOUCKHJQSOIDNOYIRPJREZUKKTMWPAXUVZYFAWPHCMBZTZNCURRVQXXDJJFELQMVJWQ");
    msg.timeout = 0.105640206983;
    msg.sms_text.assign("BMHEAAOPNNTNLITCMMJXURGGYQVOFQZANNGBGTLLLPMILTGYFOZRQRPCCPLDCBKJDHVEQTQZNCUUJASDHSKAWHBHGEEPDNYEWHMUPXVUYWIRFKSMWEPWSBRAAKLPIXEJCCFQYQSKPDVCZUXZPBJXZCNFDBZGFUTUMWYRQRGLOVLIKTMGKJIVVVRHOOFUEAXIYQBOHCDTWSKTGZJ");

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
    msg.setTimeStamp(0.810203789428);
    msg.setSource(36487U);
    msg.setSourceEntity(143U);
    msg.setDestination(30473U);
    msg.setDestinationEntity(172U);
    msg.req_id = 13908U;
    msg.destination.assign("NWIKJJQDULBXQWCPLETEYDJHYYAHMVCH");
    msg.timeout = 0.108133099131;
    msg.sms_text.assign("JBQFSETBZJPHXNLDUEPZWFFMCGZGZLFKLQWVSMJHJGAAWOYMUUPFAVQZYGSCRKMXTP");

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
    msg.setTimeStamp(0.911981443464);
    msg.setSource(55913U);
    msg.setSourceEntity(113U);
    msg.setDestination(19621U);
    msg.setDestinationEntity(10U);
    msg.req_id = 58441U;
    msg.status = 38U;
    msg.info.assign("NDWNNEAACOJFFIUMULTSJURYIAJFZYVALIYNSMCFLECOIQSICPQCXCXQRGWRPHFBGSKHQLEUNMDBXQKQOORVNPURHZWISVURPOPHQXWWZYCEHQZBZQBCTEJVTNXGVJWDXGKRPZNTJKSFGTYXMJIGSJZMTIOJGBPMOJKTIGOVCBEHAHBKDTZXVCMLTPHPSYLERLZLBADOBFUAUZBMVGAXEY");

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
    msg.setTimeStamp(0.185270013841);
    msg.setSource(50734U);
    msg.setSourceEntity(112U);
    msg.setDestination(15237U);
    msg.setDestinationEntity(134U);
    msg.req_id = 18974U;
    msg.status = 112U;
    msg.info.assign("VXEQDIDANUWRYSVVIYVAMAKIJQAZSTXXIURRLTOVUFHHEIG");

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
    msg.setTimeStamp(0.848830005281);
    msg.setSource(16220U);
    msg.setSourceEntity(195U);
    msg.setDestination(46230U);
    msg.setDestinationEntity(106U);
    msg.req_id = 1175U;
    msg.status = 221U;
    msg.info.assign("DALVSTPHEUKERPQYFHVEYWLQIBIJMEWNAWXZJNXNOUOCEHRCPKHOEMNBXYEPJVKXYCWOKGZABAIWEP");

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
    msg.setTimeStamp(0.0160995318514);
    msg.setSource(52731U);
    msg.setSourceEntity(237U);
    msg.setDestination(31118U);
    msg.setDestinationEntity(251U);
    msg.state = 137U;

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
    msg.setTimeStamp(0.795645422146);
    msg.setSource(39768U);
    msg.setSourceEntity(133U);
    msg.setDestination(57160U);
    msg.setDestinationEntity(117U);
    msg.state = 233U;

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
    msg.setTimeStamp(0.298193651777);
    msg.setSource(17118U);
    msg.setSourceEntity(114U);
    msg.setDestination(3875U);
    msg.setDestinationEntity(115U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.398313613732);
    msg.setSource(10263U);
    msg.setSourceEntity(26U);
    msg.setDestination(48130U);
    msg.setDestinationEntity(218U);
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
    msg.setTimeStamp(0.513714668522);
    msg.setSource(12680U);
    msg.setSourceEntity(172U);
    msg.setDestination(6008U);
    msg.setDestinationEntity(142U);
    msg.state = 23U;

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
    msg.setTimeStamp(0.0514592648291);
    msg.setSource(19235U);
    msg.setSourceEntity(219U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(140U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.663412729353);
    msg.setSource(50743U);
    msg.setSourceEntity(34U);
    msg.setDestination(11246U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.854431132479);
    msg.setSource(47769U);
    msg.setSourceEntity(57U);
    msg.setDestination(12392U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.338476472986);
    msg.setSource(61866U);
    msg.setSourceEntity(117U);
    msg.setDestination(3055U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.555394576937);
    msg.setSource(59772U);
    msg.setSourceEntity(50U);
    msg.setDestination(13321U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("SHUDITXRBMCBJKYYWVGMLLWZCSLADIGJAOUNTDMODGZEVMOQKUIXZBFRVDGJCAZABTUFMQVDFOTSHPE");
    msg.description.assign("GNMRZKVGYDQVWCUMPURZNJYLEUZCQSXRSWGISYHOUAOJXNVXDKJTBQBHBJJMEYRRUFRTPCAYVRPTGXAEGPWHAWKLERIYJOMBDCQBSGQTQPLCFHFXWWXEEBZWIEOFEILKUFMDFJHSZDIYUABACBVKAZTPCMXOSDATOQLPIKKXZMXNBFFTMDVGGSVOJTFQDCMJYUBVKJNAULINSZIHREKLHNPSNQSIFWEWZORLICD");
    msg.vnamespace.assign("JJXKCDXFRLRVPKOBUQNBEKJEIMXAHRCSPZZICHLYYVCWPWUFNQFZRYWXBHEAKURSVLIR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TMQSBLZFMQSNYRRWBIIUQZBHFODDSKZXXLPCBAGNDTQEFMAMPQAHLCTTMPETZYXGYCJYGNXSUGJALHBPHUEJVWCRHWNIVIWYTKIKVBTLTHIOVHJRNUXWYFOJCAAOBMVMZEZLVFFTKCHYBAPWCXKEPFGDSOWLKPCJRXKQHNDNCPJTJ");
    tmp_msg_0.value.assign("INSGFAXILWGPRGMQPDKCMLABYEAYASMNOJRKJJKDVETEMBGTYLWQHMQXXCZJUTJLHTHRAWZDFGWNXDCYRTHCFOAYFVSZOCUOAXFLIDGJKSUEKXKMRIIOCYDKPQSEWTITUALNDOSNBNXGCTPIQHVPULWWYINCLVVBXBKJZCHHGUGJ");
    tmp_msg_0.type = 62U;
    tmp_msg_0.access = 70U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PVHXPFQWQUFILWWBTKXVAKEDCIMRLCOAMQTHKXXIAEZZOLKYAINNRGOOQRXZCEVLTYBRYJGMBKNXSGBYDREAVVZTPYSORBJSKIFQKQUWTXKGSDORCHGFBLHVTPYIDZEUHHSNDAMKNMRJYAZWWJXFQMUFWJCHPNDMWYMJPCJOTSZDIQWXTCGZLPVBUGDIUHLIRX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WRCLMYOKFTPQWKYYKBJVXDTFWIQOZFBPEHXGZKYJRIKELPZXAGBDNRHUPHOLAGCVBSCEFUTSJRKWTKVHINBXVCLHPRZEMXHVQJQFTFPOAONJGUQYIABINMWVMAMYFUMEYMUQQCLSHMFPSMSNIDWDAAIZDYYCJDBDKKNELKGTTSDJRUXLJEMCDNTIOZOGUTPHGFBBWQVISLNBWHZAPRPOYZNEADNSXVAEFXHVSCSRWXCTJ");
    IMC::Takeoff tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.864177923137;
    tmp_tmp_msg_1_0.lon = 0.797014801067;
    tmp_tmp_msg_1_0.z = 0.399580483702;
    tmp_tmp_msg_1_0.z_units = 120U;
    tmp_tmp_msg_1_0.speed = 0.20909911073;
    tmp_tmp_msg_1_0.speed_units = 216U;
    tmp_tmp_msg_1_0.takeoff_pitch = 0.716048145212;
    tmp_tmp_msg_1_0.custom.assign("IVQNRZXWMKLYHEVQEVZLCCAOACJBTCEDKBITPNZOQTBDDISRKPKMUURWJYQJAEK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PlanStatistics tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.plan_id.assign("UCXFIYPYVEXETRGGFVCRKFUOKKLSRURFWHPN");
    tmp_tmp_msg_1_1.type = 153U;
    tmp_tmp_msg_1_1.properties = 252U;
    tmp_tmp_msg_1_1.durations.assign("GHUKVCYTQJHMZEKNNKRGBBVNKRNRSOIPXKMLQQDOEODUZJRRQVUXYKIXDITHYKFFEXGPPZWSRBBIPJDXPMHSTWBRSAWBGMJHOFLNVXLCBRZYECSEDJHCAFLUAZJZTSLZVNCPRFTNVUWVMFNFVDAWEQDUERDGHHGUWWQJPBVUDYCBLGTXHMLGENSLYFAGISETYUIOCAWKYSWYINOAXHYPJOXQLZQTTICMMIDZJKCLUGOQZIFEAOQKBMCVFPOPX");
    tmp_tmp_msg_1_1.distances.assign("ZTYBYXMFVNUROAILOIQMFHPEWIZWVWLZKRPICJQWCCVRLHTJNXEAYORNPBFJMCJLSYRTGQOYRHTPEMBDEOYKLGGBIMKHKEXVVOXEEXVDKFTYGDOQUCVEUCQWIRXVCQSCBBDADJGXCTUALMKTUEIAUFGOPAKZTZSQMFPIUAHEMGSNYGLSHXIMTBBNWDTUWBFHDNRZZNBPPZHQJDDJGJXVDSORJNZKFUYZFASRPQOVHNKJULNALWIX");
    tmp_tmp_msg_1_1.actions.assign("JNMBJHJTFFRKDZTYZRQJEYHMVZIGOJBYCBBZQVPTRSYGCQFOXTJBPCKOFATFLQ");
    tmp_tmp_msg_1_1.fuel.assign("JZMYVZUAYLGMANZHQACMPLYVWCSBJTZQCHUTMWYZWOEIEJBRSQPWXNLHXRKKLRVBPMLIPJYZHUAANZSTHFZTOYDFYZDKPJUVFOXGTIJNEXDFYDFDYNJGACSISBWGZCQGFWVLCFKOGEBBPAKFXOHJWHSVDCSQXLWWIGVETDIRMNTILREIOETOBESBNJVGHPMEQSOJHIXMNDPLRUFXQDAVFKPRBTHQLTCRWKKMQESO");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::RhodamineDye tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.0735332600279;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::HistoricEvent tmp_msg_2;
    tmp_msg_2.text.assign("LQPNFMGOYCODWNNMWGJHQJUOSDODQLGCFGSAIFIAWOPFNHJQBZZXCTKVWXVDFMRLHUVXZUWDNJZDRSPZCKNVTRCRZAMIARAAALZJAKEXPUTSZCIPOQFMKVBSYIFJGTRKZMCVEJENBWDYIGLNWPATQELHEGYLBXGDSBHLJNUGXCYORQHPFBUUJAYPSHQXXUEVTYITLZPGKOO");
    tmp_msg_2.type = 17U;
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
    msg.setTimeStamp(0.268847171578);
    msg.setSource(52752U);
    msg.setSourceEntity(165U);
    msg.setDestination(52582U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("GZAVGPSYFGBCAEOURNTEHWITVJBRRXMYTUROQZESABQZBPRVVZIVQAFLWSPVPNTDYWBFTHQIOWQFZOMQNAOXPWISMOJLYHDAHEKCNBGJQXYWKMKOLTQBUXBEURMSFDKNUZJEHJFJDJTNIMWEKDFOCCHMXRLSGJKWEXEBGIERIZXCBVHLAIKLYYUXTYXPDDWCPQCFKDKVNJRRUJDGVCMKSMPTQCYIXHMUTYLFGSOLZA");
    msg.description.assign("CPGWBBXNZUTZETCELQPBRVFOHIWNWZVADYKSRLWJHHBEPDPOVLTVDTKCJNDEKTADYNKGHMIZWSFCCKHXDQMNZLKIEBJKYNSRAFMVVIOAXVSMLJJXSGHOPSEUPHRFWTUEROKMCVVSFHMLZXFYFZOSAQLQPUNIXLGQJQRIYUIYCG");
    msg.vnamespace.assign("GKQFBMUZXSZJAIOLYCTEJRTYBIBKLPBHDXXTYWHAZJWDPMKNRRPXRPJGBSJVEPUFRGEUYVUTAIZSHHFNVRNQLJJQUXTOLFMZRAHISQLZMQCNWYYN");
    msg.start_man_id.assign("ZQFOGPCBRVCMUWTQJTZFUYRBIXAUGYWHPLSLEBZJOAHFKQSWCRKPEAJRENWMCTVPKHXBFOBXXCRKZOZEGELIGOPYAKIIROWFZTDMQZVNEMIIBHITLWCAUUVGGD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("LMEOAXPCCUOBUZTQSYLXTHZZSEVRDUDNXJBNPCLSQVZZAADBWKHNOYKICPNPKZJFHMECTRIKNGWFQSNQPUWVDIKMHGWGLHMFDVMLOUPWWERVFLWGFTZSYUHRQXKYCGJJOBEBUHGCFVMGRN");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 14497U;
    tmp_tmp_msg_0_0.lat = 0.444597814105;
    tmp_tmp_msg_0_0.lon = 0.495082476064;
    tmp_tmp_msg_0_0.z = 0.992353900238;
    tmp_tmp_msg_0_0.z_units = 30U;
    tmp_tmp_msg_0_0.duration = 55801U;
    tmp_tmp_msg_0_0.speed = 0.230541787947;
    tmp_tmp_msg_0_0.speed_units = 203U;
    tmp_tmp_msg_0_0.type = 180U;
    tmp_tmp_msg_0_0.radius = 0.854240421233;
    tmp_tmp_msg_0_0.length = 0.174984127915;
    tmp_tmp_msg_0_0.bearing = 0.653665473737;
    tmp_tmp_msg_0_0.direction = 179U;
    tmp_tmp_msg_0_0.custom.assign("MIJEUCVFXRLSHVAKKBAQWSREVIZQJMLXBDXSCAGOTCWDYUCTLZCQRWPQWBACNOXMAXGMMFKCFJDYVYGJGWMPNDUZPTRYZMZNKFPAQNEPSFYBMBCQKDSHWWIHPJULRLZXOHVTTJHGUGCFDFOBSZBONHRTAIIRNTHLKJONSQNVQUPZELTYUYQZOKGEMJGREDEATBXKFPFWIQZUENOTUODLIIBMDJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EmergencyControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 188U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("JOOFGMMILWRJDJNLPFJUHUKHBHEREHEYFZFNAJLFCIWGTBOYATGRLZNYSACLQLMNMVBPAOALECHDISFVFIP");
    tmp_tmp_tmp_msg_0_1_0.description.assign("GHVTALKTZFMWQSKVAYWSTDEQZIAYBMXRMEJTPIXEKRNZXHXN");
    tmp_tmp_tmp_msg_0_1_0.vnamespace.assign("CGUYWESZUBTBQFINBPIGNWOHTUMXFCZKPJQDMDGSWUZXRVVTHERHMAPRFSXDONGMYIQPKZAXKYSXZNDNKLVRLODLDFHOWSQGQEKSXEIVFMJDPNHAHEJKYEWPVGTBASJITIPBOBNRBXF");
    tmp_tmp_tmp_msg_0_1_0.start_man_id.assign("KJGCJNABCSOORZBINDEYJPIOOTEAQJCWGZXMVAIDZQITNFLGCJRTGONVCEMLFFXOMIAXQRLFLZPAQHTTYKNTUTSIDFDJFPHDUWOEHTCYBGROSVMJKFSKMOSYLUBASVPKHZNYEUSHSDDBZSFIFEULUKAYMRHQUZMAMWPARBXGDCQKXPVZNQEDDVOVKSQCKELVIWWXIRMPTPZCRKXUBHUGQEHJWVETIQ");
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.source_man.assign("VLJBMGSHXSLDDXGVCNTKEJQBOHQNJXNRRFNIGHTNHIHQBVKUJGYNFMHXSFXKYDJBFWHKOBYZNUVJZXSVLIITDCZPABTWZPKIZPCGEEXZQPHODPUBKMFTYAIWXCUSSHLLETHZADMVYGBCIWFXCTYOMRRAZXNWIPUBJCRWYUTWPRPNTMPBQ");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.dest_man.assign("HVJASCBXZJSMXSVMKOLOWWRYMCBGQGYDFUFZJIVZNRDJETBYJFRDSGSVXXANHVKGGRCPQQHXUPVUFIOKWZVGKWLPTQNVAAF");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.conditions.assign("HPDXWXIFZGPLRUPPQLXOMWYVGOEZEORMRPTKTZZUSKKLDJULRIBHAHGOXXMRGBSVVBUTGEAKWVSBZDNOFUBXHFIKPQHKJETLZPIEIVZCIQAXEMWLNBSVFDSAIPYJSNZSJANWLRDCXRWHSAQOMK");
    tmp_tmp_tmp_msg_0_1_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::PH tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.value = 0.1203478972;
    tmp_tmp_tmp_msg_0_1_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    IMC::TransmissionRequest tmp_tmp_tmp_tmp_msg_0_1_0_2;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.req_id = 59547U;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.comm_mean = 195U;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.destination.assign("THQXUSEQJYSIVNSVKXXEQIYLRVATTLLFJPBQIAXOWJENAKIFRCWFQZKFBBJSOGMWTCJGRLTWTPPAQDLVROTRMLZSPUSGMODZGIDCHCOQGEGSYVXZRKYJMTQOKKGEZSMCSRYCJAHLIOBGDVWHJFNGWBECUDLHAPIOHEJPBHUCZURQBFRCDFZIYQMEUKNTBXWDYKZVNLXVBFDDWUNXLOG");
    tmp_tmp_tmp_tmp_msg_0_1_0_2.deadline = 0.737084487315;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.data_mode = 92U;
    IMC::DynamicsSimParam tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_0.op = 57U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_0.tas2acc_pgain = 0.106434210283;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_0.bank2p_pgain = 0.532923320126;
    tmp_tmp_tmp_tmp_msg_0_1_0_2.msg_data.set(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_0);
    tmp_tmp_tmp_tmp_msg_0_1_0_2.txt_data.assign("EWRZRZZWOQHACFIFSXASXYORDGRWPDCGJYAUMUWYBYKJTIOGOOZKKZFBSHCLNKQALWEFLMJAREYSIIQMVJUEOCXFNGMXSPHRJPZTHXGIMMYVADVEPHVQ");
    const char tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_1[] = {32, 115, -72, 111, 108, 11, -3, 4, -5, 35, -112, -56, 80, 116, 39, -111, -23, 78, 11, 11, 2, -86, -96, -111, -103, 103, 90, -110, 14, -28, -108, -60, -86, 84, 70, 64, 116, -6, 112, -98, -123, 38, 108, -53, -1, 118, 94, -57, -86, -78, -82, -84, 4, -71, -29, 103, 107, 90, -73, -80, 70, -11, -30, 59, -26, 68, 9, 25, -102, 96, 125, -1, 8, 25, 55, 40, 82, -36, -60, 85, 123, 27, -31, 8, 111, 80, 111, 120, 54, -28, -23, 104, -39, -29, 8, -92, -23, 27, 98, 73, -75, 113, 22, 59, 123, 113, -64, -93, -8, -126, -104, -113, 121, -20, 14, 54, -19, 23, -65, 66, -69};
    tmp_tmp_tmp_tmp_msg_0_1_0_2.raw_data.assign(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_1, tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_1 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_2_1));
    tmp_tmp_tmp_msg_0_1_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_2);
    tmp_tmp_msg_0_1.plan.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::DesiredPitch tmp_msg_1;
    tmp_msg_1.value = 0.947838407308;
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
    msg.setTimeStamp(0.792227638778);
    msg.setSource(29492U);
    msg.setSourceEntity(103U);
    msg.setDestination(58346U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("EJSROKXDREJCUFAXUTVBHQZBKWTQJEVSYTLSGXAVIYPVAEUZZIPHKWJDUILBQMVZEMR");
    msg.description.assign("ECZRIRNWLK");
    msg.vnamespace.assign("AGJHXVTJFTSPXZHWQGBNWQTAGVHSGCPIDKWCEMLLPDMBRYYEVZWAKXONFQMALZGXYUPHEBIMVKBLTPCNCDQASBBYVEHTLZVWMCCNJSIRYJYQRHHADUDROKSKDBHVJINFROM");
    msg.start_man_id.assign("YSJGHLBWQBHYAYWIPYDIYKIYDJIIAZWGUKXXTAERNXRZVGVQQDILROUVTNBRGJXZFCUVCEFVTKLOHCCHHUBAFWEQOLAZIXABOPVFMNUZPGSEGFWRKGDNBWEQLEAGPRXXMDDHBKACNTSAXZISPFYVSTSN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZOUIMACQUTMLUPECYTSKWSOJJKGKWRMPJARADSB");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 35004U;
    tmp_tmp_msg_0_0.rpm = 0.486580537313;
    tmp_tmp_msg_0_0.direction = 161U;
    tmp_tmp_msg_0_0.custom.assign("NLQAYNMXKMVRTSGSFNYLNEIURSTJULAWHXXJTIRPKKITDSNEZEHCVUXADJBYGQRAYZBLSUXZTKYLOZCAVQCIBMXGZVOGQHMNWDKIUBSXOZIIPZYHKAUUGDVYENRUYVCAXTWZKBXLCGPOHOMOHSEKGZCEGELPSBDLCLTVAHYCSOJQBGJQBHRQJPNJPOIBWPKZQQTUJVTHRFF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JLHDUPNQSBTFTZPFLEAWQTTWQWRHKUYTWBNPNAQZXAOPPEOROPGXAQSGLAWOLYGZXAJBKZHCUHJEVKNDCMBQFECFTIDMZULCWMVUILQREOJBEMZJRNVBJKKQYNP");
    tmp_msg_1.dest_man.assign("YTCJULEIGLRUQEBNTVAPUQRKSISCFCXEMPBXCPTJJGKZWHJGCIWRRKAWDFJBFNOSAUCAGATDPDBBNKKHMIUGTKWVLTOIWEIINVGLBATCTQYCDRBGILOYSQROVHCKXNRPVKYXCSIOWJZJZGUWOLDMEEXOMZLZSLKTPLUQZEUIZADTVDQAXGBMBXZMFJZVWPUYYHUNHLRJKMAVHEH");
    tmp_msg_1.conditions.assign("TMOWMQMCETSOFIIMDTPFXBGSFIRDYILQVYPFQBSVATFMUCTHQZRKSSCYOHHLMOFCHFCVPPOQKCRJSWJIAJTNGZNBANLLJSIALAUDRYVCUZLWAKNHBMOPBQEIHUJLWPIXTUYFORUUKYPBDRGWXBZTRJEAYDMDNXVHDWBZLFQOUJBJBECGHSVVGXNKPZKTMRVZZXWXJAQNWW");
    msg.transitions.push_back(tmp_msg_1);
    IMC::SessionStatus tmp_msg_2;
    tmp_msg_2.sessid = 487947552U;
    tmp_msg_2.status = 2U;
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
    msg.setTimeStamp(0.566741010068);
    msg.setSource(31801U);
    msg.setSourceEntity(20U);
    msg.setDestination(57812U);
    msg.setDestinationEntity(200U);
    msg.maneuver_id.assign("TBIFZTVWBKPOSFCDEUKGLZBNACMWMCTIUOWZAINGZKIOYOBUDEQSREUAWLLERGHSBXPJBYJRZPPKFQQVDNWCFUHIQHWXVPPLQBBNPKFJDLMNTXQTDYJTXSNMUAOSAUDZYGHOQOOQLQXHLINMWADDLEPTYVCMGXUKHURSSFNYFSCZIWEOZHFNLWIBGWCFVGAMAESCMRYPKRJVOGKHKVDTNZJJMREPHBDJCJFTATCEKXRXYYVVRHQLAXS");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.478730326347;
    tmp_msg_0.lon = 0.20656918066;
    tmp_msg_0.speed = 0.502390595986;
    tmp_msg_0.speed_units = 248U;
    tmp_msg_0.duration = 38897U;
    tmp_msg_0.sys_a = 12760U;
    tmp_msg_0.sys_b = 24095U;
    tmp_msg_0.move_threshold = 0.384743886614;
    msg.data.set(tmp_msg_0);
    IMC::Chlorophyll tmp_msg_1;
    tmp_msg_1.value = 0.141357234107;
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
    msg.setTimeStamp(0.585078244386);
    msg.setSource(37519U);
    msg.setSourceEntity(240U);
    msg.setDestination(38584U);
    msg.setDestinationEntity(38U);
    msg.maneuver_id.assign("TYRPFJWDIIWNVKUTZZXMSAZTAKYZHUUYQZFHAWSLNIYVHRJREZNKTXCSXGLPOGAGBTGIZXSQRNLMFNCMEFMLUZNHWILELBMUGDPHRDCFL");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 12262U;
    tmp_msg_0.custom.assign("AGFIQVUXPNHSNTQBRXOSDVZZMWWZFOIJJGKYRJKVEDYSLBHNFPBQIHJFKYZDZEDGUCUMNYYUXDRGOQRSMLPSWTMNGRGWXDAYKMVERMJUTKWPGQFYFKHJEEZWYI");
    msg.data.set(tmp_msg_0);
    IMC::EmergencyControl tmp_msg_1;
    tmp_msg_1.command = 249U;
    IMC::PlanSpecification tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id.assign("TDNHGPIKOTWKYLCJCOOMLCCTNKUSOEADBJTEPMVXYPMDOQAUCAYSDHLQQSZRMKBUZSOV");
    tmp_tmp_msg_1_0.description.assign("APDTWIBLQYYKOWLYHIXKBCZABZMTDHUYNLDYOIPRRWVEMARXJVCTWIOEHJUACDUEULLKJVHIJFXTCKJCDJTDOQZQBSGMHRPSBQOLVHXXERHYKZWGJLGQHFWYMBBZLNFNBODKXINASEUVXCETTFYNRPGSNJJPERIRZHVXHNAMTVOQGUWVQBECQKNSDSDLQSMDAKNIR");
    tmp_tmp_msg_1_0.vnamespace.assign("GMWBPLSSWQIVKTJIFIRRUKFYOHCLILJVFYWNVNGROZBOCFYPNOLHNKYNZECNBMTMEIEDCFQHBAYQUBZQVMPHYAD");
    IMC::PlanVariable tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.name.assign("SXQRNJBTKLDIQKLFQBDPXWTYEHTJKGNOKIPSGLAWRYVUICEHR");
    tmp_tmp_tmp_msg_1_0_0.value.assign("FJDGUPPMMPERCZFSPWTARJKWMSZCYXPVKXEUFNKRWZDZWXNBTEAVFMMTBORLKOJQWIDNOLEPNRPDWUGEVRQYWVFZIYDHHQPUISGBGANYHXMDLQOMVHCKJMQZIZPQTJHGJYFNTFFYK");
    tmp_tmp_tmp_msg_1_0_0.type = 53U;
    tmp_tmp_tmp_msg_1_0_0.access = 128U;
    tmp_tmp_msg_1_0.variables.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_man_id.assign("EJGRUKLEHJUTPRSICRYTHPAKYFBDCLJRLWGLXQCWXWPVVYIAPZFSHUZFVYIFTISFUBEZZMKHIFLFORJUOYDDOMRZWCSNPUOLRWVCYHYQDGMJJKNAWDEPNQSLJDERGLTIXDYWKXUZTCASNGDVOXGZRPXLMECMN");
    IMC::PlanManeuver tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.maneuver_id.assign("FNLJFCOUKRIEIRBETYTZBCJIJGXCDPGKPDXLBANMRAYPKUZJSAOYTGOGVCVQVQQMDSPMUTVKHWOFKHYFDLWIGLQJCJPXQCWNREHHHXIYPHGIERTJQUUMZJFSGXDRCOVLKYVCDDATGEIOSCBBUBXOBDBWFGNQANNOLWMXNEDJAAPVMTYFALWBKNDUMQEXUOTYNZMTLPWSHFSIFCKXVMRQBHHGZSYWRNVUVRYZWXKAIPJZAZMSQKSS");
    IMC::Goto tmp_tmp_tmp_tmp_msg_1_0_1_0;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.timeout = 55618U;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.lat = 0.142881243077;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.lon = 0.669395564213;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.z = 0.794282269019;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.z_units = 85U;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.speed = 0.464219434749;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.speed_units = 183U;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.roll = 0.925884052638;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.pitch = 0.215364168197;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.yaw = 0.52773940547;
    tmp_tmp_tmp_tmp_msg_1_0_1_0.custom.assign("TFTAXVOIKVJWAUDCUHAPVMNOLHMMUCTJNMQSVHAZKBGFEDOQUNVFIAZEKDYGMMLAYXIYVDDGHCYLCKGGZYILNDQAJYXQOWGDWCZZWGUAUBPLFOBFVTNTSPYJPUFNZELLEFWNVKQRCOHQJPSAPKBBLGYJJZQRYNIPUXLHVSOLDDEBKUZPJHOSMSQPIHEBWSRTRFTABBECTEGWTTHFHONCRXXIZIZGUKQJIXXMRQOPW");
    tmp_tmp_tmp_msg_1_0_1.data.set(tmp_tmp_tmp_tmp_msg_1_0_1_0);
    IMC::Elevator tmp_tmp_tmp_tmp_msg_1_0_1_1;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.timeout = 28825U;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.flags = 22U;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.lat = 0.203661683448;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.lon = 0.28385364517;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.start_z = 0.381622793927;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.start_z_units = 7U;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.end_z = 0.0277830858241;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.end_z_units = 154U;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.radius = 0.431494613922;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.speed = 0.4345743431;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.speed_units = 58U;
    tmp_tmp_tmp_tmp_msg_1_0_1_1.custom.assign("EIQZOUAGGYLVQLNEZKXYYHRJYTXIKHPHJZBCHUWYXWGBGRTDSKAJUMDAYBVTWSLRKZS");
    tmp_tmp_tmp_msg_1_0_1.end_actions.push_back(tmp_tmp_tmp_tmp_msg_1_0_1_1);
    tmp_tmp_msg_1_0.maneuvers.push_back(tmp_tmp_tmp_msg_1_0_1);
    IMC::PlanTransition tmp_tmp_tmp_msg_1_0_2;
    tmp_tmp_tmp_msg_1_0_2.source_man.assign("WSUTLCXIVKKECRIOVDYGSNFDHSYWPQZUOKFBBOMWAIMERQUGPQWUIUKHZPAZTRPJVFRWQBPLNADDSMHRKDRDCOLMAJKL");
    tmp_tmp_tmp_msg_1_0_2.dest_man.assign("ECJYRCLBWEGPKKHXPINUJHUURAMQBHXLVIJAOKSTLATAMTVEZCWMZTJRYHFDPYMTBXGFZRVGJGTKAFQSUKNYPIUKXLKMWZXUHPACIYLJSBVDUYOFKEQOPZGDTAWRPWWINSODCVMSGXLPNLVQEDEFAIJUONJHYRXRDQGBFNBQIWTNVYIUMFCBCAPSQJXHOLZWBNQCDQSAYZD");
    tmp_tmp_tmp_msg_1_0_2.conditions.assign("UBQGZRLLIGQTIYIOVKULNXJUZJVTNHWDONJFMOCMPRGTYOSXMCPJYEHGJCUJSSHSRZTPDLHFYNFEBNEVEPCPUBZBZDXIAYWPOEKVNIKRVMGAZOKCPKMFATFROJPTHGFKABKWMXEBXBCBRXSHEQGRSAMWEINDJVRHUSSCWAIYOMOPDVAXUSADFZXYFGYCQDTYQQVXGWULVKPAMLBQUIWFQLZRDNUWXECSLMJQKYNBFLHDTTHL");
    tmp_tmp_msg_1_0.transitions.push_back(tmp_tmp_tmp_msg_1_0_2);
    IMC::FormationEval tmp_tmp_tmp_msg_1_0_3;
    tmp_tmp_tmp_msg_1_0_3.err_mean = 0.43066281377;
    tmp_tmp_tmp_msg_1_0_3.dist_min_abs = 0.756774299457;
    tmp_tmp_tmp_msg_1_0_3.dist_min_mean = 0.174946421655;
    tmp_tmp_msg_1_0.start_actions.push_back(tmp_tmp_tmp_msg_1_0_3);
    IMC::ObstacleState tmp_tmp_tmp_msg_1_0_4;
    tmp_tmp_tmp_msg_1_0_4.mmsi = 941168110U;
    tmp_tmp_tmp_msg_1_0_4.lon = 0.493955420618;
    tmp_tmp_tmp_msg_1_0_4.lat = 0.433336223587;
    tmp_tmp_tmp_msg_1_0_4.x = 0.221463702002;
    tmp_tmp_tmp_msg_1_0_4.y = 0.78802185853;
    tmp_tmp_tmp_msg_1_0_4.psi = 0.0886901179913;
    tmp_tmp_tmp_msg_1_0_4.u = 0.306497294789;
    tmp_tmp_tmp_msg_1_0_4.v = 0.877289019817;
    tmp_tmp_tmp_msg_1_0_4.a = 0.988758187635;
    tmp_tmp_tmp_msg_1_0_4.b = 0.958645775343;
    tmp_tmp_tmp_msg_1_0_4.c = 0.0504425341954;
    tmp_tmp_tmp_msg_1_0_4.d = 0.813912124112;
    tmp_tmp_msg_1_0.end_actions.push_back(tmp_tmp_tmp_msg_1_0_4);
    tmp_msg_1.plan.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.789720012851);
    msg.setSource(15675U);
    msg.setSourceEntity(69U);
    msg.setDestination(21306U);
    msg.setDestinationEntity(36U);
    msg.maneuver_id.assign("MDWNWVSNVOFARVBHRMQMBHYHDXSIKXMEJPDXWSVVKJFWQPZIQUCTYIFNCIYGQETLLSLNGFRBPMPKZOAREDYMXGPOVHPTERGLDJYNIXFVTQBMKCSOOHUHEEUBMXCEKTQJXULUQBOYAZCUOMTEDNAIGMZCYRIBYPXDBARQYVLKJQCSNHZADWPWAIXUWCFSLGZXZCGGFNNTEPFZKRECFVTUFWAHDUZS");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.656889089769;
    tmp_msg_0.lat = 0.454344237173;
    tmp_msg_0.lon = 0.0339050779828;
    tmp_msg_0.z = 0.909965703658;
    tmp_msg_0.z_units = 179U;
    tmp_msg_0.travel_z = 0.928663379907;
    tmp_msg_0.travel_z_units = 141U;
    tmp_msg_0.delayed = 19U;
    msg.data.set(tmp_msg_0);
    IMC::RestartSystem tmp_msg_1;
    tmp_msg_1.type = 51U;
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
    msg.setTimeStamp(0.946039843503);
    msg.setSource(52767U);
    msg.setSourceEntity(208U);
    msg.setDestination(47122U);
    msg.setDestinationEntity(53U);
    msg.source_man.assign("VACPYWCBYVWDIOGTCZORIQGGUWFAAMIEXMLEFBTJGBDXIRTSHFFHFSELNWXNAZLPQAZYQDARCHKIWFAYCZLRWADKBIDSKZCXJSQKBTEHNVKGFSAFKTDPJTHNXLZVYVSUGIVKHCWQLMHNQRRCLQZVKFXWPEQSHXANOEEMCLYUXYSNDEYCMWUKBUQSDBDUFMYJZRUEEGIXRYUOUTPIVZOPHOBPDTJSIZPRJJMGJOMOBNOPV");
    msg.dest_man.assign("GACVNUEWAHFDZYEZPFBRNLVSBWHNSSDACYJPQKCLMKPZUCQFTEPBFACDZLFOHGMWRUNGDHZWGXYLHSAVQBHYGTOWHXZDHJXOUYSJCETLTELDVMYMXFZPXFYMJRJEXJMJOITNQXVEARKOATGMODHBQRLRXIKQYGWDNGBOAIKJSPSBKZEHOUIEU");
    msg.conditions.assign("NFJFYWEUHZUTRHWSVRBTLUP");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("DIMDSSJDKVIMERSCEYVQIRHCCZGJBVWEFQEOJRLHAPFEMPXDKUEUXUPTYTGAIEHJHIAJTQHLFLXPXQRHIUMOZZEFDOSJBDORUHPWVRBAVEWOPFKTLIWXXWAGRQAXFFTLCMZLBGVNJTNNPNKUQMWIAUUBDOCDSXTMMLNGBL");
    const char tmp_tmp_msg_0_0[] = {-92, -19, 32, -45, 109, 15, -24, 20, 82, -19, -30, -15, 110, -114, -35, -58, 76, -90, 25, -107, 35, -10, -47, 79, 76, -76, -31, 5, -88, -95, -27, 7, -87, -96, -16, -99, 36, 72, 51, 52, 30, -26, -41, -70, -73, -119, 93, -107, -38, 64, -89, 69, -92, -10, -86, -77, 81, 73, -83, 17, -61, -58, -57, 57, 26, 46, -102, -96, 0, 30, 24, 33, 58, 110, -88, 8, 107, 111, 99, 65, 54, 13, -34, -2, 30, 16, 124, 38, 22, -47, -102, -72, -67, 71, 34, 39, -21, 103, -106, -94, -76, -24, 30, -24, 36, -65, -31, 109, 7, 80, 71, -29, 80, 35, -19, -19, -105, -38, -79, -123, 58, 80, 1, -24, 74, 45, -96, -70, -8, 110, 29, -23, 37, -101, -75, -100, -63, 85, -18, 84, -103, -68, 89, 113, -82, -82, 116, -44, 13, 95, 110, 31, -71, -63, -68, -126, -113, -90, 50, -80, -54, -14, 122, 126, 7, 72, -12, -35, -92, 123, -88, -35, -82, 7, 62, 13, 62, -122, 90, -115, -66, 81, 30, -35, 53, 124, -85, 16, -127, -102, 80, 110, 94, -54, 53, -8, 28, -93, 65, 101, -65, 49, -94, 85, -86, -57, 25, 110, -20, -17, -74, -36, 14, -85, 50, -98, -52, 98, -14, 88, -113, 22, -66, -25, 61, -27, 19, -83, 97, 34, -109, -69, 110, 100, 103, 3, 62, -49, -70, 45, -125, -9, 40, 12, 118, 36, 97, 115, -78, 18};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.277403167668);
    msg.setSource(1786U);
    msg.setSourceEntity(144U);
    msg.setDestination(57614U);
    msg.setDestinationEntity(145U);
    msg.source_man.assign("IVNPEMLQOGWKGRTEAABFQZJHYQMWPBPSWLJRZOTTBXQMLABVCUPUPISJTLRKHZQJYUWNYQDBWIJERAIGXYG");
    msg.dest_man.assign("FXRYJSXDAJFOKPZQCYOVRRCJEMEVLZPGYCCQBHPQCFMQXBEXPRDSRVVZTKDKLWQHANILPLKHSZISDUDJEMWAEWGYTNRHVTBWUKKTHDGTTRYZOVMWWPYUDUKZVGUPVFJNXZMBCHAXYYOZSGNTALMOFOBX");
    msg.conditions.assign("WMJYSJPISRGEUZETGOBIAIKMTMCULQHYCQDLRFDDEJQNKPHRECGPLAYXXD");

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
    msg.setTimeStamp(0.309893286656);
    msg.setSource(21591U);
    msg.setSourceEntity(143U);
    msg.setDestination(11509U);
    msg.setDestinationEntity(227U);
    msg.source_man.assign("CKFIXUNOBEHRIUDTVHIJXFYIJKOAXNBABEDMTBPILQDRVNQBUJWSLMLMKTSONMIVQKSNGMNQVCGTWXPZPAWOYQCPIKXFUCJGFWUHFAOCYAHVAUQGOJKEFKJLZMBODXAP");
    msg.dest_man.assign("KWBVVODFHNARJSENNQPYBGNXKKPIFPAAGCQLGTJYLMYUNQNUOWRORFZOUBMTBGEJEWMEXISBZDKSKQGHMRPCA");
    msg.conditions.assign("DWDOCAXYFRPSNKKYMEG");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("CVTNXXWUPNUDBAVTIDTNSIQLDKQYZBONSZYYZSPLEDVYMTZMGFSVFHMJPUKPXBJGKZCUTVHVIEKYRULVUISTHORSCRWFJIXIREKCOULCOPJPMQEAAPEGQDDWAXOCSAPKXGVAOZZLOEMAMOGJWRMQZEISJTGXKYCMPXFBFRGENSZZAGXKTBWIWFUTYLEBGCQIKDAFNDVBQHFNLQUCWTHJLBHDBMLSQJRNRHAPHNDGHFRQXC");
    tmp_msg_0.links = 3251048182U;
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
    msg.setTimeStamp(0.642618846692);
    msg.setSource(40694U);
    msg.setSourceEntity(57U);
    msg.setDestination(48698U);
    msg.setDestinationEntity(222U);
    msg.command = 245U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AXHGLVJHSPORMSXGLISDEHVKUQTUSSTBOYLPJNPBRGZNSBQXLHQNDDROLFWYZMKDTRFNVNWCIFKLXYCQJHZBQOFMXEWTGBPMDWARFXUGKUFKEJIOYVHZCITQFEXBMPLHMUBRHVEFMGKDXMISTVOCUMQUBFZRNLDGHJWADTBLGJDPRQPEWYITJUWRUEGASJKOTRSQIQCIXUVYAAAVYEZYDJIZFCPLNGZKCEPVNWOZMEASNCHAKTJW");
    tmp_msg_0.description.assign("PKEJBFHBBHDHLNACBFWMZUOVUOLYMDDOXB");
    tmp_msg_0.vnamespace.assign("MNPPEZXHTWNHBROILSEOJQFTBECIECTPCJMPSXAXQLURDZCRVCLCGIBGZPEJQKWRYAWNXYEREKDQAFTBIUBAMWDLTMKGIOMKVUREJTNIYBTXRNMVOSAVJSPYZUBZAVIS");
    tmp_msg_0.start_man_id.assign("WTOSCEASUWEMQCSQRXDQLITZKLJDZVHKMDRGJDPBTYUHJGVIXAHXAFEXGFISMAANMBIPAMEBPFTYCRPTWQRKIOTNPMXSIVWORKJNSNOUVYNHSYKKTDFFNHEOZEZ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("FCQIARWOIVGPUUPDGQIBWCXPSMZMEJKJFTNXRRSOFZCLBCPOLXNQQYJAEENWJCAGNPNHWOEIVDGIFXBILDMNEWZBZHAEUUGMTHCXVRKGVEXYSZVMQCTULPIBAJDWNTFSQYVWSWZFYMMRAXHIJNQJYIGVKCQYKCURSHMKUUDNLJDLQHKHYKHTNXDLYZVESPBRVHYTRFUTCGATSJFATEOQZDFHZGRYMOJSARW");
    tmp_tmp_msg_0_0.dest_man.assign("IUUJJJYOWNCGYHGGNOUTCZZXRQGQCFIYWXT");
    tmp_tmp_msg_0_0.conditions.assign("CCXODZHYKCWIYMTDJAQRBPBRISJHJIFTGEKAGMBKFDQG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.547276675019;
    tmp_tmp_msg_0_1.speed_units = 11U;
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
    msg.setTimeStamp(0.359512808979);
    msg.setSource(38371U);
    msg.setSourceEntity(146U);
    msg.setDestination(15095U);
    msg.setDestinationEntity(124U);
    msg.command = 200U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MQXXHRYQFOLLCDTMVGNDDZRIYLJSMAVEPRRBHPMWNHFKLIFSJPUDHRTIDCZSZJLQWHEEOJSZXMERTRQBYCWKKGXVXGTBBOJAQFTYGXCPMONFGRMBHQYHZNVQJYLUMOSVGUSNQTDNXGOWGPUJFGCHMUORAEEUITLBNVPQZVEBFWBYNWOFAACTAVXNOFCILIYPPUZASNKPKAJYYJEIBUZTKWWKXITUVDAZCUICZSX");
    tmp_msg_0.description.assign("PXBOUNZJHWYMIPTDAOKLLUQHQTTNXFPMNBPJYJLKXQSXCTZUMJKGLTEIKOGBYMYRBEUISCONGYDIDARPAXTFKCCPVXIGCQWZFCDUXNVVTRQSEDBAYWSWKEJBWSQEWRVZKZHVLRHFYCHHADKGIJFGJ");
    tmp_msg_0.vnamespace.assign("OALGYBIJXWIOKMHOLMFTIVQCIKVVRYGSYIVDNEQPZAXZLMWOXWCKCQQWW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SWJWLAVFNEAONDSVJEFXPONIOZOLWIVAEYVIEIRUQCOGC");
    tmp_tmp_msg_0_0.value.assign("EIPJHBHKJYGQSQEOSOIDMTDLZXPCVDAHOGISULXSQPWBSUIBPGVYVTYAFVSRQUTQBEXZFTAOQKZAMDWKRIPFFKZMEUJFUUZYUOYIL");
    tmp_tmp_msg_0_0.type = 73U;
    tmp_tmp_msg_0_0.access = 38U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MBESFJJXLKOQFKNLYVDJDCEOQIBSHIMSKMVGTMMAEZHHAQUSHHUDLXFXWZGNJPAYWIOEKVWYFLYFZLTRGWUGEZNTDYBWTRILPFSPKPMLSRHAMQAOIBNUFDVIKOVNBWGRWDQMCAJOBCDLWKFBIREYC");
    IMC::AcousticSystems tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.list.assign("SMGPCYQEATYLPQUUALHPYLIROTETIOQSHMPONFBVVRYAAOPZZIHMEJRNMDRBFWYYXZPHUVRDKLOBSNDP");
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
    msg.setTimeStamp(0.36216158037);
    msg.setSource(64050U);
    msg.setSourceEntity(131U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(197U);
    msg.command = 41U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AHANQPTWIJYEHXXSDCUFRGPMQVMKSVVUBULSNTFDARBBZMNLUHJQJPVLNIRKJOTWDHGYJOGSPOGTXNZIKTJFOOVSQXNKGQHR");
    tmp_msg_0.description.assign("UINLPOGVPVJJQDAXTWDVVLYOLSWTCSTIKRGJPUQZZQHAMSFDZUIFFFOZZTUWGICYKDMMOGSISKKWGPPACXJOUENSKEGKCDGFBSVANLJKBCGRWWCPXAZZYQISOEDBAGTWGYTUEHHQMBFHDDRQUIEMBYNNXNEZYLRKBQUNJWCXOSMIZMREWRMLXQYLFXEADPNUPCQVXKBISZATFLHEJAPVLVJBOHXCJVLYRMPHHHYTOMRFFWHNXTYK");
    tmp_msg_0.vnamespace.assign("PHRCJAPFCGTKZHJFXEFEYPAYVQRSOOFBKXIRBVKSOYECVETTONMWJNNUIQBLUVPOURABPVFXBWTSFKNIDMHPWQAAZWHNKDXBTQTTSKRIYBXSSQZH");
    tmp_msg_0.start_man_id.assign("DXZQAGNBXWMZFEVKRFPV");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SGRPWXAILJRNOOPXUWJTSEAOGMVEOKCYIARQFXBBKLRPDWDYERKQTKYZFXSLIWWWEAJFPUCBQHSZTNDRISVZGTQCYMQZUJXAGIWUOFMGPSJCY");
    tmp_tmp_msg_0_0.dest_man.assign("GLDHKZGCSDDGCRXJTBWNOAYRGVDFNLFPHIAFJUNBPPFPWPUCVRJQIKJKWHKYKOADMYTXNMJMXLXCTADLIUBZSXIVZRTGIKMZRLCJBLBSXZQDEHUVENISQLSTPTCERUTDZJORMBQMBOWAWCIHOQNWHUUQMAPUBCKGULNVULEOJ");
    tmp_tmp_msg_0_0.conditions.assign("QCPMDDDIIKKUOVNNEDSYAJSYLZLOMTWPMKMAXWYFIJQYIACXAHMIZTBPDLGEFXMAITLKYEPTINXJLBAYBFKWOGNORLHUJLOWQBYVNSBBPHKWKQJGZUUXVCEFSRARUGITGZYBXHFNHTWMKEHSCJBLSFIOXUQEMZJ");
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
    msg.setTimeStamp(0.84141939072);
    msg.setSource(35662U);
    msg.setSourceEntity(131U);
    msg.setDestination(15848U);
    msg.setDestinationEntity(209U);
    msg.state = 36U;
    msg.plan_id.assign("CMUJIGIWKOUVGMYZOHAEGMTSVPLZHAOEPEJSLAHCKGJTFNMQOVYINNEWKXQXVRILUYPWTJFDNSVCBKLDXZARXDUVQSTBTGEKHNTNHRJQRKALJBYOXTFZGUWPVVTRQFEPYUGOWRDPTDSKMLDKXIFCBQSPBUK");
    msg.comm_level = 250U;

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
    msg.setTimeStamp(0.836393989948);
    msg.setSource(50696U);
    msg.setSourceEntity(237U);
    msg.setDestination(8673U);
    msg.setDestinationEntity(38U);
    msg.state = 42U;
    msg.plan_id.assign("UOFULQMIIJTZPTDGVLLEKNLJQGYMLBXZGWKCZLHOSXHERPPAXZWGHQALFF");
    msg.comm_level = 129U;

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
    msg.setTimeStamp(0.609675154019);
    msg.setSource(5341U);
    msg.setSourceEntity(135U);
    msg.setDestination(39206U);
    msg.setDestinationEntity(209U);
    msg.state = 160U;
    msg.plan_id.assign("EXBIRSCSFXBWDHZFIPALP");
    msg.comm_level = 99U;

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
    msg.setTimeStamp(0.53286583011);
    msg.setSource(65285U);
    msg.setSourceEntity(203U);
    msg.setDestination(53507U);
    msg.setDestinationEntity(47U);
    msg.type = 41U;
    msg.op = 8U;
    msg.request_id = 42392U;
    msg.plan_id.assign("ANDTCTHWDHBYMBGUVUDTFQBRWQHGMNJKOMGRNUOOCJVUBFTZBPFZXVOFLSETXRKCMPGOCLLXGUKTYNGGMUMXCWVOQDAIAZRNBAICGMYXRULRBPESKXDWADELTVDXCXIWVFBRSYYZSYKWJSFHPZJYCVUWPLMZVSROSTKSTUELYPELAJXLJHHNZBIQJKUJIKRMLMPNQDHAQEBIJGGZCIZHNNSSPAKHIWYWFIVKEPOOXDHTZFADQFE");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("OMCCEAEIVWYICZVTSXJXKHNJGMTTPERQEZOZCVFONTXGIVDUQBSQLWSUAJPDYWQPYKWDUXFWMMPJCZGYXCOODEYGHVOPVBDGFINJLWLRUVMKZJNDMKMKEKVHSOWRBJOXAEYZNAUXDNSLYRBQAH");
    tmp_msg_0.predicate.assign("TPXULFBMAOSJVBNHYJLZKKDHKTROYFKR");
    tmp_msg_0.attributes.assign("MJXQYCYAOZQVLYPUCDCRSMUNYPXOJPJAKRWZXPBDKBQKKLKBZBWDMIQGSWGEFOWQJKCWOSAOCLUPOLSNBNJVSEVPTTRAOSGDUKPLHXCHFILUXPYGHEDWMUAJIGNTPITMEKDITMTESJNYVIZRQGFAGRIUFHFRVLXR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ANNNUEQEECOMUYZJPPODCKTQLVYTHGHFTZJSBKXKYHZMJEIRJBIGECVIXDXDHCUWKEWRUGRDYFSVSLBEEWYMLBFTXAYISGFCPJTBVEWOGRKWTHOQZNGAQVPBPGKXMVWBIMXYBPQBRPDUJFADYDAHPZFILHGWMZYDLGZNNVQQPHDXBFVJMSWJLARXQHQAUVTPUFOZOCFKIZSJASUUOCINUWMKCVTECNZGYRQFLTSXOAWTOCRI");

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
    msg.setTimeStamp(0.910411511493);
    msg.setSource(5193U);
    msg.setSourceEntity(128U);
    msg.setDestination(58409U);
    msg.setDestinationEntity(138U);
    msg.type = 69U;
    msg.op = 90U;
    msg.request_id = 22226U;
    msg.plan_id.assign("JLEZRIXMBTCYNBCJCEMJ");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 63293U;
    tmp_msg_0.name.assign("SURZGOALZUSXFFJSJQOMNYEXAPBZORYSDKSWCPXGRWVXDIWEZIADVHYQJWPIDEBMPVLWLVEMHMQTTVSAKFBCHXXGPDGPEWCKBCEIWQGYZACZOECEICKOKUYVIXTTFOOKNEORZBILTZXQGBNCPJSPTLXJTDMDRUHWUUHAQFQNNVKBAYCYPGTFLNZHIDRHMLWUH");
    tmp_msg_0.custom.assign("KUKPVWIJHEADVBSSTOCTAZZMWJSDGWJATCBDXYTMEGBYGLELQOOOOAVXVLDYKWKAIQZJKHRMYCNGUTOIZCQHBILFYXFKRXGESKOTSRIPKFAEWVZCVGKBECFLQIBQAZNOLFUUDCUBJZPRDPTPWLMIWQAHISNHFQELRCSPGYXENDI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PSMMWFFFKFEYHANGLZODWYRXRHLWEEAZGPUCODIQNZZSMADFZKUGVJMUAAILSNEUBCNIIYEYUITJOTSPS");

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
    msg.setTimeStamp(0.136848351545);
    msg.setSource(14735U);
    msg.setSourceEntity(211U);
    msg.setDestination(63882U);
    msg.setDestinationEntity(228U);
    msg.type = 21U;
    msg.op = 173U;
    msg.request_id = 9926U;
    msg.plan_id.assign("UJGBRQIKQUA");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.885867294334;
    tmp_msg_0.lon = 0.57748953159;
    tmp_msg_0.depth = 0.526818634113;
    tmp_msg_0.roll = 0.203530243422;
    tmp_msg_0.pitch = 0.467567843403;
    tmp_msg_0.yaw = 0.370969270842;
    tmp_msg_0.rcp_time = 0.479981833901;
    tmp_msg_0.sid.assign("QDOORFMFOUJVIOJIDGOYVYJTSIWRHDDBXIZTMNXAHIBFQYSHNQZKGEABBWAHZPAPMMCKNFKKABV");
    tmp_msg_0.s_type = 231U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TEMQFHBCQSIUZLSQFOCDOVLPSWGHPAQQNKXKFYNNLTJHXIBZHUMCZJUJAPJOUTKGHXIAFBEJBVDIVVUDWTETWIZDJTPFIRTRBEYQYNSSDKQPIZMBOHVEXGZNKAXLSCXOVAWVDLSLCWEXPTGAUTRSITKCMMAKFJUOJNDZUWGFOMXNNRKRPMERCGYKCCRPLWWLXWGXAVCEMBPOBSLYLOYFKYINYBHS");

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
    msg.setTimeStamp(0.0934779840901);
    msg.setSource(3364U);
    msg.setSourceEntity(168U);
    msg.setDestination(48119U);
    msg.setDestinationEntity(150U);
    msg.plan_count = 43267U;
    msg.plan_size = 247174353U;
    msg.change_time = 0.0979710181367;
    msg.change_sid = 54741U;
    msg.change_sname.assign("KPAVFOFYXWOIOQETDYGFKPCPMJFNQCYKESIVLDRDSUFXSDCUNJIAHRMVYGPYDRVLEJTVOJHQMEQGCZEZANTQZCYQLSVZDKNHRULLEZWBKMWDBWXINTYMJLGHFNXJFOXHYTHCWGPALUAMAQAMDJBWHUUVWNYXJROSKYIUSTCBQOVQPERFZGBFBZHIOBGWGLUAMXAUIHSJNENFKPCEZEVITPSSCRXBKBURKPMP");
    const char tmp_msg_0[] = {58, 95, 113, -126, -26, 96, 108, 74, 19, 67, -70, -126, 12, 13, 100, 116, -14, -1, 65, 22, -20, 8, -59, 13, -11, 51, 85, 98, -114, 106, 110, -75, 113, 97, 8, -128, -78, 2, 90, 59, 119, 120, 88, -25, -103, -64, -35, 25, 53, 114, -1, 1, 35, -64, -58, 115, 116, 98, -41, -46, 40, 41, 19, -1, 108, 28, 84, 87, 77, 57, 13, -56, 48, 94, 4, -4, 13, -70, 96, -78, -119, -66, 7, -48, -6, -122, 96, 125, -117, -9, 100, -113, -37, 56, 27, 123, 112, 93, -6, -92, 72, 107, -75, -39, -103, -77, 123, -8, 12, 6, -116, 34, 68, 27, 118, 25, 75, 29, 39, 95, -79, 45, 38, -84, 93, -39, -91, 122, 83, -102, 57, -57, 91, -49, 44, 26, -60, -59, 34, 15, -51, 64, 69, 77, 65, -109, -107, -110, 119, -94, 91, -3, 21, 68, 54, -52, 95, 99, 105, 64, -107, 58, -70, 94, -80};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PRHTSKSHVZNKHYIAVMEESWVQKBUBMLTEERWDMLFFNADIABSXPXTWIQRZZKQJLTRCUAKKWVYDHKHHKJMUWHVNCPPQSYNOCGLCEJOUZOPQNMNJOIBJHOXJVRINLXRXGIVLWUYEGGYAPFYQUVAMGMBASYOMDCEJPDUUFCT");
    tmp_msg_1.plan_size = 52569U;
    tmp_msg_1.change_time = 0.796175483765;
    tmp_msg_1.change_sid = 14553U;
    tmp_msg_1.change_sname.assign("NCYHVZFXKBOQLDNJVBDRWAAVZOYMDAZIHFRXDBYVLZJCXMWFPDUPECUQLPOWCCLVRISHRUETKVUZPPCCYABJHRZJHQBJJGQYMCFFUGBKOBQIEAAOKWYTLRNHYWGTPGBYTQMBNGKNSARZIOKXDCWGQSTKPKWYJLHUNSSINXSLXULUSAEMNNBTPHLKSV");
    const char tmp_tmp_msg_1_0[] = {89, -73, 115, -108, 112, -25, 38, 11, -100, 24, -109, -52, 40, 107, 51, 46, -9, -59, 71, 20, 41, -76, 27, -66, -81, -61, 87, 114, 111, 114, -113, -77, 43, 46, 93, 65, 57, 42, 53, -101, -62, 114, -50, 34, 106, -73, 88, 64, 125, 44, -112, 12, -101, -98, -60, -119, 52, 105, 60, 108, -105, 71, -49, 43, -97, -99, 96, 83, 82, -15, -74, 37, 25, 29, 119, 126, -85, -65, -2, -68, -54, 29, 50, -5, 13, 93, -17, -79, 109, -101, -118, -125, -60, -74, 121, 67, 82, -52, 77, -63, 36, 67, 34, -112, 44, -89, -117, -32, -46, 15, 58, 13, 41, 26, -86, 117, 22, 77, -17, -124, -65, 103, 78, 4, -32, 59, -101, 39, 29, -73, -25, 1, -80};
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
    msg.setTimeStamp(0.812071990527);
    msg.setSource(15718U);
    msg.setSourceEntity(220U);
    msg.setDestination(15951U);
    msg.setDestinationEntity(144U);
    msg.plan_count = 284U;
    msg.plan_size = 3026154196U;
    msg.change_time = 0.0206296448234;
    msg.change_sid = 1927U;
    msg.change_sname.assign("FXQWBHIRPQXPVWGCKJCLXZJNOTVBDSMZDEAGDRRUBOAFPUUGLSQTCECHTZUWKRGYPKTEZCWFEPBEVKXLBBTHFOYSVWFFRGPVYSDDCIYIFBKMKCMULGYYLDJWCASOMKVQYNXRXFFZGKUHIQM");
    const char tmp_msg_0[] = {89, 64, -82, -80, 102, -10, -54, -38, -3, 23, -45, 27, -88, 53, 59, -93, -86, -60, -87, -28, -7, 41, 55, 14, -102, -13, 97, -45, 18, -123, -107, 53, 57, -46, -76, -84, -47, 79, 93, 35, -116, 26, 87, 99, 78, -14, -50, 54, 2, -55, 121, -9, -123, 93, 19, 55, -93, 46, -100, 62, 116, 24, -105, -47};
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
    msg.setTimeStamp(0.310511289887);
    msg.setSource(35054U);
    msg.setSourceEntity(225U);
    msg.setDestination(6042U);
    msg.setDestinationEntity(21U);
    msg.plan_count = 50717U;
    msg.plan_size = 202922568U;
    msg.change_time = 0.88900946952;
    msg.change_sid = 37130U;
    msg.change_sname.assign("KFGLAEMMTCTBGZELHNCWPOTVKCKOGIOZB");
    const char tmp_msg_0[] = {-4, 61, 20, 29, -100, -74, -83, 114, -89, 11, -120, -87, -35, -58, 39, -8, -73, 31, -66, 61, 77, -54, 113, 121, 95, 20, 5, -84, 118, 73, 0, -58, -46, 126, 125, -22, 13, 122, 47, 109, 66, 96, -121, -60, -11, -95, -69, 76, 91, 45, 51, -45, -89, -11, 43, 16, 72, 44, 119, -91, 37, 45, -13, 31, -50, 99, 25, -60, -15, -77, -99, -122, 91, 65, -51, -33, -125, -66, -85, -126, -113, -87, 117, 71, 92, -93, -47, -27, -90, -82, 80, 3, 46, -105, -87, -114, -21, 92, -77, 61, -56, 116, -79, 3, 42, 75, -82, 34, 46, 124, 70, -50, 41, -68, 44, 96, 73, -24, 92, -120, -62, -75, 83, -54, 51, -2, -46, -31, 23, -32, 21, -54, -54, -100, 88, 10, -35, 62, -41, 84, -89, -41, -35, 87, 35, -10, -47, 122, -80};
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
    msg.setTimeStamp(0.644972770883);
    msg.setSource(24751U);
    msg.setSourceEntity(194U);
    msg.setDestination(26170U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("LIGRVGKPAHKURETOMSZUQQGOEVWRLFMPMFCLFEGWZHFLXBKDQFYMPXHRAYCPDDHPSJUNNSDPWLBEOOHXEOYDWDKTQFCIMADVENHCPSFPFDOAKZBUSTEWQMGUBKIIKBOHYYWYCCUOKSJVLLUUAJZLQIXANXOXIAMHMEEVROVJRIYAGDRTTSGCUQJJIXGZCKLRQCYVXTJQYPWZNHNNLBRXDBQTNAMJTZRVKNZGBI");
    msg.plan_size = 51040U;
    msg.change_time = 0.969124881019;
    msg.change_sid = 34311U;
    msg.change_sname.assign("PITTXZVGKFOXD");
    const char tmp_msg_0[] = {-120, -28, -122, 7, -110, -121, 56, 13, 118, 125, -75, 86, 123, 1, -73, -27, 52, -91, -98, 121, 120, 20, -41, -3, -117, 71, 98, 124, 20, -44, -118, 114, 38, 106, 103, -8, 107, -41, -71, -93, -27, -118, -68, 39, -81, 73, -31, 36, 86, -34, -32, -117, -57, 24, 39, 6, 93, 44, 117, -55, 9, -49, -2, 53, 28, -30, -85, -66, -101, 29, -67, 99, 121, 46, -88, 106, -26, 61, -65, -47, -54, 87, -109, -31, 26, -123, -102, 19, -47, -70, 107, 19, 22, 110, -106, -7, 8, 25, 19, 66, 10, 91, 78, 119, 95, 63, 34, 33, 51, 3, 111, -11, 87, -17, 83, -85, 126, -126, 79, -90, 47, -7, -93, 112, 24, 122, 37, -121, -53, 120, -31, 88, -7, -68, -45, -102, 10, 17, 111, -44, 125, 113, 71, 87, 108, 99, -23, -65, -63, 25, -77, -83, -78, -58, 42, -72, 114, -101, -24, 57, 117, -100, 101, -3, 94, 10, 74, -37, -32, -84, -7, 106, 25, -32, 116, 106, 46, -88, 121, 95, -105, 44};
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
    msg.setTimeStamp(0.227914224592);
    msg.setSource(35022U);
    msg.setSourceEntity(88U);
    msg.setDestination(53522U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("EASGIDMTSJLCVHGMJIPSUNFBNMFYNPCPYJVSEZMYBFJJSXJIOZNYCXCPHTWEBMAOXOVUVPOBVRR");
    msg.plan_size = 39413U;
    msg.change_time = 0.295383366139;
    msg.change_sid = 36782U;
    msg.change_sname.assign("PKWRKMIAMVEXBMHVTIOXZSYJMQPWSLLJRWDJGVPHAFUGFVKPWOXKAZZZOOHBQKEOUWRJGQMIQFKYUQFUBACRRUKBDJGCVNTELXBLTVTFHXVREVQAYTJRCUQDUHSXLVATIWGSWSLJNHMOXCYIGEZEZQINLDZDTCOSDQBDPHRMIYLBSYQERAZINUPXPSYU");
    const char tmp_msg_0[] = {-113, -43, 42, -19, 126, -109, 125, -65, 40, 35, 19, -13, 90, -7, 79, -2, 3, 30, 84, 121, 0, 76, -94, 69, -122, -45, -80, 95, -120, 87, -29, -58, -121, -97, 114, -7, 66, -30, 83, -69, -95, -115, 4, 57, 99, -20, 46, 92, 3, 2, -18, 17, 42, -76, -123, 14, -75, 104, -90, 107, 20, 5, 77, -107, -47, 84, -84, 88, 19, -9, 88, 66, 81, -86, -76, -6, 71, 85, 37, 35, 15, 4, 125, -107, -74, 34, -65, -81, 76, 7, 122, -37, 123, 60, 16, -7, -60, -116, -90, 1, 81, 124, -23, 88, -35, -63, -5, -39, 67, 92, -121, -103, -125, -8, -3, 116, 24, 73, 64, 109, -36, -118, 6, -26, -79, -83, 111, -88, -121, -66, 125, -11, -16, -61, -9, -57, -89, 110, -104, 53, 7, -76, -125, 107, 112, 110, -65, 64, 123, -41, 115, 41, 79, 59};
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
    msg.setTimeStamp(0.86294208931);
    msg.setSource(6385U);
    msg.setSourceEntity(2U);
    msg.setDestination(25287U);
    msg.setDestinationEntity(95U);
    msg.plan_id.assign("XFKCCKULZRCPKREFOENUTDNILSITMMMGOHJBSWVSBS");
    msg.plan_size = 28371U;
    msg.change_time = 0.811811553508;
    msg.change_sid = 1471U;
    msg.change_sname.assign("EMSXYABVIRRVJEQDXGCAZKOAKIUJEZPTSQTGYFEHYXMJBDZWJVLWLSFIDJYNPLKFNKURBEHODFOQHVBZNISMSFCNDFAJVEYGIUTEMQUOLXITLOIQTLRHZVTODAWCHNIWHXRNAMOFWGVDZQLKKWJNPSJULCLXYWGGGERQAWXVTXCUWBRCPNUHSKXIPDMFP");
    const char tmp_msg_0[] = {-9, -64, -31, 29, -109, -34, -2, -73, -70, 120, 83, -74, -5, -33, 44, 125, 54, 123, -52, 123, -78, -42, 43, 22, -128, 74, 53, 93, -75, 98, -80, -93, 68, -12, -116, -38, -88, 48, 91, -124, -33, -5, -90, -4, -70, -65, -108, 100, -27, 15, -95, -56, 16, 40, 21, -114, -68, 35, -87, -27, 87, -21, -87, 120, 32, -100, -46, 102, -106, 45, 118, 72, -79, -35, -92, -59, -22, 3, 4, -34, 68, 36, 76, 26, -19, 105, 116, 39, 86, -99, 35, 43, 13, -19, 78, -56, 18, -94, 37, 9, -118, -103, -98, 0, 83, -51, 87, 73, -80, 101, 28, -64, 32, 113, 88, 57, -117, 101, -103, 48, -73, -9, -124, -28, 99, -90, -57, 115, 62, -16, 68, -101, -103, 39, 68, -77, -33, -81, -117, 108, 28, 124, 26, -6, 112, 79, -61, 30, -53, 98, -69, 106, 51, -128, 88, 95, -14, 82, -9, 78, -93, -124, -14, 80, 28, 124, 58, 75, -63, 22, 3, -73, -76, -15, -61, 80, -62, -127, -55, 10, -32, 95, 60, -15, 96, 12, -106, 82, 55, -66, -119, 38, 30, -11, -101, -26, -59, 41, -35, -116, -6, -38, -100, -89, -47, -58, 90, -71, 117, -80, -100, 49, -44, -73, -28, -63, 67, -124, -66, -57, 16, 34, 8, -97, -2, -94, -52, -91, -12, 76, 46, -40, 44, -26, -108, 76, -105, 29, 68, 97, 2, 34, -28, -39, 53, 3};
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
    msg.setTimeStamp(0.738273776859);
    msg.setSource(39085U);
    msg.setSourceEntity(106U);
    msg.setDestination(7743U);
    msg.setDestinationEntity(201U);
    msg.type = 105U;
    msg.op = 141U;
    msg.request_id = 34141U;
    msg.plan_id.assign("RUXQMLGKDPBVJMHSMVA");
    msg.flags = 39917U;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IGZGVPHFXFXDXDSLDMRASGJFAJXTMHWLKY");
    tmp_msg_0.value.assign("CSACWGZKMKCWBIGDOOKMHZRAAVOSFENIFPOZNHBWEUJRCCUHZGLMVYTOHTPRFDYDUOJDDQYUCVWUMMFBWZVMIPYDHAQPIZRVMBTXLDLEOUPTQSLPVXQXKSDMDXLVGXZETYTVMNQQXFYIRWCGKBSAHJTGABWHQQPKLXBMAQITWIRENJFADBWLRJCIRNUXKHAVNGRIBEZTRFEEGJUUPOJZYLJZNLBEELIXHNY");
    tmp_msg_0.type = 160U;
    tmp_msg_0.access = 207U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UEZUHIUZEZHFFJQCNKZKZIOOJFXWREEYQQQTCGGTZWXIPEMFLGFBSYMTGRNMMXXHANLHBDFATQQEBWCOIASVIMRUPFMZKRKQRLLGJTTDRLUOULCXXPBHVALBTLOXYHUDAINYRTERDMVUYYRHJOPTKVEFD");

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
    msg.setTimeStamp(0.578687580272);
    msg.setSource(57272U);
    msg.setSourceEntity(236U);
    msg.setDestination(49520U);
    msg.setDestinationEntity(3U);
    msg.type = 135U;
    msg.op = 70U;
    msg.request_id = 41243U;
    msg.plan_id.assign("RJUMSYYEYFFUDUQFBTJAPCFUSPMVZAYXNDSQEZSGBBDLVPKJWPQUAEPCQLJMSNLRRRXAX");
    msg.flags = 33344U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.736992266123;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DSKSISRDYSFZQPZQUXZCLMYWBUCHYOZLXQFWTURDMBWXCVBVIPUDJTYHYWQHGZEHTUHRTRTDOPJPXOJKEBMIKVHMJRBXMVOAJXSYDCWFLDFDIFRGMLWFQRIZLXNNCBNOEHQQHKGMNALWEMRDEVOJJWIZPDANFBPCWBVLXNSLNZGIUEGONJHAPMQIRCNKRSKMYKQHGWGTNUTFFOOTTUKCTXUJSCYVBQAEZEVUYILJSLGEAYGAAEZGBPAXSOAK");

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
    msg.setTimeStamp(0.134865636026);
    msg.setSource(31921U);
    msg.setSourceEntity(159U);
    msg.setDestination(37188U);
    msg.setDestinationEntity(202U);
    msg.type = 97U;
    msg.op = 190U;
    msg.request_id = 6796U;
    msg.plan_id.assign("CRTQNWZINQZUWMCTJGHSSNDJWVOZMEGDYGVLVLGTRYAACPMRMKHLJAECMYBCZXZKXVHUYIKQOPWZGUXJMSRESBKDWIBZRFOMVECONFSTJFYBKPASZJPVCOQCJEUXHKDWQPHWBLRKDIAHXWFSFDVSNQMWEHHLTCQZFYAOXGJEINAXAYR");
    msg.flags = 43931U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 97U;
    tmp_msg_0.speed_min = 0.760148147665;
    tmp_msg_0.speed_max = 0.307577767607;
    tmp_msg_0.long_accel = 0.0644077261743;
    tmp_msg_0.alt_max_msl = 0.402347316826;
    tmp_msg_0.dive_fraction_max = 0.639926967047;
    tmp_msg_0.climb_fraction_max = 0.784263123171;
    tmp_msg_0.bank_max = 0.699245343532;
    tmp_msg_0.p_max = 0.21491729067;
    tmp_msg_0.pitch_min = 0.908248078575;
    tmp_msg_0.pitch_max = 0.830534378974;
    tmp_msg_0.q_max = 0.0462788331522;
    tmp_msg_0.g_min = 0.510152937329;
    tmp_msg_0.g_max = 0.211400624781;
    tmp_msg_0.g_lat_max = 0.813482199259;
    tmp_msg_0.rpm_min = 0.12596243388;
    tmp_msg_0.rpm_max = 0.441564078952;
    tmp_msg_0.rpm_rate_max = 0.415281309529;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NELZJRZUIBNMNYUOJINLPHEDAYPJGSDCBFLRBQVUSISMQFLFOZRWZZKFNEAMNOGAKVPXBAOKPWGSLJZSDYBRKMLEOCXNGNAVTFJBJCXGAMFIIAQHUUIRUKXWXOKGRZJKXFCXPCQWELGLKVNYODGTQWZYKNJTHMHHYYSBIGSYEWRJLDWFTURVMWHSVPMWYTIDCEQM");

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
    msg.setTimeStamp(0.384504504701);
    msg.setSource(59992U);
    msg.setSourceEntity(49U);
    msg.setDestination(48214U);
    msg.setDestinationEntity(87U);
    msg.state = 216U;
    msg.plan_id.assign("SRNAZSYSEZEKHUGRLVHXZEKIRMUAXCWVHNYOYCODLNXGWYGOWPRDHUOOT");
    msg.plan_eta = -1425121503;
    msg.plan_progress = 0.602939553853;
    msg.man_id.assign("DKTJOMNHKOEBQGQYHWHKWSAKGTVFNYVYIKBBLJSKAUPJCDMHKVXBCDNEOXMPWFKMRAFJVNRXDLPMRTEYGUTIOZYXSUXYQFNCXHEIJQXPLVIWQFBAIRMMURGDCLBYLLWOKEVNTGTOZZGIIWJBUHNQRFLPRVZHBWXOTNVJVYAQITZSSSQ");
    msg.man_type = 7507U;
    msg.man_eta = -1866200793;
    msg.last_outcome = 75U;

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
    msg.setTimeStamp(0.529462090668);
    msg.setSource(56497U);
    msg.setSourceEntity(180U);
    msg.setDestination(3516U);
    msg.setDestinationEntity(160U);
    msg.state = 97U;
    msg.plan_id.assign("TLQCKOSJHBEGDIYRROKMTWBYRLOLXEOIDXXGHMJYONWGAQYTJLBOIXPANEQPKYPMTESFKSFINTTARIDJGQNFKLWLDCBKSXMHIZHTACPJBSLHVPWTBVWASEYGWAANVXVAUNJWUHJFJMUKRYLNGAZDUGYFZDECPC");
    msg.plan_eta = -524208083;
    msg.plan_progress = 0.755566615656;
    msg.man_id.assign("LFYWVUJNCONIADQPKAGEBMBIJNDDOMRWLEZFFSJBSAVDOKMZDSYCUDRSPWQPABMEGXRZPZTZJUEOHSWGANXMNUVGWRKJPFKNBADKVRDXIRFLOVVMTYQPTGSOLQYGIGQAIAQZBJQTSEFFRYLWPWULCYSHEVHRMRIXEE");
    msg.man_type = 52581U;
    msg.man_eta = 2031502463;
    msg.last_outcome = 67U;

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
    msg.setTimeStamp(0.654461499593);
    msg.setSource(64706U);
    msg.setSourceEntity(79U);
    msg.setDestination(4646U);
    msg.setDestinationEntity(51U);
    msg.state = 202U;
    msg.plan_id.assign("PBVSUGCKBLTSFJGOIKJKNLQAEBNRUATOKTORMYIMNPOSLJIMQWZKEGNAROATMZSSPFAESJPIEDWMXNGWZRCLTUIEWGCXRYFIC");
    msg.plan_eta = 1282695395;
    msg.plan_progress = 0.773831613869;
    msg.man_id.assign("BNQYTWXWRWFUKPNVBHTOADOUHSJGKKLIDCKQSSZGTZWVHRXPTKFVDLLFYVNZSAIATKMFOVYLPJMSCFMTUKLRDOBCVGHEPOVNBEKJGZEHEGOUJIJSSPYBVSECOJHEAYBQPQBIFGGZXNCHJFRFXQNRYMNQZUZVXCCWPOAONDUMDZLZXHIDJMLUCTMAMRFWGMEHNARWAIKIYPYNMUZISTXTGJYSWXDLKPBWLLQBVERRJIRIE");
    msg.man_type = 12642U;
    msg.man_eta = -292277384;
    msg.last_outcome = 118U;

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
    msg.setTimeStamp(0.637378605688);
    msg.setSource(46912U);
    msg.setSourceEntity(186U);
    msg.setDestination(53379U);
    msg.setDestinationEntity(45U);
    msg.name.assign("XECOYRETRGNUNQTE");
    msg.value.assign("NLATNRAFDFCCIWXNLIZJNMTVFWEXHDCBMYQLOBKJYCWYDDEKRPUPSMWOEVIUVAUZMSLPRHLGMEMFVJWITREADNJCCOUBWKEDMPKEQGTNQBRZSLEVTVFWVHIAXRUYYXSEDVBSQOAHJBQXGURMLZBRAGZBKXPS");
    msg.type = 57U;
    msg.access = 161U;

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
    msg.setTimeStamp(0.40222912174);
    msg.setSource(9767U);
    msg.setSourceEntity(8U);
    msg.setDestination(8768U);
    msg.setDestinationEntity(93U);
    msg.name.assign("OFGTWRHDKYROOCRHJEQMTUCJMFACZEOUYEFXBHBQDVZBQLMXUQVPIJDIMAPYUBHAXWZASFOGZYNYTDXKAABQGSWTNOHQLGWSXQHLORICPCIULRZZGVNYPJYBARLQUHTCSFSWBMVDPLEGRXSFZVPEPINNVJUWVHLKTNQTXMKSJJKCOMJPEKIKWZTODAKKBVEDBNGRHYXLWVDHUCBYEIENMFJITXSINVUOPAWPTMQFFGUJDIXCSDWZCYRLLE");
    msg.value.assign("YKGFTOXMCQOLRKQKUAVKFEKJGPWCFNTDGEZFONVQJJAZTKNAUYXMEUGINLEZHMMAAABHSJANOBEBPXUXTJSVIRDVYZDKHBEASPZFYZWTDTGXIWLLJCIHHDUROJYQBQRXDFGKTICLJBYCLHRDLYTVMQEURVSODNSEHBTMPYPNZWIRYDFLHIIZRDSPMQNHPZXFGMWSIOBXBXOGEWSXVPSBHUCOOJTCPPAWYAWNCCKFZSRCFLVG");
    msg.type = 40U;
    msg.access = 0U;

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
    msg.setTimeStamp(0.149276130395);
    msg.setSource(14341U);
    msg.setSourceEntity(56U);
    msg.setDestination(54300U);
    msg.setDestinationEntity(29U);
    msg.name.assign("KJCAHYGIQOGETOYIXKGUZPOBLUQMUGQKSWPHJZREVZHRYXJMCZVIZIF");
    msg.value.assign("LHMFNEXJGJXNOQTZGBXWJBDZSZPCIOUCBRDTNWXVDIFAKNGXMAAIBBANBAVDALULMJHOBLRWKKJVOIKTUSEFDKDGHKYJVCCPXGBRPTNPYSQHKRTFTVBYZUICAO");
    msg.type = 144U;
    msg.access = 41U;

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
    msg.setTimeStamp(0.960447289408);
    msg.setSource(14140U);
    msg.setSourceEntity(81U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(42U);
    msg.cmd = 192U;
    msg.op = 15U;
    msg.plan_id.assign("BIKDGHSSKXPYABZZJVLCSPQZXRFSJCKDSAPIDNITNWSTTDOXIGQGYMYUEAYTLKUACEKOWEHCVFVTAWMLNKFWWHRSRRMWAIBTFFTLPJZGOXDUVMEITBJVZUKMCLYHRVNHBYJJJXLVCQUIPGKYBEFEUBJMPWXVKMWDHXPGBCLKHPNNSNIOPJOONCOUGAIDVFCWIZQCDMSNSGNUXFEJQRBU");
    msg.params.assign("ZRSEBTFJKJCBPVMGCTVDIQPDEHXFIUNUVTUYNCGTEJKXUWNRLDWBRZHWAFAVGNKRVJROWGPZFYAELEXUCOAYDLFKYIMOLVJCTGNLZRHEOSXFTYDHZJPLIBCWRQYBUOYIQQANZRVMTTSSJDXHPKKASMAIHUIXDFNYUSQIKMHWPGAXZXNNSOXVIZBMPKDAHOBPLKJUMGUQVIWGAWEYMWOHTTJCCDPZJBMGDSRSQPFQCZHEVWXFMQBGLOREB");

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
    msg.setTimeStamp(0.841129781476);
    msg.setSource(5514U);
    msg.setSourceEntity(135U);
    msg.setDestination(10018U);
    msg.setDestinationEntity(53U);
    msg.cmd = 104U;
    msg.op = 243U;
    msg.plan_id.assign("ILLODYXYZCAUEWSDMGUHIIILPIEZGSBTVUQXDQXUYQBQBPRBVUQCRTDVDKWEJVXVEAKAXVKFFSWCLREQYIVJBTOFLFQOPETPRUGMKNSJHQHHKXJZNLWNWIBRYASODNEEYCACNMNYTVJVWZNBNHWRHTZJAAGJXGOFQMLHPUEICLKFYNUHZV");
    msg.params.assign("ZQEIXHNXMKDCODFSRCUJNIKRIJWAQMQIXQRKGPSRNPIITAGSCZBBPMWMCIGWZEBZFYDWLTTAP");

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
    msg.setTimeStamp(0.666584075799);
    msg.setSource(29745U);
    msg.setSourceEntity(9U);
    msg.setDestination(22317U);
    msg.setDestinationEntity(193U);
    msg.cmd = 56U;
    msg.op = 53U;
    msg.plan_id.assign("OJRTNRDBHZTSUULPPUNITINOYCRLEDICGVRW");
    msg.params.assign("HJBKNDUHFSVUNQVJIGKILNNJWPAVOYXCPQKGZIMYMXWQYRHCPAQNJINFTWTKBRTISXOBUMQYXDPKHSCJMESFZOVDYOBXYHRWRNJIGDSWAQJZIIYQYEFHKUGEADEBCRLYFHCAVTLDZSPPZAALZRUXUFWGJHNIRKJCRLJQBIDWBOPTGMGACTECYWKCSUMKNVQFLFGGALXDMZMCEWSOTXHP");

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
    msg.setTimeStamp(0.0627281178565);
    msg.setSource(62430U);
    msg.setSourceEntity(129U);
    msg.setDestination(16653U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("EZEVFYJVJTIDYVPSMRZPUNRIOEHBWPGADAAPNWNIKKVQSUNOHJTGZPLGYTWHWRBNENQJBTYXLRCUAXOGABNCBHXRLKGXFMRFTKBLYVAYWNKZQOBXUVJTWVZPYMQDFQHFLQWDJUSQWUOARUGPFBSGELKJUTTZWDZCIMECFBASQRMFTOZXPMNOHPEIAISMCTCYCWUHLG");
    msg.op = 128U;
    msg.lat = 0.369008227685;
    msg.lon = 0.38186414174;
    msg.height = 0.956506146518;
    msg.x = 0.641321972614;
    msg.y = 0.0886669256955;
    msg.z = 0.830254737174;
    msg.phi = 0.249435565577;
    msg.theta = 0.831669547619;
    msg.psi = 0.923117276238;
    msg.vx = 0.582904115486;
    msg.vy = 0.728610508955;
    msg.vz = 0.90206677787;
    msg.p = 0.183504950371;
    msg.q = 0.488855485466;
    msg.r = 0.277896736113;
    msg.svx = 0.964388345847;
    msg.svy = 0.845623191466;
    msg.svz = 0.368187591462;

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
    msg.setTimeStamp(0.601239630893);
    msg.setSource(60294U);
    msg.setSourceEntity(187U);
    msg.setDestination(28502U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("GJOTZLMBJQFRVBXQAZEFFZJUAEPHYRGQXWPDXTUHWQISRHFYLMHKAGVPBJKSZZUGCZFFNGLLWLASYTYTYPDOKASDVUFKRVIUVAGVQW");
    msg.op = 65U;
    msg.lat = 0.286370915263;
    msg.lon = 0.422517513071;
    msg.height = 0.822120797777;
    msg.x = 0.815602423532;
    msg.y = 0.370376370378;
    msg.z = 0.843107080141;
    msg.phi = 0.869618014132;
    msg.theta = 0.976148701084;
    msg.psi = 0.105442540749;
    msg.vx = 0.886000066664;
    msg.vy = 0.870753795713;
    msg.vz = 0.509807393649;
    msg.p = 0.491933722618;
    msg.q = 0.570868521603;
    msg.r = 0.792626177696;
    msg.svx = 0.394794274415;
    msg.svy = 0.861707328466;
    msg.svz = 0.436126997179;

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
    msg.setTimeStamp(0.394421933363);
    msg.setSource(59444U);
    msg.setSourceEntity(115U);
    msg.setDestination(5723U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("BFPIUSOFLKNVJGPITJUMJMHUVYVNACILXVIKIPWDYPDLVCUEBSHCYHY");
    msg.op = 236U;
    msg.lat = 0.0783057942709;
    msg.lon = 0.745761468992;
    msg.height = 0.687668274651;
    msg.x = 0.749052104153;
    msg.y = 0.227393139559;
    msg.z = 0.64166197722;
    msg.phi = 0.389233665583;
    msg.theta = 0.40312830026;
    msg.psi = 0.748965569723;
    msg.vx = 0.360358404778;
    msg.vy = 0.946999221376;
    msg.vz = 0.303124854455;
    msg.p = 0.0695631762098;
    msg.q = 0.632921043272;
    msg.r = 0.304390534923;
    msg.svx = 0.104903345332;
    msg.svy = 0.455583277668;
    msg.svz = 0.895692928548;

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
    msg.setTimeStamp(0.267201469861);
    msg.setSource(64560U);
    msg.setSourceEntity(163U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("IHTJQFBMEHSXYUIRCAFSHPCZPOXSRFYERQWVZVTREHOXKSWUZLBRPSSIGLVIZUGUBVJKVOAPZXQLXPLMOUWGXERKPAOTQANNHQRMNJZH");
    msg.type = 228U;
    msg.properties = 30U;
    msg.durations.assign("SPCMQZCHRMWHIWSHLWUWTVHGTGDEPEIOTOZHAYZBJIRWLLIRLAVYSODLGTCUUKRJHNQKCZOLXXANBNNKNSMBXKVRDWCEKYDJAOSTKEFDZXFOVNXCDIQULLGHICDMVOPQXPTVUQZUGJDENJYDWYBNFAFLBPQCMVJPJXYECHGKSMYAYBSKGBFRGJFSEUPFWRWUVMISZXFYRFGFAQCTZMKVIRNOENXIPUDSJXKOLZEPAAQTTMPGQWVQA");
    msg.distances.assign("JGYKIBVISTKUIDZWHCDZFYEFSDMWDEEQWZYQVITWMHOKIUUMVDGHZDTHNJLNYNNYNIUTZXEHFCVCBMRIGVJEFSCPMROKOYAUGALKWETROPOMBCKZOPXBSVTENYKQKUTBHNQFJJYWLKCBLJFRVMHPIGXCRCXUGSPPOMSSEJJDJNKPQZRVLPYGABWLVASARTCTZNDRIRUAQHEUASXHGNFLLFSDZXXZBQMJPGALM");
    msg.actions.assign("BNIKLRZUPOQDDPIOKUZOMFFPPPBJAGFHDEJNEYNAQKBVUYDKHWHHUPGEZYGZIIAONIRAEYBSDTVVASYRWEVAXSSWXWRMEGSELJBWFMXJWFHKTVLKKBIYNKZPUVUSLTVCOM");
    msg.fuel.assign("DFTWVSLRJXBLSFDHC");

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
    msg.setTimeStamp(0.446496499542);
    msg.setSource(41730U);
    msg.setSourceEntity(41U);
    msg.setDestination(5877U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("XRSUCRRYSSQQXCDBOTJXSFTPHDGAPDJXYWYKGZVBQGVKBELJHEOTJTGKMWRFBGDKMPAHIUDWRQDILDTNFVERPLNZUVRSNHGIYDWOOWEMUALKTIDGPMELBCWYUWITMZBHAZIFMPSKWEOPRNFFLKYIAVQNXCAFUUZFFSLOEKVSZAGCZMQXBMHYXTORJJQEDALCJWHTPXXXUGPMYVRNTBQHOSOYBISNCNCNZEOHFQLYWI");
    msg.type = 59U;
    msg.properties = 233U;
    msg.durations.assign("JXVJLTNACTYEUZCOJIOSZVMHZYKEWNAXYAUROWLHFUQKAHSLBWGDZUSJHHVWSBYRNBMZQHFUAPIMEYOPCCQWUGDVBDKSGNIPTGYQMWIISSRAOONOKWCTWCYRTMDFHNOQRKQKLZXRGRPLPFJYTRWEXZKDJJXDBRMDEMDCTEPOESKGVYJNUBAEIM");
    msg.distances.assign("GHIMVOJQBAWWLTXSFTSGXTPTGOHXATLWZNQJEZFSXXOYCJTXVVKPABKPWLQZSUHEFSJGALFMAMNSJIYMUOUHMVBTDYLZBCXDDWFQ");
    msg.actions.assign("ZFCTJXQEEAAOSEAPWJQKHOFFLCVZUCAXSCTITRVTNUMJXHLHFTUTVCORVHBUPGKMQMSIMMNNZ");
    msg.fuel.assign("WTJIRUQSCIAZRRJMYQCENIAZNNLGVBKSBDWXCNNURBHVYUEPIUUTBDVHPNHMCXHKFSFFWQTEOGHRQRJGWKJFPBWBOXWLLYZGMHANSGLAXIZCUTVVEWDOOHVOJQVOTSBKUGXEPMGRTYKPVILLDAKEVPMK");

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
    msg.setTimeStamp(0.855515911841);
    msg.setSource(47928U);
    msg.setSourceEntity(194U);
    msg.setDestination(27922U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("DKPWUPPETKDVXNLGZIYKWGNNQHAPQCINTPSORBSAPINVRZKACEBWCSHIXOYUINTKTSEXLDSHNCGOKGYQYTUEQGCSXCEJOATORTDVLMWBARDSLACFQPQCNUNHILJVQWHLLZFVRSFRJPWGLCYRRZZIXDMEKMSPJOLEGMWVYXTAJDFZOEBKYFUZQWMTSUHIOUIMROHVGABJBQV");
    msg.type = 171U;
    msg.properties = 29U;
    msg.durations.assign("WJHYEWKYOREMSQLVJTNWVCIWDSXJBUAKUTGXOTGEHOVDD");
    msg.distances.assign("NSONRCSQOKLZBCGLNEAWQLJRQWVWBYIXJOIABDHSSCEWRVDCPMQCRMXDSSYBVNOTBYGOPBARNDGEXMEQVLFUGPORUKHAWEBLSGFMMPZADVQXXWRQBTKXAFCMHHO");
    msg.actions.assign("HHYUVPYVZHFKKFRUJDTEZTGZXMCUCSAOODRPLHGQHLVUVGILERZXQIFAPCEDLMCGHXZRNXFBQOVBEIJSTEJSIZMNEOZUQZBYRPEYBTAFQCDWPWTRBLYWQGXAAA");
    msg.fuel.assign("GOEHZYZPKNBSKNQRWLWGRSIIWVCJPPZKFISITXPKYGQVWULSMFQLVYOHLIDDETNQZXRYVMXMKAKBNGRWEAHJCEJFLCUZDHQARGPJVPTEIWMECODMOQMTROBCXHCPAGISFHNSEBDIJFRPBOMGTAOUTJCROXWAUQLPKHAZYSZSBXYQTFSDBCDLRDVH");

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
    msg.setTimeStamp(0.920785810858);
    msg.setSource(1227U);
    msg.setSourceEntity(32U);
    msg.setDestination(14354U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.815610007257;
    msg.lon = 0.829112612728;
    msg.depth = 0.483145936259;
    msg.roll = 0.0228587312901;
    msg.pitch = 0.668262288607;
    msg.yaw = 0.835458695899;
    msg.rcp_time = 0.108357219788;
    msg.sid.assign("SJVOQWGJDLBMUOEOYQHKMRLBOIBNACXVYAAWKIELEBUIXUQYMVVHUZQPPTBHOGFGCBSCOINZPNWNCKEKBSLDWDRRJGBJXASITLFKUYFMTMVZTFXZMFOTGVZKSXC");
    msg.s_type = 154U;

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
    msg.setTimeStamp(0.737671637988);
    msg.setSource(47326U);
    msg.setSourceEntity(184U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.877667101856;
    msg.lon = 0.292153131013;
    msg.depth = 0.0916722366312;
    msg.roll = 0.899932946261;
    msg.pitch = 0.0748229292857;
    msg.yaw = 0.598505028145;
    msg.rcp_time = 0.834913766403;
    msg.sid.assign("RCBFOXPOYJMBAIUUTJWNJXWQBXFVSMXPAZSRHNQXRDPYYZUIHPLFVCGRRIZXYHNGTEHOZISSDXEKNQTMDGFLASTKIOHBVXAUYZUKTINTWGKUJRJGKUTQSPRP");
    msg.s_type = 194U;

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
    msg.setTimeStamp(0.00226426504256);
    msg.setSource(65217U);
    msg.setSourceEntity(86U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.971804282012;
    msg.lon = 0.760536033496;
    msg.depth = 0.923408068754;
    msg.roll = 0.532601792697;
    msg.pitch = 0.39606043686;
    msg.yaw = 0.650243338067;
    msg.rcp_time = 0.486999955848;
    msg.sid.assign("OWNCKTGBXDOGHOJITDYMMTZYQRUUFMJGABCONAZSBUKKHWXRQFHVWNWWHPAUYEIBCTDRLXXJZRPBBNWIKCMVXYANZTFSUFVFUDVCGQRPSTVIBUTMWFJHAGEELQZDKRJNLGVNLYVDOSOSIM");
    msg.s_type = 178U;

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
    msg.setTimeStamp(0.528054498309);
    msg.setSource(26208U);
    msg.setSourceEntity(53U);
    msg.setDestination(30373U);
    msg.setDestinationEntity(247U);
    msg.id.assign("VSNIFFPCIXVGDONRYQLZRMPHOQAQROKXFKLHZMYDHCWBWVSUUEUQPPRQYJLAVBTWEWNOWNUIHPFIYOUXKKQSCZRZERIJBHJHKZTALODHYZNBDNJYEEOOKXCDMKSECW");
    msg.sensor_class.assign("RLVDCPTLZKMPIXUXAVDBMKHZEXCEQGCUXWHSTSKVVYCGTMKXWDSWYEBBAZOIBRYOLEPRYBNAXFOQZGDAZOJQVAQTXJCDFOADNIKYWNCBNGSELNHFVHEUAPA");
    msg.lat = 0.259462672844;
    msg.lon = 0.494857720263;
    msg.alt = 0.781434677248;
    msg.heading = 0.371941946114;
    msg.data.assign("MEZUWUCPSVOCJDVRGTXGODGWHGXYGNRVEKZDEIEUFLPWJCUBSBPMUZYOOIBARBHUHTRLDJQBTOCMSKWYVFKLZFTLDVJCJZIPQFMPLCSTGZSFDVSIOCYNAKYQYZIORRZAXFRQTMCAEKIFLYEQHIADXRJIFDOW");

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
    msg.setTimeStamp(0.261017199422);
    msg.setSource(56276U);
    msg.setSourceEntity(190U);
    msg.setDestination(15476U);
    msg.setDestinationEntity(142U);
    msg.id.assign("WSNPEWYTXKUAWHBWIHONDWBNFOBTDRXVSYQ");
    msg.sensor_class.assign("JQMNUIKGKXQYDJMMFBKRDTXPPHYZNOUBIALFEUHEATXFEKQONPSQYEMTBOBHGYTEQWVAGESSLRQSCLAAEZDIMKXGIBAPZCTDPJJFLKTSUSPUOSDFAXPCQJIPERILOKPHVYONTWQSKPZZVBVBJCNCORAVACEXUVZIANWFRRLXWWFXBMRMIOXGQWMIUOTYVBJZGBLJHRRGDTYCDHNGFZWSLOLDUDSIDNKHVCCFEMR");
    msg.lat = 0.959760083495;
    msg.lon = 0.0310716348017;
    msg.alt = 0.342478611885;
    msg.heading = 0.906114085937;
    msg.data.assign("RZXPWMWBCOHROWIUGOSBAMTRHPSEXNBDNUPKFGEGMJEWKCVSKURHEEAISLPEGB");

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
    msg.setTimeStamp(0.989965774619);
    msg.setSource(47007U);
    msg.setSourceEntity(116U);
    msg.setDestination(51062U);
    msg.setDestinationEntity(74U);
    msg.id.assign("QBQNVGTFZYCLOSJMETOKTYHLJGILHAOWXOHWBDYQKZVFNTABIDWRTVDXR");
    msg.sensor_class.assign("PNFUYGIQFAWQOJLVKFGZLZTOQKNYASYALKDDNZKMJ");
    msg.lat = 0.167404549754;
    msg.lon = 0.308605641136;
    msg.alt = 0.134816649825;
    msg.heading = 0.284481583908;
    msg.data.assign("TBZMDQZJRISRZTYEODIPSJMTFHGGBUTBRNFCKWWTVLZOLUUENDMJLRIWRSWPYYNVKERPKIXXBALDVPCKAHXZVSYXSNAHZXRLOWNFBOEGEQFTXZABKPMCHVPLYCVGQNRWGSDNXQJSEYJSUXPHOUPGAKIRFHUDCHOHCYARFJOUTXFBNYGJJYKFQJMCBUECMVLITBFZQMWLNQET");

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
    msg.setTimeStamp(0.823050928606);
    msg.setSource(9124U);
    msg.setSourceEntity(245U);
    msg.setDestination(37559U);
    msg.setDestinationEntity(249U);
    msg.id.assign("PATVMVUSKELPKRWZJTUHLSOROZPATHFBYPAQMTLWGNOUYCXHCHJUKBMQJKBVPGVNBBLMIKXGKSFRLFCUGWYYHOYCJRWOHDUZRYIKCMHPFRRGALWXAGZQCBJTZOEHAUVMGXXVZTYGFYWXCWJCANDXI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PBWZTDCIQEQTDGEVUXVFMECBPRUIBQTHNDCLHGMILWHMMEPXYFRKWCWFUHHPFQRGJIZHYEYXMOYFHVSRNSCBWLIRUIOGOYDCMBXJNVLJHTUOYHBXZOQFVKLMVSBIBUAAUHCRZIYRKFMSUNYAFSMQVKTGZSDTNGKLLSFTUVSEWPXGPT");
    tmp_msg_0.feature_type = 220U;
    tmp_msg_0.rgb_red = 143U;
    tmp_msg_0.rgb_green = 87U;
    tmp_msg_0.rgb_blue = 164U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.264656911216;
    tmp_tmp_msg_0_0.lon = 0.124365362031;
    tmp_tmp_msg_0_0.alt = 0.396817693448;
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
    msg.setTimeStamp(0.811386047252);
    msg.setSource(3693U);
    msg.setSourceEntity(12U);
    msg.setDestination(27069U);
    msg.setDestinationEntity(16U);
    msg.id.assign("XMZYSKNCZUTTLPHNJMZQUSBBJXGDSRUDLCWAUIOKEXNPPVY");

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
    msg.setTimeStamp(0.736153453271);
    msg.setSource(33549U);
    msg.setSourceEntity(202U);
    msg.setDestination(9022U);
    msg.setDestinationEntity(112U);
    msg.id.assign("JFLPHOOWFUWRYXFEUEGRIIKXBFXDCTSWTWVVRLANQEJSNFVUWRFBEZAUTAGXCOLMHFYYNNLACTKCYCQVOBYWCZDESIAPPAPLHZORIOWENUUXBUXCEZFMGVRTJIAIJFZMSTTLKBYKHSQPQOAIUJPXONZMGBYJNSTQWJRMNDVYBHUPGIIMDKHHUQGSITCD");

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
    msg.setTimeStamp(0.480016791333);
    msg.setSource(16289U);
    msg.setSourceEntity(33U);
    msg.setDestination(43212U);
    msg.setDestinationEntity(206U);
    msg.id.assign("LZOCWSNHJKSPRKKFDVUYIFZGCTLFZWDSSHNOYRMFYBIFFWUAMIKYFBARBENJVVNYHQDSLGNAZWSAEIDRHXOXGNJIOKLBLNAKAHVMVRYWMPMTCVTTHDWYMGQEUMMJPZDEYOCAJECBQUVZYHCGOKNXLOIPRDWPWOQXJTUPTQICLIZGEAZTNEJDLVSTSKWRQUMFQSIXPJIGJ");
    msg.feature_type = 244U;
    msg.rgb_red = 55U;
    msg.rgb_green = 107U;
    msg.rgb_blue = 32U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.586446146969;
    tmp_msg_0.lon = 0.631571599936;
    tmp_msg_0.alt = 0.144607765068;
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
    msg.setTimeStamp(0.160922667203);
    msg.setSource(4289U);
    msg.setSourceEntity(84U);
    msg.setDestination(33398U);
    msg.setDestinationEntity(204U);
    msg.id.assign("RRJWAZVWCPIEMUGRGZXUMGLUXDHMQPOZFQFBSKMWFGHOQEXKYBDRNVTRSWYBVBCJQNZIJCTZWONQUYUGYOVNXRKMIZQIPECTOAQCIUDFHBLZVGKWOFZHQOCEKKGSPTJETDHFTDLCSSYSTOGKBLPNN");
    msg.feature_type = 241U;
    msg.rgb_red = 198U;
    msg.rgb_green = 96U;
    msg.rgb_blue = 210U;

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
    msg.setTimeStamp(0.794625120038);
    msg.setSource(63853U);
    msg.setSourceEntity(32U);
    msg.setDestination(19896U);
    msg.setDestinationEntity(96U);
    msg.id.assign("ISFNXLIXZDQNBFNCGBVJVZCDKBZKTOPVIOCXSLBKZMAWKSGYVSEWUVQDWSXAJTQEBCMWUHEMKBIPEGYSEWFDCTMCVATYNVRZQEOGQUMSHNZGOPLDXOWUGERTPHCLUUHWMFHGANUPVFJPIQOXFHPEBKTORVATM");
    msg.feature_type = 100U;
    msg.rgb_red = 183U;
    msg.rgb_green = 23U;
    msg.rgb_blue = 84U;

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
    msg.setTimeStamp(0.285923081013);
    msg.setSource(50844U);
    msg.setSourceEntity(174U);
    msg.setDestination(34604U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.841935719728;
    msg.lon = 0.441431349233;
    msg.alt = 0.597527528694;

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
    msg.setTimeStamp(0.940727368294);
    msg.setSource(57471U);
    msg.setSourceEntity(106U);
    msg.setDestination(50793U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.181068757978;
    msg.lon = 0.311085303616;
    msg.alt = 0.231459378165;

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
    msg.setTimeStamp(0.584110258373);
    msg.setSource(26834U);
    msg.setSourceEntity(151U);
    msg.setDestination(17594U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.30500846499;
    msg.lon = 0.604808254281;
    msg.alt = 0.959425929535;

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
    msg.setTimeStamp(0.0607163175205);
    msg.setSource(19703U);
    msg.setSourceEntity(163U);
    msg.setDestination(46855U);
    msg.setDestinationEntity(118U);
    msg.type = 147U;
    msg.id.assign("KAEBREDIZJEMKUMGKYNGKCPCFVYITQHAJZDDEPJYBOXBJSUFPNKVIXOMROCWDJKZXKWTQVADPWWXLFCPIAXYIDOURNUNLEQHNBJUBTQOYDVRZPVTAQFRMNZGGXHSZKYTJEJVYHHTMRCAVECHWBGKOFGCALHIRRTRFPCBSZGMPZXACINHQYQJWJXZGUMLLPYXSE");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("FBIFELUGQWVTKWGPJTNTJCRGUVTJHRNYRDICUNRDUUETQQQORCKTBPFNVIPIWSFBINHAMALXSNVORVBASGTEHVHXMWVNCWCDFZYOAMQBIEFAJPXVUOJADIPXESAYTBJULTDLNMJKSYXEQCDORXFKOWHLPGJKBZBSOWZYIXKMYOMEMWEMUJGUZQNS");
    tmp_msg_0.sensor_class.assign("PYEDUGPMGUNNVAKINLIOQFCSRBOHHOMHJGFUBEZEBJYMENWKHHMSQAZFSZQEDWXUEHRDKUGLWOSKHNLGPHZNDXCJPKRASKTVFCVTBVJCLXQJOLXYIYGGDIAAVLTWMYXBHYBPAGSLNQOXRQOCOJKAYSJCYI");
    tmp_msg_0.lat = 0.568741624213;
    tmp_msg_0.lon = 0.553988341216;
    tmp_msg_0.alt = 0.535688255166;
    tmp_msg_0.heading = 0.885058182395;
    tmp_msg_0.data.assign("XYBJFXPPMBMUQQAUDRTYSJHHKLVKKEJVQGYWZSCGORDTINZGHPSHAXRTFDFYUFQPCAJLHDUTMPGZOVGLXWXIAKOWXTUFWLGRKOUFHIOMVCWYHDKIOFQNCZELZOCBTAWKMTNGYYKEWCVSMLGBTPDOWVMNACNRHBCSEZPZRBPBQORIYNJJBESDDQXHRYNESHBCZECBVNQAXUNLVMOUDGXGMSJY");
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
    msg.setTimeStamp(0.0865158973745);
    msg.setSource(7335U);
    msg.setSourceEntity(78U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(127U);
    msg.type = 147U;
    msg.id.assign("ILHHMTWEAZUDFXZANXBTRCCPIAQGGVYPYMOWDIMANGWAGFQYAGPIXQBBKMHTDMKTKACMPJSEHCAJWHEFOBQGUPLPVCBKHXR");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 33271U;
    tmp_msg_0.lat = 0.357428676214;
    tmp_msg_0.lon = 0.772002984726;
    tmp_msg_0.z = 0.675855475754;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.speed = 0.235367051907;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.duration = 50538U;
    tmp_msg_0.radius = 0.895110348514;
    tmp_msg_0.flags = 43U;
    tmp_msg_0.custom.assign("HRBCLIZRFAPSEJIVDZGTCCHIZOIWIBDPANHVWLXXKSUXWUSWQTVBIPGGCAAJABKMJYXAFREOSVFHYQCOBBRKFWCWVBIPOCXNLLJQYKJUMDRSEWOWGPFSZ");
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
    msg.setTimeStamp(0.166540914919);
    msg.setSource(17275U);
    msg.setSourceEntity(32U);
    msg.setDestination(38061U);
    msg.setDestinationEntity(180U);
    msg.type = 207U;
    msg.id.assign("LJFANIDPNGRMHEFKXQCPTIOTOEDESJYCGRLTMNQGYAXQHYZODHPLMIVXSLSOMLODLRPNZETFKFHRTLQJCYIVEUKJIGYOVHNJUXCQSIZFRKDGDHQVMUMBWRFBFUSTZAGWXXLEUKTOHWCJ");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("EAMTIELWRFPOYFLKJZZRKPGKBGCCBXWWIMCHBYCUIFNNPDZFJQBSXDSFYJEUYWCVWLUVXWJTKIYBNOCHOSDIPYHADDKOZAZHJEBVZMUQNKWHRSGEQTHBZONARUBETHIFLIOAELFIBXYXHWSPATVQGTVCAGFVZPKSTVFDVPJNMPLHGUGOQLDQLUTDIFRMOSGKRSYYJRDAMLEUIZRYCNAJVNUZXRQPNGTCSXTKVCXXMSGKPWHEXO");
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
    msg.setTimeStamp(0.922309069806);
    msg.setSource(839U);
    msg.setSourceEntity(252U);
    msg.setDestination(35943U);
    msg.setDestinationEntity(146U);
    msg.id.assign("TVOVZZINLODOUTPCANUMKSRIZJYPDGFUPFNJHXWDBLTFMIYP");
    msg.callsign.assign("DWSRAGFFUFBUNFPBWFYMPIRQJCQXXUZNRYMYZNECCSGDDJMCIDKSQANYXLLHGMIY");
    msg.name.assign("JUDQWMNVRJCPTXDBPZNPTFUFKABZMZVNXPOAJEZIXRWVGSOCZGZKAOFMHFTDHBWRYTWNHCVEJIZQCRKJIDDKEENLRXNMCKSKBAKTRJWBZOQASTUTOCMXPPDKEMGQ");
    msg.type_and_cargo = 84U;
    msg.a = 0.435334070333;
    msg.b = 0.540537355838;
    msg.c = 0.293617136605;
    msg.d = 0.0476946778581;

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
    msg.setTimeStamp(0.831876759258);
    msg.setSource(44214U);
    msg.setSourceEntity(91U);
    msg.setDestination(12052U);
    msg.setDestinationEntity(34U);
    msg.id.assign("CDEKIUMCPBRJBVMSAKPAZMLZYAGDKNKIRGIDWSKDEZPMUIIHNRUREDNNDLUVTTGHQXJUQJIQJVMYHGOSQQSBNFEIFXYBRQYRCJVTAFVZSYOZULNAEIKFLZFTDJXPIPCRYYHFAKLSSUWKLGNWHWWOQWGTZXHNLRVLVAXPXYFTTEVAGMHCOQWXORBKNDUABFBAOLTPNCHGHEEDVQJOBOECBXYTCSLEWMZI");
    msg.callsign.assign("LRCBPMRMYFXQIQGCOIMOJODLHXXKLWHELTRBVDRGHTAVMTOQTELKSDKBSUZCHYANBAFXYNEFAZVBWTGOIIUJGOHFVBFMTYJZJKTTOVQCSBKYIARUVFGXQDBQCHANWGXHPSGXWNVYVJHJDPJZQIZBYYTSWFVWQRPAPPISIWWZCZYAFZXQNCPFZXXMKELEDPEOJOKIEMSKUJUYNGTUAGMZSNCLPRHUBPCNCILNMEKLF");
    msg.name.assign("RQJAKPFSESAQKCMONFPTJNDOSZFVHNGXALMFRTUPAJMXFTQEYDIQREMWGPFUKKWB");
    msg.type_and_cargo = 188U;
    msg.a = 0.926339867502;
    msg.b = 0.434068358371;
    msg.c = 0.706887767928;
    msg.d = 0.288327495759;

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
    msg.setTimeStamp(0.805217680895);
    msg.setSource(46074U);
    msg.setSourceEntity(115U);
    msg.setDestination(50669U);
    msg.setDestinationEntity(227U);
    msg.id.assign("LSQKZFJGDPRDFVNQRWBPAPSOVEARWQLLUHABLBKONHUHCVDYIYKGJETSAYCYDMYNZEGJCPQLEDMBJCPPGAJHSXRBDVB");
    msg.callsign.assign("NSUYSCBPUQXEYTRWGMVPFVRFGZHGKCBKFJICRVMOEHAHUHIAQOXYTUURFXZOYNMLWRAMZCGKBNYLTDEPDAXOJUOH");
    msg.name.assign("ZDSBIGMWDYALSUTOYOZVSRLAZJYHRDRQHFKJVLLNTPDPLZRRPMNATFBWSEJSJGMHJALTPSIABXHEXQMNTCVJFGICKVOKCUSJZLQMIKAATIWURZMGVCGCSIXWQYPKXGLGHEHEKUDKQPURQZEPD");
    msg.type_and_cargo = 251U;
    msg.a = 0.256993642486;
    msg.b = 0.394799306445;
    msg.c = 0.796556373546;
    msg.d = 0.378698171305;

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
    msg.setTimeStamp(0.485879633423);
    msg.setSource(6912U);
    msg.setSourceEntity(1U);
    msg.setDestination(27530U);
    msg.setDestinationEntity(129U);
    msg.localname.assign("BHFYHLUXOSZERJESVFGXQVGTPHZGWTUQMVSPKJPJGNPSTXICRQSJEGWVKWDILBPUECECWCVGIZTOFAENOYDNYNR");

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
    msg.setTimeStamp(0.873149179886);
    msg.setSource(47232U);
    msg.setSourceEntity(31U);
    msg.setDestination(9968U);
    msg.setDestinationEntity(126U);
    msg.localname.assign("SNSHTFPSVURNLRGABPHYHRLAIREKNXOBLVOGNSWFWMKVSKADYUYPIZFTLAWDTWXGLSCRFHQFEPJBBIKQLTYTZWHVTNMPJQMXYQUIOKBPCGCVAIZKWCDJIAJSGJYHJSRZZHJWTTYDEAVFOAEQQYGUZCIDHOGFXODQGECI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DWFYSTEJFFLXDUFACOREZJCVGVUWRSYSZQYRNKPEVVBDAYAFIZPS");
    tmp_msg_0.sys_type = 144U;
    tmp_msg_0.owner = 60897U;
    tmp_msg_0.lat = 0.3454112614;
    tmp_msg_0.lon = 0.361606480801;
    tmp_msg_0.height = 0.571481098524;
    tmp_msg_0.services.assign("UORKCBFJZPHQICAMWROPULUBIKDQGZKTNPFDZFRFABHJWXVBACYGXUL");
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
    msg.setTimeStamp(0.844328657255);
    msg.setSource(59141U);
    msg.setSourceEntity(101U);
    msg.setDestination(56831U);
    msg.setDestinationEntity(164U);
    msg.localname.assign("JWNFCQORDWXKQWSGPJFUKZIQNDYCIQJGPUEKQSHLBBKLDJVFXWCEIZHSISRDTDQPNLYEDZLEOMBAIEGXUHFAOYFURRUIJVSJYURAOTNBIYPLXAZNXMLADCMGXZGITROVNUFGETZABMBMBVLIJOFXPQUCYMFIEKDHPUMYDFHZYMMGEOWTKZTNAJZRRKOTAPQOXRCYHWAVKELKBVVKATENGVSHGWOPBCJWMHZTCLQTCXSPJNGHBWQCHLXVU");

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
    msg.setTimeStamp(0.58546416492);
    msg.setSource(5283U);
    msg.setSourceEntity(59U);
    msg.setDestination(19058U);
    msg.setDestinationEntity(211U);
    msg.timeline.assign("YEJIDNAGNJKCGMWLATZTHXGNJIOWVKUOGZBFOYVMSZCEMUPMZOEHXGMDBLISFUVUUBWARBIPITKOOPAHDGYWTAFKHEDMRWDQEVRKTKYNLHUXUNAQYCNAPPCHWPYCDXWBEUZFRTSQEVHLQFXKTELOQRBBFVZMPOGZSNIMTDZZGTHWSLWRFUKODJEPJLBXGW");
    msg.predicate.assign("YCMNZKQHRZSYKAKKHVWYJVODEDLITTMINZYVTHXYMVBCFTNWFYXYUTAVMHAUTETBXRJOFNOUALFDISLBSONTYBLHTVFBSOLOEPBXKNUSNQWCEZZ");
    msg.attributes.assign("UJRAVDFJZOOUPZWRCWBKEBLEWFHDMKKNPEHRCRYUGKRXMCQPFPHUWUWASEZYNAMXKNMPIWEUOIULFNRSJTFEVPNEJKXGQJVMASDBJDQVRNYBQCOIIAFYXPZXSQLGTQZQYQMZIGTODNHVILUHBAFRVKZNZABDTMNVVXLIXTCDOTLQTHCJVMMABOJUMSHTEIGVILYSSYWYSOECKSBLGLYOFJQYPDXTBDZZSCPWCGIC");

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
    msg.setTimeStamp(0.581799006387);
    msg.setSource(25826U);
    msg.setSourceEntity(104U);
    msg.setDestination(3133U);
    msg.setDestinationEntity(41U);
    msg.timeline.assign("IGQDBJGNCCYFHEADPSMUBGAESGOHKEJTVJYZJYFZCOQYTAWTUIVZJMAZSHEASZVVKPSENOFPKUJSKRBHGWUEKWNXIHHIQLPCSXMDIVRINJUPNCXGVQDLXQNQOADBRMYWWOTDFXNYJAULBWUYMLGFTRYOICBLPVXRSXKJGVRZMZCOVIVMWNFYRQUQNRKTEEPEKGEBBBYPTPZR");
    msg.predicate.assign("CPVOVLERLDTBNMHZZCKWQYNZBRHWVKPOTFJFSYDUTNKTJFHSLIWPO");
    msg.attributes.assign("YSQNHEKGZQFWWGORWLTJNFNIUOBRLGTCXHFQITNFCQJGQGSPHXBMJCHRNUNLVPUTOFHVSVISMITLAODEBELCJKYDSTBEUUSQSKVOILMWEXTOGUJOANNZIDAOKVKJRKYEPEDQWGRYHGYPSPRGLMPLUHAUXRAHBZCTVCEZY");

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
    msg.setTimeStamp(0.255397675924);
    msg.setSource(47487U);
    msg.setSourceEntity(253U);
    msg.setDestination(22057U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("GSQIGGRAQIHEMVJSFBAKQUCPGNQMZIDVBPKKEHPCHODFRDVNHHTELKCTXSEZIDSMDOYVTCOTLGEFSYLYPDMKZFNBNMHPBUMWICKBZVKYJUGXVWBZJFJSCQQXHKLTCLHQTPUWRNKOODRVEXJGIRRSMFBFUDXIYOYWENXXARHNIUJWBBPSFQOLOUTXMLZEFWYLADTMYOZCASALVJUYQOQAXPRUYICUDWRCE");
    msg.predicate.assign("YFZTAWURCGMTTBOIHNFEVEIALGFBQRXEWVKRVOQCVKMUIP");
    msg.attributes.assign("HJJSNLLRUNWVWPUEAHDOUHTQCMHUYDFDI");

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
    msg.setTimeStamp(0.358168105541);
    msg.setSource(28571U);
    msg.setSourceEntity(249U);
    msg.setDestination(37632U);
    msg.setDestinationEntity(73U);
    msg.command = 202U;
    msg.goal_id.assign("YSOBEWOBTTIYWISPKODLPOFPMHFIVANVAZHKYGNRCMWPUPKSBRSXDRSHP");
    msg.goal_xml.assign("JLMMHIZAZWXGPWVLGSZLNYOJQISNZYOHYNIAYKTSMVEFMFDBLBIVVNEFUSJQKKYASUEBDFHSCTRUGKQKZJLNPAEZRDMKTEBDAJRHGCRWLXLIINAQSJPNKPSDBTPCHTDXHWGMKCJULBWUAVJRQTIICYPDCJOWZYVQFRNXAEGMZOLHTXBWOVK");

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
    msg.setTimeStamp(0.801433075298);
    msg.setSource(64261U);
    msg.setSourceEntity(83U);
    msg.setDestination(25598U);
    msg.setDestinationEntity(142U);
    msg.command = 153U;
    msg.goal_id.assign("CDTWMFPCOMMTSXSSQBQIQUCNYAWWQDJFWUYFUBBWEXEUEEICCVPVHQWZPSKVZXGFEJOKJRKMDLOALYXHGOAPIELYBSAHQHQJFLYCYQRNVAKBIQTZKPXLNKEBOTJFZPAZXADPMSOGBKXDGLJNGEJRPSVVRRLGXNHGVNMTNC");
    msg.goal_xml.assign("ECQSDUDIFNUINRKJYWUIMZVJMDEKBKPYRXITVZWGOLWLOVDRXPPBMVHSRLVTAYIDWSECSKYBZMGQJXOTQYCFFOETAALUYFCIQMWQ");

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
    msg.setTimeStamp(0.529852280112);
    msg.setSource(43389U);
    msg.setSourceEntity(216U);
    msg.setDestination(43059U);
    msg.setDestinationEntity(19U);
    msg.command = 66U;
    msg.goal_id.assign("MMVYQCSABZWMCRZCMJNEIHVGGPWLGUITKGSYHGEEHMEFQRBUKZUNTJSYHXQBGFOMLUBJWPBDOXAPIDPWRFOPEBHUOVTBRZNAAKPYVWINTIJLEWCZVECTJTAYHFCUWZDSKJPXOXOJAADSCETAHNEDFIDMABCGXLNNRJCYRUQNFZKOFQCFHWWKTGYPJRKMFLVLUUDMYSQTMHLGWUSOBRSBXHSVQRZVQQTGLDIX");
    msg.goal_xml.assign("FVEJODZEARTROVYVALJWCKTEIWXSICGNPCZAFWJUQSSAPWZMWSFSUXBLUNOAVZUVZBOYZFCJLCLSUBZRGTHLMUGQXEMZKDDEKPIGVQMYXJDLQAKHEDRGUCKYTEPJBXNGQBNUBSXYKDIJJPSXHEQCGFMHPJZHRTGQJWIPXONSRXTDFIOLMGRWOOABAILLXYFKYRAMNTZBKPWNDKITHRFLTFEOMQUWBMPC");

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
    msg.setTimeStamp(0.248115110538);
    msg.setSource(28818U);
    msg.setSourceEntity(95U);
    msg.setDestination(22817U);
    msg.setDestinationEntity(17U);
    msg.op = 96U;
    msg.goal_id.assign("TACDLEJMTLQJZIHBHUTXZHFDHSOVNMKPPRJVNAKBIWILZGJEPMYPSDJFCQIUOXTFIHSZJVGGKNBUBGTBBXPDKVWJKSASSQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TCFEJTHDUMRMSRIQQEBVGFSXDCMFRJOJIOYBSKEPACGXNNFIIBZCJWFDRTRPSBSMBFPHPMQEDBTHULPACOVJXVYSGYKHSALRGZHZLUIYLOXFOEARXNKCOGMDWDPAGUEDBWQHRW");
    tmp_msg_0.predicate.assign("EPOAWSSDJBCCQRZMBKINMSAEJPZJKBWSDFXCWQXXGCAXUIRKGUUTOWYJWMOKHKSFEPPRKORXSNOUNIQYIHVSFTZVVYGRHZUWAEJBWCM");
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
    msg.setTimeStamp(0.676175269918);
    msg.setSource(19859U);
    msg.setSourceEntity(22U);
    msg.setDestination(54250U);
    msg.setDestinationEntity(60U);
    msg.op = 99U;
    msg.goal_id.assign("NWEQBTLSLMIMIJACTUXCBYFBEUKXSAKDZTBPMJLWPFGBFLJXFIUSPYPXKWINHOHOXVUTOPAWTCQAGCYRWPRJKVCAHZMHFXBCNDWDZOAZSCLDDWBRPTQAFZRECDOLGMWOYSDLXGMFLIHHKKSSOSJNLTPOCEEEQGGJKUVFJAQJRGQAQRDUJYKIRZRVFUTKQYZXOGKQYEUENBGSVVC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HNSURIXJBGRSULQZEHFTYHVYPZRCFLRMBOBALVWIXKKEPDNINYYBWACJA");
    tmp_msg_0.predicate.assign("PDZWYHKHITSTSBDGCPMIYHGQOEUYKRLGMFNUD");
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
    msg.setTimeStamp(0.646890782594);
    msg.setSource(31826U);
    msg.setSourceEntity(2U);
    msg.setDestination(38490U);
    msg.setDestinationEntity(146U);
    msg.op = 124U;
    msg.goal_id.assign("UOKUNGNTIYAWSZSLFFGPZYUEUKGQTJOPAQFFJEBDAEVULJHZZAEABURXOKOWIRBWXHRSUVWALUIKRVHLOGSCIHHOWGDXCIQJKVNTFCWRYMZKMIVMHNDSPSVJMEYXWJFAGTQE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SMPXAEEVQLDAWAPXYKGXTRNLIFIFKIBVHPFKQEOKDXUBCSMJJCRNMMJUVLBMCTPVJRUWYMUEFAWRHDUBAQQRCHEYBGYYDTNXSRHBTKYAQDSGSCMPMKGQHTBKSKLGLTFIVZLCLRQOZC");
    tmp_msg_0.predicate.assign("AKGUBUKLVAJPYFZYGYARNDEWLUMQIRPNLHGSCUTMWFJOWHFIZIYFWIRVEEMSEBHAXQSEUZTHGLDQDVVHZFXWLBQCRXTZMYJHUYGEZAKOUQQLSGIGIHJGPRJKDBPDGPLWRHC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PYKWDIUNXNKPATLHARUBZTGCXQFGTUAQBYFCJOOBAGCBYMSRMOPOHBGYZKSCRKLAESPPCGEKBXPFATDBXLQVDVQSVLFVMTIEAUWEVQTECQYTHQVWEXCNSBZLCRLZDRVSIONLESIUKYQJSITSGYHHOWGHXXTDMZRITQZPMZROZNYVOLUWAQJAIKEUWDPZRDMVUGFNEJJYNMRFJFBWXXRCXKNILAFMPK");
    tmp_tmp_msg_0_0.attr_type = 166U;
    tmp_tmp_msg_0_0.min.assign("HRVCPPJZJSMPLNQXTWKKNNNFUWBDXUYLCLJLLACUJPLOFC");
    tmp_tmp_msg_0_0.max.assign("PWVJAWLRDOGABHJERPBVSJXTUAZHGZDYVRNONCF");
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
    msg.setTimeStamp(0.984040183);
    msg.setSource(36090U);
    msg.setSourceEntity(6U);
    msg.setDestination(23757U);
    msg.setDestinationEntity(132U);
    msg.name.assign("HHVXCDFNOJNLUOAYNWWTLEYZCZDJRPREAIIQSXSLLAPOPEWQHATSZTNKVLGBIBGQIYFGZPUWUWFQEJZRUSRERSICKHXTBHCFRKGZSJKCCFUFWBMGVXAGTLGITWDFVBYOGNZXNVNMEWHWIGKBUKJDYVBMQZCTYQPJRIMMYCZPAKOSPCJKHYNSAPUAQOXQOONIEJKAQBYVXUTAVOMPIXHWCLYSRHDGUMBSULLNJOJMRDF");
    msg.attr_type = 88U;
    msg.min.assign("GRIKTTNNYKPHGKYMITVTAWXAMUSCKNLXJVMFYUXHMDHQICGSTLHVHFBKQFEBPWESOPMSIOOJGZHJHKVCYYJRSOQDAEKDNBEJBWGNEGICOBLAGFAAQZXYZQWIKODJVEYE");
    msg.max.assign("RRDJETQCAZJSNCDIJJTFTQKBAISUDXVBYFPZZFWWGSQLSYHHPBZWKIZFYDBLLVOVWRWFKLIFMFLMMHDXNGORQQOPXITGKGUDSVUVHHMFTONNMZDYIEWQYKKODAUIXUTVEWAEMNYEZLAMEPPEQSMVHAUTWGAGQZVRTGCWBJKPKJVPPOFRUSHBVLNLATGAO");

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
    msg.setTimeStamp(0.491199793852);
    msg.setSource(4897U);
    msg.setSourceEntity(99U);
    msg.setDestination(45232U);
    msg.setDestinationEntity(66U);
    msg.name.assign("LJCXFWVGMPOBLIPCZLHIQUFHUYIOQUVNAMRXTHXNDATREUAYHURUGFQIBCCXXWMBOHQMZAMBBQZMKZOAJEOWFMNTATEZPFFQGSJVMLQYSDKFDCKSXDVEGTVIUXTPKWEJTBDITRJGLWPOARKVSAPQDSNZJQYBJCNCNDLXRIZXJPCWJSEYATGPAMOFLREGSSVDTYEQPLIYRZKEORUGMHBJBVWFNWFY");
    msg.attr_type = 155U;
    msg.min.assign("EBNZGXUHTPTUYZLEACXTYVQPIBORMDUWIFNMYRSGFFZGSCAKXJPDSRJNHNICKRHMTHIVEPHWXFTONOWGOQMQDVNVDWVAWVMDKBGAGEHKTLCKALEELDBCRZGCK");
    msg.max.assign("GMJEONHIYSCDATOZDTEEXUURWXQDZPNMHQWTYKIBPNZVHRZCHOAJGWBWOGBASEFSLPSULNLKMVGXUHORQUCKSUUDHJZVVAINFXJANHOGJUGUEIDHEMGPLMOZFSTLWIBFGKANTBYDELDFYZIXMLPRGHHTPONFYYQPVXTUDBVCDZCLQWERVKBCJMKQIRZVBTJJARRJZFPQLPQQWKFMFVEKBWCYXXXISNGCASWOTFWLIKAMOYBRK");

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
    msg.setTimeStamp(0.688171984695);
    msg.setSource(30563U);
    msg.setSourceEntity(242U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(17U);
    msg.name.assign("HMHYNOGHKKFQSYYFXHKTBVIXAMJQAOIZCJTWRKWVPIDVDHBOEZUJGDMKGXJQPLEBMYEEDWKFCOFVTVYNXPJFPPWMR");
    msg.attr_type = 100U;
    msg.min.assign("TCVFOJSHVTVFAZNODTIRATBCSWBODCLMOQTMYYORLGAFZDAWPORIAQUKEGQNGCRNU");
    msg.max.assign("QLTVNJTSFDUEEJVKMAVXJFKCQDXFZVOKVCOSBPWMRQXMILCLKZMKVMG");

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
    msg.setTimeStamp(0.638567917981);
    msg.setSource(55760U);
    msg.setSourceEntity(143U);
    msg.setDestination(37242U);
    msg.setDestinationEntity(238U);
    msg.timeline.assign("WRRYHVFQUEYNOWLFLIRJHSIGWNZRCSQNLZALXIUXRAPWOEIMJMKYDUYGYBURUPZJDLDGIUFHOHEFPQZBMGJIPTPVCNEDQOVXNIOIXBCVXNKVGXTAPXOGSHJUNFSSMMFICVPGYZADDKITTKJSDWHAKLAYTWHPMZRAHWTTW");
    msg.predicate.assign("LJDFFOYENSTALKMLD");

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
    msg.setTimeStamp(0.5554621892);
    msg.setSource(10247U);
    msg.setSourceEntity(194U);
    msg.setDestination(25019U);
    msg.setDestinationEntity(13U);
    msg.timeline.assign("UIDHTCQLAAPOMUVPBFZEHNUJEHASKWJGNIWRHVFVXDUYIKTXINLQSTNQTOCBUXAHVTZROAVYYPPMDRMOZMZISFLDAFMLXBCLUNBWVDQGJQACGKXMQKRBFXRZSEONZJGFTNCHUWSLHQPPMGSC");
    msg.predicate.assign("KDLXQLCIULHFQWLAEFYADZGZEPRPLPVJPERLZNWTZO");

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
    msg.setTimeStamp(0.51335416926);
    msg.setSource(57782U);
    msg.setSourceEntity(78U);
    msg.setDestination(11480U);
    msg.setDestinationEntity(239U);
    msg.timeline.assign("GIUCLJENQJKRSFWRHLWDIJVSSDUOKONHOXZQGBXJWZWBPHORVAGQSDGEFDPYDZEYONXTTVWLBRYACEKHLLFMIRBWCPFUJNTJPABEUQLWEOVKXTKBIDMRMRZFDTTCOGYAUXYXIMOYFVTXWNVHAIZCOMLZIVRIDCBQKULTPAMSPEHIMYGFHMFDJSLRZVCTJANAYVPMTAYQQNJNXSWHIGMPHEBQBFJSAUSKPEXQEGZCXZCDVYGCNHFULUQGKWKZN");
    msg.predicate.assign("XKJNPSYOPXJBXWABQGKFTSFLFVMKZBQHMKXHEHSLXHHJVRJZPBUGFCHUQEOGGIZUEGDXBZ");

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
    msg.setTimeStamp(0.441062142228);
    msg.setSource(13665U);
    msg.setSourceEntity(215U);
    msg.setDestination(15965U);
    msg.setDestinationEntity(71U);
    msg.reactor.assign("KBLDNJEKSFNXWQTPCWQHLLCCRSKVMGESEHWFXDYVGXHMTPGDXMVCJDYZBPHHZPFLKZSTOKDJREUDQAIHFIPGUCILWOYFEMKLEOOOJGRGMACCNMIFT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VVXEUYGOZFSQFSGDEBGWTUFBCVCZYUEKILBWAYMAYDZGLRQPCWCQZRKMNMJAJTSWHUXTJOPAXNJANSQIBYUEASDEMNFDKOXSQKFRHOKUDGWBRUGPLJZGRLNOGXVXIONZHCISORITZYTKZDMRITBYNFNJWDLVYLTTX");
    tmp_msg_0.predicate.assign("VRVDLKSGEORJKJPBBNMVZDCZVSUNCOPZUVBBVMGLUKIHMQMBDNEZXETXXLMTESPSLEROULHGTGEEVNXCCFXVXJXTMZVFCARMFHBGVYHQUWHGSXNRZIKQYA");
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
    msg.setTimeStamp(0.155681271522);
    msg.setSource(51302U);
    msg.setSourceEntity(141U);
    msg.setDestination(3359U);
    msg.setDestinationEntity(23U);
    msg.reactor.assign("HTUSJIMERLHNAWFRYRQTMURVOFWFZ");

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
    msg.setTimeStamp(0.183239625732);
    msg.setSource(7894U);
    msg.setSourceEntity(73U);
    msg.setDestination(41367U);
    msg.setDestinationEntity(128U);
    msg.reactor.assign("BMZLYNNIATUTQWJAJZNAHQRTSPKDFSLTULJPHPPJSCKEDYFVZKKKOACDBGPWXCHXLXJHBITASACJTVSBAGOEWGYCKSBINIODACNRYQAMMFDQEEFBBQBXU");

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
    msg.setTimeStamp(0.130542763778);
    msg.setSource(60309U);
    msg.setSourceEntity(195U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(118U);
    msg.topic.assign("RTKAXIWZBXIXVILDPABSHEYUGHCDGJCKOVMOPWULWACBUWECQKLGONOJULLLQZKTGEKRLMEJIIHFEGYGQAVZVRUYEYZPXWSNCCSYBEHAFWAESBTBRNJDAJTIP");
    msg.data.assign("AHBCAOLCAVGHJMEFDSQNGUQFBOGSNWMKKFNGRDJQNVOIGPPCXSVAIXWUUGDGNRWKJMCBZBRYZRBLLHYLTFNJAFSCVNLHTMIOEIEVTWCPHRUXNZVYWKWYJJERWNRYAHKXDMTGDPLTUEFSWVDCLZGBMHXZJAWDZMMSQTIVEKFYUPUQPZTTPSCJEMKEBZIVPXOTTUKEYJKQPGDQCFBMSQBQUHOSWLPNZJKFDICIDOIFOAVYXXAUYSOZEHAXORBR");

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
    msg.setTimeStamp(0.554616763728);
    msg.setSource(47631U);
    msg.setSourceEntity(170U);
    msg.setDestination(12263U);
    msg.setDestinationEntity(170U);
    msg.topic.assign("DINKKQWNZCYMGQLANHATFOJUVNIWOYBIREDJWKVZNBFGVWSVPJGUVVZRSREHOGCLCZPSRRGGSKJJAXHDFYZFEZLSPOCQBDIMKKSRZIQMBYGHXMOXJQCXGIPTTVVPEOVWXWHNDRPTZTOFMOCFBTQEN");
    msg.data.assign("QCINGEGFIRKCVPIEZXPKTASKUZBBUIRKPEHHUEZGNJTSQKXRXQVNRWAAZJXONWBVBZTCRZXVHHLTMAVGRFLEBQ");

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
    msg.setTimeStamp(0.634153815659);
    msg.setSource(1662U);
    msg.setSourceEntity(78U);
    msg.setDestination(40086U);
    msg.setDestinationEntity(100U);
    msg.topic.assign("DJULCBKILLZODYIABEWHCIXAKQZQMPJOCAOLTGZUSOGVPRVEWBGITYNQFZRKERQJRFFUMNRVIPLCBAWSMSVZNRUHDHIZNLUDKKDHDFSIXCVNHTDXBFFW");
    msg.data.assign("FSFCVORYLMBVCBZGXRAGBHJTYSWKMBKRQYSLUGNYHOHXDDBJSXJCQSTYALFOTOONTBWOTOTZFRIAQPZFMKGPZIPKIBAUWJVEIUJNQWYPQEYIUJLMLKTELDHRKSUEIJCKFJV");

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
    msg.setTimeStamp(0.854219392455);
    msg.setSource(7754U);
    msg.setSourceEntity(200U);
    msg.setDestination(31062U);
    msg.setDestinationEntity(190U);
    msg.frameid = 13U;
    const char tmp_msg_0[] = {-107, 113, -96, 69, 85, 73, 44, 61, 77, 53, 78, -58, 42, -46, 62, -23, 3, 49, 96, -117, 72, -112, -16, -10, 26, 92, 46, 37, -101, -90, 20, -81, 82, 110, 45, -98, 22, 0, 21, -100, -15, 44, -31, 115, 18, 39, 97, -95, -50, -89, 50, 7, 53, -27, 107, 120, -79, 121, 1, -6, -59, -29, 102, 124, 96, -98, -120, -91, -86, -99, 30, 6, 90, 30, 114, -71, -67, -39, 109, -63, 39, -58, -33, -36, -35, 24, -112, 34, -5, -44, 16, -83, -112, 11, 112, -41, -61, 79, -2, -120, -45, -102, 106, 107, 13, -118, 75, -32, -45, 92, -82, -42, 12, -44, -28, -89, 2, 63, 69, 38, 18, 53, 95, -6, 24, -104, 8, -97, -24, 31, -127, 47, -64, -121, 67, -35, 124, -119, -119, -7, 110, 72, 22, 83, -58, 119, 74, -88, -82, -114, 66, -60, 55, 95, 39, 55, -47, 2, 43, -48, 121, -73, 79, 52, 55, 38};
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
    msg.setTimeStamp(0.188385233587);
    msg.setSource(29646U);
    msg.setSourceEntity(95U);
    msg.setDestination(9139U);
    msg.setDestinationEntity(184U);
    msg.frameid = 96U;
    const char tmp_msg_0[] = {85, 99, -86, 0, -46, -128, 100, 18, -74, -32, 11, -20, -87, 47, -4, 78, 99, -51, -84, 83, -33, -27, 1, 77, -48, -55, 65, 25, -49, -47, -47, -106, -18, 95, 57, 89, 62, 110, -123, 29, 121, 63, 118, 14, -76, -72, 83, -118, -25, 46, 92, 86, 119, 79, 120, 53, -59, 37, 99, 33, -18, -40, 25, 31, -59, -54, 110, -39, 109, 96, 78, 56, 13, 111, -108, 63, -92, -107, 55, -34, 121, 94, -3, -70, 113, 35, -117, 59, 123, 28, -16, 92, 27, -63, -63, 56, -89, -64, -125, -22, 107, -96, 76, -27, 58, 54, -25, -35, 12, 107, -76, -2, -15, 99, 118, 21, -119, -1, -76, 86, 57, 81, -78, 47, 15, -17, -93, 17, -93, -55, -115, -65, -74, -48, 31, 71, -74, 122, 118, -107, -110, 93, 89, 13, -73, 119, 7, 94, 99, -115, 86, 35, 47, 91, -85, -104, 25, -114, 107, 26, -45, -76, -83, 0, -96, 101, -80, 64, -80, 38, -38, 98, -53, 9, 86, -24, 0, -45, -13, 36, 110, -86, -35, -27, -120, 2, -48, -119, -88, 57, 98, -4, 0, 74, -34, 82, -32, -115, -35, -66, -13, 94, -64, -33, 104, -13, 15, -50, -65, -100, 75, 24, -104, 62, -122, -105, 17, -18, 108, 77, 6, 95, 62, 102, 55, 0, -45, 28, 44, -115, -3, -16, 23, 38, 7, 30, 119, 32, 97, 38, 5, -8, 48, -63, -37, -1, 14};
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
    msg.setTimeStamp(0.737603461724);
    msg.setSource(58023U);
    msg.setSourceEntity(96U);
    msg.setDestination(41371U);
    msg.setDestinationEntity(171U);
    msg.frameid = 53U;
    const char tmp_msg_0[] = {-6, -71, 66, 6, 75, -77, -69, -81, -58, 22, -22, -118, -37, -124, 123, -29, 102, -37, -119, -107, -28, -83, -115, -74, -51, 110, -26, 79, 14, -11, 11, -31, 55, -72, 109, -120, 73, -104, -33, -20, 7, -99, -103, 110, 77, -48, -74, -119, 79, -59, 110, -102, 37, -97, -4, -10, 45, 54, 3, 96, 105, -8, 93, -104, -116, -93, 38, -7, 68, 79, 113, 31, 56, -104, -93, -111, -93, 12, -74, 10, 40, 21, 66, 46, 38, -122, -15, -90, 54, -42, 97, 11, -128, 113, 116, 50, -29, -93};
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
    msg.setTimeStamp(0.738270419331);
    msg.setSource(36357U);
    msg.setSourceEntity(145U);
    msg.setDestination(31461U);
    msg.setDestinationEntity(196U);
    msg.fps = 52U;
    msg.quality = 171U;
    msg.reps = 144U;
    msg.tsize = 170U;

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
    msg.setTimeStamp(0.664828632462);
    msg.setSource(43349U);
    msg.setSourceEntity(57U);
    msg.setDestination(59986U);
    msg.setDestinationEntity(75U);
    msg.fps = 49U;
    msg.quality = 82U;
    msg.reps = 14U;
    msg.tsize = 163U;

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
    msg.setTimeStamp(0.217015246806);
    msg.setSource(802U);
    msg.setSourceEntity(68U);
    msg.setDestination(5050U);
    msg.setDestinationEntity(200U);
    msg.fps = 95U;
    msg.quality = 36U;
    msg.reps = 12U;
    msg.tsize = 186U;

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
    msg.setTimeStamp(0.471581190475);
    msg.setSource(4697U);
    msg.setSourceEntity(92U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.982101674838;
    msg.lon = 0.227898897884;
    msg.depth = 207U;
    msg.speed = 0.10957153894;
    msg.psi = 0.655432833688;

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
    msg.setTimeStamp(0.595063645644);
    msg.setSource(62086U);
    msg.setSourceEntity(233U);
    msg.setDestination(59360U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.880767034908;
    msg.lon = 0.241211402096;
    msg.depth = 149U;
    msg.speed = 0.192312984176;
    msg.psi = 0.157865739785;

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
    msg.setTimeStamp(0.191303157593);
    msg.setSource(1901U);
    msg.setSourceEntity(222U);
    msg.setDestination(25718U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.885811166837;
    msg.lon = 0.187573522298;
    msg.depth = 123U;
    msg.speed = 0.368945107015;
    msg.psi = 0.159273030243;

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
    msg.setTimeStamp(0.16197761058);
    msg.setSource(61287U);
    msg.setSourceEntity(113U);
    msg.setDestination(59308U);
    msg.setDestinationEntity(60U);
    msg.label.assign("ZWZMGMWRGIUZJTTDY");
    msg.lat = 0.605428064962;
    msg.lon = 0.556657437928;
    msg.z = 0.64062051007;
    msg.z_units = 191U;
    msg.cog = 0.757255015726;
    msg.sog = 0.869709894353;

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
    msg.setTimeStamp(0.46752222135);
    msg.setSource(53977U);
    msg.setSourceEntity(188U);
    msg.setDestination(46840U);
    msg.setDestinationEntity(90U);
    msg.label.assign("NJYGUETEEXSRSRHYNEKVHOIGVNSAALXBOCCAPDRSDJJIVUXSKQ");
    msg.lat = 0.299383028296;
    msg.lon = 0.173150291935;
    msg.z = 0.970275600525;
    msg.z_units = 159U;
    msg.cog = 0.181082941641;
    msg.sog = 0.467017323936;

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
    msg.setTimeStamp(0.481547292214);
    msg.setSource(13136U);
    msg.setSourceEntity(254U);
    msg.setDestination(19214U);
    msg.setDestinationEntity(47U);
    msg.label.assign("GBUDHBWLIUTTKEHHWRSAKPYTRDVXNXXNLFULXADXJMEVCNPMVNQEIURPUBDRRJWMJNZTH");
    msg.lat = 0.98678145136;
    msg.lon = 0.320004882093;
    msg.z = 0.731973790878;
    msg.z_units = 213U;
    msg.cog = 0.273655586542;
    msg.sog = 0.982490047444;

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
    msg.setTimeStamp(0.949548296917);
    msg.setSource(13117U);
    msg.setSourceEntity(181U);
    msg.setDestination(45417U);
    msg.setDestinationEntity(55U);
    msg.name.assign("ISCSOIPBOJXGERXVLRRXGTLQPIUZBSDSWKQLQEWNLUVKZGBMMODOHXIEECHFLQNSBGGRSWUXFTMAVJQFMVYCUMTODP");
    msg.value.assign("RNYIAJGZYZVTHUOBNZJFTJFNUXXVBZXHNXPJYIDGVHQMCTMRFZVSQPQTLWRFFSHSQDSEJVCQKFTHCZHCWHVWTDLYUWBOCKCYMNXGHHOSZLTRROJCWVOAQSLOLKOWXRWJQPCZBOYEGDBSGFFDTSEDDNNMNGUDGPMXKIKUQRWNCAPMAFLTREGUKUS");

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
    msg.setTimeStamp(0.733831813641);
    msg.setSource(51097U);
    msg.setSourceEntity(246U);
    msg.setDestination(50801U);
    msg.setDestinationEntity(95U);
    msg.name.assign("AEASXMTZWVQJGRXSINXSBQAAVLMFJCNZLWPVIYRKBHUJWMNCLTEEHCXIRURXWTSYOHUOUICNZQNSKTULIHZJPLZMKGJURUZEAHDVHTZMPRBGRADCW");
    msg.value.assign("TEIDXNBEDFPCBEHMDUNQBGPYTHAGULRQIYUSNVBLONSBBSCBUOGKYRTAFDZFTMXOCJAZUJJOGNIIQQQXJHBGJYLJOBQYRADWAVVWMDKZKVNVSCSMPYWCHIVMLZNWJTGWUSUAHFVPI");

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
    msg.setTimeStamp(0.139904989826);
    msg.setSource(41433U);
    msg.setSourceEntity(238U);
    msg.setDestination(34614U);
    msg.setDestinationEntity(77U);
    msg.name.assign("MHHLDRDPNVZVPAMBIJTHGXPIMONLHPQDMXWAHUDDFPAUKLLRXPJYESMQONGQUTBTTTFHVWWCNECSSKIWGWVBOAIFHCGAMEQQTHUUWCQSJNPIDDMMCGYKLKEXETGURZGXFJRIVFZNSFCEWHUXXIIZKXVJKGAPLEDKZVRYXRKZCQYBFWIBERSAHTOQRLTUYSBEVSFBFNBJOJNGPSYGKZOJOZRBVLLAQXJRQSJVWKA");
    msg.value.assign("BJAMAYYJVROTJVQNDWFBWSNJCSAZLSEEPVUCEMSDHIQFRHXJSKWKIFJLSXHZWOTQCXCYWKNKGJONXKJAH");

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
    msg.setTimeStamp(0.074636593389);
    msg.setSource(39263U);
    msg.setSourceEntity(178U);
    msg.setDestination(64781U);
    msg.setDestinationEntity(68U);
    msg.name.assign("PPHDLDPXYJVABIAHTDZFIZFXCOFGHLUXCOSVRPTSWIWPYOKVWJEGIQZQNYOWXSUFNFBTQVKKCCTNYCTFZJNSUAZEJIQSJTGXZGKKKFZKROMREGMYGWQRRUXFWGELENBCMYITHLHHPKAUCOJRGBMYQWMVCIDJZBANQOPLLEABRRAFUXHJSMIWUOLVX");

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
    msg.setTimeStamp(0.617543174368);
    msg.setSource(15198U);
    msg.setSourceEntity(9U);
    msg.setDestination(26148U);
    msg.setDestinationEntity(192U);
    msg.name.assign("BACEMCNDPNTASEINSNAWHGZCMTBICOMPXFZGUFHXFRXFUTWPVWXOITZJDBUMVODOFLARUJQJZWIAGDANZSFOSXKSFWHKNLWBWYFCXHF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HPNSVWOPVPIFUEPIGTDGYCWWJSWXMLFVJIJTIANSCEOPWFYDPGRTVUHKLNYBNYKGRQJCHDNGAPKDUTYBEQLPRGFIKPZOOCEYWLIDHTEYYNZMGRUFTFBLQAKFUMBVJQLHHOXDVIBZQKAGBNLURCLAJYKUSMJQXKTRLMXG");
    tmp_msg_0.value.assign("AWAIWYKQXEYGVEBHFEOTTDCPSTGNZQRVLMYODZSADLGLGSUKTLSENDEXGYIEHXXAIQBJMPOJXRVJPULC");
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
    msg.setTimeStamp(0.388409510571);
    msg.setSource(48220U);
    msg.setSourceEntity(132U);
    msg.setDestination(15444U);
    msg.setDestinationEntity(139U);
    msg.name.assign("FTXCXWPVLJUYXHISMRWLUODAAIYLWTHTOCPNJWOQINCJFVCEZNFHBKNKQQAHBURED");

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
    msg.setTimeStamp(0.054144319138);
    msg.setSource(48905U);
    msg.setSourceEntity(129U);
    msg.setDestination(40956U);
    msg.setDestinationEntity(172U);
    msg.name.assign("VJNZFZNJJKEXBKWMXEKHWMVSITMEKKNQELITUZCILIYRMBBJYCHDGUBDBJEHXBLXLMDIZPALNDORSJDDTAACQSNDPVRNXAWYNGNCYRPERZDLOZPCKWYRAZQGFZCHESWUBI");
    msg.visibility.assign("LYYCTVUEEWVMKNGULFEOGRAHZIXABKMNFLKFSGGGWFOPNBWPHEISBWVBWPUCRDSAJPJVCKBHWUYKAOWQZNYQOPRFADUDDIEPVJQXMOZLHEMHFRIJIHFMULNHXHMEJXYZKQXBKAPQ");
    msg.scope.assign("ZIVCLTEKHJFETWVRCIALDUBLXZPSUIAPIWG");

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
    msg.setTimeStamp(0.86699011567);
    msg.setSource(33445U);
    msg.setSourceEntity(119U);
    msg.setDestination(6934U);
    msg.setDestinationEntity(70U);
    msg.name.assign("OZOHGLYMGRRWSRQMXDWTNIXGONGUFEYYYHCERRZHGJATPTZKUULTCQWJWHDKPNHTEKYCAFPLDKISWQOYUBBINXTLXDJAPWDMTSAWFKTLDBEOGYPSFBMVNNUIDQJEGPZNKCFCSAROXVDFFPMAHLCSVFYIBJURGCUNIMEVOLLGWMLTEOCQCWCVNSZHWQMPOJJAMRXKFUQZJXKMHNVIBAQVZYBAEABVS");
    msg.visibility.assign("XFLDIUJOMKSAQGROETITSBTLFGOKOZZDYKYAPJONVHBHUWGUXSSDQFJNIPFWCFSXCGCPMPCBRXZEXOYOUTWAMMEWNYLDSDVSQCGHJNFQQTFVDNGGCHXHMLHAQBVTCIQMRNPWTHGDKEBFJXPNDLKHIPYSVAXJBZAAEABELBOOQOPMNUKAR");
    msg.scope.assign("MFEDIYXLZWYPIN");

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
    msg.setTimeStamp(0.718367886689);
    msg.setSource(35877U);
    msg.setSourceEntity(77U);
    msg.setDestination(58754U);
    msg.setDestinationEntity(188U);
    msg.name.assign("YSRPKOURRAXKZPJCBYZMBPDJYUMDQ");
    msg.visibility.assign("WCWZKQVPNKSRKVWZDZSNGGUIEJZTJYLLSYDJEWZFMOXVSZRALEOQYPXDFUKKQMODXOCLDVAQCHNMMH");
    msg.scope.assign("LZUFDNFKIJCLQGLAM");

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
    msg.setTimeStamp(0.490546080648);
    msg.setSource(17103U);
    msg.setSourceEntity(12U);
    msg.setDestination(52442U);
    msg.setDestinationEntity(36U);
    msg.name.assign("SRVWUWMMEJLHMVDAMKIIFXRTXGAVVJYVJYIOSUKYVDCZTGHRWMFAGDFWPDSLTZUCFFNRLEJYKOHTJBYIIFECKLPBCQEECKSQGPRECOXALXTPZDLNWWOHOTEVQJKATGHEGVCSTRSFIVPROXLCNTNQYNFFXDBASJYDXZAGCQZBXZBZNMDKYBOEZNRHWJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RKDHIJHHCFIEQTHSSGEWLAOMPZQPNKMRQWUJLMGBAAUYHHABSBIIRKWTVBVSMHXPFRCKNDIQUKMNBADFXZVOCVQNMXOPRRUKFBYGODXDJPBLXUAVLNFOQNWLIEGJJQZHCZOCMZFSSCGDQSWKXOUBTJYRYTUVJSGCWAXSYZYWQIGEVZUNYDTTMDFZTTNPKMUKQWEEYL");
    tmp_msg_0.value.assign("SKGKFZIBZDGWQFPKQCMNZKJWLCJDBVWMNHTUUVFBSZTSAURU");
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
    msg.setTimeStamp(0.397436961265);
    msg.setSource(38398U);
    msg.setSourceEntity(117U);
    msg.setDestination(26687U);
    msg.setDestinationEntity(237U);
    msg.name.assign("FBSVZKMQNJQGEBFHCCLVFAIYDRWHJOAJVXZZLUYTZJVVIXOPJGDAVSLGBXCQTERDMOHYBGJHDUKLBWZEBXCQYTCXBDUJVLLPSDCGCIALCK");

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
    msg.setTimeStamp(0.475529536287);
    msg.setSource(41749U);
    msg.setSourceEntity(225U);
    msg.setDestination(40838U);
    msg.setDestinationEntity(105U);
    msg.name.assign("CEAXRTHKYFYCCODLAWIHDHTVCFSLNJYPJDTROESOJVMGMPQIQFRQYKBYLTCXNNAWPTGDHS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SMHYDLPTYOYYGIHODFVCMPHKPMKWJTNXQWGQIUXFBSKEIDXPEXSDGJQACIDEOTRCRKQZAZQGOERBAWDEIHQKEMSNWSHWJ");
    tmp_msg_0.value.assign("OUSANTXGTXIAOUCPHBCKWKFTAYIJGCAJ");
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
    msg.setTimeStamp(0.736585669332);
    msg.setSource(23464U);
    msg.setSourceEntity(42U);
    msg.setDestination(22291U);
    msg.setDestinationEntity(131U);
    msg.name.assign("CBRYZKPSAJSGGKGPOFBHALVSHVIJL");

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
    msg.setTimeStamp(0.0357440661763);
    msg.setSource(17579U);
    msg.setSourceEntity(219U);
    msg.setDestination(41387U);
    msg.setDestinationEntity(139U);
    msg.name.assign("YESYPBJXVDJPUXIEJSSQOGZDYDYLLCBUPHOUITALKAJVHNDLHEEBGYFMVSWRVIEJVFPRNWFGSFRPQTNHBWYNRXIPSRAAQWVKREYDLZCHUFQSNSOHTMEKF");

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
    msg.setTimeStamp(0.933525849696);
    msg.setSource(54838U);
    msg.setSourceEntity(218U);
    msg.setDestination(57412U);
    msg.setDestinationEntity(173U);
    msg.name.assign("NILVWLQJWULARXGIGXHHUGLSIEPFOHBWAFIGNJVRO");

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
    msg.setTimeStamp(0.711604291831);
    msg.setSource(57897U);
    msg.setSourceEntity(46U);
    msg.setDestination(64658U);
    msg.setDestinationEntity(121U);
    msg.timeout = 1573253736U;

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
    msg.setTimeStamp(0.550325278266);
    msg.setSource(39932U);
    msg.setSourceEntity(60U);
    msg.setDestination(42658U);
    msg.setDestinationEntity(236U);
    msg.timeout = 2138841776U;

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
    msg.setTimeStamp(0.255385352094);
    msg.setSource(8633U);
    msg.setSourceEntity(44U);
    msg.setDestination(30355U);
    msg.setDestinationEntity(19U);
    msg.timeout = 2640354283U;

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
    msg.setTimeStamp(0.227992616901);
    msg.setSource(10561U);
    msg.setSourceEntity(185U);
    msg.setDestination(52775U);
    msg.setDestinationEntity(201U);
    msg.sessid = 331073101U;

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
    msg.setTimeStamp(0.665427322059);
    msg.setSource(48784U);
    msg.setSourceEntity(10U);
    msg.setDestination(43247U);
    msg.setDestinationEntity(150U);
    msg.sessid = 1767540914U;

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
    msg.setTimeStamp(0.552421391151);
    msg.setSource(40642U);
    msg.setSourceEntity(144U);
    msg.setDestination(19590U);
    msg.setDestinationEntity(74U);
    msg.sessid = 2271562610U;

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
    msg.setTimeStamp(0.195704557347);
    msg.setSource(4250U);
    msg.setSourceEntity(23U);
    msg.setDestination(49140U);
    msg.setDestinationEntity(143U);
    msg.sessid = 1439673997U;
    msg.messages.assign("HZUVDRQJSHOGDKEQSQYAVQGDKGRTFKCMJHGUOASHOBNWXUFX");

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
    msg.setTimeStamp(0.694600233835);
    msg.setSource(9244U);
    msg.setSourceEntity(225U);
    msg.setDestination(21696U);
    msg.setDestinationEntity(163U);
    msg.sessid = 58970149U;
    msg.messages.assign("BUPPEFXUSSDVSRFZADOQXSEFBQANXLLGZTRRAWCPNRJWZETRWVLWGEFOYPWQZTLKUQYFKDCINABMMZTPCVBR");

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
    msg.setTimeStamp(0.531738306137);
    msg.setSource(6608U);
    msg.setSourceEntity(223U);
    msg.setDestination(45239U);
    msg.setDestinationEntity(161U);
    msg.sessid = 3511796676U;
    msg.messages.assign("EXPVFKYYAVTWZCMBIOCXPKFBNWPVSBWOAQSBHGCSZBCIOKDIXKZFFPCOEKIHGDACTNZJDVSLFXTHHJOAEAOQYNNEPAUDZVUTFHOXCLIELDRGVQ");

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
    msg.setTimeStamp(0.800919921041);
    msg.setSource(11921U);
    msg.setSourceEntity(209U);
    msg.setDestination(55057U);
    msg.setDestinationEntity(183U);
    msg.sessid = 1629547127U;

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
    msg.setTimeStamp(0.356995510803);
    msg.setSource(14113U);
    msg.setSourceEntity(53U);
    msg.setDestination(30853U);
    msg.setDestinationEntity(129U);
    msg.sessid = 4129228822U;

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
    msg.setTimeStamp(0.543346047274);
    msg.setSource(13230U);
    msg.setSourceEntity(152U);
    msg.setDestination(205U);
    msg.setDestinationEntity(14U);
    msg.sessid = 2475061121U;

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
    msg.setTimeStamp(0.220267701705);
    msg.setSource(14349U);
    msg.setSourceEntity(199U);
    msg.setDestination(53859U);
    msg.setDestinationEntity(181U);
    msg.sessid = 1794444385U;
    msg.status = 26U;

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
    msg.setTimeStamp(0.838964775844);
    msg.setSource(47102U);
    msg.setSourceEntity(11U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(225U);
    msg.sessid = 832264019U;
    msg.status = 126U;

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
    msg.setTimeStamp(0.228753694172);
    msg.setSource(29116U);
    msg.setSourceEntity(190U);
    msg.setDestination(17784U);
    msg.setDestinationEntity(91U);
    msg.sessid = 4042149008U;
    msg.status = 136U;

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
    msg.setTimeStamp(0.268638653421);
    msg.setSource(60711U);
    msg.setSourceEntity(211U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(226U);
    msg.name.assign("GZRJNEPPLPRDPNNBFRJGRGWFANAFTSQMMVFVKQSHMDJHHAIHTCLXXKEAQKXYJFNWLWOSIKMEZRBZIZEMLUZYSSQQEJWORMPHSTHMBSCRXAFGPABZCAGTHOFSRDUENEOZOFOGQFLHPXVKQVYBDUGSZEXWRYOMVQAXTUYNSUYQLZTRKCUFKJCBBXCCZDLVLOWIJIVVGIQYHTMLNNBUHLBIUGNUMDYJITXYJEPTIO");

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
    msg.setTimeStamp(0.964205715472);
    msg.setSource(15522U);
    msg.setSourceEntity(136U);
    msg.setDestination(51461U);
    msg.setDestinationEntity(243U);
    msg.name.assign("FMPTFEZHZWWJKYYKLRPTPZOIMWMAUEJSRQFPCDGGUINVYDIHSOEUCJXBYAFBKCWTWUXDVQTBZAAYVMGQLOHLJNQHUNDDXZQHXOSLSAAFEDNOTLGPEQTOIMFXDUKAFCHOCWJBVZBXSJVLGKWMVTGPJRPXRRSEHNZCMQGETECISCGZEDFCDNNNVOIJKYYUTPIKEFGABPHULAVFCNQWSDQYHSJJOKLMZUBRGKROKPVMTL");

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
    msg.setTimeStamp(0.452674653548);
    msg.setSource(57710U);
    msg.setSourceEntity(57U);
    msg.setDestination(6453U);
    msg.setDestinationEntity(187U);
    msg.name.assign("IGVZIUOFTOAUWFWUJNCJFPSYXNVQPRPWRSJAHJQQMUBYYDZ");

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
    msg.setTimeStamp(0.691764215845);
    msg.setSource(31253U);
    msg.setSourceEntity(7U);
    msg.setDestination(26693U);
    msg.setDestinationEntity(94U);
    msg.name.assign("NQTVSLQHYHVFZTUBZUUBXNLOCCFAXNTOIYNEOJFZMKMCKGSMYZGDENBJEHKRXZFLJ");

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
    msg.setTimeStamp(0.299718904547);
    msg.setSource(9853U);
    msg.setSourceEntity(12U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(244U);
    msg.name.assign("NTAVCUDPLCGOBEZN");

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
    msg.setTimeStamp(0.685359922451);
    msg.setSource(63334U);
    msg.setSourceEntity(216U);
    msg.setDestination(53901U);
    msg.setDestinationEntity(16U);
    msg.name.assign("RQNVQRVGHBKNFSESWIFIZROOCBACKRMNPHXTIWPFMYTZZYKMYHANXONEDLZDWGWBIZXICDUKUCAAJMWJL");

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
    msg.setTimeStamp(0.13179217222);
    msg.setSource(23335U);
    msg.setSourceEntity(91U);
    msg.setDestination(23625U);
    msg.setDestinationEntity(150U);
    msg.type = 175U;
    msg.error.assign("OZNRGTWWEPCJXPISOPWMR");

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
    msg.setTimeStamp(0.0784263770963);
    msg.setSource(21431U);
    msg.setSourceEntity(155U);
    msg.setDestination(52486U);
    msg.setDestinationEntity(34U);
    msg.type = 62U;
    msg.error.assign("FCETLQITAIKCOIKYYGFYXDVDTARELSZJGDARUUYYEBNPVLUJRCIDBVUDRMWIVMCL");

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
    msg.setTimeStamp(0.333903435506);
    msg.setSource(1192U);
    msg.setSourceEntity(124U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(138U);
    msg.type = 229U;
    msg.error.assign("TIBDUNJRNLFXKTORPFVUERUWNQIMIQWKSISJSALSZDIYI");

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
    msg.setTimeStamp(0.020974416075);
    msg.setSource(54632U);
    msg.setSourceEntity(31U);
    msg.setDestination(26560U);
    msg.setDestinationEntity(98U);
    msg.seq = 16714U;
    msg.sys_dst.assign("RVLXKZUAEHWRYPLINYPUXUAJEAYPKDIZJLZLXQZYLVQTDFPSVQBOKUKIQQMICVIEFSZTFEZOMJKPSDV");
    msg.flags = 147U;
    const char tmp_msg_0[] = {50, -89, -81, 31, 80, -26, -111, -114, -101, -118, 1, 8, 110, -33, -55, 29, -29, -109, -60, 41, 103, -56, 34, 78, 20, 59, -97, 24, 82, -29, 35, -36, -24, 79, 48, -7, 67, -27, -22, 84, 113};
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
    msg.setTimeStamp(0.632392285685);
    msg.setSource(22362U);
    msg.setSourceEntity(222U);
    msg.setDestination(17162U);
    msg.setDestinationEntity(157U);
    msg.seq = 10201U;
    msg.sys_dst.assign("YMCKXRLGBORLGTNNJLVINCONOBANPCLQQRWFFZYJFANHQOKFGUAOPSWFXWWHDEEPIVEVKBCIKMPQRRMHZDGXEYIVMJKMUZAIGPSZQVQORXLCHTVHXSTXRHBLUWZONJPCIKUSIKPIKISAWNDMDBSMFZVWTWQFOGGEBMDCUWDJYHDTGKVDQWFFZUXLASYJMEDSLTXTPYPZBHDUCNUOBTKL");
    msg.flags = 177U;
    const char tmp_msg_0[] = {55, -89, 19, -107, -60, -62, 50, -10, 94, -44, 108, -69, -77, 71, 80, -26, -116, -71, 95, 17, 115, 75, 83, -73, 95, 56, 68, 48, 105};
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
    msg.setTimeStamp(0.821362313623);
    msg.setSource(26858U);
    msg.setSourceEntity(243U);
    msg.setDestination(14887U);
    msg.setDestinationEntity(235U);
    msg.seq = 63785U;
    msg.sys_dst.assign("FBVOKZKNYGGTHHITIVBWDSAUJNONAVRXJGNDPHRJZBGEACMMCNHUYAWWLPAUHOPXDAQZIJZMERDCMNLBWETAFRUOGJXWLJAQPZFXFWYCKGJFGVKYVROQITNTSTISXHYZF");
    msg.flags = 253U;
    const char tmp_msg_0[] = {-90, 118, -6, -86, -53, 77, -52, 123, -51, 71, 23, 77, -95, 126, -13, 124, -123, 115, 82, 80, -93, -58, 10, -1, -124, -13, -40, 57, -68, -120, -114, 41, -75, 77, 44, -74, -103, -67, -26, 122, -125, -27, -120, 29, -100, -35, 101, -44, -10, 97, 8, 72, 33, 115, 82, 1, -71, 35, -18, -80, 6, -29, -26, 54, 123, -96, -10, -55, 82, -33, -81, 64, -75, -77, 4, -41, -110, 83, 33, 118, -113, -117, -18, 125, 50, -4, -94, -105, 89, 63, -87, 99, 92, 31};
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
    msg.setTimeStamp(0.91687427482);
    msg.setSource(6926U);
    msg.setSourceEntity(60U);
    msg.setDestination(2999U);
    msg.setDestinationEntity(194U);
    msg.sys_src.assign("WTNJCNNMAQZLNIQGLSBWNQZRBINOODCGZDHIUBWRYHDSEGTHXUJRDOFVSFVSMMSGHUSUGELORAZJNCWWQKJPFDBJAKAEAPFKMPEJOEDLTCEVURGVYDLUQWSWTXVQPBLJZNYVEOPTXOUTIIJI");
    msg.sys_dst.assign("RONOETIZYYRGUSHZZGEYFVUECRQVVPYPGGNPWDMOIIXHFULCMHYDCTCCGZFJQVSOGFZAFEMMWLXRBOQQHARCSZAKNVGUHJQNCZKSWQUKUTOPALJAPERNETXWBSBKHYTOWHBVMWDXDSJEBLJLPFBZJSLIYMDCUDKKOELBTIJGQCRFVXIKHSNLMNUXITENDJHBZMNQXXPXWHASVMWCKT");
    msg.flags = 145U;
    const char tmp_msg_0[] = {98, 57, 48, -115, -106, 6, 82, 115, -103, 10, -85, -47, -4};
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
    msg.setTimeStamp(0.0388617792393);
    msg.setSource(50357U);
    msg.setSourceEntity(80U);
    msg.setDestination(48718U);
    msg.setDestinationEntity(142U);
    msg.sys_src.assign("TVFQLLBLYNWWKCVCXPPRAWJPYAGTDUUZBTUDDAXJVSSHPZDEIUOKVJRSADEZFYTHMACMBUKOWGDERNCZVDGVXIIVTFZONOHKUONWTBTCFMWQWTORGSNHEDGBFGTUQNPOPDKQAQXOBFPKFJIXXSRLCI");
    msg.sys_dst.assign("LRGIINMJFYFKPMKORHSDXFLRQBNZXCWNVCQMFONSFTHXCQRAVPDKGGSQCJIQULKQTAKPAZVQACOULVEJOZNSRNAMRJTOLIYOOSUJFYGXHWPVIMXTQMBLATBPJTBTQXLUPBYVRKYGEOICUSNPWESPCTEVVLJPEBUFFBUESZIWOAWKMGBKDZOFRYDMNVHAJJUWRZKHZLSIITMWANNYXCXYWBVKEEGYC");
    msg.flags = 29U;
    const char tmp_msg_0[] = {21, -90, 124, -46, 102, 23, 45, 59, 21, 78, -10, -34, 4, -56, 64, 124, -101, 82, 34, -79, 29, -93, 93, 1, -124, 114, -99, -7, 27, 97, 100, 14, 43, -13, 84, -117, 19, -19, -60, -51, -68, -2, -85, -120, -105, -68, -103, 116, -51, 29, -38, 73, -77, 106, 119, 59, -105, 99, 101, -22, -21, 85, 40, 63, -38, -45, 18, 53, 100, 16, -123, -29, -111, 30, -35, 16, 18, -90, 99, 14, 102, -51, 55, -35, -123, 69, -24, -105, 89, 33, -63, -71, 25, -64, -7, 94, -77, 92, -83, -74, 47, -52, 72, 48, 52, -125, -106, 61, 121, -60, -24, 82, 68, 37, -84, -116, -82, 32, 51, -86, 121, 113, 58, -17, -7, 11, -123, -112, 119, 110, 21, -60, -103, 91, 28, -4, 93, 76, 5, 48, 126, -44, 98, 24, 68, -42, 102, -128, -7, 18, 122, -48, -79, -1, 119, -102, 106, -103, -113, -56, 78, -115, 38, -70, 126, 15, -56, 3, 48, -8, -101, 118, 30, 52, 14, 124, -68, -21, -16, -74, -85, -111, 57, 123, -69};
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
    msg.setTimeStamp(0.56692572948);
    msg.setSource(8758U);
    msg.setSourceEntity(139U);
    msg.setDestination(33013U);
    msg.setDestinationEntity(148U);
    msg.sys_src.assign("CTGZIHNLDTHXKLZDRGCNAFVOERZPFRCEHVMRBSNXUOYJJSMDHYRPSWHFOLNBLWFZNKEOSBEA");
    msg.sys_dst.assign("HJSDBVODNXRWLKCNFWZPCLIOADXMZNQBVIVTIEFJUPBINZMKEFJPJAAPFRUXTLTRCYMBIELWRQHEUMNUYXEOTGSZJUTJFBVXQUUDDQEBGKLCSNPOLDVWGAOZNKHJONWUHRGARYSTQSPQRYTVCOGAXCMQAAMBXBCGPYWUSFOXFYDKSUHSTWMG");
    msg.flags = 109U;
    const char tmp_msg_0[] = {-60, -43, 52, 41, -72, -83, 91, -95, -120, 124, -5, 95, -68, -74, 115, 18, -121, -93, -114, 88, 89, -85, -116, -49, 63, -51, 74, 121, 34, -84, -56, 16, 16, 52, -94, 65, 74, 52, -71, 74, 117, -34, -35, 75, -124, -38, -52, 48, -47, -19, 78, -114, 82, -51, 15, 114, 72, -98, 65, 3, 0, 32, -56, -102, -18, -76, 112, -26, -30, -29, 103, -55, 54, -16, 48, 95, 91, -30, 64, 88, 72, -70, -23, -2, -81, -10, 13, 114, 68, 46, -87, -46, -118, -105, -116, 31, -4, 77, -110, -64, 2, -35, 55, -88, -108, 32, -13, 65, 21, -51, 98, 40, -38, -104, -82, 59, 86, 101, -15, -117, -90, 98, -97, -85, 110, -13, 42, -33, -78, 43, 75, 116, 102, 113, -110, 41, 85, 118, 46, 4, -84, 21, 45, 51, -40, 18, 57, 31, -64, 91, -126, -110, 51, -79, -122, -32, 35, 74, -39, -85, 43, 73, 18, -108, 60, 124, 32, -10, 121, 97, 49, 114, 67, 105, 47, -16, 94, 5, 73, -24, 59, 114, 26, 63, 94, -59, 97, 117, 54, -61, -87, 54, -105, -1, -74, 88, 121, -4, -9, -59, 35, 24, -70, 74, 106, -31};
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
    msg.setTimeStamp(0.277632225546);
    msg.setSource(61006U);
    msg.setSourceEntity(178U);
    msg.setDestination(43344U);
    msg.setDestinationEntity(93U);
    msg.seq = 52859U;
    msg.value = 86U;
    msg.error.assign("LZZJYBIUVOBFXUIPBSKSXLOWDWCETLVBYUQPUROFOKXVPTYKFNHDKIQONEDWMSLIOFBPAKNHUXAANLFEYMMAAGDAEIAWGYIHSRUMWRJP");

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
    msg.setTimeStamp(0.92257943321);
    msg.setSource(63541U);
    msg.setSourceEntity(160U);
    msg.setDestination(24745U);
    msg.setDestinationEntity(219U);
    msg.seq = 42071U;
    msg.value = 237U;
    msg.error.assign("GKUGWLDFADMRSVHLFOOTEEBSVGSNTPHDKZIEKSKVSYXQYXNMZGJRQICVPWUJZWCXMUIBSKGOYUVFHHEAHOPYLFDQGAZJCOLRAUUVAWNJEMPNXWBONLQAXDNRMTTTEYYPACBLDAH");

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
    msg.setTimeStamp(0.381256417352);
    msg.setSource(122U);
    msg.setSourceEntity(117U);
    msg.setDestination(22707U);
    msg.setDestinationEntity(249U);
    msg.seq = 51138U;
    msg.value = 246U;
    msg.error.assign("VLXJSODODQUAPRNKRUNKJAYKOLBIRMIAIHAMMQRFRCEBFZPULTKRZPDEOTMJVYXVV");

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
    msg.setTimeStamp(0.643290466129);
    msg.setSource(36228U);
    msg.setSourceEntity(130U);
    msg.setDestination(6611U);
    msg.setDestinationEntity(34U);
    msg.seq = 53187U;
    msg.sys.assign("OSTMXKYUWHPOSSTCGQXMXJQJUBFLNEUXIPMKHEKWWIJQYKLVIJDZJLCEZCANNZRUCZGZEFOQNCMMIDRCHHMPDUVBSMTCDBWFPXOSKLOZFSTAHORLEFWPZXDRNOQBUJGALGYIPVTCIWAHQLZFPQRBRVKYAHINDGWTMGAULPHQKVGKPDNJCRFHVOLFAOBOJAWBSIYVFXJTYBZY");
    msg.value = 0.018007607006;

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
    msg.setTimeStamp(0.402679140533);
    msg.setSource(23549U);
    msg.setSourceEntity(232U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(16U);
    msg.seq = 22924U;
    msg.sys.assign("LZRAJLMKKIBWGBTLPHFQGRZVCOMYLPFXCNEIGRCXNMZJOYJFPRYBFXETKCQMMBVIAPGHKKBW");
    msg.value = 0.954025416004;

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
    msg.setTimeStamp(0.951011197664);
    msg.setSource(55404U);
    msg.setSourceEntity(115U);
    msg.setDestination(25484U);
    msg.setDestinationEntity(223U);
    msg.seq = 20363U;
    msg.sys.assign("JEGXFYUYDVKTDMWAKNIYXGBERQFIUMLMLTTSVPYWKRFOVCRRDLHLYPHUSRISGPIOZHRYMNENGAGFQQDBXZFMRLGMO");
    msg.value = 0.693809041457;

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
    msg.setTimeStamp(0.296949542607);
    msg.setSource(32578U);
    msg.setSourceEntity(177U);
    msg.setDestination(30359U);
    msg.setDestinationEntity(202U);
    msg.action = 231U;
    msg.longain = 0.787930790654;
    msg.latgain = 0.790456268345;
    msg.bondthick = 1880850467U;
    msg.leadgain = 0.775788144771;
    msg.deconflgain = 0.0947292301285;

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
    msg.setTimeStamp(0.232228221259);
    msg.setSource(61839U);
    msg.setSourceEntity(221U);
    msg.setDestination(4270U);
    msg.setDestinationEntity(92U);
    msg.action = 23U;
    msg.longain = 0.0228218764981;
    msg.latgain = 0.746662420883;
    msg.bondthick = 247833837U;
    msg.leadgain = 0.463141293118;
    msg.deconflgain = 0.887731676002;

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
    msg.setTimeStamp(0.745874576615);
    msg.setSource(64092U);
    msg.setSourceEntity(247U);
    msg.setDestination(32649U);
    msg.setDestinationEntity(188U);
    msg.action = 170U;
    msg.longain = 0.239084039206;
    msg.latgain = 0.545930301163;
    msg.bondthick = 150564850U;
    msg.leadgain = 0.230606722235;
    msg.deconflgain = 0.910184066175;

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
    msg.setTimeStamp(0.479134997838);
    msg.setSource(40012U);
    msg.setSourceEntity(119U);
    msg.setDestination(17225U);
    msg.setDestinationEntity(152U);
    msg.err_mean = 0.229366659676;
    msg.dist_min_abs = 0.649699316415;
    msg.dist_min_mean = 0.368048507755;

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
    msg.setTimeStamp(0.389144030677);
    msg.setSource(12492U);
    msg.setSourceEntity(55U);
    msg.setDestination(11785U);
    msg.setDestinationEntity(102U);
    msg.err_mean = 0.374673660666;
    msg.dist_min_abs = 0.305965803907;
    msg.dist_min_mean = 0.594268584049;

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
    msg.setTimeStamp(0.542163334899);
    msg.setSource(18845U);
    msg.setSourceEntity(20U);
    msg.setDestination(5462U);
    msg.setDestinationEntity(222U);
    msg.err_mean = 0.251271244233;
    msg.dist_min_abs = 0.207259863632;
    msg.dist_min_mean = 0.321361499597;

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
    msg.setTimeStamp(0.185091907395);
    msg.setSource(49885U);
    msg.setSourceEntity(200U);
    msg.setDestination(24319U);
    msg.setDestinationEntity(143U);
    msg.action = 235U;
    msg.lon_gain = 0.391684514735;
    msg.lat_gain = 0.553751493029;
    msg.bond_thick = 0.490193614382;
    msg.lead_gain = 0.608045989324;
    msg.deconfl_gain = 0.782441433319;
    msg.accel_switch_gain = 0.412780561911;
    msg.safe_dist = 0.477280681632;
    msg.deconflict_offset = 0.332707244745;
    msg.accel_safe_margin = 0.626898458371;
    msg.accel_lim_x = 0.790615363624;

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
    msg.setTimeStamp(0.975967355678);
    msg.setSource(27534U);
    msg.setSourceEntity(174U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(8U);
    msg.action = 233U;
    msg.lon_gain = 0.902494711898;
    msg.lat_gain = 0.776288311976;
    msg.bond_thick = 0.666621858879;
    msg.lead_gain = 0.62514499631;
    msg.deconfl_gain = 0.0101536305255;
    msg.accel_switch_gain = 0.431929927297;
    msg.safe_dist = 0.257241067676;
    msg.deconflict_offset = 0.685592248082;
    msg.accel_safe_margin = 0.116946736541;
    msg.accel_lim_x = 0.703945685064;

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
    msg.setTimeStamp(0.256902185728);
    msg.setSource(42469U);
    msg.setSourceEntity(40U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(16U);
    msg.action = 247U;
    msg.lon_gain = 0.133065662218;
    msg.lat_gain = 0.333549217131;
    msg.bond_thick = 0.350268321575;
    msg.lead_gain = 0.83965923322;
    msg.deconfl_gain = 0.828842546316;
    msg.accel_switch_gain = 0.898315610558;
    msg.safe_dist = 0.44233597765;
    msg.deconflict_offset = 0.758419102482;
    msg.accel_safe_margin = 0.884425710263;
    msg.accel_lim_x = 0.433245681343;

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
    msg.setTimeStamp(0.532756986945);
    msg.setSource(48628U);
    msg.setSourceEntity(172U);
    msg.setDestination(8229U);
    msg.setDestinationEntity(28U);
    msg.type = 77U;
    msg.op = 244U;
    msg.err_mean = 0.673995604083;
    msg.dist_min_abs = 0.548693867154;
    msg.dist_min_mean = 0.423293859477;
    msg.roll_rate_mean = 0.381080681153;
    msg.time = 0.62658774171;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 21U;
    tmp_msg_0.lon_gain = 0.0802413251436;
    tmp_msg_0.lat_gain = 0.883422772308;
    tmp_msg_0.bond_thick = 0.160344798658;
    tmp_msg_0.lead_gain = 0.224502423618;
    tmp_msg_0.deconfl_gain = 0.654817220821;
    tmp_msg_0.accel_switch_gain = 0.970319279271;
    tmp_msg_0.safe_dist = 0.0664230296848;
    tmp_msg_0.deconflict_offset = 0.525035282513;
    tmp_msg_0.accel_safe_margin = 0.069310924893;
    tmp_msg_0.accel_lim_x = 0.370273836421;
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
    msg.setTimeStamp(0.591671678775);
    msg.setSource(18452U);
    msg.setSourceEntity(239U);
    msg.setDestination(45746U);
    msg.setDestinationEntity(11U);
    msg.type = 127U;
    msg.op = 83U;
    msg.err_mean = 0.680796271546;
    msg.dist_min_abs = 0.437808558494;
    msg.dist_min_mean = 0.915755153141;
    msg.roll_rate_mean = 0.851234271005;
    msg.time = 0.111007362131;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 107U;
    tmp_msg_0.lon_gain = 0.78860552464;
    tmp_msg_0.lat_gain = 0.740522851616;
    tmp_msg_0.bond_thick = 0.763619212773;
    tmp_msg_0.lead_gain = 0.763391511948;
    tmp_msg_0.deconfl_gain = 0.297900225263;
    tmp_msg_0.accel_switch_gain = 0.879534232207;
    tmp_msg_0.safe_dist = 0.497464657846;
    tmp_msg_0.deconflict_offset = 0.0589287113651;
    tmp_msg_0.accel_safe_margin = 0.901630036171;
    tmp_msg_0.accel_lim_x = 0.738084518036;
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
    msg.setTimeStamp(0.399113849514);
    msg.setSource(62142U);
    msg.setSourceEntity(98U);
    msg.setDestination(9994U);
    msg.setDestinationEntity(40U);
    msg.type = 189U;
    msg.op = 115U;
    msg.err_mean = 0.946881529539;
    msg.dist_min_abs = 0.495101264398;
    msg.dist_min_mean = 0.188091583313;
    msg.roll_rate_mean = 0.665096384739;
    msg.time = 0.134260373044;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 108U;
    tmp_msg_0.lon_gain = 0.568916257064;
    tmp_msg_0.lat_gain = 0.689635008394;
    tmp_msg_0.bond_thick = 0.867789649301;
    tmp_msg_0.lead_gain = 0.316217441408;
    tmp_msg_0.deconfl_gain = 0.809488245671;
    tmp_msg_0.accel_switch_gain = 0.419094487936;
    tmp_msg_0.safe_dist = 0.851030522121;
    tmp_msg_0.deconflict_offset = 0.0244461849327;
    tmp_msg_0.accel_safe_margin = 0.395041447654;
    tmp_msg_0.accel_lim_x = 0.0236942384979;
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
    msg.setTimeStamp(0.346898294799);
    msg.setSource(11510U);
    msg.setSourceEntity(84U);
    msg.setDestination(47134U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.330171836715;
    msg.lon = 0.799607983557;
    msg.eta = 24325906U;
    msg.duration = 29923U;

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
    msg.setTimeStamp(0.159627361753);
    msg.setSource(28953U);
    msg.setSourceEntity(245U);
    msg.setDestination(15451U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.251858809768;
    msg.lon = 0.972447630185;
    msg.eta = 260242426U;
    msg.duration = 53356U;

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
    msg.setTimeStamp(0.0397932019562);
    msg.setSource(52709U);
    msg.setSourceEntity(7U);
    msg.setDestination(36145U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.0361517576484;
    msg.lon = 0.364809291359;
    msg.eta = 1948741984U;
    msg.duration = 35253U;

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
    msg.setTimeStamp(0.896436810495);
    msg.setSource(56151U);
    msg.setSourceEntity(121U);
    msg.setDestination(25319U);
    msg.setDestinationEntity(68U);
    msg.plan_id = 10637U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.293211728488;
    tmp_msg_0.lon = 0.0800522268965;
    tmp_msg_0.eta = 1440018747U;
    tmp_msg_0.duration = 44011U;
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
    msg.setTimeStamp(0.765036263485);
    msg.setSource(36931U);
    msg.setSourceEntity(53U);
    msg.setDestination(32297U);
    msg.setDestinationEntity(24U);
    msg.plan_id = 17498U;

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
    msg.setTimeStamp(0.433926810498);
    msg.setSource(42194U);
    msg.setSourceEntity(185U);
    msg.setDestination(21309U);
    msg.setDestinationEntity(7U);
    msg.plan_id = 59076U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.194779956408;
    tmp_msg_0.lon = 0.305668732283;
    tmp_msg_0.eta = 2581345413U;
    tmp_msg_0.duration = 693U;
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
    msg.setTimeStamp(0.3452674321);
    msg.setSource(45553U);
    msg.setSourceEntity(181U);
    msg.setDestination(15596U);
    msg.setDestinationEntity(76U);
    msg.type = 36U;
    msg.command = 89U;
    msg.settings.assign("JVUUPQRODUEEAWVWCCPPHWSJAUATJNUWKBGJALGVAIPAZRZFRKTXZTBDZKXGRVQTYXLMMBNHWBNCOGTFLXOHSWVVEDMOECMYEKOAKCJFHMDREDZZBWHUUWLPFYOQSJBSMSUFNISGGQPTXNCMSUDHRELIJVFFDNZCTYLHUOXPSMKRVHWBMXASGQCQBGRDOIQYLHGTZFKZQYKIFNODRKBIANZCBYQCWIQMYYOJFPSNYLVKIGJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48131U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.78811813498;
    tmp_tmp_msg_0_0.lon = 0.151038793161;
    tmp_tmp_msg_0_0.eta = 1788871998U;
    tmp_tmp_msg_0_0.duration = 42781U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WHHASOLTCEUWFUPKBGHCFEXONRTUCKMEALMNNJRRVFUYXWEOTQGKWIQKZBGVJUHMGSWGSLODEQUJTSWNWCGIIZPXCFJVUCAOMPFLRUXEBNHDYVKYOJKTCVYDLZGBSCFKQLOZSSGKYHWFFAVDAPLQKPMPQMRYJADBVINIREIBEITDDZVBK");

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
    msg.setTimeStamp(0.939944288291);
    msg.setSource(55892U);
    msg.setSourceEntity(180U);
    msg.setDestination(57895U);
    msg.setDestinationEntity(78U);
    msg.type = 2U;
    msg.command = 22U;
    msg.settings.assign("HXNOPZDWBKRSFLUDLJLTRUJZYSMKUKJOHNDRKV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22438U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.563339535317;
    tmp_tmp_msg_0_0.lon = 0.362733570496;
    tmp_tmp_msg_0_0.eta = 4209885219U;
    tmp_tmp_msg_0_0.duration = 8949U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TNDKJRMGBEAPEHKPTTJSWUFPFXOOOTCUCQMWVHBBLVXYYKUNJIYUHBQQAIQPMBRMVNBMBAWPVKHTSFXZUFDAIWXGEXOAYGQDDTJXMBNEURAINRIRLDSGKJTOAQDOALBPRFFSWUTWQIZPLIMUGAZEVLXFSDKHYFGMJSQSJOUCTRIGSXEPCVRZWZZQKYDONVVUTNAVDLZLPWHGNYFRZKXEYWQYODCCHGCZJVWKHENZFEIJ");

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
    msg.setTimeStamp(0.375314416452);
    msg.setSource(23318U);
    msg.setSourceEntity(109U);
    msg.setDestination(60660U);
    msg.setDestinationEntity(92U);
    msg.type = 113U;
    msg.command = 241U;
    msg.settings.assign("CYNBUSJLHYXLJZZPBRZTREQKEQICYRHDPITPRPL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27132U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.190062052302;
    tmp_tmp_msg_0_0.lon = 0.576716477667;
    tmp_tmp_msg_0_0.eta = 3786608368U;
    tmp_tmp_msg_0_0.duration = 41895U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JYUKUAWKGHGOBESTDSXOWYOHZLHXSHVYVHWUZZOACGKNVCVIETXUJIKJGXEQBZKMVTDLRMGWVOGYQDXSXZNCNONUVJMFRWMCOLTDWQYCLAJQABUKBTEAFEIPSYORSXQKUBDULSOEWWVYFYLHLMXCSZPUHJGRNGCQMA");

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
    msg.setTimeStamp(0.360941142558);
    msg.setSource(49579U);
    msg.setSourceEntity(17U);
    msg.setDestination(681U);
    msg.setDestinationEntity(134U);
    msg.state = 151U;
    msg.plan_id = 21273U;
    msg.wpt_id = 210U;
    msg.settings_chk = 49116U;

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
    msg.setTimeStamp(0.785055703317);
    msg.setSource(5446U);
    msg.setSourceEntity(61U);
    msg.setDestination(7063U);
    msg.setDestinationEntity(232U);
    msg.state = 88U;
    msg.plan_id = 15431U;
    msg.wpt_id = 31U;
    msg.settings_chk = 20716U;

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
    msg.setTimeStamp(0.0970770337759);
    msg.setSource(36622U);
    msg.setSourceEntity(149U);
    msg.setDestination(16189U);
    msg.setDestinationEntity(204U);
    msg.state = 49U;
    msg.plan_id = 20729U;
    msg.wpt_id = 104U;
    msg.settings_chk = 4563U;

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
    msg.setTimeStamp(0.890213424474);
    msg.setSource(40712U);
    msg.setSourceEntity(1U);
    msg.setDestination(59396U);
    msg.setDestinationEntity(151U);
    msg.uid = 185U;
    msg.frag_number = 83U;
    msg.num_frags = 135U;
    const char tmp_msg_0[] = {89, 7, 8, 32, -49, -84, 8, 25, 73, -8, 89, 59, -76, 126, -68, 39, 100, -119, 68, -92, -2, -54, -62, 22, -40, -56, 15, 24, 72, 5, 56, 114, 68, -87, -72, 56, 10, 99, 37, -59, -94, -28, -31, 27, 108, 53, -42, 39, -127, 1, -100, 15, 46, 24, -127, 105, -13, -42, 24, 15, -25, -91, -7, 83, 39, 124, -101, 39, 67, 9, 116, 58, 92, 77, -79, -24, 55, 105, 5, -123, -18, -56, 47, -80, 89, -8, -115, 102, -86, 62, 83, -26, 116, 106, -18, 107, -41, 9, 75, -17, -102, 42, 125, 66, 47, -91, -97, -61, -33, 5, -23, 31, 114, -95, -70, 33, -110, 28, -15, -101, 85, 71, 107, -94, 75, 52, 118, 20, -8, 122, 66, -58, -70, 109, 88, 93, -127, 78, 77, -23, 118, 67, -55, 89, 40, 93, -64, 104, -124, -20, 101, -86, -3, -102, 18, -1, 54, -16, 123, 7, -85, 15, -39, -73, 81, 68, -85, 24, 112, -83, -120, 76, 28, 48, 10, 8, 126, -7, -117, 14, 58, 108, 93, -37, -118, -116, -91, 80, -64, 109, -4, -21, -85, 62, 2, -119, -61, -72, 69, 39, 111, 37, -119, 125, -54};
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
    msg.setTimeStamp(0.596921989371);
    msg.setSource(5262U);
    msg.setSourceEntity(47U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(242U);
    msg.uid = 117U;
    msg.frag_number = 170U;
    msg.num_frags = 200U;
    const char tmp_msg_0[] = {101, -2, 18, -113, 74, -55, 87, -59, -125, 10, 74, -23, -2, -46, -26, -84, 90, 111, -25, 40, 21, 30, -33, 58, -39, -86, 49, -117, -70, -23, -68, -116, -32, 77, -118, 101, 16, 91, -104, 11, 23, -64, 14, -13, -66, 63, 124, 118, 24, 111, 81, 31, -90, 39, 58, -42, 41, 67, -62, -33, 32, 92, 66, -19, 43, 52, 78, 113, -99, -22, 26, 39, -21, -100, 71, -32, -89, 98, 28, -4, 3, 3, 72, 105, -71, -72, -58, 36, 55, -6, 117, 52, 0, -112, -58, 19, 106, -11, 111, -52, -23, -85, -46, -112, -37, 77, 48, 107, 66, 66, -5, 30, 5, 62, 117, 118, -103, -98, 16, 13, -64, -72, -44, 84, 32, 126, -118, 42, 11, 100, 108, 18, -8, 21, -111};
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
    msg.setTimeStamp(0.320691961087);
    msg.setSource(18818U);
    msg.setSourceEntity(177U);
    msg.setDestination(3727U);
    msg.setDestinationEntity(146U);
    msg.uid = 173U;
    msg.frag_number = 205U;
    msg.num_frags = 95U;
    const char tmp_msg_0[] = {118, 9, 66, -101, 99, -9, -7, 106, 73, 86, 16, -21, -39, -5, 85, -75, 36, -36, 32};
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
    msg.setTimeStamp(0.436663909037);
    msg.setSource(55860U);
    msg.setSourceEntity(71U);
    msg.setDestination(32411U);
    msg.setDestinationEntity(128U);
    msg.content_type.assign("ETCPDGYEJCIVTFSSZNKTANNGSAFLKMQFDPYVIEUQXHBWSRMTBOMJQPRDTPBAWAWUNLUWCAHHMMIQRSWCLDQQXDAZQKWWXOHJGZDGROJMJSKLJEDCMOFVPCFHSPXALZJIGRMSPLUIILNVEZTZXJNLBOOKOIKNAHSWMUCVUKYYXVVFUZNVGQRYBLEKICUBIBAEUIRPANBWGFZKDTUSB");
    const char tmp_msg_0[] = {119, 108, -52, 22, -104, 121, -18, 45, 28, -75, -114, -38, 59, -49, 10, 78, -12, 46, 35, 92, -127, 11, -85, 27, -10, 75, -116, -89, -20, 2};
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
    msg.setTimeStamp(0.898392325535);
    msg.setSource(44649U);
    msg.setSourceEntity(51U);
    msg.setDestination(52217U);
    msg.setDestinationEntity(228U);
    msg.content_type.assign("VYWQBPVRERFACAHAFZGFCWKUOXDMZMZKIAWJODWSFRXOKYNLKMUXYDVESGDTNETGQLFLXJUTBICRESRYXJRVAFWFPXMFTHMDPNKGVBRYSXHTGCXHDPVBGZVHZHBUTVELCUBNENLBSRGAKECRIJWJRLOZQCQPYIPPSXTFIJCHPEJWFSDOKLKOAHUHCSQQBOTSQ");
    const char tmp_msg_0[] = {-84, -60, 103, -73, 17, -69, -88, -100, 108, 108, 32, -32, -99, 27, 12, -39, -42, 88, 84, -96, 104, -123, -57, -2, 39, 3, 59, 92, 23, 55, 112, -92, -33, -120, -89, -102, -117, -119, 42, 125, 34, 102, 73, -114, 117, 69, -67, -64, 124, 62, -10, 45, -53, -7, 7, -51, -20, -94, 55, -118, 30, -90, -110, 53, 23, -85, -92, -85, -57, 53, -11, -67, 100, 30, 126, 65, 4, 55, 122, 117, 124, -51, 63, -99, -50, 60, 31, 104, -109, -7, -95, -117, -6, -124, 94, -48, -74, 26, 54, 11, -69, -74, 45, -98, -126, -126, -55, 71, 71, 13, -112, -73, 55, -83, 14, -116, 113, -48, -6, -110, 38, -98, 42, -64, 40, -11, -67, -50, 45, -65, -94, 7, 42, -63, -22, 51, -91, 70, 104, 89, -56, -99, -9, 39, -8, 6, -60, -82, 19, 123, 76, -6, -100, -4, -35, -27, -95, 51, 114, -77, 73, -60, 115, -102, -20, 42, -70, -4, 14, 8, 82, -58, -86, 35, -96, 101, -91, -59, 48, 46, -78, -109, -86, -103, -110, 95, 117, -96, -98, 90, 111, 89, 68, 61, 112, -30, -3, -2, 92, 17, 125, -128, 12, -39, 45, 3, 109, 96, -52, 40, -125, 37, -127, -127, -46, 100, -14, 30, 1, 126, 7, -98, -125, 84, -97, -120, -6, 26, 82, -1, -17, -116, -16, -84, -88, -84, 123, 101, -126, -96, -67, -107, 61, -60, -28, 32, -65, -64, 24, 83, 1, -40, -86, -46};
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
    msg.setTimeStamp(0.991183859976);
    msg.setSource(29623U);
    msg.setSourceEntity(192U);
    msg.setDestination(63029U);
    msg.setDestinationEntity(215U);
    msg.content_type.assign("ITTRGGQMQQLICGHFWDXWLUGFSMXMSXNFIUNZUVVYGYS");
    const char tmp_msg_0[] = {92, 7, -119, -60, -113, -24, -15, 56, -86, 5, 103, 19, 29, -99, 65, 103, 7, -17, -14, 73, -127, 72, -59, 4, -120, -106, -56, 80, -90, -45, -75, 100, 0, 42, -79, 8, 82, 16, -80, -21, 108, -117, 56, 70, 6, -95, 93, -67, -88, -43, -23, 28, 56, -56, -76, -99, 22, -125, -77, -54, 20, -32, -126, 82, 36, -53, 26, 25, -115, 43, 84, -114, 7, -59, 9, 4, -21, -70, -51, 81, -101, 55, -107, 116, -91, -128, 69, -26, -55, -32, -114, -98, -44, 66, -96, 58, 58, -83, 114, -20, -28, 24, -84, -100, -104, -42, 93, 17, 92, -112, 108, 60, -36, 75, 116, 24, -91, 66, -69, -88, 104, 122, -44, -112, 94, 21, 78, 63, 73, 36, -22, -85, 15, -111, 114, -50, 66, -33, 119, -104, -38, 81, 7, -50, -104, -9, -69, 26, 38, -113, -52, 80, -67, -63, 62, 119, -31, 72, -40, 39, -74, -83, -105, 17, 47, 29, -112, -56, 15, -24, -88, -126, 35, -32, -1, 29, 18, 75, 85, 4, -60, 39, 93, -32, -37, -19, -8, 63, -98, 60, -127, 81, 30, 10, -104, -46, -74, 123, -68, 85, -79, 80, 120, 116, 104, -79, -81, -45, 71, -22, 56, 126, 69, -116, 36, 13, 32, -92, -109, -113, 110, -93, 113, -83, 57, 62, 5, 53, -123, -10, 59, -72, -84};
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
    msg.setTimeStamp(0.159008162794);
    msg.setSource(64294U);
    msg.setSourceEntity(8U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.144091880544);
    msg.setSource(3869U);
    msg.setSourceEntity(108U);
    msg.setDestination(31117U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.675042066934);
    msg.setSource(4240U);
    msg.setSourceEntity(56U);
    msg.setDestination(37065U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.280992028659);
    msg.setSource(43269U);
    msg.setSourceEntity(13U);
    msg.setDestination(22157U);
    msg.setDestinationEntity(182U);
    msg.target = 42623U;
    msg.bearing = 0.746300499981;
    msg.elevation = 0.150595886515;

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
    msg.setTimeStamp(0.432527719885);
    msg.setSource(50946U);
    msg.setSourceEntity(229U);
    msg.setDestination(48866U);
    msg.setDestinationEntity(182U);
    msg.target = 42340U;
    msg.bearing = 0.886355129712;
    msg.elevation = 0.738025728129;

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
    msg.setTimeStamp(0.0497642289536);
    msg.setSource(7881U);
    msg.setSourceEntity(84U);
    msg.setDestination(28108U);
    msg.setDestinationEntity(138U);
    msg.target = 61955U;
    msg.bearing = 0.572825791688;
    msg.elevation = 0.206469438499;

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
    msg.setTimeStamp(0.472058203599);
    msg.setSource(47453U);
    msg.setSourceEntity(150U);
    msg.setDestination(32460U);
    msg.setDestinationEntity(188U);
    msg.target = 43823U;
    msg.x = 0.681888334639;
    msg.y = 0.00920615752234;
    msg.z = 0.342153787185;

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
    msg.setTimeStamp(0.177772399103);
    msg.setSource(17705U);
    msg.setSourceEntity(191U);
    msg.setDestination(14620U);
    msg.setDestinationEntity(83U);
    msg.target = 43694U;
    msg.x = 0.514463767053;
    msg.y = 0.430645478953;
    msg.z = 0.983262815102;

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
    msg.setTimeStamp(0.566667580299);
    msg.setSource(55113U);
    msg.setSourceEntity(8U);
    msg.setDestination(56608U);
    msg.setDestinationEntity(214U);
    msg.target = 13240U;
    msg.x = 0.642391868048;
    msg.y = 0.862426505281;
    msg.z = 0.382019126424;

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
    msg.setTimeStamp(0.735857518267);
    msg.setSource(26975U);
    msg.setSourceEntity(63U);
    msg.setDestination(7823U);
    msg.setDestinationEntity(235U);
    msg.target = 57014U;
    msg.lat = 0.994089794897;
    msg.lon = 0.16678516807;
    msg.z_units = 64U;
    msg.z = 0.388568535004;

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
    msg.setTimeStamp(0.847237450763);
    msg.setSource(16144U);
    msg.setSourceEntity(94U);
    msg.setDestination(55218U);
    msg.setDestinationEntity(138U);
    msg.target = 26177U;
    msg.lat = 0.725372418176;
    msg.lon = 0.496440681184;
    msg.z_units = 230U;
    msg.z = 0.689297547125;

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
    msg.setTimeStamp(0.125773090357);
    msg.setSource(40820U);
    msg.setSourceEntity(63U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(114U);
    msg.target = 41958U;
    msg.lat = 0.359733901592;
    msg.lon = 0.15188632871;
    msg.z_units = 101U;
    msg.z = 0.378452473371;

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
    msg.setTimeStamp(0.651482769805);
    msg.setSource(54745U);
    msg.setSourceEntity(118U);
    msg.setDestination(21516U);
    msg.setDestinationEntity(19U);
    msg.locale.assign("PCTZULTANUSOBRBSOBNWHSZSRNDTNYWPIAXQVOAPVHGPZVGVPGGNEEHXIOVQFEXYGHAYZJXRQRLGSQTXQOAFVKYNFEUQMAFPRTSVFJBLIIBIRIZXVCQQJOKAXJQOPUEOBYLYFFBDDPJWHLHWFCWKMNLBSJOEHLDWXCKMRMDJLZCBCXZUMFWYARDDUZKHIMMJPYDITWCWZSZEHKCUNALIEKUSVIJTXTMKGNCLGSEGRCT");
    const char tmp_msg_0[] = {-70, 92, -59, -104, -124, 54, 81, -5, -55, -81, -40, -105, -103, 98, -90, -88, 122, 1, -43, -105, 44, 119, -34, 37, -15, -25, -57, -57, 48, -5, 14, 19, 120, 67, 94, 69, 41, 62, -12, 10, 19, 13, 81, 10, -34, 43, 6, -125, 47, -28, -54, 12, -19, -20, 1, -124, -3, 88, -58, 126, 103, -66, -27, 122, -110, -6, 72, -75, 16, -123, 119, 91, 115, 67, -97, 42, -98, -58, -45, 99, -43, -95, -116, -8, -78, -94, -106, -74, 64, -21, 120, 77, -25, -59, -56, -45, -48, 123, -17, -90, 9, -101, -58, -74, 32, 4, 31, -40, 74, 122, 84, -124, -64, 77, 14, 2, -92, -48, -2, -87, 19, -9, 43, -18, -115, 122, -58, 50, 91, -76, 54, 87, -103, 95, -51, 7, 111, -31, 43, 21, 76, -123, 95, -33, -99, -117, -127, 72, 11, -18, 104, -55, 54, 64, 79, 45, 84, 3, 123, 78, 111, 16, -114, 94, 10, -25, 19, 21, 70, -70, 77, 34, -34, -60, -10, 24, 17, -23, 99, -6, -14, -41, -87, 38, -67, -92, -46, -28, 71, -107, -78, -126, -21, 45, -82, -50, 37, -126, -81, -67, -101, -80, -83, 70, -116, 59, 77, -125, 71, 33, 92, 105, -5, -91, -84, 82, 119, 69, -69, -46, -43, -7, 73, -37, -126, 78, 34};
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
    msg.setTimeStamp(0.945264739474);
    msg.setSource(21239U);
    msg.setSourceEntity(220U);
    msg.setDestination(63010U);
    msg.setDestinationEntity(185U);
    msg.locale.assign("GJGKBDHULBJTXBNOVTYVXCACVOIVWGQLDZDRJYIZDHCNPYQOFOJTQJFMYIOEEDNHVMCGCVIUVSKLRBY");
    const char tmp_msg_0[] = {67, 14, 40, -72, -124, 111, 123, -30, 116, -94, -21, -9, 52, 108, 123, 108, -117, 52, 96, 38, 107, 81, 121, -90, 14, 73, 118, -33, 87, -101, 48, -58, -109, 68, 10, 36, -99, -97, 23, 108, 88, -122, 85, -9, -28, 4, 48, -66, -113, 51, 116, 97, 50, -30, -57, -65, -35, -54, 6, 104, -3, 90, 8, 116, -23, -7, -13, -24, 91, -126, 22, 82, 3, -121, -21, -55, -111, 88, -43};
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
    msg.setTimeStamp(0.396671419191);
    msg.setSource(39983U);
    msg.setSourceEntity(159U);
    msg.setDestination(64879U);
    msg.setDestinationEntity(237U);
    msg.locale.assign("BUNTQDKHJZBFFYSROYJARXSLXZONQXRSIHLOKONDKUJXJXBGVDRJNRVW");
    const char tmp_msg_0[] = {-64, 103, -33, -35, 5, -88, -66, 114, -5, 111, 84, 43, 110, -119, -17, -48, -100, -89, 111, 38, -36, -100, 119, 7, 66, -81, 83, 122, 96, -86, 22, 11, -44, 126, -126, 15, -62, -64, -79, -26, -123, 14, 102, -26, -61, 1, 3, -24, 106, -83, -50, 117, -59, 61, 13, -42, -10, 41, -34, 110, -110, -123, -79, -107, -86, -51, 21, -64, -24, -42, 118, 68, -26, 78, -3, 97, 119, 25, 25, -80, -57, 62, -115, -39, 5, -36, -66, -21, 0, -118, -46, -86, -82, -64, 70, -60, -57, -90, 50, -123, -100, -5, 93, -125, 16, 102, 111, 18, -29, 42, -115, -12, -29, 66, -19, -120, -55, -11, 93, 38, 109, 84, 4, 70, 28, -23, 99, 99, -86, -9, -98, -111, -57, -107, -44, -69, 45, -114, -17, -101, 53, 55, -37, 69, 110, -35, 103, 77, 37, 83, 42, -62, -43, -23, -40, 20, 80, 72, -110, 13, -57, 64, 111, 31, 125, -40, -117, 115, -78, 88, -1, 63, 84, 3, -82, -12, -51};
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
    msg.setTimeStamp(0.0284830107554);
    msg.setSource(3494U);
    msg.setSourceEntity(174U);
    msg.setDestination(61021U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.877771598967);
    msg.setSource(35669U);
    msg.setSourceEntity(226U);
    msg.setDestination(14909U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.32995764715);
    msg.setSource(61284U);
    msg.setSourceEntity(61U);
    msg.setDestination(27516U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.876506015497);
    msg.setSource(44771U);
    msg.setSourceEntity(16U);
    msg.setDestination(39932U);
    msg.setDestinationEntity(118U);
    msg.camid = 128U;
    msg.x = 14810U;
    msg.y = 11290U;

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
    msg.setTimeStamp(0.937856579898);
    msg.setSource(49226U);
    msg.setSourceEntity(129U);
    msg.setDestination(65409U);
    msg.setDestinationEntity(237U);
    msg.camid = 95U;
    msg.x = 2326U;
    msg.y = 37850U;

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
    msg.setTimeStamp(0.000733327319873);
    msg.setSource(20278U);
    msg.setSourceEntity(168U);
    msg.setDestination(64437U);
    msg.setDestinationEntity(4U);
    msg.camid = 187U;
    msg.x = 36392U;
    msg.y = 22075U;

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
    msg.setTimeStamp(0.927630778214);
    msg.setSource(2234U);
    msg.setSourceEntity(79U);
    msg.setDestination(44481U);
    msg.setDestinationEntity(176U);
    msg.camid = 14U;
    msg.x = 9376U;
    msg.y = 20219U;

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
    msg.setTimeStamp(0.884893564831);
    msg.setSource(49179U);
    msg.setSourceEntity(220U);
    msg.setDestination(58873U);
    msg.setDestinationEntity(231U);
    msg.camid = 66U;
    msg.x = 34812U;
    msg.y = 39036U;

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
    msg.setTimeStamp(0.538534045962);
    msg.setSource(4621U);
    msg.setSourceEntity(128U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(4U);
    msg.camid = 113U;
    msg.x = 42391U;
    msg.y = 38846U;

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
    msg.setTimeStamp(0.290064825846);
    msg.setSource(27379U);
    msg.setSourceEntity(134U);
    msg.setDestination(52319U);
    msg.setDestinationEntity(85U);
    msg.tracking = 60U;
    msg.lat = 0.895478775478;
    msg.lon = 0.375246800901;
    msg.x = 0.324868799834;
    msg.y = 0.713990680485;
    msg.z = 0.204211302623;

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
    msg.setTimeStamp(0.603823389298);
    msg.setSource(25328U);
    msg.setSourceEntity(148U);
    msg.setDestination(1963U);
    msg.setDestinationEntity(20U);
    msg.tracking = 81U;
    msg.lat = 0.285121875256;
    msg.lon = 0.670137782473;
    msg.x = 0.646089069414;
    msg.y = 0.167369258684;
    msg.z = 0.186488991756;

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
    msg.setTimeStamp(0.10985219992);
    msg.setSource(20431U);
    msg.setSourceEntity(217U);
    msg.setDestination(44258U);
    msg.setDestinationEntity(180U);
    msg.tracking = 156U;
    msg.lat = 0.678857849172;
    msg.lon = 0.586819594482;
    msg.x = 0.892260776217;
    msg.y = 0.670467378923;
    msg.z = 0.172193660376;

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
    msg.setTimeStamp(0.976232684532);
    msg.setSource(50339U);
    msg.setSourceEntity(181U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(128U);
    msg.target.assign("OPYJORDELJEYFNUPKUTNQEWIZKTYLXPXMYJZKDDSUVZLBAIYDJBLTJDALJHOXJKHKIQGBQBEAHOFFFIZ");
    msg.lbearing = 0.598813179986;
    msg.lelevation = 0.727893562816;
    msg.bearing = 0.732041583239;
    msg.elevation = 0.424513331474;
    msg.phi = 0.525151385576;
    msg.theta = 0.195669945167;
    msg.psi = 0.39749040347;
    msg.accuracy = 0.757012162362;

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
    msg.setTimeStamp(0.327665287302);
    msg.setSource(54768U);
    msg.setSourceEntity(253U);
    msg.setDestination(62066U);
    msg.setDestinationEntity(242U);
    msg.target.assign("MSLNXDQUBCBPZUTVNGIMLUQSKTCHMGDGAIBXJIUCRLNNWWITORFWNVIDHLHGWOGUAMMGRSRPRLMUWIYYIHBAWPQDVCYIDBDETJOERCXKHCC");
    msg.lbearing = 0.0504337366239;
    msg.lelevation = 0.102390409516;
    msg.bearing = 0.326109374711;
    msg.elevation = 0.725702259054;
    msg.phi = 0.925821361419;
    msg.theta = 0.503360212837;
    msg.psi = 0.474206297028;
    msg.accuracy = 0.300508826523;

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
    msg.setTimeStamp(0.333443302077);
    msg.setSource(42329U);
    msg.setSourceEntity(182U);
    msg.setDestination(4788U);
    msg.setDestinationEntity(70U);
    msg.target.assign("JNDZFQRSGGSYDQJWEIUAYSKQZMEDXNKLHQHIMOCCNCPAUUSAPVQLBPCDWWQVDFRJCTPUVGLTFTBBKIDKRAJRLVHZNZXVCEPOGYHYCTTGWFBPRMKPXPFOHJNSFZYSUEGHMVMIUAFOZOGLLQYBAYLASQITXTZIMXVWWMURZRPSEHILUFFNXJJCOHBMMKA");
    msg.lbearing = 0.999071960344;
    msg.lelevation = 0.220305349307;
    msg.bearing = 0.747899466919;
    msg.elevation = 0.756680579022;
    msg.phi = 0.485812883364;
    msg.theta = 0.0740608690371;
    msg.psi = 0.608724788717;
    msg.accuracy = 0.19074793763;

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
    msg.setTimeStamp(0.858027108405);
    msg.setSource(39378U);
    msg.setSourceEntity(222U);
    msg.setDestination(47324U);
    msg.setDestinationEntity(163U);
    msg.target.assign("SZAQMHSXRQGFVHHYLZFOGEBLAYJTKLLKQNBOPBBJQPIJHYKKAPPJEULTGKFHFKFUGHZRQWZFEBBANBCSAMCOGDHYTBXRJEOWDIVPIGZFGIGPQPHCOZLYRJEXDVAEANEYUVAZMVCDJPUBCKLWFMIWCCMUJDLBIRZDAWUNMHKMPRDWVA");
    msg.x = 0.649112109998;
    msg.y = 0.430610087815;
    msg.z = 0.856409760795;
    msg.n = 0.770874389923;
    msg.e = 0.702398346393;
    msg.d = 0.450580859924;
    msg.phi = 0.59633852627;
    msg.theta = 0.674975031143;
    msg.psi = 0.67394179788;
    msg.accuracy = 0.384296108219;

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
    msg.setTimeStamp(0.261478375509);
    msg.setSource(33498U);
    msg.setSourceEntity(9U);
    msg.setDestination(20705U);
    msg.setDestinationEntity(238U);
    msg.target.assign("QWUPCRYJFDRBWMFDHYPVMURKYPJTWDLTNT");
    msg.x = 0.700498786632;
    msg.y = 0.818556210877;
    msg.z = 0.284933756053;
    msg.n = 0.800858433141;
    msg.e = 0.446283554049;
    msg.d = 0.716130021866;
    msg.phi = 0.0380491588331;
    msg.theta = 0.357740409597;
    msg.psi = 0.765710814519;
    msg.accuracy = 0.445012833912;

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
    msg.setTimeStamp(0.220641213028);
    msg.setSource(679U);
    msg.setSourceEntity(44U);
    msg.setDestination(1745U);
    msg.setDestinationEntity(53U);
    msg.target.assign("REUXZAWMTGGYSSIOIRBMFGFHKNHTDA");
    msg.x = 0.337945121575;
    msg.y = 0.227134635706;
    msg.z = 0.752831041182;
    msg.n = 0.684613144089;
    msg.e = 0.886805403515;
    msg.d = 0.0865060259567;
    msg.phi = 0.663842868876;
    msg.theta = 0.709734058242;
    msg.psi = 0.641534435569;
    msg.accuracy = 0.466871758468;

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
    msg.setTimeStamp(0.381472091773);
    msg.setSource(53825U);
    msg.setSourceEntity(162U);
    msg.setDestination(24763U);
    msg.setDestinationEntity(64U);
    msg.target.assign("GCDPOPUAKEAWUJRKQOQFFTFHRXCCVW");
    msg.lat = 0.888047938984;
    msg.lon = 0.246321156962;
    msg.z_units = 95U;
    msg.z = 0.980479199328;
    msg.accuracy = 0.207472680362;

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
    msg.setTimeStamp(0.26094219992);
    msg.setSource(30975U);
    msg.setSourceEntity(201U);
    msg.setDestination(22463U);
    msg.setDestinationEntity(173U);
    msg.target.assign("SPNFGFKXOJCJGNKLDGNTLCMSTZBAVBIJWTTSVMVHYVUGMSAHQTDQFNEBKIAIDLXEDPXFUZP");
    msg.lat = 0.906804159983;
    msg.lon = 0.638321238772;
    msg.z_units = 243U;
    msg.z = 0.852311000549;
    msg.accuracy = 0.567210052842;

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
    msg.setTimeStamp(0.929318157064);
    msg.setSource(25363U);
    msg.setSourceEntity(126U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(115U);
    msg.target.assign("SVPUMSFKTAWYLEVDCTPKPMQIZBBFQVTHKZENIVSEMXBPLGDXEDVPJRDYXJSTBRTCDVHLJRAUNHIZZOMNKGWQAKUFVOTIIGQJFCJQNZRJCKUHPDNIERLXASZGQXGUMENOTKGCAFXFDAOQYUXVOPAWJDHEHLJHYBCWG");
    msg.lat = 0.120178884671;
    msg.lon = 0.14484076246;
    msg.z_units = 153U;
    msg.z = 0.585116761455;
    msg.accuracy = 0.74939520812;

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
    msg.setTimeStamp(0.171307960777);
    msg.setSource(13759U);
    msg.setSourceEntity(161U);
    msg.setDestination(6415U);
    msg.setDestinationEntity(142U);
    msg.name.assign("HTMGXOWYRHYTYLBITMDDFAJZJGDUBWHBIYOVECLTBCMGQAZXFWIPVZNAMEKRPODAOUDKQTBNESGTJISDFPFVCUOLAHEXFVNIBHRPQNOTMHFESZJNEKQOZYGRPUKAABGUVTNRCNGMRKAKUBBJMOGQODUSVX");
    msg.lat = 0.306771907125;
    msg.lon = 0.104464991245;
    msg.z = 0.57321073831;
    msg.z_units = 103U;

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
    msg.setTimeStamp(0.443991823443);
    msg.setSource(16913U);
    msg.setSourceEntity(13U);
    msg.setDestination(55011U);
    msg.setDestinationEntity(246U);
    msg.name.assign("YXZKZLWTWMWVBNIVOHGNAEXJAICZGKSDAMKYPWSTLVQBSVZZPUOWMTRSOJLENVOIJFAUJIYLMJNCEKQWRTUPWQSCTTPCRAVKYFUAJRGOLPGRXFGUMXNSDFGMEKQUOZPVDLVSBEYNRYFUOKLYBGPDCQEDYUHUWJMOELHGLJKJIHZAOS");
    msg.lat = 0.975225823028;
    msg.lon = 0.0445333366615;
    msg.z = 0.773669264679;
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
    msg.setTimeStamp(0.271851173068);
    msg.setSource(61190U);
    msg.setSourceEntity(170U);
    msg.setDestination(48570U);
    msg.setDestinationEntity(55U);
    msg.name.assign("JYYNCBQOGYDZYGJNUDANOBQPRXBAIUPSZCFECRCHPNCWUIQYRODMGUFJCNGDRXNBJHFPITLKTIWVHOBEXDZSMKFXHXLSJEHNDEAEDKPMHSVKMHWMUPWWXWT");
    msg.lat = 0.00472700820409;
    msg.lon = 0.966594276436;
    msg.z = 0.916927457061;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.922416126561);
    msg.setSource(24219U);
    msg.setSourceEntity(198U);
    msg.setDestination(58245U);
    msg.setDestinationEntity(181U);
    msg.op = 53U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BYPWYVFQUPITWZH");
    tmp_msg_0.lat = 0.00603449368459;
    tmp_msg_0.lon = 0.539142514464;
    tmp_msg_0.z = 0.979035330968;
    tmp_msg_0.z_units = 98U;
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
    msg.setTimeStamp(0.394023938573);
    msg.setSource(63314U);
    msg.setSourceEntity(248U);
    msg.setDestination(41387U);
    msg.setDestinationEntity(186U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.886746048348);
    msg.setSource(14668U);
    msg.setSourceEntity(94U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(47U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.762532045351);
    msg.setSource(52444U);
    msg.setSourceEntity(196U);
    msg.setDestination(6983U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0146485654284;
    msg.type = 117U;

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
    msg.setTimeStamp(0.739811989066);
    msg.setSource(62435U);
    msg.setSourceEntity(34U);
    msg.setDestination(14643U);
    msg.setDestinationEntity(194U);
    msg.value = 0.075464540489;
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
    msg.setTimeStamp(0.517320816849);
    msg.setSource(14826U);
    msg.setSourceEntity(169U);
    msg.setDestination(64462U);
    msg.setDestinationEntity(59U);
    msg.value = 0.128179405076;
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
    msg.setTimeStamp(0.928654597152);
    msg.setSource(56700U);
    msg.setSourceEntity(30U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(127U);
    msg.value = 0.296639492501;

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
    msg.setTimeStamp(0.51203496583);
    msg.setSource(52807U);
    msg.setSourceEntity(52U);
    msg.setDestination(55179U);
    msg.setDestinationEntity(137U);
    msg.value = 0.731803130093;

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
    msg.setTimeStamp(0.56890689413);
    msg.setSource(4653U);
    msg.setSourceEntity(177U);
    msg.setDestination(48191U);
    msg.setDestinationEntity(246U);
    msg.value = 0.368568342856;

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
    msg.setTimeStamp(0.205470377554);
    msg.setSource(31066U);
    msg.setSourceEntity(172U);
    msg.setDestination(6378U);
    msg.setDestinationEntity(130U);
    msg.timestamp_last_service = 0.210492860432;
    msg.time_next_service = 0.163216276691;
    msg.time_motor_next_service = 0.333000546956;
    msg.time_idle_ground = 0.221968097454;
    msg.time_idle_air = 0.613523824881;
    msg.time_idle_water = 0.0682861008983;
    msg.time_idle_underwater = 0.541113329762;
    msg.time_idle_unknown = 0.426654109487;
    msg.time_motor_ground = 0.434504446235;
    msg.time_motor_air = 0.697853243251;
    msg.time_motor_water = 0.315390203108;
    msg.time_motor_underwater = 0.27945915659;
    msg.time_motor_unknown = 0.506610689859;
    msg.rpm_min = 14272;
    msg.rpm_max = -1537;
    msg.depth_max = 0.868337228034;

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
    msg.setTimeStamp(0.484507208606);
    msg.setSource(47598U);
    msg.setSourceEntity(52U);
    msg.setDestination(40819U);
    msg.setDestinationEntity(2U);
    msg.timestamp_last_service = 0.501545906314;
    msg.time_next_service = 0.452481930654;
    msg.time_motor_next_service = 0.239590992933;
    msg.time_idle_ground = 0.232036742186;
    msg.time_idle_air = 0.386211650101;
    msg.time_idle_water = 0.560970828593;
    msg.time_idle_underwater = 0.169396704413;
    msg.time_idle_unknown = 0.933504057763;
    msg.time_motor_ground = 0.372307394273;
    msg.time_motor_air = 0.703571645001;
    msg.time_motor_water = 0.462050497089;
    msg.time_motor_underwater = 0.354797436833;
    msg.time_motor_unknown = 0.106017037476;
    msg.rpm_min = -6715;
    msg.rpm_max = 26369;
    msg.depth_max = 0.932643989731;

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
    msg.setTimeStamp(0.403447197896);
    msg.setSource(42040U);
    msg.setSourceEntity(175U);
    msg.setDestination(27299U);
    msg.setDestinationEntity(76U);
    msg.timestamp_last_service = 0.669467978463;
    msg.time_next_service = 0.502306956004;
    msg.time_motor_next_service = 0.345237570603;
    msg.time_idle_ground = 0.54081820643;
    msg.time_idle_air = 0.18377511748;
    msg.time_idle_water = 0.490779113733;
    msg.time_idle_underwater = 0.807897997164;
    msg.time_idle_unknown = 0.360121511876;
    msg.time_motor_ground = 0.570189302043;
    msg.time_motor_air = 0.99946328523;
    msg.time_motor_water = 0.494009105735;
    msg.time_motor_underwater = 0.957411932278;
    msg.time_motor_unknown = 0.171150129136;
    msg.rpm_min = -14060;
    msg.rpm_max = -15777;
    msg.depth_max = 0.803090830378;

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
    msg.setTimeStamp(0.921556917384);
    msg.setSource(38503U);
    msg.setSourceEntity(115U);
    msg.setDestination(19068U);
    msg.setDestinationEntity(21U);
    msg.severity = 218U;
    msg.text.assign("DYCFANKDEVXSHBDHXOBERROVUOCJCXDLLWTIJVZBPLOTBXFYJMIQJWYMSGRKMGQASWZGPNLGGMTBWK");

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
    msg.setTimeStamp(0.924969553155);
    msg.setSource(56740U);
    msg.setSourceEntity(27U);
    msg.setDestination(61772U);
    msg.setDestinationEntity(10U);
    msg.severity = 153U;
    msg.text.assign("ESHKSJVMYGLFXTREKURCDBIXPINUCJKBRVMEQPMAHWBFPQZDNKPNHDTUZRGKPWZOQLLAOCDUTMQNZLAJYEHBFDKFFFISEILAYEADZRTLTANUSSHNQODNGJGLMODWSVUAPXNCWBSEJPYKIDCYQNTOYCHWGWZYGXONRBPKOKPUWMCBODRMTJACHXLZZBIQVTXIAMUORVJRFEXGYMIUKGSWHJTQIWCSUEEBFIXVXVJMF");

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
    msg.setTimeStamp(0.316818891319);
    msg.setSource(63915U);
    msg.setSourceEntity(26U);
    msg.setDestination(47411U);
    msg.setDestinationEntity(110U);
    msg.severity = 40U;
    msg.text.assign("ZJRQORSCOKXKITFUYHPKWKHWTUMRGHBNDNLSKCCTMEZECXLIRCBJQLYUAYSRDLJXLTPUGMNQMQAQKRJVGFHOYBWIPIGIOSHJGNXUBUSMSFHPDVCUVLHVPJXBCLHQZEAWFWZYRFCEYWRMDAMJNSOPWBGHALDDCOASWMQWIIGVKYTTZVNKTUYPAEBWLFHOTDTDMEUUQFECDVGNVGZAIZMYOLRFPAQXFXTJZEJRIQXVGEZIB");

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
    msg.setTimeStamp(0.327869082584);
    msg.setSource(11431U);
    msg.setSourceEntity(244U);
    msg.setDestination(55457U);
    msg.setDestinationEntity(154U);
    msg.channel = 43;
    msg.value = -890323018;
    msg.gain = 157U;

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
    msg.setTimeStamp(0.207362918258);
    msg.setSource(29231U);
    msg.setSourceEntity(45U);
    msg.setDestination(23683U);
    msg.setDestinationEntity(100U);
    msg.channel = -44;
    msg.value = -1905249025;
    msg.gain = 205U;

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
    msg.setTimeStamp(0.441210484247);
    msg.setSource(6704U);
    msg.setSourceEntity(61U);
    msg.setDestination(3788U);
    msg.setDestinationEntity(211U);
    msg.channel = 81;
    msg.value = -1441902331;
    msg.gain = 178U;

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
    msg.setTimeStamp(0.309442832562);
    msg.setSource(1925U);
    msg.setSourceEntity(181U);
    msg.setDestination(2202U);
    msg.setDestinationEntity(124U);
    msg.ch01 = 0.976377450436;
    msg.ch02 = 0.719072325449;
    msg.ch03 = 0.549882237685;
    msg.ch04 = 0.61968271076;
    msg.ch05 = 0.021797404658;
    msg.ch06 = 0.32346498758;
    msg.ch07 = 0.517706679316;
    msg.ch08 = 0.232371829875;
    msg.ch09 = 0.504738341977;
    msg.ch10 = 0.92706143881;
    msg.ch11 = 0.468011240831;
    msg.ch12 = 0.830169667676;
    msg.ch13 = 0.179413960928;
    msg.ch14 = 0.495803151045;
    msg.ch15 = 0.200990968051;
    msg.ch16 = 0.996836728988;

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
    msg.setTimeStamp(0.68491407769);
    msg.setSource(3299U);
    msg.setSourceEntity(162U);
    msg.setDestination(57141U);
    msg.setDestinationEntity(16U);
    msg.ch01 = 0.562691710932;
    msg.ch02 = 0.122983299772;
    msg.ch03 = 0.811049270967;
    msg.ch04 = 0.0648846196403;
    msg.ch05 = 0.441404055043;
    msg.ch06 = 0.172584098561;
    msg.ch07 = 0.747085894221;
    msg.ch08 = 0.97353127065;
    msg.ch09 = 0.601952871544;
    msg.ch10 = 0.884768856112;
    msg.ch11 = 0.855708484859;
    msg.ch12 = 0.682659058007;
    msg.ch13 = 0.0548942113792;
    msg.ch14 = 0.90172303502;
    msg.ch15 = 0.36974772118;
    msg.ch16 = 0.18741456841;

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
    msg.setTimeStamp(0.28742717783);
    msg.setSource(31857U);
    msg.setSourceEntity(145U);
    msg.setDestination(41970U);
    msg.setDestinationEntity(221U);
    msg.ch01 = 0.579345045726;
    msg.ch02 = 0.749457622642;
    msg.ch03 = 0.801012123436;
    msg.ch04 = 0.184075693584;
    msg.ch05 = 0.0548484079816;
    msg.ch06 = 0.710936655149;
    msg.ch07 = 0.0842118816395;
    msg.ch08 = 0.356564386568;
    msg.ch09 = 0.87843601717;
    msg.ch10 = 0.708297379254;
    msg.ch11 = 0.928974547234;
    msg.ch12 = 0.565091936819;
    msg.ch13 = 0.0608060227406;
    msg.ch14 = 0.740755004447;
    msg.ch15 = 0.911072007858;
    msg.ch16 = 0.632910777222;

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
    msg.setTimeStamp(0.571265568078);
    msg.setSource(45671U);
    msg.setSourceEntity(161U);
    msg.setDestination(44621U);
    msg.setDestinationEntity(176U);
    msg.time = 0.553823785747;
    msg.ang = 0.8730904898;

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
    msg.setTimeStamp(0.872025589578);
    msg.setSource(45436U);
    msg.setSourceEntity(94U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(55U);
    msg.time = 0.218108901112;
    msg.ang = 0.512900540628;

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
    msg.setTimeStamp(0.42150566576);
    msg.setSource(1061U);
    msg.setSourceEntity(158U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(143U);
    msg.time = 0.34119910992;
    msg.ang = 0.185557466813;

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
    msg.setTimeStamp(0.118576760904);
    msg.setSource(6114U);
    msg.setSourceEntity(134U);
    msg.setDestination(491U);
    msg.setDestinationEntity(242U);
    msg.value = 0.883985662098;

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
    msg.setTimeStamp(0.341702745231);
    msg.setSource(18628U);
    msg.setSourceEntity(52U);
    msg.setDestination(27445U);
    msg.setDestinationEntity(133U);
    msg.value = 0.21387246972;

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
    msg.setTimeStamp(0.528723124683);
    msg.setSource(20008U);
    msg.setSourceEntity(157U);
    msg.setDestination(4092U);
    msg.setDestinationEntity(109U);
    msg.value = 0.310125916706;

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
    msg.setTimeStamp(0.839306482814);
    msg.setSource(51126U);
    msg.setSourceEntity(54U);
    msg.setDestination(63344U);
    msg.setDestinationEntity(84U);
    msg.value = 0.904810417042;

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
    msg.setTimeStamp(0.356073172693);
    msg.setSource(1903U);
    msg.setSourceEntity(135U);
    msg.setDestination(19429U);
    msg.setDestinationEntity(16U);
    msg.value = 0.548616413343;

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
    msg.setTimeStamp(0.14801469668);
    msg.setSource(16952U);
    msg.setSourceEntity(252U);
    msg.setDestination(3890U);
    msg.setDestinationEntity(238U);
    msg.value = 0.614141334874;

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
    msg.setTimeStamp(0.364639682505);
    msg.setSource(29107U);
    msg.setSourceEntity(196U);
    msg.setDestination(53285U);
    msg.setDestinationEntity(154U);
    msg.value = 0.880366156589;

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
    msg.setTimeStamp(0.820953970825);
    msg.setSource(6776U);
    msg.setSourceEntity(142U);
    msg.setDestination(1044U);
    msg.setDestinationEntity(215U);
    msg.value = 0.640100173473;

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
    msg.setTimeStamp(0.085179370679);
    msg.setSource(21071U);
    msg.setSourceEntity(50U);
    msg.setDestination(7956U);
    msg.setDestinationEntity(108U);
    msg.value = 0.393096752603;

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
    msg.setTimeStamp(0.704176973797);
    msg.setSource(12311U);
    msg.setSourceEntity(106U);
    msg.setDestination(9417U);
    msg.setDestinationEntity(240U);
    msg.l2 = -37;
    msg.l3 = -99;
    msg.iridium = -60;
    msg.modem = -4;
    msg.pumps = -8;
    msg.vhf = -79;

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
    msg.setTimeStamp(0.585705930363);
    msg.setSource(63793U);
    msg.setSourceEntity(202U);
    msg.setDestination(53738U);
    msg.setDestinationEntity(155U);
    msg.l2 = -46;
    msg.l3 = -24;
    msg.iridium = 21;
    msg.modem = 33;
    msg.pumps = -63;
    msg.vhf = -8;

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
    msg.setTimeStamp(0.323568781793);
    msg.setSource(52670U);
    msg.setSourceEntity(225U);
    msg.setDestination(191U);
    msg.setDestinationEntity(205U);
    msg.l2 = 125;
    msg.l3 = 125;
    msg.iridium = 86;
    msg.modem = 20;
    msg.pumps = -110;
    msg.vhf = -59;

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

  return test.getReturnValue();
}

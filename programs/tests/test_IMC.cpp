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
// IMC XML MD5: d90ab8a30587da18e36034b3b517c553                            *
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
    msg.setTimeStamp(0.964450120382);
    msg.setSource(25967U);
    msg.setSourceEntity(224U);
    msg.setDestination(61888U);
    msg.setDestinationEntity(92U);
    msg.state = 50U;
    msg.flags = 95U;
    msg.description.assign("QVKCJSKKHVTTDUDYVXOKRNHEBUCBMYXMWHABUITWRUBMLQETGZJSLONKGGYVFDYZQPCVDEHWUNPMNZILLTRFRKOBFZETRGOBLQXHSCMJAMSOWRYWHHPU");

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
    msg.setTimeStamp(0.911640155626);
    msg.setSource(36694U);
    msg.setSourceEntity(156U);
    msg.setDestination(53463U);
    msg.setDestinationEntity(206U);
    msg.state = 200U;
    msg.flags = 178U;
    msg.description.assign("XXUKOULLEOBQHSLDVVWACJDDMTOHBKMZALWZHQPNCHGCCTKDRYOZRDOUYWGBNFPTMIMSTIELFQYAWJESCJVIWYDQHUCZUBAGVBPGNTPFMK");

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
    msg.setTimeStamp(0.567524495905);
    msg.setSource(24471U);
    msg.setSourceEntity(196U);
    msg.setDestination(17826U);
    msg.setDestinationEntity(11U);
    msg.state = 174U;
    msg.flags = 118U;
    msg.description.assign("PKOYOVDUIOAMPYPNBJWNIMGRHUHDISIVAMTIIUOMRXLQ");

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
    msg.setTimeStamp(0.215400406562);
    msg.setSource(46496U);
    msg.setSourceEntity(240U);
    msg.setDestination(31220U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.943031442865);
    msg.setSource(12709U);
    msg.setSourceEntity(179U);
    msg.setDestination(58084U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.627878425067);
    msg.setSource(60949U);
    msg.setSourceEntity(168U);
    msg.setDestination(13066U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.588876314942);
    msg.setSource(4601U);
    msg.setSourceEntity(88U);
    msg.setDestination(38874U);
    msg.setDestinationEntity(226U);
    msg.id = 23U;
    msg.label.assign("BFIXEKELEMCMMRKSQHTLZKSKWOUENTBVYDYZYJPNDFK");
    msg.component.assign("MPZHKRCFGULFNPYGJWILWHEHDCBVVVSSFMHOLNYYSRNMSTGHNEXWUSZLRZUGOYAUFYPJEJDAGDFNJAICXAZOIKKVPUKOWDQTMRCAJTQJEJDBXMSSG");
    msg.act_time = 44779U;
    msg.deact_time = 62280U;

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
    msg.setTimeStamp(0.506914682503);
    msg.setSource(42382U);
    msg.setSourceEntity(243U);
    msg.setDestination(7635U);
    msg.setDestinationEntity(4U);
    msg.id = 159U;
    msg.label.assign("AJUWPQWSFIPCFGRVQPPXZCCEZJZOMTXUET");
    msg.component.assign("KVPYJNJZLEAUMHKFTFNSWZLWPCYMJHQXTELGXYCBWQUTNYXXSMNRVRDDJOZOWHNHUYVHFAIZWHRBPQERBEBAPKWDOYHGRWEFIUAJBALMHIDJSXDACGWXFSKFIMKXUUVNGPAEGPGKVQVBMMNQVTQKHOKVTKYISLIQRCTTZDIYBOFOQBABNHXQAVLNUIFZGZZWPMOCMTTIKBPRORJCXGQSCCTXGVYEDSUEPJLLUMISJEUY");
    msg.act_time = 31795U;
    msg.deact_time = 20799U;

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
    msg.setTimeStamp(0.462330048296);
    msg.setSource(23825U);
    msg.setSourceEntity(230U);
    msg.setDestination(63032U);
    msg.setDestinationEntity(98U);
    msg.id = 91U;
    msg.label.assign("DOKHRJSQDRQL");
    msg.component.assign("HJCVPWFEAPLFOWOYNERBXFCOZMVUMVLEYQTOTQRUNMAGSBQWQWJMKBBYXNNFMFHIWNBHJCGUNHRSSRMDECKBZSFJHASMBKIAEPXBNICQYDGOILWIKYXOQVMQKQQSGOCRDBXIVDTXPTGVEEUHRLEPEFSLXYEODUCSUHBYHNWPZYWGJYGM");
    msg.act_time = 58504U;
    msg.deact_time = 14678U;

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
    msg.setTimeStamp(0.122371991175);
    msg.setSource(24202U);
    msg.setSourceEntity(87U);
    msg.setDestination(23931U);
    msg.setDestinationEntity(81U);
    msg.id = 233U;

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
    msg.setTimeStamp(0.108704047361);
    msg.setSource(321U);
    msg.setSourceEntity(71U);
    msg.setDestination(7369U);
    msg.setDestinationEntity(139U);
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
    msg.setTimeStamp(0.160834561436);
    msg.setSource(40109U);
    msg.setSourceEntity(128U);
    msg.setDestination(47274U);
    msg.setDestinationEntity(64U);
    msg.id = 78U;

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
    msg.setTimeStamp(0.802511951785);
    msg.setSource(45852U);
    msg.setSourceEntity(157U);
    msg.setDestination(61533U);
    msg.setDestinationEntity(102U);
    msg.op = 188U;
    msg.list.assign("FJYOEYZNNAZKJXBUTSJQTHILHTYXDRSNCUDYBKEWBVVZJWIDWRTZRFQICSJYCWAURORKLDZYUECSWLDEXETSWAOPHBIGZBGUBEEQHJPVUZTOJTWCFGEJXOTQWMHHPPMCPKXOKJUIAFOYBLZWMCPFHFHRMBXT");

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
    msg.setTimeStamp(0.147703305655);
    msg.setSource(5235U);
    msg.setSourceEntity(57U);
    msg.setDestination(46432U);
    msg.setDestinationEntity(159U);
    msg.op = 124U;
    msg.list.assign("MKIOLFNTSELLOYMPVKKEZERUVWXAP");

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
    msg.setTimeStamp(0.651480695932);
    msg.setSource(2075U);
    msg.setSourceEntity(125U);
    msg.setDestination(8561U);
    msg.setDestinationEntity(171U);
    msg.op = 132U;
    msg.list.assign("XRZJIJHIQZRECX");

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
    msg.setTimeStamp(0.306769338498);
    msg.setSource(52569U);
    msg.setSourceEntity(202U);
    msg.setDestination(56093U);
    msg.setDestinationEntity(220U);
    msg.value = 144U;

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
    msg.setTimeStamp(0.0256076001754);
    msg.setSource(56726U);
    msg.setSourceEntity(223U);
    msg.setDestination(59814U);
    msg.setDestinationEntity(130U);
    msg.value = 49U;

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
    msg.setTimeStamp(0.273883458361);
    msg.setSource(29108U);
    msg.setSourceEntity(76U);
    msg.setDestination(53940U);
    msg.setDestinationEntity(71U);
    msg.value = 148U;

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
    msg.setTimeStamp(0.657260755974);
    msg.setSource(38462U);
    msg.setSourceEntity(51U);
    msg.setDestination(10435U);
    msg.setDestinationEntity(103U);
    msg.consumer.assign("BTIMFMYPZJOENFROQKSPPHJRQRFRVJULQIVJCOSGOIBTCK");
    msg.message_id = 33814U;

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
    msg.setTimeStamp(0.826178135266);
    msg.setSource(1944U);
    msg.setSourceEntity(70U);
    msg.setDestination(63250U);
    msg.setDestinationEntity(15U);
    msg.consumer.assign("VREIMZSKNQLEKUTWPOBIVKBRWRLNTTBFFWJEPUSDFXXSQNPJYZKUHEATOBIAHPNKPPQBRXSRBRDSVPRGMVINFOQWPGHUJSBAKNEFVOCBIACNWENUICMGPVQTLIH");
    msg.message_id = 51659U;

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
    msg.setTimeStamp(0.814974454997);
    msg.setSource(29658U);
    msg.setSourceEntity(109U);
    msg.setDestination(22334U);
    msg.setDestinationEntity(47U);
    msg.consumer.assign("OQWHSDCEVBYANANJIFFOYIVKEHLUTXHWUEDHJEEPITTVCLGBSRHAKZKEPUJMZSSDUNYYJKXZDCPVNLNWXRGAJGCMXSPSAHYFKFQDORIOBP");
    msg.message_id = 54134U;

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
    msg.setTimeStamp(0.572203756365);
    msg.setSource(33938U);
    msg.setSourceEntity(103U);
    msg.setDestination(7740U);
    msg.setDestinationEntity(87U);
    msg.type = 33U;

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
    msg.setTimeStamp(0.738801133329);
    msg.setSource(891U);
    msg.setSourceEntity(118U);
    msg.setDestination(56799U);
    msg.setDestinationEntity(65U);
    msg.type = 112U;

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
    msg.setTimeStamp(0.866331644731);
    msg.setSource(38192U);
    msg.setSourceEntity(34U);
    msg.setDestination(18657U);
    msg.setDestinationEntity(128U);
    msg.type = 224U;

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
    msg.setTimeStamp(0.754979915337);
    msg.setSource(41003U);
    msg.setSourceEntity(187U);
    msg.setDestination(17468U);
    msg.setDestinationEntity(7U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.769182708148);
    msg.setSource(3599U);
    msg.setSourceEntity(148U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(114U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.784716458275);
    msg.setSource(63581U);
    msg.setSourceEntity(50U);
    msg.setDestination(58512U);
    msg.setDestinationEntity(51U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.276275642396);
    msg.setSource(19307U);
    msg.setSourceEntity(72U);
    msg.setDestination(37560U);
    msg.setDestinationEntity(38U);
    msg.total_steps = 136U;
    msg.step_number = 166U;
    msg.step.assign("PMAMLWGIKCLVZKREZQGVEPLFPCMIHQKYYODWJRVZOHULNZTWWZJXDHKTKQWPONIQGBBTJZZMEOROPCTCFJNL");
    msg.flags = 111U;

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
    msg.setTimeStamp(0.484943463586);
    msg.setSource(53574U);
    msg.setSourceEntity(214U);
    msg.setDestination(14369U);
    msg.setDestinationEntity(191U);
    msg.total_steps = 2U;
    msg.step_number = 30U;
    msg.step.assign("HPCXLBGELGIBGDVRXK");
    msg.flags = 145U;

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
    msg.setTimeStamp(0.780402219295);
    msg.setSource(54459U);
    msg.setSourceEntity(37U);
    msg.setDestination(23309U);
    msg.setDestinationEntity(64U);
    msg.total_steps = 240U;
    msg.step_number = 43U;
    msg.step.assign("LZDKDYXBMVIKYLLVLKFHVYTRTZURCTZUMBDCVFMOIHZNFJAPWNTNJTHGXOBJZEGWMKHESDXTXCSGNAPRMNQUUYYYQHWVKXMULSDBAEKFENPJCZJHWQYJANHFKMZHTDEDBWRJBNSRQGACODAZXOAIDQSKCIEOBIGVJESGXOILIKMGCIOTPUSRYRBVSWIFZAPXGHVEARLCLHAOVJBFXNQZWXUPFRFWSRPPTSEUQPTK");
    msg.flags = 17U;

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
    msg.setTimeStamp(0.693519147056);
    msg.setSource(17199U);
    msg.setSourceEntity(197U);
    msg.setDestination(63735U);
    msg.setDestinationEntity(51U);
    msg.state = 70U;
    msg.error.assign("XOISLJGAVLNQWCFJYCPWFELMIAETHCQLOV");

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
    msg.setTimeStamp(0.615283360659);
    msg.setSource(40133U);
    msg.setSourceEntity(246U);
    msg.setDestination(57127U);
    msg.setDestinationEntity(173U);
    msg.state = 25U;
    msg.error.assign("NECUBVEIETALFJXYWAFHZWPRDVKUODIJGNASFQFXIGL");

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
    msg.setTimeStamp(0.557121267937);
    msg.setSource(19794U);
    msg.setSourceEntity(51U);
    msg.setDestination(50011U);
    msg.setDestinationEntity(198U);
    msg.state = 107U;
    msg.error.assign("SNNYBGFSSEIYEXUDFONSFHCDDEGDRWVISCPCGOIZZNBVZICKYRRKGQQFUMXFJBWXVRKISOJKYBMTURXXMPRMFLBJKCSTQBYICLDTNCAWHRLEZJPNHAZGJDTCEKLOHPSDHIEWUIQOUHMJWLVULVZWMVGIOLZUERMCUWWGTMQONYKRSVNVOJXKMBMEGDZWTDQPXKPFYBVFTFPTXAQEENAGTY");

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
    msg.setTimeStamp(0.295065564544);
    msg.setSource(3698U);
    msg.setSourceEntity(66U);
    msg.setDestination(15205U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.722040849127);
    msg.setSource(61894U);
    msg.setSourceEntity(196U);
    msg.setDestination(33525U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.356848427885);
    msg.setSource(24865U);
    msg.setSourceEntity(61U);
    msg.setDestination(52307U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.716785290491);
    msg.setSource(6837U);
    msg.setSourceEntity(111U);
    msg.setDestination(8259U);
    msg.setDestinationEntity(85U);
    msg.op = 101U;
    msg.speed_min = 0.221645572474;
    msg.speed_max = 0.180732313786;
    msg.long_accel = 0.222606936794;
    msg.alt_max_msl = 0.616928786113;
    msg.dive_fraction_max = 0.0400835119931;
    msg.climb_fraction_max = 0.535223609028;
    msg.bank_max = 0.519665445879;
    msg.p_max = 0.613384586645;
    msg.pitch_min = 0.977570414245;
    msg.pitch_max = 0.492798304588;
    msg.q_max = 0.206879277431;
    msg.g_min = 0.963932509383;
    msg.g_max = 0.172763224124;
    msg.g_lat_max = 0.186457233546;
    msg.rpm_min = 0.0676165337501;
    msg.rpm_max = 0.942133128521;
    msg.rpm_rate_max = 0.836100226469;

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
    msg.setTimeStamp(0.360821230759);
    msg.setSource(45282U);
    msg.setSourceEntity(89U);
    msg.setDestination(24386U);
    msg.setDestinationEntity(152U);
    msg.op = 116U;
    msg.speed_min = 0.152708127911;
    msg.speed_max = 0.844675753323;
    msg.long_accel = 0.876666694288;
    msg.alt_max_msl = 0.183766829291;
    msg.dive_fraction_max = 0.652760332139;
    msg.climb_fraction_max = 0.0308003047721;
    msg.bank_max = 0.640737710773;
    msg.p_max = 0.355644323172;
    msg.pitch_min = 0.0382062726903;
    msg.pitch_max = 0.64060471461;
    msg.q_max = 0.780794757963;
    msg.g_min = 0.602645855576;
    msg.g_max = 0.555021016371;
    msg.g_lat_max = 0.614083996764;
    msg.rpm_min = 0.98903895905;
    msg.rpm_max = 0.534740765466;
    msg.rpm_rate_max = 0.710944299952;

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
    msg.setTimeStamp(0.0801908729725);
    msg.setSource(49336U);
    msg.setSourceEntity(168U);
    msg.setDestination(60146U);
    msg.setDestinationEntity(147U);
    msg.op = 101U;
    msg.speed_min = 0.137389219767;
    msg.speed_max = 0.762885736802;
    msg.long_accel = 0.626009267751;
    msg.alt_max_msl = 0.214965689662;
    msg.dive_fraction_max = 0.591234000009;
    msg.climb_fraction_max = 0.00537790408242;
    msg.bank_max = 0.805395157816;
    msg.p_max = 0.896798481128;
    msg.pitch_min = 0.333541119246;
    msg.pitch_max = 0.165242564376;
    msg.q_max = 0.441442755512;
    msg.g_min = 0.318159081907;
    msg.g_max = 0.628301430296;
    msg.g_lat_max = 0.604949156656;
    msg.rpm_min = 0.0168473385419;
    msg.rpm_max = 0.673949302695;
    msg.rpm_rate_max = 0.61978112359;

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
    msg.setTimeStamp(0.845555431111);
    msg.setSource(43511U);
    msg.setSourceEntity(40U);
    msg.setDestination(15445U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.263253176092);
    msg.setSource(46818U);
    msg.setSourceEntity(65U);
    msg.setDestination(49152U);
    msg.setDestinationEntity(31U);
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("KRLYKNLWLDXWAZOWWWYTVBRQSSBIIRUQONPDUGEVJEMVXRSSODRCXILFJTZQIJHCTCMXGAMAKKDOJTDPPULDELPAGYPUBFKUQQBAVXYIWVSFTSQMQUCVTWLRRAEUVFITMLOTIGPIFROVGZUVMCHBEHFSHGFGBINZJSQDAYZKPMQWPMWLJZNOYTONEDHHUDTIKYNNZZBCMKHCFZX");
    tmp_msg_0.action = 64U;
    tmp_msg_0.grouplist.assign("JGYJYOSOOMNOVINZKDBWQVMRNKXQUNYZGSPTRXFYRJVDZXWZXBQPRYVYCRTKGJEEUIGFDGQSSAOMALVETRDZSUMTY");
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
    msg.setTimeStamp(0.441893014568);
    msg.setSource(38471U);
    msg.setSourceEntity(2U);
    msg.setDestination(52258U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.646457401427);
    msg.setSource(3770U);
    msg.setSourceEntity(35U);
    msg.setDestination(39355U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.527707666879;
    msg.lon = 0.415432784974;
    msg.height = 0.966711732827;
    msg.x = 0.173748105465;
    msg.y = 0.859104230222;
    msg.z = 0.239702365887;
    msg.phi = 0.0973572531781;
    msg.theta = 0.941921833873;
    msg.psi = 0.917542468966;
    msg.u = 0.210596768561;
    msg.v = 0.178533521818;
    msg.w = 0.888003001975;
    msg.p = 0.604954862739;
    msg.q = 0.338687380348;
    msg.r = 0.68051653192;
    msg.svx = 0.298646134095;
    msg.svy = 0.998022213263;
    msg.svz = 0.666661652829;

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
    msg.setTimeStamp(0.519349325742);
    msg.setSource(64074U);
    msg.setSourceEntity(94U);
    msg.setDestination(34813U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.84422833031;
    msg.lon = 0.503568194721;
    msg.height = 0.106580749733;
    msg.x = 0.118567894618;
    msg.y = 0.442362694011;
    msg.z = 0.291253998181;
    msg.phi = 0.934548899298;
    msg.theta = 0.468861711155;
    msg.psi = 0.03182229675;
    msg.u = 0.719286993801;
    msg.v = 0.916219383885;
    msg.w = 0.0455430120953;
    msg.p = 0.118637536511;
    msg.q = 0.279117275478;
    msg.r = 0.410831348186;
    msg.svx = 0.873421624668;
    msg.svy = 0.698197691742;
    msg.svz = 0.688837164433;

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
    msg.setTimeStamp(0.272727176434);
    msg.setSource(44423U);
    msg.setSourceEntity(22U);
    msg.setDestination(34074U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.873761704829;
    msg.lon = 0.969471471714;
    msg.height = 0.796120049963;
    msg.x = 0.720264826081;
    msg.y = 0.0349240253217;
    msg.z = 0.411020035445;
    msg.phi = 0.0614003009899;
    msg.theta = 0.760619316526;
    msg.psi = 0.828221350963;
    msg.u = 0.229074176242;
    msg.v = 0.0412153716837;
    msg.w = 0.0960707563892;
    msg.p = 0.478522066353;
    msg.q = 0.0788587587942;
    msg.r = 0.102330278932;
    msg.svx = 0.893607874244;
    msg.svy = 0.439756933672;
    msg.svz = 0.894637147846;

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
    msg.setTimeStamp(0.180961046634);
    msg.setSource(31560U);
    msg.setSourceEntity(131U);
    msg.setDestination(18868U);
    msg.setDestinationEntity(218U);
    msg.op = 206U;
    msg.entities.assign("UHLJJHQLKVEADILZYXMSNARKIDXFJPZDSEVWTBNJPICELAWTGQBRLKJLFCZOHTTHQRWVZTHARCHGKGCDBE");

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
    msg.setTimeStamp(0.0758602604115);
    msg.setSource(4842U);
    msg.setSourceEntity(18U);
    msg.setDestination(36926U);
    msg.setDestinationEntity(1U);
    msg.op = 109U;
    msg.entities.assign("QQELWUTRWGKLZXRIVGSRACYYTVCNFUFGOKYZBXLOJFZXAHFONOTXNNNOHMCMXLWTJYGYIMBEQTIMSVMPIAAJEBQROEJZCRDOZZKVLFDHLGQYMPUVKWKEXWVXGTMCFK");

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
    msg.setTimeStamp(0.340029712957);
    msg.setSource(49574U);
    msg.setSourceEntity(109U);
    msg.setDestination(63442U);
    msg.setDestinationEntity(232U);
    msg.op = 130U;
    msg.entities.assign("GGSNYPIAJZIZNLROYBQAFSPYFFAZWWBWIIORDSJRQNOJZUUUSNAYMMMDYWEGDAXWBEMNUAORLZDWPYWMUBILVTOXXMIQYNKFPTZTNHHACRTAKSQHUNOUUSJPKHKSDVVFSHZPQVFJSCMFJFVNKBMBTSIXXLHRKQMZLGNEKLYCBVXRTIKYGFVIJKGTOJEVEUEZLDQPGOJQYOPAETDLX");

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
    msg.setTimeStamp(0.73985158626);
    msg.setSource(25057U);
    msg.setSourceEntity(21U);
    msg.setDestination(4128U);
    msg.setDestinationEntity(209U);
    msg.type = 54U;
    msg.speed = 2719U;
    const char tmp_msg_0[] = {35, -26, -123, 67, 81, -115, 117, 73, 81, 65, -55, 24, -37, -107, -21, -30, 24, 116, 36, 23, 58, -126, 69, 58, 42, -49, 95, -117, -109, 81, -74, 99, -110, -96, 66, -35, -82, -42, -43, 20, 29, 103, 24, 16, -112, 7, -42, -85, 85, -95, -59, 90, 100, -10, -49, -28, 18, 28, -44, -49, 42, -51, 112, 96, 65, -67, 43, 63, -97, -90, 3, -94, -47, -34, 7, 44, -60, 102, 86, -83, 108, -99, -21, 71, -127, 20, 83, -67, 90, -2, -86, -65, -51, -127, -86, 120, -92, -62, -97, 60, 125, 101, 125, 85, 53, -111, -63, 126, 41, -82, 114, -53, -86, -126, 82, -113, -35, 78, -71, 78, 66, -77, 46, 110, -8, 23, -46, 15, 46, 44, -62, -55, -78, 70, 89, -94, -27, -14, 64, -50, -54, -119, 78, 13, -55, 93, -47, -89, 3, -14, 67, 90, -54, -73, -121, 74, -110, 84, -87, -41, 4, -57, -36, 68, 10, 40, -81, -124, -72, 36, -13, -62, 74, 124, -46, -18, 45, -21};
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
    msg.setTimeStamp(0.995561063304);
    msg.setSource(19901U);
    msg.setSourceEntity(157U);
    msg.setDestination(847U);
    msg.setDestinationEntity(155U);
    msg.type = 210U;
    msg.speed = 29296U;
    const char tmp_msg_0[] = {53, -51, 8, -54, -4, 104, -67, 87, -98, -91, -95, -119, 44, 40, -124, 26, 4, -126, 13, -102, 119, 9, 29, 118, -55, 45, 33, -80, -106, -48, -103, 79, 28, 52, -127, -125, -126, -24, -30, 114, -30, 71, -92, -110, -89, -55, 0, -50, -63, 94, -83, -100, -28, -126, 84, -5, -113, -127, 114, 113, 69, -126, -109, -127, 25, 4, 33, -103, 78, 98, 31, 20, -118, 85, 2, -6, 91, -41, 102, -127, 102, 85, 17, -98};
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
    msg.setTimeStamp(0.388304279685);
    msg.setSource(23792U);
    msg.setSourceEntity(66U);
    msg.setDestination(2712U);
    msg.setDestinationEntity(174U);
    msg.type = 108U;
    msg.speed = 5837U;
    const char tmp_msg_0[] = {-52, 73, 30, 3, 20, -85, 7, -70, 63, 62, 124, 38, -114, 107, 93, -57, 80, 78, -48, -57, -49, -5, -75, 83, -95, -108, -53, -45, 37, 115, 121, 83, 48, -95, 69, -80, 39, -16, -75, -128, 48, -45, 62, 39, -77, -10, 39, 126, -124, -49, -42, -104, -76, -68, -58, -125, 27, -112, 72, -64, 94, 17, 121, 50, 105, -106, -72, 99, 119, 124, -98, -31, -110, -90, -56, -96, 1, -67, 29, 3, -70, -22, -27, -95, -86, 6, -127, 87, 40, 4, 92};
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
    msg.setTimeStamp(0.805782747005);
    msg.setSource(17616U);
    msg.setSourceEntity(41U);
    msg.setDestination(57832U);
    msg.setDestinationEntity(135U);
    msg.op = 59U;
    msg.tas2acc_pgain = 0.333230549481;
    msg.bank2p_pgain = 0.00107393274825;

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
    msg.setTimeStamp(0.697360836251);
    msg.setSource(14743U);
    msg.setSourceEntity(162U);
    msg.setDestination(57349U);
    msg.setDestinationEntity(42U);
    msg.op = 238U;
    msg.tas2acc_pgain = 0.42266043069;
    msg.bank2p_pgain = 0.403496223489;

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
    msg.setTimeStamp(0.355285695679);
    msg.setSource(42652U);
    msg.setSourceEntity(216U);
    msg.setDestination(61830U);
    msg.setDestinationEntity(128U);
    msg.op = 228U;
    msg.tas2acc_pgain = 0.635902120981;
    msg.bank2p_pgain = 0.0514212266185;

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
    msg.setTimeStamp(0.816312943884);
    msg.setSource(62380U);
    msg.setSourceEntity(167U);
    msg.setDestination(29613U);
    msg.setDestinationEntity(27U);
    msg.available = 3928123044U;
    msg.value = 91U;

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
    msg.setTimeStamp(0.290892495504);
    msg.setSource(63799U);
    msg.setSourceEntity(3U);
    msg.setDestination(29277U);
    msg.setDestinationEntity(37U);
    msg.available = 1232727802U;
    msg.value = 70U;

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
    msg.setTimeStamp(0.755391621001);
    msg.setSource(24225U);
    msg.setSourceEntity(199U);
    msg.setDestination(7625U);
    msg.setDestinationEntity(71U);
    msg.available = 3445951642U;
    msg.value = 232U;

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
    msg.setTimeStamp(0.701620128201);
    msg.setSource(11907U);
    msg.setSourceEntity(220U);
    msg.setDestination(55417U);
    msg.setDestinationEntity(155U);
    msg.op = 29U;
    msg.snapshot.assign("SKAEMOLRDRJWVOETIGRXOFHCNLE");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 3050184676U;
    tmp_msg_0.start_lat = 0.442384608601;
    tmp_msg_0.start_lon = 0.617620819831;
    tmp_msg_0.start_z = 0.744775993539;
    tmp_msg_0.start_z_units = 36U;
    tmp_msg_0.end_lat = 0.0479676272517;
    tmp_msg_0.end_lon = 0.0245883943003;
    tmp_msg_0.end_z = 0.429951971392;
    tmp_msg_0.end_z_units = 128U;
    tmp_msg_0.lradius = 0.583951711357;
    tmp_msg_0.flags = 35U;
    tmp_msg_0.x = 0.635777606495;
    tmp_msg_0.y = 0.203033093144;
    tmp_msg_0.z = 0.49000725075;
    tmp_msg_0.vx = 0.539963313067;
    tmp_msg_0.vy = 0.154172768119;
    tmp_msg_0.vz = 0.388957228237;
    tmp_msg_0.course_error = 0.265095227998;
    tmp_msg_0.eta = 43483U;
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
    msg.setTimeStamp(0.365848585102);
    msg.setSource(29240U);
    msg.setSourceEntity(14U);
    msg.setDestination(59931U);
    msg.setDestinationEntity(158U);
    msg.op = 105U;
    msg.snapshot.assign("QOXSJDHTOKBFYMXPZWPRMDQGVOFXCICXQIVYACJSMROLOVENSPUVSEPUTWQPTTUORJNLXQHMEINTAWAMBIYVPCVJIJLGNRIJBXMTKK");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.801280459411;
    tmp_msg_0.x = 0.49485987437;
    tmp_msg_0.y = 0.437453867526;
    tmp_msg_0.z = 0.85604533636;
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
    msg.setTimeStamp(0.00332076426873);
    msg.setSource(48116U);
    msg.setSourceEntity(34U);
    msg.setDestination(49671U);
    msg.setDestinationEntity(165U);
    msg.op = 12U;
    msg.snapshot.assign("NCYZEHAUNCIMJUQMAGFVFXQWCGDHVBVMKPYFLIWNNPUESQVWNHVYQFGNJFBEFYHARLJKOIGTCAJVZHUAXXROPLISEXUISCXPDSZUPKTQXOJUSAKZYMXENEXIHRIYDZZRBVPBRWGEQQDOKHWBYJBNFJLLDBXDBGJAZZGULRKRHMMTCSKROECWADLLMTFSGTAGOKDSTWOQMHMKYVFJWYOSHTCSEMIZVTKDTIYR");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 79U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("CXKXXQIGSZTMUBBTEMPELXPIXFPFMMKFBOVRKZMDLHOZUOWYPIUYAVQJDSWRCNTDZBKLJFWJCOCAABGXJFFETJLNVCGHUDKOITGGBAQZMRKSQOHDCQJSHTAEUNJCTAOVIVNNWWASLVIYXEQYSYCOFDHOJKQXETWKPDIYAQQVQONERYUWPRSAZCJCIZUGVGYHZGLHVNZREURL");
    tmp_tmp_msg_0_0.description.assign("ZTQMQIMLCRLTYGPDKKOSNOXLECNRSKUTYXETNXQFFJZRVALHGOHKASMJUMVZNODMEOAUWCKFURJOIJHUCHGMUAYQFUEIDMJFQNIGFWNVASXGSPZDKTYAPHBLFDEZTGMDXXSIHBIRQD");
    tmp_tmp_msg_0_0.vnamespace.assign("NXLJEECYNOZBKWPHIPIGKFNYRFOZQZMWIDJEBJJTVHCFVHYANNQDLNPKKQPEGDRZDMOCLZRUELDBTWMAUBQANJPXHVRTWWAISUYDPSCAQXSCYYGBAHSEGQYLINTSVFSQGIXUZVHEDCMEFKGGUECYGFIPRRLJVJVMAVOLA");
    tmp_tmp_msg_0_0.start_man_id.assign("NMLVYYWDPTSXNMOYWQOAGBGDRFKYTPHEHDRAFUVGMHECOSQXBIXRUBGNNXFAXQIZAOHJEXQBZMTGWKRSUWCTEBPZCSUDGDWLGEJUZIIZWSYVNJGKHYBUXDLASOECXZHLJKNFLPKLGRYLMKPQUFAKFHEPLSJJNXCPIVOCQKTZTDJREDAGUARMWONLYCBLSIMPEUBJDVWQTRVJVWEMQYRXQTFVPTVIYOQPHHBFIHCKBFFUMZNAV");
    IMC::Conductivity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.679614427493;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.953696322179);
    msg.setSource(162U);
    msg.setSourceEntity(175U);
    msg.setDestination(58717U);
    msg.setDestinationEntity(10U);
    msg.op = 31U;
    msg.name.assign("JZQJYEDNCLUHXCWBBQDDWDMFTKDNRGVBHNLHBTKSCY");

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
    msg.setTimeStamp(0.356925684271);
    msg.setSource(62997U);
    msg.setSourceEntity(153U);
    msg.setDestination(7442U);
    msg.setDestinationEntity(201U);
    msg.op = 109U;
    msg.name.assign("GQJEBFFRCXIAECMDNIKYQGZPXWZPXPPQWLWTUWUJVPJWKUSRLUJSMNFNORMVBSNDZVBRRKVTNQZBX");

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
    msg.setTimeStamp(0.00688831280668);
    msg.setSource(21772U);
    msg.setSourceEntity(31U);
    msg.setDestination(3783U);
    msg.setDestinationEntity(132U);
    msg.op = 224U;
    msg.name.assign("CGMKJEJXOQBCFXDOQATFJMOHTAFXJDGLYYTFLTCQNREUZIQBCXXQNRHWWWYSTSGCNSFHZXRSZXYLCCDMDVRZVUZMEESTCKHGEZBIBPRATGAJARRXQFCZUUYLBSEJZVGSOROYEVGMIMWDPOYFTJM");

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
    msg.setTimeStamp(0.595088287607);
    msg.setSource(19115U);
    msg.setSourceEntity(116U);
    msg.setDestination(17190U);
    msg.setDestinationEntity(196U);
    msg.type = 15U;
    msg.htime = 0.970939472093;
    msg.context.assign("CVGPISNKFTRJTPAMUIVCYCFBMTMWPMVWSZQRIASVPTEAQXDPMYKBBURRVASEOGZJWPCVOWZZSBUCOBXJBDYNUAMRWDZP");
    msg.text.assign("IICVWAPGVBIDEWDGCQRRLBOLOKFFBK");

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
    msg.setTimeStamp(0.208345423859);
    msg.setSource(46939U);
    msg.setSourceEntity(1U);
    msg.setDestination(61198U);
    msg.setDestinationEntity(159U);
    msg.type = 53U;
    msg.htime = 0.733961608793;
    msg.context.assign("PWHXIDZXWETGXUQILVGPLTWHKRURAJFPJTZQSLHQHDWRCYUKBTODMWOHUCBXYWGQKDAVNCOYXGTFOSAOSGCGMKMFRQRDQCUVPYTXJGZLJQTVXKMGZXAEVIZABLZQYMAUILJHWFGRSYRIJNETKUPASNIWLJECNFAJZTYNXQFHCBBQXFSWOEUDJKBVOPGDWNPJEOCRMMRPNSBFYDBEVLOPKKNCEIFUZISYYETIV");
    msg.text.assign("XZCKGMECYUBILLLQQZZGKDTDWDRRWJIYANCHALKPONBLMDHQVVWHOISJVCPERXRZFOUHTBJHVNUAFIINHGXJRDAFZDGWKBBVYSQVHWBYMAXSVZSSCGMANUZVNOPBMXKWQFISGDZSCFSAEYJRFENDOLLFSKJNYINTTOKBMVKQEPQMUYZIJFTIKRPMKYFUXOQUDBPEOUPPWXZJCGRXDQRENTYPTELTTWVHGHPUEWF");

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
    msg.setTimeStamp(0.462338459867);
    msg.setSource(11388U);
    msg.setSourceEntity(114U);
    msg.setDestination(14810U);
    msg.setDestinationEntity(98U);
    msg.type = 245U;
    msg.htime = 0.420103251919;
    msg.context.assign("BPZKBQASLTAPRFTIJBTHBNAGHOOUYAWZPCYGIYUGWJDXMNUWKFXXYKMEQBTWZWGKFEQSDMICUVHNFCBIZIAIONXRYVSCZDXKVORRHLIZDCHLQZBEKOTMPNQ");
    msg.text.assign("HUBUZJWVTVEAYHHSFKMYBQHLEAFPXNRWACUGHEJWZCJMDVDDBGEXQGJNMWEWJNBQKROLKADOMHYBIYLBPKQMFGCEPUNBKNJKZJASZPRPSGLZUDKXXFOOQBTLSVGOTXLAITMBFVWIAQCFPGSKYEUEGEUSOXKNTRLVQIHYDPJIIRTPVTM");

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
    msg.setTimeStamp(0.51401983136);
    msg.setSource(21799U);
    msg.setSourceEntity(210U);
    msg.setDestination(46629U);
    msg.setDestinationEntity(4U);
    msg.command = 210U;
    msg.htime = 0.44486935679;

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
    msg.setTimeStamp(0.452237997592);
    msg.setSource(3037U);
    msg.setSourceEntity(92U);
    msg.setDestination(7171U);
    msg.setDestinationEntity(110U);
    msg.command = 97U;
    msg.htime = 0.798388711567;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 102U;
    tmp_msg_0.htime = 0.449077027605;
    tmp_msg_0.context.assign("HLKCTKCDBZFDAKNEZG");
    tmp_msg_0.text.assign("KPDIZYPJTQREDHDXQOBGLZGFRUJYCPZJCAZNVUAOCWVKULGKJHOIVZILUSHYVPXBYCJZNIGLACSSTKNGRQOOMCDNG");
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
    msg.setTimeStamp(0.852535300966);
    msg.setSource(47066U);
    msg.setSourceEntity(176U);
    msg.setDestination(19757U);
    msg.setDestinationEntity(50U);
    msg.command = 38U;
    msg.htime = 0.973089293202;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 44U;
    tmp_msg_0.htime = 0.868399201151;
    tmp_msg_0.context.assign("NCESEDGCHIPSDSAICXHYWICVSBJBXJFTFGNJGPHLWVQLKWSSQEGSVTFXGULBOIXAXKPPHATDOTUJWURLDBFWVOXMOPVRRLUEGXWDCDMDBMFKIGIWYKKSNURKQUTIFNWATQEZPIMNEJFKZCVR");
    tmp_msg_0.text.assign("SPUKFGIGAWHKUPEFRMTNINXXYUEQQKHDVJFWPSEEDYMAFVEXYUUDWDJIQJWZT");
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
    msg.setTimeStamp(0.229263983684);
    msg.setSource(11457U);
    msg.setSourceEntity(75U);
    msg.setDestination(29764U);
    msg.setDestinationEntity(156U);
    msg.op = 3U;
    msg.file.assign("UFCTMAFRODMPQJCDKOSJQFAINSJPYDNLUBSIRV");

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
    msg.setTimeStamp(0.982911543277);
    msg.setSource(50806U);
    msg.setSourceEntity(43U);
    msg.setDestination(59079U);
    msg.setDestinationEntity(212U);
    msg.op = 64U;
    msg.file.assign("UKTKVVYEDDHSQNBMDMGNGFREXAOOZICFDTBLAWMSEMWQXAOBMYQDSRQHGUZBWRDNBJZUYXSTTJLKBYFPWFIFRMKBKOSCTEHOKLNNQZCCIBWPLXVYUXAMCVPCRALADIFDSPEJIKVODQIRHVPRHJJGYRFEJEGAMRNXMCXUHZAVEJF");

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
    msg.setTimeStamp(0.0743731587437);
    msg.setSource(59556U);
    msg.setSourceEntity(212U);
    msg.setDestination(22943U);
    msg.setDestinationEntity(167U);
    msg.op = 46U;
    msg.file.assign("QJBOSYNLSHRWTKGYYFUCTRXHIATATTZYOGOOMVBCCIWAEEBNFKJHQMPLIFRHFPLWMXPELBLGHXRN");

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
    msg.setTimeStamp(0.312211653549);
    msg.setSource(48115U);
    msg.setSourceEntity(137U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(208U);
    msg.op = 115U;
    msg.clock = 0.598472337539;
    msg.tz = 122;

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
    msg.setTimeStamp(0.751460168811);
    msg.setSource(62130U);
    msg.setSourceEntity(73U);
    msg.setDestination(40601U);
    msg.setDestinationEntity(10U);
    msg.op = 6U;
    msg.clock = 0.144171785833;
    msg.tz = 66;

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
    msg.setTimeStamp(0.410035897224);
    msg.setSource(5749U);
    msg.setSourceEntity(190U);
    msg.setDestination(52114U);
    msg.setDestinationEntity(240U);
    msg.op = 54U;
    msg.clock = 0.91188292544;
    msg.tz = 61;

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
    msg.setTimeStamp(0.266918158193);
    msg.setSource(1649U);
    msg.setSourceEntity(87U);
    msg.setDestination(36608U);
    msg.setDestinationEntity(13U);
    msg.conductivity = 0.451457560649;
    msg.temperature = 0.383158195394;
    msg.depth = 0.597448051229;

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
    msg.setTimeStamp(0.709087926781);
    msg.setSource(58147U);
    msg.setSourceEntity(202U);
    msg.setDestination(54338U);
    msg.setDestinationEntity(174U);
    msg.conductivity = 0.378340304185;
    msg.temperature = 0.325468778299;
    msg.depth = 0.878242295308;

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
    msg.setTimeStamp(0.631188103959);
    msg.setSource(39038U);
    msg.setSourceEntity(122U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(173U);
    msg.conductivity = 0.327186286064;
    msg.temperature = 0.662270817947;
    msg.depth = 0.146676580714;

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
    msg.setTimeStamp(0.646199577301);
    msg.setSource(36575U);
    msg.setSourceEntity(198U);
    msg.setDestination(65217U);
    msg.setDestinationEntity(57U);
    msg.altitude = 0.305800854987;
    msg.roll = 12439U;
    msg.pitch = 53117U;
    msg.yaw = 11436U;
    msg.speed = -11763;

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
    msg.setTimeStamp(0.584524587325);
    msg.setSource(54688U);
    msg.setSourceEntity(191U);
    msg.setDestination(62109U);
    msg.setDestinationEntity(207U);
    msg.altitude = 0.607544351728;
    msg.roll = 22111U;
    msg.pitch = 59556U;
    msg.yaw = 29424U;
    msg.speed = 15308;

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
    msg.setTimeStamp(0.635890084293);
    msg.setSource(26851U);
    msg.setSourceEntity(27U);
    msg.setDestination(41678U);
    msg.setDestinationEntity(62U);
    msg.altitude = 0.30273937903;
    msg.roll = 25518U;
    msg.pitch = 16779U;
    msg.yaw = 2851U;
    msg.speed = -17439;

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
    msg.setTimeStamp(0.847476893212);
    msg.setSource(10169U);
    msg.setSourceEntity(176U);
    msg.setDestination(36541U);
    msg.setDestinationEntity(81U);
    msg.altitude = 0.208230304215;
    msg.width = 0.666137634375;
    msg.length = 0.856686331821;
    msg.bearing = 0.549440152825;
    msg.pxl = -20887;
    msg.encoding = 57U;
    const char tmp_msg_0[] = {115, 59, -13, -95, -21, -119, -110, 70, 2, 23, 91, 119, -114, 54, 43, 87, -70, -37, -90, -126, 4, -3, -91, 49, 121, 57, -36, -124, -44, 71, 101, -85, 91, -73, -99, 97, -123, -73, -103, -20, 45, 92, 25, -38, -53, -15, -69, 87, 20, 0, -70, -110, 117, 11, 45, 94, 48, 30, -25, -80, 7, 4, -29, 73, -124, -33, 60, 104, -26, -63, 86, -56, -24, 115, -29, -55, 124, -30, -128, 49, -70, 31, 102, 111, -67, -19, 117, -110, -42, -72, -24, -89, 4, -23, 75, -76, -98, -103, 71, -70, 4, -45, -91, 41, 125, 77, -105, 75, -95, 117, -17, -13, 73, -41, 8, -124, 114, 83, -74, 36, -93, 32, 117, 75, -5, -24, -102, 79, -54, 32, -15, 44, -105, -68, 1, -35, 35, -91, -64, -33, 121, 7, -105, 35, -25, -79, -51, 126, 96, -27, 25, -121, -126, 5, 46, -69, -21, -81, -12, 1, -98, 51, 79, 102, 28, -92, -17, 60, 113, -60, 43, 24, -108, -5, 120, -97, -50, -99, -112, 6, 97, -23, -39, 78, 96, -79, -20, -94, 53, -63, -109, -115, 3, -52, -81, 31, 38, 60, 116, 103, 49, 125, -113, -59, -10, 10, 3, 8, -36, 6, -7, -69, -1, 27, 122, 33, 108, 0, -81, 114, 94, -85, 90, -10, -6, -47, 59};
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
    msg.setTimeStamp(0.810216523116);
    msg.setSource(7237U);
    msg.setSourceEntity(50U);
    msg.setDestination(40030U);
    msg.setDestinationEntity(100U);
    msg.altitude = 0.495987735831;
    msg.width = 0.55709536871;
    msg.length = 0.651953840442;
    msg.bearing = 0.69941574944;
    msg.pxl = -13004;
    msg.encoding = 46U;
    const char tmp_msg_0[] = {116, -114, -46, -6, -91, -50, -47, 87, -49, 16, -34, -43, -39, -101, -52, 19, 69, 67, -3, 21, 38, -86, 86, -71, -46, -63, -55, -62, -28, 25, -100, -99, -32, 87, 63, -90, -2, 72, 85, -3, -40, -112, -46, 123, 49, 92, -50, 52, 123, 75, 69, -89, -59, -59, 58, -18, 37, -28, -7, 37, -49, 91, -70, -58, 91, 110, -91, 40, 31, -58, -114, 16, -125, 45, -91, 116, 13, -49, -17, 87, -5, -84, -14, 13, 82, 48, 118, -53, 49, 107, -29, 117, -104, -42, -128, 65, 56, -68, -50, -121, 57, 0, -1, 14, -53, -40, -102, 15, 22, -128, 82, 105, 42, -34, -85, -9, -71, 99, 95, -78, 111, 25, 35, -128, -86, 97, 45, -28, 45, 6, 58, 28, -21, 18, 15, -32, -111, 102, -105, 77, -76, 41, -2, -111, 104, 16, -124, 37, -67, 15, 24, 51, 2, -64, -54, 31, -10, -74, -9, 37, 53, 35, -72, 121, 67, 76, 75, -10, 52, 119, -98, 60, 75, 83, -111, -75, -122, -64, 10, -84, 39, 85, 41, 110, 98, 13, 62, 17, -47, -5, -51, 87, -84, -94, 87, 56, -46, -108, -68, -117, 121, 14, 99, -30, -30, 41, 107, -90, 3, 12, -90, -120, -111, -90, 14, -99, 79, -87, -111, -25, -36, 111, -34, 52, -63, 65, 0, -72, -11, 47, 75, -11, -41, -24, -65, 118, -97, 14, 56, 117, 70, -35};
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
    msg.setTimeStamp(0.958228539615);
    msg.setSource(14442U);
    msg.setSourceEntity(212U);
    msg.setDestination(33219U);
    msg.setDestinationEntity(234U);
    msg.altitude = 0.585236346962;
    msg.width = 0.685941228235;
    msg.length = 0.144977002108;
    msg.bearing = 0.698971208232;
    msg.pxl = 31625;
    msg.encoding = 87U;
    const char tmp_msg_0[] = {-57, -17, -111, 79, -122, 80, 115, -75, 30, -34, -13, -33, -84, -59, 110, -8, -9, 118, -65, 52, 92, -97, 125, 9, 55, -30, -119, 105, -19, 74, -120, -28, -80, 46, 38, -93, 48, -42, -17, 78, 122, 37, -58, 123, -125, 6, -76, 88, 6, 107, 81, 64, 77, -1, 71, -128, -97, 71, -59, 20, 21, 96, 49, 80, 43, -34, 87, 78, 98, 68, 101, -94, 52, 61, 42, 9, 125, -41, 123, 78, 78, 11, 1, 41, 49, 65, 59, 30, 79, 44, 69, -53, -9, -107, 18, -49, 39, 65, -10, 59, -111, -98, 7, 18, -85, 1, -104, 45, -68, -67, -91, 82, -29, 68, -11, 21, -120, -118, 42, -95, -113, 9, -36, -114, -33, 24, -37, -101, 116, -103, -83, -98, -17, 126, -7, -7, -121, -106, 101, 55, 20, -6, -77, -20, -106, 85, 116, 72, 94, 17, -38, -123};
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
    msg.setTimeStamp(0.455322872677);
    msg.setSource(31484U);
    msg.setSourceEntity(144U);
    msg.setDestination(34920U);
    msg.setDestinationEntity(136U);
    msg.text.assign("OIPVOVHQKERIVIRZTCJSRMOASAQQPQBMTFTGECJDNIPSMMNPOTKFGLWSBGJYBPRHNBRAIXGYUQHPKRCVXWWUZDEJVAXJKMDCFWGLYQROSDUUCZZWGXBOFVRQJLSPBWXHJKUMYZKOYFHUGCZNYSSYWJNIFTEXFYIALGHAVZBPZTN");
    msg.type = 104U;

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
    msg.setTimeStamp(0.527624470946);
    msg.setSource(51538U);
    msg.setSourceEntity(172U);
    msg.setDestination(63361U);
    msg.setDestinationEntity(59U);
    msg.text.assign("LTTMENBPJHJQCJFTBOOATSZOGNNBALBYWWMBKMTCUWRGVASYFEKFRPGEEGFXRIRHAXXIMAACNTFOKUWKMLMUUHZSJA");
    msg.type = 66U;

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
    msg.setTimeStamp(0.358253299799);
    msg.setSource(26622U);
    msg.setSourceEntity(137U);
    msg.setDestination(2110U);
    msg.setDestinationEntity(148U);
    msg.text.assign("UOZPGCHOXLWRDKLAZZJLRIQSNWOEGHHAHLOQJ");
    msg.type = 140U;

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
    msg.setTimeStamp(0.17386024389);
    msg.setSource(39846U);
    msg.setSourceEntity(48U);
    msg.setDestination(20571U);
    msg.setDestinationEntity(105U);
    msg.parameter = 221U;
    msg.numsamples = 10U;
    msg.lat = 0.586174549274;
    msg.lon = 0.818277509923;

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
    msg.setTimeStamp(0.259984864432);
    msg.setSource(40705U);
    msg.setSourceEntity(213U);
    msg.setDestination(1169U);
    msg.setDestinationEntity(88U);
    msg.parameter = 95U;
    msg.numsamples = 213U;
    msg.lat = 0.523642439791;
    msg.lon = 0.755603322293;

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
    msg.setTimeStamp(0.425868305343);
    msg.setSource(46928U);
    msg.setSourceEntity(51U);
    msg.setDestination(38700U);
    msg.setDestinationEntity(149U);
    msg.parameter = 38U;
    msg.numsamples = 31U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 62931U;
    tmp_msg_0.avg = 0.59155449381;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.364011284889;
    msg.lon = 0.283006490359;

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
    msg.setTimeStamp(0.39558100239);
    msg.setSource(55661U);
    msg.setSourceEntity(119U);
    msg.setDestination(26603U);
    msg.setDestinationEntity(200U);
    msg.depth = 9920U;
    msg.avg = 0.00485628102179;

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
    msg.setTimeStamp(0.514000476091);
    msg.setSource(20038U);
    msg.setSourceEntity(47U);
    msg.setDestination(42068U);
    msg.setDestinationEntity(88U);
    msg.depth = 15851U;
    msg.avg = 0.791208117227;

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
    msg.setTimeStamp(0.277899844212);
    msg.setSource(18928U);
    msg.setSourceEntity(38U);
    msg.setDestination(3024U);
    msg.setDestinationEntity(65U);
    msg.depth = 23992U;
    msg.avg = 0.8742196166;

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
    msg.setTimeStamp(0.959608253675);
    msg.setSource(15340U);
    msg.setSourceEntity(102U);
    msg.setDestination(22219U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.781681428473);
    msg.setSource(37926U);
    msg.setSourceEntity(156U);
    msg.setDestination(60741U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.173405505566);
    msg.setSource(46290U);
    msg.setSourceEntity(229U);
    msg.setDestination(40278U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.989627769762);
    msg.setSource(43441U);
    msg.setSourceEntity(69U);
    msg.setDestination(11706U);
    msg.setDestinationEntity(199U);
    msg.sys_name.assign("KTPWBKASTAUELUPCRLLVYJSSHTJMKGQCWPHBTFJBLPZKKLEHEYQIRZVJSQZRXQDMMIZJSFHMWMTHTXISFCMJNIIYBWLSRGFEHEURNNYPARYLFDNCRDNZMJZLDOQOXGAFBIPMOUSGWWYYNQXYCBJVNRUBFZTOGQVPPQQQMUWGVIASCPJEEKDDOGTWCXTKNEPBIACSBGCDHMOBKWAADDWHEKFGGRXCHAZOXJAVIUO");
    msg.sys_type = 69U;
    msg.owner = 36275U;
    msg.lat = 0.498531510333;
    msg.lon = 0.715897882928;
    msg.height = 0.227550307212;
    msg.services.assign("RGHYWMTZZBBVHUJLCULWVVPSFHDAJJVJXVYCOOEZNXQZMJHDLBHOUIILSTXLNLUSIVJFYCGOWCEGWWTMZPQLOQMLKJSAEGSQKDSEXOAOCFBURDYHSBHHDIJNWIYBADDPAUKAEF");

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
    msg.setTimeStamp(0.408851336589);
    msg.setSource(32005U);
    msg.setSourceEntity(163U);
    msg.setDestination(53163U);
    msg.setDestinationEntity(62U);
    msg.sys_name.assign("UBXEFHXFVGNKFNUELDMHGFHWVJGIFMUHKWPSKMVESHOQUAQHSBUQBWXHDAUKGPWPTJZBRVZBNBWMIFRLEYSLWITMJOAVPLYACDQOAVEWJX");
    msg.sys_type = 69U;
    msg.owner = 14552U;
    msg.lat = 0.917063517326;
    msg.lon = 0.182428066005;
    msg.height = 0.692447996761;
    msg.services.assign("NEXLHWXQNREZDKBGPPZLLCOCGVPCPHJWUTYXSVWLYXZBUEDFCOFYFMVITMGXHCBYJCTGTYNL");

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
    msg.setTimeStamp(0.525956375733);
    msg.setSource(33338U);
    msg.setSourceEntity(176U);
    msg.setDestination(18376U);
    msg.setDestinationEntity(91U);
    msg.sys_name.assign("DRBWJWSYFTYNEJEMYCR");
    msg.sys_type = 244U;
    msg.owner = 19790U;
    msg.lat = 0.124238845428;
    msg.lon = 0.0623638295619;
    msg.height = 0.0737855016938;
    msg.services.assign("ILAIPROTWSPBEWURMUSQTGKALTWVCYJ");

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
    msg.setTimeStamp(0.139324020406);
    msg.setSource(30522U);
    msg.setSourceEntity(45U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(16U);
    msg.service.assign("NMUSZHJIEEQTPDXEUBFDPSXKKGAOZPLHFOGHYEUIOSALDJPNCHAYLGNXIWWYKGQXPWVJLNEGOVYGJSBFIXROUYAJXCHRMLBLVIDRKVMCVKVBDCJRUUIKXNNCFVTITFUHMMRGZISDLTNMDTTNRQSRETHJTWECFEIRTNZRFPBZFHHADDEJAQWXVACOWYLCMXMNCWHWQOYZQKUZAPOYUQZIRJYBCYQBU");
    msg.service_type = 147U;

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
    msg.setTimeStamp(0.124976661127);
    msg.setSource(52001U);
    msg.setSourceEntity(123U);
    msg.setDestination(44607U);
    msg.setDestinationEntity(252U);
    msg.service.assign("YTXZBNBKLBTETDQIIVFHPOGACWJWEZCLLWILSSRVMKXMGYFCQFURKAYWDANYLEUAXITQNPVT");
    msg.service_type = 37U;

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
    msg.setTimeStamp(0.170209559451);
    msg.setSource(59550U);
    msg.setSourceEntity(14U);
    msg.setDestination(232U);
    msg.setDestinationEntity(92U);
    msg.service.assign("IHXFTGJYSRMNZTXVOTKFIYUQFAEEDXPSBHRNZBYEHCYPWYLCLBIYPFCWDGAZRBYCQOESWPNKMRORMOLRKHVDHXHBPILOVRWIQLJDQZLYPYKQADHVSUUTDSWDMTPWXQACVACJGPANGIUILTNRNUWBWRYEWGATKXVBNKSUUVMJNQBFHIUFVGDZEO");
    msg.service_type = 215U;

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
    msg.setTimeStamp(0.463475845416);
    msg.setSource(29360U);
    msg.setSourceEntity(41U);
    msg.setDestination(55754U);
    msg.setDestinationEntity(182U);
    msg.value = 0.0789319628929;

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
    msg.setTimeStamp(0.1220040939);
    msg.setSource(9620U);
    msg.setSourceEntity(73U);
    msg.setDestination(51846U);
    msg.setDestinationEntity(251U);
    msg.value = 0.112054957258;

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
    msg.setTimeStamp(0.817981397676);
    msg.setSource(57025U);
    msg.setSourceEntity(127U);
    msg.setDestination(6610U);
    msg.setDestinationEntity(205U);
    msg.value = 0.714946603286;

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
    msg.setTimeStamp(0.295347189676);
    msg.setSource(33684U);
    msg.setSourceEntity(58U);
    msg.setDestination(26535U);
    msg.setDestinationEntity(119U);
    msg.value = 0.976002708266;

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
    msg.setTimeStamp(0.691815211354);
    msg.setSource(35945U);
    msg.setSourceEntity(41U);
    msg.setDestination(15418U);
    msg.setDestinationEntity(191U);
    msg.value = 0.806173054423;

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
    msg.setTimeStamp(0.449186159798);
    msg.setSource(64210U);
    msg.setSourceEntity(246U);
    msg.setDestination(3399U);
    msg.setDestinationEntity(51U);
    msg.value = 0.143568676432;

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
    msg.setTimeStamp(0.0641162013573);
    msg.setSource(64909U);
    msg.setSourceEntity(96U);
    msg.setDestination(41931U);
    msg.setDestinationEntity(120U);
    msg.value = 0.591756900242;

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
    msg.setTimeStamp(0.480841830161);
    msg.setSource(20861U);
    msg.setSourceEntity(156U);
    msg.setDestination(52994U);
    msg.setDestinationEntity(125U);
    msg.value = 0.766777194368;

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
    msg.setTimeStamp(0.677103303863);
    msg.setSource(36782U);
    msg.setSourceEntity(186U);
    msg.setDestination(12690U);
    msg.setDestinationEntity(84U);
    msg.value = 0.949787808354;

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
    msg.setTimeStamp(0.629091168986);
    msg.setSource(51527U);
    msg.setSourceEntity(120U);
    msg.setDestination(4468U);
    msg.setDestinationEntity(57U);
    msg.number.assign("FBDZAZWRMUNRQPYMIJLHVIAKQNVRZSMNBSESYHXXZGXDWEXVKMGKOCTSOAKUPRLEXNMSTNGINVWGHIXDUFUKSXGZXTQEVIFBGIJLHFKWYVHICUQCHQCHPAPKFOEZMSYQTODLNFJPLMJTUBBTRJFTIFLFZDAJZKJPCWKRKVRWCYUOIVJMMGVOELSHYPNYLLUPOIUBRTXSARGFSDDCBWEEWAEBVQOPBAQRX");
    msg.timeout = 49072U;
    msg.contents.assign("GBVBVPICUNZDYYJHMSECTSUOMWGQRHDLVYVAHEOE");

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
    msg.setTimeStamp(0.658491618419);
    msg.setSource(22725U);
    msg.setSourceEntity(62U);
    msg.setDestination(36970U);
    msg.setDestinationEntity(40U);
    msg.number.assign("CMJQPIABIMPPXPLGGFEICJWGUDJTVKZKAFPNOLWVLWXHSOHEXVONYEGGHGCWDFUCRJHNONDBRYSXTHTJOHDQCSPGJRZCNXMLLDXZBKIYRLBMGPNEUELUHSJFTASVKIHPTBOBBGBFZANKTXVIZQDN");
    msg.timeout = 59720U;
    msg.contents.assign("EWUXRYPDQCNVVZGJY");

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
    msg.setTimeStamp(0.739619655044);
    msg.setSource(18233U);
    msg.setSourceEntity(186U);
    msg.setDestination(5614U);
    msg.setDestinationEntity(98U);
    msg.number.assign("KWFSEXZCMTARCRDVPOFAZJGRAIRASTLOLCMDJUJNYMFKLUNALODFCQXIBGIVSDKHILODQGTNWLEILBOZXDQWLPIWOAMVFJVQGBDNMCWAYOQGPKQWQPLRYMHSRGREGBYHQSFUZSXRNHJBEYYHJDKBRCXJUWOUPGMEWOMIPOTHXIKGNPVXTZGFDWRJZXNTZZDEIHPCHBPUUVKHCTHMFCJKVNUAITEJ");
    msg.timeout = 19287U;
    msg.contents.assign("RRWCGSCOBBXWKWPHAIWTXOKSDNIXJQPTGMFHHEQDQWWDMMUSTJHSZSYJRGQRXCTFYHAUOYOMVPEDOFUWEQQEBYBEGANBXXYZLLD");

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
    msg.setTimeStamp(0.812949386457);
    msg.setSource(64713U);
    msg.setSourceEntity(132U);
    msg.setDestination(983U);
    msg.setDestinationEntity(156U);
    msg.seq = 1877236003U;
    msg.destination.assign("QRAWHNOTWCHUTXEGGZWDHQKKDNBNMWOWUFVAXJXSFTMOZHUCIIFUYOXPUOAPOYPKSJSLFTVZQRPJSXDRTJAWUBCVYJYCINGHLCCKSXKZMOLXLPAWVRGZMGKSLKYX");
    msg.timeout = 15499U;
    const char tmp_msg_0[] = {112, 17, 3, -82, -89, 112, -43, 122, -33, 59, 88, 84, 87, -100, -88, 40, 38, 13, -5, -11, -61, 124, -114, 108, -123, 17, -117, 73, 44, 86, 100, -119, 87, -117, -91, -44, 106, -47, -110, -34, -118, 50, 66, -91, -34, -14, 115, 11, -1, -67, 3, 7, 50, -51, -29, -62, 81, -22, 50, 13, 78, 44, -94, 82, -111, 102, 49, -9, -85, -28, 115, 18, 53, -22, -62, 87, -99, 92, -18, 75, 125, -94, -71, 10, 77, 3, -46, -103, 17, 44, 35, -27, -40, 69, -16, -22, 125, 88, -14, 90, 112, -46, 115, -35, -86, -107, -6, -72, -123, -100, 22, 72, 50, -98, -107, -54, -112, 86, -77, 81, 14, 60, 84};
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
    msg.setTimeStamp(0.620970040445);
    msg.setSource(16132U);
    msg.setSourceEntity(76U);
    msg.setDestination(24499U);
    msg.setDestinationEntity(219U);
    msg.seq = 2130361465U;
    msg.destination.assign("OTMFQPRKDLWEJLITZQBZNCKLUXNLZHVOYNRMTGHZHMAKUFIHFIGSWOKOBTJYNVCHWOZKIFMPYYSCAEEVAETAGUMJFCCMWVEJKQPISGTJAZRHNLYUSODSLZIUPKCNBWAXQRPLTNYMAJUEVCJQJXDGPXXWYSBXEFUOCMEOIUSVTAPZYADUQPSGIIDFWTOTRDQBJHRFKKLLHEZWMYDARXYVNVKHXJ");
    msg.timeout = 5227U;
    const char tmp_msg_0[] = {-92, -120, 59, 81, 95, 63, -121, -42, 66, -107, 126, -80, -31, -69, -84, 4, 8, 36, 111, 13, 117, -43, 114, -28, -124, 8, -87, 40, 61, 97, 67, -10, 46, 74, -63, 105, -82, -42, -63, -125, -112, 64, -113, -55, 125, 86, -40, -117, -10, 43, -92, -45, 77, 108, 111, 88, 80, 82, -80, 106, 60, -25, -21, -101, -52, -126, -21, 66, -68, 6, 78, 103, -45, -23, -30, -124, -25, 105, 120, -65, 111, -97, -12, -97, 73, -5, -59, 79, 36, -86, -69, 97, 41, -103, 0, 98, -7, 94, 100, 82, 23, -38, -105, -33, -65, -89, -100, -94, 100, 70, 81, -121, -95, -50, 12, 20, -80, -62, 41, 28, 4, -30, -105, -80, -2, -22, 14, -69, -85, 56, -16, -37, 78, -55, -95, -118, 52, -122, -27, -85, 38, 41, 20, 16, -12, 96, -41, 53, -14, 19, 48, 99, -95, 105, -101, 89, -85, -108, -1, 67, 81, -75, -110, 113, -121, 83, -116, -26, -114, -50, 115, 38, 71, -100, -40, 80, -88, 73, 109, 63, 42, 96, 29, -1, 126, 54, 50, -76, -96, 37, 110, -39, 10, -50, -62, -85, -38, 89, -14, 62, 107, -52, 51, 52, -19, 31, 42, 108, -39, 11, -113, -18, -83};
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
    msg.setTimeStamp(0.521244644142);
    msg.setSource(59792U);
    msg.setSourceEntity(115U);
    msg.setDestination(61940U);
    msg.setDestinationEntity(6U);
    msg.seq = 2337621255U;
    msg.destination.assign("DGIJJBSOZGKTALIZSSPFBPCNOZFIXSPQGJWQDTTHEQNSIHAPOVCIHTAEWSBXQWXTPXEYEMVNHYWFUYJVGZTQICQNCVDVCFYPULWGKBNMRCDXQXFLCOAWQYBRIGYNVMFXOZKSHKUUFNKRRPLUYTDIUBSLVBHELRXDJKJOYNWKTWZGMESEVJCUSUBRLAFMUMAGZYRJKKHADLEGWVAGHVDMMDIY");
    msg.timeout = 64935U;
    const char tmp_msg_0[] = {-60, -21, -70, 72, -55, -118, 91, 68, 44, -20, 37, -65, -120, -125, 35, -96, -56, 11, 99, -110, -85, 98, 119, 7, -84, 20, -114, -92, 58, -109, -17, -74, -31, 123, 57, 47, -28, -63, 86, -97, 119, 126, -83, -38, -86, -18};
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
    msg.setTimeStamp(0.559291865711);
    msg.setSource(49894U);
    msg.setSourceEntity(248U);
    msg.setDestination(61843U);
    msg.setDestinationEntity(50U);
    msg.source.assign("XKDJOVQDRHCBLZJJCGNNNQIUANZWNUIRPEOCLZRFSLXQHYSWGPSOHLWIWMXFAZTAOUTPASCTXYJKNLDBYRROKCMOKXPSFPBGNITQQFQGIPKHXZTVVDYUZATTKHWWSZWUOWEVJDUOPOHMBLEFJLFVXYFLCHCVI");
    const char tmp_msg_0[] = {122, -41, -4, -57, -113, -40, 16, 29, 89, 34, 19, -105, -110, 48, -38, -126, -79, -49, -64, -123, 117, -65, 103, 97, 106, 86, -108, 57, 13, -88, -17, 103, -84, 19, -90, -54, -37, 51, -95, 100, 103, -125, 113, 119, 97, 86, 35, 13, 44, -36, -43, -50, 72, -39, -125, 59, -120, -12, 21, 52, -125, -8, -117, -64, -94, -82, -83, 43, -121, -18, -69, 45, 64, 10, 100, 6, 7, -56, -107, -102, 40, 2, -117, -85, 48, 25, -22, -41, 80, -47, -80, 98, 1, 123, 10, 19, 59, 104, 94, 31, 118, 67, -26, 79, -91, -28, -41, 107, 63, 88, 118, 37, 31, -7, 122, 126, -22, 6, -84, 55, 11, 12, 99, -37, 16, -106, -9, 86, 43, 67, 25, 88, 79, -54, -61, -34, 46, 73, -40, -6, 36, -86, -88, 29, 48, 26, 28, -77, -37, -97, 74, 65, 112, 42, 19, 12, -59, -24, -120, -57, 59, -83, 73, 84, 35, -53, -38, -109, -38, 27, -57, 33, -93, 4, -80, -75, -116, 62, 43, -91, 103, 98, 57, -122, 39};
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
    msg.setTimeStamp(0.112053744406);
    msg.setSource(57394U);
    msg.setSourceEntity(45U);
    msg.setDestination(25269U);
    msg.setDestinationEntity(89U);
    msg.source.assign("WZDBNEXHTQPQOKYVBQAYKCEHFFDWWPXCOVOXGQUIQWCJKKLTFQJSMGSURFVPRACXOBHSIJZZSMPZKAEASCJYEVDPJXZRLUADMIJBJE");
    const char tmp_msg_0[] = {-4, -70, 43, 70, -48, -57, -83, 119, -71, -14, -24, 81, 39, 42, -73, 95, -105, -4, -104, -13, -120, -105, -126, -116, -123, -103, -108, 77, -58, 100, -50, -9, 101, -46, -111, -97, -8, 43, -47, 125, 54, 15, -107, 26, -31, -48, 40, 55, -51, 76, 90, -85, -70, -2, -54, 56, -83, 19, -40, -30, 29, -27, -50, 19, 52, 50, 46, 26, 40, 8, 88, -79, 69, 51, 100, -35, 32, -57, -13, 47, 125, 62, 101, 32, 14, 44, 14, -74, 30, 35, -20, 108, -122, 17, -85, 72, -61, 53, -115, 88, 97, 91, 119, 22, -124, -120, 59, -5, -120, 48, 68, -98, -116, 15, 91, 111, -70, 43, 102, 78, 3, 123, -47, 115, -97, -6, -61, -91, -7, 9, 65, -126, -67, 68, -81, -67, 16, -42, -30, 55, 39, -80, -93, -60, 90, 30, 73, -89, -39, 31, -62, 79, 11, 58, -77, -91, -105, -17, 38, 19, -21, -51, 55, -61, -65, 34, -13, 39, 24, 84, 6, 19, 94, -101, -38, 19, -99, 21, 117, 98, 7, -2, -124, -123, -33, 115, -79, 110, 39, 76, -30, -115, -6, 28, -122, -109, 80, 5, -13, 102, -109, -83, 97, 98, 64, 6, -8, -1, -41, -66, -25, -107, -19, -55, -27, 119, 118, 69, 83, -118, -50, 102, -56, 32, 47, -22, 78, 53, -63, 59, -95, -94, -67, 70, 118, -66, 8, 54, 66, -5, 83, -21, 12, 11, 40, 52, 83};
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
    msg.setTimeStamp(0.676716275791);
    msg.setSource(23843U);
    msg.setSourceEntity(2U);
    msg.setDestination(54750U);
    msg.setDestinationEntity(41U);
    msg.source.assign("PAPHDAWJRXUYQMDETIOLOSZNHXXBFONIWTUDGBOFYZPMXTFYHMVLEHTKJIERPJSZWQCNZBMSYXFKUNGBCHGQBFWVGYSMWJKUCANJMJZOWVPKEPGVRQEHOYWLAJRTHIFYUJGSEILFLNTUHRRBACCSCGEQEILQJVKDNMLPVSYDLCPZTFWXUBGWKQDXUDURUKDDANMSTCNQOSKFXFGITZVRZAADOLHSBIY");
    const char tmp_msg_0[] = {-13, -125, 96, 33, -42, -48, -61, 93, -85, -69, 57, -40, 99, -105, -23, 48, -124, 31, -71, -75, -101, -79, -18, 47, -36, 97, -100, 59, 118, 101, 34, 43, 15, 33, 24, 106, 87, 52, -31, -12, 98, 42, -101, -78, -107, 92, -26, 52, 66, -82, 73, 71, 113, -95, -13, 56, -29, 100, 118, -45, 92, 119, -68, 9, 61, -72, 86, -86, 18, -16, 106, -48, 80, -6, -35, 19, 106, 68, 118, 114, -66, 98, 45, 31, -73, 14, 18, -66, -37, -95, -44, -25, 124, -50, 36, -49, -66, 73, 120, -24, -121, 95, 79, 74, -43, 18, -71, -111, -9, -47, 82, 33, -127, -125, -67, 31, -89, 70, -123, 110, 25, -49, 117, -79, -10, -18, 102, -45, 26, -85, 19, 33, -18, 88, 94, -59, 82, 76, 3, 93, 40, 13, 74, -50, 26, 92, -78, 65, -118, -102, 104, -88, -118, -58, -69, -6, -125, 28, -28, -30, 57, 43, -70, -86, -111, -103, -77, -108, 51, 115, 101, -107, 13, -67, -47, 115, -97, 46, -61, 103, -88, -62, -32, -80, -120, 85, -4, 24, 91, -31, -118, 60, 2, -104, 43, -59, -114, -77, 97, 81, -53, -65, -123, 76, 80};
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
    msg.setTimeStamp(0.658918170831);
    msg.setSource(33046U);
    msg.setSourceEntity(82U);
    msg.setDestination(13833U);
    msg.setDestinationEntity(157U);
    msg.seq = 3730989845U;
    msg.state = 8U;
    msg.error.assign("LFXRTHDZQHSEBQQYN");

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
    msg.setTimeStamp(0.0334966947001);
    msg.setSource(36255U);
    msg.setSourceEntity(248U);
    msg.setDestination(7915U);
    msg.setDestinationEntity(171U);
    msg.seq = 2685753719U;
    msg.state = 241U;
    msg.error.assign("DASDOBVBALACMIMJXIEHZWXWUGSNZQKIUGUYZQWKCDCEHBTEYCFPGEDVNERNMJGLOJDWIDOWTNSPQKLMGUCRWEVCYKPDMVHGVXFSNWIKXOPYJFYMHOSFFULBGKPWEUTRDXULHVRZYASADTTMFQBRITXJZCPLZJOJCIFICPUXPVVLGKOTEKQQQKRDTMNGYJYNNZYJOIHJTLXAPNHSVE");

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
    msg.setTimeStamp(0.885697357136);
    msg.setSource(37758U);
    msg.setSourceEntity(88U);
    msg.setDestination(25918U);
    msg.setDestinationEntity(2U);
    msg.seq = 3571965576U;
    msg.state = 148U;
    msg.error.assign("GPCLYTSIPIXHAWJKNYNRFZITKAULELTQWQRUJVWARJIMBELKHZDHEYSVFXBMFKBLDCUREYKKVPQJTSASMYTXHIHMGRMFXXQAQKVKJVFMFPAQWHAJCNPAVCYMSGNCLLSJGXZBITOLJZDIWEPDIOPBLXVSYZRQTZYCZGUOWRXAEPUNWFITEKUOGZPEBHMDOCXNQOSJYLGVMURWGBKSHFCDUCBOBFEJDHGX");

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
    msg.setTimeStamp(0.0917844198319);
    msg.setSource(4100U);
    msg.setSourceEntity(229U);
    msg.setDestination(60831U);
    msg.setDestinationEntity(161U);
    msg.origin.assign("OWTMPVGPEYYNSBNZRKSNHRYATZWBJZVETJUOBITBIQGNFRDAGEPMGYSFCAAWQCJABTLKKBOGMXNFH");
    msg.text.assign("CAVIZYLKWEXLRVJKXGPMSEFZHFJSOBOHNCUSOMALUTKAKHRIMJPTKWTTVIMDEDGXGVREIDVUHYBQQSMFYCLPDQICOEFYITRFBGANLIMWQENVZLBQWZVRZWCPOXIROHFGYEMDBSBZCDKLOWAXDCHVBNQCUEUGXXSNHLP");

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
    msg.setTimeStamp(0.285667464925);
    msg.setSource(20059U);
    msg.setSourceEntity(163U);
    msg.setDestination(32757U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("HLQWIMCVEKOMWCGVRPJDUXBYBCDKNNCLEWYIIKAFUAFTFBYJTZWLODSFTXKOVPFESTVZYHXMAHQNRSRSOPJVERGOMQUZYZLICWEVJDBZZMJUMTOBZUWRAFIDDYMHKYCGXBLGAWGJCXCFBXJSAJUHKYNQSRFLLWQNXLTHZRPGVPUHRDTJPPSDPYWVRDKQBUACTWURKOSAIBJQQIMXNGNNMEXHDEZIEOGPHP");
    msg.text.assign("RPPOQNPJFVAMEIMCGNLDCUZPBYWMHWSOFQLLCUMUDLMNTGFZXHXACDGCUBMVIKGKLOZEAHGCTGDVAVEFHKXEOTKTLOSBIJHPBMQAIIQPJVWXYSNIZNRFEQQSIVYJHWDSRAAJIPBKTRSBFRMYKWUZR");

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
    msg.setTimeStamp(0.978034669719);
    msg.setSource(23405U);
    msg.setSourceEntity(142U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(46U);
    msg.origin.assign("PUNOYNOIOJAWFZZWTSZUYWTPIJOWCSKULGJOQRQOZBELXJDLHSMHZXMGPCOVLYXPKQCNDITYKWVCJLBEJPVVHFTAGWAPPDMKEQHMEDCARA");
    msg.text.assign("UZVLAQUIKKRAJYFNTBB");

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
    msg.setTimeStamp(0.987565114228);
    msg.setSource(1927U);
    msg.setSourceEntity(200U);
    msg.setDestination(3336U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("NUVJVWODFSOWGPTFIESZBHCCBHITZTXANDFQLTKRUKXVKBUGEJJYEDBNWUAGKLZERUTQMYCRQCWQLJKYLLICHFBQJRCFBLAESPHPYYZBDOLCEGY");
    msg.htime = 0.768868835359;
    msg.lat = 0.10444393691;
    msg.lon = 0.241027719738;
    const char tmp_msg_0[] = {13, -47, -6, 114, 1, 12, 47, -67, 47, 25, -77, -71, -73, -106, 106, -84, -34, 74, 123, 109, -123, 31, 5, -59, -19, 2, -19, -26, -65, -55, -89, -18, -42, 107, -20, 69, 19, -68, -36, 102, 88, -9, -64, 30, -56, -128};
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
    msg.setTimeStamp(0.241890128848);
    msg.setSource(50383U);
    msg.setSourceEntity(45U);
    msg.setDestination(12421U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("MBONNDYEAZGLCTNEWEFHOXDMIPLELUFRNFAEVUKFZRSIL");
    msg.htime = 0.111840842423;
    msg.lat = 0.787357004331;
    msg.lon = 0.122857781907;
    const char tmp_msg_0[] = {34, 74, -77, -82, -103, 96, 14, -127, 88, 31, 50, -79, -112, 124, -60, 108, 102, 88, 112, -122, 29, -47, -109, 104, -12, -63, -65, -81, 41, 42, 123, 24, -25, -46, -77, -75, -103, 12, 42, -11, 24, 117, 38, 15, -13, 95, 114, 17, -26, -41, -85, -72, -115, 24, 6, 50, 69, 55, -124, 95, 7, -6, -88, -124, -85, -63, -11, 48, -118, 0, 16, 120, -23, 16, 115, -15, -62, 82, 41, -33, -106, 70, 36, -28, 59, 18, -94, 56, -93, 111, -106, -11, -119, 57, 66, -58, 36, 108, 52, -43, -89, 20, -122, -10, -126, 97, 105, 59, -12, -98, 40, 75, 11, 71, 6, 88, -99, 18, -105, 7, -16, 74, -13, -127, -56, 20, -16, 106, -109, 105};
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
    msg.setTimeStamp(0.47845383195);
    msg.setSource(6633U);
    msg.setSourceEntity(111U);
    msg.setDestination(12599U);
    msg.setDestinationEntity(172U);
    msg.origin.assign("EMYXOMLRXETFRZTIPPEGF");
    msg.htime = 0.663964769259;
    msg.lat = 0.906444113689;
    msg.lon = 0.533515192049;
    const char tmp_msg_0[] = {-85, 73, -28, 53, -22, -114, -71, -1, 62, 111, -86, 0, -13, -119, 2, -96, -98, -90, -2, -7, -15, 42, 57, 100, 10, 124, 9, 48, -65, -117, -119, 89, 12, 25, -45, -19, -105, -19, 97, 20, -102, -19, -35, 67, 40, -58, -43, -121, -96, 18, 96, 111, -128, 47, -37, 63, -88, -85, 31, -127, -57, -55, -70, -120, -108, -60, 91, -5, 54, 42, -17, 103, 125, -120, 55, -45, 38, 113, -126, -71, -107, 6, 15, -32, -40, 35, -11, -91, -13, 89, -17, 98, 120, 101, 13, -94, -57, 111, 1, 61, -114, 24, -93, 101, 68, -65, 5, -98, 14, -71, -19, 57, -57, 99, 84, 70, 98, -122, -116, 2, -82, -67, -26, -41, -118, -26, -48, -55, 118, 95, 122, 39, 96, 17, 32, 35, 94, 23, 62, 16, 1, 8, 1, 42, -90, 25, -95};
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
    msg.setTimeStamp(0.465416860436);
    msg.setSource(22529U);
    msg.setSourceEntity(186U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(109U);
    msg.req_id = 48214U;
    msg.ttl = 6886U;
    msg.destination.assign("TTNRNVXSXYFPGIJXUADMOYANZOJNOQFRSHEJZAIMDBRYYTEIFQOEWSPUYIXQXWB");
    const char tmp_msg_0[] = {104, -43, 103, -51, -13, -122, 112, 71, -40, -17, -124, 77, -32, 104, -45, -105, 69, 123, 126, -106, 29, -78, 15, 38, -22, 124, -121, 92, 21, -108, 51, 110, 117, -112, 119, 62, -120, 20, 9, -24, 59, -112, 21, -15, -105, -116, 2, 124, 40, 107, 99, 119, 52, -1, 111, -34, -102, -29, -66, 107, -100, -86, -94, -121, -60, -121, -91, 90, -30, 4, 117, 10, 41, -71, -21, 81, -115, 76, 23, -28, 31, 83, 29, -44, -73, -53, -70, 46, 70, 3, 103, -68, -52, 47, 66};
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
    msg.setTimeStamp(0.0514055885661);
    msg.setSource(59226U);
    msg.setSourceEntity(72U);
    msg.setDestination(27732U);
    msg.setDestinationEntity(146U);
    msg.req_id = 35832U;
    msg.ttl = 23353U;
    msg.destination.assign("QZTBFLMWHOSKSHWLUBKXFADSWWLHSNQMZCBXGVGRONMWAKAVVYPCJTQE");
    const char tmp_msg_0[] = {-60, 7, 91, 40, 38, 50, -33, -116, 44, -116, 125, -30, -2, -121, 43, 14, -108, -97, 19, -51, 47, 102, 29, -8, 13, -32, -50, 47, 55, 61, 41, -121, -100, -73, -24, 92, 24, -109, 88, -58, 117, -29, 81, 23, 98, -91, -15, -121, -17, -42, 62, 30, 63, -114, 87, 53, -60, 63, -14, 21, 88, 23, 1, 61, 63, -35, 78, 89, -60, 50, 122, -97, 122, 96, 117, -105, 24, -75, 118, -18, 100, 107, -46, -105, 88, -61, -56, 85, 47, 76, 19, -1, 115, -18, 27, 124, -78, -7, 41, -20, 73, 62, 105, -115, -85, -8, -124, 85, 98, 73, 111, 24, -8, 122, -10, -88, -11, -13, 6, 0, 66, -3, -79, -53, -45, 64, -77, 101, -105, 56, -92, -49, 8, 66, 95, -119, -60, -37, -60, 2, 72, -43, 98, -67, 66, -22, 18, 5, 52, -127};
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
    msg.setTimeStamp(0.963111168295);
    msg.setSource(48351U);
    msg.setSourceEntity(115U);
    msg.setDestination(53542U);
    msg.setDestinationEntity(131U);
    msg.req_id = 43312U;
    msg.ttl = 23885U;
    msg.destination.assign("HHKCMKXCZIFOWHDLPMSLXGFAMOGAMNUJOSBRACBTWBIOOOJLMQVTYWHPANDWWWYBYVRYRSKFYOJESEFQRDSHCCQNUMVJVVIULUQPHOATMFKPXMVWFNERXDPVDZESAYHJNXBLZNZSGJZXFZQUEKFNBGATQRQDWGXTTIDIOEHIKJLLPVRNWFPLKQFUEDIAGZRTDKEVESDSUXBGNJHBBUNRLKPYZQMUMGLXTCPWCGIJYG");
    const char tmp_msg_0[] = {-116, -125, -83, -1, -55, 75, 115, 82, -45, 39, -94, 45, 108, -21, -112, -104, 43, 126, 46, -76, 98, 73, 88, 66, 55, 62, 117, -128, -123, 7, 51, -41, 4, -87, 20, -115, 58, 76, -2, 116, -118, -18, -90, 2, 93, 73, 2, -84, 6, 66, -117, -20, 18, -81, 96, 45, 40, 113, 50, 93, -91, -19, -28, -40, 10, 125, 46, 67, 93, -122, 15, 23, 95, -82, -33, -66, 11, 6, 110, -103, 53, 104, -118, 102, -48, -64, -12, 64, -79, 114, -100, -16, 126, -28, -29, 9, -14, 35, -115, 26, -99, -80, 11, -21, 105, -87, 125, -77, -41, -122, -114, -68, 25, -17, 27, 67, -12, -83, 18, -59, 87, 121, -96, 83};
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
    msg.setTimeStamp(0.471656440072);
    msg.setSource(51239U);
    msg.setSourceEntity(78U);
    msg.setDestination(49365U);
    msg.setDestinationEntity(221U);
    msg.req_id = 56002U;
    msg.status = 108U;
    msg.text.assign("AWTNTIZDXWVQYCHLOTYGOJILWKEPEIAFRXXOZPOOMEOWFYHEXVTYUYXLAGBXOJFMSQZVDJBWZJCYIILXPBMKFRWHLRKPSJNCBQOMJZEYVBUSRGRMIKHAEDFTVYNTZNKTQZWGADSKMZCYUVNSAIUMKGF");

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
    msg.setTimeStamp(0.0894719681606);
    msg.setSource(39337U);
    msg.setSourceEntity(238U);
    msg.setDestination(217U);
    msg.setDestinationEntity(76U);
    msg.req_id = 21257U;
    msg.status = 87U;
    msg.text.assign("EIJJUEQYUVBRSEIUQDSQFFPEPZKMSJITHWPPDNPOQHRZERSLDEFXATLMZVBIFNOGWUYKKQGBQUCIKDLTRODBOQWVUCJTAUGHSOIXRWVCMMHPPCVSGFKWOUVFYWJGARHHSZCLWIGLRHEBBBAZXXMJXZLMBQJZURSXNBTYEOJSPGZWCLTYHTZAVKCONXLADIYYORAJQGTIFFALPYYDQFNESKNWKUVYANMXVNNZGAHILVTEHMJOTFXRKMDPNBCXMD");

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
    msg.setTimeStamp(0.73642227173);
    msg.setSource(43478U);
    msg.setSourceEntity(19U);
    msg.setDestination(10513U);
    msg.setDestinationEntity(189U);
    msg.req_id = 16297U;
    msg.status = 78U;
    msg.text.assign("SQCACRXJLJKBDUEVWQUAOXDUVCTMTLJYZIFATBVRNITFTMYNEKDUKZCVIVPZXOAXTEPMIDHAMDZHSORUDITTKYPSRLENJSIOGDWCGRGPBQJBQWXWCRUEYCXGYQWKOVWHVFHJFZSVHHBEVKZWILRQXPSGNKXTMMDZFEYQLYNHBDYJOUFKWOYNBHITHGKURFAGRAMSPPSFFL");

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
    msg.setTimeStamp(0.360803970388);
    msg.setSource(61709U);
    msg.setSourceEntity(44U);
    msg.setDestination(5603U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("XJWFAGLVTMBGFYDUFFAGLAKZTSTLAGIAVCPQTWYXGCPQSVKHEOEVRYKROJU");
    msg.links = 2092163357U;

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
    msg.setTimeStamp(0.652959220156);
    msg.setSource(31155U);
    msg.setSourceEntity(153U);
    msg.setDestination(9794U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("NLFXBZQDIWWSAOROMEKOZNAFEVDHRGWURJQLCGSDLKYXISIEGPMTHXOHLNDSSCHBDZLFYBZVAOLMVHJJGCQKJURGMSVOTKKNGHVYTXQSURLEKXZYRMPSUTTLHPDVWYBKREPXUBDIGRYDCHZWBACJTXDQZIYQQNAZENHWOUENETBXCFZ");
    msg.links = 422639117U;

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
    msg.setTimeStamp(0.060159067156);
    msg.setSource(40690U);
    msg.setSourceEntity(204U);
    msg.setDestination(39997U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("CBNRHXIJQLKBQSAYESHETOFFCUEUWATTDJKINALYUAPXILBLXEMKSKKCKVJJWOPZXZGGFNCZFQSRAJCZBMVRYGPMKGSBVGARETVHLIKKRTOVJZZRETPQSSWVUPNNPQQQXDDWFLRMHOYJSVETVDFNQOVIUNCKJL");
    msg.links = 3168355362U;

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
    msg.setTimeStamp(0.760722830297);
    msg.setSource(18890U);
    msg.setSourceEntity(82U);
    msg.setDestination(10010U);
    msg.setDestinationEntity(242U);
    msg.groupname.assign("JFQGDFCYZLVBSSQDDSDAWPSXIUALEXCFZJDNFZUNCRPYEFUXXGAIJKKKDKENTMGYEGMQIFORDFYHHYBLAMELVNGWSGTNBSRAYVTJRDXSZLCDQLVRFAENCARVLYQIKBYUZEOGNHOKHNCJUVWPRTHQFBLUGIKOH");
    msg.action = 42U;
    msg.grouplist.assign("RZOLLEITZYSFIRGUPGTKBFJOKZIKAWJHDIWANXOTEOIMIBUTFFDDQORXBYMJQEABVXWACEXUPHRMHDRABPGMNAUQECRVFNMYVSHAVWFLSCH");

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
    msg.setTimeStamp(0.643622929383);
    msg.setSource(13093U);
    msg.setSourceEntity(210U);
    msg.setDestination(33847U);
    msg.setDestinationEntity(151U);
    msg.groupname.assign("DZRQIUFAFAORTSARBBWNKGEGPFJMUKMFBGMIKDPEVBMZVQCCAMUEJSTZLMPFARTWIQTIHNHDYSEANOPLCYDVLBDTYANGITLWNLDHKRFOUUEBXMQMEEGUBGOOWFLNXOHVYCJZXEVJSDVJZGXRWXTCSJOSGXSHGDYN");
    msg.action = 39U;
    msg.grouplist.assign("XOJVZAHSWJJCOERUAXBPSFOUEBZSBLWCISIAKZVVKFDDVJQXVHSTRYPCMULNSDEWMEBIJNQYBYHGNCTSJVZALEDCRIXQSNMPAHGICGBWVNLRYTAQUDXQPBFEZCKBHQKFASHYCLGWDFPNOPTZWMMOTRFNDEFYMECKJAZGIMZ");

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
    msg.setTimeStamp(0.579297509852);
    msg.setSource(10688U);
    msg.setSourceEntity(225U);
    msg.setDestination(14115U);
    msg.setDestinationEntity(114U);
    msg.groupname.assign("AOBRYGVLLUIQAUUCPXASHQDCBU");
    msg.action = 172U;
    msg.grouplist.assign("TSDCYZRZJUZEHPVJGVBWSQMYLMUWTVKELZDMNOVKBICJBIPZBAFOTNDIVJNFZDWBRZILRDZKSRFBIHSLXGNYZACHAOPOUKQLTCSSVGXINIVHITGOKAMEGNCZYROXEUEJHUGQMLJMXYOQSSFALWOAFLIPYXDQQMTCAJSSPDXDKXNVCNYPEIGFWPBYBHAHTMWYMRVFJXERUUHUUGFJOXGVKARCFQWHCQBPGMURPRFXWNLWNKLQKHACPTQEJY");

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
    msg.setTimeStamp(0.688004537625);
    msg.setSource(32028U);
    msg.setSourceEntity(21U);
    msg.setDestination(32954U);
    msg.setDestinationEntity(176U);
    msg.value = 0.394893205713;
    msg.sys_src = 48984U;

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
    msg.setTimeStamp(0.315935655965);
    msg.setSource(58804U);
    msg.setSourceEntity(195U);
    msg.setDestination(20900U);
    msg.setDestinationEntity(154U);
    msg.value = 0.901000488794;
    msg.sys_src = 41900U;

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
    msg.setTimeStamp(0.156817451646);
    msg.setSource(65103U);
    msg.setSourceEntity(55U);
    msg.setDestination(59453U);
    msg.setDestinationEntity(201U);
    msg.value = 0.938752208903;
    msg.sys_src = 44336U;

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
    msg.setTimeStamp(0.286075752576);
    msg.setSource(57586U);
    msg.setSourceEntity(153U);
    msg.setDestination(42419U);
    msg.setDestinationEntity(74U);
    msg.value = 0.912926023642;
    msg.units = 221U;

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
    msg.setTimeStamp(0.146802922383);
    msg.setSource(24318U);
    msg.setSourceEntity(78U);
    msg.setDestination(46972U);
    msg.setDestinationEntity(56U);
    msg.value = 0.386680825431;
    msg.units = 65U;

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
    msg.setTimeStamp(0.302847402088);
    msg.setSource(58394U);
    msg.setSourceEntity(88U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(196U);
    msg.value = 0.568445896974;
    msg.units = 64U;

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
    msg.setTimeStamp(0.303310094726);
    msg.setSource(59194U);
    msg.setSourceEntity(154U);
    msg.setDestination(17893U);
    msg.setDestinationEntity(230U);
    msg.base_lat = 0.976747709191;
    msg.base_lon = 0.65373189824;
    msg.base_time = 0.261325323462;

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
    msg.setTimeStamp(0.314971099322);
    msg.setSource(17422U);
    msg.setSourceEntity(0U);
    msg.setDestination(43580U);
    msg.setDestinationEntity(208U);
    msg.base_lat = 0.882221572916;
    msg.base_lon = 0.12330348809;
    msg.base_time = 0.0167989242773;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 3552U;
    tmp_msg_0.destination = 23704U;
    tmp_msg_0.timeout = 0.310938253843;
    IMC::Fluorescein tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.148274223843;
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
    msg.setTimeStamp(0.848737967201);
    msg.setSource(6680U);
    msg.setSourceEntity(54U);
    msg.setDestination(61527U);
    msg.setDestinationEntity(67U);
    msg.base_lat = 0.0450548827592;
    msg.base_lon = 0.023438464045;
    msg.base_time = 0.927800977967;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 39098U;
    tmp_msg_0.destination = 20429U;
    tmp_msg_0.timeout = 0.793047754494;
    IMC::ControlLoops tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.enable = 151U;
    tmp_tmp_msg_0_0.mask = 1190192361U;
    tmp_tmp_msg_0_0.scope_ref = 3745014852U;
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
    msg.setTimeStamp(0.272111075607);
    msg.setSource(12989U);
    msg.setSourceEntity(89U);
    msg.setDestination(54814U);
    msg.setDestinationEntity(114U);
    msg.base_lat = 0.686957031892;
    msg.base_lon = 0.681079464017;
    msg.base_time = 0.472034957875;
    const char tmp_msg_0[] = {-24, 111, -9, -43, -115, -91, 45, 52, -70, -54, 123, 37, 98, 4, 5, -53, -122, 22, 121, 84, 107, -98, -43, 9, 52, -87, 22, -43, 11, -73, 28, 15, -65, 35, -34, 119, -117, 46, -83, 92, 105, -126, 56, -82, -6, 36, -3, 87, -109, 100, 44, -60, 106, -19, 44, 11, 20, 18, -114, -48, -104, -78, 74, 69, -104, -9, 74, 40, 12, -23, -107, 102, 28, -76, -122, 50, -124, 112, 9, 46, -80, -39, -26, -21, -102, -11, -40, 88, 26, 39, -111, -27, 64, -64, -63, -18, -14, -124, 119, 99, 50, 81, 36, 9, 106, 88, -98, -15, 103, 22, -77, -14, -17, 100, -120, 105, -5, 64, 102, 105, -9, 6, 72, -16, 73, 43, 27, 99, -127, -120, -38, 55, -70, -53, -2, -95, 0, -39, -24, -100, -16, -34, 23, -21, -58, 11, 54, -91, 78, -112, -120, -124, -15, 6, -72, 19, 9, -110, -72, 114, -105, -18, -85, -17, -33, -121, -118, -123, 26, -41, -63, 119, 113, -24, 1, -69, -103, -124, -4, -40, 15, 49, 111, 72, -102, -70, 105, 5, -66, 21, 23, 5, -80, -32, 108, 120, 68, 43, 53, -96, 23, -57, 29, 76, -88, -110, 87, 51, -64, -39, -43, -62, -16, 116, -36, -109, 61, 110, -31, 52, -99, 93, 62, -107, -4, 2, 41, 81, 107, 123, -10};
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
    msg.setTimeStamp(0.834149252271);
    msg.setSource(8982U);
    msg.setSourceEntity(22U);
    msg.setDestination(47843U);
    msg.setDestinationEntity(192U);
    msg.base_lat = 0.802135420773;
    msg.base_lon = 0.725675887067;
    msg.base_time = 0.50216416909;
    const char tmp_msg_0[] = {-38, 11, 19, -112, -23, 66, -23, 20, 91, 98, 57, -23, -65, 7, -105, 28, -61, -28, 0, 74, 67, 89, -72, -18, -107, -9, 77, -14, 82, -4, -76, 68, 62, 120, -6, -95, 99, 85, -11, -46, 108, 117, -123, -4, -28, 89, -124, -28, -64, 69, -80, 53, -26, 39, 77, -50, 121, 47, 83, -5, -2, -63, -23, 111, 71, 112, -50, -36, -106, -26, -10, 66, -122, -75, 106, -31, -19, 43, 122, -95, 15, -116, 97, -125, 3, -74, 62, -120, 87, -83, -94, -52, -90, -24, -120, -25, -75, 64, 119, 64, 119, 57, -36, -109, -127, 68, 66, 126, 12, 123, 80, -100, 56, -54, -33, 16, 68, -22, -76, -52, -43, -126, 33, 65, 121, 20, 5, -87, -82, 109, 18, -7, 34, -55, 21, -30, 9, 11, 96, -99, -123, 33, 17, 30, 87, -40, -2, 58, 63, 52, -116, -24, 86, -92, -11, -33, -123, -71, 76, -86, 32, 111, 21, -115, 124, 118, 126, -41, -29, 32, -49, 124, -79, 10, 33, 18, 1, -122, 33, 126, -113, 50, 45, 4, 60, 61, -105, -44, 110, 20, 21, -26, -89, -23, -5, -54, -72, -100, -117, -120, -103, -76, 29, -11, -61, 8, 62, 126, 51, -27, 76, -98, -28, -69, 11, 10, 13, 28, -9, -66, -46, 110, 58, -9, -104, -21, 81, 99, -106, -8, -109, -46, 23, -72, 87, -107, 120, 101, -102, -21, -56, 77, 109, 90, 71, 1, -57, -26, -72, 118};
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
    msg.setTimeStamp(0.265102221868);
    msg.setSource(276U);
    msg.setSourceEntity(248U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(227U);
    msg.base_lat = 0.622468079969;
    msg.base_lon = 0.552458410375;
    msg.base_time = 0.956888400704;
    const char tmp_msg_0[] = {-17, -34, 116, -56, 125, -12, 29, -102, -21, -68, -108, 70, -106, 64, -108, 126, -111, 64, -60, 45, -2, -66, 103, 60, -113, 24, 21, 18, 13, 25, 1, 4, 41, 30, -40, -47, -82, 115, -54, -100, 46, -33, 43, 54, -22, 102, 19, 97, 58, 42, -8, -68, 93, 47, 125, 104, -62, 42, -111, 51, 87, -124, 40, -20, -83, 66, 113, -14, -85, -90, 29, -79, -36, 69, -10, 106, 35, -73, 3, 59, 87, 62, -70, -70, 80, 20, -42, 80, 8, -53, -128, -31, 7, 67, -93, -31, 51, -60, -68, 40};
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
    msg.setTimeStamp(0.780531662789);
    msg.setSource(11003U);
    msg.setSourceEntity(181U);
    msg.setDestination(32216U);
    msg.setDestinationEntity(106U);
    msg.sys_id = 65199U;
    msg.priority = -94;
    msg.x = -21082;
    msg.y = 25331;
    msg.z = 31368;
    msg.t = 8432;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 35368U;
    tmp_msg_0.control_ent = 19U;
    tmp_msg_0.timeout = 0.0747141141062;
    tmp_msg_0.loiter_radius = 0.439507173632;
    tmp_msg_0.altitude_interval = 0.184154203328;
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
    msg.setTimeStamp(0.079190857319);
    msg.setSource(49507U);
    msg.setSourceEntity(198U);
    msg.setDestination(13149U);
    msg.setDestinationEntity(242U);
    msg.sys_id = 13467U;
    msg.priority = 93;
    msg.x = 23422;
    msg.y = 10;
    msg.z = -16136;
    msg.t = 19662;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("HLNCOXRITWRVVDRHWOARBEYPLIFKZBPKCEQOIDYD");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("DKQHUQBHSXEENZPUJDBUKJVABGAQRYCFTANQNQGYPZHHQMVTGIKEWSIXBLMDMXFYYSOOQQIFWUPZBVSJFGRZNAOCRRWDUGGIRHDJRXMOENPBOLKYIHNCMYHTSFPLJENOKG");
    tmp_tmp_msg_0_0.predicate.assign("ZKFZQUUBLKJRCRVFGDQXHUVXFQLPJMLOXVXZTWRWSNCMOUTIVILZ");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("IFGSXUSLAFUOTQAVPJLRBKONVQWUJVIVOHVDBKPSJWRXGTNCUNLNRYMMSYACRUEZYAHDRGAFEFAKHNABEXLFLENQYIPMRWYNGDZYSWEFMCUJILI");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 109U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("PZTZKEHPRZEHXRRCBMXZKGTNLSGUJNNNTASGFMU");
    tmp_tmp_tmp_msg_0_0_0.max.assign("HEDQUFMJYHAYPOPSYWNSOYZTCBOGKVXADRDUUAYZOJSVIVHWCVJINXYKESEKCUHNQZBALTMRMKTVVNVXXATPGNKMEPKQWGGUPLJOLROFNSMAFQEGIVGKIBZDZUZJGIHDIEDBTFBKLLJITBNYQLAWTEXRCBHOWXGUMEXCDNRUOJMQFWWRUJYTJCMMICXQRHDDGFYCPIFHXGBZAALHFFEXPUZOPISWSHQQVCRZJKRSZM");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.150493773311);
    msg.setSource(28235U);
    msg.setSourceEntity(249U);
    msg.setDestination(52403U);
    msg.setDestinationEntity(252U);
    msg.sys_id = 38056U;
    msg.priority = -45;
    msg.x = 30319;
    msg.y = 1197;
    msg.z = -21227;
    msg.t = -15562;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 159U;
    tmp_msg_0.lon_gain = 0.457631411179;
    tmp_msg_0.lat_gain = 0.101229313645;
    tmp_msg_0.bond_thick = 0.857169179506;
    tmp_msg_0.lead_gain = 0.224440536844;
    tmp_msg_0.deconfl_gain = 0.909459681571;
    tmp_msg_0.accel_switch_gain = 0.582847041206;
    tmp_msg_0.safe_dist = 0.975945703514;
    tmp_msg_0.deconflict_offset = 0.512991667287;
    tmp_msg_0.accel_safe_margin = 0.982610288759;
    tmp_msg_0.accel_lim_x = 0.307043957659;
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
    msg.setTimeStamp(0.331501599515);
    msg.setSource(44122U);
    msg.setSourceEntity(139U);
    msg.setDestination(33735U);
    msg.setDestinationEntity(32U);
    msg.req_id = 3720U;
    msg.type = 39U;
    msg.max_size = 36795U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.850108972003;
    tmp_msg_0.base_lon = 0.754220374825;
    tmp_msg_0.base_time = 0.395222196847;
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
    msg.setTimeStamp(0.531882598254);
    msg.setSource(49849U);
    msg.setSourceEntity(217U);
    msg.setDestination(54036U);
    msg.setDestinationEntity(23U);
    msg.req_id = 12578U;
    msg.type = 126U;
    msg.max_size = 10911U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.286457675842;
    tmp_msg_0.base_lon = 0.835229338107;
    tmp_msg_0.base_time = 0.612757972917;
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
    msg.setTimeStamp(0.681540129208);
    msg.setSource(7016U);
    msg.setSourceEntity(202U);
    msg.setDestination(50232U);
    msg.setDestinationEntity(251U);
    msg.req_id = 33353U;
    msg.type = 32U;
    msg.max_size = 4867U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.326666181771;
    tmp_msg_0.base_lon = 0.0510056599874;
    tmp_msg_0.base_time = 0.148063958644;
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
    msg.setTimeStamp(0.264163805226);
    msg.setSource(22308U);
    msg.setSourceEntity(167U);
    msg.setDestination(27044U);
    msg.setDestinationEntity(157U);
    msg.original_source = 42329U;
    msg.destination = 50033U;
    msg.timeout = 0.575268067221;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.00552031181371;
    tmp_msg_0.base_lon = 0.638427252921;
    tmp_msg_0.base_time = 0.270657979577;
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
    msg.setTimeStamp(0.819093019281);
    msg.setSource(22018U);
    msg.setSourceEntity(27U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(62U);
    msg.original_source = 23535U;
    msg.destination = 11884U;
    msg.timeout = 0.681740895264;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.255714006144;
    tmp_msg_0.lon = 0.877044708248;
    tmp_msg_0.speed = 0.842418621467;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.duration = 35824U;
    tmp_msg_0.sys_a = 18844U;
    tmp_msg_0.sys_b = 5176U;
    tmp_msg_0.move_threshold = 0.117278424952;
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
    msg.setTimeStamp(0.0593082069561);
    msg.setSource(31030U);
    msg.setSourceEntity(236U);
    msg.setDestination(315U);
    msg.setDestinationEntity(89U);
    msg.original_source = 29540U;
    msg.destination = 61168U;
    msg.timeout = 0.285862812909;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.539059748188;
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
    msg.setTimeStamp(0.813661316828);
    msg.setSource(54380U);
    msg.setSourceEntity(171U);
    msg.setDestination(28906U);
    msg.setDestinationEntity(230U);
    msg.type = 52U;
    msg.comm_interface = 31440U;
    msg.model = 61028U;
    msg.list.assign("RPTJGPQAEHYWHNLKCFMUWNLCFTNMPEAUVLWXOVMXAYWXHCNMSADIRWTNGZYOIBLMQXBFVJDFVHPUTVSUBWIZXEUPAJQEONDHBECSZGIDIKJXOT");

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
    msg.setTimeStamp(0.110398922782);
    msg.setSource(23891U);
    msg.setSourceEntity(150U);
    msg.setDestination(13381U);
    msg.setDestinationEntity(10U);
    msg.type = 56U;
    msg.comm_interface = 15123U;
    msg.model = 33032U;
    msg.list.assign("NIPUABQFUASKLJRDFAUGHAIAOMQSJOQSBMKJLRJVNWYTDQIRIECZFPOHTEGIRKSGQGCXNELJFTBRGFYXHIVMVGXPXRMZDTLNWIPBPKXHFJYXPWXXZFVCGPKWNVUQJMTRDHHPAKSNLFEKVCOUMAWUMAHCPMWTASYSLSSQCHVZZRMQVFTZLYUZWNNBBQCEOBBDMYJKEISYECYFWJOEGDTNREHTOZIYURCDWDQOOPXJLVLHCGVWYGXTUDZAENBK");

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
    msg.setTimeStamp(0.415783576389);
    msg.setSource(22520U);
    msg.setSourceEntity(161U);
    msg.setDestination(34411U);
    msg.setDestinationEntity(121U);
    msg.type = 116U;
    msg.comm_interface = 5642U;
    msg.model = 48465U;
    msg.list.assign("VCGGLNMOVVZJFMCVUQWRIANDRHZRAIGMZTSPYIVGBQOYWNNSZLKWTYJUNPKLUGTUETJEUXIEKPEA");

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
    msg.setTimeStamp(0.430046004654);
    msg.setSource(39600U);
    msg.setSourceEntity(40U);
    msg.setDestination(1697U);
    msg.setDestinationEntity(60U);
    msg.type = 164U;
    msg.req_id = 1296349890U;
    msg.ttl = 29243U;
    msg.code = 69U;
    msg.destination.assign("KBGNWGKABUSLPWIVHVMJPBBZTSMAACXPPPRIBAZNFTTPHLALKDKVMCQMQOBLQMOBYSNISSORYHOUXDDYHTIQFUHEGEIKHTEUFAZFCLRFZVLIUVYQQPYXSFTRJCTQCNIEJODOIMQWYNKDRJVUKFD");
    msg.source.assign("MGUCJQOGHVCTBKHMPXULIBQOWDZJALLTRUPDSEFTNTTEAFAUHYXGCRGZCBAEBJCTUROKQDVVAIYVPWZLSEZKEWJQWPWJOZEXTSJHSXRKPFKVZZCSYKUZHFJCHEVWSCFTAPXRZNDGFUILHBOIWPYGTUJANNLSMORXNACYYDVMYQNQRGFVWNDRWDMQDEQKIYINPXUKEPBMWGVBUZLXXDYQIHSOAMINHTGVQNORBSGKDYPCIHROILFJBJLFFMKA");
    msg.acknowledge = 128U;
    msg.status = 72U;
    const char tmp_msg_0[] = {107, -86, 77, -109, 24, -128, -70, 110, -93, -13, -110, 40, 2, -30, -6, 112, -20, -120, 109, 81, 39, 13, 101, -6, -10, 76, -6, -91, -34, -31, -70, 110, -96, 55, -67, 29, 108, -74, -102, 105, 58, -80, -21, -23, -6, 77, -112, -112, -6, 106, 95, 116, -17, -28, -123, -107, -127, -122, -103, -57, 63, -77, -124, -12, 117, 104, 82, -86, -71, -63};
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
    msg.setTimeStamp(0.14660319049);
    msg.setSource(40987U);
    msg.setSourceEntity(251U);
    msg.setDestination(26476U);
    msg.setDestinationEntity(81U);
    msg.type = 17U;
    msg.req_id = 3065996052U;
    msg.ttl = 18743U;
    msg.code = 202U;
    msg.destination.assign("KSYAEIQFWQDCWOREJMTCUCISOGVXJPZNXHRYLHITZJKGWQUQWYXVAEUZACKDDUFLKQXPVJLQYWFZSOVZHRAGLKJLONKTUFMIQFCVBRZGUASZVRGOZXGPNIKPOUNSHXLQCSYLPRUGEYGZTJBV");
    msg.source.assign("USEBALLMODUTCRKKZCHTBALWXEXKSAISYURDDMXSVEGIVHULRIGGWAMYEWQLBFKKBOCGTSGESMUIZHJZMAOCVWEELNQPAJJPKHVJWWCBNBINWPSICEBTJWFAPZMZGOZDVSYJLEKOCWRZJFRPUYQHFRROCAHFMQFUPYGYPUQZROITGCZPGKLVNOHSVRXYIYXTNXWVQUNXYDAMLJVQZYHCHUANLHNGKIXBTBKMSJFPFNNJMDTVOFQT");
    msg.acknowledge = 60U;
    msg.status = 152U;
    const char tmp_msg_0[] = {80, -119, -66, -59, -16, 15, -7, -86, -83, 95, -98, 66, 123, -43, -98, -96, -18, 58, 50, 16, -48, -74, 76, 17, -107, -5, -70, 76, -92, -90, 68, -107, -45, 93, 41, 27, 105, -43, 45, -82, 36, 96, 46, 105, 54, -119, 114, -10, 108, -13, 96, -9, -41, -33, -47, 33, -61, -72, -107, -126, -39, -57, -59, -108, 34, -80, 46, -93, -87, -74, 83, 122, -9, -42, -98, 119, 80, -2, -56, -7, -78, -119, 32, 117, -23, -74, 6, -15, 107, -91, 18, -84, 63, -112, -40, -21, -50, -32, -38, -66, -52, -30, -77, 61, -18, -11, -106, -34, -88, 71, 18, 108, 65, -57, 82, -10, 4, -28, 26, -82, -117, 102, -121, 103, 88, -87, 89, 91, -1, -65, -48, -20, -43, 126, -74, -56, -51, 112, 118, -117, -127};
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
    msg.setTimeStamp(0.741051523707);
    msg.setSource(45608U);
    msg.setSourceEntity(157U);
    msg.setDestination(14720U);
    msg.setDestinationEntity(1U);
    msg.type = 129U;
    msg.req_id = 4011183119U;
    msg.ttl = 52644U;
    msg.code = 55U;
    msg.destination.assign("LPLHEOYJBDBGEHUQRWASLRGGHUAWPZVZKVAVELL");
    msg.source.assign("NQJDKYYSEMQBYWHMLGWBQPEPGDTPADQCQLVNGYJLEXAVTDOOPTAFDWWWIRPAJHWTAYGEZHTMYCMOFKJZBOSNXOHHXYELSJZSRCTIVOSFFCVXCAXYSMXGAZQKSKGFDZLNGQJMLUTFWRQMRDCTHTERAPLAPOCBZKQSNPGVUMIIFEUNENXHMVWXVDYINHVOZVTQIYRKZRUCNUBFIXJUESJLMSCILZIUVBFBHBJRRRBOUJIWHOZUN");
    msg.acknowledge = 211U;
    msg.status = 142U;
    const char tmp_msg_0[] = {-65, 19, -14, -35, 57, 126, -116, 73, -53, -40, -41, 122, 100, -101, -1, -94, 125, -119, 11, 118, -79, -85, 64, -21, 11, 121, -14, -83, -3, -55};
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
    msg.setTimeStamp(0.294649278447);
    msg.setSource(22693U);
    msg.setSourceEntity(13U);
    msg.setDestination(17789U);
    msg.setDestinationEntity(153U);
    msg.id = 99U;
    msg.range = 0.737617383875;

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
    msg.setTimeStamp(0.248518986119);
    msg.setSource(6619U);
    msg.setSourceEntity(44U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(101U);
    msg.id = 141U;
    msg.range = 0.17514322323;

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
    msg.setTimeStamp(0.866539313498);
    msg.setSource(34235U);
    msg.setSourceEntity(193U);
    msg.setDestination(31394U);
    msg.setDestinationEntity(89U);
    msg.id = 127U;
    msg.range = 0.243269284607;

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
    msg.setTimeStamp(0.113465002849);
    msg.setSource(18629U);
    msg.setSourceEntity(28U);
    msg.setDestination(11829U);
    msg.setDestinationEntity(132U);
    msg.beacon.assign("BGATRENAGYNFTSIYFSJARKJXRRREKVPHOMBCRDBCJDTERDITXZPHOVNTUJUDXQQZORQXCGSWPDOAOYXCGXGUKFOXBSEBVFYUHHGXIZLDCSWTCKECIABYDLMTQQYSTOWWKVZSLFSYCZEJIYHOHZQPKANXPGXNPZJZLCYNVMBEEMBNZLALCYTHNIFKJKFI");
    msg.lat = 0.0074908139873;
    msg.lon = 0.546217529041;
    msg.depth = 0.716644347063;
    msg.query_channel = 188U;
    msg.reply_channel = 75U;
    msg.transponder_delay = 20U;

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
    msg.setTimeStamp(0.333967572247);
    msg.setSource(65263U);
    msg.setSourceEntity(45U);
    msg.setDestination(26676U);
    msg.setDestinationEntity(187U);
    msg.beacon.assign("LEBWEORDMDIUGQMMSLZZWMDUCZPQLYSVBVPFERHJOTHGTKCOSXQMGEYWLUBDAHEXOKIRQJBUIEZLQSOODSCNIAEYAPVX");
    msg.lat = 0.964819038632;
    msg.lon = 0.454683648232;
    msg.depth = 0.126570683004;
    msg.query_channel = 76U;
    msg.reply_channel = 16U;
    msg.transponder_delay = 129U;

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
    msg.setTimeStamp(0.55939449989);
    msg.setSource(31413U);
    msg.setSourceEntity(127U);
    msg.setDestination(3001U);
    msg.setDestinationEntity(145U);
    msg.beacon.assign("AAUMMTGEHCECFLSSDFSZGUJKXEPITB");
    msg.lat = 0.442243762813;
    msg.lon = 0.0122967416784;
    msg.depth = 0.91461108916;
    msg.query_channel = 0U;
    msg.reply_channel = 218U;
    msg.transponder_delay = 13U;

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
    msg.setTimeStamp(0.199863569054);
    msg.setSource(38188U);
    msg.setSourceEntity(78U);
    msg.setDestination(48517U);
    msg.setDestinationEntity(63U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.50530461534);
    msg.setSource(60104U);
    msg.setSourceEntity(21U);
    msg.setDestination(27065U);
    msg.setDestinationEntity(75U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.739791596912);
    msg.setSource(38411U);
    msg.setSourceEntity(75U);
    msg.setDestination(41425U);
    msg.setDestinationEntity(199U);
    msg.op = 153U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PMXSDRBFIHAKVDSGWYRVWWOMIGTZEONVZMHKBGAJWDVZIQEURPTBWSITFOHUTGQLYHGBLQFKBVUUXERWMSFAHDEPQUCKGQHJKYSDRENIQYIOWVMONYVCULDJPVXKPCYAXQJNHOERABFULXEEFQCLSLBKTEFICRSNIDCDJ");
    tmp_msg_0.lat = 0.621301896375;
    tmp_msg_0.lon = 0.0468368318126;
    tmp_msg_0.depth = 0.477369144186;
    tmp_msg_0.query_channel = 117U;
    tmp_msg_0.reply_channel = 214U;
    tmp_msg_0.transponder_delay = 124U;
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
    msg.setTimeStamp(0.978605656437);
    msg.setSource(14381U);
    msg.setSourceEntity(40U);
    msg.setDestination(2082U);
    msg.setDestinationEntity(42U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("AMKCKWWQPUFEQCIBDOMZPXRGPIGXRFMYENAZWLIFNIGBAXQYCTJXWUAYFLONRBZRMKLJFVHTBPSZNVJZTGOTLGFUHTJADESEBCHIMHYROWUCLHSSVTULMDKNAJPGLCAUGSXCDHXSZWVFKEYTVKJYMISUIZVFWMLRPBNENRHBODARBORHIELCGGONQQDVGKKQZSAUDINCSPKCUFTSEXOKYMJDOXMYVQ");
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
    msg.setTimeStamp(0.696894540974);
    msg.setSource(62820U);
    msg.setSourceEntity(37U);
    msg.setDestination(15376U);
    msg.setDestinationEntity(152U);
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 234U;
    tmp_msg_0.x = 21852U;
    tmp_msg_0.y = 46554U;
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
    msg.setTimeStamp(0.079567674397);
    msg.setSource(8522U);
    msg.setSourceEntity(184U);
    msg.setDestination(45043U);
    msg.setDestinationEntity(19U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 221U;
    tmp_msg_0.mask = 2007869222U;
    tmp_msg_0.scope_ref = 4127232008U;
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
    msg.setTimeStamp(0.421797484512);
    msg.setSource(31581U);
    msg.setSourceEntity(16U);
    msg.setDestination(28785U);
    msg.setDestinationEntity(150U);
    msg.op = 112U;
    msg.system.assign("XIQOLGAMBIMOQUTWCMYRYBSHQTMJDXXAFGDZQPELLFQIDBESIJDFCWKUSRYMDLQHGXNVPNVTPRCRLCWERAJOJFISMASMOQZTVIHZMXRQRZXWCLJFLYMDMCWKDPVIUDIEKZDVPNNAZQEQHGWOZBRKHUSUKJASKXJFCOOWUNJTOBPWFNKWX");
    msg.range = 0.0117329400821;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.698960712988;
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
    msg.setTimeStamp(0.473816055159);
    msg.setSource(49707U);
    msg.setSourceEntity(249U);
    msg.setDestination(455U);
    msg.setDestinationEntity(248U);
    msg.op = 204U;
    msg.system.assign("RTSBBLUMAKNLEJRRBGTMPZYXCWIGYNJHJIIUFMDOMXWKPWENNQKWVPBRDGLTHXQVYTDZPMPEJUQVOXQVALMLUPFCBEGCZVOWBGDZJEMVIMIVOPZGHFUSNKUQMJSLNDQSHWXCKIRFYEVFCWTGFQYYOZBWSLGXETXSBKHUVFNCROCWWKRRYGDTIIVSYQN");
    msg.range = 0.0619530418534;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 32516U;
    tmp_msg_0.destination.assign("VZDVEYCMQUQWEVJQAPKFAKSXQSVTLLNOVSUMGWRMDGQBQQPRKLFIYHLBGHUFHHWSJBZIFKUQZFFRYXESTEBSOXBACXZSPYCCACKZPOGAKLQBQVNDDZOGUHHSSIW");
    tmp_msg_0.timeout = 0.77397237836;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 30857U;
    tmp_tmp_msg_0_0.priority = -85;
    tmp_tmp_msg_0_0.x = 18330;
    tmp_tmp_msg_0_0.y = -9934;
    tmp_tmp_msg_0_0.z = 26313;
    tmp_tmp_msg_0_0.t = 9105;
    IMC::Map tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id.assign("WEIVUVBJJQEWOUFJCNIJRZFLVBKQVLWRZYOCIVISHHJWHPCUYORSLLFGUKBKPPMPIDXAAXBNMWQZIRFKW");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.760558667189);
    msg.setSource(18566U);
    msg.setSourceEntity(202U);
    msg.setDestination(1370U);
    msg.setDestinationEntity(73U);
    msg.op = 116U;
    msg.system.assign("EOWSYIJKWFP");
    msg.range = 0.971544492418;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.174808044457);
    msg.setSource(24890U);
    msg.setSourceEntity(91U);
    msg.setDestination(14970U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.233055254902);
    msg.setSource(49205U);
    msg.setSourceEntity(252U);
    msg.setDestination(48961U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.891400712754);
    msg.setSource(20945U);
    msg.setSourceEntity(19U);
    msg.setDestination(5083U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.605069937088);
    msg.setSource(30184U);
    msg.setSourceEntity(173U);
    msg.setDestination(23044U);
    msg.setDestinationEntity(125U);
    msg.list.assign("CUQWZAIUNMWQXLEJBDQWOQNKBUOJLYQBWNCFPXTSAPZUUJDCADECXNHHIZEXGGJRHIZVYLTMKUDUQQFFRIMDDQXJECBFWRLQPAKRWFSBYJDFPJOICMSGCVPATVOKZBAWMRVFHXPLTKBAMNORSQMGHBOPKJPUJLGVNWIRSNCZVFUSFMVGCIYIWAEKDLYMOTYETS");

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
    msg.setTimeStamp(0.186976457296);
    msg.setSource(40427U);
    msg.setSourceEntity(40U);
    msg.setDestination(16099U);
    msg.setDestinationEntity(67U);
    msg.list.assign("JHAQSHBNPTRJWBSSWUQEFNDTYLSSXWZWHLGUAKTDVIPTZAQBIIFIWVESFRPFLPRJUFVKDNRCJVKFOSBQDLKD");

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
    msg.setTimeStamp(0.347801623742);
    msg.setSource(2066U);
    msg.setSourceEntity(194U);
    msg.setDestination(21828U);
    msg.setDestinationEntity(29U);
    msg.list.assign("YFNWRDZBXSSZLOZYSUEMCSPJAUTBWLBHUPYIHWLOTRFEAGTI");

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
    msg.setTimeStamp(0.231364961267);
    msg.setSource(50894U);
    msg.setSourceEntity(151U);
    msg.setDestination(26789U);
    msg.setDestinationEntity(86U);
    msg.peer.assign("GJORTYWGBQHAHDFQNAWCLQBUAMFHVIRQAIULPUHMKYVGIEUICXCYJVWJVHKXBBYROTUSQICYEMHDOPQKRIHZSVLOPLJUNMAZOVOPWOXAKFEMNJBFWOTTHUSWCTUMPCJTFZEFQKUYGKBRXZVRIRTFXNQXFXQTWNMYOGZRPSDW");
    msg.rssi = 0.470347320886;
    msg.integrity = 15146U;

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
    msg.setTimeStamp(0.33301472009);
    msg.setSource(19376U);
    msg.setSourceEntity(0U);
    msg.setDestination(64032U);
    msg.setDestinationEntity(247U);
    msg.peer.assign("HXSNSYXHRWQONGMFURDDJYIXDBRIOOEUMLZUYIZWFHPFEJBJUVHGVTUCWWZZALYQESKIVAKTPHAEKAXVLHSFTUKTZLEGSOVMXREGOOXWYGPYPPTXZQDSMFCRPHTGIUKNQAKWTZKUOJHEGVKMCBDYDHOPFCGLSMCBYNNBCLIZMFCIEBJVCINQQQLJDJGUAEUVNJBKQJOXLRDWBR");
    msg.rssi = 0.810400824806;
    msg.integrity = 46729U;

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
    msg.setTimeStamp(0.595234692864);
    msg.setSource(466U);
    msg.setSourceEntity(91U);
    msg.setDestination(47730U);
    msg.setDestinationEntity(194U);
    msg.peer.assign("SQPEOTXTGJPZIILWQTFVBGMRTBDGYBBRPVMIQLWFXHAOSPEJHYNAVVCEDTWWEFNXMWERZDWYTHYVQZJSMSHEBCNKQKRVMUFNUXRLYJZOMFIKXHATXDSMDWMELPHUNQZKUD");
    msg.rssi = 0.634534723368;
    msg.integrity = 13849U;

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
    msg.setTimeStamp(0.333820333096);
    msg.setSource(41582U);
    msg.setSourceEntity(48U);
    msg.setDestination(31073U);
    msg.setDestinationEntity(210U);
    msg.req_id = 43709U;
    msg.destination.assign("IPHOXUOATDNSWKDYGOIZMHPPLJQVBPEBQWRAYKKVWSJXGSSDFGRRHERDAARKQUZUMYTZFQGTVGXFFUJGCHLYXAOGFDBNLSMIBUXNFHOBYGQBMRSWVZALFBUDQVVJIOJOWQMPDNWVITNCYSIQRSEKKZMICDDTLKUXHYRICTPL");
    msg.timeout = 0.494572205764;
    msg.range = 0.125557411496;
    msg.type = 54U;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 46277U;
    tmp_msg_0.status = 43U;
    tmp_msg_0.range = 0.364811337087;
    tmp_msg_0.info.assign("ZELMZWJMGHGMILMHZNYSLFYTBCHWJJEGBTIHRHUIKFDVVOGSOIHLIULPRMONZBSAHWNSVWNBAWOXKJEUUGEXEGRAKFUDMGTPYMVDSRNLAVVFKAJNCKFDIKQOEUQBOZNYZTJDLPCDDQXGDTTTGNUKHYHSMUYRAFUXINLVFJVQVJXFUGXQCEYDFROBLIPCZBPZCRZICAJRZXPB");
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
    msg.setTimeStamp(0.528316579211);
    msg.setSource(5193U);
    msg.setSourceEntity(72U);
    msg.setDestination(48611U);
    msg.setDestinationEntity(86U);
    msg.req_id = 28242U;
    msg.destination.assign("HIFNYFKLKRTWFHIJBOUTMJRETCSKBBUGSHQDCJGGRVLMFUVCSPEYHOMKVWFJXITNEQOUHYTHJYMNOZGFWPGHXEK");
    msg.timeout = 0.274042723883;
    msg.range = 0.122299915783;
    msg.type = 213U;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 30934U;
    tmp_msg_0.status = 6U;
    tmp_msg_0.info.assign("GWTMMBCMUQADHTWDNXCZKEOKLGHNNGJLYLBJACENTTEWSFDONPHQSYRMSCSPWVJKVYFSLRGUIKJKLAUKQEQFRVKZBHZBCOENGOPGHMHRHTXUXXWDYTZAVAXLTIOUOQKMVWBRSNLDABQDCVDHFHLSFYADGOJQTYPZPKAVRKPFNYYVRIEZCUIDP");
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
    msg.setTimeStamp(0.674198182193);
    msg.setSource(2804U);
    msg.setSourceEntity(234U);
    msg.setDestination(34200U);
    msg.setDestinationEntity(114U);
    msg.req_id = 57429U;
    msg.destination.assign("AMSCPPWOBCIYETSJBURPUYYMBHAEFJSELDTVXDJNJJCDJHHHXKFOODNTSRNLQAJXVTYMFKBWMKGTVZGCCZHEKOKAGUIEWJAHRUOUWRSSKPGIJOTDZSAKIDXZXRPRGHNUECUMCKSDFGIVMNLIUNYFPLDRZFZVLENNDQSXOUYQIFNDPYQZBEBYRMZAITCBKQKPVBYWBSQOLXFXHVEFQAJHUALWTG");
    msg.timeout = 0.494250868706;
    msg.range = 0.972962134223;
    msg.type = 69U;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.911297161544;
    tmp_msg_0.sys_src = 24738U;
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
    msg.setTimeStamp(0.578288635638);
    msg.setSource(12213U);
    msg.setSourceEntity(241U);
    msg.setDestination(2118U);
    msg.setDestinationEntity(121U);
    msg.req_id = 37174U;
    msg.type = 126U;
    msg.status = 241U;
    msg.info.assign("NIMVMQEZCTYTWYPDXFAUBEZXDGXBMESZOKLHJLCXFBLPPOKHKITXBQMAMLSFYDOBXGPJPBVNTL");
    msg.range = 0.841282676307;

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
    msg.setTimeStamp(0.971848205514);
    msg.setSource(23295U);
    msg.setSourceEntity(6U);
    msg.setDestination(18742U);
    msg.setDestinationEntity(225U);
    msg.req_id = 4942U;
    msg.type = 53U;
    msg.status = 143U;
    msg.info.assign("BYPRHQUXMFVUMTGCRAKNNMQPJBUNTVREXPLISUESEZGUNICYKVOPPTOODXLBHDGJIKNZQXPBCHVSWCRKDZCBBSAYHOXUWTWOVKUDTPRGFXYXQZMWMQICZLYBFIMTAJFITZMO");
    msg.range = 0.952421185965;

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
    msg.setTimeStamp(0.874622282575);
    msg.setSource(28705U);
    msg.setSourceEntity(90U);
    msg.setDestination(59081U);
    msg.setDestinationEntity(82U);
    msg.req_id = 5677U;
    msg.type = 10U;
    msg.status = 245U;
    msg.info.assign("DJEKOUKQNHITFIUTCWDPEPPXMQKPPYTVSURCTFZFPJHZNCIZAESTBXFBVZKISKUPLLGJVCAJBMTGYFUYOVXQPXIFVKORWOAZGIBOLQAGKOXFAVBCIKWSHMLGYLLLBEAFDIHGZTHNRBREAGBWJFRTNMQYYFDPZSOWQQDDYEUJVGOQWMYAMJUSWRSDEVVWUCTNNMCEEJMYBNPWBVZUSRUOEALSRJXSIKRXXCDQNJQDHHHZAWDITGNHHXLRMK");
    msg.range = 0.653495216635;

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
    msg.setTimeStamp(0.252977121112);
    msg.setSource(64890U);
    msg.setSourceEntity(176U);
    msg.setDestination(63074U);
    msg.setDestinationEntity(43U);
    msg.value = 13410;

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
    msg.setTimeStamp(0.946206810994);
    msg.setSource(27666U);
    msg.setSourceEntity(99U);
    msg.setDestination(56355U);
    msg.setDestinationEntity(28U);
    msg.value = -32127;

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
    msg.setTimeStamp(0.958054878325);
    msg.setSource(35258U);
    msg.setSourceEntity(198U);
    msg.setDestination(11327U);
    msg.setDestinationEntity(240U);
    msg.value = 31194;

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
    msg.setTimeStamp(0.863597131637);
    msg.setSource(36247U);
    msg.setSourceEntity(52U);
    msg.setDestination(13695U);
    msg.setDestinationEntity(41U);
    msg.value = 0.253909065968;

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
    msg.setTimeStamp(0.39881475124);
    msg.setSource(61462U);
    msg.setSourceEntity(185U);
    msg.setDestination(24909U);
    msg.setDestinationEntity(86U);
    msg.value = 0.470800272153;

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
    msg.setTimeStamp(0.816180526162);
    msg.setSource(9258U);
    msg.setSourceEntity(103U);
    msg.setDestination(37630U);
    msg.setDestinationEntity(42U);
    msg.value = 0.594969282513;

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
    msg.setTimeStamp(0.816297774238);
    msg.setSource(59188U);
    msg.setSourceEntity(19U);
    msg.setDestination(60370U);
    msg.setDestinationEntity(221U);
    msg.value = 0.574449712079;

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
    msg.setTimeStamp(0.367080376159);
    msg.setSource(31594U);
    msg.setSourceEntity(202U);
    msg.setDestination(38649U);
    msg.setDestinationEntity(9U);
    msg.value = 0.875202206267;

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
    msg.setTimeStamp(0.613854996138);
    msg.setSource(26253U);
    msg.setSourceEntity(180U);
    msg.setDestination(50324U);
    msg.setDestinationEntity(100U);
    msg.value = 0.0217298511526;

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
    msg.setTimeStamp(0.852803179548);
    msg.setSource(15189U);
    msg.setSourceEntity(58U);
    msg.setDestination(4303U);
    msg.setDestinationEntity(199U);
    msg.validity = 24141U;
    msg.type = 226U;
    msg.utc_year = 43960U;
    msg.utc_month = 13U;
    msg.utc_day = 28U;
    msg.utc_time = 0.320075894073;
    msg.lat = 0.210690122143;
    msg.lon = 0.88961867592;
    msg.height = 0.846299836165;
    msg.satellites = 234U;
    msg.cog = 0.917934103215;
    msg.sog = 0.251097782483;
    msg.hdop = 0.450998030368;
    msg.vdop = 0.410456050488;
    msg.hacc = 0.985242410721;
    msg.vacc = 0.530775478313;

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
    msg.setTimeStamp(0.723164277472);
    msg.setSource(60649U);
    msg.setSourceEntity(34U);
    msg.setDestination(41753U);
    msg.setDestinationEntity(46U);
    msg.validity = 35203U;
    msg.type = 212U;
    msg.utc_year = 3431U;
    msg.utc_month = 64U;
    msg.utc_day = 137U;
    msg.utc_time = 0.160303113023;
    msg.lat = 0.461279327674;
    msg.lon = 0.641244231787;
    msg.height = 3.28739819211e-05;
    msg.satellites = 67U;
    msg.cog = 0.333140559184;
    msg.sog = 0.183226011244;
    msg.hdop = 0.106071855757;
    msg.vdop = 0.751961465112;
    msg.hacc = 0.894418352741;
    msg.vacc = 0.848022943714;

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
    msg.setTimeStamp(0.0873212667191);
    msg.setSource(2436U);
    msg.setSourceEntity(2U);
    msg.setDestination(40219U);
    msg.setDestinationEntity(77U);
    msg.validity = 57400U;
    msg.type = 67U;
    msg.utc_year = 2949U;
    msg.utc_month = 183U;
    msg.utc_day = 143U;
    msg.utc_time = 0.409085912193;
    msg.lat = 0.757636200467;
    msg.lon = 0.110987719417;
    msg.height = 0.566919630538;
    msg.satellites = 86U;
    msg.cog = 0.716407253611;
    msg.sog = 0.673111304955;
    msg.hdop = 0.91564807574;
    msg.vdop = 0.0146155468678;
    msg.hacc = 0.276621003785;
    msg.vacc = 0.741336658655;

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
    msg.setTimeStamp(0.281461659201);
    msg.setSource(56980U);
    msg.setSourceEntity(208U);
    msg.setDestination(2761U);
    msg.setDestinationEntity(228U);
    msg.time = 0.223123816382;
    msg.phi = 0.762198162252;
    msg.theta = 0.550030644539;
    msg.psi = 0.0945865291614;
    msg.psi_magnetic = 0.352449929227;

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
    msg.setTimeStamp(0.836081448046);
    msg.setSource(56914U);
    msg.setSourceEntity(44U);
    msg.setDestination(37222U);
    msg.setDestinationEntity(167U);
    msg.time = 0.315353535817;
    msg.phi = 0.862545046687;
    msg.theta = 0.83220627923;
    msg.psi = 0.951094958905;
    msg.psi_magnetic = 0.865877988645;

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
    msg.setTimeStamp(0.500669167836);
    msg.setSource(6361U);
    msg.setSourceEntity(199U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(254U);
    msg.time = 0.965523789826;
    msg.phi = 0.970393332826;
    msg.theta = 0.297289756966;
    msg.psi = 0.70629585758;
    msg.psi_magnetic = 0.879591375759;

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
    msg.setTimeStamp(0.573067352044);
    msg.setSource(59764U);
    msg.setSourceEntity(173U);
    msg.setDestination(34461U);
    msg.setDestinationEntity(25U);
    msg.time = 0.0255441015031;
    msg.x = 0.359070218963;
    msg.y = 0.195081451015;
    msg.z = 0.00296221459337;
    msg.timestep = 0.495839230095;

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
    msg.setTimeStamp(0.177956692656);
    msg.setSource(14002U);
    msg.setSourceEntity(31U);
    msg.setDestination(48330U);
    msg.setDestinationEntity(83U);
    msg.time = 0.165864827578;
    msg.x = 0.605648671159;
    msg.y = 0.146350909566;
    msg.z = 0.782827473905;
    msg.timestep = 0.75051490145;

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
    msg.setTimeStamp(0.275021129108);
    msg.setSource(1002U);
    msg.setSourceEntity(198U);
    msg.setDestination(37245U);
    msg.setDestinationEntity(38U);
    msg.time = 0.221518254589;
    msg.x = 0.347274510054;
    msg.y = 0.686940916381;
    msg.z = 0.82167880649;
    msg.timestep = 0.392089240548;

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
    msg.setTimeStamp(0.538095747469);
    msg.setSource(63179U);
    msg.setSourceEntity(89U);
    msg.setDestination(24384U);
    msg.setDestinationEntity(199U);
    msg.time = 0.116010181873;
    msg.x = 0.923174820911;
    msg.y = 0.832193278172;
    msg.z = 0.277121692867;

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
    msg.setTimeStamp(0.342926375767);
    msg.setSource(53725U);
    msg.setSourceEntity(184U);
    msg.setDestination(1084U);
    msg.setDestinationEntity(55U);
    msg.time = 0.879740537793;
    msg.x = 0.617158943843;
    msg.y = 0.555347376891;
    msg.z = 0.55438077866;

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
    msg.setTimeStamp(0.0158443935638);
    msg.setSource(26677U);
    msg.setSourceEntity(93U);
    msg.setDestination(64467U);
    msg.setDestinationEntity(141U);
    msg.time = 0.0023364549098;
    msg.x = 0.177674212264;
    msg.y = 0.945562038061;
    msg.z = 0.894420080989;

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
    msg.setTimeStamp(0.289575367127);
    msg.setSource(49111U);
    msg.setSourceEntity(235U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(55U);
    msg.time = 0.409331315572;
    msg.x = 0.81711774971;
    msg.y = 0.703445758497;
    msg.z = 0.385698900102;

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
    msg.setTimeStamp(0.71581214185);
    msg.setSource(44656U);
    msg.setSourceEntity(140U);
    msg.setDestination(50431U);
    msg.setDestinationEntity(163U);
    msg.time = 0.0671143786254;
    msg.x = 0.318436873104;
    msg.y = 0.478558483671;
    msg.z = 0.973444160625;

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
    msg.setTimeStamp(0.123640976913);
    msg.setSource(4445U);
    msg.setSourceEntity(216U);
    msg.setDestination(22785U);
    msg.setDestinationEntity(86U);
    msg.time = 0.950964441551;
    msg.x = 0.599008531087;
    msg.y = 0.325311476845;
    msg.z = 0.129989128873;

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
    msg.setTimeStamp(0.783425021832);
    msg.setSource(53046U);
    msg.setSourceEntity(193U);
    msg.setDestination(33180U);
    msg.setDestinationEntity(8U);
    msg.time = 0.582991870622;
    msg.x = 0.823801617176;
    msg.y = 0.782485775595;
    msg.z = 0.296524347213;

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
    msg.setTimeStamp(0.903104916789);
    msg.setSource(18141U);
    msg.setSourceEntity(154U);
    msg.setDestination(60432U);
    msg.setDestinationEntity(246U);
    msg.time = 0.77642106672;
    msg.x = 0.0689151640254;
    msg.y = 0.736668871597;
    msg.z = 0.26371154133;

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
    msg.setTimeStamp(0.927180181442);
    msg.setSource(28371U);
    msg.setSourceEntity(155U);
    msg.setDestination(31262U);
    msg.setDestinationEntity(154U);
    msg.time = 0.0120457771369;
    msg.x = 0.944916436054;
    msg.y = 0.57691263223;
    msg.z = 0.553912778495;

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
    msg.setTimeStamp(0.857259195534);
    msg.setSource(60098U);
    msg.setSourceEntity(96U);
    msg.setDestination(35426U);
    msg.setDestinationEntity(122U);
    msg.validity = 106U;
    msg.x = 0.458300038893;
    msg.y = 0.578511584615;
    msg.z = 0.412799535314;

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
    msg.setTimeStamp(0.970023818572);
    msg.setSource(24041U);
    msg.setSourceEntity(47U);
    msg.setDestination(29997U);
    msg.setDestinationEntity(113U);
    msg.validity = 105U;
    msg.x = 0.190714796121;
    msg.y = 0.191862643683;
    msg.z = 0.511932942468;

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
    msg.setTimeStamp(0.431310436885);
    msg.setSource(41036U);
    msg.setSourceEntity(103U);
    msg.setDestination(49452U);
    msg.setDestinationEntity(139U);
    msg.validity = 87U;
    msg.x = 0.254681135097;
    msg.y = 0.256057205989;
    msg.z = 0.90081491733;

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
    msg.setTimeStamp(0.854066479285);
    msg.setSource(57637U);
    msg.setSourceEntity(108U);
    msg.setDestination(52686U);
    msg.setDestinationEntity(227U);
    msg.validity = 151U;
    msg.x = 0.717812945639;
    msg.y = 0.769321054728;
    msg.z = 0.877355029789;

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
    msg.setTimeStamp(0.893915194774);
    msg.setSource(38688U);
    msg.setSourceEntity(7U);
    msg.setDestination(65111U);
    msg.setDestinationEntity(48U);
    msg.validity = 72U;
    msg.x = 0.8023756262;
    msg.y = 0.346969221128;
    msg.z = 0.622502151985;

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
    msg.setTimeStamp(0.109206831761);
    msg.setSource(21225U);
    msg.setSourceEntity(150U);
    msg.setDestination(1638U);
    msg.setDestinationEntity(26U);
    msg.validity = 223U;
    msg.x = 0.871028063082;
    msg.y = 0.748212339375;
    msg.z = 0.129151304895;

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
    msg.setTimeStamp(0.743619537762);
    msg.setSource(7673U);
    msg.setSourceEntity(51U);
    msg.setDestination(21230U);
    msg.setDestinationEntity(119U);
    msg.time = 0.677859291936;
    msg.x = 0.403696243697;
    msg.y = 0.931162068638;
    msg.z = 0.620173332815;

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
    msg.setTimeStamp(0.435622667313);
    msg.setSource(29394U);
    msg.setSourceEntity(186U);
    msg.setDestination(54076U);
    msg.setDestinationEntity(126U);
    msg.time = 0.177083315635;
    msg.x = 0.604490688811;
    msg.y = 0.21979734054;
    msg.z = 0.25646781765;

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
    msg.setTimeStamp(0.756603659409);
    msg.setSource(60481U);
    msg.setSourceEntity(61U);
    msg.setDestination(38918U);
    msg.setDestinationEntity(195U);
    msg.time = 0.0832019620108;
    msg.x = 0.0405164059056;
    msg.y = 0.577412622652;
    msg.z = 0.446962958515;

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
    msg.setTimeStamp(0.324610772652);
    msg.setSource(42758U);
    msg.setSourceEntity(174U);
    msg.setDestination(29125U);
    msg.setDestinationEntity(85U);
    msg.validity = 80U;
    msg.value = 0.927958872753;

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
    msg.setTimeStamp(0.0501930029728);
    msg.setSource(41427U);
    msg.setSourceEntity(77U);
    msg.setDestination(56111U);
    msg.setDestinationEntity(159U);
    msg.validity = 30U;
    msg.value = 0.0465053444981;

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
    msg.setTimeStamp(0.047661132978);
    msg.setSource(43595U);
    msg.setSourceEntity(125U);
    msg.setDestination(45821U);
    msg.setDestinationEntity(87U);
    msg.validity = 171U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0551211491994;
    tmp_msg_0.y = 0.801467610382;
    tmp_msg_0.z = 0.330671667913;
    tmp_msg_0.phi = 0.24552449171;
    tmp_msg_0.theta = 0.845548125697;
    tmp_msg_0.psi = 0.795201776366;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.933247475691;

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
    msg.setTimeStamp(0.854939506022);
    msg.setSource(19987U);
    msg.setSourceEntity(1U);
    msg.setDestination(33716U);
    msg.setDestinationEntity(174U);
    msg.value = 0.206211955588;

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
    msg.setTimeStamp(0.673458659615);
    msg.setSource(43969U);
    msg.setSourceEntity(56U);
    msg.setDestination(21498U);
    msg.setDestinationEntity(72U);
    msg.value = 0.160780808883;

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
    msg.setTimeStamp(0.265887115492);
    msg.setSource(4290U);
    msg.setSourceEntity(118U);
    msg.setDestination(35915U);
    msg.setDestinationEntity(47U);
    msg.value = 0.93647501084;

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
    msg.setTimeStamp(0.303606490451);
    msg.setSource(3318U);
    msg.setSourceEntity(155U);
    msg.setDestination(51665U);
    msg.setDestinationEntity(85U);
    msg.value = 0.373034746263;

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
    msg.setTimeStamp(0.0901198270176);
    msg.setSource(57852U);
    msg.setSourceEntity(136U);
    msg.setDestination(11204U);
    msg.setDestinationEntity(129U);
    msg.value = 0.303100839031;

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
    msg.setTimeStamp(0.518812919087);
    msg.setSource(23165U);
    msg.setSourceEntity(21U);
    msg.setDestination(306U);
    msg.setDestinationEntity(5U);
    msg.value = 0.91143098933;

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
    msg.setTimeStamp(0.280178965994);
    msg.setSource(18210U);
    msg.setSourceEntity(40U);
    msg.setDestination(39399U);
    msg.setDestinationEntity(195U);
    msg.value = 0.278138557387;

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
    msg.setTimeStamp(0.0075495054166);
    msg.setSource(22050U);
    msg.setSourceEntity(88U);
    msg.setDestination(26472U);
    msg.setDestinationEntity(43U);
    msg.value = 0.665337603549;

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
    msg.setTimeStamp(0.109151269405);
    msg.setSource(19718U);
    msg.setSourceEntity(129U);
    msg.setDestination(50271U);
    msg.setDestinationEntity(15U);
    msg.value = 0.94530291747;

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
    msg.setTimeStamp(0.129441231439);
    msg.setSource(28258U);
    msg.setSourceEntity(249U);
    msg.setDestination(15077U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0564048482411;

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
    msg.setTimeStamp(0.192142094993);
    msg.setSource(8475U);
    msg.setSourceEntity(186U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(124U);
    msg.value = 0.663153271655;

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
    msg.setTimeStamp(0.979045422482);
    msg.setSource(42429U);
    msg.setSourceEntity(153U);
    msg.setDestination(42069U);
    msg.setDestinationEntity(24U);
    msg.value = 0.732323176952;

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
    msg.setTimeStamp(0.697985544586);
    msg.setSource(45336U);
    msg.setSourceEntity(181U);
    msg.setDestination(19955U);
    msg.setDestinationEntity(171U);
    msg.value = 0.660855240658;

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
    msg.setTimeStamp(0.530014340829);
    msg.setSource(38060U);
    msg.setSourceEntity(162U);
    msg.setDestination(35818U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0592831737336;

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
    msg.setTimeStamp(0.305230893677);
    msg.setSource(16811U);
    msg.setSourceEntity(118U);
    msg.setDestination(3720U);
    msg.setDestinationEntity(229U);
    msg.value = 0.20316829562;

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
    msg.setTimeStamp(0.190164140567);
    msg.setSource(3369U);
    msg.setSourceEntity(112U);
    msg.setDestination(46288U);
    msg.setDestinationEntity(194U);
    msg.value = 0.787066855736;

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
    msg.setTimeStamp(0.0744111907806);
    msg.setSource(43753U);
    msg.setSourceEntity(138U);
    msg.setDestination(44837U);
    msg.setDestinationEntity(31U);
    msg.value = 0.554619398219;

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
    msg.setTimeStamp(0.401017922503);
    msg.setSource(36371U);
    msg.setSourceEntity(84U);
    msg.setDestination(63164U);
    msg.setDestinationEntity(221U);
    msg.value = 0.601009054074;

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
    msg.setTimeStamp(0.17970838376);
    msg.setSource(17627U);
    msg.setSourceEntity(186U);
    msg.setDestination(65406U);
    msg.setDestinationEntity(82U);
    msg.value = 0.194999774128;

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
    msg.setTimeStamp(0.324664161232);
    msg.setSource(17031U);
    msg.setSourceEntity(178U);
    msg.setDestination(46154U);
    msg.setDestinationEntity(96U);
    msg.value = 0.421480895438;

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
    msg.setTimeStamp(0.653919625176);
    msg.setSource(17482U);
    msg.setSourceEntity(179U);
    msg.setDestination(31229U);
    msg.setDestinationEntity(5U);
    msg.value = 0.687746935009;

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
    msg.setTimeStamp(0.00506367902171);
    msg.setSource(30469U);
    msg.setSourceEntity(211U);
    msg.setDestination(31670U);
    msg.setDestinationEntity(230U);
    msg.value = 0.528929799045;

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
    msg.setTimeStamp(0.281573486373);
    msg.setSource(9053U);
    msg.setSourceEntity(91U);
    msg.setDestination(24705U);
    msg.setDestinationEntity(170U);
    msg.value = 0.863063997213;

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
    msg.setTimeStamp(0.866358827943);
    msg.setSource(48102U);
    msg.setSourceEntity(233U);
    msg.setDestination(2254U);
    msg.setDestinationEntity(100U);
    msg.value = 0.390109125287;

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
    msg.setTimeStamp(0.639768994954);
    msg.setSource(46880U);
    msg.setSourceEntity(245U);
    msg.setDestination(10663U);
    msg.setDestinationEntity(254U);
    msg.direction = 0.826730621081;
    msg.speed = 0.652051662444;
    msg.turbulence = 0.990453440598;

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
    msg.setTimeStamp(0.808460711598);
    msg.setSource(9854U);
    msg.setSourceEntity(164U);
    msg.setDestination(13303U);
    msg.setDestinationEntity(22U);
    msg.direction = 0.397450821282;
    msg.speed = 0.85277906418;
    msg.turbulence = 0.0866041856019;

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
    msg.setTimeStamp(0.118923391661);
    msg.setSource(44673U);
    msg.setSourceEntity(58U);
    msg.setDestination(16680U);
    msg.setDestinationEntity(148U);
    msg.direction = 0.468861986511;
    msg.speed = 0.358097455482;
    msg.turbulence = 0.349493240207;

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
    msg.setTimeStamp(0.642783991748);
    msg.setSource(14727U);
    msg.setSourceEntity(222U);
    msg.setDestination(54975U);
    msg.setDestinationEntity(43U);
    msg.value = 0.742938921423;

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
    msg.setTimeStamp(0.807633651488);
    msg.setSource(17000U);
    msg.setSourceEntity(126U);
    msg.setDestination(26590U);
    msg.setDestinationEntity(212U);
    msg.value = 0.00861113358962;

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
    msg.setTimeStamp(0.462832980275);
    msg.setSource(21459U);
    msg.setSourceEntity(24U);
    msg.setDestination(29140U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0917592753986;

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
    msg.setTimeStamp(0.0321483435782);
    msg.setSource(16287U);
    msg.setSourceEntity(110U);
    msg.setDestination(11237U);
    msg.setDestinationEntity(29U);
    msg.value.assign("YSRJDSGFBZSMOGJXVUBOKMAPVMEHOZMPLGLLDRMNYLPTGODIBKNOQXYPUHOCUFJEEVYVLUWCDPNJKDKSSIIWKBDHQGCMCXRXNNZUIRQTFFTHNPTBKAYCTXYRBHECAIYCOTZMHRKWAKWSUALQQQWBBLTRXJANOIDUHJVFLZFIWJSVIYAFZPKYEVSNDQHJSVOU");

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
    msg.setTimeStamp(0.409794239329);
    msg.setSource(19894U);
    msg.setSourceEntity(30U);
    msg.setDestination(59104U);
    msg.setDestinationEntity(221U);
    msg.value.assign("LLVMGNCEOONTXRMTLUNQFUBJQLBLXLHDPNUXVKKCUROHQ");

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
    msg.setTimeStamp(0.932126745111);
    msg.setSource(34358U);
    msg.setSourceEntity(184U);
    msg.setDestination(64734U);
    msg.setDestinationEntity(52U);
    msg.value.assign("YNGRAUICKKUBVNWIQTPLTVGVTPBDMVPBEYRLCOMHSEFNPWALCWBLQMRGMWJXYRANEJCUFMNRHSTAOWPJTCWNJHABWWWPXXEDXBVRFGRYYQITDGZLOPYQOKHULNIQ");

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
    msg.setTimeStamp(0.336159718822);
    msg.setSource(28653U);
    msg.setSourceEntity(109U);
    msg.setDestination(7238U);
    msg.setDestinationEntity(41U);
    const char tmp_msg_0[] = {46, -1, 45, 65, 1, -4, 46, 83, 0, 95, -49, 103, -28, -8, -8, -115, -83, -118, 18, 99, 124, -117, -12, 4, 105, -115, 5, -117, -61, -32, -66, -114, -110, 26, 124, -40, 39, -58, 110, 56, 16, 77, 35, -56, 118, 24, -57, -120, -11, 32, 74, 109, 116, 22, -97};
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
    msg.setTimeStamp(0.450125246432);
    msg.setSource(60421U);
    msg.setSourceEntity(98U);
    msg.setDestination(53693U);
    msg.setDestinationEntity(32U);
    const char tmp_msg_0[] = {-35, -84, 106, -67, -48, -93, 81, -45, -104, -14, 94, 70, -36, 13, 47, -114, -125, 107, -52, 111, 118, -124, 63, -98, 0, -14, 95, 47, 17, 11, 107, -40, -127, 18, -69, 114, 95, -1, 43, 27, -118, 88, -108, -113, 30, -31, 23, 124, -55, 94, 35, 22, -67, -40, -105, 8, 45, -87, -95, 77, 112, -10, -122, 98, 42, 112, -59, -67, 29, 51, -78, -98, 23, -98, -39, 76, -86, -28, 125, -3, -5, -78, -30, 89, -7, -82, -10, -100, -79, -124, 51, -40, -39, -80, -16, -41, 110, -127, 43, -67, 59, 89, 26, 48, 115, 105, -88, 70, -26, -17, 61, 41, -55, -110, 112, -7, -104, -86, 89, -30, -53, -123, -58, 53, 18, 69, -104, 18, 105, -94, 58, 69, 72, 62, 35, 51, 2, 12, -87, -71, -45, -89, -13, 80, 125, -101, -41, 89, -127, 121, 61, 122, -121, -87, 76, 5, -96, -20, 54, -60, -103, -109, 33, 12, 42, -35, 12, 61, -89, -48, 30, 121, 19, 87, 58, 112, -4, 20, 68, 81, -58, 1, -92, -126, 54, 48, -68, -21, -11, 120, 14, -40, -91, 117, -95, 82, 82, -118, 111};
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
    msg.setTimeStamp(0.697018626902);
    msg.setSource(32938U);
    msg.setSourceEntity(237U);
    msg.setDestination(12646U);
    msg.setDestinationEntity(67U);
    const char tmp_msg_0[] = {-60, 78, 81, -16, -102, -47, 102, 73, 124, 12, -54, 29, 86, -25, -35, -37, -19, 54, 16, 121, 54, -26, 70, -63, -81, 120, 28, -49, -74, 32, -120, -1, -25, 99, -83, -71, 125, 79, 53, 82, 35, -98, 26, 43, 86, -78, -28, -104, 98, -108, 64, 122, -124, -64, -61, 106, -52, -118, -54, -2, -5, -78, -21, -84, 71, 91, 119, 22, 3, -15, -12, -61, -54, -100, 56, -79, -40, 28, -105, -101, -42, 90, 84, -27, -16, 68, -65, -30, -80, 6, -67, 17, -84, -93, 20, -119, -42, -75, 105, 35, 47, -126, 91, -107, 8, -68, -99, -89, -53, 18, 36, 104, -55, -7, 41, -20, -81, 110, 38, 64, -81, -97, 22, -125, 9, 85, -72, -19, 104, 103, 44, 79, -6, -112, -52, -43, 45, 30, 70, 76, 52, -44, -75, 11, -37, 68, -58, 122, -28, 64, 66, 69, 9, -57, -107, -14, -19, -18, -24, -1, -85, -17, 83, 107, 2, 61, 72, -118, 22, 73, -36, -80, 100, -104, 61, 31, 86, 16, -44, -65, 115, -49, -87, 16, -8, 99, 123, -18, 108, 84, 5, 53, -92, 42, 125, -32, 75, 99, 77, 110, -64, -119, 59, 17, -124, -30, 85, -101, -112, -28, -95, 19, -37, -118, -49, -97, 103, -97, -102, -121, -60, 46, -47, -101, 18, -10};
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
    msg.setTimeStamp(0.751040623668);
    msg.setSource(46060U);
    msg.setSourceEntity(31U);
    msg.setDestination(29834U);
    msg.setDestinationEntity(198U);
    msg.value = 0.710318534954;

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
    msg.setTimeStamp(0.946234700544);
    msg.setSource(9157U);
    msg.setSourceEntity(101U);
    msg.setDestination(58931U);
    msg.setDestinationEntity(132U);
    msg.value = 0.00834327914797;

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
    msg.setTimeStamp(0.341387874741);
    msg.setSource(30731U);
    msg.setSourceEntity(40U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(68U);
    msg.value = 0.288720642723;

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
    msg.setTimeStamp(0.787454464697);
    msg.setSource(21747U);
    msg.setSourceEntity(71U);
    msg.setDestination(18855U);
    msg.setDestinationEntity(241U);
    msg.type = 39U;
    msg.frequency = 74968406U;
    msg.min_range = 46989U;
    msg.max_range = 27391U;
    msg.bits_per_point = 194U;
    msg.scale_factor = 0.907060124544;
    const char tmp_msg_0[] = {14, 106, -72, 107, 86, -128, -36, 80, 17, 89, 49, -39, -74, 65, -12, -124, -99, 19, 108, -5, -111, 72, -38, 48, 38, -38, -116, 92, -55, 89, 109, 56, 116, -25, 25, 58, 76, -62, 76, 24, -9, 11, -124, 41, 92, 100, 77, -47, 103, 6, -12, -8, -61, -111, 109, 124, -104, -82, -79, -4, -23, 27, -16, 52, 11, -107, -108, 83, 36, -110, -113, 52, 21, 30, 96, -95, -42, -28, 67, 69, -64, -110, -89, 7, -2, 93, -126, 123, -116, -19, -49, -12, -120, 94, 45, 31, -47, 81, 29, -109, 59, 107, 108, -32, -95, -33, 116, -52, 94, -79, 79, -51, -5, 4, -107};
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
    msg.setTimeStamp(0.103890570364);
    msg.setSource(26322U);
    msg.setSourceEntity(17U);
    msg.setDestination(32443U);
    msg.setDestinationEntity(114U);
    msg.type = 171U;
    msg.frequency = 3245813443U;
    msg.min_range = 48096U;
    msg.max_range = 24052U;
    msg.bits_per_point = 174U;
    msg.scale_factor = 0.909396005334;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.216914415355;
    tmp_msg_0.beam_height = 0.750023800292;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-42, -125, 106, -67, -52, -73, -112, -101, -119, 117, 5, 77, -34, 102, -94, -92, -7, 1, -21, 43, -65, -83, -117, -78, -117, -40, 125, 39, -23, 77, 75, 45, -78, -125, 56, 62, 16, 86};
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
    msg.setTimeStamp(0.402717996747);
    msg.setSource(37548U);
    msg.setSourceEntity(217U);
    msg.setDestination(9886U);
    msg.setDestinationEntity(55U);
    msg.type = 148U;
    msg.frequency = 3373801857U;
    msg.min_range = 48664U;
    msg.max_range = 45241U;
    msg.bits_per_point = 203U;
    msg.scale_factor = 0.672051691451;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.793423791624;
    tmp_msg_0.beam_height = 0.798464052158;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-54, 44, -107, 103, 117, 44, 72, 74, -75, 88, -57, 25, 79, 99, 24, -32, -53, -81, -34, -3, -50, -18, 105, -121, 122, 117, -32, -32, 64, 69, -77, -115, 102, 86, 56, -111, -118, 4, -41, -27, -93, 11, -42, -78, -6, 83, -5, -35, -1, -14, -29, -83, -70, 20, -80, -113, -14, -60, 121, -6, -124, 69, -32, 111, -28, -11, 67, -15, -105, -24, 72, -105, -117, 50, 55, 85, -19, 124, -103, 81, -94, -93, 123, 73, 24, 121, 59, -124, 91, -75, 123, -87, 28, -78, 121, -76, 20, -77, -12, 76, 56, -92, -122, -99, 35, 87, 95, -31, 12, -13, -70, -37, -26, -116, 118, -116, -103, 122, 94, 47, -22, 99, 101, -61, -125, -103, 26, 22, -75, -102, 53, -8, 106, 74, 102, 111, 3, 110, -17, -103, -87, -72, 39, 82, 20, 7, 54, -16, -113, 3, 26, -126, 55, 16, -46, -28, 91, 122, 103, 112, -45, -123, 87, 33, 90, -54, 96, 66, -75, 44, -8, -36, -51};
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
    msg.setTimeStamp(0.115563701784);
    msg.setSource(30793U);
    msg.setSourceEntity(178U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.649286848211);
    msg.setSource(48281U);
    msg.setSourceEntity(44U);
    msg.setDestination(13294U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.751369722422);
    msg.setSource(55156U);
    msg.setSourceEntity(66U);
    msg.setDestination(19637U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.151421120457);
    msg.setSource(48306U);
    msg.setSourceEntity(2U);
    msg.setDestination(43819U);
    msg.setDestinationEntity(206U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.150769576992);
    msg.setSource(58729U);
    msg.setSourceEntity(217U);
    msg.setDestination(7166U);
    msg.setDestinationEntity(115U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.246050729171);
    msg.setSource(41391U);
    msg.setSourceEntity(36U);
    msg.setDestination(46083U);
    msg.setDestinationEntity(4U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.809087939556);
    msg.setSource(4080U);
    msg.setSourceEntity(203U);
    msg.setDestination(29998U);
    msg.setDestinationEntity(233U);
    msg.value = 0.506633742378;
    msg.confidence = 0.847299605737;
    msg.opmodes.assign("ZMVUQELLACFBZHBF");

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
    msg.setTimeStamp(0.556413960275);
    msg.setSource(54000U);
    msg.setSourceEntity(125U);
    msg.setDestination(50943U);
    msg.setDestinationEntity(177U);
    msg.value = 0.219902848038;
    msg.confidence = 0.759316940596;
    msg.opmodes.assign("MEUDBKYWNVGYMTNKOQJMARHSROUHPSIVLBGPWBNIOITKTPOBZUGOZQQVOXYDHFYSZKIUUJIFWBEJZSXAALXEBVTMKNBRHDEYFENRCXDETJKTWGQAHBMHHZZMRUSPLCVOAYHGLWALUIJPFMTCXEZLCAXHYFCIKQFGMPKTWBSNLKTCAGDNUEVAVQJKIDYQMVJYXVNVBARGHXEJZURNOXSPQTYFQPFSNI");

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
    msg.setTimeStamp(0.0914280851823);
    msg.setSource(947U);
    msg.setSourceEntity(49U);
    msg.setDestination(3155U);
    msg.setDestinationEntity(224U);
    msg.value = 0.261560598638;
    msg.confidence = 0.319293594438;
    msg.opmodes.assign("YYBFKOSAIXAJMIZWPLVHSHMCIIGPQWJEIHPZHGZCAFMHJLTZUNMUPNLFWULRUDXCQCRETJQK");

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
    msg.setTimeStamp(0.383502586409);
    msg.setSource(54199U);
    msg.setSourceEntity(142U);
    msg.setDestination(43567U);
    msg.setDestinationEntity(198U);
    msg.itow = 737421532U;
    msg.lat = 0.300344829902;
    msg.lon = 0.40773720262;
    msg.height_ell = 0.593944785254;
    msg.height_sea = 0.577616799192;
    msg.hacc = 0.274904178193;
    msg.vacc = 0.395836236074;
    msg.vel_n = 0.503351812726;
    msg.vel_e = 0.631361709761;
    msg.vel_d = 0.353635402058;
    msg.speed = 0.534311403631;
    msg.gspeed = 0.655314777221;
    msg.heading = 0.400143639739;
    msg.sacc = 0.0257163048286;
    msg.cacc = 0.0911036805242;

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
    msg.setTimeStamp(0.54908581428);
    msg.setSource(26516U);
    msg.setSourceEntity(244U);
    msg.setDestination(5443U);
    msg.setDestinationEntity(245U);
    msg.itow = 720976990U;
    msg.lat = 0.474329471982;
    msg.lon = 0.540018838534;
    msg.height_ell = 0.336762601201;
    msg.height_sea = 0.043840899732;
    msg.hacc = 0.070531199892;
    msg.vacc = 0.769004365193;
    msg.vel_n = 0.255258586192;
    msg.vel_e = 0.62993067967;
    msg.vel_d = 0.581956209597;
    msg.speed = 0.476269072372;
    msg.gspeed = 0.403212674225;
    msg.heading = 0.704394361554;
    msg.sacc = 0.75845778964;
    msg.cacc = 0.411159295759;

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
    msg.setTimeStamp(0.808521872137);
    msg.setSource(4430U);
    msg.setSourceEntity(154U);
    msg.setDestination(13758U);
    msg.setDestinationEntity(31U);
    msg.itow = 1849510821U;
    msg.lat = 0.87762826622;
    msg.lon = 0.546898485683;
    msg.height_ell = 0.921665567198;
    msg.height_sea = 0.128533186538;
    msg.hacc = 0.23404471266;
    msg.vacc = 0.331272246368;
    msg.vel_n = 0.784672073679;
    msg.vel_e = 0.988512193768;
    msg.vel_d = 0.770919146771;
    msg.speed = 0.218045744398;
    msg.gspeed = 0.715929271381;
    msg.heading = 0.777975347228;
    msg.sacc = 0.906061098155;
    msg.cacc = 0.120032847218;

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
    msg.setTimeStamp(0.186679758419);
    msg.setSource(19060U);
    msg.setSourceEntity(141U);
    msg.setDestination(59567U);
    msg.setDestinationEntity(183U);
    msg.id = 57U;
    msg.value = 0.435853485065;

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
    msg.setTimeStamp(0.819493311451);
    msg.setSource(17376U);
    msg.setSourceEntity(92U);
    msg.setDestination(34928U);
    msg.setDestinationEntity(127U);
    msg.id = 12U;
    msg.value = 0.216813387562;

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
    msg.setTimeStamp(0.877136829054);
    msg.setSource(60187U);
    msg.setSourceEntity(208U);
    msg.setDestination(14738U);
    msg.setDestinationEntity(167U);
    msg.id = 133U;
    msg.value = 0.0877084430565;

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
    msg.setTimeStamp(0.837803691454);
    msg.setSource(54619U);
    msg.setSourceEntity(166U);
    msg.setDestination(52003U);
    msg.setDestinationEntity(173U);
    msg.x = 0.395326322886;
    msg.y = 0.90413488525;
    msg.z = 0.100073823189;
    msg.phi = 0.64645744883;
    msg.theta = 0.0698909092744;
    msg.psi = 0.611350718415;

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
    msg.setTimeStamp(0.428889722657);
    msg.setSource(38736U);
    msg.setSourceEntity(24U);
    msg.setDestination(37950U);
    msg.setDestinationEntity(38U);
    msg.x = 0.165344277479;
    msg.y = 0.490050260809;
    msg.z = 0.145956772574;
    msg.phi = 0.851428701055;
    msg.theta = 0.73204593452;
    msg.psi = 0.465465331443;

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
    msg.setTimeStamp(0.918518356797);
    msg.setSource(37237U);
    msg.setSourceEntity(67U);
    msg.setDestination(12880U);
    msg.setDestinationEntity(44U);
    msg.x = 0.523233908685;
    msg.y = 0.763368351775;
    msg.z = 0.126939307399;
    msg.phi = 0.437339867393;
    msg.theta = 0.162839808421;
    msg.psi = 0.854986687226;

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
    msg.setTimeStamp(0.738735474789);
    msg.setSource(41801U);
    msg.setSourceEntity(22U);
    msg.setDestination(57665U);
    msg.setDestinationEntity(114U);
    msg.beam_width = 0.48275592908;
    msg.beam_height = 0.256590244562;

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
    msg.setTimeStamp(0.431458044781);
    msg.setSource(21146U);
    msg.setSourceEntity(133U);
    msg.setDestination(60879U);
    msg.setDestinationEntity(243U);
    msg.beam_width = 0.245611639617;
    msg.beam_height = 0.333074392989;

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
    msg.setTimeStamp(0.735877146718);
    msg.setSource(52317U);
    msg.setSourceEntity(129U);
    msg.setDestination(22997U);
    msg.setDestinationEntity(159U);
    msg.beam_width = 0.705864611381;
    msg.beam_height = 0.848109647152;

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
    msg.setTimeStamp(0.503004393935);
    msg.setSource(16348U);
    msg.setSourceEntity(182U);
    msg.setDestination(1531U);
    msg.setDestinationEntity(44U);
    msg.sane = 126U;

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
    msg.setTimeStamp(0.0375635626624);
    msg.setSource(57021U);
    msg.setSourceEntity(163U);
    msg.setDestination(59694U);
    msg.setDestinationEntity(178U);
    msg.sane = 77U;

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
    msg.setTimeStamp(0.826954229987);
    msg.setSource(56536U);
    msg.setSourceEntity(130U);
    msg.setDestination(51716U);
    msg.setDestinationEntity(66U);
    msg.sane = 252U;

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
    msg.setTimeStamp(0.683780735226);
    msg.setSource(21992U);
    msg.setSourceEntity(43U);
    msg.setDestination(46622U);
    msg.setDestinationEntity(196U);
    msg.value = 0.954036505177;

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
    msg.setTimeStamp(0.78618117716);
    msg.setSource(3253U);
    msg.setSourceEntity(12U);
    msg.setDestination(4803U);
    msg.setDestinationEntity(142U);
    msg.value = 0.704427982274;

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
    msg.setTimeStamp(0.610605677748);
    msg.setSource(59667U);
    msg.setSourceEntity(156U);
    msg.setDestination(9594U);
    msg.setDestinationEntity(31U);
    msg.value = 0.489676347358;

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
    msg.setTimeStamp(0.373715905595);
    msg.setSource(64759U);
    msg.setSourceEntity(221U);
    msg.setDestination(31785U);
    msg.setDestinationEntity(232U);
    msg.value = 0.72807901909;

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
    msg.setTimeStamp(0.942049809212);
    msg.setSource(34378U);
    msg.setSourceEntity(193U);
    msg.setDestination(45841U);
    msg.setDestinationEntity(31U);
    msg.value = 0.0318991088219;

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
    msg.setTimeStamp(0.519160135);
    msg.setSource(39066U);
    msg.setSourceEntity(36U);
    msg.setDestination(33193U);
    msg.setDestinationEntity(234U);
    msg.value = 0.939501746929;

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
    msg.setTimeStamp(0.808451889182);
    msg.setSource(12214U);
    msg.setSourceEntity(77U);
    msg.setDestination(4838U);
    msg.setDestinationEntity(19U);
    msg.value = 0.676792280904;

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
    msg.setTimeStamp(0.68706992387);
    msg.setSource(18036U);
    msg.setSourceEntity(121U);
    msg.setDestination(30043U);
    msg.setDestinationEntity(108U);
    msg.value = 0.411668331662;

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
    msg.setTimeStamp(0.441207933089);
    msg.setSource(58377U);
    msg.setSourceEntity(197U);
    msg.setDestination(3760U);
    msg.setDestinationEntity(86U);
    msg.value = 0.531699849361;

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
    msg.setTimeStamp(0.622960867624);
    msg.setSource(29017U);
    msg.setSourceEntity(169U);
    msg.setDestination(51823U);
    msg.setDestinationEntity(57U);
    msg.value = 0.951134355088;

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
    msg.setTimeStamp(0.0111887456195);
    msg.setSource(60567U);
    msg.setSourceEntity(58U);
    msg.setDestination(51746U);
    msg.setDestinationEntity(198U);
    msg.value = 0.762064136749;

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
    msg.setTimeStamp(0.947072941413);
    msg.setSource(54140U);
    msg.setSourceEntity(243U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(231U);
    msg.value = 0.219870401418;

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
    msg.setTimeStamp(0.526657759452);
    msg.setSource(44653U);
    msg.setSourceEntity(11U);
    msg.setDestination(13819U);
    msg.setDestinationEntity(169U);
    msg.value = 0.889028568963;

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
    msg.setTimeStamp(0.927462271791);
    msg.setSource(58817U);
    msg.setSourceEntity(45U);
    msg.setDestination(15654U);
    msg.setDestinationEntity(170U);
    msg.value = 0.912334268852;

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
    msg.setTimeStamp(0.8750502854);
    msg.setSource(49007U);
    msg.setSourceEntity(227U);
    msg.setDestination(28034U);
    msg.setDestinationEntity(108U);
    msg.value = 0.845043359051;

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
    msg.setTimeStamp(0.43433566433);
    msg.setSource(10213U);
    msg.setSourceEntity(59U);
    msg.setDestination(13635U);
    msg.setDestinationEntity(60U);
    msg.value = 0.733425223224;

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
    msg.setTimeStamp(0.341435625426);
    msg.setSource(59668U);
    msg.setSourceEntity(231U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(196U);
    msg.value = 0.495475286769;

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
    msg.setTimeStamp(0.0387532183146);
    msg.setSource(59989U);
    msg.setSourceEntity(181U);
    msg.setDestination(48090U);
    msg.setDestinationEntity(254U);
    msg.value = 0.492402131551;

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
    msg.setTimeStamp(0.815943391428);
    msg.setSource(30739U);
    msg.setSourceEntity(18U);
    msg.setDestination(51452U);
    msg.setDestinationEntity(136U);
    msg.value = 0.34629596812;

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
    msg.setTimeStamp(0.681077683422);
    msg.setSource(53826U);
    msg.setSourceEntity(96U);
    msg.setDestination(29788U);
    msg.setDestinationEntity(78U);
    msg.value = 0.602286919712;

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
    msg.setTimeStamp(0.0773678809599);
    msg.setSource(55600U);
    msg.setSourceEntity(69U);
    msg.setDestination(56046U);
    msg.setDestinationEntity(148U);
    msg.value = 0.537771854236;

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
    msg.setTimeStamp(0.872094981654);
    msg.setSource(53711U);
    msg.setSourceEntity(22U);
    msg.setDestination(52533U);
    msg.setDestinationEntity(95U);
    msg.value = 0.742376528677;

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
    msg.setTimeStamp(0.897132282275);
    msg.setSource(6701U);
    msg.setSourceEntity(156U);
    msg.setDestination(16744U);
    msg.setDestinationEntity(245U);
    msg.value = 0.949426174039;

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
    msg.setTimeStamp(0.665548558823);
    msg.setSource(6000U);
    msg.setSourceEntity(10U);
    msg.setDestination(51761U);
    msg.setDestinationEntity(112U);
    msg.value = 0.368872891309;

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
    msg.setTimeStamp(0.471518844792);
    msg.setSource(58628U);
    msg.setSourceEntity(243U);
    msg.setDestination(23240U);
    msg.setDestinationEntity(239U);
    msg.validity = 61449U;
    msg.type = 94U;
    msg.tow = 3738513912U;
    msg.base_lat = 0.412092873261;
    msg.base_lon = 0.689044013233;
    msg.base_height = 0.616690090431;
    msg.n = 0.515367485981;
    msg.e = 0.838509234433;
    msg.d = 0.158670447807;
    msg.v_n = 0.3827378867;
    msg.v_e = 0.408661239431;
    msg.v_d = 0.36969910997;
    msg.satellites = 82U;
    msg.iar_hyp = 50491U;
    msg.iar_ratio = 0.0291815526977;

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
    msg.setTimeStamp(0.910853441988);
    msg.setSource(55051U);
    msg.setSourceEntity(200U);
    msg.setDestination(62993U);
    msg.setDestinationEntity(89U);
    msg.validity = 58487U;
    msg.type = 112U;
    msg.tow = 1140232873U;
    msg.base_lat = 0.0404430324512;
    msg.base_lon = 0.00315169561934;
    msg.base_height = 0.185020714012;
    msg.n = 0.725558948154;
    msg.e = 0.835233246393;
    msg.d = 0.420278440029;
    msg.v_n = 0.252514112004;
    msg.v_e = 0.284613594133;
    msg.v_d = 0.94285441867;
    msg.satellites = 142U;
    msg.iar_hyp = 51121U;
    msg.iar_ratio = 0.521283220719;

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
    msg.setTimeStamp(0.374775758582);
    msg.setSource(30404U);
    msg.setSourceEntity(248U);
    msg.setDestination(1355U);
    msg.setDestinationEntity(61U);
    msg.validity = 48978U;
    msg.type = 127U;
    msg.tow = 2193117648U;
    msg.base_lat = 0.724082462829;
    msg.base_lon = 0.747984086931;
    msg.base_height = 0.0340815199593;
    msg.n = 0.789453562003;
    msg.e = 0.484271401445;
    msg.d = 0.49504290549;
    msg.v_n = 0.533171878123;
    msg.v_e = 0.297123150133;
    msg.v_d = 0.95947398869;
    msg.satellites = 179U;
    msg.iar_hyp = 20092U;
    msg.iar_ratio = 0.135096827077;

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
    msg.setTimeStamp(0.403199757917);
    msg.setSource(3711U);
    msg.setSourceEntity(85U);
    msg.setDestination(62340U);
    msg.setDestinationEntity(239U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.987625149269;
    tmp_msg_0.lon = 0.502728782002;
    tmp_msg_0.height = 0.769603197775;
    tmp_msg_0.x = 0.889306819325;
    tmp_msg_0.y = 0.374533231963;
    tmp_msg_0.z = 0.791116673173;
    tmp_msg_0.phi = 0.0325027081802;
    tmp_msg_0.theta = 0.741415670437;
    tmp_msg_0.psi = 0.260663134175;
    tmp_msg_0.u = 0.988802111172;
    tmp_msg_0.v = 0.182628646128;
    tmp_msg_0.w = 0.150055506972;
    tmp_msg_0.vx = 0.289575594194;
    tmp_msg_0.vy = 0.977787902134;
    tmp_msg_0.vz = 0.528205517674;
    tmp_msg_0.p = 0.638639338781;
    tmp_msg_0.q = 0.334852505835;
    tmp_msg_0.r = 0.875177164035;
    tmp_msg_0.depth = 0.924526284068;
    tmp_msg_0.alt = 0.41257739381;
    msg.state.set(tmp_msg_0);
    msg.type = 154U;

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
    msg.setTimeStamp(0.805122172909);
    msg.setSource(20334U);
    msg.setSourceEntity(182U);
    msg.setDestination(58567U);
    msg.setDestinationEntity(126U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.714062359429;
    tmp_msg_0.lon = 0.882807642483;
    tmp_msg_0.height = 0.573971304339;
    tmp_msg_0.x = 0.0780788217794;
    tmp_msg_0.y = 0.258791466667;
    tmp_msg_0.z = 0.124553313546;
    tmp_msg_0.phi = 0.722710992245;
    tmp_msg_0.theta = 0.996400706582;
    tmp_msg_0.psi = 0.312967856449;
    tmp_msg_0.u = 0.333343174162;
    tmp_msg_0.v = 0.429147910466;
    tmp_msg_0.w = 0.789217966759;
    tmp_msg_0.vx = 0.869608829456;
    tmp_msg_0.vy = 0.207250473866;
    tmp_msg_0.vz = 0.0443416263082;
    tmp_msg_0.p = 0.154222497557;
    tmp_msg_0.q = 0.25786479594;
    tmp_msg_0.r = 0.309727606541;
    tmp_msg_0.depth = 0.395891410795;
    tmp_msg_0.alt = 0.93245967962;
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
    msg.setTimeStamp(0.666917423251);
    msg.setSource(62048U);
    msg.setSourceEntity(104U);
    msg.setDestination(997U);
    msg.setDestinationEntity(10U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.591731475584;
    tmp_msg_0.lon = 0.971035146517;
    tmp_msg_0.height = 0.551814408884;
    tmp_msg_0.x = 0.712265014261;
    tmp_msg_0.y = 0.281498566228;
    tmp_msg_0.z = 0.0509650455885;
    tmp_msg_0.phi = 0.596337130595;
    tmp_msg_0.theta = 0.569292653846;
    tmp_msg_0.psi = 0.525159312889;
    tmp_msg_0.u = 0.596832401091;
    tmp_msg_0.v = 0.334919939817;
    tmp_msg_0.w = 0.36448690359;
    tmp_msg_0.vx = 0.060571373296;
    tmp_msg_0.vy = 0.803669351056;
    tmp_msg_0.vz = 0.65815256448;
    tmp_msg_0.p = 0.0150417332634;
    tmp_msg_0.q = 0.133301720605;
    tmp_msg_0.r = 0.794093292754;
    tmp_msg_0.depth = 0.325771844168;
    tmp_msg_0.alt = 0.355814681462;
    msg.state.set(tmp_msg_0);
    msg.type = 151U;

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
    msg.setTimeStamp(0.455930687011);
    msg.setSource(40275U);
    msg.setSourceEntity(166U);
    msg.setDestination(40U);
    msg.setDestinationEntity(158U);
    msg.value = 0.908068992256;

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
    msg.setTimeStamp(0.176981416992);
    msg.setSource(45436U);
    msg.setSourceEntity(238U);
    msg.setDestination(22042U);
    msg.setDestinationEntity(160U);
    msg.value = 0.601126556581;

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
    msg.setTimeStamp(0.960893695766);
    msg.setSource(14009U);
    msg.setSourceEntity(18U);
    msg.setDestination(12638U);
    msg.setDestinationEntity(60U);
    msg.value = 0.534395212406;

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
    msg.setTimeStamp(0.0495310511246);
    msg.setSource(26160U);
    msg.setSourceEntity(251U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(62U);
    msg.value = 0.997249250805;

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
    msg.setTimeStamp(0.507347512732);
    msg.setSource(24150U);
    msg.setSourceEntity(196U);
    msg.setDestination(64468U);
    msg.setDestinationEntity(220U);
    msg.value = 0.852380565696;

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
    msg.setTimeStamp(0.532603299759);
    msg.setSource(43381U);
    msg.setSourceEntity(24U);
    msg.setDestination(23834U);
    msg.setDestinationEntity(133U);
    msg.value = 0.122155237804;

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
    msg.setTimeStamp(0.626606256498);
    msg.setSource(51944U);
    msg.setSourceEntity(151U);
    msg.setDestination(2673U);
    msg.setDestinationEntity(154U);
    msg.value = 0.0813782221005;

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
    msg.setTimeStamp(0.910719048878);
    msg.setSource(20127U);
    msg.setSourceEntity(66U);
    msg.setDestination(26430U);
    msg.setDestinationEntity(211U);
    msg.value = 0.0527122468982;

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
    msg.setTimeStamp(0.978073307704);
    msg.setSource(20414U);
    msg.setSourceEntity(224U);
    msg.setDestination(22950U);
    msg.setDestinationEntity(216U);
    msg.value = 0.276472637434;

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
    msg.setTimeStamp(0.39559333309);
    msg.setSource(37990U);
    msg.setSourceEntity(81U);
    msg.setDestination(6049U);
    msg.setDestinationEntity(248U);
    msg.value = 0.735458060765;

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
    msg.setTimeStamp(0.25849934026);
    msg.setSource(32071U);
    msg.setSourceEntity(125U);
    msg.setDestination(2585U);
    msg.setDestinationEntity(125U);
    msg.value = 0.990856529437;

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
    msg.setTimeStamp(0.124910808041);
    msg.setSource(25U);
    msg.setSourceEntity(108U);
    msg.setDestination(18134U);
    msg.setDestinationEntity(36U);
    msg.value = 0.542178719609;

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
    msg.setTimeStamp(0.56574735178);
    msg.setSource(38022U);
    msg.setSourceEntity(137U);
    msg.setDestination(32947U);
    msg.setDestinationEntity(233U);
    msg.value = 0.395752211687;

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
    msg.setTimeStamp(0.396971532544);
    msg.setSource(58717U);
    msg.setSourceEntity(73U);
    msg.setDestination(11180U);
    msg.setDestinationEntity(191U);
    msg.value = 0.0102961919539;

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
    msg.setTimeStamp(0.511945770568);
    msg.setSource(26282U);
    msg.setSourceEntity(219U);
    msg.setDestination(57356U);
    msg.setDestinationEntity(77U);
    msg.value = 0.461190582991;

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
    msg.setTimeStamp(0.606142868854);
    msg.setSource(49283U);
    msg.setSourceEntity(113U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(185U);
    msg.id = 163U;
    msg.zoom = 56U;
    msg.action = 143U;

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
    msg.setTimeStamp(0.22421037475);
    msg.setSource(25132U);
    msg.setSourceEntity(126U);
    msg.setDestination(4711U);
    msg.setDestinationEntity(81U);
    msg.id = 87U;
    msg.zoom = 196U;
    msg.action = 42U;

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
    msg.setTimeStamp(0.184146969186);
    msg.setSource(18881U);
    msg.setSourceEntity(200U);
    msg.setDestination(17833U);
    msg.setDestinationEntity(187U);
    msg.id = 227U;
    msg.zoom = 45U;
    msg.action = 2U;

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
    msg.setTimeStamp(0.511614700434);
    msg.setSource(11022U);
    msg.setSourceEntity(36U);
    msg.setDestination(20501U);
    msg.setDestinationEntity(155U);
    msg.id = 8U;
    msg.value = 0.880531656414;

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
    msg.setTimeStamp(0.0720607205906);
    msg.setSource(46396U);
    msg.setSourceEntity(188U);
    msg.setDestination(3450U);
    msg.setDestinationEntity(10U);
    msg.id = 31U;
    msg.value = 0.389264635114;

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
    msg.setTimeStamp(0.673455288562);
    msg.setSource(52258U);
    msg.setSourceEntity(82U);
    msg.setDestination(48033U);
    msg.setDestinationEntity(184U);
    msg.id = 153U;
    msg.value = 0.493271637692;

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
    msg.setTimeStamp(0.954994193361);
    msg.setSource(49752U);
    msg.setSourceEntity(200U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(145U);
    msg.id = 115U;
    msg.value = 0.358747032937;

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
    msg.setTimeStamp(0.661885495668);
    msg.setSource(35036U);
    msg.setSourceEntity(189U);
    msg.setDestination(14221U);
    msg.setDestinationEntity(59U);
    msg.id = 253U;
    msg.value = 0.805147562424;

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
    msg.setTimeStamp(0.470950693837);
    msg.setSource(30100U);
    msg.setSourceEntity(110U);
    msg.setDestination(49185U);
    msg.setDestinationEntity(127U);
    msg.id = 59U;
    msg.value = 0.0365827820414;

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
    msg.setTimeStamp(0.347953627438);
    msg.setSource(13942U);
    msg.setSourceEntity(140U);
    msg.setDestination(64881U);
    msg.setDestinationEntity(168U);
    msg.id = 200U;
    msg.angle = 0.856990255525;

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
    msg.setTimeStamp(0.522194831007);
    msg.setSource(57174U);
    msg.setSourceEntity(29U);
    msg.setDestination(32539U);
    msg.setDestinationEntity(116U);
    msg.id = 212U;
    msg.angle = 0.153115233637;

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
    msg.setTimeStamp(0.306519077977);
    msg.setSource(63474U);
    msg.setSourceEntity(70U);
    msg.setDestination(49750U);
    msg.setDestinationEntity(182U);
    msg.id = 200U;
    msg.angle = 0.90793128994;

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
    msg.setTimeStamp(0.68965652623);
    msg.setSource(23498U);
    msg.setSourceEntity(58U);
    msg.setDestination(2456U);
    msg.setDestinationEntity(15U);
    msg.op = 232U;
    msg.actions.assign("KDKEWGULXRUHAFCZXUU");

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
    msg.setTimeStamp(0.553206621548);
    msg.setSource(55153U);
    msg.setSourceEntity(120U);
    msg.setDestination(9034U);
    msg.setDestinationEntity(12U);
    msg.op = 71U;
    msg.actions.assign("QWFPVEUNGJEKTBJUZVHOKCMJNUMZZJOKOXAXNPMBZVBHKHTEEPKFWYTYWZTQUXDQWF");

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
    msg.setTimeStamp(0.850062937595);
    msg.setSource(56082U);
    msg.setSourceEntity(2U);
    msg.setDestination(48472U);
    msg.setDestinationEntity(34U);
    msg.op = 10U;
    msg.actions.assign("ATXWWCOUADZNJIIZSVDHROROUIKFEJBLHBLSXYKGMVPGNREJWDJJWDFBRBUDQSMRJDSBGNSFTYYZXACAQKOLTVPTMICWSCZSPUVPDZFVXQDPPEVFXHKJXAAYAIQGXLIKKBZVQJGYHYJBFHFEQSPSIOJPEOWRWDMTSBQVNWBGYRCFZNXMINUPEMZAMLYLKPMVNIFCLHEKKXQHYRHCUMVZCLTHGCOQYIEXODUNUGTOFGG");

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
    msg.setTimeStamp(0.655502414369);
    msg.setSource(61930U);
    msg.setSourceEntity(147U);
    msg.setDestination(5049U);
    msg.setDestinationEntity(229U);
    msg.actions.assign("BMDFKWCSIGQEMTAXGJLUJWSWLOWKSDPRLINOENBAYNBUTBRAWKIKGPFZEHPNCCYFTPYCYZJHTEMABZHJUKNQAQGFJUHNPYSAICIOZBOVOYELBVBZFSQMQUCMSUXIOHQZVVVSTDIRDTWEWXMCZRHKRXRQGTAZSZLGXEPVYDNPNQGUOUHCTYRAYFOMVZAPDUHWCAJHWONJXRQVWXMLP");

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
    msg.setTimeStamp(0.942866139397);
    msg.setSource(53169U);
    msg.setSourceEntity(185U);
    msg.setDestination(42003U);
    msg.setDestinationEntity(53U);
    msg.actions.assign("QHYIOFQPPPSBQCKSBQNTVZXAUHQGGWQKWANKJPRXRMETHDVBEGLKIJTRTMQMNWMIZNBDWKSPAGWSXPEIC");

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
    msg.setTimeStamp(0.859784108946);
    msg.setSource(35199U);
    msg.setSourceEntity(231U);
    msg.setDestination(41453U);
    msg.setDestinationEntity(253U);
    msg.actions.assign("PNYDSRTKWFWCJKBKYGOZTKQLYYLBAFVDHWIEQTHRLPZTJFSEACSETJIMOLXSFKQAFJIGKVCJKWUQGVZHSBQFIHCZJSKNTWCNZDXQGHMNKMEGATXHUXMOIEZIBVRUWZRJDCUDCEGXPEYWHEP");

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
    msg.setTimeStamp(0.0549390016864);
    msg.setSource(12152U);
    msg.setSourceEntity(225U);
    msg.setDestination(35123U);
    msg.setDestinationEntity(53U);
    msg.button = 215U;
    msg.value = 164U;

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
    msg.setTimeStamp(0.411385816971);
    msg.setSource(63040U);
    msg.setSourceEntity(6U);
    msg.setDestination(62389U);
    msg.setDestinationEntity(181U);
    msg.button = 35U;
    msg.value = 241U;

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
    msg.setTimeStamp(0.0596140014088);
    msg.setSource(62598U);
    msg.setSourceEntity(230U);
    msg.setDestination(3580U);
    msg.setDestinationEntity(148U);
    msg.button = 233U;
    msg.value = 245U;

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
    msg.setTimeStamp(0.578711687361);
    msg.setSource(56907U);
    msg.setSourceEntity(242U);
    msg.setDestination(23868U);
    msg.setDestinationEntity(80U);
    msg.op = 26U;
    msg.text.assign("QGBLSOGOUUJDQVBBVVUUIODTBJEMDEYMASYQRIPAYEUYTRGWGEOBXZSHTHONZENNKEHMCPLFNFTCMHLFABZGFACHNPOJWQHQFXCXLNWGRBYJSTBSNIQXJXEKDTFDIFPQWHEPABGKAKJIXOHFLXYNKR");

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
    msg.setTimeStamp(0.677487243433);
    msg.setSource(51086U);
    msg.setSourceEntity(10U);
    msg.setDestination(35923U);
    msg.setDestinationEntity(5U);
    msg.op = 149U;
    msg.text.assign("NDFFRJZJHPRIVDDNZPKNKZDCIDPTYJLKYWPXSROENCRBMVXGKMRUGOHNEVKBSAAMYYDZSPVNWBUPBBFUYMQJCULSHOZUQCIOZJETZPZXSOUCSDCHXNQAWKQBSBMFAAEQKNOQYOQFQFLDAFUZWRJLZVMX");

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
    msg.setTimeStamp(0.957187194863);
    msg.setSource(17831U);
    msg.setSourceEntity(84U);
    msg.setDestination(56743U);
    msg.setDestinationEntity(156U);
    msg.op = 150U;
    msg.text.assign("LKAZPEYDIRSYRBOZAMVTFXZSDTAEKPUKKUZMHGYRZXLXDJQGIZGISDFFGJZHBSBOXHDQUAIAMMLNYLFCXGWIWVOQBSHSYDO");

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
    msg.setTimeStamp(0.317169814108);
    msg.setSource(1820U);
    msg.setSourceEntity(244U);
    msg.setDestination(28828U);
    msg.setDestinationEntity(213U);
    msg.op = 224U;
    msg.time_remain = 0.895879108687;
    msg.sched_time = 0.141116383841;

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
    msg.setTimeStamp(0.0150636469511);
    msg.setSource(51469U);
    msg.setSourceEntity(196U);
    msg.setDestination(36852U);
    msg.setDestinationEntity(248U);
    msg.op = 204U;
    msg.time_remain = 0.070752052182;
    msg.sched_time = 0.933167005957;

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
    msg.setTimeStamp(0.939139766301);
    msg.setSource(25847U);
    msg.setSourceEntity(137U);
    msg.setDestination(40545U);
    msg.setDestinationEntity(229U);
    msg.op = 73U;
    msg.time_remain = 0.796295915182;
    msg.sched_time = 0.265890259979;

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
    msg.setTimeStamp(0.292616903771);
    msg.setSource(46931U);
    msg.setSourceEntity(216U);
    msg.setDestination(56302U);
    msg.setDestinationEntity(249U);
    msg.name.assign("XPAEYKZAWLSLSYYHKQZJWQVXUBCMOLQTEWUYVWGSUKVSGDZUNVHJOPNOUUEKVDIWUZBPFXSLORPIKNGORGMEEDNEWXNILRMNRCBVPKLYDTNIHTOMOKACQIDRLPCWBZGAGLOFDYWDJZXMFFXYFEBRLXRHIJBTMWAAAQFNMOVHV");
    msg.op = 198U;
    msg.sched_time = 0.774218974261;

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
    msg.setTimeStamp(0.0768140767729);
    msg.setSource(30281U);
    msg.setSourceEntity(44U);
    msg.setDestination(2752U);
    msg.setDestinationEntity(48U);
    msg.name.assign("SWDLSWNTVSNZXMWJFBPCEYITWOCSZFXOIULTYJHMJQNVNHWBUFDKHKNKSRTDEHTAUKCHIMEUKCGJTPEFONRODBNOSCKGPRPKPPREYYMFQZMXZGZUGFDCOBSYBTUIALAZLNHXDOVAHBIMFAZILWTGCVFXYEGZXQQABWHXJVVINVKALQNGSXKDGDYF");
    msg.op = 160U;
    msg.sched_time = 0.69013835704;

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
    msg.setTimeStamp(0.916715842118);
    msg.setSource(60923U);
    msg.setSourceEntity(141U);
    msg.setDestination(8283U);
    msg.setDestinationEntity(214U);
    msg.name.assign("DAOMINAGPWXEHKUQWDDGWDIBMYXRUPUAYCBEOBFFOECVTOGPJTEIJRVPESJVBKPZLCAGHNQIRZCXVYYHUGFM");
    msg.op = 22U;
    msg.sched_time = 0.828926623303;

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
    msg.setTimeStamp(0.363973688352);
    msg.setSource(59719U);
    msg.setSourceEntity(98U);
    msg.setDestination(13841U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.0985537945256);
    msg.setSource(26210U);
    msg.setSourceEntity(95U);
    msg.setDestination(56409U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.554645860272);
    msg.setSource(51333U);
    msg.setSourceEntity(170U);
    msg.setDestination(24133U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.447146241847);
    msg.setSource(54637U);
    msg.setSourceEntity(238U);
    msg.setDestination(36528U);
    msg.setDestinationEntity(247U);
    msg.name.assign("JVIDSWHERZYACAVKKPXYVUEFNKFQPCSMNUEGPNBAAMEJVYYAJCLFGTHKCZMMKECLQFSCIBWSXPOXFIZPYOVVTDAKYQPMGTLBHBWTXEGZULWJSMXQDRAQUISUCDQJGHVNMQCVSBDSWQGRIPIOPDRCJFOBBZRYMYDU");
    msg.state = 180U;

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
    msg.setTimeStamp(0.498343406704);
    msg.setSource(52206U);
    msg.setSourceEntity(251U);
    msg.setDestination(46836U);
    msg.setDestinationEntity(44U);
    msg.name.assign("UFBREBXJUSMLYJQWSEIFYLZHFZFKKLZSUHHGYGXRVMZCROOGNILOEY");
    msg.state = 139U;

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
    msg.setTimeStamp(0.590808611983);
    msg.setSource(37367U);
    msg.setSourceEntity(243U);
    msg.setDestination(57176U);
    msg.setDestinationEntity(81U);
    msg.name.assign("QWPKATTDEOALJJJLPUVBXBAUBXIRXBLGPJLCMBQMSQDTAHYREWDAGSYHIEBFKZSOMQZWYQQHEONS");
    msg.state = 59U;

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
    msg.setTimeStamp(0.849075762777);
    msg.setSource(57097U);
    msg.setSourceEntity(245U);
    msg.setDestination(13664U);
    msg.setDestinationEntity(73U);
    msg.name.assign("UQKDIMJZLUKQDORTEESRKAMDJOVAGJABDPXXKXBGYYEUJMYULSVG");
    msg.value = 111U;

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
    msg.setTimeStamp(0.419375147221);
    msg.setSource(52728U);
    msg.setSourceEntity(211U);
    msg.setDestination(20433U);
    msg.setDestinationEntity(199U);
    msg.name.assign("HKVMRPXDUNUHJHICAOYDWXFZTPQSYADCXSUWJKTRMFMFIEKGCVPLXYIIFOMDLFTJCKIKGASQTIPBVQVYXHJRVVJUEGRYWIYVDOZNQZGQAHWGFCMPSRIEZCWQLAYFWLQMTAEONZTDHCLQBOFQBDUEAHGBRUPOGLZYEZRQUEBLXAELXIYENPUWBSAC");
    msg.value = 88U;

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
    msg.setTimeStamp(0.880346639048);
    msg.setSource(35078U);
    msg.setSourceEntity(252U);
    msg.setDestination(49181U);
    msg.setDestinationEntity(152U);
    msg.name.assign("DXJCXMOHSWTRKWLTEVORIDRQOKZGEITNLRWALLADETPUJNFSZNFZGA");
    msg.value = 212U;

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
    msg.setTimeStamp(0.818131995704);
    msg.setSource(34076U);
    msg.setSourceEntity(205U);
    msg.setDestination(41776U);
    msg.setDestinationEntity(157U);
    msg.name.assign("POSJZGXDNBVUVJXZWCTSEOHWGQPBLNXOCPSBMFAMPOCAOUUFJZPSYDRYDIQMVDYERRCFISMP");

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
    msg.setTimeStamp(0.156598550239);
    msg.setSource(16370U);
    msg.setSourceEntity(188U);
    msg.setDestination(61564U);
    msg.setDestinationEntity(189U);
    msg.name.assign("IAFUNJGBCGXXJMZMESYIDAUFTXRLSYGGMOWVVWJIOIJVWMNEIKSTOZUKUVREBVJBIHVHNRYPAQPJZDMJIWYDNTYPCVOQTPJQSXWDKPUEUOCCNPWVWTCJQXXNACNDBBYPAORLEQGCURFALYBTIXOSFZTSHHOZPQMNOGEIQZRMUAKDWLSVZRQKSFETRCJFBHYDYEBKNVMACQULMHWFUHRKBWGDQZGOZTLIAFKSDMHPXLZ");

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
    msg.setTimeStamp(0.949326470374);
    msg.setSource(4091U);
    msg.setSourceEntity(143U);
    msg.setDestination(63068U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DEAPTLDGBTNRMBTGIZKKCHXQRQILOZHIOCNKVKVPFLARNYXCRCYGLHWXENTXDDMUNZUEWRJOGBVGMGBJIBHNAOPGCZZTBLTSWQQKFIXAHMCAHOEKRTIAWPFKJXQSRXQZHEMUUNRVASYZWQUVJRBCQASMHUJJZYJIKUXWZLHFSJEEWPGSHVWMIPQPYNALVUUFNDPEYFXCSIZOKTLYLFMRYBEJTS");

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
    msg.setTimeStamp(0.975870736421);
    msg.setSource(47801U);
    msg.setSourceEntity(3U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(248U);
    msg.name.assign("CBVEUYNELCPWBQKVXMCMVMVZQUGWYHOPRLYPJVREGNDEFORSKUNRJMCTBICJBZVHPDDFUARC");
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
    msg.setTimeStamp(0.131050923355);
    msg.setSource(51225U);
    msg.setSourceEntity(208U);
    msg.setDestination(23257U);
    msg.setDestinationEntity(127U);
    msg.name.assign("LBMAXXLWEPECJCVWMWMXJOHHRFCGZDIWYORPJUNFDVXZMYHRSFSEV");
    msg.value = 117U;

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
    msg.setTimeStamp(0.928712304106);
    msg.setSource(41432U);
    msg.setSourceEntity(128U);
    msg.setDestination(39469U);
    msg.setDestinationEntity(45U);
    msg.name.assign("IASMLDUTEUXIMQBSFYXQPYNWICCNRPYCGZPFXPJSSFGRMYAJGMKFOIUUVC");
    msg.value = 91U;

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
    msg.setTimeStamp(0.187846433887);
    msg.setSource(65205U);
    msg.setSourceEntity(231U);
    msg.setDestination(48285U);
    msg.setDestinationEntity(121U);
    msg.id = 21U;
    msg.period = 1687514612U;
    msg.duty_cycle = 3737810294U;

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
    msg.setTimeStamp(0.704159842941);
    msg.setSource(8369U);
    msg.setSourceEntity(152U);
    msg.setDestination(42532U);
    msg.setDestinationEntity(174U);
    msg.id = 208U;
    msg.period = 4073328330U;
    msg.duty_cycle = 992360486U;

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
    msg.setTimeStamp(0.49343307213);
    msg.setSource(31238U);
    msg.setSourceEntity(141U);
    msg.setDestination(20579U);
    msg.setDestinationEntity(171U);
    msg.id = 199U;
    msg.period = 1089252435U;
    msg.duty_cycle = 1298438843U;

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
    msg.setTimeStamp(0.291177894661);
    msg.setSource(52714U);
    msg.setSourceEntity(67U);
    msg.setDestination(53599U);
    msg.setDestinationEntity(77U);
    msg.id = 121U;
    msg.period = 2926788860U;
    msg.duty_cycle = 41282757U;

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
    msg.setTimeStamp(0.638154010302);
    msg.setSource(52811U);
    msg.setSourceEntity(110U);
    msg.setDestination(34883U);
    msg.setDestinationEntity(179U);
    msg.id = 59U;
    msg.period = 3175445008U;
    msg.duty_cycle = 803653361U;

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
    msg.setTimeStamp(0.806893957725);
    msg.setSource(11745U);
    msg.setSourceEntity(160U);
    msg.setDestination(34165U);
    msg.setDestinationEntity(245U);
    msg.id = 67U;
    msg.period = 972430523U;
    msg.duty_cycle = 2113503568U;

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
    msg.setTimeStamp(0.760478358859);
    msg.setSource(64383U);
    msg.setSourceEntity(136U);
    msg.setDestination(7593U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.178166104441;
    msg.lon = 0.739332281813;
    msg.height = 0.1884375299;
    msg.x = 0.552355305896;
    msg.y = 0.327983769499;
    msg.z = 0.605448843754;
    msg.phi = 0.66708697242;
    msg.theta = 0.513166313328;
    msg.psi = 0.775395604113;
    msg.u = 0.188852053294;
    msg.v = 0.335935568427;
    msg.w = 0.291382088775;
    msg.vx = 0.59490203613;
    msg.vy = 0.925422213652;
    msg.vz = 0.65155565546;
    msg.p = 0.963960277015;
    msg.q = 0.629944364135;
    msg.r = 0.0293024526488;
    msg.depth = 0.32039360234;
    msg.alt = 0.5765619424;

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
    msg.setTimeStamp(0.731048873679);
    msg.setSource(25035U);
    msg.setSourceEntity(55U);
    msg.setDestination(24333U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.510389520754;
    msg.lon = 0.658401466787;
    msg.height = 0.326679336632;
    msg.x = 0.0842870882789;
    msg.y = 0.546811089246;
    msg.z = 0.63735899215;
    msg.phi = 0.429759480692;
    msg.theta = 0.370553964055;
    msg.psi = 0.463546272167;
    msg.u = 0.608878771938;
    msg.v = 0.77786403879;
    msg.w = 0.436975511704;
    msg.vx = 0.394267170775;
    msg.vy = 0.347486587114;
    msg.vz = 0.780084197629;
    msg.p = 0.427423766551;
    msg.q = 0.30530307924;
    msg.r = 0.153483363454;
    msg.depth = 0.0223347960934;
    msg.alt = 0.829013509805;

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
    msg.setTimeStamp(0.715042894998);
    msg.setSource(31345U);
    msg.setSourceEntity(211U);
    msg.setDestination(43260U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.440503774956;
    msg.lon = 0.371795972884;
    msg.height = 0.686163638793;
    msg.x = 0.600642030332;
    msg.y = 0.692778533796;
    msg.z = 0.25661552194;
    msg.phi = 0.799023672164;
    msg.theta = 0.0689193089637;
    msg.psi = 0.420873074625;
    msg.u = 0.390038291524;
    msg.v = 0.281029346814;
    msg.w = 0.291639547134;
    msg.vx = 0.715859034575;
    msg.vy = 0.408427306993;
    msg.vz = 0.756195103702;
    msg.p = 0.047458992773;
    msg.q = 0.40617630702;
    msg.r = 0.337358249508;
    msg.depth = 0.309669942443;
    msg.alt = 0.51606028316;

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
    msg.setTimeStamp(0.319716334104);
    msg.setSource(47938U);
    msg.setSourceEntity(70U);
    msg.setDestination(17872U);
    msg.setDestinationEntity(62U);
    msg.x = 0.0329064007893;
    msg.y = 0.723249143444;
    msg.z = 0.044030429834;

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
    msg.setTimeStamp(0.196658249602);
    msg.setSource(8770U);
    msg.setSourceEntity(211U);
    msg.setDestination(31426U);
    msg.setDestinationEntity(209U);
    msg.x = 0.389719490004;
    msg.y = 0.251814149027;
    msg.z = 0.856622191985;

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
    msg.setTimeStamp(0.473805554406);
    msg.setSource(14238U);
    msg.setSourceEntity(230U);
    msg.setDestination(41492U);
    msg.setDestinationEntity(244U);
    msg.x = 0.97643503532;
    msg.y = 0.876799924713;
    msg.z = 0.498071252666;

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
    msg.setTimeStamp(0.700139698723);
    msg.setSource(60581U);
    msg.setSourceEntity(85U);
    msg.setDestination(63490U);
    msg.setDestinationEntity(226U);
    msg.value = 0.52822646744;

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
    msg.setTimeStamp(0.436662664956);
    msg.setSource(2518U);
    msg.setSourceEntity(74U);
    msg.setDestination(7987U);
    msg.setDestinationEntity(13U);
    msg.value = 0.312037575368;

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
    msg.setTimeStamp(0.297983767588);
    msg.setSource(24129U);
    msg.setSourceEntity(80U);
    msg.setDestination(31164U);
    msg.setDestinationEntity(43U);
    msg.value = 0.298519737798;

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
    msg.setTimeStamp(0.964406294063);
    msg.setSource(47516U);
    msg.setSourceEntity(117U);
    msg.setDestination(58484U);
    msg.setDestinationEntity(114U);
    msg.value = 0.171918442504;

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
    msg.setTimeStamp(0.529743370999);
    msg.setSource(39036U);
    msg.setSourceEntity(182U);
    msg.setDestination(54700U);
    msg.setDestinationEntity(242U);
    msg.value = 0.730907966315;

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
    msg.setTimeStamp(0.245903960299);
    msg.setSource(12875U);
    msg.setSourceEntity(123U);
    msg.setDestination(54676U);
    msg.setDestinationEntity(30U);
    msg.value = 0.711361670045;

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
    msg.setTimeStamp(0.388301600226);
    msg.setSource(261U);
    msg.setSourceEntity(170U);
    msg.setDestination(10308U);
    msg.setDestinationEntity(197U);
    msg.x = 0.622136981979;
    msg.y = 0.726993974118;
    msg.z = 0.762108946304;
    msg.phi = 0.782871976699;
    msg.theta = 0.565313620805;
    msg.psi = 0.280792813124;
    msg.p = 0.61787308478;
    msg.q = 0.108322361847;
    msg.r = 0.891748572943;
    msg.u = 0.789316397238;
    msg.v = 0.472371527377;
    msg.w = 0.818524373298;
    msg.bias_psi = 0.976747758593;
    msg.bias_r = 0.834089966172;

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
    msg.setTimeStamp(0.228668505611);
    msg.setSource(17936U);
    msg.setSourceEntity(198U);
    msg.setDestination(7056U);
    msg.setDestinationEntity(253U);
    msg.x = 0.352202397966;
    msg.y = 0.346718458681;
    msg.z = 0.385434883014;
    msg.phi = 0.467561583517;
    msg.theta = 0.977588220907;
    msg.psi = 0.507411063976;
    msg.p = 0.0712044418668;
    msg.q = 0.476298099516;
    msg.r = 0.0604256458554;
    msg.u = 0.103322208581;
    msg.v = 0.422138136131;
    msg.w = 0.392012001198;
    msg.bias_psi = 0.818858874887;
    msg.bias_r = 0.15334451555;

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
    msg.setTimeStamp(0.610107509493);
    msg.setSource(14408U);
    msg.setSourceEntity(131U);
    msg.setDestination(2865U);
    msg.setDestinationEntity(50U);
    msg.x = 0.0138218792989;
    msg.y = 0.59368538116;
    msg.z = 0.446479698727;
    msg.phi = 0.495956892964;
    msg.theta = 0.186248632839;
    msg.psi = 0.0383232276533;
    msg.p = 0.914580145504;
    msg.q = 0.491121491389;
    msg.r = 0.795946793264;
    msg.u = 0.983112688752;
    msg.v = 0.667250382785;
    msg.w = 0.286320324274;
    msg.bias_psi = 0.193829484514;
    msg.bias_r = 0.543328512416;

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
    msg.setTimeStamp(0.230161063911);
    msg.setSource(40567U);
    msg.setSourceEntity(178U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(87U);
    msg.bias_psi = 0.0108841341844;
    msg.bias_r = 0.193742128385;
    msg.cog = 0.252172385782;
    msg.cyaw = 0.658692799745;
    msg.gps_rej_level = 0.988837186391;
    msg.lbl_rej_level = 0.879086775628;
    msg.custom_x = 0.702154863955;
    msg.custom_y = 0.0130471171813;
    msg.custom_z = 0.752195397945;

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
    msg.setTimeStamp(0.609070545112);
    msg.setSource(34080U);
    msg.setSourceEntity(115U);
    msg.setDestination(539U);
    msg.setDestinationEntity(84U);
    msg.bias_psi = 0.345122524421;
    msg.bias_r = 0.26215252316;
    msg.cog = 0.186971592498;
    msg.cyaw = 0.775527425943;
    msg.gps_rej_level = 0.657686731242;
    msg.lbl_rej_level = 0.927925259415;
    msg.custom_x = 0.368291717685;
    msg.custom_y = 0.563985057681;
    msg.custom_z = 0.00536549577119;

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
    msg.setTimeStamp(0.0394406688911);
    msg.setSource(48978U);
    msg.setSourceEntity(55U);
    msg.setDestination(53603U);
    msg.setDestinationEntity(230U);
    msg.bias_psi = 0.197756811214;
    msg.bias_r = 0.53241862942;
    msg.cog = 0.0615403668909;
    msg.cyaw = 0.208878044091;
    msg.gps_rej_level = 0.716764680475;
    msg.lbl_rej_level = 0.420765962943;
    msg.custom_x = 0.401653388454;
    msg.custom_y = 0.952231296962;
    msg.custom_z = 0.727885178824;

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
    msg.setTimeStamp(0.778499239189);
    msg.setSource(12754U);
    msg.setSourceEntity(177U);
    msg.setDestination(52729U);
    msg.setDestinationEntity(7U);
    msg.utc_time = 0.766075544285;
    msg.reason = 38U;

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
    msg.setTimeStamp(0.168478275116);
    msg.setSource(279U);
    msg.setSourceEntity(145U);
    msg.setDestination(27538U);
    msg.setDestinationEntity(198U);
    msg.utc_time = 0.446940961177;
    msg.reason = 193U;

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
    msg.setTimeStamp(0.946708655554);
    msg.setSource(25655U);
    msg.setSourceEntity(113U);
    msg.setDestination(62509U);
    msg.setDestinationEntity(37U);
    msg.utc_time = 0.891311649787;
    msg.reason = 104U;

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
    msg.setTimeStamp(0.756769882081);
    msg.setSource(22334U);
    msg.setSourceEntity(81U);
    msg.setDestination(1940U);
    msg.setDestinationEntity(72U);
    msg.id = 160U;
    msg.range = 0.12755566139;
    msg.acceptance = 1U;

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
    msg.setTimeStamp(0.18574333317);
    msg.setSource(1188U);
    msg.setSourceEntity(242U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(140U);
    msg.id = 230U;
    msg.range = 0.417749200324;
    msg.acceptance = 233U;

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
    msg.setTimeStamp(0.864860471688);
    msg.setSource(17287U);
    msg.setSourceEntity(213U);
    msg.setDestination(23517U);
    msg.setDestinationEntity(142U);
    msg.id = 254U;
    msg.range = 0.781617819749;
    msg.acceptance = 140U;

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
    msg.setTimeStamp(0.051825230505);
    msg.setSource(2099U);
    msg.setSourceEntity(79U);
    msg.setDestination(38784U);
    msg.setDestinationEntity(218U);
    msg.type = 163U;
    msg.reason = 0U;
    msg.value = 0.990028106332;
    msg.timestep = 0.71429149287;

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
    msg.setTimeStamp(0.745830433147);
    msg.setSource(61752U);
    msg.setSourceEntity(15U);
    msg.setDestination(8664U);
    msg.setDestinationEntity(190U);
    msg.type = 80U;
    msg.reason = 42U;
    msg.value = 0.779940618568;
    msg.timestep = 0.388552613176;

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
    msg.setTimeStamp(0.0403770656309);
    msg.setSource(6675U);
    msg.setSourceEntity(129U);
    msg.setDestination(65397U);
    msg.setDestinationEntity(56U);
    msg.type = 235U;
    msg.reason = 226U;
    msg.value = 0.0152060753509;
    msg.timestep = 0.825097775003;

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
    msg.setTimeStamp(0.874265521097);
    msg.setSource(52539U);
    msg.setSourceEntity(6U);
    msg.setDestination(3023U);
    msg.setDestinationEntity(214U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KHPKJAEXPRRESYUCZHYXHLTBMVBFOXPUMNYARKHOZZVTTWDDCKPRRTCDAZVZGAQUVJBIRHSCPFHXHLQWKDWACJZIOJONLUBPUWYJWGSUXJZMAFRSGVNIFFKYYBATKQRVQIVDVODSISQPSMENOWZNBVESIKKNPLFAPMFQWOMXEUZCNICUJETLIELLMAZTOUGQGXABDSJXGBQMYTTHNRFEQYWGHYMLVXLBHPCWCDJONIWYGECQKLDTFM");
    tmp_msg_0.lat = 0.239298393469;
    tmp_msg_0.lon = 0.304966634207;
    tmp_msg_0.depth = 0.762347206705;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 141U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.360493453604;
    msg.y = 0.281498557271;
    msg.var_x = 0.631395325459;
    msg.var_y = 0.853019250736;
    msg.distance = 0.912235661883;

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
    msg.setTimeStamp(0.783364199584);
    msg.setSource(35769U);
    msg.setSourceEntity(0U);
    msg.setDestination(38357U);
    msg.setDestinationEntity(71U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YATKQIBHNCFEZC");
    tmp_msg_0.lat = 0.101311900827;
    tmp_msg_0.lon = 0.0471921929681;
    tmp_msg_0.depth = 0.140659141988;
    tmp_msg_0.query_channel = 73U;
    tmp_msg_0.reply_channel = 181U;
    tmp_msg_0.transponder_delay = 49U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.141762685015;
    msg.y = 0.908518926654;
    msg.var_x = 0.997143133697;
    msg.var_y = 0.467730374219;
    msg.distance = 0.0125309387475;

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
    msg.setTimeStamp(0.5662823684);
    msg.setSource(45196U);
    msg.setSourceEntity(167U);
    msg.setDestination(37502U);
    msg.setDestinationEntity(235U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RZCMMGAKIHSUNJAENUODZWRONZKWSKNUBSUFVYCXJQDZIDEYDHTSLREOORSZYSGYRJWVGVASIELAPEKOEJPXHRHSXFNLALKPCJWBDRKTIYQCNPDPXDFJYZLGPTCXCXQWODUYXCLTWTQUSTBHBTJGWTSVVZKMLBYOFFICPDGQMUQMNWRZZQBLPEHPGQGLMQKHXTHJFBAHTOIIAKBUGGNLFCOVCVFWEJIMRHVWUVXANYBKUDJVARBMFMAFQ");
    tmp_msg_0.lat = 0.32374638705;
    tmp_msg_0.lon = 0.326170621594;
    tmp_msg_0.depth = 0.591465174101;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 128U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.724157604014;
    msg.y = 0.0484723321209;
    msg.var_x = 0.549034734512;
    msg.var_y = 0.66599375947;
    msg.distance = 0.301384635623;

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
    msg.setTimeStamp(0.672182673139);
    msg.setSource(44728U);
    msg.setSourceEntity(173U);
    msg.setDestination(15610U);
    msg.setDestinationEntity(94U);
    msg.state = 65U;

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
    msg.setTimeStamp(0.0757614084107);
    msg.setSource(19231U);
    msg.setSourceEntity(196U);
    msg.setDestination(43174U);
    msg.setDestinationEntity(146U);
    msg.state = 217U;

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
    msg.setTimeStamp(0.164778476413);
    msg.setSource(6985U);
    msg.setSourceEntity(175U);
    msg.setDestination(62900U);
    msg.setDestinationEntity(238U);
    msg.state = 153U;

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
    msg.setTimeStamp(0.165208656812);
    msg.setSource(62371U);
    msg.setSourceEntity(131U);
    msg.setDestination(55328U);
    msg.setDestinationEntity(86U);
    msg.x = 0.98445529655;
    msg.y = 0.242297668826;
    msg.z = 0.58142011881;

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
    msg.setTimeStamp(0.980212733654);
    msg.setSource(23335U);
    msg.setSourceEntity(9U);
    msg.setDestination(37617U);
    msg.setDestinationEntity(241U);
    msg.x = 0.414388671666;
    msg.y = 0.363485775786;
    msg.z = 0.097644867015;

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
    msg.setTimeStamp(0.84030604805);
    msg.setSource(21373U);
    msg.setSourceEntity(17U);
    msg.setDestination(17896U);
    msg.setDestinationEntity(62U);
    msg.x = 0.895582119334;
    msg.y = 0.596673059652;
    msg.z = 0.21676086012;

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
    msg.setTimeStamp(0.648627623856);
    msg.setSource(27091U);
    msg.setSourceEntity(210U);
    msg.setDestination(45461U);
    msg.setDestinationEntity(171U);
    msg.va = 0.443044880721;
    msg.aoa = 0.190219090953;
    msg.ssa = 0.920958374219;

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
    msg.setTimeStamp(0.887881498123);
    msg.setSource(36737U);
    msg.setSourceEntity(92U);
    msg.setDestination(50339U);
    msg.setDestinationEntity(238U);
    msg.va = 0.192495396015;
    msg.aoa = 0.579263486426;
    msg.ssa = 0.433245168358;

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
    msg.setTimeStamp(0.108557653259);
    msg.setSource(42070U);
    msg.setSourceEntity(66U);
    msg.setDestination(62339U);
    msg.setDestinationEntity(248U);
    msg.va = 0.133185405604;
    msg.aoa = 0.440692011761;
    msg.ssa = 0.580379376452;

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
    msg.setTimeStamp(0.963510052514);
    msg.setSource(35618U);
    msg.setSourceEntity(55U);
    msg.setDestination(64689U);
    msg.setDestinationEntity(147U);
    msg.value = 0.475892239295;
    msg.off = 0.682999372272;

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
    msg.setTimeStamp(0.577364172804);
    msg.setSource(1519U);
    msg.setSourceEntity(170U);
    msg.setDestination(18753U);
    msg.setDestinationEntity(181U);
    msg.value = 0.943373363232;
    msg.off = 0.416560146319;

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
    msg.setTimeStamp(0.162717566787);
    msg.setSource(34156U);
    msg.setSourceEntity(77U);
    msg.setDestination(38103U);
    msg.setDestinationEntity(82U);
    msg.value = 0.370840502003;
    msg.off = 0.508869487039;

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
    msg.setTimeStamp(0.565967969423);
    msg.setSource(41745U);
    msg.setSourceEntity(133U);
    msg.setDestination(36113U);
    msg.setDestinationEntity(164U);
    msg.value = 0.861060338086;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.645255268282);
    msg.setSource(62453U);
    msg.setSourceEntity(1U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(34U);
    msg.value = 0.0123905027392;
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
    msg.setTimeStamp(0.992515953763);
    msg.setSource(32155U);
    msg.setSourceEntity(183U);
    msg.setDestination(24910U);
    msg.setDestinationEntity(204U);
    msg.value = 0.363434107924;
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
    msg.setTimeStamp(0.646598588563);
    msg.setSource(36997U);
    msg.setSourceEntity(22U);
    msg.setDestination(14890U);
    msg.setDestinationEntity(178U);
    msg.value = 0.342225239243;
    msg.speed_units = 109U;

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
    msg.setTimeStamp(0.981219072596);
    msg.setSource(38142U);
    msg.setSourceEntity(166U);
    msg.setDestination(46336U);
    msg.setDestinationEntity(60U);
    msg.value = 0.529910931836;
    msg.speed_units = 197U;

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
    msg.setTimeStamp(0.896612567807);
    msg.setSource(34221U);
    msg.setSourceEntity(134U);
    msg.setDestination(53407U);
    msg.setDestinationEntity(70U);
    msg.value = 0.739765140764;
    msg.speed_units = 85U;

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
    msg.setTimeStamp(0.329542416702);
    msg.setSource(13654U);
    msg.setSourceEntity(239U);
    msg.setDestination(36362U);
    msg.setDestinationEntity(165U);
    msg.value = 0.408389802644;

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
    msg.setTimeStamp(0.81968977189);
    msg.setSource(47179U);
    msg.setSourceEntity(99U);
    msg.setDestination(31293U);
    msg.setDestinationEntity(244U);
    msg.value = 0.076809618648;

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
    msg.setTimeStamp(0.279505572466);
    msg.setSource(4359U);
    msg.setSourceEntity(218U);
    msg.setDestination(33040U);
    msg.setDestinationEntity(198U);
    msg.value = 0.324167155566;

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
    msg.setTimeStamp(0.416949588097);
    msg.setSource(27460U);
    msg.setSourceEntity(237U);
    msg.setDestination(38924U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0550621421969;

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
    msg.setTimeStamp(0.270723065834);
    msg.setSource(5047U);
    msg.setSourceEntity(9U);
    msg.setDestination(14745U);
    msg.setDestinationEntity(146U);
    msg.value = 0.90418440616;

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
    msg.setTimeStamp(0.697447959818);
    msg.setSource(35115U);
    msg.setSourceEntity(38U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(214U);
    msg.value = 0.475586819357;

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
    msg.setTimeStamp(0.771502151148);
    msg.setSource(203U);
    msg.setSourceEntity(45U);
    msg.setDestination(4530U);
    msg.setDestinationEntity(9U);
    msg.value = 0.571676072738;

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
    msg.setTimeStamp(0.178296698576);
    msg.setSource(62785U);
    msg.setSourceEntity(116U);
    msg.setDestination(27463U);
    msg.setDestinationEntity(49U);
    msg.value = 0.768124262908;

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
    msg.setTimeStamp(0.40719475313);
    msg.setSource(14410U);
    msg.setSourceEntity(228U);
    msg.setDestination(14812U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6788340799;

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
    msg.setTimeStamp(0.684046971727);
    msg.setSource(3280U);
    msg.setSourceEntity(54U);
    msg.setDestination(3527U);
    msg.setDestinationEntity(9U);
    msg.path_ref = 3983390965U;
    msg.start_lat = 0.322026685484;
    msg.start_lon = 0.306541204429;
    msg.start_z = 0.305365534578;
    msg.start_z_units = 127U;
    msg.end_lat = 0.118548434336;
    msg.end_lon = 0.883184556393;
    msg.end_z = 0.0732424812484;
    msg.end_z_units = 14U;
    msg.speed = 0.859321321476;
    msg.speed_units = 214U;
    msg.lradius = 0.658377297395;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.984613366804);
    msg.setSource(13424U);
    msg.setSourceEntity(94U);
    msg.setDestination(46430U);
    msg.setDestinationEntity(121U);
    msg.path_ref = 295432888U;
    msg.start_lat = 0.190108344984;
    msg.start_lon = 0.531667166741;
    msg.start_z = 0.0616527443384;
    msg.start_z_units = 13U;
    msg.end_lat = 0.341889809605;
    msg.end_lon = 0.499188122418;
    msg.end_z = 0.578588994877;
    msg.end_z_units = 247U;
    msg.speed = 0.686017718218;
    msg.speed_units = 122U;
    msg.lradius = 0.811652405809;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.680757788554);
    msg.setSource(5327U);
    msg.setSourceEntity(147U);
    msg.setDestination(39727U);
    msg.setDestinationEntity(185U);
    msg.path_ref = 280122916U;
    msg.start_lat = 0.704492165985;
    msg.start_lon = 0.443184096956;
    msg.start_z = 0.393064133244;
    msg.start_z_units = 218U;
    msg.end_lat = 0.908281519197;
    msg.end_lon = 0.814374848055;
    msg.end_z = 0.989833735782;
    msg.end_z_units = 160U;
    msg.speed = 0.255512348399;
    msg.speed_units = 119U;
    msg.lradius = 0.0338434568945;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.920442147555);
    msg.setSource(65269U);
    msg.setSourceEntity(145U);
    msg.setDestination(35265U);
    msg.setDestinationEntity(51U);
    msg.x = 0.857244460365;
    msg.y = 0.298028978221;
    msg.z = 0.673728231001;
    msg.k = 0.939112699035;
    msg.m = 0.0808258258697;
    msg.n = 0.080941573116;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.416458299304);
    msg.setSource(13487U);
    msg.setSourceEntity(11U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(131U);
    msg.x = 0.233175702383;
    msg.y = 0.840867279186;
    msg.z = 0.462173086131;
    msg.k = 0.375881433685;
    msg.m = 0.410608690415;
    msg.n = 0.252455624562;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.122012491874);
    msg.setSource(15046U);
    msg.setSourceEntity(114U);
    msg.setDestination(5619U);
    msg.setDestinationEntity(59U);
    msg.x = 0.279193957836;
    msg.y = 0.833424835632;
    msg.z = 0.0594093641201;
    msg.k = 0.620782542977;
    msg.m = 0.621444097296;
    msg.n = 0.926804152694;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.890222132826);
    msg.setSource(54564U);
    msg.setSourceEntity(0U);
    msg.setDestination(23902U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0146100000637;

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
    msg.setTimeStamp(0.865251309591);
    msg.setSource(45092U);
    msg.setSourceEntity(13U);
    msg.setDestination(40952U);
    msg.setDestinationEntity(28U);
    msg.value = 0.90432946032;

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
    msg.setTimeStamp(0.32887592717);
    msg.setSource(1789U);
    msg.setSourceEntity(229U);
    msg.setDestination(14241U);
    msg.setDestinationEntity(244U);
    msg.value = 0.333491937192;

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
    msg.setTimeStamp(0.710382505027);
    msg.setSource(53076U);
    msg.setSourceEntity(45U);
    msg.setDestination(62737U);
    msg.setDestinationEntity(45U);
    msg.u = 0.228232672974;
    msg.v = 0.651389085357;
    msg.w = 0.705423647496;
    msg.p = 0.205627612109;
    msg.q = 0.94359351703;
    msg.r = 0.236926775037;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.759716115763);
    msg.setSource(47215U);
    msg.setSourceEntity(210U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(189U);
    msg.u = 0.743055464408;
    msg.v = 0.786186034136;
    msg.w = 0.214051593477;
    msg.p = 0.727781045371;
    msg.q = 0.608388614972;
    msg.r = 0.0480321031337;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.348207939684);
    msg.setSource(47482U);
    msg.setSourceEntity(58U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(154U);
    msg.u = 0.356919926378;
    msg.v = 0.393921716417;
    msg.w = 0.511623080822;
    msg.p = 0.653900979725;
    msg.q = 0.796474227228;
    msg.r = 0.560623924919;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.708634331276);
    msg.setSource(9540U);
    msg.setSourceEntity(128U);
    msg.setDestination(49111U);
    msg.setDestinationEntity(53U);
    msg.path_ref = 2896106813U;
    msg.start_lat = 0.128488099505;
    msg.start_lon = 0.400258288166;
    msg.start_z = 0.4697453531;
    msg.start_z_units = 179U;
    msg.end_lat = 0.945707082293;
    msg.end_lon = 0.178074198705;
    msg.end_z = 0.794634491829;
    msg.end_z_units = 72U;
    msg.lradius = 0.37647036743;
    msg.flags = 64U;
    msg.x = 0.3795555913;
    msg.y = 0.371226645347;
    msg.z = 0.403814618908;
    msg.vx = 0.129377152897;
    msg.vy = 0.842532913685;
    msg.vz = 0.577235986954;
    msg.course_error = 0.491797568527;
    msg.eta = 40549U;

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
    msg.setTimeStamp(0.328016950819);
    msg.setSource(26913U);
    msg.setSourceEntity(190U);
    msg.setDestination(19700U);
    msg.setDestinationEntity(219U);
    msg.path_ref = 3095962251U;
    msg.start_lat = 0.452723285108;
    msg.start_lon = 0.952482683807;
    msg.start_z = 0.903730104623;
    msg.start_z_units = 1U;
    msg.end_lat = 0.0734847264989;
    msg.end_lon = 0.0644625782025;
    msg.end_z = 0.105480275802;
    msg.end_z_units = 233U;
    msg.lradius = 0.240977435019;
    msg.flags = 18U;
    msg.x = 0.0677593901016;
    msg.y = 0.251256268106;
    msg.z = 0.850045203712;
    msg.vx = 0.0670399113044;
    msg.vy = 0.228659667026;
    msg.vz = 0.178363642289;
    msg.course_error = 0.0260538502299;
    msg.eta = 52U;

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
    msg.setTimeStamp(0.140670681471);
    msg.setSource(30927U);
    msg.setSourceEntity(64U);
    msg.setDestination(32517U);
    msg.setDestinationEntity(166U);
    msg.path_ref = 3932105290U;
    msg.start_lat = 0.454333876599;
    msg.start_lon = 0.787421769343;
    msg.start_z = 0.285987076128;
    msg.start_z_units = 188U;
    msg.end_lat = 0.633758599125;
    msg.end_lon = 0.30051351767;
    msg.end_z = 0.346712917871;
    msg.end_z_units = 218U;
    msg.lradius = 0.15886621242;
    msg.flags = 87U;
    msg.x = 0.14578573926;
    msg.y = 0.253629507046;
    msg.z = 0.472154360544;
    msg.vx = 0.142751814497;
    msg.vy = 0.35785512806;
    msg.vz = 0.479237893037;
    msg.course_error = 0.714382165527;
    msg.eta = 39536U;

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
    msg.setTimeStamp(0.461765670636);
    msg.setSource(13116U);
    msg.setSourceEntity(58U);
    msg.setDestination(7256U);
    msg.setDestinationEntity(25U);
    msg.k = 0.996548119671;
    msg.m = 0.0239335483209;
    msg.n = 0.532749968573;

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
    msg.setTimeStamp(0.216218398301);
    msg.setSource(35292U);
    msg.setSourceEntity(123U);
    msg.setDestination(8461U);
    msg.setDestinationEntity(89U);
    msg.k = 0.591627686338;
    msg.m = 0.439670623451;
    msg.n = 0.280043146193;

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
    msg.setTimeStamp(0.113733008197);
    msg.setSource(37464U);
    msg.setSourceEntity(85U);
    msg.setDestination(46005U);
    msg.setDestinationEntity(155U);
    msg.k = 0.770450519516;
    msg.m = 0.662655483389;
    msg.n = 0.901493098688;

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
    msg.setTimeStamp(0.694848941873);
    msg.setSource(35517U);
    msg.setSourceEntity(191U);
    msg.setDestination(9884U);
    msg.setDestinationEntity(14U);
    msg.p = 0.214075522179;
    msg.i = 0.689217614209;
    msg.d = 0.91293544644;
    msg.a = 0.611373946936;

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
    msg.setTimeStamp(0.992947977724);
    msg.setSource(39112U);
    msg.setSourceEntity(239U);
    msg.setDestination(60664U);
    msg.setDestinationEntity(40U);
    msg.p = 0.878577140724;
    msg.i = 0.0943957948853;
    msg.d = 0.996899015146;
    msg.a = 0.406653087482;

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
    msg.setTimeStamp(0.743682755311);
    msg.setSource(21500U);
    msg.setSourceEntity(161U);
    msg.setDestination(11065U);
    msg.setDestinationEntity(140U);
    msg.p = 0.0517313880948;
    msg.i = 0.479826982765;
    msg.d = 0.611730094531;
    msg.a = 0.99447546606;

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
    msg.setTimeStamp(0.54145618641);
    msg.setSource(41468U);
    msg.setSourceEntity(9U);
    msg.setDestination(32998U);
    msg.setDestinationEntity(83U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.796763883306);
    msg.setSource(51009U);
    msg.setSourceEntity(161U);
    msg.setDestination(19564U);
    msg.setDestinationEntity(103U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.0900801426792);
    msg.setSource(11066U);
    msg.setSourceEntity(248U);
    msg.setDestination(38576U);
    msg.setDestinationEntity(191U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.660924963239);
    msg.setSource(14360U);
    msg.setSourceEntity(22U);
    msg.setDestination(11344U);
    msg.setDestinationEntity(88U);
    msg.x = 0.724166441616;
    msg.y = 0.962971152677;
    msg.z = 0.982093095295;
    msg.vx = 0.884842027527;
    msg.vy = 0.279104434879;
    msg.vz = 0.969457979225;
    msg.ax = 0.799611820123;
    msg.ay = 0.837825069791;
    msg.az = 0.92453487626;
    msg.flags = 41342U;

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
    msg.setTimeStamp(0.0394805589712);
    msg.setSource(2306U);
    msg.setSourceEntity(153U);
    msg.setDestination(10953U);
    msg.setDestinationEntity(152U);
    msg.x = 0.130028318829;
    msg.y = 0.529757116996;
    msg.z = 0.189633462199;
    msg.vx = 0.0838971192304;
    msg.vy = 0.235851605639;
    msg.vz = 0.278892060497;
    msg.ax = 0.754894706281;
    msg.ay = 0.39434492463;
    msg.az = 0.378067626283;
    msg.flags = 24808U;

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
    msg.setTimeStamp(0.147776982767);
    msg.setSource(10444U);
    msg.setSourceEntity(77U);
    msg.setDestination(43883U);
    msg.setDestinationEntity(246U);
    msg.x = 0.148888215047;
    msg.y = 0.957188145655;
    msg.z = 0.920699982388;
    msg.vx = 0.719539407143;
    msg.vy = 0.984008242285;
    msg.vz = 0.196533698766;
    msg.ax = 0.532394133166;
    msg.ay = 0.433691766462;
    msg.az = 0.253160594865;
    msg.flags = 32909U;

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
    msg.setTimeStamp(0.0635981004668);
    msg.setSource(48829U);
    msg.setSourceEntity(144U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(164U);
    msg.value = 0.179758517915;

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
    msg.setTimeStamp(0.0898233815124);
    msg.setSource(18403U);
    msg.setSourceEntity(123U);
    msg.setDestination(38077U);
    msg.setDestinationEntity(19U);
    msg.value = 0.286024822202;

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
    msg.setTimeStamp(0.175783185358);
    msg.setSource(8300U);
    msg.setSourceEntity(42U);
    msg.setDestination(49239U);
    msg.setDestinationEntity(17U);
    msg.value = 0.667784475379;

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
    msg.setTimeStamp(0.545926379977);
    msg.setSource(14476U);
    msg.setSourceEntity(210U);
    msg.setDestination(51391U);
    msg.setDestinationEntity(56U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3336107495U;
    tmp_msg_0.start_lat = 0.429997039811;
    tmp_msg_0.start_lon = 0.184689655892;
    tmp_msg_0.start_z = 0.356695720015;
    tmp_msg_0.start_z_units = 10U;
    tmp_msg_0.end_lat = 0.41865498582;
    tmp_msg_0.end_lon = 0.453338861659;
    tmp_msg_0.end_z = 0.509102331776;
    tmp_msg_0.end_z_units = 74U;
    tmp_msg_0.speed = 0.20079432161;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.lradius = 0.226287151685;
    tmp_msg_0.flags = 155U;
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
    msg.setTimeStamp(0.163788084759);
    msg.setSource(15760U);
    msg.setSourceEntity(248U);
    msg.setDestination(29359U);
    msg.setDestinationEntity(73U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2996893210U;
    tmp_msg_0.start_lat = 0.442831863165;
    tmp_msg_0.start_lon = 0.837104463272;
    tmp_msg_0.start_z = 0.254548109075;
    tmp_msg_0.start_z_units = 138U;
    tmp_msg_0.end_lat = 0.868515408727;
    tmp_msg_0.end_lon = 0.323260875952;
    tmp_msg_0.end_z = 0.408959870112;
    tmp_msg_0.end_z_units = 156U;
    tmp_msg_0.speed = 0.00570731263494;
    tmp_msg_0.speed_units = 117U;
    tmp_msg_0.lradius = 0.50689038904;
    tmp_msg_0.flags = 80U;
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
    msg.setTimeStamp(0.347367984603);
    msg.setSource(31770U);
    msg.setSourceEntity(211U);
    msg.setDestination(51742U);
    msg.setDestinationEntity(197U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 453947735U;
    tmp_msg_0.start_lat = 0.996044180386;
    tmp_msg_0.start_lon = 0.588597086793;
    tmp_msg_0.start_z = 0.00666069921442;
    tmp_msg_0.start_z_units = 15U;
    tmp_msg_0.end_lat = 0.468447747043;
    tmp_msg_0.end_lon = 0.900449076238;
    tmp_msg_0.end_z = 0.0259906235117;
    tmp_msg_0.end_z_units = 131U;
    tmp_msg_0.speed = 0.126575335866;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.lradius = 0.889836609236;
    tmp_msg_0.flags = 14U;
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
    msg.setTimeStamp(0.138487527121);
    msg.setSource(65142U);
    msg.setSourceEntity(109U);
    msg.setDestination(8775U);
    msg.setDestinationEntity(131U);
    msg.timeout = 31717U;
    msg.lat = 0.960270533287;
    msg.lon = 0.0765314678183;
    msg.z = 0.709246434235;
    msg.z_units = 97U;
    msg.speed = 0.30836547679;
    msg.speed_units = 240U;
    msg.roll = 0.761831106531;
    msg.pitch = 0.330434274388;
    msg.yaw = 0.114371760085;
    msg.custom.assign("NEFHKZQGVOGYFBRMUAWMPXPAXEQESGIQYEPLRAXKCXOOBGVZAYEVCEDMJVKVGEJHZMHMCCODHTGVMTNQMIRUELXFYSJQDBIZZSSIRLBUXWWKUJZCXTAWDDRGAJTPMIUIJGNTZVNUQYFWVQJJDDYOQARBWZQFOKEXWRDHBFKFJUTNILVINLMATLUOZPLNWVCHTXKPQUFRKYAOSOHCOPYJLHZKBYSISWBHNXMBFL");

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
    msg.setTimeStamp(0.665640074517);
    msg.setSource(5566U);
    msg.setSourceEntity(114U);
    msg.setDestination(48209U);
    msg.setDestinationEntity(1U);
    msg.timeout = 12482U;
    msg.lat = 0.0921669492312;
    msg.lon = 0.115317166919;
    msg.z = 0.40999894437;
    msg.z_units = 52U;
    msg.speed = 0.942442940953;
    msg.speed_units = 130U;
    msg.roll = 0.327061800108;
    msg.pitch = 0.360335750305;
    msg.yaw = 0.125243581129;
    msg.custom.assign("GVDPZWEWONFVOQYVSPXTQGGMGCXMVTBAWXAIQGKHTUMFAPPIRHAISIPFOZDHCBYCEEUKDUDZWWAHIODMABPUWCRJYNUKFFYMXKQTUSFNBMOLLSDUNLRBBAYECTJPPGHFGJIDDQELXLCGHZEMCAKAIBFTRZMGERZIHCWRTNVIRYTYSYLTINLXEJOSZUKGUOQYNLJMVFJYSNOCBWHZSWNKTDZSAKJRXJXHLRQHQMFWDEVLVEKNZBR");

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
    msg.setTimeStamp(0.980820630313);
    msg.setSource(5953U);
    msg.setSourceEntity(210U);
    msg.setDestination(60119U);
    msg.setDestinationEntity(209U);
    msg.timeout = 45710U;
    msg.lat = 0.611895661987;
    msg.lon = 0.797984844168;
    msg.z = 0.809302984992;
    msg.z_units = 166U;
    msg.speed = 0.891493171486;
    msg.speed_units = 77U;
    msg.roll = 0.881634746794;
    msg.pitch = 0.705591178439;
    msg.yaw = 0.352553283614;
    msg.custom.assign("MXLWTONXEOUZQBGQCAIFAXXEYEXGVCKRRGFZWQQKNIUJWGNYGBOIHJOWLRJPLTGOSQCZZJISFWTBMRIDCGKNO");

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
    msg.setTimeStamp(0.14435403961);
    msg.setSource(42408U);
    msg.setSourceEntity(246U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(132U);
    msg.timeout = 65276U;
    msg.lat = 0.69904984885;
    msg.lon = 0.658101447792;
    msg.z = 0.604533145187;
    msg.z_units = 134U;
    msg.speed = 0.919465786022;
    msg.speed_units = 114U;
    msg.duration = 40974U;
    msg.radius = 0.609059305448;
    msg.flags = 186U;
    msg.custom.assign("KHGUEGGTWXNOYKWWUPGCMDUQKNSQXXNXHASPEDKCIKBWFAQRYQZGYUTUFZSMQXIGETPHPAYROMBHCESNVTNQZQRFQJOSLPEEXFJWEAAKROYFVMIHTHYSOHCCXDAJSLMJXIVSZAMWQZFGLOO");

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
    msg.setTimeStamp(0.116723728566);
    msg.setSource(63342U);
    msg.setSourceEntity(189U);
    msg.setDestination(54881U);
    msg.setDestinationEntity(152U);
    msg.timeout = 9064U;
    msg.lat = 0.902305831057;
    msg.lon = 0.553892632754;
    msg.z = 0.098034898672;
    msg.z_units = 215U;
    msg.speed = 0.119566413964;
    msg.speed_units = 188U;
    msg.duration = 31363U;
    msg.radius = 0.877307916907;
    msg.flags = 27U;
    msg.custom.assign("ADXBYYJEUAEAZPAAEGPTLNOZXPVRLYGPGNVXTOUJCSUHCWCJWSOFWKZVNUIWMDCDGEBQUQLDFZFMKZBSBLOMNVHPRNYCKXUVGOVBXIETHKCZWPMZNUIXBQWOFCDFHKDJRESTTTZYMPFGCPIKUDAXQMOAWGWTQAHLCSRSNBQPMLXBILUYDHRBYYHQJAGSEUQOIDKIVVXQGNXOLRIDNZWOWSCVQHTPFIYFELMNJJKJZGEREFLKK");

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
    msg.setTimeStamp(0.749974806197);
    msg.setSource(20494U);
    msg.setSourceEntity(128U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(90U);
    msg.timeout = 9755U;
    msg.lat = 0.978150383524;
    msg.lon = 0.835383103436;
    msg.z = 0.620502537538;
    msg.z_units = 253U;
    msg.speed = 0.971712108953;
    msg.speed_units = 84U;
    msg.duration = 17793U;
    msg.radius = 0.341163487194;
    msg.flags = 233U;
    msg.custom.assign("JKVGIZKBQRMMPGFIPQIAHJAPUDLPIGJOSYNGTPXVDXJCDHCOYCBCUTTGNYADNRQAHCRFOGBAJUTNZZRPQXLEOCOXZXCCBHYUGKXILQZIFDFKENKTVXOVWWXBQGHSTRUKRSPLSZBGPWESXZUMLCQMOCWWPZJTEOQTLDUHDYRWSVNPSFFJFJFBWYVBMLDHQNJNBVE");

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
    msg.setTimeStamp(0.722566830565);
    msg.setSource(59328U);
    msg.setSourceEntity(30U);
    msg.setDestination(14115U);
    msg.setDestinationEntity(69U);
    msg.custom.assign("NHYNFUPVWTWZQSIAESAQPVCTMKOTRXTDQHOMCSLBXFSXLXUBVNYWKSVKWCPMUBFXKJVERFKGXFAVULUJQPAWZSPCEAIYQZAMNMLBNHEQGPNIRYBCHIEZZDPOIDTXRZEUJJY");

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
    msg.setTimeStamp(0.306729164391);
    msg.setSource(1190U);
    msg.setSourceEntity(91U);
    msg.setDestination(55557U);
    msg.setDestinationEntity(162U);
    msg.custom.assign("AKBATKCDJCTVIRUFKXFDEPPGLIFVLJEPQQQVWIYZUHDMQOKYQETNVOCCOTJRLMFMYHYTXHCRAGBHDPQOVZAYEZNUSJSHCGLDLRIWKSBPPVOXJDQXGEKMMUTPGZNRRNYCIWOGXXNHHMUYSFDFAEFLFABDQWBZCJPVEIHZFAUUDHCIBVBUTFTRHOKKUEQIPCIROAV");

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
    msg.setTimeStamp(0.410327379096);
    msg.setSource(48545U);
    msg.setSourceEntity(9U);
    msg.setDestination(31878U);
    msg.setDestinationEntity(89U);
    msg.custom.assign("QHHEWUNPAVEKNJTZEZSDZEHSGOIHWYTYFWEZEGFUGMQKFATZWIXPFCRDDANNABYBCCFQBINAWCATRYNOLWLZRVJGVXQONHOMUTLAMSIFEKLXGWCWLDRDUVULVOTQSXMYEIIKAO");

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
    msg.setTimeStamp(0.948245366521);
    msg.setSource(42725U);
    msg.setSourceEntity(45U);
    msg.setDestination(40463U);
    msg.setDestinationEntity(152U);
    msg.timeout = 19924U;
    msg.lat = 0.0647678278321;
    msg.lon = 0.170988210419;
    msg.z = 0.264040970152;
    msg.z_units = 182U;
    msg.duration = 38712U;
    msg.speed = 0.555692452354;
    msg.speed_units = 18U;
    msg.type = 45U;
    msg.radius = 0.131626370782;
    msg.length = 0.1012289028;
    msg.bearing = 0.302919701645;
    msg.direction = 237U;
    msg.custom.assign("TFXRLZQAADTJCASPYNDEMPVBWKZYBFTOZWDIWDLEELVXFPXPGBTGIHFPUOQMOVZGCOSNBWWBMCNPKAFGLXRXKVEZJSSPEBKIMOUYZECHVNJYUQMPWZCZLSUUGVUJTORYTYVGISRHRTHHLKJLXMMRPTXSIEAJEE");

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
    msg.setTimeStamp(0.449344473502);
    msg.setSource(32916U);
    msg.setSourceEntity(198U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(206U);
    msg.timeout = 10686U;
    msg.lat = 0.148922441091;
    msg.lon = 0.216423748443;
    msg.z = 0.401897878738;
    msg.z_units = 220U;
    msg.duration = 123U;
    msg.speed = 0.176806987772;
    msg.speed_units = 127U;
    msg.type = 212U;
    msg.radius = 0.604243903031;
    msg.length = 0.215182732063;
    msg.bearing = 0.640664440261;
    msg.direction = 172U;
    msg.custom.assign("JTMUNRIOXPAWGTWNHFMJ");

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
    msg.setTimeStamp(0.543910445739);
    msg.setSource(56362U);
    msg.setSourceEntity(188U);
    msg.setDestination(52945U);
    msg.setDestinationEntity(68U);
    msg.timeout = 11025U;
    msg.lat = 0.591425627064;
    msg.lon = 0.761106286442;
    msg.z = 0.14953930724;
    msg.z_units = 241U;
    msg.duration = 9914U;
    msg.speed = 0.798022898888;
    msg.speed_units = 12U;
    msg.type = 152U;
    msg.radius = 0.417505085959;
    msg.length = 0.531762392822;
    msg.bearing = 0.684694408856;
    msg.direction = 171U;
    msg.custom.assign("DCDEOYMFRWTSKWVQVAIFZHDBQGGEYJPFCZDMUZQJIOUCOGUMYQJTLLTRNJKUYGZGLXDQLA");

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
    msg.setTimeStamp(0.642615711882);
    msg.setSource(37402U);
    msg.setSourceEntity(102U);
    msg.setDestination(8261U);
    msg.setDestinationEntity(21U);
    msg.duration = 36577U;
    msg.custom.assign("HSTUIZICDNUGQZGHGADDKIFXJZPFRMMMBDFFHLCMTOCSYYKILHTQXYQCOWFAFVAWRNCCPYGEOLNAWLMTOIDHLYDMLBSWUCKXIQVKPYXADNAQHSQIB");

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
    msg.setTimeStamp(0.185265196832);
    msg.setSource(52976U);
    msg.setSourceEntity(236U);
    msg.setDestination(15220U);
    msg.setDestinationEntity(142U);
    msg.duration = 5945U;
    msg.custom.assign("TIHASLPKJXWYMMCRUJSWAZYOHQWGLAYDTUSSABPKANXDTWCLOKKEUXXOVYMSKPSGIZNXITOBINROEEZZUGROL");

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
    msg.setTimeStamp(0.85082468126);
    msg.setSource(22642U);
    msg.setSourceEntity(230U);
    msg.setDestination(56523U);
    msg.setDestinationEntity(154U);
    msg.duration = 27541U;
    msg.custom.assign("DVTOTWOUSMCDQTKBVGVGNWEPJTEYIKOCJDBPVBQIAMUMYZBKZEZSXQYHJABOWXCUMKCPNOXYRISNGVRNQADBFGCAFYZIRQXMLJBDEQWDMXQHSNESCRLIZEJQSUBWPP");

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
    msg.setTimeStamp(0.190811921141);
    msg.setSource(62668U);
    msg.setSourceEntity(199U);
    msg.setDestination(51355U);
    msg.setDestinationEntity(104U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.460157416617;
    tmp_msg_0.speed_units = 51U;
    msg.control.set(tmp_msg_0);
    msg.duration = 37691U;
    msg.custom.assign("SIPXGLGXLARCXYDKVLRIJWIVPKKFLYTGRMNULEYFNVXSKSCPZMRGPOUFSVPNWUMIAZOSNOR");

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
    msg.setTimeStamp(0.284654797347);
    msg.setSource(21557U);
    msg.setSourceEntity(102U);
    msg.setDestination(58831U);
    msg.setDestinationEntity(104U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.681546517779;
    tmp_msg_0.z_units = 141U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28248U;
    msg.custom.assign("GGHUJEDPOFDNLMRRXSJAVIEJFTWGSHHRFBGBSGALGWRBNIZVXQONTOZWWNYKBIQUBPVWXAMAUWQOYJIHXGRFUBLUXBDPKQNIIZSQVDZQHJPVMOERZOSWYETVHYHXRBELVNYUSACYJSWQODLCMPKKIALTPPQKZIHOGFHVLKDKAJP");

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
    msg.setTimeStamp(0.121413859664);
    msg.setSource(44473U);
    msg.setSourceEntity(243U);
    msg.setDestination(32022U);
    msg.setDestinationEntity(22U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.989787127317;
    tmp_msg_0.z_units = 244U;
    msg.control.set(tmp_msg_0);
    msg.duration = 56569U;
    msg.custom.assign("LRQKMMSNDGXOOJSVLHWNAVPLWPVIYPEVSCWIETQAKADNPRVKALHJJWGQQRDTBVFUEXNAIHXOCRVTAFXIKXZCUOXINFJAXGJWINDICLEXBSOTZCBFRYKQMXRHYJDLYCNLLFQEFGYNBZJXRAFQMBQBLPYWWP");

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
    msg.setTimeStamp(0.172670589576);
    msg.setSource(61805U);
    msg.setSourceEntity(23U);
    msg.setDestination(43507U);
    msg.setDestinationEntity(8U);
    msg.timeout = 11305U;
    msg.lat = 0.653031010204;
    msg.lon = 0.740059385612;
    msg.z = 0.0226276137623;
    msg.z_units = 120U;
    msg.speed = 0.973277208222;
    msg.speed_units = 31U;
    msg.bearing = 0.0548453857636;
    msg.cross_angle = 0.520539114942;
    msg.width = 0.679229193354;
    msg.length = 0.102055890535;
    msg.hstep = 0.868824268802;
    msg.coff = 254U;
    msg.alternation = 211U;
    msg.flags = 27U;
    msg.custom.assign("DGHMRXOTZJSLXETVXDBKAMTCNNYCJSTWDYAGNNTGUFGCZZBJJYSQBWIFNGCKFYLPMRXDBITEZHBYJAOKLHHMLOKOPUCXOQVSGXLFMNFDWSUJDEPUAKQVWMHWBMWMBJEPRLQWZNKWKPGZ");

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
    msg.setTimeStamp(0.642972352566);
    msg.setSource(62761U);
    msg.setSourceEntity(68U);
    msg.setDestination(65113U);
    msg.setDestinationEntity(158U);
    msg.timeout = 39557U;
    msg.lat = 0.212772654811;
    msg.lon = 0.676271644291;
    msg.z = 0.0464874577667;
    msg.z_units = 55U;
    msg.speed = 0.580717245958;
    msg.speed_units = 24U;
    msg.bearing = 0.991062246591;
    msg.cross_angle = 0.42811942293;
    msg.width = 0.501537746983;
    msg.length = 0.150541181743;
    msg.hstep = 0.474220711744;
    msg.coff = 152U;
    msg.alternation = 131U;
    msg.flags = 182U;
    msg.custom.assign("IRKPCNRHLPZIITGFWTIIBRDXACWDNWLXGRGBUAJOERTCFSNJWTHDGQXOYTWYADXMXBLXZDFPLVELJSTUUZFKVHUBAWBQCLGHPKTHWHQOECNUBKZCMNFODSGSSAMSHRNWSLSBHZTMJVPSQFPFXAXOVDRJSYIVJZAYYYIDGACUPOBQYQYNDKKJQLQZUEFVBKXXUIMLPMWOMLEIVUNEEZRHPAECGEQGDYFKVJVUOCYMQCGMFVTOKEI");

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
    msg.setTimeStamp(0.255317280312);
    msg.setSource(37746U);
    msg.setSourceEntity(167U);
    msg.setDestination(12640U);
    msg.setDestinationEntity(165U);
    msg.timeout = 24922U;
    msg.lat = 0.824103061086;
    msg.lon = 0.347649108173;
    msg.z = 0.528648510995;
    msg.z_units = 32U;
    msg.speed = 0.0523278894861;
    msg.speed_units = 41U;
    msg.bearing = 0.948125440975;
    msg.cross_angle = 0.430043752734;
    msg.width = 0.915199921355;
    msg.length = 0.283582386235;
    msg.hstep = 0.660193302625;
    msg.coff = 242U;
    msg.alternation = 15U;
    msg.flags = 220U;
    msg.custom.assign("YVYLINVYROJVPWHPVXGESGOXCRITBFEWOZFALQYDPAUXXLTDAUDWGNHSKNHQBJOIEHCFKGSUBRBSWMRKDNEWGZLARJDAXDVRQMCGBZELMXHOWYKMGFXJPKSQUYFQTECNPFIJFMIFRNAHCPBUSFGEDZOHDDTBO");

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
    msg.setTimeStamp(0.0647231991016);
    msg.setSource(56241U);
    msg.setSourceEntity(140U);
    msg.setDestination(32820U);
    msg.setDestinationEntity(61U);
    msg.timeout = 9800U;
    msg.lat = 0.563685882456;
    msg.lon = 0.349926647771;
    msg.z = 0.387709082046;
    msg.z_units = 41U;
    msg.speed = 0.450902653253;
    msg.speed_units = 220U;
    msg.custom.assign("USOLSCWJCBQKTOVTJHFICYWTYFGRUHJWYUNZXIONHKQNPRMJYTQEGCZBEOGJIPDXMAPMVSFRDTAUICFRDSW");

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
    msg.setTimeStamp(0.0944396900838);
    msg.setSource(30669U);
    msg.setSourceEntity(53U);
    msg.setDestination(38549U);
    msg.setDestinationEntity(226U);
    msg.timeout = 47578U;
    msg.lat = 0.721180996018;
    msg.lon = 0.147316367196;
    msg.z = 0.91600719969;
    msg.z_units = 118U;
    msg.speed = 0.599185139183;
    msg.speed_units = 105U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.507141325935;
    tmp_msg_0.y = 0.308671058494;
    tmp_msg_0.z = 0.648301786627;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IBJODABUGZEEUHZWGLKBCTUTMSLIO");

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
    msg.setTimeStamp(0.284668599007);
    msg.setSource(45996U);
    msg.setSourceEntity(72U);
    msg.setDestination(55439U);
    msg.setDestinationEntity(23U);
    msg.timeout = 55303U;
    msg.lat = 0.779746818654;
    msg.lon = 0.514645580678;
    msg.z = 0.385499751477;
    msg.z_units = 32U;
    msg.speed = 0.13440559251;
    msg.speed_units = 15U;
    msg.custom.assign("TQKLJRDZYEAXYDQKMNBAZIBEXFQBITBGECUKYGVIHOHYHWIXIGACWBTDUPZQWFNZSGNHESUCFAXPOIERCDQXTFDTUHMFBGOPSMOFJSPOVEULUCRVVJVZHQIVYOTHWGVFPLHUWAOJYTPN");

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
    msg.setTimeStamp(0.348874714718);
    msg.setSource(2531U);
    msg.setSourceEntity(41U);
    msg.setDestination(51076U);
    msg.setDestinationEntity(225U);
    msg.x = 0.799632401989;
    msg.y = 0.970901197118;
    msg.z = 0.294848780527;

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
    msg.setTimeStamp(0.118063976801);
    msg.setSource(18398U);
    msg.setSourceEntity(226U);
    msg.setDestination(35091U);
    msg.setDestinationEntity(200U);
    msg.x = 0.249067041437;
    msg.y = 0.74979391078;
    msg.z = 0.723890672621;

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
    msg.setTimeStamp(0.329887665302);
    msg.setSource(32971U);
    msg.setSourceEntity(18U);
    msg.setDestination(48110U);
    msg.setDestinationEntity(120U);
    msg.x = 0.441342844137;
    msg.y = 0.410767125949;
    msg.z = 0.9019707459;

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
    msg.setTimeStamp(0.469549565979);
    msg.setSource(34766U);
    msg.setSourceEntity(195U);
    msg.setDestination(29671U);
    msg.setDestinationEntity(222U);
    msg.timeout = 3547U;
    msg.lat = 0.949577961849;
    msg.lon = 0.799470350995;
    msg.z = 0.892172353112;
    msg.z_units = 102U;
    msg.amplitude = 0.528738223852;
    msg.pitch = 0.781261380083;
    msg.speed = 0.192481119725;
    msg.speed_units = 37U;
    msg.custom.assign("GATEZOPVPASXOKJDFKQLXKCEISXTWCLZVKHFUAOCSMIZLTLJJECX");

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
    msg.setTimeStamp(0.199994489221);
    msg.setSource(30540U);
    msg.setSourceEntity(17U);
    msg.setDestination(38793U);
    msg.setDestinationEntity(50U);
    msg.timeout = 15233U;
    msg.lat = 0.470753061123;
    msg.lon = 0.00424830406887;
    msg.z = 0.841774833739;
    msg.z_units = 213U;
    msg.amplitude = 0.35084720012;
    msg.pitch = 0.864208249342;
    msg.speed = 0.293088011573;
    msg.speed_units = 99U;
    msg.custom.assign("BEXDOALIRVDYVNCIMPVENTZPZUQJHKSAJZZHEXXRDHJWRNSMPONUTQWBMQFHKLORDFIVPTUHXASGVJWGFFWTLZYISPISEFASUUTKXFTJVWWVYBMKCOESPLMGMQFRLEMBCAAGZUBGKNYDEPWXFGJKDLVKXYMXQZCPIQCTIECUQJYYCSBIFCHVXY");

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
    msg.setTimeStamp(0.420226256965);
    msg.setSource(35U);
    msg.setSourceEntity(47U);
    msg.setDestination(46269U);
    msg.setDestinationEntity(85U);
    msg.timeout = 48472U;
    msg.lat = 0.948257115128;
    msg.lon = 0.45376935816;
    msg.z = 0.318487420562;
    msg.z_units = 95U;
    msg.amplitude = 0.767092524085;
    msg.pitch = 0.319572224344;
    msg.speed = 0.0685189766942;
    msg.speed_units = 195U;
    msg.custom.assign("LWZSMPAYZCPXSVYMATKPPBOQWRVSZRDENIBRHFHKUNHRNUVBSGLAJHOYIJRFKRTWACIHDVTYBDRGRMSWKKVYIOBONYMPGTJAYLJYWMHPUHYLZMOOEFKHABMUCHPZQDCUATWJCJQCXQDVGNTGSUNRWICE");

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
    msg.setTimeStamp(0.286539064261);
    msg.setSource(16177U);
    msg.setSourceEntity(43U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.368832607197);
    msg.setSource(2213U);
    msg.setSourceEntity(97U);
    msg.setDestination(48596U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.825808887405);
    msg.setSource(4675U);
    msg.setSourceEntity(154U);
    msg.setDestination(8505U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.881145961102);
    msg.setSource(11129U);
    msg.setSourceEntity(42U);
    msg.setDestination(9846U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.742061795588;
    msg.lon = 0.190465508702;
    msg.z = 0.187054761355;
    msg.z_units = 192U;
    msg.radius = 0.4870688123;
    msg.duration = 29028U;
    msg.speed = 0.267954749782;
    msg.speed_units = 142U;
    msg.popup_period = 7606U;
    msg.popup_duration = 11551U;
    msg.flags = 175U;
    msg.custom.assign("DCTVHKSSZFDEEJGPMCNYMEBJLBNIRTEYIB");

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
    msg.setTimeStamp(0.0167748085111);
    msg.setSource(11903U);
    msg.setSourceEntity(9U);
    msg.setDestination(34719U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.788925788297;
    msg.lon = 0.300817897555;
    msg.z = 0.222769868626;
    msg.z_units = 234U;
    msg.radius = 0.312010715669;
    msg.duration = 37719U;
    msg.speed = 0.617528891724;
    msg.speed_units = 157U;
    msg.popup_period = 65219U;
    msg.popup_duration = 34745U;
    msg.flags = 81U;
    msg.custom.assign("VJYCWEPTEZYOCGIQJYBBAEGWJLRSGXBKNRLVPHNVJSQUGINTUUPMBNAZNNARZFQXPRWQPNUIVMRCSHHWUYTZULHBYIFXETXOIOOLLQFQPDOIOBEGSZUHDBEVCWVBCSHDPJBCSDNQNEKKGLKKKMMWSVXOAYFXITRDATAVJYYKZWUILDCWHDGFJSXFPRNCZTCIUPYTCQMZJAVUXMWWXJLLMVMGYSPFHQ");

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
    msg.setTimeStamp(0.882583985863);
    msg.setSource(33378U);
    msg.setSourceEntity(92U);
    msg.setDestination(50321U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.0085808419399;
    msg.lon = 0.656294288502;
    msg.z = 0.58244193838;
    msg.z_units = 114U;
    msg.radius = 0.444952929736;
    msg.duration = 60073U;
    msg.speed = 0.191977479579;
    msg.speed_units = 74U;
    msg.popup_period = 64210U;
    msg.popup_duration = 13806U;
    msg.flags = 179U;
    msg.custom.assign("EOSIUJSPHQNYBLMITRUUBLRAWWLGLWGLMCUGICDLQTEVONPAHJDJECEKYHCKLHCHQPLSMGQNAAVXMWRZXDORIWPFDNORMJFJDGIQPFHHVZVSZTTOPXCEJBMQIHYEGYKOMONURASSKDUZILQIPWQZOKZVQKBBBFGBVGFEFNHTXMDFCNVAXYBOUPITYJMGAZBMCYTVVHJPI");

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
    msg.setTimeStamp(0.914291457152);
    msg.setSource(42619U);
    msg.setSourceEntity(152U);
    msg.setDestination(52292U);
    msg.setDestinationEntity(40U);
    msg.timeout = 34773U;
    msg.flags = 207U;
    msg.lat = 0.82752689995;
    msg.lon = 0.199865577023;
    msg.start_z = 0.227239568916;
    msg.start_z_units = 204U;
    msg.end_z = 0.348024571649;
    msg.end_z_units = 163U;
    msg.radius = 0.60734120782;
    msg.speed = 0.623174551592;
    msg.speed_units = 37U;
    msg.custom.assign("LCGMGCKNDLKIYFRMVPTCJKJHXMVDEAWCUWSYBYQNVQFXUBUKYFFNWCPQHVOWEYSEENEBZXPPIDWAUGGQKSYSTNDIGTYREDTJZCFMOLAUARTCJPFUSIQOIPGHBMHMVLX");

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
    msg.setTimeStamp(0.312753289246);
    msg.setSource(11985U);
    msg.setSourceEntity(248U);
    msg.setDestination(29107U);
    msg.setDestinationEntity(125U);
    msg.timeout = 42599U;
    msg.flags = 157U;
    msg.lat = 0.614048285855;
    msg.lon = 0.686137415851;
    msg.start_z = 0.705660846557;
    msg.start_z_units = 114U;
    msg.end_z = 0.990132970372;
    msg.end_z_units = 205U;
    msg.radius = 0.398416793517;
    msg.speed = 0.137908937275;
    msg.speed_units = 215U;
    msg.custom.assign("DLIGWLNVKOZBIJYMRIKFRECQZGQKQEAKBDQLZRVQSUXNQBQHNEYYFNIDBKHJCXPMYOONYJJLDZ");

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
    msg.setTimeStamp(0.761653763988);
    msg.setSource(15333U);
    msg.setSourceEntity(30U);
    msg.setDestination(38454U);
    msg.setDestinationEntity(210U);
    msg.timeout = 8662U;
    msg.flags = 65U;
    msg.lat = 0.886605111135;
    msg.lon = 0.446336152566;
    msg.start_z = 0.297713429098;
    msg.start_z_units = 217U;
    msg.end_z = 0.70424856466;
    msg.end_z_units = 189U;
    msg.radius = 0.915341419195;
    msg.speed = 0.189814894362;
    msg.speed_units = 100U;
    msg.custom.assign("PRZMIGSLESNGFKKSWYNRGERWFWJWSANTCLCYPFTMQXOIZHIIGHBDNXXGKMTCAJBUELAJXYWAOLHBVFDVUZUPYPHNYOZTNMDHESTDHDZXZDBUSIYIRXFMKYPLEEKMVXXFDULNCFCUVJYNHJFMPDRGJSDQSWVFRHXUIASKOZPJVUTAMNMVABBYEVWLHQLCFICNKBQOEKQWETCXJWRAODBEQCGZ");

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
    msg.setTimeStamp(0.278608765313);
    msg.setSource(49497U);
    msg.setSourceEntity(254U);
    msg.setDestination(15500U);
    msg.setDestinationEntity(33U);
    msg.timeout = 14158U;
    msg.lat = 0.962935472051;
    msg.lon = 0.488903010314;
    msg.z = 0.175419592336;
    msg.z_units = 109U;
    msg.speed = 0.803997948263;
    msg.speed_units = 198U;
    msg.custom.assign("REEDGUQTOKHOZGBYLDFPBENMTRMSBFNZUBS");

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
    msg.setTimeStamp(0.218693206347);
    msg.setSource(47577U);
    msg.setSourceEntity(219U);
    msg.setDestination(49407U);
    msg.setDestinationEntity(116U);
    msg.timeout = 43401U;
    msg.lat = 0.18117453832;
    msg.lon = 0.0223634522514;
    msg.z = 0.919936607149;
    msg.z_units = 216U;
    msg.speed = 0.610349317623;
    msg.speed_units = 131U;
    msg.custom.assign("UUWKGHOCZMDAQLTOSVXNWWYRVWAYVGOQXNMCAZLISQDJBJTAUUKGBNPW");

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
    msg.setTimeStamp(0.432409411121);
    msg.setSource(29745U);
    msg.setSourceEntity(235U);
    msg.setDestination(49193U);
    msg.setDestinationEntity(167U);
    msg.timeout = 26073U;
    msg.lat = 0.188588462861;
    msg.lon = 0.586647432371;
    msg.z = 0.630353649776;
    msg.z_units = 54U;
    msg.speed = 0.939669797219;
    msg.speed_units = 158U;
    msg.custom.assign("QKMPXZNVFIDLESXJOLPREKCEZICOZQBJABEQSZPLRGNMUNOJCKNWSWIMYWEGHOHAYSMHTHYNXTGAAHYMUUTXFTVPMQOWVBGLBTWBJDUWVNETRIX");

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
    msg.setTimeStamp(0.50828774313);
    msg.setSource(22194U);
    msg.setSourceEntity(180U);
    msg.setDestination(44170U);
    msg.setDestinationEntity(221U);
    msg.x = 0.897553840632;
    msg.y = 0.445601423341;
    msg.z = 0.969257352763;
    msg.t = 0.0394625757998;

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
    msg.setTimeStamp(0.488702237886);
    msg.setSource(44078U);
    msg.setSourceEntity(103U);
    msg.setDestination(31042U);
    msg.setDestinationEntity(18U);
    msg.x = 0.13670576378;
    msg.y = 0.443813185526;
    msg.z = 0.291047092457;
    msg.t = 0.962126313049;

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
    msg.setTimeStamp(0.0388971759914);
    msg.setSource(3820U);
    msg.setSourceEntity(222U);
    msg.setDestination(50865U);
    msg.setDestinationEntity(134U);
    msg.x = 0.764397664558;
    msg.y = 0.346255435671;
    msg.z = 0.925701646528;
    msg.t = 0.0950564545911;

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
    msg.setTimeStamp(0.54695072986);
    msg.setSource(32176U);
    msg.setSourceEntity(116U);
    msg.setDestination(825U);
    msg.setDestinationEntity(207U);
    msg.timeout = 53190U;
    msg.name.assign("FNWRIOKGELCCHJAPTVKNFSXWFCFYRKCPZMZEVOZQKNKPSNMVDQDDOJPVWUJEUQLUFGRVGVIODCGYQNNRJNTPATBMAVZQUAXQDBHPBDKBGDMLSTQPWLMJIPYPNKUSGQWFNQXDAHRHXHYXIBYSZDLXJACVWFKGTGYGNULICTWXRIOMBYSHCSWUOJMALEUTZHMXHAJFHIOBZQ");
    msg.custom.assign("XJPMSQLDNHLRCXGOJMWNXVDCXGHRTASWDMVYUESABYJOWIPUHCXRBKUNCBNL");

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
    msg.setTimeStamp(0.849606337853);
    msg.setSource(37411U);
    msg.setSourceEntity(139U);
    msg.setDestination(27859U);
    msg.setDestinationEntity(219U);
    msg.timeout = 5594U;
    msg.name.assign("OPZFQZJMPUXHVDRBQVSZLBHDHIEKROWYWSBJWEGHWWZEAGKINJB");
    msg.custom.assign("SJVVOMJRNZYVCQIQKANXOWBTTKHXFPNABFUYEIQCPEBIHCFHZMALXMEDBYXIAVHWLYZWEUMTPDTXFGZDRHIFCHGFAUKSMMUTPPWOSSNWOKFUGZNSNKYSSDRINQVBIAZNTGCLEDETKGKJVMROQOBDUOIQTXOBCVJGHCRLCLLQMAG");

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
    msg.setTimeStamp(0.153347650991);
    msg.setSource(20482U);
    msg.setSourceEntity(171U);
    msg.setDestination(5987U);
    msg.setDestinationEntity(202U);
    msg.timeout = 2707U;
    msg.name.assign("XOXMZCOQMJYEKJYNAHNZLIJOUIXSVHFRHWWUEEQQRFAGIGGDGFIRTKCQURZVIP");
    msg.custom.assign("LSXIHYRQHHFWYIPIZYPQGWWIFVXMKOIVLOOJGPEQOECZCTYDTECACWOVDNAUSSUBFRIEMIUQDBNMGPUHRGRRMYSFDNNUIYEZLBDTJVMOKTSWKAMBNWFLCHDFTPHDAXRXTRPLZGPYFHOOGPJTZHFRDMNVGRPELUUNESWUKLCKTEGUAQBAPEQBVZXWDYXXTVCCXSHSJNSZXZ");

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
    msg.setTimeStamp(0.732976650544);
    msg.setSource(17554U);
    msg.setSourceEntity(201U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.278866454495;
    msg.lon = 0.639284572874;
    msg.z = 0.0806963286701;
    msg.z_units = 194U;
    msg.speed = 0.0048640244707;
    msg.speed_units = 149U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.406682474984;
    tmp_msg_0.y = 0.949936092442;
    tmp_msg_0.z = 0.0995530339413;
    tmp_msg_0.t = 0.605572380061;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 6508U;
    tmp_msg_1.off_x = 0.59950941673;
    tmp_msg_1.off_y = 0.218966515968;
    tmp_msg_1.off_z = 0.474853061099;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.382491017005;
    msg.custom.assign("YLTWAUSVHNNPARMXGYNAGSJPQOSZEPXHWDFCDALBQDASKRHNXOPNEKVJCQXCQVRGETQFFFAKJCEGHKNPRLBZGUPGJRSWOOROOZQXPZHAOIIJNYCIADVMQXUMXUKOWRTLBQXSLCZKCFSVDGJBSTHBKWSUBTEBTJZGJNHGBYJMVFFFCMKWHYIYZUFZLMHVCDIWLM");

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
    msg.setTimeStamp(0.33429885261);
    msg.setSource(5379U);
    msg.setSourceEntity(176U);
    msg.setDestination(11772U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.0404834490435;
    msg.lon = 0.177107204078;
    msg.z = 0.228135204126;
    msg.z_units = 179U;
    msg.speed = 0.50922877139;
    msg.speed_units = 55U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62642U;
    tmp_msg_0.off_x = 0.556032770806;
    tmp_msg_0.off_y = 0.479239223246;
    tmp_msg_0.off_z = 0.090190110192;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.611734859552;
    msg.custom.assign("ECXADQIMQMRDXSTTAVHWZCQQPHBAMLFVLGOFGUYDMVEJLLEERNEPLGWLIUJJZZSYNEVCATDYQTYSKHGQSKIZSZIBBXFXVOURGXNSRKWNAUJFFVQNFGYAVUHKMCVJOMNXZOPRBOHVYUTIKKFGCVMOCFPROJDIPBEWXTPBGWNECDRJKTWMURAZISEPQKFROXTSLUXMETDJKAAN");

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
    msg.setTimeStamp(0.458414292158);
    msg.setSource(43147U);
    msg.setSourceEntity(218U);
    msg.setDestination(45466U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.418400236469;
    msg.lon = 0.347899155352;
    msg.z = 0.29454356198;
    msg.z_units = 195U;
    msg.speed = 0.708198900704;
    msg.speed_units = 31U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47429U;
    tmp_msg_0.off_x = 0.58776669336;
    tmp_msg_0.off_y = 0.398698431709;
    tmp_msg_0.off_z = 0.121504250203;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.501071654327;
    msg.custom.assign("PBUVFQINTYBJZDJGIRKEWEKLGRSFWDQFMPNNVJDTYGEBKNAZGLSCOYYMHXGXBKQOUAAVSQPWDJZVAWVWKMERKFDTDHARGIPTCEBEFRUSTHGTZRUCYXINSXCENMENYKQRCSYM");

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
    msg.setTimeStamp(0.161524253644);
    msg.setSource(46394U);
    msg.setSourceEntity(33U);
    msg.setDestination(27547U);
    msg.setDestinationEntity(98U);
    msg.vid = 425U;
    msg.off_x = 0.304204183668;
    msg.off_y = 0.95745994561;
    msg.off_z = 0.390783858169;

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
    msg.setTimeStamp(0.154404642031);
    msg.setSource(59797U);
    msg.setSourceEntity(84U);
    msg.setDestination(27790U);
    msg.setDestinationEntity(74U);
    msg.vid = 56953U;
    msg.off_x = 0.843715076405;
    msg.off_y = 0.0758008414134;
    msg.off_z = 0.972907277751;

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
    msg.setTimeStamp(0.920267877482);
    msg.setSource(38728U);
    msg.setSourceEntity(175U);
    msg.setDestination(6924U);
    msg.setDestinationEntity(137U);
    msg.vid = 47678U;
    msg.off_x = 0.0812402577038;
    msg.off_y = 0.387137842495;
    msg.off_z = 0.450580670769;

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
    msg.setTimeStamp(0.297751011304);
    msg.setSource(47393U);
    msg.setSourceEntity(11U);
    msg.setDestination(13308U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.0533816743726);
    msg.setSource(21311U);
    msg.setSourceEntity(83U);
    msg.setDestination(60616U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.920841907699);
    msg.setSource(57333U);
    msg.setSourceEntity(224U);
    msg.setDestination(64384U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.0447633386109);
    msg.setSource(33130U);
    msg.setSourceEntity(152U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(227U);
    msg.mid = 29178U;

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
    msg.setTimeStamp(0.402119470622);
    msg.setSource(45613U);
    msg.setSourceEntity(168U);
    msg.setDestination(2595U);
    msg.setDestinationEntity(115U);
    msg.mid = 63274U;

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
    msg.setTimeStamp(0.651098601796);
    msg.setSource(9714U);
    msg.setSourceEntity(47U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(57U);
    msg.mid = 1868U;

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
    msg.setTimeStamp(0.86743829984);
    msg.setSource(11914U);
    msg.setSourceEntity(193U);
    msg.setDestination(867U);
    msg.setDestinationEntity(147U);
    msg.state = 221U;
    msg.eta = 41822U;
    msg.info.assign("KHXPMDRODUJFBXGPOFZAWXJQHXNKHCPVZBNHOUNUAIJFGMDLFAAYHDGBDVRHETCLZUNBQPSNWECLRULDBTIFLLERYFWBJCRIOSKBTANHTEMCKDAPUPZWCNZJJFYBOYGQRNFWVHMJGPIIWNILKPKDASGVCOXVBPMOQQCLIISQYUYRXNRJWQWMVLTSOEEQFXGSXUIYYSOLHVHQSETCEYBTVWPR");

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
    msg.setTimeStamp(0.535524510008);
    msg.setSource(54841U);
    msg.setSourceEntity(195U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(232U);
    msg.state = 191U;
    msg.eta = 22500U;
    msg.info.assign("BRMKLSZZVQQLNVWJDEYNHMQEJWRWSHHBIFLOEWFUGEGDINAWPCXJFGDLVQTWPWVKVBTXCZZVLAAKDOOOHBPLADZWPJFKSVKMKUDYXZTRDPKPBYZDOHHGGMBTAEJLLHQMTEJYTRNCXFHUTRBANULDZNJIGGOXBY");

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
    msg.setTimeStamp(0.129037643745);
    msg.setSource(33044U);
    msg.setSourceEntity(122U);
    msg.setDestination(33315U);
    msg.setDestinationEntity(24U);
    msg.state = 117U;
    msg.eta = 30850U;
    msg.info.assign("HQTUTRLYGFLJKLFEZULXSQMYHINJMDZNZOBSZZTGNMMJODWQOACBREVLFIEWUOOECILSNXVUALRTYVMLKHOXPAXPYJFTVURSXNRGVNQEFWGDKRQSBVDBWOWEGDAKKQTMFWIGPOPSVWGICKGTJSPRZCCTKAEJJHOYXSUQDOVKWDWEGPXUJRHHYUBASINHFYESNXUYCNCHLBZDAZPPBLYFKABKV");

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
    msg.setTimeStamp(0.143734938887);
    msg.setSource(18728U);
    msg.setSourceEntity(38U);
    msg.setDestination(36371U);
    msg.setDestinationEntity(75U);
    msg.system = 7582U;
    msg.duration = 55438U;
    msg.speed = 0.681293052363;
    msg.speed_units = 18U;
    msg.x = 0.317267224598;
    msg.y = 0.619365573425;
    msg.z = 0.976433560923;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.897284485953);
    msg.setSource(25331U);
    msg.setSourceEntity(14U);
    msg.setDestination(7375U);
    msg.setDestinationEntity(189U);
    msg.system = 22006U;
    msg.duration = 39917U;
    msg.speed = 0.693557568244;
    msg.speed_units = 54U;
    msg.x = 0.0562020680802;
    msg.y = 0.194892704224;
    msg.z = 0.729073482364;
    msg.z_units = 46U;

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
    msg.setTimeStamp(0.488907016012);
    msg.setSource(9146U);
    msg.setSourceEntity(113U);
    msg.setDestination(23846U);
    msg.setDestinationEntity(92U);
    msg.system = 35415U;
    msg.duration = 12719U;
    msg.speed = 0.205109204295;
    msg.speed_units = 197U;
    msg.x = 0.111636897788;
    msg.y = 0.949444070555;
    msg.z = 0.231789105462;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.00129572459525);
    msg.setSource(56725U);
    msg.setSourceEntity(2U);
    msg.setDestination(2431U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.655897246552;
    msg.lon = 0.509594785475;
    msg.speed = 0.77526488453;
    msg.speed_units = 220U;
    msg.duration = 33604U;
    msg.sys_a = 53773U;
    msg.sys_b = 58024U;
    msg.move_threshold = 0.0291842463357;

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
    msg.setTimeStamp(0.38892834615);
    msg.setSource(42286U);
    msg.setSourceEntity(136U);
    msg.setDestination(61815U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.417737663936;
    msg.lon = 0.319165300026;
    msg.speed = 0.435288782144;
    msg.speed_units = 189U;
    msg.duration = 44194U;
    msg.sys_a = 3675U;
    msg.sys_b = 22423U;
    msg.move_threshold = 0.794586463643;

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
    msg.setTimeStamp(0.171785189894);
    msg.setSource(13627U);
    msg.setSourceEntity(248U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.905404466621;
    msg.lon = 0.236684942313;
    msg.speed = 0.926432624262;
    msg.speed_units = 118U;
    msg.duration = 44779U;
    msg.sys_a = 24285U;
    msg.sys_b = 16430U;
    msg.move_threshold = 0.234842405314;

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
    msg.setTimeStamp(0.090706529047);
    msg.setSource(36936U);
    msg.setSourceEntity(166U);
    msg.setDestination(28282U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.448754119294;
    msg.lon = 0.836313188857;
    msg.z = 0.488363391343;
    msg.z_units = 72U;
    msg.speed = 0.119146034236;
    msg.speed_units = 185U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.599312731735;
    tmp_msg_0.lon = 0.596005462433;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("POJBBFKYVHFGEWERUCSFAXPEISYQRHKCYVOFFUFQXWKTAGCQCBARLJYQQIFJDWQUEMMVOXTBLIOP");

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
    msg.setTimeStamp(0.175333202791);
    msg.setSource(61376U);
    msg.setSourceEntity(230U);
    msg.setDestination(44777U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.817387358102;
    msg.lon = 0.484872868079;
    msg.z = 0.832143514176;
    msg.z_units = 33U;
    msg.speed = 0.0292120066032;
    msg.speed_units = 65U;
    msg.custom.assign("FGOMIUSADYUCAUTKJLVZGLEEONAOBKVSUXBOLXKFUZTCHEXMRWWMIOCMDMZLERQGWLCCISPUXJNGDSIDEKDLVWXYYBJFSMWKYIHCUVXDNPLQQJPDKPXJMZWZZLTPTEOCWQZQXNYOVESTYEZAHNAGPXFFUBACDSRGQGYJBYWVNBFHAAUXVFWHRPSSBEPFUENITBIQOHJRQL");

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
    msg.setTimeStamp(0.152585264896);
    msg.setSource(22496U);
    msg.setSourceEntity(70U);
    msg.setDestination(20764U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.843301549658;
    msg.lon = 0.425324563454;
    msg.z = 0.672553103702;
    msg.z_units = 153U;
    msg.speed = 0.597155023369;
    msg.speed_units = 203U;
    msg.custom.assign("TDSKIWGUVYXWPWRQNDCEUMBPPXURRVHMENSPLHRAZSRBAGVKHUXXRVOBMOAMHDZCZQBNGZOQZCYHKIQAEATPHHJAMEJNYMZFYIIWGVKUGSDFSSY");

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
    msg.setTimeStamp(0.901675967141);
    msg.setSource(5396U);
    msg.setSourceEntity(203U);
    msg.setDestination(19942U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.217608046502;
    msg.lon = 0.960845719977;

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
    msg.setTimeStamp(0.912494078793);
    msg.setSource(61732U);
    msg.setSourceEntity(65U);
    msg.setDestination(60130U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.881416803054;
    msg.lon = 0.177174534991;

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
    msg.setTimeStamp(0.719145600067);
    msg.setSource(38127U);
    msg.setSourceEntity(93U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.353358239948;
    msg.lon = 0.660663043963;

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
    msg.setTimeStamp(0.857125758066);
    msg.setSource(19820U);
    msg.setSourceEntity(139U);
    msg.setDestination(3532U);
    msg.setDestinationEntity(184U);
    msg.timeout = 1673U;
    msg.lat = 0.786157564448;
    msg.lon = 0.695158064491;
    msg.z = 0.574059848002;
    msg.z_units = 194U;
    msg.pitch = 0.0792786265741;
    msg.amplitude = 0.282988212806;
    msg.duration = 52983U;
    msg.speed = 0.638309511337;
    msg.speed_units = 3U;
    msg.radius = 0.414340898067;
    msg.direction = 62U;
    msg.custom.assign("NQSVDGBTZTMZXZICQSQRXHNKJNQUBVZMMSMDAROIBAWNXKMULVXCYRHTKBUABEORRID");

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
    msg.setTimeStamp(0.499499461622);
    msg.setSource(36674U);
    msg.setSourceEntity(91U);
    msg.setDestination(35537U);
    msg.setDestinationEntity(253U);
    msg.timeout = 15953U;
    msg.lat = 0.96185486251;
    msg.lon = 0.884604866619;
    msg.z = 0.164848443371;
    msg.z_units = 136U;
    msg.pitch = 0.0272505451941;
    msg.amplitude = 0.503354046869;
    msg.duration = 11735U;
    msg.speed = 0.636674832583;
    msg.speed_units = 184U;
    msg.radius = 0.138522053166;
    msg.direction = 50U;
    msg.custom.assign("NEVKUZRRSAPQNSGABGZPYHAFQTEAJWIBAQWUCVOQPGHZWTHGMFSTGNURCLPUTIZOZTAYDVMCIAMXVMPFGXWFHRIRLKWLTTQKJSTJZZWPJNSPEQDCBILYLJLRULECPZBDXDGBSFQBODPBDJOHEYCWJGUYVVMJPURCXVROLELEKIYNCBXCFENYHCHFKXDYVANOYXNVTQKJGKVTDSEIIJXKMFO");

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
    msg.setTimeStamp(0.394250297757);
    msg.setSource(3379U);
    msg.setSourceEntity(165U);
    msg.setDestination(18009U);
    msg.setDestinationEntity(51U);
    msg.timeout = 28337U;
    msg.lat = 0.00164458762408;
    msg.lon = 0.38109257884;
    msg.z = 0.0856834199733;
    msg.z_units = 87U;
    msg.pitch = 0.976061442955;
    msg.amplitude = 0.641750639594;
    msg.duration = 64325U;
    msg.speed = 0.394538868195;
    msg.speed_units = 0U;
    msg.radius = 0.975226378977;
    msg.direction = 92U;
    msg.custom.assign("DKBJYSZNTETZBLYBEVWTDOGOKFUHDPSKQVSFOISSTGOZZPSGAUFWDJMYQRHXPARINFYFMLKDELKKNIQQNZSHUHHYCVUCAPAXDGYCWKMWUIFEFQOWGSXMISVTHLGRHPAHLMEQURCOBQBRRZWGAJJODCMUNWZBRJOOEMXJIXAVFNGLBLQDNXYCHNVEBLNPYJDZEIAXIJBJKFACUYGPZHPPD");

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
    msg.setTimeStamp(0.73342320398);
    msg.setSource(42147U);
    msg.setSourceEntity(243U);
    msg.setDestination(13751U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("MSAPYBVDSSQIVCPOMJXWGGGLGKZJSFETJHZWZNGTAUGFMEPLXFGRYRXQXHFVOTKMBMDRDWFSZPHLVTRKYVPCQSVKANRJWLZECQATJMBNYNMDZZQOQALUXRJKHZOZWONHPUJUDWPNNHKRVQVTXQTF");
    msg.reference_frame = 165U;
    msg.custom.assign("HMLAUCFOILFEKEYAINLAWCKBKQJPFTPUZMNZJOWPVDBVYRUQ");

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
    msg.setTimeStamp(0.324997645489);
    msg.setSource(64626U);
    msg.setSourceEntity(206U);
    msg.setDestination(57490U);
    msg.setDestinationEntity(31U);
    msg.formation_name.assign("ULYFMCUALYZOORQKGCCTJKLQESFSYUEWJKMAHITRDNVSGBYNWQMAIIWZLJTAWQHGSSRGEXJVTPHOWXSJXEALFGSAPDQRKQPIXZNZOPWRYIBFTNOSOULKQLDLKOGQYZPJRKGCFDMWIVLMDNRDHWTYMEIWBY");
    msg.reference_frame = 145U;
    msg.custom.assign("YCAANPCMNOUKTGAKNAQZEPCBCWGKFD");

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
    msg.setTimeStamp(0.695826542664);
    msg.setSource(30299U);
    msg.setSourceEntity(165U);
    msg.setDestination(13363U);
    msg.setDestinationEntity(133U);
    msg.formation_name.assign("IXGBBCOJLYUYVIDPFWCNQRCUIPHLMSDL");
    msg.reference_frame = 128U;
    msg.custom.assign("ZUSPHIHPLAQXDFHAHZEDTQTQESPENBKQRTJZGXUVMPMNDZJJULHCXXUURPPRKCZNYSOQONFLZBWTRVKSLILQAKVWLECJBKNNETETHRXMNBQRISMJGWFN");

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
    msg.setTimeStamp(0.964716948795);
    msg.setSource(56978U);
    msg.setSourceEntity(23U);
    msg.setDestination(23463U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("GXJEGOKJLCZVYDRYQAURGDJCBRIAXNCHLLZPNZFJQEHZEHUABRYYRTWNSHVWYGTMKGLSIIGAPFYTITIMNJHYEQKKLPUWLXFKAUMHIVKTBPOERNSDNUXCSAVW");
    msg.formation_name.assign("EECPBOZPGUQYMCUWMCTLLAQPFZZRPUSNIKFYGQZFGIOQZIOSJTLHSUVYGRYMIXLEKTXIXYSKPYMDULQRJNNSCLBPTWQJEFUFAVVQNHDNUHVBCRTJJXOMDHNYEHAAXBSVODOZPQVXTODWGCKKMXGISKDQIWS");
    msg.plan_id.assign("SEURBWCUKFZQPFUEYLWYLSEQGTTIDGGIVYZAZPBQDZPWITZHLEFIHHAMKSGAXGHYWMKETWIHVAJKVSKDVDMQOQFVNCJAWU");
    msg.description.assign("NHZIIKSJOPNRTCDEVPIGVMAOQJTHUGCMJWCPIRSZAIDOEPTC");
    msg.leader_speed = 0.458163506222;
    msg.leader_bank_lim = 0.066261684989;
    msg.pos_sim_err_lim = 0.986665847604;
    msg.pos_sim_err_wrn = 0.558117384289;
    msg.pos_sim_err_timeout = 13037U;
    msg.converg_max = 0.82869394835;
    msg.converg_timeout = 21000U;
    msg.comms_timeout = 47763U;
    msg.turb_lim = 0.979945135837;
    msg.custom.assign("MKFISFTELHSOCBCXDIGXFTSWGEWSTFKNMHOTSPUUMMLCSMBPIVPPWAVQEZIXCFBSICTNMDSQTCELXJZYBMEXSFLXVNBRNVFWAJZPJHUYDZZGDKBEYHWJEIAXDOYIGRUQMURYOBJWNTJFYAHQZALQGBTNDHJVRDEKURONYOODWGVJGOKUQOAZQNHU");

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
    msg.setTimeStamp(0.222622702413);
    msg.setSource(53294U);
    msg.setSourceEntity(18U);
    msg.setDestination(5246U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("ETEWAKNDTSFVDJWNJWMUGEXQNIACQQHASLMSHRSWNTKFYOORNZOECPKCPYFZZIZLMZFTLHDUURBQNQUIHBGJWKPKFFWQCSKGDAFZUXEQPYMNXJICHTHQSIAKIGTREVYDMCAPRTOWMOWVTXJYLWRJKHXXMUSZ");
    msg.formation_name.assign("BNLANBTXHJARFMIGZGRMUVIYDRPRBCXVDFYLJAKMKZQEPCNHMVBTMGQAGKNKJQCXOTMTCHNJXASJTWVTVWSWYDECZDOYKEGQJVSCGMGSQRIFAUUCUGYKMEPNNYQMSQTXPRHKCVRNXSDXYVPDDUDSQKWWSNFBZIBXGWLCZKAPYOLROEUUZJAGVSYOBHEIPULHFOLFQEPCILMWLAZIWRXUHLTLVZH");
    msg.plan_id.assign("USAKDZBURELQYLHQQFMJYRSPYHYOUUSKASVLOOFSFJTI");
    msg.description.assign("LAAGQJLOSYKGURVHABJCYDHXPJNBUHDQBHSWBKKUWDZOPIKMQWVNXHGYHJZQITSNIGGBTASANJLUXVZWJENDMECJYZIGRPFOCEOQBCQYMYXZWFPKSNVLVSYKIQEDMOVPWGJBKPOUFKCVDMPYNOUXFZXAHRIDILAIUMRNFHFELKBEJCBECNTFTSQLLOWSAZPCRZVVTMTXEYWMXRERJRDPSCFPMURIOXGHTWLWRDQZESZDTK");
    msg.leader_speed = 0.610484435283;
    msg.leader_bank_lim = 0.0970105134833;
    msg.pos_sim_err_lim = 0.67927843953;
    msg.pos_sim_err_wrn = 0.889147685679;
    msg.pos_sim_err_timeout = 50545U;
    msg.converg_max = 0.897868604532;
    msg.converg_timeout = 16771U;
    msg.comms_timeout = 38053U;
    msg.turb_lim = 0.70188502092;
    msg.custom.assign("CLKRUFORHQIHACXGXKUSBUEMGLTNZMATCLGCQHZBUPRFFJLNEFYOEBFEQZHIXCBMYDYDWWEKKQTKAPVWXPPFZZUVYZLZODQWYASNVMAWMNLRQCGVDSFLEAKXKJQLGRICRZDTVSOHXOXESUPSQMPYJVBTIZTFWEMNOIHNFSWBNIITAXDYFLAVGCQMVGSGUVROIXBTRRYJDAWMKODHHUQPXWPZUKGEPWNMBKNPJD");

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
    msg.setTimeStamp(0.179103808308);
    msg.setSource(13223U);
    msg.setSourceEntity(92U);
    msg.setDestination(35902U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("IOWEGMGFZTRALEJBFMWANZFDXHVSJNPAYQELPBRDOGGWGFZRICRKYYHDSEQYSGHDHCXTKTBEJRKZCCPXQOIDVCLQTDZXNAXINGLFBIBLUHPYUSYHCLEMCXCUTENLSXSVIAKMNVWVDIZXKVZITFNLCATBBDGTLMSWXNOKPKOSJHRXAPYRQVGQNRZJJUJYNADUQUFFUYUJTVWOOFPCQWVKQWQJVGIKMHBOUDEPMWAMWOMJMPPUFZLEYASHOTSE");
    msg.formation_name.assign("ZOVLPZTITIBSAUSOPXXRGQQYCILYZXKXSCOLHBPKSFIJFWKQIYHLLPTMJWICZRXKAAOARJYDHEUASOCHTOFBYPNIRULAYMZQFLNEMMVBOWETMDZHEXMATAWDNDPUNUJFBTGQKQZYOUVHQUPGVVEDNKPBFSKYOLVSECNDOVLVDXRUMNFXHZFKZWHXCVATRSGPBNMQGRIFNKYRDDBWJGQRPTAWMVKWITEZDUCUHCJJJFJ");
    msg.plan_id.assign("XQIUANGUJXHJASNMFYHIENRKLMKDTCOUCILUZIULZ");
    msg.description.assign("OIXHSRSHXGKKUZYUOUXYOQLRANLMXYZDHEBDZPVYICDKXNYFZOORKGREGWHDNAFWFATYBVTGZQSVWBIGTLYLCZUWSWCSPGTLQYETWUBLAZUDNLFMXHTPMVKQHBJHSGCCVHBIKSFPAWYZIMVCJDJRP");
    msg.leader_speed = 0.90106349506;
    msg.leader_bank_lim = 0.473186295888;
    msg.pos_sim_err_lim = 0.524878220378;
    msg.pos_sim_err_wrn = 0.0651267066098;
    msg.pos_sim_err_timeout = 8509U;
    msg.converg_max = 0.448713636669;
    msg.converg_timeout = 24177U;
    msg.comms_timeout = 23319U;
    msg.turb_lim = 0.198623380711;
    msg.custom.assign("SECMEKUEZRRIQFAJXNYXBUQMWFLUTQTISKOGYFONVLGSEVMNHXWVRPACYKAEBXRLNHWMOYAWNCLYEEWFUWDEBTCXPYUZZXRZDJKFPFTNXYHYGSJAKOJYFNUXMAJFZDIBNPIXGKXIQLLVHRJSAIULVZLBESAQMJVNPHDIRHCOSUMCDJBIHVONOPOBFQTVOCHLWJWMDWTYCZDKPUVGBRLQSRFAQGQSMIGKEAPWJHHGKZ");

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
    msg.setTimeStamp(0.987269754959);
    msg.setSource(20570U);
    msg.setSourceEntity(240U);
    msg.setDestination(48871U);
    msg.setDestinationEntity(192U);
    msg.control_src = 2327U;
    msg.control_ent = 214U;
    msg.timeout = 0.0451247342406;
    msg.loiter_radius = 0.0567763839256;
    msg.altitude_interval = 0.37688590168;

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
    msg.setTimeStamp(0.90064622285);
    msg.setSource(25080U);
    msg.setSourceEntity(237U);
    msg.setDestination(43838U);
    msg.setDestinationEntity(62U);
    msg.control_src = 11159U;
    msg.control_ent = 71U;
    msg.timeout = 0.582546725443;
    msg.loiter_radius = 0.312453966451;
    msg.altitude_interval = 0.77883753388;

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
    msg.setTimeStamp(0.61948335169);
    msg.setSource(8775U);
    msg.setSourceEntity(25U);
    msg.setDestination(7102U);
    msg.setDestinationEntity(137U);
    msg.control_src = 21716U;
    msg.control_ent = 46U;
    msg.timeout = 0.407988002879;
    msg.loiter_radius = 0.554187377129;
    msg.altitude_interval = 0.727687289164;

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
    msg.setTimeStamp(0.39110199828);
    msg.setSource(54692U);
    msg.setSourceEntity(65U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(115U);
    msg.flags = 91U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.664172220229;
    tmp_msg_0.speed_units = 177U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.692166159174;
    tmp_msg_1.z_units = 18U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.785728668762;
    msg.lon = 0.971482356239;
    msg.radius = 0.871250288602;

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
    msg.setTimeStamp(0.0330358767794);
    msg.setSource(50070U);
    msg.setSourceEntity(245U);
    msg.setDestination(29627U);
    msg.setDestinationEntity(0U);
    msg.flags = 178U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.50565250914;
    tmp_msg_0.speed_units = 146U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.339645504609;
    tmp_msg_1.z_units = 78U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.314812877967;
    msg.lon = 0.3393956767;
    msg.radius = 0.744831936168;

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
    msg.setTimeStamp(0.947674075359);
    msg.setSource(38149U);
    msg.setSourceEntity(93U);
    msg.setDestination(40671U);
    msg.setDestinationEntity(66U);
    msg.flags = 234U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.55618422572;
    tmp_msg_0.speed_units = 147U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.113530380935;
    tmp_msg_1.z_units = 60U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.407084786041;
    msg.lon = 0.750212899625;
    msg.radius = 0.195549825311;

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
    msg.setTimeStamp(0.471680641456);
    msg.setSource(4958U);
    msg.setSourceEntity(243U);
    msg.setDestination(30184U);
    msg.setDestinationEntity(61U);
    msg.control_src = 43862U;
    msg.control_ent = 58U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 13U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.643443638538;
    tmp_tmp_msg_0_0.speed_units = 177U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0124483013027;
    tmp_tmp_msg_0_1.z_units = 248U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0323854833224;
    tmp_msg_0.lon = 0.949220520157;
    tmp_msg_0.radius = 0.0476185764168;
    msg.reference.set(tmp_msg_0);
    msg.state = 40U;
    msg.proximity = 233U;

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
    msg.setTimeStamp(0.341726535143);
    msg.setSource(9894U);
    msg.setSourceEntity(237U);
    msg.setDestination(51417U);
    msg.setDestinationEntity(68U);
    msg.control_src = 605U;
    msg.control_ent = 213U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.922178740636;
    tmp_tmp_msg_0_0.speed_units = 190U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.147369570128;
    tmp_tmp_msg_0_1.z_units = 6U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0226042582927;
    tmp_msg_0.lon = 0.955111665698;
    tmp_msg_0.radius = 0.519702384926;
    msg.reference.set(tmp_msg_0);
    msg.state = 242U;
    msg.proximity = 142U;

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
    msg.setTimeStamp(0.464983289783);
    msg.setSource(39031U);
    msg.setSourceEntity(7U);
    msg.setDestination(38462U);
    msg.setDestinationEntity(75U);
    msg.control_src = 28678U;
    msg.control_ent = 83U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 119U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.488306168466;
    tmp_tmp_msg_0_0.speed_units = 246U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.563024465155;
    tmp_tmp_msg_0_1.z_units = 92U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.152966453169;
    tmp_msg_0.lon = 0.624226911773;
    tmp_msg_0.radius = 0.205022024188;
    msg.reference.set(tmp_msg_0);
    msg.state = 230U;
    msg.proximity = 232U;

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
    msg.setTimeStamp(0.414919229275);
    msg.setSource(12677U);
    msg.setSourceEntity(212U);
    msg.setDestination(13604U);
    msg.setDestinationEntity(206U);
    msg.ax_cmd = 0.413908013675;
    msg.ay_cmd = 0.607747023566;
    msg.az_cmd = 0.0529093890944;
    msg.ax_des = 0.0326511896798;
    msg.ay_des = 0.207830842442;
    msg.az_des = 0.408516787216;
    msg.virt_err_x = 0.269718400598;
    msg.virt_err_y = 0.168929660576;
    msg.virt_err_z = 0.406335397124;
    msg.surf_fdbk_x = 0.970108462322;
    msg.surf_fdbk_y = 0.254168840052;
    msg.surf_fdbk_z = 0.979029325155;
    msg.surf_unkn_x = 0.879451982542;
    msg.surf_unkn_y = 0.921224178307;
    msg.surf_unkn_z = 0.603679304562;
    msg.ss_x = 0.394201387321;
    msg.ss_y = 0.804621722147;
    msg.ss_z = 0.578013072945;

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
    msg.setTimeStamp(0.677859136352);
    msg.setSource(2275U);
    msg.setSourceEntity(208U);
    msg.setDestination(23430U);
    msg.setDestinationEntity(63U);
    msg.ax_cmd = 0.362391956283;
    msg.ay_cmd = 0.955683370569;
    msg.az_cmd = 0.99727747524;
    msg.ax_des = 0.970696116008;
    msg.ay_des = 0.794611616174;
    msg.az_des = 0.64252950812;
    msg.virt_err_x = 0.669851662553;
    msg.virt_err_y = 0.923101048615;
    msg.virt_err_z = 0.930793161356;
    msg.surf_fdbk_x = 0.803766658902;
    msg.surf_fdbk_y = 0.291225663515;
    msg.surf_fdbk_z = 0.219208229641;
    msg.surf_unkn_x = 0.641340410362;
    msg.surf_unkn_y = 0.480278603592;
    msg.surf_unkn_z = 0.417788318394;
    msg.ss_x = 0.401513776954;
    msg.ss_y = 0.186786204849;
    msg.ss_z = 0.329451559905;

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
    msg.setTimeStamp(0.985035436324);
    msg.setSource(54135U);
    msg.setSourceEntity(122U);
    msg.setDestination(11099U);
    msg.setDestinationEntity(90U);
    msg.ax_cmd = 0.479346874237;
    msg.ay_cmd = 0.780692677855;
    msg.az_cmd = 0.533329163917;
    msg.ax_des = 0.824937464335;
    msg.ay_des = 0.881116164693;
    msg.az_des = 0.0829055152188;
    msg.virt_err_x = 0.247758538421;
    msg.virt_err_y = 0.951715751869;
    msg.virt_err_z = 0.475141894681;
    msg.surf_fdbk_x = 0.483062680783;
    msg.surf_fdbk_y = 0.623953587964;
    msg.surf_fdbk_z = 0.107139518725;
    msg.surf_unkn_x = 0.651434544727;
    msg.surf_unkn_y = 0.355220338666;
    msg.surf_unkn_z = 0.349491016911;
    msg.ss_x = 0.966153679509;
    msg.ss_y = 0.886769924026;
    msg.ss_z = 0.468368237047;

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
    msg.setTimeStamp(0.622996519281);
    msg.setSource(46183U);
    msg.setSourceEntity(105U);
    msg.setDestination(60385U);
    msg.setDestinationEntity(177U);
    msg.s_id.assign("XTOPKZIVUNDIKBGTWWYPSFZUOPHATCKSIYJLNNCLGNHICTWYYYVJKHUSCBKEFUXZWIXJLQYCLDEASRVRMMZNMWDRJLBAJZAZXVCORPHBRLVRBXGDGQYIZOAPVEBDEDORNMEDJSKRATCUFXVPHU");
    msg.dist = 0.289612878455;
    msg.err = 0.716122544013;
    msg.ctrl_imp = 0.0242820362721;
    msg.rel_dir_x = 0.0418854291327;
    msg.rel_dir_y = 0.945078932654;
    msg.rel_dir_z = 0.476486736278;
    msg.err_x = 0.84781338756;
    msg.err_y = 0.135434677816;
    msg.err_z = 0.783785937669;
    msg.rf_err_x = 0.348423043691;
    msg.rf_err_y = 0.454274643847;
    msg.rf_err_z = 0.580712717808;
    msg.rf_err_vx = 0.280861164604;
    msg.rf_err_vy = 0.931326052647;
    msg.rf_err_vz = 0.444845704589;
    msg.ss_x = 0.842793106174;
    msg.ss_y = 0.710036553178;
    msg.ss_z = 0.0876249782082;
    msg.virt_err_x = 0.864884305415;
    msg.virt_err_y = 0.871469252753;
    msg.virt_err_z = 0.88857819504;

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
    msg.setTimeStamp(0.781379369923);
    msg.setSource(42713U);
    msg.setSourceEntity(3U);
    msg.setDestination(218U);
    msg.setDestinationEntity(175U);
    msg.s_id.assign("IBANTRXRLDSSUVVOVQONPDSCRH");
    msg.dist = 0.537306554367;
    msg.err = 0.563941827347;
    msg.ctrl_imp = 0.813682935371;
    msg.rel_dir_x = 0.454096195479;
    msg.rel_dir_y = 0.992455854327;
    msg.rel_dir_z = 0.14238775339;
    msg.err_x = 0.286540601087;
    msg.err_y = 0.354012214316;
    msg.err_z = 0.310385941404;
    msg.rf_err_x = 0.790893866232;
    msg.rf_err_y = 0.996195757058;
    msg.rf_err_z = 0.267059925781;
    msg.rf_err_vx = 0.972342541209;
    msg.rf_err_vy = 0.128713452237;
    msg.rf_err_vz = 0.488564962585;
    msg.ss_x = 0.03089348083;
    msg.ss_y = 0.742980217263;
    msg.ss_z = 0.237680523061;
    msg.virt_err_x = 0.0798463115351;
    msg.virt_err_y = 0.635837639192;
    msg.virt_err_z = 0.0842351220785;

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
    msg.setTimeStamp(0.509373234073);
    msg.setSource(61562U);
    msg.setSourceEntity(235U);
    msg.setDestination(30973U);
    msg.setDestinationEntity(45U);
    msg.s_id.assign("AJUDVXFEDTVCTFXDQLGXDHDMLPUBWFOYETXZKSKOXRUZJUCGXVXYVOJNNKOORXNVWFHECCCWFAPVKWNAIYHQJJSVCKIO");
    msg.dist = 0.806798626408;
    msg.err = 0.215764046065;
    msg.ctrl_imp = 0.465661251747;
    msg.rel_dir_x = 0.940947986842;
    msg.rel_dir_y = 0.422727078584;
    msg.rel_dir_z = 0.0332830698725;
    msg.err_x = 0.992236690533;
    msg.err_y = 0.350178786597;
    msg.err_z = 0.225697792949;
    msg.rf_err_x = 0.930058755034;
    msg.rf_err_y = 0.831893551576;
    msg.rf_err_z = 0.976606423307;
    msg.rf_err_vx = 0.923399982525;
    msg.rf_err_vy = 0.369847567143;
    msg.rf_err_vz = 0.909385778221;
    msg.ss_x = 0.713573357715;
    msg.ss_y = 0.503825139549;
    msg.ss_z = 0.996122924414;
    msg.virt_err_x = 0.39032632172;
    msg.virt_err_y = 0.299162258518;
    msg.virt_err_z = 0.178136551825;

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
    msg.setTimeStamp(0.834276115594);
    msg.setSource(16941U);
    msg.setSourceEntity(137U);
    msg.setDestination(17309U);
    msg.setDestinationEntity(245U);
    msg.timeout = 701U;
    msg.rpm = 0.65341160076;
    msg.direction = 74U;
    msg.custom.assign("XJOBDDMKETPNKHYNTLOESSAXRIFPKIHBIXUEWRGOYAGPDVUVXNYZWVUMUJACRRBZMJWIY");

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
    msg.setTimeStamp(0.268006201181);
    msg.setSource(52420U);
    msg.setSourceEntity(33U);
    msg.setDestination(51748U);
    msg.setDestinationEntity(68U);
    msg.timeout = 40905U;
    msg.rpm = 0.848505674796;
    msg.direction = 141U;
    msg.custom.assign("PWAZGQHIRVMACMUZBFSMNLLCYYRLXQWNTUXHNDEQUEDLUTBZIRGABXBBIEEYCNJPBLADJHNAULSFGDOFKXSCUXCWGPSJMTWHGRONQHIEYXZAYERRDFKJVVCOGJHJEZUFBIOCGPYQLJEPCKOSTMSWHDQIFKXTXSUONFWNXPVSBTZZWZEOWKEPDRPJNZKYCHOMQMWVTMIKIVVVPIRPZDKOTVJQUICYBJYUTOQSFWXRQF");

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
    msg.setTimeStamp(0.7724740775);
    msg.setSource(4504U);
    msg.setSourceEntity(43U);
    msg.setDestination(37U);
    msg.setDestinationEntity(53U);
    msg.timeout = 9854U;
    msg.rpm = 0.583216601447;
    msg.direction = 234U;
    msg.custom.assign("BVQPELYGRHBZXUWKNOJLNVEEOQXISCYTRHRRHDOSFPNMUULHLTXNRWBQTIIMBDFJONOULHSZEAKKESDGNNRAJVDQNDGAWMZFDAFPGQTPCYXMYJHBIMSMNZADGKCCYIBQXCIKYVGOYFG");

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
    msg.setTimeStamp(0.439162042723);
    msg.setSource(16544U);
    msg.setSourceEntity(95U);
    msg.setDestination(63467U);
    msg.setDestinationEntity(225U);
    msg.formation_name.assign("SAKRYHEOWMPLXLVOYTGVPHSNLHUFSIVSVZMJLAAXBCTKBHXETWVYGXHAFTPIPKKQAGJUPEUXWNNRIIYUXVGWZQENPZQKGHZRBJQNZDWIUBMNOPAZDGLQNDTHJTSDMGAFLARJPQCGWTLTWRODQUXQWIZFZSDXEBUUUYLMHBISNCBCN");
    msg.type = 12U;
    msg.op = 36U;
    msg.group_name.assign("COGDQCSWVGKFIJEIWBWOWJPUQVLWYHBELFZUOQUAPBQECLXSTBDZPYGZEJYRRYHFHIRQOBHSGVLTAMPWLGVRYDAJFTBSCNXANOKKGINPCSMIFIFRSEDHJMJNZXYIIQPLHFDZUASKQGVTHRXAXSCXJMLJYVKGZUTFLVFXXNO");
    msg.plan_id.assign("JQUCJWEZKXFWCPDQVDRYRPHBWDHAJPLZGTHNDZOPEFSHBJOJWCIBLCXUBEZQFPJMGBSRMFXARZSNAQ");
    msg.description.assign("GEKCWBEOGLHRIPYUAVGSLGAYDFIZJONNJPMPYEKIAHTRVPLDMGSHMTVWPFOFSMBNFNTYVZYUQSIKCPLTPDYJVCSTOGLAHUBXMXQXOQGPRJTCCXSCIWZECZKKXNCJIZKAXJDWRNFYIXRSBTKIZYFEQBEAAWUZERXHOQFMQBLLMUOMSLDBQKFSGGEQFUMRHAJCIDURWLVGLWVPDNWIHHXKVYVRDOETJZWUZBPXHEANDCMNRTBJQ");
    msg.reference_frame = 120U;
    msg.leader_bank_lim = 0.305519213009;
    msg.leader_speed_min = 0.0922784387076;
    msg.leader_speed_max = 0.570229631721;
    msg.leader_alt_min = 0.0631081876525;
    msg.leader_alt_max = 0.982411342552;
    msg.pos_sim_err_lim = 0.863400862233;
    msg.pos_sim_err_wrn = 0.900052822572;
    msg.pos_sim_err_timeout = 25223U;
    msg.converg_max = 0.360025824286;
    msg.converg_timeout = 23846U;
    msg.comms_timeout = 32208U;
    msg.turb_lim = 0.668505499087;
    msg.custom.assign("RJTHTDUAGEEOYFQWYDBNMMF");

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
    msg.setTimeStamp(0.815794983822);
    msg.setSource(40903U);
    msg.setSourceEntity(124U);
    msg.setDestination(24240U);
    msg.setDestinationEntity(88U);
    msg.formation_name.assign("GEQSKAXMKPUFVXUXJPETVIQQMWMEPNNHHOICVACRVLWCXDCQTMZEWCHCZDYRPEWZPKZHUJYSDSFKFATAPPESMFJOQDRPLMNLNYLZKJZTOQWGBKRNWYOGKTDQBAXCIGMVHSYOSNUILIKUNDIJMRNHRBOXVKMXVLIBQBBREXUTCFZGUGNFYELRWSZXOSIYJOPJJWKHLCPNOVRRQHLMAXYWYBDABVJUGFZGFBUYTTGZVASBAHUQLHDIDTT");
    msg.type = 54U;
    msg.op = 130U;
    msg.group_name.assign("HOMNOYEJXPSBULQTMXNRXKEXCNFSGRXEWDELMGDLQXFEVQVNPRFIYTISNAKRJATQMURROZPWPWFLAAPJVYUBDCOKOOVHIXLCSIIUYDAHLLOZSWPTMIGBKUACBIJQQZDDTATZGHWFEBQTMSGEQSVUOCYVGTZBBJMEUNYTKDRGUHHCHWJNBLXXVJZYKGFMCKD");
    msg.plan_id.assign("QNOVHOWIMUIHHFKWMISDSUPXQLFPYRCQSAPLISVHWJSZRENGGARXXILOAHQDTHPWVZJUGZTGPCXBTOLLDKUGOBUTKLRFWQGOEAYRXEHYOICUCXYYPZVDMQTUKEVTUWZNZPQNBCZEGTJMMNOCVNNPVDRCCFPHSBTGDWJFFIMQKRYBHDJXKNYFEMF");
    msg.description.assign("TNAMBHJSLCDDFISOPDYVIXGZYFTSFZYRVUUIYXTMOKRQEOORQPOVBFGPWCDRTQNNWPBLXMVYGUFJCCOVYTGEFOXRPANEGBFJYTCBLQVWVLOZ");
    msg.reference_frame = 94U;
    msg.leader_bank_lim = 0.413812887187;
    msg.leader_speed_min = 0.34206238517;
    msg.leader_speed_max = 0.358391289121;
    msg.leader_alt_min = 0.117810560389;
    msg.leader_alt_max = 0.0184807023241;
    msg.pos_sim_err_lim = 0.953178425347;
    msg.pos_sim_err_wrn = 0.96007149855;
    msg.pos_sim_err_timeout = 13514U;
    msg.converg_max = 0.417520213298;
    msg.converg_timeout = 1149U;
    msg.comms_timeout = 52829U;
    msg.turb_lim = 0.550209363501;
    msg.custom.assign("JDTYQKVKHEIYFDAQKERFSZHXXZIOGDGTVJMVGTPAFGSJOEVFCRFDVWPXHTMMOSSWLUMPGXFWCBNQFKKUCJKRZTRWYZAYSCPPNLNXOKHUMLSBEUAYIDHOTIBMPABHYMCFKJBRAVZEEUQIZPGMXAHHHWRICBAEDYJNJRE");

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
    msg.setTimeStamp(0.268919528669);
    msg.setSource(6071U);
    msg.setSourceEntity(19U);
    msg.setDestination(28824U);
    msg.setDestinationEntity(139U);
    msg.formation_name.assign("VFKLNCNZTBPEVMOTPCLUAMOVFVFCVMCLYIARCQRHCABZIYKICDPSLQSIIKHJBYENQUPARYAOBXGSJRLTJEDWGKFVKMWT");
    msg.type = 211U;
    msg.op = 15U;
    msg.group_name.assign("IXYWWGAVQVZTOJHHREUFPFKIPTIYCUFKNXWUDULKOBZLRZKZFLMXNRGHCRRVHQIYEIDYQCHXOJHGPLLHTSCOJGAOSECLWPFASSQTSCGNRKFTAVNPQD");
    msg.plan_id.assign("JPCANJIXFDDAJYQHPYUBADQWZFVPVINHKXDLRCEJLOAETXTOWLVQMSKAJISGKNKMNCRNGXICEXOZQYIRYUZVOHKNGPMVQYRIFBQOMWLFKREIOKBQSGTWFBETPDLUVPTMUERTCNQLDYDEHWHBPUYBJIFYJBSFWHJWMCHSHROEWDAJXRDWAIHBZCPVOTEOGUMVXGNFEGZBPFULLCCXBHXSWVDUGZRKZLCAYKTZNUGZ");
    msg.description.assign("MEANTYWGQDBTNBBCXJOBUELTUIMUKINDKRGMYWPTXFTBTKYIRQZ");
    msg.reference_frame = 151U;
    msg.leader_bank_lim = 0.386744183556;
    msg.leader_speed_min = 0.903970227324;
    msg.leader_speed_max = 0.861392548025;
    msg.leader_alt_min = 0.497380169363;
    msg.leader_alt_max = 0.290819948078;
    msg.pos_sim_err_lim = 0.619916405015;
    msg.pos_sim_err_wrn = 0.441118370526;
    msg.pos_sim_err_timeout = 57646U;
    msg.converg_max = 0.455640164163;
    msg.converg_timeout = 25222U;
    msg.comms_timeout = 9557U;
    msg.turb_lim = 0.414927159592;
    msg.custom.assign("FLDVWWXNOZBASHIBTYZERZDBUICATKEVQVFPXYBAAWOWMJAQLEYAEOULZSZFJJJPXTPWUDTQXHBKDKYLGFCJMSGMBNLDOFRGLHUNKONAQZPVTWEPJHQINCOJRIOWHTHPWX");

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
    msg.setTimeStamp(0.857902204742);
    msg.setSource(4427U);
    msg.setSourceEntity(69U);
    msg.setDestination(63646U);
    msg.setDestinationEntity(88U);
    msg.timeout = 39153U;
    msg.lat = 0.229491355724;
    msg.lon = 0.126226638939;
    msg.z = 0.876756258935;
    msg.z_units = 26U;
    msg.speed = 0.793623521132;
    msg.speed_units = 11U;
    msg.custom.assign("BHLSETWYANDNXTSRPGJGDBTXMNNHSIEPRCMLDINUPBYGUWKTTQLYHYQMBVUDYSOYXSQXLVYZWFMULVQ");

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
    msg.setTimeStamp(0.815773968149);
    msg.setSource(2796U);
    msg.setSourceEntity(69U);
    msg.setDestination(37304U);
    msg.setDestinationEntity(228U);
    msg.timeout = 23192U;
    msg.lat = 0.880563027749;
    msg.lon = 0.0954987136394;
    msg.z = 0.938865379054;
    msg.z_units = 250U;
    msg.speed = 0.97572810027;
    msg.speed_units = 118U;
    msg.custom.assign("QBCYWSSDTAYKLWIUOAUIQEWTREGYRSIOAORQHXNGHTWWYFSWGSWJCVNBWMXTUVRYJHDVIMETJBFBGDFBPOARZGGMFPKEMKDLSCXDLYPPUJNJEJPPAFHVTZZUHPCIJGUQFXXHLZ");

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
    msg.setTimeStamp(0.771745355066);
    msg.setSource(5643U);
    msg.setSourceEntity(169U);
    msg.setDestination(61825U);
    msg.setDestinationEntity(174U);
    msg.timeout = 35645U;
    msg.lat = 0.756768577499;
    msg.lon = 0.866110076536;
    msg.z = 0.43547688439;
    msg.z_units = 34U;
    msg.speed = 0.76023818932;
    msg.speed_units = 79U;
    msg.custom.assign("PTZLBIMDPNMFTEHKXIPUUUZUWGIJOZAWGUTMVCGHVEGAJJCNJMQHKOHJXSBNXNQRZOHDOSJKJIRSTWTZU");

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
    msg.setTimeStamp(0.395903837059);
    msg.setSource(10366U);
    msg.setSourceEntity(114U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(238U);
    msg.timeout = 61491U;
    msg.lat = 0.473101217958;
    msg.lon = 0.903199263774;
    msg.z = 0.639808944639;
    msg.z_units = 52U;
    msg.speed = 0.256517907464;
    msg.speed_units = 227U;
    msg.custom.assign("UDOKTDSZYBUUNUHFTKEYGYXCVVDLWKGOXEVJWGACFJPMVJAYOSGZVSVWVYELOLQZNCBDZCQAEFQIMOSQMXQKIRIFQPAAXVIPLWSEMAYWRYDSHKRBNJFVWZYCRUZWYGAJMSBONOQREUNXBXIFZNIQBEDLCZKAHJOLICHFNISPUBHEWCBJXUG");

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
    msg.setTimeStamp(0.113347409699);
    msg.setSource(58585U);
    msg.setSourceEntity(50U);
    msg.setDestination(49120U);
    msg.setDestinationEntity(0U);
    msg.timeout = 42051U;
    msg.lat = 0.718898802609;
    msg.lon = 0.230444486034;
    msg.z = 0.799727824532;
    msg.z_units = 101U;
    msg.speed = 0.995770333951;
    msg.speed_units = 41U;
    msg.custom.assign("NPWTDPXHVYWODYGMLICGEHNJZWWYRQVKEWXLLO");

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
    msg.setTimeStamp(0.902940701439);
    msg.setSource(20942U);
    msg.setSourceEntity(68U);
    msg.setDestination(59308U);
    msg.setDestinationEntity(113U);
    msg.timeout = 39621U;
    msg.lat = 0.76606119844;
    msg.lon = 0.817458100203;
    msg.z = 0.474789607938;
    msg.z_units = 96U;
    msg.speed = 0.383059581268;
    msg.speed_units = 12U;
    msg.custom.assign("YOERDUTRLZTTFDGHSVBLPBDUEYZXKTCRULPWUJGPIGCCQHQXJGBNGJVHEFXXHOSUZUFQVRQPWEMMLANTDNMQNCLQMTEPDELPIDYARAYEXIVKRFGXFPSBVWYBIIOVQPRXIOADZHUZZEMTKVIGZGYNJIYFJBRFCCDOKRZWCJOUZV");

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
    msg.setTimeStamp(0.118362295848);
    msg.setSource(28573U);
    msg.setSourceEntity(87U);
    msg.setDestination(14553U);
    msg.setDestinationEntity(168U);
    msg.arrival_time = 0.483535566382;
    msg.lat = 0.403596457353;
    msg.lon = 0.224386453396;
    msg.z = 0.578561761125;
    msg.z_units = 85U;
    msg.travel_z = 0.817502251912;
    msg.travel_z_units = 48U;
    msg.delayed = 69U;

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
    msg.setTimeStamp(0.571479006308);
    msg.setSource(45469U);
    msg.setSourceEntity(119U);
    msg.setDestination(33971U);
    msg.setDestinationEntity(210U);
    msg.arrival_time = 0.851387433215;
    msg.lat = 0.520026986717;
    msg.lon = 0.982484437047;
    msg.z = 0.822411396096;
    msg.z_units = 85U;
    msg.travel_z = 0.54938977349;
    msg.travel_z_units = 211U;
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
    msg.setTimeStamp(0.708063483676);
    msg.setSource(59930U);
    msg.setSourceEntity(189U);
    msg.setDestination(15969U);
    msg.setDestinationEntity(193U);
    msg.arrival_time = 0.715134594852;
    msg.lat = 0.807998602274;
    msg.lon = 0.939285667307;
    msg.z = 0.873177601014;
    msg.z_units = 214U;
    msg.travel_z = 0.312013451231;
    msg.travel_z_units = 189U;
    msg.delayed = 111U;

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
    msg.setTimeStamp(0.286216951519);
    msg.setSource(52250U);
    msg.setSourceEntity(142U);
    msg.setDestination(32663U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.66944650925;
    msg.lon = 0.851638722851;
    msg.z = 0.352332371277;
    msg.z_units = 8U;
    msg.speed = 0.0294291885652;
    msg.speed_units = 149U;
    msg.bearing = 0.405213326304;
    msg.cross_angle = 0.608817665373;
    msg.width = 0.951278975601;
    msg.length = 0.449043752124;
    msg.coff = 149U;
    msg.angaperture = 0.0596009351761;
    msg.range = 9542U;
    msg.overlap = 41U;
    msg.flags = 9U;
    msg.custom.assign("ZPKSTSWJFLMWYRIDBRUJFPMMLCQYWXFKYAXSPPHEVCWVTDBXEFSPKVHLUQCYANLMKGNBPINZRBBHJCNQLGTEZDKAEEEQMZCSSGDSFAANLVIAHDDGHMRTCIATENWZCFRXPKYTJWYOLIJQPTBUGLSMUDBNGQGTCFBHFVZQWVYMBIAUFDQHJVHDUEEIUZGAPJBUUZNYYHOXWQXSTXIKAOEOGRZLRLYZXKOONXXHIOKFRJQC");

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
    msg.setTimeStamp(0.658003964551);
    msg.setSource(56809U);
    msg.setSourceEntity(19U);
    msg.setDestination(23683U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.610616790859;
    msg.lon = 0.198251345772;
    msg.z = 0.187369862033;
    msg.z_units = 248U;
    msg.speed = 0.924890423756;
    msg.speed_units = 211U;
    msg.bearing = 0.459645995657;
    msg.cross_angle = 0.921850801493;
    msg.width = 0.53008916199;
    msg.length = 0.736021026947;
    msg.coff = 200U;
    msg.angaperture = 0.878127336977;
    msg.range = 3507U;
    msg.overlap = 170U;
    msg.flags = 182U;
    msg.custom.assign("MEMRNQLAHBFUMLAAGXFQVLTDJWGNGVLOKTQAYUPAYSIWHFWSYIKHBMIUCQFJPWTLOBVYTDJEDYAJZGNDZOWPXVIOHDJOCKSJVZHTKTBUNEVRCHZCVGLMFKXOPZLKMQOUXRDGOXXISBPMTPXFDUTBAWNGSDLUICPLCWKBVGEXXBKGJSMVSIYJWNJRFAURCPFERPEDHTC");

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
    msg.setTimeStamp(0.682425277931);
    msg.setSource(6081U);
    msg.setSourceEntity(98U);
    msg.setDestination(65145U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.826518689009;
    msg.lon = 0.480206079448;
    msg.z = 0.449364494492;
    msg.z_units = 45U;
    msg.speed = 0.145419606465;
    msg.speed_units = 156U;
    msg.bearing = 0.943820856342;
    msg.cross_angle = 0.329089883374;
    msg.width = 0.667441946598;
    msg.length = 0.159249824565;
    msg.coff = 188U;
    msg.angaperture = 0.031913284531;
    msg.range = 22801U;
    msg.overlap = 168U;
    msg.flags = 147U;
    msg.custom.assign("MCTOOBXKBIKKWWBHJAASQPTVWCDRGL");

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
    msg.setTimeStamp(0.935419553437);
    msg.setSource(39462U);
    msg.setSourceEntity(4U);
    msg.setDestination(3341U);
    msg.setDestinationEntity(44U);
    msg.timeout = 40956U;
    msg.lat = 0.595977388447;
    msg.lon = 0.960458174194;
    msg.z = 0.219811792664;
    msg.z_units = 119U;
    msg.speed = 0.388079522903;
    msg.speed_units = 88U;
    msg.syringe0 = 244U;
    msg.syringe1 = 189U;
    msg.syringe2 = 80U;
    msg.custom.assign("GLVQJMBVHMLOZHAWBXJDPVAXIWQVOTAKECYDYUEMJJRBNSKOYKCVOUQQEWAKDICDABIDHTXXYDOUXIYLFZAHGSKBVSNBNYPBNEZKTIHCJDMDKQTCYSGSAMEPQGUMEMULQPZNERGHRLGTXQFTZZYGBCIBPKCOMWAHZFLTRPXEZGFIUSHVOTHKRJDSGOMJUJFCOQCWVHFJJTZRURA");

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
    msg.setTimeStamp(0.301611675242);
    msg.setSource(62700U);
    msg.setSourceEntity(246U);
    msg.setDestination(6851U);
    msg.setDestinationEntity(125U);
    msg.timeout = 63038U;
    msg.lat = 0.777404508875;
    msg.lon = 0.362955736324;
    msg.z = 0.0120653292589;
    msg.z_units = 94U;
    msg.speed = 0.171010900183;
    msg.speed_units = 150U;
    msg.syringe0 = 194U;
    msg.syringe1 = 210U;
    msg.syringe2 = 118U;
    msg.custom.assign("VGNSAXETTZKEEIDXPDCQWITFYOCCSLURIMCQCKMPSPYEUNBOYEFXHSVAVVOLTZZJJBKHRWSFHKRDAGWOYQAFJGPLTUTKBRJAPWDQNCZUUOFRQXSWZTPCNDVHMQWVJPEJKXRHRYWEJXMLBFYSIBIO");

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
    msg.setTimeStamp(0.0855589263553);
    msg.setSource(59103U);
    msg.setSourceEntity(106U);
    msg.setDestination(3869U);
    msg.setDestinationEntity(6U);
    msg.timeout = 61944U;
    msg.lat = 0.117078440124;
    msg.lon = 0.891145159886;
    msg.z = 0.641503742734;
    msg.z_units = 249U;
    msg.speed = 0.0840114305341;
    msg.speed_units = 223U;
    msg.syringe0 = 42U;
    msg.syringe1 = 175U;
    msg.syringe2 = 63U;
    msg.custom.assign("ASHOZWWHUGRTBRAJSQWZOAIMVUPMBQFTTCYQTLJVEDEEVQFWOUQPVKWCSMFPUGKCNXPODHGQUYZGCCAPJROJYXONHHDRXLJZIXDYVLFTLOKXEHBMGTHZTJWONICWFMGLEBSUVPNDVBIWFPVKAVICAYBDZMPULEPRAXSZZFHGSIDSCSKCSXZEPNDNLSLJBLW");

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
    msg.setTimeStamp(0.930883779031);
    msg.setSource(35939U);
    msg.setSourceEntity(101U);
    msg.setDestination(34018U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.271471430673);
    msg.setSource(12878U);
    msg.setSourceEntity(32U);
    msg.setDestination(7226U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.431567354419);
    msg.setSource(60900U);
    msg.setSourceEntity(78U);
    msg.setDestination(17259U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.736836469469);
    msg.setSource(30897U);
    msg.setSourceEntity(124U);
    msg.setDestination(47821U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.668971152756;
    msg.lon = 0.383332645306;
    msg.z = 0.0739752512283;
    msg.z_units = 234U;
    msg.speed = 0.259437855372;
    msg.speed_units = 179U;
    msg.takeoff_pitch = 0.102397165443;
    msg.custom.assign("JTKIJLTBJNIMBPYMZQELYNEYDPNXYKREYYGJNZKKTQIPWAVWSHFLZCSAJXOLCVBQUZZCRREGQUEMVQSPJSVSTEMDCCVYPKIFJNKFJZMHHAIDNFHNXVCDQQUIDFRUMDFMUSGXITBFNSKESRMHAOGBLGXAWYUKDHCQOFTJFIPVIEXFZIMULKTGNGPXQOBTAUCAUOOBOHYYPQONWDVCOL");

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
    msg.setTimeStamp(0.708701090797);
    msg.setSource(63762U);
    msg.setSourceEntity(69U);
    msg.setDestination(22712U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.489432650048;
    msg.lon = 0.536765177737;
    msg.z = 0.895375592898;
    msg.z_units = 77U;
    msg.speed = 0.829204287486;
    msg.speed_units = 252U;
    msg.takeoff_pitch = 0.959310754997;
    msg.custom.assign("LOVMPBQFMJAZCJVNZGSBHYOHLCBJIUBPFZFOALMQATFWQODFMTVKDHRYBFAGKNXVVQMXFZKTEZOYPRQIKBSHDNWLQHVCTUPWUDDCZXGITAUXRZJCFGRYCDQEO");

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
    msg.setTimeStamp(0.0370320789222);
    msg.setSource(59693U);
    msg.setSourceEntity(46U);
    msg.setDestination(9548U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.604314634263;
    msg.lon = 0.203578148363;
    msg.z = 0.798197763959;
    msg.z_units = 67U;
    msg.speed = 0.28873188598;
    msg.speed_units = 14U;
    msg.takeoff_pitch = 0.94780465695;
    msg.custom.assign("OJEUNTDIRZKDNLVRVAMXRLOQEOFCSGCSVLODFEQQGAUZHJCVMCDKDTWUDMQJFOCNSASSMVMFKOFBTPHUHRBBXJTELUPYXAOIZSAQOVGEHXYTBPVZXUWUBCAIFBYOHWMLRJYKOWBKFGVJHXUPSTFPILPFMYCXEQTUIKJUBRDENGAZRHLWDIXHGYTQBGNSWAGJPVPSZYHBPIGGZWNHCYAWEDCRXRDMINZLKIQWVEMXTWLAKJINQCNJFKM");

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
    msg.setTimeStamp(0.00623452830606);
    msg.setSource(7802U);
    msg.setSourceEntity(156U);
    msg.setDestination(18171U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.201144819898;
    msg.lon = 0.296860625213;
    msg.z = 0.0223518151645;
    msg.z_units = 22U;
    msg.speed = 0.745240010697;
    msg.speed_units = 10U;
    msg.abort_z = 0.382112841957;
    msg.bearing = 0.308763128312;
    msg.glide_slope = 23U;
    msg.glide_slope_alt = 0.355365809232;
    msg.custom.assign("RKANPPILEIAUDFODVQDLAVSNYMOYWXHOAQSSKAHWYCKXNOXDPXGBAHWVZGXFKUETCHLGCFTSZNINWQZMGZDRPUYMZYNKLRNERMILFZUGBBXUIVSTBOWEFTLPFJRAWIBMRPSIUVQZEMUCVQBCCDYTFWQVNTFSIUETOKEPKJQGYOYWOQRDHECETJKXKCZEGJVSMIPJXHXZPSBJMGBZAUQXYLVIJJHHADWMHCRB");

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
    msg.setTimeStamp(0.474041163877);
    msg.setSource(28985U);
    msg.setSourceEntity(73U);
    msg.setDestination(55039U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.688049034171;
    msg.lon = 0.521448647558;
    msg.z = 0.0539723122752;
    msg.z_units = 46U;
    msg.speed = 0.192754524187;
    msg.speed_units = 142U;
    msg.abort_z = 0.886912574043;
    msg.bearing = 0.474933756723;
    msg.glide_slope = 47U;
    msg.glide_slope_alt = 0.92797828596;
    msg.custom.assign("KDDQAQFNVRPWFOEQXYSQ");

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
    msg.setTimeStamp(0.220382427783);
    msg.setSource(65159U);
    msg.setSourceEntity(241U);
    msg.setDestination(65520U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.580495584442;
    msg.lon = 0.862654521875;
    msg.z = 0.568594672362;
    msg.z_units = 143U;
    msg.speed = 0.748701181619;
    msg.speed_units = 84U;
    msg.abort_z = 0.656844045575;
    msg.bearing = 0.695774964263;
    msg.glide_slope = 198U;
    msg.glide_slope_alt = 0.829948841582;
    msg.custom.assign("NCZOMTIMPZNIECHXGEYHBDNHCRJRMYVTXDRODUKLBYCQKNRPQZGRFTVZMUCXDVDNUOLHSEBWNIAFTOFSUUCHGLOHJLEQGKXKLETELDOJHKPIMKSZRFIGSJYRUCJLBVYOJVJGKTFSTFEBQFAUKNWXMWQFEVDOR");

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
    msg.setTimeStamp(0.234572070273);
    msg.setSource(47980U);
    msg.setSourceEntity(251U);
    msg.setDestination(35060U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.224580901616;
    msg.lon = 0.208615658846;
    msg.speed = 0.235631082469;
    msg.speed_units = 139U;
    msg.limits = 143U;
    msg.max_depth = 0.54266935296;
    msg.min_alt = 0.938818141745;
    msg.time_limit = 0.093940437513;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.342188410281;
    tmp_msg_0.lon = 0.993573648929;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HGDOKVKCJYZIHBTKUPFLUXQVKWGSFIMCHLQOGRCIVNOWQKSNDRQMHIYSRNKCEXUXWJBBWOIZHHNLYBFGAUOSVXJRIGFKSZKITZETIEGHWAFJEXQMOOZVGARDJQPGRJLDZWJRESZCLGRUERMVALJBIVQMMDWLXBZLZWALNQNFSKCXBFYMEXHTCPOTUCNPEYPHQPQMMXLUTPPBRTA");
    msg.custom.assign("OJLMRIAPTSGUXXKULLXEHJPJGAASFTDCCAWNKEQUYZZHICTLRFBDZHSPQBMCTHQMCTGOVEIZMYIRKKLMYKKPESSFAENGURICPXLVNDWQKPHJ");

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
    msg.setTimeStamp(0.430374205768);
    msg.setSource(15116U);
    msg.setSourceEntity(162U);
    msg.setDestination(9583U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.383020809584;
    msg.lon = 0.5471765812;
    msg.speed = 0.832056172375;
    msg.speed_units = 213U;
    msg.limits = 86U;
    msg.max_depth = 0.279836640849;
    msg.min_alt = 0.672566956822;
    msg.time_limit = 0.0951876426128;
    msg.controller.assign("JBDHNJOXIAOZPHVJNVFVCEQNOSYGMUDCEXNJDSDACDCVNTWPISRZLQTSZEMUXTRDTWRBAOACNCQRLYCNUGRJNSGRXGBRUIQPGVKVOFWYLWFHTTRHPPHQBGMLUUOSJODPSMVQZGXXIMPUQYLGEAWOVEJBWFK");
    msg.custom.assign("DHTQKVSZDKZZPWRBOASJKBWOTJIWHBISBRCUGWECADVPMVRTWCXOOWZTGYUCVHYERYXFXYCDNYJFMFQYKMTRLAAKMXOMMSZCQBORFEVYPXXWTGXJFGDILLAAQTSNSYIWNHZGPBKRLCMDTGBUONVJZIFHQEAPSJQGVOQPBRHEDSHPVVCKEFCVACFHXMOMBDUAFKTEUNDUXJLHELJAIUSRIUSXWN");

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
    msg.setTimeStamp(0.301689177143);
    msg.setSource(62348U);
    msg.setSourceEntity(143U);
    msg.setDestination(5023U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.216446442576;
    msg.lon = 0.0419598546266;
    msg.speed = 0.671746354559;
    msg.speed_units = 161U;
    msg.limits = 158U;
    msg.max_depth = 0.559272720105;
    msg.min_alt = 0.331552185113;
    msg.time_limit = 0.842332520885;
    msg.controller.assign("JZPNBSUZLKCQJWWAONNSMHPOHSXDYNSUUJWFP");
    msg.custom.assign("YSEISQYFJLCVXGUHXOZJKETYFRVKQBCAQGDPSBFRCUDJWDKAOCZNQBFRAKSXZLNKZQDHWYJGABBNLJWHPSHOPMQLXTMOILCBEGOPHFGTXEZGUROBMVWEYNVOLUHDXBXDWTABUFVPFDTVPAMJIEXUZVTIKWGAZCGQDBUMUOMTIGTWRYTLRENPAMJKOMNAFPCSXCHHNYKNGTEYKOAFISRNLWCHNZJHQYVEEQRMSPKSJI");

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
    msg.setTimeStamp(0.991940535306);
    msg.setSource(37215U);
    msg.setSourceEntity(162U);
    msg.setDestination(44660U);
    msg.setDestinationEntity(106U);
    msg.target.assign("ZHPUYSJVQTQXDEXFECLGLKMUDPPICRAXBRHJRVTCL");
    msg.max_speed = 0.337596269775;
    msg.speed_units = 131U;
    msg.lat = 0.0645301410961;
    msg.lon = 0.854468990426;
    msg.z = 0.513575328608;
    msg.z_units = 59U;
    msg.custom.assign("ZFMSQVGKPRKQNJTEFICYQPCUJUEBJYQDIRANAHBUIUNEAJHTTIUEPPWVMLFNYJAEYXRROAXVWIRYRROGMKNGZOUOIWPXVCIYORNBBFUCJZQKOLXNZZIVFSUUROVBMJMJNNAJXLTEKQHWDFGBWSQCCOHDGDGPEXOXXCTJSAHPKEKLCDYDPKPWCQYBGTGMDZHAWCRDQVBGKMWTASZHQZZDFVTXMLYIVDSLHALMEFSSUFWZLGVOBSHH");

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
    msg.setTimeStamp(0.613043287186);
    msg.setSource(29014U);
    msg.setSourceEntity(52U);
    msg.setDestination(53488U);
    msg.setDestinationEntity(123U);
    msg.target.assign("HRXBYIXEBDSYKZJPOOAGVFUQSXYOIVKRZJRCSAZTERPNCXQHCXEFLNIKZILQFTUIJMEDIDTOJPRGNLZKXPDDJBXCPRGBFSIVEXFEMOFQEUEKWGAFLEDSMAJLUOWTWCDNPSVHTREYTKBWADHMAAYWQYPVGBGCNJZURWJQQPFHKOTMILJSNPNLYTYIKIB");
    msg.max_speed = 0.0242244866848;
    msg.speed_units = 46U;
    msg.lat = 0.738129241079;
    msg.lon = 0.523823077863;
    msg.z = 0.345061481643;
    msg.z_units = 97U;
    msg.custom.assign("TNQJBWQRSKMIISSRNXCYYVIUPOJVRKGUYKNFBETKZCVATPVQZOQQAGNULCZNZVEMKDDBSAIXDOSPCAPMWCLFPYEZQATECVRMXRGHSXATCZKMBILGFIEDNDPWZUGHTBMLBDSDOAJTDRFBOYAQYEBCUQLGLUXAMEJLMNRFXWOHVSENYLNPJIG");

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
    msg.setTimeStamp(0.519440276835);
    msg.setSource(65030U);
    msg.setSourceEntity(119U);
    msg.setDestination(37500U);
    msg.setDestinationEntity(252U);
    msg.target.assign("XWHVVFDVPEBDCQHARAYUNYKWMOGZXWGODMYWJNFOEISNIVIBVBPFKULZKXIVEQQICCOJZOHJTJDHTRTSNWXLSGQEIMBWCGYLUMGNFCPEKQRT");
    msg.max_speed = 0.554270846274;
    msg.speed_units = 243U;
    msg.lat = 0.13146147795;
    msg.lon = 0.115255259139;
    msg.z = 0.480106503858;
    msg.z_units = 64U;
    msg.custom.assign("ZRWRKBHGTWGXOOHGTZKCGURTOULSUECXJTOOPIGLCLHPFMYPFNYWQSFULDIKISVWTYYEAJUOACFNZZMWYCJDPVQEZRMFIBTVVMXUBKCCXGNCH");

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
    msg.setTimeStamp(0.854498118126);
    msg.setSource(12735U);
    msg.setSourceEntity(233U);
    msg.setDestination(22415U);
    msg.setDestinationEntity(164U);
    msg.timeout = 31417U;
    msg.lat = 0.468174068266;
    msg.lon = 0.67378011369;
    msg.speed = 0.00612212587908;
    msg.speed_units = 248U;
    msg.custom.assign("XCXAEAHCVPURLXMVBNPYYQFISMRDICFCUYSWIWMNVMOXKRUSWKYWTSWAPWDNTJOTYDRXAWFEOXAFJHSZTVKUSAROMNZGSEPXYJVZOGJCBJPNT");

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
    msg.setTimeStamp(0.329998209888);
    msg.setSource(29484U);
    msg.setSourceEntity(21U);
    msg.setDestination(58164U);
    msg.setDestinationEntity(118U);
    msg.timeout = 15467U;
    msg.lat = 0.816133318658;
    msg.lon = 0.742085150072;
    msg.speed = 0.208307013133;
    msg.speed_units = 167U;
    msg.custom.assign("OSIHVZGUZRUGANRJJIMOERDNJCUGWTAQMVQKPLWLXRGTYPHNBIHBRPLKAQUIWPXXMIPQYDJXHYQ");

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
    msg.setTimeStamp(0.511625794363);
    msg.setSource(22643U);
    msg.setSourceEntity(67U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(226U);
    msg.timeout = 55500U;
    msg.lat = 0.398958323959;
    msg.lon = 0.463809671858;
    msg.speed = 0.990184420783;
    msg.speed_units = 116U;
    msg.custom.assign("ICBNNDSPKATBTVUNDFIILFKPVIELCNUERLYIECDCXUSAQTOFBAMMYKWGBBLSOLQYPRQKTYVBPBDFRNHZGCOWWFESFMJYPXWRGYSPHTPTLGCZYHPUKOIIZIJSFADFQDOROTBFQQWZGWARGDJMUDRQRPBGQAJEZDOMWSSRNXHLOCAHXAYCZZGUTKMLHUIAJKC");

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
    msg.setTimeStamp(0.426659959222);
    msg.setSource(26594U);
    msg.setSourceEntity(101U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.960778076404;
    msg.lon = 0.327420095499;
    msg.z = 0.0188362755836;
    msg.z_units = 174U;
    msg.radius = 0.749517980118;
    msg.duration = 54669U;
    msg.speed = 0.503979816623;
    msg.speed_units = 138U;
    msg.popup_period = 1412U;
    msg.popup_duration = 24853U;
    msg.flags = 53U;
    msg.custom.assign("DBQNXNKBCGQMXGASOOUIWRHJNJYRAEEJGHBIGSJEKKKSOZTZCDLFPJGGYONRMVQWVMMYQDDTNVUWLODTXBPAOUEIZYBDHTRIBQJONBLYHUIRFSXCGESVKQFXAUUNEIYZJRILZWZAMLYNZMPLXTEXOXYKLBSHCFRVGQDEQPABFNYAPPXHYEKZWWTWUPTTLFGXZPEQKAIZLUCMNHWCJMUVHWQFCOTGDBVTVPOSDFKJCCMKLFMJSVUHSPHR");

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
    msg.setTimeStamp(0.385304121294);
    msg.setSource(32344U);
    msg.setSourceEntity(12U);
    msg.setDestination(3442U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.898541739579;
    msg.lon = 0.221277499645;
    msg.z = 0.652928184733;
    msg.z_units = 47U;
    msg.radius = 0.511804829709;
    msg.duration = 49965U;
    msg.speed = 0.903286519822;
    msg.speed_units = 138U;
    msg.popup_period = 32212U;
    msg.popup_duration = 34530U;
    msg.flags = 127U;
    msg.custom.assign("MAVWRQBAMVZIAQUQTVBHNAAESJWCYBNSYPLRXUWGUNLUUKDVK");

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
    msg.setTimeStamp(0.602888418445);
    msg.setSource(26066U);
    msg.setSourceEntity(34U);
    msg.setDestination(64387U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.92751499181;
    msg.lon = 0.174259481071;
    msg.z = 0.176919294287;
    msg.z_units = 87U;
    msg.radius = 0.00252126366067;
    msg.duration = 56597U;
    msg.speed = 0.972616860256;
    msg.speed_units = 22U;
    msg.popup_period = 40909U;
    msg.popup_duration = 12423U;
    msg.flags = 92U;
    msg.custom.assign("ZWGSHPPIOAJJJEXUKIJAKGSHPZBYGFMWJTCBRLRIUPFLJSVZRKMYTDQEUBPGIOWOAJPUFXTORZPHWCFUENHEAPYHQKDMFOARXNTYCEQKVUIUJONDVDBHKWIXVNMVWLQUOAQCQVXMEZTYYMIWSQRGWSIQXXJVCKOTSPQYZBUNAKBLBLIKHRODPCSBFGODTTNGWZTXRNWKYCQMSLEDDVHCCBYXLNJEMVNUFLDV");

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
    msg.setTimeStamp(0.247158999117);
    msg.setSource(50572U);
    msg.setSourceEntity(27U);
    msg.setDestination(27580U);
    msg.setDestinationEntity(1U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MHJYPZKEAQOCPNZDSSWYRYKJOKFBWVBVK");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 1835U;
    tmp_tmp_msg_0_0.custom.assign("JAGIYJHWPBPGSFZFPDHPQGFICYMONTOEKORSSPTKCUBYIEYPKVOQZCOVJICMEYUWAVLRNDFDFXJHBIOVRBVHZZSJOXMEKAHTCQZQNBNWDKZUNLOQVCIFBBVONXNGLDDBJYENEXXICQGUZUSKGHGKTTGZAYVSDDFWRLCEUFQSTSEAAQGUYMCIUXWKPYMTNVUFNRBJMCTAAJR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UamRxFrame tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sys_src.assign("HSOAKOWPFDCPRCUMCOBUVLIDVNIQBSFTGRYEHQOBJEJMZXRUJNLRWINMYKHZXAIVYXLEGYGMKDRTUTQSHVUJFEYFORVILRZLDQELYWLJZSTQHIYDEPFMPZPOVCPYBTLUWPCQLTCFNSVTRIIDZUMEXCDNWGWTGCYMJXEKANNZZXWGXBAFQHDAGTADKMGBSUQVOWFSGKIBQHSRWHWUNHURKXKZVJASJCSVXKIOJFHBOJDMPBTENAGEAQZXB");
    tmp_tmp_msg_0_1.sys_dst.assign("GFTEKKQURJHFDFGYZNHXUNQIJPDZQJISCTTILFXCPMYEWQGVSNRJNCMEWLZXFYXWKWXFIQGDLYZZUPMVLKKDLXPBXOQEBDRCJUSSIWQICGMABVSMFYFPWAKZFLLAAVCOBJEOPRYHBVOHESHFNRE");
    tmp_tmp_msg_0_1.flags = 8U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {87, -59, -103, 31, 36, 113, -81, 124, -76, 66, -34, 54, 119, -72, 73, -24, -58, 111, 70, -86, -101, 123, 93, -64, -88, 67, -97, -88, 11, 40, 12, 21, 118, -90, -100, -25, -110, 80, 72, 47, -127, -46, 51, 68, -100, 32, 108, 51, -94, -90, -70, -32, 111, -19, 47, -34, -32, -95, -54, 19, -116, 113, 61, -1, 78, -17, 25, 116, 54, 1, -114, -120, 110, 80, -111, -23, 98, 121, -76, 5, 104, 16, -114, 56, 41, 59, 1, 33, -16, 39, 12, 29, 49, -61, -118, -67, 87, 63, 58, -20, -101, -41, -92, -93, 112};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
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
    msg.setTimeStamp(0.729534437835);
    msg.setSource(44026U);
    msg.setSourceEntity(163U);
    msg.setDestination(51757U);
    msg.setDestinationEntity(208U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("UJAGTMHHLQVWLXMMYCIVKSDAXSIDWKLOUDWHXJJBRHVBYKZQGMQMGPMDZTUGZSXFRIDAPWOEALBQWLRISJZYRYJEHFKOGLNSGUQTGEUQAVUADGCYZITUQDYCJPFFRBIOKMHNHWJJNHURQAAINTMPQYWISAOPCFPQOVENBJUNRCCECVXSLRCMEPXTMNVXHCFYGOERNLZZFOPZTDPTYFEXKBHBJZTSOGLAUCWEKVWP");
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.831502897533;
    tmp_tmp_msg_0_0.lon = 0.699130442811;
    tmp_tmp_msg_0_0.z = 0.670106837907;
    tmp_tmp_msg_0_0.z_units = 0U;
    tmp_tmp_msg_0_0.radius = 0.789636445148;
    tmp_tmp_msg_0_0.duration = 16706U;
    tmp_tmp_msg_0_0.speed = 0.908153537237;
    tmp_tmp_msg_0_0.speed_units = 16U;
    tmp_tmp_msg_0_0.popup_period = 35084U;
    tmp_tmp_msg_0_0.popup_duration = 28496U;
    tmp_tmp_msg_0_0.flags = 132U;
    tmp_tmp_msg_0_0.custom.assign("ZLGBGPBLPVXGRWCYWWEXUAAXSKBUYLSOPFAWBPSDMYHDZGRMUOQEURNBVDNLBHTIRSQPVTDPZNHIIIFAYMKOJQHYVJJJTFKMOTLGQBKAMSIKSPMUWHRRVCVNSYRZTLDEHKOASMVZDQIZPUKTFQXAFJFFBMGXYOGEROILNNONIUQRQWCQEZYSYUDEHSJEEQZCGGXMOCHUXHHLDPCFUWCJCJTDMXJC");
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
    msg.setTimeStamp(0.635020049177);
    msg.setSource(6984U);
    msg.setSourceEntity(110U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(111U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CHTQFOMIICXWOMXMRQVVPYCEENKZSMDFAEVUUWXSKYKJNOJRTZPTIBQJFYLCEWFWRZAZKOZXAYUNVLQAUGWGYODPROOEMKXKWXRWHGXGBHKLPJBRVPPGWPYZALUWNIDRSUTCQPFLARTSLBODHIRATQFMZFZSCAYQDIKJBVIGCHBZQJOHOVIMIUBCMEDJPN");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 43971U;
    tmp_tmp_msg_0_0.name.assign("LNHHOHTAYKNMAVBVZUSNVCYFMAPKBZVDANMRFUQRVKPPZQZIYQFRTDGXKGLLRXEMQBZWOFGDWZWWWBODICQOSJAUQGBJEILWIYJUPU");
    tmp_tmp_msg_0_0.custom.assign("YIENQBZNBMCGNGXGVZHDKVRHGXVLQXCMEVXNFWTXOEMOCIHCRLXINYQCDCYWPBTIOXDHWENZWFMISWOHPFOSYAPJTQDJZBUZYZNYUDOABAKLVPBXZLQFKSBEWETYUFOUQNYRPGSJMJTAEROTCPLLKAJMAUSOQXRUWZHRFRQEPKWMZHUIHLTUMGVDPWGSSKKPJEFKAKMTAZNGISAHYSFDGXIIVHCMQRUU");
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
    msg.setTimeStamp(0.722634411164);
    msg.setSource(64904U);
    msg.setSourceEntity(144U);
    msg.setDestination(24457U);
    msg.setDestinationEntity(185U);
    msg.timeout = 60942U;
    msg.lat = 0.927379182323;
    msg.lon = 0.637422408154;
    msg.z = 0.055929505916;
    msg.z_units = 8U;
    msg.speed = 0.645304833283;
    msg.speed_units = 163U;
    msg.bearing = 0.0910326087831;
    msg.width = 0.44560382665;
    msg.direction = 253U;
    msg.custom.assign("CEEOUVCUZFIYVXGYQRTMXKDXKQYEHZCVZFOVHYNAYEJLKYAQSJZYOCIRPMTZSHILNIQORFUSKASLODTWZUBBHGUVGDEXMZEXP");

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
    msg.setTimeStamp(0.192151319029);
    msg.setSource(43476U);
    msg.setSourceEntity(193U);
    msg.setDestination(59037U);
    msg.setDestinationEntity(64U);
    msg.timeout = 51352U;
    msg.lat = 0.105684195834;
    msg.lon = 0.312028436816;
    msg.z = 0.869981365943;
    msg.z_units = 177U;
    msg.speed = 0.947710153033;
    msg.speed_units = 44U;
    msg.bearing = 0.238069692168;
    msg.width = 0.225841051962;
    msg.direction = 186U;
    msg.custom.assign("BKXAORZQOHZKWDHYKKCJNQBWQQIGEBUKDPSFXHY");

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
    msg.setTimeStamp(0.629539543772);
    msg.setSource(47016U);
    msg.setSourceEntity(104U);
    msg.setDestination(50694U);
    msg.setDestinationEntity(2U);
    msg.timeout = 33597U;
    msg.lat = 0.00260432220563;
    msg.lon = 0.985404986506;
    msg.z = 0.871672236249;
    msg.z_units = 237U;
    msg.speed = 0.307457154377;
    msg.speed_units = 84U;
    msg.bearing = 0.3750394281;
    msg.width = 0.749536680601;
    msg.direction = 197U;
    msg.custom.assign("YOBJHROVUZHBOQHCJTKIJAIMMPATWIWWERGESBYHYQOQOYDVBKPEFTBQRYPXPSYLXRYVBQGKFUREZLTXFITCCZEHGKOAHXFMJSKYDMVWAIKRSVGGIMPFIYLLUBINFZKAXLCDNVLJMEUECAVDXOOBBOPFZNUNRNYFJIWCNQCTKNXDGAEJQHMZEKMUGIDNDUVNWSSZFFJEP");

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
    msg.setTimeStamp(0.962949196059);
    msg.setSource(38735U);
    msg.setSourceEntity(203U);
    msg.setDestination(48147U);
    msg.setDestinationEntity(31U);
    msg.op_mode = 55U;
    msg.error_count = 201U;
    msg.error_ents.assign("WLAOLEZYJKKCPPAQFWMNWNNRSAAMGHPZOHZMBYVDZIXCDVJZWJIVEGVQGACJTOIYVQHMRLQRESTKKBGLLGWGLITYQTXCFKWPDZYMNVRRQTIUJSSZTEUEFCWLFLEENIXKRAEYWXI");
    msg.maneuver_type = 62685U;
    msg.maneuver_stime = 0.472013163843;
    msg.maneuver_eta = 11852U;
    msg.control_loops = 183579678U;
    msg.flags = 68U;
    msg.last_error.assign("SMHNWDJHCUDLGCJCOJMLETPEZWPBTUDRMXSLFZAWGOXNKJSVZKOYHXFZGWNMEORUYPOBNGARZLATOAXQLVQDIWTFOESHJVFSEIIMFNJYQJGEMVFLDRPUBAAUXPZTOLKHDMFMPRHRIICWUAUQXKSGOZXVZDYOXBZGYFXSTYYAPLUEQBYHKPRQULFWCKQNMJCBNRKFIDYVCIVE");
    msg.last_error_time = 0.989808584711;

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
    msg.setTimeStamp(0.172499280757);
    msg.setSource(37213U);
    msg.setSourceEntity(111U);
    msg.setDestination(54616U);
    msg.setDestinationEntity(32U);
    msg.op_mode = 108U;
    msg.error_count = 108U;
    msg.error_ents.assign("BYVXBIVBQNMXSFLEBHXWALPHTIHSXRQEKIXGGEELBRVTGWXIQGSBYKXDOCEYDILSQMJMOJDZTEGBNDRVNKPZKTNJXGDLFJSJIUVMXHLRTJVFQKGTLMEQUDRYZTLHIVCXCP");
    msg.maneuver_type = 32016U;
    msg.maneuver_stime = 0.990057274384;
    msg.maneuver_eta = 23766U;
    msg.control_loops = 2012217299U;
    msg.flags = 211U;
    msg.last_error.assign("UDNGJGFFYPWSAYAKJKJULGLZVHEXKPYRMBHXAXHOCUKBNUXEXJGNVTBZKFVJXXHSQBVMRVESSVNAUTCBDHVRPGWBEYZRTCBQRAPDHDDWHKTADEFVGZKDJZYUMVPOEYTCUFBTAQUUTOSEWZWXSOIKLOZCXYNRLHFZVQIXFNYORNPGFIIQCOISMNMTFQGMZCSCKNCUJPARMALHHLMOLQMSYIEBLIPJPIFCDTZASIEGLYPRL");
    msg.last_error_time = 0.661138461555;

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
    msg.setTimeStamp(0.433969541108);
    msg.setSource(58209U);
    msg.setSourceEntity(182U);
    msg.setDestination(34152U);
    msg.setDestinationEntity(153U);
    msg.op_mode = 18U;
    msg.error_count = 144U;
    msg.error_ents.assign("PEMGTKSYOVRLHZVLHSLPPQAMYATVYAMDMYUWGSNTCTOIJZWVKFZINIOOCGY");
    msg.maneuver_type = 40686U;
    msg.maneuver_stime = 0.481294390047;
    msg.maneuver_eta = 4113U;
    msg.control_loops = 1316099658U;
    msg.flags = 218U;
    msg.last_error.assign("ISPDBDIJVFARXJULBEHLEWAWGSZYMQQWKJDCANQDZMQYNYPTXOPAKTRAVWYFUSJNVVXQRZBSNLKRCTMIEAFBGHJAUBKDTNGLRUFLQQIXFVWZMGTMFELCRFHVLPJPOAMTBKPYQIXZNPUVLPOAXWIDGOSMCPEMSHEZJOINCBGWNHHZQZLCBSGDHUDVESKMCCJLFPDKETRVEVWGUYXRYTZYXMRQ");
    msg.last_error_time = 0.374803601555;

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
    msg.setTimeStamp(0.928896066097);
    msg.setSource(40341U);
    msg.setSourceEntity(217U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(170U);
    msg.type = 109U;
    msg.request_id = 42506U;
    msg.command = 43U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 11375U;
    tmp_msg_0.lat = 0.490476438277;
    tmp_msg_0.lon = 0.127470286121;
    tmp_msg_0.z = 0.368639669335;
    tmp_msg_0.z_units = 136U;
    tmp_msg_0.speed = 0.0445462878513;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.roll = 0.0856602046348;
    tmp_msg_0.pitch = 0.876197738071;
    tmp_msg_0.yaw = 0.0269088974187;
    tmp_msg_0.custom.assign("WNVMMKXOMJAKIPIYWVDCMTNGKAIQUTRVAETAVOIYSMAXWBJXUHFQWEWWOGQGUSWMKJJNCIUHRCEHCZTHEBCMOZCBFZJDEQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32415U;
    msg.info.assign("GHPJRYKGPZFYVZNTTZMSTUORLTYFMZSNZWOHVOMHBXJKOPDJWOURFUEENLWYFISTXLAFEWHPCSXDDIBFVCKCGDTTCYHNMODUCKKEBSFNQDIJCHBZNVRJZGHSQWJAHXATBGMDRNDGGEVQKAGMKAFUCLSUXIDBQLVLABPKXOAVAOYZEBVJNRHEWCIQXKJLYPQOQIVGNSJDTQPWQWXBMACOLWEBLCNZRXLUVFSPRSI");

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
    msg.setTimeStamp(0.311412310713);
    msg.setSource(38513U);
    msg.setSourceEntity(237U);
    msg.setDestination(53909U);
    msg.setDestinationEntity(206U);
    msg.type = 129U;
    msg.request_id = 29121U;
    msg.command = 24U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.449777167254;
    tmp_msg_0.lon = 0.373754293148;
    tmp_msg_0.z = 0.176488226447;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.radius = 0.742207429186;
    tmp_msg_0.duration = 4204U;
    tmp_msg_0.speed = 0.67810481901;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.popup_period = 4907U;
    tmp_msg_0.popup_duration = 23953U;
    tmp_msg_0.flags = 194U;
    tmp_msg_0.custom.assign("GEDZIPQDQJYGIHICKURWLMVLMVMAAABCVKCIDREAPRSBYHXLGFNNVXXNWMOOIRJATUWLPKBEQYEQPPMESJLWOSXFVLRKUWVCZDFRKHUQFWMVTLVXOFIZAKXTNYODFXAGCECCSRPOTHZPPNUGZACJJZSPOWTYYSHNJBWKTMTLCKHXGEXGOYDJDQHVUIGSYSGSRANNQBZHYUTQGMLHJTBJQNIZBKQPKXDRFHDBEBWZFSMYIWVOMNOFULEI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44609U;
    msg.info.assign("IUDFVACOHCYJEYGWQXLFSKVMOIJOVBEHXQKDZNYEGSRLJWCVSTCJSPYCVKKBIVHKDMYMGRTRCZPTCQYFVQKPUMPJUEALBHTRZGLWZWERJJWDNAUTEQWRKSXIPULLEAOHLTINMSVOMWUONIKJDMFHQFQGBJCAPXGZZQJBAB");

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
    msg.setTimeStamp(0.491543908536);
    msg.setSource(45958U);
    msg.setSourceEntity(193U);
    msg.setDestination(62487U);
    msg.setDestinationEntity(174U);
    msg.type = 139U;
    msg.request_id = 42977U;
    msg.command = 156U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 21332U;
    tmp_msg_0.lat = 0.101233304503;
    tmp_msg_0.lon = 0.106849461243;
    tmp_msg_0.z = 0.0593320457897;
    tmp_msg_0.z_units = 139U;
    tmp_msg_0.speed = 0.989082325758;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.duration = 39899U;
    tmp_msg_0.radius = 0.993174420835;
    tmp_msg_0.flags = 144U;
    tmp_msg_0.custom.assign("SUDTIASGALQPGKCQRTWOYABCTMUAETKDORPJSSWKNZNFHLBLCVQQGWENDPPRPYINRFUVGTZYDBZKPHANYIYOEGOUHJQCFNWPYLRPSLDCRUMWWGEEYANZUOLHIXWVGFZHSMYBOJGKJMBUIZDXWKSQXXSQOZFAHFFVVUXMTCKWNKRUOVDCIAHJPCRGABWITBIHFSHAJLDYOXOLTDTJGXSQJXXMHMMMIIQBJLEUVZVJVQNRRBLCYCTNXEBKFDEK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9444U;
    msg.info.assign("HQYFPYPTKNIBNOIEATHWYGAJFMHWXYHKOBRGCQNDWQJBRSHQZZKBMOQPBHEJMOFFALZECOIPSDISWGCPZBSTSGVJCGXUZCXCXTKUDXDVKOJEPASCPRVLJGMMBYZSLQTFGREVAPORRKUJPWUELBDNVVNSYKOLLXIZAUDZTNHNYHQZU");

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
    msg.setTimeStamp(0.468491630904);
    msg.setSource(56260U);
    msg.setSourceEntity(174U);
    msg.setDestination(60758U);
    msg.setDestinationEntity(95U);
    msg.command = 63U;
    msg.entities.assign("MFCDIXCOKSIYRQMZHGMPQBATESASHNHEWWALFXCBYETWMIQLGRYETUAIMZHDGFYVCLNNSFXAMKWVNSQJIXUTXAOOYHIWJNKNBWPXZZPKRJVTFOSTCDZKIISQZOKFAHVZXUAMPOJOZGUFULRVITYRPVTGGOJBCDHELQXRLBWUSNDL");

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
    msg.setTimeStamp(0.491614577782);
    msg.setSource(6572U);
    msg.setSourceEntity(111U);
    msg.setDestination(53006U);
    msg.setDestinationEntity(176U);
    msg.command = 202U;
    msg.entities.assign("BCLWNOZCRBIZXYJPAZFNUFUESYPEFVRXVLGKPYYDETTVKSHAHWEIFJVOPOEPVPW");

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
    msg.setTimeStamp(0.142738849237);
    msg.setSource(25171U);
    msg.setSourceEntity(112U);
    msg.setDestination(35915U);
    msg.setDestinationEntity(17U);
    msg.command = 65U;
    msg.entities.assign("VLCPATDXDYBJUAIZINPKMKBWMEZQZFORWHCNFHCNKOSLGCGEVCWEVULLRJKELEYVPPQUE");

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
    msg.setTimeStamp(0.767700554382);
    msg.setSource(36193U);
    msg.setSourceEntity(227U);
    msg.setDestination(17227U);
    msg.setDestinationEntity(225U);
    msg.mcount = 60U;
    msg.mnames.assign("KNDDHMWKFILZSAPRDOXVEUROPBOGMXZSNCYTEYQRJCEZUWQHIMTQFSFMZOBDHAKXJDPVPYNRKHYMXLPBSKAQOCLSBWEQIUOLGUVSBBOGWFGIVJPIPLETBRJQTURGGHXPJIWAUKYZDGECBENAOWUXCSNEOCJNIUZLVLLRYTXTSKCTZVKTSYDQYDXAVSTMYVKURFZMPMFOQJCAJNXJT");
    msg.ecount = 24U;
    msg.enames.assign("MPWZLEWUIEKOUQZXKVCMZOPUQEOCWLOAOANTNDZJGYRYBJIPDPEIGCMREUYWFYDBWXSBJENZRGHAUQRNGXKMILJBXTFGRLKTLTVVOITY");
    msg.ccount = 12U;
    msg.cnames.assign("RJUNPLAMJYHLHPJAWULALNKWYYZZMLHIVORMOVGRVNXFBXSXIVUYMZFERCGWTSDQSGGSDGDHWSOPQQKNBZYYOMBDTEXCRTTTEFDHPQEQBUWXWMZKNIUPLIOQAOEGYOUSAWOKKRXRNIAVKCQCAPS");
    msg.last_error.assign("NAXYWSQXFBRLQWALFBUXSCPCLEKXYJVDBOSERITMBCXBECZKUVRF");
    msg.last_error_time = 0.194115604604;

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
    msg.setTimeStamp(0.350166907204);
    msg.setSource(42558U);
    msg.setSourceEntity(245U);
    msg.setDestination(63136U);
    msg.setDestinationEntity(95U);
    msg.mcount = 138U;
    msg.mnames.assign("XFQWSCQLYXBIKHWDNSCPOJPDZEPMPVQNBSMKOAXTKWOHFLNASQNPRJMYVUAWTSUZYVOXSPSMLWVXFAPRTHEHF");
    msg.ecount = 225U;
    msg.enames.assign("GLKZENMTOSQLNDRPUOIWJBKXZTCLYIFWCUZYJUJXGNWKSEQCITXIDUWWDX");
    msg.ccount = 100U;
    msg.cnames.assign("SNUCXGCZZMHVLXCUMMWJOKNKYJIGJBPSFXCBSRVQAOEBOAMGJVQQVNRNZVSBEMWPSWFWEKHZYZJSBOUSYTIDHMIXXTYEGHLRFSIPOFRAMWKXEPKTOICXNDBFVRRDBNDQMALDHJUKFCLHRZEEEUJSTGOQLLPIWXTTTGYABNLLVYUVXCUHGAPWPDPZXCFKDHVHJWUJMEQW");
    msg.last_error.assign("DJBCMLIXAFQZHMPSPOJVESSYLJERGECWZTLPIHKLWDPKHYWKQVNBBTCMLDHBPANMUQSQLCWNVSNTWGKPVXHETOOYZHJRHPUBMAQSTIFFETOVZVXNUCXNAGMUBJXNVUIOIDEMTYRDAJLKTDWFRFSCEWLGRYIZYOYZMWAKZKOCHVNSIGWQQXGAUDVNRIQYJUBABHJGYQHZZOOGKNWCKXMTZURKGEMLCVIFFOBDPUTXERBSFE");
    msg.last_error_time = 0.729181645838;

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
    msg.setTimeStamp(0.801002704139);
    msg.setSource(33170U);
    msg.setSourceEntity(145U);
    msg.setDestination(17238U);
    msg.setDestinationEntity(248U);
    msg.mcount = 206U;
    msg.mnames.assign("KNMNIIRPIKXFWRLTFWDBKLFFBCFSVBSMLAWH");
    msg.ecount = 246U;
    msg.enames.assign("SKFDYLWVFNAOSBWKRCJWCPDYQHHTMFQYGLBWWUVVQXNSUEKJBGMDOFLAIAADPNGUKMNYTDJZLVHIOWNPEOIHNFBFUYAOMSZSNQLALFSRLCYUMRBTRGMCYJPKCZGTXEGDJDEPXUXSXXQYJQDCQKPKVUNJPTJHYLWXVDCVSVIEKTEWHQZFLUOFRMSXDQEPONAAJIIETKMUIZBOCBVZXKERBNHZHRIGOB");
    msg.ccount = 8U;
    msg.cnames.assign("TZNDZSHVPMGLHRNLRQQQTGHWUFYKJAICXRLODYDFLJZGIPQBLPTQXXFYJRUNTFZHZKWBOITUVEYSONIGAMJQKAEKELLDCYWCNEXKRTFGHVSMVNPNVOUHYXXUDAUOOAEAMSYIFPZYNRUDNOVGBCBUKZKOAVPMEAOXLRJGSRJMFMHJHCGBXCUGKADWVGZEILRQZICBFBWEQWPMPUKTIMVYRDEQAXJWCTDFPSJTQSFWCYJVO");
    msg.last_error.assign("BNZHNCVORHKAODMIYGCFGQFXRHKMPRY");
    msg.last_error_time = 0.790298109274;

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
    msg.setTimeStamp(0.232421076867);
    msg.setSource(16088U);
    msg.setSourceEntity(128U);
    msg.setDestination(57123U);
    msg.setDestinationEntity(232U);
    msg.mask = 61U;
    msg.max_depth = 0.424659271716;
    msg.min_altitude = 0.345325363134;
    msg.max_altitude = 0.826368810666;
    msg.min_speed = 0.2887699444;
    msg.max_speed = 0.0723453390747;
    msg.max_vrate = 0.832593791328;
    msg.lat = 0.0567235636431;
    msg.lon = 0.363467701649;
    msg.orientation = 0.387346245659;
    msg.width = 0.82692482105;
    msg.length = 0.0864586470671;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.791056052156;
    tmp_msg_0.lon = 0.756035225798;
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
    msg.setTimeStamp(0.624384603949);
    msg.setSource(32324U);
    msg.setSourceEntity(225U);
    msg.setDestination(24726U);
    msg.setDestinationEntity(60U);
    msg.mask = 127U;
    msg.max_depth = 0.995975141213;
    msg.min_altitude = 0.932272984384;
    msg.max_altitude = 0.684175771054;
    msg.min_speed = 0.095495190422;
    msg.max_speed = 0.359842438826;
    msg.max_vrate = 0.217378968039;
    msg.lat = 0.505969835617;
    msg.lon = 0.43616592868;
    msg.orientation = 0.850146091905;
    msg.width = 0.289474132163;
    msg.length = 0.514120813728;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.224268479745;
    tmp_msg_0.lon = 0.0959105267568;
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
    msg.setTimeStamp(0.240485562372);
    msg.setSource(36886U);
    msg.setSourceEntity(144U);
    msg.setDestination(6242U);
    msg.setDestinationEntity(160U);
    msg.mask = 187U;
    msg.max_depth = 0.480368334639;
    msg.min_altitude = 0.639104645159;
    msg.max_altitude = 0.544207255853;
    msg.min_speed = 0.203960620572;
    msg.max_speed = 0.208578181848;
    msg.max_vrate = 0.78506383313;
    msg.lat = 0.661465597527;
    msg.lon = 0.140109727821;
    msg.orientation = 0.47191152201;
    msg.width = 0.5897029682;
    msg.length = 0.280641230844;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.986533202201;
    tmp_msg_0.lon = 0.350728387693;
    msg.vertices.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.992596608943);
    msg.setSource(6877U);
    msg.setSourceEntity(24U);
    msg.setDestination(55583U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.700904571791);
    msg.setSource(31479U);
    msg.setSourceEntity(215U);
    msg.setDestination(2121U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.961998083654);
    msg.setSource(16761U);
    msg.setSourceEntity(181U);
    msg.setDestination(33931U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.139381911891);
    msg.setSource(49873U);
    msg.setSourceEntity(113U);
    msg.setDestination(34456U);
    msg.setDestinationEntity(111U);
    msg.duration = 45668U;

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
    msg.setTimeStamp(0.664108464901);
    msg.setSource(28758U);
    msg.setSourceEntity(132U);
    msg.setDestination(53995U);
    msg.setDestinationEntity(82U);
    msg.duration = 27512U;

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
    msg.setTimeStamp(0.526790049412);
    msg.setSource(42219U);
    msg.setSourceEntity(220U);
    msg.setDestination(23663U);
    msg.setDestinationEntity(171U);
    msg.duration = 7622U;

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
    msg.setTimeStamp(0.55132252407);
    msg.setSource(56931U);
    msg.setSourceEntity(220U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(32U);
    msg.enable = 34U;
    msg.mask = 1526273819U;
    msg.scope_ref = 3197776798U;

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
    msg.setTimeStamp(0.352081850234);
    msg.setSource(8183U);
    msg.setSourceEntity(23U);
    msg.setDestination(16860U);
    msg.setDestinationEntity(84U);
    msg.enable = 151U;
    msg.mask = 3221385773U;
    msg.scope_ref = 487539224U;

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
    msg.setTimeStamp(0.720085084992);
    msg.setSource(58912U);
    msg.setSourceEntity(146U);
    msg.setDestination(57708U);
    msg.setDestinationEntity(182U);
    msg.enable = 169U;
    msg.mask = 345971956U;
    msg.scope_ref = 2674238630U;

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
    msg.setTimeStamp(0.759216522749);
    msg.setSource(806U);
    msg.setSourceEntity(143U);
    msg.setDestination(15551U);
    msg.setDestinationEntity(116U);
    msg.medium = 116U;

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
    msg.setTimeStamp(0.240206307785);
    msg.setSource(37262U);
    msg.setSourceEntity(210U);
    msg.setDestination(41079U);
    msg.setDestinationEntity(251U);
    msg.medium = 197U;

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
    msg.setTimeStamp(0.873833797055);
    msg.setSource(22585U);
    msg.setSourceEntity(128U);
    msg.setDestination(2222U);
    msg.setDestinationEntity(185U);
    msg.medium = 178U;

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
    msg.setTimeStamp(0.627028971482);
    msg.setSource(26454U);
    msg.setSourceEntity(229U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(187U);
    msg.value = 0.188870163072;
    msg.type = 98U;

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
    msg.setTimeStamp(0.108911785821);
    msg.setSource(47710U);
    msg.setSourceEntity(253U);
    msg.setDestination(30683U);
    msg.setDestinationEntity(56U);
    msg.value = 0.632420823026;
    msg.type = 86U;

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
    msg.setTimeStamp(0.0829259560175);
    msg.setSource(41339U);
    msg.setSourceEntity(140U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(75U);
    msg.value = 0.318435222159;
    msg.type = 118U;

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
    msg.setTimeStamp(0.463057510609);
    msg.setSource(19716U);
    msg.setSourceEntity(235U);
    msg.setDestination(49360U);
    msg.setDestinationEntity(169U);
    msg.possimerr = 0.704212638838;
    msg.converg = 0.525015427344;
    msg.turbulence = 0.901391621129;
    msg.possimmon = 254U;
    msg.commmon = 105U;
    msg.convergmon = 226U;

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
    msg.setTimeStamp(0.267245504193);
    msg.setSource(34864U);
    msg.setSourceEntity(21U);
    msg.setDestination(40580U);
    msg.setDestinationEntity(132U);
    msg.possimerr = 0.693980182405;
    msg.converg = 0.263344917978;
    msg.turbulence = 0.797925600257;
    msg.possimmon = 136U;
    msg.commmon = 251U;
    msg.convergmon = 95U;

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
    msg.setTimeStamp(0.773907045999);
    msg.setSource(9739U);
    msg.setSourceEntity(56U);
    msg.setDestination(35295U);
    msg.setDestinationEntity(12U);
    msg.possimerr = 0.221403292219;
    msg.converg = 0.994912128055;
    msg.turbulence = 0.296217013432;
    msg.possimmon = 156U;
    msg.commmon = 148U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.340093204225);
    msg.setSource(48155U);
    msg.setSourceEntity(25U);
    msg.setDestination(36341U);
    msg.setDestinationEntity(186U);
    msg.autonomy = 48U;
    msg.mode.assign("QPDLSOYOEOYWYTQPCNYZRQLDFFTJRYQDBUWFXIQEESBOEFMPTMHBUDBQZLVGMGADAGCKUNAIHIYWWCZDDTIRJXUNKTGSMVBVXNICPYLGLEYZUZPMAJDTXRUGNSXFBASYRGZ");

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
    msg.setTimeStamp(0.304188004351);
    msg.setSource(41745U);
    msg.setSourceEntity(101U);
    msg.setDestination(51402U);
    msg.setDestinationEntity(20U);
    msg.autonomy = 239U;
    msg.mode.assign("HANRKHRUDBBTYEBBKWNEWMQDJPUWTWHAOXYLZZBTNIYLAUSWPLLXRCNEZJATBZMPVFUEHRWGLHWQADWETSXFZYYMVGFRKCNCJJSMYOYRJDDNYXNUQSUOJISCMQSOXCRFITCILTDHQFYODFAKQGPFHXKKPJGZPHIVVCKPV");

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
    msg.setTimeStamp(0.620047288935);
    msg.setSource(14121U);
    msg.setSourceEntity(129U);
    msg.setDestination(60197U);
    msg.setDestinationEntity(165U);
    msg.autonomy = 26U;
    msg.mode.assign("TBKNTCHRVXXPWXLHIZAMUJNIYMHZBAWGARFSLHOFMCLWEKOQYOXDDVIQYPYEQHDIZOFLLJ");

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
    msg.setTimeStamp(0.175678827415);
    msg.setSource(10792U);
    msg.setSourceEntity(236U);
    msg.setDestination(11646U);
    msg.setDestinationEntity(86U);
    msg.type = 190U;
    msg.op = 37U;
    msg.possimerr = 0.266601471351;
    msg.converg = 0.281394578892;
    msg.turbulence = 0.0790185620628;
    msg.possimmon = 177U;
    msg.commmon = 3U;
    msg.convergmon = 178U;

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
    msg.setTimeStamp(0.0337716162189);
    msg.setSource(24780U);
    msg.setSourceEntity(142U);
    msg.setDestination(41500U);
    msg.setDestinationEntity(192U);
    msg.type = 141U;
    msg.op = 177U;
    msg.possimerr = 0.441529908914;
    msg.converg = 0.159526717455;
    msg.turbulence = 0.195589967112;
    msg.possimmon = 201U;
    msg.commmon = 180U;
    msg.convergmon = 28U;

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
    msg.setTimeStamp(0.88759231465);
    msg.setSource(38252U);
    msg.setSourceEntity(154U);
    msg.setDestination(28982U);
    msg.setDestinationEntity(98U);
    msg.type = 207U;
    msg.op = 20U;
    msg.possimerr = 0.810712292831;
    msg.converg = 0.824212772008;
    msg.turbulence = 0.524781049602;
    msg.possimmon = 201U;
    msg.commmon = 239U;
    msg.convergmon = 40U;

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
    msg.setTimeStamp(0.0158614158408);
    msg.setSource(28280U);
    msg.setSourceEntity(150U);
    msg.setDestination(18127U);
    msg.setDestinationEntity(197U);
    msg.op = 72U;
    msg.comm_interface = 208U;
    msg.period = 12314U;
    msg.sys_dst.assign("EYQDQIEYUMNRAGGFQABEQONOVQKTPDKZVIHWUMTLDDMXUJLSHDCXUWCXSGUKRSQRHIIGQGONZYSUHFAZSFOMZVKVVYKOMEXOVCVHBJLPBBNRPMYSIPGVGJPCWUIEIWWDSRWDWTTXEHTELLIYSPGJMANKDBKWMDTPFMRYOYZIVLBKWFNBOMJXOLLZBJNGEXFXLZNFDZCCQAIAJXPBTPSPYJOHSHECWFZ");

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
    msg.setTimeStamp(0.340467341036);
    msg.setSource(35427U);
    msg.setSourceEntity(73U);
    msg.setDestination(57139U);
    msg.setDestinationEntity(191U);
    msg.op = 34U;
    msg.comm_interface = 47U;
    msg.period = 42591U;
    msg.sys_dst.assign("TZHIKBEVFDRFMKZZGHGFBWPYEYJWNLMYLIEVPENGSEYLASHUXRFIESPQRALTDAGISIZWJUEZDHYKVRNOUSRTMXGAXFMDDLCVZVJQIHHRCAGTKPBAVEZNSCZODWEOZQVDKJOWSUFLMWLQDOJVCPQBEITMTFPRMTUIPPGUXZRQTNHIUJTLDXCBLRBWQSYBBHBOOYXAOYYCHOGMPGXJAJUWPFSNKNVNULVAHRYXCQSXNWKDXWKI");

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
    msg.setTimeStamp(0.641894321903);
    msg.setSource(59595U);
    msg.setSourceEntity(211U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(64U);
    msg.op = 139U;
    msg.comm_interface = 40U;
    msg.period = 24129U;
    msg.sys_dst.assign("JYATISWDQJXBWKEQZBZNLMSSLVISQPVDYBPLBFJRCTVJPFNUBNXVMACJJCAEGAOGXEJCYGIYCUDRJORRCHHMRQMITDONPEYGWHJBHXTZHTSJYSPHXZFNUPDLWHUKDMHWYOGGVFTLUUIFPKFBQEOKEYNYTGLWGCWBZQBOAIWQIIUYARSCCVDFDVRMGTUVQAZZFAXULGKDXCLFKDASX");

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
    msg.setTimeStamp(0.0232919169343);
    msg.setSource(31653U);
    msg.setSourceEntity(157U);
    msg.setDestination(38559U);
    msg.setDestinationEntity(179U);
    msg.stime = 1168510872U;
    msg.latitude = 0.743699355714;
    msg.longitude = 0.685118883447;
    msg.altitude = 11350U;
    msg.depth = 28666U;
    msg.heading = 47978U;
    msg.speed = 18055;
    msg.fuel = -106;
    msg.exec_state = 13;
    msg.plan_checksum = 3012U;

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
    msg.setTimeStamp(0.773382446366);
    msg.setSource(34077U);
    msg.setSourceEntity(83U);
    msg.setDestination(20918U);
    msg.setDestinationEntity(20U);
    msg.stime = 3250847289U;
    msg.latitude = 0.173639592262;
    msg.longitude = 0.0674294504711;
    msg.altitude = 50337U;
    msg.depth = 25106U;
    msg.heading = 36537U;
    msg.speed = -6119;
    msg.fuel = 65;
    msg.exec_state = -102;
    msg.plan_checksum = 35277U;

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
    msg.setTimeStamp(0.791961701487);
    msg.setSource(61476U);
    msg.setSourceEntity(28U);
    msg.setDestination(64477U);
    msg.setDestinationEntity(90U);
    msg.stime = 2848782807U;
    msg.latitude = 0.710720917524;
    msg.longitude = 0.57033486743;
    msg.altitude = 33980U;
    msg.depth = 2839U;
    msg.heading = 59632U;
    msg.speed = 2811;
    msg.fuel = 34;
    msg.exec_state = 13;
    msg.plan_checksum = 15909U;

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
    msg.setTimeStamp(0.469227868804);
    msg.setSource(40936U);
    msg.setSourceEntity(176U);
    msg.setDestination(40465U);
    msg.setDestinationEntity(5U);
    msg.req_id = 28406U;
    msg.comm_mean = 138U;
    msg.destination.assign("BMBJCQNOVIMVCLXHTHIPDHLUXYPLOURBYIRXKCJVGRWLGTTNVECQSURHIZQSDAFWBRJEKQNWEEZCQXZJKFDBWDSWXHGYDOIIITPBCZQAHGTWUYVPZKBYNRJTXTXGTATUZNURCIMLQRCPGXJDWAOBHLMOAEUSOKOVKVCYFGCZYERFWQUGMEFLWPS");
    msg.deadline = 0.185080398195;
    msg.range = 0.40627173722;
    msg.data_mode = 96U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("UQGSNUPTAUVQEDRQVGPTATWMFTTXCCKVAUHEZWJTNEYMIDEBQMEBJLAYVYKNAPBKIPCNSVRHRODDLGEBCLHNVRPOXOGKUOGZNSSFAEXYLMKQSYIUXSBLGOMSXFDTSIQIPKMHQBDVAZEWKHOITSHNQWZRJKEMORBRVBXABHMJXNPFENFWXUKRJVLRDKCIRDSAZCPYGFYJWZOOJYPAFWLDIDYGUBMICTJOUGZILUFCFQF");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("MDXYJCPGFNSLCGZNGOIORDWTYJJBSQWQZXTTDFJYXDQBESAPS");
    tmp_tmp_msg_0_0.predicate.assign("HQZLPQJECXDMGNZIATEYFCGAPOWBCIMZDVGOKNRPYLPBZCXSSARNXKTRCMEGEQVEYSDVODBKOQWWNJWPGUFKPTCOSQUXAIIMTLUKQFQRLETFIJZFKJKQHJMPYSULTOYCGRBRZKARNYWHODVIRVPUMUGMXGTHJLXONSDBNZFINEZWBGOAFRCTFWWXMKJTYISHRUGQVBPJDEFWUHDBVPAS");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JFSTPTZBHXFNISAYPVHRWNQGONADDVAMLQEAHGVQEIWXJRCSXCPEIBINQWSYTKORCUKPJFIELSJGSRDTMCQJXNMFYFHAFMGXGBGASILNVPCWLFDU");
    const char tmp_msg_1[] = {-40, 92, -10, -66, -49, -39, -34, 68, -77, -10, 46, 119, -92, -13, 24, -25, 90, -119, -62, 90, 9, 44, -123, 60, 26, 92, 66, -52, 81, -14, -10, 48, -49, -127, -56, -100, 13, 39, 41, -57, -123, -20, 20, 74, -54, 87, -4, 98, -37, -104, -77, -14, 29, -117, -27, -76, 117, 41, 71, 2, 48, 81, -108, -108, -98, 63, 41, 63, 125, 31, -90, 115, 71, 54, -50, -100, -93, -77, 18, -44, -102, -27, 110, 97, -89, -111, -104, -122, 52, -125, 69, 113, -35, -43, -94, -69, -64, -24, 72, 57, 48, 70, -41, -59, -101, -74, 55, -54, 2, 4, 123, 17, -4, 14, 114, 85, -77, -113, -57, -53, -46, 34, -23, -78, 125, 28, 123, 10, 35, 59, -13, 15, 71, 61, 120, 7, 117, -12, -30, -54, 108, -33, -113, -1, -82, -27, -51, 68, -126, -26, -3, 44, -116, -17, -99, 73, -25, -50, -2, 42, 14, 38, 82, 24, -85, 50, 23, 13, -125, 100, 100, -127, -109, -71};
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
    msg.setTimeStamp(0.623620429042);
    msg.setSource(54451U);
    msg.setSourceEntity(233U);
    msg.setDestination(43126U);
    msg.setDestinationEntity(213U);
    msg.req_id = 65137U;
    msg.comm_mean = 228U;
    msg.destination.assign("SFWLASUVIGRZBGCCHQUCNZUNMVSXGXOCU");
    msg.deadline = 0.904491574015;
    msg.range = 0.691251250535;
    msg.data_mode = 76U;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.775351547849;
    tmp_msg_0.dist_min_abs = 0.566349990338;
    tmp_msg_0.dist_min_mean = 0.612448422785;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LHWYZTRFIVPIDHGMYIFEIAZESTHYCYGVBJBXEDJPFPVZSPQHFCORUXGRMQETJHBRPVNUNYUOSODQPSBTLDMDFGUIRLCPTIWQAUAMKAMHXKWHNKINOLIFAIWSTNSZXSLCHIYXBKDMWUWMWZFJXHPQDQQGLJRAOSNTVCVEOJQARRGZEPGHYKZAFZVWMGGBXEKUX");
    const char tmp_msg_1[] = {31, -24, -108, -24, 23, -84, -54, 124, 84, -19, -92, 29, 125, -94, -54, 10, -76, -17, -17, -128, 92, -98, 124, 121, 47, 24, 59, -1, 59, 82, -22, -23, 91, -89, -25, -59, 116, 53, 45, -1, -7, 37, 46, 115, -9, -36, 36, -5, -28, 89, -65, 79, -51, -54, -50, 77, -103, 30, -51, -4, 10, 10, -30, 111, -7, 9, -108, -9, -54, 105, -55, 34, 87, -51, 54, 1, -45, 90, -128, -101, 18, 110, -100, 49, 26, 78, -106, 122, 74, 29, 19, -122, -70, 71, 3, 115, -127, 110, 86, 105, -121, -50, 76, -70, -118, -61, 118, 32, -12, 82, 7, 28, 32, 5, -42, -2, -64, -15, 89, -8, -33, 26, 94, -63, 11, -78, 108, 54, -20, -127, -65, -72, 64, -78, 83, 116, -72, 92, 97, 84, 106, -96, 75, -94, -53, 81, -83, -121, 115, -44, -30, -50, 68, -42, 117, -114, 78, 99, -87, -90, -6, 74, 5, 115, 112, -91, -100, -74, 5, 95, 30, 16, 99, 70, -94, -100, 111, -8, -18, -100, 42, -50, -105, 117, -84, -95, -12, -81, 64, 40, -97, 22, -128, -50, -128, 20, -59, -79, -36, 106, -28, 62, -22, -47, -13, -50, 97, -55, -64, 121, 108, -18, 15, -76, -23, 118, 50, -45, 59, -32, -36, 14, -52, 91, -95, 71, 48, 49, 115, 122, -111, -79, -55, 95, 126, -23, -97, 22, 15, 114, 63, 17, 11, 27, -91, -19, 78};
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
    msg.setTimeStamp(0.363704956748);
    msg.setSource(33616U);
    msg.setSourceEntity(26U);
    msg.setDestination(21693U);
    msg.setDestinationEntity(197U);
    msg.req_id = 49029U;
    msg.comm_mean = 189U;
    msg.destination.assign("RVFHQDRZDAEGWVJIBDUKFRQAJNSAJPXSZIVLMDVMGZYOVWBYJJVJYVOQAWLGPOWXIBHTIFWLOQLIVBNNHSKFFDTXAKSBKLBYQCJLSCPEXTNQPTXBLSVBUTAARUKDIWPRULCPRUAEMECCHSZCQDEPXXQJGMTNKXNJYMWOVLZPLUUOEGDDFGMOGGMANI");
    msg.deadline = 0.637062374642;
    msg.range = 0.563713339616;
    msg.data_mode = 144U;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 244U;
    tmp_msg_0.mode.assign("EAANZCHHIUQNHCAFAGDSY");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BHREQLIXEMZNQQYCSACPQCSUERCJACPGCDPSVLDDZQGJVTGJFEAFFGUAABGNNORBUHNMTPKJNCHKFIKRXJENDFPRUDQYOXAZZFULMMXVQRYTRMZRIJHXHIKONHMGDMWVTCLWNUSGSBWPUDWAXJTQEYGBEUXTBSMAKKYZGWFTEYQKZQAKHBH");
    const char tmp_msg_1[] = {86, 75, -82, -68, -25, -97, -18, 20, 58, 17, -44, -103, -26, 115, -123, -53, 123, -97, -42, -83, -101, 94, -91, -88, -12, -44, 106, 103, 20, 75, -93};
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
    msg.setTimeStamp(0.505715998156);
    msg.setSource(15898U);
    msg.setSourceEntity(79U);
    msg.setDestination(21666U);
    msg.setDestinationEntity(152U);
    msg.req_id = 8009U;
    msg.status = 153U;
    msg.range = 0.834328911466;
    msg.info.assign("QMASESBRSWCQEYZNWFMTIDNZHNFGFJARBXVDYSORFNCAJDKNIYECHIAHTPTMTBPUJLNCFGKKQHNIHSYVGZWVVMXSMOFSSXUNEOJRIVTHCTWQVZXMXYKRCFSBCAUIMEOUFJLKSHXRICKRADOJPXUQXBUBBMZTTZUULZIGYLPEHPNMAGCBUXYAZADLYHEWVKPLWWLRGBQ");

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
    msg.setTimeStamp(0.442047111039);
    msg.setSource(52290U);
    msg.setSourceEntity(122U);
    msg.setDestination(44354U);
    msg.setDestinationEntity(206U);
    msg.req_id = 1414U;
    msg.status = 72U;
    msg.range = 0.76915280839;
    msg.info.assign("TQXPDNKLFAVHIFGBVBOVVESWSWQAWDNVIGRDYOXMVFHNHRDEHSHHKSABSZPMHFBRYXTTDCVCOYUGXKZYQJZUOARREQIMIHXCPMEETBSEPYGNPAWTTCWLQXJTDCCOUQQZANCKUGAPRWRUBIRSLDDVJTLNGSTYLFLFJEKMZGMMPIAQLSDWGITYAOBRKELDHPXFBVXNEWPZZOUGIIBJYBZXROCVKUZLWAFUXEKYOIKNQ");

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
    msg.setTimeStamp(0.887449461068);
    msg.setSource(55354U);
    msg.setSourceEntity(0U);
    msg.setDestination(38883U);
    msg.setDestinationEntity(15U);
    msg.req_id = 27476U;
    msg.status = 214U;
    msg.range = 0.872063213939;
    msg.info.assign("ZDQTISYPHNVFUWPWSZLADXVWL");

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
    msg.setTimeStamp(0.790636453119);
    msg.setSource(16441U);
    msg.setSourceEntity(34U);
    msg.setDestination(14418U);
    msg.setDestinationEntity(241U);
    msg.req_id = 7221U;
    msg.destination.assign("BOSRGKQXEAGIPCVDFOOQKHCHFUJUHYCEPXDAIPKEODBPVEUMCNUEWFANQYZOHRPXBBFNIAWMHZQCXMPBQCDUWJAFNTWYRNDJKFOYHZLNJBUGSRMBFZAJVZYRXJFTMNPLCBYATTVFYIKSLIJHWLGTSVQJQGJDSVGMOCDOKIIRBCVSDYUAGTNISLAWKLILLCZVQZQIXNHETTOWEOKJGGMPHVUASUMEXRLYDMLPSVWNDUEWMWRYBR");
    msg.timeout = 0.897650764618;
    msg.sms_text.assign("GVEYBVOCGXZEHMPCBQGVSIXISEVXTEOFYTWBHKIEUKYDGRFWIQLXJAKOERLIAUEGSQBHAJFHCFSXTTWHMVRBUWFGUNGHUNJMJCZLCXVDKHVAXKHXZMPYRDLRKVSEZDDJKMMMSAKVLWGZMQPYGTDYPCGSDOBTONRUHBDBOUOPSWTYCQRPOLWOFAQTAUUYEQZRQORYXZYFQ");

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
    msg.setTimeStamp(0.000524936618972);
    msg.setSource(9014U);
    msg.setSourceEntity(60U);
    msg.setDestination(40618U);
    msg.setDestinationEntity(212U);
    msg.req_id = 3288U;
    msg.destination.assign("KAYNUCUBOKYNFQAGJ");
    msg.timeout = 0.891111796298;
    msg.sms_text.assign("SJQXWCYZJIOCQBQHRLADFTIXIIURQETNDGNPLJMUMVUAZGISIIXPRACKXVDZYCJFGOTOGHYAXYPZOEJHMLVKNBHSBLQBYMDYWXSNXKINMMORLBNVFPUQSUZXJFWROBWLPEMWKPWMKPSFEAQBRRJFDJWBUVDAZUPRSLHHSUVZFCRYIDLLVNVPWOCSTKJNUGZPWSTIGHVCDM");

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
    msg.setTimeStamp(0.871966220806);
    msg.setSource(31829U);
    msg.setSourceEntity(208U);
    msg.setDestination(43222U);
    msg.setDestinationEntity(11U);
    msg.req_id = 51496U;
    msg.destination.assign("NLICXWOUDPBHYTSXZZAMSGMRDFXAVUOFCNRHKEZDERYSRRUXFBEVLEKPDLERFHKZCHBNYYIEKVVVOCXNMHIXVGBVZYTOWKTBQAOPTYPNZNJRMHCHCWJRUSCCQDSZFUIPNA");
    msg.timeout = 0.723429057615;
    msg.sms_text.assign("ZSQZYRJECZKTXLNEVQQUEWFQGQMEHRESTCIXNIUNZKIVVBOXAVTHUUFLADQOGSSBLJTVMZXKDLEKDUMZXAOCPQCEGWJWHJTBUEBAINCDSGMNRGSBIDBWVDNXHKWUYWUSHLRAISSOFMTRPMOWLERMHLWGVTAKFABJXQ");

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
    msg.setTimeStamp(0.0620646990202);
    msg.setSource(49953U);
    msg.setSourceEntity(60U);
    msg.setDestination(43823U);
    msg.setDestinationEntity(196U);
    msg.req_id = 64442U;
    msg.status = 193U;
    msg.info.assign("UTWOYPOBHLGJHQVDJTMUXCRUDIKWIANJSOEYVICJORVGZKPRDWFSTMQKRKQB");

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
    msg.setTimeStamp(0.836512848897);
    msg.setSource(59130U);
    msg.setSourceEntity(82U);
    msg.setDestination(19259U);
    msg.setDestinationEntity(224U);
    msg.req_id = 1735U;
    msg.status = 101U;
    msg.info.assign("QBPEHJYWMZVSLWWVXKVPPJTVXDQBHDGYNNKDQIHLTRTIEKSHMFRFTQLRYYBQXACWZDQDKUMLWDEVNBHLTNDRJUWXIDQJXSHZGRWFWCAYHBEJBUVFQAZSXKEFBQPFCLMYSAKPZUIIXSAUZBCRUIOYEGRUNDI");

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
    msg.setTimeStamp(0.696613907375);
    msg.setSource(760U);
    msg.setSourceEntity(17U);
    msg.setDestination(6562U);
    msg.setDestinationEntity(180U);
    msg.req_id = 53325U;
    msg.status = 34U;
    msg.info.assign("OCKOXZTAPMHZPYVNJDQQRTIPNMPGUUBYPOPTEYXSIKNJHKTOZQMSGSZULAXGBTDVTNSDMZREHOOXFLNXJMSZWBVMYISXFWQKDVUOBMXJHGJEYKAAIJJTANDEOBBFFGCSLQLSZCIPWRXRMWQLFURVNUEXYDETHPLEVGITNCGICYCUURHAFYDUWDKRAMJGBSKVHEFVFHEWSWBHKDOBWCQTMFINUIAKEZPDOQJQNIRWLGALACLJK");

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
    msg.setTimeStamp(0.0384857964813);
    msg.setSource(12446U);
    msg.setSourceEntity(160U);
    msg.setDestination(61697U);
    msg.setDestinationEntity(73U);
    msg.state = 142U;

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
    msg.setTimeStamp(0.632458417494);
    msg.setSource(17642U);
    msg.setSourceEntity(81U);
    msg.setDestination(19935U);
    msg.setDestinationEntity(104U);
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
    msg.setTimeStamp(0.318862397959);
    msg.setSource(26097U);
    msg.setSourceEntity(189U);
    msg.setDestination(2546U);
    msg.setDestinationEntity(253U);
    msg.state = 212U;

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
    msg.setTimeStamp(0.679124149217);
    msg.setSource(27958U);
    msg.setSourceEntity(54U);
    msg.setDestination(50158U);
    msg.setDestinationEntity(156U);
    msg.state = 24U;

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
    msg.setTimeStamp(0.395042789982);
    msg.setSource(16690U);
    msg.setSourceEntity(101U);
    msg.setDestination(41101U);
    msg.setDestinationEntity(236U);
    msg.state = 64U;

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
    msg.setTimeStamp(0.385859180242);
    msg.setSource(7510U);
    msg.setSourceEntity(180U);
    msg.setDestination(51813U);
    msg.setDestinationEntity(19U);
    msg.state = 171U;

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
    msg.setTimeStamp(0.531755380183);
    msg.setSource(54034U);
    msg.setSourceEntity(71U);
    msg.setDestination(47645U);
    msg.setDestinationEntity(171U);
    msg.req_id = 55063U;
    msg.destination.assign("FIPYJOHPYNQUTICCJKHAVEUAMPOTDQOABQKWLMRZAHTQFBNMGFSQPSDGERNKGFBFFNXHHTEZIJGKUUUX");
    msg.timeout = 0.665266927754;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 44377U;
    tmp_msg_0.type = 155U;
    tmp_msg_0.status = 136U;
    tmp_msg_0.info.assign("JRUBGTZVOCVWCMTKGROHXRLNELEPITPPMCXEDGIFLZHNQGVUDFJHHQTMBOAJMCATQGVIPHKACGGEJBWZUMSGJFSWPDHPNDSEXZYFPMAAYFVKAHRFQLSWNSZIVYWEQERYTOIORXNCYDXLEJSFRNHYJXUOPSM");
    tmp_msg_0.range = 0.224107618398;
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
    msg.setTimeStamp(0.277530884204);
    msg.setSource(44179U);
    msg.setSourceEntity(72U);
    msg.setDestination(17360U);
    msg.setDestinationEntity(162U);
    msg.req_id = 42675U;
    msg.destination.assign("HBISDVFQDNTGQYGDSBEYYYMNMHOOEPWVQHWBRNBCOYWEJWXYETVTLRLOYQLPFBCUZQDNWGLCFWJPFJZSDJKRXOQUEYMVBIKRPIWPNZHCKSGKFFUDFGMIJTHDXRZJNUXAPCQTTLOMLMGBENSSUQZZXKMCSOJBGHMOULEYTXVALRHAAUVGX");
    msg.timeout = 0.649798374886;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.829548463923;
    tmp_msg_0.amp = 0.360447808043;
    tmp_msg_0.cor = 71U;
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
    msg.setTimeStamp(0.412177334963);
    msg.setSource(25080U);
    msg.setSourceEntity(19U);
    msg.setDestination(37594U);
    msg.setDestinationEntity(128U);
    msg.req_id = 56831U;
    msg.destination.assign("YXHBJTXTGCQKPRDAHVHSDNSQLWIERXOZJJCAJTUJYEDMBKXFMVUQEFUAHBYMHUCKYFSZRVZKFGFZONGLJPYIJDPCVBYBOAIFLNWQVRTRFKSXQCALNWBEPHZEQEYGPYTAXZRESYNRPMHUUOMHPDTSVSGTIIJDWINGDZWQQAGWQPFUKFMN");
    msg.timeout = 0.713011092446;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.872197119164;
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
    msg.setTimeStamp(0.0471681871947);
    msg.setSource(60368U);
    msg.setSourceEntity(171U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(45U);
    msg.req_id = 17933U;
    msg.status = 1U;
    msg.info.assign("MGSKHETFLXTTQXMKPZEMIVFUHQJDVVZKWANPRYLRJGMCOCJLQYTBTZZVHCAEVRMGRJIVRWXXOHFSDWSCQXOMIJWOACEAGYYITVMLQNLOIBEYAVXUNYVPDZKANOKAKYWAXAYVSSNSDDEX");

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
    msg.setTimeStamp(0.0141280679989);
    msg.setSource(46581U);
    msg.setSourceEntity(152U);
    msg.setDestination(41947U);
    msg.setDestinationEntity(84U);
    msg.req_id = 16529U;
    msg.status = 58U;
    msg.info.assign("BWSQYGIUXNQJJJYMAMPGCSZPWJUMKYULNBMNDQVHYMGMORCBQWMFVIEQEVCFPOCJKZZLPKHFDLYNCVSOTDVZKZBJODCSINJTRPBARHUEMSHSFKIOYGVIFKYEETEJPQGGQLWKEGDWZYSAHQEEBGHETWNUNXROHXCIBFRJTCLZTLGVIRVFLXYSNTNOKXDBRPACDLQLTWWOGZIAFARPQAKOXTUZNRMBUHXXBYVDFFPRMPW");

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
    msg.setTimeStamp(0.17166497331);
    msg.setSource(2373U);
    msg.setSourceEntity(60U);
    msg.setDestination(47929U);
    msg.setDestinationEntity(10U);
    msg.req_id = 30591U;
    msg.status = 120U;
    msg.info.assign("RYTVRWOWJHQTWWAUNLCZGMATBWFPUPEVOKGSHJTNTZKJVWEBQRQCIRMIZUGQYHZBEIVDDRSJJYVJKXMHJVNEYKGBAXCUSCPEUNAVBDPVXMXPAUIWZLWUVZNEBKGOILYSOQGHANWGSZESQTLCPPFKTIDEKSLNIURF");

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
    msg.setTimeStamp(0.0368848906806);
    msg.setSource(15695U);
    msg.setSourceEntity(107U);
    msg.setDestination(64719U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.280683375105);
    msg.setSource(65320U);
    msg.setSourceEntity(178U);
    msg.setDestination(46758U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.98004421319);
    msg.setSource(26394U);
    msg.setSourceEntity(59U);
    msg.setDestination(4259U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.475520388948);
    msg.setSource(62070U);
    msg.setSourceEntity(171U);
    msg.setDestination(26392U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("KGLDYPXRYARDZWWTOXVRAGQUJOQJOFCIROIYDOTRNJHLIMHASHZJQUDYYZPBOVJKKZWPAYQAMKWXIUSBBFPLPMAOSSFSPEXTDXVBTTF");
    msg.description.assign("TYFZNGAGKJOFRVBWYYXQQQTACYVQAPRIWKAAOWUSYIPNIWEMTFZICBCLDCALDGSEMMXSGSDGXHNDQTBYPNMLLCBBOHSNTDZMDVEYGDIRZULHVFNVROCFURJUXDWPMIAEPBXJJFYOMSGPLGJFWKZHABPMRSLCLGRQNRVGZXKSZTPU");
    msg.vnamespace.assign("LZNREZGKRMOLHUCOTWAJJRQCHMCWDSENJQLQXOCMZOVXTBKKXBOLRYJMHXRUFFZYFUMTNYVTEVCPRHTFSSVQDFHZJFKVGOVRUEJINIHJNDPNWU");
    msg.start_man_id.assign("ROINXUIGJVNOUDPLDVPLRWKSQMTRFPYRHQNIAVGXQHZSJQPHDWTKFXPLUTVDENAOZRJHRLKPVBZTVHHSMCOMOALSCKLFKWHXQOYEAHLKJBACFVZRNXOFQHMIIEABYRNRUBUULHXKEMLEWVATSCDKIFDMMTSTFPLBZUQAEGBIXGFWPQWEDOZPNWGATGJBCGMSDCSDGDINIZZBJFTVCJAWYMYKWKXZIBRXSMECOUNTVYSGXUNEWPCZUFJGC");
    IMC::Pulse tmp_msg_0;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.594166730894);
    msg.setSource(4456U);
    msg.setSourceEntity(28U);
    msg.setDestination(39606U);
    msg.setDestinationEntity(142U);
    msg.plan_id.assign("CMYVDFHLYOSJQPZAUWVZPAYYTEVKKNTCJAGDCZKGGWNACYRVAUQSURFRXJBOADFXBBGWOHMOCVPHUQSWFBWNUWHIQQHMMZIENCMINFFYJDXZXGZSCETIBINGGKLPRXLOKZJEXRZPEFMMTLRRQWJDLBESNUQGCVH");
    msg.description.assign("ZYJFJDEQPNLXTHDWMWSCHYYYBSJFHOFCCZXTACFZOGRPNJVMNHSUVBCDWYEBXKMXASORKGXUDEIAUENXVWIRENKAMEBJKDRTTUKTVVDMTPPBBLUQMDKATUQFIRAISVDIJRQIJPTWHUMZMQLFKNBUNYFGTNWOBWQROL");
    msg.vnamespace.assign("KGNLAYJLUDTDTVAJQEZVDBWLJABCTJVXRRUZKQYMFQRWOOSTOVGWMESDHMLXOXUDMSXGRNBYGY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UKYAZQIWTROBROCLNVRLZYTXDTGHDVSSATRNPJATXXDZLAZQQBDJMEUAGGDFWOGSNPFWUKMQHXSZCALSYKPPFECDFHISNSRWQROYNICYDCUNEZTUOLBGMWUGICXHEVVLTEVBYKMYFIEZBUEDLIHQWBSKLWPQJNOZVHWIZYPFWSFJXOMJPKMYBARGNQAKNKYMERHMTTRGXPISTFGPEQBNAUFKAMXVDOXBCFHLO");
    tmp_msg_0.value.assign("XGGUOYOPIRLOBFXIZNREHIUBSCIWWMEMOKXODUNMMLQNQNWJRB");
    tmp_msg_0.type = 101U;
    tmp_msg_0.access = 68U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RIRBRLHTEMYGQGNHEID");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KXCSOSMUYOKXKRGKBWRQOFMCKJGLORPNAVNYEHI");
    tmp_msg_1.dest_man.assign("YACBHYGZBXMNRNHIFSHIICAGJEKMWRLLJKAYQCNGRWWDKYWDSSUFOTUPVQVIZNODZJMPPVDRGSZZJUFOXYJPQJBDCDIKANFZVOXMTAATUDYFIZOLDHTLWPUTCEEEELROKMJEEBLXHIFWCSXUJVMNEUWGXHKPKQOUJXVYTENKQBFGUYCAVBBFROVNWKLMICXNRRTEWVMCJGLATTYOHCZGHQDIHUZRAGBXSWBMSVQSPBMXAFQHZY");
    tmp_msg_1.conditions.assign("OBVKFNTPMWWUZONBUVKXKQERTOLWYWJKZYRQURHQOQSGHHYFQMSSHDQCXNYGBEYCBIVLCMECNBHXGVXJLONNFSFZWOHSNWPYHMREGAHLAJOUAJAWBDTEKDIMEVMZXHSCQEXMD");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Phycoerythrin tmp_msg_2;
    tmp_msg_2.value = 0.0373634802602;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::VehicleMedium tmp_msg_3;
    tmp_msg_3.medium = 218U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.460547613818);
    msg.setSource(5098U);
    msg.setSourceEntity(15U);
    msg.setDestination(17739U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("YDBPQAVEHCXSIGIUJ");
    msg.description.assign("OBHCGLTOWHEWAMYOXJEBNCMDFUHEHCMXAYXQQWGDSMKMTTOTPRPGVVPJU");
    msg.vnamespace.assign("ANERZOUGPEIMCMGJMALSREFKAXVIQVJPOFBMKSUSHLWMHGLANSQDNXKSYKMNRDWZXWSJOFIQYHKJTZLLLVCGWEXTRXGPRORLDCVBGDSDWNJUPFLIPFTKNGLOJQBXICCVBUUEFCVPAMQBXDIOZHWTFTQGPAKVZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DLXTDPCJTOBGSQYVBXIQKIWTIYOZYUQKKAQUXAMQJHJRJNDNCVMKBOZZIBYSVSUJYRNPQNFGDVGFFVLEBXE");
    tmp_msg_0.value.assign("YHUXDKOBBDZKZDNKGMPDMXIZVTPYPAJMJYHCAHTBNMAFDKQSWRGZCFRAMJIUQNZSPOFSYLWNWGNEWBTYNQXTFGAHOLJ");
    tmp_msg_0.type = 185U;
    tmp_msg_0.access = 135U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CYCBWBXKPNVJIAOTEIDXCDPTXQPSHPCHWGL");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("UTNTSCNSYTBVWGRFSMVXKVFALTDPVQBNBPXUGVGUCTJAOEPIOYSSNAAGXENQXSRXZKJMCZTLQBOMDBHZFCRAVFQWIFFCOKUMPHHYKNBTALRIYKIYMOESYKWVUQDFYRZZCOKEFIARLIWTXEHXGTPQUIMJJXCIDCKEROYBCJVVPFHNMDHQPBRAJDEXZLZYIJNDHHLRCSZKZWIUAEUMUDBVSUERWBGPKOAGMNGT");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 58994U;
    tmp_tmp_msg_1_0.lat = 0.435728746481;
    tmp_tmp_msg_1_0.lon = 0.414733089704;
    tmp_tmp_msg_1_0.z = 0.667811214236;
    tmp_tmp_msg_1_0.z_units = 140U;
    tmp_tmp_msg_1_0.speed = 0.560309429281;
    tmp_tmp_msg_1_0.speed_units = 79U;
    tmp_tmp_msg_1_0.roll = 0.586466820735;
    tmp_tmp_msg_1_0.pitch = 0.901771139142;
    tmp_tmp_msg_1_0.yaw = 0.317089066598;
    tmp_tmp_msg_1_0.custom.assign("KICSUFTWGQBEVVSWGNZPYNQOXFBTXMFJTDXMLOZWDTBFHAIEYNFONQONCTGBZDXJOSJHDLPTAOKICSZQIVKLGVPHCTEDUNIHKVPLLSCXFJTEIIPQSYPXZEPVDJEFUHXFNBWXDUJNMRMKJSRXCLSNLJYTAWMWGMKUGIXRMFRUGZWPUQWRQAAVYGCCPRERPJAEBVHUJGOLKENDQZBLHZKROBD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.999682730669);
    msg.setSource(21977U);
    msg.setSourceEntity(165U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(72U);
    msg.maneuver_id.assign("MDAJCIRXLOVVXKWYPMHIDYGHLZCEBQMLPVHKWNYJNLAQACKVIVASEJBCLDAFXNOBHYKGDNKFJTHYTSHRHREVYUNRFUUXOZKCCBFURSUJLRQVPAHXHFRZZEJGJELOASZSMDQMCYMMQSDWIDYKTNXFMAB");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 59142U;
    tmp_msg_0.lat = 0.678763484894;
    tmp_msg_0.lon = 0.252516756782;
    tmp_msg_0.z = 0.369422580654;
    tmp_msg_0.z_units = 11U;
    tmp_msg_0.amplitude = 0.349029751046;
    tmp_msg_0.pitch = 0.584153514731;
    tmp_msg_0.speed = 0.00778523296301;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.custom.assign("LDJOTHGFNZXSNKEXMLMSTMDKJHGBMAGMWWCQJLRJTIQENZLOEJSTNXTGRWYUOJAPDBNUHHUOVSEAHFOIPAXHMRLGKMDZONCAXXHCZBQDTRYIPEHRRIWTBEGGZDSYDAAITYYZCQIEHEVKDDJYWAPFBVPBCPTAKFOKIVVFSXKPRYBVUXOXIZGRTYVQFLPOJWGFSZUC");
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
    msg.setTimeStamp(0.253044987142);
    msg.setSource(9146U);
    msg.setSourceEntity(34U);
    msg.setDestination(25128U);
    msg.setDestinationEntity(13U);
    msg.maneuver_id.assign("VDQWTFJJRFEVDYKLNJSDAFQGFOMUHLONROYRKHKDQYBGTKOTXFICVHEDGQRWKGLEWEUPIAQMONFMBZKWPRSEGTHCTNMTVTYYBQKOOIWCINTWYRCSXLPRVRVZDBFUGAGXSJABJADUMYEWNAVNJAXASZDUWZIYJPKMOCZYA");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.315522457601;
    tmp_msg_0.lon = 0.741830857157;
    tmp_msg_0.z = 0.241054812759;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.speed = 0.26074700534;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.takeoff_pitch = 0.324201630646;
    tmp_msg_0.custom.assign("YMJTZURHWOABPUQHSJHQLVFICAXLKSIJGLIFPTEOBXPOFZPDOWFODIKSTCJKLGOZMKKHZKRMWGTUEFGSDERVQQLYXXTOHIXSQANIDFETSBARPNPYRGONNYPBJVXIMB");
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
    msg.setTimeStamp(0.377097376961);
    msg.setSource(17150U);
    msg.setSourceEntity(248U);
    msg.setDestination(36717U);
    msg.setDestinationEntity(114U);
    msg.maneuver_id.assign("CMHOPTCSNSVNJPWDXDJZDLLTDNAVIVWIRBGHXTHIEWDABRSBGRKFHYKMCVTGYLDIEVLTXTNQPKURQSLYYHXNOFCOMTUKQMVPZEYOHLKKRKEFWMMFULLXVUQYNVHPOBNCWSXXNAGFFQZSJQNXASTXWZCJPDFRFYURYOSPUABJBLGHQIREUBPDRGCCAJIAMIMOUEGTUHAWDJBYIASFYCPKUOIFEZIHJC");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.676075546021;
    tmp_msg_0.lon = 0.222447987344;
    tmp_msg_0.z = 0.996338558114;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.052038409;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.start_time = 0.0293339241973;
    tmp_msg_0.custom.assign("QQQXWIUOOLTQPVHMREGEJDDOECSZZGWAOOXVXGBROZHWJWAASYKDSUYNPPGIKYQLUGLTJTLAXTYNDRMHAIZHOVFU");
    msg.data.set(tmp_msg_0);
    IMC::FormationEval tmp_msg_1;
    tmp_msg_1.err_mean = 0.218405601054;
    tmp_msg_1.dist_min_abs = 0.460332128736;
    tmp_msg_1.dist_min_mean = 0.138444385404;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticSystemsQuery tmp_msg_2;
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
    msg.setTimeStamp(0.535380111919);
    msg.setSource(47760U);
    msg.setSourceEntity(58U);
    msg.setDestination(10834U);
    msg.setDestinationEntity(47U);
    msg.source_man.assign("NHXLKTFUPRRNVWWYOZEBOGWEETJCYXBUFPSKZYAYNWFQDDFPITNMSOIOHJXMUVJYROKGRQLKKQTAQOOPPELPXWCFAUZHVEGHEIIYBJMISZVRXBZVSMITIEAXMWKKEUSLVQVF");
    msg.dest_man.assign("EMQLGTFEJOVABMARQRDOYQBVPFUGHZDEFDKCBCDHGDYJ");
    msg.conditions.assign("YHJBXITQYCAUDHQWUNZPCISWNFUBCHEKKJWQKLLUGNVZNVGXNTHFXPTQWFJLVIGUZMLINHCPOKMNGTCRTBDKXPRDFSZJNMVQB");

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
    msg.setTimeStamp(0.106533313303);
    msg.setSource(55097U);
    msg.setSourceEntity(181U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("KVYGUUYIACXHICVPFRIEBYTZFKQFAJTBGOETSJMETYAHVUNLJZOCSXZJEDSBKGDRDRNOGOFYQENHQ");
    msg.dest_man.assign("TSUPZNNVDMWHAKLWTJAHVRXDLUZUXLABLGSWKOHFDPTOQFNMSMYAIYLAJXUSBKIRMFQOCVIXUNQQJCQNEMKNUNCOVQCTAFKSRVAFDPMKKRUGBZVEEPDYYEEJZIYKJOROVCQMEER");
    msg.conditions.assign("KHGABSLANAAHRZFUZFYXRXVEUDWFLXLFQKLYZBLBEDSGZJZQURNPNDBFFGENDHPNERVPBZRPQWJGKCDJMNUFCJOLEIEX");

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
    msg.setTimeStamp(0.506786138984);
    msg.setSource(43225U);
    msg.setSourceEntity(74U);
    msg.setDestination(17676U);
    msg.setDestinationEntity(224U);
    msg.source_man.assign("CEFGTXUIPPKRMHRLOTQOVJYHGQQWJFNTOXMLSHJBEDFKKPOZIHZYCNRZSURMSWEKSVRVDUKMNZAQPXLYWVCHYXRKILGSMJBNLOLFWKPXEOADCZAYCRGLOBFWNIWSBAYHDHPPHSGGHDWNLRVYIVTEADZPCXYEWZIUD");
    msg.dest_man.assign("EAUZDGDWJUJMSLHWHPULEPRCHKHUPDKLPBTOSVWYRSKFUJLTSN");
    msg.conditions.assign("XJSSNRIEIGPUGCXIFTKPNRDSKNHUBEIVLCKDZHLAXPSADGAYDEKJKBLWVGNCVUDMCEZKXFQTFOHOCDG");
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.297535027266;
    tmp_msg_0.time_next_service = 0.0464438204823;
    tmp_msg_0.time_motor_next_service = 0.25633785812;
    tmp_msg_0.time_idle_ground = 0.685452978482;
    tmp_msg_0.time_idle_air = 0.151046279034;
    tmp_msg_0.time_idle_water = 0.929931009829;
    tmp_msg_0.time_idle_underwater = 0.673739720399;
    tmp_msg_0.time_idle_unknown = 0.617699238205;
    tmp_msg_0.time_motor_ground = 0.0452026475495;
    tmp_msg_0.time_motor_air = 0.393796646093;
    tmp_msg_0.time_motor_water = 0.894970339286;
    tmp_msg_0.time_motor_underwater = 0.371004169242;
    tmp_msg_0.time_motor_unknown = 0.18696707299;
    tmp_msg_0.rpm_min = -1470;
    tmp_msg_0.rpm_max = -29946;
    tmp_msg_0.depth_max = 0.963488768797;
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
    msg.setTimeStamp(0.966422514524);
    msg.setSource(54968U);
    msg.setSourceEntity(96U);
    msg.setDestination(21783U);
    msg.setDestinationEntity(212U);
    msg.command = 112U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TCRVTKNNSERBMORRZXBYDMFHGWXFCIJXXVAZCYLXIBSGEPWWM");
    tmp_msg_0.description.assign("IZTBOKVKZNFURKSZMPKPLIVGCNVYNXOKHQLZVHFOPQYLEIWSECUMHBHXDCXTEAUWGIQSJ");
    tmp_msg_0.vnamespace.assign("IKDTIVJIUTOBVQBXBMBTKDPXHNZALZDOXNLWZBOYPCRRKZXURCEFLULFWJBMOEYOUFELHSAAUSIDGNNUJMMETZXGQSNWXHMOOTEBLVWLMALJKNBCGEGWAOFVKCPVRTENIZPSP");
    tmp_msg_0.start_man_id.assign("HWYOUUEWMRDUNHIQBRELFBMDNVHXNLVSFUEZVQDWRKBGWLTANRAGCDDLLFIWFESNQABQZHIWCJVGYTHBLWKRSZUEWAQPOPVPNYMHHCMOTLKPFKNRQIYMOCMEJZLTGZHZCLVXFOPUOTEGYJXJCTMBBWDNHTXUBRSESTSCSYOZCAKRIXQDBCRGZSCAGUEPSIINGQLIAOVYDQJXPMARBFSMGKUXXEVZJOXXPUHVJTQJKJIFVF");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SBEBBYSPWTSIDLXZHNUIYKUOIGYJDIVERFPWPBQZATMBZKFHQLIKBWOVMXQWTDQIMRIOXFZVSFWELUOGRZMAFNVMAWDSDGPQCVYMXHYTHEPSTUZLJCJVPJGFPOGYDCVFRSBKOJBYUGLNGKNSWQQEEFBYDSHKBWTDJAYEJNQWOVDNLNSXIHWXACK");
    tmp_tmp_msg_0_0.dest_man.assign("UQTZWRNBQIFSXWEWHMLCLQWFGTDQUYFIFZMUESDWWOAPVOFXJVSOAXBFABIJCUANIYSZBMMUWYNPJZXAIYKMIQRAQKCGXHVWJWQSYGTMPYGOHNLZSEKBMOINEVVDWVARGSPITBSYPUDDMZDEYHVKHXTELDHYOL");
    tmp_tmp_msg_0_0.conditions.assign("LJQOAQQZYGHJCYHGFENZPNOZEDSHPTKCHBNQTVOQJXWAXIMFPRHLVHKDWWNGQICOOZDGFSYBMNBRDQFIGQMEHABOGLWEIYJLJKWTVSZZUTMVSXTLFUEBJMFSWKMGFSOAIDHEPRFNLPXIKTYNSRGKPREBAUQSPCRXVDJYIPSUZWXJJXDJRZCVTFAIWYFOVMKNNKXULMXYDYZAEHMBCRAWP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::GpsNavData tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.itow = 1229969021U;
    tmp_tmp_msg_0_1.lat = 0.530552012692;
    tmp_tmp_msg_0_1.lon = 0.898524421081;
    tmp_tmp_msg_0_1.height_ell = 0.926708808895;
    tmp_tmp_msg_0_1.height_sea = 0.03045603959;
    tmp_tmp_msg_0_1.hacc = 0.060649280679;
    tmp_tmp_msg_0_1.vacc = 0.819951727217;
    tmp_tmp_msg_0_1.vel_n = 0.749123470851;
    tmp_tmp_msg_0_1.vel_e = 0.751223953744;
    tmp_tmp_msg_0_1.vel_d = 0.777442891351;
    tmp_tmp_msg_0_1.speed = 0.67018469535;
    tmp_tmp_msg_0_1.gspeed = 0.782684285318;
    tmp_tmp_msg_0_1.heading = 0.808220796433;
    tmp_tmp_msg_0_1.sacc = 0.222004946537;
    tmp_tmp_msg_0_1.cacc = 0.482838338852;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ImageTracking tmp_tmp_msg_0_2;
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
    msg.setTimeStamp(0.732074697842);
    msg.setSource(43885U);
    msg.setSourceEntity(250U);
    msg.setDestination(21237U);
    msg.setDestinationEntity(198U);
    msg.command = 91U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HTKUKZLBVWXXWRHOLRUHBUGSOSCXESRQCNSZYAUTNYUSABNDXTWBYCDSQGJVIPMPJOVAKVMDKPVQCMAELOOYWUYIMOQJUFRJPKAZVKBEEZLZQZSXARALQVFIZW");
    tmp_msg_0.description.assign("LWETGFNGQKTCMQBEZJLJQQNVPTLUQEHGOCGWDICOZRGMOBVLSMPGWXIREAKNOEXHZVJBSNARYFZYJFOWEQSBUUKIHUCEVONJQREFMXDRYERJCAAP");
    tmp_msg_0.vnamespace.assign("URPILXKMZTTBOIULCMWLMLGRROIFVPNOHSIOBJYJFQVBUGYCPCPQNLKBVLVDAHGCQZKYPWMKACUZAPOSEDPCZUGSALPJCDKRTADQGFESNTRHLHFJJZHXDX");
    tmp_msg_0.start_man_id.assign("TLKMNPBVUTMRHGPWVCMUMPNLGDGOAGLZUENJTQKKOAWMAZPBGANGILPCFOBSIZKAQDQWQEJUPWJEFENQYZUEVAIPEHZKNXLYGXXMYWHKBCBSTRKHVCHMJYDKDAOJCSLRQEGHZLBVIFVPFYYASVNOFGBFQAIREIHGXJQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ENPIMOFXMMQGYDNTBORKNYOFWXSVLJJKTHKWKZHNVHGEPHEGUFSDARGSROVJAKMZLIHHSMHMBYOTAHQWMQGRGLEJSVBCTYYSKSQCXDXADZYHATYFLUWFCOONWLTUIBWDTSUAMDDFCEOJPRJZXQAWJACHJVNRVZNRZVXESFNGREPCPFOOIYDQBWVLIRIUUMBIQFGXZBTIURDGBUIKDELFVYXLUWQSKNBZCX");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.320551839054;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.626309700203;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.789097511641;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 93U;
    tmp_tmp_tmp_msg_0_0_0.limits = 69U;
    tmp_tmp_tmp_msg_0_0_0.max_depth = 0.445984631746;
    tmp_tmp_tmp_msg_0_0_0.min_alt = 0.554579923594;
    tmp_tmp_tmp_msg_0_0_0.time_limit = 0.876117581576;
    tmp_tmp_tmp_msg_0_0_0.controller.assign("FSPSNXEWOMEKWXTWAATKRUAMWRQPNBICDAUWQLDVXCMBEYVBNVWJOCIZPQEDFQTTVCENXUQROQMRDOIEMAWYDFHZISOSIXJYLHMLHPIKVZGMORKAGHEAFLNQHGZSQBYEBZLGUCFXHUIOFLNFDTIBFYLXKWZVBPRGKAKRPJUTXPMJTSICRJYQSTLUGJHHV");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("AUPZFVCTACPLCDQEROWJSYWIXZNZGBETLBCQQNBUJVLXFBFHCSQUPSWPIRZFXPKXJDJEEAQAPKRAWQOUGGBWESMFRMNAUTBWJVJDSNPUHJOODMMKYDVZYVTFZBUXFFMIEAKTLNTLIWKEBSZROPISGVXSTKCIWVHHTJDXOIVDCNRYXCMMMLYWIRMEKXHCGGZR");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Airflow tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.va = 0.863395288279;
    tmp_tmp_tmp_msg_0_0_1.aoa = 0.87123786925;
    tmp_tmp_tmp_msg_0_0_1.ssa = 0.514266200374;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::UamRxRange tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.seq = 61221U;
    tmp_tmp_tmp_msg_0_0_2.sys.assign("QIQJKMXRGIEENKYYGQPONMZIEVXXCEGCEZDXMLOONHHJSDWDXWGZQUYPNMTXSBMMLLLFZKCRKRBNVVPZIOFPQYSGVBCFSJRJVSRQTXVGPJQLOKAMDWFKIUBIUWWHVMXFZBADUKAQREJCZWLPIPOXJYEYFCYSUCUAAPRJRUQUYSGJCSFTHSTTLSZDAE");
    tmp_tmp_tmp_msg_0_0_2.value = 0.797721370743;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PMXCNOQXVQFAIEGZDJMWBRXXKDRAOLJCZJUNBEGDVMFORFAYWZUSWPQDVEDYGUFGLVBKONJTLOZUWMTZICJNSXNBKHYKOVFSPFGXOHGGMHFXYDWCLHPMEAIPMBRUKODYQQAQYVNAIWDATHIQTRDSMKEBCPRVMYLRWEIOEICTVHFSOTETZZGEQCPLMGJRZHIIXLUHZNTQAKKBBZLCSVALLJUXKUYWWYJTPDRUAGKESNWHSSCCXUP");
    tmp_tmp_msg_0_1.dest_man.assign("OSXCXSIMAQYIENGVRLQPLGVSPCJXFMJWQOZIBKSQLFOBYCLJWAHQFMAKEDHGAFGVKOGTZNEEVRKZUHVNTRLZYFSN");
    tmp_tmp_msg_0_1.conditions.assign("VWYGFMJBLSISOZXIUHOBYQXTKWEZUVDPKOHTEEDEZKUTSCMHWRCPSIOZDANMFVQZJTAKBKXSR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DevCalibrationState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.total_steps = 224U;
    tmp_tmp_msg_0_2.step_number = 134U;
    tmp_tmp_msg_0_2.step.assign("BWCVFAIYEVWJUJCJNUMMWQFCEBNKTGYIXPSPMIEUSGXZRLQLARHHGUOMJDGOJDQUFZUOJPVZYBXZNNOGXDWNLOIHDVOLWZPAJZBGLFSWADSUBMEGRICPPOGHRETLIIOOYSMFWSXBNZXBNHUXKIALZZPTJXUVRLFQSICKWBBSHKQDLGKXRFYQSQEZLIAYNYYPRPPMEWMHQJCNERMWDVYTFD");
    tmp_tmp_msg_0_2.flags = 229U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.3499460103);
    msg.setSource(31231U);
    msg.setSourceEntity(233U);
    msg.setDestination(6735U);
    msg.setDestinationEntity(81U);
    msg.command = 196U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NOHMZXVWZKXETNLEXZOKBFLTPIEYOHOATMTHMXDHBQYRSRJMLAZGMORDKDTUSERURMRWGNOSJJPYNUQHPVNYPFMPWQWUZDVZVJSPEYBJVBJLGDDYVFLSITUUVQMVGVFKWFICWLARQGMQCIISGJKFTKTLNAXCIOQGCBEABNHDAYNLCEHFCJTCUBKOUFNRYQFYKZXPDXIBGJWCWOIDGWEXBEHALDNPAMZCVAXQPSUGKJWXSHEBFISKR");
    tmp_msg_0.description.assign("EULZYAEPXNEDAFQYXVLUFFKGDZSALDYJBZPPUTIHWWVVZRQTKABZLNLXSHIJXYZQOMSOOEXFEIVEKMSLCMNGFXRJLWQJQMIBMLNIUIVPIMPHXGXJEROHBGWLWCTDJRSFCXBNVSNKCQZYRDC");
    tmp_msg_0.vnamespace.assign("RHWWWCMBRVJFKLLSPZBMIVIMSZSRXROBSMSAOMEDLCDLLDWUWHCCTXDSUBKVYLXUIZPUGYWSLFYLXVEOIYBBIQPDMTAKYTRJNJFCZFQVRBAYBDHLJEPPGXNNDXGFZTSTPEFMFHNCQJCFINJHZXKRKYOYVTQBNEGGDMKJNWEKZIOPQSMGWYG");
    tmp_msg_0.start_man_id.assign("GVZGYTEHCEJEVJWXXHKAELTKLIADSWDNCGITBLOPZYOFPFMFUAOYZBLCCLVXOXQBZEUMKQWLAHPQNFCUDRDBIISGNYOFGVJRIFFLMCBBKKYSWRRZSMCOWSLDOMYIJUKFUXCRHIWMWQMHYTATPGTIEVJQNKPKUWJGPRXBP");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("JWCAWNWUGOTHIMGZSSFNKCOUFFEPSEKBEIJMXQCDKHRRVHGLXBSHZBKLRWAWZXMBEHRDUNCQPXKUTLSTTYDSVJLONKDOIJRWISISPMCFQJNYQZJXJNIQMVAEEAGQQUXUMSPPFWNNBPRRKLCGBTYVJFHEOYKCTIVRCMDPHRMAIPYDL");
    tmp_tmp_msg_0_0.dest_man.assign("QXWNQWGXZVBIHWUZWXRMDNOQXRKRIRIFXLZQIYSFXEZDPETEUBLKWPVJRQPUYSTBUQQXLIGJQSYAMLSMJCGWBRCVAMOTNPAKORJJEMMKCESZYAGUKFVDKUTGMWGLRMYDXWHMAUVFHKHOCSSQYFZXPL");
    tmp_tmp_msg_0_0.conditions.assign("OUMEDLPQRXOJJYOFDSGODZMCXTJAZMTTCQCNDPNYMFORHHLPDKRSCGCXTSXGHBUFMUIIUSBSKLZWYCTMVZQBVIGZLAXARVXJQSYBJGFYXJNCTURLKKUCYWYVIYJDFAAGWKWSPDTEWKZKQVGDRIXASPBNRVAQPZHASHETNW");
    IMC::LeaderState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("LAHKRQINRYBAMABJZPNEKPVRUQEWOHGRQCRLWSGVVUVQIPGURYUYNACZECNSIQGZDDBVHCRKMKMSJNETJYEYHWVJIDAZNIWSVYOSSPALFLKUVMTFNBAPUQHIBLOLPGBSGPFNQCKKZMTCOHWFSPMSBZODZFDSZGPYMQOXRXUXJTETXJXTEKWUWDCXEAMOZGTDCLFIFNFVBEWQXI");
    tmp_tmp_tmp_msg_0_0_0.op = 228U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.930611068291;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0287785448328;
    tmp_tmp_tmp_msg_0_0_0.height = 0.417383379074;
    tmp_tmp_tmp_msg_0_0_0.x = 0.220502790571;
    tmp_tmp_tmp_msg_0_0_0.y = 0.25228196998;
    tmp_tmp_tmp_msg_0_0_0.z = 0.763201004555;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.163701151226;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.506342828243;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.145981252957;
    tmp_tmp_tmp_msg_0_0_0.vx = 0.236088724789;
    tmp_tmp_tmp_msg_0_0_0.vy = 0.292426149195;
    tmp_tmp_tmp_msg_0_0_0.vz = 0.489049692886;
    tmp_tmp_tmp_msg_0_0_0.p = 0.507278730799;
    tmp_tmp_tmp_msg_0_0_0.q = 0.654035454201;
    tmp_tmp_tmp_msg_0_0_0.r = 0.453892620947;
    tmp_tmp_tmp_msg_0_0_0.svx = 0.00669382749605;
    tmp_tmp_tmp_msg_0_0_0.svy = 0.132874177542;
    tmp_tmp_tmp_msg_0_0_0.svz = 0.209133006562;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Acceleration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.741277927007;
    tmp_tmp_msg_0_1.x = 0.384876489972;
    tmp_tmp_msg_0_1.y = 0.846189899609;
    tmp_tmp_msg_0_1.z = 0.852422200334;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DataSanity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sane = 189U;
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
    msg.setTimeStamp(0.907449974142);
    msg.setSource(33294U);
    msg.setSourceEntity(140U);
    msg.setDestination(48952U);
    msg.setDestinationEntity(150U);
    msg.state = 28U;
    msg.plan_id.assign("ZPIXQOWZWUKCONXISHJINTAILUYCDRZHZCLPYRPEELGHUVDMVACBRGGASDPOVMZBLUSJRCDWGCHTRFAABQGFQDTOZHEKJEZQTEWFKWTIMJWHXV");
    msg.comm_level = 142U;

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
    msg.setTimeStamp(0.907333571521);
    msg.setSource(20280U);
    msg.setSourceEntity(163U);
    msg.setDestination(15912U);
    msg.setDestinationEntity(62U);
    msg.state = 47U;
    msg.plan_id.assign("VQNWTTAVIIXYFTJMHUONVRAGTZOMSNDVKNPCGBZTNDJYWVVHYMGQGOAOMJDNMZCXLHGHZGVGALXXCHBWEOUUOXFRHFRWISUKDCKEPCKZXIFBJUTCTZXYECLYKNJNWIIEROVJLPPIJMSASNGFPQFPQGWMDZIMIKZHRLTIBBLQCBDOYBOR");
    msg.comm_level = 101U;

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
    msg.setTimeStamp(0.675647185595);
    msg.setSource(38572U);
    msg.setSourceEntity(129U);
    msg.setDestination(10924U);
    msg.setDestinationEntity(9U);
    msg.state = 240U;
    msg.plan_id.assign("ZPLJBCQFLBYYYPHHVTKYRNNVASQTRRBPQKOIUEBKAGMPMBEIYZJAHIGSWDQLNDPIYXGHXEYZFPFSEJOZWOEVUGJL");
    msg.comm_level = 253U;

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
    msg.setTimeStamp(0.565852322457);
    msg.setSource(29939U);
    msg.setSourceEntity(93U);
    msg.setDestination(19631U);
    msg.setDestinationEntity(213U);
    msg.type = 254U;
    msg.op = 53U;
    msg.request_id = 65240U;
    msg.plan_id.assign("VMVWMXQJYWRYJNPSKHHVZPDBOQERDMNXTTPIEMUUSFROZJFSENNO");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.232522489907;
    tmp_msg_0.lon = 0.499589402119;
    tmp_msg_0.eta = 2390631202U;
    tmp_msg_0.duration = 9997U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GIIGGOXWBXQJLJDFLIYCAPOHHPMMWXLWETEVKRWHFTBUMAAAZTCKDKCYPIMITJCLOGGSZVIBRORSNZBFRXMWBISLWCPRORBAOAQEYVVCPFUZBVKUEVKKEJUA");

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
    msg.setTimeStamp(0.416213890977);
    msg.setSource(35681U);
    msg.setSourceEntity(208U);
    msg.setDestination(27031U);
    msg.setDestinationEntity(210U);
    msg.type = 62U;
    msg.op = 172U;
    msg.request_id = 22233U;
    msg.plan_id.assign("QUADOLLAKWMEQHYNPZJWQBSURVETADZLSHHFVMBNOGISYXHBFUKELIQDFLWMBOKALYOCJORDBSWGVHVECBGFNIKAOGDRCUVAJWCXGBETRSRZXMMGJWEDJIIGTKJYUXZPQNGQXOXAULGZJSWNKQTLCKEKCTWZCVNMTCRMIKAGZFYVEYVTCUPDFUHRDEUWYFPVHVXJXQSJOIMNCPIMHPMSFTOPJFNTAFN");
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.415575882794;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.624963583781;
    tmp_tmp_msg_0_0.amp = 0.432058096252;
    tmp_tmp_msg_0_0.cor = 165U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YOZUVFRIJIEVBFLZBJPSKPAGBSVHFWXEAO");

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
    msg.setTimeStamp(0.817142172328);
    msg.setSource(43326U);
    msg.setSourceEntity(175U);
    msg.setDestination(8487U);
    msg.setDestinationEntity(90U);
    msg.type = 97U;
    msg.op = 22U;
    msg.request_id = 49343U;
    msg.plan_id.assign("QWHQTADPDYQHTPSWTAIYPLDSNVMNXFZEEDDGAXHPOSJKYUEZDBBLOMQVQYQEFZZCLVHRLGMOUXUTKGFLBNYELFVCKFPSIWKUB");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 119U;
    tmp_msg_0.period = 2785079922U;
    tmp_msg_0.duty_cycle = 1683415114U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZOVJBFVXYILNYUOVLADEAJNGTRUPHCDFXKUGBMKEZBKQUWWOKAGFFUZNGENSZWYAMWEYPPKRQEQKHAXCDHJHYKBIIOZPAMCTWWPPLQRYRHVKNDESRSMORGTABOUHPCISSO");

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
    msg.setTimeStamp(0.646482332599);
    msg.setSource(44725U);
    msg.setSourceEntity(130U);
    msg.setDestination(52518U);
    msg.setDestinationEntity(56U);
    msg.plan_count = 25U;
    msg.plan_size = 3123621716U;
    msg.change_time = 0.3628401628;
    msg.change_sid = 35421U;
    msg.change_sname.assign("ODSZOCMNMEISSKLNSJTTKTYJQUVOKUWROBYIHXCVGLVDFUNXAQGJGDWRUXEKQNDNWPWRWDJBYKDPFWIOLGLCPMYZLQFRKIUJVWJFCYSSGZVPVHQOABPRHQMLEDRFXF");
    const char tmp_msg_0[] = {-7, 90, -124, 26, -56, -15, -81, 20, -73, -106, -14, 7, 121, 92, 114, -73, 36, -5, -128, -32, 91, -100, 50, -72, -127, 38, 59, -31, 34, 37, 22, 70, -53, 117, -126, 101, -102, -34, -91, 126, -123, 56, 42, 51, -45, -92, 48, 27, -27, 58, 0, -45, 41, 38, -35, -37, 106, 87, 123, -109, 5, -102, 37, -108, -47, -6, 58, 23, -47, 101, 36, -18, -18, 54, -1, 9, 121, -110, 112, 47, 111, -11, 3, -65, -123, 38, -124, 90, -40, 86, -76, -5, -74, -4, 50, 59, 2, -80, 55, 23, 106, -102, 12, 58, -40, 57, 120, 56, -56, 59, 121, 77, -44, -69, -83, -30, 7, -108, -126, 82, 100, -40, -47, 16, -102, -121, -111, 103, -96, 25, -126, 44, -30, 107, -102, -78, -93, -46, 105, 84, -13, -85, 69, 109, 73, 119, -15, 16, -101, 118, -71, -54, 107, -54, 105, -10, 56, -29, 18, 68, 99, 59, -78, 92, -86, -43, -69, 58, 61, -74, 43, 115, -104, -23};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SBRICNBUQIPROTLSCEPVEQCGHVXAATBLYLWJFGDVMXJBVYIYAGXWDQXFTSQWOJZULOQPMASKDGZCSZCYOBZFBJPYUAVOVROQCFXWGHMBTZQLXCWOMQERALFVFEWKHUSKNNWXDTBTEOPMKCVLNDGEUEJUBBKHSDTLRGRPVZEGOMCYGJGTUWHVINISE");
    tmp_msg_1.plan_size = 6767U;
    tmp_msg_1.change_time = 0.757018209445;
    tmp_msg_1.change_sid = 55508U;
    tmp_msg_1.change_sname.assign("XVMOEGLYSWOYMJZGMBEJKTWIKZWJWUIPKLUBXSWFUF");
    const char tmp_tmp_msg_1_0[] = {107, 96, -23, -109, -123, 97, 83, -44, -83, 5, -48, -1, -12, 24, -34, -38, 126, -3, 44, -124, 71, -48, -124, 61, -77, 51, -108, 47, -19, 97, -81, -92, -127, 13, 35, -113};
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
    msg.setTimeStamp(0.0864912337216);
    msg.setSource(48988U);
    msg.setSourceEntity(127U);
    msg.setDestination(32869U);
    msg.setDestinationEntity(20U);
    msg.plan_count = 58134U;
    msg.plan_size = 3923492200U;
    msg.change_time = 0.818236206822;
    msg.change_sid = 41380U;
    msg.change_sname.assign("TYQTYWVUMGHLKMXZSLPGBSOUBGBFLQMKXUFEEGYHIJZWGPILMGFXNNKZLRWGMINEPQBYDCCYTFQZBIKNETRWMTMHJICOSPNWDAUTDSNVQHCDRNZRAXZCJIMVHVLQKYUPFGSQYBEISPSLJUVFGFATPJZABFAOOVYEBPLEIJAXREHBMNZCVATRXZZTWUKBQCDWVLQUSDAWRVJNOOXDAKNHS");
    const char tmp_msg_0[] = {-94, 112, 83, -62, -120, -14, 29, 23, -80, -41, -88, 121, 115, 27, -118, -12, 21, -125, 40, -48, 19, -113, -103, -43, 105, 17, 72, 65, -113, 106, -28, 126, -41, 103, -53, 87, -67, -81, -63, -93, 79, -50, -85, -109, 87, -97, -119, 17, -97, -124, -119, 120, 66, 119, -17, -109, -41, 2, 64, -87, 104, -58, 101, -100, -77, -22, -101, -91, -14, -47, -68, -16, -66, 100, -75, -45, 27, 75, 119, -93, 115, -64, 89, 40, -17, 32, -36, 26, -114, 118, 48, 114, -120, -89, -119, -60, 89, 54, 23, -29, 47, 105, 84, -24, 120, 116, -101, 48, -31, -91, 93, 21, -25, -54, 86, 43, -91, 54, -58, -120, -5, -122, 41, 79, 48, -3, -72, 121, -54, 117, -20, 24, -59, -45, 89, 108, 17, -84, 119, -49, 114, -17, 77, -105, 62, -37, 18, -89, 31, -82, -101, -99, -33, 50, -76, -90, 46, -68, -15, 107, -83, -22, -11, 14, 43, -111, -53, 14, 120, -126, 4, 119, -104, -42, -99, -85, 19, 79, 22, 13, -22, -93, 90, 51, -40, 79, -9, 112, 93, 33, 57, 80, 121, 52, -57, 69, 7, 81, 118, 38, -91, 108, 24, 76, -10, -51, 122, 24, 10, 124, 13, -18, -27, -92, -67, -67, 78, 98, 97, -70, -21, 41, 39, -99, 2, -16, 96, 22, -75, 54, 62, 33, -5, 116, -82, 122, 14, 20, -105};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OQUIERXZRENRMGVIKLCVRVHTRJAXPUCLLTFGYOWBBZHOGXEAHUIPWSBGBMFYDVLCXNMIKK");
    tmp_msg_1.plan_size = 3897U;
    tmp_msg_1.change_time = 0.897475955932;
    tmp_msg_1.change_sid = 33574U;
    tmp_msg_1.change_sname.assign("RKXAHWKISFIIDCYDOPPWFHVPIJOBFGJECSGUTTCBNFBQJHNLMBDMDQJMATYWHESBJULQOOFWEQZHMQVELFUTKNCCJZDABPOZBRPOEEGZHXSZXYVHAPNECXKLCVHIMXFADBXVSEBUKSSOYZCMMGGGY");
    const char tmp_tmp_msg_1_0[] = {-104, -98, -104, 19, -121, 51, -70, 78, 116, -126, 79, 99, 78, 10, -34, 25, 35, 71, 74, -27, 105, -95, 113, 49, -67, -83, -32, 12, 21, -40, 52, -44, 95, 7, 107, -39, -44, -84, -72, 94, -59, -8, 74, 102, -117, -30, -122, 49, -67, -13, 39, -98, 45, -4, 48, 56, 41, -78, -44, 92, -8, 4, -62, 121, 59, -78, -8, 120, -25, 3, 2, -39, 99, -2, 52, -93, -20, 36, -82, 119, 118, -72, -13, 100, 69, 10, 25, -33, 111, 28, 35, 33, -1, 92, -11, -75, -40, -108, -7, -29, -102, -103};
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
    msg.setTimeStamp(0.945893847089);
    msg.setSource(59908U);
    msg.setSourceEntity(233U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 63142U;
    msg.plan_size = 1974088717U;
    msg.change_time = 0.279751666203;
    msg.change_sid = 46637U;
    msg.change_sname.assign("AUVJSGFUEDOMTDCUQJZFBZYXTHWOHCLLHKFICFKHBPBLHVPRGYVWDJTPEOUJWIHUZXOACUUXTHJZNQVAMKZMGDSZNPYSLMEGBUIDQWXNWEMGOYIRSQDWFYTCBAZIDIGZKJWFEODOOAEFCKHYX");
    const char tmp_msg_0[] = {43, -112, 121, -55, 50, 69, -103, 73, 29, 110, -7, -104, -62, 6, -86, -56, 90, 54, -107, -51, -124, -87, 64, -116, 93, -79, -50, 56, -116, -67, -55, -126, -87, -66, -11, -3, -14, 105, 103, -16, 106, 42, 82, -108, 50, -98, 20, -35, 25, -27, -110, -11, -108, -87, 61, 85, 8, -54, -33, -19, 123, -94, -89, -37, 30, 117, -38, 79, 75, 105, -70, 1, -118, 64, -27, 85, -99, -40, 44, 29, 5, 92, 16, 72, 24, 108, 86, 83, 66, 40, -36, -94, 4, -88, 63, 31, -75, -32, -44, -94, -55, 116, 119, 0, -22, 32, -30, 7, 34, 79, 126, 109, -51, -23, 81, 27, 9, 27, 3, -32, 45, 74, 104, 8, -100, -1, 93, 77, -92, 48, -119, -118, -32, -38, -101, -18, -47, 66, -42, 27, 29, 122, -90, -28, -32, 7, 44, -90, 82, 74, -49, 79, -38, -128, -76, 87, 75, 9, -76, -60, 65, -117, 36, 57, 5, 42, -16, -17, 103, 0, 2, -48, -50, -72, 8, -92, 5, -111, -20, 88, 4, -9, 55, 63, 113, 75, -109, -80, -115, -103, 96, 23, -54, 23, -118, -78, -19, 57, -77, -84, -109, -110, 68, 11, -55, -64, 16, -57, 69, -42, -10, -25, -84, 93, 79, 64, 0, -14, 99, -2, 110, -6, -49, -1, -66, 10, -61, 65, -3, -65, -20, 94, -57, -26, 100, 42, 44, -41, -109, 77, -5, 14, 62, -119, 81, -60, 54, 38, 110, 96, -120};
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
    msg.setTimeStamp(0.574942169738);
    msg.setSource(32381U);
    msg.setSourceEntity(26U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("PRNCTYLSVDBMNCIPHXCUZADTSNFQOWUDHWLPSYGFGMJRVEENJDQXGOWCXTKUZURKIVCOYOAITIOHIIQRYJEEUWXXNETQHADXPNGTUMNAKESWMWLYPQKPSBUQVBLPQVTRPOWHUNEDXXF");
    msg.plan_size = 63083U;
    msg.change_time = 0.808399681813;
    msg.change_sid = 43347U;
    msg.change_sname.assign("PCJKBORMDPFFFKYGRGNEEMLYSZNOADJUYOETNCCFXLXBZZXDURUKWEOQRMZNQZHELTMMJDYTVDMCDVPWMXCSWJKJSYTXUESCQRHDUAPZUZQYYIVLEHMQG");
    const char tmp_msg_0[] = {-108, 21, 48, 24, -80, 44, -5, -68, -59, 10, 30, 4, 61, 93, 41, -12, 21, 69, -68, 55, -39, -14, 91, -65, -34, 19, 36, 11, 85, -88, 73, 20, -64, -23, 102, 16, -20, 104, 5, -9, 87, 44, -18, -27, -3, -35, -27, -76, -93, -40, -95, 91, -107, -58, -70, -106, 68, -72, 96, -89, 73, 26, 30, 63, -19, -109, -127, -45, 73, 17, 5, 43, -80, -52, 70, -49, -17, -109, -45, 66, 35, 73, -46, 93, -34, 84, 109, 5, 112, 100, -62, 56, 34, -42, -114, 87, -38, -36, -70};
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
    msg.setTimeStamp(0.266454922707);
    msg.setSource(33713U);
    msg.setSourceEntity(246U);
    msg.setDestination(46097U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("SCLFUMUIFZCOPRMJKZNJZQETRSXOOFTGSYVVQTLML");
    msg.plan_size = 29734U;
    msg.change_time = 0.33866921238;
    msg.change_sid = 10853U;
    msg.change_sname.assign("EZHMIRHRIUSQTDFODVFLHXLCXF");
    const char tmp_msg_0[] = {84, 24, -44, 55, -1, -106, 44, -7, -46, -106, -11, -100, -103, 88, 17, 114, -124, 92, 99, 109, -86, 9, 87, 86, 70, -32, 111, 13, 37, 17, -34, -19, -14, 94, 62, -45, -82, -97, -34, -46, 21, 40, 110, 99, -11, 6, -110, -19, -49, 74, -79, 4, 47, -117, 13, -47, 20, -86, 102, -31, -3, -91, -100, 43, -51, -54, 47, 44, -84, 60, 78, 5, -45, 12, 66, -49, -8, 105, -9, 22, 15, -58, 114, 6, -48, 78, 113, -16, -69, -53, 80, 19, -54, 30, -122, 38, -44, -83, -66, 87, 9, -127, -100, -5, 27, -124, -31, -42, 111, 24, -19, -59, -71, 97, -127, -68, 19, 69, 105, -44, 72, 83, 55, 125, 83, -54, 102, -77, -86, -36, 20, -77, -85, -76, -47, -91, -62, 26, -17, -90, -88, 80, 33, 0, 76, -23, -81};
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
    msg.setTimeStamp(0.123337598959);
    msg.setSource(30952U);
    msg.setSourceEntity(194U);
    msg.setDestination(12057U);
    msg.setDestinationEntity(133U);
    msg.plan_id.assign("FEABLGOFNEBTBMMPKVHTHSZCRZYNWTGIYBVOH");
    msg.plan_size = 8194U;
    msg.change_time = 0.0351018274155;
    msg.change_sid = 36585U;
    msg.change_sname.assign("RACTCTDZRUDINJJQAKYP");
    const char tmp_msg_0[] = {65, -45, -100, 98, 118, -64, -39, -18, -97, -61, -85, -112, -95, -38, -116, -95, 104, 115, 101, 1, -89, -97, -58, 76, 97, -75, -49, -9, -53, -39, -99, 42, -121, -71, 29, -65, -73, 9, 42, -62, 123, -31, 101, -115, -74, -12, -123, 24, -117, -49, 22, 52, 90, -16, -53, 115, 125, -71, 69, 123, 89, -40, -3, -2, 17, -63, -14, -12, -107, 78, -31, -93, -17, 60, 28, -120, 83, 7, 124, 55, 110, -106, -75, -17, -6, -100, -84, 26, 26, 42, -79, -96, 18, -42, 97, -49, -111, 117, -43, 66, -104, -68, 112, 39, -108, 13, -44, 111, -65, 10, -2, -1, 8, -27, -31, 58, -68, -122, -17, -121, -49, 104, 62, 10, 75, -50, -26, 66, -84, 0, -105, -32, -74, -41, 76, -33, 99, 117, 68, -47, -67, 103, 99, -81, 20, 37, 67, 2, 43, -23, 11, 26, 29, 74, 110, -7, -81, 73, 107, -111, -22, -121, -112, 29, -114, -51, -9, 78, -2, 65, 9, 49, -2, 79, 26, 82, 64, 28, -14, 1, -46, 18, 107, 15, -15, -86, 27, -117, 5, -57, -32, 102, -125, 24, -105, -94, -115, -62, 116, -99, -93, -68, 76, -67, -106, 27, 92, 32, -108, -23, -111, 102, -59, 1, 52, -103, -1, 53, -22, -75, -110, -60, 71, -42, -67, 98, 15, 99, 33, 36, -33, -40, -102};
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
    msg.setTimeStamp(0.0237979322564);
    msg.setSource(11476U);
    msg.setSourceEntity(124U);
    msg.setDestination(24811U);
    msg.setDestinationEntity(131U);
    msg.type = 60U;
    msg.op = 93U;
    msg.request_id = 25170U;
    msg.plan_id.assign("PIDDBIUTZXSMTEXHICJOTOKABYUVRKZPZSPBMQTZYECMFOPNXFVNDU");
    msg.flags = 6700U;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EGVZDQJPBCRJMECZTRTAWGLQSPPBHSVLKJDSBVQVJLGRNZTIYHIYSZAGDRBFGGFRPKHSMAXXNOLKUWMWXVDUDNYFKZTNDTCDPYBWIUZNJHSPSJOQCKFRCPRXQJVHMOTGOKYTCXHBAYGQOVAEXYDVEYABIMNUHHQWS");
    tmp_msg_0.sys_type = 225U;
    tmp_msg_0.owner = 47768U;
    tmp_msg_0.lat = 0.400680814268;
    tmp_msg_0.lon = 0.5326570327;
    tmp_msg_0.height = 0.461614368426;
    tmp_msg_0.services.assign("IJVWZIEAUNWYGCKORLYTVWVLDNTBJUIADTJATOJMVQWZYANYGRODGCRFFJGNLGSPKZIOVVZWLPOGUVRUQTWSFIZAZSOXBUAEDTXBXGQHQLEWAZBDPHSXHNZEFISYLWSFOOFHICFYQPTUUTYBMIKPXYDCX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AITAJYGCTUDUQNJCOVOEPEKSYTKJZEWEYIDWOJUXYNZBLYDGIVQHNNANSYXQUSLQDJPTVALXQHIELTSMMOBGFXKELRPFEHQYBBHFWFJVAEFTDHEGGALPSVWJSRBLWAMMPUBRGVDOGIAZYWPLFFF");

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
    msg.setTimeStamp(0.701403659748);
    msg.setSource(14649U);
    msg.setSourceEntity(103U);
    msg.setDestination(28673U);
    msg.setDestinationEntity(108U);
    msg.type = 94U;
    msg.op = 224U;
    msg.request_id = 47623U;
    msg.plan_id.assign("SNAEZUCPPLUFEGMCYTDUTXDUHONRLCSIOOEQPPTFCZQAONXTEUEYPJKUESGASQXDDWYDPMOMTYKLBSGGJZGUZZRRDLWAKBAXVNLBWLIPEFQZQNXLRJITTYAJBOFPHFEPYTKRBNQRMFUFODJQKTROSXYMMJVVMWVEYMNXGZBYBIHRSIMKNILJQVFGCFAITWWBVHKPBVYCBCQRDGGWUKJLIQVNXWZUSHOKCASXXH");
    msg.flags = 5821U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("MMGLYJLFWMRVSXHQNTPBVJDXGZIJLEDASASDYPGCMGQSUFDQUYWJIWUVZAJLSABWOUNTTMDFJTAWXLAOCHMDROTUIINGZAOH");
    tmp_msg_0.max_speed = 0.873954158061;
    tmp_msg_0.speed_units = 97U;
    tmp_msg_0.lat = 0.828035440324;
    tmp_msg_0.lon = 0.106325649192;
    tmp_msg_0.z = 0.972489656185;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.custom.assign("PBUUTCVFTBOBQYSWQGZJFTZXWCEVFDFSQWQVXRYSUHLCEPZYILAZPSHQUECLGAULBBHKOHITDCJRIKACKKPSJOUUXFZURWLGCZXDNZDMWBXPTGY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ECSKKJYKLMAIOUMZXGWNUWLHREOITIJFTCZVAODAQNNKLEKYNRFPUQDVMHQFDLBFVKCAVHXXBGZSBDZJOINNBBIJZMLTOESEMQRPVHYBZMRKCHNQRZVJVGLFGNGNUOFIQYPLUDHTCPORBICEQBQCXPWSJFNEHYCGASRQUWIDMHCYPDJLWXABYDVSWLPJVYXUPKGEICTPVSUJFSTUW");

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
    msg.setTimeStamp(0.604806268479);
    msg.setSource(18709U);
    msg.setSourceEntity(177U);
    msg.setDestination(49081U);
    msg.setDestinationEntity(231U);
    msg.type = 2U;
    msg.op = 24U;
    msg.request_id = 2320U;
    msg.plan_id.assign("DSZWJHGCMWCDQMWJHZWJPNFVWUDDSXEKPKTZECCPYXQXBKUWNHLEABYNVZHHBFMNBOLVZUFOGYNLCDRDGMULNRWFKJRHKP");
    msg.flags = 53887U;
    IMC::RelativeWind tmp_msg_0;
    tmp_msg_0.angle = 0.399263129099;
    tmp_msg_0.speed = 0.879204904327;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XPKURNOLSXBWBKGLSRWREDOULJNDXCWGNMOCTWXNEKBEMEFTEYOFBDCIHMBCARDGLRKZLFIBQVOAFQQKBQYAMLIFIVITSWCZWHWOKJHQUJKEPZIGJQJSZJCBVMIHOHSDNTQCGIXPRLUUZTVEHYYAPCZOU");

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
    msg.setTimeStamp(0.247552981192);
    msg.setSource(33304U);
    msg.setSourceEntity(71U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(16U);
    msg.state = 26U;
    msg.plan_id.assign("IJCPQVRQBFZSRATWEGONTBSEZQYAXIJDYHUNRELWVCMIVERFYWBIFBGNGINYZDWLQHKOJJAXHMUZEDIWFTCZUIOBKNDXKIOHIURBQCZUNPAPVHKJCQEUGWJUFMRXFFDFEDICYGAPTADLYCVVLTXRHKHSVQQHGPYKVOGRMLSNZFWLSJWDZYSVOJOMGWOJXGCPENZHMKQXYBLUTPSOCMF");
    msg.plan_eta = -1986818238;
    msg.plan_progress = 0.217115289585;
    msg.man_id.assign("RYTGKCHSQPHNSDYZDKJDNXQFAGOUVBUHMXQCNBYYWPEXEJVHYDJLINFNTFWVCFQFTIEKOAOIOTCIGXCWLMDTZQCJVHRSVEGNUBWRSKALPBQPZOCDFUGZWQQAMIKKAMLZMBSKRHZLSJECRKJIXQGDBWDUBGYBSKVJRNDAMXPTDLYSHNBAE");
    msg.man_type = 29256U;
    msg.man_eta = -207346923;
    msg.last_outcome = 44U;

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
    msg.setTimeStamp(0.254614042654);
    msg.setSource(61816U);
    msg.setSourceEntity(244U);
    msg.setDestination(60533U);
    msg.setDestinationEntity(77U);
    msg.state = 238U;
    msg.plan_id.assign("MMRIRKDESRELNUTGQDCISZVBOJPJREKNBEWYLFEGQYZRTKFLTXRXPUCIMVHAZNMJLSRHBYAHUOKVVJQEXTEQUFM");
    msg.plan_eta = -1456332849;
    msg.plan_progress = 0.65443146851;
    msg.man_id.assign("DZPSENFUFHIQPBAWQSQCSJVZLNQCRKKZIHXLGXKPUIWEDZEBEDVOXHKTQZJHYJLDUMUNYUDPRMJHZFJLMGGZLQLAECCPPOVKIUNBJCBRMEXPMSMVXJATTFACNWTXOQOHGFIVYZHFWDESGXEASDUXVXAQTJFOLLAZWADLJECCHBNTVZOYPERBNBRGKTG");
    msg.man_type = 32001U;
    msg.man_eta = -877887512;
    msg.last_outcome = 26U;

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
    msg.setTimeStamp(0.275088701373);
    msg.setSource(36010U);
    msg.setSourceEntity(175U);
    msg.setDestination(58304U);
    msg.setDestinationEntity(7U);
    msg.state = 189U;
    msg.plan_id.assign("RCYLCRFACLSQCUDIZWLVBDHJYNORGQQBIDHMXHFVXEEBIKIKEKJCWGRSTZVCMJVANXIHCDGABLBXTMSLWYOFQROKPZFLRS");
    msg.plan_eta = 567961110;
    msg.plan_progress = 0.335507271693;
    msg.man_id.assign("FIOLXARLLWDDFBJUBZSHBAOVNSHFXMULZEZZUBQWAXROCDKEANCUVSHCFOZLRTGDWENAQXHBJJKREUWAHKXMMOZJMPDVYVAEJPNCGICDVTUMFBXTQNYYMTOKWSKYRUEJWZPFLPGTEJFGABNJSCRLXTFRMZDIFTVZEGYSPIGMYCPITHPRS");
    msg.man_type = 29582U;
    msg.man_eta = 1079074849;
    msg.last_outcome = 217U;

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
    msg.setTimeStamp(0.897706413843);
    msg.setSource(65002U);
    msg.setSourceEntity(35U);
    msg.setDestination(7904U);
    msg.setDestinationEntity(88U);
    msg.name.assign("UCSIEBSRQWITUFQZUEERYKPFCGFOKSRMHDNDZKVNVYFBUOWDHUZGBTNFMJMPATAQMSYLOVMCROSCTNGUEQNOLHZMJKCPLIRQZCTUWZR");
    msg.value.assign("IRUYHNGIKQZGFASMMLLVPHXAWIVBEEQBFDFQU");
    msg.type = 21U;
    msg.access = 222U;

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
    msg.setTimeStamp(0.205278491286);
    msg.setSource(33111U);
    msg.setSourceEntity(77U);
    msg.setDestination(62248U);
    msg.setDestinationEntity(77U);
    msg.name.assign("ICZQLZXVGIQFHVPPTHNZLINVDGNYSCPBREESMLHYHFZFTLUXJKJOABZSALXXEVBHLVICBMYWJMRNCZBVWWYFJXYOTAEQIDSWJBSKJKRJSPIFOOHKWYRNOHVSIEMQEDRGVAAMBMUDLQVLSGFWHCKDQZKTWMQGITRRCTUWRTEXDGDGHZMSEYYAENCANABTPMKKOIUBJTGEPWU");
    msg.value.assign("QOCBYMQCNKHUDKEWVIIZRALOZQPEUABJISRITOZHJKYPQSXWWMEFLSXGCAVMJLZNKUTXUPEUTDYZUPYXFDWXNJBGZXAVRLDGNZVFHJOUCQATLXCRAGTDGAZTRWBOHGOLMOQFFPLNKBDSDXFDMCQSEYGMGEPRYTAMVIXGVLKEINGBWYNTCUYRMTJPNUMWKZUKNWIJRDVCDQPBNHYOQJT");
    msg.type = 26U;
    msg.access = 166U;

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
    msg.setTimeStamp(0.611809775604);
    msg.setSource(21825U);
    msg.setSourceEntity(75U);
    msg.setDestination(52187U);
    msg.setDestinationEntity(48U);
    msg.name.assign("GNTREXMJDASRWHIRITRDYVDSPWVCLGRGAGPGBAUMZZPTANOCWJMIQSEZJSQUQLUANLKLMHKJWYUOYXBTXGQMCDAXSW");
    msg.value.assign("ZTKPIQAPVANIXJIFQWTNWFZXMCHFSGFLWMGKALKQREPPAFXTIZQCPHKRAZEHBDRINOBOXYNIYEJTNXCSONGVHNOMEBGWBMAKOFXBVUEOLRQJZURRMDVTBMBPZNUQFEVHXLKMQUG");
    msg.type = 169U;
    msg.access = 190U;

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
    msg.setTimeStamp(0.973385334128);
    msg.setSource(60845U);
    msg.setSourceEntity(56U);
    msg.setDestination(45823U);
    msg.setDestinationEntity(4U);
    msg.cmd = 58U;
    msg.op = 187U;
    msg.plan_id.assign("GCVBXKZALXCCYEUFQEEOKBREGNEALMISWYUKKFJARMSFVDDQVTTQYHNUPHVNFITFDHEDMXURGXLVFYJASWKAIAZARMGRJDHLOBXSOEHKLOLZCPOHBOBCGTLZVQSGWOSBNNGUCQKDCQFDJUYXZUYIIAWOQPWPWQNXZZRRZNIDUTJPVKYXBTSNPKLQRRYLVBVICGUDYAWNJHJIOWZBGLBDPJCSZEJJHNPEESKMUMTWWATFTYOCQIFMSHPIPVM");
    msg.params.assign("CLEQQTKGSQYKOWZJISBMOYIPERKLNCHLWHIOPSEEZDLPMYPJZXCUCXEOJXVJFCZVBPZMXZR");

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
    msg.setTimeStamp(0.038252568622);
    msg.setSource(46780U);
    msg.setSourceEntity(63U);
    msg.setDestination(50491U);
    msg.setDestinationEntity(160U);
    msg.cmd = 245U;
    msg.op = 166U;
    msg.plan_id.assign("XJLJAVFCRLXCYZZTKZMQGDKMPMNVIBAOTHXGKVPDSWNNUWCXHULYROEXGKREVBYCLSFQKMYBOLWLFQIFBGJXYAZMOKHZNDITNGIJRTRPDAMTSWTJTJHACLEUGIUYGAQFVFNRRUTXWPGMVMNJAHOEINSPBKLREYICXKTOQOTEVDCZBWEVQJCE");
    msg.params.assign("CVPWTQNXVEFEWHAQSQN");

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
    msg.setTimeStamp(0.311307586589);
    msg.setSource(41334U);
    msg.setSourceEntity(153U);
    msg.setDestination(29765U);
    msg.setDestinationEntity(209U);
    msg.cmd = 219U;
    msg.op = 159U;
    msg.plan_id.assign("FMJSMIYROZDCEDYGIBVULMXGAXVHOMNAZPIRMZDJFZTBLJPUIETSSSTZBUTBFMCGAZEDWLDCVPEGBYUHXQFGKNBYKVQQHDZGKHEPUUYPQRWOBRJRNNSTKTGJNUAKMVHK");
    msg.params.assign("DJHCFSEFZNBHTCGOOLEDXLTWBCAWWWQXIVVDIJSRPNAKUSRCZJPUKXOAPRZHYXCQIOYHDQJNVMCSQRZEUNAEMTFUVELHXXBHPXYYK");

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
    msg.setTimeStamp(0.301308925225);
    msg.setSource(19660U);
    msg.setSourceEntity(47U);
    msg.setDestination(7694U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("TKONCUGLRAPNBHNIWQDYQLJIDZLM");
    msg.op = 222U;
    msg.lat = 0.706836362134;
    msg.lon = 0.560922870905;
    msg.height = 0.551915111322;
    msg.x = 0.13719938711;
    msg.y = 0.342442125313;
    msg.z = 0.135980475426;
    msg.phi = 0.922585740031;
    msg.theta = 0.203641994879;
    msg.psi = 0.187733325813;
    msg.vx = 0.23957864266;
    msg.vy = 0.15860130124;
    msg.vz = 0.0418658221493;
    msg.p = 0.842475378775;
    msg.q = 0.699179895669;
    msg.r = 0.194306656937;
    msg.svx = 0.848794377839;
    msg.svy = 0.340349539746;
    msg.svz = 0.728902215908;

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
    msg.setTimeStamp(0.782362547134);
    msg.setSource(30043U);
    msg.setSourceEntity(138U);
    msg.setDestination(19985U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("NOQGQQULSNFBBCGCVRXMHVXZFWQZOMOAOYKKSOSNREGCKEXKUBFLLXTJCUHRCXNGFPQIUJASIUEQAPIBGKPQVQBRKQAJPSZWWHYLZTHDEIRFVSWWJMWMDBPNULLIXNIAPHLBKDVRRAFFSJYCMLWWMKTYWBDCCFCOQXONJGAJXFZAPEIEDAJVZJLUSIEECMIYLAGHGTTYHRDTSDOUVPTU");
    msg.op = 81U;
    msg.lat = 0.829363802868;
    msg.lon = 0.33345046228;
    msg.height = 0.919869810242;
    msg.x = 0.472193825638;
    msg.y = 0.912005327097;
    msg.z = 0.697855829999;
    msg.phi = 0.428759600402;
    msg.theta = 0.297779439777;
    msg.psi = 0.402945820525;
    msg.vx = 0.0593015085799;
    msg.vy = 0.245750975422;
    msg.vz = 0.672052192887;
    msg.p = 0.814467342403;
    msg.q = 0.336976288364;
    msg.r = 0.264635886172;
    msg.svx = 0.511676240597;
    msg.svy = 0.154561426113;
    msg.svz = 0.858461546727;

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
    msg.setTimeStamp(0.70582451508);
    msg.setSource(32616U);
    msg.setSourceEntity(89U);
    msg.setDestination(48463U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("OMJSUGFWZWIQAYSEUOGP");
    msg.op = 254U;
    msg.lat = 0.432867883844;
    msg.lon = 0.665741761724;
    msg.height = 0.897834688574;
    msg.x = 0.534071232903;
    msg.y = 0.766212409393;
    msg.z = 0.0744441964292;
    msg.phi = 0.742395178418;
    msg.theta = 0.334963892451;
    msg.psi = 0.313351579603;
    msg.vx = 0.35876790889;
    msg.vy = 0.437200039441;
    msg.vz = 0.52783679054;
    msg.p = 0.88771082552;
    msg.q = 0.68413545959;
    msg.r = 0.721808332513;
    msg.svx = 0.240981926852;
    msg.svy = 0.870800433925;
    msg.svz = 0.280519140655;

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
    msg.setTimeStamp(0.158655102657);
    msg.setSource(44248U);
    msg.setSourceEntity(75U);
    msg.setDestination(1446U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("YUPPVWAGMRGFNPACWSGYDBWZDZUYRCABLVDMLFXIJOEYFWOHBLKSFMPEORYLERDJAVPMBPWSNJRBINXCMKJJHFACBQQNYUJTCCZGIWXEDRDDFXRQVTOSYOIYVMCCGGHFMTXFSKBHLQMOPTLIIIEITZQHLXHUKVHEEWOQPETCNUTW");
    msg.type = 49U;
    msg.properties = 159U;
    msg.durations.assign("YZNYACJPHBECLHFWQBEXOJKLMTUCNDTDBRCIMCEHYUZXKIXCAFULGIIOMLTGXZEOBBWLVWUQOBHSIZLOFQNJVRTVPUSKOLFSYEMETFRGLVGZVDVFCKWGWWZDBBQYTVMFYNDWXSCGKJWNNSMFM");
    msg.distances.assign("BCIXNYRAJHWQUBRGSPCPZMKYOHRYEZLPNTLRIJVRYTFUFEKSBXZRBEIMZJVOLDBDECTW");
    msg.actions.assign("KPEEBYGEMEKSABUKNQVOIYMDXKCNDYOARRDHNXNDUQFDTTQDWAFZGSYQCSAPIMLKMJCCSQLYOFUALTUBZYINRSYTNRZTBVFHOTPUBEMJFVZFERPHPOWXBUPKDKYJWMEYVD");
    msg.fuel.assign("JRRRJLPTGDVSSEKCKICVASNCBAMHTCSFWPZJEJUEOMYWGIPTHGJRBDHADUMRCLFQSYFZEOGEPDWCNIQETOLYUMCQTKNJNZLVGOZBCJRNDXAHFZHKNVWYIQOKVZTPOKABBWXMCVVFFLDVWMHTPYFCLNFEKWLHAAIWDIBPNUZTWWHDASBLXTBVYEIXUPKSPAAZBJUNXDGYKUGOJORLIMEKRQSTUJQYYRDQFXHONIGYRGMESPXU");

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
    msg.setTimeStamp(0.372490033385);
    msg.setSource(34996U);
    msg.setSourceEntity(92U);
    msg.setDestination(22910U);
    msg.setDestinationEntity(136U);
    msg.plan_id.assign("BWTQOPVLOGVAWIZQMWDPJFFXKYGKDGJPBJVWQNYWDXQJWSFKCVTLMBRXUYBZHFRHIYPVMXXHKRRTRMFDSWPIAYFNLCGAIVWYBUKCLHWCESEPUODNHZ");
    msg.type = 101U;
    msg.properties = 215U;
    msg.durations.assign("MNEUPGDMHLUJLPFPCKGOWWGPRFZR");
    msg.distances.assign("WMUGWEAOTHRAGUXSGNLJKBMCZCOZVTXZRQFFHTTQXILVGCKPWREFHARMXLWZODDHPHTYXZTBNSAURVUONENZJYEYKWSQONSPGCNSAIPIXKBWBVFILTSDCXYQFAYBIPHQCJNFGQXJKGNZYUYSXUMCMCFSOMJIIPEVKYLRLKOEMJNVUMDOKILHFFTCLBDZRPLVBQVVBAA");
    msg.actions.assign("MWFLNDNCQXCNEYRYJALHVMKKTPHWJTDJFWUFMUYYLQORBATQDOAPCIMHAFGVWBZJIKGSUQWKAAOCKBGHLDIIVGYO");
    msg.fuel.assign("QZKXIYRNQIBUWOLUMJOERFVSYZTHSSFVUDVGFCXLRBWYLMGQIEGKEOCEGQJPMVKHXRKSTAPVCWPDFASQBCTKXWLLNKGMIAASBIYATTNWXWOZOYUHHJLUWMDEZFBOJGVCSTGAQUTRLVAZZLCBMDOYKYAKDCGRWJFTIFHMEPSPUFJEWKRXIMNAXDQRZVSHGFRHBDZLOHPBNZQSMCOFLVDP");

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
    msg.setTimeStamp(0.623194807817);
    msg.setSource(16400U);
    msg.setSourceEntity(196U);
    msg.setDestination(56833U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("JIGYSMIRHCZSAPUXKHGNQSFWTECICMURULNYXMNDBVTOKEOWQBQTPJBREAJAOQHBPRKNDJUBJVQZNAPCWLFSAXGMFGWRGAVMAWCTCQMKIOZGWXDJIMLUOFXKQPFMVTLEYWQKRVTKOFHXFJDPBWISOCKMBXIKRYFBDXMSVLLK");
    msg.type = 134U;
    msg.properties = 51U;
    msg.durations.assign("ULCMWRQQGPNVVBZYFHYELCOTSFWFDAVFXDXXLHCAJOLPSWAANELVSIRDKKGKDXZJDIYVJHOURMTVWCRSVECZBEJCB");
    msg.distances.assign("YGWIHBMAWURLULMBZKVDKZFJHHTXASKNVPUMYSPQQCODYZWAWTVGOIXVKITXEWDFVHUYCHSSRQTPOJVUROJOAZJPUJCNPASOFNFQJADDONKRORLEULEJTZQGCAYXRMEEFHQWGVCWYBUBUQIVZGTYZLITGPTBCCHHSXRMYYT");
    msg.actions.assign("DZVNMTQAAHIYSGOJCZISCQRQDNQEHUJHQAEQTBYIFCPPKZAPBORANXDCHUSLBKJVYCIQPWZCWYDYXMTOBLESUIRTFPCEADOLLWJIFVTYSKKPUSRABCSDZRMWRQFKADMDFYMNUXXMPSFNWTSOHUKTHPPTXUNXZCYWEQSNMTEFBUKIALNELJGVGWGHFNBEE");
    msg.fuel.assign("DATNNGMGEERLDJOXFOMPIVQBJIDNDUGIUQLCCEIQUKRZSDLJTVMRSMAKTQUQLCPDUYGKAFUOMAVOXTHMSSSKRPKAJFBVHFQVVVJTEITLNCXWRGJPBNCSXBZKGACHZPXGLBISCBLTRWNNHJYZFGEQPAZOCEJQFWPWZXUCBYOAIBMZVHFYKEMXCHWSSYAYHXYOINKTHBQXWTLFWQYMGAVSJEEWPVZODUYIEWUYGW");

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
    msg.setTimeStamp(0.850333164997);
    msg.setSource(51177U);
    msg.setSourceEntity(37U);
    msg.setDestination(57010U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.800130898584;
    msg.lon = 0.106177517979;
    msg.depth = 0.0951190723405;
    msg.roll = 0.868780953176;
    msg.pitch = 0.579331262748;
    msg.yaw = 0.893926861925;
    msg.rcp_time = 0.940157544967;
    msg.sid.assign("CKERMORIICQQFZPYGKDAPBPCUIASBFHJBVNDTVWLZHHYFMFDLKXLWTTJWYSIUESMZDEFUWKXNYAZZWQ");
    msg.s_type = 210U;

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
    msg.setTimeStamp(0.0479639614776);
    msg.setSource(35430U);
    msg.setSourceEntity(12U);
    msg.setDestination(58458U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.494827443037;
    msg.lon = 0.292343559893;
    msg.depth = 0.75657231537;
    msg.roll = 0.515210447413;
    msg.pitch = 0.608526409051;
    msg.yaw = 0.549029408177;
    msg.rcp_time = 0.497983432248;
    msg.sid.assign("KCPTNPDTAMIXOQDOYRXXIVCVLTWTVOCQMNSRAQXKQVBJNVHNZQMGUVAVPTZKKEFPECOTSKSDIAZNDWESMCOQAFYIJUERDBDVJBTFUJBGMHOUHRGXJNEHLGKAGSGLPZTDWDHCKAHVOWGJHWKRIWMQLUUFZYRBCHESIEIYXZWRUTRMZJGOPYW");
    msg.s_type = 0U;

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
    msg.setTimeStamp(0.730185645859);
    msg.setSource(58753U);
    msg.setSourceEntity(1U);
    msg.setDestination(6035U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.0593720455105;
    msg.lon = 0.895409981357;
    msg.depth = 0.978393352975;
    msg.roll = 0.877916324092;
    msg.pitch = 0.729959707788;
    msg.yaw = 0.953956919718;
    msg.rcp_time = 0.484614527029;
    msg.sid.assign("MLPFQDAAOATUSORLMPJCGJXMHDNTHANIWXSGVSPLKGZXHFNWWTLRIOMZWOTRCSYCRKUJPUDEBICHFIZFNEXMLZTBJNYYLFVMEPKYHGXBYQOULIHTZVUEOZACEDJHTRCDBOENYLOBTSQYABBSXIIDEMMXVKIRQQBDVWNHFCHKAUQUXGWFEYPSKBOTSJK");
    msg.s_type = 168U;

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
    msg.setTimeStamp(0.999623106932);
    msg.setSource(28141U);
    msg.setSourceEntity(111U);
    msg.setDestination(4216U);
    msg.setDestinationEntity(163U);
    msg.id.assign("GVYKTBJMRMCWEFPJFBAWCOI");
    msg.sensor_class.assign("KFHLZWIYYJLDYHFTLAVXPZREMOLCUIIQMWDBNRHYHUKSLPZVZTEFORNEJOMUBXRIUXDPIWGAFXMGFRWPVBTWTHPTLADBUXUKM");
    msg.lat = 0.313588885877;
    msg.lon = 0.20842006036;
    msg.alt = 0.0227991982797;
    msg.heading = 0.565572212256;
    msg.data.assign("TFEQHBDBMVUALTTJRZCGGXHOHLDHWWNHBWFNYSESNALLVNBKYBDQKAVZQKIADRPCMPMFYYXXG");

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
    msg.setTimeStamp(0.886893907312);
    msg.setSource(8299U);
    msg.setSourceEntity(207U);
    msg.setDestination(19716U);
    msg.setDestinationEntity(18U);
    msg.id.assign("DPGYXVUAZYCQXHFOPIINVUVPOMTLZQHLQSRPXYZMZBTFVJUNTTUSADSNEYCWWJAGVPJGRFGTQLYMMYBASYDISFGKBXPLFBEFJHNNLWFPYLAIBOIPDWCZNTJHXAEIVEKRHEFELXWKCDDIR");
    msg.sensor_class.assign("UDZYDPOXJCAWEHQYCEURHCKGOVEDNHCWLYXOSGNBMGAKMBPLYCMPHFZGLHTFKBPQMAGAPMAEYJWSLUJFLDVZNFSERCRRUBAYWNITYXWPUMSZLEAJVJROLDQPWBKKWQZEFKYEIRVSLFHVTZGINFSNTTBOXGEVUMGROXRTOOZINRJSCILVHZQXCEIGMAWIMPQQKZVUQPWDBBHABMOCTHXQKSZDSFFDKKVXDCYDTSGXJQB");
    msg.lat = 0.695544977674;
    msg.lon = 0.127065967758;
    msg.alt = 0.477961586808;
    msg.heading = 0.65609779115;
    msg.data.assign("RFNRXHEUVYTSKRBCFHKGIJYWNVPFMSFJVSKWAOWWBUIOTDHRXOXRICQUGNFWCPPGEGOKATGLVLMFUVVKTTAIMQKJVXHNGPRIBZJCHLSAGHXQSAWEVQEZEWQMSZQKPMFNPDBRBBVRAEUEVLYXLZJGYHKUUAZBTLLOODHHITYCYFYCQLZDJ");

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
    msg.setTimeStamp(0.0932067401968);
    msg.setSource(53704U);
    msg.setSourceEntity(105U);
    msg.setDestination(29842U);
    msg.setDestinationEntity(60U);
    msg.id.assign("BEQTUMAVJGJTCZVWEPNGYILSOFCUXDMXYVJLVYTRIFPNFPRQSIBDFWBIRAEZUHMCGCMKXXXAGGMXHVGOIJUQTXDSLQLQTCCEWOEKKKPYWUAXCPPOBMJKVFQNDDWZDGRCVEWUIDRBHQDBQZBAVISYINMLKHMNLWETZBHLVURYIKFNKNZAANRTEMGHJQYBTJOFOJZRILEXPCAMQYOPTGAWSEROPUHZYXOFUPZ");
    msg.sensor_class.assign("MCYPXEXHDYXCMMTIZIXMXZIOUOHOAWNXMDFWQYGROGYBBQEKTXKPRWSCURKAKSXZVNYKHROSJDIGGSSNPFMLLWNJWPMTRHBHZVETJICVOYLJUPJSDULGTIFOUKQMNQHVELFXGHCB");
    msg.lat = 0.95641965105;
    msg.lon = 0.865459297919;
    msg.alt = 0.587961505537;
    msg.heading = 0.657571721088;
    msg.data.assign("VFFYQBPOPVTMSSZECUEWQJGXWEGPTBZDUYKDPJUPZKYGRSQRBXTNLLHPSAVKBHSXIAIWBTZMWWFDHKXOUUPAMPOZFSLRUFMNDUORLGRQBKNYGOFDOAAOLOQTVDEBCIZUQCMCJFWNZWLGNSCQWEXMJYTJRHQ");

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
    msg.setTimeStamp(0.907481335417);
    msg.setSource(50929U);
    msg.setSourceEntity(173U);
    msg.setDestination(49701U);
    msg.setDestinationEntity(200U);
    msg.msg_type.assign("KRBRPHKDSWTZBELJXMCQENDKGZVXXOHRVEIGVKRMQNZWPJIXQCAIFOUWSTNAKIOPHPIYFCTAEDJMOEFQDNCYTOMZGQWIQBYVQCGCKOJXFBFHTDFIPVKVTTTAXRWAHDGKGDVNSDNGCTMYFSEAYPHMRJPRSEUHYCBYBDNOPMLWABAMQSEIZXWBLLYCZMJWRJUAAILFULFSVHHIVDUGJYPWTOKWLPSLUXLQRBUNCFQXSUZJNOZLZMREVENUHYJGU");
    msg.sensor_class.assign("DTCEMCTUYHYTGVVCIGARZVBDWGDZYUJEOLATJZXBHLIMSFCYQSNYTPZJWNOFWWHGKSAXSQOEMYEKKMNPPFFGTCEUXXJEFLAZKASXXGKAOQYJVURTVWDMHULIZPLXGVOCCGUNBDQTFRRODPPJQQCEBKFKVHNSFWQYZIZVFUOLBNSWBNVJAQLEOPSQKUZHNXSDRBGNMNMCHWKRJXEHTALLVIYTRSAQROOGIHPDMDZBMEDRJB");
    msg.mmsi.assign("TUKNRKBVTDXBEKUOJDWQZSZAWASYXEXPVWWNOAQLGHXQGSPFOUZJRGFMEYGLNICNXLAGRJHRVPXKGSQMXSAPCBLQQMFAKHOMBROFGCVCNTECKSIFYELJZYBQXCTPDLLOACJFERGIUHDWFJDMLUINPDTHUTEZMTPULNLXFZQKIUADDUVJTCMCJMBFIWHRKDNWOYOZGAORRZISIHAKQSFPHVJYYSW");
    msg.callsign.assign("KMNUGLPMPHSXUEUTNXXRMVHXNQLCSKKNTCCLVUASAZPYYGTKBRCICOHUTCTQIFZPJRLDY");
    msg.name.assign("KGFLCXWOXYMBTAGUEWSRZJSHBQVVTTQGTYIUYCTKHTOVJVDPKIDINMBWGEFREIGWFUDADZXECFAEOZARELMJSPBGOCSKLCCMSZUBWUCLNMPPDMTKJCZPHSJQBDHWYOTYUURLBQUUUFDNHXNNAACHFNVPNYYGEMOSZAVNXQJHTIKNQFMKZSMLWAJEWVRDLWR");
    msg.nav_status = 124U;
    msg.type_and_cargo = 197U;
    msg.lat = 0.579933815104;
    msg.lon = 0.921801388002;
    msg.course = 0.423340804982;
    msg.speed = 0.300511910377;
    msg.a = 0.783411518778;
    msg.b = 0.563385952787;
    msg.c = 0.20420095181;
    msg.d = 0.436557907017;
    msg.draught = 0.0827355452144;

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
    msg.setTimeStamp(0.181705408069);
    msg.setSource(1465U);
    msg.setSourceEntity(221U);
    msg.setDestination(6119U);
    msg.setDestinationEntity(154U);
    msg.msg_type.assign("EQLHBBJBWAXHJUQFFNERZPOLHARNQTJUUCQPSDHMOBMXMOZROVSXAEXVQIOJNIDDKLNOLTGDNNPWZGVTOFGWSEXJLKZMFGCAPBVYIIAQLIIQYFKRFHYTRSOJBJBKUTYFZANLOPQLVGSEEXCCBNPCEDTFXKEUWWCUDXUDM");
    msg.sensor_class.assign("KJDQFPAFXQVGGNTGUZKRORWLAPEMHRWNKMQMQPNBMMOHIPPVOXXCSTIUAZOYLNUSDTJTKGYFDKDRRAFVCTOPOEJZHRVAUUPQRBXICYEZILZDFKSVLEZSQSCXCXJGNQWETLBOJVVYJKNKSFIHTNBSMCFWIGUBLPXWEVWTDMPAWMVHCNUEGMM");
    msg.mmsi.assign("PCJAVIYPVETQLCUZIBCGYPDJMFZUAAHBTREHWCZRGWWXBFVXDZEMJWSNCEUDQAIWKQGPVUNBLRKDTNONMYIABITMDWAIKFCXCRRYNDVTUMZZBEVLIPXTKKAKEPQEOMFBRHHCMFHBYMJGTWILXKOQXGXOMNRYLZUILHTS");
    msg.callsign.assign("XQDNQGYCBLUXFHTZEGMTYTCBMMYLUOLLZSVREPLWNXXYGLJCCDVDIRRPQHIZXGLENOOHROTAWQGPPGJHKAQSKVECBENJMGYIPTKJPRBJYOVASOKNMPXFVAYOSZPZGXIYWKZUWCJJDEWHCLT");
    msg.name.assign("CPHYWXMAQRPAJSXDHGVEHOKNSOCGWRNCHKPBTQHMTUNINQLKJFMY");
    msg.nav_status = 245U;
    msg.type_and_cargo = 64U;
    msg.lat = 0.544905595554;
    msg.lon = 0.365019633079;
    msg.course = 0.271702166379;
    msg.speed = 0.73000013905;
    msg.a = 0.601025239795;
    msg.b = 0.591582130995;
    msg.c = 0.687815237919;
    msg.d = 0.118854942614;
    msg.draught = 0.737800266333;

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
    msg.setTimeStamp(0.996303136133);
    msg.setSource(45673U);
    msg.setSourceEntity(35U);
    msg.setDestination(23116U);
    msg.setDestinationEntity(226U);
    msg.msg_type.assign("FQIHNHWJWTJVOZIYZDOGSGEPSCFYNWUJOYUFZAYXYWXQANAZPCBRORRBKGBYRWDHDYNZUFLXNWPDBVBVNLSYXOPPEMLXMQUGMBKIOAXORGHEYRLBADRXHPJXCWVDCDHSIHEQUBSTCKOFZFNGJRZUGZILOKDCKNQVBJIDQCTVEUGJQMMKRHTYZCECQNKANPQADWECMAUFXSVLSEELJLVX");
    msg.sensor_class.assign("YNEJXCEUMLBSRCKAAOC");
    msg.mmsi.assign("FUAXPWXIAZQDQCMJOEQJDKVXLEFRDYEDVBCLZTDXDOCZPKBLXKNTYHOEERXWYRZBGCUMPIWBQFVAMKDHSWVQRMZGSISNJDNIBOJKMUTRCOQSZKAFJRVAXTUHUVLVAQZNGFJKDAMRIQXDJBOSWWYYYQBLUHROBLRSGGBECFIPYYZPHSHXVIBUGAVCHOSTZGWNHFWNJ");
    msg.callsign.assign("OHLBZFFQUQDULMPLDWNUSLQGURMNZILLGNWWMSYFYYVOXAKNLOURBNBPFXDNKFOAYAHRWEJAKENJUCSVBJKVYWMTZGWICYZRCWPNHHMKMGCIVYQHXTJRWVGFZSXZSNDPSPTX");
    msg.name.assign("LUWCDJLLGLVQFHREEHDNTFXQKWGLPEPSHZZKBVQPLTFZTZKZFVAJXHNXXLKUBKFQTOQOOPTDYEONIUAYWKNJRCWEDCNCJGVVDKSGSQXAMMWBUZRCEVJUOJKXRQFIOUTYXIJZQHRDUIWRDDCGCVGQMJPVNHMESNXHOBPBBSCLYPUSESDBMUETQIMBBOMYNUATGEYXAMFKRATRJHXN");
    msg.nav_status = 207U;
    msg.type_and_cargo = 9U;
    msg.lat = 0.335836559644;
    msg.lon = 0.46213426509;
    msg.course = 0.926333138323;
    msg.speed = 0.689723970832;
    msg.a = 0.963786073988;
    msg.b = 0.553051632457;
    msg.c = 0.0576347653151;
    msg.d = 0.411313604867;
    msg.draught = 0.0822566904476;

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
    msg.setTimeStamp(0.00212223199118);
    msg.setSource(5231U);
    msg.setSourceEntity(114U);
    msg.setDestination(39101U);
    msg.setDestinationEntity(23U);
    msg.id.assign("DBZYPJFVUCFEIHYRDUPFDROONESBUWIGAMDKQWGYMOVTXSHTPCXFHFUADYGCBFZLBWSRIHENCYQVOCEWDLVXBSYZLFNETWXASMNVKHGPXRCZMZYVBSJPGTTJCTPNROGSFHOCGQAUYTTGLMHHETWISKMBQRNQHXFLDZIQJJUAILEQQRULMQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HIMCSJIPPYLXYIHWINCPVTHRXQGSKFZZGKOSGHNUPHNCHFLLOEEFP");
    tmp_msg_0.feature_type = 224U;
    tmp_msg_0.rgb_red = 48U;
    tmp_msg_0.rgb_green = 104U;
    tmp_msg_0.rgb_blue = 178U;
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
    msg.setTimeStamp(0.78102537336);
    msg.setSource(10496U);
    msg.setSourceEntity(77U);
    msg.setDestination(29290U);
    msg.setDestinationEntity(49U);
    msg.id.assign("NWCFJWFNMTRPAUOFHBLLXVYITMOXMVKJGPEPFNAGHCDKFZHAQPJIMNMKYOTURNXULPEPOCDCAKIWSYFMCZJAQRYICBIVSFVKNYEZDNQLYMXXASLU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FUWOVYTYSMJNJJBGMFARPBZKOEIFIOAPJWHXMAOWCJIHDLZLKSZRCBYMFGOURNDHECQZSCTHSXWFEVNOGOTLDNYKZEJWAACMAQGDKYVCPPWBSXKIFQAGNQJTIGTSSVRMELPZKKQIHSPHTVIYHXVXITTQQUKRRVNGAWWERFPMEXFUDLLBFQEJHCDGVMBWXZPLARDCRXNZREEGMC");
    tmp_msg_0.feature_type = 219U;
    tmp_msg_0.rgb_red = 183U;
    tmp_msg_0.rgb_green = 141U;
    tmp_msg_0.rgb_blue = 226U;
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
    msg.setTimeStamp(0.112720699619);
    msg.setSource(18296U);
    msg.setSourceEntity(234U);
    msg.setDestination(34973U);
    msg.setDestinationEntity(146U);
    msg.id.assign("ONEINWXFXDYWSSTRPCXXRPMNYHAQPDFDHLOZQJDEMKUFPZJRYPNQFLYPSTVAIZVCAWHSIMJJHYLHGIUATWKTCBRVVGBKHEVIQLWQUDONIQVSVKDQLMLRNGRWTYZUOFFUMENGLJGIDREZALKGDBJBXWTPAYIOPSBGMIVAKMU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PRHBOSZSCQJONUYGUSAQHNNEDKWCSWIFBKAVRABPLRXIMYTXTECMJNVOSPDKCQMWPBLJOFTKGJWJMZDOQXAMKNUAYEZHEWALDPQBPIOIAMWKYNUUSPOIDOUDIJRGT");
    tmp_msg_0.feature_type = 36U;
    tmp_msg_0.rgb_red = 193U;
    tmp_msg_0.rgb_green = 75U;
    tmp_msg_0.rgb_blue = 133U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.678327134565;
    tmp_tmp_msg_0_0.lon = 0.883505632569;
    tmp_tmp_msg_0_0.alt = 0.594866892931;
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
    msg.setTimeStamp(0.0337383309113);
    msg.setSource(47442U);
    msg.setSourceEntity(160U);
    msg.setDestination(23354U);
    msg.setDestinationEntity(117U);
    msg.id.assign("DKCZJZVWIRCZVEZKHODJFLNEUZAMBHNEAMOABEJSFGKRNTHXALDFTYIQRBDZAPBRRWRKCYOGPWTXBVLWOJPNEPAANKLRFSPSUAFHFTPLGFTULEDQPIQGVFDJIBOOWEDLXYOCGVHBSHJOFMSKAE");
    msg.feature_type = 65U;
    msg.rgb_red = 195U;
    msg.rgb_green = 76U;
    msg.rgb_blue = 107U;

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
    msg.setTimeStamp(0.213826431285);
    msg.setSource(18291U);
    msg.setSourceEntity(113U);
    msg.setDestination(35079U);
    msg.setDestinationEntity(124U);
    msg.id.assign("KKJQFTVHUUTZTFWICQJHQEAMMTRTSPFMDXFJNLZEWBNAOGSGAHLIDSUHUBFON");
    msg.feature_type = 52U;
    msg.rgb_red = 214U;
    msg.rgb_green = 163U;
    msg.rgb_blue = 191U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0677112759435;
    tmp_msg_0.lon = 0.203040401713;
    tmp_msg_0.alt = 0.97814872481;
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
    msg.setTimeStamp(0.749769369738);
    msg.setSource(16956U);
    msg.setSourceEntity(27U);
    msg.setDestination(2082U);
    msg.setDestinationEntity(86U);
    msg.id.assign("MNVBOTNFJBSYAKYBOMDSGUTPBYAGQQLVIQGGGKKJRHAXXYPFRTVSJUAXUIKWRXHPNHCHCBKGYWPJVLXSTFLZCQCDSZNKMLHUXVTUJJUOWHEMKDUIZAOPUMXZWWYCESJMESVWHIWFZNXPVICRDFFCGVMGNBMKDCRIFDCWDDUEQZLRXWLRYRMTZXLSNPIQFO");
    msg.feature_type = 93U;
    msg.rgb_red = 40U;
    msg.rgb_green = 237U;
    msg.rgb_blue = 72U;

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
    msg.setTimeStamp(0.841346675284);
    msg.setSource(4492U);
    msg.setSourceEntity(125U);
    msg.setDestination(60494U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.23808103194;
    msg.lon = 0.21140877225;
    msg.alt = 0.271750039227;

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
    msg.setTimeStamp(0.201967684586);
    msg.setSource(43342U);
    msg.setSourceEntity(153U);
    msg.setDestination(65534U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.278982910409;
    msg.lon = 0.59313576375;
    msg.alt = 0.244167067933;

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
    msg.setTimeStamp(0.404585190152);
    msg.setSource(3666U);
    msg.setSourceEntity(173U);
    msg.setDestination(37888U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.154534290842;
    msg.lon = 0.443324849027;
    msg.alt = 0.600362805522;

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
    msg.setTimeStamp(0.425654977848);
    msg.setSource(55209U);
    msg.setSourceEntity(110U);
    msg.setDestination(17477U);
    msg.setDestinationEntity(232U);
    msg.type = 182U;
    msg.id.assign("AGCPKWRWEMFRGFXUHZIOLASFDFGYSNZTDNFOJLKHVUMWPBVREXLEQNXQRGGREGDRJSJANBQWXHJKXYKBIBUERYZSHPTQEOLSRBUBPZRKZBMCUYKOLIBZRGWXEPBXYNCYWHSFDCLFSMLZZAJJFGJKHWDYTKMLXQUKVDYHTTZTNVCJHAYJWSOQTICIXTONPLHTSPWQEOWIMATDKCXGVIAMIVYSBCUVVIPLAZN");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 25433U;
    tmp_msg_0.flags = 249U;
    tmp_msg_0.lat = 0.823131685405;
    tmp_msg_0.lon = 0.834868416496;
    tmp_msg_0.start_z = 0.367854308989;
    tmp_msg_0.start_z_units = 67U;
    tmp_msg_0.end_z = 0.940252584621;
    tmp_msg_0.end_z_units = 3U;
    tmp_msg_0.radius = 0.863270240716;
    tmp_msg_0.speed = 0.788513247725;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.custom.assign("OVXWTQNOFAJGRHFHMQDTMEQRJHZTADZUHOIYKIGBFXWVIWVZFCUHSTUGZHJZRJRNZMIDCUXKZLGEKGFONMPLNVXMWAFBSUJKSRSCCOYHLVRXEWPMAFNBYGQSUYYBJWHRPCMQLOSJPDCNEYBTPZNAWPAYFRLLBERXQOZEUEXVOFBGJQCKXQDBWWQYCEAKGUATCMIKXYUQSGIEIXNCNSDBNLJTMLITDPMDVWTTPFVKKHLALZOE");
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
    msg.setTimeStamp(0.598486872049);
    msg.setSource(35163U);
    msg.setSourceEntity(195U);
    msg.setDestination(10634U);
    msg.setDestinationEntity(17U);
    msg.type = 170U;
    msg.id.assign("JJBYQPALPMNTIJABUSSYJLBCLLLOIWMNCFWJWXGQEOXEIYBYTUPIYVLEQEYZBQWNTSROHSHJXAFEQFSPGFDSYTXMCSPAQUKPUSWDHHDQXUDBAZFOBZKIVYNUWXHYEYPLMHTKIVVDTZGTQFCJMNBNOCVDGVLOAQNFOVHXMKAIBFXHGCMUWIHWPEPNUUGSRVGVCONRGQIGDKDE");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.623297129165;
    tmp_msg_0.sys_src = 57417U;
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
    msg.setTimeStamp(0.833790405497);
    msg.setSource(37933U);
    msg.setSourceEntity(181U);
    msg.setDestination(24573U);
    msg.setDestinationEntity(186U);
    msg.type = 64U;
    msg.id.assign("ZPYCAGCGFUINEPPWTSYEDTJKRKWUBJJYHWPYLTFVHUODQSFFZZZORVVNTJSNGUYREANOMNCWAIIYJEAZACPDDAKNBBHIVUQBJSLBSBPAEEHQFRPWLDMQPFAWYDDRODJTRHKVWJZSHHULNPVCXHFLWDMTCIQKEQURJCIORYMQTLNMEYTOXLASBIIHUJWXXZXVMSCNHDLZUAOKXRMZXTSOKC");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WBAUPPXHCLXVGQZDKYBHOJWUCSMQBMKLVQZMUIMQAHWTKTORVAONZHPMUQEWGFDSXYCNLMTXLCEHJMAKIUNGCLHHYKPBRBUILQUCCSGYORTEWXWAPM");
    tmp_msg_0.value = 116U;
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
    msg.setTimeStamp(0.529218144843);
    msg.setSource(53748U);
    msg.setSourceEntity(24U);
    msg.setDestination(3833U);
    msg.setDestinationEntity(198U);
    msg.localname.assign("PCYOZVEXJMZNSYRITLHKSAEFCTMBSNKOLYKRYYLZMKSPXRJMWWEC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JUNJROGICIWYUPLWQOUCVSQIRTHVXSAJDPPNGWBRHLZTLPAFSENKYLXTNDVFBFGXHZUOFXLGQLXKVXDEAGORDMEKYYMGFZZVQRVJTSTKENADOJICOHZEOSUJYUAMWYWIZKYAGNSPNEPMSZOQPHIHDBMRYMBDZFKQJYRWGUDNKWACQJFSXBWMVLJVNUWMMCUE");
    tmp_msg_0.sys_type = 151U;
    tmp_msg_0.owner = 34852U;
    tmp_msg_0.lat = 0.102251825112;
    tmp_msg_0.lon = 0.773055743702;
    tmp_msg_0.height = 0.226021656233;
    tmp_msg_0.services.assign("QXESUDHXNNAVOKSHNVSZJJCLBCDRQRODWFCMJIOYIWKPKAMXBTUJFCPWLIWZKYKFENCNNRPKKXFVFFTLISQRRIUHDFETHWVBHWSTKTTUHNPAEIMQRBFQCMZONXVWXPHJZRBGTSVYGUDAHTZLQDPYARAYGRLPEWOVABAMJYUUBZYOPMGSCIJJYMNZEGJDVKOGILBYDSHQPZ");
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
    msg.setTimeStamp(0.936519035036);
    msg.setSource(55034U);
    msg.setSourceEntity(90U);
    msg.setDestination(42414U);
    msg.setDestinationEntity(77U);
    msg.localname.assign("BKMTVJVWLVVDWFLSOYCDNCSOGNLGTBNWJAHFPWXEJJEUD");

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
    msg.setTimeStamp(0.131384376366);
    msg.setSource(57090U);
    msg.setSourceEntity(44U);
    msg.setDestination(65088U);
    msg.setDestinationEntity(152U);
    msg.localname.assign("XHYYUKUNLLPFJKHFDPNMSCWPOXAVXOQHUOXSFESBDCESMFRQLNMGMYGNAJMYVBGGPRKDMPUUUVKWUVMHVONDLZCERLZECIRAGWRK");

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
    msg.setTimeStamp(0.328948867642);
    msg.setSource(4238U);
    msg.setSourceEntity(130U);
    msg.setDestination(50409U);
    msg.setDestinationEntity(162U);
    msg.timeline.assign("GUJWZHKCUIQWTGUYULRKKFXENQOBTLKOSQYTNPXLYBCUJIGJHSJNRCPBXBBRD");
    msg.predicate.assign("HFLZKIMBSPESAFRBPUEBJNUFYINEAZZNQDKLUTBGZJBSRJSOTBEKFXTFLWXKXYHJLWWOEWSGJHYUOPSGRQAGIVVIUXCZN");
    msg.attributes.assign("SHGICWLQEPJYFZFDMBMBWHLQXPHQNTQCOZIENYYSGYVBRWPMTRXSDMZKYKYYUAQAPZNTZUHNBGSEAZZOEIAGGVSJILSMKPJDXLXFRSVKUGDFPRCIJUYLBJMAANDWXOCDXFHOZWWWVZHCACSBKOELRODIUWENBITKOEUPIMILPORXSXFJAAUNGQLWSRZHRK");

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
    msg.setTimeStamp(0.126689286388);
    msg.setSource(46617U);
    msg.setSourceEntity(185U);
    msg.setDestination(10818U);
    msg.setDestinationEntity(230U);
    msg.timeline.assign("JDGVDWIFBCNQ");
    msg.predicate.assign("APJUWRJHDOAFTXBUILSVLKDVTPWHKWVVCPMXCIUCSFFLLMXZIMGJNCLRONPQZOMIHKWDBZBPSJKFEAGBYVNTNHBXEOOCXKNTRYFMIOHZNEEANWUOQWBGJIJHMMUHKUQURDAFEOWTXGRZGUJHMNGFEGDSFGAYAPVDBTZEIVKQQSATKLLBDZRRTANPCYCOZYLDPJYHSSGEZCRDPWVVSVYEUWMCDQWRAJQMSJTNXHB");
    msg.attributes.assign("EXSUUYOBAPAQRJKFMNSQHBCMAONDJEJDINXCVPXWGAHBRFAIOMIIOIFVTNIIDCKMFLYGHYQDZDARVLSLTXRMYUCLTCSIGQJNWTVYGVJCNBUNQERGECZXPHFXXDUGXHGSSZYEFTOVBBSQHLKIEKRPWBQZPYVPUGSCJPH");

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
    msg.setTimeStamp(0.229640084206);
    msg.setSource(7087U);
    msg.setSourceEntity(232U);
    msg.setDestination(32895U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("SDWKFRBZCUNTYXROLIWJPVYSLRWTKUHUJTGQNQGUIMMHLXJOCMEWFDSEVALTKRJUEUPPWBVKESDBDVLTMVZC");
    msg.predicate.assign("WYZDSOPWRMJBSZNEMPDMYHJLLYKSAEPVLIOSHPIQSXXMUUIYEQGXZFZXAEMIACCTNR");
    msg.attributes.assign("RTVWZDELOTKATMABJHDURBHPHYQMFQUOABVNYXDTFJKSLWMZRUWBJWONJKUVWXBIYNRIWZZPHATCXELMONAGXGNQCWUQFCZLSFOKAITMFPGDJRWYEFEYLXGHVCRTYGPFEMJYSEPGCQXZEVJ");

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
    msg.setTimeStamp(0.0611977330843);
    msg.setSource(4990U);
    msg.setSourceEntity(42U);
    msg.setDestination(56457U);
    msg.setDestinationEntity(243U);
    msg.command = 222U;
    msg.goal_id.assign("CFOLKKNTDZFZJZBSIOGXXNEOEACRBLPMUWTACKTBTMOZEVHMYNZVKPCPISQPFNXQYBMNHFFGVDLEWRSM");
    msg.goal_xml.assign("OMUXEYKAOHWFFQPURKPKMZEBXJJEGDWRKIMYBTSCWAGPSRYDJIRCCXFOQWTLRVTOLUYFMSLOUASNTGZDUKCCMWEBRHUHJNXIGZLBDUVEYETEGVUJIGIYMFAQQXVCVRDZOSILAAQRFFNFGLMQGMNCMKUWPCHVXVJNTLEDIZWPXTFNZQFCMPDKHIYRYZLADAPTAGSOGNTSABPJ");

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
    msg.setTimeStamp(0.598281911545);
    msg.setSource(14370U);
    msg.setSourceEntity(84U);
    msg.setDestination(51071U);
    msg.setDestinationEntity(151U);
    msg.command = 196U;
    msg.goal_id.assign("LPTXZOOUIRBABXEXSRVNIQTAYZTAXNPGFXNUWPJYEJKBEVCDNMDQROQYRAHUOCFWLYJGYFPBGQCEOJFZTEJOXFLNDXVDHLAOHGLOVWRKXVNNZHDMVCZDHRCSBWBEQMPKKSZUFJGXOWSHDCSQSGVPWFFZFVSPKMRPTVDTKLOUYBIKJANXBMSQHUASJBLC");
    msg.goal_xml.assign("VFXYJXVTQOPCUGNHZQLSRFFCALJRZPURGGUXLBUDTDLDWPFOGQZOOBDSCZBQNB");

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
    msg.setTimeStamp(0.652087768915);
    msg.setSource(60863U);
    msg.setSourceEntity(225U);
    msg.setDestination(37428U);
    msg.setDestinationEntity(252U);
    msg.command = 131U;
    msg.goal_id.assign("KGNUNFHZUHJZANUHVTPHLVEXBAXURRVRKBXYQFMQZLYSWGTIWIBXWBHEWQFSELGMLKIBOPWOKZNIDXPUQSZNFHWEMJTFWSDAKVREFVURZACVZCLDYIDNGPJAMWHBJSJGCOEGKOUTODTBSKOYMDKUBVTWHSEYQPLOJRJ");
    msg.goal_xml.assign("MINLUHWIJNFTTMFJNDCDQHSZGVZBWTTLORKOZQDZPRPONQYCWOASLOAUDA");

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
    msg.setTimeStamp(0.961208508026);
    msg.setSource(55294U);
    msg.setSourceEntity(114U);
    msg.setDestination(20236U);
    msg.setDestinationEntity(11U);
    msg.op = 177U;
    msg.goal_id.assign("HESAWEEJQYAGIDBONUOKZNVNMCFRIJJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SDEKYBRQXTEQYHYZZHZPHQUJPFJVHOUVVMCEQZWGQNODDGPWXCJXSMAGFHXUSKRMVSKXXISMDUFLTCAPCVDKCT");
    tmp_msg_0.predicate.assign("SHAJSUOVQTMFZZCNRWSEHYPHPNQYVDLNIBSHRBDKNOSIWLXPKZDJ");
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
    msg.setTimeStamp(0.66997167144);
    msg.setSource(36938U);
    msg.setSourceEntity(22U);
    msg.setDestination(48978U);
    msg.setDestinationEntity(194U);
    msg.op = 246U;
    msg.goal_id.assign("RETZYAFRZAQKXNPZZEAQIGYAEMUIOWDPGDLMTRIDOIXSSDYGWRRCVUTVMGSLR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MFMYDHGATTHUAMUOPWUWCFGDCADSCEQEPMDZKVATSOQEBRZTCHAILLLMYGKUBKDVEGFIOOAHKHXSZJWGMFYDNEEONIRTTPLGZEXSIQRWBMJKVAXHVPMSQBLCOIZEJFQIOWFNPCDRNPCVJUZBCSVQPJFBNPABKINITYNZKQJBAUOHAVLZXOUHVKURWHFDVDXZRXECBWS");
    tmp_msg_0.predicate.assign("XEXFHCTRYJGDSPMNCRVOGK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ATBIQRLAAAMYMJICZIWRDZPONKCAIQSSTBFUAELOYOMONDVIOKBDJQHKDWJKCZTRVBEWQYYFUHFYZHYUJVXQEBZXAIDEDNMLYZTJPWZXSUWCSLDNKMESPMRERZWBIVOGVMSLXHGFVDURBVGGNGNJLPOCAJXCGKQXFLFRFEXQEUQGRTPCHDTVULYSKKUPZFHWJRYMSKWQPCNWPOQHTWAXJBXGUBHE");
    tmp_tmp_msg_0_0.attr_type = 57U;
    tmp_tmp_msg_0_0.min.assign("PAENVIMTTRWZGHAIMVZVHPWLSHYRQPYKGCRHLOXKEPRFVBTBHVGHOPYVOGYBBMLMFCQNFSGWZYOGBCVNXNPXDUVMUKFCCKEWAJQOEFGDREMJIPIFRDCNFQKEDGTTMVXPONSBXRUQSAHAGEDDBXTXMSZDUODEESSLJWIOTYUBOSALRAJKNLLBIFKTJBWPUKRFXZYQRWCJIEJMZXZKJCNIGLHJWQAAIHUTHYYWCULZ");
    tmp_tmp_msg_0_0.max.assign("ESIQKKKBDLVVENSBLBFGUJPCQHMLXOGJWTPNVUKYQCQLOWHXRRITPEJVYWLYUJYSKYSBDREPJAEOBZJJUNEYGTIHRCSQZXSCTIDEXZRYFQEYGGHMMOWLQCAMTZFCWDUNTLXDUESAHGXHYBNWMWIRZHKIJVBTMVGDDNXGUDURPFAPKWPNFMQWPZMAVZTUFIIGOXQXNHUNIDJZSYACMZMLZBOBHVTAO");
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
    msg.setTimeStamp(0.413624036632);
    msg.setSource(57146U);
    msg.setSourceEntity(235U);
    msg.setDestination(5048U);
    msg.setDestinationEntity(230U);
    msg.op = 26U;
    msg.goal_id.assign("PRTSNPDJJOQYXKNVUMNYYFUTETCUUZHCFEGMFTILVAOCQLTDWHPRFSKBNGRFOOITGNWVWWCHCNXASVHSWIUIGDQZUKFVDKXDEXWMBOUKVCTWXMSPMTJRMBE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AHCROLSZBZIXCLTMATSHLSXNSTQGDBDDZFHGDAWIYKJDHBOMXCDZGIYKPGXYXTI");
    tmp_msg_0.predicate.assign("NVKRHPROFZMXPSSORVMFIOUHDMIHSTNDMLQSLJBTLZEPUBURRXVHWBSWJHCQPVZSIUQAOKYEFHXWWBGFPYZERGIGLJFFNJOQDVXOVLWSTXNZFUHHBCHWYKTKCMDNZAAKDUIVMOGLDPIICRTNLVJLOUEPTCVTPYWQSSGJUZBANJGWNHMORQERQUAZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DRNMPVDNVQGNTGPAEZLIBCOXDZRQJTEBUKJKURDLRACVNKKPACDMYBIVQFGAFUSZMPSYHIEEEUSMGKWJKVHWJ");
    tmp_tmp_msg_0_0.attr_type = 27U;
    tmp_tmp_msg_0_0.min.assign("JESDECALETXFGHNJYBXQUIEOTCCOMBKZRMTFJJFHSBQGCVGHFDRDWLSXCHTMDAVYONDQPGCWVYEXKAWWAPOALIXGFUJLKVZIGUPZVYCKUSLWBAJRXNPLYQEDL");
    tmp_tmp_msg_0_0.max.assign("FHQWKPAOXEKABEOWFMXKKRHSAIBAGDIXYNKDHETNBTOQJOYUJSRQJWHADMMFDCJKULNBKMZRPIHTCJF");
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
    msg.setTimeStamp(0.332281881392);
    msg.setSource(37824U);
    msg.setSourceEntity(32U);
    msg.setDestination(27056U);
    msg.setDestinationEntity(149U);
    msg.name.assign("NJYOLVYMQJEJSUASBIMOMBIOUJUXVEJADRHHUOQKIYYSQFFCRGGDUEMSCUIWLOYBARLCTSFNXZLHFPFNQCDQFDKLHOPAPOPIUNPRQRY");
    msg.attr_type = 76U;
    msg.min.assign("UZBQMCNYLYDKKUXXZMYJRQZCSVDDZZOUZZVWRNAKWFIOCPCUNTWOBMINNJDQXXYASQIMYNVTMOHZRFDDNDSWGOPXAJUILARPEBGNSVPDOLFXSLTAJBHLFPKKGFBXMQXHGVUKMVKJ");
    msg.max.assign("NTHIPBGCCBHEKBQCXCGUOMDXYMSDHQVPCSPOPNHYW");

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
    msg.setTimeStamp(0.301502970973);
    msg.setSource(40908U);
    msg.setSourceEntity(252U);
    msg.setDestination(270U);
    msg.setDestinationEntity(103U);
    msg.name.assign("PUTYBJOULNGTMKWDHJOZXICIDTOVIFKQBDPGUANLYAIHOUMEGYRVVDAVDZHBPCQFGCDCHVNALHQKANXWNJKDWNRWWYJEFLSHPAVIXLUNO");
    msg.attr_type = 232U;
    msg.min.assign("BTLYCTSXLVHIIBRFKBZMZXFUXBOULNPWGKMLOCXAZAMSAWQLYPKTAIUUONKTSGPENXWRTWCPWRUSLFDEZMVHQMNTXFRMZSDFHLNRKCETEVYKLUUHIFGDGWODGUQKDHMKIXWMRJZOPDVRNTGSIQTJJMRIYLFQEAELGFIUOGBOJDBSEWBRAY");
    msg.max.assign("NPHOAMGEWSFMOYJQMFQUZRKVDYGBJJPXXJQJGATRSONUAAUQEUBXADZO");

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
    msg.setTimeStamp(0.711039176993);
    msg.setSource(52462U);
    msg.setSourceEntity(157U);
    msg.setDestination(2325U);
    msg.setDestinationEntity(251U);
    msg.name.assign("QYWVGIOSBKLFRCITAYHKINSLVDGKPUTEXFNGXYTLLALUDBJXWCUZEKARRRMSMGOJMHZV");
    msg.attr_type = 239U;
    msg.min.assign("PFEFCMBZMNYAWTLFFCJJPOKBWDYCTGBCHRGXHECDEDLWAGBVTFWABRARLWSOEJBITJMMGOQGRLDYDENTNBIJAZPLFXHVEUPUWCBIRHKDYIYAZKYMDOUNUXMMAYCQMKLZOVTJNPQISXNAUOCLVCQOABGDFTHQMPTGWLFZRLGUROSNNFZSXQKVTSPVKSPWVZIYJKPNXYSQXVUZYKRXIQDQEFJNHESJG");
    msg.max.assign("LELHOYAFXWBYDENPMWPGQWZFTAEOUIGEWVJNPTPOVNCGRDRKXQJOYAZDAEUNPRGMIITECTWFKCSBHGFHFDQWSZUNKWYKPCJTZYQJEIGLQOVKERJEFHILELAKHBVHTZSUCFHROMPVIULUFMPJGOTYWXBCAXVVQMOSXWTSSRYDPNYMLXRCKUHADXYXDUAMCKAVQMTOSNIFHGRKIUBIOLGP");

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
    msg.setTimeStamp(0.162012586581);
    msg.setSource(13606U);
    msg.setSourceEntity(252U);
    msg.setDestination(45698U);
    msg.setDestinationEntity(37U);
    msg.timeline.assign("TMUWJOXSIZYKVZFUXUHUPAVATFBOJINITEEGEDCCOCQWZBGQFPMDFJMJSOLGRCGRNLGWOHZPLIAVIIXBPBTOBRWNRDBHTCCYVACEZHNACISSSPMMNWHKJJQBXNNPKWWFPXQYLZCUEEUDQADXKOKLFYAHBNVBLNELOQWOVXTLXKHSTVAJVKEMCHDVGIJQELLFUZRXTWG");
    msg.predicate.assign("GAMTHADERYPMZORTCFQEVTCHRCYFDFYIMXCXVTJIXQMONZQKUKOFTPXAWYTHLWRYOLBUGIRJHJSZZNHISSLNIIEXWAZIUGVWZEVSJGRYVKQUSDNWJLTENQXEQHWDEKFMATRLQYBBDNCDHWFAXGQDEPLKVFTKOUSARXBUSAPOUJSJJFCMVULIPBHGNLPPVOMWDKCIVNGCRLMYCCZAHZBGMVFMLQYK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WELHVJYQJBGRVJOHKUQCPQVOERPAOADEZRSWATUCCUIKZMLGNULFNAJMXDTOAOGECFICFWQWWQXKQXEZNJTIRIDNSBOXDEMTGVXJISWYNDFWBPMYNCYGKMSMMSPJYZTVTMZNSUUPJGDPOH");
    tmp_msg_0.attr_type = 133U;
    tmp_msg_0.min.assign("BOADPRGEDVLINJPMFSMVTFJZFGQAQXYHVZAIEWCYYAOKPNZLMCDDMAHNKERNMXYHSEFWTFMLWXNTPWQHLPRBOMFSJVTZULWBVOVMWRCAKZSOIQJGXVLKTSDHXHKGBFXUUXUOSLQVYQTNRNSWCBZTSTAEJFLODPGZRWBCANYIYPDVRGCDQKJBGUHXIBP");
    tmp_msg_0.max.assign("QOXRAYHWIJZSXOKZDGRPLAXFCQVYOZYSHAMNTUYHBUZYTIQUSPQLWIITTDQFOVFLDDKCETEPOOJQNASIRCDCQXVEVXFJLCFCEMGFPGOVAPKVYRRZ");
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
    msg.setTimeStamp(0.0375612458737);
    msg.setSource(9304U);
    msg.setSourceEntity(67U);
    msg.setDestination(22256U);
    msg.setDestinationEntity(45U);
    msg.timeline.assign("LITDOUIQEXCBLSAPRYOENAULOPXYFOYDPYSJZEEUYMNNSJUFJFLSOHIIFXSXNNQRARDFNKSQYRSKWHWWPGWJXJWLQUKZKDDFQXBWIHLYDHWUVPIKAHSETEIDVIZVFLKCJTBTDQPMZGBCMZZJWOUMPRQCHIVCGAOATIMVLPXGMCAMOLRDOPWRZGHPFQMXVGLQGRKGZVKAETRVNCTENAYUBZGHTXMBMDFETEOVXACRSSUBZFUGY");
    msg.predicate.assign("MJUIWHYOQWAHUBVHCPOHXAVNNSGOBXFHDQXLTCESGDZEZKGANMFRRVIZXIMLHJTGITEPRVZYWBDUYXNIZPPOKEXGKSMXAMROIIQCGLSDRVEORVLQLIBKFXMRSZCGHTTHVVFBSYFMWUBLCTHIASTNKFPC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WEFOLLSJSVEBHNXMYGOSYRSIZXMLTKCAUVFAHOKQGSVOXRAFTWQZNUEQEIJXCLDYYFMONUJGGTDEHFRRDHTRBJSLPIIYFLRZOOJGUXHEMGPBYPQBPMVVMRVZGNSAQLJIONCPTWUUYQNMCALMVTYBNLBSQBUQAIDXYA");
    tmp_msg_0.attr_type = 251U;
    tmp_msg_0.min.assign("KMUVTFGXWNJZPOORLSMUOXHNGORJFLWIRARBLIALCFVKMW");
    tmp_msg_0.max.assign("WHWWDLONQQHTDIWKEQVCNYKEFYJNTKHBJRMXNZEYICGPRVBYHEBYBTHRHAUGRWPWCRQZRIKDBVLWVKMCAVZSZQCSSMMCHOIKRPVJLFBBGDLEGOPNVXLXTIVUBYFGPZGIXDNZUZKAEJPZFLCVTJKAFOJWZNWDGFDASMXHXINXQOKLAGPPCUEYCEVOFGKMMTOORM");
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
    msg.setTimeStamp(0.856588454217);
    msg.setSource(20585U);
    msg.setSourceEntity(133U);
    msg.setDestination(23480U);
    msg.setDestinationEntity(177U);
    msg.timeline.assign("MMPUWOXPQDHDDHSOCTROQNOJBXVVCMKYFVXGQCJCIXLUMNHARRUDKQGOEABMETCKLFOZXAOZFYGJGVWRAFXISZWUYZYTIALIRELRZJMCGMQQXKPSJZRWHFUZYLCWWDYNPUCGELFDZUKGIHNARKIEIJWFPVIKEITTEBSOVNHEMDBKNVVRCPBBFQJTLNCXABODDUNJQZFXZAHA");
    msg.predicate.assign("QVZYVWJGVFLMPEPYIVXOSKSXEADHZOUBUIFQWJCMJUAAWQHOLTZXHTLGPECJZCIWSBDBMHQGNFFDCSXAMEYHMAMXXZLJEKMYSKNMGHGCUJUCQMTNIGDCECKTKWOTLRDYNQQJIPCDSRGVNFRLHLIAIORPPYFLRGAVBRPWMXPSZXKTDBQAVKOPYOK");

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
    msg.setTimeStamp(0.722560516859);
    msg.setSource(63503U);
    msg.setSourceEntity(195U);
    msg.setDestination(45149U);
    msg.setDestinationEntity(82U);
    msg.reactor.assign("PUMAJYLZCFJEUWE");

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
    msg.setTimeStamp(0.708847852754);
    msg.setSource(36525U);
    msg.setSourceEntity(122U);
    msg.setDestination(43894U);
    msg.setDestinationEntity(133U);
    msg.reactor.assign("PTVOHWFXIDQYCILXKFSMNIQZTEOOPBJRMWBRBQLTXACSCJOYZLAANZQDDKRMPVI");

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
    msg.setTimeStamp(0.897185719072);
    msg.setSource(43994U);
    msg.setSourceEntity(51U);
    msg.setDestination(18280U);
    msg.setDestinationEntity(233U);
    msg.reactor.assign("XTAHZSHRZMYBIFORKNGKGOOVUXDJLEKWJIDZLDJDQQYIIYVCKAYKOZULHFXMIFMZXPTKTREVEFLGCAIGPTLNMEQHNDCHSSXNPFSNAQPEDHWBLOHAWGACLUZWRMWVBKZFBXAR");

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
    msg.setTimeStamp(0.408565973365);
    msg.setSource(22933U);
    msg.setSourceEntity(206U);
    msg.setDestination(6272U);
    msg.setDestinationEntity(31U);
    msg.topic.assign("OMGKORHWMHJSGFCQNTTZHVCFJAHRBGIJYCEDQBHADUIODEPGISUTVPALYLBBAHIVHUWEBNLAQUOTFMWXKZ");
    msg.data.assign("JEWBNDTPAVCTNEDCJYNCIVFVAGRBAHGLAWTSHBTDXIJYBDANIDHTQEUQYBUCQBFONRGAYPWZSRNWJMQMOOQPZASYCFNKZDMIVXYZHBUICMBMLMVXOLTVPNEKWYJASUPFEKSQVMUQVOO");

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
    msg.setTimeStamp(0.430841765151);
    msg.setSource(51315U);
    msg.setSourceEntity(253U);
    msg.setDestination(54023U);
    msg.setDestinationEntity(93U);
    msg.topic.assign("EHDMFLNGAISICARONYWBLTPMFIDNYTINSVAQLTPGZUSZCAHVKZGACHKWZIRJYDNGJMEOABWYHBMXQYDKDJIAZHUPJJRXCUNTRYWPUXHHMSFHXSOLZRIKLGTTBV");
    msg.data.assign("SQFFEWLFNHCQYVMRFXZGFXBZLQIEPVJYUECPMRFGLVGWOTGHSWRPOVRTUVOZVOKWKPUEGAPTFUULMQBYKHQOANWWKEJCSITXQBXEUDEOYZFCWUMSHIBNPWZYCOIRDSDXCGSJXLOGRUHSANMINENXQAWDGDJUSPVXBOUBNTAXIHNJGH");

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
    msg.setTimeStamp(0.687158364942);
    msg.setSource(14586U);
    msg.setSourceEntity(54U);
    msg.setDestination(59265U);
    msg.setDestinationEntity(156U);
    msg.topic.assign("NCVSKEJCTXQQAJTYZJKOFWUDOOORWTXKALWLOTWVSUPBAIDOFVUJMRQKFKPSNBVGRMZOIFFCDLZNQPXAAMVZNZJSUIHHRWGDNQSMXGMGVPYWUBGUEGHEFYCOIX");
    msg.data.assign("CBXLLLQGKFGETUAOOWCOUDEFRPIKYANHLSIKNUBOSLDQYXVLZSKBGJQU");

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
    msg.setTimeStamp(0.20411047012);
    msg.setSource(33039U);
    msg.setSourceEntity(197U);
    msg.setDestination(43343U);
    msg.setDestinationEntity(236U);
    msg.frameid = 76U;
    const char tmp_msg_0[] = {-42, -94, 69, -26, -57, -19, -105, 40, 35, -76, 25, 100, -20, 67, -67, -116, 2, -48, -20, 29, 2, -84, -1, -20, -61, -64, 106, 95, 65, -25, -107, 95, 88, -9, -26, 53, 108, -118, -57, 74, -63, -115, -95, -114, -45, -53, 106, 48, 46, 108, -9, -11, 112, 41, 108, -126, 67, -13, -84, -72, -91, 54, 124, -85, -26, -64, 3, 50, 8, 57, -17, 20, -107, -104, 62, 117, 88, -118, 90, 95, -38, 6, 126, 101, 53, -116, -12, 0, -13, -94, 8, 73, 24, 68, -108, -69, -68, 40, 115, 27, 79, 9, -91, -89, 8, -34, -112, -114, 13, -27};
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
    msg.setTimeStamp(0.49877468341);
    msg.setSource(5913U);
    msg.setSourceEntity(209U);
    msg.setDestination(10888U);
    msg.setDestinationEntity(153U);
    msg.frameid = 116U;
    const char tmp_msg_0[] = {64, -102, 123, 46, 50, 103, 48, 103, 55, -109, -84, 53, -59, -112, 5, -47, -77, -23, -115, -124, -56, 22, 89, -75, -111, -45, -28, 47};
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
    msg.setTimeStamp(0.0666374198799);
    msg.setSource(46628U);
    msg.setSourceEntity(215U);
    msg.setDestination(17517U);
    msg.setDestinationEntity(25U);
    msg.frameid = 151U;
    const char tmp_msg_0[] = {126, 15, -36, -3, 55, -1, -83, 30, -112, -95, -99, -74, -45, -69, 55, 82, 11, 73, -117, -101, -124, 20, -85, -126, 5, 109, 120, 68, 14, -113, 6, 100, 33, 29, -64, -13, -100, -66, 85, 79, 4, 77, -86, -82, 84, 20, -33, 56, -5, -90, 81, 44, 66, -1, -79, -1, -86, -30, -29, 33, 35, -117, 37, 40, -38, 47, -126, -43, 115, -84, -75, -20, -62, 65, -74, 74, 97, 121, 63, -48, 105, -33, 102, -114, 61, 13, 0, -37, 20, 124, -16};
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
    msg.setTimeStamp(0.664664828973);
    msg.setSource(64765U);
    msg.setSourceEntity(35U);
    msg.setDestination(13263U);
    msg.setDestinationEntity(92U);
    msg.fps = 69U;
    msg.quality = 92U;
    msg.reps = 144U;
    msg.tsize = 179U;

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
    msg.setTimeStamp(0.687956610565);
    msg.setSource(13956U);
    msg.setSourceEntity(154U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(11U);
    msg.fps = 86U;
    msg.quality = 208U;
    msg.reps = 9U;
    msg.tsize = 196U;

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
    msg.setTimeStamp(0.451096954595);
    msg.setSource(46424U);
    msg.setSourceEntity(86U);
    msg.setDestination(23978U);
    msg.setDestinationEntity(40U);
    msg.fps = 116U;
    msg.quality = 189U;
    msg.reps = 254U;
    msg.tsize = 100U;

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
    msg.setTimeStamp(0.584378563816);
    msg.setSource(13880U);
    msg.setSourceEntity(152U);
    msg.setDestination(45410U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.82039509431;
    msg.lon = 0.545190649842;
    msg.depth = 183U;
    msg.speed = 0.790438292106;
    msg.psi = 0.521345107916;

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
    msg.setTimeStamp(0.0012017006039);
    msg.setSource(43209U);
    msg.setSourceEntity(219U);
    msg.setDestination(16160U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.427849947087;
    msg.lon = 0.45456302207;
    msg.depth = 212U;
    msg.speed = 0.16190418242;
    msg.psi = 0.777868383055;

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
    msg.setTimeStamp(0.979273363208);
    msg.setSource(4048U);
    msg.setSourceEntity(166U);
    msg.setDestination(1367U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.946281514661;
    msg.lon = 0.937835920662;
    msg.depth = 122U;
    msg.speed = 0.24220430842;
    msg.psi = 0.135215280327;

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
    msg.setTimeStamp(0.445555342495);
    msg.setSource(30841U);
    msg.setSourceEntity(76U);
    msg.setDestination(61099U);
    msg.setDestinationEntity(239U);
    msg.label.assign("YIOGSFZKWBAVHOQJOPUWPXGFVXFJHMLGFBVJXEXAVDPJRYTOLEAEMWBYDDCVNALZPNI");
    msg.lat = 0.257868681298;
    msg.lon = 0.101471793626;
    msg.z = 0.240065630539;
    msg.z_units = 167U;
    msg.cog = 0.533163793761;
    msg.sog = 0.551586142271;

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
    msg.setTimeStamp(0.0487658408927);
    msg.setSource(48217U);
    msg.setSourceEntity(197U);
    msg.setDestination(64835U);
    msg.setDestinationEntity(214U);
    msg.label.assign("RJGKVTTAHXIFVKSCGOZMLEKXXKSOYDUHSPNPVJRCFAJZEDDWARZNRUYHLETOYMGUPRMKGDIFWBHZWSNEAIYPZBTTXMBQBAHCTOBBVAIOQHVUTPBBUQ");
    msg.lat = 0.766135596672;
    msg.lon = 0.224909148864;
    msg.z = 0.768730754541;
    msg.z_units = 133U;
    msg.cog = 0.172933965646;
    msg.sog = 0.397861860602;

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
    msg.setTimeStamp(0.682602120031);
    msg.setSource(46870U);
    msg.setSourceEntity(231U);
    msg.setDestination(56193U);
    msg.setDestinationEntity(211U);
    msg.label.assign("RBCJZIZZMZUICORERCMLNZDSHVFWKMUVALLKAWZJFDIIUF");
    msg.lat = 0.474268617084;
    msg.lon = 0.644940117928;
    msg.z = 0.716306366351;
    msg.z_units = 42U;
    msg.cog = 0.770684249667;
    msg.sog = 0.0373034298606;

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
    msg.setTimeStamp(0.825280292818);
    msg.setSource(49312U);
    msg.setSourceEntity(35U);
    msg.setDestination(43026U);
    msg.setDestinationEntity(197U);
    msg.name.assign("QJYNMFDEXLCNOMVLHJALUKLTHGBIFFBDXZIZ");
    msg.value.assign("PLUFJVNGPJBCMGPIKLKLCVEWQQNZWYQWWYWRNRWAVNFZARNPOAHACXZDIKN");

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
    msg.setTimeStamp(0.257608561986);
    msg.setSource(43892U);
    msg.setSourceEntity(106U);
    msg.setDestination(21819U);
    msg.setDestinationEntity(60U);
    msg.name.assign("CQCOFZJIVULJRQMFGPYZZBQIBFQAWRQPADAOYUZGJVJCTPJAKYFLHPHKEWCIVOSYDIEVUEKETDMIONCCFGEPNNRUESYLPOUXWVKHNDNSTFJHTZEVMRK");
    msg.value.assign("WCLBHAHNLTXHFJJQCDXBIADDVQGDEOCXFGUYDPPMWHGWGMBGMRLVPKXSZKHMAFFAZTFMSMVKWRXAJHOVFETIEQZPISOANVQYUXNQHWEGCIKSKONIEOLUOPYECMMS");

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
    msg.setTimeStamp(0.023440676915);
    msg.setSource(12828U);
    msg.setSourceEntity(3U);
    msg.setDestination(57629U);
    msg.setDestinationEntity(254U);
    msg.name.assign("RUMAJOKJNFUXTDZWWASIEVDAWGJWKWAPPDMENJSHGF");
    msg.value.assign("OGLUYXQDRRCFESOLRWKCXEFHYEBDOWDYHUSLUTIRZXONRDVHGVIQXPYYKPKAWMAMXFJHDTFPSYEBCRSNWDUTJCVCZQYEUZXEIMLHOTMPATQHAXLOFCUQKZFNIVOSIQNAKZQ");

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
    msg.setTimeStamp(0.820267364051);
    msg.setSource(65312U);
    msg.setSourceEntity(120U);
    msg.setDestination(4755U);
    msg.setDestinationEntity(39U);
    msg.name.assign("MJKIMUHHUUVMHVKKRXMRCYZIBHQWFXQDGYJVKXQDLOUWFZDZRREIALHMPCHRQUPTFBOSMFMJGXRLSVVCJOJNPIWWWZITEXNFAEBKZALJNPSKCDZACTOHIODENEXDFYNUVNI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TVXSSWLGOKPVGSYHFJJNERZWSKIFEXJYQBGGBAHQXCCRPOVDYTKXPKX");
    tmp_msg_0.value.assign("HFGITQEVZZFNKGWOIYDMRJSFAGYDSRTHCSSBWDMBBSABXVQUMAPOJASFNHKTPYVFLOONPWHOWVFBKXVTEBADZWKEITREPZBZYQHDNNWYGSOBTYFLGHNGXGPPDWQULGJFMEMACKUZVFMJIVWUSRLWVMQSMOKRLUEJIRXEDYRTOLXLAIQJNQTQVOLEBRLKICKDTHWCJVEJBDUZAZNQANM");
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
    msg.setTimeStamp(0.804754573259);
    msg.setSource(24398U);
    msg.setSourceEntity(150U);
    msg.setDestination(46928U);
    msg.setDestinationEntity(75U);
    msg.name.assign("YOBXVCZRLLCBEJRBDIZWCRAOHUSDVKTADZIXKHWYIXKJKSMHTLSPR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EFBWTLETLLYQTZCIYVOSJXXICONUKJZGAPQBPNMZASNXGOTNHYIVZBWSGOEOVKCETIFMKSD");
    tmp_msg_0.value.assign("EJYRBIOKNGOOHSYKAQWBVYGLRTTAWYDFPOOJAUPGYLQXQBJDFYRPZVTXFMLZISCWWMWMCEAVNKHEAFMKDAKXPTEHJIVUNH");
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
    msg.setTimeStamp(0.55220420634);
    msg.setSource(53641U);
    msg.setSourceEntity(141U);
    msg.setDestination(32326U);
    msg.setDestinationEntity(210U);
    msg.name.assign("SZFLYFRQRKIXMLHTPQYWXTDCSEVPSKIWGZJXCYIHMTSUOHGWQQDQLVXKIDGEDLNQRFOSMNHEPPJFZHFEOTWTDTUAVTOKMCMUPVZXKGVKCHIDJZMJJUGXNJESUQBYYBYOXIABQSOFXCRRLIEQLEKBGEAZUBD");

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
    msg.setTimeStamp(0.0719445961095);
    msg.setSource(51534U);
    msg.setSourceEntity(31U);
    msg.setDestination(30845U);
    msg.setDestinationEntity(21U);
    msg.name.assign("WMTFEXPMBYRTFRWJQMSOVSLBPVVMZYZFFSJNJRWZQGEKFJUFUKNLDJCLJNHTKIEHDOYCEYCKECCNUWZQIRCBHPHGGYQIXXOMSBVIMTWPAMZCGQEXHNVFUROAKAYTXPNRMXWEUVBLYIEAKBOOKPPGIYHLIB");
    msg.visibility.assign("YAYESWPIVQDKQFOQDNMGQGVWSPSTBNWWJOISBESPTAJUMKHAGAMGODMYNVTCNTGYZNFSUMDERFYWKXVHWKTYCPTNRUQXYBCIEFBDPVFLCQBGUUIIOSKHGNLFFYRKKZXZABLFSOCZZ");
    msg.scope.assign("PLOSJOBVRPDTPMBOCMRANXKGUNGGRFQHJWUPAGRSTOTDVYDDSKYWZHTQSHXGZIUNBTTHLYUOWJKSIAWIUKEUZMVYLAXWCMWMGUZNDBVXOGBEPUTQGFDEZIXJNEMHMDYWLQFBZXBSVDNNFECTWRJREHOYOZOQCEISJNNA");

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
    msg.setTimeStamp(0.955983280266);
    msg.setSource(36307U);
    msg.setSourceEntity(45U);
    msg.setDestination(10792U);
    msg.setDestinationEntity(92U);
    msg.name.assign("SEDLZAKJQVXILPLNTCNUQYOVGWKZJFYTOZMGRESFRTGSCBZGQTYNVIARMKKTQBYGUTIEFHAAODXXUYAORHDZEBSIVBXAOWKOPKIGTDQJXPLAVEWKCBUSSMICMTURJOITYDLSPBUBIDPQNGUFXXZHFQVXFACXKEICJWRECDWERJABQWYAPMBPFNHNLHLFNKMPZLUWZSDNXPJYOTKLZHVRGPQOQJOVWILJSHURMVYEDFGZ");
    msg.visibility.assign("PUTBAHEQORXPQPCIZNSCJSASEXUNMFNYJDNKWCFPAQKYGKYUREGXOICKEMMGQWFOVQKRGNTJBWVZBVIJBWKPFRD");
    msg.scope.assign("NOFPUSDPGSHOGEIXXZFARXDXMLZMBGEDJXEYDZKVNRNPXPUVIRZVDFZJSWDBHJMWVWNCBEDEXGPQULRAFEBHUSYQNYYPUMYHTYMIHTWHOWIXAKYBSQLPWSDOTCMAJTIKUWGZIBFTTKJGQKRLGLURTNEMCKWKUVPUCRDYUVQSJMFOCJOGAXZAQCLTIYVMHKWLOZHBPBKOARJIQSFOQHVRSJCZDEMJOXY");

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
    msg.setTimeStamp(0.299874883673);
    msg.setSource(11679U);
    msg.setSourceEntity(166U);
    msg.setDestination(31373U);
    msg.setDestinationEntity(19U);
    msg.name.assign("NPBLSCEZNKDTFOQKWJSGGWAVWDMDHHMFQMVPKWHFJCRXQXSYIPPRXTNPNXRPTWMARZYTFUYUZVTSSCRXDRVZXKQNOLYG");
    msg.visibility.assign("TYDNYASTTFMSKOKRHTIJRPDXGKIKTTPCQNGHQVVAYGIGJQKUQLWBTFBUQJXILNMBZQNJLKVWAPFFIULJJEFZSWDZOWTOZIMGOM");
    msg.scope.assign("MKBBMHQFKDRSFSOZAVITCZYEPGMYDGNGKDXQIIPJIPJTDSVNBBYALXWXOBWLXITZDNNLGZHYDNKQDSVLCCUCJMKEV");

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
    msg.setTimeStamp(0.694164252508);
    msg.setSource(53322U);
    msg.setSourceEntity(93U);
    msg.setDestination(10807U);
    msg.setDestinationEntity(43U);
    msg.name.assign("MDSNBDWAEAHQSPZDMTGIQXILAFNIC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MAUVAFLTVTIYTSAUHBCLIMFAEAFLJDRWPYYSUFWJHHICGZDNJGXBDOMMTCBZWRPEYQWAZKALSMQONEOBMFHQKWUIDSKKXIXYNUNRPUEXJQEJGGPRFIPBLHZBQBFJKGCUKHDHNHENOJVQZWZIODKCZGRASMMRXRPYLDOHJGVOVIY");
    tmp_msg_0.value.assign("TDCOHHKVAIINZYLWXTKODQQXZQLAWKIPELOYUUILJEFEDKBOEJXPGAJCUMHBHHZBOITDUGYEZSUGYOKPFTAEEDEPVZYTXUQJCPKMPBCCXVIRBAXXNFPMRQDPMVSUSWHANLZZVNYMHGRGDCDSVAXBYXKNRRQCHVQGSAZJLJLOBLPQCAZFBVJWFSRNDECUMTSTLNFPIRNGVBGCMWZWUKWWTVHFRMBKFITNFWJO");
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
    msg.setTimeStamp(0.229358422993);
    msg.setSource(39232U);
    msg.setSourceEntity(114U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(115U);
    msg.name.assign("TQXHNDTFIPNHOZDYYXTEBIEIVXCAJOZDEFOQCZABCUELUYOBRONVRFUWQFFKCYJSBTHSDMIRURKIMQHUWZVRBSEHIEHGXOTHLNLSRQLUSQDZRJVNLPAGIFQSBSJC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SRCXCIQLLKYORQCRNEQXSBWZNFHVWNQNMYYHNKWOPOSGVJCHEOXCJDCC");
    tmp_msg_0.value.assign("ATLWEFURYVPXGZYACVIBSKUXDHSTJJXTBZKOFZHNXEORLHNISCZMYEDMVCHSGHQWEODQMKCVWBVZUOGVJBTEJOIPGWACMVAGNDAHLPEYJRAYVYHGTNHOZUHREWUGL");
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
    msg.setTimeStamp(0.024260868987);
    msg.setSource(41384U);
    msg.setSourceEntity(0U);
    msg.setDestination(6465U);
    msg.setDestinationEntity(248U);
    msg.name.assign("JWLJWIXQXPXDVMAZLSSIJNXXCPWTUTAYFGKEMIGUMQPDOZDFQSAKTHRMVACTCHDJVNKQHWLDXIKWJPZSWBCUDNRBQIXGWOUZVPRVNEUTZXWFZFBOYTGCFXETJNORALMLHZISESGTNHPFYPKUTAQGIJONMSAYDOYBCHEYHOSLRFUFMVVPQOMYOEYGNALIHHUCHXW");

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
    msg.setTimeStamp(0.339412718403);
    msg.setSource(56610U);
    msg.setSourceEntity(75U);
    msg.setDestination(27180U);
    msg.setDestinationEntity(178U);
    msg.name.assign("YGDTCCJFPFLQSRLWBNFYHAOXLSZTOUCNMRWNVDVCMWEVKCHDUISQDGCIWJLYWXFYFEBDXHNUGBSYJHTQYTAVDAFJIYVUSOFDRXGEUJHAKPQPCLAGHEWBGAENWRFTICODGZQGFITLHLHMZXUEFXGVQQSNKPVQSCSAXCIJJRQOERPJZOKEYBKMRKOPASINJZLTUTKIZZHYVWLUZPBRNT");

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
    msg.setTimeStamp(0.594718031893);
    msg.setSource(35089U);
    msg.setSourceEntity(195U);
    msg.setDestination(37484U);
    msg.setDestinationEntity(69U);
    msg.name.assign("DIOLKOXIQLYRBPESWQIWZSHMUKGGLSKPNNXCVQKXMULMAANPFHJKWXFTOPQONSZXRSGZOUTFIAXUJWLVZJCRFYGU");

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
    msg.setTimeStamp(0.739668335481);
    msg.setSource(33606U);
    msg.setSourceEntity(88U);
    msg.setDestination(40958U);
    msg.setDestinationEntity(97U);
    msg.name.assign("VFCPDEMUNZETDUZZSWYNMJVMPVUZXFOTOOHOXYUODYCCQUSNGMALKFHSKHWINHNKLDXQUCGPHPARRPHNRGYOAJBIFTJRAJSW");

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
    msg.setTimeStamp(0.836506547083);
    msg.setSource(11194U);
    msg.setSourceEntity(235U);
    msg.setDestination(48929U);
    msg.setDestinationEntity(31U);
    msg.timeout = 87481264U;

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
    msg.setTimeStamp(0.290240031169);
    msg.setSource(56963U);
    msg.setSourceEntity(75U);
    msg.setDestination(6925U);
    msg.setDestinationEntity(92U);
    msg.timeout = 1414642992U;

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
    msg.setTimeStamp(0.112143727366);
    msg.setSource(19245U);
    msg.setSourceEntity(82U);
    msg.setDestination(37055U);
    msg.setDestinationEntity(158U);
    msg.timeout = 4244123894U;

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
    msg.setTimeStamp(0.50738433642);
    msg.setSource(62562U);
    msg.setSourceEntity(129U);
    msg.setDestination(55335U);
    msg.setDestinationEntity(175U);
    msg.sessid = 1375332084U;

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
    msg.setTimeStamp(0.211670970587);
    msg.setSource(14795U);
    msg.setSourceEntity(142U);
    msg.setDestination(11810U);
    msg.setDestinationEntity(164U);
    msg.sessid = 276925836U;

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
    msg.setTimeStamp(0.250787002443);
    msg.setSource(58466U);
    msg.setSourceEntity(75U);
    msg.setDestination(50391U);
    msg.setDestinationEntity(120U);
    msg.sessid = 3338779641U;

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
    msg.setTimeStamp(0.564965571419);
    msg.setSource(23310U);
    msg.setSourceEntity(117U);
    msg.setDestination(60907U);
    msg.setDestinationEntity(117U);
    msg.sessid = 1827865467U;
    msg.messages.assign("LVSLUBWGWSQUNXIZWLQGJHRQBGBGKDPUWFFTRPRFYPKJCOOCZAFKQNVXGCWEJQOJBHNECUGLJKAGRH");

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
    msg.setTimeStamp(0.393796402686);
    msg.setSource(21404U);
    msg.setSourceEntity(11U);
    msg.setDestination(12328U);
    msg.setDestinationEntity(240U);
    msg.sessid = 1293809772U;
    msg.messages.assign("SBYIBIQIJACYZFYSHLRHWXQ");

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
    msg.setTimeStamp(0.43373337521);
    msg.setSource(42510U);
    msg.setSourceEntity(84U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(131U);
    msg.sessid = 4285247587U;
    msg.messages.assign("OHAONJUZCKEULCFSOBBZY");

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
    msg.setTimeStamp(0.543209267602);
    msg.setSource(22802U);
    msg.setSourceEntity(155U);
    msg.setDestination(26328U);
    msg.setDestinationEntity(127U);
    msg.sessid = 3478203611U;

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
    msg.setTimeStamp(0.682114349007);
    msg.setSource(64055U);
    msg.setSourceEntity(197U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(163U);
    msg.sessid = 3152651416U;

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
    msg.setTimeStamp(0.276323022786);
    msg.setSource(25245U);
    msg.setSourceEntity(114U);
    msg.setDestination(4820U);
    msg.setDestinationEntity(97U);
    msg.sessid = 1789399831U;

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
    msg.setTimeStamp(0.163045218697);
    msg.setSource(817U);
    msg.setSourceEntity(11U);
    msg.setDestination(51595U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2285955989U;
    msg.status = 224U;

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
    msg.setTimeStamp(0.0709811106623);
    msg.setSource(43940U);
    msg.setSourceEntity(217U);
    msg.setDestination(42525U);
    msg.setDestinationEntity(232U);
    msg.sessid = 708653581U;
    msg.status = 245U;

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
    msg.setTimeStamp(0.827767889711);
    msg.setSource(45914U);
    msg.setSourceEntity(42U);
    msg.setDestination(43422U);
    msg.setDestinationEntity(99U);
    msg.sessid = 2669251952U;
    msg.status = 57U;

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
    msg.setTimeStamp(0.902593832726);
    msg.setSource(60308U);
    msg.setSourceEntity(215U);
    msg.setDestination(64936U);
    msg.setDestinationEntity(54U);
    msg.name.assign("LTFHBKWUUUZYTNNAVSKSQATYUVDRSPCMOLFKLYRU");

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
    msg.setTimeStamp(0.805423042512);
    msg.setSource(18139U);
    msg.setSourceEntity(8U);
    msg.setDestination(22741U);
    msg.setDestinationEntity(29U);
    msg.name.assign("TDKLMCKWZXTDYAPTYGLAHCH");

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
    msg.setTimeStamp(0.0530352416421);
    msg.setSource(52827U);
    msg.setSourceEntity(129U);
    msg.setDestination(34416U);
    msg.setDestinationEntity(152U);
    msg.name.assign("CNMOTJPPZCJTSCUPWDWBCWBAMIQZYGTGPKIXUQIXPVR");

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
    msg.setTimeStamp(0.444739428251);
    msg.setSource(41078U);
    msg.setSourceEntity(240U);
    msg.setDestination(28280U);
    msg.setDestinationEntity(24U);
    msg.name.assign("ILZUVRWVFQHBVAHGGEZDWJPBQFZGTYKPBBVRETUKJWCOPRUEJLUIYQDNNTBLNLJTASXJDRRDOPEKAIEYNMTUOJHACMANZGIWBQSMNBKMSNSKLYXHERSBYFOXKSHQXELAZ");

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
    msg.setTimeStamp(0.985475374679);
    msg.setSource(56521U);
    msg.setSourceEntity(11U);
    msg.setDestination(3979U);
    msg.setDestinationEntity(101U);
    msg.name.assign("QUTBQBSVAAIYXTVYUAGRJMOZMPGSIDKWQQHRCYEZKNTTJJNSZBUCURRGGUERPVMILDDKOEKOTVJLHKYZRTIPECDQNAVZXIUHUGTWOZIFJWIYBHEDEJLNLHLAZAXXPIYOGUXGMHBXQUBWGJHLFJNSVTFRYFBFXKM");

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
    msg.setTimeStamp(0.530589780558);
    msg.setSource(14086U);
    msg.setSourceEntity(189U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(162U);
    msg.name.assign("VRGWDSFIBRJFRYAETGVSKKJCDHEXNUGIBKBROXTWIYGBDTKXLDPORZUHI");

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
    msg.setTimeStamp(0.903436061738);
    msg.setSource(45567U);
    msg.setSourceEntity(41U);
    msg.setDestination(40021U);
    msg.setDestinationEntity(76U);
    msg.type = 70U;
    msg.error.assign("GDDONPTJLQZCZLJKNLUAGRSJEUOYVCXYMCVYGQZJCWVBDCIHZUAFIASAKMEPWJBODQVKRTPPZBRSIHRLVMRYWTHNOTNPRJDMMAHZPRNZRVMLXWJIOGPBFIJUEYJALUSMKITCTBUINX");

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
    msg.setTimeStamp(0.86693350587);
    msg.setSource(60474U);
    msg.setSourceEntity(204U);
    msg.setDestination(7497U);
    msg.setDestinationEntity(75U);
    msg.type = 32U;
    msg.error.assign("UEHKUKLLJUGYUJOBSXVUSRVGTCNBPCJOXIVLMXBTINWHBIIKONNLHVPCKTYZFDLAVGJZREODZIXOQZXPEBLSRFGFPLHWCNKUWOUWM");

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
    msg.setTimeStamp(0.348668833374);
    msg.setSource(11607U);
    msg.setSourceEntity(239U);
    msg.setDestination(26153U);
    msg.setDestinationEntity(93U);
    msg.type = 9U;
    msg.error.assign("VGYQSIMFPPEKIQWGSHMGVRZPIVOUDSEVZIEBHKMUNWTNCPZQVQMACATMITFKTKUEXAXLEEXYOZYMENXBSAKFUWEBLAHNPPWQIMJRARSBYSXVDNLOOTMNWDHSWIRBJXMIANPPLESWORQJLSJTWQFBDEHGFJKZYXPCUJULLAJN");

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
    msg.setTimeStamp(0.0369203772235);
    msg.setSource(7137U);
    msg.setSourceEntity(244U);
    msg.setDestination(33997U);
    msg.setDestinationEntity(136U);
    msg.seq = 11431U;
    msg.sys_dst.assign("PFWKCKENBWDBGWWOFCQBTGXCGIABUSHDTBTQATSHUMSOTHVLGDOXVCWSBWULMFYNYJOEKJMCRTIEMVJYMCIXXUPUHJZORPSKNMBUYEBEMCCFEJQTZORDMQIRUYKSRAFJRCIYLUVGUZDAXLEHSILEZHRFLIHLYKVXDGTNJRELWAOHQIAXFQPDYFNZHMNYXJKPGVKGQSDCKNQNBBTOPDPNQGVSZPZMGAASZRZQFAVWVTOKLNXAJEPPXWFU");
    msg.flags = 119U;
    const char tmp_msg_0[] = {73, 32, 72, 50, -16, -60, 1, 58, -95, 10, -119, -23, 39, 38, 54, -66, -90, 91, 22, 15, 64, -101, 88, 45, -126, 15, -87, 71, 8, 32, -5, 95, -106, 90, -125, -30, -105, 83, 80, -45, 30, 69, 50, 59, -120, -119, -39, 33, 122};
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
    msg.setTimeStamp(0.921597466483);
    msg.setSource(9446U);
    msg.setSourceEntity(13U);
    msg.setDestination(61207U);
    msg.setDestinationEntity(69U);
    msg.seq = 24307U;
    msg.sys_dst.assign("NSIZMXBWUHHYFYLYWVCYYTIHX");
    msg.flags = 237U;
    const char tmp_msg_0[] = {13, 69, 56, -9, -33, 66, -14, -27, -96, -81, -84, -57, -48, -23, 62, 109, 62, -30, 75, 27, -9, 114, -13, -105, -25, -72, 92, 9, -35, 51, 60, 24, -119, -20, 119, -97, -103, -82, 112, -61, 85, 126, 94, 66, 9, 63, 97, -91, -4, 20, 2, 79, -2, 118, -114, -12, -101, -78, -113, -71, -54, 23, -68, 10, 46, 120, -112, -5, 91, 21, -41, -67, 57, 101, 101, -83, 44, 76, 77, 57, 15, -82, 55, 83, -33, -27, -23, -74, -45, -44, 19, 2, 79, -54, 78, 12, -18, 48, 26, -68, 78, 45, 52, 125, -16, -27, -107, -57, 63, 61, -22, -68, 13, 28, 93, -89, 9, -112, 111, -66, -56, -113, 79, 84, 103, 88, 119, 48, -14, 67, 15, -99, -113, -23, 121, -15, 39, -68, -121, -114, 44, -121, -28, -68, 115, -91, 126, -37, -26, -29, 83, 24, 124, -89, 32, -10, 100};
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
    msg.setTimeStamp(0.113818164978);
    msg.setSource(16541U);
    msg.setSourceEntity(192U);
    msg.setDestination(21515U);
    msg.setDestinationEntity(32U);
    msg.seq = 1189U;
    msg.sys_dst.assign("AIGATSPKJDHJLCXPLSIUTSBGOMPKDSEOYMZPSBSQDJWSCTIGVHELVBNYGMJQGVKSHPYAIQOMUENQOJIMFHIUKKBULGIHEDVIYOHTARTRZKCNZXZFJDZYCJJURGNNYWVZRRRBIMRXBDHXTLVQOAGMNKJEYUYRMSJTTDWVKLLBF");
    msg.flags = 134U;
    const char tmp_msg_0[] = {48, -10, 121, 69, 3, -40, 75, -52, -101, -43, -115, -10, 34, -78, 106, -78, -36, 27, -76, -28, -49, 42, 35, -92, -83, -31, 93, -43, -91, 68, -109, 119, 100, -89, 78, -110, 119, -74, -5, 120, -63, -11, 19, -36, -93, 117, -98, -95, 85, -82, 27, 108, 73, -95};
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
    msg.setTimeStamp(0.532096101599);
    msg.setSource(4366U);
    msg.setSourceEntity(104U);
    msg.setDestination(27130U);
    msg.setDestinationEntity(38U);
    msg.sys_src.assign("WCZGGQRUOMEVUFEIDSKPDWMXWFMWWTIBUXCWXXPOLTVDXJPAMQPYSHZECWNHKNKOCYTXXTULQBBQCGYMRJYDNRVICNIPKATFAAMYJUTJNSSKBIORIKAWYXOKHNLZBJGWGHGEXQLZDWQBDRAQBBTDEASOFVBJLRKHF");
    msg.sys_dst.assign("EGKDAOLPRRFJKLOOCATTOCNKIXGQVTFBCCHZYELAQNRPGWPVMV");
    msg.flags = 22U;
    const char tmp_msg_0[] = {-117, 121, -111, -1, -113, 15, -92, 33, 118, -112, -7, 86, -68, 16, 71, -111, -46, -55, -60, 70, 24, 46, -71, 107, -14, 43, -46, -123, -71, 67, 119, 120, -1, 17, 33, 43, 27, -87, 28, 36, -67, -95, 69, -13, -107, -11, -121, 42, -112, -28, -118, -99, -33, -105, -106, -123, 26, -118, 11, 91, -63, 69, -31, 120, 38, 40, -67, 88, 41, -57, 70, -31, -70, -77, 90};
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
    msg.setTimeStamp(0.257784643655);
    msg.setSource(38515U);
    msg.setSourceEntity(187U);
    msg.setDestination(17662U);
    msg.setDestinationEntity(170U);
    msg.sys_src.assign("HRLRCGGFLICJBDIXPZZQRAGIFYSZXJAUH");
    msg.sys_dst.assign("HXKZRLUMJPHDIATLMOFDTNTLKEPBEBAOGXGCQBFZSSEDMDZMPGROIDACXKSZRYLAPLJFVONZAQBOTDPQWPEFTUBWOOAUABNZMHXDSYZGJGHWV");
    msg.flags = 19U;
    const char tmp_msg_0[] = {-106, 28, -1, 75, -73, -63, -30, -2, -91, 125, -125, 47, -6, 125, -105, 3, 116, -39, 87, 5, 55, 95, 16, -42, 74, 95, -71, 85, -84, 94, -26, -9, -47, 14, -95, -19, 31, -45, -92, -114, 90, -48, -94, 61, 41, 95, 28, -40, 23, 98, -54, 47, 41, -12, 60, 23, -39, -86, 12, 98, -46, -5, -47, -32};
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
    msg.setTimeStamp(0.411402233428);
    msg.setSource(13672U);
    msg.setSourceEntity(128U);
    msg.setDestination(7690U);
    msg.setDestinationEntity(119U);
    msg.sys_src.assign("UUGGEGDREHTPXPLDIVRGIFKSLXQTUSPGJLROJJQSKWCKTIS");
    msg.sys_dst.assign("MLLNUUQKHTVNSTKSXUCRKFASCXGAWEEOAMONGZFDKGFPFMFLZDFLDHWIIDRPLQOCVLPHRXPYHMOHZXSAZWKSBVJDBUOAGJVPYAQGZENBUYCDOAWLTYOGRJDMWZESIX");
    msg.flags = 54U;
    const char tmp_msg_0[] = {59, 24, -36, -66, 54, -93, 100, -63, 80, -41, -27, -105, -31, -5, 12, -17, -115, -30, -119, -1, -70, -17, -110, 123, -5, 123, -42, -8, -72, 110, 125, 60, -4, -29, 5, 56, 9, 107, -68, -74, 107, -68, 59, -56, 3, -35, -105, 83, -126, 18, -70, -53, -104, 104, 9, -121, 7, -7, -110, -8, -9, 21, -6, 22, 119, 98, 115, 8, 9, 47, -86, -105, 97, 99, -6, -27, -108, 85, 36, -44, -96, -64, 124, 87, -51, 70, 53, 63, -44, 97, 43, 11, 8, 25, 125, -66, 35, 14, 107, 31, -26, 104, 10, 33, -11, -41, 23, -34, 7, -96, 107, -53, 124, -18, -66, -48, 73, -71, 49, -50, 86, 31, 11, -122, -95, 64, -105, 15, -20, -68, 70, 90, 42, -108, 13, -79, -122, -119, 78, 62, 59, 13, -85, 75, 31, -94, -33, -19, 90, 12, -114, 115, 68, 56, 82, 32, -28, 22, -27, 75, 35, 94, -61, -81, 105, 19, 26, -89, 95, 25, -77, 68, 56, 73, 16, 6, -50, -81, -118, 70, -33, 75, 68, 58, 5, -72, -30, 11, -12, -42, -43, 19, -116, -55, 88, -106, 61, -6, 17, -40, 63, -17, 103, 59, -123, 100, -73, -60, -108, -62, 106, 46, 31, 114, 90, 102};
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
    msg.setTimeStamp(0.259950223246);
    msg.setSource(47165U);
    msg.setSourceEntity(66U);
    msg.setDestination(37538U);
    msg.setDestinationEntity(101U);
    msg.seq = 34677U;
    msg.value = 105U;
    msg.error.assign("TLIPORHVXVALQAFPDHKMNLMQKDMCBSXULZHGBKFPPZYCNLBRUJYWUDWEVSYUYOVEDRHTNXEKJUTOKMISAMQYIJXTFZROFLZIAJNWGCBATSZSSKCQRQZLUGQKGCWBEJHYFGICAJKOUVKQZSXZXSPQQYLFVJZJDWTDINYDCNSPWTBAIEOPBRDXZPQGHPMGELGMAJFRNXOVRVEXFPHDWCHSEVOWUGYRRBADCJELYTUHIGWETNH");

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
    msg.setTimeStamp(0.946006969551);
    msg.setSource(22216U);
    msg.setSourceEntity(229U);
    msg.setDestination(9315U);
    msg.setDestinationEntity(25U);
    msg.seq = 5296U;
    msg.value = 131U;
    msg.error.assign("FROCQYQOATEWLVACTTKMKDHBNLJMGPMASUXXBZHYUVNOROWJQFLEGLVEGNSBQPIPLPIRDOYBQINZWMFXVOJRZCCBNLPKGRFJAJPXZRBDMLBPFAZPBCUGXUREEPYEWLESTHCNCMDKVKVODHARFGZTXWTXUDGCQQSHAVFUTWOLZMWWCMKVKMTJYBYJXHQFKDFUSYZSJKFREGAISIRGJMNHZINSVUWXIXNCGHHYTSSUIKNJTDIQHZYEBYVQO");

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
    msg.setTimeStamp(0.0584475150864);
    msg.setSource(49315U);
    msg.setSourceEntity(125U);
    msg.setDestination(65262U);
    msg.setDestinationEntity(187U);
    msg.seq = 46879U;
    msg.value = 141U;
    msg.error.assign("LUSLCWMFLGCHHZANTIIVLYJEQNOHYRAMOMRBNEXZQDFHNSWSXWDCZFJIFXVSGTQJLEGZXUUYDRNJRKGDBMUQABYYCEOZWSDITLIZQDPIJNOIMSUSVTAPQFUFWHHSHXEUIZCBCPKQBKKCFFZEOQACATTPGXMMJHKJYRBEOYBPXATHNCGWJKFIFQKGGBKLVVLDUGSACDUWEKAHDEOMEOVRNTYVVPQVJJZRYTPAPWZXYOBPBINWNMXTSLKRP");

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
    msg.setTimeStamp(0.929943337383);
    msg.setSource(27655U);
    msg.setSourceEntity(190U);
    msg.setDestination(48168U);
    msg.setDestinationEntity(80U);
    msg.seq = 54550U;
    msg.sys.assign("TDBJNRHHRDQEGCWEXMMTJNUPGGOSSKAQYUUKIWHSKDGVDYVQCYZDOGBHZZU");
    msg.value = 0.20144280626;

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
    msg.setTimeStamp(0.397989596839);
    msg.setSource(39374U);
    msg.setSourceEntity(52U);
    msg.setDestination(65352U);
    msg.setDestinationEntity(156U);
    msg.seq = 10029U;
    msg.sys.assign("MIQZOVXPVYLYNDTWKYYAPLMDCQEIFJRSHAITYOYBTXQOBJWDEXZCJZYPTKUPEYRFIEKFZEGGYHDUTQVPWMPLFICBNKJFMDDZTATZGABSXMZUGXHKOQGIJUWRDHVGGZGQZTKDJDUFSNJBUGCQF");
    msg.value = 0.927715212879;

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
    msg.setTimeStamp(0.198508347191);
    msg.setSource(59931U);
    msg.setSourceEntity(232U);
    msg.setDestination(39626U);
    msg.setDestinationEntity(148U);
    msg.seq = 42581U;
    msg.sys.assign("NTYGBDBULMIQIHIOGGSPHXANCOQTGASRIHADYDCEPJJJMGALTQZFYMZZILRLQJUVXSKTTFFHVCVINDKPVQBBXRXPWJRQJHNECNYSVYOJKWENZUMDUKVUYZKYZPBSPPUICCAEHWATKRAMCPDGXVZNEWLKMGKOWWCJBLMTEAIQQFRDXBBRTZYORILFAYQEOJFWOSFNULGWGCSNFRVUUYVSXKDMKZXHCXBSPEFHPLMWOZDJOAGBHITT");
    msg.value = 0.135913754471;

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
    msg.setTimeStamp(0.943718722837);
    msg.setSource(22219U);
    msg.setSourceEntity(216U);
    msg.setDestination(37525U);
    msg.setDestinationEntity(28U);
    msg.action = 15U;
    msg.longain = 0.748915773597;
    msg.latgain = 0.066979840296;
    msg.bondthick = 302867189U;
    msg.leadgain = 0.577582888897;
    msg.deconflgain = 0.0258786396765;

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
    msg.setTimeStamp(0.579711276332);
    msg.setSource(47756U);
    msg.setSourceEntity(76U);
    msg.setDestination(1755U);
    msg.setDestinationEntity(253U);
    msg.action = 241U;
    msg.longain = 0.4037180024;
    msg.latgain = 0.91894215792;
    msg.bondthick = 2487334374U;
    msg.leadgain = 0.331183418888;
    msg.deconflgain = 0.321173718644;

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
    msg.setTimeStamp(0.46448622879);
    msg.setSource(7947U);
    msg.setSourceEntity(20U);
    msg.setDestination(5351U);
    msg.setDestinationEntity(34U);
    msg.action = 232U;
    msg.longain = 0.128783782291;
    msg.latgain = 0.758827360306;
    msg.bondthick = 3417006351U;
    msg.leadgain = 0.562362702464;
    msg.deconflgain = 0.887434148387;

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
    msg.setTimeStamp(0.647540027599);
    msg.setSource(54420U);
    msg.setSourceEntity(206U);
    msg.setDestination(44469U);
    msg.setDestinationEntity(119U);
    msg.err_mean = 0.219412412362;
    msg.dist_min_abs = 0.212767490844;
    msg.dist_min_mean = 0.329641857948;

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
    msg.setTimeStamp(0.530026208716);
    msg.setSource(22246U);
    msg.setSourceEntity(112U);
    msg.setDestination(2977U);
    msg.setDestinationEntity(120U);
    msg.err_mean = 0.539425601077;
    msg.dist_min_abs = 0.361690297356;
    msg.dist_min_mean = 0.871499559355;

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
    msg.setTimeStamp(0.88659136482);
    msg.setSource(33833U);
    msg.setSourceEntity(121U);
    msg.setDestination(19211U);
    msg.setDestinationEntity(182U);
    msg.err_mean = 0.641346358689;
    msg.dist_min_abs = 0.988194677491;
    msg.dist_min_mean = 0.0487789838416;

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
    msg.setTimeStamp(0.00977090035506);
    msg.setSource(35512U);
    msg.setSourceEntity(247U);
    msg.setDestination(13407U);
    msg.setDestinationEntity(205U);
    msg.action = 182U;
    msg.lon_gain = 0.831456317045;
    msg.lat_gain = 0.122575214026;
    msg.bond_thick = 0.00618952157083;
    msg.lead_gain = 0.180069076464;
    msg.deconfl_gain = 0.643446394968;
    msg.accel_switch_gain = 0.246353581448;
    msg.safe_dist = 0.0285964110857;
    msg.deconflict_offset = 0.438450831745;
    msg.accel_safe_margin = 0.335756075544;
    msg.accel_lim_x = 0.786756115862;

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
    msg.setTimeStamp(0.988602264541);
    msg.setSource(8916U);
    msg.setSourceEntity(29U);
    msg.setDestination(14476U);
    msg.setDestinationEntity(238U);
    msg.action = 201U;
    msg.lon_gain = 0.733677631116;
    msg.lat_gain = 0.640054853939;
    msg.bond_thick = 0.514170518782;
    msg.lead_gain = 0.537163759097;
    msg.deconfl_gain = 0.507934349046;
    msg.accel_switch_gain = 0.947281963484;
    msg.safe_dist = 0.948099376081;
    msg.deconflict_offset = 0.407838053573;
    msg.accel_safe_margin = 0.710582223721;
    msg.accel_lim_x = 0.694899036651;

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
    msg.setTimeStamp(0.555914324298);
    msg.setSource(9007U);
    msg.setSourceEntity(19U);
    msg.setDestination(41004U);
    msg.setDestinationEntity(226U);
    msg.action = 114U;
    msg.lon_gain = 0.401763762293;
    msg.lat_gain = 0.306158510291;
    msg.bond_thick = 0.9563518562;
    msg.lead_gain = 0.949945050047;
    msg.deconfl_gain = 0.735996760576;
    msg.accel_switch_gain = 0.834196363861;
    msg.safe_dist = 0.183785788034;
    msg.deconflict_offset = 0.541088812208;
    msg.accel_safe_margin = 0.258646624645;
    msg.accel_lim_x = 0.562310892076;

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
    msg.setTimeStamp(0.765853237662);
    msg.setSource(62045U);
    msg.setSourceEntity(143U);
    msg.setDestination(24323U);
    msg.setDestinationEntity(56U);
    msg.type = 206U;
    msg.op = 109U;
    msg.err_mean = 0.131366894452;
    msg.dist_min_abs = 0.483011745499;
    msg.dist_min_mean = 0.78589262577;
    msg.roll_rate_mean = 0.487243532995;
    msg.time = 0.33826197674;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 68U;
    tmp_msg_0.lon_gain = 0.378733304874;
    tmp_msg_0.lat_gain = 0.590146145469;
    tmp_msg_0.bond_thick = 0.80943848113;
    tmp_msg_0.lead_gain = 0.623354586162;
    tmp_msg_0.deconfl_gain = 0.384096017814;
    tmp_msg_0.accel_switch_gain = 0.311870522181;
    tmp_msg_0.safe_dist = 0.0145576359345;
    tmp_msg_0.deconflict_offset = 0.366560771228;
    tmp_msg_0.accel_safe_margin = 0.2645624561;
    tmp_msg_0.accel_lim_x = 0.0246991908938;
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
    msg.setTimeStamp(0.329250526852);
    msg.setSource(7483U);
    msg.setSourceEntity(229U);
    msg.setDestination(11457U);
    msg.setDestinationEntity(58U);
    msg.type = 245U;
    msg.op = 90U;
    msg.err_mean = 0.139861208784;
    msg.dist_min_abs = 0.215958092221;
    msg.dist_min_mean = 0.544107972986;
    msg.roll_rate_mean = 0.0939825998066;
    msg.time = 0.88744080373;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 240U;
    tmp_msg_0.lon_gain = 0.535488237723;
    tmp_msg_0.lat_gain = 0.132882560637;
    tmp_msg_0.bond_thick = 0.512554423575;
    tmp_msg_0.lead_gain = 0.629002158268;
    tmp_msg_0.deconfl_gain = 0.0839948682413;
    tmp_msg_0.accel_switch_gain = 0.810866308667;
    tmp_msg_0.safe_dist = 0.274854846772;
    tmp_msg_0.deconflict_offset = 0.942960518257;
    tmp_msg_0.accel_safe_margin = 0.747817655401;
    tmp_msg_0.accel_lim_x = 0.424914308872;
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
    msg.setTimeStamp(0.220393475425);
    msg.setSource(36246U);
    msg.setSourceEntity(21U);
    msg.setDestination(45725U);
    msg.setDestinationEntity(252U);
    msg.type = 104U;
    msg.op = 172U;
    msg.err_mean = 0.311689777412;
    msg.dist_min_abs = 0.953661259929;
    msg.dist_min_mean = 0.86396876415;
    msg.roll_rate_mean = 0.01835870119;
    msg.time = 0.248468316647;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 241U;
    tmp_msg_0.lon_gain = 0.553349564197;
    tmp_msg_0.lat_gain = 0.0880135477295;
    tmp_msg_0.bond_thick = 0.817447922745;
    tmp_msg_0.lead_gain = 0.85398128688;
    tmp_msg_0.deconfl_gain = 0.154965848014;
    tmp_msg_0.accel_switch_gain = 0.47373489284;
    tmp_msg_0.safe_dist = 0.190881890141;
    tmp_msg_0.deconflict_offset = 0.225084296486;
    tmp_msg_0.accel_safe_margin = 0.469579708303;
    tmp_msg_0.accel_lim_x = 0.558390193913;
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
    msg.setTimeStamp(0.508128960809);
    msg.setSource(6299U);
    msg.setSourceEntity(192U);
    msg.setDestination(20857U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.197776697357;
    msg.lon = 0.791100186108;
    msg.eta = 3507560711U;
    msg.duration = 45325U;

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
    msg.setTimeStamp(0.99233912912);
    msg.setSource(62866U);
    msg.setSourceEntity(196U);
    msg.setDestination(39117U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.897721209789;
    msg.lon = 0.344188663624;
    msg.eta = 4117065021U;
    msg.duration = 49870U;

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
    msg.setTimeStamp(0.369990031166);
    msg.setSource(22941U);
    msg.setSourceEntity(145U);
    msg.setDestination(18763U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.326847318041;
    msg.lon = 0.0389357022346;
    msg.eta = 3434457937U;
    msg.duration = 61852U;

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
    msg.setTimeStamp(0.760101043333);
    msg.setSource(9053U);
    msg.setSourceEntity(58U);
    msg.setDestination(56783U);
    msg.setDestinationEntity(54U);
    msg.plan_id = 25720U;

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
    msg.setTimeStamp(0.621978802976);
    msg.setSource(26428U);
    msg.setSourceEntity(110U);
    msg.setDestination(29877U);
    msg.setDestinationEntity(33U);
    msg.plan_id = 23067U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.58141035891;
    tmp_msg_0.lon = 0.878924612119;
    tmp_msg_0.eta = 2250515494U;
    tmp_msg_0.duration = 40367U;
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
    msg.setTimeStamp(0.334436181443);
    msg.setSource(61928U);
    msg.setSourceEntity(129U);
    msg.setDestination(54856U);
    msg.setDestinationEntity(64U);
    msg.plan_id = 22926U;

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
    msg.setTimeStamp(0.303396240172);
    msg.setSource(35649U);
    msg.setSourceEntity(237U);
    msg.setDestination(61155U);
    msg.setDestinationEntity(50U);
    msg.type = 149U;
    msg.command = 116U;
    msg.settings.assign("WRZEYEPQWVZICLORKXKZJFZDNDAFWBSCHYUQXMPIRSTIMVSYTKFSUTLZBMSJPBVVLVKMMRXNKCURAFWDHGCHPBSYQTDQRCPEWDNPKVCTRIXLJIXDRMHPNYAXUXINOOWJZQTYNEMNOHKLPTVBNLFVNLDCUGSADGKZBAALQGFQKTAOBTYAU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41095U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JGWPYSFVJJCURGLUHHYWDQMWWTHDTSESYOLWLASANZRGUXJUINPESCBZGBPKKOCGCIKPIPDRLPUNBJVAVHQZGZIMDHGZERSKFPLNAAORCELMYQXIMVHMXOUWOBHBEEHQYKOQPOAWEOUFP");

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
    msg.setTimeStamp(0.559543583441);
    msg.setSource(19277U);
    msg.setSourceEntity(129U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(206U);
    msg.type = 16U;
    msg.command = 205U;
    msg.settings.assign("CYCOKLYLLQTGZZAAFDOSDXSNYQUVORZMPFIIWMSGDBDLHWQCNDYDHQKCMYZLNNRRQSKCOJXTMKJPHVRGLBROKPIUALHAJNTUWXVCMFTJBTEZGSZLZHJJXCQGAXGFZPGYEPLXGNNQHPXQPRSUKCSWNFEBBXRFAIMHTGOVJBIYNSEMYUHFBXETJQJZFPMVGNVAQKWKMUVTUWJWZAWIOEITBDEFPHKXCRRIWUIADUEROLMWYVVTDSPIDYV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 56059U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BMICRQRLDKCZGJBZZCYSAIUNNTJZTSKVHURDBORQMEDYUERSWFCRSCVPAIPVVFXAWLJKWTYOSBIADTCLWNFKKZHJAMTJXYYGBBABCPNVYVQIMR");

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
    msg.setTimeStamp(0.378035464723);
    msg.setSource(20666U);
    msg.setSourceEntity(20U);
    msg.setDestination(22313U);
    msg.setDestinationEntity(41U);
    msg.type = 197U;
    msg.command = 38U;
    msg.settings.assign("ZROMUZNWOBWWOKYXOJCJFISOLSQXQRWEMLAUNGDBYPBAWSZURNGELQTWHOXJVYQAIVPVSQFXLQSFYYKRXMQPGALUSYIINCJYGAXYBPPQVFOVADVLXGHMPNGXCUBMWCKCKAH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21828U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.266620416393;
    tmp_tmp_msg_0_0.lon = 0.221203963091;
    tmp_tmp_msg_0_0.eta = 2245584014U;
    tmp_tmp_msg_0_0.duration = 30916U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("URLSEEMODMHQPZUCRBTKPWDVCIFZXYOG");

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
    msg.setTimeStamp(0.440672235549);
    msg.setSource(12743U);
    msg.setSourceEntity(234U);
    msg.setDestination(13925U);
    msg.setDestinationEntity(225U);
    msg.state = 50U;
    msg.plan_id = 3003U;
    msg.wpt_id = 39U;
    msg.settings_chk = 29122U;

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
    msg.setTimeStamp(0.245289191165);
    msg.setSource(15298U);
    msg.setSourceEntity(159U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(213U);
    msg.state = 18U;
    msg.plan_id = 19485U;
    msg.wpt_id = 6U;
    msg.settings_chk = 1029U;

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
    msg.setTimeStamp(0.751133937153);
    msg.setSource(53575U);
    msg.setSourceEntity(129U);
    msg.setDestination(2067U);
    msg.setDestinationEntity(117U);
    msg.state = 49U;
    msg.plan_id = 24002U;
    msg.wpt_id = 120U;
    msg.settings_chk = 40857U;

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
    msg.setTimeStamp(0.723058206033);
    msg.setSource(65458U);
    msg.setSourceEntity(184U);
    msg.setDestination(33573U);
    msg.setDestinationEntity(152U);
    msg.uid = 81U;
    msg.frag_number = 222U;
    msg.num_frags = 99U;
    const char tmp_msg_0[] = {78, -46, 66, -41, -47, 80, -20, -107, -76, -33, 44, 107, 0, -122, -98, -62, -32, 88, -99, 96, -26, 10, 43, -91, 36, -15, -46, -123, 84, 73, -128, 96, 101, 18, -64, 8, -67, 77, 45, 60, 107, -82, 36, -36, 108, -93, -24, -89, -24, 108, -96, -105, -102, 5, 114, 81, 95, -72, -45, 44, 60, -13, 31, 17, 19, -58, -70, -82, -22, -41, -57, 111, -108, -99, -5, 105, -111};
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
    msg.setTimeStamp(0.228316768841);
    msg.setSource(45754U);
    msg.setSourceEntity(232U);
    msg.setDestination(65341U);
    msg.setDestinationEntity(8U);
    msg.uid = 7U;
    msg.frag_number = 189U;
    msg.num_frags = 247U;
    const char tmp_msg_0[] = {29, -121, -98, -5, -7, 31, 11, -15, -113, 9, 0, 92, 118, -90, -10, 113, -6, -27, 104, -120, -101, 111, -8, 6, 110, 99, 71, 76, 101, -76, -11, 40, 75, 30};
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
    msg.setTimeStamp(0.858398200685);
    msg.setSource(56750U);
    msg.setSourceEntity(55U);
    msg.setDestination(54724U);
    msg.setDestinationEntity(154U);
    msg.uid = 142U;
    msg.frag_number = 103U;
    msg.num_frags = 178U;
    const char tmp_msg_0[] = {93, -36, 23, 19, 20, 25, -67, 73, -55, 96, 82, -64, -74, 66, -96, 14, -79, -119, 24, 85, 47, -34, 10, 12, 37, 65, -12, 66, 12, 124, -20, 27, -94, -29, -121, -3, 57, 4, 4, -93, 55, -4, 95, -109, -99, -32, -57, 1, 121, -1, 57, -52, -14, -85, 19, 69, 108, -4, -102, 118, 22, -74, -106, -59, 88, 31, 55, 28, 61, -88, 14, 21, 98, -101, -108, -73, 56, 25, -75, 80, -97, 110, -36, 71, -124};
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
    msg.setTimeStamp(0.407009270683);
    msg.setSource(28675U);
    msg.setSourceEntity(158U);
    msg.setDestination(29564U);
    msg.setDestinationEntity(181U);
    msg.content_type.assign("CUHDQYHLERYPKJGYKHQZMMRRUGANVRJEHODBFCLXEBJDVYPWQSKDHPYDAUNRQRYTOXSKVVPTZIALPNNUOUPWBFFPZGADVCCJJSHTIDAOLHMEVZIBJPFHFQSDMSEUKIZZGTMXBGTGNKTKCDSMMXLEVULUVOLHXAXQBISFCRFAWEWGUYYQIEQJTZACOCOX");
    const char tmp_msg_0[] = {79, 11, -22, -120, -104, -118, -73, -31, 116, 69, -69, 10, -11, 72, 18, 88, -63, -49, 5, -12, 123, 119, -21, -6, -85, 114, 86, 112, -78, 52, 86, 80, -96, -31, -60, 18, 87, 30, -29, 41, -68, -125, -92, -35, 25, 86, 32, 102, 104, -110, 51, -101, 25, 87, 99, -111, -102, -79, -100, -78, -95, -123, 104, -109, -103, 41, -127, -106, 100, -66, 36, -122, 89, -91, -6, -72, -117, 114, 54, 87, -77, -32, -40, -33, 33, -51, 62, 85, 39, 47, 49, -77, -101, 13, 42, 92, 16, 77, -59, 24, -94, 67, 125, 44, 22, 71, 89, -122, -97, -26, -71, 126, 71, -8, -36, -97, -111, -5, 60, -81, -16, -111, -113, 26, -29, -120, 46, 72, -4, 74, 27, 34, 52, -99, -86, 35, 18, 46, -52, -107, -69, -36, 39, -17, 8, -90, -49, 97, 37, -17, -11, 105, 118, -23, -113, -7, 44, -103, 105, 9, 108, 23, 3, -107, 13, -73, 37, -50, 29, 113, -113, -123, -18, -113, -92, 73, 77, -75, 37, -77, -121, 43, -38, -33, -59, -30, -71, -114, 118, 125, -90, 46, -90, -108, 65, 3, -118, 74, -43, 96, -109, -95, 66, -101, -90, -27, -12};
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
    msg.setTimeStamp(0.60742934816);
    msg.setSource(40385U);
    msg.setSourceEntity(243U);
    msg.setDestination(26550U);
    msg.setDestinationEntity(83U);
    msg.content_type.assign("VDWLPIGOUMSILVVEJKBNLTDFVSQTYUYUIKSYKRMUSPPWXNLWMFLSFAJHDMEZKHXGEPIZFZJNYQVHXAGGMFFJTNTGCSDAZJADGZUSPCHEDTQJGAIHTVGXEWIYBGLDVOCIRRMWWXKZBQHYGETEEXNIKKQXKDOSWCLOQOUUMRUULQBPCJKNFIDXJRACPTEAZYBCWHVFXPTQIBDVBCNWZUMROFRRBNPKOHSWMQCZSJMYNOY");
    const char tmp_msg_0[] = {-19, -64, -52, -3, 112, -101, 5, -64, -91, 82, 10, -19, 81, 88, -97, -50, -100, 55, 85, 100, -99, -120, -95, -63, -38, -119, -96, 100, 74, 48, 71, 36, -62, 97, 52, 51, -101, -6, -72, -115, -94, 65, 13, -49, 21, -95, -80, 118, -126, -80, 124, 95, 0, -111, 63, 102, -123, -51, 43, -53, 28, -29, -75, -119, -90, -83, 7, 25, -110, 31, -36, 91, 87, -48, 16, 59, -104, -47, -74, 57, -61, 48, -98, -31, -37, -116, -95, 117, -114, -55, 86, 31, -123, -44, -86, 77, -99, -16, -123, -21, -72, -10, -39, -106, 6, -41, 108};
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
    msg.setTimeStamp(0.663191104264);
    msg.setSource(49296U);
    msg.setSourceEntity(2U);
    msg.setDestination(32239U);
    msg.setDestinationEntity(193U);
    msg.content_type.assign("CMGSEQTRCPUOFJJYHSAUNAWZYIVSCESIKONBONKXZQNBXSJXPOXOQYKYBRTALEWWDAHFSGDQZFJFUKPVDIRAHMCGEYSOGKMPHAVFKTZIFPXCRWVEZRKUTZQKDHSXMWIMBIUARZLZFUNWOBLGWIBPTKOMTLFSODELGYCHNNMBQDHVRPMJBYNNYVQLHCOAFIVSPCW");
    const char tmp_msg_0[] = {-56, -89, 119, 122, -122, -77, 5, -33, -52, 23, 4, 76, 84, 113, 59, -78, -116, 70, 59, -16, -102, 49, 91, -80, 32, 38, -2, 26, -120, 52, -33, -73, 48, -26, -16, 82, -18, -101, -45, -75, -43, 95, -107, 77, 119, -22, 119, -83, 121, 30, -35, -47, 123, 53, -101, 68, -126, -58, 116, -84, -113, 16, -83, -11, -38, 123, 87, 93, 43, -73, -127, -119, -39, -25, 14, -105, -94, 113, -28, -64, -97, -50, -36, 8, 106, -46, -128, -124, -24, -103, 10, 22, 47, -27, -23, -11, 26, 88, -4, -74, 30, -58, 10, 54, -42, -60, 110, -38, 24, -52, 119, -125, -23, 12, 92, -6, -44, 77, 4, -100, 111, 60, -82, 80, 124, -81, -80, 79, 82, -69, 23, 42, 112, -109, 75, 13, 16, 28, -16, -58, 44, -19, -71, -105, 23, -92, -13, -120, 39, -40, 108, -112, -36, 88, -8, -37, 2, -101, 27, -26, 31, -48, 42, -57, -79, -99, 45, 14, 78, -64, 32, 1, -121, 12, -108, 69, 59, -24, -7, 8, 111, 26, -108, 77, -111, -7, 39, 60, -89, -42, 74, -62, 98, -70, -90, -37, -55, -12, -85, -116, 22, -104, -46, 23, -103, -42, -64, -34, 6, 111, 7, -127, 6, -29, -81, 23, -112};
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
    msg.setTimeStamp(0.657568511647);
    msg.setSource(24245U);
    msg.setSourceEntity(180U);
    msg.setDestination(29984U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.222266000353);
    msg.setSource(19570U);
    msg.setSourceEntity(30U);
    msg.setDestination(18114U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.795343335136);
    msg.setSource(32894U);
    msg.setSourceEntity(124U);
    msg.setDestination(15964U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.541118287614);
    msg.setSource(40119U);
    msg.setSourceEntity(176U);
    msg.setDestination(32817U);
    msg.setDestinationEntity(219U);
    msg.target = 17106U;
    msg.bearing = 0.307264881961;
    msg.elevation = 0.0186851904734;

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
    msg.setTimeStamp(0.227898089619);
    msg.setSource(9454U);
    msg.setSourceEntity(227U);
    msg.setDestination(57386U);
    msg.setDestinationEntity(241U);
    msg.target = 50233U;
    msg.bearing = 0.248511684515;
    msg.elevation = 0.941486784226;

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
    msg.setTimeStamp(0.906157909467);
    msg.setSource(722U);
    msg.setSourceEntity(189U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(205U);
    msg.target = 18498U;
    msg.bearing = 0.592596850809;
    msg.elevation = 0.0578163811904;

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
    msg.setTimeStamp(0.522504898076);
    msg.setSource(46245U);
    msg.setSourceEntity(36U);
    msg.setDestination(11173U);
    msg.setDestinationEntity(176U);
    msg.target = 26812U;
    msg.x = 0.662227330788;
    msg.y = 0.0927138725665;
    msg.z = 0.447174225056;

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
    msg.setTimeStamp(0.462077653192);
    msg.setSource(22294U);
    msg.setSourceEntity(41U);
    msg.setDestination(36717U);
    msg.setDestinationEntity(49U);
    msg.target = 64301U;
    msg.x = 0.209233161015;
    msg.y = 0.519217521301;
    msg.z = 0.318242861162;

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
    msg.setTimeStamp(0.344283458689);
    msg.setSource(42260U);
    msg.setSourceEntity(144U);
    msg.setDestination(24600U);
    msg.setDestinationEntity(60U);
    msg.target = 55408U;
    msg.x = 0.551161072373;
    msg.y = 0.573021535589;
    msg.z = 0.566332358552;

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
    msg.setTimeStamp(0.234121679206);
    msg.setSource(44196U);
    msg.setSourceEntity(98U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(117U);
    msg.target = 46932U;
    msg.lat = 0.051204212698;
    msg.lon = 0.237143805921;
    msg.z_units = 177U;
    msg.z = 0.477177283054;

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
    msg.setTimeStamp(0.480578504692);
    msg.setSource(13653U);
    msg.setSourceEntity(172U);
    msg.setDestination(24146U);
    msg.setDestinationEntity(187U);
    msg.target = 5224U;
    msg.lat = 0.663770932399;
    msg.lon = 0.83652053981;
    msg.z_units = 14U;
    msg.z = 0.101239372018;

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
    msg.setTimeStamp(0.174940938088);
    msg.setSource(26808U);
    msg.setSourceEntity(218U);
    msg.setDestination(22608U);
    msg.setDestinationEntity(90U);
    msg.target = 9201U;
    msg.lat = 0.305790889187;
    msg.lon = 0.0838460664472;
    msg.z_units = 204U;
    msg.z = 0.06353896689;

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
    msg.setTimeStamp(0.789168403255);
    msg.setSource(1479U);
    msg.setSourceEntity(204U);
    msg.setDestination(1331U);
    msg.setDestinationEntity(57U);
    msg.locale.assign("TQYUKXDGDCSRXPZPJOQLYKVPXGKSYEEBLCVWKSTRZPXNYOBAWZUGMRVFQKYKAQAMCTKPIAOWPMKTWFOCWAHTDBQVARAZBQTBXIGXAYXZZVQIEHVBMUPJISSXORFJMCTTILVOINRQKODHGWULEBMTWRGUZOYDOFXNPAHNSWIYIRJVRMBGCTFMIDQCZCLKXMB");
    const char tmp_msg_0[] = {103, 60, -66, -24, 78, -95, -20, 45, 50, 64, -59, 118, 84, 123, 30, -19, 80, -63, 100, -116, 41, -39, -74, -51, -1, -65, 75, -30, -77, 11, 98, 95, -51, -33, 66, -20, -37, -48, 63, -65, -112, 57, 106, -117, 12, 92, 93, 74, 94, -56, 74, 81, 50, -10, 92, 90, -13, 62, -49, -69, -43, -70, 0, -13, -49, -108, -39, 125, -66, -43, 40, 91, 27, -110, -103, 49, -8, 53, -84, 121, -42, -116, 122, 125, -69, 34, 34};
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
    msg.setTimeStamp(0.111634491871);
    msg.setSource(40604U);
    msg.setSourceEntity(58U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(62U);
    msg.locale.assign("YODQCMQZUWIXIRLTGPFHXHMZUFACCIVQNPYCTRKXBJNWRHVLQJWFEPXZJRRHHLEVDCTQKTWELGKYVIZSUSBRFFWSELQFDTQDKJVTFKHNUMRABQPAXJNGNIFCNNGABSCBNRCZTYLVONTKDANXEZ");
    const char tmp_msg_0[] = {-94, 103, -75, -19, -21, 32, -39, -55, -22, 6, -32, 59, -103, -124, 58, -70, 92, -61, 61, -112, -100, -53, 34, 11, 103, 92, -53, -84, -69, -102, -40, -30, 19, 24, -114, -92, -96, -101, 103, -118, 84, 103, -5, 96, 66, -43, 111, 36, -78, -75, 29, -14, -26, -27, -74, -23, -93, 25, -6, 18, 97, -16, 119, 30, 120, -116, -90, 40, -58, -52, 37, 68, 42, 97, -4, -75, 116, -36, -26, -10, 59, 71, 69, 87, -6, -37, -22, 40, -7, -39, -61, 23, 47, -32, -83, -1, 125, -6, -60, 41, 92, -84, 6, -6, 75, 76, 73, -105, -55, 10, 16, 40, -40, -107, -107, 91, 57, 69, 117, 84, -52, 16, -86, -28, 110, -27, 28, -25, -15, 102, 56, -78, 108, 4, -57, -122, -28, -73, -53, -35, 9, -7, -119, -82, -49, 40, -56, 55, 83, 93, -96, 90, -52, -122, 10, 6, 112, 70, 76, -2, -110, 46, 72, -75, -67, -39, -116, -114, -105, -3, -74, 6, 27, -112};
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
    msg.setTimeStamp(0.138570686498);
    msg.setSource(58984U);
    msg.setSourceEntity(51U);
    msg.setDestination(23951U);
    msg.setDestinationEntity(170U);
    msg.locale.assign("KWUEHBHBNECVZULXWPXQXJKKIBTSXPIZVNWFLVYWCJKUIRJNGRDEIGOLRIEWLGVHIUXGDFHBETDDAQCSSIKOUYJMWPIZQLHUFVXETEPFKPXGZQLKTARBDHSSXAZLMWUHBFRSWCNM");
    const char tmp_msg_0[] = {88, -119, 68, 76, 51, -97, -127, 37, 91, 99, 85, 108, -89, 63, -52, 83, 38, -91, 124, 107, -28, -108, -4, 32, -69, 124, 58, 17, -120, -45, -55};
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
    msg.setTimeStamp(0.560784975177);
    msg.setSource(40874U);
    msg.setSourceEntity(201U);
    msg.setDestination(17589U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.263427911476);
    msg.setSource(16293U);
    msg.setSourceEntity(138U);
    msg.setDestination(400U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.413187441844);
    msg.setSource(34226U);
    msg.setSourceEntity(47U);
    msg.setDestination(13778U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.354078834856);
    msg.setSource(22651U);
    msg.setSourceEntity(97U);
    msg.setDestination(40058U);
    msg.setDestinationEntity(254U);
    msg.camid = 232U;
    msg.x = 32900U;
    msg.y = 34215U;

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
    msg.setTimeStamp(0.598088758335);
    msg.setSource(63742U);
    msg.setSourceEntity(250U);
    msg.setDestination(12770U);
    msg.setDestinationEntity(226U);
    msg.camid = 216U;
    msg.x = 19904U;
    msg.y = 53126U;

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
    msg.setTimeStamp(0.753684248654);
    msg.setSource(32331U);
    msg.setSourceEntity(225U);
    msg.setDestination(38509U);
    msg.setDestinationEntity(116U);
    msg.camid = 164U;
    msg.x = 54744U;
    msg.y = 63345U;

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
    msg.setTimeStamp(0.422039351261);
    msg.setSource(9596U);
    msg.setSourceEntity(59U);
    msg.setDestination(22694U);
    msg.setDestinationEntity(41U);
    msg.camid = 38U;
    msg.x = 36634U;
    msg.y = 53373U;

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
    msg.setTimeStamp(0.133382567276);
    msg.setSource(22763U);
    msg.setSourceEntity(2U);
    msg.setDestination(6043U);
    msg.setDestinationEntity(13U);
    msg.camid = 174U;
    msg.x = 17226U;
    msg.y = 41771U;

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
    msg.setTimeStamp(0.416303940111);
    msg.setSource(58202U);
    msg.setSourceEntity(130U);
    msg.setDestination(15183U);
    msg.setDestinationEntity(74U);
    msg.camid = 105U;
    msg.x = 35744U;
    msg.y = 4314U;

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
    msg.setTimeStamp(0.553226083311);
    msg.setSource(20625U);
    msg.setSourceEntity(164U);
    msg.setDestination(43779U);
    msg.setDestinationEntity(245U);
    msg.tracking = 203U;
    msg.lat = 0.575817580755;
    msg.lon = 0.502557322872;
    msg.x = 0.0764163697801;
    msg.y = 0.431770066379;
    msg.z = 0.855551779399;

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
    msg.setTimeStamp(0.52632056661);
    msg.setSource(61576U);
    msg.setSourceEntity(245U);
    msg.setDestination(44139U);
    msg.setDestinationEntity(195U);
    msg.tracking = 141U;
    msg.lat = 0.47142001737;
    msg.lon = 0.0110588252393;
    msg.x = 0.0739288046365;
    msg.y = 0.135576066763;
    msg.z = 0.0981492968454;

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
    msg.setTimeStamp(0.5451676377);
    msg.setSource(41164U);
    msg.setSourceEntity(166U);
    msg.setDestination(60535U);
    msg.setDestinationEntity(200U);
    msg.tracking = 125U;
    msg.lat = 0.267177938401;
    msg.lon = 0.439375193044;
    msg.x = 0.732984517045;
    msg.y = 0.903460198065;
    msg.z = 0.649721404434;

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
    msg.setTimeStamp(0.918594232457);
    msg.setSource(63873U);
    msg.setSourceEntity(1U);
    msg.setDestination(61209U);
    msg.setDestinationEntity(109U);
    msg.target.assign("PNRSHPXEDUTIVFFOABTRVDNDGZYBEFCRRGXHXMRHBDQYHCBSGZZLVDIPEZNLALVVUJKQXHWWEHLMMJPLWUONCDFTUUAMOYFOZRUIORSVTCZKCEFVBIGFQXKASBCXORBYFOTEWRPQTHVTBIYCOUWIJV");
    msg.lbearing = 0.0777717535669;
    msg.lelevation = 0.488022122818;
    msg.bearing = 0.124711722739;
    msg.elevation = 0.140582118942;
    msg.phi = 0.118009258609;
    msg.theta = 0.877040093771;
    msg.psi = 0.782804572368;
    msg.accuracy = 0.644305698492;

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
    msg.setTimeStamp(0.586185353763);
    msg.setSource(39896U);
    msg.setSourceEntity(161U);
    msg.setDestination(42995U);
    msg.setDestinationEntity(44U);
    msg.target.assign("IOFBWGVZHKLSGGNWHVPLHKNSJWEMZNIBVPODJMNNZGYCOAHMFILNDYRZMSHLPEFTVLKNDKDSWOVWFUGZVMREFDFHWABXIQAUQXIJBSYEZBVCCSKOCTI");
    msg.lbearing = 0.851333187966;
    msg.lelevation = 0.875863102995;
    msg.bearing = 0.750425790089;
    msg.elevation = 0.22058015167;
    msg.phi = 0.428491554385;
    msg.theta = 0.316109452452;
    msg.psi = 0.684956219893;
    msg.accuracy = 0.310551985623;

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
    msg.setTimeStamp(0.335030146371);
    msg.setSource(31803U);
    msg.setSourceEntity(95U);
    msg.setDestination(44308U);
    msg.setDestinationEntity(10U);
    msg.target.assign("MOUSBBJRIHHTIIIWUDFJDVRYXHLQQGLZALHYPQXETGAXVVDHRSIFQQYBWLVBYNYFZLXOORSAVOYLWBLJNCRMVBMENKEIPRZAJQPCEHHW");
    msg.lbearing = 0.678891205716;
    msg.lelevation = 0.811894287091;
    msg.bearing = 0.900387067059;
    msg.elevation = 0.308246205073;
    msg.phi = 0.365655488904;
    msg.theta = 0.222679273179;
    msg.psi = 0.523221921197;
    msg.accuracy = 0.319418885422;

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
    msg.setTimeStamp(0.0346136502564);
    msg.setSource(29478U);
    msg.setSourceEntity(95U);
    msg.setDestination(10662U);
    msg.setDestinationEntity(154U);
    msg.target.assign("AGUZIIYDHJFXLKIGEMEDJDNNKEPFRGRNRMHSBCCJJYAAZVGDRT");
    msg.x = 0.761921128277;
    msg.y = 0.251176626205;
    msg.z = 0.827651617128;
    msg.n = 0.114863578929;
    msg.e = 0.421918021192;
    msg.d = 0.721564822231;
    msg.phi = 0.894210628613;
    msg.theta = 0.525040275964;
    msg.psi = 0.0144629927297;
    msg.accuracy = 0.786882703632;

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
    msg.setTimeStamp(0.537397933265);
    msg.setSource(4903U);
    msg.setSourceEntity(61U);
    msg.setDestination(44125U);
    msg.setDestinationEntity(77U);
    msg.target.assign("JRAISGXVZKAWOLMTDDNTZJGVHSEGGTYPODQNDSUNERPWXGANSHVSIYKQCGOUYCRKUAHUESCOFWPIXBZMCLKJBMZWJJZKRKPUGNRNTRBECDOQYNCXJIWMPLDRRTVFPHHLEGJNPXBVFBKBTBVLAPZLD");
    msg.x = 0.540622920394;
    msg.y = 0.669955973568;
    msg.z = 0.797907795589;
    msg.n = 0.686937937235;
    msg.e = 0.522602390652;
    msg.d = 0.74044914841;
    msg.phi = 0.381462617834;
    msg.theta = 0.949214596708;
    msg.psi = 0.42875738384;
    msg.accuracy = 0.806174951189;

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
    msg.setTimeStamp(0.147013586541);
    msg.setSource(63867U);
    msg.setSourceEntity(1U);
    msg.setDestination(16075U);
    msg.setDestinationEntity(242U);
    msg.target.assign("KYDSMDQLXDTQWBAZQVOLOJEAHGIZHUUGMASZVGKZTKJHKTKWYLJCDFEZATTITAFUFCYIYIQFYTXOFGZANPPWMEDFACANLNGHRSCXKXLEJBHMWVLDWIUNGIBURJMJPRBYBNUKKBHFEZHBRXINGURSJPLHQQHSKJJGCNOSUWNSESZPMEWJIBCRANWOXLNP");
    msg.x = 0.399871643379;
    msg.y = 0.435398268594;
    msg.z = 0.565309707837;
    msg.n = 0.768843071534;
    msg.e = 0.503601902128;
    msg.d = 0.0676773962276;
    msg.phi = 0.744910304747;
    msg.theta = 0.140306911772;
    msg.psi = 0.499661572924;
    msg.accuracy = 0.76251101522;

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
    msg.setTimeStamp(0.68753234135);
    msg.setSource(48078U);
    msg.setSourceEntity(150U);
    msg.setDestination(12169U);
    msg.setDestinationEntity(170U);
    msg.target.assign("NPKVOVMZXIGGARWNHEAZMWURSCJMLAKWQRJQBRIWKELJGMQHPLMAUXQDLCIXVHNQHLUCQTSGJBSPSPYDVNOHMQPAIVXJPEZDCFFSZYGXWSFSLRNUXICGBQFTESIHGZKBFOWHYDBWTPFFELVCUJFXZACOPGTWGPTVLYNFUMKZJVBOUHQEVQHFJXIOBWIOBYJAURTXDEKTDGENJASEXCKBRROBTTZHDKYLY");
    msg.lat = 0.472769237745;
    msg.lon = 0.223049502465;
    msg.z_units = 70U;
    msg.z = 0.838380556435;
    msg.accuracy = 0.922059042676;

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
    msg.setTimeStamp(0.380213584849);
    msg.setSource(55631U);
    msg.setSourceEntity(43U);
    msg.setDestination(35006U);
    msg.setDestinationEntity(16U);
    msg.target.assign("MDJUVNKCLPTFGJBTUONQKOZGWIPRWTCLLSBGAUHWBNFLBUEHYIGOANXAGAJYOTHOJZPYFGDHRXQLZRCMJBFRMFLVWVEUFGGDNZFPBDSFZMRDCKTXFNDEJHPVHNMHLCUSXCCQTTJZIHMDDOTMSWMMZZYXXURPJLEAEOGEPVRRQNKYASKWHBSDISZVCLABYQOQZOXXWESKREBUDIIAAGFC");
    msg.lat = 0.700983067352;
    msg.lon = 0.384617528607;
    msg.z_units = 15U;
    msg.z = 0.915876081866;
    msg.accuracy = 0.0715250983632;

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
    msg.setTimeStamp(0.937583145613);
    msg.setSource(54580U);
    msg.setSourceEntity(175U);
    msg.setDestination(10786U);
    msg.setDestinationEntity(40U);
    msg.target.assign("UAJVXIIYCBGZQXYQRFFKLKNAUHPJVWCWMWWTPSNRXZOYPCOSKUJDDYIITOJFXDTLPXGNAIDABLJZOMMZDSOLSERVHWIGOGXVCMFBBNJATEVUYLREPYQTDQBFYZLPSDYOTJEMOVYUM");
    msg.lat = 0.921058287428;
    msg.lon = 0.432996803171;
    msg.z_units = 139U;
    msg.z = 0.632226754137;
    msg.accuracy = 0.71884149964;

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
    msg.setTimeStamp(0.222302514962);
    msg.setSource(51214U);
    msg.setSourceEntity(25U);
    msg.setDestination(40695U);
    msg.setDestinationEntity(233U);
    msg.name.assign("LREESOUMSILVGRIMTOXZVSCBRLSWIAIGXEMUFWFQJHQATFZMDJEQRUYDRKGEVTHXSCDLYRELDNKVSUDCFUHTVYXGZRLBZEVAPQGYCYPPLGIUBATTIANWKWGYGVNYEPBZHIITBNUNDJWGKSRAFMMQXPFADMZIKQRNEJXZQJWMMCNFBKLQOJXFPCFAXPKLHBSXOXTJWCHLCOZUWOGQPYKUCQHJJPZOOVETSONKJBNOCT");
    msg.lat = 0.673131237374;
    msg.lon = 0.0496588258093;
    msg.z = 0.825530540803;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.655596502143);
    msg.setSource(53770U);
    msg.setSourceEntity(10U);
    msg.setDestination(51424U);
    msg.setDestinationEntity(41U);
    msg.name.assign("KXULATIEPJXIZHFRJTQLXSQFFTDXAGFIPZZDBFRGBSNRBMLCONS");
    msg.lat = 0.343726870833;
    msg.lon = 0.516651848393;
    msg.z = 0.846584935546;
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
    msg.setTimeStamp(0.0551376167729);
    msg.setSource(15398U);
    msg.setSourceEntity(230U);
    msg.setDestination(49457U);
    msg.setDestinationEntity(208U);
    msg.name.assign("WCQRUFVYKEHXROWGJIKPENGTYDVPPZTAWFVAJSGSWNVGLPFAYUOJHCNWBIFALHRHFKCDXAQPEMVLQEWVLBZMWJOUNVGATPVTRQBGLXKXMXRXURMPDNREQFACOBJZURCMTEEMXQMPPJFKOVKBTEKISMMSLDOGYBBAZYHUITNDNUIDFOREHHXUQYQJO");
    msg.lat = 0.684379090393;
    msg.lon = 0.619180043495;
    msg.z = 0.63827294213;
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
    msg.setTimeStamp(0.728784170404);
    msg.setSource(55067U);
    msg.setSourceEntity(53U);
    msg.setDestination(35721U);
    msg.setDestinationEntity(92U);
    msg.op = 79U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YWTCVMBIHIPAMRKQEYCXMESFQKRVHMKYHNSTUDYDXJENUVSLUWTRBLPDJDZFTNICBKLHKCNZZGPQJXQVKXROTVYFJISFWHATQJKANXFXMFMGOTXYEOKRJEXHEELALTWGOQUPEODWMCVLRJYBKGVVLZJGZQHUWUC");
    tmp_msg_0.lat = 0.286893717458;
    tmp_msg_0.lon = 0.0410770836955;
    tmp_msg_0.z = 0.904980937075;
    tmp_msg_0.z_units = 41U;
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
    msg.setTimeStamp(0.373826375347);
    msg.setSource(52309U);
    msg.setSourceEntity(82U);
    msg.setDestination(35293U);
    msg.setDestinationEntity(17U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.475676927477);
    msg.setSource(7583U);
    msg.setSourceEntity(93U);
    msg.setDestination(28477U);
    msg.setDestinationEntity(142U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.741386953615);
    msg.setSource(51803U);
    msg.setSourceEntity(120U);
    msg.setDestination(60307U);
    msg.setDestinationEntity(246U);
    msg.value = 0.706117536969;
    msg.type = 42U;

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
    msg.setTimeStamp(0.849066227478);
    msg.setSource(50887U);
    msg.setSourceEntity(187U);
    msg.setDestination(16746U);
    msg.setDestinationEntity(165U);
    msg.value = 0.440259577564;
    msg.type = 125U;

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
    msg.setTimeStamp(0.00693889023258);
    msg.setSource(37292U);
    msg.setSourceEntity(202U);
    msg.setDestination(42596U);
    msg.setDestinationEntity(14U);
    msg.value = 0.346973219763;
    msg.type = 44U;

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
    msg.setTimeStamp(0.0396737539544);
    msg.setSource(30895U);
    msg.setSourceEntity(137U);
    msg.setDestination(54987U);
    msg.setDestinationEntity(183U);
    msg.value = 0.306527616517;

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
    msg.setTimeStamp(0.460345207002);
    msg.setSource(8201U);
    msg.setSourceEntity(252U);
    msg.setDestination(20422U);
    msg.setDestinationEntity(66U);
    msg.value = 0.300975378477;

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
    msg.setTimeStamp(0.323634005697);
    msg.setSource(45689U);
    msg.setSourceEntity(143U);
    msg.setDestination(64691U);
    msg.setDestinationEntity(7U);
    msg.value = 0.174175178041;

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
    msg.setTimeStamp(0.11070081642);
    msg.setSource(62409U);
    msg.setSourceEntity(142U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(150U);
    msg.timestamp_last_service = 0.149680797285;
    msg.time_next_service = 0.886918909523;
    msg.time_motor_next_service = 0.637186317435;
    msg.time_idle_ground = 0.734206235365;
    msg.time_idle_air = 0.598602620634;
    msg.time_idle_water = 0.644216001825;
    msg.time_idle_underwater = 0.0810161690087;
    msg.time_idle_unknown = 0.801970499769;
    msg.time_motor_ground = 0.937074301973;
    msg.time_motor_air = 0.0735606277415;
    msg.time_motor_water = 0.647627745153;
    msg.time_motor_underwater = 0.371379383666;
    msg.time_motor_unknown = 0.684400397275;
    msg.rpm_min = 5162;
    msg.rpm_max = 25724;
    msg.depth_max = 0.752675125387;

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
    msg.setTimeStamp(0.485379067145);
    msg.setSource(32461U);
    msg.setSourceEntity(64U);
    msg.setDestination(40260U);
    msg.setDestinationEntity(24U);
    msg.timestamp_last_service = 0.826007855852;
    msg.time_next_service = 0.0965889298657;
    msg.time_motor_next_service = 0.647122556012;
    msg.time_idle_ground = 0.253111719526;
    msg.time_idle_air = 0.977257882169;
    msg.time_idle_water = 0.654226575755;
    msg.time_idle_underwater = 0.586037462254;
    msg.time_idle_unknown = 0.0691343020839;
    msg.time_motor_ground = 0.313025784667;
    msg.time_motor_air = 0.498746807332;
    msg.time_motor_water = 0.644294234556;
    msg.time_motor_underwater = 0.122633239753;
    msg.time_motor_unknown = 0.827538774703;
    msg.rpm_min = -18592;
    msg.rpm_max = -29091;
    msg.depth_max = 0.68323883353;

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
    msg.setTimeStamp(0.954047932067);
    msg.setSource(1835U);
    msg.setSourceEntity(107U);
    msg.setDestination(63932U);
    msg.setDestinationEntity(115U);
    msg.timestamp_last_service = 0.0613624373293;
    msg.time_next_service = 0.72420097627;
    msg.time_motor_next_service = 0.202560657697;
    msg.time_idle_ground = 0.333618090609;
    msg.time_idle_air = 0.615223265574;
    msg.time_idle_water = 0.293164197197;
    msg.time_idle_underwater = 0.137629883355;
    msg.time_idle_unknown = 0.963604709733;
    msg.time_motor_ground = 0.401458633815;
    msg.time_motor_air = 0.0724853144859;
    msg.time_motor_water = 0.808815282621;
    msg.time_motor_underwater = 0.409081745335;
    msg.time_motor_unknown = 0.347483333861;
    msg.rpm_min = -5105;
    msg.rpm_max = -20614;
    msg.depth_max = 0.667763003882;

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
    msg.setTimeStamp(0.546869456896);
    msg.setSource(61243U);
    msg.setSourceEntity(80U);
    msg.setDestination(3159U);
    msg.setDestinationEntity(49U);
    msg.severity = 46U;
    msg.text.assign("HIIHDKZQDVXULAEHVYAQTJZOCVRFUMDSUTJDMLFINROBTIIYJGUDJSLNLZKBXCISRBKCWSGHGJWAGUCFKNUACXSNALPAMVSFWFAYOYUHJTPLZMMWOMX");

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
    msg.setTimeStamp(0.701391826275);
    msg.setSource(48386U);
    msg.setSourceEntity(76U);
    msg.setDestination(1051U);
    msg.setDestinationEntity(77U);
    msg.severity = 35U;
    msg.text.assign("AADMJZBJVASKOTUECIELVXLMKOGZCXXRMMYFAQQVPLQNWGQLKIEXSAMLDVFSFWISNOZ");

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
    msg.setTimeStamp(0.975554907641);
    msg.setSource(54880U);
    msg.setSourceEntity(250U);
    msg.setDestination(21574U);
    msg.setDestinationEntity(127U);
    msg.severity = 158U;
    msg.text.assign("FVPTAUMWJPOZILFHLRTBOTXOJNDIXVXCSDRYKBKYOBBTHLXJHVKSIMRXEJ");

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
    msg.setTimeStamp(0.297972922701);
    msg.setSource(38609U);
    msg.setSourceEntity(156U);
    msg.setDestination(17599U);
    msg.setDestinationEntity(90U);
    msg.channel = -44;
    msg.value = 1966730210;
    msg.gain = 67U;

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
    msg.setTimeStamp(0.870652685125);
    msg.setSource(14703U);
    msg.setSourceEntity(102U);
    msg.setDestination(29365U);
    msg.setDestinationEntity(94U);
    msg.channel = 25;
    msg.value = -1953608086;
    msg.gain = 209U;

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
    msg.setTimeStamp(0.000779188607379);
    msg.setSource(45730U);
    msg.setSourceEntity(113U);
    msg.setDestination(40484U);
    msg.setDestinationEntity(59U);
    msg.channel = 49;
    msg.value = 2080131770;
    msg.gain = 203U;

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
    msg.setTimeStamp(0.794246752919);
    msg.setSource(6257U);
    msg.setSourceEntity(133U);
    msg.setDestination(37518U);
    msg.setDestinationEntity(136U);
    msg.ch01 = 0.0535738604353;
    msg.ch02 = 0.224957370645;
    msg.ch03 = 0.788512409336;
    msg.ch04 = 0.237679143525;
    msg.ch05 = 0.455598329487;
    msg.ch06 = 0.546244486411;
    msg.ch07 = 0.392078021247;
    msg.ch08 = 0.155234637563;
    msg.ch09 = 0.576620980633;
    msg.ch10 = 0.510543916251;
    msg.ch11 = 0.849498200559;
    msg.ch12 = 0.337795267604;
    msg.ch13 = 0.611275528839;
    msg.ch14 = 0.543555397103;
    msg.ch15 = 0.68419246704;
    msg.ch16 = 0.817043107407;

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
    msg.setTimeStamp(0.18509185916);
    msg.setSource(64826U);
    msg.setSourceEntity(130U);
    msg.setDestination(14035U);
    msg.setDestinationEntity(150U);
    msg.ch01 = 0.603637615774;
    msg.ch02 = 0.82275233883;
    msg.ch03 = 0.934100120187;
    msg.ch04 = 0.400177771942;
    msg.ch05 = 0.0689262444081;
    msg.ch06 = 0.141300159599;
    msg.ch07 = 0.685695071786;
    msg.ch08 = 0.873906689516;
    msg.ch09 = 0.968793710929;
    msg.ch10 = 0.372857055852;
    msg.ch11 = 0.225622717672;
    msg.ch12 = 0.488488810807;
    msg.ch13 = 0.968348206885;
    msg.ch14 = 0.399051864576;
    msg.ch15 = 0.190904107856;
    msg.ch16 = 0.1074609336;

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
    msg.setTimeStamp(0.902186912858);
    msg.setSource(62355U);
    msg.setSourceEntity(187U);
    msg.setDestination(64848U);
    msg.setDestinationEntity(101U);
    msg.ch01 = 0.292202146098;
    msg.ch02 = 0.23349331459;
    msg.ch03 = 0.530545654228;
    msg.ch04 = 0.208829863994;
    msg.ch05 = 0.644658146224;
    msg.ch06 = 0.639765320757;
    msg.ch07 = 0.508587649717;
    msg.ch08 = 0.199821544773;
    msg.ch09 = 0.550404615625;
    msg.ch10 = 0.722335567963;
    msg.ch11 = 0.375223952741;
    msg.ch12 = 0.0914796427556;
    msg.ch13 = 0.15805152635;
    msg.ch14 = 0.230186571107;
    msg.ch15 = 0.0628377667844;
    msg.ch16 = 0.380795444133;

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
    msg.setTimeStamp(0.366872813025);
    msg.setSource(39484U);
    msg.setSourceEntity(244U);
    msg.setDestination(22857U);
    msg.setDestinationEntity(200U);
    msg.time = 0.733838570977;
    msg.ang = 0.189063572219;

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
    msg.setTimeStamp(0.0206625653437);
    msg.setSource(761U);
    msg.setSourceEntity(178U);
    msg.setDestination(15646U);
    msg.setDestinationEntity(114U);
    msg.time = 0.708992177376;
    msg.ang = 0.462768026582;

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
    msg.setTimeStamp(0.395072432906);
    msg.setSource(42717U);
    msg.setSourceEntity(215U);
    msg.setDestination(63390U);
    msg.setDestinationEntity(203U);
    msg.time = 0.0430519469065;
    msg.ang = 0.0662955600553;

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
    msg.setTimeStamp(0.303108848556);
    msg.setSource(5085U);
    msg.setSourceEntity(163U);
    msg.setDestination(43194U);
    msg.setDestinationEntity(190U);
    msg.value = 0.89991088164;

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
    msg.setTimeStamp(0.108793949234);
    msg.setSource(63081U);
    msg.setSourceEntity(80U);
    msg.setDestination(47711U);
    msg.setDestinationEntity(67U);
    msg.value = 0.851003102472;

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
    msg.setTimeStamp(0.404544660913);
    msg.setSource(49527U);
    msg.setSourceEntity(105U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(226U);
    msg.value = 0.761475535723;

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
    msg.setTimeStamp(0.702932369598);
    msg.setSource(59167U);
    msg.setSourceEntity(18U);
    msg.setDestination(39620U);
    msg.setDestinationEntity(65U);
    msg.value = 0.417660666694;

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
    msg.setTimeStamp(0.948103756637);
    msg.setSource(44261U);
    msg.setSourceEntity(107U);
    msg.setDestination(21092U);
    msg.setDestinationEntity(1U);
    msg.value = 0.18077125817;

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
    msg.setTimeStamp(0.962048166337);
    msg.setSource(3033U);
    msg.setSourceEntity(27U);
    msg.setDestination(62462U);
    msg.setDestinationEntity(214U);
    msg.value = 0.471900409751;

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
    msg.setTimeStamp(0.525879489873);
    msg.setSource(35765U);
    msg.setSourceEntity(175U);
    msg.setDestination(24691U);
    msg.setDestinationEntity(129U);
    msg.value = 0.99547410171;

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
    msg.setTimeStamp(0.205821409678);
    msg.setSource(32630U);
    msg.setSourceEntity(251U);
    msg.setDestination(51213U);
    msg.setDestinationEntity(23U);
    msg.value = 0.568822035203;

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
    msg.setTimeStamp(0.0618002511105);
    msg.setSource(41128U);
    msg.setSourceEntity(227U);
    msg.setDestination(44860U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0461170195459;

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
    msg.setTimeStamp(0.278623754922);
    msg.setSource(16668U);
    msg.setSourceEntity(179U);
    msg.setDestination(27012U);
    msg.setDestinationEntity(27U);
    msg.l2 = 96;
    msg.l3 = -120;
    msg.iridium = -92;
    msg.modem = -38;
    msg.pumps = 61;
    msg.vhf = -31;

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
    msg.setTimeStamp(0.881626799436);
    msg.setSource(42260U);
    msg.setSourceEntity(233U);
    msg.setDestination(29717U);
    msg.setDestinationEntity(227U);
    msg.l2 = 110;
    msg.l3 = 13;
    msg.iridium = 43;
    msg.modem = -54;
    msg.pumps = 32;
    msg.vhf = -43;

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
    msg.setTimeStamp(0.15298310145);
    msg.setSource(57653U);
    msg.setSourceEntity(60U);
    msg.setDestination(51262U);
    msg.setDestinationEntity(130U);
    msg.l2 = -84;
    msg.l3 = 39;
    msg.iridium = -117;
    msg.modem = 64;
    msg.pumps = -85;
    msg.vhf = -43;

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
    msg.setTimeStamp(0.913450808313);
    msg.setSource(1125U);
    msg.setSourceEntity(237U);
    msg.setDestination(65149U);
    msg.setDestinationEntity(1U);
    msg.angle = 0.82214134051;
    msg.reference.assign("FZNGPSSTUQBNWRBCTFHWOJGHVHMUDPSZAQMGYCVLMTBVXSTUQLPXHRYAGCNMWDJBWSXEJTIZRHOVACPFWPXUKVNBICDEUFRIIZFXSYOHGBYJREFIXESOLOHDOCTZFMPDYSOMHEYQDILWNERTKAKKGQYYBUUCUWLZAPUEAQNAJFOJSZRK");
    msg.speed = 0.195615721007;

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
    msg.setTimeStamp(0.0407582640837);
    msg.setSource(43450U);
    msg.setSourceEntity(126U);
    msg.setDestination(58287U);
    msg.setDestinationEntity(251U);
    msg.angle = 0.490738217628;
    msg.reference.assign("SEUEVRFBKQVVPOMDHUCGMCIUVXQXAIAIWTQAFXICWFQDQPTOVVGOFUX");
    msg.speed = 0.132331530793;

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
    msg.setTimeStamp(0.108524399135);
    msg.setSource(29611U);
    msg.setSourceEntity(43U);
    msg.setDestination(59235U);
    msg.setDestinationEntity(15U);
    msg.angle = 0.407464564172;
    msg.reference.assign("HKODPTKYVWUSESYERKKXJWLHEHYARICRNRVQNDIBYHXVQMLENFWQXRIJMVCOCAYULQZZKQPPBCGQUMYDKLHGNKNNUUPCXDCJHHEKXDW");
    msg.speed = 0.450763177557;

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
    msg.setTimeStamp(0.368723304818);
    msg.setSource(50151U);
    msg.setSourceEntity(20U);
    msg.setDestination(31471U);
    msg.setDestinationEntity(238U);
    msg.angle = 0.723106524507;
    msg.speed = 0.392188715354;

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
    msg.setTimeStamp(0.355350603785);
    msg.setSource(18813U);
    msg.setSourceEntity(161U);
    msg.setDestination(38875U);
    msg.setDestinationEntity(36U);
    msg.angle = 0.498781284389;
    msg.speed = 0.353926652678;

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
    msg.setTimeStamp(0.994099554604);
    msg.setSource(36774U);
    msg.setSourceEntity(233U);
    msg.setDestination(52609U);
    msg.setDestinationEntity(226U);
    msg.angle = 0.829146288366;
    msg.speed = 0.671621204282;

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
    msg.setTimeStamp(0.459887070911);
    msg.setSource(49317U);
    msg.setSourceEntity(46U);
    msg.setDestination(17239U);
    msg.setDestinationEntity(22U);
    msg.dir = 0.595235576574;
    msg.speed = 0.86748460022;

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
    msg.setTimeStamp(0.614891280627);
    msg.setSource(28751U);
    msg.setSourceEntity(125U);
    msg.setDestination(39702U);
    msg.setDestinationEntity(56U);
    msg.dir = 0.555394993536;
    msg.speed = 0.537823496051;

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
    msg.setTimeStamp(0.293070803815);
    msg.setSource(13287U);
    msg.setSourceEntity(167U);
    msg.setDestination(41931U);
    msg.setDestinationEntity(219U);
    msg.dir = 0.332822477528;
    msg.speed = 0.78903004591;

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
    msg.setTimeStamp(0.340767860445);
    msg.setSource(59410U);
    msg.setSourceEntity(143U);
    msg.setDestination(49463U);
    msg.setDestinationEntity(7U);
    msg.x = 0.0206175095476;
    msg.y = 0.698689019093;
    msg.z1 = 0.732217545066;
    msg.z2 = 0.77626966509;

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
    msg.setTimeStamp(0.933896485618);
    msg.setSource(34919U);
    msg.setSourceEntity(123U);
    msg.setDestination(56152U);
    msg.setDestinationEntity(252U);
    msg.x = 0.485876579632;
    msg.y = 0.811466307659;
    msg.z1 = 0.570940065974;
    msg.z2 = 0.159699854071;

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
    msg.setTimeStamp(0.166239530311);
    msg.setSource(3330U);
    msg.setSourceEntity(92U);
    msg.setDestination(65067U);
    msg.setDestinationEntity(94U);
    msg.x = 0.913832208136;
    msg.y = 0.567673678269;
    msg.z1 = 0.998383796271;
    msg.z2 = 0.0363668322691;

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
    msg.setTimeStamp(0.52050378076);
    msg.setSource(2585U);
    msg.setSourceEntity(114U);
    msg.setDestination(14729U);
    msg.setDestinationEntity(127U);
    msg.mmsi = 0.241728999729;
    msg.lat = 0.330910732945;
    msg.lon = 0.299921256564;
    msg.x = 0.316519596605;
    msg.y = 0.440456049463;
    msg.speed = 0.315599084614;
    msg.course = 0.253814822031;
    msg.dist = 0.588016919799;
    msg.length = 0.00144158958053;
    msg.width = 0.45107060935;
    msg.o_vect = 0.410817609966;

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
    msg.setTimeStamp(0.583679256599);
    msg.setSource(9421U);
    msg.setSourceEntity(109U);
    msg.setDestination(31289U);
    msg.setDestinationEntity(191U);
    msg.mmsi = 0.107027260729;
    msg.lat = 0.0136459659948;
    msg.lon = 0.416046839362;
    msg.x = 0.694039693047;
    msg.y = 0.542797664995;
    msg.speed = 0.475186123465;
    msg.course = 0.404186498091;
    msg.dist = 0.863861009441;
    msg.length = 0.415813567988;
    msg.width = 0.727479136403;
    msg.o_vect = 0.575259420973;

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
    msg.setTimeStamp(0.586195781401);
    msg.setSource(47882U);
    msg.setSourceEntity(39U);
    msg.setDestination(44974U);
    msg.setDestinationEntity(111U);
    msg.mmsi = 0.220402605551;
    msg.lat = 0.76927680354;
    msg.lon = 0.62945438016;
    msg.x = 0.0740137037204;
    msg.y = 0.0608815952214;
    msg.speed = 0.342391570811;
    msg.course = 0.0360793168213;
    msg.dist = 0.652467301354;
    msg.length = 0.717140049325;
    msg.width = 0.234003995534;
    msg.o_vect = 0.865209613161;

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
    msg.setTimeStamp(0.0899732798868);
    msg.setSource(3483U);
    msg.setSourceEntity(63U);
    msg.setDestination(21371U);
    msg.setDestinationEntity(14U);
    msg.locations.assign("LSRLMYYVEOBKPQIVGDHPBYSATWIVKUJOENYQTEZICLTGLJMMZQQNMUXXJJHEFYEZJOXHRPVDOUWPLFJDVHAYKELDJOIBGBICQVRSRIQLDXFINK");

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
    msg.setTimeStamp(0.958104756193);
    msg.setSource(4154U);
    msg.setSourceEntity(187U);
    msg.setDestination(203U);
    msg.setDestinationEntity(58U);
    msg.locations.assign("VWDXLRROWDFCUDASXZTGXQJSJBSPRUK");

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
    msg.setTimeStamp(0.762393268019);
    msg.setSource(29278U);
    msg.setSourceEntity(58U);
    msg.setDestination(34676U);
    msg.setDestinationEntity(187U);
    msg.locations.assign("TJZPVXCIIUWERYNXCXSGHJUQGBCELAOKZIITRRCIRGDRPATOMHVGZMSDDUHVHWSBVHTVFYYOPKTEYXRFZK");

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
    msg.setTimeStamp(0.0636676677273);
    msg.setSource(29847U);
    msg.setSourceEntity(51U);
    msg.setDestination(48242U);
    msg.setDestinationEntity(107U);
    msg.value = 0.0150560882236;

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
    msg.setTimeStamp(0.453513541743);
    msg.setSource(45683U);
    msg.setSourceEntity(203U);
    msg.setDestination(39367U);
    msg.setDestinationEntity(198U);
    msg.value = 0.95255525847;

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
    msg.setTimeStamp(0.650377221594);
    msg.setSource(30016U);
    msg.setSourceEntity(110U);
    msg.setDestination(48217U);
    msg.setDestinationEntity(164U);
    msg.value = 0.574234221892;

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
    msg.setTimeStamp(0.90151827217);
    msg.setSource(43324U);
    msg.setSourceEntity(87U);
    msg.setDestination(39507U);
    msg.setDestinationEntity(50U);
    msg.beam1 = 0.261163191882;
    msg.beam2 = 0.258884846998;
    msg.beam3 = 0.112215306479;
    msg.beam4 = 0.409565639335;

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
    msg.setTimeStamp(0.340986217864);
    msg.setSource(51368U);
    msg.setSourceEntity(110U);
    msg.setDestination(35988U);
    msg.setDestinationEntity(179U);
    msg.beam1 = 0.61282316995;
    msg.beam2 = 0.184510484318;
    msg.beam3 = 0.552962097451;
    msg.beam4 = 0.709008253427;

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
    msg.setTimeStamp(0.500359154238);
    msg.setSource(12414U);
    msg.setSourceEntity(185U);
    msg.setDestination(55089U);
    msg.setDestinationEntity(140U);
    msg.beam1 = 0.0822761371686;
    msg.beam2 = 0.462939746595;
    msg.beam3 = 0.364143727662;
    msg.beam4 = 0.668631282355;

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
    msg.setTimeStamp(0.571955157596);
    msg.setSource(12858U);
    msg.setSourceEntity(236U);
    msg.setDestination(17298U);
    msg.setDestinationEntity(178U);
    msg.beam1 = 125U;
    msg.beam2 = 100U;
    msg.beam3 = 123U;
    msg.beam4 = 72U;

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
    msg.setTimeStamp(0.0992665776392);
    msg.setSource(57833U);
    msg.setSourceEntity(211U);
    msg.setDestination(43885U);
    msg.setDestinationEntity(254U);
    msg.beam1 = 231U;
    msg.beam2 = 66U;
    msg.beam3 = 224U;
    msg.beam4 = 129U;

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
    msg.setTimeStamp(0.204286487557);
    msg.setSource(63865U);
    msg.setSourceEntity(115U);
    msg.setDestination(49010U);
    msg.setDestinationEntity(6U);
    msg.beam1 = 222U;
    msg.beam2 = 84U;
    msg.beam3 = 65U;
    msg.beam4 = 129U;

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
    msg.setTimeStamp(0.658923962852);
    msg.setSource(7329U);
    msg.setSourceEntity(61U);
    msg.setDestination(59771U);
    msg.setDestinationEntity(228U);
    msg.pos = 0.126415466723;

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
    msg.setTimeStamp(0.614100845668);
    msg.setSource(16310U);
    msg.setSourceEntity(181U);
    msg.setDestination(27699U);
    msg.setDestinationEntity(22U);
    msg.pos = 0.990140077832;

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
    msg.setTimeStamp(0.908371883338);
    msg.setSource(3258U);
    msg.setSourceEntity(142U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(91U);
    msg.pos = 0.798299230459;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.472171127449;
    tmp_msg_0.amp = 0.251440403053;
    tmp_msg_0.cor = 227U;
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
    msg.setTimeStamp(0.708248195097);
    msg.setSource(47340U);
    msg.setSourceEntity(114U);
    msg.setDestination(19346U);
    msg.setDestinationEntity(56U);
    msg.beams = 245U;
    msg.cells = 209U;
    msg.coord_sys = 208U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.0531273594684;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.735407468567;
    tmp_tmp_msg_0_0.amp = 0.489597652294;
    tmp_tmp_msg_0_0.cor = 209U;
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
    msg.setTimeStamp(0.844490688739);
    msg.setSource(34928U);
    msg.setSourceEntity(35U);
    msg.setDestination(25611U);
    msg.setDestinationEntity(26U);
    msg.beams = 70U;
    msg.cells = 7U;
    msg.coord_sys = 227U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.pos = 0.312847258506;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.104495964669;
    tmp_tmp_msg_0_0.amp = 0.805058266058;
    tmp_tmp_msg_0_0.cor = 157U;
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
    msg.setTimeStamp(0.561201802712);
    msg.setSource(61143U);
    msg.setSourceEntity(105U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(80U);
    msg.beams = 201U;
    msg.cells = 244U;
    msg.coord_sys = 115U;

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
    msg.setTimeStamp(0.074710094873);
    msg.setSource(34511U);
    msg.setSourceEntity(149U);
    msg.setDestination(64659U);
    msg.setDestinationEntity(86U);
    msg.vel = 0.227893835645;
    msg.amp = 0.223598304897;
    msg.cor = 63U;

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
    msg.setTimeStamp(0.113574289916);
    msg.setSource(61031U);
    msg.setSourceEntity(96U);
    msg.setDestination(13893U);
    msg.setDestinationEntity(144U);
    msg.vel = 0.94458751003;
    msg.amp = 0.603227208648;
    msg.cor = 132U;

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
    msg.setTimeStamp(0.912044457618);
    msg.setSource(55420U);
    msg.setSourceEntity(173U);
    msg.setDestination(25819U);
    msg.setDestinationEntity(214U);
    msg.vel = 0.605082143236;
    msg.amp = 0.238607148448;
    msg.cor = 23U;

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
    msg.setTimeStamp(0.510553264764);
    msg.setSource(7978U);
    msg.setSourceEntity(63U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(206U);
    msg.serial_no = 790405235U;
    msg.unix_timestamp = 2227175960U;
    msg.millis = 56243U;
    msg.trans_protocol = 19U;
    msg.trans_id = 51449204U;
    msg.trans_data = 34224U;
    msg.snr = 206U;
    msg.trans_freq = 19U;
    msg.recv_mem_addr = 54535U;
    msg.lat = 0.623932524559;
    msg.lon = 0.483876680726;

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
    msg.setTimeStamp(0.317835749257);
    msg.setSource(48563U);
    msg.setSourceEntity(230U);
    msg.setDestination(54710U);
    msg.setDestinationEntity(199U);
    msg.serial_no = 4070037818U;
    msg.unix_timestamp = 3111688451U;
    msg.millis = 16993U;
    msg.trans_protocol = 235U;
    msg.trans_id = 780637419U;
    msg.trans_data = 2825U;
    msg.snr = 180U;
    msg.trans_freq = 135U;
    msg.recv_mem_addr = 64455U;
    msg.lat = 0.263665082472;
    msg.lon = 0.448537509057;

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
    msg.setTimeStamp(0.870164609876);
    msg.setSource(40808U);
    msg.setSourceEntity(150U);
    msg.setDestination(18759U);
    msg.setDestinationEntity(215U);
    msg.serial_no = 2502600723U;
    msg.unix_timestamp = 3309406184U;
    msg.millis = 29910U;
    msg.trans_protocol = 89U;
    msg.trans_id = 3368439434U;
    msg.trans_data = 22174U;
    msg.snr = 178U;
    msg.trans_freq = 251U;
    msg.recv_mem_addr = 30935U;
    msg.lat = 0.242332607242;
    msg.lon = 0.793156342709;

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
    msg.setTimeStamp(0.0868247897972);
    msg.setSource(9356U);
    msg.setSourceEntity(245U);
    msg.setDestination(25470U);
    msg.setDestinationEntity(109U);
    msg.serial_no = 1110550050U;
    msg.unix_timestamp = 3451014848U;
    msg.temperature = 0.310333088025;
    msg.avg_noise_level = 208U;
    msg.peak_noise_level = 31U;
    msg.recv_listen_freq = 22U;
    msg.recv_mem_addr = 45497U;

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
    msg.setTimeStamp(0.63180495725);
    msg.setSource(8381U);
    msg.setSourceEntity(96U);
    msg.setDestination(56030U);
    msg.setDestinationEntity(9U);
    msg.serial_no = 4082687063U;
    msg.unix_timestamp = 1839887846U;
    msg.temperature = 0.548338084685;
    msg.avg_noise_level = 213U;
    msg.peak_noise_level = 66U;
    msg.recv_listen_freq = 211U;
    msg.recv_mem_addr = 60376U;

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
    msg.setTimeStamp(0.0629094125658);
    msg.setSource(7979U);
    msg.setSourceEntity(6U);
    msg.setDestination(41637U);
    msg.setDestinationEntity(19U);
    msg.serial_no = 2484835844U;
    msg.unix_timestamp = 3834697669U;
    msg.temperature = 0.328304690795;
    msg.avg_noise_level = 75U;
    msg.peak_noise_level = 166U;
    msg.recv_listen_freq = 121U;
    msg.recv_mem_addr = 54484U;

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
    msg.setTimeStamp(0.329613262747);
    msg.setSource(41241U);
    msg.setSourceEntity(205U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(14U);
    msg.frequency = 252243320U;
    msg.info.assign("KVNXTHIGLIEDONHEMIZFCTSXAFXKLREAEFGLQMZIWASGNGJQTLQOJBUANWOOTCSAZCJVPOVHBGDPEIF");

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
    msg.setTimeStamp(0.186620091422);
    msg.setSource(64196U);
    msg.setSourceEntity(244U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(230U);
    msg.frequency = 3286400208U;
    msg.info.assign("TJGCSXUOUXELOZNHEYUJNMNTWGOVDXXNYCEEDYKBGTVQBQQFKOHSOAQVQGQIVRWPFIMNJAFYHASUDPGSXCKRWAJDWNTDYTKRFJDWGNWVLMJMXLCEGBNPODEUFMSOXCPPIOHEQIIBNAAHZVKUQMIBPNOAIFUQXQCCVVCSLIZBIVRYHZMFHZTSJKLYLMSJFAIAMKHCZRRYAVBPYDWRRBDXWSL");

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
    msg.setTimeStamp(0.0710938116782);
    msg.setSource(48384U);
    msg.setSourceEntity(20U);
    msg.setDestination(10525U);
    msg.setDestinationEntity(69U);
    msg.frequency = 3361985855U;
    msg.info.assign("BOQSPIOBPWJVDIQMBGHRPUXOUACOYKVURPLUWZNJEMFTPXRTXRURWTQEDMDNLFKPQLIMQAJNYZWAWGQJGDGRLPTWACBBYHKJRYZOPKIIJFDYWCRTIJEOLSKUJAGYCUQQDEKZFHKCDFINBFMGFHNGBVZVCOVVXTHHOXNZECYOSPZDBVIYSDNENZLEAAX");

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
    msg.setTimeStamp(0.862471602635);
    msg.setSource(64011U);
    msg.setSourceEntity(48U);
    msg.setDestination(24063U);
    msg.setDestinationEntity(62U);
    msg.adcp = 44;
    msg.adcp_dur = 1257519315U;
    msg.adcp_fr = 2479777558U;
    msg.ctd = 7;
    msg.ctd_dur = 1510072117U;
    msg.ctd_fr = 573192163U;
    msg.opt = 49;
    msg.opt_dur = 2155816362U;
    msg.opt_fr = 1790364764U;
    msg.tbl = 103;
    msg.tbl_dur = 290731255U;
    msg.tbl_fr = 1675549307U;
    msg.eco = 3;
    msg.eco_dur = 1880229822U;
    msg.eco_fr = 2526264251U;
    msg.par = -122;
    msg.par_dur = 2933287885U;
    msg.par_fr = 2536574972U;

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
    msg.setTimeStamp(0.109443335018);
    msg.setSource(7077U);
    msg.setSourceEntity(87U);
    msg.setDestination(61530U);
    msg.setDestinationEntity(141U);
    msg.adcp = 124;
    msg.adcp_dur = 2335911795U;
    msg.adcp_fr = 1836384361U;
    msg.ctd = 108;
    msg.ctd_dur = 199839850U;
    msg.ctd_fr = 1480724617U;
    msg.opt = -61;
    msg.opt_dur = 4030997964U;
    msg.opt_fr = 31525457U;
    msg.tbl = -15;
    msg.tbl_dur = 3091723743U;
    msg.tbl_fr = 3667581941U;
    msg.eco = 64;
    msg.eco_dur = 1446673808U;
    msg.eco_fr = 2505245744U;
    msg.par = 126;
    msg.par_dur = 171587233U;
    msg.par_fr = 156666185U;

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
    msg.setTimeStamp(0.491834549506);
    msg.setSource(34218U);
    msg.setSourceEntity(76U);
    msg.setDestination(31098U);
    msg.setDestinationEntity(197U);
    msg.adcp = 8;
    msg.adcp_dur = 3683619478U;
    msg.adcp_fr = 946233098U;
    msg.ctd = 104;
    msg.ctd_dur = 446472488U;
    msg.ctd_fr = 2545522800U;
    msg.opt = 119;
    msg.opt_dur = 3302881532U;
    msg.opt_fr = 741142913U;
    msg.tbl = -4;
    msg.tbl_dur = 409080190U;
    msg.tbl_fr = 2208735035U;
    msg.eco = -52;
    msg.eco_dur = 894971203U;
    msg.eco_fr = 676919682U;
    msg.par = -88;
    msg.par_dur = 15066738U;
    msg.par_fr = 4076637781U;

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
    msg.setTimeStamp(0.420667478169);
    msg.setSource(9933U);
    msg.setSourceEntity(146U);
    msg.setDestination(61435U);
    msg.setDestinationEntity(190U);
    msg.adcp = 92;
    msg.adcp_dur = 4007993378U;
    msg.adcp_fr = 3159675524U;
    msg.ctd = 78;
    msg.ctd_dur = 3141630662U;
    msg.ctd_fr = 3598423138U;
    msg.opt = -105;
    msg.opt_dur = 1702917516U;
    msg.opt_fr = 3740001971U;
    msg.tbl = 48;
    msg.tbl_dur = 1982526786U;
    msg.tbl_fr = 2757252672U;
    msg.eco = 74;
    msg.eco_dur = 1959199488U;
    msg.eco_fr = 644743636U;
    msg.par = -54;
    msg.par_dur = 3898969810U;
    msg.par_fr = 3902174020U;

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
    msg.setTimeStamp(0.876572180836);
    msg.setSource(4125U);
    msg.setSourceEntity(69U);
    msg.setDestination(46762U);
    msg.setDestinationEntity(92U);
    msg.adcp = -90;
    msg.adcp_dur = 2798787930U;
    msg.adcp_fr = 3831863387U;
    msg.ctd = 62;
    msg.ctd_dur = 2050747888U;
    msg.ctd_fr = 3307112599U;
    msg.opt = 81;
    msg.opt_dur = 1251331982U;
    msg.opt_fr = 1388788934U;
    msg.tbl = 58;
    msg.tbl_dur = 2939194141U;
    msg.tbl_fr = 842039303U;
    msg.eco = 102;
    msg.eco_dur = 710117271U;
    msg.eco_fr = 712342052U;
    msg.par = 36;
    msg.par_dur = 3765086986U;
    msg.par_fr = 3728139315U;

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
    msg.setTimeStamp(0.390358764638);
    msg.setSource(54345U);
    msg.setSourceEntity(16U);
    msg.setDestination(33588U);
    msg.setDestinationEntity(204U);
    msg.adcp = -77;
    msg.adcp_dur = 512389711U;
    msg.adcp_fr = 106802740U;
    msg.ctd = -26;
    msg.ctd_dur = 3219743247U;
    msg.ctd_fr = 1922038053U;
    msg.opt = 35;
    msg.opt_dur = 2853045952U;
    msg.opt_fr = 2418367050U;
    msg.tbl = -121;
    msg.tbl_dur = 1496148152U;
    msg.tbl_fr = 1349769985U;
    msg.eco = -124;
    msg.eco_dur = 2969081141U;
    msg.eco_fr = 3376545564U;
    msg.par = -121;
    msg.par_dur = 4111170653U;
    msg.par_fr = 177264097U;

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
    msg.setTimeStamp(0.143978037269);
    msg.setSource(57822U);
    msg.setSourceEntity(159U);
    msg.setDestination(48617U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6070770483;

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
    msg.setTimeStamp(0.954922233482);
    msg.setSource(59347U);
    msg.setSourceEntity(72U);
    msg.setDestination(36620U);
    msg.setDestinationEntity(213U);
    msg.value = 0.266984782003;

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
    msg.setTimeStamp(0.605933023969);
    msg.setSource(19921U);
    msg.setSourceEntity(148U);
    msg.setDestination(6908U);
    msg.setDestinationEntity(83U);
    msg.value = 0.995053660254;

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
    msg.setTimeStamp(0.852884102797);
    msg.setSource(64233U);
    msg.setSourceEntity(114U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.21145843593;
    msg.lon = 0.753504837043;
    msg.depth.assign("BPHNWVIMUGFFACYEMIEQZCINZEARXCGQKBBNCXVEGOKFGXLXDLTLRUFOFCGPYYLSWKTQSSJHHQPBDEBURKVQSYZTIUVBKHQILCMPVMFLMRNWRBSLVWAQDK");
    msg.vel.assign("HNMJUEUAESRBNKOFGAYJLRSWKGHHDBYWFHKDQOOOYNLIOUFBZNQVQWBHEQMUXQOKSVFQTIBXWYTISXRVYFJLSJNGG");
    msg.dir.assign("UEYDFLNLDZLILAVECRPDOGNNMHXOUBLGQIOWTLORHYTXB");

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
    msg.setTimeStamp(0.384205363128);
    msg.setSource(4131U);
    msg.setSourceEntity(80U);
    msg.setDestination(64374U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.754102659438;
    msg.lon = 0.0277991951217;
    msg.depth.assign("IHTEXRATAOMWJUVDYTGRDLZMQHYZFFPIFDQPPSBWFFMKTQJIOUDNGGNXWVZRUFYNRCWVJKNKKWCMBTIEOROCNFAPPLVSJRTUBJIFCNHDGAPZEVZILWXBBQJYLEHAKSOTAMHYWLKABXUPHGMHNONJOSDITHHKNWVKXFXYPXKQUJRGCSBTBULXGPSUJOCAMZU");
    msg.vel.assign("TCSIKJNCIYHDPXKRCWHBCMQJGQGADOUPFGRYYVIFEXGQFJY");
    msg.dir.assign("JZZAVFDOFIIGRRIOPF");

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
    msg.setTimeStamp(0.983008006212);
    msg.setSource(61U);
    msg.setSourceEntity(240U);
    msg.setDestination(26590U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.105295981978;
    msg.lon = 0.698874822873;
    msg.depth.assign("XQLDNTVEJVUQGWRHJLACYEGBDKRURWWUTFZQKJMMGTJJGQFEEHDFTVRSCJWYSYIKPNUYVLKMWBXVJXCZQYOZBGENWNZFOVUODDHDVZAMUJNMEECULKEKGRTWCHLASAELCAPBXLITQSLOIGFRQTM");
    msg.vel.assign("YCAJBKNJBSWYMNBSUYIXXVNEDSDWYGUPFNMLHLQGIJVEMHEEOTEGWNSFLODDPXRSQIEABCBIGRUPUIKQSXLCXGCLXVKROAVZCGWPERASMEUPTCVFDCJSZKAXOKGFGTKYXJNONVFQMOGHAQVIHZWGZLUDMXYSBUFDDQWLFVWMJHZPIAHRDY");
    msg.dir.assign("WMACYBBTHITQGWRPNSAIFAJLPXMICILDALBOWQVOIMZOGCRREXIXVKGLEFPUXRGNTWJRHZMDYRUNYLBGZSMFONSNVJUPRCITYXQYCSAUIQJCSKOPZZNHTGLHVUUVDVEAJGBHFMJSDENYKVOEXTTCOEJWKZPXJWEEFXQBDHKKMVSKHZODRWASVMWKUCIDEFNLDGNHKYLVHBRMUECRYDAZTMJQTGTXIZLBAWDQQJQWLGFPXSHOSN");

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
    msg.setTimeStamp(0.360865076708);
    msg.setSource(37913U);
    msg.setSourceEntity(46U);
    msg.setDestination(24493U);
    msg.setDestinationEntity(73U);
    msg.source.assign("UDWJRESNQJCYOHMCPABBBZASMKNMFZJLOQRXFJQZNGLJHTHHKUTDSJAKUGNLOXBIXXKDWUHYBEQSPEQLKNFXUFNGPUVZBOIIHWJMQNIANEBWOEAVRFNQVBHSGXMETRPACCFRLDQLZKOCZIRUXKKTAXFMQGVOADDWEUVWHLHWVUAIEUJIVFDBCXTYZIMGSRYHTZPVPXLGYROGWKODWPJPBYNJCZLARKTEMIQFMM");
    msg.lat = 0.43009607413;
    msg.lon = 0.84023526135;
    msg.sog = 0.541980127521;
    msg.uc = 0.910627508329;
    msg.depth = 0.788397987826;
    msg.value = 0.399355527835;

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
    msg.setTimeStamp(0.276501049527);
    msg.setSource(49855U);
    msg.setSourceEntity(150U);
    msg.setDestination(23502U);
    msg.setDestinationEntity(206U);
    msg.source.assign("JYAGICGAJNTAXAULSSRSIHPEGZRQZMVPNSZTWMNKQLEUOKPABSWREZBRFYDPPLTXLZUBSIXTCMAGYMVUJNUUPWSPIENWXHNODMZQJTRFWRFUOZLKDWNHQCOMGQEDTKVERSZIOIWXMVFYXJOLHXLIYO");
    msg.lat = 0.0927103406685;
    msg.lon = 0.3508728728;
    msg.sog = 0.261090792282;
    msg.uc = 0.877766352683;
    msg.depth = 0.58966212109;
    msg.value = 0.197650671936;

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
    msg.setTimeStamp(0.440379720119);
    msg.setSource(477U);
    msg.setSourceEntity(10U);
    msg.setDestination(37498U);
    msg.setDestinationEntity(138U);
    msg.source.assign("NICSRUNIUOZWGSOWHPTIPHSHWPZRXJXKWTAROYVTZZIPMSMYZGZPWSEBEBBYWKUDOBWGFMHEOLHCJYLTGRVVECDTREIAXIFFBVHEMZDJJAVCOSXWDIAOZYSKTQTRFDIXLWGLNXBRGKMQQNSUPBCYPJTLUUNGVRMAUUGCJBNRNLTFALKVJJPMUFHZQHINQFZJCC");
    msg.lat = 0.409364300686;
    msg.lon = 0.533046508811;
    msg.sog = 0.178677153899;
    msg.uc = 0.544904408572;
    msg.depth = 0.566994530263;
    msg.value = 0.70014022085;

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
    msg.setTimeStamp(0.312569573716);
    msg.setSource(16070U);
    msg.setSourceEntity(77U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(42U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.995304673165;
    tmp_msg_0.x = 0.173257766072;
    tmp_msg_0.y = 0.541914065673;
    tmp_msg_0.z = 0.40991779015;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.81590674856;
    tmp_msg_1.x = 0.239837100474;
    tmp_msg_1.y = 0.331557100983;
    tmp_msg_1.z = 0.364565521525;
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
    msg.setTimeStamp(0.585643941574);
    msg.setSource(47833U);
    msg.setSourceEntity(132U);
    msg.setDestination(10514U);
    msg.setDestinationEntity(32U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.309801001039;
    tmp_msg_0.x = 0.881691688102;
    tmp_msg_0.y = 0.10181228117;
    tmp_msg_0.z = 0.224032019559;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.127728189664;
    tmp_msg_1.x = 0.990055827082;
    tmp_msg_1.y = 0.261701468449;
    tmp_msg_1.z = 0.346807210419;
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
    msg.setTimeStamp(0.464194199611);
    msg.setSource(61531U);
    msg.setSourceEntity(209U);
    msg.setDestination(38588U);
    msg.setDestinationEntity(221U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.183486028776;
    tmp_msg_0.x = 0.68358660309;
    tmp_msg_0.y = 0.709742777355;
    tmp_msg_0.z = 0.878502495265;
    msg.acceleration.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.0717618899537;
    tmp_msg_1.x = 0.673415525006;
    tmp_msg_1.y = 0.610939378587;
    tmp_msg_1.z = 0.927344010195;
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

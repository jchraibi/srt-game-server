//
//  Server.cpp
//  CMSTest
//
//  Created by Roddie Kieley on 12-11-12.
//  Copyright (c) 2012 Roddie Kieley. All rights reserved.
//

#include "Server.h"
#include "../Shared/SimpleAsyncConsumer.h"
#include "../Shared/SimpleAsyncProducer.h"
#include "World.h"
#include "Heartbeat.h"
#include "../Proto/box2d.pb.h"
#include "Security.h"
#include "../Game/Player.h"
#include "UserData.h"
#include "Messenger.h"
#include "Poco/Delegate.h"
#include "decaf/util/Timer.h"
#include "decaf/lang/Thread.h"
#include "decaf/lang/Runnable.h"
#include "decaf/util/concurrent/CountDownLatch.h"
#include "activemq/core/ActiveMQConnectionFactory.h"
#include "activemq/core/ActiveMQConnection.h"
#include "activemq/transport/DefaultTransportListener.h"
#include "activemq/library/ActiveMQCPP.h"
#include "decaf/lang/Integer.h"
#include "activemq/util/Config.h"
#include "decaf/util/Date.h"
#include "cms/Connection.h"
#include "cms/Session.h"
#include "cms/TextMessage.h"
#include "cms/BytesMessage.h"
#include "cms/MapMessage.h"
#include "cms/ExceptionListener.h"
#include "cms/MessageListener.h"
#include "decaf/net/URI.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <assert.h>

using namespace activemq;
using namespace activemq::core;
using namespace activemq::transport;
using namespace decaf::lang;
using namespace decaf::util::concurrent;
using namespace cms;
using namespace std;
using namespace box2d;


// Constructor(s)
Server::Server() :
    m_pHeartbeatProducer(NULL),
    m_pCommandConsumer(NULL),
    m_pWorld(NULL),
    m_pTimer(NULL),
    m_pHeartbeat(NULL),
    m_pInput(NULL),
    m_pSecurity(NULL),
    m_pMainThread(NULL)
{
    Setup();
}

// Destructor(s)
Server::~Server()
{
    Teardown();
}

// Helper(s)
void Server::Setup()
{
//    std::string     strHeartbeatURI = "HEARTBEAT";
//    std::string     strInputURI = "CLIENT.INPUT";
//    std::string     strBrokerURI = "tcp://127.0.0.1:61613?wireFormat=stomp";
//    std::string     strMainThreadName = "MainThread";
    
    ///"failover:(tcp://127.0.0.1:61616"
    //        "?wireFormat=openwire"
    //        "&connection.useAsyncSend=true"
    //        "&transport.commandTracingEnabled=true"
    //        "&transport.tcpTracingEnabled=true"
    //        "&wireFormat.tightEncodingEnabled=true"
    ///")";
    
    std::cout << "Server::Setup()..." << std::endl;
    
    Messenger::Setup();
    
    m_pWorld = new World();
    m_pInput = new Input();
    m_pSecurity = new Security();
    //m_pTimer = new decaf::util::Timer();

    //m_pHeartbeatProducer = new SimpleProducer(strBrokerURI, strHeartbeatURI, true);
    //m_pHeartbeat = new Heartbeat();

    //Heartbeat::EventPublisher.BeatEvent += Poco::Delegate<Server, const int&>(this, &Server::OnHeartBeatBeat);
    
//    std::cout << "Starting the world producer" << std::endl;
//    m_pMainThread = new decaf::lang::Thread(this, strMainThreadName);
//    m_pMainThread->start();
}

void Server::Teardown()
{
    std::cout << "Teardown()..." << std::endl;
    
//    delete m_pMainThread;
//    m_pMainThread = NULL;
    
    //Heartbeat::EventPublisher.BeatEvent -= Poco::Delegate<Server, const int&>(this, &Server::OnHeartBeatBeat);

    //m_pTimer->cancel();
    //delete m_pHeartbeat;
    //m_pHeartbeat = NULL;

    //m_pHeartbeatProducer->close();
    //delete m_pHeartbeatProducer;
    //m_pHeartbeatProducer = NULL;
    
    //delete m_pTimer;
    //m_pTimer = NULL;
    
    delete m_pSecurity;
    m_pSecurity = NULL;
    
    delete m_pInput;
    m_pInput = NULL;

    //m_pCommandConsumer->close();
    //delete m_pCommandConsumer;
    //m_pCommandConsumer = NULL;

    delete m_pWorld;
    m_pWorld = NULL;
    
    Messenger::Teardown();
}

// Method(s)
void Server::run()
{
    // Receive incoming user commands
    //std::cout << "Starting the m_pCommandConsumer" << std::endl;
    //m_pCommandConsumer->runConsumer();
    
    // Run simulation step
    //std::cout << "Starting the world simulation" << std::endl;
    //m_pB2DWorldThread->start();
    
    // Check game rules
    
    // Update all object states
    
    //  if any client needs a world update
    // take world snapshot
    // Update clients if required
    //Messenger::Send();
    
    //std::cout << "Starting the heartbeat" << std::endl;
    //m_pTimer->schedule(m_pHeartbeat, 0, 1000);
}

// Heartbeat Event response
void Server::OnHeartBeatBeat(const void* pSender, const int& iBeat)
{
    static char m_szBuf[0xFF];
    static std::string strText = "";
    
    try
    {
        memset(m_szBuf, 0, sizeof(m_szBuf));
        sprintf(m_szBuf, "%i", iBeat);
        //printf("%s\n", m_szBuf);
        strText = m_szBuf;
        
        m_pHeartbeatProducer->Send(strText);
        strText.clear();
    }
    catch ( CMSException& e )
    {
        e.printStackTrace();
    }
}
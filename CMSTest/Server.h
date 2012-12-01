//
//  Server.h
//  CMSTest
//
//  Created by Roddie Kieley on 12-11-12.
//  Copyright (c) 2012 Roddie Kieley. All rights reserved.
//

#ifndef __CMSTest__Server__
#define __CMSTest__Server__

#include "decaf/util/StlQueue.h"
//#include "decaf/lang/Thread.h"
//#include "decaf/util/Timer.h"
#include "B2DWorld.h"
#include "Heartbeat.h"
#include "Addressbook.h"
#include "addressbook.pb.h"
#include "../../ThirdParty/box2d/Box2D/Box2D/Box2D.h"
#include <string>


namespace decaf
{
    namespace lang
    {
        class Thread;        
    }
    namespace util
    {
        class Timer;
    }
}
class SimpleProducer;
class SimpleAsyncConsumer;
//class Heartbeat;
//class B2DWorld;

using namespace decaf::lang;
using namespace decaf::util;


class Server :
    public B2DWorld::ICallbacks,
    public Heartbeat::ICallbacks,
    public Addressbook::ICallbacks
{
// Class
private:
    
protected:

public:
    static StlQueue<std::string>      s_ProducerQueue;
    static StlQueue<std::string>      s_ConsumerQueue;
    
// Instance
private:
    
protected:
    SimpleProducer*         m_pSimulationProducer;
    SimpleProducer*         m_pHeartbeatProducer;
    SimpleProducer*         m_pAddressbookProducer;
    Thread*                 m_pB2DWorldThread;
    SimpleAsyncConsumer*    m_pCommandConsumer;
    B2DWorld*               m_pB2DWorld;
    Timer*                  m_pTimer;
    Timer*                  m_ptAddressbook;
    Heartbeat*              m_pHeartbeat;
    Addressbook*            m_pAddressbook;
    
    
    // Helper(s)
    void Setup();
    void Teardown();
    
public:
    // Constructor(s)
    Server();
    
    // Destructor(s)
    ~Server();
    
    // Method(s)
    void Run();
    
    
    // B2DWorld::ICallbacks implementation
    void OnB2DWorldUpdate(b2Vec2& b2vNewPosition, float32& fNewAngle);
    
    // Heartbeat::ICallbacks implementation
    void OnBeat(int iBeat);
    
    // Addressbook::ICallbacks implementation
    void OnPerson(tutorial::Person* person);
};

#endif /* defined(__CMSTest__Server__) */

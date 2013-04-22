//
//  Player.cpp
//  CMSTest
//
//  Created by Roddie Kieley on 12-12-15.
//  Copyright (c) 2012 Roddie Kieley. All rights reserved.
//

#include "Player.h"
#include "Bullet.h"
#include "B2DWorld.h"

#include "World.h"
#include "Timer.h"
#include "UserData.h"
#include "B2DWorld_BuildT.h"
#include "../Shared/MakeT.h"
#include <assert.h>

Player::_Publisher          Player::Publisher;
uint32_t                    Player::s_ui32Count = 1;


// Constructor(s)
/*
 Player::_Publisher::_Publisher()
 {
 
 }
 */

// Destructor
/*
 Player::_Publisher::~_Publisher()
 {
 
 }
 */

// Method(s)
void Player::_Publisher::OnPlayerCreated(std::string& strUUID)
{
    ICallbacks* pObjToCallback = NULL;
    
    //m_listSubscribersSwap = m_listSubscribers;
    Clone(m_listSubscribersSwap);
    while(!m_listSubscribersSwap.empty())
    {
        pObjToCallback = m_listSubscribersSwap.front();
        m_listSubscribersSwap.pop_front();
        assert(pObjToCallback);
        pObjToCallback->OnPlayerCreated(strUUID);
    }
}

void Player::_Publisher::OnPlayerDestroyed(std::string& strUUID)
{
    ICallbacks* pObjToCallback = NULL;
    
    //m_listSubscribersSwap = m_listSubscribers;
    Clone(m_listSubscribersSwap);
    while(!m_listSubscribersSwap.empty())
    {
        pObjToCallback = m_listSubscribersSwap.front();
        m_listSubscribersSwap.pop_front();
        assert(pObjToCallback);
        pObjToCallback->OnPlayerDestroyed(strUUID);
    }
}


// Constructor(s)
Player::Player(const std::string& strUUID) :
    //m_pB2DWorld(pB2DWorld),
    m_pBulletTimer(NULL),
    AEntity(strUUID, (uint64_t)MakeT<uint64_t>((uint32_t)AEntity::POD, s_ui32Count))
{
    assert(World::m_pB2DWorld);
    
    ++s_ui32Count;
    
    m_pBulletTimer = new Rock2D::Timer(1000);
    CreatePod();
    
    Publisher.OnPlayerCreated(m_strUUID);
    
    Input::Publisher.Attach(this);
}

// Destructor(s)
Player::~Player()
{
    Input::Publisher.Detach(this);

    Publisher.OnPlayerDestroyed(m_strUUID);
    
    World::m_pB2DWorld->world->DestroyBody(m_pb2bPod);
    m_pb2bPod = NULL;
    
    delete m_pBulletTimer;
    m_pBulletTimer = NULL;
}

void Player::CreatePod()
{
//    b2BodyDef       bodyDef;
//    b2PolygonShape  dynamicBox;
//    b2CircleShape   aB2CircleShape;
//    b2FixtureDef    fixtureDef;
//    
//	// Define the dynamic body. We set its position
//	bodyDef.type = b2_dynamicBody;
//	bodyDef.position.Set(0.0f, 0.0f);
//
//    // Set the size of our shape
//	aB2CircleShape.m_radius = 1.0f;
//
//    // Set the fixture and use the shape
//    fixtureDef.density = 1.0f;
//	fixtureDef.friction = 0.3f;
//    fixtureDef.restitution = 0.3f;
//    fixtureDef.filter.groupIndex = -2;    
//    fixtureDef.shape = &aB2CircleShape;
//    
//    UserData* pUserData = new UserData(m_ui64Tag, m_strUUID);
//    
//    // call the body factory.
//    m_pb2bPod = World::m_pB2DWorld->world->CreateBody(&bodyDef);
//	m_pb2bPod->CreateFixture(&fixtureDef);
//    m_pb2bPod->SetUserData(pUserData);

    UserData* pUserData = new UserData(m_ui64Tag, m_strUUID);
    B2DWorld::_BuildT<Player>::B2DPod(this, &Player::ReceivePod, pUserData);
}

void Player::ReceivePod(b2Body* pb2bPod)
{
    assert(pb2bPod);
    
    m_pb2bPod = pb2bPod;
}

// Method(s)
void Player::Update()
{
    Rock2D::Timer::Update();
    
    m_b2v2MoveQueue.lock();
    while (!(m_b2v2MoveQueue.empty()))
    {
        b2Vec2 ab2Vec2Move = m_b2v2MoveQueue.pop();
        ab2Vec2Move.x *= 50.0f;
        ab2Vec2Move.y *= 50.0f;
        m_pb2bPod->ApplyForceToCenter(ab2Vec2Move, true);
    }
    m_b2v2MoveQueue.unlock();
    
    Bullet* pBullet = NULL;
    m_b2v2ShootQueue.lock();
    while (!(m_b2v2ShootQueue.empty()))
    {
        b2Vec2 ab2v2Shoot = m_b2v2ShootQueue.pop();
        if (m_pBulletTimer->Status() == Rock2D::Timer::EXPIRED)
        {
            std::cout << "Creating Bullet" << std::endl;
            pBullet = new Bullet(m_strUUID, m_pb2bPod->GetPosition(), ab2v2Shoot);
            m_pBulletTimer->Restart();
        }
    }
    m_b2v2ShootQueue.unlock();
}

bool Player::ThisUUIDIsAMatch(const std::string& strUUID)
{
    if (strUUID == m_strUUID)
    {
        return true;
    }
    return false;
}

// Input::ICallbacks implementation
void Player::OnDualStick(const std::string& strUUID, const box2d::PbVec2& pbv2Move, const box2d::PbVec2& pbv2Shoot)
{
    if (strUUID != m_strUUID)
    {
        return;
    }
    b2Vec2 b2v2Move;
    b2Vec2 b2v2Shoot;
    
    b2v2Move.x = pbv2Move.x();
    b2v2Move.y = pbv2Move.y();
    b2v2Shoot.x = pbv2Shoot.x();
    b2v2Shoot.y = pbv2Shoot.y();
    
    m_b2v2MoveQueue.lock();
    m_b2v2MoveQueue.push(b2v2Move);
    m_b2v2MoveQueue.unlock();

    if (((b2v2Shoot.x < 0.0f) || (b2v2Shoot.x > 0.0f)) ||
        ((b2v2Shoot.y < 0.0f) || (b2v2Shoot.y > 0.0f)))
    {
        m_b2v2ShootQueue.lock();
        m_b2v2ShootQueue.push(b2v2Shoot);
        m_b2v2ShootQueue.unlock();
    }
}

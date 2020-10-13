//   Copyright 2020 Roddie Kieley
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.

#include "EntityGameEventFactory.h"
#include <assert.h>


// Constructor
EntityGameEvent_Dependencies::
EntityGameEvent_Dependencies(const EntityGameEventBuffer_EntityGameEventBufferType& anEntityGameEventBufferType, AEntity*& pEntity) :
    m_anEntityGameEventBufferType(anEntityGameEventBufferType),
    m_pEntity(pEntity)
{
    assert(m_pEntity);
}

// Destructor
EntityGameEvent_Dependencies::
~EntityGameEvent_Dependencies()
{
    
}


//EntityGameEvent* EntityGameEventFactory::Create(EntityGameEvent_Dependencies& anEntityGameEvent_Dependencies)
//{
//    EntityGameEvent* pEntityGameEvent = NULL;
//    
//    CreatedEvent(this, pEntityGameEvent);
//    return pEntityGameEvent;
//}

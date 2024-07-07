#include "CEntity.h"

CEntity::CEntity() : EntityID(-1)
{
}

CEntity::CEntity(int entityid) : EntityID(entityid)
{
}

int CEntity::GetEntityID()
{
    return this->EntityID;
}

#if defined RUNTIME_SETTABLE_ID
void CEntity::SetEntityID(int entityid)
{
    this->EntityID = entityid;
}
#endif

CEntity::~CEntity()
{
}


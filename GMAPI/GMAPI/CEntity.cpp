#include "CEntity.h"

CEntity::CEntity() : EntityID(-1)
{
    DEBUG_FUNC_CLASS();
}

CEntity::CEntity(int entityid) : EntityID(entityid)
{
    DEBUG_FUNC_CLASS();
}

int CEntity::GetEntityID()
{
    DEBUG_FUNC_CLASS();
    return this->EntityID;
}

#if defined RUNTIME_SETABLE_ID
void CEntity::SetEntityID(int entityid)
{
    DEBUG_FUNC_CLASS();
    this->EntityID = entityid;
}
#endif

CEntity::~CEntity()
{
    DEBUG_FUNC_CLASS();
}


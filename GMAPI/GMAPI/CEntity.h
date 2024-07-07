#pragma once

#include <string>

class CEntity
{
protected:
	int EntityID;
public:
	CEntity();
	CEntity(int entityid);
	int GetEntityID();
#if defined RUNTIME_SETABLE_ID
	void SetEntityID(int entityid);
#endif
	~CEntity();
public:
#if defined RUNTIME_SETABLE_MODEL
	virtual void		SetModel(int modelid) = 0;
#endif
#if defined RUNTIME_SETABLE_NAME
	virtual void		SetName(const std::string& name) = 0;
#endif
#if defined RUNTIME_SETABLE_HEALTH
	virtual void		SetHealth(float fHealth) = 0;
#endif
#if defined RUNTIME_GETABLE_HEALTH
	virtual float		GetHealth() = 0;
#endif
	virtual int			GetModel()	= 0;
	virtual std::string GetName() = 0;

};


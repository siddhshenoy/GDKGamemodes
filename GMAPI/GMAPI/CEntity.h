#pragma once

#include <string>

class CEntity
{
private:
	int EntityID;
public:
	CEntity();
	CEntity(int entityid);
	int GetEntityID();
#if defined RUNTIME_SETTABLE_ID
	void SetEntityID(int entityid);
#endif
	~CEntity();
public:
#if defined RUNTIME_SETTABLE_MODEL
	virtual void		SetModel(int modelid) = 0;
#endif
#if defined RUNTIME_SETTABLE_NAME
	virtual void		SetName(const std::string& name) = 0;
#endif
	virtual int			GetModel()	= 0;
	virtual std::string GetName() = 0;

};


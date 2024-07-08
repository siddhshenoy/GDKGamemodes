#pragma once

#define		RUNTIME_SETABLE_MODEL
#define		RUNTIME_SETABLE_NAME
#define		RUNTIME_SETABLE_HEALTH
#define		RUNTIME_GETABLE_HEALTH

#include <sampgdk/sampgdk.h>
#include <GMAPI/GMAPI/Macros/DebuggingMacros.h>
#include <GMAPI/GMAPI/CEntity.h>
#include <GMAPI/GMAPI/CPoolManager.h>



class CPlayer : public CEntity
{
public:
	CPlayer();
	CPlayer(int playerid);
	void Message(int color, const std::string& message);
	void SetArmour(float fArmour);
	float GetArmour();
	~CPlayer();
public:
	// Inherited via CEntity
	virtual int GetModel() override;
	virtual void SetModel(int modelid) override;////
	virtual std::string GetName() override;
	virtual void SetName(const std::string& name) override;
	virtual void SetHealth(float fHealth) override;
	virtual float GetHealth() override;

};


#pragma once

#include <map>

#include <GMAPI/GMAPI/Macros/DebuggingMacros.h>

// =================================================================================
//	ABSTRACT CLASSES
// =================================================================================

class CPlayer;

class CPoolManager
{
private:
	std::map<int, CPlayer*> PlayerPool;
public:
	CPoolManager();
	void		AddPlayerToPool(int playerid, CPlayer* playerptr);
	CPlayer*	GetPlayerFromPool(int playerid);
	void		RemovePlayerFromPool(int playerid);
	bool		IsPlayerInPool(int playerid);
	void		UnintializePlayerPool();
	~CPoolManager();
public:
	static CPoolManager* gInstance;
	static CPoolManager* GetInstance();
};


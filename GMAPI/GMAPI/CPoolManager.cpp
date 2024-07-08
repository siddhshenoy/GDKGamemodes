#include "CPoolManager.h"

// Static Functions

CPoolManager* CPoolManager::gInstance = nullptr;

CPoolManager* CPoolManager::GetInstance()
{
	if (CPoolManager::gInstance == nullptr) CPoolManager::gInstance = new CPoolManager();
	return CPoolManager::gInstance;
}

// Local Functions

CPoolManager::CPoolManager()
{
	DEBUG_FUNC_CLASS();
}

void CPoolManager::AddPlayerToPool(int playerid, CPlayer* playerptr)
{
	DEBUG_FUNC_CLASS();
	if (this->PlayerPool.find(playerid) == this->PlayerPool.end()) {
		this->PlayerPool.insert(
			std::pair<int, CPlayer*>(playerid, playerptr)
		);
	}
}

CPlayer* CPoolManager::GetPlayerFromPool(int playerid)
{
	DEBUG_FUNC_CLASS();
	return (this->IsPlayerInPool(playerid) ? this->PlayerPool[playerid] : nullptr);
}

void CPoolManager::RemovePlayerFromPool(int playerid)
{
	DEBUG_FUNC_CLASS();
	if (this->PlayerPool.find(playerid) != this->PlayerPool.end()) {
		this->PlayerPool.erase(playerid);
	}
}

bool CPoolManager::IsPlayerInPool(int playerid)
{
	DEBUG_FUNC_CLASS();
	return (this->PlayerPool.find(playerid) != this->PlayerPool.end());
}
void CPoolManager::UnintializePlayerPool()
{
	DEBUG_FUNC_CLASS();
	for (
		std::map<int, CPlayer*>::const_iterator player_pool_it = this->PlayerPool.begin();
		player_pool_it != this->PlayerPool.end();
		player_pool_it++
	)
	{
		delete player_pool_it->second;
	}
}

CPoolManager::~CPoolManager()
{
	DEBUG_FUNC_CLASS();
	this->UnintializePlayerPool();
}

#include "CPlayer.h"

CPlayer::CPlayer() : CEntity(-1)
{
	DEBUG_FUNC_CLASS();
}

CPlayer::CPlayer(int playerid) : CEntity(playerid)
{
	DEBUG_FUNC_CLASS();
	CPoolManager::GetInstance()->AddPlayerToPool(playerid, this);
}

CPlayer::~CPlayer()
{
	DEBUG_FUNC_CLASS();
	if (this->EntityID != -1) {
		CPoolManager::GetInstance()->RemovePlayerFromPool(this->EntityID);
	}
}

void CPlayer::Message(int color, const std::string& message)
{
	DEBUG_FUNC_CLASS();
	SendClientMessage(this->EntityID, color, message.c_str());
}

void CPlayer::SetArmour(float fArmour)
{
	DEBUG_FUNC_CLASS();
	SetPlayerArmour(this->EntityID, fArmour);
}

float CPlayer::GetArmour()
{
	DEBUG_FUNC_CLASS();
	float fArmour;
	GetPlayerArmour(this->EntityID, &fArmour);
	return fArmour;
}

int CPlayer::GetVehicleSeat()
{
	DEBUG_FUNC_CLASS();
	return GetPlayerVehicleSeat(this->EntityID);
}

void CPlayer::ToggleControllable(bool toggle)
{
	DEBUG_FUNC_CLASS();
	TogglePlayerControllable(this->EntityID, toggle);
}

void CPlayer::RemoveFromVehicle()
{
	DEBUG_FUNC_CLASS();
	RemovePlayerFromVehicle(this->EntityID);
}

int CPlayer::GetModel()
{
	DEBUG_FUNC_CLASS();
	return GetPlayerSkin(this->EntityID);
}

void CPlayer::SetModel(int modelid)
{
	DEBUG_FUNC_CLASS();
	SetPlayerSkin(this->EntityID, modelid);
}

void CPlayer::SetName(const std::string& name)
{
	DEBUG_FUNC_CLASS();
	SetPlayerName(this->EntityID, name.c_str());
}


std::string CPlayer::GetName()
{
	DEBUG_FUNC_CLASS();
	char pName[MAX_PLAYER_NAME];
	GetPlayerName(this->EntityID, pName, sizeof(pName));
	return std::string(pName);
}

void CPlayer::SetHealth(float fHealth)
{
	DEBUG_FUNC_CLASS();
	SetPlayerHealth(this->EntityID, fHealth);
}

float CPlayer::GetHealth()
{
	DEBUG_FUNC_CLASS();
	float fHealth;
	GetPlayerHealth(this->EntityID, &fHealth);
	return fHealth;
}

void CPlayer::SetInterior(int interior)
{
	DEBUG_FUNC_CLASS();
	SetPlayerInterior(this->EntityID, interior);
}

int CPlayer::GetInterior()
{
	DEBUG_FUNC_CLASS();
	return GetPlayerInterior(this->EntityID);
}

void CPlayer::SetWorld(int world)
{
	DEBUG_FUNC_CLASS();
	SetPlayerVirtualWorld(this->EntityID, world);
}

int CPlayer::GetWorld()
{
	DEBUG_FUNC_CLASS();
	return GetPlayerVirtualWorld(this->EntityID);
}



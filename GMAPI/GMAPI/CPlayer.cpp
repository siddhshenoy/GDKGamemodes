#include "CPlayer.h"

CPlayer::CPlayer() : CEntity(-1)
{
}

CPlayer::CPlayer(int playerid) : CEntity(playerid)
{
	CPoolManager::GetInstance()->AddPlayerToPool(playerid, this);
}

CPlayer::~CPlayer()
{
	if (this->EntityID != -1) {
		CPoolManager::GetInstance()->RemovePlayerFromPool(this->EntityID);
	}
}

void CPlayer::Message(int color, const std::string& message)
{
	SendClientMessage(this->EntityID, color, message.c_str());
}

void CPlayer::SetArmour(float fArmour)
{
	SetPlayerArmour(this->EntityID, fArmour);
}

float CPlayer::GetArmour()
{
	float fArmour;
	GetPlayerArmour(this->EntityID, &fArmour);
	return fArmour;
}

int CPlayer::GetModel()
{
	return GetPlayerSkin(this->EntityID);
}

void CPlayer::SetModel(int modelid)
{
	SetPlayerSkin(this->EntityID, modelid);
}

void CPlayer::SetName(const std::string& name)
{
	SetPlayerName(this->EntityID, name.c_str());
}


std::string CPlayer::GetName()
{
	char pName[MAX_PLAYER_NAME];
	GetPlayerName(this->EntityID, pName, sizeof(pName));
	return std::string(pName);
}

void CPlayer::SetHealth(float fHealth)
{
	SetPlayerHealth(this->EntityID, fHealth);
}

float CPlayer::GetHealth()
{
	float fHealth;
	GetPlayerHealth(this->EntityID, &fHealth);
	return fHealth;
}



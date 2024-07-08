#include "Gamemode.h"
void IGamemode::SetApiGamemode()
{
	IGamemode::gGamemodePtr = new SanAndreasRoleplay::Gamemode();
}

bool SanAndreasRoleplay::Gamemode::OnActorStreamIn(int actorid, int forplayerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnActorStreamOut(int actorid, int forplayerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnDialogResponse(int playerid, int dialogid, int response, int listitem, const char* inputtext)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnEnterExitModShop(int playerid, bool enterexit, int interiorid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnGameModeExit()
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnGameModeInit()
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnIncomingConnection(int playerid, const char* ip_address, int port)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnObjectMoved(int objectid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerClickMap(int playerid, float fX, float fY, float fZ)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerClickPlayer(int playerid, int clickedplayerid, int source)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerClickPlayerTextDraw(int playerid, int playertextid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerClickTextDraw(int playerid, int clickedid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerCommandText(int playerid, const char* cmdtext)
{
	std::string sCmdText = std::string(cmdtext);
	if (sCmdText == "/god") {
		CPlayer* PlayerPtr = CPoolManager::GetInstance()->GetPlayerFromPool(playerid);
		if (PlayerPtr != nullptr) {
			PlayerPtr->SetHealth(999999999.0f);
		}
		return true;
	}
	if (sCmdText == "/heal") {
		CPlayer* PlayerPtr = CPoolManager::GetInstance()->GetPlayerFromPool(playerid);
		if (PlayerPtr != nullptr) {
			PlayerPtr->SetHealth(100.0f);
		}
		return true;
	}
	if (sCmdText == "/kill") {
		CPlayer* PlayerPtr = CPoolManager::GetInstance()->GetPlayerFromPool(playerid);
		if (PlayerPtr != nullptr) {
			PlayerPtr->SetHealth(0.0f);
		}
		return true;
	}
	if (sCmdText == "/givearmor") {
		CPlayer* PlayerPtr = CPoolManager::GetInstance()->GetPlayerFromPool(playerid);
		if (PlayerPtr != nullptr) {
			PlayerPtr->SetArmour(100.0f);
		}
		return true;
	}
	if (sCmdText == "/removearmor") {
		CPlayer* PlayerPtr = CPoolManager::GetInstance()->GetPlayerFromPool(playerid);
		if (PlayerPtr != nullptr) {
			PlayerPtr->SetArmour(0.0f);
		}
		return true;
	}
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerConnect(int playerid)
{
	CPoolManager::GetInstance()->GetPlayerFromPool(playerid)->Message(0x22AA22FF, "Welcome to the server");
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerDeath(int playerid, int killerid, int reason)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerDisconnect(int playerid, int reason)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerEditObject(int playerid, bool playerobject, int objectid, int response, float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerEnterCheckpoint(int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerEnterRaceCheckpoint(int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerEnterVehicle(int playerid, int vehicle, bool ispassenger)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerExitedMenu(int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerExitVehicle(int playerid, int vehicleid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid, int bodypart)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerGiveDamageActor(int playerid, int damaged_actorid, float amount, int weaponid, int bodypart)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerLeaveCheckpoint(int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerLeaveRaceCheckpoint(int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerObjectMoved(int playerid, int objectid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerPickUpPickup(int playerid, int pickupid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerRequestClass(int playerid, int classid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerRequestDownload(int playerid, int type, int crc)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerRequestSpawn(int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerSelectedMenuRow(int playerid, int row)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerSpawn(int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerStateChange(int playerid, int newstate, int oldstate)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerStreamIn(int playerid, int forplayerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerStreamOut(int playerid, int forplayerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid, int bodypart)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerText(int playerid, const char* text)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerUpdate(int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnPlayerWeaponShot(int playerid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnRconCommand(const char* cmd)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnRconLoginAttempt(const char* ip, const char* password, bool success)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnTrailerUpdate(int playerid, int vehicleid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat, float new_x, float new_y, float new_z, float vel_x, float vel_y, float vel_z)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehicleDamageStatusUpdate(int vehicleid, int playerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehicleDeath(int vehicleid, int killerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehicleMod(int playerid, int vehicleid, int componentid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehicleRespray(int playerid, int vehicleid, int color1, int color2)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehicleSirenStateChange(int playerid, int vehicleid, int newstate)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehicleSpawn(int vehicleid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehicleStreamIn(int vehicleid, int forplayerid)
{
	return false;
}

bool SanAndreasRoleplay::Gamemode::OnVehicleStreamOut(int vehicleid, int forplayerid)
{
	return false;
}

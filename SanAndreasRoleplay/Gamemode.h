#pragma once

#include <GMAPI/GMAPI/IGamemode.h>

#include <GMAPI/GMAPI/CPlayer.h>

using namespace GMAPI;

namespace SanAndreasRoleplay {
	class Gamemode : public IGamemode
	{
	public:
		Gamemode() {}
		~Gamemode() {}
	public:
		bool OnActorStreamIn(int actorid, int forplayerid)
		{
			return true;
		}
		bool OnActorStreamOut(int actorid, int forplayerid)
		{
			return true;
		}
		bool OnDialogResponse(int playerid, int dialogid, int response, int listitem, const char* inputtext)
		{
			return true;
		}
		bool OnEnterExitModShop(int playerid, bool enterexit, int interiorid)
		{
			return true;
		}
		bool OnGameModeExit()
		{
			return true;
		}
		bool OnGameModeInit()
		{
			sampgdk::logprintf("Calling San Andreas roleplay");
			return true;
		}
		bool OnIncomingConnection(int playerid, const char* ip_address, int port)
		{
			return true;
		}
		bool OnObjectMoved(int objectid)
		{
			return true;
		}
		bool OnPlayerClickMap(int playerid, float fX, float fY, float fZ)
		{
			return true;
		}
		bool OnPlayerClickPlayer(int playerid, int clickedplayerid, int source)
		{
			return true;
		}
		bool OnPlayerClickPlayerTextDraw(int playerid, int playertextid)
		{
			return true;
		}
		bool OnPlayerClickTextDraw(int playerid, int clickedid)
		{
			return true;
		}
		bool OnPlayerCommandText(int playerid, const char* cmdtext)
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
		bool OnPlayerConnect(int playerid)
		{
			CPoolManager::GetInstance()->GetPlayerFromPool(playerid)->Message(0x22AA22FF, "Welcome to the server");
			return true;
		}
		bool OnPlayerDeath(int playerid, int killerid, int reason)
		{
			return true;
		}
		bool OnPlayerDisconnect(int playerid, int reason)
		{
			return true;
		}
		bool OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ)
		{
			return true;
		}
		bool OnPlayerEditObject(int playerid, bool playerobject, int objectid, int response, float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ)
		{
			return true;
		}
		bool OnPlayerEnterCheckpoint(int playerid)
		{
			return true;
		}
		bool OnPlayerEnterRaceCheckpoint(int playerid)
		{
			return true;
		}
		bool OnPlayerEnterVehicle(int playerid, int vehicle, bool ispassenger)
		{
			return true;
		}
		bool OnPlayerExitedMenu(int playerid)
		{
			return true;
		}
		bool OnPlayerExitVehicle(int playerid, int vehicleid)
		{
			return true;
		}
		bool OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid, int bodypart)
		{
			return true;
		}
		bool OnPlayerGiveDamageActor(int playerid, int damaged_actorid, float amount, int weaponid, int bodypart)
		{
			return true;
		}
		bool OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid)
		{
			return true;
		}
		bool OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys)
		{
			return true;
		}
		bool OnPlayerLeaveCheckpoint(int playerid)
		{
			return true;
		}
		bool OnPlayerLeaveRaceCheckpoint(int playerid)
		{
			return true;
		}
		bool OnPlayerObjectMoved(int playerid, int objectid)
		{
			return true;
		}
		bool OnPlayerPickUpPickup(int playerid, int pickupid)
		{
			return true;
		}
		bool OnPlayerRequestClass(int playerid, int classid)
		{
			return true;
		}
		bool OnPlayerRequestDownload(int playerid, int type, int crc)
		{
			return true;
		}
		bool OnPlayerRequestSpawn(int playerid)
		{
			return true;
		}
		bool OnPlayerSelectedMenuRow(int playerid, int row)
		{
			return true;
		}
		bool OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ)
		{
			return true;
		}
		bool OnPlayerSpawn(int playerid)
		{
			return true;
		}
		bool OnPlayerStateChange(int playerid, int newstate, int oldstate)
		{
			return true;
		}
		bool OnPlayerStreamIn(int playerid, int forplayerid)
		{
			return true;
		}
		bool OnPlayerStreamOut(int playerid, int forplayerid)
		{
			return true;
		}
		bool OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid, int bodypart)
		{
			return true;
		}
		bool OnPlayerText(int playerid, const char* text)
		{
			return true;
		}
		bool OnPlayerUpdate(int playerid)
		{
			return true;
		}
		bool OnPlayerWeaponShot(int playerid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ)
		{
			return true;
		}
		bool OnRconCommand(const char* cmd)
		{
			return true;
		}
		bool OnRconLoginAttempt(const char* ip, const char* password, bool success)
		{
			return true;
		}
		bool OnTrailerUpdate(int playerid, int vehicleid)
		{
			return true;
		}
		bool OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat, float new_x, float new_y, float new_z, float vel_x, float vel_y, float vel_z)
		{
			return true;
		}
		bool OnVehicleDamageStatusUpdate(int vehicleid, int playerid)
		{
			return true;
		}
		bool OnVehicleDeath(int vehicleid, int killerid)
		{
			return true;
		}
		bool OnVehicleMod(int playerid, int vehicleid, int componentid)
		{
			return true;
		}
		bool OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid)
		{
			return true;
		}
		bool OnVehicleRespray(int playerid, int vehicleid, int color1, int color2)
		{
			return true;
		}
		bool OnVehicleSirenStateChange(int playerid, int vehicleid, int newstate)
		{
			return true;
		}
		bool OnVehicleSpawn(int vehicleid)
		{
			return true;
		}
		bool OnVehicleStreamIn(int vehicleid, int forplayerid)
		{
			return true;
		}
		bool OnVehicleStreamOut(int vehicleid, int forplayerid)
		{
			return true;
		}

};
}

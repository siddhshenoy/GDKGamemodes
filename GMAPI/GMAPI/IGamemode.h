#pragma once

#include <sampgdk/sampgdk.h>
namespace GMAPI {
	class IGamemode
	{
	public:
		static IGamemode* gGamemodePtr;
		static void SetApiGamemode();
		static IGamemode* GetGamemode();
	public:
		virtual bool OnActorStreamIn(int actorid, int forplayerid) = 0;
		virtual bool OnActorStreamOut(int actorid, int forplayerid) = 0;
		virtual bool OnDialogResponse(int playerid, int dialogid, int response, int listitem, const char* inputtext) = 0;
		virtual bool OnEnterExitModShop(int playerid, bool enterexit, int interiorid) = 0;
		virtual bool OnGameModeExit() = 0;
		virtual bool OnGameModeInit() = 0;
		virtual bool OnIncomingConnection(int playerid, const char* ip_address, int port) = 0;
		virtual bool OnObjectMoved(int objectid) = 0;
		virtual bool OnPlayerClickMap(int playerid, float fX, float fY, float fZ) = 0;
		virtual bool OnPlayerClickPlayer(int playerid, int clickedplayerid, int source) = 0;
		virtual bool OnPlayerClickPlayerTextDraw(int playerid, int playertextid) = 0;
		virtual bool OnPlayerClickTextDraw(int playerid, int clickedid) = 0;
		virtual bool OnPlayerCommandText(int playerid, const char* cmdtext) = 0;
		virtual bool OnPlayerConnect(int playerid) = 0;
		virtual bool OnPlayerDeath(int playerid, int killerid, int reason) = 0;
		virtual bool OnPlayerDisconnect(int playerid, int reason) = 0;
		virtual bool OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ) = 0;
		virtual bool OnPlayerEditObject(int playerid, bool playerobject, int objectid, int response, float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ) = 0;
		virtual bool OnPlayerEnterCheckpoint(int playerid) = 0;
		virtual bool OnPlayerEnterRaceCheckpoint(int playerid) = 0;
		virtual bool OnPlayerEnterVehicle(int playerid, int vehicle, bool ispassenger) = 0;
		virtual bool OnPlayerExitedMenu(int playerid) = 0;
		virtual bool OnPlayerExitVehicle(int playerid, int vehicleid) = 0;
		virtual bool OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid, int bodypart) = 0;
		virtual bool OnPlayerGiveDamageActor(int playerid, int damaged_actorid, float amount, int weaponid, int bodypart) = 0;
		virtual bool OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid) = 0;
		virtual bool OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys) = 0;
		virtual bool OnPlayerLeaveCheckpoint(int playerid) = 0;
		virtual bool OnPlayerLeaveRaceCheckpoint(int playerid) = 0;
		virtual bool OnPlayerObjectMoved(int playerid, int objectid) = 0;
		virtual bool OnPlayerPickUpPickup(int playerid, int pickupid) = 0;
		virtual bool OnPlayerRequestClass(int playerid, int classid) = 0;
		virtual bool OnPlayerRequestDownload(int playerid, int type, int crc) = 0;
		virtual bool OnPlayerRequestSpawn(int playerid) = 0;
		virtual bool OnPlayerSelectedMenuRow(int playerid, int row) = 0;
		virtual bool OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ) = 0;
		virtual bool OnPlayerSpawn(int playerid) = 0;
		virtual bool OnPlayerStateChange(int playerid, int newstate, int oldstate) = 0;
		virtual bool OnPlayerStreamIn(int playerid, int forplayerid) = 0;
		virtual bool OnPlayerStreamOut(int playerid, int forplayerid) = 0;
		virtual bool OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid, int bodypart) = 0;
		virtual bool OnPlayerText(int playerid, const char* text) = 0;
		virtual bool OnPlayerUpdate(int playerid) = 0;
		virtual bool OnPlayerWeaponShot(int playerid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ) = 0;
		virtual bool OnRconCommand(const char* cmd) = 0;
		virtual bool OnRconLoginAttempt(const char* ip, const char* password, bool success) = 0;
		virtual bool OnTrailerUpdate(int playerid, int vehicleid) = 0;
		virtual bool OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat, float new_x, float new_y, float new_z, float vel_x, float vel_y, float vel_z) = 0;
		virtual bool OnVehicleDamageStatusUpdate(int vehicleid, int playerid) = 0;
		virtual bool OnVehicleDeath(int vehicleid, int killerid) = 0;
		virtual bool OnVehicleMod(int playerid, int vehicleid, int componentid) = 0;
		virtual bool OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid) = 0;
		virtual bool OnVehicleRespray(int playerid, int vehicleid, int color1, int color2) = 0;
		virtual bool OnVehicleSirenStateChange(int playerid, int vehicleid, int newstate) = 0;
		virtual bool OnVehicleSpawn(int vehicleid) = 0;
		virtual bool OnVehicleStreamIn(int vehicleid, int forplayerid) = 0;
		virtual bool OnVehicleStreamOut(int vehicleid, int forplayerid) = 0;
	};

}
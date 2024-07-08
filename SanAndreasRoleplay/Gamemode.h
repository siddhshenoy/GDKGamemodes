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
	

			// Inherited via IGamemode
			virtual bool OnActorStreamIn(int actorid, int forplayerid) override;

			virtual bool OnActorStreamOut(int actorid, int forplayerid) override;

			virtual bool OnDialogResponse(int playerid, int dialogid, int response, int listitem, const char* inputtext) override;

			virtual bool OnEnterExitModShop(int playerid, bool enterexit, int interiorid) override;

			virtual bool OnGameModeExit() override;

			virtual bool OnGameModeInit() override;

			virtual bool OnIncomingConnection(int playerid, const char* ip_address, int port) override;

			virtual bool OnObjectMoved(int objectid) override;

			virtual bool OnPlayerClickMap(int playerid, float fX, float fY, float fZ) override;

			virtual bool OnPlayerClickPlayer(int playerid, int clickedplayerid, int source) override;

			virtual bool OnPlayerClickPlayerTextDraw(int playerid, int playertextid) override;

			virtual bool OnPlayerClickTextDraw(int playerid, int clickedid) override;

			virtual bool OnPlayerCommandText(int playerid, const char* cmdtext) override;

			virtual bool OnPlayerConnect(int playerid) override;

			virtual bool OnPlayerDeath(int playerid, int killerid, int reason) override;

			virtual bool OnPlayerDisconnect(int playerid, int reason) override;

			virtual bool OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ) override;

			virtual bool OnPlayerEditObject(int playerid, bool playerobject, int objectid, int response, float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ) override;

			virtual bool OnPlayerEnterCheckpoint(int playerid) override;

			virtual bool OnPlayerEnterRaceCheckpoint(int playerid) override;

			virtual bool OnPlayerEnterVehicle(int playerid, int vehicle, bool ispassenger) override;

			virtual bool OnPlayerExitedMenu(int playerid) override;

			virtual bool OnPlayerExitVehicle(int playerid, int vehicleid) override;

			virtual bool OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid, int bodypart) override;

			virtual bool OnPlayerGiveDamageActor(int playerid, int damaged_actorid, float amount, int weaponid, int bodypart) override;

			virtual bool OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid) override;

			virtual bool OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys) override;

			virtual bool OnPlayerLeaveCheckpoint(int playerid) override;

			virtual bool OnPlayerLeaveRaceCheckpoint(int playerid) override;

			virtual bool OnPlayerObjectMoved(int playerid, int objectid) override;

			virtual bool OnPlayerPickUpPickup(int playerid, int pickupid) override;

			virtual bool OnPlayerRequestClass(int playerid, int classid) override;

			virtual bool OnPlayerRequestDownload(int playerid, int type, int crc) override;

			virtual bool OnPlayerRequestSpawn(int playerid) override;

			virtual bool OnPlayerSelectedMenuRow(int playerid, int row) override;

			virtual bool OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ) override;

			virtual bool OnPlayerSpawn(int playerid) override;

			virtual bool OnPlayerStateChange(int playerid, int newstate, int oldstate) override;

			virtual bool OnPlayerStreamIn(int playerid, int forplayerid) override;

			virtual bool OnPlayerStreamOut(int playerid, int forplayerid) override;

			virtual bool OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid, int bodypart) override;

			virtual bool OnPlayerText(int playerid, const char* text) override;

			virtual bool OnPlayerUpdate(int playerid) override;

			virtual bool OnPlayerWeaponShot(int playerid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ) override;

			virtual bool OnRconCommand(const char* cmd) override;

			virtual bool OnRconLoginAttempt(const char* ip, const char* password, bool success) override;

			virtual bool OnTrailerUpdate(int playerid, int vehicleid) override;

			virtual bool OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat, float new_x, float new_y, float new_z, float vel_x, float vel_y, float vel_z) override;

			virtual bool OnVehicleDamageStatusUpdate(int vehicleid, int playerid) override;

			virtual bool OnVehicleDeath(int vehicleid, int killerid) override;

			virtual bool OnVehicleMod(int playerid, int vehicleid, int componentid) override;

			virtual bool OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid) override;

			virtual bool OnVehicleRespray(int playerid, int vehicleid, int color1, int color2) override;

			virtual bool OnVehicleSirenStateChange(int playerid, int vehicleid, int newstate) override;

			virtual bool OnVehicleSpawn(int vehicleid) override;

			virtual bool OnVehicleStreamIn(int vehicleid, int forplayerid) override;

			virtual bool OnVehicleStreamOut(int vehicleid, int forplayerid) override;

};
}

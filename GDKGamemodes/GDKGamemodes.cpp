#include <stdio.h>
#include <string.h>

#include <sampgdk.h>
#include <GMAPI/GMAPI/CPoolManager.h>
#include <GMAPI/GMAPI/CPlayer.h>

#include <SanAndreasRoleplay/Gamemode.h>

PLUGIN_EXPORT bool PLUGIN_CALL OnActorStreamIn(int actorid, int forplayerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnActorStreamOut(int actorid, int forplayerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnDialogResponse(int playerid, int dialogid, int response, int listitem, const char* inputtext) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnEnterExitModShop(int playerid, bool enterexit, int interiorid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnGameModeExit() {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnGameModeInit() {
    IGamemode::SetApiGamemode();
    sampgdk::logprintf("GDK Gamemodes loaded...");
    return IGamemode::GetGamemode()->OnGameModeInit();
}
PLUGIN_EXPORT bool PLUGIN_CALL OnIncomingConnection(int playerid, const char* ip_address, int port) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnObjectMoved(int objectid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerClickMap(int playerid, float fX, float fY, float fZ) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerClickPlayer(int playerid, int clickedplayerid, int source) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerClickPlayerTextDraw(int playerid, int playertextid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerClickTextDraw(int playerid, int clickedid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerCommandText(int playerid, const char* cmdtext) {
    return IGamemode::GetGamemode()->OnPlayerCommandText(playerid, cmdtext);
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerConnect(int playerid) {
    //Intiailize the CPlayer memory for player
    CPlayer* PlayerPtr = new CPlayer(playerid);
    return IGamemode::GetGamemode()->OnPlayerConnect(playerid);
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerDeath(int playerid, int killerid, int reason) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerDisconnect(int playerid, int reason) {
    //Get the player pointer from memory
    CPlayer* PlayerPtr = CPoolManager::GetInstance()->GetPlayerFromPool(playerid);
    bool result = IGamemode::GetGamemode()->OnPlayerDisconnect(playerid, reason);
    //Delete the structure in memory, internally causing it to be unallocated
    delete PlayerPtr;
    return result;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerEditAttachedObject(int playerid, int response, int index, int modelid, int boneid, float fOffsetX, float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, float fScaleY, float fScaleZ) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerEditObject(int playerid, bool playerobject, int objectid, int response, float fX, float fY, float fZ, float fRotX, float fRotY, float fRotZ) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerEnterCheckpoint(int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerEnterRaceCheckpoint(int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerEnterVehicle(int playerid, int vehicleid, bool ispassenger) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerExitedMenu(int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerExitVehicle(int playerid, int vehicleid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerGiveDamage(int playerid, int damagedid, float amount, int weaponid, int bodypart) {

    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerGiveDamageActor(int playerid, int damaged_actorid, float amount, int weaponid, int bodypart) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerInteriorChange(int playerid, int newinteriorid, int oldinteriorid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerKeyStateChange(int playerid, int newkeys, int oldkeys) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerLeaveCheckpoint(int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerLeaveRaceCheckpoint(int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerObjectMoved(int playerid, int objectid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerPickUpPickup(int playerid, int pickupid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerRequestClass(int playerid, int classid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerRequestDownload(int playerid, int type, int crc) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerRequestSpawn(int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerSelectedMenuRow(int playerid, int row) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerSelectObject(int playerid, int type, int objectid, int modelid, float fX, float fY, float fZ) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerSpawn(int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerStateChange(int playerid, int newstate, int oldstate) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerStreamIn(int playerid, int forplayerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerStreamOut(int playerid, int forplayerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerTakeDamage(int playerid, int issuerid, float amount, int weaponid, int bodypart) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerText(int playerid, const char* text) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerUpdate(int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerWeaponShot(int playerid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnRconCommand(const char* cmd) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnRconLoginAttempt(const char* ip, const char* password, bool success) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnTrailerUpdate(int playerid, int vehicleid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnUnoccupiedVehicleUpdate(int vehicleid, int playerid, int passenger_seat, float new_x, float new_y, float new_z, float vel_x, float vel_y, float vel_z) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehicleDamageStatusUpdate(int vehicleid, int playerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehicleDeath(int vehicleid, int killerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehicleMod(int playerid, int vehicleid, int componentid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehiclePaintjob(int playerid, int vehicleid, int paintjobid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehicleRespray(int playerid, int vehicleid, int color1, int color2) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehicleSirenStateChange(int playerid, int vehicleid, int newstate) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehicleSpawn(int vehicleid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehicleStreamIn(int vehicleid, int forplayerid) {
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnVehicleStreamOut(int vehicleid, int forplayerid) {
    return true;
}
PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() {
    return sampgdk::Supports() | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void** ppData) {
    return sampgdk::Load(ppData);
}

PLUGIN_EXPORT void PLUGIN_CALL Unload() {
    sampgdk::Unload();
}

PLUGIN_EXPORT void PLUGIN_CALL ProcessTick() {
    sampgdk::ProcessTick();
}
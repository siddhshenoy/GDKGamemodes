#include "Gamemode.h"
void IGamemode::SetApiGamemode()
{
	IGamemode::gGamemodePtr = new SanAndreasRoleplay::Gamemode();
}


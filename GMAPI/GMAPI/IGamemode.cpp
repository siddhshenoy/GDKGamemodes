#include "IGamemode.h"

using namespace GMAPI;

IGamemode* IGamemode::gGamemodePtr = nullptr;

IGamemode* IGamemode::GetGamemode()
{
	return IGamemode::gGamemodePtr;
}
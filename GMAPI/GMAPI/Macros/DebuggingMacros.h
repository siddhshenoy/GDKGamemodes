#pragma once

#include <sampgdk/sampgdk.h>

#if defined	DEBUGGING_ENABLED

#define			DEBUG_FUNC()	\
					sampgdk::logprintf("DEBUG_FUNC: %s", __FUNCTION__)

#define			DEBUG_FUNC_CLASS()	\
					sampgdk::logprintf("DEBUG_FUNC: %x : %s", this, __FUNCTION__)

#else

#define			DEBUG_FUNC()

#define			DEBUG_FUNC_CLASS()


#endif
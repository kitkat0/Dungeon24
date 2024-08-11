#pragma once
#include "Includes.h"

uintptr_t fnGetAyncKeyStateAddr = 0;
using GetAsyncKeyState_t = __int64(__fastcall*)(unsigned int);
__int64 steam_keybind(unsigned int key)
{
    auto fnGetAyncKeyState = (GetAsyncKeyState_t)fnGetAyncKeyStateAddr;
	return fnGetAyncKeyState(key);
}

static inline bool isValidPtr(const void* p)
{
    return p && p >= (const void*)0x10000 && p < (const void*)0x000F000000000000;
}

bool IsValid(const SDK::UObject* Object)
{
    if (!isValidPtr(Object)) return false;

    return Object->Class &&
        Object->Flags != SDK::EObjectFlags::TagGarbageTemp &&
        Object->Flags != SDK::EObjectFlags::WillBeLoaded &&
        Object->Flags != SDK::EObjectFlags::BeginDestroyed &&
        Object->Flags != SDK::EObjectFlags::FinishDestroyed;
}

void TimerLogic(clock_t* timer, int milliseconds) {
    *timer = clock() + milliseconds * CLOCKS_PER_SEC / 1000;
}

bool IsTimerLogic(clock_t* timer) {
    if (*timer == 0)
        return false;

    if (clock() >= *timer) {
        *timer = 0;
        return false;
    }
    return true;
}

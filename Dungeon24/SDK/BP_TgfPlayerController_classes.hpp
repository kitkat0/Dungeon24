#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TgfPlayerController

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TgfPlayerController.BP_TgfPlayerController_C
// 0x0000 (0x0920 - 0x0920)
class ABP_TgfPlayerController_C final : public ALyraPlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TgfPlayerController_C">();
	}
	static class ABP_TgfPlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TgfPlayerController_C>();
	}
};
static_assert(alignof(ABP_TgfPlayerController_C) == 0x000008, "Wrong alignment on ABP_TgfPlayerController_C");
static_assert(sizeof(ABP_TgfPlayerController_C) == 0x000920, "Wrong size on ABP_TgfPlayerController_C");

}


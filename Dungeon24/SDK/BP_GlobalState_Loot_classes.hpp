#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalState_Loot

#include "Basic.hpp"

#include "BP_GlobalState_Onboarding_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GlobalState_Loot.BP_GlobalState_Loot_C
// 0x0000 (0x00F8 - 0x00F8)
class UBP_GlobalState_Loot_C final : public UBP_GlobalState_Onboarding_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GlobalState_Loot_C">();
	}
	static class UBP_GlobalState_Loot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GlobalState_Loot_C>();
	}
};
static_assert(alignof(UBP_GlobalState_Loot_C) == 0x000008, "Wrong alignment on UBP_GlobalState_Loot_C");
static_assert(sizeof(UBP_GlobalState_Loot_C) == 0x0000F8, "Wrong size on UBP_GlobalState_Loot_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WID_Weapon_Base

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WID_Weapon_Base.WID_Weapon_Base_C
// 0x0000 (0x0108 - 0x0108)
class UWID_Weapon_Base_C : public UTgfWeaponDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WID_Weapon_Base_C">();
	}
	static class UWID_Weapon_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWID_Weapon_Base_C>();
	}
};
static_assert(alignof(UWID_Weapon_Base_C) == 0x000008, "Wrong alignment on UWID_Weapon_Base_C");
static_assert(sizeof(UWID_Weapon_Base_C) == 0x000108, "Wrong size on UWID_Weapon_Base_C");

}


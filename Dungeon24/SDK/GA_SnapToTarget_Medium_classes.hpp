#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SnapToTarget_Medium

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SnapToTarget_Medium.GA_SnapToTarget_Medium_C
// 0x0000 (0x06B8 - 0x06B8)
class UGA_SnapToTarget_Medium_C final : public UTgfGameplayAbility_SnapToTarget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SnapToTarget_Medium_C">();
	}
	static class UGA_SnapToTarget_Medium_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SnapToTarget_Medium_C>();
	}
};
static_assert(alignof(UGA_SnapToTarget_Medium_C) == 0x000008, "Wrong alignment on UGA_SnapToTarget_Medium_C");
static_assert(sizeof(UGA_SnapToTarget_Medium_C) == 0x0006B8, "Wrong size on UGA_SnapToTarget_Medium_C");

}


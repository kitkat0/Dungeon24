#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_IsPlayer

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_IsPlayer.GE_IsPlayer_C
// 0x0000 (0x0868 - 0x0868)
class UGE_IsPlayer_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_IsPlayer_C">();
	}
	static class UGE_IsPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_IsPlayer_C>();
	}
};
static_assert(alignof(UGE_IsPlayer_C) == 0x000008, "Wrong alignment on UGE_IsPlayer_C");
static_assert(sizeof(UGE_IsPlayer_C) == 0x000868, "Wrong size on UGE_IsPlayer_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_TGF_InteractorBattle

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_TGF_InteractorBattle.GE_TGF_InteractorBattle_C
// 0x0000 (0x08A8 - 0x08A8)
class UGE_TGF_InteractorBattle_C final : public UTgfGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_TGF_InteractorBattle_C">();
	}
	static class UGE_TGF_InteractorBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_TGF_InteractorBattle_C>();
	}
};
static_assert(alignof(UGE_TGF_InteractorBattle_C) == 0x000008, "Wrong alignment on UGE_TGF_InteractorBattle_C");
static_assert(sizeof(UGE_TGF_InteractorBattle_C) == 0x0008A8, "Wrong size on UGE_TGF_InteractorBattle_C");

}


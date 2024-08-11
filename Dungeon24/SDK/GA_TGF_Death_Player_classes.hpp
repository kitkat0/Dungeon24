#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Death_Player

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_TGF_Death_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_Death_Player.GA_TGF_Death_Player_C
// 0x0008 (0x06A8 - 0x06A0)
class UGA_TGF_Death_Player_C final : public UGA_TGF_Death_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_TGF_Death_Player_C;              // 0x06A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AnimationFinished();
	void ExecuteUbergraph_GA_TGF_Death_Player(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_Death_Player_C">();
	}
	static class UGA_TGF_Death_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_Death_Player_C>();
	}
};
static_assert(alignof(UGA_TGF_Death_Player_C) == 0x000008, "Wrong alignment on UGA_TGF_Death_Player_C");
static_assert(sizeof(UGA_TGF_Death_Player_C) == 0x0006A8, "Wrong size on UGA_TGF_Death_Player_C");
static_assert(offsetof(UGA_TGF_Death_Player_C, UberGraphFrame_GA_TGF_Death_Player_C) == 0x0006A0, "Member 'UGA_TGF_Death_Player_C::UberGraphFrame_GA_TGF_Death_Player_C' has a wrong offset!");

}


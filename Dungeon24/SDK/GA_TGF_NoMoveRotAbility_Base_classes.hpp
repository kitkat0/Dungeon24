#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_NoMoveRotAbility_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_TGF_Base_classes.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_NoMoveRotAbility_Base.GA_TGF_NoMoveRotAbility_Base_C
// 0x0010 (0x0D00 - 0x0CF0)
class UGA_TGF_NoMoveRotAbility_Base_C : public UGA_TGF_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0CF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_NoMoveRotAbility_Base_C">();
	}
	static class UGA_TGF_NoMoveRotAbility_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_NoMoveRotAbility_Base_C>();
	}
};
static_assert(alignof(UGA_TGF_NoMoveRotAbility_Base_C) == 0x000010, "Wrong alignment on UGA_TGF_NoMoveRotAbility_Base_C");
static_assert(sizeof(UGA_TGF_NoMoveRotAbility_Base_C) == 0x000D00, "Wrong size on UGA_TGF_NoMoveRotAbility_Base_C");
static_assert(offsetof(UGA_TGF_NoMoveRotAbility_Base_C, UberGraphFrame) == 0x000CF0, "Member 'UGA_TGF_NoMoveRotAbility_Base_C::UberGraphFrame' has a wrong offset!");

}

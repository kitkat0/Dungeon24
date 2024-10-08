#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Phase_TgfGame_WarmUp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Phase_WithPreloadPM_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Phase_TgfGame_WarmUp.Phase_TgfGame_WarmUp_C
// 0x0008 (0x06A0 - 0x0698)
class UPhase_TgfGame_WarmUp_C final : public UPhase_WithPreloadPM_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0698(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void EndPhase();
	void ExecuteUbergraph_Phase_TgfGame_WarmUp(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Phase_TgfGame_WarmUp_C">();
	}
	static class UPhase_TgfGame_WarmUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhase_TgfGame_WarmUp_C>();
	}
};
static_assert(alignof(UPhase_TgfGame_WarmUp_C) == 0x000008, "Wrong alignment on UPhase_TgfGame_WarmUp_C");
static_assert(sizeof(UPhase_TgfGame_WarmUp_C) == 0x0006A0, "Wrong size on UPhase_TgfGame_WarmUp_C");
static_assert(offsetof(UPhase_TgfGame_WarmUp_C, UberGraphFrame) == 0x000698, "Member 'UPhase_TgfGame_WarmUp_C::UberGraphFrame' has a wrong offset!");

}


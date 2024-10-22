#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Phase_TgfGame_Playing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Phase_TgfGame_Playing.Phase_TgfGame_Playing_C
// 0x0008 (0x0698 - 0x0690)
class UPhase_TgfGame_Playing_C final : public ULyraGamePhaseAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void EndPhase();
	void ExecuteUbergraph_Phase_TgfGame_Playing(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Phase_TgfGame_Playing_C">();
	}
	static class UPhase_TgfGame_Playing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhase_TgfGame_Playing_C>();
	}
};
static_assert(alignof(UPhase_TgfGame_Playing_C) == 0x000008, "Wrong alignment on UPhase_TgfGame_Playing_C");
static_assert(sizeof(UPhase_TgfGame_Playing_C) == 0x000698, "Wrong size on UPhase_TgfGame_Playing_C");
static_assert(offsetof(UPhase_TgfGame_Playing_C, UberGraphFrame) == 0x000690, "Member 'UPhase_TgfGame_Playing_C::UberGraphFrame' has a wrong offset!");

}


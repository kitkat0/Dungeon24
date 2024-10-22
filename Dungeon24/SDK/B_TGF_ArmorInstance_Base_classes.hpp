#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TGF_ArmorInstance_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TGF_ArmorInstance_Base.B_TGF_ArmorInstance_Base_C
// 0x0028 (0x0110 - 0x00E8)
class UB_TGF_ArmorInstance_Base_C final : public UTgfArmorInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  CosmeticAnimStyleTags;                             // 0x00F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void DetermineCosmeticTags();
	void ExecuteUbergraph_B_TGF_ArmorInstance_Base(int32 EntryPoint);
	void K2_OnEquipped();
	void K2_OnUnequipped();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TGF_ArmorInstance_Base_C">();
	}
	static class UB_TGF_ArmorInstance_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_TGF_ArmorInstance_Base_C>();
	}
};
static_assert(alignof(UB_TGF_ArmorInstance_Base_C) == 0x000008, "Wrong alignment on UB_TGF_ArmorInstance_Base_C");
static_assert(sizeof(UB_TGF_ArmorInstance_Base_C) == 0x000110, "Wrong size on UB_TGF_ArmorInstance_Base_C");
static_assert(offsetof(UB_TGF_ArmorInstance_Base_C, UberGraphFrame) == 0x0000E8, "Member 'UB_TGF_ArmorInstance_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_TGF_ArmorInstance_Base_C, CosmeticAnimStyleTags) == 0x0000F0, "Member 'UB_TGF_ArmorInstance_Base_C::CosmeticAnimStyleTags' has a wrong offset!");

}


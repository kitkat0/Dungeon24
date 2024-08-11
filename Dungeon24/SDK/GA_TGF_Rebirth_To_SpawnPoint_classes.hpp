#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Rebirth_To_SpawnPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_Rebirth_To_SpawnPoint.GA_TGF_Rebirth_To_SpawnPoint_C
// 0x0020 (0x09A0 - 0x0980)
#pragma pack(push, 0x1)
class alignas(0x10) UGA_TGF_Rebirth_To_SpawnPoint_C : public UTgfGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0980(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<ETgfEquipSlot>                         SlotList;                                          // 0x0988(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_TGF_Rebirth_To_SpawnPoint(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void RecoverAmmo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_Rebirth_To_SpawnPoint_C">();
	}
	static class UGA_TGF_Rebirth_To_SpawnPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_Rebirth_To_SpawnPoint_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UGA_TGF_Rebirth_To_SpawnPoint_C) == 0x000010, "Wrong alignment on UGA_TGF_Rebirth_To_SpawnPoint_C");
static_assert(sizeof(UGA_TGF_Rebirth_To_SpawnPoint_C) == 0x0009A0, "Wrong size on UGA_TGF_Rebirth_To_SpawnPoint_C");
static_assert(offsetof(UGA_TGF_Rebirth_To_SpawnPoint_C, UberGraphFrame) == 0x000980, "Member 'UGA_TGF_Rebirth_To_SpawnPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Rebirth_To_SpawnPoint_C, SlotList) == 0x000988, "Member 'UGA_TGF_Rebirth_To_SpawnPoint_C::SlotList' has a wrong offset!");

}

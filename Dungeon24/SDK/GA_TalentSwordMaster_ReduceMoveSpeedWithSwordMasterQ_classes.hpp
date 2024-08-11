#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ

#include "Basic.hpp"

#include "GA_TGF_Passive_Base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ.GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C
// 0x0020 (0x09C0 - 0x09A0)
class UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C final : public UGA_TGF_Passive_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                         CriticalGEList;                                    // 0x09A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 ReduceMoveSpeedGE;                                 // 0x09B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C">();
	}
	static class UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C>();
	}
};
static_assert(alignof(UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C) == 0x000010, "Wrong alignment on UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C");
static_assert(sizeof(UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C) == 0x0009C0, "Wrong size on UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C");
static_assert(offsetof(UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C, UberGraphFrame) == 0x0009A0, "Member 'UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C, CriticalGEList) == 0x0009A8, "Member 'UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C::CriticalGEList' has a wrong offset!");
static_assert(offsetof(UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C, ReduceMoveSpeedGE) == 0x0009B8, "Member 'UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C::ReduceMoveSpeedGE' has a wrong offset!");

}

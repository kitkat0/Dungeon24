#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit

#include "Basic.hpp"

#include "GA_TGF_Passive_Base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit.GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C
// 0x0020 (0x09C0 - 0x09A0)
class UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C final : public UGA_TGF_Passive_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 AddAtkEffect;                                      // 0x09A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        RemoveDelay;                                       // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C">();
	}
	static class UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C>();
	}
};
static_assert(alignof(UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C) == 0x000010, "Wrong alignment on UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C");
static_assert(sizeof(UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C) == 0x0009C0, "Wrong size on UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C");
static_assert(offsetof(UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C, UberGraphFrame) == 0x0009A0, "Member 'UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C, AddAtkEffect) == 0x0009A8, "Member 'UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C::AddAtkEffect' has a wrong offset!");
static_assert(offsetof(UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C, RemoveDelay) == 0x0009B0, "Member 'UGA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C::RemoveDelay' has a wrong offset!");

}


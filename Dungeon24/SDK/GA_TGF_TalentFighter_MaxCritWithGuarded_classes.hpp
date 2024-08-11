#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_TalentFighter_MaxCritWithGuarded

#include "Basic.hpp"

#include "GA_TGF_Passive_Base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_TalentFighter_MaxCritWithGuarded.GA_TGF_TalentFighter_MaxCritWithGuarded_C
// 0x0010 (0x09B0 - 0x09A0)
class UGA_TGF_TalentFighter_MaxCritWithGuarded_C final : public UGA_TGF_Passive_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 AddAtkEffect;                                      // 0x09A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_TalentFighter_MaxCritWithGuarded_C">();
	}
	static class UGA_TGF_TalentFighter_MaxCritWithGuarded_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_TalentFighter_MaxCritWithGuarded_C>();
	}
};
static_assert(alignof(UGA_TGF_TalentFighter_MaxCritWithGuarded_C) == 0x000010, "Wrong alignment on UGA_TGF_TalentFighter_MaxCritWithGuarded_C");
static_assert(sizeof(UGA_TGF_TalentFighter_MaxCritWithGuarded_C) == 0x0009B0, "Wrong size on UGA_TGF_TalentFighter_MaxCritWithGuarded_C");
static_assert(offsetof(UGA_TGF_TalentFighter_MaxCritWithGuarded_C, UberGraphFrame) == 0x0009A0, "Member 'UGA_TGF_TalentFighter_MaxCritWithGuarded_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TGF_TalentFighter_MaxCritWithGuarded_C, AddAtkEffect) == 0x0009A8, "Member 'UGA_TGF_TalentFighter_MaxCritWithGuarded_C::AddAtkEffect' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalBehavior_HealthAlert

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBehavior_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GlobalBehavior_HealthAlert.BP_GlobalBehavior_HealthAlert_C
// 0x0018 (0x00B8 - 0x00A0)
class UBP_GlobalBehavior_HealthAlert_C final : public UBP_NpcBehavior_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        HealthAlertLine;                                   // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BelowAlertLine;                                    // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoBehavior(const struct FGameplayTag& GameplayTag, const struct FGameplayEventData& EventData);
	void DoChecks(const struct FGameplayTag& GameplayTag, const struct FGameplayEventData& EventData, bool* PassCheck);
	void ExecuteUbergraph_BP_GlobalBehavior_HealthAlert(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GlobalBehavior_HealthAlert_C">();
	}
	static class UBP_GlobalBehavior_HealthAlert_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GlobalBehavior_HealthAlert_C>();
	}
};
static_assert(alignof(UBP_GlobalBehavior_HealthAlert_C) == 0x000008, "Wrong alignment on UBP_GlobalBehavior_HealthAlert_C");
static_assert(sizeof(UBP_GlobalBehavior_HealthAlert_C) == 0x0000B8, "Wrong size on UBP_GlobalBehavior_HealthAlert_C");
static_assert(offsetof(UBP_GlobalBehavior_HealthAlert_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_GlobalBehavior_HealthAlert_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GlobalBehavior_HealthAlert_C, HealthAlertLine) == 0x0000A8, "Member 'UBP_GlobalBehavior_HealthAlert_C::HealthAlertLine' has a wrong offset!");
static_assert(offsetof(UBP_GlobalBehavior_HealthAlert_C, BelowAlertLine) == 0x0000B0, "Member 'UBP_GlobalBehavior_HealthAlert_C::BelowAlertLine' has a wrong offset!");

}

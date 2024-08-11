#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aura_TGF_DruidPanther_Tanlent_HuntersSense

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C
// 0x0040 (0x0150 - 0x0110)
class UAura_TGF_DruidPanther_Tanlent_HuntersSense_C final : public UTgfGameplayAura
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          StealthDetected;                                   // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EffectiveDuration;                                 // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayTagRemoved*   CoolDownOverEvent;                                 // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        FadeTime;                                          // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Effective;                                         // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FadingTime;                                        // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Fading;                                            // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Aura_TGF_DruidPanther_Tanlent_HuntersSense(int32 EntryPoint);
	void K2_OnAuraAdded(class UTgfAuraManagerComponent* AuraManagerComponent);
	void K2_OnAuraRemoved(class UTgfAuraManagerComponent* AuraManagerComponent);
	void K2_OnCharacterLeave(class ALyraCharacter* Target);
	void K2_TickAura(float DeltaTime);
	void ProcessSensedTargetEnter(class ALyraCharacter* Target);
	void ProcessSensedTargetLeave(class ALyraCharacter* Target);
	void Removed_0D693C9B4E1E2465FC9959A2F65AF9A9();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Aura_TGF_DruidPanther_Tanlent_HuntersSense_C">();
	}
	static class UAura_TGF_DruidPanther_Tanlent_HuntersSense_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAura_TGF_DruidPanther_Tanlent_HuntersSense_C>();
	}
};
static_assert(alignof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C) == 0x000008, "Wrong alignment on UAura_TGF_DruidPanther_Tanlent_HuntersSense_C");
static_assert(sizeof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C) == 0x000150, "Wrong size on UAura_TGF_DruidPanther_Tanlent_HuntersSense_C");
static_assert(offsetof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C, UberGraphFrame) == 0x000110, "Member 'UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C, StealthDetected) == 0x000118, "Member 'UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::StealthDetected' has a wrong offset!");
static_assert(offsetof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C, EffectiveDuration) == 0x000120, "Member 'UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::EffectiveDuration' has a wrong offset!");
static_assert(offsetof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C, CoolDownOverEvent) == 0x000128, "Member 'UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::CoolDownOverEvent' has a wrong offset!");
static_assert(offsetof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C, FadeTime) == 0x000130, "Member 'UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::FadeTime' has a wrong offset!");
static_assert(offsetof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C, Effective) == 0x000138, "Member 'UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::Effective' has a wrong offset!");
static_assert(offsetof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C, FadingTime) == 0x000140, "Member 'UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::FadingTime' has a wrong offset!");
static_assert(offsetof(UAura_TGF_DruidPanther_Tanlent_HuntersSense_C, Fading) == 0x000148, "Member 'UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::Fading' has a wrong offset!");

}


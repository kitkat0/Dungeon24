#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Fighter_QWhirlWind

#include "Basic.hpp"

#include "GA_TGF_Skill_Base_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C
// 0x0080 (0x0F50 - 0x0ED0)
class UGA_TGF_Fighter_QWhirlWind_C final : public UGA_TGF_Skill_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_TGF_Fighter_QWhirlWind_C;        // 0x0EC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 BuffGE;                                            // 0x0ED0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        StartTime;                                         // 0x0ED8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, int32>                    ActorHitMap;                                       // 0x0EE0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        MinInv;                                            // 0x0F30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHitCount;                                       // 0x0F38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            HamstringWhenQGEHandle;                            // 0x0F3C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CheckHit(const struct FGameplayEventData& Payload);
	void DoEffect();
	void EventReceived_325093BE4223F108DBD2F8BDC38E6E13(const struct FGameplayEventData& Payload);
	void EventReceived_326541BB4EA201DA5052A5B7D09E189F(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_TGF_Fighter_QWhirlWind(int32 EntryPoint);
	void InitSecurity();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName);
	void OnCancelled_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName);
	void OnCompleted_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName);
	void OnInterrupted_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName);
	void OnNotifyBegin_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName);
	void OnNotifyEnd_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_Fighter_QWhirlWind_C">();
	}
	static class UGA_TGF_Fighter_QWhirlWind_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_Fighter_QWhirlWind_C>();
	}
};
static_assert(alignof(UGA_TGF_Fighter_QWhirlWind_C) == 0x000010, "Wrong alignment on UGA_TGF_Fighter_QWhirlWind_C");
static_assert(sizeof(UGA_TGF_Fighter_QWhirlWind_C) == 0x000F50, "Wrong size on UGA_TGF_Fighter_QWhirlWind_C");
static_assert(offsetof(UGA_TGF_Fighter_QWhirlWind_C, UberGraphFrame_GA_TGF_Fighter_QWhirlWind_C) == 0x000EC8, "Member 'UGA_TGF_Fighter_QWhirlWind_C::UberGraphFrame_GA_TGF_Fighter_QWhirlWind_C' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Fighter_QWhirlWind_C, BuffGE) == 0x000ED0, "Member 'UGA_TGF_Fighter_QWhirlWind_C::BuffGE' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Fighter_QWhirlWind_C, StartTime) == 0x000ED8, "Member 'UGA_TGF_Fighter_QWhirlWind_C::StartTime' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Fighter_QWhirlWind_C, ActorHitMap) == 0x000EE0, "Member 'UGA_TGF_Fighter_QWhirlWind_C::ActorHitMap' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Fighter_QWhirlWind_C, MinInv) == 0x000F30, "Member 'UGA_TGF_Fighter_QWhirlWind_C::MinInv' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Fighter_QWhirlWind_C, MaxHitCount) == 0x000F38, "Member 'UGA_TGF_Fighter_QWhirlWind_C::MaxHitCount' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Fighter_QWhirlWind_C, HamstringWhenQGEHandle) == 0x000F3C, "Member 'UGA_TGF_Fighter_QWhirlWind_C::HamstringWhenQGEHandle' has a wrong offset!");

}


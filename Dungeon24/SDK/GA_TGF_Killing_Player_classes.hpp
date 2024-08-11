#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Killing_Player

#include "Basic.hpp"

#include "AttrBuffMap_structs.hpp"
#include "GA_TGF_Killing_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_Killing_Player.GA_TGF_Killing_Player_C
// 0x0040 (0x06D0 - 0x0690)
class UGA_TGF_Killing_Player_C final : public UGA_TGF_Killing_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_TGF_Killing_Player_C;            // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FAttrBuffMap>                   AttrBuffMap;                                       // 0x0698(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ShowEffectNum;                                     // 0x06A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AC[0x4];                                      // 0x06AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UGameplayEffect>            EffectGE;                                          // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         TotalCount;                                        // 0x06B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCurShowEffect;                                    // 0x06BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNeedShowEffect;                                   // 0x06BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BE[0x2];                                      // 0x06BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            EffectHandle;                                      // 0x06C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULyraAbilitySystemComponent*            ASC;                                               // 0x06C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_TGF_Killing_Player(int32 EntryPoint);
	void GiveBonusToPlayer();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnAbilityAdded();
	void UpdateAllGEStack(int32 Increase);
	void UpdateGEStack(const struct FAttrBuffMap& GEInfo, int32 TargetStackCount);
	void UpdateTotalStackEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_Killing_Player_C">();
	}
	static class UGA_TGF_Killing_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_Killing_Player_C>();
	}
};
static_assert(alignof(UGA_TGF_Killing_Player_C) == 0x000008, "Wrong alignment on UGA_TGF_Killing_Player_C");
static_assert(sizeof(UGA_TGF_Killing_Player_C) == 0x0006D0, "Wrong size on UGA_TGF_Killing_Player_C");
static_assert(offsetof(UGA_TGF_Killing_Player_C, UberGraphFrame_GA_TGF_Killing_Player_C) == 0x000690, "Member 'UGA_TGF_Killing_Player_C::UberGraphFrame_GA_TGF_Killing_Player_C' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Killing_Player_C, AttrBuffMap) == 0x000698, "Member 'UGA_TGF_Killing_Player_C::AttrBuffMap' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Killing_Player_C, ShowEffectNum) == 0x0006A8, "Member 'UGA_TGF_Killing_Player_C::ShowEffectNum' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Killing_Player_C, EffectGE) == 0x0006B0, "Member 'UGA_TGF_Killing_Player_C::EffectGE' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Killing_Player_C, TotalCount) == 0x0006B8, "Member 'UGA_TGF_Killing_Player_C::TotalCount' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Killing_Player_C, bCurShowEffect) == 0x0006BC, "Member 'UGA_TGF_Killing_Player_C::bCurShowEffect' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Killing_Player_C, bNeedShowEffect) == 0x0006BD, "Member 'UGA_TGF_Killing_Player_C::bNeedShowEffect' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Killing_Player_C, EffectHandle) == 0x0006C0, "Member 'UGA_TGF_Killing_Player_C::EffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Killing_Player_C, ASC) == 0x0006C8, "Member 'UGA_TGF_Killing_Player_C::ASC' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_TGF_Rogue_E2_EnterStealth

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GE_TGF_Rogue_E2_EnterStealth.GE_TGF_Rogue_E2_EnterStealth_C.OnEffectAdded
// 0x0030 (0x0030 - 0x0000)
struct GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded final
{
public:
	class UAbilitySystemComponent*                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                Source;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0024(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded) == 0x000008, "Wrong alignment on GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded");
static_assert(sizeof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded) == 0x000030, "Wrong size on GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded");
static_assert(offsetof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded, Target) == 0x000000, "Member 'GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded::Target' has a wrong offset!");
static_assert(offsetof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded, Source) == 0x000008, "Member 'GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded::Source' has a wrong offset!");
static_assert(offsetof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000010, "Member 'GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000020, "Member 'GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000024, "Member 'GE_TGF_Rogue_E2_EnterStealth_C_OnEffectAdded::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

// Function GE_TGF_Rogue_E2_EnterStealth.GE_TGF_Rogue_E2_EnterStealth_C.OnEffectRemoved
// 0x0030 (0x0030 - 0x0000)
struct GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved final
{
public:
	class UAbilitySystemComponent*                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                Source;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectRemovalInfo             RemovalInfo;                                       // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved) == 0x000008, "Wrong alignment on GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved");
static_assert(sizeof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved) == 0x000030, "Wrong size on GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved");
static_assert(offsetof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved, Target) == 0x000000, "Member 'GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved::Target' has a wrong offset!");
static_assert(offsetof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved, Source) == 0x000008, "Member 'GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved::Source' has a wrong offset!");
static_assert(offsetof(GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved, RemovalInfo) == 0x000010, "Member 'GE_TGF_Rogue_E2_EnterStealth_C_OnEffectRemoved::RemovalInfo' has a wrong offset!");

}


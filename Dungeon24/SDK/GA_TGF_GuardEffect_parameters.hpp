#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_GuardEffect

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_GuardEffect.GA_TGF_GuardEffect_C.EventReceived_77F0B2494D2A6D2D59175FA19280BD4D
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TGF_GuardEffect_C_EventReceived_77F0B2494D2A6D2D59175FA19280BD4D final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_TGF_GuardEffect_C_EventReceived_77F0B2494D2A6D2D59175FA19280BD4D) == 0x000008, "Wrong alignment on GA_TGF_GuardEffect_C_EventReceived_77F0B2494D2A6D2D59175FA19280BD4D");
static_assert(sizeof(GA_TGF_GuardEffect_C_EventReceived_77F0B2494D2A6D2D59175FA19280BD4D) == 0x0000B0, "Wrong size on GA_TGF_GuardEffect_C_EventReceived_77F0B2494D2A6D2D59175FA19280BD4D");
static_assert(offsetof(GA_TGF_GuardEffect_C_EventReceived_77F0B2494D2A6D2D59175FA19280BD4D, Payload) == 0x000000, "Member 'GA_TGF_GuardEffect_C_EventReceived_77F0B2494D2A6D2D59175FA19280BD4D::Payload' has a wrong offset!");

// Function GA_TGF_GuardEffect.GA_TGF_GuardEffect_C.ExecuteUbergraph_GA_TGF_GuardEffect
// 0x0200 (0x0200 - 0x0000)
struct GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00C8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraTeamSubsystem*                     CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x01A0(0x0028)()
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdA;                     // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdB;                     // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELyraTeamComparison                           CallFunc_CompareTeams_ReturnValue;                 // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x3];                                      // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x01DC(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E5[0x3];                                      // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x01E8(0x0010)(ReferenceParm)
	bool                                          CallFunc_NeedApplyGuardOnHeal_Result;              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NeedApplyGuardCounter_Result;             // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect) == 0x000008, "Wrong alignment on GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect");
static_assert(sizeof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect) == 0x000200, "Wrong size on GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, EntryPoint) == 0x000000, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, Temp_struct_Variable) == 0x0000C8, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000178, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, K2Node_DynamicCast_AsLyra_Character) == 0x000188, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000198, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0001A0, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x0001C8, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_CompareTeams_TeamIdA) == 0x0001D0, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_CompareTeams_TeamIdA' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_CompareTeams_TeamIdB) == 0x0001D4, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_CompareTeams_TeamIdB' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_CompareTeams_ReturnValue) == 0x0001D8, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_CompareTeams_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0001DC, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, K2Node_SwitchEnum_CmpSuccess) == 0x0001E4, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0001E8, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_NeedApplyGuardOnHeal_Result) == 0x0001F8, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_NeedApplyGuardOnHeal_Result' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect, CallFunc_NeedApplyGuardCounter_Result) == 0x0001F9, "Member 'GA_TGF_GuardEffect_C_ExecuteUbergraph_GA_TGF_GuardEffect::CallFunc_NeedApplyGuardCounter_Result' has a wrong offset!");

// Function GA_TGF_GuardEffect.GA_TGF_GuardEffect_C.NeedApplyGuardCounter
// 0x0030 (0x0030 - 0x0000)
struct GA_TGF_GuardEffect_C_NeedApplyGuardCounter final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UAttributeSet*                    CallFunc_GetAttributeSet_ReturnValue;              // 0x0010(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTgfTriggerEffectAttributeSet*          K2Node_DynamicCast_AsTgf_Trigger_Effect_Attribute_Set; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter) == 0x000008, "Wrong alignment on GA_TGF_GuardEffect_C_NeedApplyGuardCounter");
static_assert(sizeof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter) == 0x000030, "Wrong size on GA_TGF_GuardEffect_C_NeedApplyGuardCounter");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter, Result) == 0x000000, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardCounter::Result' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardCounter::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter, CallFunc_GetAttributeSet_ReturnValue) == 0x000010, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardCounter::CallFunc_GetAttributeSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter, K2Node_DynamicCast_AsTgf_Trigger_Effect_Attribute_Set) == 0x000018, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardCounter::K2Node_DynamicCast_AsTgf_Trigger_Effect_Attribute_Set' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardCounter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardCounter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000022, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardCounter::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardCounter, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000028, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardCounter::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");

// Function GA_TGF_GuardEffect.GA_TGF_GuardEffect_C.NeedApplyGuardOnHeal
// 0x0030 (0x0030 - 0x0000)
struct GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UAttributeSet*                    CallFunc_GetAttributeSet_ReturnValue;              // 0x0010(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTgfTriggerEffectAttributeSet*          K2Node_DynamicCast_AsTgf_Trigger_Effect_Attribute_Set; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal) == 0x000008, "Wrong alignment on GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal");
static_assert(sizeof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal) == 0x000030, "Wrong size on GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal, Result) == 0x000000, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal::Result' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal, CallFunc_GetAttributeSet_ReturnValue) == 0x000010, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal::CallFunc_GetAttributeSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal, K2Node_DynamicCast_AsTgf_Trigger_Effect_Attribute_Set) == 0x000018, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal::K2Node_DynamicCast_AsTgf_Trigger_Effect_Attribute_Set' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000022, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000028, "Member 'GA_TGF_GuardEffect_C_NeedApplyGuardOnHeal::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");

}

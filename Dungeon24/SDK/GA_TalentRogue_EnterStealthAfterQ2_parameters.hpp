#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TalentRogue_EnterStealthAfterQ2

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function GA_TalentRogue_EnterStealthAfterQ2.GA_TalentRogue_EnterStealthAfterQ2_C.ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2
// 0x01B0 (0x01B0 - 0x0000)
struct GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0010(0x00B0)(ConstParm)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                        K2Node_DynamicCast_AsGameplay_Effect;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Character_Default_C*            K2Node_DynamicCast_AsBP_Tgf_Character_Default;     // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x0100(0x0020)()
	bool                                          CallFunc_HasAnyTags_ReturnValue;                   // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraTeamSubsystem*                     CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdA;                     // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdB;                     // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELyraTeamComparison                           CallFunc_CompareTeams_ReturnValue;                 // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2; // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1;  // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2; // 0x0184(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3; // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2;  // 0x0198(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_2;     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2) == 0x000008, "Wrong alignment on GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2");
static_assert(sizeof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2) == 0x0001B0, "Wrong size on GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, EntryPoint) == 0x000000, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000004, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, K2Node_Event_EventData) == 0x000010, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x0000C0, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, K2Node_DynamicCast_AsGameplay_Effect) == 0x0000C8, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::K2Node_DynamicCast_AsGameplay_Effect' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, K2Node_DynamicCast_AsBP_Tgf_Character_Default) == 0x0000D8, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::K2Node_DynamicCast_AsBP_Tgf_Character_Default' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_GetObjectClass_ReturnValue) == 0x0000E8, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x0000F0, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0000F8, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue) == 0x000100, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_HasAnyTags_ReturnValue) == 0x000120, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_Not_PreBool_ReturnValue) == 0x000121, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000128, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_CompareTeams_TeamIdA) == 0x000130, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_CompareTeams_TeamIdA' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_CompareTeams_TeamIdB) == 0x000134, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_CompareTeams_TeamIdB' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_CompareTeams_ReturnValue) == 0x000138, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_CompareTeams_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1) == 0x000140, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, K2Node_SwitchEnum_CmpSuccess) == 0x000148, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000150, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000160, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2) == 0x000168, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_HasMatchingGameplayTag_self_CastInput_1) == 0x000170, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_HasMatchingGameplayTag_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000180, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2) == 0x000184, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3) == 0x000190, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_HasMatchingGameplayTag_self_CastInput_2) == 0x000198, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_HasMatchingGameplayTag_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2, CallFunc_HasMatchingGameplayTag_ReturnValue_2) == 0x0001A8, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthAfterQ2::CallFunc_HasMatchingGameplayTag_ReturnValue_2' has a wrong offset!");

// Function GA_TalentRogue_EnterStealthAfterQ2.GA_TalentRogue_EnterStealthAfterQ2_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TalentRogue_EnterStealthAfterQ2_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_TalentRogue_EnterStealthAfterQ2_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_TalentRogue_EnterStealthAfterQ2_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_TalentRogue_EnterStealthAfterQ2_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_TalentRogue_EnterStealthAfterQ2_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_TalentRogue_EnterStealthAfterQ2_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_TalentRogue_EnterStealthAfterQ2_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}


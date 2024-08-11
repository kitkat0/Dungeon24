#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TalentSwordMaster_TakeHealWithQ

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function GA_TalentSwordMaster_TakeHealWithQ.GA_TalentSwordMaster_TakeHealWithQ_C.ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ
// 0x0130 (0x0130 - 0x0000)
struct GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0010(0x00B0)(ConstParm)
	class ULyraTeamSubsystem*                     CallFunc_GetWorldSubsystem_ReturnValue;            // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                        K2Node_DynamicCast_AsGameplay_Effect;              // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Character_Default_C*            K2Node_DynamicCast_AsBP_Tgf_Character_Default;     // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdA;                     // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdB;                     // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELyraTeamComparison                           CallFunc_CompareTeams_ReturnValue;                 // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_103[0x5];                                      // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x0108(0x0020)()
	bool                                          CallFunc_HasAnyTags_ReturnValue;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ) == 0x000008, "Wrong alignment on GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ");
static_assert(sizeof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ) == 0x000130, "Wrong size on GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, EntryPoint) == 0x000000, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000004, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, K2Node_Event_EventData) == 0x000010, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_GetWorldSubsystem_ReturnValue) == 0x0000C0, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x0000C8, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, K2Node_DynamicCast_AsGameplay_Effect) == 0x0000D0, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::K2Node_DynamicCast_AsGameplay_Effect' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, K2Node_DynamicCast_AsBP_Tgf_Character_Default) == 0x0000E0, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::K2Node_DynamicCast_AsBP_Tgf_Character_Default' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_GetObjectClass_ReturnValue) == 0x0000F0, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_CompareTeams_TeamIdA) == 0x0000F8, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_CompareTeams_TeamIdA' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_CompareTeams_TeamIdB) == 0x0000FC, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_CompareTeams_TeamIdB' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_CompareTeams_ReturnValue) == 0x000100, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_CompareTeams_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, K2Node_SwitchEnum_CmpSuccess) == 0x000101, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_Array_Contains_ReturnValue) == 0x000102, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue) == 0x000108, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_HasAnyTags_ReturnValue) == 0x000128, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ, CallFunc_Not_PreBool_ReturnValue) == 0x000129, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_ExecuteUbergraph_GA_TalentSwordMaster_TakeHealWithQ::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function GA_TalentSwordMaster_TakeHealWithQ.GA_TalentSwordMaster_TakeHealWithQ_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TalentSwordMaster_TakeHealWithQ_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_TalentSwordMaster_TakeHealWithQ_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_TalentSwordMaster_TakeHealWithQ_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_TalentSwordMaster_TakeHealWithQ_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_TalentSwordMaster_TakeHealWithQ_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_TalentSwordMaster_TakeHealWithQ_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_TalentSwordMaster_TakeHealWithQ_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}


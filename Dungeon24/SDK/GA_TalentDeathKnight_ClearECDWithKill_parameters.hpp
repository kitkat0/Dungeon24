#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TalentDeathKnight_ClearECDWithKill

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function GA_TalentDeathKnight_ClearECDWithKill.GA_TalentDeathKnight_ClearECDWithKill_C.ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill
// 0x00F0 (0x00F0 - 0x0000)
struct GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraTeamSubsystem*                     CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0010(0x00B0)(ConstParm)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Character_Default_C*            K2Node_DynamicCast_AsBP_Tgf_Character_Default;     // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CompareTeams_TeamIdA;                     // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdB;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELyraTeamComparison                           CallFunc_CompareTeams_ReturnValue;                 // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayer_ReturnValue;                     // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill) == 0x000008, "Wrong alignment on GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill");
static_assert(sizeof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill) == 0x0000F0, "Wrong size on GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, EntryPoint) == 0x000000, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, K2Node_Event_EventData) == 0x000010, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x0000C0, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, K2Node_DynamicCast_AsLyra_Character) == 0x0000C8, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, K2Node_DynamicCast_AsBP_Tgf_Character_Default) == 0x0000D8, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::K2Node_DynamicCast_AsBP_Tgf_Character_Default' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, CallFunc_CompareTeams_TeamIdA) == 0x0000E4, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::CallFunc_CompareTeams_TeamIdA' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, CallFunc_CompareTeams_TeamIdB) == 0x0000E8, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::CallFunc_CompareTeams_TeamIdB' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, CallFunc_CompareTeams_ReturnValue) == 0x0000EC, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::CallFunc_CompareTeams_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, CallFunc_IsPlayer_ReturnValue) == 0x0000ED, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::CallFunc_IsPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill, K2Node_SwitchEnum_CmpSuccess) == 0x0000EE, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_ExecuteUbergraph_GA_TalentDeathKnight_ClearECDWithKill::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function GA_TalentDeathKnight_ClearECDWithKill.GA_TalentDeathKnight_ClearECDWithKill_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TalentDeathKnight_ClearECDWithKill_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_TalentDeathKnight_ClearECDWithKill_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_TalentDeathKnight_ClearECDWithKill_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_TalentDeathKnight_ClearECDWithKill_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_TalentDeathKnight_ClearECDWithKill_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_TalentDeathKnight_ClearECDWithKill_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_TalentDeathKnight_ClearECDWithKill_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}


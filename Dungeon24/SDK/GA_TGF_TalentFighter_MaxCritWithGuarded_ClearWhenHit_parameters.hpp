#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit.GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C.ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit
// 0x00C0 (0x00C0 - 0x0000)
struct GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00B0)(ConstParm)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit) == 0x000008, "Wrong alignment on GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit");
static_assert(sizeof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit) == 0x0000C0, "Wrong size on GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit");
static_assert(offsetof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit, EntryPoint) == 0x000000, "Member 'GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit, K2Node_Event_EventData) == 0x000008, "Member 'GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit, CallFunc_Delay_Duration_ImplicitCast) == 0x0000BC, "Member 'GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_ExecuteUbergraph_GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit.GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_TGF_TalentFighter_MaxCritWithGuarded_ClearWhenHit_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalBehavior_ChangeState

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_GlobalBehavior_ChangeState.BP_GlobalBehavior_ChangeState_C.DoChecks
// 0x00D0 (0x00D0 - 0x0000)
struct BP_GlobalBehavior_ChangeState_C_DoChecks final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          PassCheck;                                         // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Character_Default_C*            K2Node_DynamicCast_AsBP_Tgf_Character_Default;     // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GlobalBehavior_ChangeState_C_DoChecks) == 0x000008, "Wrong alignment on BP_GlobalBehavior_ChangeState_C_DoChecks");
static_assert(sizeof(BP_GlobalBehavior_ChangeState_C_DoChecks) == 0x0000D0, "Wrong size on BP_GlobalBehavior_ChangeState_C_DoChecks");
static_assert(offsetof(BP_GlobalBehavior_ChangeState_C_DoChecks, GameplayTag) == 0x000000, "Member 'BP_GlobalBehavior_ChangeState_C_DoChecks::GameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_ChangeState_C_DoChecks, EventData) == 0x000008, "Member 'BP_GlobalBehavior_ChangeState_C_DoChecks::EventData' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_ChangeState_C_DoChecks, PassCheck) == 0x0000B8, "Member 'BP_GlobalBehavior_ChangeState_C_DoChecks::PassCheck' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_ChangeState_C_DoChecks, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B9, "Member 'BP_GlobalBehavior_ChangeState_C_DoChecks::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_ChangeState_C_DoChecks, K2Node_DynamicCast_AsBP_Tgf_Character_Default) == 0x0000C0, "Member 'BP_GlobalBehavior_ChangeState_C_DoChecks::K2Node_DynamicCast_AsBP_Tgf_Character_Default' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_ChangeState_C_DoChecks, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_GlobalBehavior_ChangeState_C_DoChecks::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_ChangeState_C_DoChecks, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000C9, "Member 'BP_GlobalBehavior_ChangeState_C_DoChecks::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_ChangeState_C_DoChecks, CallFunc_BooleanOR_ReturnValue) == 0x0000CA, "Member 'BP_GlobalBehavior_ChangeState_C_DoChecks::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

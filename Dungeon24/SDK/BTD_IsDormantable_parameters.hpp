#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsDormantable

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTD_IsDormantable.BTD_IsDormantable_C.PerformConditionCheckAI
// 0x0028 (0x0028 - 0x0000)
struct BTD_IsDormantable_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Monster_C*                      K2Node_DynamicCast_AsBP_Tgf_Monster;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDormantable_Result;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_IsDormantable_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_IsDormantable_C_PerformConditionCheckAI");
static_assert(sizeof(BTD_IsDormantable_C_PerformConditionCheckAI) == 0x000028, "Wrong size on BTD_IsDormantable_C_PerformConditionCheckAI");
static_assert(offsetof(BTD_IsDormantable_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_IsDormantable_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_IsDormantable_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_IsDormantable_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_IsDormantable_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_IsDormantable_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsDormantable_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBP_Tgf_Monster) == 0x000018, "Member 'BTD_IsDormantable_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBP_Tgf_Monster' has a wrong offset!");
static_assert(offsetof(BTD_IsDormantable_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTD_IsDormantable_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTD_IsDormantable_C_PerformConditionCheckAI, CallFunc_IsDormantable_Result) == 0x000021, "Member 'BTD_IsDormantable_C_PerformConditionCheckAI::CallFunc_IsDormantable_Result' has a wrong offset!");

}


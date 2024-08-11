#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsInAbilityInterval

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTD_IsInAbilityInterval.BTD_IsInAbilityInterval_C.PerformConditionCheckAI
// 0x0030 (0x0030 - 0x0000)
struct BTD_IsInAbilityInterval_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBlackboardValueAsFloat_ReturnValue;    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_IsInAbilityInterval_C_PerformConditionCheckAI");
static_assert(sizeof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI) == 0x000030, "Wrong size on BTD_IsInAbilityInterval_C_PerformConditionCheckAI");
static_assert(offsetof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_IsInAbilityInterval_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_IsInAbilityInterval_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_IsInAbilityInterval_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI, CallFunc_GetTimeSeconds_ReturnValue) == 0x000018, "Member 'BTD_IsInAbilityInterval_C_PerformConditionCheckAI::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI, CallFunc_GetBlackboardValueAsFloat_ReturnValue) == 0x000020, "Member 'BTD_IsInAbilityInterval_C_PerformConditionCheckAI::CallFunc_GetBlackboardValueAsFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000024, "Member 'BTD_IsInAbilityInterval_C_PerformConditionCheckAI::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsInAbilityInterval_C_PerformConditionCheckAI, CallFunc_Less_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'BTD_IsInAbilityInterval_C_PerformConditionCheckAI::CallFunc_Less_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}


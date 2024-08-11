#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsRotatable

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTD_IsRotatable.BTD_IsRotatable_C.PerformConditionCheckAI
// 0x0018 (0x0018 - 0x0000)
struct BTD_IsRotatable_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_IsRotatable_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_IsRotatable_C_PerformConditionCheckAI");
static_assert(sizeof(BTD_IsRotatable_C_PerformConditionCheckAI) == 0x000018, "Wrong size on BTD_IsRotatable_C_PerformConditionCheckAI");
static_assert(offsetof(BTD_IsRotatable_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_IsRotatable_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_IsRotatable_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_IsRotatable_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_IsRotatable_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_IsRotatable_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsRotatable_C_PerformConditionCheckAI, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000011, "Member 'BTD_IsRotatable_C_PerformConditionCheckAI::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_IsRotatable_C_PerformConditionCheckAI, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'BTD_IsRotatable_C_PerformConditionCheckAI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_CheckAbilityThreatTarget

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTS_CheckAbilityThreatTarget.BTS_CheckAbilityThreatTarget_C.ExecuteUbergraph_BTS_CheckAbilityThreatTarget
// 0x0050 (0x0050 - 0x0000)
struct BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Monster_C*                      K2Node_DynamicCast_AsBP_Tgf_Monster;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBlackboardValueAsBool_ReturnValue;     // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetThreatTarget_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIC_Monster_Default_C*                 K2Node_DynamicCast_AsAIC_Monster_Default;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget) == 0x000008, "Wrong alignment on BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget");
static_assert(sizeof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget) == 0x000050, "Wrong size on BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, EntryPoint) == 0x000000, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000008, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, K2Node_Event_OwnerController) == 0x000010, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, K2Node_Event_ControlledPawn) == 0x000018, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, K2Node_DynamicCast_AsBP_Tgf_Monster) == 0x000028, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::K2Node_DynamicCast_AsBP_Tgf_Monster' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, CallFunc_GetBlackboardValueAsBool_ReturnValue) == 0x000031, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::CallFunc_GetBlackboardValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, CallFunc_GetThreatTarget_ReturnValue) == 0x000038, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::CallFunc_GetThreatTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, K2Node_DynamicCast_AsAIC_Monster_Default) == 0x000040, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::K2Node_DynamicCast_AsAIC_Monster_Default' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000049, "Member 'BTS_CheckAbilityThreatTarget_C_ExecuteUbergraph_BTS_CheckAbilityThreatTarget::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BTS_CheckAbilityThreatTarget.BTS_CheckAbilityThreatTarget_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_CheckAbilityThreatTarget_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_CheckAbilityThreatTarget_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_CheckAbilityThreatTarget_C_ReceiveTickAI");
static_assert(sizeof(BTS_CheckAbilityThreatTarget_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_CheckAbilityThreatTarget_C_ReceiveTickAI");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_CheckAbilityThreatTarget_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_CheckAbilityThreatTarget_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_CheckAbilityThreatTarget_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_CheckAbilityThreatTarget_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}


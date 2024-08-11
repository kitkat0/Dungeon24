#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetWanderBaseLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTT_SetWanderBaseLocation.BTT_SetWanderBaseLocation_C.ExecuteUbergraph_BTT_SetWanderBaseLocation
// 0x0040 (0x0040 - 0x0000)
struct BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Tgf_Monster_C*                      K2Node_DynamicCast_AsBP_Tgf_Monster;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation) == 0x000008, "Wrong alignment on BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation");
static_assert(sizeof(BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation) == 0x000040, "Wrong size on BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation");
static_assert(offsetof(BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation, EntryPoint) == 0x000000, "Member 'BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation, K2Node_Event_OwnerController) == 0x000008, "Member 'BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation, K2Node_DynamicCast_AsBP_Tgf_Monster) == 0x000018, "Member 'BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation::K2Node_DynamicCast_AsBP_Tgf_Monster' has a wrong offset!");
static_assert(offsetof(BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BTT_SetWanderBaseLocation_C_ExecuteUbergraph_BTT_SetWanderBaseLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function BTT_SetWanderBaseLocation.BTT_SetWanderBaseLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_SetWanderBaseLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_SetWanderBaseLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_SetWanderBaseLocation_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_SetWanderBaseLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_SetWanderBaseLocation_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_SetWanderBaseLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_SetWanderBaseLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_SetWanderBaseLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_SetWanderBaseLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_CheckEvade

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTS_CheckEvade.BTS_CheckEvade_C.ExecuteUbergraph_BTS_CheckEvade
// 0x0060 (0x0060 - 0x0000)
struct BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Monster_C*                      K2Node_DynamicCast_AsBP_Tgf_Monster;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEvade_Result;                           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNavigationPath*                        CallFunc_FindPathToActorSynchronously_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPartial_ReturnValue;                    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade) == 0x000008, "Wrong alignment on BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade");
static_assert(sizeof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade) == 0x000060, "Wrong size on BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, EntryPoint) == 0x000000, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000008, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, K2Node_Event_OwnerController) == 0x000010, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, K2Node_Event_ControlledPawn) == 0x000018, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, K2Node_DynamicCast_AsBP_Tgf_Monster) == 0x000028, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::K2Node_DynamicCast_AsBP_Tgf_Monster' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_IsEvade_Result) == 0x000031, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_IsEvade_Result' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_FindPathToActorSynchronously_ReturnValue) == 0x000050, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_FindPathToActorSynchronously_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_IsValid_ReturnValue_2) == 0x000059, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_IsPartial_ReturnValue) == 0x00005A, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_IsPartial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_Not_PreBool_ReturnValue) == 0x00005B, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade, CallFunc_BooleanAND_ReturnValue) == 0x00005C, "Member 'BTS_CheckEvade_C_ExecuteUbergraph_BTS_CheckEvade::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BTS_CheckEvade.BTS_CheckEvade_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_CheckEvade_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_CheckEvade_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_CheckEvade_C_ReceiveTickAI");
static_assert(sizeof(BTS_CheckEvade_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_CheckEvade_C_ReceiveTickAI");
static_assert(offsetof(BTS_CheckEvade_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_CheckEvade_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_CheckEvade_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_CheckEvade_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_CheckEvade_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}


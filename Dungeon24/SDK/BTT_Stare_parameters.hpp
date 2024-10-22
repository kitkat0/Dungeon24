#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Stare

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTT_Stare.BTT_Stare_C.ExecuteUbergraph_BTT_Stare
// 0x0060 (0x0060 - 0x0000)
struct BTT_Stare_C_ExecuteUbergraph_BTT_Stare final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Tgf_Monster_C*                      K2Node_DynamicCast_AsBP_Tgf_Monster;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare) == 0x000008, "Wrong alignment on BTT_Stare_C_ExecuteUbergraph_BTT_Stare");
static_assert(sizeof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare) == 0x000060, "Wrong size on BTT_Stare_C_ExecuteUbergraph_BTT_Stare");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, EntryPoint) == 0x000000, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, CallFunc_RandomBool_ReturnValue) == 0x000004, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, K2Node_Event_OwnerController_1) == 0x000010, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, K2Node_Event_ControlledPawn_1) == 0x000018, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, K2Node_DynamicCast_AsBP_Tgf_Monster) == 0x000020, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::K2Node_DynamicCast_AsBP_Tgf_Monster' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, K2Node_Event_OwnerController) == 0x000038, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, K2Node_Event_ControlledPawn) == 0x000040, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000048, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, CallFunc_GetBlackboardValueAsActor_ReturnValue) == 0x000050, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::CallFunc_GetBlackboardValueAsActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ExecuteUbergraph_BTT_Stare, CallFunc_Delay_Duration_ImplicitCast) == 0x00005C, "Member 'BTT_Stare_C_ExecuteUbergraph_BTT_Stare::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BTT_Stare.BTT_Stare_C.ReceiveAbortAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_Stare_C_ReceiveAbortAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Stare_C_ReceiveAbortAI) == 0x000008, "Wrong alignment on BTT_Stare_C_ReceiveAbortAI");
static_assert(sizeof(BTT_Stare_C_ReceiveAbortAI) == 0x000010, "Wrong size on BTT_Stare_C_ReceiveAbortAI");
static_assert(offsetof(BTT_Stare_C_ReceiveAbortAI, OwnerController) == 0x000000, "Member 'BTT_Stare_C_ReceiveAbortAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ReceiveAbortAI, ControlledPawn) == 0x000008, "Member 'BTT_Stare_C_ReceiveAbortAI::ControlledPawn' has a wrong offset!");

// Function BTT_Stare.BTT_Stare_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_Stare_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_Stare_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_Stare_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_Stare_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_Stare_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_Stare_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_Stare_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_Stare_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_Stare_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}


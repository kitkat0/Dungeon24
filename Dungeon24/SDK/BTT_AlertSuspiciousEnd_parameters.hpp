#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AlertSuspiciousEnd

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTT_AlertSuspiciousEnd.BTT_AlertSuspiciousEnd_C.ExecuteUbergraph_BTT_AlertSuspiciousEnd
// 0x0068 (0x0068 - 0x0000)
struct BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Monster_C*                      K2Node_DynamicCast_AsBP_Tgf_Monster;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIC_Monster_Default_C*                 K2Node_DynamicCast_AsAIC_Monster_Default;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetBlackboardValueAsEnum_ReturnValue;     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x1];                                       // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetBlackboardValueAsFloat_ReturnValue;    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd) == 0x000008, "Wrong alignment on BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd");
static_assert(sizeof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd) == 0x000068, "Wrong size on BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, EntryPoint) == 0x000000, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, K2Node_Event_OwnerController) == 0x000008, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, K2Node_DynamicCast_AsBP_Tgf_Monster) == 0x000020, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::K2Node_DynamicCast_AsBP_Tgf_Monster' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, K2Node_DynamicCast_AsAIC_Monster_Default) == 0x000030, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::K2Node_DynamicCast_AsAIC_Monster_Default' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, CallFunc_GetBlackboardValueAsEnum_ReturnValue) == 0x000039, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::CallFunc_GetBlackboardValueAsEnum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, CallFunc_GetValidValue_ReturnValue) == 0x00003A, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, CallFunc_GetBlackboardValueAsFloat_ReturnValue) == 0x00003C, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::CallFunc_GetBlackboardValueAsFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, CallFunc_GetTimeSeconds_ReturnValue) == 0x000048, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000050, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000058, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000060, "Member 'BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BTT_AlertSuspiciousEnd.BTT_AlertSuspiciousEnd_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTT_AlertSuspiciousEnd_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_AlertSuspiciousEnd_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTT_AlertSuspiciousEnd_C_ReceiveTickAI");
static_assert(sizeof(BTT_AlertSuspiciousEnd_C_ReceiveTickAI) == 0x000018, "Wrong size on BTT_AlertSuspiciousEnd_C_ReceiveTickAI");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTT_AlertSuspiciousEnd_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTT_AlertSuspiciousEnd_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_AlertSuspiciousEnd_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTT_AlertSuspiciousEnd_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}


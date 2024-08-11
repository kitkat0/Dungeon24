#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExtractDevice_Shadow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ExtractDevice_Shadow.BP_ExtractDevice_Shadow_C.ExecuteUbergraph_BP_ExtractDevice_Shadow
// 0x0390 (0x0390 - 0x0000)
struct BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ExperienceReady*           CallFunc_WaitForExperienceReady_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_OriginTime_Variable;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Proportion_Variable;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_TargetTime_Variable;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsForward_Variable;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_3;      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_TgfGame_MapHint_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_GetObjectUniqueID_ReturnValue;            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_172[0x6];                                      // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_TgfGame_MapHint_C*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetObjectUniqueID_ReturnValue_1;          // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0198(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0298(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow) == 0x000008, "Wrong alignment on BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow");
static_assert(sizeof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow) == 0x000390, "Wrong size on BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, EntryPoint) == 0x000000, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_WaitForExperienceReady_ReturnValue) == 0x000018, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_WaitForExperienceReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, Temp_real_OriginTime_Variable) == 0x000028, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::Temp_real_OriginTime_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, Temp_real_Proportion_Variable) == 0x000030, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::Temp_real_Proportion_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, Temp_real_TargetTime_Variable) == 0x000038, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::Temp_real_TargetTime_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000050, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000058, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000068, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000078, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000090, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000A8, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_BreakVector_X) == 0x0000C0, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_BreakVector_Y) == 0x0000C8, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_BreakVector_Z) == 0x0000D0, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x0000D8, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_MakeRotator_ReturnValue) == 0x0000E0, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000F8, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000100, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GetGameTimeInSeconds_ReturnValue_1) == 0x000108, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GetGameTimeInSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, Temp_bool_IsForward_Variable) == 0x000110, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::Temp_bool_IsForward_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000118, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Subtract_DoubleDouble_ReturnValue_3) == 0x000120, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Subtract_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_SelectFloat_ReturnValue) == 0x000128, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000130, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GetGameState_ReturnValue) == 0x000138, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GetComponentByClass_ReturnValue) == 0x000140, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GetObjectUniqueID_ReturnValue) == 0x000148, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GetObjectUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_IsValid_ReturnValue_1) == 0x000150, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000158, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, K2Node_Event_EndPlayReason) == 0x000170, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_HasAuthority_ReturnValue_1) == 0x000171, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GetGameState_ReturnValue_1) == 0x000178, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000180, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_IsValid_ReturnValue_2) == 0x000188, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_GetObjectUniqueID_ReturnValue_1) == 0x000190, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_GetObjectUniqueID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000198, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000280, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000298, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000380, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000384, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000388, "Member 'BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_ExtractDevice_Shadow.BP_ExtractDevice_Shadow_C.GetInteractionPromptText
// 0x0050 (0x0050 - 0x0000)
struct BP_ExtractDevice_Shadow_C_GetInteractionPromptText final
{
public:
	class APlayerController*                      Param_Instigator;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Key;                                               // 0x0008(0x0018)(Parm, OutParm)
	class FText                                   Out_Text_Line_1;                                   // 0x0020(0x0018)(Parm, OutParm)
	class FText                                   Out_Text_Line_2;                                   // 0x0038(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_ExtractDevice_Shadow_C_GetInteractionPromptText) == 0x000008, "Wrong alignment on BP_ExtractDevice_Shadow_C_GetInteractionPromptText");
static_assert(sizeof(BP_ExtractDevice_Shadow_C_GetInteractionPromptText) == 0x000050, "Wrong size on BP_ExtractDevice_Shadow_C_GetInteractionPromptText");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_GetInteractionPromptText, Param_Instigator) == 0x000000, "Member 'BP_ExtractDevice_Shadow_C_GetInteractionPromptText::Param_Instigator' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_GetInteractionPromptText, Key) == 0x000008, "Member 'BP_ExtractDevice_Shadow_C_GetInteractionPromptText::Key' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_GetInteractionPromptText, Out_Text_Line_1) == 0x000020, "Member 'BP_ExtractDevice_Shadow_C_GetInteractionPromptText::Out_Text_Line_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_GetInteractionPromptText, Out_Text_Line_2) == 0x000038, "Member 'BP_ExtractDevice_Shadow_C_GetInteractionPromptText::Out_Text_Line_2' has a wrong offset!");

// Function BP_ExtractDevice_Shadow.BP_ExtractDevice_Shadow_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_ExtractDevice_Shadow_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_Shadow_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_ExtractDevice_Shadow_C_ReceiveEndPlay");
static_assert(sizeof(BP_ExtractDevice_Shadow_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_ExtractDevice_Shadow_C_ReceiveEndPlay");
static_assert(offsetof(BP_ExtractDevice_Shadow_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_ExtractDevice_Shadow_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalState_Onboarding

#include "Basic.hpp"

#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function BP_GlobalState_Onboarding.BP_GlobalState_Onboarding_C.ExecuteUbergraph_BP_GlobalState_Onboarding
// 0x01B8 (0x01B8 - 0x0000)
struct BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_DoubleToInt64_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_DoubleToInt64_ReturnValue_1;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue_1;        // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_1;             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FReportRecord                          K2Node_MakeStruct_ReportRecord;                    // 0x0080(0x0090)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FReportRecord                          K2Node_MakeStruct_ReportRecord_1;                  // 0x0128(0x0090)()
};
static_assert(alignof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding) == 0x000008, "Wrong alignment on BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding");
static_assert(sizeof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding) == 0x0001B8, "Wrong size on BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, EntryPoint) == 0x000000, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000028, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetObjectClass_ReturnValue) == 0x000030, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_Conv_DoubleToInt64_ReturnValue) == 0x000038, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_Conv_DoubleToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetClassDisplayName_ReturnValue) == 0x000040, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetGameTimeInSeconds_ReturnValue_1) == 0x000050, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetGameTimeInSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetObjectClass_ReturnValue_1) == 0x000058, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_Conv_DoubleToInt64_ReturnValue_1) == 0x000060, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_Conv_DoubleToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetClassDisplayName_ReturnValue_1) == 0x000068, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetClassDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetOwningActor_ReturnValue_1) == 0x000078, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetOwningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, K2Node_MakeStruct_ReportRecord) == 0x000080, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::K2Node_MakeStruct_ReportRecord' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_IsValid_ReturnValue_1) == 0x000110, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, CallFunc_GetDisplayName_ReturnValue_1) == 0x000118, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding, K2Node_MakeStruct_ReportRecord_1) == 0x000128, "Member 'BP_GlobalState_Onboarding_C_ExecuteUbergraph_BP_GlobalState_Onboarding::K2Node_MakeStruct_ReportRecord_1' has a wrong offset!");

}


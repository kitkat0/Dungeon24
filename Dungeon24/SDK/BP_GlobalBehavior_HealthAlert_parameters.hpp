#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalBehavior_HealthAlert

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_GlobalBehavior_HealthAlert.BP_GlobalBehavior_HealthAlert_C.DoBehavior
// 0x00B8 (0x00B8 - 0x0000)
struct BP_GlobalBehavior_HealthAlert_C_DoBehavior final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_GlobalBehavior_HealthAlert_C_DoBehavior) == 0x000008, "Wrong alignment on BP_GlobalBehavior_HealthAlert_C_DoBehavior");
static_assert(sizeof(BP_GlobalBehavior_HealthAlert_C_DoBehavior) == 0x0000B8, "Wrong size on BP_GlobalBehavior_HealthAlert_C_DoBehavior");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoBehavior, GameplayTag) == 0x000000, "Member 'BP_GlobalBehavior_HealthAlert_C_DoBehavior::GameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoBehavior, EventData) == 0x000008, "Member 'BP_GlobalBehavior_HealthAlert_C_DoBehavior::EventData' has a wrong offset!");

// Function BP_GlobalBehavior_HealthAlert.BP_GlobalBehavior_HealthAlert_C.DoChecks
// 0x00D0 (0x00D0 - 0x0000)
struct BP_GlobalBehavior_HealthAlert_C_DoChecks final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          PassCheck;                                         // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GlobalBehavior_HealthAlert_C_DoChecks) == 0x000008, "Wrong alignment on BP_GlobalBehavior_HealthAlert_C_DoChecks");
static_assert(sizeof(BP_GlobalBehavior_HealthAlert_C_DoChecks) == 0x0000D0, "Wrong size on BP_GlobalBehavior_HealthAlert_C_DoChecks");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoChecks, GameplayTag) == 0x000000, "Member 'BP_GlobalBehavior_HealthAlert_C_DoChecks::GameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoChecks, EventData) == 0x000008, "Member 'BP_GlobalBehavior_HealthAlert_C_DoChecks::EventData' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoChecks, PassCheck) == 0x0000B8, "Member 'BP_GlobalBehavior_HealthAlert_C_DoChecks::PassCheck' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoChecks, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000C0, "Member 'BP_GlobalBehavior_HealthAlert_C_DoChecks::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoChecks, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x0000C8, "Member 'BP_GlobalBehavior_HealthAlert_C_DoChecks::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoChecks, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000C9, "Member 'BP_GlobalBehavior_HealthAlert_C_DoChecks::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_DoChecks, CallFunc_BooleanAND_ReturnValue) == 0x0000CA, "Member 'BP_GlobalBehavior_HealthAlert_C_DoChecks::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_GlobalBehavior_HealthAlert.BP_GlobalBehavior_HealthAlert_C.ExecuteUbergraph_BP_GlobalBehavior_HealthAlert
// 0x0120 (0x0120 - 0x0000)
struct BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_GameplayTag;                          // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0010(0x00B0)(ConstParm)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UAttributeSet*                    CallFunc_GetAttributeSet_ReturnValue;              // 0x00D0(0x0008)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTgfDefendAttributeSet*                 K2Node_DynamicCast_AsTgf_Defend_Attribute_Set;     // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHealthFinal_ReturnValue;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_102[0x6];                                      // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert) == 0x000008, "Wrong alignment on BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert");
static_assert(sizeof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert) == 0x000120, "Wrong size on BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, EntryPoint) == 0x000000, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, K2Node_Event_GameplayTag) == 0x000004, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::K2Node_Event_GameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, K2Node_Event_EventData) == 0x000010, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, K2Node_DynamicCast_AsLyra_Character) == 0x0000C0, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_GetAttributeSet_ReturnValue) == 0x0000D0, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_GetAttributeSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, K2Node_DynamicCast_AsTgf_Defend_Attribute_Set) == 0x0000D8, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::K2Node_DynamicCast_AsTgf_Defend_Attribute_Set' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_GetGameState_ReturnValue) == 0x0000E8, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_GetMaxHealthFinal_ReturnValue) == 0x0000F0, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_GetMaxHealthFinal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_IsValid_ReturnValue_1) == 0x0000F4, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000100, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000101, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000108, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000110, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000118, "Member 'BP_GlobalBehavior_HealthAlert_C_ExecuteUbergraph_BP_GlobalBehavior_HealthAlert::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}


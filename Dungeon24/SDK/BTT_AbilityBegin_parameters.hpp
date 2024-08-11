#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AbilityBegin

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BTT_AbilityBegin.BTT_AbilityBegin_C.ExecuteUbergraph_BTT_AbilityBegin
// 0x0128 (0x0128 - 0x0000)
struct BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x0008(0x0020)()
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Tgf_Monster_C*                      K2Node_DynamicCast_AsBP_Tgf_Monster;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveLooseGameplayTags_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetBlackboardValueAsClass_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsGameplay_Ability;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryActivateAbilityByClass_ReturnValue;    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0078(0x00B0)()
};
static_assert(alignof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin) == 0x000008, "Wrong alignment on BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin");
static_assert(sizeof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin) == 0x000128, "Wrong size on BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, EntryPoint) == 0x000000, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000008, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, K2Node_Event_OwnerController) == 0x000028, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, K2Node_Event_ControlledPawn) == 0x000030, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, K2Node_DynamicCast_AsBP_Tgf_Monster) == 0x000038, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::K2Node_DynamicCast_AsBP_Tgf_Monster' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000048, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, CallFunc_RemoveLooseGameplayTags_ReturnValue) == 0x000050, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::CallFunc_RemoveLooseGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000052, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, CallFunc_GetBlackboardValueAsClass_ReturnValue) == 0x000058, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::CallFunc_GetBlackboardValueAsClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, K2Node_ClassDynamicCast_AsGameplay_Ability) == 0x000060, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::K2Node_ClassDynamicCast_AsGameplay_Ability' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, K2Node_ClassDynamicCast_bSuccess) == 0x000068, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, CallFunc_TryActivateAbilityByClass_ReturnValue) == 0x000069, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::CallFunc_TryActivateAbilityByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000070, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin, K2Node_MakeStruct_GameplayEventData) == 0x000078, "Member 'BTT_AbilityBegin_C_ExecuteUbergraph_BTT_AbilityBegin::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");

// Function BTT_AbilityBegin.BTT_AbilityBegin_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_AbilityBegin_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_AbilityBegin_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_AbilityBegin_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_AbilityBegin_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_AbilityBegin_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_AbilityBegin_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_AbilityBegin_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_AbilityBegin_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_AbilityBegin_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

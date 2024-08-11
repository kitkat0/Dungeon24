#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalBehavior_InitializeInventory

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_GlobalBehavior_InitializeInventory.BP_GlobalBehavior_InitializeInventory_C.DoBehavior
// 0x00B8 (0x00B8 - 0x0000)
struct BP_GlobalBehavior_InitializeInventory_C_DoBehavior final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_GlobalBehavior_InitializeInventory_C_DoBehavior) == 0x000008, "Wrong alignment on BP_GlobalBehavior_InitializeInventory_C_DoBehavior");
static_assert(sizeof(BP_GlobalBehavior_InitializeInventory_C_DoBehavior) == 0x0000B8, "Wrong size on BP_GlobalBehavior_InitializeInventory_C_DoBehavior");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_DoBehavior, GameplayTag) == 0x000000, "Member 'BP_GlobalBehavior_InitializeInventory_C_DoBehavior::GameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_DoBehavior, EventData) == 0x000008, "Member 'BP_GlobalBehavior_InitializeInventory_C_DoBehavior::EventData' has a wrong offset!");

// Function BP_GlobalBehavior_InitializeInventory.BP_GlobalBehavior_InitializeInventory_C.ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory
// 0x00F8 (0x00F8 - 0x0000)
struct BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ExperienceReady*           CallFunc_WaitForExperienceReady_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Event_GameplayTag;                          // 0x0024(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0030(0x00B0)(ConstParm)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTgfInventoryManagerComponent*          CallFunc_GetComponentByClass_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory) == 0x000008, "Wrong alignment on BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory");
static_assert(sizeof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory) == 0x0000F8, "Wrong size on BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, EntryPoint) == 0x000000, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, CallFunc_WaitForExperienceReady_ReturnValue) == 0x000008, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::CallFunc_WaitForExperienceReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, K2Node_Event_GameplayTag) == 0x000024, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::K2Node_Event_GameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, K2Node_Event_EventData) == 0x000030, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000E0, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, CallFunc_GetComponentByClass_ReturnValue) == 0x0000E8, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory, CallFunc_IsValid_ReturnValue_2) == 0x0000F1, "Member 'BP_GlobalBehavior_InitializeInventory_C_ExecuteUbergraph_BP_GlobalBehavior_InitializeInventory::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

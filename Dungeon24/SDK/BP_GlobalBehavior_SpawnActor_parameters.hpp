#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalBehavior_SpawnActor

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_GlobalBehavior_SpawnActor.BP_GlobalBehavior_SpawnActor_C.DoBehavior
// 0x00B8 (0x00B8 - 0x0000)
struct BP_GlobalBehavior_SpawnActor_C_DoBehavior final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_GlobalBehavior_SpawnActor_C_DoBehavior) == 0x000008, "Wrong alignment on BP_GlobalBehavior_SpawnActor_C_DoBehavior");
static_assert(sizeof(BP_GlobalBehavior_SpawnActor_C_DoBehavior) == 0x0000B8, "Wrong size on BP_GlobalBehavior_SpawnActor_C_DoBehavior");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_DoBehavior, GameplayTag) == 0x000000, "Member 'BP_GlobalBehavior_SpawnActor_C_DoBehavior::GameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_DoBehavior, EventData) == 0x000008, "Member 'BP_GlobalBehavior_SpawnActor_C_DoBehavior::EventData' has a wrong offset!");

// Function BP_GlobalBehavior_SpawnActor.BP_GlobalBehavior_SpawnActor_C.ExecuteUbergraph_BP_GlobalBehavior_SpawnActor
// 0x00E8 (0x00E8 - 0x0000)
struct BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_GameplayTag;                          // 0x001C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0028(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor) == 0x000008, "Wrong alignment on BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor");
static_assert(sizeof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor) == 0x0000E8, "Wrong size on BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor, EntryPoint) == 0x000000, "Member 'BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor, Temp_delegate_Variable) == 0x000004, "Member 'BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor, CallFunc_PostEvent_ReturnValue) == 0x000018, "Member 'BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor, K2Node_Event_GameplayTag) == 0x00001C, "Member 'BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor::K2Node_Event_GameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor, K2Node_Event_EventData) == 0x000028, "Member 'BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000D8, "Member 'BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000E0, "Member 'BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

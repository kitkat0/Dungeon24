#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_InteractWithMapByPress

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_InteractWithMapByPress.GA_TGF_InteractWithMapByPress_C.EventReceived_84B16F534290D61B99CEC99BB83E19BD
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TGF_InteractWithMapByPress_C_EventReceived_84B16F534290D61B99CEC99BB83E19BD final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_TGF_InteractWithMapByPress_C_EventReceived_84B16F534290D61B99CEC99BB83E19BD) == 0x000008, "Wrong alignment on GA_TGF_InteractWithMapByPress_C_EventReceived_84B16F534290D61B99CEC99BB83E19BD");
static_assert(sizeof(GA_TGF_InteractWithMapByPress_C_EventReceived_84B16F534290D61B99CEC99BB83E19BD) == 0x0000B0, "Wrong size on GA_TGF_InteractWithMapByPress_C_EventReceived_84B16F534290D61B99CEC99BB83E19BD");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_EventReceived_84B16F534290D61B99CEC99BB83E19BD, Payload) == 0x000000, "Member 'GA_TGF_InteractWithMapByPress_C_EventReceived_84B16F534290D61B99CEC99BB83E19BD::Payload' has a wrong offset!");

// Function GA_TGF_InteractWithMapByPress.GA_TGF_InteractWithMapByPress_C.ExecuteUbergraph_GA_TGF_InteractWithMapByPress
// 0x01D0 (0x01D0 - 0x0000)
struct GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0010(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D0(0x00B0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_Array_Get_Item;                           // 0x018C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A5[0x3];                                      // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraAbilitySystemComponent*            CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue; // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue_1;     // 0x01B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraAbilitySystemComponent*            CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue_1; // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress) == 0x000008, "Wrong alignment on GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress");
static_assert(sizeof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress) == 0x0001D0, "Wrong size on GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, EntryPoint) == 0x000000, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000004, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, K2Node_CustomEvent_Payload) == 0x000010, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, Temp_struct_Variable) == 0x0000D0, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, Temp_int_Array_Index_Variable) == 0x000184, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_IsDedicatedServer_ReturnValue) == 0x000188, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_Array_Get_Item) == 0x00018C, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000198, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_Array_Length_ReturnValue) == 0x0001A0, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_IsValid_ReturnValue_1) == 0x0001A4, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue) == 0x0001A8, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_MakeLiteralGameplayTag_ReturnValue_1) == 0x0001B0, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_MakeLiteralGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, Temp_int_Loop_Counter_Variable) == 0x0001B8, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_Less_IntInt_ReturnValue) == 0x0001BC, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_Add_IntInt_ReturnValue) == 0x0001C0, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress, CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue_1) == 0x0001C8, "Member 'GA_TGF_InteractWithMapByPress_C_ExecuteUbergraph_GA_TGF_InteractWithMapByPress::CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue_1' has a wrong offset!");

// Function GA_TGF_InteractWithMapByPress.GA_TGF_InteractWithMapByPress_C.K2_CheckValidFromInputTag
// 0x000C (0x000C - 0x0000)
struct GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag final
{
public:
	struct FGameplayTag                           InputTag;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChargeSkillMethod_ReturnValue;         // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag) == 0x000004, "Wrong alignment on GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag");
static_assert(sizeof(GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag) == 0x00000C, "Wrong size on GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag, InputTag) == 0x000000, "Member 'GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag::InputTag' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag, ReturnValue) == 0x000008, "Member 'GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag, CallFunc_GetChargeSkillMethod_ReturnValue) == 0x000009, "Member 'GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag::CallFunc_GetChargeSkillMethod_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'GA_TGF_InteractWithMapByPress_C_K2_CheckValidFromInputTag::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}


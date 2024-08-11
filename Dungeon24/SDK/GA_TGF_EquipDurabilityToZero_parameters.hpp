#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_EquipDurabilityToZero

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_EquipDurabilityToZero.GA_TGF_EquipDurabilityToZero_C.ExecuteUbergraph_GA_TGF_EquipDurabilityToZero
// 0x0160 (0x0160 - 0x0000)
struct GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLyraEquipmentChangeMessage            Temp_struct_Variable;                              // 0x0008(0x0008)(NoDestructor, ContainsInstancedReference)
	class UAsyncAction_ListenForGameplayMessage*  K2Node_CustomEvent_ProxyObject;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_ActualChannel;                  // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLyraEquipmentChangeMessage            Temp_struct_Variable_1;                            // 0x0030(0x0008)(NoDestructor, ContainsInstancedReference)
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAsyncAction_ListenForGameplayMessage*  Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncAction_ListenForGameplayMessage*  CallFunc_ListenForGameplayMessages_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0058(0x00B0)(ConstParm)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTgfEquipmentManagerComponent*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasZeroDurabilityEquip_ReturnValue;       // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x2];                                      // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_ApplyGameplayEffectToOwnerWithTags_ReturnValue; // 0x0124(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0148(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero) == 0x000008, "Wrong alignment on GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero");
static_assert(sizeof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero) == 0x000160, "Wrong size on GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, EntryPoint) == 0x000000, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, Temp_struct_Variable) == 0x000008, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, K2Node_CustomEvent_ProxyObject) == 0x000010, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, K2Node_CustomEvent_ActualChannel) == 0x000018, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::K2Node_CustomEvent_ActualChannel' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, Temp_struct_Variable_1) == 0x000030, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, Temp_struct_Variable_2) == 0x000038, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, Temp_object_Variable) == 0x000040, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_ListenForGameplayMessages_ReturnValue) == 0x000048, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_ListenForGameplayMessages_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_GetPayload_ReturnValue) == 0x000050, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_GetPayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, K2Node_Event_EventData) == 0x000058, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000108, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_IsValid_ReturnValue_1) == 0x000110, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_GetComponentByClass_ReturnValue) == 0x000118, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_IsValid_ReturnValue_2) == 0x000120, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_HasZeroDurabilityEquip_ReturnValue) == 0x000121, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_HasZeroDurabilityEquip_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_ApplyGameplayEffectToOwnerWithTags_ReturnValue) == 0x000124, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_ApplyGameplayEffectToOwnerWithTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000130, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000138, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_K2_CommitAbility_ReturnValue) == 0x000140, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000148, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000158, "Member 'GA_TGF_EquipDurabilityToZero_C_ExecuteUbergraph_GA_TGF_EquipDurabilityToZero::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

// Function GA_TGF_EquipDurabilityToZero.GA_TGF_EquipDurabilityToZero_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TGF_EquipDurabilityToZero_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_TGF_EquipDurabilityToZero_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_TGF_EquipDurabilityToZero_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_TGF_EquipDurabilityToZero_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_TGF_EquipDurabilityToZero_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_TGF_EquipDurabilityToZero_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_TGF_EquipDurabilityToZero.GA_TGF_EquipDurabilityToZero_C.OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0
// 0x0010 (0x0010 - 0x0000)
struct GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0 final
{
public:
	class UAsyncAction_ListenForGameplayMessage*  ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ActualChannel;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0) == 0x000008, "Wrong alignment on GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0");
static_assert(sizeof(GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0) == 0x000010, "Wrong size on GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0, ProxyObject) == 0x000000, "Member 'GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0::ProxyObject' has a wrong offset!");
static_assert(offsetof(GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0, ActualChannel) == 0x000008, "Member 'GA_TGF_EquipDurabilityToZero_C_OnMessageReceived_2A8E05A64F9F18B405EC178DA748FAB0::ActualChannel' has a wrong offset!");

}

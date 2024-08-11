#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_FullHPEffect

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_FullHPEffect.GA_TGF_FullHPEffect_C.EventReceived_98D1D30F4074C2A7B504139FE7424650
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TGF_FullHPEffect_C_EventReceived_98D1D30F4074C2A7B504139FE7424650 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_TGF_FullHPEffect_C_EventReceived_98D1D30F4074C2A7B504139FE7424650) == 0x000008, "Wrong alignment on GA_TGF_FullHPEffect_C_EventReceived_98D1D30F4074C2A7B504139FE7424650");
static_assert(sizeof(GA_TGF_FullHPEffect_C_EventReceived_98D1D30F4074C2A7B504139FE7424650) == 0x0000B0, "Wrong size on GA_TGF_FullHPEffect_C_EventReceived_98D1D30F4074C2A7B504139FE7424650");
static_assert(offsetof(GA_TGF_FullHPEffect_C_EventReceived_98D1D30F4074C2A7B504139FE7424650, Payload) == 0x000000, "Member 'GA_TGF_FullHPEffect_C_EventReceived_98D1D30F4074C2A7B504139FE7424650::Payload' has a wrong offset!");

// Function GA_TGF_FullHPEffect.GA_TGF_FullHPEffect_C.ExecuteUbergraph_GA_TGF_FullHPEffect
// 0x01A0 (0x01A0 - 0x0000)
struct GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00C8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHPFull_ReturnValue;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0194(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect) == 0x000008, "Wrong alignment on GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect");
static_assert(sizeof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect) == 0x0001A0, "Wrong size on GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, EntryPoint) == 0x000000, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, Temp_struct_Variable) == 0x0000C8, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000178, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000188, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, CallFunc_IsHPFull_ReturnValue) == 0x000190, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::CallFunc_IsHPFull_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000194, "Member 'GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

}


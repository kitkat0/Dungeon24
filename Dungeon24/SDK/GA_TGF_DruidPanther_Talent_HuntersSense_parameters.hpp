#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_DruidPanther_Talent_HuntersSense

#include "Basic.hpp"

#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_DruidPanther_Talent_HuntersSense.GA_TGF_DruidPanther_Talent_HuntersSense_C.ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense
// 0x0080 (0x0080 - 0x0000)
struct GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTgfAuraManagerComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTgfAuraManagerComponent*               CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTgfActiveGameplayAuraHandle           CallFunc_AddGameplayAura_ReturnValue;              // 0x007C(0x0004)(NoDestructor)
};
static_assert(alignof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense) == 0x000008, "Wrong alignment on GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense");
static_assert(sizeof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense) == 0x000080, "Wrong size on GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, EntryPoint) == 0x000000, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000010, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_IsValid_ReturnValue_2) == 0x000028, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000040, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_IsValid_ReturnValue_3) == 0x000048, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, K2Node_Event_bWasCancelled) == 0x000049, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1) == 0x000060, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_IsValid_ReturnValue_4) == 0x000068, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000070, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_IsValid_ReturnValue_5) == 0x000078, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_IsValid_ReturnValue_6) == 0x000079, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense, CallFunc_AddGameplayAura_ReturnValue) == 0x00007C, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense::CallFunc_AddGameplayAura_ReturnValue' has a wrong offset!");

// Function GA_TGF_DruidPanther_Talent_HuntersSense.GA_TGF_DruidPanther_Talent_HuntersSense_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_TGF_DruidPanther_Talent_HuntersSense_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_DruidPanther_Talent_HuntersSense_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_TGF_DruidPanther_Talent_HuntersSense_C_K2_OnEndAbility");
static_assert(sizeof(GA_TGF_DruidPanther_Talent_HuntersSense_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_TGF_DruidPanther_Talent_HuntersSense_C_K2_OnEndAbility");
static_assert(offsetof(GA_TGF_DruidPanther_Talent_HuntersSense_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_TGF_DruidPanther_Talent_HuntersSense_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

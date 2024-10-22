#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_OpeningChest

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_OpeningChest.GA_TGF_OpeningChest_C.ExecuteUbergraph_GA_TGF_OpeningChest
// 0x0080 (0x0080 - 0x0000)
struct GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Round_ReturnValue;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1; // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x1];                                       // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1; // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2; // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2; // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x0054(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x005C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Round_A_ImplicitCast;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest) == 0x000008, "Wrong alignment on GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest");
static_assert(sizeof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest) == 0x000080, "Wrong size on GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, EntryPoint) == 0x000000, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000010, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000020, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000028, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute) == 0x000030, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue) == 0x000034, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_Round_ReturnValue) == 0x00003C, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1) == 0x000042, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1) == 0x000044, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000048, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2) == 0x000049, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2) == 0x00004C, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_BooleanAND_ReturnValue_1) == 0x000050, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000051, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_BooleanAND_ReturnValue_2) == 0x000052, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_BooleanAND_ReturnValue_3) == 0x000053, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000054, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1) == 0x00005C, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_Round_A_ImplicitCast) == 0x000068, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_Round_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest, CallFunc_Greater_DoubleDouble_A_ImplicitCast_1) == 0x000078, "Member 'GA_TGF_OpeningChest_C_ExecuteUbergraph_GA_TGF_OpeningChest::CallFunc_Greater_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}


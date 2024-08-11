#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_NoMoveRotAbility_Base

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_NoMoveRotAbility_Base.GA_TGF_NoMoveRotAbility_Base_C.ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base
// 0x0170 (0x0170 - 0x0000)
struct GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0008(0x0020)()
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1; // 0x0028(0x0020)()
	class ULyraAbilitySystemComponent*            CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETgfActorType                                 CallFunc_GetActorType_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2; // 0x0060(0x0020)()
	bool                                          CallFunc_IsMonster_ReturnValue;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddLooseGameplayTags_ReturnValue;         // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3; // 0x0090(0x0020)()
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveLooseGameplayTags_ReturnValue;      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_4; // 0x00C0(0x0020)()
	bool                                          K2Node_Event_bWasCancelled;                        // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddLooseGameplayTags_ReturnValue_1;       // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3; // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_5; // 0x00F0(0x0020)()
	bool                                          CallFunc_RemoveLooseGameplayTags_ReturnValue_1;    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_4; // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_6; // 0x0120(0x0020)()
	ETgfActorType                                 CallFunc_GetActorType_ReturnValue_1;               // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_7; // 0x0148(0x0020)()
	bool                                          CallFunc_IsMonster_ReturnValue_1;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base) == 0x000008, "Wrong alignment on GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base");
static_assert(sizeof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base) == 0x000170, "Wrong size on GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, EntryPoint) == 0x000000, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000008, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1) == 0x000028, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000048, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_GetLyraAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000050, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_GetActorType_ReturnValue) == 0x000058, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_GetActorType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2) == 0x000060, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_IsMonster_ReturnValue) == 0x000080, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_IsMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_AddLooseGameplayTags_ReturnValue) == 0x000081, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_AddLooseGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1) == 0x000088, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3) == 0x000090, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2) == 0x0000B0, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_RemoveLooseGameplayTags_ReturnValue) == 0x0000B8, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_RemoveLooseGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_4) == 0x0000C0, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, K2Node_Event_bWasCancelled) == 0x0000E0, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_AddLooseGameplayTags_ReturnValue_1) == 0x0000E1, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_AddLooseGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3) == 0x0000E8, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_5) == 0x0000F0, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_RemoveLooseGameplayTags_ReturnValue_1) == 0x000110, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_RemoveLooseGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_4) == 0x000118, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_6) == 0x000120, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_GetActorType_ReturnValue_1) == 0x000140, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_GetActorType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_7) == 0x000148, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base, CallFunc_IsMonster_ReturnValue_1) == 0x000168, "Member 'GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base::CallFunc_IsMonster_ReturnValue_1' has a wrong offset!");

// Function GA_TGF_NoMoveRotAbility_Base.GA_TGF_NoMoveRotAbility_Base_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_TGF_NoMoveRotAbility_Base_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_NoMoveRotAbility_Base_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_TGF_NoMoveRotAbility_Base_C_K2_OnEndAbility");
static_assert(sizeof(GA_TGF_NoMoveRotAbility_Base_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_TGF_NoMoveRotAbility_Base_C_K2_OnEndAbility");
static_assert(offsetof(GA_TGF_NoMoveRotAbility_Base_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_TGF_NoMoveRotAbility_Base_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

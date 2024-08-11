#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Rebirth_Mithril

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_Rebirth_Mithril.GA_TGF_Rebirth_Mithril_C.CanMithrilRebirth
// 0x0050 (0x0050 - 0x0000)
struct GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth final
{
public:
	bool                                          Param_CanRebirth;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraPlayerState*                       CallFunc_GetLyraPlayerState_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMithrilRemainingRebirthChances_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsMithrilCharacter_ReturnValue;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth) == 0x000008, "Wrong alignment on GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth");
static_assert(sizeof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth) == 0x000050, "Wrong size on GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, Param_CanRebirth) == 0x000000, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::Param_CanRebirth' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000014, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000018, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000020, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_GetLyraPlayerState_ReturnValue) == 0x000030, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_GetLyraPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_GetMithrilRemainingRebirthChances_ReturnValue) == 0x00003C, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_GetMithrilRemainingRebirthChances_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_GetIsMithrilCharacter_ReturnValue) == 0x000041, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_GetIsMithrilCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'GA_TGF_Rebirth_Mithril_C_CanMithrilRebirth::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function GA_TGF_Rebirth_Mithril.GA_TGF_Rebirth_Mithril_C.ExecuteUbergraph_GA_TGF_Rebirth_Mithril
// 0x03F0 (0x03F0 - 0x0000)
struct GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanMithrilRebirth_CanRebirth;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0xB];                                        // 0x0005(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRebirthTransform_Transform;            // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Fighter_HeroSample_C*               K2Node_DynamicCast_AsBP_Fighter_Hero_Sample;       // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_168[0x8];                                      // 0x0168(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0170(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MithrilGrave_C*                     CallFunc_FinishSpawningActor_ReturnValue;          // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2; // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Fighter_HeroSample_C*               K2Node_DynamicCast_AsBP_Fighter_Hero_Sample_1;     // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x01F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3; // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0218(0x00B0)(ConstParm)
	bool                                          CallFunc_K2_TeleportTo_ReturnValue;                // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x02D0(0x00B0)()
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0380(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMithrillCharacter_ReturnValue;          // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E2[0x2];                                      // 0x03E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril) == 0x000010, "Wrong alignment on GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril");
static_assert(sizeof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril) == 0x0003F0, "Wrong size on GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, EntryPoint) == 0x000000, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_CanMithrilRebirth_CanRebirth) == 0x000004, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_CanMithrilRebirth_CanRebirth' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_GetRebirthTransform_Transform) == 0x000010, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_GetRebirthTransform_Transform' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakTransform_Location) == 0x000070, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakTransform_Rotation) == 0x000088, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakTransform_Scale) == 0x0000A0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x0000B8, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_K2_CommitAbility_ReturnValue) == 0x0000C0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, K2Node_DynamicCast_AsBP_Fighter_Hero_Sample) == 0x0000C8, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::K2Node_DynamicCast_AsBP_Fighter_Hero_Sample' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1) == 0x0000D8, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakTransform_Location_1) == 0x0000E0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakTransform_Rotation_1) == 0x0000F8, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakTransform_Scale_1) == 0x000110, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakVector_X) == 0x000128, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakVector_Y) == 0x000130, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BreakVector_Z) == 0x000138, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000140, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000148, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_MakeVector_ReturnValue) == 0x000150, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_MakeTransform_ReturnValue) == 0x000170, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001D0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001D8, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2) == 0x0001E0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, K2Node_DynamicCast_AsBP_Fighter_Hero_Sample_1) == 0x0001E8, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::K2Node_DynamicCast_AsBP_Fighter_Hero_Sample_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, K2Node_DynamicCast_bSuccess_1) == 0x0001F0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0001F8, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000208, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3) == 0x000210, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, K2Node_Event_EventData) == 0x000218, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_K2_TeleportTo_ReturnValue) == 0x0002C8, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_K2_TeleportTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, K2Node_MakeStruct_GameplayEventData) == 0x0002D0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_GetTransform_ReturnValue) == 0x000380, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_IsMithrillCharacter_ReturnValue) == 0x0003E0, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_IsMithrillCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_IsValid_ReturnValue) == 0x0003E1, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril, CallFunc_Delay_Duration_ImplicitCast) == 0x0003E4, "Member 'GA_TGF_Rebirth_Mithril_C_ExecuteUbergraph_GA_TGF_Rebirth_Mithril::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function GA_TGF_Rebirth_Mithril.GA_TGF_Rebirth_Mithril_C.GetRebirthTransform
// 0x02A0 (0x02A0 - 0x0000)
struct GA_TGF_Rebirth_Mithril_C_GetRebirthTransform final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ALyraPlayerStart*>               UnusedPlayerStarts;                                // 0x0060(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         SelfTeamId;                                        // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraPlayerSpawningManagerComponent*    CallFunc_GetComponentByClass_ReturnValue;          // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DeathZone_C*                        CallFunc_GetActorOfClass_ReturnValue;              // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSpawnTransform_ReturnValue;            // 0x0140(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                           CallFunc_GetRandomPlayerStartOutRegion_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                           CallFunc_GetRandomPlayerStartOutRegion_ReturnValue_1; // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C2[0xE];                                      // 0x01C2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x01D0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0230(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomPlayerStartOutRegion_Radius_ImplicitCast; // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomPlayerStartOutRegion_Radius_ImplicitCast_1; // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomPlayerStartOutRegion_DeathZoneRadius_ImplicitCast; // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform) == 0x000010, "Wrong alignment on GA_TGF_Rebirth_Mithril_C_GetRebirthTransform");
static_assert(sizeof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform) == 0x0002A0, "Wrong size on GA_TGF_Rebirth_Mithril_C_GetRebirthTransform");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, Transform) == 0x000000, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::Transform' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, UnusedPlayerStarts) == 0x000060, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::UnusedPlayerStarts' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, SelfTeamId) == 0x000070, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::SelfTeamId' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_BreakTransform_Location) == 0x000078, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_BreakTransform_Rotation) == 0x000090, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_BreakTransform_Scale) == 0x0000A8, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetGameState_ReturnValue) == 0x0000C0, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_BreakTransform_Location_1) == 0x0000C8, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_BreakTransform_Rotation_1) == 0x0000E0, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_BreakTransform_Scale_1) == 0x0000F8, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetComponentByClass_ReturnValue) == 0x000118, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetActorOfClass_ReturnValue) == 0x000128, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_IsValid_ReturnValue_2) == 0x000130, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000138, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetSpawnTransform_ReturnValue) == 0x000140, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetSpawnTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_IsValid_ReturnValue_3) == 0x0001A0, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetController_ReturnValue) == 0x0001A8, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetRandomPlayerStartOutRegion_ReturnValue) == 0x0001B0, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetRandomPlayerStartOutRegion_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetRandomPlayerStartOutRegion_ReturnValue_1) == 0x0001B8, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetRandomPlayerStartOutRegion_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_IsValid_ReturnValue_4) == 0x0001C0, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_IsValid_ReturnValue_5) == 0x0001C1, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetTransform_ReturnValue) == 0x0001D0, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetTransform_ReturnValue_1) == 0x000230, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetRandomPlayerStartOutRegion_Radius_ImplicitCast) == 0x000290, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetRandomPlayerStartOutRegion_Radius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetRandomPlayerStartOutRegion_Radius_ImplicitCast_1) == 0x000294, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetRandomPlayerStartOutRegion_Radius_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_GetRebirthTransform, CallFunc_GetRandomPlayerStartOutRegion_DeathZoneRadius_ImplicitCast) == 0x000298, "Member 'GA_TGF_Rebirth_Mithril_C_GetRebirthTransform::CallFunc_GetRandomPlayerStartOutRegion_DeathZoneRadius_ImplicitCast' has a wrong offset!");

// Function GA_TGF_Rebirth_Mithril.GA_TGF_Rebirth_Mithril_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_TGF_Rebirth_Mithril_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_TGF_Rebirth_Mithril_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_TGF_Rebirth_Mithril_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_TGF_Rebirth_Mithril_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_TGF_Rebirth_Mithril_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_TGF_Rebirth_Mithril_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_TGF_Rebirth_Mithril_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}


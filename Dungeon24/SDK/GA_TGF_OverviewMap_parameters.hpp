#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_OverviewMap

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "LyraGame_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_OverviewMap.GA_TGF_OverviewMap_C.ExecuteUbergraph_GA_TGF_OverviewMap
// 0x0070 (0x0070 - 0x0000)
struct GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInputModifier*>                 Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionValue                      CallFunc_MakeInputActionValueOfType_ReturnValue;   // 0x0020(0x0020)(NoDestructor)
	TArray<class UInputTrigger*>                  Temp_object_Variable_1;                            // 0x0040(0x0010)(ConstParm, ReferenceParm)
	class ALyraPlayerController*                  CallFunc_GetLyraPlayerControllerFromActorInfo_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputLocalPlayerSubsystem*     CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_InjectInputForAction_self_CastInput;      // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap) == 0x000008, "Wrong alignment on GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap");
static_assert(sizeof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap) == 0x000070, "Wrong size on GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, EntryPoint) == 0x000000, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, Temp_object_Variable) == 0x000008, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, K2Node_Event_bWasCancelled) == 0x000018, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, CallFunc_K2_HasAuthority_ReturnValue) == 0x000019, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, CallFunc_MakeInputActionValueOfType_ReturnValue) == 0x000020, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::CallFunc_MakeInputActionValueOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, Temp_object_Variable_1) == 0x000040, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, CallFunc_GetLyraPlayerControllerFromActorInfo_ReturnValue) == 0x000050, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::CallFunc_GetLyraPlayerControllerFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000058, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap, CallFunc_InjectInputForAction_self_CastInput) == 0x000060, "Member 'GA_TGF_OverviewMap_C_ExecuteUbergraph_GA_TGF_OverviewMap::CallFunc_InjectInputForAction_self_CastInput' has a wrong offset!");

// Function GA_TGF_OverviewMap.GA_TGF_OverviewMap_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_TGF_OverviewMap_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_OverviewMap_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_TGF_OverviewMap_C_K2_OnEndAbility");
static_assert(sizeof(GA_TGF_OverviewMap_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_TGF_OverviewMap_C_K2_OnEndAbility");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_TGF_OverviewMap_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_TGF_OverviewMap.GA_TGF_OverviewMap_C.OnWidgetPushSuccess
// 0x0008 (0x0008 - 0x0000)
struct GA_TGF_OverviewMap_C_OnWidgetPushSuccess final
{
public:
	class UUserWidget*                            UserWidgetPage;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_OverviewMap_C_OnWidgetPushSuccess) == 0x000008, "Wrong alignment on GA_TGF_OverviewMap_C_OnWidgetPushSuccess");
static_assert(sizeof(GA_TGF_OverviewMap_C_OnWidgetPushSuccess) == 0x000008, "Wrong size on GA_TGF_OverviewMap_C_OnWidgetPushSuccess");
static_assert(offsetof(GA_TGF_OverviewMap_C_OnWidgetPushSuccess, UserWidgetPage) == 0x000000, "Member 'GA_TGF_OverviewMap_C_OnWidgetPushSuccess::UserWidgetPage' has a wrong offset!");

// Function GA_TGF_OverviewMap.GA_TGF_OverviewMap_C.K2_CanActivateAbility
// 0x00D8 (0x00D8 - 0x0000)
struct GA_TGF_OverviewMap_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle             Handle;                                            // 0x0048(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0050(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraGameState*                         K2Node_DynamicCast_AsLyra_Game_State;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraPlayerController*                  CallFunc_GetLyraPlayerControllerFromActorInfo_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHomelandMatchType_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPVPMatchType_ReturnValue;               // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraPlayerState*                       CallFunc_GetLyraPlayerState_ReturnValue;           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfPlayerSceneTag                            CallFunc_GetPlayerSceneTag_ReturnValue;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C3[0x5];                                       // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_TgfGame_PlayerGameFlow_C*           CallFunc_GetComponentByClass_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_OverviewMap_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_TGF_OverviewMap_C_K2_CanActivateAbility");
static_assert(sizeof(GA_TGF_OverviewMap_C_K2_CanActivateAbility) == 0x0000D8, "Wrong size on GA_TGF_OverviewMap_C_K2_CanActivateAbility");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_GetGameState_ReturnValue) == 0x000078, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, K2Node_DynamicCast_AsLyra_Game_State) == 0x000080, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::K2Node_DynamicCast_AsLyra_Game_State' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_GetLyraPlayerControllerFromActorInfo_ReturnValue) == 0x000090, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_GetLyraPlayerControllerFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_IsHomelandMatchType_ReturnValue) == 0x000098, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_IsHomelandMatchType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_GetViewTarget_ReturnValue) == 0x0000A0, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, K2Node_DynamicCast_AsLyra_Character) == 0x0000A8, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_IsPVPMatchType_ReturnValue) == 0x0000B1, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_IsPVPMatchType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_GetLyraPlayerState_ReturnValue) == 0x0000B8, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_GetLyraPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_BooleanOR_ReturnValue) == 0x0000C0, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_GetPlayerSceneTag_ReturnValue) == 0x0000C1, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_GetPlayerSceneTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C2, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_GetComponentByClass_ReturnValue) == 0x0000C8, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_OverviewMap_C_K2_CanActivateAbility, CallFunc_IsValid_ReturnValue_1) == 0x0000D0, "Member 'GA_TGF_OverviewMap_C_K2_CanActivateAbility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

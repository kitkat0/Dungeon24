#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Phase_TgfGame_WarmUp

#include "Basic.hpp"


namespace SDK::Params
{

// Function Phase_TgfGame_WarmUp.Phase_TgfGame_WarmUp_C.ExecuteUbergraph_Phase_TgfGame_WarmUp
// 0x0040 (0x0040 - 0x0000)
struct Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ULyraGamePhaseAbility* Phase)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraGamePhaseSubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_LyraGameMode_C*                      K2Node_DynamicCast_AsB_Lyra_Game_Mode;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp) == 0x000008, "Wrong alignment on Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp");
static_assert(sizeof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp) == 0x000040, "Wrong size on Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp");
static_assert(offsetof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp, EntryPoint) == 0x000000, "Member 'Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp, Temp_delegate_Variable) == 0x000004, "Member 'Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp, CallFunc_IsDedicatedServer_ReturnValue) == 0x000020, "Member 'Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp, CallFunc_GetGameMode_ReturnValue) == 0x000028, "Member 'Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp, K2Node_DynamicCast_AsB_Lyra_Game_Mode) == 0x000030, "Member 'Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp::K2Node_DynamicCast_AsB_Lyra_Game_Mode' has a wrong offset!");
static_assert(offsetof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp, CallFunc_Delay_Duration_ImplicitCast) == 0x00003C, "Member 'Phase_TgfGame_WarmUp_C_ExecuteUbergraph_Phase_TgfGame_WarmUp::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}


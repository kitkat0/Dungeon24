#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TGF_MithrilRebirth_CountDown_Spectate

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_TGF_MithrilRebirth_CountDown_Spectate.WBP_TGF_MithrilRebirth_CountDown_Spectate_C.ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate
// 0x0038 (0x0038 - 0x0000)
struct WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* OwningActor)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_CustomEvent_Character;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OwningActor;                    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate) == 0x000008, "Wrong alignment on WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate");
static_assert(sizeof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate) == 0x000038, "Wrong size on WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate, EntryPoint) == 0x000000, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate, K2Node_CustomEvent_Character) == 0x000020, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate, K2Node_CustomEvent_OwningActor) == 0x000028, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate::K2Node_CustomEvent_OwningActor' has a wrong offset!");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_TGF_MithrilRebirth_CountDown_Spectate.WBP_TGF_MithrilRebirth_CountDown_Spectate_C.RebirthFinish
// 0x0008 (0x0008 - 0x0000)
struct WBP_TGF_MithrilRebirth_CountDown_Spectate_C_RebirthFinish final
{
public:
	class AActor*                                 OwningActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_RebirthFinish) == 0x000008, "Wrong alignment on WBP_TGF_MithrilRebirth_CountDown_Spectate_C_RebirthFinish");
static_assert(sizeof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_RebirthFinish) == 0x000008, "Wrong size on WBP_TGF_MithrilRebirth_CountDown_Spectate_C_RebirthFinish");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_RebirthFinish, OwningActor) == 0x000000, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_RebirthFinish::OwningActor' has a wrong offset!");

// Function WBP_TGF_MithrilRebirth_CountDown_Spectate.WBP_TGF_MithrilRebirth_CountDown_Spectate_C.SetTargetCharacter
// 0x0008 (0x0008 - 0x0000)
struct WBP_TGF_MithrilRebirth_CountDown_Spectate_C_SetTargetCharacter final
{
public:
	class ALyraCharacter*                         Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_SetTargetCharacter) == 0x000008, "Wrong alignment on WBP_TGF_MithrilRebirth_CountDown_Spectate_C_SetTargetCharacter");
static_assert(sizeof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_SetTargetCharacter) == 0x000008, "Wrong size on WBP_TGF_MithrilRebirth_CountDown_Spectate_C_SetTargetCharacter");
static_assert(offsetof(WBP_TGF_MithrilRebirth_CountDown_Spectate_C_SetTargetCharacter, Character) == 0x000000, "Member 'WBP_TGF_MithrilRebirth_CountDown_Spectate_C_SetTargetCharacter::Character' has a wrong offset!");

}

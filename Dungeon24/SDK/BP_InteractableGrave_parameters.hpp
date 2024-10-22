#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractableGrave

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_InteractableGrave.BP_InteractableGrave_C.ExecuteUbergraph_BP_InteractableGrave
// 0x0040 (0x0040 - 0x0000)
struct BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraEquipmentManagerComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_InteractingPawn;                      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULyraInventoryManagerComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MapInteractionComponent_C*          CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave) == 0x000008, "Wrong alignment on BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave");
static_assert(sizeof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave) == 0x000040, "Wrong size on BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave");
static_assert(offsetof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave, EntryPoint) == 0x000000, "Member 'BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave, K2Node_Event_InteractingPawn) == 0x000010, "Member 'BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave::K2Node_Event_InteractingPawn' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000018, "Member 'BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000030, "Member 'BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_InteractableGrave.BP_InteractableGrave_C.GetInteractionPromptText
// 0x0050 (0x0050 - 0x0000)
struct BP_InteractableGrave_C_GetInteractionPromptText final
{
public:
	class APlayerController*                      Param_Instigator;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Key;                                               // 0x0008(0x0018)(Parm, OutParm)
	class FText                                   Out_Text_Line_1;                                   // 0x0020(0x0018)(Parm, OutParm)
	class FText                                   Out_Text_Line_2;                                   // 0x0038(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_InteractableGrave_C_GetInteractionPromptText) == 0x000008, "Wrong alignment on BP_InteractableGrave_C_GetInteractionPromptText");
static_assert(sizeof(BP_InteractableGrave_C_GetInteractionPromptText) == 0x000050, "Wrong size on BP_InteractableGrave_C_GetInteractionPromptText");
static_assert(offsetof(BP_InteractableGrave_C_GetInteractionPromptText, Param_Instigator) == 0x000000, "Member 'BP_InteractableGrave_C_GetInteractionPromptText::Param_Instigator' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_GetInteractionPromptText, Key) == 0x000008, "Member 'BP_InteractableGrave_C_GetInteractionPromptText::Key' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_GetInteractionPromptText, Out_Text_Line_1) == 0x000020, "Member 'BP_InteractableGrave_C_GetInteractionPromptText::Out_Text_Line_1' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_GetInteractionPromptText, Out_Text_Line_2) == 0x000038, "Member 'BP_InteractableGrave_C_GetInteractionPromptText::Out_Text_Line_2' has a wrong offset!");

// Function BP_InteractableGrave.BP_InteractableGrave_C.Initialize Loot Info
// 0x0018 (0x0018 - 0x0000)
struct BP_InteractableGrave_C_Initialize_Loot_Info final
{
public:
	class ALyraCharacter*                         SourceCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ItemFunctionLibrary_C*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractableGrave_C_Initialize_Loot_Info) == 0x000008, "Wrong alignment on BP_InteractableGrave_C_Initialize_Loot_Info");
static_assert(sizeof(BP_InteractableGrave_C_Initialize_Loot_Info) == 0x000018, "Wrong size on BP_InteractableGrave_C_Initialize_Loot_Info");
static_assert(offsetof(BP_InteractableGrave_C_Initialize_Loot_Info, SourceCharacter) == 0x000000, "Member 'BP_InteractableGrave_C_Initialize_Loot_Info::SourceCharacter' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_Initialize_Loot_Info, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_InteractableGrave_C_Initialize_Loot_Info::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractableGrave_C_Initialize_Loot_Info, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_InteractableGrave_C_Initialize_Loot_Info::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_InteractableGrave.BP_InteractableGrave_C.PerformInteraction on Server
// 0x0008 (0x0008 - 0x0000)
struct BP_InteractableGrave_C_PerformInteraction_on_Server final
{
public:
	class APawn*                                  InteractingPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractableGrave_C_PerformInteraction_on_Server) == 0x000008, "Wrong alignment on BP_InteractableGrave_C_PerformInteraction_on_Server");
static_assert(sizeof(BP_InteractableGrave_C_PerformInteraction_on_Server) == 0x000008, "Wrong size on BP_InteractableGrave_C_PerformInteraction_on_Server");
static_assert(offsetof(BP_InteractableGrave_C_PerformInteraction_on_Server, InteractingPawn) == 0x000000, "Member 'BP_InteractableGrave_C_PerformInteraction_on_Server::InteractingPawn' has a wrong offset!");

}


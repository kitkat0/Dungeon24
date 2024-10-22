#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExtractDevice

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_ExtractDevice.BP_ExtractDevice_C.ExecuteUbergraph_BP_ExtractDevice
// 0x00D0 (0x00D0 - 0x0000)
struct BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_Interacting_Pawn;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_InteractingPawn;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTgfInventoryManagerComponent*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasInventoryItem_ReturnValue;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ExtractPortal_C*                    CallFunc_SpawnExtractPortal_Portal;                // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_CustomEvent_InteractionPawn;                // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character_1;             // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InGameReportClientTaskProgressValueWithCharacterParam_ReturnValue; // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InGameReportClientTaskProgressValueWithCharacterParam_ReturnValue_1; // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasInventoryItem_ReturnValue_1;           // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice) == 0x000008, "Wrong alignment on BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice");
static_assert(sizeof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice) == 0x0000D0, "Wrong size on BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, EntryPoint) == 0x000000, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, Temp_delegate_Variable) == 0x000004, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_Event_Interacting_Pawn) == 0x000018, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_Event_Interacting_Pawn' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_Event_InteractingPawn) == 0x000020, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_Event_InteractingPawn' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_DynamicCast_AsLyra_Character) == 0x000040, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_HasInventoryItem_ReturnValue) == 0x000058, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_HasInventoryItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_SpawnExtractPortal_Portal) == 0x000060, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_SpawnExtractPortal_Portal' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_Event_DeltaSeconds) == 0x00006C, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_IsValid_ReturnValue_2) == 0x000078, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000080, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_IsValid_ReturnValue_3) == 0x000088, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000089, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_IsValid_ReturnValue_4) == 0x00008A, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_Event_EndPlayReason) == 0x00008B, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_PostAkEvent_ReturnValue) == 0x00008C, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_CustomEvent_InteractionPawn) == 0x000098, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_CustomEvent_InteractionPawn' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_DynamicCast_AsLyra_Character_1) == 0x0000A0, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_DynamicCast_AsLyra_Character_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_IsLocallyControlled_ReturnValue) == 0x0000A9, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_InGameReportClientTaskProgressValueWithCharacterParam_ReturnValue) == 0x0000AA, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_InGameReportClientTaskProgressValueWithCharacterParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_InGameReportClientTaskProgressValueWithCharacterParam_ReturnValue_1) == 0x0000AB, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_InGameReportClientTaskProgressValueWithCharacterParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_HasInventoryItem_ReturnValue_1) == 0x0000AC, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_HasInventoryItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, Temp_int_Variable) == 0x0000B0, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B4, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B9, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000C0, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x0000C8, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x0000CC, "Member 'BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");

// Function BP_ExtractDevice.BP_ExtractDevice_C.GetInteractionPromptText
// 0x0050 (0x0050 - 0x0000)
struct BP_ExtractDevice_C_GetInteractionPromptText final
{
public:
	class APlayerController*                      Param_Instigator;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Key;                                               // 0x0008(0x0018)(Parm, OutParm)
	class FText                                   Out_Text_Line_1;                                   // 0x0020(0x0018)(Parm, OutParm)
	class FText                                   Out_Text_Line_2;                                   // 0x0038(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_ExtractDevice_C_GetInteractionPromptText) == 0x000008, "Wrong alignment on BP_ExtractDevice_C_GetInteractionPromptText");
static_assert(sizeof(BP_ExtractDevice_C_GetInteractionPromptText) == 0x000050, "Wrong size on BP_ExtractDevice_C_GetInteractionPromptText");
static_assert(offsetof(BP_ExtractDevice_C_GetInteractionPromptText, Param_Instigator) == 0x000000, "Member 'BP_ExtractDevice_C_GetInteractionPromptText::Param_Instigator' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_GetInteractionPromptText, Key) == 0x000008, "Member 'BP_ExtractDevice_C_GetInteractionPromptText::Key' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_GetInteractionPromptText, Out_Text_Line_1) == 0x000020, "Member 'BP_ExtractDevice_C_GetInteractionPromptText::Out_Text_Line_1' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_GetInteractionPromptText, Out_Text_Line_2) == 0x000038, "Member 'BP_ExtractDevice_C_GetInteractionPromptText::Out_Text_Line_2' has a wrong offset!");

// Function BP_ExtractDevice.BP_ExtractDevice_C.HasInteractions
// 0x000C (0x000C - 0x0000)
struct BP_ExtractDevice_C_HasInteractions final
{
public:
	bool                                          Reset;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_C_HasInteractions) == 0x000004, "Wrong alignment on BP_ExtractDevice_C_HasInteractions");
static_assert(sizeof(BP_ExtractDevice_C_HasInteractions) == 0x00000C, "Wrong size on BP_ExtractDevice_C_HasInteractions");
static_assert(offsetof(BP_ExtractDevice_C_HasInteractions, Reset) == 0x000000, "Member 'BP_ExtractDevice_C_HasInteractions::Reset' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_HasInteractions, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'BP_ExtractDevice_C_HasInteractions::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_HasInteractions, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'BP_ExtractDevice_C_HasInteractions::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ExtractDevice.BP_ExtractDevice_C.OnInteractionFinish
// 0x0008 (0x0008 - 0x0000)
struct BP_ExtractDevice_C_OnInteractionFinish final
{
public:
	class APawn*                                  InteractionPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_C_OnInteractionFinish) == 0x000008, "Wrong alignment on BP_ExtractDevice_C_OnInteractionFinish");
static_assert(sizeof(BP_ExtractDevice_C_OnInteractionFinish) == 0x000008, "Wrong size on BP_ExtractDevice_C_OnInteractionFinish");
static_assert(offsetof(BP_ExtractDevice_C_OnInteractionFinish, InteractionPawn) == 0x000000, "Member 'BP_ExtractDevice_C_OnInteractionFinish::InteractionPawn' has a wrong offset!");

// Function BP_ExtractDevice.BP_ExtractDevice_C.PerformInteraction
// 0x0008 (0x0008 - 0x0000)
struct BP_ExtractDevice_C_PerformInteraction final
{
public:
	class APawn*                                  Interacting_Pawn;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_C_PerformInteraction) == 0x000008, "Wrong alignment on BP_ExtractDevice_C_PerformInteraction");
static_assert(sizeof(BP_ExtractDevice_C_PerformInteraction) == 0x000008, "Wrong size on BP_ExtractDevice_C_PerformInteraction");
static_assert(offsetof(BP_ExtractDevice_C_PerformInteraction, Interacting_Pawn) == 0x000000, "Member 'BP_ExtractDevice_C_PerformInteraction::Interacting_Pawn' has a wrong offset!");

// Function BP_ExtractDevice.BP_ExtractDevice_C.PerformInteraction on Server
// 0x0008 (0x0008 - 0x0000)
struct BP_ExtractDevice_C_PerformInteraction_on_Server final
{
public:
	class APawn*                                  InteractingPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_C_PerformInteraction_on_Server) == 0x000008, "Wrong alignment on BP_ExtractDevice_C_PerformInteraction_on_Server");
static_assert(sizeof(BP_ExtractDevice_C_PerformInteraction_on_Server) == 0x000008, "Wrong size on BP_ExtractDevice_C_PerformInteraction_on_Server");
static_assert(offsetof(BP_ExtractDevice_C_PerformInteraction_on_Server, InteractingPawn) == 0x000000, "Member 'BP_ExtractDevice_C_PerformInteraction_on_Server::InteractingPawn' has a wrong offset!");

// Function BP_ExtractDevice.BP_ExtractDevice_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_ExtractDevice_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_ExtractDevice_C_ReceiveEndPlay");
static_assert(sizeof(BP_ExtractDevice_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_ExtractDevice_C_ReceiveEndPlay");
static_assert(offsetof(BP_ExtractDevice_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_ExtractDevice_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_ExtractDevice.BP_ExtractDevice_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ExtractDevice_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ExtractDevice_C_ReceiveTick");
static_assert(sizeof(BP_ExtractDevice_C_ReceiveTick) == 0x000004, "Wrong size on BP_ExtractDevice_C_ReceiveTick");
static_assert(offsetof(BP_ExtractDevice_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ExtractDevice_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ExtractDevice.BP_ExtractDevice_C.SpawnExtractPortal
// 0x00B0 (0x00B0 - 0x0000)
struct BP_ExtractDevice_C_SpawnExtractPortal final
{
public:
	class ABP_ExtractPortal_C*                    Portal;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ExtractPortal_C*                    CallFunc_FinishSpawningActor_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExtractDevice_C_SpawnExtractPortal) == 0x000010, "Wrong alignment on BP_ExtractDevice_C_SpawnExtractPortal");
static_assert(sizeof(BP_ExtractDevice_C_SpawnExtractPortal) == 0x0000B0, "Wrong size on BP_ExtractDevice_C_SpawnExtractPortal");
static_assert(offsetof(BP_ExtractDevice_C_SpawnExtractPortal, Portal) == 0x000000, "Member 'BP_ExtractDevice_C_SpawnExtractPortal::Portal' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_SpawnExtractPortal, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'BP_ExtractDevice_C_SpawnExtractPortal::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_SpawnExtractPortal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_ExtractDevice_C_SpawnExtractPortal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_SpawnExtractPortal, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'BP_ExtractDevice_C_SpawnExtractPortal::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_SpawnExtractPortal, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A0, "Member 'BP_ExtractDevice_C_SpawnExtractPortal::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExtractDevice_C_SpawnExtractPortal, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000A8, "Member 'BP_ExtractDevice_C_SpawnExtractPortal::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}


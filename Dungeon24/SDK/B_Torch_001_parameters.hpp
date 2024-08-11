#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Torch_001

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function B_Torch_001.B_Torch_001_C.BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature final
{
public:
	class UActorComponent*                        Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bReset;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");
static_assert(sizeof(B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature) == 0x000010, "Wrong size on B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");
static_assert(offsetof(B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature, Component) == 0x000000, "Member 'B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature::Component' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature, bReset) == 0x000008, "Member 'B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature::bReset' has a wrong offset!");

// Function B_Torch_001.B_Torch_001_C.BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature final
{
public:
	class UActorComponent*                        Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature");
static_assert(sizeof(B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature) == 0x000008, "Wrong size on B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature");
static_assert(offsetof(B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature, Component) == 0x000000, "Member 'B_Torch_001_C_BndEvt__B_Torch_001_AkAudio_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature::Component' has a wrong offset!");

// Function B_Torch_001.B_Torch_001_C.ExecuteUbergraph_B_Torch_001
// 0x0128 (0x0128 - 0x0000)
struct B_Torch_001_C_ExecuteUbergraph_B_Torch_001 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorComponent*                        K2Node_ComponentBoundEvent_Component_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        K2Node_ComponentBoundEvent_Component;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bReset;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlueprintExposedNetMode                      CallFunc_SwitchOnNetMode_ReturnValue;              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Visiblity;                            // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAssociatedAkEvent_ReturnValue;        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTorchParam                            CallFunc_Array_Get_Item;                           // 0x00A4(0x0014)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraGameState*                         K2Node_DynamicCast_AsLyra_Game_State;              // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasOption_ReturnValue;                    // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue_1;                       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFirstPersonActor_bRet;                  // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_1;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_A_ImplicitCast;                      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_B_ImplicitCast;                      // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_A_ImplicitCast_1;                    // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_B_ImplicitCast_1;                    // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast; // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;   // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001) == 0x000008, "Wrong alignment on B_Torch_001_C_ExecuteUbergraph_B_Torch_001");
static_assert(sizeof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001) == 0x000128, "Wrong size on B_Torch_001_C_ExecuteUbergraph_B_Torch_001");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, EntryPoint) == 0x000000, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, Temp_delegate_Variable) == 0x000004, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, K2Node_ComponentBoundEvent_Component_1) == 0x000018, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::K2Node_ComponentBoundEvent_Component_1' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, K2Node_ComponentBoundEvent_Component) == 0x000020, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::K2Node_ComponentBoundEvent_Component' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, K2Node_ComponentBoundEvent_bReset) == 0x000028, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::K2Node_ComponentBoundEvent_bReset' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_HasAuthority_ReturnValue) == 0x000029, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, K2Node_Event_EndPlayReason) == 0x000030, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, Temp_bool_True_if_break_was_hit_Variable) == 0x000031, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_SwitchOnNetMode_ReturnValue) == 0x000033, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_SwitchOnNetMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x000034, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, K2Node_SwitchEnum_CmpSuccess) == 0x000044, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_HasTag_ReturnValue) == 0x000060, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000064, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, K2Node_Event_Visiblity) == 0x00007C, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::K2Node_Event_Visiblity' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_PostAssociatedAkEvent_ReturnValue) == 0x000080, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_PostAssociatedAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000088, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000090, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_GetGameState_ReturnValue) == 0x000098, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_IsValid_ReturnValue_1) == 0x0000A0, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Array_Get_Item) == 0x0000A4, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, K2Node_DynamicCast_AsLyra_Game_State) == 0x0000C0, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::K2Node_DynamicCast_AsLyra_Game_State' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Less_IntInt_ReturnValue) == 0x0000C9, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_HasOption_ReturnValue) == 0x0000CA, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_HasOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_BooleanAND_ReturnValue) == 0x0000CB, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Lerp_ReturnValue) == 0x0000D0, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Lerp_ReturnValue_1) == 0x0000D8, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000E0, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_IsFirstPersonActor_bRet) == 0x0000E1, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_IsFirstPersonActor_bRet' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Lerp_Alpha_ImplicitCast) == 0x0000E8, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Lerp_Alpha_ImplicitCast_1) == 0x0000F0, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Lerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0000F8, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Lerp_A_ImplicitCast) == 0x000100, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Lerp_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Lerp_B_ImplicitCast) == 0x000108, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Lerp_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Lerp_A_ImplicitCast_1) == 0x000110, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Lerp_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_Lerp_B_ImplicitCast_1) == 0x000118, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_Lerp_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast) == 0x000120, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ExecuteUbergraph_B_Torch_001, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x000124, "Member 'B_Torch_001_C_ExecuteUbergraph_B_Torch_001::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");

// Function B_Torch_001.B_Torch_001_C.GetMesh
// 0x0008 (0x0008 - 0x0000)
struct B_Torch_001_C_GetMesh final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Torch_001_C_GetMesh) == 0x000008, "Wrong alignment on B_Torch_001_C_GetMesh");
static_assert(sizeof(B_Torch_001_C_GetMesh) == 0x000008, "Wrong size on B_Torch_001_C_GetMesh");
static_assert(offsetof(B_Torch_001_C_GetMesh, ReturnValue) == 0x000000, "Member 'B_Torch_001_C_GetMesh::ReturnValue' has a wrong offset!");

// Function B_Torch_001.B_Torch_001_C.K2_OnWeaponVisibleChanged
// 0x0001 (0x0001 - 0x0000)
struct B_Torch_001_C_K2_OnWeaponVisibleChanged final
{
public:
	bool                                          Visiblity;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Torch_001_C_K2_OnWeaponVisibleChanged) == 0x000001, "Wrong alignment on B_Torch_001_C_K2_OnWeaponVisibleChanged");
static_assert(sizeof(B_Torch_001_C_K2_OnWeaponVisibleChanged) == 0x000001, "Wrong size on B_Torch_001_C_K2_OnWeaponVisibleChanged");
static_assert(offsetof(B_Torch_001_C_K2_OnWeaponVisibleChanged, Visiblity) == 0x000000, "Member 'B_Torch_001_C_K2_OnWeaponVisibleChanged::Visiblity' has a wrong offset!");

// Function B_Torch_001.B_Torch_001_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct B_Torch_001_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Torch_001_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on B_Torch_001_C_ReceiveEndPlay");
static_assert(sizeof(B_Torch_001_C_ReceiveEndPlay) == 0x000001, "Wrong size on B_Torch_001_C_ReceiveEndPlay");
static_assert(offsetof(B_Torch_001_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'B_Torch_001_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function B_Torch_001.B_Torch_001_C.Set Light Intensity
// 0x0038 (0x0038 - 0x0000)
struct B_Torch_001_C_Set_Light_Intensity final
{
public:
	double                                        Alpha;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_MakeStruct_A_ImplicitCast;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_B_ImplicitCast;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Torch_001_C_Set_Light_Intensity) == 0x000008, "Wrong alignment on B_Torch_001_C_Set_Light_Intensity");
static_assert(sizeof(B_Torch_001_C_Set_Light_Intensity) == 0x000038, "Wrong size on B_Torch_001_C_Set_Light_Intensity");
static_assert(offsetof(B_Torch_001_C_Set_Light_Intensity, Alpha) == 0x000000, "Member 'B_Torch_001_C_Set_Light_Intensity::Alpha' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_Set_Light_Intensity, K2Node_MakeStruct_LinearColor) == 0x000008, "Member 'B_Torch_001_C_Set_Light_Intensity::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_Set_Light_Intensity, CallFunc_Lerp_ReturnValue) == 0x000018, "Member 'B_Torch_001_C_Set_Light_Intensity::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_Set_Light_Intensity, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'B_Torch_001_C_Set_Light_Intensity::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_Set_Light_Intensity, K2Node_MakeStruct_A_ImplicitCast) == 0x000024, "Member 'B_Torch_001_C_Set_Light_Intensity::K2Node_MakeStruct_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_Set_Light_Intensity, CallFunc_Lerp_B_ImplicitCast) == 0x000028, "Member 'B_Torch_001_C_Set_Light_Intensity::CallFunc_Lerp_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_Set_Light_Intensity, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x000030, "Member 'B_Torch_001_C_Set_Light_Intensity::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");

// Function B_Torch_001.B_Torch_001_C.ShutDownPLShadow
// 0x0038 (0x0038 - 0x0000)
struct B_Torch_001_C_ShutDownPLShadow final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULightComponent*>                CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULightComponent*                        CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Torch_001_C_ShutDownPLShadow) == 0x000008, "Wrong alignment on B_Torch_001_C_ShutDownPLShadow");
static_assert(sizeof(B_Torch_001_C_ShutDownPLShadow) == 0x000038, "Wrong size on B_Torch_001_C_ShutDownPLShadow");
static_assert(offsetof(B_Torch_001_C_ShutDownPLShadow, Temp_int_Array_Index_Variable) == 0x000000, "Member 'B_Torch_001_C_ShutDownPLShadow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ShutDownPLShadow, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'B_Torch_001_C_ShutDownPLShadow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ShutDownPLShadow, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'B_Torch_001_C_ShutDownPLShadow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ShutDownPLShadow, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000010, "Member 'B_Torch_001_C_ShutDownPLShadow::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ShutDownPLShadow, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'B_Torch_001_C_ShutDownPLShadow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ShutDownPLShadow, CallFunc_Array_Get_Item) == 0x000028, "Member 'B_Torch_001_C_ShutDownPLShadow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Torch_001_C_ShutDownPLShadow, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'B_Torch_001_C_ShutDownPLShadow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}


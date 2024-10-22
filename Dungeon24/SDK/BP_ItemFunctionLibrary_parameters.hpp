#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemFunctionLibrary

#include "Basic.hpp"

#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.DropItemCallback
// 0x0020 (0x0020 - 0x0000)
struct BP_ItemFunctionLibrary_C_DropItemCallback final
{
public:
	class ULyraInventoryItemInstance*             Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Successed;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemFunctionLibrary_C_DropItemCallback) == 0x000008, "Wrong alignment on BP_ItemFunctionLibrary_C_DropItemCallback");
static_assert(sizeof(BP_ItemFunctionLibrary_C_DropItemCallback) == 0x000020, "Wrong size on BP_ItemFunctionLibrary_C_DropItemCallback");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemCallback, Item) == 0x000000, "Member 'BP_ItemFunctionLibrary_C_DropItemCallback::Item' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemCallback, Successed) == 0x000008, "Member 'BP_ItemFunctionLibrary_C_DropItemCallback::Successed' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemCallback, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_ItemFunctionLibrary_C_DropItemCallback::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemCallback, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'BP_ItemFunctionLibrary_C_DropItemCallback::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemCallback, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000019, "Member 'BP_ItemFunctionLibrary_C_DropItemCallback::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.DropItemToWorld
// 0x0038 (0x0038 - 0x0000)
struct BP_ItemFunctionLibrary_C_DropItemToWorld final
{
public:
	class ULyraInventoryItemInstance*             Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ALyraCharacter*                   Character;                                         // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MapInteractionComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemFunctionLibrary_C_DropItemToWorld) == 0x000008, "Wrong alignment on BP_ItemFunctionLibrary_C_DropItemToWorld");
static_assert(sizeof(BP_ItemFunctionLibrary_C_DropItemToWorld) == 0x000038, "Wrong size on BP_ItemFunctionLibrary_C_DropItemToWorld");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemToWorld, Item) == 0x000000, "Member 'BP_ItemFunctionLibrary_C_DropItemToWorld::Item' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemToWorld, Character) == 0x000008, "Member 'BP_ItemFunctionLibrary_C_DropItemToWorld::Character' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemToWorld, ReturnValue) == 0x000010, "Member 'BP_ItemFunctionLibrary_C_DropItemToWorld::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemToWorld, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_ItemFunctionLibrary_C_DropItemToWorld::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemToWorld, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ItemFunctionLibrary_C_DropItemToWorld::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemToWorld, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_ItemFunctionLibrary_C_DropItemToWorld::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_DropItemToWorld, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_ItemFunctionLibrary_C_DropItemToWorld::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.GetInventoryLootState
// 0x0050 (0x0050 - 0x0000)
struct BP_ItemFunctionLibrary_C_GetInventoryLootState final
{
public:
	struct FTgfInventoryLootState                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MapInteractionComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTgfInventoryLootState                 K2Node_MakeStruct_TgfInventoryLootState;           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ItemFunctionLibrary_C_GetInventoryLootState) == 0x000008, "Wrong alignment on BP_ItemFunctionLibrary_C_GetInventoryLootState");
static_assert(sizeof(BP_ItemFunctionLibrary_C_GetInventoryLootState) == 0x000050, "Wrong size on BP_ItemFunctionLibrary_C_GetInventoryLootState");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, ReturnValue) == 0x000000, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, K2Node_DynamicCast_AsLyra_Character) == 0x000018, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, CallFunc_GetController_ReturnValue) == 0x000028, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetInventoryLootState, K2Node_MakeStruct_TgfInventoryLootState) == 0x000040, "Member 'BP_ItemFunctionLibrary_C_GetInventoryLootState::K2Node_MakeStruct_TgfInventoryLootState' has a wrong offset!");

// Function BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C.GetLootVaildDistance
// 0x00D0 (0x00D0 - 0x0000)
struct BP_ItemFunctionLibrary_C_GetLootVaildDistance final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MapInteractionComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Character_Default_C*            K2Node_DynamicCast_AsBP_Tgf_Character_Default;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_InteractableBase_C*                 K2Node_DynamicCast_AsBP_Interactable_Base;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Get_Server_Check_Distance_ServerCheckDistanceXY; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Server_Check_Distance_ServerCheckDistanceZ; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Server_Check_Distance_ServerCheckDistanceXY_1; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Get_Server_Check_Distance_ServerCheckDistanceZ_1; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Sqrt_ReturnValue;                         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Sqrt_ReturnValue_1;                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast_1;  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemFunctionLibrary_C_GetLootVaildDistance) == 0x000008, "Wrong alignment on BP_ItemFunctionLibrary_C_GetLootVaildDistance");
static_assert(sizeof(BP_ItemFunctionLibrary_C_GetLootVaildDistance) == 0x0000D0, "Wrong size on BP_ItemFunctionLibrary_C_GetLootVaildDistance");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, ReturnValue) == 0x000000, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, K2Node_DynamicCast_AsLyra_Character) == 0x000010, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_GetOwner_ReturnValue_1) == 0x000038, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, K2Node_DynamicCast_AsBP_Tgf_Character_Default) == 0x000048, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::K2Node_DynamicCast_AsBP_Tgf_Character_Default' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, K2Node_DynamicCast_AsBP_Interactable_Base) == 0x000058, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::K2Node_DynamicCast_AsBP_Interactable_Base' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_Get_Server_Check_Distance_ServerCheckDistanceXY) == 0x000068, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_Get_Server_Check_Distance_ServerCheckDistanceXY' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_Get_Server_Check_Distance_ServerCheckDistanceZ) == 0x000070, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_Get_Server_Check_Distance_ServerCheckDistanceZ' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_Get_Server_Check_Distance_ServerCheckDistanceXY_1) == 0x000078, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_Get_Server_Check_Distance_ServerCheckDistanceXY_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_Get_Server_Check_Distance_ServerCheckDistanceZ_1) == 0x000080, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_Get_Server_Check_Distance_ServerCheckDistanceZ_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000088, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1) == 0x000090, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2) == 0x000098, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3) == 0x0000A0, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000B0, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_Sqrt_ReturnValue) == 0x0000B8, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_Sqrt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, CallFunc_Sqrt_ReturnValue_1) == 0x0000C0, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::CallFunc_Sqrt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x0000C8, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ItemFunctionLibrary_C_GetLootVaildDistance, K2Node_FunctionResult_ReturnValue_ImplicitCast_1) == 0x0000CC, "Member 'BP_ItemFunctionLibrary_C_GetLootVaildDistance::K2Node_FunctionResult_ReturnValue_ImplicitCast_1' has a wrong offset!");

}


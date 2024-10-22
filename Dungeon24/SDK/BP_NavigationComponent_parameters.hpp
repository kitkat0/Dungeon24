#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NavigationComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NavigationComponent.BP_NavigationComponent_C.CacheIndicators
// 0x0004 (0x0004 - 0x0000)
struct BP_NavigationComponent_C_CacheIndicators final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NavigationComponent_C_CacheIndicators) == 0x000004, "Wrong alignment on BP_NavigationComponent_C_CacheIndicators");
static_assert(sizeof(BP_NavigationComponent_C_CacheIndicators) == 0x000004, "Wrong size on BP_NavigationComponent_C_CacheIndicators");
static_assert(offsetof(BP_NavigationComponent_C_CacheIndicators, Count) == 0x000000, "Member 'BP_NavigationComponent_C_CacheIndicators::Count' has a wrong offset!");

// Function BP_NavigationComponent.BP_NavigationComponent_C.ExecuteUbergraph_BP_NavigationComponent
// 0x0330 (0x0330 - 0x0000)
struct BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNavigationPath*                        CallFunc_FindPathToLocationSynchronously_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Count;                          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0100(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0xC];                                      // 0x0194(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x01A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0200(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x0310(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x031A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B[0x5];                                      // 0x031B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent) == 0x000010, "Wrong alignment on BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent");
static_assert(sizeof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent) == 0x000330, "Wrong size on BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, EntryPoint) == 0x000000, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, Temp_int_Variable) == 0x000004, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, K2Node_DynamicCast_AsPlayer_Controller) == 0x000028, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_K2_GetPawn_ReturnValue) == 0x000038, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_FindPathToLocationSynchronously_ReturnValue) == 0x000060, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_FindPathToLocationSynchronously_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Subtract_IntInt_ReturnValue) == 0x000070, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000074, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000078, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, Temp_int_Variable_1) == 0x00007C, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Add_IntInt_ReturnValue_2) == 0x000080, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000084, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Vector_Distance_ReturnValue) == 0x000088, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_FindLookAtRotation_ReturnValue) == 0x000090, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000B0, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_MakeVector_ReturnValue) == 0x0000B8, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000D0, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, K2Node_CustomEvent_Count) == 0x0000D4, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::K2Node_CustomEvent_Count' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Not_PreBool_ReturnValue) == 0x0000D9, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Array_Get_Item) == 0x0000E0, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Array_Length_ReturnValue_1) == 0x0000E8, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000EC, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Array_Length_ReturnValue_2) == 0x0000F0, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000F4, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0000F8, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000FC, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_MakeTransform_ReturnValue) == 0x000100, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Array_Get_Item_1) == 0x000160, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000168, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000170, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Add_VectorVector_ReturnValue) == 0x000178, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Array_Add_ReturnValue) == 0x000190, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_MakeTransform_ReturnValue_1) == 0x0001A0, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000200, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0002E8, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, K2Node_CustomEvent_Location) == 0x0002F0, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_GetOwner_ReturnValue_1) == 0x000308, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, K2Node_DynamicCast_AsPlayer_Controller_1) == 0x000310, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::K2Node_DynamicCast_AsPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, K2Node_DynamicCast_bSuccess_1) == 0x000318, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_IsLocalPlayerController_ReturnValue) == 0x000319, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_BooleanAND_ReturnValue) == 0x00031A, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000320, "Member 'BP_NavigationComponent_C_ExecuteUbergraph_BP_NavigationComponent::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_NavigationComponent.BP_NavigationComponent_C.IsNavigating
// 0x0001 (0x0001 - 0x0000)
struct BP_NavigationComponent_C_IsNavigating final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NavigationComponent_C_IsNavigating) == 0x000001, "Wrong alignment on BP_NavigationComponent_C_IsNavigating");
static_assert(sizeof(BP_NavigationComponent_C_IsNavigating) == 0x000001, "Wrong size on BP_NavigationComponent_C_IsNavigating");
static_assert(offsetof(BP_NavigationComponent_C_IsNavigating, Result) == 0x000000, "Member 'BP_NavigationComponent_C_IsNavigating::Result' has a wrong offset!");

// Function BP_NavigationComponent.BP_NavigationComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_NavigationComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NavigationComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_NavigationComponent_C_ReceiveTick");
static_assert(sizeof(BP_NavigationComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_NavigationComponent_C_ReceiveTick");
static_assert(offsetof(BP_NavigationComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_NavigationComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_NavigationComponent.BP_NavigationComponent_C.SetTarget
// 0x0018 (0x0018 - 0x0000)
struct BP_NavigationComponent_C_SetTarget final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NavigationComponent_C_SetTarget) == 0x000008, "Wrong alignment on BP_NavigationComponent_C_SetTarget");
static_assert(sizeof(BP_NavigationComponent_C_SetTarget) == 0x000018, "Wrong size on BP_NavigationComponent_C_SetTarget");
static_assert(offsetof(BP_NavigationComponent_C_SetTarget, Location) == 0x000000, "Member 'BP_NavigationComponent_C_SetTarget::Location' has a wrong offset!");

}


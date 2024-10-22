#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_MarkPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function GA_TGF_MarkPoint.GA_TGF_MarkPoint_C.ExecuteUbergraph_GA_TGF_MarkPoint
// 0x03D8 (0x03D8 - 0x0000)
struct GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ConstParm, ReferenceParm)
	class APlayerController*                      CallFunc_GetPlayerControllerFromObject_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           CallFunc_GetPlayerStateFromObject_ReturnValue;     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TGF_PlayerState_C*                  K2Node_DynamicCast_AsBP_TGF_Player_State;          // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00E8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_InHitResult;                    // 0x01D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ALyraCharacter*                         CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2; // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CA[0x2];                                      // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0338(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0340(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0348(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0370(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0388(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x03A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraTeamSubsystem*                     CallFunc_GetWorldSubsystem_ReturnValue;            // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdA;                     // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CompareTeams_TeamIdB;                     // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELyraTeamComparison                           CallFunc_CompareTeams_ReturnValue;                 // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CheckAbilityCooldown_ReturnValue;      // 0x03CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x03CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD[0x3];                                      // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint) == 0x000008, "Wrong alignment on GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint");
static_assert(sizeof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint) == 0x0003D8, "Wrong size on GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, EntryPoint) == 0x000000, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, K2Node_MakeArray_Array) == 0x000018, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_GetPlayerControllerFromObject_ReturnValue) == 0x000028, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_GetPlayerControllerFromObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_IsDedicatedServer_ReturnValue) == 0x000030, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_GetCameraRotation_ReturnValue) == 0x000038, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000050, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_GetCameraLocation_ReturnValue) == 0x000068, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1) == 0x000080, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000088, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_GetPlayerStateFromObject_ReturnValue) == 0x0000A0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_GetPlayerStateFromObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000A8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, K2Node_DynamicCast_AsBP_TGF_Player_State) == 0x0000C0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::K2Node_DynamicCast_AsBP_TGF_Player_State' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_LineTraceSingle_OutHit) == 0x0000E8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_LineTraceSingle_ReturnValue) == 0x0001D0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, K2Node_CustomEvent_InHitResult) == 0x0001D8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::K2Node_CustomEvent_InHitResult' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2) == 0x0002C0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_GetLyraCharacterFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_bBlockingHit) == 0x0002C8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002C9, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_Time) == 0x0002CC, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_Distance) == 0x0002D0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_Location) == 0x0002D8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_ImpactPoint) == 0x0002F0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_Normal) == 0x000308, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_ImpactNormal) == 0x000320, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_PhysMat) == 0x000338, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_HitActor) == 0x000340, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_HitComponent) == 0x000348, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_HitBoneName) == 0x000350, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_BoneName) == 0x000358, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_HitItem) == 0x000360, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_ElementIndex) == 0x000364, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_FaceIndex) == 0x000368, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_TraceStart) == 0x000370, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BreakHitResult_TraceEnd) == 0x000388, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_IsValid_ReturnValue_1) == 0x0003A0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, K2Node_DynamicCast_AsLyra_Character) == 0x0003A8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, K2Node_DynamicCast_bSuccess_1) == 0x0003B0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_GetWorldSubsystem_ReturnValue) == 0x0003B8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_CompareTeams_TeamIdA) == 0x0003C0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_CompareTeams_TeamIdA' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_CompareTeams_TeamIdB) == 0x0003C4, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_CompareTeams_TeamIdB' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_CompareTeams_ReturnValue) == 0x0003C8, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_CompareTeams_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, K2Node_SwitchEnum_CmpSuccess) == 0x0003C9, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_K2_CheckAbilityCooldown_ReturnValue) == 0x0003CA, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_K2_CheckAbilityCooldown_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_K2_CommitAbility_ReturnValue) == 0x0003CB, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_BooleanOR_ReturnValue) == 0x0003CC, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint, CallFunc_Delay_Duration_ImplicitCast) == 0x0003D0, "Member 'GA_TGF_MarkPoint_C_ExecuteUbergraph_GA_TGF_MarkPoint::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function GA_TGF_MarkPoint.GA_TGF_MarkPoint_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_TGF_MarkPoint_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_TGF_MarkPoint_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_TGF_MarkPoint_C_K2_OnEndAbility");
static_assert(sizeof(GA_TGF_MarkPoint_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_TGF_MarkPoint_C_K2_OnEndAbility");
static_assert(offsetof(GA_TGF_MarkPoint_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_TGF_MarkPoint_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_TGF_MarkPoint.GA_TGF_MarkPoint_C.TrySpawnMarkPoint
// 0x00E8 (0x00E8 - 0x0000)
struct GA_TGF_MarkPoint_C_TrySpawnMarkPoint final
{
public:
	struct FHitResult                             InHitResult;                                       // 0x0000(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GA_TGF_MarkPoint_C_TrySpawnMarkPoint) == 0x000008, "Wrong alignment on GA_TGF_MarkPoint_C_TrySpawnMarkPoint");
static_assert(sizeof(GA_TGF_MarkPoint_C_TrySpawnMarkPoint) == 0x0000E8, "Wrong size on GA_TGF_MarkPoint_C_TrySpawnMarkPoint");
static_assert(offsetof(GA_TGF_MarkPoint_C_TrySpawnMarkPoint, InHitResult) == 0x000000, "Member 'GA_TGF_MarkPoint_C_TrySpawnMarkPoint::InHitResult' has a wrong offset!");

}


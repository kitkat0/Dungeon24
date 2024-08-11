#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_Tgf_Gameplay_AnimationMoveScale

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AN_Tgf_Gameplay_AnimationMoveScale.AN_Tgf_Gameplay_AnimationMoveScale_C.Received_NotifyBegin
// 0x0070 (0x0070 - 0x0000)
struct AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraHeroComponent*                     CallFunc_FindHeroComponent_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_AddMovingScale_Value_ImplicitCast;        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin");
static_assert(sizeof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin) == 0x000070, "Wrong size on AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, K2Node_DynamicCast_AsLyra_Character) == 0x000050, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, CallFunc_FindHeroComponent_ReturnValue) == 0x000060, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::CallFunc_FindHeroComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin, CallFunc_AddMovingScale_Value_ImplicitCast) == 0x00006C, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyBegin::CallFunc_AddMovingScale_Value_ImplicitCast' has a wrong offset!");

// Function AN_Tgf_Gameplay_AnimationMoveScale.AN_Tgf_Gameplay_AnimationMoveScale_C.Received_NotifyEnd
// 0x0068 (0x0068 - 0x0000)
struct AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALyraCharacter*                         K2Node_DynamicCast_AsLyra_Character;               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraHeroComponent*                     CallFunc_FindHeroComponent_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RemoveAnimationMoveScale_scale_ImplicitCast; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd");
static_assert(sizeof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd) == 0x000068, "Wrong size on AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, K2Node_DynamicCast_AsLyra_Character) == 0x000048, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::K2Node_DynamicCast_AsLyra_Character' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, CallFunc_FindHeroComponent_ReturnValue) == 0x000058, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::CallFunc_FindHeroComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd, CallFunc_RemoveAnimationMoveScale_scale_ImplicitCast) == 0x000064, "Member 'AN_Tgf_Gameplay_AnimationMoveScale_C_Received_NotifyEnd::CallFunc_RemoveAnimationMoveScale_scale_ImplicitCast' has a wrong offset!");

}


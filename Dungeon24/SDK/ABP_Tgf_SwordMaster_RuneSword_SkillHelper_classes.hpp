#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Tgf_SwordMaster_RuneSword_SkillHelper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ABP_Tgf_SwordMaster_RuneSword_SkillHelper_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Tgf_SwordMaster_RuneSword_SkillHelper.ABP_Tgf_SwordMaster_RuneSword_SkillHelper_C
// 0x0CA0 (0x0FF0 - 0x0350)
class UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Tgf_SwordMaster_RuneSword_SkillHelper::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0010)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0368(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0370(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0378(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0398(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_4;                  // 0x03E0(0x00E0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x04C0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x0508(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0550(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0598(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_3;                  // 0x05E0(0x00E0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x06C0(0x00E0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x07A0(0x00E0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0880(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0988(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x09B0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x09D8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0A00(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0A28(0x0028)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x0A50(0x0118)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0B68(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0BB0(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0CB8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0CE0(0x0028)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0D08(0x0118)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0E20(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0E48(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0E90(0x00E0)()
	bool                                          K2Node_PropertyAccess_5;                           // 0x0F70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F71[0x7];                                      // 0x0F71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_PropertyAccess_4;                           // 0x0F78(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_PropertyAccess_3;                           // 0x0F80(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               K2Node_PropertyAccess_2;                           // 0x0F98(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               K2Node_PropertyAccess_1;                           // 0x0FB0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_PropertyAccess;                             // 0x0FC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC9[0x7];                                      // 0x0FC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AimPitch;                                          // 0x0FD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Aim_3rd;                                           // 0x0FD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Aim_1st;                                           // 0x0FE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void ExecuteUbergraph_ABP_Tgf_SwordMaster_RuneSword_SkillHelper(int32 EntryPoint);
	class ABP_Tgf_RuneSwordSkillHelperActor_C* GetParentActor();
	void SelectAimingAnimation(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);
	void UpdateAimingData(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Tgf_SwordMaster_RuneSword_SkillHelper_C">();
	}
	static class UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C>();
	}
};
static_assert(alignof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C) == 0x000010, "Wrong alignment on UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C");
static_assert(sizeof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C) == 0x000FF0, "Wrong size on UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, UberGraphFrame) == 0x000350, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, __AnimBlueprintMutables) == 0x000358, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimBlueprintExtension_PropertyAccess) == 0x000368, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimBlueprintExtension_Base) == 0x000370, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_Root) == 0x000378, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_SequencePlayer) == 0x000398, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_LayeredBoneBlend_4) == 0x0003E0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_LayeredBoneBlend_4' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_Slot_4) == 0x0004C0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_Slot_3) == 0x000508, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_Slot_2) == 0x000550, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_Slot_1) == 0x000598, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_LayeredBoneBlend_3) == 0x0005E0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_LayeredBoneBlend_3' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_LayeredBoneBlend_2) == 0x0006C0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_LayeredBoneBlend_1) == 0x0007A0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_SaveCachedPose_1) == 0x000880, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_UseCachedPose_7) == 0x000988, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_UseCachedPose_6) == 0x0009B0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_UseCachedPose_5) == 0x0009D8, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_UseCachedPose_4) == 0x000A00, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_UseCachedPose_3) == 0x000A28, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x000A50, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_BlendListByBool) == 0x000B68, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_SaveCachedPose) == 0x000BB0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_UseCachedPose_2) == 0x000CB8, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_UseCachedPose_1) == 0x000CE0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x000D08, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_UseCachedPose) == 0x000E20, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_Slot) == 0x000E48, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AnimGraphNode_LayeredBoneBlend) == 0x000E90, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, K2Node_PropertyAccess_5) == 0x000F70, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::K2Node_PropertyAccess_5' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, K2Node_PropertyAccess_4) == 0x000F78, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::K2Node_PropertyAccess_4' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, K2Node_PropertyAccess_3) == 0x000F80, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::K2Node_PropertyAccess_3' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, K2Node_PropertyAccess_2) == 0x000F98, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::K2Node_PropertyAccess_2' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, K2Node_PropertyAccess_1) == 0x000FB0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::K2Node_PropertyAccess_1' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, K2Node_PropertyAccess) == 0x000FC8, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::K2Node_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, AimPitch) == 0x000FD0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::AimPitch' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, Aim_3rd) == 0x000FD8, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::Aim_3rd' has a wrong offset!");
static_assert(offsetof(UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C, Aim_1st) == 0x000FE0, "Member 'UABP_Tgf_SwordMaster_RuneSword_SkillHelper_C::Aim_1st' has a wrong offset!");

}

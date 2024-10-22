#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SKM_Human_Female_0003_H_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SKM_Human_Female_0003_H_AnimBlueprint.SKM_Human_Female_0003_H_AnimBlueprint_C
// 0x08F0 (0x0C40 - 0x0350)
class USKM_Human_Female_0003_H_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	uint8                                         Pad_388[0x8];                                      // 0x0388(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x0390(0x0790)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0B20(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0B40(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0B60(0x00C8)()
	struct FKawaiiPhysicsSettings                 Physics_Settings;                                  // 0x0C28(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_SKM_Human_Female_0003_H_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SKM_Human_Female_0003_H_AnimBlueprint_C">();
	}
	static class USKM_Human_Female_0003_H_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USKM_Human_Female_0003_H_AnimBlueprint_C>();
	}
};
static_assert(alignof(USKM_Human_Female_0003_H_AnimBlueprint_C) == 0x000010, "Wrong alignment on USKM_Human_Female_0003_H_AnimBlueprint_C");
static_assert(sizeof(USKM_Human_Female_0003_H_AnimBlueprint_C) == 0x000C40, "Wrong size on USKM_Human_Female_0003_H_AnimBlueprint_C");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, UberGraphFrame) == 0x000350, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, AnimGraphNode_Root) == 0x000368, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, AnimGraphNode_KawaiiPhysics) == 0x000390, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x000B20, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x000B40, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, AnimGraphNode_LinkedInputPose) == 0x000B60, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(USKM_Human_Female_0003_H_AnimBlueprint_C, Physics_Settings) == 0x000C28, "Member 'USKM_Human_Female_0003_H_AnimBlueprint_C::Physics_Settings' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_BrightTorchCurve

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_BrightTorchCurve.AN_BrightTorchCurve_C
// 0x0020 (0x0050 - 0x0030)
class UAN_BrightTorchCurve_C final : public UAnimNotifyState
{
public:
	TArray<class AB_Torch_001_C*>                 Torches;                                           // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<double>                                Duration;                                          // 0x0040(0x0010)(Edit, BlueprintVisible)

public:
	void Push_Torches(class ULyraEquipmentInstance* EquipIns) const;
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference) const;
	void Set_Torch_Intensity(double Alpha) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_BrightTorchCurve_C">();
	}
	static class UAN_BrightTorchCurve_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_BrightTorchCurve_C>();
	}
};
static_assert(alignof(UAN_BrightTorchCurve_C) == 0x000008, "Wrong alignment on UAN_BrightTorchCurve_C");
static_assert(sizeof(UAN_BrightTorchCurve_C) == 0x000050, "Wrong size on UAN_BrightTorchCurve_C");
static_assert(offsetof(UAN_BrightTorchCurve_C, Torches) == 0x000030, "Member 'UAN_BrightTorchCurve_C::Torches' has a wrong offset!");
static_assert(offsetof(UAN_BrightTorchCurve_C, Duration) == 0x000040, "Member 'UAN_BrightTorchCurve_C::Duration' has a wrong offset!");

}


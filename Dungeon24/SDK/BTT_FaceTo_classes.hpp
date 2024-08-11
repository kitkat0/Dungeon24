#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_FaceTo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_FaceTo.BTT_FaceTo_C
// 0x0090 (0x0138 - 0x00A8)
class UBTT_FaceTo_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 TargetKey;                                         // 0x00B0(0x0028)(Edit, BlueprintVisible)
	class AActor*                                 FocusActor;                                        // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FocusLocation;                                     // 0x00E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Precision;                                         // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 PrecisionKey;                                      // 0x0100(0x0028)(Edit, BlueprintVisible)
	double                                        PrecisionReal;                                     // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Angle;                                             // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CleanUp(class AAIController* OwnerController);
	void ExecuteUbergraph_BTT_FaceTo(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_FaceTo_C">();
	}
	static class UBTT_FaceTo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_FaceTo_C>();
	}
};
static_assert(alignof(UBTT_FaceTo_C) == 0x000008, "Wrong alignment on UBTT_FaceTo_C");
static_assert(sizeof(UBTT_FaceTo_C) == 0x000138, "Wrong size on UBTT_FaceTo_C");
static_assert(offsetof(UBTT_FaceTo_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_FaceTo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_FaceTo_C, TargetKey) == 0x0000B0, "Member 'UBTT_FaceTo_C::TargetKey' has a wrong offset!");
static_assert(offsetof(UBTT_FaceTo_C, FocusActor) == 0x0000D8, "Member 'UBTT_FaceTo_C::FocusActor' has a wrong offset!");
static_assert(offsetof(UBTT_FaceTo_C, FocusLocation) == 0x0000E0, "Member 'UBTT_FaceTo_C::FocusLocation' has a wrong offset!");
static_assert(offsetof(UBTT_FaceTo_C, Precision) == 0x0000F8, "Member 'UBTT_FaceTo_C::Precision' has a wrong offset!");
static_assert(offsetof(UBTT_FaceTo_C, PrecisionKey) == 0x000100, "Member 'UBTT_FaceTo_C::PrecisionKey' has a wrong offset!");
static_assert(offsetof(UBTT_FaceTo_C, PrecisionReal) == 0x000128, "Member 'UBTT_FaceTo_C::PrecisionReal' has a wrong offset!");
static_assert(offsetof(UBTT_FaceTo_C, Angle) == 0x000130, "Member 'UBTT_FaceTo_C::Angle' has a wrong offset!");

}


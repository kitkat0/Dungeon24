#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_WaitAbilityComplete

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_WaitAbilityComplete.BTT_WaitAbilityComplete_C
// 0x0060 (0x0108 - 0x00A8)
class UBTT_WaitAbilityComplete_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Delay;                                             // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Delta;                                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Enemy;                                             // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FocusAbilityTarget;                                // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBlackboardKeySelector                 AbilityTarget;                                     // 0x00D0(0x0028)(Edit, BlueprintVisible)
	class AActor*                                 FocusActor;                                        // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FocusSet;                                          // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CleanUp(class AAIController* Controller, class APawn* Pawn);
	void ClearFocus(class AAIController* Controller);
	void ExecuteUbergraph_BTT_WaitAbilityComplete(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void SetFocus(class AAIController* Controller);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_WaitAbilityComplete_C">();
	}
	static class UBTT_WaitAbilityComplete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_WaitAbilityComplete_C>();
	}
};
static_assert(alignof(UBTT_WaitAbilityComplete_C) == 0x000008, "Wrong alignment on UBTT_WaitAbilityComplete_C");
static_assert(sizeof(UBTT_WaitAbilityComplete_C) == 0x000108, "Wrong size on UBTT_WaitAbilityComplete_C");
static_assert(offsetof(UBTT_WaitAbilityComplete_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_WaitAbilityComplete_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_WaitAbilityComplete_C, Delay) == 0x0000B0, "Member 'UBTT_WaitAbilityComplete_C::Delay' has a wrong offset!");
static_assert(offsetof(UBTT_WaitAbilityComplete_C, Delta) == 0x0000B8, "Member 'UBTT_WaitAbilityComplete_C::Delta' has a wrong offset!");
static_assert(offsetof(UBTT_WaitAbilityComplete_C, Enemy) == 0x0000C0, "Member 'UBTT_WaitAbilityComplete_C::Enemy' has a wrong offset!");
static_assert(offsetof(UBTT_WaitAbilityComplete_C, FocusAbilityTarget) == 0x0000C8, "Member 'UBTT_WaitAbilityComplete_C::FocusAbilityTarget' has a wrong offset!");
static_assert(offsetof(UBTT_WaitAbilityComplete_C, AbilityTarget) == 0x0000D0, "Member 'UBTT_WaitAbilityComplete_C::AbilityTarget' has a wrong offset!");
static_assert(offsetof(UBTT_WaitAbilityComplete_C, FocusActor) == 0x0000F8, "Member 'UBTT_WaitAbilityComplete_C::FocusActor' has a wrong offset!");
static_assert(offsetof(UBTT_WaitAbilityComplete_C, FocusSet) == 0x000100, "Member 'UBTT_WaitAbilityComplete_C::FocusSet' has a wrong offset!");

}

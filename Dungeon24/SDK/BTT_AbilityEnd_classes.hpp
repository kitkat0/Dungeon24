#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AbilityEnd

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_AbilityEnd.BTT_AbilityEnd_C
// 0x0058 (0x0100 - 0x00A8)
class UBTT_AbilityEnd_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Ability;                                           // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 AbilityActivateTime;                               // 0x00D8(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_AbilityEnd(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_AbilityEnd_C">();
	}
	static class UBTT_AbilityEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_AbilityEnd_C>();
	}
};
static_assert(alignof(UBTT_AbilityEnd_C) == 0x000008, "Wrong alignment on UBTT_AbilityEnd_C");
static_assert(sizeof(UBTT_AbilityEnd_C) == 0x000100, "Wrong size on UBTT_AbilityEnd_C");
static_assert(offsetof(UBTT_AbilityEnd_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_AbilityEnd_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_AbilityEnd_C, Ability) == 0x0000B0, "Member 'UBTT_AbilityEnd_C::Ability' has a wrong offset!");
static_assert(offsetof(UBTT_AbilityEnd_C, AbilityActivateTime) == 0x0000D8, "Member 'UBTT_AbilityEnd_C::AbilityActivateTime' has a wrong offset!");

}


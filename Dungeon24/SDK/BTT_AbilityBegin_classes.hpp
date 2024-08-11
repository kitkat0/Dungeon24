#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AbilityBegin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_AbilityBegin.BTT_AbilityBegin_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTT_AbilityBegin_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Ability;                                           // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_AbilityBegin(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_AbilityBegin_C">();
	}
	static class UBTT_AbilityBegin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_AbilityBegin_C>();
	}
};
static_assert(alignof(UBTT_AbilityBegin_C) == 0x000008, "Wrong alignment on UBTT_AbilityBegin_C");
static_assert(sizeof(UBTT_AbilityBegin_C) == 0x0000D8, "Wrong size on UBTT_AbilityBegin_C");
static_assert(offsetof(UBTT_AbilityBegin_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_AbilityBegin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_AbilityBegin_C, Ability) == 0x0000B0, "Member 'UBTT_AbilityBegin_C::Ability' has a wrong offset!");

}

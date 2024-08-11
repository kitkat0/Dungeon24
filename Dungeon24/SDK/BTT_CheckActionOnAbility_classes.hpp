#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_CheckActionOnAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_CheckActionOnAbility.BTT_CheckActionOnAbility_C
// 0x0080 (0x0128 - 0x00A8)
class UBTT_CheckActionOnAbility_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Retreat;                                           // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 RetreatIndex;                                      // 0x00D8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 Flank;                                             // 0x0100(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_CheckActionOnAbility(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_CheckActionOnAbility_C">();
	}
	static class UBTT_CheckActionOnAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_CheckActionOnAbility_C>();
	}
};
static_assert(alignof(UBTT_CheckActionOnAbility_C) == 0x000008, "Wrong alignment on UBTT_CheckActionOnAbility_C");
static_assert(sizeof(UBTT_CheckActionOnAbility_C) == 0x000128, "Wrong size on UBTT_CheckActionOnAbility_C");
static_assert(offsetof(UBTT_CheckActionOnAbility_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_CheckActionOnAbility_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_CheckActionOnAbility_C, Retreat) == 0x0000B0, "Member 'UBTT_CheckActionOnAbility_C::Retreat' has a wrong offset!");
static_assert(offsetof(UBTT_CheckActionOnAbility_C, RetreatIndex) == 0x0000D8, "Member 'UBTT_CheckActionOnAbility_C::RetreatIndex' has a wrong offset!");
static_assert(offsetof(UBTT_CheckActionOnAbility_C, Flank) == 0x000100, "Member 'UBTT_CheckActionOnAbility_C::Flank' has a wrong offset!");

}


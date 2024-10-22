#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_FlankClear

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_FlankClear.BTT_FlankClear_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTT_FlankClear_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Flank;                                             // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_FlankClear(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_FlankClear_C">();
	}
	static class UBTT_FlankClear_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_FlankClear_C>();
	}
};
static_assert(alignof(UBTT_FlankClear_C) == 0x000008, "Wrong alignment on UBTT_FlankClear_C");
static_assert(sizeof(UBTT_FlankClear_C) == 0x0000D8, "Wrong size on UBTT_FlankClear_C");
static_assert(offsetof(UBTT_FlankClear_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_FlankClear_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_FlankClear_C, Flank) == 0x0000B0, "Member 'UBTT_FlankClear_C::Flank' has a wrong offset!");

}


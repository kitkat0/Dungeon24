#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_Stare

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_Stare.BTT_Stare_C
// 0x0058 (0x0100 - 0x00A8)
class UBTT_Stare_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Stare;                                             // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 AbilityTarget;                                     // 0x00D8(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_Stare(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_Stare_C">();
	}
	static class UBTT_Stare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_Stare_C>();
	}
};
static_assert(alignof(UBTT_Stare_C) == 0x000008, "Wrong alignment on UBTT_Stare_C");
static_assert(sizeof(UBTT_Stare_C) == 0x000100, "Wrong size on UBTT_Stare_C");
static_assert(offsetof(UBTT_Stare_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_Stare_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_Stare_C, Stare) == 0x0000B0, "Member 'UBTT_Stare_C::Stare' has a wrong offset!");
static_assert(offsetof(UBTT_Stare_C, AbilityTarget) == 0x0000D8, "Member 'UBTT_Stare_C::AbilityTarget' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_AlertSearch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_AlertSearch.BTS_AlertSearch_C
// 0x0080 (0x0118 - 0x0098)
class UBTS_AlertSearch_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 AlertState;                                        // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 AlertStateTime;                                    // 0x00C8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 AlertSearchTimeLimit;                              // 0x00F0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTS_AlertSearch(int32 EntryPoint);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void SetAlertSuspicious();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_AlertSearch_C">();
	}
	static class UBTS_AlertSearch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_AlertSearch_C>();
	}
};
static_assert(alignof(UBTS_AlertSearch_C) == 0x000008, "Wrong alignment on UBTS_AlertSearch_C");
static_assert(sizeof(UBTS_AlertSearch_C) == 0x000118, "Wrong size on UBTS_AlertSearch_C");
static_assert(offsetof(UBTS_AlertSearch_C, UberGraphFrame) == 0x000098, "Member 'UBTS_AlertSearch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTS_AlertSearch_C, AlertState) == 0x0000A0, "Member 'UBTS_AlertSearch_C::AlertState' has a wrong offset!");
static_assert(offsetof(UBTS_AlertSearch_C, AlertStateTime) == 0x0000C8, "Member 'UBTS_AlertSearch_C::AlertStateTime' has a wrong offset!");
static_assert(offsetof(UBTS_AlertSearch_C, AlertSearchTimeLimit) == 0x0000F0, "Member 'UBTS_AlertSearch_C::AlertSearchTimeLimit' has a wrong offset!");

}

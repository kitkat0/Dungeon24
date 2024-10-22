#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetWanderBaseLocation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_SetWanderBaseLocation.BTT_SetWanderBaseLocation_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTT_SetWanderBaseLocation_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 WanderBaseLocation;                                // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTT_SetWanderBaseLocation(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_SetWanderBaseLocation_C">();
	}
	static class UBTT_SetWanderBaseLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_SetWanderBaseLocation_C>();
	}
};
static_assert(alignof(UBTT_SetWanderBaseLocation_C) == 0x000008, "Wrong alignment on UBTT_SetWanderBaseLocation_C");
static_assert(sizeof(UBTT_SetWanderBaseLocation_C) == 0x0000D8, "Wrong size on UBTT_SetWanderBaseLocation_C");
static_assert(offsetof(UBTT_SetWanderBaseLocation_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_SetWanderBaseLocation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_SetWanderBaseLocation_C, WanderBaseLocation) == 0x0000B0, "Member 'UBTT_SetWanderBaseLocation_C::WanderBaseLocation' has a wrong offset!");

}


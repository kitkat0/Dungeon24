#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetAbilityTurnSpeed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_SetAbilityTurnSpeed.BTT_SetAbilityTurnSpeed_C
// 0x0008 (0x00B0 - 0x00A8)
class UBTT_SetAbilityTurnSpeed_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTT_SetAbilityTurnSpeed(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_SetAbilityTurnSpeed_C">();
	}
	static class UBTT_SetAbilityTurnSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_SetAbilityTurnSpeed_C>();
	}
};
static_assert(alignof(UBTT_SetAbilityTurnSpeed_C) == 0x000008, "Wrong alignment on UBTT_SetAbilityTurnSpeed_C");
static_assert(sizeof(UBTT_SetAbilityTurnSpeed_C) == 0x0000B0, "Wrong size on UBTT_SetAbilityTurnSpeed_C");
static_assert(offsetof(UBTT_SetAbilityTurnSpeed_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_SetAbilityTurnSpeed_C::UberGraphFrame' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_Flank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_Flank.BTS_Flank_C
// 0x0060 (0x00F8 - 0x0098)
class UBTS_Flank_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 TargetAgainst;                                     // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                  ExecutingTag;                                      // 0x00C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InterruptByApproachCheck;                          // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        InterruptByApproachCheckTime;                      // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTS_Flank(int32 EntryPoint);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_Flank_C">();
	}
	static class UBTS_Flank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_Flank_C>();
	}
};
static_assert(alignof(UBTS_Flank_C) == 0x000008, "Wrong alignment on UBTS_Flank_C");
static_assert(sizeof(UBTS_Flank_C) == 0x0000F8, "Wrong size on UBTS_Flank_C");
static_assert(offsetof(UBTS_Flank_C, UberGraphFrame) == 0x000098, "Member 'UBTS_Flank_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTS_Flank_C, TargetAgainst) == 0x0000A0, "Member 'UBTS_Flank_C::TargetAgainst' has a wrong offset!");
static_assert(offsetof(UBTS_Flank_C, ExecutingTag) == 0x0000C8, "Member 'UBTS_Flank_C::ExecutingTag' has a wrong offset!");
static_assert(offsetof(UBTS_Flank_C, InterruptByApproachCheck) == 0x0000E8, "Member 'UBTS_Flank_C::InterruptByApproachCheck' has a wrong offset!");
static_assert(offsetof(UBTS_Flank_C, InterruptByApproachCheckTime) == 0x0000F0, "Member 'UBTS_Flank_C::InterruptByApproachCheckTime' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_MoveTo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_MoveTo.BTT_MoveTo_C
// 0x00C8 (0x0180 - 0x00B8)
class UBTT_MoveTo_C final : public UBTTask_BlackboardObserve
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Target;                                            // 0x00C0(0x0028)(Edit, BlueprintVisible)
	double                                        AcceptanceRadius;                                  // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 AcceptanceRadiusBlackboardKey;                     // 0x00F0(0x0028)(Edit, BlueprintVisible)
	double                                        WaypointPathAcceptanceRadiusMultiplier;            // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetActorLocation;                               // 0x0128(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetActorMoveCheckInterval;                      // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetActorMoveCheckDelta;                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetActorTetherDistance;                         // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ObserveBlackboardValue;                            // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWaypointPath*                          TargetPath;                                        // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetPathIndex;                                   // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TargetMoved;                                       // 0x016C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16D[0x3];                                      // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StuckTime;                                         // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StuckDelta;                                        // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTT_MoveTo(int32 EntryPoint);
	void GetNavigableLocationNearby(const struct FVector& CurrentLocation, bool* Result, struct FVector* Location);
	void GetTargetLocation(const struct FVector& Location, class AActor* Actor, struct FVector* Result);
	void IsPointReachable(const struct FVector& Point, bool* Result);
	void MoveTo(class APawn* Pawn);
	void MoveToLocationNearby(class APawn* Pawn, const struct FVector& Location, bool UsePathfinding, class AActor* ObserveTarget);
	void MoveToTarget(class APawn* Pawn, const struct FVector& Location, class AActor* Actor);
	void OnFail_10B4AC5B433818C972C40BB663D8FC16(EPathFollowingResult MovementResult);
	void OnFail_9E5D74E8496A9FC6C0E927BBCEBB275B(EPathFollowingResult MovementResult);
	void OnSuccess_10B4AC5B433818C972C40BB663D8FC16(EPathFollowingResult MovementResult);
	void OnSuccess_9E5D74E8496A9FC6C0E927BBCEBB275B(EPathFollowingResult MovementResult);
	void OnTargetChanged(uint8 KeyID);
	void PickTargetPathWaypoint(bool* Result, struct FVector* Waypoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void TargetPathNeedCheckReachWaypoint(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_MoveTo_C">();
	}
	static class UBTT_MoveTo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_MoveTo_C>();
	}
};
static_assert(alignof(UBTT_MoveTo_C) == 0x000008, "Wrong alignment on UBTT_MoveTo_C");
static_assert(sizeof(UBTT_MoveTo_C) == 0x000180, "Wrong size on UBTT_MoveTo_C");
static_assert(offsetof(UBTT_MoveTo_C, UberGraphFrame) == 0x0000B8, "Member 'UBTT_MoveTo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, Target) == 0x0000C0, "Member 'UBTT_MoveTo_C::Target' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, AcceptanceRadius) == 0x0000E8, "Member 'UBTT_MoveTo_C::AcceptanceRadius' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, AcceptanceRadiusBlackboardKey) == 0x0000F0, "Member 'UBTT_MoveTo_C::AcceptanceRadiusBlackboardKey' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, WaypointPathAcceptanceRadiusMultiplier) == 0x000118, "Member 'UBTT_MoveTo_C::WaypointPathAcceptanceRadiusMultiplier' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, TargetActor) == 0x000120, "Member 'UBTT_MoveTo_C::TargetActor' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, TargetActorLocation) == 0x000128, "Member 'UBTT_MoveTo_C::TargetActorLocation' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, TargetActorMoveCheckInterval) == 0x000140, "Member 'UBTT_MoveTo_C::TargetActorMoveCheckInterval' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, TargetActorMoveCheckDelta) == 0x000148, "Member 'UBTT_MoveTo_C::TargetActorMoveCheckDelta' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, TargetActorTetherDistance) == 0x000150, "Member 'UBTT_MoveTo_C::TargetActorTetherDistance' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, ObserveBlackboardValue) == 0x000158, "Member 'UBTT_MoveTo_C::ObserveBlackboardValue' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, TargetPath) == 0x000160, "Member 'UBTT_MoveTo_C::TargetPath' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, TargetPathIndex) == 0x000168, "Member 'UBTT_MoveTo_C::TargetPathIndex' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, TargetMoved) == 0x00016C, "Member 'UBTT_MoveTo_C::TargetMoved' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, StuckTime) == 0x000170, "Member 'UBTT_MoveTo_C::StuckTime' has a wrong offset!");
static_assert(offsetof(UBTT_MoveTo_C, StuckDelta) == 0x000178, "Member 'UBTT_MoveTo_C::StuckDelta' has a wrong offset!");

}


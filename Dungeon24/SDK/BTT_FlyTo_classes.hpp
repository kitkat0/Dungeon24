#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_FlyTo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_FlyTo.BTT_FlyTo_C
// 0x0118 (0x01D0 - 0x00B8)
class UBTT_FlyTo_C final : public UBTTask_BlackboardObserve
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Target;                                            // 0x00C0(0x0028)(Edit, BlueprintVisible)
	bool                                          UseTargetHeightWhenMoving;                         // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AcceptanceRadiusDestination;                       // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 AcceptanceRadiusDestinationBlackboardKey;          // 0x00F8(0x0028)(Edit, BlueprintVisible)
	double                                        AcceptanceRadiusMidway;                            // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TetherDistance;                                    // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WaypointPathAcceptanceRadiusMultiplier;            // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TargetActorMoveCheckInterval;                      // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetActorMoveCheckDelta;                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaypointPath*                          TargetPath;                                        // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetPathIndex;                                   // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetLocation;                                    // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TargetMoved;                                       // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          Controller;                                        // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Pawn;                                              // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ProjectLength;                                     // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetHeight;                                      // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveHeight;                                        // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        PathPoints;                                        // 0x01A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentPathPoint;                                  // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ObserveBlackboardValue;                            // 0x01BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StuckTime;                                         // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StuckDelta;                                        // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTT_FlyTo(int32 EntryPoint);
	void Finish(bool Success);
	void FlyTo(class AAIController* OwnerController, class APawn* ControlledPawn);
	void GetActorTargetLocation(class APawn* Param_Pawn, class AActor* Actor, struct FVector* Result);
	void IsInLineOfSight(const struct FVector& Src, const struct FVector& Dest, bool* Result);
	void Move();
	void MoveAlongPath();
	void MoveFailed();
	void MoveToPoint();
	void OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnFail_030EE864408B5095FED9AFB2CF0283FD(EPathFollowingResult MovementResult);
	void OnFail_90BC8C294E2B61C8AE9F219EDF52C55A(EPathFollowingResult MovementResult);
	void OnSuccess_030EE864408B5095FED9AFB2CF0283FD(EPathFollowingResult MovementResult);
	void OnSuccess_90BC8C294E2B61C8AE9F219EDF52C55A(EPathFollowingResult MovementResult);
	void OnTargetActorMoved(const struct FVector& Location);
	void OnTargetChanged(uint8 KeyID);
	void PickTargetPathWaypoint(bool* Result, struct FVector* Waypoint);
	void ProjectPointToGround(const struct FVector& Point, struct FVector* ProjectedPoint, bool* Result);
	void ProjectPointToNavigation(const struct FVector& Point, struct FVector* ProjectedPoint, bool* Result);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void TargetPathNeedCheckReachWaypoint(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_FlyTo_C">();
	}
	static class UBTT_FlyTo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_FlyTo_C>();
	}
};
static_assert(alignof(UBTT_FlyTo_C) == 0x000008, "Wrong alignment on UBTT_FlyTo_C");
static_assert(sizeof(UBTT_FlyTo_C) == 0x0001D0, "Wrong size on UBTT_FlyTo_C");
static_assert(offsetof(UBTT_FlyTo_C, UberGraphFrame) == 0x0000B8, "Member 'UBTT_FlyTo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, Target) == 0x0000C0, "Member 'UBTT_FlyTo_C::Target' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, UseTargetHeightWhenMoving) == 0x0000E8, "Member 'UBTT_FlyTo_C::UseTargetHeightWhenMoving' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, AcceptanceRadiusDestination) == 0x0000F0, "Member 'UBTT_FlyTo_C::AcceptanceRadiusDestination' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, AcceptanceRadiusDestinationBlackboardKey) == 0x0000F8, "Member 'UBTT_FlyTo_C::AcceptanceRadiusDestinationBlackboardKey' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, AcceptanceRadiusMidway) == 0x000120, "Member 'UBTT_FlyTo_C::AcceptanceRadiusMidway' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TetherDistance) == 0x000128, "Member 'UBTT_FlyTo_C::TetherDistance' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, WaypointPathAcceptanceRadiusMultiplier) == 0x000130, "Member 'UBTT_FlyTo_C::WaypointPathAcceptanceRadiusMultiplier' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TargetActor) == 0x000138, "Member 'UBTT_FlyTo_C::TargetActor' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TargetActorMoveCheckInterval) == 0x000140, "Member 'UBTT_FlyTo_C::TargetActorMoveCheckInterval' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TargetActorMoveCheckDelta) == 0x000148, "Member 'UBTT_FlyTo_C::TargetActorMoveCheckDelta' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TargetPath) == 0x000150, "Member 'UBTT_FlyTo_C::TargetPath' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TargetPathIndex) == 0x000158, "Member 'UBTT_FlyTo_C::TargetPathIndex' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TargetLocation) == 0x000160, "Member 'UBTT_FlyTo_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TargetMoved) == 0x000178, "Member 'UBTT_FlyTo_C::TargetMoved' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, Controller) == 0x000180, "Member 'UBTT_FlyTo_C::Controller' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, Pawn) == 0x000188, "Member 'UBTT_FlyTo_C::Pawn' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, ProjectLength) == 0x000190, "Member 'UBTT_FlyTo_C::ProjectLength' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, TargetHeight) == 0x000198, "Member 'UBTT_FlyTo_C::TargetHeight' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, MoveHeight) == 0x0001A0, "Member 'UBTT_FlyTo_C::MoveHeight' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, PathPoints) == 0x0001A8, "Member 'UBTT_FlyTo_C::PathPoints' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, CurrentPathPoint) == 0x0001B8, "Member 'UBTT_FlyTo_C::CurrentPathPoint' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, ObserveBlackboardValue) == 0x0001BC, "Member 'UBTT_FlyTo_C::ObserveBlackboardValue' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, StuckTime) == 0x0001C0, "Member 'UBTT_FlyTo_C::StuckTime' has a wrong offset!");
static_assert(offsetof(UBTT_FlyTo_C, StuckDelta) == 0x0001C8, "Member 'UBTT_FlyTo_C::StuckDelta' has a wrong offset!");

}


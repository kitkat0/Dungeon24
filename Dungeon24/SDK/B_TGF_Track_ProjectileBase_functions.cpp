#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TGF_Track_ProjectileBase

#include "Basic.hpp"

#include "B_TGF_Track_ProjectileBase_classes.hpp"
#include "B_TGF_Track_ProjectileBase_parameters.hpp"


namespace SDK
{

// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.BeginFlyby
// (BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::BeginFlyby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "BeginFlyby");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.ChangeMesh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*                    Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::ChangeMesh(class USkeletalMesh* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "ChangeMesh");

	Params::B_TGF_Track_ProjectileBase_C_ChangeMesh Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.CheckHitInteractEnvironment
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AB_TGF_Track_ProjectileBase_C::CheckHitInteractEnvironment(const struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "CheckHitInteractEnvironment");

	Params::B_TGF_Track_ProjectileBase_C_CheckHitInteractEnvironment Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.CheckIgnoreStaticCollision
// (BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::CheckIgnoreStaticCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "CheckIgnoreStaticCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.DealResetState
// (BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::DealResetState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "DealResetState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.Detonate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ExcludedActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ExplodeCenter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::Detonate(class AActor* ExcludedActor, const struct FVector& ExplodeCenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "Detonate");

	Params::B_TGF_Track_ProjectileBase_C_Detonate Parms{};

	Parms.ExcludedActor = ExcludedActor;
	Parms.ExplodeCenter = std::move(ExplodeCenter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.DoChangeMesh
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*                    Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::DoChangeMesh(class USkeletalMesh* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "DoChangeMesh");

	Params::B_TGF_Track_ProjectileBase_C_DoChangeMesh Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.EndFlyby
// (BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::EndFlyby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "EndFlyby");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.ExecuteUbergraph_B_TGF_Track_ProjectileBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::ExecuteUbergraph_B_TGF_Track_ProjectileBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "ExecuteUbergraph_B_TGF_Track_ProjectileBase");

	Params::B_TGF_Track_ProjectileBase_C_ExecuteUbergraph_B_TGF_Track_ProjectileBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.GetCurTargetPos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::GetCurTargetPos(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "GetCurTargetPos");

	Params::B_TGF_Track_ProjectileBase_C_GetCurTargetPos Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.IgnoreStaticCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_StartPos                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TraceActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  DistanceFromCameraToTarget                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TrackActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::IgnoreStaticCollision(const struct FVector& Param_StartPos, class AActor* TraceActor, double DistanceFromCameraToTarget, class AActor* TrackActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "IgnoreStaticCollision");

	Params::B_TGF_Track_ProjectileBase_C_IgnoreStaticCollision Parms{};

	Parms.Param_StartPos = std::move(Param_StartPos);
	Parms.TraceActor = TraceActor;
	Parms.DistanceFromCameraToTarget = DistanceFromCameraToTarget;
	Parms.TrackActor = TrackActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.InitIgnoreActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::InitIgnoreActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "InitIgnoreActors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.OnExceedMaxExistTime
// (BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::OnExceedMaxExistTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "OnExceedMaxExistTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.OnRep_bHasResetState
// (BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::OnRep_bHasResetState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "OnRep_bHasResetState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.OnRep_TargetPos
// (BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::OnRep_TargetPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "OnRep_TargetPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.OnSetTrackTarget
// (BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::OnSetTrackTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "OnSetTrackTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.OnUpdateTargetPos
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::OnUpdateTargetPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "OnUpdateTargetPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.PlayTickAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::PlayTickAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "PlayTickAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_TGF_Track_ProjectileBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "ReceiveEndPlay");

	Params::B_TGF_Track_ProjectileBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_TGF_Track_ProjectileBase_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "ReceiveHit");

	Params::B_TGF_Track_ProjectileBase_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "ReceiveTick");

	Params::B_TGF_Track_ProjectileBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.ResetMovementState
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_TrackTarget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             TrackSocket                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       NewTransform                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TrackPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::ResetMovementState(class AActor* Param_TrackTarget, class FName TrackSocket, const struct FTransform& NewTransform, const struct FVector& TrackPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "ResetMovementState");

	Params::B_TGF_Track_ProjectileBase_C_ResetMovementState Parms{};

	Parms.Param_TrackTarget = Param_TrackTarget;
	Parms.TrackSocket = TrackSocket;
	Parms.NewTransform = std::move(NewTransform);
	Parms.TrackPos = std::move(TrackPos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.SetMovementEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::SetMovementEnable(bool NewEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "SetMovementEnable");

	Params::B_TGF_Track_ProjectileBase_C_SetMovementEnable Parms{};

	Parms.NewEnable = NewEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_Track_ProjectileBase.B_TGF_Track_ProjectileBase_C.SetTrackTarget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InputActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_TrackSocketName                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_Track_ProjectileBase_C::SetTrackTarget(class AActor* InputActor, class FName Param_TrackSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_Track_ProjectileBase_C", "SetTrackTarget");

	Params::B_TGF_Track_ProjectileBase_C_SetTrackTarget Parms{};

	Parms.InputActor = InputActor;
	Parms.Param_TrackSocketName = Param_TrackSocketName;

	UObject::ProcessEvent(Func, &Parms);
}

}

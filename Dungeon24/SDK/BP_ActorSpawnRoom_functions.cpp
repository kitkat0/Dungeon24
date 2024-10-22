#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorSpawnRoom

#include "Basic.hpp"

#include "BP_ActorSpawnRoom_classes.hpp"
#include "BP_ActorSpawnRoom_parameters.hpp"


namespace SDK
{

// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.ActuallySpawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ActorSpawnRoom_C::ActuallySpawn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "ActuallySpawn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.BndEvt__BP_ActorSpawnRoom_PlayerDistanceChecker_K2Node_ComponentBoundEvent_1_Event_SomePlayerComesClose__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                          PlayerLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorSpawnRoom_C::BndEvt__BP_ActorSpawnRoom_PlayerDistanceChecker_K2Node_ComponentBoundEvent_1_Event_SomePlayerComesClose__DelegateSignature(const struct FVector& PlayerLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "BndEvt__BP_ActorSpawnRoom_PlayerDistanceChecker_K2Node_ComponentBoundEvent_1_Event_SomePlayerComesClose__DelegateSignature");

	Params::BP_ActorSpawnRoom_C_BndEvt__BP_ActorSpawnRoom_PlayerDistanceChecker_K2Node_ComponentBoundEvent_1_Event_SomePlayerComesClose__DelegateSignature Parms{};

	Parms.PlayerLocation = std::move(PlayerLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.ExecuteUbergraph_BP_ActorSpawnRoom
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorSpawnRoom_C::ExecuteUbergraph_BP_ActorSpawnRoom(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "ExecuteUbergraph_BP_ActorSpawnRoom");

	Params::BP_ActorSpawnRoom_C_ExecuteUbergraph_BP_ActorSpawnRoom Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.OnReady_4BF65E5B4139E1DAB366E0A9DE8D3B21
// (BlueprintCallable, BlueprintEvent)

void ABP_ActorSpawnRoom_C::OnReady_4BF65E5B4139E1DAB366E0A9DE8D3B21()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "OnReady_4BF65E5B4139E1DAB366E0A9DE8D3B21");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.OnReady_6C2F1DE84C0028304E02B6A30307569B
// (BlueprintCallable, BlueprintEvent)

void ABP_ActorSpawnRoom_C::OnReady_6C2F1DE84C0028304E02B6A30307569B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "OnReady_6C2F1DE84C0028304E02B6A30307569B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ActorSpawnRoom_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          PlayerLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorSpawnRoom_C::Spawn(const struct FVector& PlayerLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "Spawn");

	Params::BP_ActorSpawnRoom_C_Spawn Parms{};

	Parms.PlayerLocation = std::move(PlayerLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.SpawnOneSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          PlayerLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnNumber                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorSpawnRoom_C::SpawnOneSet(const struct FVector& PlayerLocation, int32 SpawnNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "SpawnOneSet");

	Params::BP_ActorSpawnRoom_C_SpawnOneSet Parms{};

	Parms.PlayerLocation = std::move(PlayerLocation);
	Parms.SpawnNumber = SpawnNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActorSpawnRoom_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorSpawnRoom.BP_ActorSpawnRoom_C.WhenPhaseStarts
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PhaseTag                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_ActorSpawnRoom_C::WhenPhaseStarts(const struct FGameplayTag& PhaseTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnRoom_C", "WhenPhaseStarts");

	Params::BP_ActorSpawnRoom_C_WhenPhaseStarts Parms{};

	Parms.PhaseTag = std::move(PhaseTag);

	UObject::ProcessEvent(Func, &Parms);
}

}


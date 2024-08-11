#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorSpawnSet

#include "Basic.hpp"

#include "BP_ActorSpawnSet_classes.hpp"
#include "BP_ActorSpawnSet_parameters.hpp"


namespace SDK
{

// Function BP_ActorSpawnSet.BP_ActorSpawnSet_C.ExecuteUbergraph_BP_ActorSpawnSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorSpawnSet_C::ExecuteUbergraph_BP_ActorSpawnSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnSet_C", "ExecuteUbergraph_BP_ActorSpawnSet");

	Params::BP_ActorSpawnSet_C_ExecuteUbergraph_BP_ActorSpawnSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorSpawnSet.BP_ActorSpawnSet_C.Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          PlayerLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnNumber                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorSpawnSet_C::Spawn(const struct FVector& PlayerLocation, int32 SpawnNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnSet_C", "Spawn");

	Params::BP_ActorSpawnSet_C_Spawn Parms{};

	Parms.PlayerLocation = std::move(PlayerLocation);
	Parms.SpawnNumber = SpawnNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorSpawnSet.BP_ActorSpawnSet_C.SpawnFixedNumberActors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FixedNumber                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorSpawnSet_C::SpawnFixedNumberActors(int32 FixedNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnSet_C", "SpawnFixedNumberActors");

	Params::BP_ActorSpawnSet_C_SpawnFixedNumberActors Parms{};

	Parms.FixedNumber = FixedNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorSpawnSet.BP_ActorSpawnSet_C.SpawnOneActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ActorSpawnSet_C::SpawnOneActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorSpawnSet_C", "SpawnOneActor");

	UObject::ProcessEvent(Func, nullptr);
}

}


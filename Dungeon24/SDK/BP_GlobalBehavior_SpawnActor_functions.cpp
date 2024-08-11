#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalBehavior_SpawnActor

#include "Basic.hpp"

#include "BP_GlobalBehavior_SpawnActor_classes.hpp"
#include "BP_GlobalBehavior_SpawnActor_parameters.hpp"


namespace SDK
{

// Function BP_GlobalBehavior_SpawnActor.BP_GlobalBehavior_SpawnActor_C.DoBehavior
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GlobalBehavior_SpawnActor_C::DoBehavior(const struct FGameplayTag& GameplayTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalBehavior_SpawnActor_C", "DoBehavior");

	Params::BP_GlobalBehavior_SpawnActor_C_DoBehavior Parms{};

	Parms.GameplayTag = std::move(GameplayTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalBehavior_SpawnActor.BP_GlobalBehavior_SpawnActor_C.ExecuteUbergraph_BP_GlobalBehavior_SpawnActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GlobalBehavior_SpawnActor_C::ExecuteUbergraph_BP_GlobalBehavior_SpawnActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalBehavior_SpawnActor_C", "ExecuteUbergraph_BP_GlobalBehavior_SpawnActor");

	Params::BP_GlobalBehavior_SpawnActor_C_ExecuteUbergraph_BP_GlobalBehavior_SpawnActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


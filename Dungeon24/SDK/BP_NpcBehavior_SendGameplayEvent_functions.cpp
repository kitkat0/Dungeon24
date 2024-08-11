#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NpcBehavior_SendGameplayEvent

#include "Basic.hpp"

#include "BP_NpcBehavior_SendGameplayEvent_classes.hpp"
#include "BP_NpcBehavior_SendGameplayEvent_parameters.hpp"


namespace SDK
{

// Function BP_NpcBehavior_SendGameplayEvent.BP_NpcBehavior_SendGameplayEvent_C.DoBehavior
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               Param_EventData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_NpcBehavior_SendGameplayEvent_C::DoBehavior(const struct FGameplayTag& GameplayTag, const struct FGameplayEventData& Param_EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcBehavior_SendGameplayEvent_C", "DoBehavior");

	Params::BP_NpcBehavior_SendGameplayEvent_C_DoBehavior Parms{};

	Parms.GameplayTag = std::move(GameplayTag);
	Parms.Param_EventData = std::move(Param_EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcBehavior_SendGameplayEvent.BP_NpcBehavior_SendGameplayEvent_C.ExecuteUbergraph_BP_NpcBehavior_SendGameplayEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NpcBehavior_SendGameplayEvent_C::ExecuteUbergraph_BP_NpcBehavior_SendGameplayEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcBehavior_SendGameplayEvent_C", "ExecuteUbergraph_BP_NpcBehavior_SendGameplayEvent");

	Params::BP_NpcBehavior_SendGameplayEvent_C_ExecuteUbergraph_BP_NpcBehavior_SendGameplayEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcBehavior_SendGameplayEvent.BP_NpcBehavior_SendGameplayEvent_C.OnReady_D506774D49C4199AF1FC56BD9C4E1511
// (BlueprintCallable, BlueprintEvent)

void UBP_NpcBehavior_SendGameplayEvent_C::OnReady_D506774D49C4199AF1FC56BD9C4E1511()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcBehavior_SendGameplayEvent_C", "OnReady_D506774D49C4199AF1FC56BD9C4E1511");

	UObject::ProcessEvent(Func, nullptr);
}

}

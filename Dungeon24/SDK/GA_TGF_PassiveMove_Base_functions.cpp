#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_PassiveMove_Base

#include "Basic.hpp"

#include "GA_TGF_PassiveMove_Base_classes.hpp"
#include "GA_TGF_PassiveMove_Base_parameters.hpp"


namespace SDK
{

// Function GA_TGF_PassiveMove_Base.GA_TGF_PassiveMove_Base_C.DestinationReachedButNotTimeOut_969887F24745E20880655BB5F443C75A
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_PassiveMove_Base_C::DestinationReachedButNotTimeOut_969887F24745E20880655BB5F443C75A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_PassiveMove_Base_C", "DestinationReachedButNotTimeOut_969887F24745E20880655BB5F443C75A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_PassiveMove_Base.GA_TGF_PassiveMove_Base_C.ExecuteUbergraph_GA_TGF_PassiveMove_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_PassiveMove_Base_C::ExecuteUbergraph_GA_TGF_PassiveMove_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_PassiveMove_Base_C", "ExecuteUbergraph_GA_TGF_PassiveMove_Base");

	Params::GA_TGF_PassiveMove_Base_C_ExecuteUbergraph_GA_TGF_PassiveMove_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_PassiveMove_Base.GA_TGF_PassiveMove_Base_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_TGF_PassiveMove_Base_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_PassiveMove_Base_C", "K2_ActivateAbilityFromEvent");

	Params::GA_TGF_PassiveMove_Base_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_PassiveMove_Base.GA_TGF_PassiveMove_Base_C.OnTimedOut_969887F24745E20880655BB5F443C75A
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_PassiveMove_Base_C::OnTimedOut_969887F24745E20880655BB5F443C75A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_PassiveMove_Base_C", "OnTimedOut_969887F24745E20880655BB5F443C75A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_PassiveMove_Base.GA_TGF_PassiveMove_Base_C.OnTimedOutAndDestinationReached_969887F24745E20880655BB5F443C75A
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_PassiveMove_Base_C::OnTimedOutAndDestinationReached_969887F24745E20880655BB5F443C75A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_PassiveMove_Base_C", "OnTimedOutAndDestinationReached_969887F24745E20880655BB5F443C75A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_PassiveMove_Base.GA_TGF_PassiveMove_Base_C.PreMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_TGF_PassiveMove_Base_C::PreMove(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_PassiveMove_Base_C", "PreMove");

	Params::GA_TGF_PassiveMove_Base_C_PreMove Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_PassiveMove_Base.GA_TGF_PassiveMove_Base_C.UpdateTargetLocation
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_PassiveMove_Base_C::UpdateTargetLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_PassiveMove_Base_C", "UpdateTargetLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_PassiveMove_Base.GA_TGF_PassiveMove_Base_C.UpdateTargetRotation
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_PassiveMove_Base_C::UpdateTargetRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_PassiveMove_Base_C", "UpdateTargetRotation");

	UObject::ProcessEvent(Func, nullptr);
}

}

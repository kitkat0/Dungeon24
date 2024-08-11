#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalBehavior_ShowWidget

#include "Basic.hpp"

#include "BP_GlobalBehavior_ShowWidget_classes.hpp"
#include "BP_GlobalBehavior_ShowWidget_parameters.hpp"


namespace SDK
{

// Function BP_GlobalBehavior_ShowWidget.BP_GlobalBehavior_ShowWidget_C.DoBehavior
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GlobalBehavior_ShowWidget_C::DoBehavior(const struct FGameplayTag& GameplayTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalBehavior_ShowWidget_C", "DoBehavior");

	Params::BP_GlobalBehavior_ShowWidget_C_DoBehavior Parms{};

	Parms.GameplayTag = std::move(GameplayTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalBehavior_ShowWidget.BP_GlobalBehavior_ShowWidget_C.EventReceived_09B9DCEF4984CBC7804E7CAB28A15EE4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     ReceivedTag                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GlobalBehavior_ShowWidget_C::EventReceived_09B9DCEF4984CBC7804E7CAB28A15EE4(const struct FGameplayTag& ReceivedTag, const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalBehavior_ShowWidget_C", "EventReceived_09B9DCEF4984CBC7804E7CAB28A15EE4");

	Params::BP_GlobalBehavior_ShowWidget_C_EventReceived_09B9DCEF4984CBC7804E7CAB28A15EE4 Parms{};

	Parms.ReceivedTag = std::move(ReceivedTag);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalBehavior_ShowWidget.BP_GlobalBehavior_ShowWidget_C.ExecuteUbergraph_BP_GlobalBehavior_ShowWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GlobalBehavior_ShowWidget_C::ExecuteUbergraph_BP_GlobalBehavior_ShowWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalBehavior_ShowWidget_C", "ExecuteUbergraph_BP_GlobalBehavior_ShowWidget");

	Params::BP_GlobalBehavior_ShowWidget_C_ExecuteUbergraph_BP_GlobalBehavior_ShowWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


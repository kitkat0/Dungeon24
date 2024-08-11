#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_AdditionalElementFixedDamage

#include "Basic.hpp"

#include "GA_TGF_AdditionalElementFixedDamage_classes.hpp"
#include "GA_TGF_AdditionalElementFixedDamage_parameters.hpp"


namespace SDK
{

// Function GA_TGF_AdditionalElementFixedDamage.GA_TGF_AdditionalElementFixedDamage_C.ExecuteUbergraph_GA_TGF_AdditionalElementFixedDamage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_AdditionalElementFixedDamage_C::ExecuteUbergraph_GA_TGF_AdditionalElementFixedDamage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_AdditionalElementFixedDamage_C", "ExecuteUbergraph_GA_TGF_AdditionalElementFixedDamage");

	Params::GA_TGF_AdditionalElementFixedDamage_C_ExecuteUbergraph_GA_TGF_AdditionalElementFixedDamage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_AdditionalElementFixedDamage.GA_TGF_AdditionalElementFixedDamage_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_TGF_AdditionalElementFixedDamage_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_AdditionalElementFixedDamage_C", "K2_ActivateAbilityFromEvent");

	Params::GA_TGF_AdditionalElementFixedDamage_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TalentRogue_EnterStealthWithKill

#include "Basic.hpp"

#include "GA_TalentRogue_EnterStealthWithKill_classes.hpp"
#include "GA_TalentRogue_EnterStealthWithKill_parameters.hpp"


namespace SDK
{

// Function GA_TalentRogue_EnterStealthWithKill.GA_TalentRogue_EnterStealthWithKill_C.ExecuteUbergraph_GA_TalentRogue_EnterStealthWithKill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TalentRogue_EnterStealthWithKill_C::ExecuteUbergraph_GA_TalentRogue_EnterStealthWithKill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TalentRogue_EnterStealthWithKill_C", "ExecuteUbergraph_GA_TalentRogue_EnterStealthWithKill");

	Params::GA_TalentRogue_EnterStealthWithKill_C_ExecuteUbergraph_GA_TalentRogue_EnterStealthWithKill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TalentRogue_EnterStealthWithKill.GA_TalentRogue_EnterStealthWithKill_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_TalentRogue_EnterStealthWithKill_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TalentRogue_EnterStealthWithKill_C", "K2_ActivateAbilityFromEvent");

	Params::GA_TalentRogue_EnterStealthWithKill_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}


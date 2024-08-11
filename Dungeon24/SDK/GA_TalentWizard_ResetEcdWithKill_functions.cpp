#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TalentWizard_ResetEcdWithKill

#include "Basic.hpp"

#include "GA_TalentWizard_ResetEcdWithKill_classes.hpp"
#include "GA_TalentWizard_ResetEcdWithKill_parameters.hpp"


namespace SDK
{

// Function GA_TalentWizard_ResetEcdWithKill.GA_TalentWizard_ResetEcdWithKill_C.ExecuteUbergraph_GA_TalentWizard_ResetEcdWithKill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TalentWizard_ResetEcdWithKill_C::ExecuteUbergraph_GA_TalentWizard_ResetEcdWithKill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TalentWizard_ResetEcdWithKill_C", "ExecuteUbergraph_GA_TalentWizard_ResetEcdWithKill");

	Params::GA_TalentWizard_ResetEcdWithKill_C_ExecuteUbergraph_GA_TalentWizard_ResetEcdWithKill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TalentWizard_ResetEcdWithKill.GA_TalentWizard_ResetEcdWithKill_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_TalentWizard_ResetEcdWithKill_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TalentWizard_ResetEcdWithKill_C", "K2_ActivateAbilityFromEvent");

	Params::GA_TalentWizard_ResetEcdWithKill_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}


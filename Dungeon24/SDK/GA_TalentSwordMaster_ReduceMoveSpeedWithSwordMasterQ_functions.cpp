#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ

#include "Basic.hpp"

#include "GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_classes.hpp"
#include "GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_parameters.hpp"


namespace SDK
{

// Function GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ.GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C.ExecuteUbergraph_GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C::ExecuteUbergraph_GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C", "ExecuteUbergraph_GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ");

	Params::GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C_ExecuteUbergraph_GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ.GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C", "K2_ActivateAbilityFromEvent");

	Params::GA_TalentSwordMaster_ReduceMoveSpeedWithSwordMasterQ_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}


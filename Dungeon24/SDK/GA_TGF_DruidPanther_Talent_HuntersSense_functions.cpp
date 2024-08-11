#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_DruidPanther_Talent_HuntersSense

#include "Basic.hpp"

#include "GA_TGF_DruidPanther_Talent_HuntersSense_classes.hpp"
#include "GA_TGF_DruidPanther_Talent_HuntersSense_parameters.hpp"


namespace SDK
{

// Function GA_TGF_DruidPanther_Talent_HuntersSense.GA_TGF_DruidPanther_Talent_HuntersSense_C.Added_6A82079B453EEC585FF4998E7E108CF1
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_DruidPanther_Talent_HuntersSense_C::Added_6A82079B453EEC585FF4998E7E108CF1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_DruidPanther_Talent_HuntersSense_C", "Added_6A82079B453EEC585FF4998E7E108CF1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_DruidPanther_Talent_HuntersSense.GA_TGF_DruidPanther_Talent_HuntersSense_C.ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_DruidPanther_Talent_HuntersSense_C::ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_DruidPanther_Talent_HuntersSense_C", "ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense");

	Params::GA_TGF_DruidPanther_Talent_HuntersSense_C_ExecuteUbergraph_GA_TGF_DruidPanther_Talent_HuntersSense Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_DruidPanther_Talent_HuntersSense.GA_TGF_DruidPanther_Talent_HuntersSense_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TGF_DruidPanther_Talent_HuntersSense_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_DruidPanther_Talent_HuntersSense_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_DruidPanther_Talent_HuntersSense.GA_TGF_DruidPanther_Talent_HuntersSense_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_DruidPanther_Talent_HuntersSense_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_DruidPanther_Talent_HuntersSense_C", "K2_OnEndAbility");

	Params::GA_TGF_DruidPanther_Talent_HuntersSense_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_DruidPanther_Talent_HuntersSense.GA_TGF_DruidPanther_Talent_HuntersSense_C.Removed_49D6AC2243FBBE9676BCFDB05C089BA6
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_DruidPanther_Talent_HuntersSense_C::Removed_49D6AC2243FBBE9676BCFDB05C089BA6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_DruidPanther_Talent_HuntersSense_C", "Removed_49D6AC2243FBBE9676BCFDB05C089BA6");

	UObject::ProcessEvent(Func, nullptr);
}

}

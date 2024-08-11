#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_NoMoveRotAbility_Base

#include "Basic.hpp"

#include "GA_TGF_NoMoveRotAbility_Base_classes.hpp"
#include "GA_TGF_NoMoveRotAbility_Base_parameters.hpp"


namespace SDK
{

// Function GA_TGF_NoMoveRotAbility_Base.GA_TGF_NoMoveRotAbility_Base_C.ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_NoMoveRotAbility_Base_C::ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_NoMoveRotAbility_Base_C", "ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base");

	Params::GA_TGF_NoMoveRotAbility_Base_C_ExecuteUbergraph_GA_TGF_NoMoveRotAbility_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_NoMoveRotAbility_Base.GA_TGF_NoMoveRotAbility_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TGF_NoMoveRotAbility_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_NoMoveRotAbility_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_NoMoveRotAbility_Base.GA_TGF_NoMoveRotAbility_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_NoMoveRotAbility_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_NoMoveRotAbility_Base_C", "K2_OnEndAbility");

	Params::GA_TGF_NoMoveRotAbility_Base_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}


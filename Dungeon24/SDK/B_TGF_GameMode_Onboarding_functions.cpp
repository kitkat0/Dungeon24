#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TGF_GameMode_Onboarding

#include "Basic.hpp"

#include "B_TGF_GameMode_Onboarding_classes.hpp"
#include "B_TGF_GameMode_Onboarding_parameters.hpp"


namespace SDK
{

// Function B_TGF_GameMode_Onboarding.B_TGF_GameMode_Onboarding_C.ExecuteUbergraph_B_TGF_GameMode_Onboarding
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TGF_GameMode_Onboarding_C::ExecuteUbergraph_B_TGF_GameMode_Onboarding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_GameMode_Onboarding_C", "ExecuteUbergraph_B_TGF_GameMode_Onboarding");

	Params::B_TGF_GameMode_Onboarding_C_ExecuteUbergraph_B_TGF_GameMode_Onboarding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_GameMode_Onboarding.B_TGF_GameMode_Onboarding_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_TGF_GameMode_Onboarding_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_GameMode_Onboarding_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


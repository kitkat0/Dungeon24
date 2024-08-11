#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExtractDevice_OnBoarding

#include "Basic.hpp"

#include "BP_ExtractDevice_OnBoarding_classes.hpp"
#include "BP_ExtractDevice_OnBoarding_parameters.hpp"


namespace SDK
{

// Function BP_ExtractDevice_OnBoarding.BP_ExtractDevice_OnBoarding_C.SpawnExtractPortal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ExtractPortal_C*              Portal                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_OnBoarding_C::SpawnExtractPortal(class ABP_ExtractPortal_C** Portal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_OnBoarding_C", "SpawnExtractPortal");

	Params::BP_ExtractDevice_OnBoarding_C_SpawnExtractPortal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Portal != nullptr)
		*Portal = Parms.Portal;
}

}


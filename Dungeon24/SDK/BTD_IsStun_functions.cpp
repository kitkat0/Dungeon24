#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsStun

#include "Basic.hpp"

#include "BTD_IsStun_classes.hpp"
#include "BTD_IsStun_parameters.hpp"


namespace SDK
{

// Function BTD_IsStun.BTD_IsStun_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_IsStun_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTD_IsStun_C", "PerformConditionCheckAI");

	Params::BTD_IsStun_C_PerformConditionCheckAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


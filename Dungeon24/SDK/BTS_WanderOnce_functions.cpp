#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_WanderOnce

#include "Basic.hpp"

#include "BTS_WanderOnce_classes.hpp"
#include "BTS_WanderOnce_parameters.hpp"


namespace SDK
{

// Function BTS_WanderOnce.BTS_WanderOnce_C.ExecuteUbergraph_BTS_WanderOnce
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_WanderOnce_C::ExecuteUbergraph_BTS_WanderOnce(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_WanderOnce_C", "ExecuteUbergraph_BTS_WanderOnce");

	Params::BTS_WanderOnce_C_ExecuteUbergraph_BTS_WanderOnce Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_WanderOnce.BTS_WanderOnce_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTS_WanderOnce_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_WanderOnce_C", "ReceiveDeactivationAI");

	Params::BTS_WanderOnce_C_ReceiveDeactivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

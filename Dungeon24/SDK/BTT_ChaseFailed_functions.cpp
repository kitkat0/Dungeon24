#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_ChaseFailed

#include "Basic.hpp"

#include "BTT_ChaseFailed_classes.hpp"
#include "BTT_ChaseFailed_parameters.hpp"


namespace SDK
{

// Function BTT_ChaseFailed.BTT_ChaseFailed_C.ExecuteUbergraph_BTT_ChaseFailed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ChaseFailed_C::ExecuteUbergraph_BTT_ChaseFailed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ChaseFailed_C", "ExecuteUbergraph_BTT_ChaseFailed");

	Params::BTT_ChaseFailed_C_ExecuteUbergraph_BTT_ChaseFailed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_ChaseFailed.BTT_ChaseFailed_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_ChaseFailed_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ChaseFailed_C", "ReceiveExecuteAI");

	Params::BTT_ChaseFailed_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}


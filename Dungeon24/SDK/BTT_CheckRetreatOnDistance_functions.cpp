#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_CheckRetreatOnDistance

#include "Basic.hpp"

#include "BTT_CheckRetreatOnDistance_classes.hpp"
#include "BTT_CheckRetreatOnDistance_parameters.hpp"


namespace SDK
{

// Function BTT_CheckRetreatOnDistance.BTT_CheckRetreatOnDistance_C.ExecuteUbergraph_BTT_CheckRetreatOnDistance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_CheckRetreatOnDistance_C::ExecuteUbergraph_BTT_CheckRetreatOnDistance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_CheckRetreatOnDistance_C", "ExecuteUbergraph_BTT_CheckRetreatOnDistance");

	Params::BTT_CheckRetreatOnDistance_C_ExecuteUbergraph_BTT_CheckRetreatOnDistance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_CheckRetreatOnDistance.BTT_CheckRetreatOnDistance_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_CheckRetreatOnDistance_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_CheckRetreatOnDistance_C", "ReceiveExecuteAI");

	Params::BTT_CheckRetreatOnDistance_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}


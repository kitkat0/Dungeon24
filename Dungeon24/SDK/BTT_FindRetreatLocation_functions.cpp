#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_FindRetreatLocation

#include "Basic.hpp"

#include "BTT_FindRetreatLocation_classes.hpp"
#include "BTT_FindRetreatLocation_parameters.hpp"


namespace SDK
{

// Function BTT_FindRetreatLocation.BTT_FindRetreatLocation_C.ExecuteUbergraph_BTT_FindRetreatLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_FindRetreatLocation_C::ExecuteUbergraph_BTT_FindRetreatLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_FindRetreatLocation_C", "ExecuteUbergraph_BTT_FindRetreatLocation");

	Params::BTT_FindRetreatLocation_C_ExecuteUbergraph_BTT_FindRetreatLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_FindRetreatLocation.BTT_FindRetreatLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_FindRetreatLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_FindRetreatLocation_C", "ReceiveExecuteAI");

	Params::BTT_FindRetreatLocation_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}


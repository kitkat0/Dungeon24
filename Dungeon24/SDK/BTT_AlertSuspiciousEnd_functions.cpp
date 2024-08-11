#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AlertSuspiciousEnd

#include "Basic.hpp"

#include "BTT_AlertSuspiciousEnd_classes.hpp"
#include "BTT_AlertSuspiciousEnd_parameters.hpp"


namespace SDK
{

// Function BTT_AlertSuspiciousEnd.BTT_AlertSuspiciousEnd_C.ExecuteUbergraph_BTT_AlertSuspiciousEnd
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_AlertSuspiciousEnd_C::ExecuteUbergraph_BTT_AlertSuspiciousEnd(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_AlertSuspiciousEnd_C", "ExecuteUbergraph_BTT_AlertSuspiciousEnd");

	Params::BTT_AlertSuspiciousEnd_C_ExecuteUbergraph_BTT_AlertSuspiciousEnd Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_AlertSuspiciousEnd.BTT_AlertSuspiciousEnd_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_AlertSuspiciousEnd_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_AlertSuspiciousEnd_C", "ReceiveTickAI");

	Params::BTT_AlertSuspiciousEnd_C_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

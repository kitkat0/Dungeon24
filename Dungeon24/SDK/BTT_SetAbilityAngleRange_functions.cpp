#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetAbilityAngleRange

#include "Basic.hpp"

#include "BTT_SetAbilityAngleRange_classes.hpp"
#include "BTT_SetAbilityAngleRange_parameters.hpp"


namespace SDK
{

// Function BTT_SetAbilityAngleRange.BTT_SetAbilityAngleRange_C.ExecuteUbergraph_BTT_SetAbilityAngleRange
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetAbilityAngleRange_C::ExecuteUbergraph_BTT_SetAbilityAngleRange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetAbilityAngleRange_C", "ExecuteUbergraph_BTT_SetAbilityAngleRange");

	Params::BTT_SetAbilityAngleRange_C_ExecuteUbergraph_BTT_SetAbilityAngleRange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_SetAbilityAngleRange.BTT_SetAbilityAngleRange_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetAbilityAngleRange_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetAbilityAngleRange_C", "ReceiveExecuteAI");

	Params::BTT_SetAbilityAngleRange_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}


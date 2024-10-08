#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetAbilityTurnSpeed

#include "Basic.hpp"

#include "BTT_SetAbilityTurnSpeed_classes.hpp"
#include "BTT_SetAbilityTurnSpeed_parameters.hpp"


namespace SDK
{

// Function BTT_SetAbilityTurnSpeed.BTT_SetAbilityTurnSpeed_C.ExecuteUbergraph_BTT_SetAbilityTurnSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetAbilityTurnSpeed_C::ExecuteUbergraph_BTT_SetAbilityTurnSpeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetAbilityTurnSpeed_C", "ExecuteUbergraph_BTT_SetAbilityTurnSpeed");

	Params::BTT_SetAbilityTurnSpeed_C_ExecuteUbergraph_BTT_SetAbilityTurnSpeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_SetAbilityTurnSpeed.BTT_SetAbilityTurnSpeed_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetAbilityTurnSpeed_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetAbilityTurnSpeed_C", "ReceiveExecuteAI");

	Params::BTT_SetAbilityTurnSpeed_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}


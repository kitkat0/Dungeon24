#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetAbilityActivatingTurnSpeed

#include "Basic.hpp"

#include "BTT_SetAbilityActivatingTurnSpeed_classes.hpp"
#include "BTT_SetAbilityActivatingTurnSpeed_parameters.hpp"


namespace SDK
{

// Function BTT_SetAbilityActivatingTurnSpeed.BTT_SetAbilityActivatingTurnSpeed_C.ExecuteUbergraph_BTT_SetAbilityActivatingTurnSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetAbilityActivatingTurnSpeed_C::ExecuteUbergraph_BTT_SetAbilityActivatingTurnSpeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetAbilityActivatingTurnSpeed_C", "ExecuteUbergraph_BTT_SetAbilityActivatingTurnSpeed");

	Params::BTT_SetAbilityActivatingTurnSpeed_C_ExecuteUbergraph_BTT_SetAbilityActivatingTurnSpeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_SetAbilityActivatingTurnSpeed.BTT_SetAbilityActivatingTurnSpeed_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetAbilityActivatingTurnSpeed_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetAbilityActivatingTurnSpeed_C", "ReceiveExecuteAI");

	Params::BTT_SetAbilityActivatingTurnSpeed_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}


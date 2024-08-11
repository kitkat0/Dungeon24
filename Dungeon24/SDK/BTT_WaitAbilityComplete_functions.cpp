#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_WaitAbilityComplete

#include "Basic.hpp"

#include "BTT_WaitAbilityComplete_classes.hpp"
#include "BTT_WaitAbilityComplete_parameters.hpp"


namespace SDK
{

// Function BTT_WaitAbilityComplete.BTT_WaitAbilityComplete_C.CleanUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_WaitAbilityComplete_C::CleanUp(class AAIController* Controller, class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_WaitAbilityComplete_C", "CleanUp");

	Params::BTT_WaitAbilityComplete_C_CleanUp Parms{};

	Parms.Controller = Controller;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_WaitAbilityComplete.BTT_WaitAbilityComplete_C.ClearFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_WaitAbilityComplete_C::ClearFocus(class AAIController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_WaitAbilityComplete_C", "ClearFocus");

	Params::BTT_WaitAbilityComplete_C_ClearFocus Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_WaitAbilityComplete.BTT_WaitAbilityComplete_C.ExecuteUbergraph_BTT_WaitAbilityComplete
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_WaitAbilityComplete_C::ExecuteUbergraph_BTT_WaitAbilityComplete(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_WaitAbilityComplete_C", "ExecuteUbergraph_BTT_WaitAbilityComplete");

	Params::BTT_WaitAbilityComplete_C_ExecuteUbergraph_BTT_WaitAbilityComplete Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_WaitAbilityComplete.BTT_WaitAbilityComplete_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_WaitAbilityComplete_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_WaitAbilityComplete_C", "ReceiveAbortAI");

	Params::BTT_WaitAbilityComplete_C_ReceiveAbortAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_WaitAbilityComplete.BTT_WaitAbilityComplete_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_WaitAbilityComplete_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_WaitAbilityComplete_C", "ReceiveExecuteAI");

	Params::BTT_WaitAbilityComplete_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_WaitAbilityComplete.BTT_WaitAbilityComplete_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_WaitAbilityComplete_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_WaitAbilityComplete_C", "ReceiveTickAI");

	Params::BTT_WaitAbilityComplete_C_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_WaitAbilityComplete.BTT_WaitAbilityComplete_C.SetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_WaitAbilityComplete_C::SetFocus(class AAIController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_WaitAbilityComplete_C", "SetFocus");

	Params::BTT_WaitAbilityComplete_C_SetFocus Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}

}

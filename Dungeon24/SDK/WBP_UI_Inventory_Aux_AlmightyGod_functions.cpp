#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Inventory_Aux_AlmightyGod

#include "Basic.hpp"

#include "WBP_UI_Inventory_Aux_AlmightyGod_classes.hpp"
#include "WBP_UI_Inventory_Aux_AlmightyGod_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Inventory_Aux_AlmightyGod.WBP_UI_Inventory_Aux_AlmightyGod_C.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)

void UWBP_UI_Inventory_Aux_AlmightyGod_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Inventory_Aux_AlmightyGod_C", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_UI_Inventory_Aux_AlmightyGod.WBP_UI_Inventory_Aux_AlmightyGod_C.ExecuteUbergraph_WBP_UI_Inventory_Aux_AlmightyGod
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Inventory_Aux_AlmightyGod_C::ExecuteUbergraph_WBP_UI_Inventory_Aux_AlmightyGod(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Inventory_Aux_AlmightyGod_C", "ExecuteUbergraph_WBP_UI_Inventory_Aux_AlmightyGod");

	Params::WBP_UI_Inventory_Aux_AlmightyGod_C_ExecuteUbergraph_WBP_UI_Inventory_Aux_AlmightyGod Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Inventory_Aux_AlmightyGod.WBP_UI_Inventory_Aux_AlmightyGod_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_UI_Inventory_Aux_AlmightyGod_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Inventory_Aux_AlmightyGod_C", "GetModuleName");

	Params::WBP_UI_Inventory_Aux_AlmightyGod_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


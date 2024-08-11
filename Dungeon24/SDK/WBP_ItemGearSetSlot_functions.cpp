#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemGearSetSlot

#include "Basic.hpp"

#include "WBP_ItemGearSetSlot_classes.hpp"
#include "WBP_ItemGearSetSlot_parameters.hpp"


namespace SDK
{

// Function WBP_ItemGearSetSlot.WBP_ItemGearSetSlot_C.ShowSeparation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGearSetSlot_C::ShowSeparation(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGearSetSlot_C", "ShowSeparation");

	Params::WBP_ItemGearSetSlot_C_ShowSeparation Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemGearSetSlot.WBP_ItemGearSetSlot_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_ItemGearSetSlot_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGearSetSlot_C", "GetModuleName");

	Params::WBP_ItemGearSetSlot_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

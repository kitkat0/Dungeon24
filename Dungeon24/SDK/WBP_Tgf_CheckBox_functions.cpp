#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tgf_CheckBox

#include "Basic.hpp"

#include "WBP_Tgf_CheckBox_classes.hpp"
#include "WBP_Tgf_CheckBox_parameters.hpp"


namespace SDK
{

// Function WBP_Tgf_CheckBox.WBP_Tgf_CheckBox_C.ExecuteUbergraph_WBP_Tgf_CheckBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tgf_CheckBox_C::ExecuteUbergraph_WBP_Tgf_CheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tgf_CheckBox_C", "ExecuteUbergraph_WBP_Tgf_CheckBox");

	Params::WBP_Tgf_CheckBox_C_ExecuteUbergraph_WBP_Tgf_CheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Tgf_CheckBox.WBP_Tgf_CheckBox_C.TgfOnCheckStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// ECheckBoxState                          NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tgf_CheckBox_C::TgfOnCheckStateChanged(ECheckBoxState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tgf_CheckBox_C", "TgfOnCheckStateChanged");

	Params::WBP_Tgf_CheckBox_C_TgfOnCheckStateChanged Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}

}

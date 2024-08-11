#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeyMap_ALT_LEFT

#include "Basic.hpp"

#include "WBP_KeyMap_ALT_LEFT_classes.hpp"
#include "WBP_KeyMap_ALT_LEFT_parameters.hpp"


namespace SDK
{

// Function WBP_KeyMap_ALT_LEFT.WBP_KeyMap_ALT_LEFT_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KeyMap_ALT_LEFT_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyMap_ALT_LEFT_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyMap_ALT_LEFT.WBP_KeyMap_ALT_LEFT_C.ExecuteUbergraph_WBP_KeyMap_ALT_LEFT
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyMap_ALT_LEFT_C::ExecuteUbergraph_WBP_KeyMap_ALT_LEFT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyMap_ALT_LEFT_C", "ExecuteUbergraph_WBP_KeyMap_ALT_LEFT");

	Params::WBP_KeyMap_ALT_LEFT_C_ExecuteUbergraph_WBP_KeyMap_ALT_LEFT Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyMap_ALT_LEFT.WBP_KeyMap_ALT_LEFT_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyMap_ALT_LEFT_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyMap_ALT_LEFT_C", "PreConstruct");

	Params::WBP_KeyMap_ALT_LEFT_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


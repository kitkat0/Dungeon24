#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mouse_Side_5

#include "Basic.hpp"

#include "WBP_Mouse_Side_5_classes.hpp"
#include "WBP_Mouse_Side_5_parameters.hpp"


namespace SDK
{

// Function WBP_Mouse_Side_5.WBP_Mouse_Side_5_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Mouse_Side_5_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mouse_Side_5_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Mouse_Side_5.WBP_Mouse_Side_5_C.ExecuteUbergraph_WBP_Mouse_Side_5
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mouse_Side_5_C::ExecuteUbergraph_WBP_Mouse_Side_5(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mouse_Side_5_C", "ExecuteUbergraph_WBP_Mouse_Side_5");

	Params::WBP_Mouse_Side_5_C_ExecuteUbergraph_WBP_Mouse_Side_5 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Mouse_Side_5.WBP_Mouse_Side_5_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mouse_Side_5_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Mouse_Side_5_C", "PreConstruct");

	Params::WBP_Mouse_Side_5_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

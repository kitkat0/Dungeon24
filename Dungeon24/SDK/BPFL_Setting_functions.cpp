#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_Setting

#include "Basic.hpp"

#include "BPFL_Setting_classes.hpp"
#include "BPFL_Setting_parameters.hpp"


namespace SDK
{

// Function BPFL_Setting.BPFL_Setting_C.GetDefaultInputKBMConfig
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMappableConfigPair>      InputConfig                                            (Parm, OutParm)

void UBPFL_Setting_C::GetDefaultInputKBMConfig(class UObject* __WorldContext, TArray<struct FMappableConfigPair>* InputConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_Setting_C", "GetDefaultInputKBMConfig");

	Params::BPFL_Setting_C_GetDefaultInputKBMConfig Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (InputConfig != nullptr)
		*InputConfig = std::move(Parms.InputConfig);
}


// Function BPFL_Setting.BPFL_Setting_C.Add Child to Key Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                         Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Setting_C::Add_Child_to_Key_Widget(class UOverlay* Widget, const struct FKey& Key, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPFL_Setting_C", "Add Child to Key Widget");

	Params::BPFL_Setting_C_Add_Child_to_Key_Widget Parms{};

	Parms.Widget = Widget;
	Parms.Key = std::move(Key);
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory_CharacterSection

#include "Basic.hpp"

#include "WBP_Inventory_CharacterSection_classes.hpp"
#include "WBP_Inventory_CharacterSection_parameters.hpp"


namespace SDK
{

// Function WBP_Inventory_CharacterSection.WBP_Inventory_CharacterSection_C.ExecuteUbergraph_WBP_Inventory_CharacterSection
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_CharacterSection_C::ExecuteUbergraph_WBP_Inventory_CharacterSection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_CharacterSection_C", "ExecuteUbergraph_WBP_Inventory_CharacterSection");

	Params::WBP_Inventory_CharacterSection_C_ExecuteUbergraph_WBP_Inventory_CharacterSection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_CharacterSection.WBP_Inventory_CharacterSection_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Inventory_CharacterSection_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_CharacterSection_C", "OnDrop");

	Params::WBP_Inventory_CharacterSection_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Inventory_CharacterSection.WBP_Inventory_CharacterSection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_CharacterSection_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_CharacterSection_C", "PreConstruct");

	Params::WBP_Inventory_CharacterSection_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_CharacterSection.WBP_Inventory_CharacterSection_C.SetUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ETgfActorCareer                         Career                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_CharacterSection_C::SetUp(ETgfActorCareer Career)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_CharacterSection_C", "SetUp");

	Params::WBP_Inventory_CharacterSection_C_SetUp Parms{};

	Parms.Career = Career;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_CharacterSection.WBP_Inventory_CharacterSection_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_Inventory_CharacterSection_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_CharacterSection_C", "GetModuleName");

	Params::WBP_Inventory_CharacterSection_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

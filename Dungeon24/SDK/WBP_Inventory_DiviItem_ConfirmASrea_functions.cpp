#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory_DiviItem_ConfirmASrea

#include "Basic.hpp"

#include "WBP_Inventory_DiviItem_ConfirmASrea_classes.hpp"
#include "WBP_Inventory_DiviItem_ConfirmASrea_parameters.hpp"


namespace SDK
{

// Function WBP_Inventory_DiviItem_ConfirmASrea.WBP_Inventory_DiviItem_ConfirmASrea_C.ExecuteUbergraph_WBP_Inventory_DiviItem_ConfirmASrea
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inventory_DiviItem_ConfirmASrea_C::ExecuteUbergraph_WBP_Inventory_DiviItem_ConfirmASrea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_DiviItem_ConfirmASrea_C", "ExecuteUbergraph_WBP_Inventory_DiviItem_ConfirmASrea");

	Params::WBP_Inventory_DiviItem_ConfirmASrea_C_ExecuteUbergraph_WBP_Inventory_DiviItem_ConfirmASrea Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_DiviItem_ConfirmASrea.WBP_Inventory_DiviItem_ConfirmASrea_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inventory_DiviItem_ConfirmASrea_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_DiviItem_ConfirmASrea_C", "OnMouseEnter");

	Params::WBP_Inventory_DiviItem_ConfirmASrea_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Inventory_DiviItem_ConfirmASrea.WBP_Inventory_DiviItem_ConfirmASrea_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inventory_DiviItem_ConfirmASrea_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Inventory_DiviItem_ConfirmASrea_C", "OnMouseLeave");

	Params::WBP_Inventory_DiviItem_ConfirmASrea_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tgf_Inventory_Level

#include "Basic.hpp"

#include "WBP_Tgf_Inventory_Level_classes.hpp"
#include "WBP_Tgf_Inventory_Level_parameters.hpp"


namespace SDK
{

// Function WBP_Tgf_Inventory_Level.WBP_Tgf_Inventory_Level_C.ExecuteUbergraph_WBP_Tgf_Inventory_Level
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tgf_Inventory_Level_C::ExecuteUbergraph_WBP_Tgf_Inventory_Level(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tgf_Inventory_Level_C", "ExecuteUbergraph_WBP_Tgf_Inventory_Level");

	Params::WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Tgf_Inventory_Level.WBP_Tgf_Inventory_Level_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Tgf_Inventory_Level_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tgf_Inventory_Level_C", "OnMouseEnter");

	Params::WBP_Tgf_Inventory_Level_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Tgf_Inventory_Level.WBP_Tgf_Inventory_Level_C.Setlevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Cur_level                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Cur_exp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Role_name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Tgf_Inventory_Level_C::Setlevel(int32 Cur_level, int32 Cur_exp, const class FString& Role_name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Tgf_Inventory_Level_C", "Setlevel");

	Params::WBP_Tgf_Inventory_Level_C_Setlevel Parms{};

	Parms.Cur_level = Cur_level;
	Parms.Cur_exp = Cur_exp;
	Parms.Role_name = std::move(Role_name);

	UObject::ProcessEvent(Func, &Parms);
}

}

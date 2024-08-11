#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_InventoryEntry

#include "Basic.hpp"

#include "WBP_TgfGame_InventoryEntry_classes.hpp"
#include "WBP_TgfGame_InventoryEntry_parameters.hpp"


namespace SDK
{

// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)

void UWBP_TgfGame_InventoryEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.DoTgfCustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Param_Navigation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Result                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryEntry_C::DoTgfCustomNavigation(EUINavigation Param_Navigation, class UWidget** Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "DoTgfCustomNavigation");

	Params::WBP_TgfGame_InventoryEntry_C_DoTgfCustomNavigation Parms{};

	Parms.Param_Navigation = Param_Navigation;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.ExecuteUbergraph_WBP_TgfGame_InventoryEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryEntry_C::ExecuteUbergraph_WBP_TgfGame_InventoryEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "ExecuteUbergraph_WBP_TgfGame_InventoryEntry");

	Params::WBP_TgfGame_InventoryEntry_C_ExecuteUbergraph_WBP_TgfGame_InventoryEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.OnMouseEnter
// (BlueprintCosmetic, Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TgfGame_InventoryEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "OnMouseEnter");

	Params::WBP_TgfGame_InventoryEntry_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.OnMouseLeave
// (BlueprintCosmetic, Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TgfGame_InventoryEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "OnMouseLeave");

	Params::WBP_TgfGame_InventoryEntry_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.OnQuickDiscard
// (Native, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Common_ItemEntry_C*          Param_Item_Entry                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryEntry_C::OnQuickDiscard(class UWBP_Common_ItemEntry_C* Param_Item_Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "OnQuickDiscard");

	Params::WBP_TgfGame_InventoryEntry_C_OnQuickDiscard Parms{};

	Parms.Param_Item_Entry = Param_Item_Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.OnQuickEquip
// (Native, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Common_ItemEntry_C*          ItemEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryEntry_C::OnQuickEquip(class UWBP_Common_ItemEntry_C* ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "OnQuickEquip");

	Params::WBP_TgfGame_InventoryEntry_C_OnQuickEquip Parms{};

	Parms.ItemEntry = ItemEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.SetUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTgfInventoryItemWrapper*         Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryEntry_C::SetUp(class UTgfInventoryItemWrapper* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "SetUp");

	Params::WBP_TgfGame_InventoryEntry_C_SetUp Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventoryEntry.WBP_TgfGame_InventoryEntry_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_TgfGame_InventoryEntry_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryEntry_C", "GetModuleName");

	Params::WBP_TgfGame_InventoryEntry_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

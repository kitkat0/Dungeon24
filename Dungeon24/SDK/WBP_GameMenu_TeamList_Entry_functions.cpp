#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameMenu_TeamList_Entry

#include "Basic.hpp"

#include "WBP_GameMenu_TeamList_Entry_classes.hpp"
#include "WBP_GameMenu_TeamList_Entry_parameters.hpp"


namespace SDK
{

// Function WBP_GameMenu_TeamList_Entry.WBP_GameMenu_TeamList_Entry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_GameMenu_TeamList_Entry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameMenu_TeamList_Entry_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameMenu_TeamList_Entry.WBP_GameMenu_TeamList_Entry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameMenu_TeamList_Entry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameMenu_TeamList_Entry_C", "BP_OnItemExpansionChanged");

	Params::WBP_GameMenu_TeamList_Entry_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameMenu_TeamList_Entry.WBP_GameMenu_TeamList_Entry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameMenu_TeamList_Entry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameMenu_TeamList_Entry_C", "BP_OnItemSelectionChanged");

	Params::WBP_GameMenu_TeamList_Entry_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameMenu_TeamList_Entry.WBP_GameMenu_TeamList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameMenu_TeamList_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameMenu_TeamList_Entry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameMenu_TeamList_Entry.WBP_GameMenu_TeamList_Entry_C.ExecuteUbergraph_WBP_GameMenu_TeamList_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameMenu_TeamList_Entry_C::ExecuteUbergraph_WBP_GameMenu_TeamList_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameMenu_TeamList_Entry_C", "ExecuteUbergraph_WBP_GameMenu_TeamList_Entry");

	Params::WBP_GameMenu_TeamList_Entry_C_ExecuteUbergraph_WBP_GameMenu_TeamList_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameMenu_TeamList_Entry.WBP_GameMenu_TeamList_Entry_C.InitUIToka
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GameMenu_TeamList_Entry_C::InitUIToka()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameMenu_TeamList_Entry_C", "InitUIToka");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameMenu_TeamList_Entry.WBP_GameMenu_TeamList_Entry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GameMenu_TeamList_Entry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameMenu_TeamList_Entry_C", "OnListItemObjectSet");

	Params::WBP_GameMenu_TeamList_Entry_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameMenu_TeamList_Entry.WBP_GameMenu_TeamList_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameMenu_TeamList_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameMenu_TeamList_Entry_C", "PreConstruct");

	Params::WBP_GameMenu_TeamList_Entry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


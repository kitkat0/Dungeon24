#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemTooltips_Buffline

#include "Basic.hpp"

#include "WBP_ItemTooltips_Buffline_classes.hpp"
#include "WBP_ItemTooltips_Buffline_parameters.hpp"


namespace SDK
{

// Function WBP_ItemTooltips_Buffline.WBP_ItemTooltips_Buffline_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ItemTooltips_Buffline_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemTooltips_Buffline_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemTooltips_Buffline.WBP_ItemTooltips_Buffline_C.ExecuteUbergraph_WBP_ItemTooltips_Buffline
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemTooltips_Buffline_C::ExecuteUbergraph_WBP_ItemTooltips_Buffline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemTooltips_Buffline_C", "ExecuteUbergraph_WBP_ItemTooltips_Buffline");

	Params::WBP_ItemTooltips_Buffline_C_ExecuteUbergraph_WBP_ItemTooltips_Buffline Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemTooltips_Buffline.WBP_ItemTooltips_Buffline_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemTooltips_Buffline_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemTooltips_Buffline_C", "PreConstruct");

	Params::WBP_ItemTooltips_Buffline_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


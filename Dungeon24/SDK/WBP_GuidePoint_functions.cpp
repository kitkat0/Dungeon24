#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuidePoint

#include "Basic.hpp"

#include "WBP_GuidePoint_classes.hpp"
#include "WBP_GuidePoint_parameters.hpp"


namespace SDK
{

// Function WBP_GuidePoint.WBP_GuidePoint_C.BndEvt__WBP_BannerPoint_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_GuidePoint_C::BndEvt__WBP_BannerPoint_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuidePoint_C", "BndEvt__WBP_BannerPoint_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GuidePoint.WBP_GuidePoint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GuidePoint_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuidePoint_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GuidePoint.WBP_GuidePoint_C.ExecuteUbergraph_WBP_GuidePoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuidePoint_C::ExecuteUbergraph_WBP_GuidePoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuidePoint_C", "ExecuteUbergraph_WBP_GuidePoint");

	Params::WBP_GuidePoint_C_ExecuteUbergraph_WBP_GuidePoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuidePoint.WBP_GuidePoint_C.Set Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideInfo_C*                 Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuidePoint_C::Set_Data(int32 Param_ID, class UWBP_GuideInfo_C* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuidePoint_C", "Set Data");

	Params::WBP_GuidePoint_C_Set_Data Parms{};

	Parms.Param_ID = Param_ID;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuidePoint.WBP_GuidePoint_C.Set Select State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuidePoint_C::Set_Select_State(int32 SelectId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuidePoint_C", "Set Select State");

	Params::WBP_GuidePoint_C_Set_Select_State Parms{};

	Parms.SelectId = SelectId;

	UObject::ProcessEvent(Func, &Parms);
}

}

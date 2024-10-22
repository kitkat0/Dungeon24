#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuideMainItem

#include "Basic.hpp"

#include "WBP_GuideMainItem_classes.hpp"
#include "WBP_GuideMainItem_parameters.hpp"


namespace SDK
{

// Function WBP_GuideMainItem.WBP_GuideMainItem_C.BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_GuideMainItem_C::BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuideMainItem_C", "BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GuideMainItem.WBP_GuideMainItem_C.BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_GuideMainItem_C::BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuideMainItem_C", "BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GuideMainItem.WBP_GuideMainItem_C.BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_GuideMainItem_C::BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuideMainItem_C", "BndEvt__WBP_GuideMainItem_Click_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GuideMainItem.WBP_GuideMainItem_C.ExecuteUbergraph_WBP_GuideMainItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideMainItem_C::ExecuteUbergraph_WBP_GuideMainItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuideMainItem_C", "ExecuteUbergraph_WBP_GuideMainItem");

	Params::WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuideMainItem.WBP_GuideMainItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_RawName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GuideWindow_C*               Param_Wbp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideMainItem_C::SetData(class FName Param_RawName, class UWBP_GuideWindow_C* Param_Wbp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuideMainItem_C", "SetData");

	Params::WBP_GuideMainItem_C_SetData Parms{};

	Parms.Param_RawName = Param_RawName;
	Parms.Param_Wbp = Param_Wbp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuideMainItem.WBP_GuideMainItem_C.SetExpand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Expand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideMainItem_C::SetExpand(bool Expand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuideMainItem_C", "SetExpand");

	Params::WBP_GuideMainItem_C_SetExpand Parms{};

	Parms.Expand = Expand;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuideMainItem.WBP_GuideMainItem_C.SetSelectState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SelectId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideMainItem_C::SetSelectState(class FName SelectId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuideMainItem_C", "SetSelectState");

	Params::WBP_GuideMainItem_C_SetSelectState Parms{};

	Parms.SelectId = SelectId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuideMainItem.WBP_GuideMainItem_C.SetSubList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_GuideMainItem_C::SetSubList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuideMainItem_C", "SetSubList");

	UObject::ProcessEvent(Func, nullptr);
}

}


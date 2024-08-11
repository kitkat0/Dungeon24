#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_Button_Simple

#include "Basic.hpp"

#include "WBP_Common_Button_Simple_classes.hpp"
#include "WBP_Common_Button_Simple_parameters.hpp"


namespace SDK
{

// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.BndEvt__WBP_Common_Button_Simple_ButtonClick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Common_Button_Simple_C::BndEvt__WBP_Common_Button_Simple_ButtonClick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "BndEvt__WBP_Common_Button_Simple_ButtonClick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.BndEvt__WBP_Common_Button_Single_ButtonClick_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Common_Button_Simple_C::BndEvt__WBP_Common_Button_Single_ButtonClick_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "BndEvt__WBP_Common_Button_Single_ButtonClick_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.BndEvt__WBP_Common_Button_Single_ButtonClick_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Common_Button_Simple_C::BndEvt__WBP_Common_Button_Single_ButtonClick_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "BndEvt__WBP_Common_Button_Single_ButtonClick_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Common_Button_Simple_C::ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "ButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Common_Button_Simple_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.ExecuteUbergraph_WBP_Common_Button_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_Button_Simple_C::ExecuteUbergraph_WBP_Common_Button_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "ExecuteUbergraph_WBP_Common_Button_Simple");

	Params::WBP_Common_Button_Simple_C_ExecuteUbergraph_WBP_Common_Button_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_Button_Simple_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "PreConstruct");

	Params::WBP_Common_Button_Simple_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.SetBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Param_Texture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_Button_Simple_C::SetBg(class UTexture2D* Param_Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "SetBg");

	Params::WBP_Common_Button_Simple_C_SetBg Parms{};

	Parms.Param_Texture = Param_Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Common_Button_Simple_C::SetName(const class FText& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "SetName");

	Params::WBP_Common_Button_Simple_C_SetName Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_Button_Simple.WBP_Common_Button_Simple_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_Width                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Hight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_Button_Simple_C::SetSize(double Param_Width, double Hight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_Button_Simple_C", "SetSize");

	Params::WBP_Common_Button_Simple_C_SetSize Parms{};

	Parms.Param_Width = Param_Width;
	Parms.Hight = Hight;

	UObject::ProcessEvent(Func, &Parms);
}

}

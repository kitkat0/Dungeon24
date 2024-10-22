#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_AttributeChangeHandle_CurShield

#include "Basic.hpp"

#include "GA_TGF_AttributeChangeHandle_CurShield_classes.hpp"
#include "GA_TGF_AttributeChangeHandle_CurShield_parameters.hpp"


namespace SDK
{

// Function GA_TGF_AttributeChangeHandle_CurShield.GA_TGF_AttributeChangeHandle_CurShield_C.AttrChangeHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTgfAttributeComponent*           AttrComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute               Attr                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UGA_TGF_AttributeChangeHandle_CurShield_C::AttrChangeHandle(class UTgfAttributeComponent* AttrComp, const struct FGameplayAttribute& Attr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_AttributeChangeHandle_CurShield_C", "AttrChangeHandle");

	Params::GA_TGF_AttributeChangeHandle_CurShield_C_AttrChangeHandle Parms{};

	Parms.AttrComp = AttrComp;
	Parms.Attr = std::move(Attr);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_AttributeChangeHandle_CurShield.GA_TGF_AttributeChangeHandle_CurShield_C.ExecuteUbergraph_GA_TGF_AttributeChangeHandle_CurShield
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_AttributeChangeHandle_CurShield_C::ExecuteUbergraph_GA_TGF_AttributeChangeHandle_CurShield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_AttributeChangeHandle_CurShield_C", "ExecuteUbergraph_GA_TGF_AttributeChangeHandle_CurShield");

	Params::GA_TGF_AttributeChangeHandle_CurShield_C_ExecuteUbergraph_GA_TGF_AttributeChangeHandle_CurShield Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_AttributeChangeHandle_CurShield.GA_TGF_AttributeChangeHandle_CurShield_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TGF_AttributeChangeHandle_CurShield_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_AttributeChangeHandle_CurShield_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_AttributeChangeHandle_CurShield.GA_TGF_AttributeChangeHandle_CurShield_C.ResetGE
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_TGF_AttributeChangeHandle_CurShield_C::ResetGE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_AttributeChangeHandle_CurShield_C", "ResetGE");

	UObject::ProcessEvent(Func, nullptr);
}

}


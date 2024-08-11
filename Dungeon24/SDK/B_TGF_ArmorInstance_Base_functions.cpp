#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TGF_ArmorInstance_Base

#include "Basic.hpp"

#include "B_TGF_ArmorInstance_Base_classes.hpp"
#include "B_TGF_ArmorInstance_Base_parameters.hpp"


namespace SDK
{

// Function B_TGF_ArmorInstance_Base.B_TGF_ArmorInstance_Base_C.DetermineCosmeticTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_TGF_ArmorInstance_Base_C::DetermineCosmeticTags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_ArmorInstance_Base_C", "DetermineCosmeticTags");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_ArmorInstance_Base.B_TGF_ArmorInstance_Base_C.ExecuteUbergraph_B_TGF_ArmorInstance_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_ArmorInstance_Base_C::ExecuteUbergraph_B_TGF_ArmorInstance_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_ArmorInstance_Base_C", "ExecuteUbergraph_B_TGF_ArmorInstance_Base");

	Params::B_TGF_ArmorInstance_Base_C_ExecuteUbergraph_B_TGF_ArmorInstance_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_ArmorInstance_Base.B_TGF_ArmorInstance_Base_C.K2_OnEquipped
// (Event, Protected, BlueprintEvent)

void UB_TGF_ArmorInstance_Base_C::K2_OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_ArmorInstance_Base_C", "K2_OnEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_ArmorInstance_Base.B_TGF_ArmorInstance_Base_C.K2_OnUnequipped
// (Event, Protected, BlueprintEvent)

void UB_TGF_ArmorInstance_Base_C::K2_OnUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_ArmorInstance_Base_C", "K2_OnUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}

}

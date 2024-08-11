#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Hero_Self_Destruct

#include "Basic.hpp"

#include "GA_TGF_Hero_Self_Destruct_classes.hpp"
#include "GA_TGF_Hero_Self_Destruct_parameters.hpp"


namespace SDK
{

// Function GA_TGF_Hero_Self_Destruct.GA_TGF_Hero_Self_Destruct_C.ClearAllEquipAndInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_TGF_Hero_Self_Destruct_C::ClearAllEquipAndInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Hero_Self_Destruct_C", "ClearAllEquipAndInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_Hero_Self_Destruct.GA_TGF_Hero_Self_Destruct_C.ExecuteUbergraph_GA_TGF_Hero_Self_Destruct
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Hero_Self_Destruct_C::ExecuteUbergraph_GA_TGF_Hero_Self_Destruct(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Hero_Self_Destruct_C", "ExecuteUbergraph_GA_TGF_Hero_Self_Destruct");

	Params::GA_TGF_Hero_Self_Destruct_C_ExecuteUbergraph_GA_TGF_Hero_Self_Destruct Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Hero_Self_Destruct.GA_TGF_Hero_Self_Destruct_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_TGF_Hero_Self_Destruct_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Hero_Self_Destruct_C", "K2_ActivateAbilityFromEvent");

	Params::GA_TGF_Hero_Self_Destruct_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Hero_Self_Destruct.GA_TGF_Hero_Self_Destruct_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Hero_Self_Destruct_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Hero_Self_Destruct_C", "K2_OnEndAbility");

	Params::GA_TGF_Hero_Self_Destruct_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Hero_Self_Destruct.GA_TGF_Hero_Self_Destruct_C.TriggerSelfDestruct
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_Hero_Self_Destruct_C::TriggerSelfDestruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Hero_Self_Destruct_C", "TriggerSelfDestruct");

	UObject::ProcessEvent(Func, nullptr);
}

}


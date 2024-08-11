#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_SwitchWeaponSlot_Base

#include "Basic.hpp"

#include "GA_TGF_SwitchWeaponSlot_Base_classes.hpp"
#include "GA_TGF_SwitchWeaponSlot_Base_parameters.hpp"


namespace SDK
{

// Function GA_TGF_SwitchWeaponSlot_Base.GA_TGF_SwitchWeaponSlot_Base_C.ExecuteUbergraph_GA_TGF_SwitchWeaponSlot_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_SwitchWeaponSlot_Base_C::ExecuteUbergraph_GA_TGF_SwitchWeaponSlot_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_SwitchWeaponSlot_Base_C", "ExecuteUbergraph_GA_TGF_SwitchWeaponSlot_Base");

	Params::GA_TGF_SwitchWeaponSlot_Base_C_ExecuteUbergraph_GA_TGF_SwitchWeaponSlot_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_SwitchWeaponSlot_Base.GA_TGF_SwitchWeaponSlot_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TGF_SwitchWeaponSlot_Base_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_SwitchWeaponSlot_Base_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_SwitchWeaponSlot_Base.GA_TGF_SwitchWeaponSlot_Base_C.GetSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ETgfWeaponChangeSlot                    Slot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_SwitchWeaponSlot_Base_C::GetSlot(ETgfWeaponChangeSlot* Slot) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_SwitchWeaponSlot_Base_C", "GetSlot");

	Params::GA_TGF_SwitchWeaponSlot_Base_C_GetSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;
}


// Function GA_TGF_SwitchWeaponSlot_Base.GA_TGF_SwitchWeaponSlot_Base_C.Is Valid Slot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_SwitchWeaponSlot_Base_C::Is_Valid_Slot(bool* Ret) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_SwitchWeaponSlot_Base_C", "Is Valid Slot");

	Params::GA_TGF_SwitchWeaponSlot_Base_C_Is_Valid_Slot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function GA_TGF_SwitchWeaponSlot_Base.GA_TGF_SwitchWeaponSlot_Base_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle       Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_TGF_SwitchWeaponSlot_Base_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_SwitchWeaponSlot_Base_C", "K2_CanActivateAbility");

	Params::GA_TGF_SwitchWeaponSlot_Base_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

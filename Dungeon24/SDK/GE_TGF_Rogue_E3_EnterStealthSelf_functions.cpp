#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_TGF_Rogue_E3_EnterStealthSelf

#include "Basic.hpp"

#include "GE_TGF_Rogue_E3_EnterStealthSelf_classes.hpp"
#include "GE_TGF_Rogue_E3_EnterStealthSelf_parameters.hpp"


namespace SDK
{

// Function GE_TGF_Rogue_E3_EnterStealthSelf.GE_TGF_Rogue_E3_EnterStealthSelf_C.OnEffectAdded
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAbilitySystemComponent*          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGE_TGF_Rogue_E3_EnterStealthSelf_C::OnEffectAdded(class UAbilitySystemComponent* Target, class UAbilitySystemComponent* Source) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GE_TGF_Rogue_E3_EnterStealthSelf_C", "OnEffectAdded");

	Params::GE_TGF_Rogue_E3_EnterStealthSelf_C_OnEffectAdded Parms{};

	Parms.Target = Target;
	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GE_TGF_Rogue_E3_EnterStealthSelf.GE_TGF_Rogue_E3_EnterStealthSelf_C.OnEffectRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAbilitySystemComponent*          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectRemovalInfo       RemovalInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGE_TGF_Rogue_E3_EnterStealthSelf_C::OnEffectRemoved(class UAbilitySystemComponent* Target, class UAbilitySystemComponent* Source, const struct FGameplayEffectRemovalInfo& RemovalInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GE_TGF_Rogue_E3_EnterStealthSelf_C", "OnEffectRemoved");

	Params::GE_TGF_Rogue_E3_EnterStealthSelf_C_OnEffectRemoved Parms{};

	Parms.Target = Target;
	Parms.Source = Source;
	Parms.RemovalInfo = std::move(RemovalInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}


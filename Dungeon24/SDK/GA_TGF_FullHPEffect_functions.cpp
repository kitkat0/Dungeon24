#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_FullHPEffect

#include "Basic.hpp"

#include "GA_TGF_FullHPEffect_classes.hpp"
#include "GA_TGF_FullHPEffect_parameters.hpp"


namespace SDK
{

// Function GA_TGF_FullHPEffect.GA_TGF_FullHPEffect_C.CheckFullHpEffect
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_FullHPEffect_C::CheckFullHpEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_FullHPEffect_C", "CheckFullHpEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_FullHPEffect.GA_TGF_FullHPEffect_C.EventReceived_98D1D30F4074C2A7B504139FE7424650
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_TGF_FullHPEffect_C::EventReceived_98D1D30F4074C2A7B504139FE7424650(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_FullHPEffect_C", "EventReceived_98D1D30F4074C2A7B504139FE7424650");

	Params::GA_TGF_FullHPEffect_C_EventReceived_98D1D30F4074C2A7B504139FE7424650 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_FullHPEffect.GA_TGF_FullHPEffect_C.ExecuteUbergraph_GA_TGF_FullHPEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_FullHPEffect_C::ExecuteUbergraph_GA_TGF_FullHPEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_FullHPEffect_C", "ExecuteUbergraph_GA_TGF_FullHPEffect");

	Params::GA_TGF_FullHPEffect_C_ExecuteUbergraph_GA_TGF_FullHPEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_FullHPEffect.GA_TGF_FullHPEffect_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TGF_FullHPEffect_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_FullHPEffect_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}


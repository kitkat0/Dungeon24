#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Fighter_QWhirlWind

#include "Basic.hpp"

#include "GA_TGF_Fighter_QWhirlWind_classes.hpp"
#include "GA_TGF_Fighter_QWhirlWind_parameters.hpp"


namespace SDK
{

// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.CheckHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_TGF_Fighter_QWhirlWind_C::CheckHit(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "CheckHit");

	Params::GA_TGF_Fighter_QWhirlWind_C_CheckHit Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.DoEffect
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_Fighter_QWhirlWind_C::DoEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "DoEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.EventReceived_325093BE4223F108DBD2F8BDC38E6E13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_TGF_Fighter_QWhirlWind_C::EventReceived_325093BE4223F108DBD2F8BDC38E6E13(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "EventReceived_325093BE4223F108DBD2F8BDC38E6E13");

	Params::GA_TGF_Fighter_QWhirlWind_C_EventReceived_325093BE4223F108DBD2F8BDC38E6E13 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.EventReceived_326541BB4EA201DA5052A5B7D09E189F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_TGF_Fighter_QWhirlWind_C::EventReceived_326541BB4EA201DA5052A5B7D09E189F(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "EventReceived_326541BB4EA201DA5052A5B7D09E189F");

	Params::GA_TGF_Fighter_QWhirlWind_C_EventReceived_326541BB4EA201DA5052A5B7D09E189F Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.ExecuteUbergraph_GA_TGF_Fighter_QWhirlWind
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Fighter_QWhirlWind_C::ExecuteUbergraph_GA_TGF_Fighter_QWhirlWind(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "ExecuteUbergraph_GA_TGF_Fighter_QWhirlWind");

	Params::GA_TGF_Fighter_QWhirlWind_C_ExecuteUbergraph_GA_TGF_Fighter_QWhirlWind Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.InitSecurity
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_Fighter_QWhirlWind_C::InitSecurity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "InitSecurity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TGF_Fighter_QWhirlWind_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Fighter_QWhirlWind_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "K2_OnEndAbility");

	Params::GA_TGF_Fighter_QWhirlWind_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.OnBlendOut_99CA57034AF33DAA6EAAA9A11E6BA00F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Fighter_QWhirlWind_C::OnBlendOut_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "OnBlendOut_99CA57034AF33DAA6EAAA9A11E6BA00F");

	Params::GA_TGF_Fighter_QWhirlWind_C_OnBlendOut_99CA57034AF33DAA6EAAA9A11E6BA00F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.OnCancelled_99CA57034AF33DAA6EAAA9A11E6BA00F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Fighter_QWhirlWind_C::OnCancelled_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "OnCancelled_99CA57034AF33DAA6EAAA9A11E6BA00F");

	Params::GA_TGF_Fighter_QWhirlWind_C_OnCancelled_99CA57034AF33DAA6EAAA9A11E6BA00F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.OnCompleted_99CA57034AF33DAA6EAAA9A11E6BA00F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Fighter_QWhirlWind_C::OnCompleted_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "OnCompleted_99CA57034AF33DAA6EAAA9A11E6BA00F");

	Params::GA_TGF_Fighter_QWhirlWind_C_OnCompleted_99CA57034AF33DAA6EAAA9A11E6BA00F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.OnInterrupted_99CA57034AF33DAA6EAAA9A11E6BA00F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Fighter_QWhirlWind_C::OnInterrupted_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "OnInterrupted_99CA57034AF33DAA6EAAA9A11E6BA00F");

	Params::GA_TGF_Fighter_QWhirlWind_C_OnInterrupted_99CA57034AF33DAA6EAAA9A11E6BA00F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.OnNotifyBegin_99CA57034AF33DAA6EAAA9A11E6BA00F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Fighter_QWhirlWind_C::OnNotifyBegin_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "OnNotifyBegin_99CA57034AF33DAA6EAAA9A11E6BA00F");

	Params::GA_TGF_Fighter_QWhirlWind_C_OnNotifyBegin_99CA57034AF33DAA6EAAA9A11E6BA00F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_Fighter_QWhirlWind.GA_TGF_Fighter_QWhirlWind_C.OnNotifyEnd_99CA57034AF33DAA6EAAA9A11E6BA00F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_Fighter_QWhirlWind_C::OnNotifyEnd_99CA57034AF33DAA6EAAA9A11E6BA00F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_Fighter_QWhirlWind_C", "OnNotifyEnd_99CA57034AF33DAA6EAAA9A11E6BA00F");

	Params::GA_TGF_Fighter_QWhirlWind_C_OnNotifyEnd_99CA57034AF33DAA6EAAA9A11E6BA00F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}

}


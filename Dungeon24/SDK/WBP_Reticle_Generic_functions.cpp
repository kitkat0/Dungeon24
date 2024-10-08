#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Reticle_Generic

#include "Basic.hpp"

#include "WBP_Reticle_Generic_classes.hpp"
#include "WBP_Reticle_Generic_parameters.hpp"


namespace SDK
{

// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.ApplyTipsSetting
// (BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::ApplyTipsSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "ApplyTipsSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.ChargeAtMax_NextLoop
// (BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::ChargeAtMax_NextLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "ChargeAtMax_NextLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.ChargeStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::ChargeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "ChargeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Reticle_Generic_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.ExecuteUbergraph_WBP_Reticle_Generic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Generic_C::ExecuteUbergraph_WBP_Reticle_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "ExecuteUbergraph_WBP_Reticle_Generic");

	Params::WBP_Reticle_Generic_C_ExecuteUbergraph_WBP_Reticle_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.OnChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::OnChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "OnChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.OnChargeReachedMax
// (BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::OnChargeReachedMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "OnChargeReachedMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.OnChargeStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  MaxTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CurTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Generic_C::OnChargeStart(double MaxTime, double CurTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "OnChargeStart");

	Params::WBP_Reticle_Generic_C_OnChargeStart Parms{};

	Parms.MaxTime = MaxTime;
	Parms.CurTime = CurTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.OnMessageReceived_4B7EAD2D4C7B3E1522CB9CAE2ED95677
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Generic_C::OnMessageReceived_4B7EAD2D4C7B3E1522CB9CAE2ED95677(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "OnMessageReceived_4B7EAD2D4C7B3E1522CB9CAE2ED95677");

	Params::WBP_Reticle_Generic_C_OnMessageReceived_4B7EAD2D4C7B3E1522CB9CAE2ED95677 Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.OnMessageReceived_D0E20D604D7F6B08E40E1DAFEBCE9C18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_Reticle_Generic_C::OnMessageReceived_D0E20D604D7F6B08E40E1DAFEBCE9C18(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "OnMessageReceived_D0E20D604D7F6B08E40E1DAFEBCE9C18");

	Params::WBP_Reticle_Generic_C_OnMessageReceived_D0E20D604D7F6B08E40E1DAFEBCE9C18 Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.OnWeaponInitialized
// (Event, Public, BlueprintEvent)

void UWBP_Reticle_Generic_C::OnWeaponInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "OnWeaponInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.SequenceEvent__ENTRYPOINTWBP_Reticle_Generic
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::SequenceEvent__ENTRYPOINTWBP_Reticle_Generic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "SequenceEvent__ENTRYPOINTWBP_Reticle_Generic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.SequenceEvent__ENTRYPOINTWBP_Reticle_Generic_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::SequenceEvent__ENTRYPOINTWBP_Reticle_Generic_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "SequenceEvent__ENTRYPOINTWBP_Reticle_Generic_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.SequenceEvent__ENTRYPOINTWBP_Reticle_Generic_1
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::SequenceEvent__ENTRYPOINTWBP_Reticle_Generic_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "SequenceEvent__ENTRYPOINTWBP_Reticle_Generic_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Reticle_Generic.WBP_Reticle_Generic_C.SettingChange
// (BlueprintCallable, BlueprintEvent)

void UWBP_Reticle_Generic_C::SettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Reticle_Generic_C", "SettingChange");

	UObject::ProcessEvent(Func, nullptr);
}

}


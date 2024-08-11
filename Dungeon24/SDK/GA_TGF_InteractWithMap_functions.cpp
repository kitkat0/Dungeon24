#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_InteractWithMap

#include "Basic.hpp"

#include "GA_TGF_InteractWithMap_classes.hpp"
#include "GA_TGF_InteractWithMap_parameters.hpp"


namespace SDK
{

// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.AddWeaponTags
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_TGF_InteractWithMap_C::AddWeaponTags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "AddWeaponTags");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.EndMontage
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_InteractWithMap_C::EndMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "EndMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.EventReceived_F6B4200B400FD5A548B047AC89BCCBAF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_TGF_InteractWithMap_C::EventReceived_F6B4200B400FD5A548B047AC89BCCBAF(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "EventReceived_F6B4200B400FD5A548B047AC89BCCBAF");

	Params::GA_TGF_InteractWithMap_C_EventReceived_F6B4200B400FD5A548B047AC89BCCBAF Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.ExecuteUbergraph_GA_TGF_InteractWithMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::ExecuteUbergraph_GA_TGF_InteractWithMap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "ExecuteUbergraph_GA_TGF_InteractWithMap");

	Params::GA_TGF_InteractWithMap_C_ExecuteUbergraph_GA_TGF_InteractWithMap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.GetMapInteractionComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_MapInteractionComponent_C*    Component                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::GetMapInteractionComponent(class UBP_MapInteractionComponent_C** Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "GetMapInteractionComponent");

	Params::GA_TGF_InteractWithMap_C_GetMapInteractionComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TGF_InteractWithMap_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.K2_CheckValidFromInputTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InputTag                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_TGF_InteractWithMap_C::K2_CheckValidFromInputTag(const struct FGameplayTag& InputTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "K2_CheckValidFromInputTag");

	Params::GA_TGF_InteractWithMap_C_K2_CheckValidFromInputTag Parms{};

	Parms.InputTag = std::move(InputTag);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.K2_OnAbilityAdded
// (Event, Protected, BlueprintEvent)

void UGA_TGF_InteractWithMap_C::K2_OnAbilityAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "K2_OnAbilityAdded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "K2_OnEndAbility");

	Params::GA_TGF_InteractWithMap_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnBlendOut_23E98B6448743E77D97E5198B01FE8A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnBlendOut_23E98B6448743E77D97E5198B01FE8A7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnBlendOut_23E98B6448743E77D97E5198B01FE8A7");

	Params::GA_TGF_InteractWithMap_C_OnBlendOut_23E98B6448743E77D97E5198B01FE8A7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnBlendOut_904267E44DDE12EFB5E300B31BA01992
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnBlendOut_904267E44DDE12EFB5E300B31BA01992(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnBlendOut_904267E44DDE12EFB5E300B31BA01992");

	Params::GA_TGF_InteractWithMap_C_OnBlendOut_904267E44DDE12EFB5E300B31BA01992 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnCancelled_23E98B6448743E77D97E5198B01FE8A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnCancelled_23E98B6448743E77D97E5198B01FE8A7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnCancelled_23E98B6448743E77D97E5198B01FE8A7");

	Params::GA_TGF_InteractWithMap_C_OnCancelled_23E98B6448743E77D97E5198B01FE8A7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnCancelled_904267E44DDE12EFB5E300B31BA01992
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnCancelled_904267E44DDE12EFB5E300B31BA01992(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnCancelled_904267E44DDE12EFB5E300B31BA01992");

	Params::GA_TGF_InteractWithMap_C_OnCancelled_904267E44DDE12EFB5E300B31BA01992 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnCompleted_23E98B6448743E77D97E5198B01FE8A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnCompleted_23E98B6448743E77D97E5198B01FE8A7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnCompleted_23E98B6448743E77D97E5198B01FE8A7");

	Params::GA_TGF_InteractWithMap_C_OnCompleted_23E98B6448743E77D97E5198B01FE8A7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnCompleted_904267E44DDE12EFB5E300B31BA01992
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnCompleted_904267E44DDE12EFB5E300B31BA01992(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnCompleted_904267E44DDE12EFB5E300B31BA01992");

	Params::GA_TGF_InteractWithMap_C_OnCompleted_904267E44DDE12EFB5E300B31BA01992 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnFinishInteract
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_InteractWithMap_C::OnFinishInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnFinishInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnInterrupted_23E98B6448743E77D97E5198B01FE8A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnInterrupted_23E98B6448743E77D97E5198B01FE8A7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnInterrupted_23E98B6448743E77D97E5198B01FE8A7");

	Params::GA_TGF_InteractWithMap_C_OnInterrupted_23E98B6448743E77D97E5198B01FE8A7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnInterrupted_904267E44DDE12EFB5E300B31BA01992
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnInterrupted_904267E44DDE12EFB5E300B31BA01992(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnInterrupted_904267E44DDE12EFB5E300B31BA01992");

	Params::GA_TGF_InteractWithMap_C_OnInterrupted_904267E44DDE12EFB5E300B31BA01992 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnNotifyBegin_23E98B6448743E77D97E5198B01FE8A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnNotifyBegin_23E98B6448743E77D97E5198B01FE8A7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnNotifyBegin_23E98B6448743E77D97E5198B01FE8A7");

	Params::GA_TGF_InteractWithMap_C_OnNotifyBegin_23E98B6448743E77D97E5198B01FE8A7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnNotifyBegin_904267E44DDE12EFB5E300B31BA01992
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnNotifyBegin_904267E44DDE12EFB5E300B31BA01992(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnNotifyBegin_904267E44DDE12EFB5E300B31BA01992");

	Params::GA_TGF_InteractWithMap_C_OnNotifyBegin_904267E44DDE12EFB5E300B31BA01992 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnNotifyEnd_23E98B6448743E77D97E5198B01FE8A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnNotifyEnd_23E98B6448743E77D97E5198B01FE8A7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnNotifyEnd_23E98B6448743E77D97E5198B01FE8A7");

	Params::GA_TGF_InteractWithMap_C_OnNotifyEnd_23E98B6448743E77D97E5198B01FE8A7 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnNotifyEnd_904267E44DDE12EFB5E300B31BA01992
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnNotifyEnd_904267E44DDE12EFB5E300B31BA01992(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnNotifyEnd_904267E44DDE12EFB5E300B31BA01992");

	Params::GA_TGF_InteractWithMap_C_OnNotifyEnd_904267E44DDE12EFB5E300B31BA01992 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.OnRelease_7F652B2046C0AAB8941A3FA9FE0173F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeHeld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::OnRelease_7F652B2046C0AAB8941A3FA9FE0173F1(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "OnRelease_7F652B2046C0AAB8941A3FA9FE0173F1");

	Params::GA_TGF_InteractWithMap_C_OnRelease_7F652B2046C0AAB8941A3FA9FE0173F1 Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.SetAudioSwitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           AttachName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGA_TGF_InteractWithMap_C::SetAudioSwitch(class AActor* Actor, const class FString& AttachName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "SetAudioSwitch");

	Params::GA_TGF_InteractWithMap_C_SetAudioSwitch Parms{};

	Parms.Actor = Actor;
	Parms.AttachName = std::move(AttachName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.WaitForCancel
// (BlueprintCallable, BlueprintEvent)

void UGA_TGF_InteractWithMap_C::WaitForCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "WaitForCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_TGF_InteractWithMap.GA_TGF_InteractWithMap_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle       Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_TGF_InteractWithMap_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TGF_InteractWithMap_C", "K2_CanActivateAbility");

	Params::GA_TGF_InteractWithMap_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioGameplayVolume

#include "Basic.hpp"

#include "AudioGameplayVolume_classes.hpp"
#include "AudioGameplayVolume_parameters.hpp"


namespace SDK
{

// Function AudioGameplayVolume.AudioGameplayVolumeMutator.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InPriority                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioGameplayVolumeMutator::SetPriority(int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolumeMutator", "SetPriority");

	Params::AudioGameplayVolumeMutator_SetPriority Parms{};

	Parms.InPriority = InPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Volume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InterpolateTime                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttenuationVolumeComponent::SetExteriorVolume(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttenuationVolumeComponent", "SetExteriorVolume");

	Params::AttenuationVolumeComponent_SetExteriorVolume Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Volume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InterpolateTime                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttenuationVolumeComponent::SetInteriorVolume(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttenuationVolumeComponent", "SetInteriorVolume");

	Params::AttenuationVolumeComponent_SetInteriorVolume Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter
// (Native, Event, Public, BlueprintEvent)

void AAudioGameplayVolume::OnListenerEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolume", "OnListenerEnter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.AudioGameplayVolume.OnListenerExit
// (Native, Event, Public, BlueprintEvent)

void AAudioGameplayVolume::OnListenerExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolume", "OnListenerExit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled
// (Native, Protected)

void AAudioGameplayVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolume", "OnRep_bEnabled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.AudioGameplayVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bEnable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAudioGameplayVolume::SetEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolume", "SetEnabled");

	Params::AudioGameplayVolume_SetEnabled Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Volume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InterpolateTime                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFilterVolumeComponent::SetExteriorLPF(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterVolumeComponent", "SetExteriorLPF");

	Params::FilterVolumeComponent_SetExteriorLPF Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Volume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InterpolateTime                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFilterVolumeComponent::SetInteriorLPF(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterVolumeComponent", "SetInteriorLPF");

	Params::FilterVolumeComponent_SetInteriorLPF Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.ReverbVolumeComponent.SetReverbSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FReverbSettings                  NewReverbSettings                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UReverbVolumeComponent::SetReverbSettings(const struct FReverbSettings& NewReverbSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReverbVolumeComponent", "SetReverbSettings");

	Params::ReverbVolumeComponent_SetReverbSettings Parms{};

	Parms.NewReverbSettings = std::move(NewReverbSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.SubmixOverrideVolumeComponent.SetSubmixOverrideSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioVolumeSubmixOverrideSettings>NewSubmixOverrideSettings                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixOverrideVolumeComponent::SetSubmixOverrideSettings(const TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixOverrideVolumeComponent", "SetSubmixOverrideSettings");

	Params::SubmixOverrideVolumeComponent_SetSubmixOverrideSettings Parms{};

	Parms.NewSubmixOverrideSettings = std::move(NewSubmixOverrideSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioVolumeSubmixSendSettings>NewSubmixSendSettings                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixSendVolumeComponent::SetSubmixSendSettings(const TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixSendVolumeComponent", "SetSubmixSendSettings");

	Params::SubmixSendVolumeComponent_SetSubmixSendSettings Parms{};

	Parms.NewSubmixSendSettings = std::move(NewSubmixSendSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

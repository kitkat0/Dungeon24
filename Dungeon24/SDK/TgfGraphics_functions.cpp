#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TgfGraphics

#include "Basic.hpp"

#include "TgfGraphics_classes.hpp"
#include "TgfGraphics_parameters.hpp"


namespace SDK
{

// Function TgfGraphics.TgfInteractableLightSubsystem.GetLightState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ATgfStaticInteraction*            StaticInteraction                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTgfInteractableLightSubsystem::GetLightState(class ATgfStaticInteraction* StaticInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TgfInteractableLightSubsystem", "GetLightState");

	Params::TgfInteractableLightSubsystem_GetLightState Parms{};

	Parms.StaticInteraction = StaticInteraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TgfGraphics.TgfInteractableLightSubsystem.ToggleInteractableLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ATgfStaticInteraction*            StaticInteraction                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLightOn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTgfInteractableLightSubsystem::ToggleInteractableLight(class ATgfStaticInteraction* StaticInteraction, bool bLightOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TgfInteractableLightSubsystem", "ToggleInteractableLight");

	Params::TgfInteractableLightSubsystem_ToggleInteractableLight Parms{};

	Parms.StaticInteraction = StaticInteraction;
	Parms.bLightOn = bLightOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


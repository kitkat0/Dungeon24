#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExtractDevice_Shadow

#include "Basic.hpp"

#include "BP_ExtractDevice_Shadow_classes.hpp"
#include "BP_ExtractDevice_Shadow_parameters.hpp"


namespace SDK
{

// Function BP_ExtractDevice_Shadow.BP_ExtractDevice_Shadow_C.ExecuteUbergraph_BP_ExtractDevice_Shadow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_Shadow_C::ExecuteUbergraph_BP_ExtractDevice_Shadow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Shadow_C", "ExecuteUbergraph_BP_ExtractDevice_Shadow");

	Params::BP_ExtractDevice_Shadow_C_ExecuteUbergraph_BP_ExtractDevice_Shadow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice_Shadow.BP_ExtractDevice_Shadow_C.GetInteractionPromptText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Key                                                    (Parm, OutParm)
// class FText                             Out_Text_Line_1                                        (Parm, OutParm)
// class FText                             Out_Text_Line_2                                        (Parm, OutParm)

void ABP_ExtractDevice_Shadow_C::GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Shadow_C", "GetInteractionPromptText");

	Params::BP_ExtractDevice_Shadow_C_GetInteractionPromptText Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

	if (Out_Text_Line_1 != nullptr)
		*Out_Text_Line_1 = std::move(Parms.Out_Text_Line_1);

	if (Out_Text_Line_2 != nullptr)
		*Out_Text_Line_2 = std::move(Parms.Out_Text_Line_2);
}


// Function BP_ExtractDevice_Shadow.BP_ExtractDevice_Shadow_C.OnReady_84AAA4744BD9A9277625A49CA31ABD6D
// (BlueprintCallable, BlueprintEvent)

void ABP_ExtractDevice_Shadow_C::OnReady_84AAA4744BD9A9277625A49CA31ABD6D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Shadow_C", "OnReady_84AAA4744BD9A9277625A49CA31ABD6D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice_Shadow.BP_ExtractDevice_Shadow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExtractDevice_Shadow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Shadow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice_Shadow.BP_ExtractDevice_Shadow_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_Shadow_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Shadow_C", "ReceiveEndPlay");

	Params::BP_ExtractDevice_Shadow_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}


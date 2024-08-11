#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExtractDevice_Red

#include "Basic.hpp"

#include "BP_ExtractDevice_Red_classes.hpp"
#include "BP_ExtractDevice_Red_parameters.hpp"


namespace SDK
{

// Function BP_ExtractDevice_Red.BP_ExtractDevice_Red_C.ExecuteUbergraph_BP_ExtractDevice_Red
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_Red_C::ExecuteUbergraph_BP_ExtractDevice_Red(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Red_C", "ExecuteUbergraph_BP_ExtractDevice_Red");

	Params::BP_ExtractDevice_Red_C_ExecuteUbergraph_BP_ExtractDevice_Red Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice_Red.BP_ExtractDevice_Red_C.GetInteractionPromptText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Key                                                    (Parm, OutParm)
// class FText                             Out_Text_Line_1                                        (Parm, OutParm)
// class FText                             Out_Text_Line_2                                        (Parm, OutParm)

void ABP_ExtractDevice_Red_C::GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Red_C", "GetInteractionPromptText");

	Params::BP_ExtractDevice_Red_C_GetInteractionPromptText Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

	if (Out_Text_Line_1 != nullptr)
		*Out_Text_Line_1 = std::move(Parms.Out_Text_Line_1);

	if (Out_Text_Line_2 != nullptr)
		*Out_Text_Line_2 = std::move(Parms.Out_Text_Line_2);
}


// Function BP_ExtractDevice_Red.BP_ExtractDevice_Red_C.OnInteractionFinish
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractionPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_Red_C::OnInteractionFinish(class APawn* InteractionPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Red_C", "OnInteractionFinish");

	Params::BP_ExtractDevice_Red_C_OnInteractionFinish Parms{};

	Parms.InteractionPawn = InteractionPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice_Red.BP_ExtractDevice_Red_C.PerformInteraction
// (BlueprintEvent)
// Parameters:
// class APawn*                            Interacting_Pawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_Red_C::PerformInteraction(class APawn* Interacting_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Red_C", "PerformInteraction");

	Params::BP_ExtractDevice_Red_C_PerformInteraction Parms{};

	Parms.Interacting_Pawn = Interacting_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice_Red.BP_ExtractDevice_Red_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExtractDevice_Red_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Red_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice_Red.BP_ExtractDevice_Red_C.SpawnExtractPortal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ExtractPortal_C*              Portal                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_Red_C::SpawnExtractPortal(class ABP_ExtractPortal_C** Portal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_Red_C", "SpawnExtractPortal");

	Params::BP_ExtractDevice_Red_C_SpawnExtractPortal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Portal != nullptr)
		*Portal = Parms.Portal;
}

}


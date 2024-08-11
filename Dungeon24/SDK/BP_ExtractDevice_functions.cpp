#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExtractDevice

#include "Basic.hpp"

#include "BP_ExtractDevice_classes.hpp"
#include "BP_ExtractDevice_parameters.hpp"


namespace SDK
{

// Function BP_ExtractDevice.BP_ExtractDevice_C.BeginInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtractDevice_C::BeginInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "BeginInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.EndInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtractDevice_C::EndInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "EndInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.ExecuteUbergraph_BP_ExtractDevice
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_C::ExecuteUbergraph_BP_ExtractDevice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "ExecuteUbergraph_BP_ExtractDevice");

	Params::BP_ExtractDevice_C_ExecuteUbergraph_BP_ExtractDevice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.GetInteractionPromptText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Key                                                    (Parm, OutParm)
// class FText                             Out_Text_Line_1                                        (Parm, OutParm)
// class FText                             Out_Text_Line_2                                        (Parm, OutParm)

void ABP_ExtractDevice_C::GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "GetInteractionPromptText");

	Params::BP_ExtractDevice_C_GetInteractionPromptText Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

	if (Out_Text_Line_1 != nullptr)
		*Out_Text_Line_1 = std::move(Parms.Out_Text_Line_1);

	if (Out_Text_Line_2 != nullptr)
		*Out_Text_Line_2 = std::move(Parms.Out_Text_Line_2);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.HasInteractions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Reset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_C::HasInteractions(bool* Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "HasInteractions");

	Params::BP_ExtractDevice_C_HasInteractions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Reset != nullptr)
		*Reset = Parms.Reset;
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.InitiliazeVFXLoop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ExtractDevice_C::InitiliazeVFXLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "InitiliazeVFXLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.OnInteractionFinish
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractionPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_C::OnInteractionFinish(class APawn* InteractionPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "OnInteractionFinish");

	Params::BP_ExtractDevice_C_OnInteractionFinish Parms{};

	Parms.InteractionPawn = InteractionPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.OnRep_CompletedInteractions
// (BlueprintCallable, BlueprintEvent)

void ABP_ExtractDevice_C::OnRep_CompletedInteractions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "OnRep_CompletedInteractions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.PerformInteraction
// (BlueprintEvent)
// Parameters:
// class APawn*                            Interacting_Pawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_C::PerformInteraction(class APawn* Interacting_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "PerformInteraction");

	Params::BP_ExtractDevice_C_PerformInteraction Parms{};

	Parms.Interacting_Pawn = Interacting_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.PerformInteraction on Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_C::PerformInteraction_on_Server(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "PerformInteraction on Server");

	Params::BP_ExtractDevice_C_PerformInteraction_on_Server Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.PromptTeleportScrollComsuption
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_ExtractDevice_C::PromptTeleportScrollComsuption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "PromptTeleportScrollComsuption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExtractDevice_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "ReceiveEndPlay");

	Params::BP_ExtractDevice_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "ReceiveTick");

	Params::BP_ExtractDevice_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.SpawnExtractPortal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ExtractPortal_C*              Portal                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExtractDevice_C::SpawnExtractPortal(class ABP_ExtractPortal_C** Portal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "SpawnExtractPortal");

	Params::BP_ExtractDevice_C_SpawnExtractPortal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Portal != nullptr)
		*Portal = Parms.Portal;
}


// Function BP_ExtractDevice.BP_ExtractDevice_C.UpdateInteractions
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ExtractDevice_C::UpdateInteractions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtractDevice_C", "UpdateInteractions");

	UObject::ProcessEvent(Func, nullptr);
}

}

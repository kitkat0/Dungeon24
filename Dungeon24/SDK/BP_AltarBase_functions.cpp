#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AltarBase

#include "Basic.hpp"

#include "BP_AltarBase_classes.hpp"
#include "BP_AltarBase_parameters.hpp"


namespace SDK
{

// Function BP_AltarBase.BP_AltarBase_C.AfterPerformingInteraction
// (BlueprintCallable, BlueprintEvent)

void ABP_AltarBase_C::AfterPerformingInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "AfterPerformingInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarBase.BP_AltarBase_C.ExecuteUbergraph_BP_AltarBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AltarBase_C::ExecuteUbergraph_BP_AltarBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "ExecuteUbergraph_BP_AltarBase");

	Params::BP_AltarBase_C_ExecuteUbergraph_BP_AltarBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarBase.BP_AltarBase_C.GetInteractionPromptText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Key                                                    (Parm, OutParm)
// class FText                             Out_Text_Line_1                                        (Parm, OutParm)
// class FText                             Out_Text_Line_2                                        (Parm, OutParm)

void ABP_AltarBase_C::GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "GetInteractionPromptText");

	Params::BP_AltarBase_C_GetInteractionPromptText Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

	if (Out_Text_Line_1 != nullptr)
		*Out_Text_Line_1 = std::move(Parms.Out_Text_Line_1);

	if (Out_Text_Line_2 != nullptr)
		*Out_Text_Line_2 = std::move(Parms.Out_Text_Line_2);
}


// Function BP_AltarBase.BP_AltarBase_C.OnFinishCooling
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AltarBase_C::OnFinishCooling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "OnFinishCooling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarBase.BP_AltarBase_C.OnRep_bCooling
// (BlueprintCallable, BlueprintEvent)

void ABP_AltarBase_C::OnRep_bCooling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "OnRep_bCooling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarBase.BP_AltarBase_C.OnStartCooling
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AltarBase_C::OnStartCooling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "OnStartCooling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarBase.BP_AltarBase_C.PerformInteraction on Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AltarBase_C::PerformInteraction_on_Server(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "PerformInteraction on Server");

	Params::BP_AltarBase_C_PerformInteraction_on_Server Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarBase.BP_AltarBase_C.ReadyToPerformNextInteraction
// (BlueprintCallable, BlueprintEvent)

void ABP_AltarBase_C::ReadyToPerformNextInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "ReadyToPerformNextInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarBase.BP_AltarBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AltarBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarBase.BP_AltarBase_C.ResetAltar
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PhaseTag                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_AltarBase_C::ResetAltar(const struct FGameplayTag& PhaseTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "ResetAltar");

	Params::BP_AltarBase_C_ResetAltar Parms{};

	Parms.PhaseTag = std::move(PhaseTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarBase.BP_AltarBase_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AltarBase_C::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "SetEnabled");

	Params::BP_AltarBase_C_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarBase.BP_AltarBase_C.SpawnCollectable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CollectableBase_C*            SpawnedItem                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AltarBase_C::SpawnCollectable(const struct FTransform& SpawnTransform, class AActor* Param_Owner, int32 ItemId, class ABP_CollectableBase_C** SpawnedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarBase_C", "SpawnCollectable");

	Params::BP_AltarBase_C_SpawnCollectable Parms{};

	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.Param_Owner = Param_Owner;
	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedItem != nullptr)
		*SpawnedItem = Parms.SpawnedItem;
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractableBase

#include "Basic.hpp"

#include "BP_InteractableBase_classes.hpp"
#include "BP_InteractableBase_parameters.hpp"


namespace SDK
{

// Function BP_InteractableBase.BP_InteractableBase_C.CanPlayerInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanInteract                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::CanPlayerInteract(class ALyraCharacter* Player, bool* bCanInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "CanPlayerInteract");

	Params::BP_InteractableBase_C_CanPlayerInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanInteract != nullptr)
		*bCanInteract = Parms.bCanInteract;
}


// Function BP_InteractableBase.BP_InteractableBase_C.DealInteractStatList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::DealInteractStatList(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "DealInteractStatList");

	Params::BP_InteractableBase_C_DealInteractStatList Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.DisableDummyPlane
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::DisableDummyPlane()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "DisableDummyPlane");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractableBase.BP_InteractableBase_C.ExecuteUbergraph_BP_InteractableBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::ExecuteUbergraph_BP_InteractableBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "ExecuteUbergraph_BP_InteractableBase");

	Params::BP_InteractableBase_C_ExecuteUbergraph_BP_InteractableBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.Get Item Id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::Get_Item_Id(int32* ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "Get Item Id");

	Params::BP_InteractableBase_C_Get_Item_Id Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;
}


// Function BP_InteractableBase.BP_InteractableBase_C.Get Server Check Distance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Param_ServerCheckDistanceXY                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_ServerCheckDistanceZ                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::Get_Server_Check_Distance(double* Param_ServerCheckDistanceXY, double* Param_ServerCheckDistanceZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "Get Server Check Distance");

	Params::BP_InteractableBase_C_Get_Server_Check_Distance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ServerCheckDistanceXY != nullptr)
		*Param_ServerCheckDistanceXY = Parms.Param_ServerCheckDistanceXY;

	if (Param_ServerCheckDistanceZ != nullptr)
		*Param_ServerCheckDistanceZ = Parms.Param_ServerCheckDistanceZ;
}


// Function BP_InteractableBase.BP_InteractableBase_C.GetBaseInteractDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Param_BaseInteractDistance                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::GetBaseInteractDistance(double* Param_BaseInteractDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "GetBaseInteractDistance");

	Params::BP_InteractableBase_C_GetBaseInteractDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_BaseInteractDistance != nullptr)
		*Param_BaseInteractDistance = Parms.Param_BaseInteractDistance;
}


// Function BP_InteractableBase.BP_InteractableBase_C.GetEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::GetEnabled(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "GetEnabled");

	Params::BP_InteractableBase_C_GetEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_InteractableBase.BP_InteractableBase_C.GetInteractionPromptText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Key                                                    (Parm, OutParm)
// class FText                             Out_Text_Line_1                                        (Parm, OutParm)
// class FText                             Out_Text_Line_2                                        (Parm, OutParm)

void ABP_InteractableBase_C::GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "GetInteractionPromptText");

	Params::BP_InteractableBase_C_GetInteractionPromptText Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

	if (Out_Text_Line_1 != nullptr)
		*Out_Text_Line_1 = std::move(Parms.Out_Text_Line_1);

	if (Out_Text_Line_2 != nullptr)
		*Out_Text_Line_2 = std::move(Parms.Out_Text_Line_2);
}


// Function BP_InteractableBase.BP_InteractableBase_C.GetTraceActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::GetTraceActor(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "GetTraceActor");

	Params::BP_InteractableBase_C_GetTraceActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;
}


// Function BP_InteractableBase.BP_InteractableBase_C.IsPerformingInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bPerformingInteraction                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::IsPerformingInteraction(bool* Param_bPerformingInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "IsPerformingInteraction");

	Params::BP_InteractableBase_C_IsPerformingInteraction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bPerformingInteraction != nullptr)
		*Param_bPerformingInteraction = Parms.Param_bPerformingInteraction;
}


// Function BP_InteractableBase.BP_InteractableBase_C.On Remove Interactable
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::On_Remove_Interactable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "On Remove Interactable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractableBase.BP_InteractableBase_C.On Set Interactable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Interacting_Pawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::On_Set_Interactable(class APawn* Interacting_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "On Set Interactable");

	Params::BP_InteractableBase_C_On_Set_Interactable Parms{};

	Parms.Interacting_Pawn = Interacting_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.PerformInteraction on Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::PerformInteraction_on_Server(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "PerformInteraction on Server");

	Params::BP_InteractableBase_C_PerformInteraction_on_Server Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.PerformInteractionBrokenOnServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::PerformInteractionBrokenOnServer(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "PerformInteractionBrokenOnServer");

	Params::BP_InteractableBase_C_PerformInteractionBrokenOnServer Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.ReadyToPerformNextInteraction
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::ReadyToPerformNextInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "ReadyToPerformNextInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractableBase.BP_InteractableBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InteractableBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractableBase.BP_InteractableBase_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "SetEnabled");

	Params::BP_InteractableBase_C_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.SetHighlighting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Highlighting                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::SetHighlighting(class AActor* Actor, bool Highlighting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "SetHighlighting");

	Params::BP_InteractableBase_C_SetHighlighting Parms{};

	Parms.Actor = Actor;
	Parms.Highlighting = Highlighting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.SetHighlightingRecursively
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Highlighting                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::SetHighlightingRecursively(class AActor* Actor, bool Highlighting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "SetHighlightingRecursively");

	Params::BP_InteractableBase_C_SetHighlightingRecursively Parms{};

	Parms.Actor = Actor;
	Parms.Highlighting = Highlighting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.SetMeshStared
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Stared                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::SetMeshStared(class UMeshComponent* Mesh, bool Stared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "SetMeshStared");

	Params::BP_InteractableBase_C_SetMeshStared Parms{};

	Parms.Mesh = Mesh;
	Parms.Stared = Stared;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableBase.BP_InteractableBase_C.Turn Off Collision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::Turn_Off_Collision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "Turn Off Collision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractableBase.BP_InteractableBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractableBase.BP_InteractableBase_C.WakeUpMonsters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableBase_C::WakeUpMonsters(class AActor* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableBase_C", "WakeUpMonsters");

	Params::BP_InteractableBase_C_WakeUpMonsters Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}

}


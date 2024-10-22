#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TGF_CharacterInvSee

#include "Basic.hpp"

#include "BP_TGF_CharacterInvSee_classes.hpp"
#include "BP_TGF_CharacterInvSee_parameters.hpp"


namespace SDK
{

// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.AttachToCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Tgf_Character_Default_C*      Param_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::AttachToCharacter(class ABP_Tgf_Character_Default_C* Param_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "AttachToCharacter");

	Params::BP_TGF_CharacterInvSee_C_AttachToCharacter Parms{};

	Parms.Param_Character = Param_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.BindParentDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::BindParentDestroy(class AActor* Param_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "BindParentDestroy");

	Params::BP_TGF_CharacterInvSee_C_BindParentDestroy Parms{};

	Parms.Param_Character = Param_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.CanPlayerInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanInteract                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::CanPlayerInteract(class ALyraCharacter* Player, bool* bCanInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "CanPlayerInteract");

	Params::BP_TGF_CharacterInvSee_C_CanPlayerInteract Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanInteract != nullptr)
		*bCanInteract = Parms.bCanInteract;
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.DestroySelfWhenDetached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::DestroySelfWhenDetached(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "DestroySelfWhenDetached");

	Params::BP_TGF_CharacterInvSee_C_DestroySelfWhenDetached Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.ExecuteUbergraph_BP_TGF_CharacterInvSee
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::ExecuteUbergraph_BP_TGF_CharacterInvSee(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "ExecuteUbergraph_BP_TGF_CharacterInvSee");

	Params::BP_TGF_CharacterInvSee_C_ExecuteUbergraph_BP_TGF_CharacterInvSee Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.GetEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::GetEnabled(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "GetEnabled");

	Params::BP_TGF_CharacterInvSee_C_GetEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.GetInteractionPromptText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Key                                                    (Parm, OutParm)
// class FText                             Out_Text_Line_1                                        (Parm, OutParm)
// class FText                             Out_Text_Line_2                                        (Parm, OutParm)

void ABP_TGF_CharacterInvSee_C::GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "GetInteractionPromptText");

	Params::BP_TGF_CharacterInvSee_C_GetInteractionPromptText Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

	if (Out_Text_Line_1 != nullptr)
		*Out_Text_Line_1 = std::move(Parms.Out_Text_Line_1);

	if (Out_Text_Line_2 != nullptr)
		*Out_Text_Line_2 = std::move(Parms.Out_Text_Line_2);
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.GetTraceActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::GetTraceActor(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "GetTraceActor");

	Params::BP_TGF_CharacterInvSee_C_GetTraceActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.PerformInteraction on Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::PerformInteraction_on_Server(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "PerformInteraction on Server");

	Params::BP_TGF_CharacterInvSee_C_PerformInteraction_on_Server Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TGF_CharacterInvSee_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TGF_CharacterInvSee.BP_TGF_CharacterInvSee_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterInvSee_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterInvSee_C", "ReceiveEndPlay");

	Params::BP_TGF_CharacterInvSee_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}


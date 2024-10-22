#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractableGrave

#include "Basic.hpp"

#include "BP_InteractableGrave_classes.hpp"
#include "BP_InteractableGrave_parameters.hpp"


namespace SDK
{

// Function BP_InteractableGrave.BP_InteractableGrave_C.ExecuteUbergraph_BP_InteractableGrave
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableGrave_C::ExecuteUbergraph_BP_InteractableGrave(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableGrave_C", "ExecuteUbergraph_BP_InteractableGrave");

	Params::BP_InteractableGrave_C_ExecuteUbergraph_BP_InteractableGrave Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableGrave.BP_InteractableGrave_C.GetInteractionPromptText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Key                                                    (Parm, OutParm)
// class FText                             Out_Text_Line_1                                        (Parm, OutParm)
// class FText                             Out_Text_Line_2                                        (Parm, OutParm)

void ABP_InteractableGrave_C::GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableGrave_C", "GetInteractionPromptText");

	Params::BP_InteractableGrave_C_GetInteractionPromptText Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

	if (Out_Text_Line_1 != nullptr)
		*Out_Text_Line_1 = std::move(Parms.Out_Text_Line_1);

	if (Out_Text_Line_2 != nullptr)
		*Out_Text_Line_2 = std::move(Parms.Out_Text_Line_2);
}


// Function BP_InteractableGrave.BP_InteractableGrave_C.Initialize Loot Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   SourceCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableGrave_C::Initialize_Loot_Info(class ALyraCharacter* SourceCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableGrave_C", "Initialize Loot Info");

	Params::BP_InteractableGrave_C_Initialize_Loot_Info Parms{};

	Parms.SourceCharacter = SourceCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractableGrave.BP_InteractableGrave_C.PerformInteraction on Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_InteractableGrave_C::PerformInteraction_on_Server(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractableGrave_C", "PerformInteraction on Server");

	Params::BP_InteractableGrave_C_PerformInteraction_on_Server Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}


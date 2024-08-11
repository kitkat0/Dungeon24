#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TGF_CharacterLoot

#include "Basic.hpp"

#include "BP_TGF_CharacterLoot_classes.hpp"
#include "BP_TGF_CharacterLoot_parameters.hpp"


namespace SDK
{

// Function BP_TGF_CharacterLoot.BP_TGF_CharacterLoot_C.AttachToCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Tgf_Character_Default_C*      Param_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterLoot_C::AttachToCharacter(class ABP_Tgf_Character_Default_C* Param_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterLoot_C", "AttachToCharacter");

	Params::BP_TGF_CharacterLoot_C_AttachToCharacter Parms{};

	Parms.Param_Character = Param_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TGF_CharacterLoot.BP_TGF_CharacterLoot_C.ExecuteUbergraph_BP_TGF_CharacterLoot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterLoot_C::ExecuteUbergraph_BP_TGF_CharacterLoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterLoot_C", "ExecuteUbergraph_BP_TGF_CharacterLoot");

	Params::BP_TGF_CharacterLoot_C_ExecuteUbergraph_BP_TGF_CharacterLoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TGF_CharacterLoot.BP_TGF_CharacterLoot_C.Get Server Check Distance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Param_ServerCheckDistanceXY                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_ServerCheckDistanceZ                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterLoot_C::Get_Server_Check_Distance(double* Param_ServerCheckDistanceXY, double* Param_ServerCheckDistanceZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterLoot_C", "Get Server Check Distance");

	Params::BP_TGF_CharacterLoot_C_Get_Server_Check_Distance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ServerCheckDistanceXY != nullptr)
		*Param_ServerCheckDistanceXY = Parms.Param_ServerCheckDistanceXY;

	if (Param_ServerCheckDistanceZ != nullptr)
		*Param_ServerCheckDistanceZ = Parms.Param_ServerCheckDistanceZ;
}


// Function BP_TGF_CharacterLoot.BP_TGF_CharacterLoot_C.GetInteractionPromptText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Key                                                    (Parm, OutParm)
// class FText                             Out_Text_Line_1                                        (Parm, OutParm)
// class FText                             Out_Text_Line_2                                        (Parm, OutParm)

void ABP_TGF_CharacterLoot_C::GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterLoot_C", "GetInteractionPromptText");

	Params::BP_TGF_CharacterLoot_C_GetInteractionPromptText Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);

	if (Out_Text_Line_1 != nullptr)
		*Out_Text_Line_1 = std::move(Parms.Out_Text_Line_1);

	if (Out_Text_Line_2 != nullptr)
		*Out_Text_Line_2 = std::move(Parms.Out_Text_Line_2);
}


// Function BP_TGF_CharacterLoot.BP_TGF_CharacterLoot_C.GetTraceActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterLoot_C::GetTraceActor(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterLoot_C", "GetTraceActor");

	Params::BP_TGF_CharacterLoot_C_GetTraceActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;
}


// Function BP_TGF_CharacterLoot.BP_TGF_CharacterLoot_C.PerformInteraction on Server
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TGF_CharacterLoot_C::PerformInteraction_on_Server(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TGF_CharacterLoot_C", "PerformInteraction on Server");

	Params::BP_TGF_CharacterLoot_C_PerformInteraction_on_Server Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

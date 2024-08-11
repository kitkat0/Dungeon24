#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Aura_TGF_DruidPanther_Tanlent_HuntersSense

#include "Basic.hpp"

#include "Aura_TGF_DruidPanther_Tanlent_HuntersSense_classes.hpp"
#include "Aura_TGF_DruidPanther_Tanlent_HuntersSense_parameters.hpp"


namespace SDK
{

// Function Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C.ExecuteUbergraph_Aura_TGF_DruidPanther_Tanlent_HuntersSense
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::ExecuteUbergraph_Aura_TGF_DruidPanther_Tanlent_HuntersSense(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aura_TGF_DruidPanther_Tanlent_HuntersSense_C", "ExecuteUbergraph_Aura_TGF_DruidPanther_Tanlent_HuntersSense");

	Params::Aura_TGF_DruidPanther_Tanlent_HuntersSense_C_ExecuteUbergraph_Aura_TGF_DruidPanther_Tanlent_HuntersSense Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C.K2_OnAuraAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTgfAuraManagerComponent*         AuraManagerComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::K2_OnAuraAdded(class UTgfAuraManagerComponent* AuraManagerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aura_TGF_DruidPanther_Tanlent_HuntersSense_C", "K2_OnAuraAdded");

	Params::Aura_TGF_DruidPanther_Tanlent_HuntersSense_C_K2_OnAuraAdded Parms{};

	Parms.AuraManagerComponent = AuraManagerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C.K2_OnAuraRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTgfAuraManagerComponent*         AuraManagerComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::K2_OnAuraRemoved(class UTgfAuraManagerComponent* AuraManagerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aura_TGF_DruidPanther_Tanlent_HuntersSense_C", "K2_OnAuraRemoved");

	Params::Aura_TGF_DruidPanther_Tanlent_HuntersSense_C_K2_OnAuraRemoved Parms{};

	Parms.AuraManagerComponent = AuraManagerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C.K2_OnCharacterLeave
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::K2_OnCharacterLeave(class ALyraCharacter* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aura_TGF_DruidPanther_Tanlent_HuntersSense_C", "K2_OnCharacterLeave");

	Params::Aura_TGF_DruidPanther_Tanlent_HuntersSense_C_K2_OnCharacterLeave Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C.K2_TickAura
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::K2_TickAura(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aura_TGF_DruidPanther_Tanlent_HuntersSense_C", "K2_TickAura");

	Params::Aura_TGF_DruidPanther_Tanlent_HuntersSense_C_K2_TickAura Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C.ProcessSensedTargetEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::ProcessSensedTargetEnter(class ALyraCharacter* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aura_TGF_DruidPanther_Tanlent_HuntersSense_C", "ProcessSensedTargetEnter");

	Params::Aura_TGF_DruidPanther_Tanlent_HuntersSense_C_ProcessSensedTargetEnter Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C.ProcessSensedTargetLeave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::ProcessSensedTargetLeave(class ALyraCharacter* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aura_TGF_DruidPanther_Tanlent_HuntersSense_C", "ProcessSensedTargetLeave");

	Params::Aura_TGF_DruidPanther_Tanlent_HuntersSense_C_ProcessSensedTargetLeave Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Aura_TGF_DruidPanther_Tanlent_HuntersSense.Aura_TGF_DruidPanther_Tanlent_HuntersSense_C.Removed_0D693C9B4E1E2465FC9959A2F65AF9A9
// (BlueprintCallable, BlueprintEvent)

void UAura_TGF_DruidPanther_Tanlent_HuntersSense_C::Removed_0D693C9B4E1E2465FC9959A2F65AF9A9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Aura_TGF_DruidPanther_Tanlent_HuntersSense_C", "Removed_0D693C9B4E1E2465FC9959A2F65AF9A9");

	UObject::ProcessEvent(Func, nullptr);
}

}


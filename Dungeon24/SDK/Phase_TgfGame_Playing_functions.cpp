#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Phase_TgfGame_Playing

#include "Basic.hpp"

#include "Phase_TgfGame_Playing_classes.hpp"
#include "Phase_TgfGame_Playing_parameters.hpp"


namespace SDK
{

// Function Phase_TgfGame_Playing.Phase_TgfGame_Playing_C.EndPhase
// (Event, Public, BlueprintEvent)

void UPhase_TgfGame_Playing_C::EndPhase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Phase_TgfGame_Playing_C", "EndPhase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Phase_TgfGame_Playing.Phase_TgfGame_Playing_C.ExecuteUbergraph_Phase_TgfGame_Playing
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhase_TgfGame_Playing_C::ExecuteUbergraph_Phase_TgfGame_Playing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Phase_TgfGame_Playing_C", "ExecuteUbergraph_Phase_TgfGame_Playing");

	Params::Phase_TgfGame_Playing_C_ExecuteUbergraph_Phase_TgfGame_Playing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Phase_TgfGame_Playing.Phase_TgfGame_Playing_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UPhase_TgfGame_Playing_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Phase_TgfGame_Playing_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}


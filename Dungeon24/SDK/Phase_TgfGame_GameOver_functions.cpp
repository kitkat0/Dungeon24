#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Phase_TgfGame_GameOver

#include "Basic.hpp"

#include "Phase_TgfGame_GameOver_classes.hpp"
#include "Phase_TgfGame_GameOver_parameters.hpp"


namespace SDK
{

// Function Phase_TgfGame_GameOver.Phase_TgfGame_GameOver_C.ExecuteUbergraph_Phase_TgfGame_GameOver
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhase_TgfGame_GameOver_C::ExecuteUbergraph_Phase_TgfGame_GameOver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Phase_TgfGame_GameOver_C", "ExecuteUbergraph_Phase_TgfGame_GameOver");

	Params::Phase_TgfGame_GameOver_C_ExecuteUbergraph_Phase_TgfGame_GameOver Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Phase_TgfGame_GameOver.Phase_TgfGame_GameOver_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UPhase_TgfGame_GameOver_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Phase_TgfGame_GameOver_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

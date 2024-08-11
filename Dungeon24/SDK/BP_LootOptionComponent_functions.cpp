#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootOptionComponent

#include "Basic.hpp"

#include "BP_LootOptionComponent_classes.hpp"
#include "BP_LootOptionComponent_parameters.hpp"


namespace SDK
{

// Function BP_LootOptionComponent.BP_LootOptionComponent_C.PickLoot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           Loot                                                   (Parm, OutParm)

void UBP_LootOptionComponent_C::PickLoot(bool* Result, TArray<int32>* Loot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootOptionComponent_C", "PickLoot");

	Params::BP_LootOptionComponent_C_PickLoot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Loot != nullptr)
		*Loot = std::move(Parms.Loot);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InventoryItemTooltipInstigator

#include "Basic.hpp"

#include "BPI_InventoryItemTooltipInstigator_classes.hpp"
#include "BPI_InventoryItemTooltipInstigator_parameters.hpp"


namespace SDK
{

// Function BPI_InventoryItemTooltipInstigator.BPI_InventoryItemTooltipInstigator_C.ShouldNotShowTooltip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNoShow                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_InventoryItemTooltipInstigator_C::ShouldNotShowTooltip(bool* bNoShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_InventoryItemTooltipInstigator_C", "ShouldNotShowTooltip");

	Params::BPI_InventoryItemTooltipInstigator_C_ShouldNotShowTooltip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bNoShow != nullptr)
		*bNoShow = Parms.bNoShow;
}

}


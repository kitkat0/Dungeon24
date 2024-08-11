#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InventoryItemTooltipInstigator

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_InventoryItemTooltipInstigator.BPI_InventoryItemTooltipInstigator_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_InventoryItemTooltipInstigator_C final : public IInterface
{
public:
	void ShouldNotShowTooltip(bool* bNoShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_InventoryItemTooltipInstigator_C">();
	}
	static class IBPI_InventoryItemTooltipInstigator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_InventoryItemTooltipInstigator_C>();
	}
};
static_assert(alignof(IBPI_InventoryItemTooltipInstigator_C) == 0x000008, "Wrong alignment on IBPI_InventoryItemTooltipInstigator_C");
static_assert(sizeof(IBPI_InventoryItemTooltipInstigator_C) == 0x000028, "Wrong size on IBPI_InventoryItemTooltipInstigator_C");

}

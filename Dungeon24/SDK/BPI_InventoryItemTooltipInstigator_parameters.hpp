#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InventoryItemTooltipInstigator

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_InventoryItemTooltipInstigator.BPI_InventoryItemTooltipInstigator_C.ShouldNotShowTooltip
// 0x0001 (0x0001 - 0x0000)
struct BPI_InventoryItemTooltipInstigator_C_ShouldNotShowTooltip final
{
public:
	bool                                          bNoShow;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_InventoryItemTooltipInstigator_C_ShouldNotShowTooltip) == 0x000001, "Wrong alignment on BPI_InventoryItemTooltipInstigator_C_ShouldNotShowTooltip");
static_assert(sizeof(BPI_InventoryItemTooltipInstigator_C_ShouldNotShowTooltip) == 0x000001, "Wrong size on BPI_InventoryItemTooltipInstigator_C_ShouldNotShowTooltip");
static_assert(offsetof(BPI_InventoryItemTooltipInstigator_C_ShouldNotShowTooltip, bNoShow) == 0x000000, "Member 'BPI_InventoryItemTooltipInstigator_C_ShouldNotShowTooltip::bNoShow' has a wrong offset!");

}

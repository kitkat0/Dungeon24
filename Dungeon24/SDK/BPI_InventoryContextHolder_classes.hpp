#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InventoryContextHolder

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_InventoryContextHolder.BPI_InventoryContextHolder_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_InventoryContextHolder_C final : public IInterface
{
public:
	void GetInventoryContext(class UTgfInventoryWrapper** InventoryContextNew);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_InventoryContextHolder_C">();
	}
	static class IBPI_InventoryContextHolder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_InventoryContextHolder_C>();
	}
};
static_assert(alignof(IBPI_InventoryContextHolder_C) == 0x000008, "Wrong alignment on IBPI_InventoryContextHolder_C");
static_assert(sizeof(IBPI_InventoryContextHolder_C) == 0x000028, "Wrong size on IBPI_InventoryContextHolder_C");

}

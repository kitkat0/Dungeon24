#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ID_ItemThrowable

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ID_ItemThrowable.ID_ItemThrowable_C
// 0x0000 (0x0080 - 0x0080)
class UID_ItemThrowable_C : public UTgfInventoryItemDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ID_ItemThrowable_C">();
	}
	static class UID_ItemThrowable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UID_ItemThrowable_C>();
	}
};
static_assert(alignof(UID_ItemThrowable_C) == 0x000008, "Wrong alignment on UID_ItemThrowable_C");
static_assert(sizeof(UID_ItemThrowable_C) == 0x000080, "Wrong size on UID_ItemThrowable_C");

}


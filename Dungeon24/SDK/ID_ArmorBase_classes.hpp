#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ID_ArmorBase

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ID_ArmorBase.ID_ArmorBase_C
// 0x0000 (0x0080 - 0x0080)
class UID_ArmorBase_C : public UTgfInventoryItemDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ID_ArmorBase_C">();
	}
	static class UID_ArmorBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UID_ArmorBase_C>();
	}
};
static_assert(alignof(UID_ArmorBase_C) == 0x000008, "Wrong alignment on UID_ArmorBase_C");
static_assert(sizeof(UID_ArmorBase_C) == 0x000080, "Wrong size on UID_ArmorBase_C");

}


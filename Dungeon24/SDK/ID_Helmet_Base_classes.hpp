#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ID_Helmet_Base

#include "Basic.hpp"

#include "ID_ArmorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ID_Helmet_Base.ID_Helmet_Base_C
// 0x0000 (0x0080 - 0x0080)
class UID_Helmet_Base_C : public UID_ArmorBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ID_Helmet_Base_C">();
	}
	static class UID_Helmet_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UID_Helmet_Base_C>();
	}
};
static_assert(alignof(UID_Helmet_Base_C) == 0x000008, "Wrong alignment on UID_Helmet_Base_C");
static_assert(sizeof(UID_Helmet_Base_C) == 0x000080, "Wrong size on UID_Helmet_Base_C");

}


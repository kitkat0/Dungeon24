#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_FirstPerson

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CM_FirstPerson.CM_FirstPerson_C
// 0x0000 (0x0388 - 0x0388)
class UCM_FirstPerson_C final : public ULyraCameraMode_FirstPerson
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CM_FirstPerson_C">();
	}
	static class UCM_FirstPerson_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCM_FirstPerson_C>();
	}
};
static_assert(alignof(UCM_FirstPerson_C) == 0x000008, "Wrong alignment on UCM_FirstPerson_C");
static_assert(sizeof(UCM_FirstPerson_C) == 0x000388, "Wrong size on UCM_FirstPerson_C");

}

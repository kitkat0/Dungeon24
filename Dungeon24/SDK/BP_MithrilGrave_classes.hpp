#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MithrilGrave

#include "Basic.hpp"

#include "BP_InteractableGrave_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MithrilGrave.BP_MithrilGrave_C
// 0x0000 (0x0360 - 0x0360)
class ABP_MithrilGrave_C final : public ABP_InteractableGrave_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MithrilGrave_C">();
	}
	static class ABP_MithrilGrave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MithrilGrave_C>();
	}
};
static_assert(alignof(ABP_MithrilGrave_C) == 0x000008, "Wrong alignment on ABP_MithrilGrave_C");
static_assert(sizeof(ABP_MithrilGrave_C) == 0x000360, "Wrong size on ABP_MithrilGrave_C");

}


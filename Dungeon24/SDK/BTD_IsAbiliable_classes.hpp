#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsAbiliable

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_IsAbiliable.BTD_IsAbiliable_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTD_IsAbiliable_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_IsAbiliable_C">();
	}
	static class UBTD_IsAbiliable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_IsAbiliable_C>();
	}
};
static_assert(alignof(UBTD_IsAbiliable_C) == 0x000008, "Wrong alignment on UBTD_IsAbiliable_C");
static_assert(sizeof(UBTD_IsAbiliable_C) == 0x0000A0, "Wrong size on UBTD_IsAbiliable_C");

}

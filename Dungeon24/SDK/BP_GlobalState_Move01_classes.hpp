#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalState_Move01

#include "Basic.hpp"

#include "BP_GlobalState_Onboarding_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GlobalState_Move01.BP_GlobalState_Move01_C
// 0x0000 (0x00F8 - 0x00F8)
class UBP_GlobalState_Move01_C final : public UBP_GlobalState_Onboarding_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GlobalState_Move01_C">();
	}
	static class UBP_GlobalState_Move01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GlobalState_Move01_C>();
	}
};
static_assert(alignof(UBP_GlobalState_Move01_C) == 0x000008, "Wrong alignment on UBP_GlobalState_Move01_C");
static_assert(sizeof(UBP_GlobalState_Move01_C) == 0x0000F8, "Wrong size on UBP_GlobalState_Move01_C");

}

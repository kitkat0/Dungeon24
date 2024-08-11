#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WAID_Torch

#include "Basic.hpp"

#include "WAID_Weapon_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WAID_Torch.WAID_Torch_C
// 0x0000 (0x00F0 - 0x00F0)
class UWAID_Torch_C final : public UWAID_Weapon_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WAID_Torch_C">();
	}
	static class UWAID_Torch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWAID_Torch_C>();
	}
};
static_assert(alignof(UWAID_Torch_C) == 0x000008, "Wrong alignment on UWAID_Torch_C");
static_assert(sizeof(UWAID_Torch_C) == 0x0000F0, "Wrong size on UWAID_Torch_C");

}


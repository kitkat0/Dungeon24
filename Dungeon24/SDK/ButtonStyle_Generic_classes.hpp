#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyle_Generic

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle_Generic.ButtonStyle_Generic_C
// 0x0000 (0x07F0 - 0x07F0)
class UButtonStyle_Generic_C final : public UTgfButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_Generic_C">();
	}
	static class UButtonStyle_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Generic_C>();
	}
};
static_assert(alignof(UButtonStyle_Generic_C) == 0x000010, "Wrong alignment on UButtonStyle_Generic_C");
static_assert(sizeof(UButtonStyle_Generic_C) == 0x0007F0, "Wrong size on UButtonStyle_Generic_C");

}


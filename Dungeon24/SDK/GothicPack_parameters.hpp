#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GothicPack

#include "Basic.hpp"


namespace SDK::Params
{

// Function GothicPack.GothicPackBPLibrary.GothicPackSampleFunction
// 0x0008 (0x0008 - 0x0000)
struct GothicPackBPLibrary_GothicPackSampleFunction final
{
public:
	float                                         Param;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GothicPackBPLibrary_GothicPackSampleFunction) == 0x000004, "Wrong alignment on GothicPackBPLibrary_GothicPackSampleFunction");
static_assert(sizeof(GothicPackBPLibrary_GothicPackSampleFunction) == 0x000008, "Wrong size on GothicPackBPLibrary_GothicPackSampleFunction");
static_assert(offsetof(GothicPackBPLibrary_GothicPackSampleFunction, Param) == 0x000000, "Member 'GothicPackBPLibrary_GothicPackSampleFunction::Param' has a wrong offset!");
static_assert(offsetof(GothicPackBPLibrary_GothicPackSampleFunction, ReturnValue) == 0x000004, "Member 'GothicPackBPLibrary_GothicPackSampleFunction::ReturnValue' has a wrong offset!");

}


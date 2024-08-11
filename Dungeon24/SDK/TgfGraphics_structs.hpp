#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TgfGraphics

#include "Basic.hpp"

#include "NetCore_structs.hpp"


namespace SDK
{

// ScriptStruct TgfGraphics.TgfInteractableLightEntry
// 0x0008 (0x0014 - 0x000C)
struct FTgfInteractableLightEntry final : public FFastArraySerializerItem
{
public:
	uint32                                        PathHash;                                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLightOn;                                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTgfInteractableLightEntry) == 0x000004, "Wrong alignment on FTgfInteractableLightEntry");
static_assert(sizeof(FTgfInteractableLightEntry) == 0x000014, "Wrong size on FTgfInteractableLightEntry");
static_assert(offsetof(FTgfInteractableLightEntry, PathHash) == 0x00000C, "Member 'FTgfInteractableLightEntry::PathHash' has a wrong offset!");
static_assert(offsetof(FTgfInteractableLightEntry, bLightOn) == 0x000010, "Member 'FTgfInteractableLightEntry::bLightOn' has a wrong offset!");

// ScriptStruct TgfGraphics.TgfInteractableLightArray
// 0x0010 (0x0118 - 0x0108)
struct FTgfInteractableLightArray final : public FFastArraySerializer
{
public:
	TArray<struct FTgfInteractableLightEntry>     Items;                                             // 0x0108(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTgfInteractableLightArray) == 0x000008, "Wrong alignment on FTgfInteractableLightArray");
static_assert(sizeof(FTgfInteractableLightArray) == 0x000118, "Wrong size on FTgfInteractableLightArray");
static_assert(offsetof(FTgfInteractableLightArray, Items) == 0x000108, "Member 'FTgfInteractableLightArray::Items' has a wrong offset!");

}

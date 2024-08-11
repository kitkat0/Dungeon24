#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TGFFramework

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum TGFFramework.EOpenWindowReason
// NumValues: 0x0003
enum class EOpenWindowReason : uint8
{
	OWR_UNKNOWN                              = 0,
	OWR_LEAVECREATE                          = 1,
	OWR_MAX                                  = 2,
};

// Enum TGFFramework.EZOrderType
// NumValues: 0x0007
enum class EZOrderType : uint8
{
	None                                     = 0,
	Default                                  = 1,
	Panel                                    = 10,
	SubPanel                                 = 20,
	PopPanel                                 = 30,
	Popup                                    = 100,
	EZOrderType_MAX                          = 101,
};

// ScriptStruct TGFFramework.HyperlinkStyleRow
// 0x0758 (0x0760 - 0x0008)
struct FHyperlinkStyleRow final : public FTableRowBase
{
public:
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHyperlinkStyle                        HyperlinkStyle;                                    // 0x0010(0x0750)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FHyperlinkStyleRow) == 0x000010, "Wrong alignment on FHyperlinkStyleRow");
static_assert(sizeof(FHyperlinkStyleRow) == 0x000760, "Wrong size on FHyperlinkStyleRow");
static_assert(offsetof(FHyperlinkStyleRow, HyperlinkStyle) == 0x000010, "Member 'FHyperlinkStyleRow::HyperlinkStyle' has a wrong offset!");

// ScriptStruct TGFFramework.ImageCacheUpdateHandlerArray
// 0x0010 (0x0010 - 0x0000)
struct FImageCacheUpdateHandlerArray final
{
public:
	TArray<int64>                                 UpdateHandlerArray;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FImageCacheUpdateHandlerArray) == 0x000008, "Wrong alignment on FImageCacheUpdateHandlerArray");
static_assert(sizeof(FImageCacheUpdateHandlerArray) == 0x000010, "Wrong size on FImageCacheUpdateHandlerArray");
static_assert(offsetof(FImageCacheUpdateHandlerArray, UpdateHandlerArray) == 0x000000, "Member 'FImageCacheUpdateHandlerArray::UpdateHandlerArray' has a wrong offset!");

// ScriptStruct TGFFramework.ImageCacheUpdateCallback
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x10) FImageCacheUpdateCallback final
{
public:
	bool                                          bIsValid;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x4F];                                       // 0x0001(0x004F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FImageCacheUpdateCallback) == 0x000010, "Wrong alignment on FImageCacheUpdateCallback");
static_assert(sizeof(FImageCacheUpdateCallback) == 0x000050, "Wrong size on FImageCacheUpdateCallback");
static_assert(offsetof(FImageCacheUpdateCallback, bIsValid) == 0x000000, "Member 'FImageCacheUpdateCallback::bIsValid' has a wrong offset!");

}


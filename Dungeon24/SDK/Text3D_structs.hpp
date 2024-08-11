#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Text3D

#include "Basic.hpp"


namespace SDK
{

// Enum Text3D.EText3DBevelType
// NumValues: 0x0008
enum class EText3DBevelType : uint8
{
	Linear                                   = 0,
	HalfCircle                               = 1,
	Convex                                   = 2,
	Concave                                  = 3,
	OneStep                                  = 4,
	TwoSteps                                 = 5,
	Engraved                                 = 6,
	EText3DBevelType_MAX                     = 7,
};

// Enum Text3D.EText3DHorizontalTextAlignment
// NumValues: 0x0004
enum class EText3DHorizontalTextAlignment : uint8
{
	Left                                     = 0,
	Center                                   = 1,
	Right                                    = 2,
	EText3DHorizontalTextAlignment_MAX       = 3,
};

// Enum Text3D.EText3DVerticalTextAlignment
// NumValues: 0x0005
enum class EText3DVerticalTextAlignment : uint8
{
	FirstLine                                = 0,
	Top                                      = 1,
	Center                                   = 2,
	Bottom                                   = 3,
	EText3DVerticalTextAlignment_MAX         = 4,
};

// Enum Text3D.EText3DCharacterEffectOrder
// NumValues: 0x0005
enum class EText3DCharacterEffectOrder : uint8
{
	Normal                                   = 0,
	FromCenter                               = 1,
	ToCenter                                 = 2,
	Opposite                                 = 3,
	EText3DCharacterEffectOrder_MAX          = 4,
};

// ScriptStruct Text3D.GlyphMeshParameters
// 0x0018 (0x0018 - 0x0000)
struct FGlyphMeshParameters final
{
public:
	float                                         Extrude;                                           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Bevel;                                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EText3DBevelType                              BevelType;                                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BevelSegments;                                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOutline;                                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OutlineExpand;                                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGlyphMeshParameters) == 0x000004, "Wrong alignment on FGlyphMeshParameters");
static_assert(sizeof(FGlyphMeshParameters) == 0x000018, "Wrong size on FGlyphMeshParameters");
static_assert(offsetof(FGlyphMeshParameters, Extrude) == 0x000000, "Member 'FGlyphMeshParameters::Extrude' has a wrong offset!");
static_assert(offsetof(FGlyphMeshParameters, Bevel) == 0x000004, "Member 'FGlyphMeshParameters::Bevel' has a wrong offset!");
static_assert(offsetof(FGlyphMeshParameters, BevelType) == 0x000008, "Member 'FGlyphMeshParameters::BevelType' has a wrong offset!");
static_assert(offsetof(FGlyphMeshParameters, BevelSegments) == 0x00000C, "Member 'FGlyphMeshParameters::BevelSegments' has a wrong offset!");
static_assert(offsetof(FGlyphMeshParameters, bOutline) == 0x000010, "Member 'FGlyphMeshParameters::bOutline' has a wrong offset!");
static_assert(offsetof(FGlyphMeshParameters, OutlineExpand) == 0x000014, "Member 'FGlyphMeshParameters::OutlineExpand' has a wrong offset!");

// ScriptStruct Text3D.CachedFontMeshes
// 0x0060 (0x0060 - 0x0000)
struct FCachedFontMeshes final
{
public:
	TMap<uint32, class UStaticMesh*>              Glyphs;                                            // 0x0000(0x0050)(UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCachedFontMeshes) == 0x000008, "Wrong alignment on FCachedFontMeshes");
static_assert(sizeof(FCachedFontMeshes) == 0x000060, "Wrong size on FCachedFontMeshes");
static_assert(offsetof(FCachedFontMeshes, Glyphs) == 0x000000, "Member 'FCachedFontMeshes::Glyphs' has a wrong offset!");

// ScriptStruct Text3D.CachedFontData
// 0x00E8 (0x00E8 - 0x0000)
struct FCachedFontData final
{
public:
	class UFont*                                  Font;                                              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32, struct FCachedFontMeshes>        Meshes;                                            // 0x0008(0x0050)(NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x90];                                      // 0x0058(0x0090)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCachedFontData) == 0x000008, "Wrong alignment on FCachedFontData");
static_assert(sizeof(FCachedFontData) == 0x0000E8, "Wrong size on FCachedFontData");
static_assert(offsetof(FCachedFontData, Font) == 0x000000, "Member 'FCachedFontData::Font' has a wrong offset!");
static_assert(offsetof(FCachedFontData, Meshes) == 0x000008, "Member 'FCachedFontData::Meshes' has a wrong offset!");

}


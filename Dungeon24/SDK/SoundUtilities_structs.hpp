#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundUtilities

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct SoundUtilities.SoundVariation
// 0x0030 (0x0030 - 0x0000)
struct FSoundVariation final
{
public:
	class USoundWave*                             SoundWave;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ProbabilityWeight;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              VolumeRange;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              PitchRange;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundVariation) == 0x000008, "Wrong alignment on FSoundVariation");
static_assert(sizeof(FSoundVariation) == 0x000030, "Wrong size on FSoundVariation");
static_assert(offsetof(FSoundVariation, SoundWave) == 0x000000, "Member 'FSoundVariation::SoundWave' has a wrong offset!");
static_assert(offsetof(FSoundVariation, ProbabilityWeight) == 0x000008, "Member 'FSoundVariation::ProbabilityWeight' has a wrong offset!");
static_assert(offsetof(FSoundVariation, VolumeRange) == 0x000010, "Member 'FSoundVariation::VolumeRange' has a wrong offset!");
static_assert(offsetof(FSoundVariation, PitchRange) == 0x000020, "Member 'FSoundVariation::PitchRange' has a wrong offset!");

}

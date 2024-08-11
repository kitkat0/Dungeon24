#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_AvatarCosmeticPart

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_AvatarCosmeticPart.Struct_AvatarCosmeticPart
// 0x0060 (0x0060 - 0x0000)
struct FStruct_AvatarCosmeticPart final
{
public:
	struct FLyraCharacterPart                     Part_2_C8E3E70149BBDE85F46EB4B383913856;           // 0x0000(0x0040)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                  Tags_5_81237A4F496E70D2CF6B7982916A2BBA;           // 0x0040(0x0020)(Edit, BlueprintVisible)
};
static_assert(alignof(FStruct_AvatarCosmeticPart) == 0x000008, "Wrong alignment on FStruct_AvatarCosmeticPart");
static_assert(sizeof(FStruct_AvatarCosmeticPart) == 0x000060, "Wrong size on FStruct_AvatarCosmeticPart");
static_assert(offsetof(FStruct_AvatarCosmeticPart, Part_2_C8E3E70149BBDE85F46EB4B383913856) == 0x000000, "Member 'FStruct_AvatarCosmeticPart::Part_2_C8E3E70149BBDE85F46EB4B383913856' has a wrong offset!");
static_assert(offsetof(FStruct_AvatarCosmeticPart, Tags_5_81237A4F496E70D2CF6B7982916A2BBA) == 0x000040, "Member 'FStruct_AvatarCosmeticPart::Tags_5_81237A4F496E70D2CF6B7982916A2BBA' has a wrong offset!");

}


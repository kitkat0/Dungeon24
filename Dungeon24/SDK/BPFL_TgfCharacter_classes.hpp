#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_TgfCharacter

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_TgfCharacter.BPFL_TgfCharacter_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_TgfCharacter_C final : public UBlueprintFunctionLibrary
{
public:
	static void SetCharacterCosmeticMesh(class USkeletalMeshComponent* Mesh, ETgfActorGender Gender, ETgfActorRace Race, int32 DruidMode, class UObject* __WorldContext);
	static void SetCharacterShellMesh(class USkeletalMeshComponent* Mesh, ETgfActorGender Gender, ETgfActorRace Race, int32 DruidMode, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_TgfCharacter_C">();
	}
	static class UBPFL_TgfCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_TgfCharacter_C>();
	}
};
static_assert(alignof(UBPFL_TgfCharacter_C) == 0x000008, "Wrong alignment on UBPFL_TgfCharacter_C");
static_assert(sizeof(UBPFL_TgfCharacter_C) == 0x000028, "Wrong size on UBPFL_TgfCharacter_C");

}


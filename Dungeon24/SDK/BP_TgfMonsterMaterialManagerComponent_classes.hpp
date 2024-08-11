#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TgfMonsterMaterialManagerComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TgfMonsterMaterialManagerComponent.BP_TgfMonsterMaterialManagerComponent_C
// 0x0008 (0x01B8 - 0x01B0)
class UBP_TgfMonsterMaterialManagerComponent_C final : public UTgfPawnMaterialManagerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_TgfMonsterMaterialManagerComponent(int32 EntryPoint);
	void OnMaterialUpdatedAfter(ETgfCharaMatStateType NewStateType, ETgfCharaMatStateType OldStateType);
	void OnMaterialUpdatedBefore(ETgfCharaMatStateType NewStateType, ETgfCharaMatStateType OldStateType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TgfMonsterMaterialManagerComponent_C">();
	}
	static class UBP_TgfMonsterMaterialManagerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TgfMonsterMaterialManagerComponent_C>();
	}
};
static_assert(alignof(UBP_TgfMonsterMaterialManagerComponent_C) == 0x000008, "Wrong alignment on UBP_TgfMonsterMaterialManagerComponent_C");
static_assert(sizeof(UBP_TgfMonsterMaterialManagerComponent_C) == 0x0001B8, "Wrong size on UBP_TgfMonsterMaterialManagerComponent_C");
static_assert(offsetof(UBP_TgfMonsterMaterialManagerComponent_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_TgfMonsterMaterialManagerComponent_C::UberGraphFrame' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_HeroSelectState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TgfGame_HeroSelectState.WBP_TgfGame_HeroSelectState_C
// 0x0018 (0x02C8 - 0x02B0)
class UWBP_TgfGame_HeroSelectState_C final : public UTgfGameWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ImageSelect;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_TgfGame_HeroSelectState(int32 EntryPoint);
	void OnCharacterSelected(class ABP_Tgf_Character_Default_C* SelectedCharacter);
	void OnSelectEnd(class ABP_Tgf_Character_Default_C* SelectedCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TgfGame_HeroSelectState_C">();
	}
	static class UWBP_TgfGame_HeroSelectState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TgfGame_HeroSelectState_C>();
	}
};
static_assert(alignof(UWBP_TgfGame_HeroSelectState_C) == 0x000008, "Wrong alignment on UWBP_TgfGame_HeroSelectState_C");
static_assert(sizeof(UWBP_TgfGame_HeroSelectState_C) == 0x0002C8, "Wrong size on UWBP_TgfGame_HeroSelectState_C");
static_assert(offsetof(UWBP_TgfGame_HeroSelectState_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_TgfGame_HeroSelectState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_HeroSelectState_C, ImageSelect) == 0x0002B8, "Member 'UWBP_TgfGame_HeroSelectState_C::ImageSelect' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_HeroSelectState_C, Overlay) == 0x0002C0, "Member 'UWBP_TgfGame_HeroSelectState_C::Overlay' has a wrong offset!");

}


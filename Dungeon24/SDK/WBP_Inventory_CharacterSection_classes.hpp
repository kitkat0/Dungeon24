#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory_CharacterSection

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Inventory_CharacterSection.WBP_Inventory_CharacterSection_C
// 0x00B0 (0x0328 - 0x0278)
class UWBP_Inventory_CharacterSection_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               AuxiliarySlot;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg;                                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Tgf_Button_C*                      ButtonQualitySetting;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Inner;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           InventorySection;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MithrilFX;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MithrilPanel;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MithrilSkill;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MithrilSkillActive;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_InventorySlots_C*          MithrilSlots;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlaySettting;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleIcon;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Top;                                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_Inventory_Equipments_C*    WBP_TgfGame_Inventory_Equipments;                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_InventorySlots_C*          WBP_TgfGame_InventorySlots;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ETgfActorCareer                               DesignerPreviewCareer;                             // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UI_Inventory_Aux_SwordMaster_C*    SwordSlot;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTgfWidgetGamepadWrapper*               GamepadWrapper;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AdditionalInventoryTag;                            // 0x0320(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Inventory_CharacterSection(int32 EntryPoint);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void PreConstruct(bool IsDesignTime);
	void SetUp(ETgfActorCareer Career);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Inventory_CharacterSection_C">();
	}
	static class UWBP_Inventory_CharacterSection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Inventory_CharacterSection_C>();
	}
};
static_assert(alignof(UWBP_Inventory_CharacterSection_C) == 0x000008, "Wrong alignment on UWBP_Inventory_CharacterSection_C");
static_assert(sizeof(UWBP_Inventory_CharacterSection_C) == 0x000328, "Wrong size on UWBP_Inventory_CharacterSection_C");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Inventory_CharacterSection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, AuxiliarySlot) == 0x000280, "Member 'UWBP_Inventory_CharacterSection_C::AuxiliarySlot' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, Bg) == 0x000288, "Member 'UWBP_Inventory_CharacterSection_C::Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, ButtonQualitySetting) == 0x000290, "Member 'UWBP_Inventory_CharacterSection_C::ButtonQualitySetting' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, Inner) == 0x000298, "Member 'UWBP_Inventory_CharacterSection_C::Inner' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, InventorySection) == 0x0002A0, "Member 'UWBP_Inventory_CharacterSection_C::InventorySection' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, MithrilFX) == 0x0002A8, "Member 'UWBP_Inventory_CharacterSection_C::MithrilFX' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, MithrilPanel) == 0x0002B0, "Member 'UWBP_Inventory_CharacterSection_C::MithrilPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, MithrilSkill) == 0x0002B8, "Member 'UWBP_Inventory_CharacterSection_C::MithrilSkill' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, MithrilSkillActive) == 0x0002C0, "Member 'UWBP_Inventory_CharacterSection_C::MithrilSkillActive' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, MithrilSlots) == 0x0002C8, "Member 'UWBP_Inventory_CharacterSection_C::MithrilSlots' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, OverlaySettting) == 0x0002D0, "Member 'UWBP_Inventory_CharacterSection_C::OverlaySettting' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, SizeBox) == 0x0002D8, "Member 'UWBP_Inventory_CharacterSection_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, TitleBg) == 0x0002E0, "Member 'UWBP_Inventory_CharacterSection_C::TitleBg' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, TitleIcon) == 0x0002E8, "Member 'UWBP_Inventory_CharacterSection_C::TitleIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, Top) == 0x0002F0, "Member 'UWBP_Inventory_CharacterSection_C::Top' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, WBP_TgfGame_Inventory_Equipments) == 0x0002F8, "Member 'UWBP_Inventory_CharacterSection_C::WBP_TgfGame_Inventory_Equipments' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, WBP_TgfGame_InventorySlots) == 0x000300, "Member 'UWBP_Inventory_CharacterSection_C::WBP_TgfGame_InventorySlots' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, DesignerPreviewCareer) == 0x000308, "Member 'UWBP_Inventory_CharacterSection_C::DesignerPreviewCareer' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, SwordSlot) == 0x000310, "Member 'UWBP_Inventory_CharacterSection_C::SwordSlot' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, GamepadWrapper) == 0x000318, "Member 'UWBP_Inventory_CharacterSection_C::GamepadWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_CharacterSection_C, AdditionalInventoryTag) == 0x000320, "Member 'UWBP_Inventory_CharacterSection_C::AdditionalInventoryTag' has a wrong offset!");

}


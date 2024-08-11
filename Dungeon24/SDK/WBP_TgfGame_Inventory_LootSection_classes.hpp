#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Inventory_LootSection

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TgfGame_Inventory_LootSection.WBP_TgfGame_Inventory_LootSection_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_TgfGame_Inventory_LootSection_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               AuxiliarySlot;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               BagIcon;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_Inventory_Equipments_C*    LootEquipmentPanel;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_InventorySlots_C*          LootInventorySlots;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MithrilPanel;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_InventorySlots_C*          MithrilSlots;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleIcon;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Top;                                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTgfInventoryWrapper_InGame*            InventoryContext;                                  // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Destruct();
	void ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection(int32 EntryPoint);
	void GetInventoryContext(class UTgfInventoryWrapper** InventoryContextNew);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void PreConstruct(bool IsDesignTime);
	void SetUp(class ULyraInventoryManagerComponent* Inventory, class ULyraEquipmentManagerComponent* Equipment);
	void SetupByCareer(ETgfActorCareer Career);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TgfGame_Inventory_LootSection_C">();
	}
	static class UWBP_TgfGame_Inventory_LootSection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TgfGame_Inventory_LootSection_C>();
	}
};
static_assert(alignof(UWBP_TgfGame_Inventory_LootSection_C) == 0x000008, "Wrong alignment on UWBP_TgfGame_Inventory_LootSection_C");
static_assert(sizeof(UWBP_TgfGame_Inventory_LootSection_C) == 0x0002D0, "Wrong size on UWBP_TgfGame_Inventory_LootSection_C");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, UberGraphFrame) == 0x000278, "Member 'UWBP_TgfGame_Inventory_LootSection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, AuxiliarySlot) == 0x000280, "Member 'UWBP_TgfGame_Inventory_LootSection_C::AuxiliarySlot' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, BagIcon) == 0x000288, "Member 'UWBP_TgfGame_Inventory_LootSection_C::BagIcon' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, LootEquipmentPanel) == 0x000290, "Member 'UWBP_TgfGame_Inventory_LootSection_C::LootEquipmentPanel' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, LootInventorySlots) == 0x000298, "Member 'UWBP_TgfGame_Inventory_LootSection_C::LootInventorySlots' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, MithrilPanel) == 0x0002A0, "Member 'UWBP_TgfGame_Inventory_LootSection_C::MithrilPanel' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, MithrilSlots) == 0x0002A8, "Member 'UWBP_TgfGame_Inventory_LootSection_C::MithrilSlots' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, TitleBg) == 0x0002B0, "Member 'UWBP_TgfGame_Inventory_LootSection_C::TitleBg' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, TitleIcon) == 0x0002B8, "Member 'UWBP_TgfGame_Inventory_LootSection_C::TitleIcon' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, Top) == 0x0002C0, "Member 'UWBP_TgfGame_Inventory_LootSection_C::Top' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_LootSection_C, InventoryContext) == 0x0002C8, "Member 'UWBP_TgfGame_Inventory_LootSection_C::InventoryContext' has a wrong offset!");

}

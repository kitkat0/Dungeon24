#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Inventory_Aux_SwordMaster

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Inventory_Aux_SwordMaster.WBP_UI_Inventory_Aux_SwordMaster_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_UI_Inventory_Aux_SwordMaster_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Layout;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Sword1;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Sword2;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Sword3;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Sword4;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTgfInventoryWrapper*                   CachedInventoryContext;                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_Inventory_EquipmentSlot_Clothing_C*> Slots;                                             // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Construct();
	void ExecuteUbergraph_WBP_UI_Inventory_Aux_SwordMaster(int32 EntryPoint);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Inventory_Aux_SwordMaster_C">();
	}
	static class UWBP_UI_Inventory_Aux_SwordMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Inventory_Aux_SwordMaster_C>();
	}
};
static_assert(alignof(UWBP_UI_Inventory_Aux_SwordMaster_C) == 0x000008, "Wrong alignment on UWBP_UI_Inventory_Aux_SwordMaster_C");
static_assert(sizeof(UWBP_UI_Inventory_Aux_SwordMaster_C) == 0x0002C0, "Wrong size on UWBP_UI_Inventory_Aux_SwordMaster_C");
static_assert(offsetof(UWBP_UI_Inventory_Aux_SwordMaster_C, UberGraphFrame) == 0x000278, "Member 'UWBP_UI_Inventory_Aux_SwordMaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_Aux_SwordMaster_C, Layout) == 0x000280, "Member 'UWBP_UI_Inventory_Aux_SwordMaster_C::Layout' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_Aux_SwordMaster_C, Sword1) == 0x000288, "Member 'UWBP_UI_Inventory_Aux_SwordMaster_C::Sword1' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_Aux_SwordMaster_C, Sword2) == 0x000290, "Member 'UWBP_UI_Inventory_Aux_SwordMaster_C::Sword2' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_Aux_SwordMaster_C, Sword3) == 0x000298, "Member 'UWBP_UI_Inventory_Aux_SwordMaster_C::Sword3' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_Aux_SwordMaster_C, Sword4) == 0x0002A0, "Member 'UWBP_UI_Inventory_Aux_SwordMaster_C::Sword4' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_Aux_SwordMaster_C, CachedInventoryContext) == 0x0002A8, "Member 'UWBP_UI_Inventory_Aux_SwordMaster_C::CachedInventoryContext' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_Aux_SwordMaster_C, Slots) == 0x0002B0, "Member 'UWBP_UI_Inventory_Aux_SwordMaster_C::Slots' has a wrong offset!");

}


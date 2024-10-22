#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Inventory_Equipments

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TgfGame_Inventory_Equipments.WBP_TgfGame_Inventory_Equipments_C
// 0x00B0 (0x0328 - 0x0278)
class UWBP_TgfGame_Inventory_Equipments_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Accessary1;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Accessary2;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Consumable1;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Consumable2;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Consumable3;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Feet;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Hands;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Head;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* LowerBody;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Necklace;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* Throwable;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Clothing_C* UpperBody;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Weapon_C*  WeaponSet1;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Weapon_C*  WeaponSet2;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEuipmentChangedLocally;                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTgfInventoryWrapper*                   CachedInventoryContext;                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEquipmentUpdate;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTgfWidgetGamepadWrapper*               GamepadWrapper;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments(int32 EntryPoint);
	void OnEquipmentUpdate__DelegateSignature();
	void OnEuipmentChangedLocally__DelegateSignature();
	void Refresh_Equipment_on_Widgets(TArray<class UWBP_Inventory_EquipmentSlot_Clothing_C*>& Widget);
	void Refresh_Weapon_Entry(int32 Set);
	void RefreshEntries();
	void SetUp();

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TgfGame_Inventory_Equipments_C">();
	}
	static class UWBP_TgfGame_Inventory_Equipments_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TgfGame_Inventory_Equipments_C>();
	}
};
static_assert(alignof(UWBP_TgfGame_Inventory_Equipments_C) == 0x000008, "Wrong alignment on UWBP_TgfGame_Inventory_Equipments_C");
static_assert(sizeof(UWBP_TgfGame_Inventory_Equipments_C) == 0x000328, "Wrong size on UWBP_TgfGame_Inventory_Equipments_C");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, UberGraphFrame) == 0x000278, "Member 'UWBP_TgfGame_Inventory_Equipments_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Accessary1) == 0x000280, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Accessary1' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Accessary2) == 0x000288, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Accessary2' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Consumable1) == 0x000290, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Consumable1' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Consumable2) == 0x000298, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Consumable2' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Consumable3) == 0x0002A0, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Consumable3' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Feet) == 0x0002A8, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Feet' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Hands) == 0x0002B0, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Hands' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Head) == 0x0002B8, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Head' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, LowerBody) == 0x0002C0, "Member 'UWBP_TgfGame_Inventory_Equipments_C::LowerBody' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Necklace) == 0x0002C8, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Necklace' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Overlay) == 0x0002D0, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, Throwable) == 0x0002D8, "Member 'UWBP_TgfGame_Inventory_Equipments_C::Throwable' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, UpperBody) == 0x0002E0, "Member 'UWBP_TgfGame_Inventory_Equipments_C::UpperBody' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, WeaponSet1) == 0x0002E8, "Member 'UWBP_TgfGame_Inventory_Equipments_C::WeaponSet1' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, WeaponSet2) == 0x0002F0, "Member 'UWBP_TgfGame_Inventory_Equipments_C::WeaponSet2' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, OnEuipmentChangedLocally) == 0x0002F8, "Member 'UWBP_TgfGame_Inventory_Equipments_C::OnEuipmentChangedLocally' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, CachedInventoryContext) == 0x000308, "Member 'UWBP_TgfGame_Inventory_Equipments_C::CachedInventoryContext' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, OnEquipmentUpdate) == 0x000310, "Member 'UWBP_TgfGame_Inventory_Equipments_C::OnEquipmentUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Equipments_C, GamepadWrapper) == 0x000320, "Member 'UWBP_TgfGame_Inventory_Equipments_C::GamepadWrapper' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_ThrowItem_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"
#include "GA_TGF_Active_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_ThrowItem_Base.GA_TGF_ThrowItem_Base_C
// 0x0090 (0x0E90 - 0x0E00)
class UGA_TGF_ThrowItem_Base_C : public UGA_TGF_Active_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_TGF_ThrowItem_Base_C;            // 0x0E00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          NoAnimTest;                                        // 0x0E08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E09[0x7];                                      // 0x0E09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ThrowDelayTime;                                    // 0x0E10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotateForce;                                       // 0x0E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ImpluseForce;                                      // 0x0E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BornForwardAdjust;                                 // 0x0E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BornUpAdjust;                                      // 0x0E30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BornRightAdjust;                                   // 0x0E38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BornRollAdjust;                                    // 0x0E40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BornYawAdjust;                                     // 0x0E48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BornPitchAdjust;                                   // 0x0E50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PitchAdjust;                                       // 0x0E58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLeftWeapon;                                      // 0x0E60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfWeaponChangeSlot                          CurWeaponSlot;                                     // 0x0E61(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E62[0x6];                                      // 0x0E62(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraEquipmentInstance*                 CurWeapon;                                         // 0x0E68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurWeaponActor;                                    // 0x0E70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTgfWeaponInstance*                     As_Tgf_Weapon_Instance;                            // 0x0E78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULyraInventoryItemInstance*             InventoryItemInstance;                             // 0x0E80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTgfEquipmentManagerComponent*          EquipmentComponent;                                // 0x0E88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void DoThrowTorch();
	void ExecuteUbergraph_GA_TGF_ThrowItem_Base(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnAbilityAdded();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_99CA57034AF33DAA6EAAA9A1AA9B44F4(class FName NotifyName);
	void OnCancelled_99CA57034AF33DAA6EAAA9A1AA9B44F4(class FName NotifyName);
	void OnCompleted_99CA57034AF33DAA6EAAA9A1AA9B44F4(class FName NotifyName);
	void OnInterrupted_99CA57034AF33DAA6EAAA9A1AA9B44F4(class FName NotifyName);
	void OnNotifyBegin_99CA57034AF33DAA6EAAA9A1AA9B44F4(class FName NotifyName);
	void OnNotifyEnd_99CA57034AF33DAA6EAAA9A1AA9B44F4(class FName NotifyName);
	void PostEndAbility(class UGameplayAbility* ActivatedAbility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_ThrowItem_Base_C">();
	}
	static class UGA_TGF_ThrowItem_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_ThrowItem_Base_C>();
	}
};
static_assert(alignof(UGA_TGF_ThrowItem_Base_C) == 0x000010, "Wrong alignment on UGA_TGF_ThrowItem_Base_C");
static_assert(sizeof(UGA_TGF_ThrowItem_Base_C) == 0x000E90, "Wrong size on UGA_TGF_ThrowItem_Base_C");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, UberGraphFrame_GA_TGF_ThrowItem_Base_C) == 0x000E00, "Member 'UGA_TGF_ThrowItem_Base_C::UberGraphFrame_GA_TGF_ThrowItem_Base_C' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, NoAnimTest) == 0x000E08, "Member 'UGA_TGF_ThrowItem_Base_C::NoAnimTest' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, ThrowDelayTime) == 0x000E10, "Member 'UGA_TGF_ThrowItem_Base_C::ThrowDelayTime' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, RotateForce) == 0x000E18, "Member 'UGA_TGF_ThrowItem_Base_C::RotateForce' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, ImpluseForce) == 0x000E20, "Member 'UGA_TGF_ThrowItem_Base_C::ImpluseForce' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, BornForwardAdjust) == 0x000E28, "Member 'UGA_TGF_ThrowItem_Base_C::BornForwardAdjust' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, BornUpAdjust) == 0x000E30, "Member 'UGA_TGF_ThrowItem_Base_C::BornUpAdjust' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, BornRightAdjust) == 0x000E38, "Member 'UGA_TGF_ThrowItem_Base_C::BornRightAdjust' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, BornRollAdjust) == 0x000E40, "Member 'UGA_TGF_ThrowItem_Base_C::BornRollAdjust' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, BornYawAdjust) == 0x000E48, "Member 'UGA_TGF_ThrowItem_Base_C::BornYawAdjust' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, BornPitchAdjust) == 0x000E50, "Member 'UGA_TGF_ThrowItem_Base_C::BornPitchAdjust' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, PitchAdjust) == 0x000E58, "Member 'UGA_TGF_ThrowItem_Base_C::PitchAdjust' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, IsLeftWeapon) == 0x000E60, "Member 'UGA_TGF_ThrowItem_Base_C::IsLeftWeapon' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, CurWeaponSlot) == 0x000E61, "Member 'UGA_TGF_ThrowItem_Base_C::CurWeaponSlot' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, CurWeapon) == 0x000E68, "Member 'UGA_TGF_ThrowItem_Base_C::CurWeapon' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, CurWeaponActor) == 0x000E70, "Member 'UGA_TGF_ThrowItem_Base_C::CurWeaponActor' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, As_Tgf_Weapon_Instance) == 0x000E78, "Member 'UGA_TGF_ThrowItem_Base_C::As_Tgf_Weapon_Instance' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, InventoryItemInstance) == 0x000E80, "Member 'UGA_TGF_ThrowItem_Base_C::InventoryItemInstance' has a wrong offset!");
static_assert(offsetof(UGA_TGF_ThrowItem_Base_C, EquipmentComponent) == 0x000E88, "Member 'UGA_TGF_ThrowItem_Base_C::EquipmentComponent' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory_DiviItem_ConfirmASrea

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Inventory_DiviItem_ConfirmASrea.WBP_Inventory_DiviItem_ConfirmASrea_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_Inventory_DiviItem_ConfirmASrea_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 HoverBg;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NormalBg;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextNormal;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Inventory_DiviItem_ConfirmASrea(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Inventory_DiviItem_ConfirmASrea_C">();
	}
	static class UWBP_Inventory_DiviItem_ConfirmASrea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Inventory_DiviItem_ConfirmASrea_C>();
	}
};
static_assert(alignof(UWBP_Inventory_DiviItem_ConfirmASrea_C) == 0x000008, "Wrong alignment on UWBP_Inventory_DiviItem_ConfirmASrea_C");
static_assert(sizeof(UWBP_Inventory_DiviItem_ConfirmASrea_C) == 0x000298, "Wrong size on UWBP_Inventory_DiviItem_ConfirmASrea_C");
static_assert(offsetof(UWBP_Inventory_DiviItem_ConfirmASrea_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Inventory_DiviItem_ConfirmASrea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_DiviItem_ConfirmASrea_C, HoverBg) == 0x000280, "Member 'UWBP_Inventory_DiviItem_ConfirmASrea_C::HoverBg' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_DiviItem_ConfirmASrea_C, NormalBg) == 0x000288, "Member 'UWBP_Inventory_DiviItem_ConfirmASrea_C::NormalBg' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_DiviItem_ConfirmASrea_C, TextNormal) == 0x000290, "Member 'UWBP_Inventory_DiviItem_ConfirmASrea_C::TextNormal' has a wrong offset!");

}


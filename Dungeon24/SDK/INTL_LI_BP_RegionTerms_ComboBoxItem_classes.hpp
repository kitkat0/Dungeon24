#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: INTL_LI_BP_RegionTerms_ComboBoxItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass INTL_LI_BP_RegionTerms_ComboBoxItem.INTL_LI_BP_RegionTerms_ComboBoxItem_C
// 0x0018 (0x0290 - 0x0278)
class UINTL_LI_BP_RegionTerms_ComboBoxItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             TextBlock_Item;                                    // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 ItemText;                                          // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"INTL_LI_BP_RegionTerms_ComboBoxItem_C">();
	}
	static class UINTL_LI_BP_RegionTerms_ComboBoxItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UINTL_LI_BP_RegionTerms_ComboBoxItem_C>();
	}
};
static_assert(alignof(UINTL_LI_BP_RegionTerms_ComboBoxItem_C) == 0x000008, "Wrong alignment on UINTL_LI_BP_RegionTerms_ComboBoxItem_C");
static_assert(sizeof(UINTL_LI_BP_RegionTerms_ComboBoxItem_C) == 0x000290, "Wrong size on UINTL_LI_BP_RegionTerms_ComboBoxItem_C");
static_assert(offsetof(UINTL_LI_BP_RegionTerms_ComboBoxItem_C, TextBlock_Item) == 0x000278, "Member 'UINTL_LI_BP_RegionTerms_ComboBoxItem_C::TextBlock_Item' has a wrong offset!");
static_assert(offsetof(UINTL_LI_BP_RegionTerms_ComboBoxItem_C, ItemText) == 0x000280, "Member 'UINTL_LI_BP_RegionTerms_ComboBoxItem_C::ItemText' has a wrong offset!");

}


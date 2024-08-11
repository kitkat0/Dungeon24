#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Inventory_Attribute_ListItem2

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TgfGame_Inventory_Attribute_ListItem2.WBP_TgfGame_Inventory_Attribute_ListItem2_C
// 0x0108 (0x0380 - 0x0278)
class UWBP_TgfGame_Inventory_Attribute_ListItem2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Name_WBP_TgfGame_Inventory_Attribute_ListItem2_C;  // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Num;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Select;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Tgf_Button_C*                      WBP_Tgf_Button_C_62;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          EnableTooltips;                                    // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EnRoleDisplayAttribueID                       Attribut_Id;                                       // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A2[0x6];                                      // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRoleDisplayAttribute                  AttributeConfig;                                   // 0x02A8(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AttrName;                                          // 0x0358(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        CurValue;                                          // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BaseValue;                                         // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_ListItem2(int32 EntryPoint);
	void InitTooltips(const class FText& Attr_name, double Total_value, double base_value);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void SetUp(const class FText& Param_AttrName, double Param_CurValue, double Param_BaseValue, bool Precent, bool Int, double MaxValue, EnRoleDisplayAttribueID Attribut_id);
	void Setup_By_Cofnig(const struct FRoleDisplayAttribute& Attr_config, double Param_CurValue, double Param_BaseValue, double MaxValue);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TgfGame_Inventory_Attribute_ListItem2_C">();
	}
	static class UWBP_TgfGame_Inventory_Attribute_ListItem2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TgfGame_Inventory_Attribute_ListItem2_C>();
	}
};
static_assert(alignof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C) == 0x000008, "Wrong alignment on UWBP_TgfGame_Inventory_Attribute_ListItem2_C");
static_assert(sizeof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C) == 0x000380, "Wrong size on UWBP_TgfGame_Inventory_Attribute_ListItem2_C");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, UberGraphFrame) == 0x000278, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, Name_WBP_TgfGame_Inventory_Attribute_ListItem2_C) == 0x000280, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::Name_WBP_TgfGame_Inventory_Attribute_ListItem2_C' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, Num) == 0x000288, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::Num' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, Select) == 0x000290, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::Select' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, WBP_Tgf_Button_C_62) == 0x000298, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::WBP_Tgf_Button_C_62' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, EnableTooltips) == 0x0002A0, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::EnableTooltips' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, Attribut_Id) == 0x0002A1, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::Attribut_Id' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, AttributeConfig) == 0x0002A8, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::AttributeConfig' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, AttrName) == 0x000358, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::AttrName' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, CurValue) == 0x000370, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::CurValue' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_ListItem2_C, BaseValue) == 0x000378, "Member 'UWBP_TgfGame_Inventory_Attribute_ListItem2_C::BaseValue' has a wrong offset!");

}

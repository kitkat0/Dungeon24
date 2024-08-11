#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Inventory_Attribute_Tips_Status

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TgfGame_Inventory_Attribute_Tips_Status.WBP_TgfGame_Inventory_Attribute_Tips_Status_C
// 0x0130 (0x03A8 - 0x0278)
class UWBP_TgfGame_Inventory_Attribute_Tips_Status_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         BaseInfo1;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         BaseInfo2;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_Inventory_Attribute_Tips_Status_Desc_C* Desc_1;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DescrPanel;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_2;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextNum;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_1;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            Parent_Cell;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRoleDisplayAttribute                  Attr_Config;                                       // 0x02D0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_TgfGame_Inventory_Attribute_Tips_Status_Desc_C*> Desces;                                            // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector2D                              Offset;                                            // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Force_Right;                                       // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Status(int32 EntryPoint);
	void GetValueText(double Value, class FText* Ret);
	void InitUI();
	void SetUp(double Total, double Base, const class FText& Param_Name, const struct FRoleDisplayAttribute& Attr_config);
	void ShowTooltips(class UUserWidget* ParentCell, const struct FVector2D& Param_Offset, bool Force_right);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateDesc(double Attr_value);
	void UpdatePos();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TgfGame_Inventory_Attribute_Tips_Status_C">();
	}
	static class UWBP_TgfGame_Inventory_Attribute_Tips_Status_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TgfGame_Inventory_Attribute_Tips_Status_C>();
	}
};
static_assert(alignof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C) == 0x000008, "Wrong alignment on UWBP_TgfGame_Inventory_Attribute_Tips_Status_C");
static_assert(sizeof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C) == 0x0003A8, "Wrong size on UWBP_TgfGame_Inventory_Attribute_Tips_Status_C");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, UberGraphFrame) == 0x000278, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, BaseInfo1) == 0x000280, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::BaseInfo1' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, BaseInfo2) == 0x000288, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::BaseInfo2' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, Desc_1) == 0x000290, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::Desc_1' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, DescrPanel) == 0x000298, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::DescrPanel' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, Overlay_1) == 0x0002A0, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, Overlay_2) == 0x0002A8, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, TextName) == 0x0002B0, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::TextName' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, TextNum) == 0x0002B8, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::TextNum' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, VerticalBox_1) == 0x0002C0, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::VerticalBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, Parent_Cell) == 0x0002C8, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::Parent_Cell' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, Attr_Config) == 0x0002D0, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::Attr_Config' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, Desces) == 0x000380, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::Desces' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, Offset) == 0x000390, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::Offset' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_Inventory_Attribute_Tips_Status_C, Force_Right) == 0x0003A0, "Member 'UWBP_TgfGame_Inventory_Attribute_Tips_Status_C::Force_Right' has a wrong offset!");

}

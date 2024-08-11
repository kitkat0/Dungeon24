#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Attribute_Skill_DropDown

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Attribute_Skill_DropDown.WBP_Attribute_Skill_DropDown_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_Attribute_Skill_DropDown_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Tgf_Button_C*                      ButtonDropDownClose;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_SkillIcon_C*               SkillIcon;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_SkillIcon_C*               SkillIcon_1;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_SkillIcon_C*               SkillIcon_2;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TgfGame_SkillIcon_C*               SkillIcon_3;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               SkillSelectBox;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          MouseIn;                                           // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSkillDropdownHide;                               // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Position;                                          // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Attribute_Skill_DropDown_ButtonDropDownClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ClosePanel();
	void ExecuteUbergraph_WBP_Attribute_Skill_DropDown(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnSkillDropdownHide__DelegateSignature(int32 Pos);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Attribute_Skill_DropDown_C">();
	}
	static class UWBP_Attribute_Skill_DropDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Attribute_Skill_DropDown_C>();
	}
};
static_assert(alignof(UWBP_Attribute_Skill_DropDown_C) == 0x000008, "Wrong alignment on UWBP_Attribute_Skill_DropDown_C");
static_assert(sizeof(UWBP_Attribute_Skill_DropDown_C) == 0x0002D8, "Wrong size on UWBP_Attribute_Skill_DropDown_C");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Attribute_Skill_DropDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, ButtonDropDownClose) == 0x000280, "Member 'UWBP_Attribute_Skill_DropDown_C::ButtonDropDownClose' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, SkillIcon) == 0x000288, "Member 'UWBP_Attribute_Skill_DropDown_C::SkillIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, SkillIcon_1) == 0x000290, "Member 'UWBP_Attribute_Skill_DropDown_C::SkillIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, SkillIcon_2) == 0x000298, "Member 'UWBP_Attribute_Skill_DropDown_C::SkillIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, SkillIcon_3) == 0x0002A0, "Member 'UWBP_Attribute_Skill_DropDown_C::SkillIcon_3' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, SkillSelectBox) == 0x0002A8, "Member 'UWBP_Attribute_Skill_DropDown_C::SkillSelectBox' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, VerticalBox_0) == 0x0002B0, "Member 'UWBP_Attribute_Skill_DropDown_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, MouseIn) == 0x0002B8, "Member 'UWBP_Attribute_Skill_DropDown_C::MouseIn' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, OnSkillDropdownHide) == 0x0002C0, "Member 'UWBP_Attribute_Skill_DropDown_C::OnSkillDropdownHide' has a wrong offset!");
static_assert(offsetof(UWBP_Attribute_Skill_DropDown_C, Position) == 0x0002D0, "Member 'UWBP_Attribute_Skill_DropDown_C::Position' has a wrong offset!");

}

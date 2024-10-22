#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemTooltips_Buffline

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemTooltips_Buffline.WBP_ItemTooltips_Buffline_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_ItemTooltips_Buffline_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         BuffLine;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   BuffText;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Spot;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bDisableWrap;                                      // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_ItemTooltips_Buffline(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemTooltips_Buffline_C">();
	}
	static class UWBP_ItemTooltips_Buffline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemTooltips_Buffline_C>();
	}
};
static_assert(alignof(UWBP_ItemTooltips_Buffline_C) == 0x000008, "Wrong alignment on UWBP_ItemTooltips_Buffline_C");
static_assert(sizeof(UWBP_ItemTooltips_Buffline_C) == 0x0002A0, "Wrong size on UWBP_ItemTooltips_Buffline_C");
static_assert(offsetof(UWBP_ItemTooltips_Buffline_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ItemTooltips_Buffline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltips_Buffline_C, BuffLine) == 0x000280, "Member 'UWBP_ItemTooltips_Buffline_C::BuffLine' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltips_Buffline_C, BuffText) == 0x000288, "Member 'UWBP_ItemTooltips_Buffline_C::BuffText' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltips_Buffline_C, Spot) == 0x000290, "Member 'UWBP_ItemTooltips_Buffline_C::Spot' has a wrong offset!");
static_assert(offsetof(UWBP_ItemTooltips_Buffline_C, bDisableWrap) == 0x000298, "Member 'UWBP_ItemTooltips_Buffline_C::bDisableWrap' has a wrong offset!");

}


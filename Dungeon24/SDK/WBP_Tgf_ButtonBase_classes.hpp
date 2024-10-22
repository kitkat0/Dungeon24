#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tgf_ButtonBase

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Tgf_ButtonBase.WBP_Tgf_ButtonBase_C
// 0x0050 (0x1570 - 0x1520)
class UWBP_Tgf_ButtonBase_C final : public UTgfButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 MaskedOverlay;                                     // 0x1528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay;                                           // 0x1530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_RedDot_Hall_C*              RedDot;                                            // 0x1538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextLabel;                                         // 0x1540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x1548(0x0018)(Edit, BlueprintVisible)
	class UAkAudioEvent*                          ClickedSound;                                      // 0x1560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_WBP_Tgf_ButtonBase(int32 EntryPoint);
	void GetChildOverlay(class UOverlay** Ret);
	void OnCurrentTextStyleChanged();
	void OnLoaded_91190B314C5BEFD3D5C43597AC5FE5D8(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void SetButtonText(const class FText& Text);
	void ShowRedDot(bool Show);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Tgf_ButtonBase_C">();
	}
	static class UWBP_Tgf_ButtonBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Tgf_ButtonBase_C>();
	}
};
static_assert(alignof(UWBP_Tgf_ButtonBase_C) == 0x000010, "Wrong alignment on UWBP_Tgf_ButtonBase_C");
static_assert(sizeof(UWBP_Tgf_ButtonBase_C) == 0x001570, "Wrong size on UWBP_Tgf_ButtonBase_C");
static_assert(offsetof(UWBP_Tgf_ButtonBase_C, UberGraphFrame) == 0x001520, "Member 'UWBP_Tgf_ButtonBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_ButtonBase_C, MaskedOverlay) == 0x001528, "Member 'UWBP_Tgf_ButtonBase_C::MaskedOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_ButtonBase_C, Overlay) == 0x001530, "Member 'UWBP_Tgf_ButtonBase_C::Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_ButtonBase_C, RedDot) == 0x001538, "Member 'UWBP_Tgf_ButtonBase_C::RedDot' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_ButtonBase_C, TextLabel) == 0x001540, "Member 'UWBP_Tgf_ButtonBase_C::TextLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_ButtonBase_C, ButtonText) == 0x001548, "Member 'UWBP_Tgf_ButtonBase_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_ButtonBase_C, ClickedSound) == 0x001560, "Member 'UWBP_Tgf_ButtonBase_C::ClickedSound' has a wrong offset!");

}


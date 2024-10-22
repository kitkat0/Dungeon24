#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_SpectateQuitNotice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "LyraGame_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TgfGame_SpectateQuitNotice.WBP_TgfGame_SpectateQuitNotice_C
// 0x0068 (0x0450 - 0x03E8)
class UWBP_TgfGame_SpectateQuitNotice_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Tgf_Button_C*                      ButtonConfirm;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Long_C*              ButtonQuit;                                        // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Long_C*              ButtonSpectate;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ConfirmPanel;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CountDownPanel;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Notice;                                            // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text;                                              // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Long_C*              WBP_Common_Button_Long;                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESpectatingTargetType                         WidgetMode;                                        // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Common_Button_Simple_C*            Button_Spectate;                                   // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         RestTime;                                          // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_444[0x4];                                      // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer;                                             // 0x0448(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_TgfGame_SpectateQuit_ButtonQuit_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_TgfGame_SpectateQuit_ButtonSpectate_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_TgfGame_SpectateQuitNotice_ButtonConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BP_OnDeactivated();
	void Construct();
	void Countdown();
	void CountDownToDeactive();
	void ExecuteUbergraph_WBP_TgfGame_SpectateQuitNotice(int32 EntryPoint);
	void InitButtonQuit();
	void InitSettings();
	void PreConstruct(bool IsDesignTime);
	void Set_Current_Mode(ESpectatingTargetType Mode, int32 RemainingTime);
	void SetText();
	void UpdateCountDown(int32 Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TgfGame_SpectateQuitNotice_C">();
	}
	static class UWBP_TgfGame_SpectateQuitNotice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TgfGame_SpectateQuitNotice_C>();
	}
};
static_assert(alignof(UWBP_TgfGame_SpectateQuitNotice_C) == 0x000008, "Wrong alignment on UWBP_TgfGame_SpectateQuitNotice_C");
static_assert(sizeof(UWBP_TgfGame_SpectateQuitNotice_C) == 0x000450, "Wrong size on UWBP_TgfGame_SpectateQuitNotice_C");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, UberGraphFrame) == 0x0003E8, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, ButtonConfirm) == 0x0003F0, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::ButtonConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, ButtonQuit) == 0x0003F8, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::ButtonQuit' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, ButtonSpectate) == 0x000400, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::ButtonSpectate' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, ConfirmPanel) == 0x000408, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::ConfirmPanel' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, CountDownPanel) == 0x000410, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::CountDownPanel' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, Notice) == 0x000418, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::Notice' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, Text) == 0x000420, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, WBP_Common_Button_Long) == 0x000428, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::WBP_Common_Button_Long' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, WidgetMode) == 0x000430, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::WidgetMode' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, Button_Spectate) == 0x000438, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::Button_Spectate' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, RestTime) == 0x000440, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::RestTime' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_SpectateQuitNotice_C, Timer) == 0x000448, "Member 'UWBP_TgfGame_SpectateQuitNotice_C::Timer' has a wrong offset!");

}


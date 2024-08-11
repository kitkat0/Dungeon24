#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OnboardingPrompt_HeavyHit

#include "Basic.hpp"

#include "WBP_OnboardingPrompt_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OnboardingPrompt_HeavyHit.WBP_OnboardingPrompt_HeavyHit_C
// 0x0030 (0x02E8 - 0x02B8)
class UWBP_OnboardingPrompt_HeavyHit_C final : public UWBP_OnboardingPrompt_C
{
public:
	class UCommonTextBlock*                       ControlText1;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ControlText2;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomRichTextBlock*                   DescrText;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mouse_Left_C*                      WBP_Mouse_Left;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StrikeTime;                                        // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OnboardingPrompt_HeavyHit_C">();
	}
	static class UWBP_OnboardingPrompt_HeavyHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OnboardingPrompt_HeavyHit_C>();
	}
};
static_assert(alignof(UWBP_OnboardingPrompt_HeavyHit_C) == 0x000008, "Wrong alignment on UWBP_OnboardingPrompt_HeavyHit_C");
static_assert(sizeof(UWBP_OnboardingPrompt_HeavyHit_C) == 0x0002E8, "Wrong size on UWBP_OnboardingPrompt_HeavyHit_C");
static_assert(offsetof(UWBP_OnboardingPrompt_HeavyHit_C, ControlText1) == 0x0002B8, "Member 'UWBP_OnboardingPrompt_HeavyHit_C::ControlText1' has a wrong offset!");
static_assert(offsetof(UWBP_OnboardingPrompt_HeavyHit_C, ControlText2) == 0x0002C0, "Member 'UWBP_OnboardingPrompt_HeavyHit_C::ControlText2' has a wrong offset!");
static_assert(offsetof(UWBP_OnboardingPrompt_HeavyHit_C, DescrText) == 0x0002C8, "Member 'UWBP_OnboardingPrompt_HeavyHit_C::DescrText' has a wrong offset!");
static_assert(offsetof(UWBP_OnboardingPrompt_HeavyHit_C, NamedSlot) == 0x0002D0, "Member 'UWBP_OnboardingPrompt_HeavyHit_C::NamedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_OnboardingPrompt_HeavyHit_C, WBP_Mouse_Left) == 0x0002D8, "Member 'UWBP_OnboardingPrompt_HeavyHit_C::WBP_Mouse_Left' has a wrong offset!");
static_assert(offsetof(UWBP_OnboardingPrompt_HeavyHit_C, StrikeTime) == 0x0002E0, "Member 'UWBP_OnboardingPrompt_HeavyHit_C::StrikeTime' has a wrong offset!");

}


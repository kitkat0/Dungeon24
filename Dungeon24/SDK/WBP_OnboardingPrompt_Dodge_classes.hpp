#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OnboardingPrompt_Dodge

#include "Basic.hpp"

#include "WBP_OnboardingPrompt_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OnboardingPrompt_Dodge.WBP_OnboardingPrompt_Dodge_C
// 0x0008 (0x02C0 - 0x02B8)
class UWBP_OnboardingPrompt_Dodge_C final : public UWBP_OnboardingPrompt_C
{
public:
	class UCustomRichTextBlock*                   DescrText;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OnboardingPrompt_Dodge_C">();
	}
	static class UWBP_OnboardingPrompt_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OnboardingPrompt_Dodge_C>();
	}
};
static_assert(alignof(UWBP_OnboardingPrompt_Dodge_C) == 0x000008, "Wrong alignment on UWBP_OnboardingPrompt_Dodge_C");
static_assert(sizeof(UWBP_OnboardingPrompt_Dodge_C) == 0x0002C0, "Wrong size on UWBP_OnboardingPrompt_Dodge_C");
static_assert(offsetof(UWBP_OnboardingPrompt_Dodge_C, DescrText) == 0x0002B8, "Member 'UWBP_OnboardingPrompt_Dodge_C::DescrText' has a wrong offset!");

}


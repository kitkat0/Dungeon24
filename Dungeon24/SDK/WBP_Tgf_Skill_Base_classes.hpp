#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tgf_Skill_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Tgf_Skill_Base.WBP_Tgf_Skill_Base_C
// 0x0170 (0x04B8 - 0x0348)
class UWBP_Tgf_Skill_Base_C : public UTgfSkillWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CastSuccessAnim;                                   // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CastAnim;                                          // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             Attachment;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CountDownPanel;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FrameLeft;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FrameRight;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSkillMask;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSkillUpper;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgCast;                                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgCastSuccess;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyMap_Common_C*                   KeyLeft;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyMap_Common_C*                   KeyRight;                                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayLeftKey;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayRightKey;                                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RoundMask;                                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextCountDown;                                     // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeSlotContainter;                                // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             SkillFrame;                                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             SkillIcon;                                         // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   PromptText;                                        // 0x03F0(0x0018)(Edit, BlueprintVisible)
	double                                        StartTime;                                         // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RemainTime;                                        // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RoundBarMaterial;                                  // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               TimeSlotMaterial;                                  // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bCostEnough;                                       // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAnimPlay;                                         // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_432[0x6];                                      // 0x0432(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ReleatedBuffGE;                                    // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        BuffTotalTime;                                     // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BuffPassTime;                                      // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GEHandle;                                          // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               BuffStateTexture;                                  // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SkillInputTag;                                     // 0x0460(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  LeftGameplayInputTag;                              // 0x0468(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  RightGameplayInputTag;                             // 0x0488(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NewVar;                                            // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCntEnough;                                        // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNeedHideDuration;                                 // 0x04AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AB[0x5];                                      // 0x04AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HideDurationLimit;                                 // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimEnd();
	void AnimStart();
	void BP_InternalTick(float InDeltaTime);
	void BP_OnActivateRelatedGAFailed();
	void BP_OnBuffAdd(class UTgfGameplayEffect* GE, const struct FActiveGameplayEffectHandle& ActiveHandle, float Param_RemainTime, float TotalTime);
	void BP_OnCooldownEnd();
	void BP_OnCooldownStart(float CooldownTime, float TotalTime, bool Param_bNeedHideDuration, float Param_HideDurationLimit);
	void BP_OnGameplayAbilityEnd(class UGameplayAbility* GameplayAbility);
	void BP_OnGERemove(const struct FActiveGameplayEffectHandle& Param_GEHandle);
	void BP_OnSkillResourceChanged();
	void Construct();
	void ExecuteUbergraph_WBP_Tgf_Skill_Base(int32 EntryPoint);
	void GetFinalCDPercent(double* CDPercent, bool* bShowText);
	void OnInitialized();
	void OnMessageReceived_32922858476DF01AB3108DA239AE54DD(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void Play_Cast_Anim();
	void PlayCastFailSound();
	void PreConstruct(bool IsDesignTime);
	void SequenceEvent__ENTRYPOINTWBP_Tgf_Skill_Base();
	void SequenceEvent__ENTRYPOINTWBP_Tgf_Skill_Base_0();
	void SetCostEnough(bool CostEnough);
	void SetKeyText();
	void SetPriestSkillState();
	void SetSkillIcon(class UTexture2D* Texture2D);
	void ShowSkillCastSuccess();
	void StartCoolDown(double Cool_Down_Time, double Param_RemainTime, bool NeedHideDur, double HidDurLimit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Tgf_Skill_Base_C">();
	}
	static class UWBP_Tgf_Skill_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Tgf_Skill_Base_C>();
	}
};
static_assert(alignof(UWBP_Tgf_Skill_Base_C) == 0x000008, "Wrong alignment on UWBP_Tgf_Skill_Base_C");
static_assert(sizeof(UWBP_Tgf_Skill_Base_C) == 0x0004B8, "Wrong size on UWBP_Tgf_Skill_Base_C");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, UberGraphFrame) == 0x000348, "Member 'UWBP_Tgf_Skill_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, CastSuccessAnim) == 0x000350, "Member 'UWBP_Tgf_Skill_Base_C::CastSuccessAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, CastAnim) == 0x000358, "Member 'UWBP_Tgf_Skill_Base_C::CastAnim' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, Attachment) == 0x000360, "Member 'UWBP_Tgf_Skill_Base_C::Attachment' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, CountDownPanel) == 0x000368, "Member 'UWBP_Tgf_Skill_Base_C::CountDownPanel' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, FrameLeft) == 0x000370, "Member 'UWBP_Tgf_Skill_Base_C::FrameLeft' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, FrameRight) == 0x000378, "Member 'UWBP_Tgf_Skill_Base_C::FrameRight' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, Icon) == 0x000380, "Member 'UWBP_Tgf_Skill_Base_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, ImageSkillMask) == 0x000388, "Member 'UWBP_Tgf_Skill_Base_C::ImageSkillMask' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, ImageSkillUpper) == 0x000390, "Member 'UWBP_Tgf_Skill_Base_C::ImageSkillUpper' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, ImgCast) == 0x000398, "Member 'UWBP_Tgf_Skill_Base_C::ImgCast' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, ImgCastSuccess) == 0x0003A0, "Member 'UWBP_Tgf_Skill_Base_C::ImgCastSuccess' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, KeyLeft) == 0x0003A8, "Member 'UWBP_Tgf_Skill_Base_C::KeyLeft' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, KeyRight) == 0x0003B0, "Member 'UWBP_Tgf_Skill_Base_C::KeyRight' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, OverlayLeftKey) == 0x0003B8, "Member 'UWBP_Tgf_Skill_Base_C::OverlayLeftKey' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, OverlayRightKey) == 0x0003C0, "Member 'UWBP_Tgf_Skill_Base_C::OverlayRightKey' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, RoundMask) == 0x0003C8, "Member 'UWBP_Tgf_Skill_Base_C::RoundMask' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, TextCountDown) == 0x0003D0, "Member 'UWBP_Tgf_Skill_Base_C::TextCountDown' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, TimeSlotContainter) == 0x0003D8, "Member 'UWBP_Tgf_Skill_Base_C::TimeSlotContainter' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, SkillFrame) == 0x0003E0, "Member 'UWBP_Tgf_Skill_Base_C::SkillFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, SkillIcon) == 0x0003E8, "Member 'UWBP_Tgf_Skill_Base_C::SkillIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, PromptText) == 0x0003F0, "Member 'UWBP_Tgf_Skill_Base_C::PromptText' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, StartTime) == 0x000408, "Member 'UWBP_Tgf_Skill_Base_C::StartTime' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, RemainTime) == 0x000410, "Member 'UWBP_Tgf_Skill_Base_C::RemainTime' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, RoundBarMaterial) == 0x000418, "Member 'UWBP_Tgf_Skill_Base_C::RoundBarMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, Radius) == 0x000420, "Member 'UWBP_Tgf_Skill_Base_C::Radius' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, TimeSlotMaterial) == 0x000428, "Member 'UWBP_Tgf_Skill_Base_C::TimeSlotMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, bCostEnough) == 0x000430, "Member 'UWBP_Tgf_Skill_Base_C::bCostEnough' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, bAnimPlay) == 0x000431, "Member 'UWBP_Tgf_Skill_Base_C::bAnimPlay' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, ReleatedBuffGE) == 0x000438, "Member 'UWBP_Tgf_Skill_Base_C::ReleatedBuffGE' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, BuffTotalTime) == 0x000440, "Member 'UWBP_Tgf_Skill_Base_C::BuffTotalTime' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, BuffPassTime) == 0x000448, "Member 'UWBP_Tgf_Skill_Base_C::BuffPassTime' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, GEHandle) == 0x000450, "Member 'UWBP_Tgf_Skill_Base_C::GEHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, BuffStateTexture) == 0x000458, "Member 'UWBP_Tgf_Skill_Base_C::BuffStateTexture' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, SkillInputTag) == 0x000460, "Member 'UWBP_Tgf_Skill_Base_C::SkillInputTag' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, LeftGameplayInputTag) == 0x000468, "Member 'UWBP_Tgf_Skill_Base_C::LeftGameplayInputTag' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, RightGameplayInputTag) == 0x000488, "Member 'UWBP_Tgf_Skill_Base_C::RightGameplayInputTag' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, NewVar) == 0x0004A8, "Member 'UWBP_Tgf_Skill_Base_C::NewVar' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, bCntEnough) == 0x0004A9, "Member 'UWBP_Tgf_Skill_Base_C::bCntEnough' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, bNeedHideDuration) == 0x0004AA, "Member 'UWBP_Tgf_Skill_Base_C::bNeedHideDuration' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Skill_Base_C, HideDurationLimit) == 0x0004B0, "Member 'UWBP_Tgf_Skill_Base_C::HideDurationLimit' has a wrong offset!");

}


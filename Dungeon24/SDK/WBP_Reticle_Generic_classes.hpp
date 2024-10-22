#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Reticle_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Reticle_Generic.WBP_Reticle_Generic_C
// 0x0088 (0x0360 - 0x02D8)
class UWBP_Reticle_Generic_C : public UTgfReticleWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ChargeMaxStart;                                    // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ChargeAtMax;                                       // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FinishCharging;                                    // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StartCharging;                                     // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonVisualAttachment*                ChargeProgress;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_23;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_52;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NSChild;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayChild;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        ChargeAtMaxPlayRate;                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayEvent*        Async_Wait_for_Start;                              // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayEvent*        Async_Wait_for_End;                                // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ChargeAnimRate;                                    // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxChargeTime;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         SpeedUpCnt;                                        // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyTipsSetting();
	void ChargeAtMax_NextLoop();
	void ChargeStart();
	void Destruct();
	void ExecuteUbergraph_WBP_Reticle_Generic(int32 EntryPoint);
	void OnChargeEnd();
	void OnChargeReachedMax();
	void OnChargeStart(double MaxTime, double CurTime);
	void OnMessageReceived_4B7EAD2D4C7B3E1522CB9CAE2ED95677(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_D0E20D604D7F6B08E40E1DAFEBCE9C18(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnWeaponInitialized();
	void SequenceEvent__ENTRYPOINTWBP_Reticle_Generic();
	void SequenceEvent__ENTRYPOINTWBP_Reticle_Generic_0();
	void SequenceEvent__ENTRYPOINTWBP_Reticle_Generic_1();
	void SettingChange();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Reticle_Generic_C">();
	}
	static class UWBP_Reticle_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Reticle_Generic_C>();
	}
};
static_assert(alignof(UWBP_Reticle_Generic_C) == 0x000008, "Wrong alignment on UWBP_Reticle_Generic_C");
static_assert(sizeof(UWBP_Reticle_Generic_C) == 0x000360, "Wrong size on UWBP_Reticle_Generic_C");
static_assert(offsetof(UWBP_Reticle_Generic_C, UberGraphFrame) == 0x0002D8, "Member 'UWBP_Reticle_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, ChargeMaxStart) == 0x0002E0, "Member 'UWBP_Reticle_Generic_C::ChargeMaxStart' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, ChargeAtMax) == 0x0002E8, "Member 'UWBP_Reticle_Generic_C::ChargeAtMax' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, FinishCharging) == 0x0002F0, "Member 'UWBP_Reticle_Generic_C::FinishCharging' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, StartCharging) == 0x0002F8, "Member 'UWBP_Reticle_Generic_C::StartCharging' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, ChargeProgress) == 0x000300, "Member 'UWBP_Reticle_Generic_C::ChargeProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, Image) == 0x000308, "Member 'UWBP_Reticle_Generic_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, Image_23) == 0x000310, "Member 'UWBP_Reticle_Generic_C::Image_23' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, Image_52) == 0x000318, "Member 'UWBP_Reticle_Generic_C::Image_52' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, NSChild) == 0x000320, "Member 'UWBP_Reticle_Generic_C::NSChild' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, OverlayChild) == 0x000328, "Member 'UWBP_Reticle_Generic_C::OverlayChild' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, ChargeAtMaxPlayRate) == 0x000330, "Member 'UWBP_Reticle_Generic_C::ChargeAtMaxPlayRate' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, Async_Wait_for_Start) == 0x000338, "Member 'UWBP_Reticle_Generic_C::Async_Wait_for_Start' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, Async_Wait_for_End) == 0x000340, "Member 'UWBP_Reticle_Generic_C::Async_Wait_for_End' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, ChargeAnimRate) == 0x000348, "Member 'UWBP_Reticle_Generic_C::ChargeAnimRate' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, MaxChargeTime) == 0x000350, "Member 'UWBP_Reticle_Generic_C::MaxChargeTime' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Generic_C, SpeedUpCnt) == 0x000358, "Member 'UWBP_Reticle_Generic_C::SpeedUpCnt' has a wrong offset!");

}


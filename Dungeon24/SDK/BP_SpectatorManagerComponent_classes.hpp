#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpectatorManagerComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "LyraGame_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpectatorManagerComponent.BP_SpectatorManagerComponent_C
// 0x0020 (0x0130 - 0x0110)
class UBP_SpectatorManagerComponent_C final : public UTgfSpectatorManagerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TgfGame_SpectateQuitNotice_C*      SpectateWidget;                                    // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ForbiddenSpectate;                                 // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonActivatableWidget*               MithrilWidget;                                     // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AfterPush_7D562B5645061F790DF639A2A7631194(class UCommonActivatableWidget* UserWidget);
	void AfterPush_9267A5714F4413F145EE42A5673D1622(class UCommonActivatableWidget* UserWidget);
	void AfterPush_DE479EB9485C436B09A2B88894D74EA8(class UCommonActivatableWidget* UserWidget);
	void AfterPush_EEA0577C4A22064137944FA1820E589B(class UCommonActivatableWidget* UserWidget);
	void BeforePush_7D562B5645061F790DF639A2A7631194(class UCommonActivatableWidget* UserWidget);
	void BeforePush_9267A5714F4413F145EE42A5673D1622(class UCommonActivatableWidget* UserWidget);
	void BeforePush_DE479EB9485C436B09A2B88894D74EA8(class UCommonActivatableWidget* UserWidget);
	void BeforePush_EEA0577C4A22064137944FA1820E589B(class UCommonActivatableWidget* UserWidget);
	void CancelWidgetWhenSwitch();
	void CancelWighetAbilities();
	void ExecuteUbergraph_BP_SpectatorManagerComponent(int32 EntryPoint);
	void GetOwnCharacter(class ALyraCharacter** Character);
	void Ignore_Show_Game_Over(bool* Ignore);
	void MithrilRebirthCountDown();
	void MithrilRebirthNotice(class ALyraCharacter* Target);
	void MithriNoticelDeactive();
	void OnMessageReceived_B893F0634D4A0B817D8554B986101AD9(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnRebirthFinish_Event(class AActor* OwningActor);
	void OpenSpectateNoticeWindow(ESpectatingTargetType TargetType);
	void PVPRebirthCountDown();
	void ReceiveBeginPlay();
	void SpectateWindowDeactive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpectatorManagerComponent_C">();
	}
	static class UBP_SpectatorManagerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SpectatorManagerComponent_C>();
	}
};
static_assert(alignof(UBP_SpectatorManagerComponent_C) == 0x000008, "Wrong alignment on UBP_SpectatorManagerComponent_C");
static_assert(sizeof(UBP_SpectatorManagerComponent_C) == 0x000130, "Wrong size on UBP_SpectatorManagerComponent_C");
static_assert(offsetof(UBP_SpectatorManagerComponent_C, UberGraphFrame) == 0x000110, "Member 'UBP_SpectatorManagerComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SpectatorManagerComponent_C, SpectateWidget) == 0x000118, "Member 'UBP_SpectatorManagerComponent_C::SpectateWidget' has a wrong offset!");
static_assert(offsetof(UBP_SpectatorManagerComponent_C, ForbiddenSpectate) == 0x000120, "Member 'UBP_SpectatorManagerComponent_C::ForbiddenSpectate' has a wrong offset!");
static_assert(offsetof(UBP_SpectatorManagerComponent_C, MithrilWidget) == 0x000128, "Member 'UBP_SpectatorManagerComponent_C::MithrilWidget' has a wrong offset!");

}

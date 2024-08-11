#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_AutoRecoverAmmo_PVP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_AutoRecoverAmmo_PVP.GA_TGF_AutoRecoverAmmo_PVP_C
// 0x0010 (0x0990 - 0x0980)
class UGA_TGF_AutoRecoverAmmo_PVP_C final : public UTgfGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0980(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           RecoverTimer;                                      // 0x0988(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ClearTimer();
	void ExecuteUbergraph_GA_TGF_AutoRecoverAmmo_PVP(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnTimer();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_AutoRecoverAmmo_PVP_C">();
	}
	static class UGA_TGF_AutoRecoverAmmo_PVP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_AutoRecoverAmmo_PVP_C>();
	}
};
static_assert(alignof(UGA_TGF_AutoRecoverAmmo_PVP_C) == 0x000010, "Wrong alignment on UGA_TGF_AutoRecoverAmmo_PVP_C");
static_assert(sizeof(UGA_TGF_AutoRecoverAmmo_PVP_C) == 0x000990, "Wrong size on UGA_TGF_AutoRecoverAmmo_PVP_C");
static_assert(offsetof(UGA_TGF_AutoRecoverAmmo_PVP_C, UberGraphFrame) == 0x000980, "Member 'UGA_TGF_AutoRecoverAmmo_PVP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TGF_AutoRecoverAmmo_PVP_C, RecoverTimer) == 0x000988, "Member 'UGA_TGF_AutoRecoverAmmo_PVP_C::RecoverTimer' has a wrong offset!");

}


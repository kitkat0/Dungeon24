#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Rebirth

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_Rebirth.GA_TGF_Rebirth_C
// 0x0010 (0x06A0 - 0x0690)
class UGA_TGF_Rebirth_C final : public UTgfGameplayAbility_Rebirth
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ResurrectCount;                                    // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CosmeticAndCamera();
	void DropItem(class UTgfInventoryItemInstance* Item);
	void EventReceived_4D12205143A2F5AB14E89BBEA5015CB9(const struct FGameplayEventData& Payload);
	void EventReceived_603E61F247DDAD88692CE6BEF0857910(const struct FGameplayEventData& Payload);
	void EventReceived_BAB3536A42854EE707A4F7BDFA16D50A(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_TGF_Rebirth(int32 EntryPoint);
	void HandleAvoidDeath();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnRebirth();
	void ReplicatingToClient(class AActor* Insigator, class AActor* Target);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_Rebirth_C">();
	}
	static class UGA_TGF_Rebirth_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_Rebirth_C>();
	}
};
static_assert(alignof(UGA_TGF_Rebirth_C) == 0x000008, "Wrong alignment on UGA_TGF_Rebirth_C");
static_assert(sizeof(UGA_TGF_Rebirth_C) == 0x0006A0, "Wrong size on UGA_TGF_Rebirth_C");
static_assert(offsetof(UGA_TGF_Rebirth_C, UberGraphFrame) == 0x000690, "Member 'UGA_TGF_Rebirth_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Rebirth_C, ResurrectCount) == 0x000698, "Member 'UGA_TGF_Rebirth_C::ResurrectCount' has a wrong offset!");

}

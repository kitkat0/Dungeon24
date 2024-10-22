#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NpcBehavior_FlowerCoffinRefresh

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBehavior_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NpcBehavior_FlowerCoffinRefresh.BP_NpcBehavior_FlowerCoffinRefresh_C
// 0x0010 (0x00B0 - 0x00A0)
class UBP_NpcBehavior_FlowerCoffinRefresh_C final : public UBP_NpcBehavior_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         DelayTimeWhenLeaving;                              // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoBehavior(const struct FGameplayTag& GameplayTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BP_NpcBehavior_FlowerCoffinRefresh(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NpcBehavior_FlowerCoffinRefresh_C">();
	}
	static class UBP_NpcBehavior_FlowerCoffinRefresh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NpcBehavior_FlowerCoffinRefresh_C>();
	}
};
static_assert(alignof(UBP_NpcBehavior_FlowerCoffinRefresh_C) == 0x000008, "Wrong alignment on UBP_NpcBehavior_FlowerCoffinRefresh_C");
static_assert(sizeof(UBP_NpcBehavior_FlowerCoffinRefresh_C) == 0x0000B0, "Wrong size on UBP_NpcBehavior_FlowerCoffinRefresh_C");
static_assert(offsetof(UBP_NpcBehavior_FlowerCoffinRefresh_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_NpcBehavior_FlowerCoffinRefresh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NpcBehavior_FlowerCoffinRefresh_C, DelayTimeWhenLeaving) == 0x0000A8, "Member 'UBP_NpcBehavior_FlowerCoffinRefresh_C::DelayTimeWhenLeaving' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NpcBehavior_SendGameplayEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBehavior_Base_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NpcBehavior_SendGameplayEvent.BP_NpcBehavior_SendGameplayEvent_C
// 0x00C0 (0x0160 - 0x00A0)
class UBP_NpcBehavior_SendGameplayEvent_C : public UBP_NpcBehavior_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           GameplayEventTag;                                  // 0x00A8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x00B0(0x00B0)(Edit, BlueprintVisible)

public:
	void DoBehavior(const struct FGameplayTag& GameplayTag, const struct FGameplayEventData& Param_EventData);
	void ExecuteUbergraph_BP_NpcBehavior_SendGameplayEvent(int32 EntryPoint);
	void OnReady_D506774D49C4199AF1FC56BD9C4E1511();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NpcBehavior_SendGameplayEvent_C">();
	}
	static class UBP_NpcBehavior_SendGameplayEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NpcBehavior_SendGameplayEvent_C>();
	}
};
static_assert(alignof(UBP_NpcBehavior_SendGameplayEvent_C) == 0x000008, "Wrong alignment on UBP_NpcBehavior_SendGameplayEvent_C");
static_assert(sizeof(UBP_NpcBehavior_SendGameplayEvent_C) == 0x000160, "Wrong size on UBP_NpcBehavior_SendGameplayEvent_C");
static_assert(offsetof(UBP_NpcBehavior_SendGameplayEvent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_NpcBehavior_SendGameplayEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NpcBehavior_SendGameplayEvent_C, GameplayEventTag) == 0x0000A8, "Member 'UBP_NpcBehavior_SendGameplayEvent_C::GameplayEventTag' has a wrong offset!");
static_assert(offsetof(UBP_NpcBehavior_SendGameplayEvent_C, EventData) == 0x0000B0, "Member 'UBP_NpcBehavior_SendGameplayEvent_C::EventData' has a wrong offset!");

}


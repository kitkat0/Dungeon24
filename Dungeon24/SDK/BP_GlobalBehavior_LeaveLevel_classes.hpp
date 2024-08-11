#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalBehavior_LeaveLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_NpcBehavior_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GlobalBehavior_LeaveLevel.BP_GlobalBehavior_LeaveLevel_C
// 0x0008 (0x00A8 - 0x00A0)
class UBP_GlobalBehavior_LeaveLevel_C final : public UBP_NpcBehavior_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void DoBehavior(const struct FGameplayTag& GameplayTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_BP_GlobalBehavior_LeaveLevel(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GlobalBehavior_LeaveLevel_C">();
	}
	static class UBP_GlobalBehavior_LeaveLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GlobalBehavior_LeaveLevel_C>();
	}
};
static_assert(alignof(UBP_GlobalBehavior_LeaveLevel_C) == 0x000008, "Wrong alignment on UBP_GlobalBehavior_LeaveLevel_C");
static_assert(sizeof(UBP_GlobalBehavior_LeaveLevel_C) == 0x0000A8, "Wrong size on UBP_GlobalBehavior_LeaveLevel_C");
static_assert(offsetof(UBP_GlobalBehavior_LeaveLevel_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_GlobalBehavior_LeaveLevel_C::UberGraphFrame' has a wrong offset!");

}

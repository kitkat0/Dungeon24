#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Avatar_Default

#include "Basic.hpp"

#include "BP_AvatarActor_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Avatar_Default.BP_Avatar_Default_C
// 0x0008 (0x0798 - 0x0790)
class ABP_Avatar_Default_C final : public ABP_AvatarActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Avatar_Default_C;                // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Avatar_Default(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Avatar_Default_C">();
	}
	static class ABP_Avatar_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Avatar_Default_C>();
	}
};
static_assert(alignof(ABP_Avatar_Default_C) == 0x000008, "Wrong alignment on ABP_Avatar_Default_C");
static_assert(sizeof(ABP_Avatar_Default_C) == 0x000798, "Wrong size on ABP_Avatar_Default_C");
static_assert(offsetof(ABP_Avatar_Default_C, UberGraphFrame_BP_Avatar_Default_C) == 0x000790, "Member 'ABP_Avatar_Default_C::UberGraphFrame_BP_Avatar_Default_C' has a wrong offset!");

}


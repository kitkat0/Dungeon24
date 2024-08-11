#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PatrolPoint

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PatrolPoint.BP_PatrolPoint_C
// 0x0018 (0x02B0 - 0x0298)
class ABP_PatrolPoint_C final : public AActor
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        WaitTime;                                          // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PatrolPoint_C">();
	}
	static class ABP_PatrolPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PatrolPoint_C>();
	}
};
static_assert(alignof(ABP_PatrolPoint_C) == 0x000008, "Wrong alignment on ABP_PatrolPoint_C");
static_assert(sizeof(ABP_PatrolPoint_C) == 0x0002B0, "Wrong size on ABP_PatrolPoint_C");
static_assert(offsetof(ABP_PatrolPoint_C, Arrow) == 0x000298, "Member 'ABP_PatrolPoint_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PatrolPoint_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_PatrolPoint_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PatrolPoint_C, WaitTime) == 0x0002A8, "Member 'ABP_PatrolPoint_C::WaitTime' has a wrong offset!");

}

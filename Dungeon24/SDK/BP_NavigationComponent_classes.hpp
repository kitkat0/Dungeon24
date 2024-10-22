#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NavigationComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ModularGameplay_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NavigationComponent.BP_NavigationComponent_C
// 0x0070 (0x0118 - 0x00A8)
class UBP_NavigationComponent_C final : public UControllerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsLocalPlayer;                                     // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enabled;                                           // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TickTime;                                          // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TickDelta;                                         // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target;                                            // 0x00C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x00E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Indicator;                                         // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         IndicatorCache;                                    // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         NewCacheCount;                                     // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CacheIndicators(int32 Count);
	void ExecuteUbergraph_BP_NavigationComponent(int32 EntryPoint);
	void IsNavigating(bool* Result);
	void Navigate();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetTarget(const struct FVector& Location);
	void Start();
	void Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NavigationComponent_C">();
	}
	static class UBP_NavigationComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NavigationComponent_C>();
	}
};
static_assert(alignof(UBP_NavigationComponent_C) == 0x000008, "Wrong alignment on UBP_NavigationComponent_C");
static_assert(sizeof(UBP_NavigationComponent_C) == 0x000118, "Wrong size on UBP_NavigationComponent_C");
static_assert(offsetof(UBP_NavigationComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_NavigationComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, IsLocalPlayer) == 0x0000B0, "Member 'UBP_NavigationComponent_C::IsLocalPlayer' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, Enabled) == 0x0000B1, "Member 'UBP_NavigationComponent_C::Enabled' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, TickTime) == 0x0000B8, "Member 'UBP_NavigationComponent_C::TickTime' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, TickDelta) == 0x0000C0, "Member 'UBP_NavigationComponent_C::TickDelta' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, Target) == 0x0000C8, "Member 'UBP_NavigationComponent_C::Target' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, Offset) == 0x0000E0, "Member 'UBP_NavigationComponent_C::Offset' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, Indicator) == 0x0000F8, "Member 'UBP_NavigationComponent_C::Indicator' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, IndicatorCache) == 0x000100, "Member 'UBP_NavigationComponent_C::IndicatorCache' has a wrong offset!");
static_assert(offsetof(UBP_NavigationComponent_C, NewCacheCount) == 0x000110, "Member 'UBP_NavigationComponent_C::NewCacheCount' has a wrong offset!");

}


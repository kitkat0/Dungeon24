#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_LyraGameMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_LyraGameMode.B_LyraGameMode_C
// 0x0030 (0x03E8 - 0x03B8)
class AB_LyraGameMode_C : public ALyraGameMode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 StartGamePhase;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        WarmUpDuration;                                    // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IntermissionDuration;                              // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SingleMatchDuration;                               // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_LyraGameMode(int32 EntryPoint);
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	void OnMessageReceived_10FCC0BF4F5D0C5CA96B87AC944B416E(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_498BF20E4A53CBF6E2ECE48522E98E84(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnReady_77628FB54EFC0F1E298D21806990A1C0();
	void ReceiveBeginPlay();
	void SpawnMonster(class UClass* Actor, const struct FTransform& Transform, class ABP_ActorSpawnPoint_C* ActorSpawnPoint, int32 TeamId, bool Dormant, class AAIController** Controller);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_LyraGameMode_C">();
	}
	static class AB_LyraGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_LyraGameMode_C>();
	}
};
static_assert(alignof(AB_LyraGameMode_C) == 0x000008, "Wrong alignment on AB_LyraGameMode_C");
static_assert(sizeof(AB_LyraGameMode_C) == 0x0003E8, "Wrong size on AB_LyraGameMode_C");
static_assert(offsetof(AB_LyraGameMode_C, UberGraphFrame) == 0x0003B8, "Member 'AB_LyraGameMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_LyraGameMode_C, DefaultSceneRoot) == 0x0003C0, "Member 'AB_LyraGameMode_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_LyraGameMode_C, StartGamePhase) == 0x0003C8, "Member 'AB_LyraGameMode_C::StartGamePhase' has a wrong offset!");
static_assert(offsetof(AB_LyraGameMode_C, WarmUpDuration) == 0x0003D0, "Member 'AB_LyraGameMode_C::WarmUpDuration' has a wrong offset!");
static_assert(offsetof(AB_LyraGameMode_C, IntermissionDuration) == 0x0003D8, "Member 'AB_LyraGameMode_C::IntermissionDuration' has a wrong offset!");
static_assert(offsetof(AB_LyraGameMode_C, SingleMatchDuration) == 0x0003E0, "Member 'AB_LyraGameMode_C::SingleMatchDuration' has a wrong offset!");

}

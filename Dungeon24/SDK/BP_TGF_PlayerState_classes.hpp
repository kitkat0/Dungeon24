#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TGF_PlayerState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TGF_PlayerState.BP_TGF_PlayerState_C
// 0x0048 (0x0A78 - 0x0A30)
class ABP_TGF_PlayerState_C final : public ALyraPlayerState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0A38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AB_MarkPoint_Base_C*                    CachedMarkPoint;                                   // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MarkPointLocation;                                 // 0x0A48(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MarkPointIsDangerType;                             // 0x0A60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A61[0x7];                                      // 0x0A61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           MarkPointTimerHandle;                              // 0x0A68(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         MarkPointMaxExistTime;                             // 0x0A70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TGF_PlayerState(int32 EntryPoint);
	void MulticastMarkPoint(const struct FVector& Location, bool IsDangerType);
	void OnMarkPointTimeOut();
	void SpawnMarkPointLocal(const struct FVector& Location, bool IsDangerType);
	void TrySpawnOrUpdateMarkPoint(const struct FVector& Location, bool IsDangerType);
	void UpdateMarkPointToServer(const struct FVector& Location, bool IsDangerType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TGF_PlayerState_C">();
	}
	static class ABP_TGF_PlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TGF_PlayerState_C>();
	}
};
static_assert(alignof(ABP_TGF_PlayerState_C) == 0x000008, "Wrong alignment on ABP_TGF_PlayerState_C");
static_assert(sizeof(ABP_TGF_PlayerState_C) == 0x000A78, "Wrong size on ABP_TGF_PlayerState_C");
static_assert(offsetof(ABP_TGF_PlayerState_C, UberGraphFrame) == 0x000A30, "Member 'ABP_TGF_PlayerState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TGF_PlayerState_C, DefaultSceneRoot) == 0x000A38, "Member 'ABP_TGF_PlayerState_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TGF_PlayerState_C, CachedMarkPoint) == 0x000A40, "Member 'ABP_TGF_PlayerState_C::CachedMarkPoint' has a wrong offset!");
static_assert(offsetof(ABP_TGF_PlayerState_C, MarkPointLocation) == 0x000A48, "Member 'ABP_TGF_PlayerState_C::MarkPointLocation' has a wrong offset!");
static_assert(offsetof(ABP_TGF_PlayerState_C, MarkPointIsDangerType) == 0x000A60, "Member 'ABP_TGF_PlayerState_C::MarkPointIsDangerType' has a wrong offset!");
static_assert(offsetof(ABP_TGF_PlayerState_C, MarkPointTimerHandle) == 0x000A68, "Member 'ABP_TGF_PlayerState_C::MarkPointTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_TGF_PlayerState_C, MarkPointMaxExistTime) == 0x000A70, "Member 'ABP_TGF_PlayerState_C::MarkPointMaxExistTime' has a wrong offset!");

}

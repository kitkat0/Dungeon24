#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TGF_Soul

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TGF_Soul.B_TGF_Soul_C
// 0x00D8 (0x0370 - 0x0298)
class AB_TGF_Soul_C final : public ATgfModularActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak;                                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_Classes_DeathKnight_Skill3_Cast;                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           VisibleTag;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ChaseVelocity;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxExistTime;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SearchRadius;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SearchInv;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitCheckDistance;                                  // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxZDelta;                                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         HitFx;                                             // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 AddSoulGE;                                         // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SoulHealGE;                                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         SoulHarvestTime;                                   // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurSelfLocation;                                   // 0x0318(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurClosestDistance;                                // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurClosestTarget;                                  // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CurCheckTarget;                                    // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 RealTarget;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoveToTarget;                                    // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SearchTimer;                                       // 0x0358(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           MaxExistTimer;                                     // 0x0360(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          EffectAppliedServer;                               // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleToLocalPlayer;                              // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyEffect();
	void DoExceedMaxTime();
	void DoSearch();
	void ExecuteUbergraph_B_TGF_Soul(int32 EntryPoint);
	void MoveToTarget(class AActor* TargetActor);
	void PlayHitFx();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RefreshVelocity();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TGF_Soul_C">();
	}
	static class AB_TGF_Soul_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_TGF_Soul_C>();
	}
};
static_assert(alignof(AB_TGF_Soul_C) == 0x000008, "Wrong alignment on AB_TGF_Soul_C");
static_assert(sizeof(AB_TGF_Soul_C) == 0x000370, "Wrong size on AB_TGF_Soul_C");
static_assert(offsetof(AB_TGF_Soul_C, UberGraphFrame) == 0x000298, "Member 'AB_TGF_Soul_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, Ak) == 0x0002A0, "Member 'AB_TGF_Soul_C::Ak' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, FX_Classes_DeathKnight_Skill3_Cast) == 0x0002A8, "Member 'AB_TGF_Soul_C::FX_Classes_DeathKnight_Skill3_Cast' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, ProjectileMovement) == 0x0002B0, "Member 'AB_TGF_Soul_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, DefaultSceneRoot) == 0x0002B8, "Member 'AB_TGF_Soul_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, VisibleTag) == 0x0002C0, "Member 'AB_TGF_Soul_C::VisibleTag' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, ChaseVelocity) == 0x0002C8, "Member 'AB_TGF_Soul_C::ChaseVelocity' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, MaxExistTime) == 0x0002D0, "Member 'AB_TGF_Soul_C::MaxExistTime' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, SearchRadius) == 0x0002D8, "Member 'AB_TGF_Soul_C::SearchRadius' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, SearchInv) == 0x0002E0, "Member 'AB_TGF_Soul_C::SearchInv' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, HitCheckDistance) == 0x0002E8, "Member 'AB_TGF_Soul_C::HitCheckDistance' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, MaxZDelta) == 0x0002F0, "Member 'AB_TGF_Soul_C::MaxZDelta' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, HitFx) == 0x0002F8, "Member 'AB_TGF_Soul_C::HitFx' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, AddSoulGE) == 0x000300, "Member 'AB_TGF_Soul_C::AddSoulGE' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, SoulHealGE) == 0x000308, "Member 'AB_TGF_Soul_C::SoulHealGE' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, SoulHarvestTime) == 0x000310, "Member 'AB_TGF_Soul_C::SoulHarvestTime' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, CurSelfLocation) == 0x000318, "Member 'AB_TGF_Soul_C::CurSelfLocation' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, CurClosestDistance) == 0x000330, "Member 'AB_TGF_Soul_C::CurClosestDistance' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, CurClosestTarget) == 0x000338, "Member 'AB_TGF_Soul_C::CurClosestTarget' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, CurCheckTarget) == 0x000340, "Member 'AB_TGF_Soul_C::CurCheckTarget' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, RealTarget) == 0x000348, "Member 'AB_TGF_Soul_C::RealTarget' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, IsMoveToTarget) == 0x000350, "Member 'AB_TGF_Soul_C::IsMoveToTarget' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, SearchTimer) == 0x000358, "Member 'AB_TGF_Soul_C::SearchTimer' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, MaxExistTimer) == 0x000360, "Member 'AB_TGF_Soul_C::MaxExistTimer' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, EffectAppliedServer) == 0x000368, "Member 'AB_TGF_Soul_C::EffectAppliedServer' has a wrong offset!");
static_assert(offsetof(AB_TGF_Soul_C, VisibleToLocalPlayer) == 0x000369, "Member 'AB_TGF_Soul_C::VisibleToLocalPlayer' has a wrong offset!");

}


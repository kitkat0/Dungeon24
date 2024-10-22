#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Arrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Arrow.BP_Arrow_C
// 0x0068 (0x0300 - 0x0298)
class ABP_Arrow_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak;                                                // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxCollision;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ArrowMesh;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           ProjectileMovement;                                // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DamageGE;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bAttachToHitActor;                                 // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C9[0x3];                                      // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AttachTime;                                        // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          WooshSound;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          FlybySound;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 HitEnvironmentGE;                                  // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           NewVar;                                            // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BeginFlyby();
	bool CheckHitInteractEnvironment(const struct FHitResult& Result);
	void EndFlyby();
	void ExecuteUbergraph_BP_Arrow(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void SetArrowSpeed(double Speed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Arrow_C">();
	}
	static class ABP_Arrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Arrow_C>();
	}
};
static_assert(alignof(ABP_Arrow_C) == 0x000008, "Wrong alignment on ABP_Arrow_C");
static_assert(sizeof(ABP_Arrow_C) == 0x000300, "Wrong size on ABP_Arrow_C");
static_assert(offsetof(ABP_Arrow_C, UberGraphFrame) == 0x000298, "Member 'ABP_Arrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, Ak) == 0x0002A0, "Member 'ABP_Arrow_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, BoxCollision) == 0x0002A8, "Member 'ABP_Arrow_C::BoxCollision' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, ArrowMesh) == 0x0002B0, "Member 'ABP_Arrow_C::ArrowMesh' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, ProjectileMovement) == 0x0002B8, "Member 'ABP_Arrow_C::ProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, DamageGE) == 0x0002C0, "Member 'ABP_Arrow_C::DamageGE' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, bAttachToHitActor) == 0x0002C8, "Member 'ABP_Arrow_C::bAttachToHitActor' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, AttachTime) == 0x0002CC, "Member 'ABP_Arrow_C::AttachTime' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, WooshSound) == 0x0002D0, "Member 'ABP_Arrow_C::WooshSound' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, FlybySound) == 0x0002D8, "Member 'ABP_Arrow_C::FlybySound' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, HitEnvironmentGE) == 0x0002E0, "Member 'ABP_Arrow_C::HitEnvironmentGE' has a wrong offset!");
static_assert(offsetof(ABP_Arrow_C, NewVar) == 0x0002E8, "Member 'ABP_Arrow_C::NewVar' has a wrong offset!");

}


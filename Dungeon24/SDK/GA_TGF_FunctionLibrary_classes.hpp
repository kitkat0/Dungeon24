#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_FunctionLibrary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_FunctionLibrary.GA_TGF_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UGA_TGF_FunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void CalculateOffsetAccordingToActor(double Forward, double Up, double Right, const struct FVector& BaseLocation, const struct FRotator& BaseRot, class UObject* __WorldContext, struct FVector* Result);
	static void CanBeTarget(class AActor* InputActor, class UObject* __WorldContext, bool* Result);
	static void CheckAbilityAdditionalCostValid(TArray<ETgfEquipSlot>& CanUseAdditionalList, bool IgnoreCheck, class ALyraCharacter* InActor, TArray<ETgfEquipSlot>& AllAdditionalList, class UObject* __WorldContext, class UTgfEquipmentManagerComponent** EquipmentComponent, bool* CostValid);
	static void CheckCharacterStateValid(class ALyraCharacter* InputActor, const struct FGameplayTagContainer& MustHaveTags, const struct FGameplayTagContainer& MustNotHaveTags, bool DontCareCharacterState, class UObject* __WorldContext, struct FGameplayTagContainer* RelevantTags, bool* Result);
	static void CheckCrouch(class ALyraCharacter* InputActor, class UObject* __WorldContext);
	static void Get_Adjust_Collision_Spawn_Pos(const struct FVector& OriginalPos, class ALyraCharacter* Instigator, double AdjustDelta, class UObject* __WorldContext, struct FVector* AdjustPos);
	static void Get_Spawn_Projectile_Rot(const struct FVector& SpawnPos, double LookDistance, class AActor* Instigator, double MinDistance, bool ShouldIgnoreWeapon, class UObject* __WorldContext, struct FRotator* Rotation);
	static void GetChargeSkillMethodFromComponent(class ALyraPlayerController* InputController, class UObject* __WorldContext, bool* Result);
	static void GetExplodeHitActors(class UGameplayAbility* GameplayAbility, bool bCheckExplodeBlock, const struct FVector& ExplodeCenter, double ExplodeRadius, TArray<EObjectTypeQuery>& TraceType, ETraceTypeQuery TraceBlockChannel, class UObject* __WorldContext, TArray<class AActor*>* Targets);
	static void GetMouseTargetingMethodFromComponent(class ALyraPlayerController* InputController, class UObject* __WorldContext, bool* Result);
	static void IsActorInWaitingRoom(class AActor* InputActor, class UObject* __WorldContext, bool* Result);
	static void IsHitInteractorBattle(class AActor* CheckActor, class UObject* __WorldContext, bool* Result);
	static void IsHitInteractorEnvironment(const struct FHitResult& HitResult, class AActor* HitActor, class UObject* __WorldContext, bool* Result);
	static void IsHomelandMatchType(class AActor* InputActor, class UObject* __WorldContext, bool* Result);
	static void IsInADS(class ALyraCharacter* InActor, class UObject* __WorldContext, bool* Result);
	static void IsPlayersSummon(class AActor* InputActor, class UObject* __WorldContext, bool* Result);
	static void IsReboundEnvironment(const struct FHitResult& HitResult, class AActor* HitActor, class UObject* __WorldContext, bool* Result);
	static void MonsterAddThreat(class AActor* Monster, class AActor* ThreatTarget, double Threat, class UObject* __WorldContext);
	static void MonsterGetCurrentTarget(class ALyraCharacter* InputActor, class UObject* __WorldContext, class AActor** ResultActor);
	static void PrintDSMeshTick(class ALyraCharacter* InputActor, class UObject* __WorldContext);
	static void RemoveEquipBySlotWithCheck(class UTgfEquipmentManagerComponent* EquipComponent, ETgfEquipSlot Slot, class UObject* __WorldContext);
	static void ResetAllAbilityInput(class ALyraPlayerController* LyraCtrl, class UObject* __WorldContext);
	static void SearchTarget(class ALyraCharacter* SrcActor, double WithInAngle, double SearchRadius, const struct FVector& BoxHalfSize, class UObject* __WorldContext, TArray<class AActor*>* ResultActors);
	static void VerifyServerSpanwProjectilePos(const struct FVector& CurViewPos, double MaxVerticalOffset, double MaxHorizontalOffset, class ALyraCharacter* Target, class UObject* __WorldContext, bool* bValid);

	void GetRandomGEWithHandler(TArray<class AActor*>& Targets, const struct FGameplayTag& BuffTag, const struct FGameplayTagContainer& HighPriorityTags, int32 Num, class UObject* __WorldContext, bool* bSucceed, TArray<struct FTgfGameplayEffectHandleData>* Res);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_FunctionLibrary_C">();
	}
	static class UGA_TGF_FunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_FunctionLibrary_C>();
	}
};
static_assert(alignof(UGA_TGF_FunctionLibrary_C) == 0x000008, "Wrong alignment on UGA_TGF_FunctionLibrary_C");
static_assert(sizeof(UGA_TGF_FunctionLibrary_C) == 0x000028, "Wrong size on UGA_TGF_FunctionLibrary_C");

}


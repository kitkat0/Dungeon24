#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapInteractionComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "LyraGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapInteractionComponent.BP_MapInteractionComponent_C
// 0x0178 (0x0220 - 0x00A8)
class UBP_MapInteractionComponent_C final : public UControllerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnSetInteractable;                                 // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClearInteractable;                               // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAbilitySystemComponent*                CachedAbilitySystemComponent;                      // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_InteractableBase_C*                 Interactable_Candidate;                            // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         TraceMaxDistance;                                  // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_InteractableBase_C*                 ActiveInteractTarget;                              // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ActiveInteractStartTime;                           // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ActiveInteractEndTime;                             // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBeginInteract;                                   // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndInteract;                                     // 0x0110(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsLocalPlayer;                                    // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BaseInteractTime;                                  // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInteracting;                                      // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraInventoryManagerComponent*         Loot_Inventory_Manager;                            // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULyraEquipmentManagerComponent*         Loot_Equipment_Manager;                            // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         FinalInteractTime;                                 // 0x0148(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DropDistance;                                      // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipQuality                              MaxQuality;                                        // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraCharacter*                         CharacterToInspect;                                // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<ETgfItemType>                          Item_Types_to_Discard_Beam;                        // 0x0168(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnRebirth;                                         // 0x0178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          TargetLockEnable;                                  // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TargetLockDirectionAngle;                          // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLockDirection;                               // 0x0198(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetLockRayAngleHorizontal;                      // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetLockRayAngleVertical;                        // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLockRay;                                     // 0x01C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         SelfActors;                                        // 0x01D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         SpawnCount;                                        // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         ObjectId;                                          // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  BlockInteractionTags;                              // 0x01F8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           UpdateBeamTimer;                                   // 0x0218(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddMapHint(class APawn* InteractPawn, class UObject* InteractObject, const struct FVector& ObjectLocation);
	void BeginInteract();
	bool CheckInteractionDistanceOnClient(class ABP_InteractableBase_C* InteractableCandidate, class APawn* InteractingPawn);
	bool CheckInteractionDistanceOnServer(class ABP_InteractableBase_C* InteractableCandidate, class APawn* InteractingPawn);
	void CheckTargetLock(bool* Result);
	void ChooseTraceResult(TArray<struct FHitResult>& Hits, struct FHitResult* Hit);
	void ClearCandidate();
	void ClearCandidateFromServer();
	void ClearLootCache();
	void DisableInteractionOnServer();
	void EnableInteractionOnServer();
	void EndInteract(bool Broken);
	void EndInteractOnServer(bool Broken);
	void ExecuteUbergraph_BP_MapInteractionComponent(int32 EntryPoint);
	void GetHitInteractable(struct FHitResult& Hit, class ABP_InteractableBase_C** Interactable);
	void GetHitInteractableObject(TArray<struct FHitResult>& Hits, class ABP_InteractableBase_C** Interactable_Object);
	void GetInteractableLocation(class ABP_InteractableBase_C* Interactable, struct FVector* Result);
	void GetViewRay(struct FVector* Start, struct FVector* End);
	void HasTeleportScroll(class APawn* Pawn, bool* HasScroll);
	void InteractExtractDevice(bool Begin, class ABP_ExtractDevice_C* Device);
	void OnBeginInteract__DelegateSignature(class ABP_InteractableBase_C* Interactable_Actor, double StartTime, double EndTime);
	void OnClearInteractable__DelegateSignature();
	void OnEndInteract__DelegateSignature();
	void OnRebirth__DelegateSignature();
	void OnSetInteractable__DelegateSignature(class ABP_InteractableBase_C* Interactable_Actor);
	void OpenInventoryInspector(class ALyraCharacter* Character);
	void OpenLootMenu(class ULyraInventoryManagerComponent* Inventory_Manager, class ULyraEquipmentManagerComponent* Equipment_Manager);
	void PromptTeleportScrollComsuption();
	void RebirthOnClient();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RemoveMapHint(class UObject* InteractObject);
	void Spawn_Collectable_from_Dropped_Item_Server(class ULyraInventoryItemInstance* Item, bool NeedDuplicate, int32 SpawnNumber, double DisperseRange, double ForwardDistance, TArray<class ABP_CollectableBase_C*>* SpawnedActors);
	void SpawnCollectableAndLaunch(class ULyraInventoryItemInstance* Item, const struct FVector& BornPos, const struct FRotator& BornRot, const struct FRotator& LaunchRot, double Force, double RotForce, bool EnableLight);
	void SpawnCollectableFromDroppedItem(class ULyraInventoryItemInstance* ItemInstance, double ForwardDistance, double DisperseRange, class UBP_ItemFunctionLibrary_C* ItemFuncComponent);
	class ABP_CollectableBase_C* SpawnOneCollectableObject(class ULyraInventoryItemInstance* ItemInstance, class UClass* ItemDefinition, bool NeedDuplicate, class AController* PlayerController, int32 Stack, double DisperseRange, double ForwardDistance);
	void UpdateBeam();
	void UpdateCandidate(class ABP_InteractableBase_C* InteractableCandidate, class APawn* InteractingPawn);
	void UpdateCandidateOnServer(class ABP_InteractableBase_C* InteractableCandidate, class APawn* InteractingPawn);
	void UpdateLootBeamOnServer(class ULyraInventoryManagerComponent* InventoryManager, class ULyraEquipmentManagerComponent* EquipmentManager);
	void UpdateTargetLock();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapInteractionComponent_C">();
	}
	static class UBP_MapInteractionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapInteractionComponent_C>();
	}
};
static_assert(alignof(UBP_MapInteractionComponent_C) == 0x000008, "Wrong alignment on UBP_MapInteractionComponent_C");
static_assert(sizeof(UBP_MapInteractionComponent_C) == 0x000220, "Wrong size on UBP_MapInteractionComponent_C");
static_assert(offsetof(UBP_MapInteractionComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_MapInteractionComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, OnSetInteractable) == 0x0000B0, "Member 'UBP_MapInteractionComponent_C::OnSetInteractable' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, OnClearInteractable) == 0x0000C0, "Member 'UBP_MapInteractionComponent_C::OnClearInteractable' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, CachedAbilitySystemComponent) == 0x0000D0, "Member 'UBP_MapInteractionComponent_C::CachedAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, Interactable_Candidate) == 0x0000D8, "Member 'UBP_MapInteractionComponent_C::Interactable_Candidate' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, TraceMaxDistance) == 0x0000E0, "Member 'UBP_MapInteractionComponent_C::TraceMaxDistance' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, ActiveInteractTarget) == 0x0000E8, "Member 'UBP_MapInteractionComponent_C::ActiveInteractTarget' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, ActiveInteractStartTime) == 0x0000F0, "Member 'UBP_MapInteractionComponent_C::ActiveInteractStartTime' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, ActiveInteractEndTime) == 0x0000F8, "Member 'UBP_MapInteractionComponent_C::ActiveInteractEndTime' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, OnBeginInteract) == 0x000100, "Member 'UBP_MapInteractionComponent_C::OnBeginInteract' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, OnEndInteract) == 0x000110, "Member 'UBP_MapInteractionComponent_C::OnEndInteract' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, bIsLocalPlayer) == 0x000120, "Member 'UBP_MapInteractionComponent_C::bIsLocalPlayer' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, BaseInteractTime) == 0x000128, "Member 'UBP_MapInteractionComponent_C::BaseInteractTime' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, bInteracting) == 0x000130, "Member 'UBP_MapInteractionComponent_C::bInteracting' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, Loot_Inventory_Manager) == 0x000138, "Member 'UBP_MapInteractionComponent_C::Loot_Inventory_Manager' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, Loot_Equipment_Manager) == 0x000140, "Member 'UBP_MapInteractionComponent_C::Loot_Equipment_Manager' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, FinalInteractTime) == 0x000148, "Member 'UBP_MapInteractionComponent_C::FinalInteractTime' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, DropDistance) == 0x000150, "Member 'UBP_MapInteractionComponent_C::DropDistance' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, MaxQuality) == 0x000158, "Member 'UBP_MapInteractionComponent_C::MaxQuality' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, CharacterToInspect) == 0x000160, "Member 'UBP_MapInteractionComponent_C::CharacterToInspect' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, Item_Types_to_Discard_Beam) == 0x000168, "Member 'UBP_MapInteractionComponent_C::Item_Types_to_Discard_Beam' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, OnRebirth) == 0x000178, "Member 'UBP_MapInteractionComponent_C::OnRebirth' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, TargetLockEnable) == 0x000188, "Member 'UBP_MapInteractionComponent_C::TargetLockEnable' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, TargetLockDirectionAngle) == 0x000190, "Member 'UBP_MapInteractionComponent_C::TargetLockDirectionAngle' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, TargetLockDirection) == 0x000198, "Member 'UBP_MapInteractionComponent_C::TargetLockDirection' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, TargetLockRayAngleHorizontal) == 0x0001B0, "Member 'UBP_MapInteractionComponent_C::TargetLockRayAngleHorizontal' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, TargetLockRayAngleVertical) == 0x0001B8, "Member 'UBP_MapInteractionComponent_C::TargetLockRayAngleVertical' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, TargetLockRay) == 0x0001C0, "Member 'UBP_MapInteractionComponent_C::TargetLockRay' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, SelfActors) == 0x0001D8, "Member 'UBP_MapInteractionComponent_C::SelfActors' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, SpawnCount) == 0x0001E8, "Member 'UBP_MapInteractionComponent_C::SpawnCount' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, ObjectId) == 0x0001F0, "Member 'UBP_MapInteractionComponent_C::ObjectId' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, BlockInteractionTags) == 0x0001F8, "Member 'UBP_MapInteractionComponent_C::BlockInteractionTags' has a wrong offset!");
static_assert(offsetof(UBP_MapInteractionComponent_C, UpdateBeamTimer) == 0x000218, "Member 'UBP_MapInteractionComponent_C::UpdateBeamTimer' has a wrong offset!");

}

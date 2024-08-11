#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractableBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractableBase.BP_InteractableBase_C
// 0x0088 (0x0350 - 0x02C8)
class ABP_InteractableBase_C : public ATgfStaticInteraction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTgfActorCustomDepthStencilManagerComponent* TgfActorCustomDepthStencilManager;                 // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ObjectNode;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TraceBox;                                          // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        BaseInteractTime;                                  // 0x02E8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  GameplayTags;                                      // 0x02F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsStared;                                         // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnabled;                                        // 0x0311(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIgnoreInteract;                                   // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPerformingInteraction;                            // 0x0313(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PerformingInteractionDuration;                     // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlyOnce;                                         // 0x0318(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BaseInteractDistance;                              // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ServerCheckDistanceXY;                             // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ServerCheckDistanceZ;                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class ABP_ActorSpawnPoint_C>> MonstersToWake;                                    // 0x0338(0x0010)(Edit, BlueprintVisible)
	struct FGameplayTag                           InteractionEventTag;                               // 0x0348(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CanPlayerInteract(class ALyraCharacter* Player, bool* bCanInteract);
	void DealInteractStatList(class AActor* Actor);
	void DisableDummyPlane();
	void ExecuteUbergraph_BP_InteractableBase(int32 EntryPoint);
	void Get_Item_Id(int32* ItemId);
	void Get_Server_Check_Distance(double* Param_ServerCheckDistanceXY, double* Param_ServerCheckDistanceZ);
	void GetBaseInteractDistance(double* Param_BaseInteractDistance);
	void GetEnabled(bool* Result);
	void GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2);
	void GetTraceActor(class AActor** Actor);
	void IsPerformingInteraction(bool* Param_bPerformingInteraction);
	void On_Remove_Interactable();
	void On_Set_Interactable(class APawn* Interacting_Pawn);
	void PerformInteraction_on_Server(class APawn* InteractingPawn);
	void PerformInteractionBrokenOnServer(class APawn* InteractingPawn);
	void ReadyToPerformNextInteraction();
	void ReceiveBeginPlay();
	void SetEnabled(bool Enabled);
	void SetHighlighting(class AActor* Actor, bool Highlighting);
	void SetHighlightingRecursively(class AActor* Actor, bool Highlighting);
	void SetMeshStared(class UMeshComponent* Mesh, bool Stared);
	void Turn_Off_Collision();
	void UserConstructionScript();
	void WakeUpMonsters(class AActor* Param_Instigator);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractableBase_C">();
	}
	static class ABP_InteractableBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractableBase_C>();
	}
};
static_assert(alignof(ABP_InteractableBase_C) == 0x000008, "Wrong alignment on ABP_InteractableBase_C");
static_assert(sizeof(ABP_InteractableBase_C) == 0x000350, "Wrong size on ABP_InteractableBase_C");
static_assert(offsetof(ABP_InteractableBase_C, UberGraphFrame) == 0x0002C8, "Member 'ABP_InteractableBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, TgfActorCustomDepthStencilManager) == 0x0002D0, "Member 'ABP_InteractableBase_C::TgfActorCustomDepthStencilManager' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, ObjectNode) == 0x0002D8, "Member 'ABP_InteractableBase_C::ObjectNode' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, TraceBox) == 0x0002E0, "Member 'ABP_InteractableBase_C::TraceBox' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, BaseInteractTime) == 0x0002E8, "Member 'ABP_InteractableBase_C::BaseInteractTime' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, GameplayTags) == 0x0002F0, "Member 'ABP_InteractableBase_C::GameplayTags' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, bIsStared) == 0x000310, "Member 'ABP_InteractableBase_C::bIsStared' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, bIsEnabled) == 0x000311, "Member 'ABP_InteractableBase_C::bIsEnabled' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, bIgnoreInteract) == 0x000312, "Member 'ABP_InteractableBase_C::bIgnoreInteract' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, bPerformingInteraction) == 0x000313, "Member 'ABP_InteractableBase_C::bPerformingInteraction' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, PerformingInteractionDuration) == 0x000314, "Member 'ABP_InteractableBase_C::PerformingInteractionDuration' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, bOnlyOnce) == 0x000318, "Member 'ABP_InteractableBase_C::bOnlyOnce' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, BaseInteractDistance) == 0x000320, "Member 'ABP_InteractableBase_C::BaseInteractDistance' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, ServerCheckDistanceXY) == 0x000328, "Member 'ABP_InteractableBase_C::ServerCheckDistanceXY' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, ServerCheckDistanceZ) == 0x000330, "Member 'ABP_InteractableBase_C::ServerCheckDistanceZ' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, MonstersToWake) == 0x000338, "Member 'ABP_InteractableBase_C::MonstersToWake' has a wrong offset!");
static_assert(offsetof(ABP_InteractableBase_C, InteractionEventTag) == 0x000348, "Member 'ABP_InteractableBase_C::InteractionEventTag' has a wrong offset!");

}

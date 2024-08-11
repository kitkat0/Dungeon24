#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AltarBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_InteractableBase_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "LyraGame_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AltarBase.BP_AltarBase_C
// 0x00B8 (0x0408 - 0x0350)
class ABP_AltarBase_C : public ABP_InteractableBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AltarBase_C;                     // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak;                                                // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      VFX_Once;                                          // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      VFX;                                               // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Altar;                                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<TSubclassOf<class UGameplayEffect>>    Buff;                                              // 0x0378(0x0010)(Edit, BlueprintVisible)
	bool                                          bAffectSelf;                                       // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAffectMyTeam;                                     // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAffectOtherTeams;                                 // 0x038A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38B[0x5];                                      // 0x038B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  Player;                                            // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 ItemList;                                          // 0x0398(0x0010)(Edit, BlueprintVisible)
	float                                         CoolDown_Time;                                     // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC[0x4];                                      // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ItemLocation;                                      // 0x03B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSimulatePhysics;                                  // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCooling;                                          // 0x03C9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA[0x6];                                      // 0x03CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AudioLoop;                                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AudioInteracted;                                   // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         AudioLoopPlayingId;                                // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActivationDeferral;                                // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ActivationPhaseTag;                                // 0x03E8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class FText                                   PromptText;                                        // 0x03F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AfterPerformingInteraction();
	void ExecuteUbergraph_BP_AltarBase(int32 EntryPoint);
	void GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2);
	void OnFinishCooling();
	void OnRep_bCooling();
	void OnStartCooling();
	void PerformInteraction_on_Server(class APawn* InteractingPawn);
	void ReadyToPerformNextInteraction();
	void ReceiveBeginPlay();
	void ResetAltar(const struct FGameplayTag& PhaseTag);
	void SetEnabled(bool Enabled);
	void SpawnCollectable(const struct FTransform& SpawnTransform, class AActor* Param_Owner, int32 ItemId, class ABP_CollectableBase_C** SpawnedItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AltarBase_C">();
	}
	static class ABP_AltarBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AltarBase_C>();
	}
};
static_assert(alignof(ABP_AltarBase_C) == 0x000008, "Wrong alignment on ABP_AltarBase_C");
static_assert(sizeof(ABP_AltarBase_C) == 0x000408, "Wrong size on ABP_AltarBase_C");
static_assert(offsetof(ABP_AltarBase_C, UberGraphFrame_BP_AltarBase_C) == 0x000350, "Member 'ABP_AltarBase_C::UberGraphFrame_BP_AltarBase_C' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, Ak) == 0x000358, "Member 'ABP_AltarBase_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, VFX_Once) == 0x000360, "Member 'ABP_AltarBase_C::VFX_Once' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, VFX) == 0x000368, "Member 'ABP_AltarBase_C::VFX' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, Altar) == 0x000370, "Member 'ABP_AltarBase_C::Altar' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, Buff) == 0x000378, "Member 'ABP_AltarBase_C::Buff' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, bAffectSelf) == 0x000388, "Member 'ABP_AltarBase_C::bAffectSelf' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, bAffectMyTeam) == 0x000389, "Member 'ABP_AltarBase_C::bAffectMyTeam' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, bAffectOtherTeams) == 0x00038A, "Member 'ABP_AltarBase_C::bAffectOtherTeams' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, Player) == 0x000390, "Member 'ABP_AltarBase_C::Player' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, ItemList) == 0x000398, "Member 'ABP_AltarBase_C::ItemList' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, CoolDown_Time) == 0x0003A8, "Member 'ABP_AltarBase_C::CoolDown_Time' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, ItemLocation) == 0x0003B0, "Member 'ABP_AltarBase_C::ItemLocation' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, bSimulatePhysics) == 0x0003C8, "Member 'ABP_AltarBase_C::bSimulatePhysics' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, bCooling) == 0x0003C9, "Member 'ABP_AltarBase_C::bCooling' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, AudioLoop) == 0x0003D0, "Member 'ABP_AltarBase_C::AudioLoop' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, AudioInteracted) == 0x0003D8, "Member 'ABP_AltarBase_C::AudioInteracted' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, AudioLoopPlayingId) == 0x0003E0, "Member 'ABP_AltarBase_C::AudioLoopPlayingId' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, ActivationDeferral) == 0x0003E4, "Member 'ABP_AltarBase_C::ActivationDeferral' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, ActivationPhaseTag) == 0x0003E8, "Member 'ABP_AltarBase_C::ActivationPhaseTag' has a wrong offset!");
static_assert(offsetof(ABP_AltarBase_C, PromptText) == 0x0003F0, "Member 'ABP_AltarBase_C::PromptText' has a wrong offset!");

}


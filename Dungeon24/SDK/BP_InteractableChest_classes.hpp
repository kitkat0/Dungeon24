#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractableChest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "LyraGame_structs.hpp"
#include "BP_InteractableBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractableChest.BP_InteractableChest_C
// 0x00B0 (0x0400 - 0x0350)
class ABP_InteractableChest_C final : public ABP_InteractableBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_InteractableChest_C;             // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_LootOptionComponent_C*              LootOptionComponent;                               // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Beam;                                              // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Chest;                                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lid;                                               // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavModifierComponent*                  NavModifier;                                       // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lock;                                              // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OpenChestTimeline_Rotation_141E148F4D861C9AD00166A2B2565BB3; // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            OpenChestTimeline__Direction_141E148F4D861C9AD00166A2B2565BB3; // 0x0394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     OpenChestTimeline;                                 // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bOpened;                                           // 0x03A0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OpenAngle;                                         // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLootPoolItem>                  Loot;                                              // 0x03B0(0x0010)(Edit, BlueprintVisible)
	ETgfEquipQuality                              MaxQuality;                                        // 0x03C0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SecondOpenBaseTime;                                // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ETgfItemType>                          ItemTypesToDiscardBeam;                            // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bLocked;                                           // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        NormalOpenTime;                                    // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RefreshInterval;                                   // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Looted;                                            // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipQuality                              TempMaxQuality;                                    // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddBeam();
	void ExecuteUbergraph_BP_InteractableChest(int32 EntryPoint);
	void GenerateLoot(class AActor* InteractingActor, double* TimeRemainder);
	void GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2);
	void GiveBonusToPlayer(class APawn* Player);
	void LockChest();
	void On_Death();
	void OnOpenFailed(class APawn* InteractingPawn);
	void OnReady_9598EB81436B5D1269AB1C99A64EF8BC();
	void OnRep_bOpened();
	void OnRep_MaxQuality();
	void OpenChest();
	void OpenChestTimeline__FinishedFunc();
	void OpenChestTimeline__UpdateFunc();
	void PerformInteraction_on_Server(class APawn* InteractingPawn);
	void PerformInteractionBrokenOnServer(class APawn* InteractingPawn);
	void ReceiveBeginPlay();
	void UnlockChest();
	void UpdateMaxQuality();

	void SetDiffraction(class AActor* OwnerActor, const class UAkComponent* SpeakerComponent) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractableChest_C">();
	}
	static class ABP_InteractableChest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractableChest_C>();
	}
};
static_assert(alignof(ABP_InteractableChest_C) == 0x000008, "Wrong alignment on ABP_InteractableChest_C");
static_assert(sizeof(ABP_InteractableChest_C) == 0x000400, "Wrong size on ABP_InteractableChest_C");
static_assert(offsetof(ABP_InteractableChest_C, UberGraphFrame_BP_InteractableChest_C) == 0x000350, "Member 'ABP_InteractableChest_C::UberGraphFrame_BP_InteractableChest_C' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, LootOptionComponent) == 0x000358, "Member 'ABP_InteractableChest_C::LootOptionComponent' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, Beam) == 0x000360, "Member 'ABP_InteractableChest_C::Beam' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, Ak) == 0x000368, "Member 'ABP_InteractableChest_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, Chest) == 0x000370, "Member 'ABP_InteractableChest_C::Chest' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, Lid) == 0x000378, "Member 'ABP_InteractableChest_C::Lid' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, NavModifier) == 0x000380, "Member 'ABP_InteractableChest_C::NavModifier' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, Lock) == 0x000388, "Member 'ABP_InteractableChest_C::Lock' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, OpenChestTimeline_Rotation_141E148F4D861C9AD00166A2B2565BB3) == 0x000390, "Member 'ABP_InteractableChest_C::OpenChestTimeline_Rotation_141E148F4D861C9AD00166A2B2565BB3' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, OpenChestTimeline__Direction_141E148F4D861C9AD00166A2B2565BB3) == 0x000394, "Member 'ABP_InteractableChest_C::OpenChestTimeline__Direction_141E148F4D861C9AD00166A2B2565BB3' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, OpenChestTimeline) == 0x000398, "Member 'ABP_InteractableChest_C::OpenChestTimeline' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, bOpened) == 0x0003A0, "Member 'ABP_InteractableChest_C::bOpened' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, OpenAngle) == 0x0003A8, "Member 'ABP_InteractableChest_C::OpenAngle' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, Loot) == 0x0003B0, "Member 'ABP_InteractableChest_C::Loot' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, MaxQuality) == 0x0003C0, "Member 'ABP_InteractableChest_C::MaxQuality' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, SecondOpenBaseTime) == 0x0003C8, "Member 'ABP_InteractableChest_C::SecondOpenBaseTime' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, ItemTypesToDiscardBeam) == 0x0003D0, "Member 'ABP_InteractableChest_C::ItemTypesToDiscardBeam' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, bLocked) == 0x0003E0, "Member 'ABP_InteractableChest_C::bLocked' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, NormalOpenTime) == 0x0003E8, "Member 'ABP_InteractableChest_C::NormalOpenTime' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, RefreshInterval) == 0x0003F0, "Member 'ABP_InteractableChest_C::RefreshInterval' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, Looted) == 0x0003F8, "Member 'ABP_InteractableChest_C::Looted' has a wrong offset!");
static_assert(offsetof(ABP_InteractableChest_C, TempMaxQuality) == 0x0003F9, "Member 'ABP_InteractableChest_C::TempMaxQuality' has a wrong offset!");

}

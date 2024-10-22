#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathZone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_structs.hpp"
#include "LyraGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeathZone.BP_DeathZone_C
// 0x01E8 (0x0530 - 0x0348)
class ABP_DeathZone_C final : public ADeathZone
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDeathZoneDiscRuntimeInstance>  Precomputed_Discs;                                 // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EDeathZoneRuntimeState                        State;                                             // 0x0368(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369[0x3];                                      // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Current_Disc_Index;                                // 0x036C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Prev_Center;                                       // 0x0370(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Prev_Radius;                                       // 0x0388(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Interval;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Duration;                                  // 0x0398(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Next_Center;                                       // 0x03A0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Next_Radius;                                       // 0x03B8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Current_State_Start_Time;                          // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Interval_End_Time;                         // 0x03C8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Round_End_Time;                            // 0x03D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldShrinkLastDisc;                             // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Dynamic_Center;                                    // 0x03E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Dynamic_Radius;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStartShrinking;                                  // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEnterInterval;                                   // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        Current_Pause_End_Time;                            // 0x0420(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnterPause;                                      // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class ABP_Fighter_HeroSample_C*, struct FActiveGameplayEffectHandle> ActiveGameplayEffects;                             // 0x0438(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class ABP_Fighter_HeroSample_C*, double> DeathZoneEnterTimes;                               // 0x0488(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         AliveFighterNumber;                                // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC[0x4];                                      // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UGameplayEffect>            Current_Damage_GE;                                 // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          ForceSpawnRedPortal;                               // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableShrink;                                     // 0x04E9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EA[0x2];                                      // 0x04EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WaitingRoomFighters;                               // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_NavigationComponent_C*              LocalNavigationComponent;                          // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnded;                                            // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnDeathzoneVisuals;                             // 0x04F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA[0x6];                                      // 0x04FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDeathZoneMessage>              DeathZoneMessages;                                 // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentHandlingMessageIndex;                       // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514[0x4];                                      // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ALyraCharacter*>                 CharactersToKill;                                  // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	double                                        AdditinalTimeToKillAll;                            // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Broadcast_SpawnPortal_Message(int32 NumPortals, const struct FGameplayTag& Tag, int32 SpawnedPortalNum);
	void BroadCastDeathZoneMessage(const class FText& Message, double Duration, ETgfPlayerSceneTag TargetPlayerSceneTag);
	void BroadCastGameOverEvent();
	void BroadCastSpawnPortalMessage(int32 BluePortalSpawned, int32 RedPortalSpawned, int32 ShadowPortalSpawned);
	void EndCurrentLevel(bool HasCharacterInWaitingRoom);
	void ExecuteUbergraph_BP_DeathZone(int32 EntryPoint);
	void GetIntervalCountdownTime(double* Time);
	void GetRealShrinkingCountDownTime(double* Time);
	void GetReplicatedServerTimeSeconds(double* Time);
	void GetShrinkingCountdownTime(double* Time);
	void HandleDeathZoneMessage();
	void Has_Next_Floor_and_Travel_Map(bool* HasNextFloor);
	void KillCharacterAtLast(class ALyraCharacter* Character);
	void NeedTravelToNextFloor(bool* bNeedTravel);
	void OnEnterInterval__DelegateSignature();
	void OnEnterPause__DelegateSignature();
	void OnGameStarted(const struct FGameplayTag& PhaseTag);
	void OnReady_43E6AFBB4C533D213E9540B8F279A53C();
	void OnRep_CurrentExistingPortal();
	void OnRep_State();
	void OnStartShrinking__DelegateSignature();
	void OnStateChanged();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetDeathZone();
	void SetNavigationTarget();
	void ShouldSpawnRedPortal(bool* ShouldSpawn);
	class AActor* SpawnOnePortalOrScroll(EPortalType Type, const struct FTransform& Transform, TSubclassOf<class AActor> PortalClass);
	void Start_Round(int32 Disc_Index);
	void TravelToNextFloor();
	void Update_Damage();
	void Update_End_Times();
	void Update_Parameters_for_New_Round();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeathZone_C">();
	}
	static class ABP_DeathZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeathZone_C>();
	}
};
static_assert(alignof(ABP_DeathZone_C) == 0x000008, "Wrong alignment on ABP_DeathZone_C");
static_assert(sizeof(ABP_DeathZone_C) == 0x000530, "Wrong size on ABP_DeathZone_C");
static_assert(offsetof(ABP_DeathZone_C, UberGraphFrame) == 0x000348, "Member 'ABP_DeathZone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, DefaultSceneRoot) == 0x000350, "Member 'ABP_DeathZone_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Precomputed_Discs) == 0x000358, "Member 'ABP_DeathZone_C::Precomputed_Discs' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, State) == 0x000368, "Member 'ABP_DeathZone_C::State' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Current_Disc_Index) == 0x00036C, "Member 'ABP_DeathZone_C::Current_Disc_Index' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Prev_Center) == 0x000370, "Member 'ABP_DeathZone_C::Prev_Center' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Prev_Radius) == 0x000388, "Member 'ABP_DeathZone_C::Prev_Radius' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Current_Interval) == 0x000390, "Member 'ABP_DeathZone_C::Current_Interval' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Current_Duration) == 0x000398, "Member 'ABP_DeathZone_C::Current_Duration' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Next_Center) == 0x0003A0, "Member 'ABP_DeathZone_C::Next_Center' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Next_Radius) == 0x0003B8, "Member 'ABP_DeathZone_C::Next_Radius' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Current_State_Start_Time) == 0x0003C0, "Member 'ABP_DeathZone_C::Current_State_Start_Time' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Current_Interval_End_Time) == 0x0003C8, "Member 'ABP_DeathZone_C::Current_Interval_End_Time' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Current_Round_End_Time) == 0x0003D0, "Member 'ABP_DeathZone_C::Current_Round_End_Time' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, bShouldShrinkLastDisc) == 0x0003D8, "Member 'ABP_DeathZone_C::bShouldShrinkLastDisc' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Dynamic_Center) == 0x0003E0, "Member 'ABP_DeathZone_C::Dynamic_Center' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Dynamic_Radius) == 0x0003F8, "Member 'ABP_DeathZone_C::Dynamic_Radius' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, OnStartShrinking) == 0x000400, "Member 'ABP_DeathZone_C::OnStartShrinking' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, OnEnterInterval) == 0x000410, "Member 'ABP_DeathZone_C::OnEnterInterval' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Current_Pause_End_Time) == 0x000420, "Member 'ABP_DeathZone_C::Current_Pause_End_Time' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, OnEnterPause) == 0x000428, "Member 'ABP_DeathZone_C::OnEnterPause' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, ActiveGameplayEffects) == 0x000438, "Member 'ABP_DeathZone_C::ActiveGameplayEffects' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, DeathZoneEnterTimes) == 0x000488, "Member 'ABP_DeathZone_C::DeathZoneEnterTimes' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, AliveFighterNumber) == 0x0004D8, "Member 'ABP_DeathZone_C::AliveFighterNumber' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, Current_Damage_GE) == 0x0004E0, "Member 'ABP_DeathZone_C::Current_Damage_GE' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, ForceSpawnRedPortal) == 0x0004E8, "Member 'ABP_DeathZone_C::ForceSpawnRedPortal' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, bEnableShrink) == 0x0004E9, "Member 'ABP_DeathZone_C::bEnableShrink' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, WaitingRoomFighters) == 0x0004EC, "Member 'ABP_DeathZone_C::WaitingRoomFighters' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, LocalNavigationComponent) == 0x0004F0, "Member 'ABP_DeathZone_C::LocalNavigationComponent' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, bEnded) == 0x0004F8, "Member 'ABP_DeathZone_C::bEnded' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, SpawnDeathzoneVisuals) == 0x0004F9, "Member 'ABP_DeathZone_C::SpawnDeathzoneVisuals' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, DeathZoneMessages) == 0x000500, "Member 'ABP_DeathZone_C::DeathZoneMessages' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, CurrentHandlingMessageIndex) == 0x000510, "Member 'ABP_DeathZone_C::CurrentHandlingMessageIndex' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, CharactersToKill) == 0x000518, "Member 'ABP_DeathZone_C::CharactersToKill' has a wrong offset!");
static_assert(offsetof(ABP_DeathZone_C, AdditinalTimeToKillAll) == 0x000528, "Member 'ABP_DeathZone_C::AdditinalTimeToKillAll' has a wrong offset!");

}


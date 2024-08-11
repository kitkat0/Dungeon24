#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathZone

#include "Basic.hpp"

#include "BP_DeathZone_classes.hpp"
#include "BP_DeathZone_parameters.hpp"


namespace SDK
{

// Function BP_DeathZone.BP_DeathZone_C.Broadcast SpawnPortal Message
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumPortals                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   SpawnedPortalNum                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::Broadcast_SpawnPortal_Message(int32 NumPortals, const struct FGameplayTag& Tag, int32 SpawnedPortalNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "Broadcast SpawnPortal Message");

	Params::BP_DeathZone_C_Broadcast_SpawnPortal_Message Parms{};

	Parms.NumPortals = NumPortals;
	Parms.Tag = std::move(Tag);
	Parms.SpawnedPortalNum = SpawnedPortalNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.BroadCastDeathZoneMessage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETgfPlayerSceneTag                      TargetPlayerSceneTag                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::BroadCastDeathZoneMessage(const class FText& Message, double Duration, ETgfPlayerSceneTag TargetPlayerSceneTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "BroadCastDeathZoneMessage");

	Params::BP_DeathZone_C_BroadCastDeathZoneMessage Parms{};

	Parms.Message = std::move(Message);
	Parms.Duration = Duration;
	Parms.TargetPlayerSceneTag = TargetPlayerSceneTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.BroadCastGameOverEvent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::BroadCastGameOverEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "BroadCastGameOverEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.BroadCastSpawnPortalMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   BluePortalSpawned                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RedPortalSpawned                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ShadowPortalSpawned                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::BroadCastSpawnPortalMessage(int32 BluePortalSpawned, int32 RedPortalSpawned, int32 ShadowPortalSpawned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "BroadCastSpawnPortalMessage");

	Params::BP_DeathZone_C_BroadCastSpawnPortalMessage Parms{};

	Parms.BluePortalSpawned = BluePortalSpawned;
	Parms.RedPortalSpawned = RedPortalSpawned;
	Parms.ShadowPortalSpawned = ShadowPortalSpawned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.EndCurrentLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasCharacterInWaitingRoom                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::EndCurrentLevel(bool HasCharacterInWaitingRoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "EndCurrentLevel");

	Params::BP_DeathZone_C_EndCurrentLevel Parms{};

	Parms.HasCharacterInWaitingRoom = HasCharacterInWaitingRoom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.ExecuteUbergraph_BP_DeathZone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::ExecuteUbergraph_BP_DeathZone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "ExecuteUbergraph_BP_DeathZone");

	Params::BP_DeathZone_C_ExecuteUbergraph_BP_DeathZone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.GetIntervalCountdownTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::GetIntervalCountdownTime(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "GetIntervalCountdownTime");

	Params::BP_DeathZone_C_GetIntervalCountdownTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_DeathZone.BP_DeathZone_C.GetRealShrinkingCountDownTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::GetRealShrinkingCountDownTime(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "GetRealShrinkingCountDownTime");

	Params::BP_DeathZone_C_GetRealShrinkingCountDownTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_DeathZone.BP_DeathZone_C.GetReplicatedServerTimeSeconds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::GetReplicatedServerTimeSeconds(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "GetReplicatedServerTimeSeconds");

	Params::BP_DeathZone_C_GetReplicatedServerTimeSeconds Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_DeathZone.BP_DeathZone_C.GetShrinkingCountdownTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::GetShrinkingCountdownTime(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "GetShrinkingCountdownTime");

	Params::BP_DeathZone_C_GetShrinkingCountdownTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_DeathZone.BP_DeathZone_C.HandleDeathZoneMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::HandleDeathZoneMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "HandleDeathZoneMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.Has Next Floor and Travel Map
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasNextFloor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::Has_Next_Floor_and_Travel_Map(bool* HasNextFloor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "Has Next Floor and Travel Map");

	Params::BP_DeathZone_C_Has_Next_Floor_and_Travel_Map Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasNextFloor != nullptr)
		*HasNextFloor = Parms.HasNextFloor;
}


// Function BP_DeathZone.BP_DeathZone_C.KillCharacterAtLast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::KillCharacterAtLast(class ALyraCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "KillCharacterAtLast");

	Params::BP_DeathZone_C_KillCharacterAtLast Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.NeedTravelToNextFloor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bNeedTravel                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::NeedTravelToNextFloor(bool* bNeedTravel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "NeedTravelToNextFloor");

	Params::BP_DeathZone_C_NeedTravelToNextFloor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bNeedTravel != nullptr)
		*bNeedTravel = Parms.bNeedTravel;
}


// Function BP_DeathZone.BP_DeathZone_C.OnEnterInterval__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::OnEnterInterval__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "OnEnterInterval__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.OnEnterPause__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::OnEnterPause__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "OnEnterPause__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.OnGameStarted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     PhaseTag                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::OnGameStarted(const struct FGameplayTag& PhaseTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "OnGameStarted");

	Params::BP_DeathZone_C_OnGameStarted Parms{};

	Parms.PhaseTag = std::move(PhaseTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.OnReady_43E6AFBB4C533D213E9540B8F279A53C
// (BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::OnReady_43E6AFBB4C533D213E9540B8F279A53C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "OnReady_43E6AFBB4C533D213E9540B8F279A53C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.OnRep_CurrentExistingPortal
// (BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::OnRep_CurrentExistingPortal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "OnRep_CurrentExistingPortal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.OnRep_State
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::OnRep_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "OnRep_State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.OnStartShrinking__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::OnStartShrinking__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "OnStartShrinking__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.OnStateChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::OnStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "OnStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeathZone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "ReceiveTick");

	Params::BP_DeathZone_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.ResetDeathZone
// (BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::ResetDeathZone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "ResetDeathZone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.SetNavigationTarget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::SetNavigationTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "SetNavigationTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.ShouldSpawnRedPortal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldSpawn                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::ShouldSpawnRedPortal(bool* ShouldSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "ShouldSpawnRedPortal");

	Params::BP_DeathZone_C_ShouldSpawnRedPortal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldSpawn != nullptr)
		*ShouldSpawn = Parms.ShouldSpawn;
}


// Function BP_DeathZone.BP_DeathZone_C.SpawnOnePortalOrScroll
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPortalType                             Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>               PortalClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_DeathZone_C::SpawnOnePortalOrScroll(EPortalType Type, const struct FTransform& Transform, TSubclassOf<class AActor> PortalClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "SpawnOnePortalOrScroll");

	Params::BP_DeathZone_C_SpawnOnePortalOrScroll Parms{};

	Parms.Type = Type;
	Parms.Transform = std::move(Transform);
	Parms.PortalClass = PortalClass;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DeathZone.BP_DeathZone_C.Start Round
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Disc_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathZone_C::Start_Round(int32 Disc_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "Start Round");

	Params::BP_DeathZone_C_Start_Round Parms{};

	Parms.Disc_Index = Disc_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathZone.BP_DeathZone_C.TravelToNextFloor
// (BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::TravelToNextFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "TravelToNextFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.Update Damage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::Update_Damage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "Update Damage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.Update End Times
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::Update_End_Times()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "Update End Times");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathZone.BP_DeathZone_C.Update Parameters for New Round
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DeathZone_C::Update_Parameters_for_New_Round()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathZone_C", "Update Parameters for New Round");

	UObject::ProcessEvent(Func, nullptr);
}

}

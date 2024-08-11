#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AI_Controller_LyraShooter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_AI_Controller_LyraShooter.B_AI_Controller_LyraShooter_C
// 0x0028 (0x0408 - 0x03E0)
class AB_AI_Controller_LyraShooter_C final : public ALyraPlayerBotController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                 AIPerception;                                      // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        StuckTime;                                         // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EnemyNameKey;                                      // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBehaviorTree*                          BTAsset;                                           // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_AI_Controller_LyraShooter(int32 EntryPoint);
	void OnDeathStarted(class AActor* OwningActor);
	void OnReady_AADC9E13465013EE7B515EA2F51CFCD6();
	void OnTeamChanged_40BFDA4D461E82BC70C0ACB574632917(bool bTeamSet, int32 TeamId);
	void ReceiveBeginPlay();
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveUnPossess(class APawn* UnpossessedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AI_Controller_LyraShooter_C">();
	}
	static class AB_AI_Controller_LyraShooter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AI_Controller_LyraShooter_C>();
	}
};
static_assert(alignof(AB_AI_Controller_LyraShooter_C) == 0x000008, "Wrong alignment on AB_AI_Controller_LyraShooter_C");
static_assert(sizeof(AB_AI_Controller_LyraShooter_C) == 0x000408, "Wrong size on AB_AI_Controller_LyraShooter_C");
static_assert(offsetof(AB_AI_Controller_LyraShooter_C, UberGraphFrame) == 0x0003E0, "Member 'AB_AI_Controller_LyraShooter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_AI_Controller_LyraShooter_C, AIPerception) == 0x0003E8, "Member 'AB_AI_Controller_LyraShooter_C::AIPerception' has a wrong offset!");
static_assert(offsetof(AB_AI_Controller_LyraShooter_C, StuckTime) == 0x0003F0, "Member 'AB_AI_Controller_LyraShooter_C::StuckTime' has a wrong offset!");
static_assert(offsetof(AB_AI_Controller_LyraShooter_C, EnemyNameKey) == 0x0003F8, "Member 'AB_AI_Controller_LyraShooter_C::EnemyNameKey' has a wrong offset!");
static_assert(offsetof(AB_AI_Controller_LyraShooter_C, BTAsset) == 0x000400, "Member 'AB_AI_Controller_LyraShooter_C::BTAsset' has a wrong offset!");

}


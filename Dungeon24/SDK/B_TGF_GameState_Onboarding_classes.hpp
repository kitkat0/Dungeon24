#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TGF_GameState_Onboarding

#include "Basic.hpp"

#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TGF_GameState_Onboarding.B_TGF_GameState_Onboarding_C
// 0x0010 (0x0390 - 0x0380)
class AB_TGF_GameState_Onboarding_C final : public ALyraGameState
{
public:
	class UTgfNpcStateManagerComponent*           TgfNpcStateManager;                                // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TGF_GameState_Onboarding_C">();
	}
	static class AB_TGF_GameState_Onboarding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_TGF_GameState_Onboarding_C>();
	}
};
static_assert(alignof(AB_TGF_GameState_Onboarding_C) == 0x000008, "Wrong alignment on AB_TGF_GameState_Onboarding_C");
static_assert(sizeof(AB_TGF_GameState_Onboarding_C) == 0x000390, "Wrong size on AB_TGF_GameState_Onboarding_C");
static_assert(offsetof(AB_TGF_GameState_Onboarding_C, TgfNpcStateManager) == 0x000380, "Member 'AB_TGF_GameState_Onboarding_C::TgfNpcStateManager' has a wrong offset!");
static_assert(offsetof(AB_TGF_GameState_Onboarding_C, DefaultSceneRoot) == 0x000388, "Member 'AB_TGF_GameState_Onboarding_C::DefaultSceneRoot' has a wrong offset!");

}

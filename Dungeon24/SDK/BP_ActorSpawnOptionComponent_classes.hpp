#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorSpawnOptionComponent

#include "Basic.hpp"

#include "EActorSpawnOptionAction_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActorSpawnOptionComponent.BP_ActorSpawnOptionComponent_C
// 0x0018 (0x00C0 - 0x00A8)
class UBP_ActorSpawnOptionComponent_C final : public UActorComponent
{
public:
	TArray<int32>                                 Options;                                           // 0x00A8(0x0010)(Edit, BlueprintVisible)
	EActorSpawnOptionAction                       Action;                                            // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CanSpawn(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActorSpawnOptionComponent_C">();
	}
	static class UBP_ActorSpawnOptionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActorSpawnOptionComponent_C>();
	}
};
static_assert(alignof(UBP_ActorSpawnOptionComponent_C) == 0x000008, "Wrong alignment on UBP_ActorSpawnOptionComponent_C");
static_assert(sizeof(UBP_ActorSpawnOptionComponent_C) == 0x0000C0, "Wrong size on UBP_ActorSpawnOptionComponent_C");
static_assert(offsetof(UBP_ActorSpawnOptionComponent_C, Options) == 0x0000A8, "Member 'UBP_ActorSpawnOptionComponent_C::Options' has a wrong offset!");
static_assert(offsetof(UBP_ActorSpawnOptionComponent_C, Action) == 0x0000B8, "Member 'UBP_ActorSpawnOptionComponent_C::Action' has a wrong offset!");

}


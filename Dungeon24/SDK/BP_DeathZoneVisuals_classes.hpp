#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathZoneVisuals

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "LyraGame_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeathZoneVisuals.BP_DeathZoneVisuals_C
// 0x0050 (0x02F0 - 0x02A0)
class ABP_DeathZoneVisuals_C final : public ADeathZoneVisuals
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DeathZone_C*                        Parent_Death_Zone;                                 // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Default_Scale_Z;                                   // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Default_Offset_Z;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FogMaterial;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        FogVolumeExtent;                                   // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          EnterSound;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          LeaveSound;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SoundPlayingSound;                                 // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          ResetSound;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DeathZoneVisuals(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void SetUp(class ABP_DeathZone_C* ParentDeathZone);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeathZoneVisuals_C">();
	}
	static class ABP_DeathZoneVisuals_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeathZoneVisuals_C>();
	}
};
static_assert(alignof(ABP_DeathZoneVisuals_C) == 0x000008, "Wrong alignment on ABP_DeathZoneVisuals_C");
static_assert(sizeof(ABP_DeathZoneVisuals_C) == 0x0002F0, "Wrong size on ABP_DeathZoneVisuals_C");
static_assert(offsetof(ABP_DeathZoneVisuals_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_DeathZoneVisuals_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, Parent_Death_Zone) == 0x0002A8, "Member 'ABP_DeathZoneVisuals_C::Parent_Death_Zone' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, Default_Scale_Z) == 0x0002B0, "Member 'ABP_DeathZoneVisuals_C::Default_Scale_Z' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, Default_Offset_Z) == 0x0002B8, "Member 'ABP_DeathZoneVisuals_C::Default_Offset_Z' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, FogMaterial) == 0x0002C0, "Member 'ABP_DeathZoneVisuals_C::FogMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, FogVolumeExtent) == 0x0002C8, "Member 'ABP_DeathZoneVisuals_C::FogVolumeExtent' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, EnterSound) == 0x0002D0, "Member 'ABP_DeathZoneVisuals_C::EnterSound' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, LeaveSound) == 0x0002D8, "Member 'ABP_DeathZoneVisuals_C::LeaveSound' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, SoundPlayingSound) == 0x0002E0, "Member 'ABP_DeathZoneVisuals_C::SoundPlayingSound' has a wrong offset!");
static_assert(offsetof(ABP_DeathZoneVisuals_C, ResetSound) == 0x0002E8, "Member 'ABP_DeathZoneVisuals_C::ResetSound' has a wrong offset!");

}

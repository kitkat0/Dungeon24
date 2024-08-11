#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SceneCaptureRig

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SceneCaptureRig.BP_SceneCaptureRig_C
// 0x0130 (0x03C8 - 0x0298)
class ABP_SceneCaptureRig_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    FakeDirectLight;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLight;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CharacterSpot;                                     // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    BackLight;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   SecondaryLight;                                    // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   KeyLight;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_ClothBlendWeight_D6D6DB164DA5AD6DAA95BE9B34FB201E; // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_D6D6DB164DA5AD6DAA95BE9B34FB201E; // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E5[0x3];                                      // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         ____Position_4BF49AA2451AF619D943A7A6EEDB0329;     // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _____Direction_4BF49AA2451AF619D943A7A6EEDB0329;   // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F5[0x3];                                      // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     __t;                                               // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FIntPoint                              TextureSize;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                         CapturedActors;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         AvatarWeapons;                                     // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        VerticleFov;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         CapturedSubmeshes;                                 // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TSoftObjectPtr<class UTgfInventoryWrapper>    Cached_Inventory_Context;                          // 0x0348(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ALyraCharacter*                         Cached_Character;                                  // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ATgfAvatarActor*                        AvatarActor;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_SceneCapture_Backdrop_C*            BackDropActor;                                     // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         AvatarSkinItems;                                   // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                  PantherTag;                                        // 0x03A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIntPoint                              RenderTargetSize;                                  // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Actor_for_Capture(class AActor* Actor, bool bPlaceAtSpot, bool bIgnoreAddToList);
	void AddBackdrop(class UMaterialInstance* Material);
	void AddControlledCharacterToCapture(class UTgfInventoryWrapper* InventoryContext, class ALyraCharacter* Character);
	void Capture_Submesh(class ASkeletalMeshActor* Mesh_actor, class USkeletalMesh* Mesh, class USkeletalMeshComponent** Ret);
	void Discard();
	void DoesAvatarActorNeedRecreate(bool* Value);
	void ExecuteUbergraph_BP_SceneCaptureRig(int32 EntryPoint);
	void OnBeginFrame();
	void OnMessageReceived_2F7C8F0546AA6C06B0DDE7A561AFA6E5(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnReady_64B6A5074A8A364F81D77FA661E381F1();
	void OnReady_E2435C1E44E6BB17F947C6AB3F984616();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RecreateAvatarActor();
	void Refresh_Avatar_Actor(class ATgfAvatarActor* InAvatar);
	void Refresh_Body_Parts();
	void Refresh_Weapons(class UTgfInventoryWrapper* InventoryContext);
	void ResizeTexture(const struct FIntPoint& TexSize);
	void ResizeTextureImpl();
	void SetCapturePosition(const struct FVector& Pos);
	void SetCaptureViewField(double Field);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UpdateBackDrop(class UTexture2D* BackDropTex);
	void __t__FinishedFunc();
	void __t__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SceneCaptureRig_C">();
	}
	static class ABP_SceneCaptureRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneCaptureRig_C>();
	}
};
static_assert(alignof(ABP_SceneCaptureRig_C) == 0x000008, "Wrong alignment on ABP_SceneCaptureRig_C");
static_assert(sizeof(ABP_SceneCaptureRig_C) == 0x0003C8, "Wrong size on ABP_SceneCaptureRig_C");
static_assert(offsetof(ABP_SceneCaptureRig_C, UberGraphFrame) == 0x000298, "Member 'ABP_SceneCaptureRig_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, FakeDirectLight) == 0x0002A0, "Member 'ABP_SceneCaptureRig_C::FakeDirectLight' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, DirectionalLight) == 0x0002A8, "Member 'ABP_SceneCaptureRig_C::DirectionalLight' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, CharacterSpot) == 0x0002B0, "Member 'ABP_SceneCaptureRig_C::CharacterSpot' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, BackLight) == 0x0002B8, "Member 'ABP_SceneCaptureRig_C::BackLight' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, SecondaryLight) == 0x0002C0, "Member 'ABP_SceneCaptureRig_C::SecondaryLight' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, KeyLight) == 0x0002C8, "Member 'ABP_SceneCaptureRig_C::KeyLight' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, SceneCaptureComponent2D) == 0x0002D0, "Member 'ABP_SceneCaptureRig_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, DefaultSceneRoot) == 0x0002D8, "Member 'ABP_SceneCaptureRig_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, Timeline_ClothBlendWeight_D6D6DB164DA5AD6DAA95BE9B34FB201E) == 0x0002E0, "Member 'ABP_SceneCaptureRig_C::Timeline_ClothBlendWeight_D6D6DB164DA5AD6DAA95BE9B34FB201E' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, Timeline__Direction_D6D6DB164DA5AD6DAA95BE9B34FB201E) == 0x0002E4, "Member 'ABP_SceneCaptureRig_C::Timeline__Direction_D6D6DB164DA5AD6DAA95BE9B34FB201E' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, Timeline) == 0x0002E8, "Member 'ABP_SceneCaptureRig_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, ____Position_4BF49AA2451AF619D943A7A6EEDB0329) == 0x0002F0, "Member 'ABP_SceneCaptureRig_C::____Position_4BF49AA2451AF619D943A7A6EEDB0329' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, _____Direction_4BF49AA2451AF619D943A7A6EEDB0329) == 0x0002F4, "Member 'ABP_SceneCaptureRig_C::_____Direction_4BF49AA2451AF619D943A7A6EEDB0329' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, __t) == 0x0002F8, "Member 'ABP_SceneCaptureRig_C::__t' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, RenderTarget) == 0x000300, "Member 'ABP_SceneCaptureRig_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, TextureSize) == 0x000308, "Member 'ABP_SceneCaptureRig_C::TextureSize' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, CapturedActors) == 0x000310, "Member 'ABP_SceneCaptureRig_C::CapturedActors' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, AvatarWeapons) == 0x000320, "Member 'ABP_SceneCaptureRig_C::AvatarWeapons' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, VerticleFov) == 0x000330, "Member 'ABP_SceneCaptureRig_C::VerticleFov' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, CapturedSubmeshes) == 0x000338, "Member 'ABP_SceneCaptureRig_C::CapturedSubmeshes' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, Cached_Inventory_Context) == 0x000348, "Member 'ABP_SceneCaptureRig_C::Cached_Inventory_Context' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, Cached_Character) == 0x000378, "Member 'ABP_SceneCaptureRig_C::Cached_Character' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, AvatarActor) == 0x000380, "Member 'ABP_SceneCaptureRig_C::AvatarActor' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, BackDropActor) == 0x000388, "Member 'ABP_SceneCaptureRig_C::BackDropActor' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, AvatarSkinItems) == 0x000390, "Member 'ABP_SceneCaptureRig_C::AvatarSkinItems' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, PantherTag) == 0x0003A0, "Member 'ABP_SceneCaptureRig_C::PantherTag' has a wrong offset!");
static_assert(offsetof(ABP_SceneCaptureRig_C, RenderTargetSize) == 0x0003C0, "Member 'ABP_SceneCaptureRig_C::RenderTargetSize' has a wrong offset!");

}


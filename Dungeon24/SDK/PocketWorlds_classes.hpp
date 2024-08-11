#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PocketWorlds

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PocketWorlds.PocketCaptureSubsystem
// 0x0040 (0x0070 - 0x0030)
class UPocketCaptureSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x40];                                      // 0x0030(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UPocketCapture* CreateThumbnailRenderer(TSubclassOf<class UPocketCapture> PocketCaptureClass);
	void DestroyThumbnailRenderer(class UPocketCapture* ThumbnailRenderer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PocketCaptureSubsystem">();
	}
	static class UPocketCaptureSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPocketCaptureSubsystem>();
	}
};
static_assert(alignof(UPocketCaptureSubsystem) == 0x000008, "Wrong alignment on UPocketCaptureSubsystem");
static_assert(sizeof(UPocketCaptureSubsystem) == 0x000070, "Wrong size on UPocketCaptureSubsystem");

// Class PocketWorlds.PocketCapture
// 0x0060 (0x0088 - 0x0028)
class UPocketCapture final : public UObject
{
public:
	class UMaterialInterface*                     AlphaMaskMaterial;                                 // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                     EffectMaskMaterial;                                // 0x0030(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorld*                                 PrivateWorld;                                      // 0x0038(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         RendererIndex;                                     // 0x0040(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         SurfaceWidth;                                      // 0x0044(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         SurfaceHeight;                                     // 0x0048(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 DiffuseRT;                                         // 0x0050(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                 AlphaMaskRT;                                       // 0x0058(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                 EffectsRT;                                         // 0x0060(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneCaptureComponent2D*               CaptureComponent;                                  // 0x0068(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                  CaptureTargetPtr;                                  // 0x0070(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AActor>>          AlphaMaskActorPtrs;                                // 0x0078(0x0010)(Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	void CaptureAlphaMask();
	void CaptureDiffuse();
	void CaptureEffects();
	class UTextureRenderTarget2D* GetOrCreateAlphaMaskRenderTarget();
	class UTextureRenderTarget2D* GetOrCreateDiffuseRenderTarget();
	class UTextureRenderTarget2D* GetOrCreateEffectsRenderTarget();
	void ReclaimResources();
	void ReleaseResources();
	void SetAlphaMaskedActors(const TArray<class AActor*>& InCaptureTarget);
	void SetCaptureTarget(class AActor* InCaptureTarget);
	void SetRenderTargetSize(int32 Width, int32 Height);

	int32 GetRendererIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PocketCapture">();
	}
	static class UPocketCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPocketCapture>();
	}
};
static_assert(alignof(UPocketCapture) == 0x000008, "Wrong alignment on UPocketCapture");
static_assert(sizeof(UPocketCapture) == 0x000088, "Wrong size on UPocketCapture");
static_assert(offsetof(UPocketCapture, AlphaMaskMaterial) == 0x000028, "Member 'UPocketCapture::AlphaMaskMaterial' has a wrong offset!");
static_assert(offsetof(UPocketCapture, EffectMaskMaterial) == 0x000030, "Member 'UPocketCapture::EffectMaskMaterial' has a wrong offset!");
static_assert(offsetof(UPocketCapture, PrivateWorld) == 0x000038, "Member 'UPocketCapture::PrivateWorld' has a wrong offset!");
static_assert(offsetof(UPocketCapture, RendererIndex) == 0x000040, "Member 'UPocketCapture::RendererIndex' has a wrong offset!");
static_assert(offsetof(UPocketCapture, SurfaceWidth) == 0x000044, "Member 'UPocketCapture::SurfaceWidth' has a wrong offset!");
static_assert(offsetof(UPocketCapture, SurfaceHeight) == 0x000048, "Member 'UPocketCapture::SurfaceHeight' has a wrong offset!");
static_assert(offsetof(UPocketCapture, DiffuseRT) == 0x000050, "Member 'UPocketCapture::DiffuseRT' has a wrong offset!");
static_assert(offsetof(UPocketCapture, AlphaMaskRT) == 0x000058, "Member 'UPocketCapture::AlphaMaskRT' has a wrong offset!");
static_assert(offsetof(UPocketCapture, EffectsRT) == 0x000060, "Member 'UPocketCapture::EffectsRT' has a wrong offset!");
static_assert(offsetof(UPocketCapture, CaptureComponent) == 0x000068, "Member 'UPocketCapture::CaptureComponent' has a wrong offset!");
static_assert(offsetof(UPocketCapture, CaptureTargetPtr) == 0x000070, "Member 'UPocketCapture::CaptureTargetPtr' has a wrong offset!");
static_assert(offsetof(UPocketCapture, AlphaMaskActorPtrs) == 0x000078, "Member 'UPocketCapture::AlphaMaskActorPtrs' has a wrong offset!");

// Class PocketWorlds.PocketLevel
// 0x0048 (0x0078 - 0x0030)
class UPocketLevel final : public UDataAsset
{
public:
	TSoftObjectPtr<class UWorld>                  Level;                                             // 0x0030(0x0030)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Bounds;                                            // 0x0060(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PocketLevel">();
	}
	static class UPocketLevel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPocketLevel>();
	}
};
static_assert(alignof(UPocketLevel) == 0x000008, "Wrong alignment on UPocketLevel");
static_assert(sizeof(UPocketLevel) == 0x000078, "Wrong size on UPocketLevel");
static_assert(offsetof(UPocketLevel, Level) == 0x000030, "Member 'UPocketLevel::Level' has a wrong offset!");
static_assert(offsetof(UPocketLevel, Bounds) == 0x000060, "Member 'UPocketLevel::Bounds' has a wrong offset!");

// Class PocketWorlds.PocketLevelSubsystem
// 0x0010 (0x0040 - 0x0030)
class UPocketLevelSubsystem final : public UWorldSubsystem
{
public:
	TArray<class UPocketLevelInstance*>           PocketInstances;                                   // 0x0030(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PocketLevelSubsystem">();
	}
	static class UPocketLevelSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPocketLevelSubsystem>();
	}
};
static_assert(alignof(UPocketLevelSubsystem) == 0x000008, "Wrong alignment on UPocketLevelSubsystem");
static_assert(sizeof(UPocketLevelSubsystem) == 0x000040, "Wrong size on UPocketLevelSubsystem");
static_assert(offsetof(UPocketLevelSubsystem, PocketInstances) == 0x000030, "Member 'UPocketLevelSubsystem::PocketInstances' has a wrong offset!");

// Class PocketWorlds.PocketLevelInstance
// 0x0070 (0x0098 - 0x0028)
class UPocketLevelInstance final : public UObject
{
public:
	class ULocalPlayer*                           LocalPlayer;                                       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPocketLevel*                           PocketLevel;                                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWorld*                                 World;                                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelStreamingDynamic*                 StreamingPocketLevel;                              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x50];                                      // 0x0048(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandlePocketLevelLoaded();
	void HandlePocketLevelShown();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PocketLevelInstance">();
	}
	static class UPocketLevelInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPocketLevelInstance>();
	}
};
static_assert(alignof(UPocketLevelInstance) == 0x000008, "Wrong alignment on UPocketLevelInstance");
static_assert(sizeof(UPocketLevelInstance) == 0x000098, "Wrong size on UPocketLevelInstance");
static_assert(offsetof(UPocketLevelInstance, LocalPlayer) == 0x000028, "Member 'UPocketLevelInstance::LocalPlayer' has a wrong offset!");
static_assert(offsetof(UPocketLevelInstance, PocketLevel) == 0x000030, "Member 'UPocketLevelInstance::PocketLevel' has a wrong offset!");
static_assert(offsetof(UPocketLevelInstance, World) == 0x000038, "Member 'UPocketLevelInstance::World' has a wrong offset!");
static_assert(offsetof(UPocketLevelInstance, StreamingPocketLevel) == 0x000040, "Member 'UPocketLevelInstance::StreamingPocketLevel' has a wrong offset!");

}

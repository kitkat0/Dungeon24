#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HairStrandsCore

#include "Basic.hpp"


namespace SDK::Params
{

// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
// 0x0030 (0x0030 - 0x0000)
struct GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset final
{
public:
	class UGroomAsset*                            GroomAsset;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCache*                         GeometryCache;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumInterpolationPoints;                            // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGeometryCache*                         SourceGeometryCacheForTransfer;                    // 0x0018(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MatchingSection;                                   // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGroomBindingAsset*                     ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset) == 0x000008, "Wrong alignment on GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset");
static_assert(sizeof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset) == 0x000030, "Wrong size on GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset, GroomAsset) == 0x000000, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset::GroomAsset' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset, GeometryCache) == 0x000008, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset::GeometryCache' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset, NumInterpolationPoints) == 0x000010, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset::NumInterpolationPoints' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset, SourceGeometryCacheForTransfer) == 0x000018, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset::SourceGeometryCacheForTransfer' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset, MatchingSection) == 0x000020, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset::MatchingSection' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset, ReturnValue) == 0x000028, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset::ReturnValue' has a wrong offset!");

// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
// 0x0040 (0x0040 - 0x0000)
struct GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath final
{
public:
	class FString                                 DesiredPackagePath;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGroomAsset*                            GroomAsset;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCache*                         GeometryCache;                                     // 0x0018(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumInterpolationPoints;                            // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGeometryCache*                         SourceGeometryCacheForTransfer;                    // 0x0028(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MatchingSection;                                   // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGroomBindingAsset*                     ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath) == 0x000008, "Wrong alignment on GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath");
static_assert(sizeof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath) == 0x000040, "Wrong size on GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, DesiredPackagePath) == 0x000000, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath::DesiredPackagePath' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, GroomAsset) == 0x000010, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath::GroomAsset' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, GeometryCache) == 0x000018, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath::GeometryCache' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, NumInterpolationPoints) == 0x000020, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath::NumInterpolationPoints' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, SourceGeometryCacheForTransfer) == 0x000028, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath::SourceGeometryCacheForTransfer' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, MatchingSection) == 0x000030, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath::MatchingSection' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, ReturnValue) == 0x000038, "Member 'GroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath::ReturnValue' has a wrong offset!");

// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
// 0x0030 (0x0030 - 0x0000)
struct GroomBlueprintLibrary_CreateNewGroomBindingAsset final
{
public:
	class UGroomAsset*                            InGroomAsset;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          InSkeletalMesh;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InNumInterpolationPoints;                          // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          InSourceSkeletalMeshForTransfer;                   // 0x0018(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InMatchingSection;                                 // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGroomBindingAsset*                     ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomBlueprintLibrary_CreateNewGroomBindingAsset) == 0x000008, "Wrong alignment on GroomBlueprintLibrary_CreateNewGroomBindingAsset");
static_assert(sizeof(GroomBlueprintLibrary_CreateNewGroomBindingAsset) == 0x000030, "Wrong size on GroomBlueprintLibrary_CreateNewGroomBindingAsset");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAsset, InGroomAsset) == 0x000000, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAsset::InGroomAsset' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAsset, InSkeletalMesh) == 0x000008, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAsset::InSkeletalMesh' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAsset, InNumInterpolationPoints) == 0x000010, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAsset::InNumInterpolationPoints' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAsset, InSourceSkeletalMeshForTransfer) == 0x000018, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAsset::InSourceSkeletalMeshForTransfer' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAsset, InMatchingSection) == 0x000020, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAsset::InMatchingSection' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAsset, ReturnValue) == 0x000028, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAsset::ReturnValue' has a wrong offset!");

// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
// 0x0040 (0x0040 - 0x0000)
struct GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath final
{
public:
	class FString                                 InDesiredPackagePath;                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGroomAsset*                            InGroomAsset;                                      // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          InSkeletalMesh;                                    // 0x0018(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InNumInterpolationPoints;                          // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          InSourceSkeletalMeshForTransfer;                   // 0x0028(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InMatchingSection;                                 // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGroomBindingAsset*                     ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath) == 0x000008, "Wrong alignment on GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath");
static_assert(sizeof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath) == 0x000040, "Wrong size on GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, InDesiredPackagePath) == 0x000000, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath::InDesiredPackagePath' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, InGroomAsset) == 0x000010, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath::InGroomAsset' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, InSkeletalMesh) == 0x000018, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath::InSkeletalMesh' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, InNumInterpolationPoints) == 0x000020, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath::InNumInterpolationPoints' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, InSourceSkeletalMeshForTransfer) == 0x000028, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath::InSourceSkeletalMeshForTransfer' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, InMatchingSection) == 0x000030, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath::InMatchingSection' has a wrong offset!");
static_assert(offsetof(GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, ReturnValue) == 0x000038, "Member 'GroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath::ReturnValue' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.AddCollisionComponent
// 0x0008 (0x0008 - 0x0000)
struct GroomComponent_AddCollisionComponent final
{
public:
	class USkeletalMeshComponent*                 SkeletalMeshComponent;                             // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_AddCollisionComponent) == 0x000008, "Wrong alignment on GroomComponent_AddCollisionComponent");
static_assert(sizeof(GroomComponent_AddCollisionComponent) == 0x000008, "Wrong size on GroomComponent_AddCollisionComponent");
static_assert(offsetof(GroomComponent_AddCollisionComponent, SkeletalMeshComponent) == 0x000000, "Member 'GroomComponent_AddCollisionComponent::SkeletalMeshComponent' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
// 0x0001 (0x0001 - 0x0000)
struct GroomComponent_GetIsHairLengthScaleEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_GetIsHairLengthScaleEnabled) == 0x000001, "Wrong alignment on GroomComponent_GetIsHairLengthScaleEnabled");
static_assert(sizeof(GroomComponent_GetIsHairLengthScaleEnabled) == 0x000001, "Wrong size on GroomComponent_GetIsHairLengthScaleEnabled");
static_assert(offsetof(GroomComponent_GetIsHairLengthScaleEnabled, ReturnValue) == 0x000000, "Member 'GroomComponent_GetIsHairLengthScaleEnabled::ReturnValue' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.GetNiagaraComponent
// 0x0010 (0x0010 - 0x0000)
struct GroomComponent_GetNiagaraComponent final
{
public:
	int32                                         GroupIndex;                                        // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_GetNiagaraComponent) == 0x000008, "Wrong alignment on GroomComponent_GetNiagaraComponent");
static_assert(sizeof(GroomComponent_GetNiagaraComponent) == 0x000010, "Wrong size on GroomComponent_GetNiagaraComponent");
static_assert(offsetof(GroomComponent_GetNiagaraComponent, GroupIndex) == 0x000000, "Member 'GroomComponent_GetNiagaraComponent::GroupIndex' has a wrong offset!");
static_assert(offsetof(GroomComponent_GetNiagaraComponent, ReturnValue) == 0x000008, "Member 'GroomComponent_GetNiagaraComponent::ReturnValue' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.SetBindingAsset
// 0x0008 (0x0008 - 0x0000)
struct GroomComponent_SetBindingAsset final
{
public:
	class UGroomBindingAsset*                     InBinding;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_SetBindingAsset) == 0x000008, "Wrong alignment on GroomComponent_SetBindingAsset");
static_assert(sizeof(GroomComponent_SetBindingAsset) == 0x000008, "Wrong size on GroomComponent_SetBindingAsset");
static_assert(offsetof(GroomComponent_SetBindingAsset, InBinding) == 0x000000, "Member 'GroomComponent_SetBindingAsset::InBinding' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.SetEnableSimulation
// 0x0001 (0x0001 - 0x0000)
struct GroomComponent_SetEnableSimulation final
{
public:
	bool                                          bInEnableSimulation;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_SetEnableSimulation) == 0x000001, "Wrong alignment on GroomComponent_SetEnableSimulation");
static_assert(sizeof(GroomComponent_SetEnableSimulation) == 0x000001, "Wrong size on GroomComponent_SetEnableSimulation");
static_assert(offsetof(GroomComponent_SetEnableSimulation, bInEnableSimulation) == 0x000000, "Member 'GroomComponent_SetEnableSimulation::bInEnableSimulation' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.SetGroomAsset
// 0x0008 (0x0008 - 0x0000)
struct GroomComponent_SetGroomAsset final
{
public:
	class UGroomAsset*                            Asset;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_SetGroomAsset) == 0x000008, "Wrong alignment on GroomComponent_SetGroomAsset");
static_assert(sizeof(GroomComponent_SetGroomAsset) == 0x000008, "Wrong size on GroomComponent_SetGroomAsset");
static_assert(offsetof(GroomComponent_SetGroomAsset, Asset) == 0x000000, "Member 'GroomComponent_SetGroomAsset::Asset' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.SetHairLengthScale
// 0x0004 (0x0004 - 0x0000)
struct GroomComponent_SetHairLengthScale final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_SetHairLengthScale) == 0x000004, "Wrong alignment on GroomComponent_SetHairLengthScale");
static_assert(sizeof(GroomComponent_SetHairLengthScale) == 0x000004, "Wrong size on GroomComponent_SetHairLengthScale");
static_assert(offsetof(GroomComponent_SetHairLengthScale, Scale) == 0x000000, "Member 'GroomComponent_SetHairLengthScale::Scale' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
// 0x0001 (0x0001 - 0x0000)
struct GroomComponent_SetHairLengthScaleEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_SetHairLengthScaleEnable) == 0x000001, "Wrong alignment on GroomComponent_SetHairLengthScaleEnable");
static_assert(sizeof(GroomComponent_SetHairLengthScaleEnable) == 0x000001, "Wrong size on GroomComponent_SetHairLengthScaleEnable");
static_assert(offsetof(GroomComponent_SetHairLengthScaleEnable, bEnable) == 0x000000, "Member 'GroomComponent_SetHairLengthScaleEnable::bEnable' has a wrong offset!");

// Function HairStrandsCore.GroomComponent.SetPhysicsAsset
// 0x0008 (0x0008 - 0x0000)
struct GroomComponent_SetPhysicsAsset final
{
public:
	class UPhysicsAsset*                          InPhysicsAsset;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GroomComponent_SetPhysicsAsset) == 0x000008, "Wrong alignment on GroomComponent_SetPhysicsAsset");
static_assert(sizeof(GroomComponent_SetPhysicsAsset) == 0x000008, "Wrong size on GroomComponent_SetPhysicsAsset");
static_assert(offsetof(GroomComponent_SetPhysicsAsset, InPhysicsAsset) == 0x000000, "Member 'GroomComponent_SetPhysicsAsset::InPhysicsAsset' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleARKit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AugmentedReality_structs.hpp"


namespace SDK
{

// Enum AppleARKit.EARFaceTrackingFileWriterType
// NumValues: 0x0004
enum class EARFaceTrackingFileWriterType : uint8
{
	None                                     = 0,
	CSV                                      = 1,
	JSON                                     = 2,
	EARFaceTrackingFileWriterType_MAX        = 3,
};

// Enum AppleARKit.ELivelinkTrackingType
// NumValues: 0x0003
enum class ELivelinkTrackingType : uint8
{
	FaceTracking                             = 0,
	PoseTracking                             = 1,
	ELivelinkTrackingType_MAX                = 2,
};

// Enum AppleARKit.EARKitTextureType
// NumValues: 0x0003
enum class EARKitTextureType : uint8
{
	TextureY                                 = 0,
	TextureCbCr                              = 1,
	EARKitTextureType_MAX                    = 2,
};

// ScriptStruct AppleARKit.AppleARKitCamera
// 0x00E0 (0x00E0 - 0x0000)
struct FAppleARKitCamera final
{
public:
	EARTrackingQuality                            TrackingQuality;                                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EARTrackingQualityReason                      TrackingQualityReason;                             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0xE];                                        // 0x0002(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                  Orientation;                                       // 0x0070(0x0020)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Translation;                                       // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ImageResolution;                                   // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              FocalLength;                                       // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              PrincipalPoint;                                    // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAppleARKitCamera) == 0x000010, "Wrong alignment on FAppleARKitCamera");
static_assert(sizeof(FAppleARKitCamera) == 0x0000E0, "Wrong size on FAppleARKitCamera");
static_assert(offsetof(FAppleARKitCamera, TrackingQuality) == 0x000000, "Member 'FAppleARKitCamera::TrackingQuality' has a wrong offset!");
static_assert(offsetof(FAppleARKitCamera, TrackingQualityReason) == 0x000001, "Member 'FAppleARKitCamera::TrackingQualityReason' has a wrong offset!");
static_assert(offsetof(FAppleARKitCamera, Transform) == 0x000010, "Member 'FAppleARKitCamera::Transform' has a wrong offset!");
static_assert(offsetof(FAppleARKitCamera, Orientation) == 0x000070, "Member 'FAppleARKitCamera::Orientation' has a wrong offset!");
static_assert(offsetof(FAppleARKitCamera, Translation) == 0x000090, "Member 'FAppleARKitCamera::Translation' has a wrong offset!");
static_assert(offsetof(FAppleARKitCamera, ImageResolution) == 0x0000A8, "Member 'FAppleARKitCamera::ImageResolution' has a wrong offset!");
static_assert(offsetof(FAppleARKitCamera, FocalLength) == 0x0000B8, "Member 'FAppleARKitCamera::FocalLength' has a wrong offset!");
static_assert(offsetof(FAppleARKitCamera, PrincipalPoint) == 0x0000C8, "Member 'FAppleARKitCamera::PrincipalPoint' has a wrong offset!");

// ScriptStruct AppleARKit.AppleARKitFrame
// 0x0160 (0x0160 - 0x0000)
struct alignas(0x10) FAppleARKitFrame final
{
public:
	uint8                                         Pad_0[0x160];                                      // 0x0000(0x0160)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAppleARKitFrame) == 0x000010, "Wrong alignment on FAppleARKitFrame");
static_assert(sizeof(FAppleARKitFrame) == 0x000160, "Wrong size on FAppleARKitFrame");

// ScriptStruct AppleARKit.AppleARKitLightEstimate
// 0x000C (0x000C - 0x0000)
struct FAppleARKitLightEstimate final
{
public:
	bool                                          bIsValid;                                          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AmbientIntensity;                                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AmbientColorTemperatureKelvin;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAppleARKitLightEstimate) == 0x000004, "Wrong alignment on FAppleARKitLightEstimate");
static_assert(sizeof(FAppleARKitLightEstimate) == 0x00000C, "Wrong size on FAppleARKitLightEstimate");
static_assert(offsetof(FAppleARKitLightEstimate, bIsValid) == 0x000000, "Member 'FAppleARKitLightEstimate::bIsValid' has a wrong offset!");
static_assert(offsetof(FAppleARKitLightEstimate, AmbientIntensity) == 0x000004, "Member 'FAppleARKitLightEstimate::AmbientIntensity' has a wrong offset!");
static_assert(offsetof(FAppleARKitLightEstimate, AmbientColorTemperatureKelvin) == 0x000008, "Member 'FAppleARKitLightEstimate::AmbientColorTemperatureKelvin' has a wrong offset!");

}


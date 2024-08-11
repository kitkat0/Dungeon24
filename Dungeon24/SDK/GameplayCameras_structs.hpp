#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum GameplayCameras.EOscillatorWaveform
// NumValues: 0x0003
enum class EOscillatorWaveform : uint8
{
	SineWave                                 = 0,
	PerlinNoise                              = 1,
	EOscillatorWaveform_MAX                  = 2,
};

// Enum GameplayCameras.EInitialOscillatorOffset
// NumValues: 0x0003
enum class EInitialOscillatorOffset : uint8
{
	EOO_OffsetRandom                         = 0,
	EOO_OffsetZero                           = 1,
	EOO_MAX                                  = 2,
};

// Enum GameplayCameras.ECameraAnimationPlaySpace
// NumValues: 0x0004
enum class ECameraAnimationPlaySpace : uint8
{
	CameraLocal                              = 0,
	World                                    = 1,
	UserDefined                              = 2,
	ECameraAnimationPlaySpace_MAX            = 3,
};

// Enum GameplayCameras.ECameraAnimationEasingType
// NumValues: 0x0009
enum class ECameraAnimationEasingType : uint8
{
	Linear                                   = 0,
	Sinusoidal                               = 1,
	Quadratic                                = 2,
	Cubic                                    = 3,
	Quartic                                  = 4,
	Quintic                                  = 5,
	Exponential                              = 6,
	Circular                                 = 7,
	ECameraAnimationEasingType_MAX           = 8,
};

// Enum GameplayCameras.EInitialWaveOscillatorOffsetType
// NumValues: 0x0004
enum class EInitialWaveOscillatorOffsetType : uint8
{
	Random                                   = 0,
	Zero                                     = 1,
	Fixed                                    = 2,
	EInitialWaveOscillatorOffsetType_MAX     = 3,
};

// ScriptStruct GameplayCameras.FOscillator
// 0x000C (0x000C - 0x0000)
struct FFOscillator final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialOscillatorOffset                      InitialOffset;                                     // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOscillatorWaveform                           Waveform;                                          // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFOscillator) == 0x000004, "Wrong alignment on FFOscillator");
static_assert(sizeof(FFOscillator) == 0x00000C, "Wrong size on FFOscillator");
static_assert(offsetof(FFOscillator, Amplitude) == 0x000000, "Member 'FFOscillator::Amplitude' has a wrong offset!");
static_assert(offsetof(FFOscillator, Frequency) == 0x000004, "Member 'FFOscillator::Frequency' has a wrong offset!");
static_assert(offsetof(FFOscillator, InitialOffset) == 0x000008, "Member 'FFOscillator::InitialOffset' has a wrong offset!");
static_assert(offsetof(FFOscillator, Waveform) == 0x000009, "Member 'FFOscillator::Waveform' has a wrong offset!");

// ScriptStruct GameplayCameras.ROscillator
// 0x0024 (0x0024 - 0x0000)
struct FROscillator final
{
public:
	struct FFOscillator                           Pitch;                                             // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Yaw;                                               // 0x000C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Roll;                                              // 0x0018(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FROscillator) == 0x000004, "Wrong alignment on FROscillator");
static_assert(sizeof(FROscillator) == 0x000024, "Wrong size on FROscillator");
static_assert(offsetof(FROscillator, Pitch) == 0x000000, "Member 'FROscillator::Pitch' has a wrong offset!");
static_assert(offsetof(FROscillator, Yaw) == 0x00000C, "Member 'FROscillator::Yaw' has a wrong offset!");
static_assert(offsetof(FROscillator, Roll) == 0x000018, "Member 'FROscillator::Roll' has a wrong offset!");

// ScriptStruct GameplayCameras.VOscillator
// 0x0024 (0x0024 - 0x0000)
struct FVOscillator final
{
public:
	struct FFOscillator                           X;                                                 // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Y;                                                 // 0x000C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Z;                                                 // 0x0018(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVOscillator) == 0x000004, "Wrong alignment on FVOscillator");
static_assert(sizeof(FVOscillator) == 0x000024, "Wrong size on FVOscillator");
static_assert(offsetof(FVOscillator, X) == 0x000000, "Member 'FVOscillator::X' has a wrong offset!");
static_assert(offsetof(FVOscillator, Y) == 0x00000C, "Member 'FVOscillator::Y' has a wrong offset!");
static_assert(offsetof(FVOscillator, Z) == 0x000018, "Member 'FVOscillator::Z' has a wrong offset!");

// ScriptStruct GameplayCameras.CameraAnimationParams
// 0x0040 (0x0040 - 0x0000)
struct FCameraAnimationParams final
{
public:
	float                                         PlayRate;                                          // 0x0000(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraAnimationEasingType                    EaseInType;                                        // 0x0008(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EaseInDuration;                                    // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraAnimationEasingType                    EaseOutType;                                       // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EaseOutDuration;                                   // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRandomStartTime;                                  // 0x0019(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DurationOverride;                                  // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraAnimationPlaySpace                     PlaySpace;                                         // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               UserPlaySpaceRot;                                  // 0x0028(0x0018)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCameraAnimationParams) == 0x000008, "Wrong alignment on FCameraAnimationParams");
static_assert(sizeof(FCameraAnimationParams) == 0x000040, "Wrong size on FCameraAnimationParams");
static_assert(offsetof(FCameraAnimationParams, PlayRate) == 0x000000, "Member 'FCameraAnimationParams::PlayRate' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, Scale) == 0x000004, "Member 'FCameraAnimationParams::Scale' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, EaseInType) == 0x000008, "Member 'FCameraAnimationParams::EaseInType' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, EaseInDuration) == 0x00000C, "Member 'FCameraAnimationParams::EaseInDuration' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, EaseOutType) == 0x000010, "Member 'FCameraAnimationParams::EaseOutType' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, EaseOutDuration) == 0x000014, "Member 'FCameraAnimationParams::EaseOutDuration' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, bLoop) == 0x000018, "Member 'FCameraAnimationParams::bLoop' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, bRandomStartTime) == 0x000019, "Member 'FCameraAnimationParams::bRandomStartTime' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, DurationOverride) == 0x00001C, "Member 'FCameraAnimationParams::DurationOverride' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, PlaySpace) == 0x000020, "Member 'FCameraAnimationParams::PlaySpace' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, UserPlaySpaceRot) == 0x000028, "Member 'FCameraAnimationParams::UserPlaySpaceRot' has a wrong offset!");

// ScriptStruct GameplayCameras.CameraAnimationHandle
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x02) FCameraAnimationHandle final
{
public:
	uint8                                         Pad_0[0x4];                                        // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCameraAnimationHandle) == 0x000002, "Wrong alignment on FCameraAnimationHandle");
static_assert(sizeof(FCameraAnimationHandle) == 0x000004, "Wrong size on FCameraAnimationHandle");

// ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
// 0x0070 (0x0070 - 0x0000)
struct FActiveCameraAnimationInfo final
{
public:
	class UCameraAnimationSequence*               Sequence;                                          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraAnimationParams                 Params;                                            // 0x0008(0x0040)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraAnimationHandle                 Handle;                                            // 0x0048(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnimationSequencePlayer*         Player;                                            // 0x0050(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationSequenceCameraStandIn*  CameraStandIn;                                     // 0x0058(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EaseInCurrentTime;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EaseOutCurrentTime;                                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsEasingIn;                                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsEasingOut;                                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveCameraAnimationInfo) == 0x000008, "Wrong alignment on FActiveCameraAnimationInfo");
static_assert(sizeof(FActiveCameraAnimationInfo) == 0x000070, "Wrong size on FActiveCameraAnimationInfo");
static_assert(offsetof(FActiveCameraAnimationInfo, Sequence) == 0x000000, "Member 'FActiveCameraAnimationInfo::Sequence' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, Params) == 0x000008, "Member 'FActiveCameraAnimationInfo::Params' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, Handle) == 0x000048, "Member 'FActiveCameraAnimationInfo::Handle' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, Player) == 0x000050, "Member 'FActiveCameraAnimationInfo::Player' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, CameraStandIn) == 0x000058, "Member 'FActiveCameraAnimationInfo::CameraStandIn' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, EaseInCurrentTime) == 0x000060, "Member 'FActiveCameraAnimationInfo::EaseInCurrentTime' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, EaseOutCurrentTime) == 0x000064, "Member 'FActiveCameraAnimationInfo::EaseOutCurrentTime' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, bIsEasingIn) == 0x000068, "Member 'FActiveCameraAnimationInfo::bIsEasingIn' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, bIsEasingOut) == 0x000069, "Member 'FActiveCameraAnimationInfo::bIsEasingOut' has a wrong offset!");

// ScriptStruct GameplayCameras.PerlinNoiseShaker
// 0x0008 (0x0008 - 0x0000)
struct FPerlinNoiseShaker final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPerlinNoiseShaker) == 0x000004, "Wrong alignment on FPerlinNoiseShaker");
static_assert(sizeof(FPerlinNoiseShaker) == 0x000008, "Wrong size on FPerlinNoiseShaker");
static_assert(offsetof(FPerlinNoiseShaker, Amplitude) == 0x000000, "Member 'FPerlinNoiseShaker::Amplitude' has a wrong offset!");
static_assert(offsetof(FPerlinNoiseShaker, Frequency) == 0x000004, "Member 'FPerlinNoiseShaker::Frequency' has a wrong offset!");

// ScriptStruct GameplayCameras.WaveOscillator
// 0x0010 (0x0010 - 0x0000)
struct FWaveOscillator final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialWaveOscillatorOffsetType              InitialOffsetType;                                 // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FixedOffset;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaveOscillator) == 0x000004, "Wrong alignment on FWaveOscillator");
static_assert(sizeof(FWaveOscillator) == 0x000010, "Wrong size on FWaveOscillator");
static_assert(offsetof(FWaveOscillator, Amplitude) == 0x000000, "Member 'FWaveOscillator::Amplitude' has a wrong offset!");
static_assert(offsetof(FWaveOscillator, Frequency) == 0x000004, "Member 'FWaveOscillator::Frequency' has a wrong offset!");
static_assert(offsetof(FWaveOscillator, InitialOffsetType) == 0x000008, "Member 'FWaveOscillator::InitialOffsetType' has a wrong offset!");
static_assert(offsetof(FWaveOscillator, FixedOffset) == 0x00000C, "Member 'FWaveOscillator::FixedOffset' has a wrong offset!");

}


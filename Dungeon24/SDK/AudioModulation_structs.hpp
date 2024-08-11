#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioModulation

#include "Basic.hpp"

#include "WaveTable_structs.hpp"


namespace SDK
{

// Enum AudioModulation.ESoundModulationLFOShape
// NumValues: 0x0009
enum class ESoundModulationLFOShape : uint8
{
	Sine                                     = 0,
	UpSaw                                    = 1,
	DownSaw                                  = 2,
	Square                                   = 3,
	Triangle                                 = 4,
	Exponential                              = 5,
	RandomSampleHold                         = 6,
	COUNT                                    = 7,
	ESoundModulationLFOShape_MAX             = 8,
};

// ScriptStruct AudioModulation.EnvelopeFollowerGeneratorParams
// 0x0020 (0x0020 - 0x0000)
struct FEnvelopeFollowerGeneratorParams final
{
public:
	bool                                          bBypass;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInvert;                                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioBus*                              AudioBus;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Gain;                                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AttackTime;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTime;                                       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEnvelopeFollowerGeneratorParams) == 0x000008, "Wrong alignment on FEnvelopeFollowerGeneratorParams");
static_assert(sizeof(FEnvelopeFollowerGeneratorParams) == 0x000020, "Wrong size on FEnvelopeFollowerGeneratorParams");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, bBypass) == 0x000000, "Member 'FEnvelopeFollowerGeneratorParams::bBypass' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, bInvert) == 0x000001, "Member 'FEnvelopeFollowerGeneratorParams::bInvert' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, AudioBus) == 0x000008, "Member 'FEnvelopeFollowerGeneratorParams::AudioBus' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, Gain) == 0x000010, "Member 'FEnvelopeFollowerGeneratorParams::Gain' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, AttackTime) == 0x000014, "Member 'FEnvelopeFollowerGeneratorParams::AttackTime' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, ReleaseTime) == 0x000018, "Member 'FEnvelopeFollowerGeneratorParams::ReleaseTime' has a wrong offset!");

// ScriptStruct AudioModulation.SoundModulationLFOParams
// 0x0020 (0x0020 - 0x0000)
struct FSoundModulationLFOParams final
{
public:
	ESoundModulationLFOShape                      Shape;                                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ExponentialFactor;                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Width;                                             // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Amplitude;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Offset;                                            // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Phase;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLooping;                                          // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBypass;                                           // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSoundModulationLFOParams) == 0x000004, "Wrong alignment on FSoundModulationLFOParams");
static_assert(sizeof(FSoundModulationLFOParams) == 0x000020, "Wrong size on FSoundModulationLFOParams");
static_assert(offsetof(FSoundModulationLFOParams, Shape) == 0x000000, "Member 'FSoundModulationLFOParams::Shape' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, ExponentialFactor) == 0x000004, "Member 'FSoundModulationLFOParams::ExponentialFactor' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Width) == 0x000008, "Member 'FSoundModulationLFOParams::Width' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Amplitude) == 0x00000C, "Member 'FSoundModulationLFOParams::Amplitude' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Frequency) == 0x000010, "Member 'FSoundModulationLFOParams::Frequency' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Offset) == 0x000014, "Member 'FSoundModulationLFOParams::Offset' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Phase) == 0x000018, "Member 'FSoundModulationLFOParams::Phase' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, bLooping) == 0x00001C, "Member 'FSoundModulationLFOParams::bLooping' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, bBypass) == 0x00001D, "Member 'FSoundModulationLFOParams::bBypass' has a wrong offset!");

// ScriptStruct AudioModulation.SoundModulationMixValue
// 0x0020 (0x0020 - 0x0000)
struct FSoundModulationMixValue final
{
public:
	float                                         TargetValue;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AttackTime;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTime;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x14];                                       // 0x000C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSoundModulationMixValue) == 0x000004, "Wrong alignment on FSoundModulationMixValue");
static_assert(sizeof(FSoundModulationMixValue) == 0x000020, "Wrong size on FSoundModulationMixValue");
static_assert(offsetof(FSoundModulationMixValue, TargetValue) == 0x000000, "Member 'FSoundModulationMixValue::TargetValue' has a wrong offset!");
static_assert(offsetof(FSoundModulationMixValue, AttackTime) == 0x000004, "Member 'FSoundModulationMixValue::AttackTime' has a wrong offset!");
static_assert(offsetof(FSoundModulationMixValue, ReleaseTime) == 0x000008, "Member 'FSoundModulationMixValue::ReleaseTime' has a wrong offset!");

// ScriptStruct AudioModulation.SoundControlBusMixStage
// 0x0028 (0x0028 - 0x0000)
struct FSoundControlBusMixStage final
{
public:
	class USoundControlBus*                       Bus;                                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulationMixValue               Value;                                             // 0x0008(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundControlBusMixStage) == 0x000008, "Wrong alignment on FSoundControlBusMixStage");
static_assert(sizeof(FSoundControlBusMixStage) == 0x000028, "Wrong size on FSoundControlBusMixStage");
static_assert(offsetof(FSoundControlBusMixStage, Bus) == 0x000000, "Member 'FSoundControlBusMixStage::Bus' has a wrong offset!");
static_assert(offsetof(FSoundControlBusMixStage, Value) == 0x000008, "Member 'FSoundControlBusMixStage::Value' has a wrong offset!");

// ScriptStruct AudioModulation.SoundModulationParameterSettings
// 0x0004 (0x0004 - 0x0000)
struct FSoundModulationParameterSettings final
{
public:
	float                                         ValueNormalized;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundModulationParameterSettings) == 0x000004, "Wrong alignment on FSoundModulationParameterSettings");
static_assert(sizeof(FSoundModulationParameterSettings) == 0x000004, "Wrong size on FSoundModulationParameterSettings");
static_assert(offsetof(FSoundModulationParameterSettings, ValueNormalized) == 0x000000, "Member 'FSoundModulationParameterSettings::ValueNormalized' has a wrong offset!");

// ScriptStruct AudioModulation.SoundModulationTransform
// 0x0000 (0x00A0 - 0x00A0)
struct FSoundModulationTransform final : public FWaveTableTransform
{
};
static_assert(alignof(FSoundModulationTransform) == 0x000008, "Wrong alignment on FSoundModulationTransform");
static_assert(sizeof(FSoundModulationTransform) == 0x0000A0, "Wrong size on FSoundModulationTransform");

// ScriptStruct AudioModulation.SoundControlModulationInput
// 0x00B0 (0x00B0 - 0x0000)
struct FSoundControlModulationInput final
{
public:
	uint8                                         bSampleAndHold : 1;                                // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoundModulationTransform              Transform;                                         // 0x0008(0x00A0)(Edit, NativeAccessSpecifierPublic)
	class USoundControlBus*                       Bus;                                               // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundControlModulationInput) == 0x000008, "Wrong alignment on FSoundControlModulationInput");
static_assert(sizeof(FSoundControlModulationInput) == 0x0000B0, "Wrong size on FSoundControlModulationInput");
static_assert(offsetof(FSoundControlModulationInput, Transform) == 0x000008, "Member 'FSoundControlModulationInput::Transform' has a wrong offset!");
static_assert(offsetof(FSoundControlModulationInput, Bus) == 0x0000A8, "Member 'FSoundControlModulationInput::Bus' has a wrong offset!");

// ScriptStruct AudioModulation.SoundControlModulationPatch
// 0x0020 (0x0020 - 0x0000)
struct FSoundControlModulationPatch final
{
public:
	bool                                          bBypass;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundModulationParameter*              OutputParameter;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundControlModulationInput>   Inputs;                                            // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundControlModulationPatch) == 0x000008, "Wrong alignment on FSoundControlModulationPatch");
static_assert(sizeof(FSoundControlModulationPatch) == 0x000020, "Wrong size on FSoundControlModulationPatch");
static_assert(offsetof(FSoundControlModulationPatch, bBypass) == 0x000000, "Member 'FSoundControlModulationPatch::bBypass' has a wrong offset!");
static_assert(offsetof(FSoundControlModulationPatch, OutputParameter) == 0x000008, "Member 'FSoundControlModulationPatch::OutputParameter' has a wrong offset!");
static_assert(offsetof(FSoundControlModulationPatch, Inputs) == 0x000010, "Member 'FSoundControlModulationPatch::Inputs' has a wrong offset!");

}


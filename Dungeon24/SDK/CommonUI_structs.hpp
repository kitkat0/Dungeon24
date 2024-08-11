#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Enum CommonUI.ECommonNumericType
// NumValues: 0x0005
enum class ECommonNumericType : uint8
{
	Number                                   = 0,
	Percentage                               = 1,
	Seconds                                  = 2,
	Distance                                 = 3,
	ECommonNumericType_MAX                   = 4,
};

// Enum CommonUI.ERichTextInlineIconDisplayMode
// NumValues: 0x0004
enum class ERichTextInlineIconDisplayMode : uint8
{
	IconOnly                                 = 0,
	TextOnly                                 = 1,
	IconAndText                              = 2,
	MAX                                      = 3,
};

// Enum CommonUI.EInputActionState
// NumValues: 0x0005
enum class EInputActionState : uint8
{
	Enabled                                  = 0,
	Disabled                                 = 1,
	Hidden                                   = 2,
	HiddenAndDisabled                        = 3,
	EInputActionState_MAX                    = 4,
};

// Enum CommonUI.ECommonSwitcherTransition
// NumValues: 0x0005
enum class ECommonSwitcherTransition : uint8
{
	FadeOnly                                 = 0,
	Horizontal                               = 1,
	Vertical                                 = 2,
	Zoom                                     = 3,
	ECommonSwitcherTransition_MAX            = 4,
};

// Enum CommonUI.ETransitionCurve
// NumValues: 0x0008
enum class ETransitionCurve : uint8
{
	Linear                                   = 0,
	QuadIn                                   = 1,
	QuadOut                                  = 2,
	QuadInOut                                = 3,
	CubicIn                                  = 4,
	CubicOut                                 = 5,
	CubicInOut                               = 6,
	ETransitionCurve_MAX                     = 7,
};

// ScriptStruct CommonUI.UITag
// 0x0000 (0x0008 - 0x0008)
struct FUITag : public FGameplayTag
{
};
static_assert(alignof(FUITag) == 0x000004, "Wrong alignment on FUITag");
static_assert(sizeof(FUITag) == 0x000008, "Wrong size on FUITag");

// ScriptStruct CommonUI.CommonNumberFormattingOptions
// 0x0014 (0x0014 - 0x0000)
struct FCommonNumberFormattingOptions final
{
public:
	ERoundingMode                                 RoundingMode;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseGrouping;                                       // 0x0001(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinimumIntegralDigits;                             // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaximumIntegralDigits;                             // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinimumFractionalDigits;                           // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaximumFractionalDigits;                           // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonNumberFormattingOptions) == 0x000004, "Wrong alignment on FCommonNumberFormattingOptions");
static_assert(sizeof(FCommonNumberFormattingOptions) == 0x000014, "Wrong size on FCommonNumberFormattingOptions");
static_assert(offsetof(FCommonNumberFormattingOptions, RoundingMode) == 0x000000, "Member 'FCommonNumberFormattingOptions::RoundingMode' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, UseGrouping) == 0x000001, "Member 'FCommonNumberFormattingOptions::UseGrouping' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, MinimumIntegralDigits) == 0x000004, "Member 'FCommonNumberFormattingOptions::MinimumIntegralDigits' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, MaximumIntegralDigits) == 0x000008, "Member 'FCommonNumberFormattingOptions::MaximumIntegralDigits' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, MinimumFractionalDigits) == 0x00000C, "Member 'FCommonNumberFormattingOptions::MinimumFractionalDigits' has a wrong offset!");
static_assert(offsetof(FCommonNumberFormattingOptions, MaximumFractionalDigits) == 0x000010, "Member 'FCommonNumberFormattingOptions::MaximumFractionalDigits' has a wrong offset!");

// ScriptStruct CommonUI.CommonRegisteredTabInfo
// 0x0018 (0x0018 - 0x0000)
struct FCommonRegisteredTabInfo final
{
public:
	int32                                         TabIndex;                                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      TabButton;                                         // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                ContentInstance;                                   // 0x0010(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonRegisteredTabInfo) == 0x000008, "Wrong alignment on FCommonRegisteredTabInfo");
static_assert(sizeof(FCommonRegisteredTabInfo) == 0x000018, "Wrong size on FCommonRegisteredTabInfo");
static_assert(offsetof(FCommonRegisteredTabInfo, TabIndex) == 0x000000, "Member 'FCommonRegisteredTabInfo::TabIndex' has a wrong offset!");
static_assert(offsetof(FCommonRegisteredTabInfo, TabButton) == 0x000008, "Member 'FCommonRegisteredTabInfo::TabButton' has a wrong offset!");
static_assert(offsetof(FCommonRegisteredTabInfo, ContentInstance) == 0x000010, "Member 'FCommonRegisteredTabInfo::ContentInstance' has a wrong offset!");

// ScriptStruct CommonUI.UIActionTag
// 0x0000 (0x0008 - 0x0008)
struct FUIActionTag final : public FUITag
{
};
static_assert(alignof(FUIActionTag) == 0x000004, "Wrong alignment on FUIActionTag");
static_assert(sizeof(FUIActionTag) == 0x000008, "Wrong size on FUIActionTag");

// ScriptStruct CommonUI.CommonInputActionHandlerData
// 0x0020 (0x0020 - 0x0000)
struct FCommonInputActionHandlerData final
{
public:
	struct FDataTableRowHandle                    InputActionRow;                                    // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	EInputActionState                             State;                                             // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_11[0xF];                                       // 0x0011(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCommonInputActionHandlerData) == 0x000008, "Wrong alignment on FCommonInputActionHandlerData");
static_assert(sizeof(FCommonInputActionHandlerData) == 0x000020, "Wrong size on FCommonInputActionHandlerData");
static_assert(offsetof(FCommonInputActionHandlerData, InputActionRow) == 0x000000, "Member 'FCommonInputActionHandlerData::InputActionRow' has a wrong offset!");
static_assert(offsetof(FCommonInputActionHandlerData, State) == 0x000010, "Member 'FCommonInputActionHandlerData::State' has a wrong offset!");

// ScriptStruct CommonUI.CommonButtonStyleOptionalSlateSound
// 0x0020 (0x0020 - 0x0000)
struct FCommonButtonStyleOptionalSlateSound final
{
public:
	bool                                          bHasSound;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateSound                            Sound;                                             // 0x0008(0x0018)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonButtonStyleOptionalSlateSound) == 0x000008, "Wrong alignment on FCommonButtonStyleOptionalSlateSound");
static_assert(sizeof(FCommonButtonStyleOptionalSlateSound) == 0x000020, "Wrong size on FCommonButtonStyleOptionalSlateSound");
static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, bHasSound) == 0x000000, "Member 'FCommonButtonStyleOptionalSlateSound::bHasSound' has a wrong offset!");
static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, Sound) == 0x000008, "Member 'FCommonButtonStyleOptionalSlateSound::Sound' has a wrong offset!");

// ScriptStruct CommonUI.RichTextIconData
// 0x0058 (0x0060 - 0x0008)
struct FRichTextIconData final : public FTableRowBase
{
public:
	class FText                                   DisplayName;                                       // 0x0008(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                 ResourceObject;                                    // 0x0020(0x0030)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ImageSize;                                         // 0x0050(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRichTextIconData) == 0x000008, "Wrong alignment on FRichTextIconData");
static_assert(sizeof(FRichTextIconData) == 0x000060, "Wrong size on FRichTextIconData");
static_assert(offsetof(FRichTextIconData, DisplayName) == 0x000008, "Member 'FRichTextIconData::DisplayName' has a wrong offset!");
static_assert(offsetof(FRichTextIconData, ResourceObject) == 0x000020, "Member 'FRichTextIconData::ResourceObject' has a wrong offset!");
static_assert(offsetof(FRichTextIconData, ImageSize) == 0x000050, "Member 'FRichTextIconData::ImageSize' has a wrong offset!");

// ScriptStruct CommonUI.CommonInputTypeInfo
// 0x00F0 (0x00F0 - 0x0000)
struct FCommonInputTypeInfo final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EInputActionState                             OverrrideState;                                    // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bActionRequiresHold;                               // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HoldTime;                                          // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                            OverrideBrush;                                     // 0x0020(0x00D0)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonInputTypeInfo) == 0x000010, "Wrong alignment on FCommonInputTypeInfo");
static_assert(sizeof(FCommonInputTypeInfo) == 0x0000F0, "Wrong size on FCommonInputTypeInfo");
static_assert(offsetof(FCommonInputTypeInfo, Key) == 0x000000, "Member 'FCommonInputTypeInfo::Key' has a wrong offset!");
static_assert(offsetof(FCommonInputTypeInfo, OverrrideState) == 0x000018, "Member 'FCommonInputTypeInfo::OverrrideState' has a wrong offset!");
static_assert(offsetof(FCommonInputTypeInfo, bActionRequiresHold) == 0x000019, "Member 'FCommonInputTypeInfo::bActionRequiresHold' has a wrong offset!");
static_assert(offsetof(FCommonInputTypeInfo, HoldTime) == 0x00001C, "Member 'FCommonInputTypeInfo::HoldTime' has a wrong offset!");
static_assert(offsetof(FCommonInputTypeInfo, OverrideBrush) == 0x000020, "Member 'FCommonInputTypeInfo::OverrideBrush' has a wrong offset!");

// ScriptStruct CommonUI.CommonInputActionDataBase
// 0x0358 (0x0360 - 0x0008)
struct FCommonInputActionDataBase final : public FTableRowBase
{
public:
	class FText                                   DisplayName;                                       // 0x0008(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                   HoldDisplayName;                                   // 0x0020(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         NavBarPriority;                                    // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCommonInputTypeInfo                   KeyboardInputTypeInfo;                             // 0x0040(0x00F0)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FCommonInputTypeInfo                   DefaultGamepadInputTypeInfo;                       // 0x0130(0x00F0)(Edit, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FCommonInputTypeInfo> GamepadInputOverrides;                             // 0x0220(0x0050)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FCommonInputTypeInfo                   TouchInputTypeInfo;                                // 0x0270(0x00F0)(Edit, Protected, NativeAccessSpecifierProtected)
};
static_assert(alignof(FCommonInputActionDataBase) == 0x000010, "Wrong alignment on FCommonInputActionDataBase");
static_assert(sizeof(FCommonInputActionDataBase) == 0x000360, "Wrong size on FCommonInputActionDataBase");
static_assert(offsetof(FCommonInputActionDataBase, DisplayName) == 0x000008, "Member 'FCommonInputActionDataBase::DisplayName' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, HoldDisplayName) == 0x000020, "Member 'FCommonInputActionDataBase::HoldDisplayName' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, NavBarPriority) == 0x000038, "Member 'FCommonInputActionDataBase::NavBarPriority' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, KeyboardInputTypeInfo) == 0x000040, "Member 'FCommonInputActionDataBase::KeyboardInputTypeInfo' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, DefaultGamepadInputTypeInfo) == 0x000130, "Member 'FCommonInputActionDataBase::DefaultGamepadInputTypeInfo' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, GamepadInputOverrides) == 0x000220, "Member 'FCommonInputActionDataBase::GamepadInputOverrides' has a wrong offset!");
static_assert(offsetof(FCommonInputActionDataBase, TouchInputTypeInfo) == 0x000270, "Member 'FCommonInputActionDataBase::TouchInputTypeInfo' has a wrong offset!");

// ScriptStruct CommonUI.UIActionKeyMapping
// 0x0020 (0x0020 - 0x0000)
struct FUIActionKeyMapping final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoldTime;                                          // 0x0018(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUIActionKeyMapping) == 0x000008, "Wrong alignment on FUIActionKeyMapping");
static_assert(sizeof(FUIActionKeyMapping) == 0x000020, "Wrong size on FUIActionKeyMapping");
static_assert(offsetof(FUIActionKeyMapping, Key) == 0x000000, "Member 'FUIActionKeyMapping::Key' has a wrong offset!");
static_assert(offsetof(FUIActionKeyMapping, HoldTime) == 0x000018, "Member 'FUIActionKeyMapping::HoldTime' has a wrong offset!");

// ScriptStruct CommonUI.UIInputAction
// 0x0030 (0x0030 - 0x0000)
struct FUIInputAction final
{
public:
	struct FUIActionTag                           ActionTag;                                         // 0x0000(0x0008)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   DefaultDisplayName;                                // 0x0008(0x0018)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FUIActionKeyMapping>            KeyMappings;                                       // 0x0020(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUIInputAction) == 0x000008, "Wrong alignment on FUIInputAction");
static_assert(sizeof(FUIInputAction) == 0x000030, "Wrong size on FUIInputAction");
static_assert(offsetof(FUIInputAction, ActionTag) == 0x000000, "Member 'FUIInputAction::ActionTag' has a wrong offset!");
static_assert(offsetof(FUIInputAction, DefaultDisplayName) == 0x000008, "Member 'FUIInputAction::DefaultDisplayName' has a wrong offset!");
static_assert(offsetof(FUIInputAction, KeyMappings) == 0x000020, "Member 'FUIInputAction::KeyMappings' has a wrong offset!");

// ScriptStruct CommonUI.CommonAnalogCursorSettings
// 0x0024 (0x0024 - 0x0000)
struct FCommonAnalogCursorSettings final
{
public:
	int32                                         PreprocessorPriority;                              // 0x0000(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableCursorAcceleration;                         // 0x0004(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CursorAcceleration;                                // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CursorMaxSpeed;                                    // 0x000C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CursorDeadZone;                                    // 0x0010(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoverSlowdownFactor;                               // 0x0014(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScrollDeadZone;                                    // 0x0018(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScrollUpdatePeriod;                                // 0x001C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScrollMultiplier;                                  // 0x0020(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonAnalogCursorSettings) == 0x000004, "Wrong alignment on FCommonAnalogCursorSettings");
static_assert(sizeof(FCommonAnalogCursorSettings) == 0x000024, "Wrong size on FCommonAnalogCursorSettings");
static_assert(offsetof(FCommonAnalogCursorSettings, PreprocessorPriority) == 0x000000, "Member 'FCommonAnalogCursorSettings::PreprocessorPriority' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, bEnableCursorAcceleration) == 0x000004, "Member 'FCommonAnalogCursorSettings::bEnableCursorAcceleration' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorAcceleration) == 0x000008, "Member 'FCommonAnalogCursorSettings::CursorAcceleration' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorMaxSpeed) == 0x00000C, "Member 'FCommonAnalogCursorSettings::CursorMaxSpeed' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorDeadZone) == 0x000010, "Member 'FCommonAnalogCursorSettings::CursorDeadZone' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, HoverSlowdownFactor) == 0x000014, "Member 'FCommonAnalogCursorSettings::HoverSlowdownFactor' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollDeadZone) == 0x000018, "Member 'FCommonAnalogCursorSettings::ScrollDeadZone' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollUpdatePeriod) == 0x00001C, "Member 'FCommonAnalogCursorSettings::ScrollUpdatePeriod' has a wrong offset!");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollMultiplier) == 0x000020, "Member 'FCommonAnalogCursorSettings::ScrollMultiplier' has a wrong offset!");

}


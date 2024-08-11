#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DLSS

#include "Basic.hpp"

#include "DLSS_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DLSS.DLSSOverrideSettings
// 0x0008 (0x0030 - 0x0028)
class UDLSSOverrideSettings final : public UObject
{
public:
	EDLSSSettingOverride                          EnableDLSSInEditorViewportsOverride;               // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSSettingOverride                          EnableDLSSInPlayInEditorViewportsOverride;         // 0x0029(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x002A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSSettingOverride                          ShowDLSSSDebugOnScreenMessages;                    // 0x002B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSOverrideSettings">();
	}
	static class UDLSSOverrideSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSOverrideSettings>();
	}
};
static_assert(alignof(UDLSSOverrideSettings) == 0x000008, "Wrong alignment on UDLSSOverrideSettings");
static_assert(sizeof(UDLSSOverrideSettings) == 0x000030, "Wrong size on UDLSSOverrideSettings");
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride) == 0x000028, "Member 'UDLSSOverrideSettings::EnableDLSSInEditorViewportsOverride' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride) == 0x000029, "Member 'UDLSSOverrideSettings::EnableDLSSInPlayInEditorViewportsOverride' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, bShowDLSSIncompatiblePluginsToolsWarnings) == 0x00002A, "Member 'UDLSSOverrideSettings::bShowDLSSIncompatiblePluginsToolsWarnings' has a wrong offset!");
static_assert(offsetof(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages) == 0x00002B, "Member 'UDLSSOverrideSettings::ShowDLSSSDebugOnScreenMessages' has a wrong offset!");

// Class DLSS.DLSSSettings
// 0x0040 (0x0068 - 0x0028)
class UDLSSSettings final : public UObject
{
public:
	bool                                          bEnableDLSSD3D12;                                  // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSD3D11;                                  // 0x0029(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSVulkan;                                 // 0x002A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSInEditorViewports;                      // 0x002B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSInPlayInEditorViewports;                // 0x002C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowDLSSSDebugOnScreenMessages;                   // 0x002D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GenericDLSSBinaryPath;                             // 0x0030(0x0010)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenericDLSSBinaryExists;                          // 0x0040(0x0001)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        NVIDIANGXApplicationId;                            // 0x0044(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CustomDLSSBinaryPath;                              // 0x0048(0x0010)(Edit, ZeroConstructor, Config, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCustomDLSSBinaryExists;                           // 0x0058(0x0001)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowOTAUpdate;                                   // 0x0059(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x005A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLAAPreset;                                        // 0x005B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x1];                                       // 0x005C(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	EDLSSPreset                                   DLSSQualityPreset;                                 // 0x005D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSBalancedPreset;                                // 0x005E(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSPerformancePreset;                             // 0x005F(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDLSSPreset                                   DLSSUltraPerformancePreset;                        // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTgfNGXEnable;                                     // 0x0061(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DLSSSettings">();
	}
	static class UDLSSSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSSettings>();
	}
};
static_assert(alignof(UDLSSSettings) == 0x000008, "Wrong alignment on UDLSSSettings");
static_assert(sizeof(UDLSSSettings) == 0x000068, "Wrong size on UDLSSSettings");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D12) == 0x000028, "Member 'UDLSSSettings::bEnableDLSSD3D12' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D11) == 0x000029, "Member 'UDLSSSettings::bEnableDLSSD3D11' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSVulkan) == 0x00002A, "Member 'UDLSSSettings::bEnableDLSSVulkan' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSInEditorViewports) == 0x00002B, "Member 'UDLSSSettings::bEnableDLSSInEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSInPlayInEditorViewports) == 0x00002C, "Member 'UDLSSSettings::bEnableDLSSInPlayInEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bShowDLSSSDebugOnScreenMessages) == 0x00002D, "Member 'UDLSSSettings::bShowDLSSSDebugOnScreenMessages' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, GenericDLSSBinaryPath) == 0x000030, "Member 'UDLSSSettings::GenericDLSSBinaryPath' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bGenericDLSSBinaryExists) == 0x000040, "Member 'UDLSSSettings::bGenericDLSSBinaryExists' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, NVIDIANGXApplicationId) == 0x000044, "Member 'UDLSSSettings::NVIDIANGXApplicationId' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, CustomDLSSBinaryPath) == 0x000048, "Member 'UDLSSSettings::CustomDLSSBinaryPath' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bCustomDLSSBinaryExists) == 0x000058, "Member 'UDLSSSettings::bCustomDLSSBinaryExists' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bAllowOTAUpdate) == 0x000059, "Member 'UDLSSSettings::bAllowOTAUpdate' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bShowDLSSIncompatiblePluginsToolsWarnings) == 0x00005A, "Member 'UDLSSSettings::bShowDLSSIncompatiblePluginsToolsWarnings' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLAAPreset) == 0x00005B, "Member 'UDLSSSettings::DLAAPreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLSSQualityPreset) == 0x00005D, "Member 'UDLSSSettings::DLSSQualityPreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLSSBalancedPreset) == 0x00005E, "Member 'UDLSSSettings::DLSSBalancedPreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLSSPerformancePreset) == 0x00005F, "Member 'UDLSSSettings::DLSSPerformancePreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, DLSSUltraPerformancePreset) == 0x000060, "Member 'UDLSSSettings::DLSSUltraPerformancePreset' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bTgfNGXEnable) == 0x000061, "Member 'UDLSSSettings::bTgfNGXEnable' has a wrong offset!");

}


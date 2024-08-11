#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelInfinite

#include "Basic.hpp"

#include "LevelInfinite_structs.hpp"
#include "INTLCore_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LevelInfinite.LevelInfiniteAPI.ClearGameNativeDirectory
// 0x0001 (0x0001 - 0x0000)
struct LevelInfiniteAPI_ClearGameNativeDirectory final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_ClearGameNativeDirectory) == 0x000001, "Wrong alignment on LevelInfiniteAPI_ClearGameNativeDirectory");
static_assert(sizeof(LevelInfiniteAPI_ClearGameNativeDirectory) == 0x000001, "Wrong size on LevelInfiniteAPI_ClearGameNativeDirectory");
static_assert(offsetof(LevelInfiniteAPI_ClearGameNativeDirectory, ReturnValue) == 0x000000, "Member 'LevelInfiniteAPI_ClearGameNativeDirectory::ReturnValue' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.FocusLIPassUI
// 0x0001 (0x0001 - 0x0000)
struct LevelInfiniteAPI_FocusLIPassUI final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_FocusLIPassUI) == 0x000001, "Wrong alignment on LevelInfiniteAPI_FocusLIPassUI");
static_assert(sizeof(LevelInfiniteAPI_FocusLIPassUI) == 0x000001, "Wrong size on LevelInfiniteAPI_FocusLIPassUI");
static_assert(offsetof(LevelInfiniteAPI_FocusLIPassUI, ReturnValue) == 0x000000, "Member 'LevelInfiniteAPI_FocusLIPassUI::ReturnValue' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.Init
// 0x00D0 (0x00D0 - 0x0000)
struct LevelInfiniteAPI_Init final
{
public:
	class UGameInstance*                          Instance;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Host;                                              // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLIUserData                            UserData;                                          // 0x0018(0x00B0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          IsTest;                                            // 0x00C8(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ReturnValue;                                       // 0x00CC(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_Init) == 0x000008, "Wrong alignment on LevelInfiniteAPI_Init");
static_assert(sizeof(LevelInfiniteAPI_Init) == 0x0000D0, "Wrong size on LevelInfiniteAPI_Init");
static_assert(offsetof(LevelInfiniteAPI_Init, Instance) == 0x000000, "Member 'LevelInfiniteAPI_Init::Instance' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_Init, Host) == 0x000008, "Member 'LevelInfiniteAPI_Init::Host' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_Init, UserData) == 0x000018, "Member 'LevelInfiniteAPI_Init::UserData' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_Init, IsTest) == 0x0000C8, "Member 'LevelInfiniteAPI_Init::IsTest' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_Init, ReturnValue) == 0x0000CC, "Member 'LevelInfiniteAPI_Init::ReturnValue' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.InitLI
// 0x0038 (0x0038 - 0x0000)
struct LevelInfiniteAPI_InitLI final
{
public:
	class UGameInstance*                          Instance;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsTest;                                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AppVersion;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LangType;                                          // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelInfiniteAPI_InitLI) == 0x000008, "Wrong alignment on LevelInfiniteAPI_InitLI");
static_assert(sizeof(LevelInfiniteAPI_InitLI) == 0x000038, "Wrong size on LevelInfiniteAPI_InitLI");
static_assert(offsetof(LevelInfiniteAPI_InitLI, Instance) == 0x000000, "Member 'LevelInfiniteAPI_InitLI::Instance' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_InitLI, IsTest) == 0x000008, "Member 'LevelInfiniteAPI_InitLI::IsTest' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_InitLI, AppVersion) == 0x000010, "Member 'LevelInfiniteAPI_InitLI::AppVersion' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_InitLI, LangType) == 0x000020, "Member 'LevelInfiniteAPI_InitLI::LangType' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_InitLI, ReturnValue) == 0x000030, "Member 'LevelInfiniteAPI_InitLI::ReturnValue' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.InitLIP
// 0x0030 (0x0030 - 0x0000)
struct LevelInfiniteAPI_InitLIP final
{
public:
	class UGameInstance*                          Instance;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppVersion;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LangType;                                          // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LevelInfiniteAPI_InitLIP) == 0x000008, "Wrong alignment on LevelInfiniteAPI_InitLIP");
static_assert(sizeof(LevelInfiniteAPI_InitLIP) == 0x000030, "Wrong size on LevelInfiniteAPI_InitLIP");
static_assert(offsetof(LevelInfiniteAPI_InitLIP, Instance) == 0x000000, "Member 'LevelInfiniteAPI_InitLIP::Instance' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_InitLIP, AppVersion) == 0x000008, "Member 'LevelInfiniteAPI_InitLIP::AppVersion' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_InitLIP, LangType) == 0x000018, "Member 'LevelInfiniteAPI_InitLIP::LangType' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_InitLIP, ReturnValue) == 0x000028, "Member 'LevelInfiniteAPI_InitLIP::ReturnValue' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.LoginChannelWithLIPASS
// 0x0028 (0x0028 - 0x0000)
struct LevelInfiniteAPI_LoginChannelWithLIPASS final
{
public:
	EINTLLoginChannel                             Channel;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Permissions;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExtraJson;                                         // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_LoginChannelWithLIPASS) == 0x000008, "Wrong alignment on LevelInfiniteAPI_LoginChannelWithLIPASS");
static_assert(sizeof(LevelInfiniteAPI_LoginChannelWithLIPASS) == 0x000028, "Wrong size on LevelInfiniteAPI_LoginChannelWithLIPASS");
static_assert(offsetof(LevelInfiniteAPI_LoginChannelWithLIPASS, Channel) == 0x000000, "Member 'LevelInfiniteAPI_LoginChannelWithLIPASS::Channel' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_LoginChannelWithLIPASS, Permissions) == 0x000008, "Member 'LevelInfiniteAPI_LoginChannelWithLIPASS::Permissions' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_LoginChannelWithLIPASS, ExtraJson) == 0x000018, "Member 'LevelInfiniteAPI_LoginChannelWithLIPASS::ExtraJson' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.ModifyLogicSchemeType
// 0x0001 (0x0001 - 0x0000)
struct LevelInfiniteAPI_ModifyLogicSchemeType final
{
public:
	ELILogicSchemeType                            LILogicSchemeType;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_ModifyLogicSchemeType) == 0x000001, "Wrong alignment on LevelInfiniteAPI_ModifyLogicSchemeType");
static_assert(sizeof(LevelInfiniteAPI_ModifyLogicSchemeType) == 0x000001, "Wrong size on LevelInfiniteAPI_ModifyLogicSchemeType");
static_assert(offsetof(LevelInfiniteAPI_ModifyLogicSchemeType, LILogicSchemeType) == 0x000000, "Member 'LevelInfiniteAPI_ModifyLogicSchemeType::LILogicSchemeType' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.OnBackPressed
// 0x0001 (0x0001 - 0x0000)
struct LevelInfiniteAPI_OnBackPressed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_OnBackPressed) == 0x000001, "Wrong alignment on LevelInfiniteAPI_OnBackPressed");
static_assert(sizeof(LevelInfiniteAPI_OnBackPressed) == 0x000001, "Wrong size on LevelInfiniteAPI_OnBackPressed");
static_assert(offsetof(LevelInfiniteAPI_OnBackPressed, ReturnValue) == 0x000000, "Member 'LevelInfiniteAPI_OnBackPressed::ReturnValue' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.OpenAccountCenterWithParams
// 0x000C (0x000C - 0x0000)
struct LevelInfiniteAPI_OpenAccountCenterWithParams final
{
public:
	struct FINTLDeleteAccountParams               Params_0;                                          // 0x0000(0x000C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_OpenAccountCenterWithParams) == 0x000004, "Wrong alignment on LevelInfiniteAPI_OpenAccountCenterWithParams");
static_assert(sizeof(LevelInfiniteAPI_OpenAccountCenterWithParams) == 0x00000C, "Wrong size on LevelInfiniteAPI_OpenAccountCenterWithParams");
static_assert(offsetof(LevelInfiniteAPI_OpenAccountCenterWithParams, Params_0) == 0x000000, "Member 'LevelInfiniteAPI_OpenAccountCenterWithParams::Params_0' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.SetLanguage
// 0x0010 (0x0010 - 0x0000)
struct LevelInfiniteAPI_SetLanguage final
{
public:
	class FString                                 Language;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_SetLanguage) == 0x000008, "Wrong alignment on LevelInfiniteAPI_SetLanguage");
static_assert(sizeof(LevelInfiniteAPI_SetLanguage) == 0x000010, "Wrong size on LevelInfiniteAPI_SetLanguage");
static_assert(offsetof(LevelInfiniteAPI_SetLanguage, Language) == 0x000000, "Member 'LevelInfiniteAPI_SetLanguage::Language' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.SetUICustomScale
// 0x0004 (0x0004 - 0x0000)
struct LevelInfiniteAPI_SetUICustomScale final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_SetUICustomScale) == 0x000004, "Wrong alignment on LevelInfiniteAPI_SetUICustomScale");
static_assert(sizeof(LevelInfiniteAPI_SetUICustomScale) == 0x000004, "Wrong size on LevelInfiniteAPI_SetUICustomScale");
static_assert(offsetof(LevelInfiniteAPI_SetUICustomScale, Scale) == 0x000000, "Member 'LevelInfiniteAPI_SetUICustomScale::Scale' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.SetUIRoot
// 0x0008 (0x0008 - 0x0000)
struct LevelInfiniteAPI_SetUIRoot final
{
public:
	class UCanvasPanel*                           UiRoot;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_SetUIRoot) == 0x000008, "Wrong alignment on LevelInfiniteAPI_SetUIRoot");
static_assert(sizeof(LevelInfiniteAPI_SetUIRoot) == 0x000008, "Wrong size on LevelInfiniteAPI_SetUIRoot");
static_assert(offsetof(LevelInfiniteAPI_SetUIRoot, UiRoot) == 0x000000, "Member 'LevelInfiniteAPI_SetUIRoot::UiRoot' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.SetUserData
// 0x00B0 (0x00B0 - 0x0000)
struct LevelInfiniteAPI_SetUserData final
{
public:
	struct FLIUserData                            UserData;                                          // 0x0000(0x00B0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_SetUserData) == 0x000008, "Wrong alignment on LevelInfiniteAPI_SetUserData");
static_assert(sizeof(LevelInfiniteAPI_SetUserData) == 0x0000B0, "Wrong size on LevelInfiniteAPI_SetUserData");
static_assert(offsetof(LevelInfiniteAPI_SetUserData, UserData) == 0x000000, "Member 'LevelInfiniteAPI_SetUserData::UserData' has a wrong offset!");

// Function LevelInfinite.LevelInfiniteAPI.UpdateCountryList
// 0x0020 (0x0020 - 0x0000)
struct LevelInfiniteAPI_UpdateCountryList final
{
public:
	TArray<class FString>                         AllowList;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                         blockList;                                         // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LevelInfiniteAPI_UpdateCountryList) == 0x000008, "Wrong alignment on LevelInfiniteAPI_UpdateCountryList");
static_assert(sizeof(LevelInfiniteAPI_UpdateCountryList) == 0x000020, "Wrong size on LevelInfiniteAPI_UpdateCountryList");
static_assert(offsetof(LevelInfiniteAPI_UpdateCountryList, AllowList) == 0x000000, "Member 'LevelInfiniteAPI_UpdateCountryList::AllowList' has a wrong offset!");
static_assert(offsetof(LevelInfiniteAPI_UpdateCountryList, blockList) == 0x000010, "Member 'LevelInfiniteAPI_UpdateCountryList::blockList' has a wrong offset!");

// Function LevelInfinite.LIHyperLinkTextBlockDecorator.OnHyperLinkClick
// 0x0050 (0x0050 - 0x0000)
struct LIHyperLinkTextBlockDecorator_OnHyperLinkClick final
{
public:
	TMap<class FString, class FString>            MetaData;                                          // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LIHyperLinkTextBlockDecorator_OnHyperLinkClick) == 0x000008, "Wrong alignment on LIHyperLinkTextBlockDecorator_OnHyperLinkClick");
static_assert(sizeof(LIHyperLinkTextBlockDecorator_OnHyperLinkClick) == 0x000050, "Wrong size on LIHyperLinkTextBlockDecorator_OnHyperLinkClick");
static_assert(offsetof(LIHyperLinkTextBlockDecorator_OnHyperLinkClick, MetaData) == 0x000000, "Member 'LIHyperLinkTextBlockDecorator_OnHyperLinkClick::MetaData' has a wrong offset!");

// DelegateFunction LevelInfinite.LIPanelBase.LIAnimationEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LIPanelBase_LIAnimationEvent__DelegateSignature final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LIPanelBase_LIAnimationEvent__DelegateSignature) == 0x000008, "Wrong alignment on LIPanelBase_LIAnimationEvent__DelegateSignature");
static_assert(sizeof(LIPanelBase_LIAnimationEvent__DelegateSignature) == 0x000008, "Wrong size on LIPanelBase_LIAnimationEvent__DelegateSignature");
static_assert(offsetof(LIPanelBase_LIAnimationEvent__DelegateSignature, Animation) == 0x000000, "Member 'LIPanelBase_LIAnimationEvent__DelegateSignature::Animation' has a wrong offset!");

// DelegateFunction LevelInfinite.LIPanelBase.LIFocusActionEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LIPanelBase_LIFocusActionEvent__DelegateSignature final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LIPanelBase_LIFocusActionEvent__DelegateSignature) == 0x000004, "Wrong alignment on LIPanelBase_LIFocusActionEvent__DelegateSignature");
static_assert(sizeof(LIPanelBase_LIFocusActionEvent__DelegateSignature) == 0x000008, "Wrong size on LIPanelBase_LIFocusActionEvent__DelegateSignature");
static_assert(offsetof(LIPanelBase_LIFocusActionEvent__DelegateSignature, InFocusEvent) == 0x000000, "Member 'LIPanelBase_LIFocusActionEvent__DelegateSignature::InFocusEvent' has a wrong offset!");

// DelegateFunction LevelInfinite.LIPanelBase.LIKeyActionEvent__DelegateSignature
// 0x0058 (0x0058 - 0x0000)
struct LIPanelBase_LIKeyActionEvent__DelegateSignature final
{
public:
	struct FGeometry                              InGeometry;                                        // 0x0000(0x0040)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 InKeyName;                                         // 0x0040(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LIPanelBase_LIKeyActionEvent__DelegateSignature) == 0x000008, "Wrong alignment on LIPanelBase_LIKeyActionEvent__DelegateSignature");
static_assert(sizeof(LIPanelBase_LIKeyActionEvent__DelegateSignature) == 0x000058, "Wrong size on LIPanelBase_LIKeyActionEvent__DelegateSignature");
static_assert(offsetof(LIPanelBase_LIKeyActionEvent__DelegateSignature, InGeometry) == 0x000000, "Member 'LIPanelBase_LIKeyActionEvent__DelegateSignature::InGeometry' has a wrong offset!");
static_assert(offsetof(LIPanelBase_LIKeyActionEvent__DelegateSignature, InKeyName) == 0x000040, "Member 'LIPanelBase_LIKeyActionEvent__DelegateSignature::InKeyName' has a wrong offset!");
static_assert(offsetof(LIPanelBase_LIKeyActionEvent__DelegateSignature, ReturnValue) == 0x000050, "Member 'LIPanelBase_LIKeyActionEvent__DelegateSignature::ReturnValue' has a wrong offset!");

// DelegateFunction LevelInfinite.LIPanelBase.LITickEvent__DelegateSignature
// 0x0048 (0x0048 - 0x0000)
struct LIPanelBase_LITickEvent__DelegateSignature final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LIPanelBase_LITickEvent__DelegateSignature) == 0x000008, "Wrong alignment on LIPanelBase_LITickEvent__DelegateSignature");
static_assert(sizeof(LIPanelBase_LITickEvent__DelegateSignature) == 0x000048, "Wrong size on LIPanelBase_LITickEvent__DelegateSignature");
static_assert(offsetof(LIPanelBase_LITickEvent__DelegateSignature, MyGeometry) == 0x000000, "Member 'LIPanelBase_LITickEvent__DelegateSignature::MyGeometry' has a wrong offset!");
static_assert(offsetof(LIPanelBase_LITickEvent__DelegateSignature, InDeltaTime) == 0x000040, "Member 'LIPanelBase_LITickEvent__DelegateSignature::InDeltaTime' has a wrong offset!");

// Function LevelInfinite.LIPanelBase.SetLIUIFocus
// 0x0008 (0x0008 - 0x0000)
struct LIPanelBase_SetLIUIFocus final
{
public:
	class UWidget*                                InWidgetToFocus;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LIPanelBase_SetLIUIFocus) == 0x000008, "Wrong alignment on LIPanelBase_SetLIUIFocus");
static_assert(sizeof(LIPanelBase_SetLIUIFocus) == 0x000008, "Wrong size on LIPanelBase_SetLIUIFocus");
static_assert(offsetof(LIPanelBase_SetLIUIFocus, InWidgetToFocus) == 0x000000, "Member 'LIPanelBase_SetLIUIFocus::InWidgetToFocus' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.GetChartValue
// 0x0008 (0x0008 - 0x0000)
struct RadarChartWidget_GetChartValue final
{
public:
	uint8                                         Param_Index;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_GetChartValue) == 0x000004, "Wrong alignment on RadarChartWidget_GetChartValue");
static_assert(sizeof(RadarChartWidget_GetChartValue) == 0x000008, "Wrong size on RadarChartWidget_GetChartValue");
static_assert(offsetof(RadarChartWidget_GetChartValue, Param_Index) == 0x000000, "Member 'RadarChartWidget_GetChartValue::Param_Index' has a wrong offset!");
static_assert(offsetof(RadarChartWidget_GetChartValue, ReturnValue) == 0x000004, "Member 'RadarChartWidget_GetChartValue::ReturnValue' has a wrong offset!");

// DelegateFunction LevelInfinite.RadarChartWidget.GetUInt8__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct RadarChartWidget_GetUInt8__DelegateSignature final
{
public:
	uint8                                         ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_GetUInt8__DelegateSignature) == 0x000001, "Wrong alignment on RadarChartWidget_GetUInt8__DelegateSignature");
static_assert(sizeof(RadarChartWidget_GetUInt8__DelegateSignature) == 0x000001, "Wrong size on RadarChartWidget_GetUInt8__DelegateSignature");
static_assert(offsetof(RadarChartWidget_GetUInt8__DelegateSignature, ReturnValue) == 0x000000, "Member 'RadarChartWidget_GetUInt8__DelegateSignature::ReturnValue' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetChartColor
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetChartColor final
{
public:
	struct FColor                                 InColor;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetChartColor) == 0x000004, "Wrong alignment on RadarChartWidget_SetChartColor");
static_assert(sizeof(RadarChartWidget_SetChartColor) == 0x000004, "Wrong size on RadarChartWidget_SetChartColor");
static_assert(offsetof(RadarChartWidget_SetChartColor, InColor) == 0x000000, "Member 'RadarChartWidget_SetChartColor::InColor' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetChartOutlineColor
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetChartOutlineColor final
{
public:
	struct FColor                                 InColor;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetChartOutlineColor) == 0x000004, "Wrong alignment on RadarChartWidget_SetChartOutlineColor");
static_assert(sizeof(RadarChartWidget_SetChartOutlineColor) == 0x000004, "Wrong size on RadarChartWidget_SetChartOutlineColor");
static_assert(offsetof(RadarChartWidget_SetChartOutlineColor, InColor) == 0x000000, "Member 'RadarChartWidget_SetChartOutlineColor::InColor' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetChartOutlineThickness
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetChartOutlineThickness final
{
public:
	float                                         InThickness;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetChartOutlineThickness) == 0x000004, "Wrong alignment on RadarChartWidget_SetChartOutlineThickness");
static_assert(sizeof(RadarChartWidget_SetChartOutlineThickness) == 0x000004, "Wrong size on RadarChartWidget_SetChartOutlineThickness");
static_assert(offsetof(RadarChartWidget_SetChartOutlineThickness, InThickness) == 0x000000, "Member 'RadarChartWidget_SetChartOutlineThickness::InThickness' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetChartValue
// 0x0008 (0x0008 - 0x0000)
struct RadarChartWidget_SetChartValue final
{
public:
	uint8                                         Param_Index;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InValue;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetChartValue) == 0x000004, "Wrong alignment on RadarChartWidget_SetChartValue");
static_assert(sizeof(RadarChartWidget_SetChartValue) == 0x000008, "Wrong size on RadarChartWidget_SetChartValue");
static_assert(offsetof(RadarChartWidget_SetChartValue, Param_Index) == 0x000000, "Member 'RadarChartWidget_SetChartValue::Param_Index' has a wrong offset!");
static_assert(offsetof(RadarChartWidget_SetChartValue, InValue) == 0x000004, "Member 'RadarChartWidget_SetChartValue::InValue' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetChartValues
// 0x0010 (0x0010 - 0x0000)
struct RadarChartWidget_SetChartValues final
{
public:
	TArray<float>                                 InValues;                                          // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetChartValues) == 0x000008, "Wrong alignment on RadarChartWidget_SetChartValues");
static_assert(sizeof(RadarChartWidget_SetChartValues) == 0x000010, "Wrong size on RadarChartWidget_SetChartValues");
static_assert(offsetof(RadarChartWidget_SetChartValues, InValues) == 0x000000, "Member 'RadarChartWidget_SetChartValues::InValues' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetOffset
// 0x0010 (0x0010 - 0x0000)
struct RadarChartWidget_SetOffset final
{
public:
	struct FVector2D                              InOffset;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetOffset) == 0x000008, "Wrong alignment on RadarChartWidget_SetOffset");
static_assert(sizeof(RadarChartWidget_SetOffset) == 0x000010, "Wrong size on RadarChartWidget_SetOffset");
static_assert(offsetof(RadarChartWidget_SetOffset, InOffset) == 0x000000, "Member 'RadarChartWidget_SetOffset::InOffset' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetPlateColor
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetPlateColor final
{
public:
	struct FColor                                 InColor;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetPlateColor) == 0x000004, "Wrong alignment on RadarChartWidget_SetPlateColor");
static_assert(sizeof(RadarChartWidget_SetPlateColor) == 0x000004, "Wrong size on RadarChartWidget_SetPlateColor");
static_assert(offsetof(RadarChartWidget_SetPlateColor, InColor) == 0x000000, "Member 'RadarChartWidget_SetPlateColor::InColor' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetPlateOutlineColor
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetPlateOutlineColor final
{
public:
	struct FColor                                 InColor;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetPlateOutlineColor) == 0x000004, "Wrong alignment on RadarChartWidget_SetPlateOutlineColor");
static_assert(sizeof(RadarChartWidget_SetPlateOutlineColor) == 0x000004, "Wrong size on RadarChartWidget_SetPlateOutlineColor");
static_assert(offsetof(RadarChartWidget_SetPlateOutlineColor, InColor) == 0x000000, "Member 'RadarChartWidget_SetPlateOutlineColor::InColor' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetPlateOutlineThickness
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetPlateOutlineThickness final
{
public:
	float                                         InThickness;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetPlateOutlineThickness) == 0x000004, "Wrong alignment on RadarChartWidget_SetPlateOutlineThickness");
static_assert(sizeof(RadarChartWidget_SetPlateOutlineThickness) == 0x000004, "Wrong size on RadarChartWidget_SetPlateOutlineThickness");
static_assert(offsetof(RadarChartWidget_SetPlateOutlineThickness, InThickness) == 0x000000, "Member 'RadarChartWidget_SetPlateOutlineThickness::InThickness' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetRadius
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetRadius final
{
public:
	float                                         InRadius;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetRadius) == 0x000004, "Wrong alignment on RadarChartWidget_SetRadius");
static_assert(sizeof(RadarChartWidget_SetRadius) == 0x000004, "Wrong size on RadarChartWidget_SetRadius");
static_assert(offsetof(RadarChartWidget_SetRadius, InRadius) == 0x000000, "Member 'RadarChartWidget_SetRadius::InRadius' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetRotation
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetRotation final
{
public:
	float                                         InRotation;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetRotation) == 0x000004, "Wrong alignment on RadarChartWidget_SetRotation");
static_assert(sizeof(RadarChartWidget_SetRotation) == 0x000004, "Wrong size on RadarChartWidget_SetRotation");
static_assert(offsetof(RadarChartWidget_SetRotation, InRotation) == 0x000000, "Member 'RadarChartWidget_SetRotation::InRotation' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetSegmentation
// 0x0001 (0x0001 - 0x0000)
struct RadarChartWidget_SetSegmentation final
{
public:
	uint8                                         InSegmentation;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetSegmentation) == 0x000001, "Wrong alignment on RadarChartWidget_SetSegmentation");
static_assert(sizeof(RadarChartWidget_SetSegmentation) == 0x000001, "Wrong size on RadarChartWidget_SetSegmentation");
static_assert(offsetof(RadarChartWidget_SetSegmentation, InSegmentation) == 0x000000, "Member 'RadarChartWidget_SetSegmentation::InSegmentation' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetSegmentationColor
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetSegmentationColor final
{
public:
	struct FColor                                 InColor;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetSegmentationColor) == 0x000004, "Wrong alignment on RadarChartWidget_SetSegmentationColor");
static_assert(sizeof(RadarChartWidget_SetSegmentationColor) == 0x000004, "Wrong size on RadarChartWidget_SetSegmentationColor");
static_assert(offsetof(RadarChartWidget_SetSegmentationColor, InColor) == 0x000000, "Member 'RadarChartWidget_SetSegmentationColor::InColor' has a wrong offset!");

// Function LevelInfinite.RadarChartWidget.SetSegmentationThickness
// 0x0004 (0x0004 - 0x0000)
struct RadarChartWidget_SetSegmentationThickness final
{
public:
	float                                         InThickness;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChartWidget_SetSegmentationThickness) == 0x000004, "Wrong alignment on RadarChartWidget_SetSegmentationThickness");
static_assert(sizeof(RadarChartWidget_SetSegmentationThickness) == 0x000004, "Wrong size on RadarChartWidget_SetSegmentationThickness");
static_assert(offsetof(RadarChartWidget_SetSegmentationThickness, InThickness) == 0x000000, "Member 'RadarChartWidget_SetSegmentationThickness::InThickness' has a wrong offset!");

}


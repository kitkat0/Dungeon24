#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelInfinite

#include "Basic.hpp"

#include "LevelInfinite_classes.hpp"
#include "LevelInfinite_parameters.hpp"


namespace SDK
{

// Function LevelInfinite.LevelInfiniteAPI.AutoLogin
// (Final, Native, Static, Public, BlueprintCallable)

void ULevelInfiniteAPI::AutoLogin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "AutoLogin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.ClearGameNativeDirectory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInfiniteAPI::ClearGameNativeDirectory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "ClearGameNativeDirectory");

	Params::LevelInfiniteAPI_ClearGameNativeDirectory Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelInfinite.LevelInfiniteAPI.CloseLI
// (Final, Native, Static, Public, BlueprintCallable)

void ULevelInfiniteAPI::CloseLI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "CloseLI");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.FocusLIPassUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInfiniteAPI::FocusLIPassUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "FocusLIPassUI");

	Params::LevelInfiniteAPI_FocusLIPassUI Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelInfinite.LevelInfiniteAPI.Init
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameInstance*                    Instance                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Host                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLIUserData                      UserData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    IsTest                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULevelInfiniteAPI::Init(class UGameInstance* Instance, const class FString& Host, const struct FLIUserData& UserData, bool IsTest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "Init");

	Params::LevelInfiniteAPI_Init Parms{};

	Parms.Instance = Instance;
	Parms.Host = std::move(Host);
	Parms.UserData = std::move(UserData);
	Parms.IsTest = IsTest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelInfinite.LevelInfiniteAPI.InitLI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*                    Instance                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    IsTest                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           AppVersion                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           LangType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULevelInfiniteAPI::InitLI(class UGameInstance* Instance, bool IsTest, const class FString& AppVersion, const class FString& LangType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "InitLI");

	Params::LevelInfiniteAPI_InitLI Parms{};

	Parms.Instance = Instance;
	Parms.IsTest = IsTest;
	Parms.AppVersion = std::move(AppVersion);
	Parms.LangType = std::move(LangType);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelInfinite.LevelInfiniteAPI.InitLIP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*                    Instance                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           AppVersion                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           LangType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULevelInfiniteAPI::InitLIP(class UGameInstance* Instance, const class FString& AppVersion, const class FString& LangType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "InitLIP");

	Params::LevelInfiniteAPI_InitLIP Parms{};

	Parms.Instance = Instance;
	Parms.AppVersion = std::move(AppVersion);
	Parms.LangType = std::move(LangType);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelInfinite.LevelInfiniteAPI.LoginChannelWithLIPASS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EINTLLoginChannel                       Channel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Permissions                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ExtraJson                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInfiniteAPI::LoginChannelWithLIPASS(EINTLLoginChannel Channel, const class FString& Permissions, const class FString& ExtraJson)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "LoginChannelWithLIPASS");

	Params::LevelInfiniteAPI_LoginChannelWithLIPASS Parms{};

	Parms.Channel = Channel;
	Parms.Permissions = std::move(Permissions);
	Parms.ExtraJson = std::move(ExtraJson);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.ModifyLogicSchemeType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ELILogicSchemeType                      LILogicSchemeType                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInfiniteAPI::ModifyLogicSchemeType(ELILogicSchemeType LILogicSchemeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "ModifyLogicSchemeType");

	Params::LevelInfiniteAPI_ModifyLogicSchemeType Parms{};

	Parms.LILogicSchemeType = LILogicSchemeType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.OnBackPressed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInfiniteAPI::OnBackPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "OnBackPressed");

	Params::LevelInfiniteAPI_OnBackPressed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelInfinite.LevelInfiniteAPI.OpenAccountCenter
// (Final, Native, Static, Public, BlueprintCallable)

void ULevelInfiniteAPI::OpenAccountCenter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "OpenAccountCenter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.OpenAccountCenterWithParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FINTLDeleteAccountParams         Params_0                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void ULevelInfiniteAPI::OpenAccountCenterWithParams(struct FINTLDeleteAccountParams* Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "OpenAccountCenterWithParams");

	Params::LevelInfiniteAPI_OpenAccountCenterWithParams Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Params_0 != nullptr)
		*Params_0 = std::move(Parms.Params_0);
}


// Function LevelInfinite.LevelInfiniteAPI.OpenBindAccount
// (Final, Native, Static, Public, BlueprintCallable)

void ULevelInfiniteAPI::OpenBindAccount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "OpenBindAccount");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.OpenLoginPanel
// (Final, Native, Static, Public, BlueprintCallable)

void ULevelInfiniteAPI::OpenLoginPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "OpenLoginPanel");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.SetLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Language                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInfiniteAPI::SetLanguage(const class FString& Language)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "SetLanguage");

	Params::LevelInfiniteAPI_SetLanguage Parms{};

	Parms.Language = std::move(Language);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.SetUICustomScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInfiniteAPI::SetUICustomScale(const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "SetUICustomScale");

	Params::LevelInfiniteAPI_SetUICustomScale Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.SetUIRoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCanvasPanel*                     UiRoot                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInfiniteAPI::SetUIRoot(class UCanvasPanel* UiRoot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "SetUIRoot");

	Params::LevelInfiniteAPI_SetUIRoot Parms{};

	Parms.UiRoot = UiRoot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.SetUserData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLIUserData                      UserData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULevelInfiniteAPI::SetUserData(const struct FLIUserData& UserData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "SetUserData");

	Params::LevelInfiniteAPI_SetUserData Parms{};

	Parms.UserData = std::move(UserData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.StartLIPASSLoginScheme
// (Final, Native, Static, Public, BlueprintCallable)

void ULevelInfiniteAPI::StartLIPASSLoginScheme()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "StartLIPASSLoginScheme");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.StopLIPASSLoginScheme
// (Final, Native, Static, Public, BlueprintCallable)

void ULevelInfiniteAPI::StopLIPASSLoginScheme()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "StopLIPASSLoginScheme");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LevelInfiniteAPI.UpdateCountryList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>                   AllowList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>                   blockList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULevelInfiniteAPI::UpdateCountryList(const TArray<class FString>& AllowList, const TArray<class FString>& blockList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelInfiniteAPI", "UpdateCountryList");

	Params::LevelInfiniteAPI_UpdateCountryList Parms{};

	Parms.AllowList = std::move(AllowList);
	Parms.blockList = std::move(blockList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.LIHyperLinkTextBlockDecorator.OnHyperLinkClick
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TMap<class FString, class FString>      MetaData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULIHyperLinkTextBlockDecorator::OnHyperLinkClick(const TMap<class FString, class FString>& MetaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LIHyperLinkTextBlockDecorator", "OnHyperLinkClick");

	Params::LIHyperLinkTextBlockDecorator_OnHyperLinkClick Parms{};

	Parms.MetaData = std::move(MetaData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction LevelInfinite.LIPanelBase.LIAnimationEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULIPanelBase::LIAnimationEvent__DelegateSignature(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LIPanelBase", "LIAnimationEvent__DelegateSignature");

	Params::LIPanelBase_LIAnimationEvent__DelegateSignature Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction LevelInfinite.LIPanelBase.LIFocusActionEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULIPanelBase::LIFocusActionEvent__DelegateSignature(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LIPanelBase", "LIFocusActionEvent__DelegateSignature");

	Params::LIPanelBase_LIFocusActionEvent__DelegateSignature Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction LevelInfinite.LIPanelBase.LIKeyActionEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                        InGeometry                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                           InKeyName                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULIPanelBase::LIKeyActionEvent__DelegateSignature(const struct FGeometry& InGeometry, const class FString& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LIPanelBase", "LIKeyActionEvent__DelegateSignature");

	Params::LIPanelBase_LIKeyActionEvent__DelegateSignature Parms{};

	Parms.InGeometry = std::move(InGeometry);
	Parms.InKeyName = std::move(InKeyName);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// DelegateFunction LevelInfinite.LIPanelBase.LITickEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                        MyGeometry                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                                   InDeltaTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULIPanelBase::LITickEvent__DelegateSignature(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LIPanelBase", "LITickEvent__DelegateSignature");

	Params::LIPanelBase_LITickEvent__DelegateSignature Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelInfinite.LIPanelBase.SetLIUIFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          InWidgetToFocus                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULIPanelBase::SetLIUIFocus(class UWidget* InWidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LIPanelBase", "SetLIUIFocus");

	Params::LIPanelBase_SetLIUIFocus Parms{};

	Parms.InWidgetToFocus = InWidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.GetChartValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                                   Param_Index                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URadarChartWidget::GetChartValue(uint8 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "GetChartValue");

	Params::RadarChartWidget_GetChartValue Parms{};

	Parms.Param_Index = Param_Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// DelegateFunction LevelInfinite.RadarChartWidget.GetUInt8__DelegateSignature
// (Public, Delegate)
// Parameters:
// uint8                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 URadarChartWidget::GetUInt8__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "GetUInt8__DelegateSignature");

	Params::RadarChartWidget_GetUInt8__DelegateSignature Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LevelInfinite.RadarChartWidget.SetChartColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                           InColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetChartColor(const struct FColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetChartColor");

	Params::RadarChartWidget_SetChartColor Parms{};

	Parms.InColor = std::move(InColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetChartOutlineColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                           InColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetChartOutlineColor(const struct FColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetChartOutlineColor");

	Params::RadarChartWidget_SetChartOutlineColor Parms{};

	Parms.InColor = std::move(InColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetChartOutlineThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InThickness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetChartOutlineThickness(float InThickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetChartOutlineThickness");

	Params::RadarChartWidget_SetChartOutlineThickness Parms{};

	Parms.InThickness = InThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetChartValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                                   Param_Index                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetChartValue(uint8 Param_Index, float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetChartValue");

	Params::RadarChartWidget_SetChartValue Parms{};

	Parms.Param_Index = Param_Index;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetChartValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                           InValues                                               (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void URadarChartWidget::SetChartValues(const TArray<float>& InValues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetChartValues");

	Params::RadarChartWidget_SetChartValues Parms{};

	Parms.InValues = std::move(InValues);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                        InOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetOffset(const struct FVector2D& InOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetOffset");

	Params::RadarChartWidget_SetOffset Parms{};

	Parms.InOffset = std::move(InOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetPlateColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                           InColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetPlateColor(const struct FColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetPlateColor");

	Params::RadarChartWidget_SetPlateColor Parms{};

	Parms.InColor = std::move(InColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetPlateOutlineColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                           InColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetPlateOutlineColor(const struct FColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetPlateOutlineColor");

	Params::RadarChartWidget_SetPlateOutlineColor Parms{};

	Parms.InColor = std::move(InColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetPlateOutlineThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InThickness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetPlateOutlineThickness(float InThickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetPlateOutlineThickness");

	Params::RadarChartWidget_SetPlateOutlineThickness Parms{};

	Parms.InThickness = InThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetRadius");

	Params::RadarChartWidget_SetRadius Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetRotation(float InRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetRotation");

	Params::RadarChartWidget_SetRotation Parms{};

	Parms.InRotation = InRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetSegmentation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                                   InSegmentation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetSegmentation(uint8 InSegmentation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetSegmentation");

	Params::RadarChartWidget_SetSegmentation Parms{};

	Parms.InSegmentation = InSegmentation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetSegmentationColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                           InColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetSegmentationColor(const struct FColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetSegmentationColor");

	Params::RadarChartWidget_SetSegmentationColor Parms{};

	Parms.InColor = std::move(InColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelInfinite.RadarChartWidget.SetSegmentationThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   InThickness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarChartWidget::SetSegmentationThickness(float InThickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadarChartWidget", "SetSegmentationThickness");

	Params::RadarChartWidget_SetSegmentationThickness Parms{};

	Parms.InThickness = InThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


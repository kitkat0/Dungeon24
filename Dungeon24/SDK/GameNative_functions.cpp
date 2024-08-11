#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameNative

#include "Basic.hpp"

#include "GameNative_classes.hpp"
#include "GameNative_parameters.hpp"


namespace SDK
{

// Function GameNative.INTLGameNativeAPI.Close
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UINTLGameNativeAPI::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "Close");

	Params::INTLGameNativeAPI_Close Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.CmdToGameNative
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           JsonMsg                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UINTLGameNativeAPI::CmdToGameNative(const class FString& JsonMsg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "CmdToGameNative");

	Params::INTLGameNativeAPI_CmdToGameNative Parms{};

	Parms.JsonMsg = std::move(JsonMsg);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.FocusLIPassUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UINTLGameNativeAPI::FocusLIPassUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "FocusLIPassUI");

	Params::INTLGameNativeAPI_FocusLIPassUI Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.InformGameEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           EventName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ExtraParams                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::InformGameEvent(const class FString& EventName, const class FString& ExtraParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "InformGameEvent");

	Params::INTLGameNativeAPI_InformGameEvent Parms{};

	Parms.EventName = std::move(EventName);
	Parms.ExtraParams = std::move(ExtraParams);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.Init
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*                    Instance                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Host                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    IsTest                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           DefaultActivity                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UINTLGameNativeAPI::Init(class UGameInstance* Instance, const class FString& Host, bool IsTest, const class FString& DefaultActivity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "Init");

	Params::INTLGameNativeAPI_Init Parms{};

	Parms.Instance = Instance;
	Parms.Host = std::move(Host);
	Parms.IsTest = IsTest;
	Parms.DefaultActivity = std::move(DefaultActivity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.IsLoadDefaultActivityFromApp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UINTLGameNativeAPI::IsLoadDefaultActivityFromApp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "IsLoadDefaultActivityFromApp");

	Params::INTLGameNativeAPI_IsLoadDefaultActivityFromApp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.IsPopPanelAllowedResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ModuleName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Allowed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ActivityClassification                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::IsPopPanelAllowedResult(const class FString& ModuleName, bool Allowed, const class FString& ActivityClassification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "IsPopPanelAllowedResult");

	Params::INTLGameNativeAPI_IsPopPanelAllowedResult Parms{};

	Parms.ModuleName = std::move(ModuleName);
	Parms.Allowed = Allowed;
	Parms.ActivityClassification = std::move(ActivityClassification);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.LoadLIAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UINTLGameNativeAPI::LoadLIAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "LoadLIAsset");

	Params::INTLGameNativeAPI_LoadLIAsset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.NotifyGameTaskCompleted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           TaskName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ExtraParams                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::NotifyGameTaskCompleted(const class FString& TaskName, const class FString& ExtraParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "NotifyGameTaskCompleted");

	Params::INTLGameNativeAPI_NotifyGameTaskCompleted Parms{};

	Parms.TaskName = std::move(TaskName);
	Parms.ExtraParams = std::move(ExtraParams);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.OnBackPressed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UINTLGameNativeAPI::OnBackPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "OnBackPressed");

	Params::INTLGameNativeAPI_OnBackPressed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.SetLIPASSVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Version                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::SetLIPASSVersion(const class FString& Version)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "SetLIPASSVersion");

	Params::INTLGameNativeAPI_SetLIPASSVersion Parms{};

	Parms.Version = std::move(Version);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.SetLuaReportEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    Enable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::SetLuaReportEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "SetLuaReportEnable");

	Params::INTLGameNativeAPI_SetLuaReportEnable Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.SetUICustomScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Scale                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::SetUICustomScale(const float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "SetUICustomScale");

	Params::INTLGameNativeAPI_SetUICustomScale Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.SetUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FINTLUserData                    UserData                                               (Parm, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UINTLGameNativeAPI::SetUserData(const struct FINTLUserData& UserData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "SetUserData");

	Params::INTLGameNativeAPI_SetUserData Parms{};

	Parms.UserData = std::move(UserData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.SetXWID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Xwid                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::SetXWID(const class FString& Xwid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "SetXWID");

	Params::INTLGameNativeAPI_SetXWID Parms{};

	Parms.Xwid = std::move(Xwid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.ShareResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ShareType                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ModuleName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Success                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::ShareResult(const class FString& ShareType, const class FString& ModuleName, bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "ShareResult");

	Params::INTLGameNativeAPI_ShareResult Parms{};

	Parms.ShareType = std::move(ShareType);
	Parms.ModuleName = std::move(ModuleName);
	Parms.Success = Success;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.Start
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UINTLGameNativeAPI::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "Start");

	Params::INTLGameNativeAPI_Start Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.StartLI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UINTLGameNativeAPI::StartLI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "StartLI");

	Params::INTLGameNativeAPI_StartLI Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameNative.INTLGameNativeAPI.TestLuaError
// (Final, Native, Static, Public, BlueprintCallable)

void UINTLGameNativeAPI::TestLuaError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "TestLuaError");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GameNative.INTLGameNativeAPI.UpdatePlayerLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   PlayerLevel                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UINTLGameNativeAPI::UpdatePlayerLevel(int32 PlayerLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("INTLGameNativeAPI", "UpdatePlayerLevel");

	Params::INTLGameNativeAPI_UpdatePlayerLevel Parms{};

	Parms.PlayerLevel = PlayerLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}


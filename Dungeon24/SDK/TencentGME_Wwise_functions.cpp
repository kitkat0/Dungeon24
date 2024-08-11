#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TencentGME_Wwise

#include "Basic.hpp"

#include "TencentGME_Wwise_classes.hpp"
#include "TencentGME_Wwise_parameters.hpp"


namespace SDK
{

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.AddAudioBlockList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           TargetId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::AddAudioBlockList(const class FString& TargetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "AddAudioBlockList");

	Params::TencentGMEBlueprintLibrary_AddAudioBlockList Parms{};

	Parms.TargetId = std::move(TargetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.EnableBluetoothMic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    Enable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::EnableBluetoothMic(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "EnableBluetoothMic");

	Params::TencentGMEBlueprintLibrary_EnableBluetoothMic Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioRecvStreamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           TargetId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::GetAudioRecvStreamLevel(const class FString& TargetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "GetAudioRecvStreamLevel");

	Params::TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel Parms{};

	Parms.TargetId = std::move(TargetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioSendStreamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::GetAudioSendStreamLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "GetAudioSendStreamLevel");

	Params::TencentGMEBlueprintLibrary_GetAudioSendStreamLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetGMEVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTencentGMEBlueprintLibrary::GetGMEVersion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "GetGMEVersion");

	Params::TencentGMEBlueprintLibrary_GetGMEVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTencentGmeMessage               TencentGmeMessage                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::GetMessage(struct FTencentGmeMessage* TencentGmeMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "GetMessage");

	Params::TencentGMEBlueprintLibrary_GetMessage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TencentGmeMessage != nullptr)
		*TencentGmeMessage = std::move(Parms.TencentGmeMessage);

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetVoiceFileDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Fileid                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::GetVoiceFileDuration(const class FString& Fileid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "GetVoiceFileDuration");

	Params::TencentGMEBlueprintLibrary_GetVoiceFileDuration Parms{};

	Parms.Fileid = std::move(Fileid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GMEPause
// (Final, Native, Static, Public, BlueprintCallable)

void UTencentGMEBlueprintLibrary::GMEPause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "GMEPause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GMEResume
// (Final, Native, Static, Public, BlueprintCallable)

void UTencentGMEBlueprintLibrary::GMEResume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "GMEResume");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.PlayRecordFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Fileid                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::PlayRecordFile(const class FString& Fileid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "PlayRecordFile");

	Params::TencentGMEBlueprintLibrary_PlayRecordFile Parms{};

	Parms.Fileid = std::move(Fileid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           UserId                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::ReceivePlugin_GetReceiveOpenIDWithActor(class AActor* Actor, class FString* UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "ReceivePlugin_GetReceiveOpenIDWithActor");

	Params::TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (UserId != nullptr)
		*UserId = std::move(Parms.UserId);
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithAkComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkComponent*                     AkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           UserId                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::ReceivePlugin_GetReceiveOpenIDWithAkComponent(class UAkComponent* AkComponent, class FString* UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "ReceivePlugin_GetReceiveOpenIDWithAkComponent");

	Params::TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent Parms{};

	Parms.AkComponent = AkComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (UserId != nullptr)
		*UserId = std::move(Parms.UserId);
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           UserId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::ReceivePlugin_SetReceiveOpenIDWithActor(class AActor* Actor, const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "ReceivePlugin_SetReceiveOpenIDWithActor");

	Params::TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor Parms{};

	Parms.Actor = Actor;
	Parms.UserId = std::move(UserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithAkComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                     AkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           UserId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::ReceivePlugin_SetReceiveOpenIDWithAkComponent(class UAkComponent* AkComponent, const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "ReceivePlugin_SetReceiveOpenIDWithAkComponent");

	Params::TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent Parms{};

	Parms.AkComponent = AkComponent;
	Parms.UserId = std::move(UserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.RemoveAudioBlockList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           TargetId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::RemoveAudioBlockList(const class FString& TargetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "RemoveAudioBlockList");

	Params::TencentGMEBlueprintLibrary_RemoveAudioBlockList Parms{};

	Parms.TargetId = std::move(TargetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    EnableLoopback                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SendPlugin_EnableLoopbackWithActor(class AActor* Actor, bool EnableLoopback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SendPlugin_EnableLoopbackWithActor");

	Params::TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor Parms{};

	Parms.Actor = Actor;
	Parms.EnableLoopback = EnableLoopback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithAkComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                     AkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    EnableLoopback                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SendPlugin_EnableLoopbackWithAkComponent(class UAkComponent* AkComponent, bool EnableLoopback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SendPlugin_EnableLoopbackWithAkComponent");

	Params::TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent Parms{};

	Parms.AkComponent = AkComponent;
	Parms.EnableLoopback = EnableLoopback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTencentGMEBlueprintLibrary::SendPlugin_GetEnableLoopbackWithActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SendPlugin_GetEnableLoopbackWithActor");

	Params::TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithAkComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                     AkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTencentGMEBlueprintLibrary::SendPlugin_GetEnableLoopbackWithAkComponent(class UAkComponent* AkComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SendPlugin_GetEnableLoopbackWithAkComponent");

	Params::TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent Parms{};

	Parms.AkComponent = AkComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetAudioStreamProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUTencentGME_StreamProfile              Profile                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SetAudioStreamProfile(EUTencentGME_StreamProfile Profile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetAudioStreamProfile");

	Params::TencentGMEBlueprintLibrary_SetAudioStreamProfile Parms{};

	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetLogLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUTencentGME_LogLevel                   LogLevelWrite                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EUTencentGME_LogLevel                   LogLevelPrint                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SetLogLevel(EUTencentGME_LogLevel LogLevelWrite, EUTencentGME_LogLevel LogLevelPrint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetLogLevel");

	Params::TencentGMEBlueprintLibrary_SetLogLevel Parms{};

	Parms.LogLevelWrite = LogLevelWrite;
	Parms.LogLevelPrint = LogLevelPrint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioRecvRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Range                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SetRangeAudioRecvRange(int32 Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetRangeAudioRecvRange");

	Params::TencentGMEBlueprintLibrary_SetRangeAudioRecvRange Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   TeamId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SetRangeAudioTeamID(int32 TeamId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetRangeAudioTeamID");

	Params::TencentGMEBlueprintLibrary_SetRangeAudioTeamID Parms{};

	Parms.TeamId = TeamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUTencentGME_TeamMode                   TeamMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SetRangeAudioTeamMode(EUTencentGME_TeamMode TeamMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetRangeAudioTeamMode");

	Params::TencentGMEBlueprintLibrary_SetRangeAudioTeamMode Parms{};

	Parms.TeamMode = TeamMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRegion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUTencentGME_Region                     Region                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SetRegion(EUTencentGME_Region Region)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetRegion");

	Params::TencentGMEBlueprintLibrary_SetRegion Parms{};

	Parms.Region = Region;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRoomID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           RoomId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::SetRoomID(const class FString& RoomId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetRoomID");

	Params::TencentGMEBlueprintLibrary_SetRoomID Parms{};

	Parms.RoomId = std::move(RoomId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetSelfPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   PositionX                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PositionY                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PositionZ                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTencentGMEBlueprintLibrary::SetSelfPosition(int32 PositionX, int32 PositionY, int32 PositionZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetSelfPosition");

	Params::TencentGMEBlueprintLibrary_SetSelfPosition Parms{};

	Parms.PositionX = PositionX;
	Parms.PositionY = PositionY;
	Parms.PositionZ = PositionZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetUserID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           UserId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::SetUserID(const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SetUserID");

	Params::TencentGMEBlueprintLibrary_SetUserID Parms{};

	Parms.UserId = std::move(UserId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SpeechToText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Fileid                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           SpeechLanguage                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           TranslateLanguage                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::SpeechToText(const class FString& Fileid, const class FString& SpeechLanguage, const class FString& TranslateLanguage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "SpeechToText");

	Params::TencentGMEBlueprintLibrary_SpeechToText Parms{};

	Parms.Fileid = std::move(Fileid);
	Parms.SpeechLanguage = std::move(SpeechLanguage);
	Parms.TranslateLanguage = std::move(TranslateLanguage);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StartRecording
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Fileid                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::StartRecording(const class FString& Fileid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "StartRecording");

	Params::TencentGMEBlueprintLibrary_StartRecording Parms{};

	Parms.Fileid = std::move(Fileid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopPlayFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::StopPlayFile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "StopPlayFile");

	Params::TencentGMEBlueprintLibrary_StopPlayFile Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopRecording
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTencentGMEBlueprintLibrary::StopRecording()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TencentGMEBlueprintLibrary", "StopRecording");

	Params::TencentGMEBlueprintLibrary_StopRecording Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TencentGME_Wwise.TencentGMESelfPositioner.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTencentGMESelfPositioner::GetPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TencentGMESelfPositioner", "GetPosition");

	Params::TencentGMESelfPositioner_GetPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


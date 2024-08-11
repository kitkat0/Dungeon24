#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UENetTest

#include "Basic.hpp"

#include "UENetTest_classes.hpp"
#include "UENetTest_parameters.hpp"


namespace SDK
{

// Function UENetTest.NetTestGameInstanceSubsystem.AddOrRemoveFromAlwaysBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Func_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::AddOrRemoveFromAlwaysBlockList(const class FString& Func_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "AddOrRemoveFromAlwaysBlockList");

	Params::NetTestGameInstanceSubsystem_AddOrRemoveFromAlwaysBlockList Parms{};

	Parms.Func_0 = std::move(Func_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.AddToIgnoreRPCList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           RpcName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::AddToIgnoreRPCList(const class FString& RpcName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "AddToIgnoreRPCList");

	Params::NetTestGameInstanceSubsystem_AddToIgnoreRPCList Parms{};

	Parms.RpcName = std::move(RpcName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.AddToPackInfoList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           PackInfo                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::AddToPackInfoList(const class FString& PackInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "AddToPackInfoList");

	Params::NetTestGameInstanceSubsystem_AddToPackInfoList Parms{};

	Parms.PackInfo = std::move(PackInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ChangePackSelectedSeq
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UProtoHolder*                     Proto                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::ChangePackSelectedSeq(class UProtoHolder* Proto)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ChangePackSelectedSeq");

	Params::NetTestGameInstanceSubsystem_ChangePackSelectedSeq Parms{};

	Parms.Proto = Proto;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ClearAllPack
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::ClearAllPack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ClearAllPack");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ClearPackSelectedSeq
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::ClearPackSelectedSeq()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ClearPackSelectedSeq");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ClearProtoList
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::ClearProtoList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ClearProtoList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.CreateNetTestWindow
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::CreateNetTestWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "CreateNetTestWindow");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.DeleteSelectedPack
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::DeleteSelectedPack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "DeleteSelectedPack");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.FuzzTestAll
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::FuzzTestAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "FuzzTestAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.FuzzTestOnce
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDetailHolder*                    Holder                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::FuzzTestOnce(class UDetailHolder* Holder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "FuzzTestOnce");

	Params::NetTestGameInstanceSubsystem_FuzzTestOnce Parms{};

	Parms.Holder = Holder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.GetFuzzParamList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDetailHolder*                    Holder                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UNetTestGameInstanceSubsystem::GetFuzzParamList(class UDetailHolder* Holder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "GetFuzzParamList");

	Params::NetTestGameInstanceSubsystem_GetFuzzParamList Parms{};

	Parms.Holder = Holder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.GetIgnoreRPCList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UNetTestGameInstanceSubsystem::GetIgnoreRPCList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "GetIgnoreRPCList");

	Params::NetTestGameInstanceSubsystem_GetIgnoreRPCList Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.InitNewPackList
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::InitNewPackList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "InitNewPackList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.InitPackList
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::InitPackList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "InitPackList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.InitPackRPCList
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::InitPackRPCList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "InitPackRPCList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.InitProtoList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ScrollToLast                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::InitProtoList(bool ScrollToLast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "InitProtoList");

	Params::NetTestGameInstanceSubsystem_InitProtoList Parms{};

	Parms.ScrollToLast = ScrollToLast;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.IsCollectStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetTestGameInstanceSubsystem::IsCollectStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "IsCollectStatus");

	Params::NetTestGameInstanceSubsystem_IsCollectStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.IsHideEngineStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetTestGameInstanceSubsystem::IsHideEngineStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "IsHideEngineStatus");

	Params::NetTestGameInstanceSubsystem_IsHideEngineStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.IsInAlwaysBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Func_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetTestGameInstanceSubsystem::IsInAlwaysBlockList(const class FString& Func_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "IsInAlwaysBlockList");

	Params::NetTestGameInstanceSubsystem_IsInAlwaysBlockList Parms{};

	Parms.Func_0 = std::move(Func_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.IsInBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Func_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetTestGameInstanceSubsystem::IsInBlockList(const class FString& Func_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "IsInBlockList");

	Params::NetTestGameInstanceSubsystem_IsInBlockList Parms{};

	Parms.Func_0 = std::move(Func_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.IsInterceptStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetTestGameInstanceSubsystem::IsInterceptStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "IsInterceptStatus");

	Params::NetTestGameInstanceSubsystem_IsInterceptStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.IsSCCollectStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetTestGameInstanceSubsystem::IsSCCollectStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "IsSCCollectStatus");

	Params::NetTestGameInstanceSubsystem_IsSCCollectStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.RefreshBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ScrollToLast                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::RefreshBlockList(bool ScrollToLast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "RefreshBlockList");

	Params::NetTestGameInstanceSubsystem_RefreshBlockList Parms{};

	Parms.ScrollToLast = ScrollToLast;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.RefreshDetailList
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::RefreshDetailList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "RefreshDetailList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.RefreshPackSelectedSeq
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::RefreshPackSelectedSeq()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "RefreshPackSelectedSeq");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.RemoveFromBlockList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockHolder*                     Holder                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::RemoveFromBlockList(class UBlockHolder* Holder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "RemoveFromBlockList");

	Params::NetTestGameInstanceSubsystem_RemoveFromBlockList Parms{};

	Parms.Holder = Holder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.RemoveFromIgnoreRPCList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           RpcName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::RemoveFromIgnoreRPCList(const class FString& RpcName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "RemoveFromIgnoreRPCList");

	Params::NetTestGameInstanceSubsystem_RemoveFromIgnoreRPCList Parms{};

	Parms.RpcName = std::move(RpcName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.RemoveFromPackInfoList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           PackInfo                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::RemoveFromPackInfoList(const class FString& PackInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "RemoveFromPackInfoList");

	Params::NetTestGameInstanceSubsystem_RemoveFromPackInfoList Parms{};

	Parms.PackInfo = std::move(PackInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ResetFuzzStatus
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::ResetFuzzStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ResetFuzzStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SaveNewPack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           PackName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SaveNewPack(const class FString& PackName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SaveNewPack");

	Params::NetTestGameInstanceSubsystem_SaveNewPack Parms{};

	Parms.PackName = std::move(PackName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SavePackRPCSendDelayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UProtoHolder*                     Proto                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Delay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetTestGameInstanceSubsystem::SavePackRPCSendDelayTime(class UProtoHolder* Proto, int32 Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SavePackRPCSendDelayTime");

	Params::NetTestGameInstanceSubsystem_SavePackRPCSendDelayTime Parms{};

	Parms.Proto = Proto;
	Parms.Delay = Delay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SendPackRPCTimes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SendPackRPCTimes(int32 Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SendPackRPCTimes");

	Params::NetTestGameInstanceSubsystem_SendPackRPCTimes Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SendPackRPCTimesOutOfOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNetTestGameInstanceSubsystem::SendPackRPCTimesOutOfOrder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SendPackRPCTimesOutOfOrder");

	Params::NetTestGameInstanceSubsystem_SendPackRPCTimesOutOfOrder Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SendRPCTimes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SendRPCTimes(int32 Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SendRPCTimes");

	Params::NetTestGameInstanceSubsystem_SendRPCTimes Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SendRPCWithDelay
// (Final, Native, Public)
// Parameters:
// class UProtoHolder*                     RPC                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SendRPCWithDelay(class UProtoHolder* RPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SendRPCWithDelay");

	Params::NetTestGameInstanceSubsystem_SendRPCWithDelay Parms{};

	Parms.RPC = RPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SetBlockListView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UListView*                        ListView                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SetBlockListView(class UListView* ListView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SetBlockListView");

	Params::NetTestGameInstanceSubsystem_SetBlockListView Parms{};

	Parms.ListView = ListView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SetDetailListView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UListView*                        ListView                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SetDetailListView(class UListView* ListView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SetDetailListView");

	Params::NetTestGameInstanceSubsystem_SetDetailListView Parms{};

	Parms.ListView = ListView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SetNetTestListView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UListView*                        ListView                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SetNetTestListView(class UListView* ListView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SetNetTestListView");

	Params::NetTestGameInstanceSubsystem_SetNetTestListView Parms{};

	Parms.ListView = ListView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SetNewPackListView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UListView*                        ListView                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SetNewPackListView(class UListView* ListView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SetNewPackListView");

	Params::NetTestGameInstanceSubsystem_SetNewPackListView Parms{};

	Parms.ListView = ListView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SetPackListView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UListView*                        ListView                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SetPackListView(class UListView* ListView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SetPackListView");

	Params::NetTestGameInstanceSubsystem_SetPackListView Parms{};

	Parms.ListView = ListView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SetPackRPCListView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UListView*                        ListView                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::SetPackRPCListView(class UListView* ListView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SetPackRPCListView");

	Params::NetTestGameInstanceSubsystem_SetPackRPCListView Parms{};

	Parms.ListView = ListView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.SetProtoList
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::SetProtoList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "SetProtoList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.StartFuzzTest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDetailHolder*                    Holder                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UNetTestGameInstanceSubsystem::StartFuzzTest(class UDetailHolder* Holder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "StartFuzzTest");

	Params::NetTestGameInstanceSubsystem_StartFuzzTest Parms{};

	Parms.Holder = Holder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ToggleCollectStatus
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::ToggleCollectStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ToggleCollectStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ToggleHideEngineStatus
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::ToggleHideEngineStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ToggleHideEngineStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ToggleInterceptStatus
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::ToggleInterceptStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ToggleInterceptStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ToggleSCCollectStatus
// (Final, Native, Public, BlueprintCallable)

void UNetTestGameInstanceSubsystem::ToggleSCCollectStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ToggleSCCollectStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.NetTestGameInstanceSubsystem.ToSelectedNewPack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UProtoHolder*                     Proto                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Add                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNetTestGameInstanceSubsystem::ToSelectedNewPack(class UProtoHolder* Proto, bool Add)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NetTestGameInstanceSubsystem", "ToSelectedNewPack");

	Params::NetTestGameInstanceSubsystem_ToSelectedNewPack Parms{};

	Parms.Proto = Proto;
	Parms.Add = Add;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.ProtoHolder.OnItemSelected
// (Final, Native, Public, BlueprintCallable)

void UProtoHolder::OnItemSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProtoHolder", "OnItemSelected");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.RPCDetailWidget.DetailHolderToMessage
// (Final, Native, Public, BlueprintCallable)

void URPCDetailWidget::DetailHolderToMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RPCDetailWidget", "DetailHolderToMessage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.RPCDetailWidget.DetailHolderToParamPtr
// (Final, Native, Public, BlueprintCallable)

void URPCDetailWidget::DetailHolderToParamPtr()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RPCDetailWidget", "DetailHolderToParamPtr");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.RPCDetailWidget.InitDetailList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Cache                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URPCDetailWidget::InitDetailList(bool Cache)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RPCDetailWidget", "InitDetailList");

	Params::RPCDetailWidget_InitDetailList Parms{};

	Parms.Cache = Cache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UENetTest.RPCDetailWidget.SendRPCFromTool
// (Final, Native, Public, BlueprintCallable)

void URPCDetailWidget::SendRPCFromTool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RPCDetailWidget", "SendRPCFromTool");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}


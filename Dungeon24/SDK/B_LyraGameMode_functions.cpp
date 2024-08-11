#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_LyraGameMode

#include "Basic.hpp"

#include "B_LyraGameMode_classes.hpp"
#include "B_LyraGameMode_parameters.hpp"


namespace SDK
{

// Function B_LyraGameMode.B_LyraGameMode_C.ExecuteUbergraph_B_LyraGameMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_LyraGameMode_C::ExecuteUbergraph_B_LyraGameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LyraGameMode_C", "ExecuteUbergraph_B_LyraGameMode");

	Params::B_LyraGameMode_C_ExecuteUbergraph_B_LyraGameMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_LyraGameMode.B_LyraGameMode_C.GetDefaultPawnClassForController
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UClass* AB_LyraGameMode_C::GetDefaultPawnClassForController(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LyraGameMode_C", "GetDefaultPawnClassForController");

	Params::B_LyraGameMode_C_GetDefaultPawnClassForController Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_LyraGameMode.B_LyraGameMode_C.OnMessageReceived_10FCC0BF4F5D0C5CA96B87AC944B416E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AB_LyraGameMode_C::OnMessageReceived_10FCC0BF4F5D0C5CA96B87AC944B416E(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LyraGameMode_C", "OnMessageReceived_10FCC0BF4F5D0C5CA96B87AC944B416E");

	Params::B_LyraGameMode_C_OnMessageReceived_10FCC0BF4F5D0C5CA96B87AC944B416E Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_LyraGameMode.B_LyraGameMode_C.OnMessageReceived_498BF20E4A53CBF6E2ECE48522E98E84
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AB_LyraGameMode_C::OnMessageReceived_498BF20E4A53CBF6E2ECE48522E98E84(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LyraGameMode_C", "OnMessageReceived_498BF20E4A53CBF6E2ECE48522E98E84");

	Params::B_LyraGameMode_C_OnMessageReceived_498BF20E4A53CBF6E2ECE48522E98E84 Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_LyraGameMode.B_LyraGameMode_C.OnReady_77628FB54EFC0F1E298D21806990A1C0
// (BlueprintCallable, BlueprintEvent)

void AB_LyraGameMode_C::OnReady_77628FB54EFC0F1E298D21806990A1C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LyraGameMode_C", "OnReady_77628FB54EFC0F1E298D21806990A1C0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_LyraGameMode.B_LyraGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_LyraGameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LyraGameMode_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_LyraGameMode.B_LyraGameMode_C.SpawnMonster
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ActorSpawnPoint_C*            ActorSpawnPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   TeamId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Dormant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*                    Controller                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_LyraGameMode_C::SpawnMonster(class UClass* Actor, const struct FTransform& Transform, class ABP_ActorSpawnPoint_C* ActorSpawnPoint, int32 TeamId, bool Dormant, class AAIController** Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_LyraGameMode_C", "SpawnMonster");

	Params::B_LyraGameMode_C_SpawnMonster Parms{};

	Parms.Actor = Actor;
	Parms.Transform = std::move(Transform);
	Parms.ActorSpawnPoint = ActorSpawnPoint;
	Parms.TeamId = TeamId;
	Parms.Dormant = Dormant;

	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PzRobot

#include "Basic.hpp"

#include "PzRobot_classes.hpp"
#include "PzRobot_parameters.hpp"


namespace SDK
{

// Function PzRobot.PzRobotAction.AI
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::AI(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "AI");

	Params::PzRobotAction_AI Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.AI_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::AI_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "AI_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.ClientTravel
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::ClientTravel(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "ClientTravel");

	Params::PzRobotAction_ClientTravel Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.ClientTravel_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::ClientTravel_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "ClientTravel_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.GM
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::GM(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "GM");

	Params::PzRobotAction_GM Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.GM_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::GM_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "GM_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.InputLookMouse
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::InputLookMouse(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "InputLookMouse");

	Params::PzRobotAction_InputLookMouse Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.InputLookMouse_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::InputLookMouse_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "InputLookMouse_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.InputTag
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::InputTag(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "InputTag");

	Params::PzRobotAction_InputTag Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.InputTag_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::InputTag_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "InputTag_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.Move
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::Move(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "Move");

	Params::PzRobotAction_Move Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.Move_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::Move_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "Move_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.MoveToPosition
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::MoveToPosition(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "MoveToPosition");

	Params::PzRobotAction_MoveToPosition Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.MoveToPosition_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::MoveToPosition_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "MoveToPosition_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.MoveToward
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::MoveToward(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "MoveToward");

	Params::PzRobotAction_MoveToward Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.MoveToward_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::MoveToward_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "MoveToward_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.RandomToPosition
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::RandomToPosition(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "RandomToPosition");

	Params::PzRobotAction_RandomToPosition Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.RandomToPosition_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::RandomToPosition_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "RandomToPosition_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAction.Sleep
// (Final, Native, Public, Const)
// Parameters:
// class FString                           Param                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAction::Sleep(const class FString& Param) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "Sleep");

	Params::PzRobotAction_Sleep Parms{};

	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAction.Sleep_Reset
// (Final, Native, Public, Const)

void UPzRobotAction::Sleep_Reset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAction", "Sleep_Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.CheckActorVisible
// (Final, Native, Public)
// Parameters:
// class AActor*                           TargetActor                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAIController::CheckActorVisible(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "CheckActorVisible");

	Params::PzRobotAIController_CheckActorVisible Parms{};

	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.CheckNavigateFinish
// (Final, Native, Public)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAIController::CheckNavigateFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "CheckNavigateFinish");

	Params::PzRobotAIController_CheckNavigateFinish Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.DetectActors
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<EObjectTypeQuery>                ObjectTypes                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                           ActorClassFilter                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>                   ActorsToIgnore                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                                   Radius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UPzRobotAIController::DetectActors(const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "DetectActors");

	Params::PzRobotAIController_DetectActors Parms{};

	Parms.ObjectTypes = std::move(ObjectTypes);
	Parms.ActorClassFilter = ActorClassFilter;
	Parms.ActorsToIgnore = std::move(ActorsToIgnore);
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.DetectEnemyActor
// (Final, Native, Public)
// Parameters:
// class ALyraCharacter*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ALyraCharacter* UPzRobotAIController::DetectEnemyActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "DetectEnemyActor");

	Params::PzRobotAIController_DetectEnemyActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.DetectExtractDevices
// (Final, Native, Public)

void UPzRobotAIController::DetectExtractDevices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "DetectExtractDevices");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.DetectInteractActor
// (Final, Native, Public)
// Parameters:
// class ATgfStaticInteraction*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ATgfStaticInteraction* UPzRobotAIController::DetectInteractActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "DetectInteractActor");

	Params::PzRobotAIController_DetectInteractActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.DoAttack
// (Final, Native, Public)

void UPzRobotAIController::DoAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "DoAttack");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.DoInteract
// (Final, Native, Public)

void UPzRobotAIController::DoInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "DoInteract");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.DoRandomAttackAction
// (Final, Native, Public)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAIController::DoRandomAttackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "DoRandomAttackAction");

	Params::PzRobotAIController_DoRandomAttackAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.EnterExtractPortal
// (Final, Native, Public)

void UPzRobotAIController::EnterExtractPortal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "EnterExtractPortal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.GetPlayerCurrentLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPzRobotAIController::GetPlayerCurrentLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "GetPlayerCurrentLocation");

	Params::PzRobotAIController_GetPlayerCurrentLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.GetRandomDstLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                                   Radius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPzRobotAIController::GetRandomDstLocation(float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "GetRandomDstLocation");

	Params::PzRobotAIController_GetRandomDstLocation Parms{};

	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.Initialize
// (Final, Native, Public)

void UPzRobotAIController::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.NavigateToEnemy
// (Final, Native, Public)

void UPzRobotAIController::NavigateToEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "NavigateToEnemy");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.NavigateToInteraction
// (Final, Native, Public)

void UPzRobotAIController::NavigateToInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "NavigateToInteraction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.NavigateToRandom
// (Final, Native, Public)

void UPzRobotAIController::NavigateToRandom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "NavigateToRandom");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.Navigation
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                          DstLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPzRobotAIController::Navigation(const struct FVector& DstLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "Navigation");

	Params::PzRobotAIController_Navigation Parms{};

	Parms.DstLocation = std::move(DstLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.NavigationToActor
// (Final, Native, Public)
// Parameters:
// class AActor*                           TargetActor                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPzRobotAIController::NavigationToActor(const class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "NavigationToActor");

	Params::PzRobotAIController_NavigationToActor Parms{};

	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.ReleaseFireQAndFireE
// (Final, Native, Public)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAIController::ReleaseFireQAndFireE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "ReleaseFireQAndFireE");

	Params::PzRobotAIController_ReleaseFireQAndFireE Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.RotateToEnemy
// (Final, Native, Public)

void UPzRobotAIController::RotateToEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "RotateToEnemy");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.RotateToInteraction
// (Final, Native, Public)

void UPzRobotAIController::RotateToInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "RotateToInteraction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.SetPlayerMoveRotation
// (Final, Native, Public)

void UPzRobotAIController::SetPlayerMoveRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "SetPlayerMoveRotation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.SetRobotStatus
// (Final, Native, Public)
// Parameters:
// ERobotStatus                            St                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPzRobotAIController::SetRobotStatus(ERobotStatus St)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "SetRobotStatus");

	Params::PzRobotAIController_SetRobotStatus Parms{};

	Parms.St = St;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.SetRotationToLocation
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                          Location                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPzRobotAIController::SetRotationToLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "SetRotationToLocation");

	Params::PzRobotAIController_SetRotationToLocation Parms{};

	Parms.Location = std::move(Location);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PzRobot.PzRobotAIController.TickDetectActor
// (Final, Native, Public)

void UPzRobotAIController::TickDetectActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "TickDetectActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.UnInitialize
// (Final, Native, Public)

void UPzRobotAIController::UnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "UnInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PzRobot.PzRobotAIController.GetRobotStatus
// (Final, Native, Public, Const)
// Parameters:
// ERobotStatus                            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ERobotStatus UPzRobotAIController::GetRobotStatus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PzRobotAIController", "GetRobotStatus");

	Params::PzRobotAIController_GetRobotStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


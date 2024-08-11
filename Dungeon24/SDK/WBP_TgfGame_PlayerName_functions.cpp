#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_PlayerName

#include "Basic.hpp"

#include "WBP_TgfGame_PlayerName_classes.hpp"
#include "WBP_TgfGame_PlayerName_parameters.hpp"


namespace SDK
{

// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.BindIndicator
// (Event, Public, BlueprintEvent)
// Parameters:
// class UIndicatorDescriptor*             Indicator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::BindIndicator(class UIndicatorDescriptor* Indicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "BindIndicator");

	Params::WBP_TgfGame_PlayerName_C_BindIndicator Parms{};

	Parms.Indicator = Indicator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.DeathStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::DeathStarted(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "DeathStarted");

	Params::WBP_TgfGame_PlayerName_C_DeathStarted Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.ExecuteUbergraph_WBP_TgfGame_PlayerName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::ExecuteUbergraph_WBP_TgfGame_PlayerName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "ExecuteUbergraph_WBP_TgfGame_PlayerName");

	Params::WBP_TgfGame_PlayerName_C_ExecuteUbergraph_WBP_TgfGame_PlayerName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.ExtractPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            TargetPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Waiting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::ExtractPortal(class APawn* TargetPawn, bool Waiting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "ExtractPortal");

	Params::WBP_TgfGame_PlayerName_C_ExtractPortal Parms{};

	Parms.TargetPawn = TargetPawn;
	Parms.Waiting = Waiting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.GetOverlayScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::GetOverlayScale(struct FVector2D* Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "GetOverlayScale");

	Params::WBP_TgfGame_PlayerName_C_GetOverlayScale Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = std::move(Parms.Rate);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.InitializeNameplate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Pawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::InitializeNameplate(class APawn* Param_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "InitializeNameplate");

	Params::WBP_TgfGame_PlayerName_C_InitializeNameplate Parms{};

	Parms.Param_Pawn = Param_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.OnRebirth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::OnRebirth(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "OnRebirth");

	Params::WBP_TgfGame_PlayerName_C_OnRebirth Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.PawnReady
// (BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_PlayerName_C::PawnReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "PawnReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.SetHealthBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_PlayerName_C::SetHealthBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "SetHealthBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.SetNameVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::SetNameVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "SetNameVisibility");

	Params::WBP_TgfGame_PlayerName_C_SetNameVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.SetPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Param_Pawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::SetPawn(class APawn* Param_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "SetPawn");

	Params::WBP_TgfGame_PlayerName_C_SetPawn Parms{};

	Parms.Param_Pawn = Param_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_PlayerName_C::SetPlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "SetPlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.SetVisibilityByScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::SetVisibilityByScale(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "SetVisibilityByScale");

	Params::WBP_TgfGame_PlayerName_C_SetVisibilityByScale Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.Should Show Names
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Show                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::Should_Show_Names(class ALyraCharacter* Character, bool* Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "Should Show Names");

	Params::WBP_TgfGame_PlayerName_C_Should_Show_Names Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "Tick");

	Params::WBP_TgfGame_PlayerName_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.UnbindIndicator
// (Event, Public, BlueprintEvent)
// Parameters:
// class UIndicatorDescriptor*             Indicator                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_PlayerName_C::UnbindIndicator(const class UIndicatorDescriptor* Indicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "UnbindIndicator");

	Params::WBP_TgfGame_PlayerName_C_UnbindIndicator Parms{};

	Parms.Indicator = Indicator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_PlayerName.WBP_TgfGame_PlayerName_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_PlayerName_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_PlayerName_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TgfMonsterMaterialManagerComponent

#include "Basic.hpp"

#include "BP_TgfMonsterMaterialManagerComponent_classes.hpp"
#include "BP_TgfMonsterMaterialManagerComponent_parameters.hpp"


namespace SDK
{

// Function BP_TgfMonsterMaterialManagerComponent.BP_TgfMonsterMaterialManagerComponent_C.ExecuteUbergraph_BP_TgfMonsterMaterialManagerComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TgfMonsterMaterialManagerComponent_C::ExecuteUbergraph_BP_TgfMonsterMaterialManagerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TgfMonsterMaterialManagerComponent_C", "ExecuteUbergraph_BP_TgfMonsterMaterialManagerComponent");

	Params::BP_TgfMonsterMaterialManagerComponent_C_ExecuteUbergraph_BP_TgfMonsterMaterialManagerComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TgfMonsterMaterialManagerComponent.BP_TgfMonsterMaterialManagerComponent_C.OnMaterialUpdatedAfter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETgfCharaMatStateType                   NewStateType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETgfCharaMatStateType                   OldStateType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TgfMonsterMaterialManagerComponent_C::OnMaterialUpdatedAfter(ETgfCharaMatStateType NewStateType, ETgfCharaMatStateType OldStateType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TgfMonsterMaterialManagerComponent_C", "OnMaterialUpdatedAfter");

	Params::BP_TgfMonsterMaterialManagerComponent_C_OnMaterialUpdatedAfter Parms{};

	Parms.NewStateType = NewStateType;
	Parms.OldStateType = OldStateType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TgfMonsterMaterialManagerComponent.BP_TgfMonsterMaterialManagerComponent_C.OnMaterialUpdatedBefore
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETgfCharaMatStateType                   NewStateType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETgfCharaMatStateType                   OldStateType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TgfMonsterMaterialManagerComponent_C::OnMaterialUpdatedBefore(ETgfCharaMatStateType NewStateType, ETgfCharaMatStateType OldStateType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TgfMonsterMaterialManagerComponent_C", "OnMaterialUpdatedBefore");

	Params::BP_TgfMonsterMaterialManagerComponent_C_OnMaterialUpdatedBefore Parms{};

	Parms.NewStateType = NewStateType;
	Parms.OldStateType = OldStateType;

	UObject::ProcessEvent(Func, &Parms);
}

}


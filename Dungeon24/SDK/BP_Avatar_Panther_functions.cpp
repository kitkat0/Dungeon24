#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Avatar_Panther

#include "Basic.hpp"

#include "BP_Avatar_Panther_classes.hpp"
#include "BP_Avatar_Panther_parameters.hpp"


namespace SDK
{

// Function BP_Avatar_Panther.BP_Avatar_Panther_C.ExecuteUbergraph_BP_Avatar_Panther
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Avatar_Panther_C::ExecuteUbergraph_BP_Avatar_Panther(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Avatar_Panther_C", "ExecuteUbergraph_BP_Avatar_Panther");

	Params::BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Avatar_Panther.BP_Avatar_Panther_C.OnUpdateAvatarDataMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// ETgfActorGender                         Gender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETgfActorRace                           Race                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Avatar_Panther_C::OnUpdateAvatarDataMesh(ETgfActorGender Gender, ETgfActorRace Race)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Avatar_Panther_C", "OnUpdateAvatarDataMesh");

	Params::BP_Avatar_Panther_C_OnUpdateAvatarDataMesh Parms{};

	Parms.Gender = Gender;
	Parms.Race = Race;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Avatar_Panther.BP_Avatar_Panther_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Avatar_Panther_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Avatar_Panther_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


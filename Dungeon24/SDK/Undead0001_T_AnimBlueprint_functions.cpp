#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Undead0001_T_AnimBlueprint

#include "Basic.hpp"

#include "Undead0001_T_AnimBlueprint_classes.hpp"
#include "Undead0001_T_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Undead0001_T_AnimBlueprint.Undead0001_T_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UUndead0001_T_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Undead0001_T_AnimBlueprint_C", "AnimGraph");

	Params::Undead0001_T_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Undead0001_T_AnimBlueprint.Undead0001_T_AnimBlueprint_C.ExecuteUbergraph_Undead0001_T_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUndead0001_T_AnimBlueprint_C::ExecuteUbergraph_Undead0001_T_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Undead0001_T_AnimBlueprint_C", "ExecuteUbergraph_Undead0001_T_AnimBlueprint");

	Params::Undead0001_T_AnimBlueprint_C_ExecuteUbergraph_Undead0001_T_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


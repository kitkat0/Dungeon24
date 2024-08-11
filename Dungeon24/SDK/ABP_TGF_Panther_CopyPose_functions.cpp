#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_TGF_Panther_CopyPose

#include "Basic.hpp"

#include "ABP_TGF_Panther_CopyPose_classes.hpp"
#include "ABP_TGF_Panther_CopyPose_parameters.hpp"


namespace SDK
{

// Function ABP_TGF_Panther_CopyPose.ABP_TGF_Panther_CopyPose_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_TGF_Panther_CopyPose_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_TGF_Panther_CopyPose_C", "AnimGraph");

	Params::ABP_TGF_Panther_CopyPose_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_TGF_Panther_CopyPose.ABP_TGF_Panther_CopyPose_C.ExecuteUbergraph_ABP_TGF_Panther_CopyPose
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_TGF_Panther_CopyPose_C::ExecuteUbergraph_ABP_TGF_Panther_CopyPose(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_TGF_Panther_CopyPose_C", "ExecuteUbergraph_ABP_TGF_Panther_CopyPose");

	Params::ABP_TGF_Panther_CopyPose_C_ExecuteUbergraph_ABP_TGF_Panther_CopyPose Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


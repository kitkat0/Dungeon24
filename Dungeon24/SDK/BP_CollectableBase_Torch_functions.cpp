#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CollectableBase_Torch

#include "Basic.hpp"

#include "BP_CollectableBase_Torch_classes.hpp"
#include "BP_CollectableBase_Torch_parameters.hpp"


namespace SDK
{

// Function BP_CollectableBase_Torch.BP_CollectableBase_Torch_C.ExecuteUbergraph_BP_CollectableBase_Torch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CollectableBase_Torch_C::ExecuteUbergraph_BP_CollectableBase_Torch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollectableBase_Torch_C", "ExecuteUbergraph_BP_CollectableBase_Torch");

	Params::BP_CollectableBase_Torch_C_ExecuteUbergraph_BP_CollectableBase_Torch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CollectableBase_Torch.BP_CollectableBase_Torch_C.OnProjectileStop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CollectableBase_Torch_C::OnProjectileStop(const struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollectableBase_Torch_C", "OnProjectileStop");

	Params::BP_CollectableBase_Torch_C_OnProjectileStop Parms{};

	Parms.ImpactResult = std::move(ImpactResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CollectableBase_Torch.BP_CollectableBase_Torch_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_CollectableBase_Torch_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollectableBase_Torch_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CollectableBase_Torch.BP_CollectableBase_Torch_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_CollectableBase_Torch_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CollectableBase_Torch_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

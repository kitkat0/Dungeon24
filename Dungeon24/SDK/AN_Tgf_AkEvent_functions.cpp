#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_Tgf_AkEvent

#include "Basic.hpp"

#include "AN_Tgf_AkEvent_classes.hpp"
#include "AN_Tgf_AkEvent_parameters.hpp"


namespace SDK
{

// Function AN_Tgf_AkEvent.AN_Tgf_AkEvent_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference        EventReference                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_Tgf_AkEvent_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AN_Tgf_AkEvent_C", "Received_Notify");

	Params::AN_Tgf_AkEvent_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = std::move(EventReference);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AN_Tgf_AkEvent.AN_Tgf_AkEvent_C.SetDiffraction
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                     SpeakerComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAN_Tgf_AkEvent_C::SetDiffraction(class AActor* OwnerActor, const class UAkComponent* SpeakerComponent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AN_Tgf_AkEvent_C", "SetDiffraction");

	Params::AN_Tgf_AkEvent_C_SetDiffraction Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.SpeakerComponent = SpeakerComponent;

	UObject::ProcessEvent(Func, &Parms);
}

}


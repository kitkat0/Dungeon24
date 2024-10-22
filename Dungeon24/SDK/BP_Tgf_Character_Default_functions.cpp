#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tgf_Character_Default

#include "Basic.hpp"

#include "BP_Tgf_Character_Default_classes.hpp"
#include "BP_Tgf_Character_Default_parameters.hpp"


namespace SDK
{

// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.AddAkEventPlayingID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AudioEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayingID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::AddAkEventPlayingID(class UAkAudioEvent* AudioEvent, int32 PlayingID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "AddAkEventPlayingID");

	Params::BP_Tgf_Character_Default_C_AddAkEventPlayingID Parms{};

	Parms.AudioEvent = AudioEvent;
	Parms.PlayingID = PlayingID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.AddBeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::AddBeam(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "AddBeam");

	Params::BP_Tgf_Character_Default_C_AddBeam Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.AttachCorpseToMechanism
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::AttachCorpseToMechanism()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "AttachCorpseToMechanism");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_0_TgfAttribute_DeathEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_0_TgfAttribute_DeathEvent__DelegateSignature(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_0_TgfAttribute_DeathEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_0_TgfAttribute_DeathEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_1_TgfAttribute_DeathEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_1_TgfAttribute_DeathEvent__DelegateSignature(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_1_TgfAttribute_DeathEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_1_TgfAttribute_DeathEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_2_TgfAttribute_DeathEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_2_TgfAttribute_DeathEvent__DelegateSignature(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_2_TgfAttribute_DeathEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_2_TgfAttribute_DeathEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_3_TgfAttribute_DeathEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_3_TgfAttribute_DeathEvent__DelegateSignature(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_3_TgfAttribute_DeathEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_3_TgfAttribute_DeathEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_4_TgfAttribute_DeathEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_4_TgfAttribute_DeathEvent__DelegateSignature(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_4_TgfAttribute_DeathEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_4_TgfAttribute_DeathEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_5_TgfAttribute_ItemDropOnDeath__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTgfAttributeComponent*           Param_AttributeComponent                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ULyraInventoryItemInstance*       ItemInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_5_TgfAttribute_ItemDropOnDeath__DelegateSignature(class UTgfAttributeComponent* Param_AttributeComponent, class ULyraInventoryItemInstance* ItemInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_5_TgfAttribute_ItemDropOnDeath__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_AttributeComponent_K2Node_ComponentBoundEvent_5_TgfAttribute_ItemDropOnDeath__DelegateSignature Parms{};

	Parms.Param_AttributeComponent = Param_AttributeComponent;
	Parms.ItemInstance = ItemInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_0_TgfRagdollEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_0_TgfRagdollEvent__DelegateSignature(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_0_TgfRagdollEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_0_TgfRagdollEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_6_TgfRagdollEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Forced                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_6_TgfRagdollEvent__DelegateSignature(class AActor* OwningActor, bool Forced)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_6_TgfRagdollEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_6_TgfRagdollEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Forced = Forced;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_7_TgfRagdollEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Forced                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_7_TgfRagdollEvent__DelegateSignature(class AActor* OwningActor, bool Forced)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_7_TgfRagdollEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_7_TgfRagdollEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;
	Parms.Forced = Forced;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_8_TgfRagdollEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_8_TgfRagdollEvent__DelegateSignature(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_8_TgfRagdollEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_8_TgfRagdollEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_9_TgfRagdollEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_9_TgfRagdollEvent__DelegateSignature(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_9_TgfRagdollEvent__DelegateSignature");

	Params::BP_Tgf_Character_Default_C_BndEvt__BP_Tgf_Character_Default_TgfRagdollComponent_K2Node_ComponentBoundEvent_9_TgfRagdollEvent__DelegateSignature Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.CallFreezeAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsFreeze                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::CallFreezeAction(bool bIsFreeze)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "CallFreezeAction");

	Params::BP_Tgf_Character_Default_C_CallFreezeAction Parms{};

	Parms.bIsFreeze = bIsFreeze;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.CanSetLootable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::CanSetLootable(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "CanSetLootable");

	Params::BP_Tgf_Character_Default_C_CanSetLootable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.CheckSoulHarvest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::CheckSoulHarvest(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "CheckSoulHarvest");

	Params::BP_Tgf_Character_Default_C_CheckSoulHarvest Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.DetachFromMechanism
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::DetachFromMechanism()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "DetachFromMechanism");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.DisableClientTickOnDeath
// (BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::DisableClientTickOnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "DisableClientTickOnDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.ExecuteUbergraph_BP_Tgf_Character_Default
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::ExecuteUbergraph_BP_Tgf_Character_Default(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "ExecuteUbergraph_BP_Tgf_Character_Default");

	Params::BP_Tgf_Character_Default_C_ExecuteUbergraph_BP_Tgf_Character_Default Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.OnRep_MaxQuality
// (BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::OnRep_MaxQuality()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "OnRep_MaxQuality");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.OnSetLootableEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::OnSetLootableEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "OnSetLootableEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Tgf_Character_Default_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.RemoveAkEventPlayingID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AudioEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayingID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::RemoveAkEventPlayingID(class UAkAudioEvent* AudioEvent, int32* PlayingID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "RemoveAkEventPlayingID");

	Params::BP_Tgf_Character_Default_C_RemoveAkEventPlayingID Parms{};

	Parms.AudioEvent = AudioEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.ResetGASCacheData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::ResetGASCacheData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "ResetGASCacheData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.ResetSoulHarvest
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::ResetSoulHarvest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "ResetSoulHarvest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SetAttachNiagaraAlpha
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::SetAttachNiagaraAlpha(double Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SetAttachNiagaraAlpha");

	Params::BP_Tgf_Character_Default_C_SetAttachNiagaraAlpha Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SetCharacterLootLocation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::SetCharacterLootLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SetCharacterLootLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SetComponentTick_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::SetComponentTick_BP(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SetComponentTick_BP");

	Params::BP_Tgf_Character_Default_C_SetComponentTick_BP Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SetGASCacheData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGasCache                        InputData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::SetGASCacheData(const struct FGasCache& InputData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SetGASCacheData");

	Params::BP_Tgf_Character_Default_C_SetGASCacheData Parms{};

	Parms.InputData = std::move(InputData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SetLootable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::SetLootable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SetLootable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SetMeshCollisionLootOnly
// (BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::SetMeshCollisionLootOnly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SetMeshCollisionLootOnly");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SetUnLootable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::SetUnLootable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SetUnLootable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SpawnKillingEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTgfItemEffectDefinition         KillingEffect                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_Tgf_Character_Default_C::SpawnKillingEffect(const struct FTgfItemEffectDefinition& KillingEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SpawnKillingEffect");

	Params::BP_Tgf_Character_Default_C_SpawnKillingEffect Parms{};

	Parms.KillingEffect = std::move(KillingEffect);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.SpawnSoul
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::SpawnSoul()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "SpawnSoul");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.Switch Actor Outline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShowOutline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Tgf_Character_Default_C::Switch_Actor_Outline(bool bShowOutline, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "Switch Actor Outline");

	Params::BP_Tgf_Character_Default_C_Switch_Actor_Outline Parms{};

	Parms.bShowOutline = bShowOutline;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.Update Outline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::Update_Outline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "Update Outline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tgf_Character_Default.BP_Tgf_Character_Default_C.UpdateMaxQuality
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tgf_Character_Default_C::UpdateMaxQuality()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tgf_Character_Default_C", "UpdateMaxQuality");

	UObject::ProcessEvent(Func, nullptr);
}

}


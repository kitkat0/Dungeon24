#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SceneCaptureRig

#include "Basic.hpp"

#include "BP_SceneCaptureRig_classes.hpp"
#include "BP_SceneCaptureRig_parameters.hpp"


namespace SDK
{

// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.Add Actor for Capture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bPlaceAtSpot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIgnoreAddToList                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::Add_Actor_for_Capture(class AActor* Actor, bool bPlaceAtSpot, bool bIgnoreAddToList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "Add Actor for Capture");

	Params::BP_SceneCaptureRig_C_Add_Actor_for_Capture Parms{};

	Parms.Actor = Actor;
	Parms.bPlaceAtSpot = bPlaceAtSpot;
	Parms.bIgnoreAddToList = bIgnoreAddToList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.AddBackdrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*                Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::AddBackdrop(class UMaterialInstance* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "AddBackdrop");

	Params::BP_SceneCaptureRig_C_AddBackdrop Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.AddControlledCharacterToCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTgfInventoryWrapper*             InventoryContext                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALyraCharacter*                   Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::AddControlledCharacterToCapture(class UTgfInventoryWrapper* InventoryContext, class ALyraCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "AddControlledCharacterToCapture");

	Params::BP_SceneCaptureRig_C_AddControlledCharacterToCapture Parms{};

	Parms.InventoryContext = InventoryContext;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.Capture Submesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASkeletalMeshActor*               Mesh_actor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*                    Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           Ret                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::Capture_Submesh(class ASkeletalMeshActor* Mesh_actor, class USkeletalMesh* Mesh, class USkeletalMeshComponent** Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "Capture Submesh");

	Params::BP_SceneCaptureRig_C_Capture_Submesh Parms{};

	Parms.Mesh_actor = Mesh_actor;
	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.Discard
// (BlueprintCallable, BlueprintEvent)

void ABP_SceneCaptureRig_C::Discard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "Discard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.DoesAvatarActorNeedRecreate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::DoesAvatarActorNeedRecreate(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "DoesAvatarActorNeedRecreate");

	Params::BP_SceneCaptureRig_C_DoesAvatarActorNeedRecreate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.ExecuteUbergraph_BP_SceneCaptureRig
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::ExecuteUbergraph_BP_SceneCaptureRig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "ExecuteUbergraph_BP_SceneCaptureRig");

	Params::BP_SceneCaptureRig_C_ExecuteUbergraph_BP_SceneCaptureRig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.OnBeginFrame
// (BlueprintCallable, BlueprintEvent)

void ABP_SceneCaptureRig_C::OnBeginFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "OnBeginFrame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.OnMessageReceived_2F7C8F0546AA6C06B0DDE7A561AFA6E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::OnMessageReceived_2F7C8F0546AA6C06B0DDE7A561AFA6E5(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "OnMessageReceived_2F7C8F0546AA6C06B0DDE7A561AFA6E5");

	Params::BP_SceneCaptureRig_C_OnMessageReceived_2F7C8F0546AA6C06B0DDE7A561AFA6E5 Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.OnReady_64B6A5074A8A364F81D77FA661E381F1
// (BlueprintCallable, BlueprintEvent)

void ABP_SceneCaptureRig_C::OnReady_64B6A5074A8A364F81D77FA661E381F1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "OnReady_64B6A5074A8A364F81D77FA661E381F1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.OnReady_E2435C1E44E6BB17F947C6AB3F984616
// (BlueprintCallable, BlueprintEvent)

void ABP_SceneCaptureRig_C::OnReady_E2435C1E44E6BB17F947C6AB3F984616()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "OnReady_E2435C1E44E6BB17F947C6AB3F984616");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SceneCaptureRig_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "ReceiveEndPlay");

	Params::BP_SceneCaptureRig_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.RecreateAvatarActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SceneCaptureRig_C::RecreateAvatarActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "RecreateAvatarActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.Refresh Avatar Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATgfAvatarActor*                  InAvatar                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::Refresh_Avatar_Actor(class ATgfAvatarActor* InAvatar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "Refresh Avatar Actor");

	Params::BP_SceneCaptureRig_C_Refresh_Avatar_Actor Parms{};

	Parms.InAvatar = InAvatar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.Refresh Body Parts
// (BlueprintCallable, BlueprintEvent)

void ABP_SceneCaptureRig_C::Refresh_Body_Parts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "Refresh Body Parts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.Refresh Weapons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTgfInventoryWrapper*             InventoryContext                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::Refresh_Weapons(class UTgfInventoryWrapper* InventoryContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "Refresh Weapons");

	Params::BP_SceneCaptureRig_C_Refresh_Weapons Parms{};

	Parms.InventoryContext = InventoryContext;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.ResizeTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                        TexSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::ResizeTexture(const struct FIntPoint& TexSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "ResizeTexture");

	Params::BP_SceneCaptureRig_C_ResizeTexture Parms{};

	Parms.TexSize = std::move(TexSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.ResizeTextureImpl
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SceneCaptureRig_C::ResizeTextureImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "ResizeTextureImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.SetCapturePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::SetCapturePosition(const struct FVector& Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "SetCapturePosition");

	Params::BP_SceneCaptureRig_C_SetCapturePosition Parms{};

	Parms.Pos = std::move(Pos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.SetCaptureViewField
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::SetCaptureViewField(double Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "SetCaptureViewField");

	Params::BP_SceneCaptureRig_C_SetCaptureViewField Parms{};

	Parms.Field = Field;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_SceneCaptureRig_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_SceneCaptureRig_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.UpdateBackDrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       BackDropTex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SceneCaptureRig_C::UpdateBackDrop(class UTexture2D* BackDropTex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "UpdateBackDrop");

	Params::BP_SceneCaptureRig_C_UpdateBackDrop Parms{};

	Parms.BackDropTex = BackDropTex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.��t__FinishedFunc
// (BlueprintEvent)

void ABP_SceneCaptureRig_C::__t__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "��t__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SceneCaptureRig.BP_SceneCaptureRig_C.��t__UpdateFunc
// (BlueprintEvent)

void ABP_SceneCaptureRig_C::__t__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SceneCaptureRig_C", "��t__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}


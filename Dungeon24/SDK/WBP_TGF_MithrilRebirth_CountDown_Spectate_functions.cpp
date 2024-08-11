#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TGF_MithrilRebirth_CountDown_Spectate

#include "Basic.hpp"

#include "WBP_TGF_MithrilRebirth_CountDown_Spectate_classes.hpp"
#include "WBP_TGF_MithrilRebirth_CountDown_Spectate_parameters.hpp"


namespace SDK
{

// Function WBP_TGF_MithrilRebirth_CountDown_Spectate.WBP_TGF_MithrilRebirth_CountDown_Spectate_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_TGF_MithrilRebirth_CountDown_Spectate_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TGF_MithrilRebirth_CountDown_Spectate_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TGF_MithrilRebirth_CountDown_Spectate.WBP_TGF_MithrilRebirth_CountDown_Spectate_C.ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TGF_MithrilRebirth_CountDown_Spectate_C::ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TGF_MithrilRebirth_CountDown_Spectate_C", "ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate");

	Params::WBP_TGF_MithrilRebirth_CountDown_Spectate_C_ExecuteUbergraph_WBP_TGF_MithrilRebirth_CountDown_Spectate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TGF_MithrilRebirth_CountDown_Spectate.WBP_TGF_MithrilRebirth_CountDown_Spectate_C.RebirthFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OwningActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TGF_MithrilRebirth_CountDown_Spectate_C::RebirthFinish(class AActor* OwningActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TGF_MithrilRebirth_CountDown_Spectate_C", "RebirthFinish");

	Params::WBP_TGF_MithrilRebirth_CountDown_Spectate_C_RebirthFinish Parms{};

	Parms.OwningActor = OwningActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TGF_MithrilRebirth_CountDown_Spectate.WBP_TGF_MithrilRebirth_CountDown_Spectate_C.SetTargetCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALyraCharacter*                   Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TGF_MithrilRebirth_CountDown_Spectate_C::SetTargetCharacter(class ALyraCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TGF_MithrilRebirth_CountDown_Spectate_C", "SetTargetCharacter");

	Params::WBP_TGF_MithrilRebirth_CountDown_Spectate_C_SetTargetCharacter Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}

}


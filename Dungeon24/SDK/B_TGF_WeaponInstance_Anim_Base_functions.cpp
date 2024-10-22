#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TGF_WeaponInstance_Anim_Base

#include "Basic.hpp"

#include "B_TGF_WeaponInstance_Anim_Base_classes.hpp"
#include "B_TGF_WeaponInstance_Anim_Base_parameters.hpp"


namespace SDK
{

// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.DetermineCosmeticTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UB_TGF_WeaponInstance_Anim_Base_C::DetermineCosmeticTags()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "DetermineCosmeticTags");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.ExecuteUbergraph_B_TGF_WeaponInstance_Anim_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::ExecuteUbergraph_B_TGF_WeaponInstance_Anim_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "ExecuteUbergraph_B_TGF_WeaponInstance_Anim_Base");

	Params::B_TGF_WeaponInstance_Anim_Base_C_ExecuteUbergraph_B_TGF_WeaponInstance_Anim_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.IsDeadOrDying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDead                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::IsDeadOrDying(bool* IsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "IsDeadOrDying");

	Params::B_TGF_WeaponInstance_Anim_Base_C_IsDeadOrDying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDead != nullptr)
		*IsDead = Parms.IsDead;
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.K2_OnEquipped
// (Event, Protected, BlueprintEvent)

void UB_TGF_WeaponInstance_Anim_Base_C::K2_OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "K2_OnEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.K2_OnRedrawWeapon
// (Event, Protected, BlueprintEvent)

void UB_TGF_WeaponInstance_Anim_Base_C::K2_OnRedrawWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "K2_OnRedrawWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.K2_OnUnequipped
// (Event, Protected, BlueprintEvent)

void UB_TGF_WeaponInstance_Anim_Base_C::K2_OnUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "K2_OnUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnBlendOut_9C8FD1704F365F705D5E0B8981E6E554
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnBlendOut_9C8FD1704F365F705D5E0B8981E6E554(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnBlendOut_9C8FD1704F365F705D5E0B8981E6E554");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnBlendOut_9C8FD1704F365F705D5E0B8981E6E554 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnBlendOut_9C8FD1704F365F705D5E0B89EE0057BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnBlendOut_9C8FD1704F365F705D5E0B89EE0057BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnBlendOut_9C8FD1704F365F705D5E0B89EE0057BA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnBlendOut_9C8FD1704F365F705D5E0B89EE0057BA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnBlendOut_9C8FD1704F365F705D5E0B89F51F6FBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnBlendOut_9C8FD1704F365F705D5E0B89F51F6FBA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnBlendOut_9C8FD1704F365F705D5E0B89F51F6FBA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnBlendOut_9C8FD1704F365F705D5E0B89F51F6FBA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnCompleted_9C8FD1704F365F705D5E0B8981E6E554
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnCompleted_9C8FD1704F365F705D5E0B8981E6E554(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnCompleted_9C8FD1704F365F705D5E0B8981E6E554");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnCompleted_9C8FD1704F365F705D5E0B8981E6E554 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnCompleted_9C8FD1704F365F705D5E0B89EE0057BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnCompleted_9C8FD1704F365F705D5E0B89EE0057BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnCompleted_9C8FD1704F365F705D5E0B89EE0057BA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnCompleted_9C8FD1704F365F705D5E0B89EE0057BA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnCompleted_9C8FD1704F365F705D5E0B89F51F6FBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnCompleted_9C8FD1704F365F705D5E0B89F51F6FBA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnCompleted_9C8FD1704F365F705D5E0B89F51F6FBA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnCompleted_9C8FD1704F365F705D5E0B89F51F6FBA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnInterrupted_9C8FD1704F365F705D5E0B8981E6E554
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnInterrupted_9C8FD1704F365F705D5E0B8981E6E554(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnInterrupted_9C8FD1704F365F705D5E0B8981E6E554");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnInterrupted_9C8FD1704F365F705D5E0B8981E6E554 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnInterrupted_9C8FD1704F365F705D5E0B89EE0057BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnInterrupted_9C8FD1704F365F705D5E0B89EE0057BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnInterrupted_9C8FD1704F365F705D5E0B89EE0057BA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnInterrupted_9C8FD1704F365F705D5E0B89EE0057BA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnInterrupted_9C8FD1704F365F705D5E0B89F51F6FBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnInterrupted_9C8FD1704F365F705D5E0B89F51F6FBA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnInterrupted_9C8FD1704F365F705D5E0B89F51F6FBA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnInterrupted_9C8FD1704F365F705D5E0B89F51F6FBA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnNotifyBegin_9C8FD1704F365F705D5E0B8981E6E554
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnNotifyBegin_9C8FD1704F365F705D5E0B8981E6E554(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnNotifyBegin_9C8FD1704F365F705D5E0B8981E6E554");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnNotifyBegin_9C8FD1704F365F705D5E0B8981E6E554 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnNotifyBegin_9C8FD1704F365F705D5E0B89EE0057BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnNotifyBegin_9C8FD1704F365F705D5E0B89EE0057BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnNotifyBegin_9C8FD1704F365F705D5E0B89EE0057BA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnNotifyBegin_9C8FD1704F365F705D5E0B89EE0057BA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnNotifyBegin_9C8FD1704F365F705D5E0B89F51F6FBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnNotifyBegin_9C8FD1704F365F705D5E0B89F51F6FBA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnNotifyBegin_9C8FD1704F365F705D5E0B89F51F6FBA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnNotifyBegin_9C8FD1704F365F705D5E0B89F51F6FBA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnNotifyEnd_9C8FD1704F365F705D5E0B8981E6E554
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnNotifyEnd_9C8FD1704F365F705D5E0B8981E6E554(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnNotifyEnd_9C8FD1704F365F705D5E0B8981E6E554");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnNotifyEnd_9C8FD1704F365F705D5E0B8981E6E554 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnNotifyEnd_9C8FD1704F365F705D5E0B89EE0057BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnNotifyEnd_9C8FD1704F365F705D5E0B89EE0057BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnNotifyEnd_9C8FD1704F365F705D5E0B89EE0057BA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnNotifyEnd_9C8FD1704F365F705D5E0B89EE0057BA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.OnNotifyEnd_9C8FD1704F365F705D5E0B89F51F6FBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::OnNotifyEnd_9C8FD1704F365F705D5E0B89F51F6FBA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "OnNotifyEnd_9C8FD1704F365F705D5E0B89F51F6FBA");

	Params::B_TGF_WeaponInstance_Anim_Base_C_OnNotifyEnd_9C8FD1704F365F705D5E0B89F51F6FBA Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.Set Animation Tag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsRight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::Set_Animation_Tag(bool bIsRight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "Set Animation Tag");

	Params::B_TGF_WeaponInstance_Anim_Base_C_Set_Animation_Tag Parms{};

	Parms.bIsRight = bIsRight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TGF_WeaponInstance_Anim_Base.B_TGF_WeaponInstance_Anim_Base_C.Try Play Weapon Equip Montage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEquiped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_TGF_WeaponInstance_Anim_Base_C::Try_Play_Weapon_Equip_Montage(bool bEquiped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TGF_WeaponInstance_Anim_Base_C", "Try Play Weapon Equip Montage");

	Params::B_TGF_WeaponInstance_Anim_Base_C_Try_Play_Weapon_Equip_Montage Parms{};

	Parms.bEquiped = bEquiped;

	UObject::ProcessEvent(Func, &Parms);
}

}


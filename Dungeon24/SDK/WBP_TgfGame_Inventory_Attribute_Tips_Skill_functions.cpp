#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Inventory_Attribute_Tips_Skill

#include "Basic.hpp"

#include "WBP_TgfGame_Inventory_Attribute_Tips_Skill_classes.hpp"
#include "WBP_TgfGame_Inventory_Attribute_Tips_Skill_parameters.hpp"


namespace SDK
{

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill");

	Params::WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.MakeSkillDescribeText
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Result                                                 (Parm, OutParm)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::MakeSkillDescribeText(const class FText& Description, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "MakeSkillDescribeText");

	Params::WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText Parms{};

	Parms.Description = std::move(Description);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "PreConstruct");

	Params::WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.SetUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Tgf_Skill_Base_C*            Param_Skill                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent_cell                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Skill_id                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTgfInventoryRoleWrapper*         Param_RoleWrapper                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::SetUp(class UWBP_Tgf_Skill_Base_C* Param_Skill, class UUserWidget* Parent_cell, int32 Skill_id, class UTgfInventoryRoleWrapper* Param_RoleWrapper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "SetUp");

	Params::WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp Parms{};

	Parms.Param_Skill = Param_Skill;
	Parms.Parent_cell = Parent_cell;
	Parms.Skill_id = Skill_id;
	Parms.Param_RoleWrapper = Param_RoleWrapper;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.SetupBySkillBase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Tgf_Skill_Base_C*            Param_Skill                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent_cell                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGA_TGF_Skill_Base_C*             Skill_base                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTgfInventoryRoleWrapper*         Param_RoleWrapper                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::SetupBySkillBase(class UWBP_Tgf_Skill_Base_C* Param_Skill, class UUserWidget* Parent_cell, class UGA_TGF_Skill_Base_C* Skill_base, class UTgfInventoryRoleWrapper* Param_RoleWrapper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "SetupBySkillBase");

	Params::WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase Parms{};

	Parms.Param_Skill = Param_Skill;
	Parms.Parent_cell = Parent_cell;
	Parms.Skill_base = Skill_base;
	Parms.Param_RoleWrapper = Param_RoleWrapper;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.ShowTooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "ShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "Tick");

	Params::WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.UpdatePos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::UpdatePos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "UpdatePos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.UpdateShow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::UpdateShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "UpdateShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_Inventory_Attribute_Tips_Skill_C", "GetModuleName");

	Params::WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

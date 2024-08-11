#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_InventoryMenu

#include "Basic.hpp"

#include "WBP_TgfGame_InventoryMenu_classes.hpp"
#include "WBP_TgfGame_InventoryMenu_parameters.hpp"


namespace SDK
{

// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.BindActionEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::BindActionEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "BindActionEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.CreateCaptureIn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::CreateCaptureIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "CreateCaptureIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.DropItem
// (Native, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::DropItem(class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "DropItem");

	Params::WBP_TgfGame_InventoryMenu_C_DropItem Parms{};

	Parms.Operation = Operation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.ExecuteUbergraph_WBP_TgfGame_InventoryMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::ExecuteUbergraph_WBP_TgfGame_InventoryMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "ExecuteUbergraph_WBP_TgfGame_InventoryMenu");

	Params::WBP_TgfGame_InventoryMenu_C_ExecuteUbergraph_WBP_TgfGame_InventoryMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.FinishTransitionIn
// (BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::FinishTransitionIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "FinishTransitionIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.GetAttributeValue
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EnRoleDisplayAttribueID                 Attribute_id                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Max                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::GetAttributeValue(EnRoleDisplayAttribueID Attribute_id, double* Value, double* Base, double* Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "GetAttributeValue");

	Params::WBP_TgfGame_InventoryMenu_C_GetAttributeValue Parms{};

	Parms.Attribute_id = Attribute_id;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (Base != nullptr)
		*Base = Parms.Base;

	if (Max != nullptr)
		*Max = Parms.Max;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.GetCharacterSectionPositon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        LeftTop                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Size                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::GetCharacterSectionPositon(struct FVector2D* LeftTop, struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "GetCharacterSectionPositon");

	Params::WBP_TgfGame_InventoryMenu_C_GetCharacterSectionPositon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeftTop != nullptr)
		*LeftTop = std::move(Parms.LeftTop);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.GetInventoryContext
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTgfInventoryWrapper*             InventoryContextNew                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::GetInventoryContext(class UTgfInventoryWrapper** InventoryContextNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "GetInventoryContext");

	Params::WBP_TgfGame_InventoryMenu_C_GetInventoryContext Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InventoryContextNew != nullptr)
		*InventoryContextNew = Parms.InventoryContextNew;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.IsCloseKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::IsCloseKey(const struct FKey& Key, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "IsCloseKey");

	Params::WBP_TgfGame_InventoryMenu_C_IsCloseKey Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.OnAttributeChanged
// (Native, Public, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::OnAttributeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "OnAttributeChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.OnDragEnter
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "OnDragEnter");

	Params::WBP_TgfGame_InventoryMenu_C_OnDragEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.OnDrop
// (BlueprintCosmetic, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_TgfGame_InventoryMenu_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "OnDrop");

	Params::WBP_TgfGame_InventoryMenu_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TgfGame_InventoryMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "OnKeyDown");

	Params::WBP_TgfGame_InventoryMenu_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TgfGame_InventoryMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "OnKeyUp");

	Params::WBP_TgfGame_InventoryMenu_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.PlayBackgroundEffect
// (BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::PlayBackgroundEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "PlayBackgroundEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.SequenceEvent__ENTRYPOINTWBP_TgfGame_InventoryMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::SequenceEvent__ENTRYPOINTWBP_TgfGame_InventoryMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "SequenceEvent__ENTRYPOINTWBP_TgfGame_InventoryMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.SequenceEvent__ENTRYPOINTWBP_TgfGame_InventoryMenu_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::SequenceEvent__ENTRYPOINTWBP_TgfGame_InventoryMenu_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "SequenceEvent__ENTRYPOINTWBP_TgfGame_InventoryMenu_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.Set Detail Attribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_TgfGame_Inventory_Attribute_ListItem2_C*>AttributeItems                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UWrapBox*                         Attr_parent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRoleDisplayAttribute            Attr_config                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::Set_Detail_Attribute(int32 Param_Index, TArray<class UWBP_TgfGame_Inventory_Attribute_ListItem2_C*>& AttributeItems, class UWrapBox* Attr_parent, const struct FRoleDisplayAttribute& Attr_config, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "Set Detail Attribute");

	Params::WBP_TgfGame_InventoryMenu_C_Set_Detail_Attribute Parms{};

	Parms.Param_Index = Param_Index;
	Parms.AttributeItems = std::move(AttributeItems);
	Parms.Attr_parent = Attr_parent;
	Parms.Attr_config = std::move(Attr_config);

	UObject::ProcessEvent(Func, &Parms);

	AttributeItems = std::move(Parms.AttributeItems);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.SetAttrValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_TgfGame_Inventory_Attribute_ListItem1_C*Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FRoleDisplayAttribute            Attr_config                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TgfGame_InventoryMenu_C::SetAttrValue(double Value, class UWBP_TgfGame_Inventory_Attribute_ListItem1_C* Item, const class FText& Param_Name, const struct FRoleDisplayAttribute& Attr_config)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "SetAttrValue");

	Params::WBP_TgfGame_InventoryMenu_C_SetAttrValue Parms{};

	Parms.Value = Value;
	Parms.Item = Item;
	Parms.Param_Name = std::move(Param_Name);
	Parms.Attr_config = std::move(Attr_config);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.SetUp
// (Native, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      _Controller                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALyraCharacter*                   Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULyraInventoryManagerComponent*   Loot_Inventory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ULyraEquipmentManagerComponent*   Loot_Equipment                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ALyraCharacter*                   MyCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::SetUp(class AController* _Controller, class ALyraCharacter* Character, class ULyraInventoryManagerComponent* Loot_Inventory, class ULyraEquipmentManagerComponent* Loot_Equipment, class ALyraCharacter* MyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "SetUp");

	Params::WBP_TgfGame_InventoryMenu_C_SetUp Parms{};

	Parms._Controller = _Controller;
	Parms.Character = Character;
	Parms.Loot_Inventory = Loot_Inventory;
	Parms.Loot_Equipment = Loot_Equipment;
	Parms.MyCharacter = MyCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.TestPos
// (BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::TestPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "TestPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "Tick");

	Params::WBP_TgfGame_InventoryMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.Update Attributes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULyraAbilitySystemComponent*      Ablity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::Update_Attributes(class ULyraAbilitySystemComponent* Ablity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "Update Attributes");

	Params::WBP_TgfGame_InventoryMenu_C_Update_Attributes Parms{};

	Parms.Ablity = Ablity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.UpdateDetailAttributes
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventoryMenu_C::UpdateDetailAttributes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "UpdateDetailAttributes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.UpdateRoleInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETgfActorCareer                         Career                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventoryMenu_C::UpdateRoleInfo(ETgfActorCareer Career)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "UpdateRoleInfo");

	Params::WBP_TgfGame_InventoryMenu_C_UpdateRoleInfo Parms{};

	Parms.Career = Career;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_TgfGame_InventoryMenu_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "BP_GetDesiredFocusTarget");

	Params::WBP_TgfGame_InventoryMenu_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_TgfGame_InventoryMenu.WBP_TgfGame_InventoryMenu_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_TgfGame_InventoryMenu_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventoryMenu_C", "GetModuleName");

	Params::WBP_TgfGame_InventoryMenu_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

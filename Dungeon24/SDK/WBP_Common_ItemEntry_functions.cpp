#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_ItemEntry

#include "Basic.hpp"

#include "WBP_Common_ItemEntry_classes.hpp"
#include "WBP_Common_ItemEntry_parameters.hpp"


namespace SDK
{

// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.BP_OnCooldownStart
// (Event, Public, BlueprintEvent)

void UWBP_Common_ItemEntry_C::BP_OnCooldownStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "BP_OnCooldownStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.CreateCDBar
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Common_ItemEntry_C::CreateCDBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "CreateCDBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.Detect Drag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Inventory_DragDrop_Base_C*    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UBP_Inventory_DragDrop_Base_C* UWBP_Common_ItemEntry_C::Detect_Drag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "Detect Drag");

	Params::WBP_Common_ItemEntry_C_Detect_Drag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.ExecuteUbergraph_WBP_Common_ItemEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::ExecuteUbergraph_WBP_Common_ItemEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "ExecuteUbergraph_WBP_Common_ItemEntry");

	Params::WBP_Common_ItemEntry_C_ExecuteUbergraph_WBP_Common_ItemEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.GetCDGE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTgfInventoryItemWrapper*         Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::GetCDGE(class UTgfInventoryItemWrapper* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "GetCDGE");

	Params::WBP_Common_ItemEntry_C_GetCDGE Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.OnLoaded_0EBC6A99492E0C96121AF4AF58DF2B6C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::OnLoaded_0EBC6A99492E0C96121AF4AF58DF2B6C(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "OnLoaded_0EBC6A99492E0C96121AF4AF58DF2B6C");

	Params::WBP_Common_ItemEntry_C_OnLoaded_0EBC6A99492E0C96121AF4AF58DF2B6C Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.OnQuickDiscard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Common_ItemEntry_C*          Item_Entry                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::OnQuickDiscard__DelegateSignature(class UWBP_Common_ItemEntry_C* Item_Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "OnQuickDiscard__DelegateSignature");

	Params::WBP_Common_ItemEntry_C_OnQuickDiscard__DelegateSignature Parms{};

	Parms.Item_Entry = Item_Entry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.OnQuickEquipOrUnequip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Common_ItemEntry_C*          ItemEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::OnQuickEquipOrUnequip__DelegateSignature(class UWBP_Common_ItemEntry_C* ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "OnQuickEquipOrUnequip__DelegateSignature");

	Params::WBP_Common_ItemEntry_C_OnQuickEquipOrUnequip__DelegateSignature Parms{};

	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.OnUseItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Common_ItemEntry_C*          Item_Entry                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::OnUseItem__DelegateSignature(class UWBP_Common_ItemEntry_C* Item_Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "OnUseItem__DelegateSignature");

	Params::WBP_Common_ItemEntry_C_OnUseItem__DelegateSignature Parms{};

	Parms.Item_Entry = Item_Entry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "PreConstruct");

	Params::WBP_Common_ItemEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.ProcessMouseButtonDown
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          DetectingDragOnWidget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Common_ItemEntry_C::ProcessMouseButtonDown(class UWidget* DetectingDragOnWidget, const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "ProcessMouseButtonDown");

	Params::WBP_Common_ItemEntry_C_ProcessMouseButtonDown Parms{};

	Parms.DetectingDragOnWidget = DetectingDragOnWidget;
	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.ProcessMouseButtonUp
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Common_ItemEntry_C::ProcessMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "ProcessMouseButtonUp");

	Params::WBP_Common_ItemEntry_C_ProcessMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_Common_ItemEntry_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "SequenceEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.SequenceEvent__ENTRYPOINTWBP_Common_ItemEntry
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Common_ItemEntry_C::SequenceEvent__ENTRYPOINTWBP_Common_ItemEntry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "SequenceEvent__ENTRYPOINTWBP_Common_ItemEntry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.Set Cool Down
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Common_ItemEntry_C::Set_Cool_Down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "Set Cool Down");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.SetBackgroundWithQuality
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ETgfEquipQuality                        Quality                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::SetBackgroundWithQuality(ETgfEquipQuality Quality)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "SetBackgroundWithQuality");

	Params::WBP_Common_ItemEntry_C_SetBackgroundWithQuality Parms{};

	Parms.Quality = Quality;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.SetIconImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Gray                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    MatchSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::SetIconImage(class UTexture2D* Texture, bool Gray, bool MatchSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "SetIconImage");

	Params::WBP_Common_ItemEntry_C_SetIconImage Parms{};

	Parms.Texture = Texture;
	Parms.Gray = Gray;
	Parms.MatchSize = MatchSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.SetIconScale
// (Native, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::SetIconScale(double Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "SetIconScale");

	Params::WBP_Common_ItemEntry_C_SetIconScale Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.SetQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETgfEquipQuality                        Quality                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::SetQuality(ETgfEquipQuality Quality)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "SetQuality");

	Params::WBP_Common_ItemEntry_C_SetQuality Parms{};

	Parms.Quality = Quality;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.Setup With Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTgfInventoryItemWrapper*         Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::Setup_With_Item(class UTgfInventoryItemWrapper* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "Setup With Item");

	Params::WBP_Common_ItemEntry_C_Setup_With_Item Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.SetupWithItem
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTgfInventoryItemWrapper*         Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTgfInventoryWrapper*             Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEquipment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Common_ItemEntry_C::SetupWithItem(class UTgfInventoryItemWrapper* Item, class UTgfInventoryWrapper* Context, bool IsEquipment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "SetupWithItem");

	Params::WBP_Common_ItemEntry_C_SetupWithItem Parms{};

	Parms.Item = Item;
	Parms.Context = Context;
	Parms.IsEquipment = IsEquipment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_Common_ItemEntry.WBP_Common_ItemEntry_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_Common_ItemEntry_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Common_ItemEntry_C", "GetModuleName");

	Params::WBP_Common_ItemEntry_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


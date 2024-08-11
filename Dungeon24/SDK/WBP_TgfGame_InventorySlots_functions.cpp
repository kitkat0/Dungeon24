#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_InventorySlots

#include "Basic.hpp"

#include "WBP_TgfGame_InventorySlots_classes.hpp"
#include "WBP_TgfGame_InventorySlots_parameters.hpp"


namespace SDK
{

// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintEvent)

void UWBP_TgfGame_InventorySlots_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.ExecuteUbergraph_WBP_TgfGame_InventorySlots
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::ExecuteUbergraph_WBP_TgfGame_InventorySlots(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "ExecuteUbergraph_WBP_TgfGame_InventorySlots");

	Params::WBP_TgfGame_InventorySlots_C_ExecuteUbergraph_WBP_TgfGame_InventorySlots Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.GetCellSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Width                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::GetCellSize(double* Width, double* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "GetCellSize");

	Params::WBP_TgfGame_InventorySlots_C_GetCellSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.GetMouseCell
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FIntPoint                        Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::GetMouseCell(const struct FPointerEvent& PointerEvent, struct FIntPoint* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "GetMouseCell");

	Params::WBP_TgfGame_InventorySlots_C_GetMouseCell Parms{};

	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = std::move(Parms.Ret);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.GetPotentialDropPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        AbsoluteCoordinate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ULyraInventoryItemDefinition>Item_Definition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                                   TopRow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LeftColumn                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RowSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ColumnSize                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::GetPotentialDropPosition(const struct FVector2D& AbsoluteCoordinate, TSubclassOf<class ULyraInventoryItemDefinition> Item_Definition, int32* TopRow, int32* LeftColumn, int32* RowSize, int32* ColumnSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "GetPotentialDropPosition");

	Params::WBP_TgfGame_InventorySlots_C_GetPotentialDropPosition Parms{};

	Parms.AbsoluteCoordinate = std::move(AbsoluteCoordinate);
	Parms.Item_Definition = Item_Definition;

	UObject::ProcessEvent(Func, &Parms);

	if (TopRow != nullptr)
		*TopRow = Parms.TopRow;

	if (LeftColumn != nullptr)
		*LeftColumn = Parms.LeftColumn;

	if (RowSize != nullptr)
		*RowSize = Parms.RowSize;

	if (ColumnSize != nullptr)
		*ColumnSize = Parms.ColumnSize;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnDragEnter");

	Params::WBP_TgfGame_InventorySlots_C_OnDragEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnDragLeave");

	Params::WBP_TgfGame_InventorySlots_C_OnDragLeave Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnDragOver
// (BlueprintCosmetic, Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_TgfGame_InventorySlots_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnDragOver");

	Params::WBP_TgfGame_InventorySlots_C_OnDragOver Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnDrop
// (BlueprintCosmetic, Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_TgfGame_InventorySlots_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnDrop");

	Params::WBP_TgfGame_InventorySlots_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnInventoryUpdated
// (Native, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventorySlots_C::OnInventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnInventoryUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TgfGame_InventorySlots_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnMouseEnter");

	Params::WBP_TgfGame_InventorySlots_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TgfGame_InventorySlots_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnMouseLeave");

	Params::WBP_TgfGame_InventorySlots_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnMouseMove
// (BlueprintCosmetic, Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TgfGame_InventorySlots_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnMouseMove");

	Params::WBP_TgfGame_InventorySlots_C_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.OnStorageUpdate
// (BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventorySlots_C::OnStorageUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "OnStorageUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "PreConstruct");

	Params::WBP_TgfGame_InventorySlots_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.PreviewGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rows                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Columns                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::PreviewGrid(int32 Rows, int32 Columns)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "PreviewGrid");

	Params::WBP_TgfGame_InventorySlots_C_PreviewGrid Parms{};

	Parms.Rows = Rows;
	Parms.Columns = Columns;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.RefreshEntries
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TgfGame_InventorySlots_C::RefreshEntries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "RefreshEntries");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.SetDropIndicatorStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Stats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::SetDropIndicatorStats(bool Stats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "SetDropIndicatorStats");

	Params::WBP_TgfGame_InventorySlots_C_SetDropIndicatorStats Parms{};

	Parms.Stats = Stats;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.SetDropIndicatorVisibility
// (Native, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::SetDropIndicatorVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "SetDropIndicatorVisibility");

	Params::WBP_TgfGame_InventorySlots_C_SetDropIndicatorVisibility Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.SetHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Row                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Col                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::SetHover(bool Show, int32 Row, int32 Col)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "SetHover");

	Params::WBP_TgfGame_InventorySlots_C_SetHover Parms{};

	Parms.Show = Show;
	Parms.Row = Row;
	Parms.Col = Col;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.SetUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PageId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::SetUp(int32 PageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "SetUp");

	Params::WBP_TgfGame_InventorySlots_C_SetUp Parms{};

	Parms.PageId = PageId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.SetupGrid
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rows                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Columns                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TgfGame_InventorySlots_C::SetupGrid(int32 Rows, int32 Columns)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "SetupGrid");

	Params::WBP_TgfGame_InventorySlots_C_SetupGrid Parms{};

	Parms.Rows = Rows;
	Parms.Columns = Columns;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.UpdateHover
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      Ret                                                    (Parm, OutParm)

void UWBP_TgfGame_InventorySlots_C::UpdateHover(const struct FPointerEvent& MouseEvent, struct FEventReply* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "UpdateHover");

	Params::WBP_TgfGame_InventorySlots_C_UpdateHover Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Ret != nullptr)
		*Ret = std::move(Parms.Ret);
}


// Function WBP_TgfGame_InventorySlots.WBP_TgfGame_InventorySlots_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWBP_TgfGame_InventorySlots_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TgfGame_InventorySlots_C", "GetModuleName");

	Params::WBP_TgfGame_InventorySlots_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DragDropIntercepter

#include "Basic.hpp"

#include "WBP_DragDropIntercepter_classes.hpp"
#include "WBP_DragDropIntercepter_parameters.hpp"


namespace SDK
{

// Function WBP_DragDropIntercepter.WBP_DragDropIntercepter_C.EventDrop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operaton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DragDropIntercepter_C::EventDrop__DelegateSignature(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operaton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DragDropIntercepter_C", "EventDrop__DelegateSignature");

	Params::WBP_DragDropIntercepter_C_EventDrop__DelegateSignature Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operaton = Operaton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DragDropIntercepter.WBP_DragDropIntercepter_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_DragDropIntercepter_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DragDropIntercepter_C", "OnDrop");

	Params::WBP_DragDropIntercepter_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


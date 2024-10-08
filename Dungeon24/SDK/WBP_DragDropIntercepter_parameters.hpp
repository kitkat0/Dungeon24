#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DragDropIntercepter

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_DragDropIntercepter.WBP_DragDropIntercepter_C.EventDrop__DelegateSignature
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_DragDropIntercepter_C_EventDrop__DelegateSignature final
{
public:
	struct FPointerEvent                          PointerEvent;                                      // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operaton;                                          // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DragDropIntercepter_C_EventDrop__DelegateSignature) == 0x000008, "Wrong alignment on WBP_DragDropIntercepter_C_EventDrop__DelegateSignature");
static_assert(sizeof(WBP_DragDropIntercepter_C_EventDrop__DelegateSignature) == 0x0000A0, "Wrong size on WBP_DragDropIntercepter_C_EventDrop__DelegateSignature");
static_assert(offsetof(WBP_DragDropIntercepter_C_EventDrop__DelegateSignature, PointerEvent) == 0x000000, "Member 'WBP_DragDropIntercepter_C_EventDrop__DelegateSignature::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_DragDropIntercepter_C_EventDrop__DelegateSignature, Operaton) == 0x000098, "Member 'WBP_DragDropIntercepter_C_EventDrop__DelegateSignature::Operaton' has a wrong offset!");

// Function WBP_DragDropIntercepter.WBP_DragDropIntercepter_C.OnDrop
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_DragDropIntercepter_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00D8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DragDropIntercepter_C_OnDrop) == 0x000008, "Wrong alignment on WBP_DragDropIntercepter_C_OnDrop");
static_assert(sizeof(WBP_DragDropIntercepter_C_OnDrop) == 0x0000E8, "Wrong size on WBP_DragDropIntercepter_C_OnDrop");
static_assert(offsetof(WBP_DragDropIntercepter_C_OnDrop, MyGeometry) == 0x000000, "Member 'WBP_DragDropIntercepter_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_DragDropIntercepter_C_OnDrop, PointerEvent) == 0x000040, "Member 'WBP_DragDropIntercepter_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_DragDropIntercepter_C_OnDrop, Operation) == 0x0000D8, "Member 'WBP_DragDropIntercepter_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(WBP_DragDropIntercepter_C_OnDrop, ReturnValue) == 0x0000E0, "Member 'WBP_DragDropIntercepter_C_OnDrop::ReturnValue' has a wrong offset!");

}


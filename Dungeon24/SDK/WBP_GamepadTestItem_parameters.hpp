#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GamepadTestItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_GamepadTestItem.WBP_GamepadTestItem_C.ExecuteUbergraph_WBP_GamepadTestItem
// 0x01A8 (0x01A8 - 0x0000)
struct WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;                       // 0x0004(0x0008)(NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x000C(0x0008)(NoDestructor)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0038(0x0040)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0078(0x0098)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0110(0x0098)(ConstParm)
};
static_assert(alignof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem) == 0x000008, "Wrong alignment on WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem");
static_assert(sizeof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem) == 0x0001A8, "Wrong size on WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem");
static_assert(offsetof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem, EntryPoint) == 0x000000, "Member 'WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem, K2Node_Event_InFocusEvent_1) == 0x000004, "Member 'WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem, K2Node_Event_InFocusEvent) == 0x00000C, "Member 'WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem, K2Node_MakeStruct_LinearColor) == 0x000014, "Member 'WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem, K2Node_MakeStruct_LinearColor_1) == 0x000024, "Member 'WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem, K2Node_Event_MyGeometry) == 0x000038, "Member 'WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem, K2Node_Event_MouseEvent_1) == 0x000078, "Member 'WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem, K2Node_Event_MouseEvent) == 0x000110, "Member 'WBP_GamepadTestItem_C_ExecuteUbergraph_WBP_GamepadTestItem::K2Node_Event_MouseEvent' has a wrong offset!");

// Function WBP_GamepadTestItem.WBP_GamepadTestItem_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_GamepadTestItem_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_GamepadTestItem_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on WBP_GamepadTestItem_C_OnAddedToFocusPath");
static_assert(sizeof(WBP_GamepadTestItem_C_OnAddedToFocusPath) == 0x000008, "Wrong size on WBP_GamepadTestItem_C_OnAddedToFocusPath");
static_assert(offsetof(WBP_GamepadTestItem_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_GamepadTestItem_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_GamepadTestItem.WBP_GamepadTestItem_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct WBP_GamepadTestItem_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_GamepadTestItem_C_OnFocusLost) == 0x000004, "Wrong alignment on WBP_GamepadTestItem_C_OnFocusLost");
static_assert(sizeof(WBP_GamepadTestItem_C_OnFocusLost) == 0x000008, "Wrong size on WBP_GamepadTestItem_C_OnFocusLost");
static_assert(offsetof(WBP_GamepadTestItem_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'WBP_GamepadTestItem_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function WBP_GamepadTestItem.WBP_GamepadTestItem_C.OnFocusReceived
// 0x01B8 (0x01B8 - 0x0000)
struct WBP_GamepadTestItem_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0048(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0100(0x00B8)()
};
static_assert(alignof(WBP_GamepadTestItem_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_GamepadTestItem_C_OnFocusReceived");
static_assert(sizeof(WBP_GamepadTestItem_C_OnFocusReceived) == 0x0001B8, "Wrong size on WBP_GamepadTestItem_C_OnFocusReceived");
static_assert(offsetof(WBP_GamepadTestItem_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_GamepadTestItem_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_OnFocusReceived, InFocusEvent) == 0x000040, "Member 'WBP_GamepadTestItem_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_OnFocusReceived, ReturnValue) == 0x000048, "Member 'WBP_GamepadTestItem_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_OnFocusReceived, CallFunc_Unhandled_ReturnValue) == 0x000100, "Member 'WBP_GamepadTestItem_C_OnFocusReceived::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_GamepadTestItem.WBP_GamepadTestItem_C.OnMouseEnter
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_GamepadTestItem_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_GamepadTestItem_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_GamepadTestItem_C_OnMouseEnter");
static_assert(sizeof(WBP_GamepadTestItem_C_OnMouseEnter) == 0x0000D8, "Wrong size on WBP_GamepadTestItem_C_OnMouseEnter");
static_assert(offsetof(WBP_GamepadTestItem_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_GamepadTestItem_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_GamepadTestItem_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'WBP_GamepadTestItem_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_GamepadTestItem.WBP_GamepadTestItem_C.OnMouseLeave
// 0x0098 (0x0098 - 0x0000)
struct WBP_GamepadTestItem_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_GamepadTestItem_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_GamepadTestItem_C_OnMouseLeave");
static_assert(sizeof(WBP_GamepadTestItem_C_OnMouseLeave) == 0x000098, "Wrong size on WBP_GamepadTestItem_C_OnMouseLeave");
static_assert(offsetof(WBP_GamepadTestItem_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_GamepadTestItem_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}


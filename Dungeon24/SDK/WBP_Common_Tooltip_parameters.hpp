#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_Tooltip

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Common_Tooltip.WBP_Common_Tooltip_C.ExecuteUbergraph_WBP_Common_Tooltip
// 0x0058 (0x0058 - 0x0000)
struct WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip) == 0x000008, "Wrong alignment on WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip");
static_assert(sizeof(WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip) == 0x000058, "Wrong size on WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip");
static_assert(offsetof(WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip, EntryPoint) == 0x000000, "Member 'WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip, K2Node_Event_MyGeometry) == 0x000010, "Member 'WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip, K2Node_Event_InDeltaTime) == 0x000050, "Member 'WBP_Common_Tooltip_C_ExecuteUbergraph_WBP_Common_Tooltip::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WBP_Common_Tooltip.WBP_Common_Tooltip_C.SetParentWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_Common_Tooltip_C_SetParentWidget final
{
public:
	class UWidget*                                InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Common_Tooltip_C_SetParentWidget) == 0x000008, "Wrong alignment on WBP_Common_Tooltip_C_SetParentWidget");
static_assert(sizeof(WBP_Common_Tooltip_C_SetParentWidget) == 0x000008, "Wrong size on WBP_Common_Tooltip_C_SetParentWidget");
static_assert(offsetof(WBP_Common_Tooltip_C_SetParentWidget, InWidget) == 0x000000, "Member 'WBP_Common_Tooltip_C_SetParentWidget::InWidget' has a wrong offset!");

// Function WBP_Common_Tooltip.WBP_Common_Tooltip_C.SetTip
// 0x0018 (0x0018 - 0x0000)
struct WBP_Common_Tooltip_C_SetTip final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Common_Tooltip_C_SetTip) == 0x000008, "Wrong alignment on WBP_Common_Tooltip_C_SetTip");
static_assert(sizeof(WBP_Common_Tooltip_C_SetTip) == 0x000018, "Wrong size on WBP_Common_Tooltip_C_SetTip");
static_assert(offsetof(WBP_Common_Tooltip_C_SetTip, InText) == 0x000000, "Member 'WBP_Common_Tooltip_C_SetTip::InText' has a wrong offset!");

// Function WBP_Common_Tooltip.WBP_Common_Tooltip_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Common_Tooltip_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Common_Tooltip_C_Tick) == 0x000008, "Wrong alignment on WBP_Common_Tooltip_C_Tick");
static_assert(sizeof(WBP_Common_Tooltip_C_Tick) == 0x000048, "Wrong size on WBP_Common_Tooltip_C_Tick");
static_assert(offsetof(WBP_Common_Tooltip_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Common_Tooltip_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Common_Tooltip_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Common_Tooltip_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Common_Tooltip.WBP_Common_Tooltip_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_Common_Tooltip_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Common_Tooltip_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_Common_Tooltip_C_GetModuleName");
static_assert(sizeof(WBP_Common_Tooltip_C_GetModuleName) == 0x000010, "Wrong size on WBP_Common_Tooltip_C_GetModuleName");
static_assert(offsetof(WBP_Common_Tooltip_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_Common_Tooltip_C_GetModuleName::ReturnValue' has a wrong offset!");

}


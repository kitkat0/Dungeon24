#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemGearSetSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemGearSetSlot.WBP_ItemGearSetSlot_C.ShowSeparation
// 0x0005 (0x0005 - 0x0000)
struct WBP_ItemGearSetSlot_C_ShowSeparation final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemGearSetSlot_C_ShowSeparation) == 0x000001, "Wrong alignment on WBP_ItemGearSetSlot_C_ShowSeparation");
static_assert(sizeof(WBP_ItemGearSetSlot_C_ShowSeparation) == 0x000005, "Wrong size on WBP_ItemGearSetSlot_C_ShowSeparation");
static_assert(offsetof(WBP_ItemGearSetSlot_C_ShowSeparation, bShow) == 0x000000, "Member 'WBP_ItemGearSetSlot_C_ShowSeparation::bShow' has a wrong offset!");
static_assert(offsetof(WBP_ItemGearSetSlot_C_ShowSeparation, Temp_bool_Variable) == 0x000001, "Member 'WBP_ItemGearSetSlot_C_ShowSeparation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemGearSetSlot_C_ShowSeparation, Temp_byte_Variable) == 0x000002, "Member 'WBP_ItemGearSetSlot_C_ShowSeparation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemGearSetSlot_C_ShowSeparation, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_ItemGearSetSlot_C_ShowSeparation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemGearSetSlot_C_ShowSeparation, K2Node_Select_Default) == 0x000004, "Member 'WBP_ItemGearSetSlot_C_ShowSeparation::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ItemGearSetSlot.WBP_ItemGearSetSlot_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_ItemGearSetSlot_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemGearSetSlot_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_ItemGearSetSlot_C_GetModuleName");
static_assert(sizeof(WBP_ItemGearSetSlot_C_GetModuleName) == 0x000010, "Wrong size on WBP_ItemGearSetSlot_C_GetModuleName");
static_assert(offsetof(WBP_ItemGearSetSlot_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_ItemGearSetSlot_C_GetModuleName::ReturnValue' has a wrong offset!");

}

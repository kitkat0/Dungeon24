#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Trade_PriceEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Trade_PriceEntry.WBP_Trade_PriceEntry_C.SetPrice
// 0x0020 (0x0020 - 0x0000)
struct WBP_Trade_PriceEntry_C_SetPrice final
{
public:
	int64                                         Param_Price;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0008(0x0018)()
};
static_assert(alignof(WBP_Trade_PriceEntry_C_SetPrice) == 0x000008, "Wrong alignment on WBP_Trade_PriceEntry_C_SetPrice");
static_assert(sizeof(WBP_Trade_PriceEntry_C_SetPrice) == 0x000020, "Wrong size on WBP_Trade_PriceEntry_C_SetPrice");
static_assert(offsetof(WBP_Trade_PriceEntry_C_SetPrice, Param_Price) == 0x000000, "Member 'WBP_Trade_PriceEntry_C_SetPrice::Param_Price' has a wrong offset!");
static_assert(offsetof(WBP_Trade_PriceEntry_C_SetPrice, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000008, "Member 'WBP_Trade_PriceEntry_C_SetPrice::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");

// Function WBP_Trade_PriceEntry.WBP_Trade_PriceEntry_C.SetPriceStr
// 0x0018 (0x0018 - 0x0000)
struct WBP_Trade_PriceEntry_C_SetPriceStr final
{
public:
	class FText                                   Param_Price;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Trade_PriceEntry_C_SetPriceStr) == 0x000008, "Wrong alignment on WBP_Trade_PriceEntry_C_SetPriceStr");
static_assert(sizeof(WBP_Trade_PriceEntry_C_SetPriceStr) == 0x000018, "Wrong size on WBP_Trade_PriceEntry_C_SetPriceStr");
static_assert(offsetof(WBP_Trade_PriceEntry_C_SetPriceStr, Param_Price) == 0x000000, "Member 'WBP_Trade_PriceEntry_C_SetPriceStr::Param_Price' has a wrong offset!");

// Function WBP_Trade_PriceEntry.WBP_Trade_PriceEntry_C.SetTips
// 0x0004 (0x0004 - 0x0000)
struct WBP_Trade_PriceEntry_C_SetTips final
{
public:
	int32                                         TypeId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Trade_PriceEntry_C_SetTips) == 0x000004, "Wrong alignment on WBP_Trade_PriceEntry_C_SetTips");
static_assert(sizeof(WBP_Trade_PriceEntry_C_SetTips) == 0x000004, "Wrong size on WBP_Trade_PriceEntry_C_SetTips");
static_assert(offsetof(WBP_Trade_PriceEntry_C_SetTips, TypeId) == 0x000000, "Member 'WBP_Trade_PriceEntry_C_SetTips::TypeId' has a wrong offset!");

// Function WBP_Trade_PriceEntry.WBP_Trade_PriceEntry_C.SetTypeIcon
// 0x0004 (0x0004 - 0x0000)
struct WBP_Trade_PriceEntry_C_SetTypeIcon final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Trade_PriceEntry_C_SetTypeIcon) == 0x000004, "Wrong alignment on WBP_Trade_PriceEntry_C_SetTypeIcon");
static_assert(sizeof(WBP_Trade_PriceEntry_C_SetTypeIcon) == 0x000004, "Wrong size on WBP_Trade_PriceEntry_C_SetTypeIcon");
static_assert(offsetof(WBP_Trade_PriceEntry_C_SetTypeIcon, Type) == 0x000000, "Member 'WBP_Trade_PriceEntry_C_SetTypeIcon::Type' has a wrong offset!");

// Function WBP_Trade_PriceEntry.WBP_Trade_PriceEntry_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_Trade_PriceEntry_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Trade_PriceEntry_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_Trade_PriceEntry_C_GetModuleName");
static_assert(sizeof(WBP_Trade_PriceEntry_C_GetModuleName) == 0x000010, "Wrong size on WBP_Trade_PriceEntry_C_GetModuleName");
static_assert(offsetof(WBP_Trade_PriceEntry_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_Trade_PriceEntry_C_GetModuleName::ReturnValue' has a wrong offset!");

}


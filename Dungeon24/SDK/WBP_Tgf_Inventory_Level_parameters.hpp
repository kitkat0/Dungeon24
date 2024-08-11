#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tgf_Inventory_Level

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Tgf_Inventory_Level.WBP_Tgf_Inventory_Level_C.ExecuteUbergraph_WBP_Tgf_Inventory_Level
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0048(0x0098)(ConstParm)
};
static_assert(alignof(WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level) == 0x000008, "Wrong alignment on WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level");
static_assert(sizeof(WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level) == 0x0000E0, "Wrong size on WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level, EntryPoint) == 0x000000, "Member 'WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level, K2Node_Event_MouseEvent) == 0x000048, "Member 'WBP_Tgf_Inventory_Level_C_ExecuteUbergraph_WBP_Tgf_Inventory_Level::K2Node_Event_MouseEvent' has a wrong offset!");

// Function WBP_Tgf_Inventory_Level.WBP_Tgf_Inventory_Level_C.OnMouseEnter
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_Tgf_Inventory_Level_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Tgf_Inventory_Level_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_Tgf_Inventory_Level_C_OnMouseEnter");
static_assert(sizeof(WBP_Tgf_Inventory_Level_C_OnMouseEnter) == 0x0000D8, "Wrong size on WBP_Tgf_Inventory_Level_C_OnMouseEnter");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_Tgf_Inventory_Level_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'WBP_Tgf_Inventory_Level_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_Tgf_Inventory_Level.WBP_Tgf_Inventory_Level_C.Setlevel
// 0x0130 (0x0130 - 0x0000)
struct WBP_Tgf_Inventory_Level_C_Setlevel final
{
public:
	int32                                         Cur_level;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Cur_exp;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Role_name;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Exp_end;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextFromStringTable_ReturnValue;          // 0x0048(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0068(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0090(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00B0(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00D0(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTGFTableManager*                       CallFunc_GetEngineSubsystem_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentGroupAPI_IsValid;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExcelLoaderConfigGroupWrapper*         CallFunc_GetCurrentGroupAPI_ReturnValue;           // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRowExcelRoleLevelExp_Of_Level_IsValid; // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExcelLoaderTgfConfigExcelRoleLevelExp* CallFunc_GetRowExcelRoleLevelExp_Of_Level_ReturnValue; // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMaxExp_IsValid;                        // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMaxExp_ReturnValue;                    // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Tgf_Inventory_Level_C_Setlevel) == 0x000008, "Wrong alignment on WBP_Tgf_Inventory_Level_C_Setlevel");
static_assert(sizeof(WBP_Tgf_Inventory_Level_C_Setlevel) == 0x000130, "Wrong size on WBP_Tgf_Inventory_Level_C_Setlevel");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, Cur_level) == 0x000000, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::Cur_level' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, Cur_exp) == 0x000004, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::Cur_exp' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, Role_name) == 0x000008, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::Role_name' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, Exp_end) == 0x000018, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::Exp_end' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000038, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_TextFromStringTable_ReturnValue) == 0x000048, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_TextFromStringTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000060, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Conv_IntToText_ReturnValue) == 0x000068, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000080, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000088, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000090, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A8, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000B0, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, Temp_bool_Variable) == 0x0000C8, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, K2Node_Select_Default) == 0x0000D0, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000E8, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_GetEngineSubsystem_ReturnValue) == 0x0000F0, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_GetCurrentGroupAPI_IsValid) == 0x0000F8, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_GetCurrentGroupAPI_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_GetCurrentGroupAPI_ReturnValue) == 0x000100, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_GetCurrentGroupAPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_GetRowExcelRoleLevelExp_Of_Level_IsValid) == 0x000108, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_GetRowExcelRoleLevelExp_Of_Level_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_GetRowExcelRoleLevelExp_Of_Level_ReturnValue) == 0x000110, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_GetRowExcelRoleLevelExp_Of_Level_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_GetMaxExp_IsValid) == 0x000118, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_GetMaxExp_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_GetMaxExp_ReturnValue) == 0x00011C, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_GetMaxExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000120, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Tgf_Inventory_Level_C_Setlevel, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000128, "Member 'WBP_Tgf_Inventory_Level_C_Setlevel::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}

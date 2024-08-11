#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuideWindow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "TGFGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_GuideWindow.WBP_GuideWindow_C.BndEvt__WBP_GuideWindow_ButtonClose_1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuideWindow_C_BndEvt__WBP_GuideWindow_ButtonClose_1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideWindow_C_BndEvt__WBP_GuideWindow_ButtonClose_1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_BndEvt__WBP_GuideWindow_ButtonClose_1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_GuideWindow_C_BndEvt__WBP_GuideWindow_ButtonClose_1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_GuideWindow_C_BndEvt__WBP_GuideWindow_ButtonClose_1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_GuideWindow_C_BndEvt__WBP_GuideWindow_ButtonClose_1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_GuideWindow_C_BndEvt__WBP_GuideWindow_ButtonClose_1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_GuideWindow.WBP_GuideWindow_C.ExecuteUbergraph_WBP_GuideWindow
// 0x0038 (0x0038 - 0x0000)
struct WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTGFWindowArgs*                         K2Node_Event_Args;                                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ReportClientTaskProgressValue_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TgfGameMenu_C*                     K2Node_DynamicCast_AsWBP_Tgf_Game_Menu;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow");
static_assert(sizeof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow) == 0x000038, "Wrong size on WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow");
static_assert(offsetof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow, EntryPoint) == 0x000000, "Member 'WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow, K2Node_Event_Args) == 0x000008, "Member 'WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow::K2Node_Event_Args' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow, CallFunc_ReportClientTaskProgressValue_ReturnValue) == 0x000010, "Member 'WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow::CallFunc_ReportClientTaskProgressValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow, K2Node_DynamicCast_AsWBP_Tgf_Game_Menu) == 0x000018, "Member 'WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow::K2Node_DynamicCast_AsWBP_Tgf_Game_Menu' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow, K2Node_ComponentBoundEvent_Button) == 0x000028, "Member 'WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_GuideWindow_C_ExecuteUbergraph_WBP_GuideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_GuideWindow.WBP_GuideWindow_C.InitConfigData
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_GuideWindow_C_InitConfigData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuideConfigRow                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x0078)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideWindow_C_InitConfigData) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_InitConfigData");
static_assert(sizeof(WBP_GuideWindow_C_InitConfigData) == 0x0000B8, "Wrong size on WBP_GuideWindow_C_InitConfigData");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_GuideWindow_C_InitConfigData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_GuideWindow_C_InitConfigData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000010, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_Array_Get_Item) == 0x000024, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_Array_Add_ReturnValue) == 0x0000AC, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_InitConfigData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'WBP_GuideWindow_C_InitConfigData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GuideWindow.WBP_GuideWindow_C.OnItemSelect
// 0x0030 (0x0030 - 0x0000)
struct WBP_GuideWindow_C_OnItemSelect final
{
public:
	class FName                                   Select_Id;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_GuideMainItem_C*                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideWindow_C_OnItemSelect) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_OnItemSelect");
static_assert(sizeof(WBP_GuideWindow_C_OnItemSelect) == 0x000030, "Wrong size on WBP_GuideWindow_C_OnItemSelect");
static_assert(offsetof(WBP_GuideWindow_C_OnItemSelect, Select_Id) == 0x000000, "Member 'WBP_GuideWindow_C_OnItemSelect::Select_Id' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnItemSelect, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_GuideWindow_C_OnItemSelect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnItemSelect, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_GuideWindow_C_OnItemSelect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnItemSelect, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_GuideWindow_C_OnItemSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnItemSelect, CallFunc_NotEqual_NameName_ReturnValue) == 0x000014, "Member 'WBP_GuideWindow_C_OnItemSelect::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnItemSelect, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_GuideWindow_C_OnItemSelect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnItemSelect, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_GuideWindow_C_OnItemSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnItemSelect, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_GuideWindow_C_OnItemSelect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GuideWindow.WBP_GuideWindow_C.OnUserKeyUp
// 0x0288 (0x0288 - 0x0000)
struct WBP_GuideWindow_C_OnUserKeyUp final
{
public:
	struct FKeyEvent                              InKeyEvent;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x00F8(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01B0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CB[0x5];                                      // 0x01CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01D0(0x00B8)()
};
static_assert(alignof(WBP_GuideWindow_C_OnUserKeyUp) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_OnUserKeyUp");
static_assert(sizeof(WBP_GuideWindow_C_OnUserKeyUp) == 0x000288, "Wrong size on WBP_GuideWindow_C_OnUserKeyUp");
static_assert(offsetof(WBP_GuideWindow_C_OnUserKeyUp, InKeyEvent) == 0x000000, "Member 'WBP_GuideWindow_C_OnUserKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnUserKeyUp, ReturnValue) == 0x000040, "Member 'WBP_GuideWindow_C_OnUserKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnUserKeyUp, CallFunc_Unhandled_ReturnValue) == 0x0000F8, "Member 'WBP_GuideWindow_C_OnUserKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnUserKeyUp, CallFunc_GetKey_ReturnValue) == 0x0001B0, "Member 'WBP_GuideWindow_C_OnUserKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnUserKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001C8, "Member 'WBP_GuideWindow_C_OnUserKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnUserKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x0001C9, "Member 'WBP_GuideWindow_C_OnUserKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnUserKeyUp, CallFunc_BooleanOR_ReturnValue) == 0x0001CA, "Member 'WBP_GuideWindow_C_OnUserKeyUp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_OnUserKeyUp, CallFunc_Handled_ReturnValue) == 0x0001D0, "Member 'WBP_GuideWindow_C_OnUserKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_GuideWindow.WBP_GuideWindow_C.ReceiveOnOpen
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuideWindow_C_ReceiveOnOpen final
{
public:
	class UTGFWindowArgs*                         Args;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideWindow_C_ReceiveOnOpen) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_ReceiveOnOpen");
static_assert(sizeof(WBP_GuideWindow_C_ReceiveOnOpen) == 0x000008, "Wrong size on WBP_GuideWindow_C_ReceiveOnOpen");
static_assert(offsetof(WBP_GuideWindow_C_ReceiveOnOpen, Args) == 0x000000, "Member 'WBP_GuideWindow_C_ReceiveOnOpen::Args' has a wrong offset!");

// Function WBP_GuideWindow.WBP_GuideWindow_C.SetDetail
// 0x0080 (0x0080 - 0x0000)
struct WBP_GuideWindow_C_SetDetail final
{
public:
	struct FGuideConfigRow                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0000(0x0078)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideWindow_C_SetDetail) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_SetDetail");
static_assert(sizeof(WBP_GuideWindow_C_SetDetail) == 0x000080, "Wrong size on WBP_GuideWindow_C_SetDetail");
static_assert(offsetof(WBP_GuideWindow_C_SetDetail, CallFunc_GetDataTableRowFromName_OutRow) == 0x000000, "Member 'WBP_GuideWindow_C_SetDetail::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetDetail, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000078, "Member 'WBP_GuideWindow_C_SetDetail::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function WBP_GuideWindow.WBP_GuideWindow_C.SetSheetList
// 0x0040 (0x0040 - 0x0000)
struct WBP_GuideWindow_C_SetSheetList final
{
public:
	class UWBP_GuideMainItem_C*                   CellItem;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GuideMainItem_C*                   CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideWindow_C_SetSheetList) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_SetSheetList");
static_assert(sizeof(WBP_GuideWindow_C_SetSheetList) == 0x000040, "Wrong size on WBP_GuideWindow_C_SetSheetList");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CellItem) == 0x000000, "Member 'WBP_GuideWindow_C_SetSheetList::CellItem' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_GuideWindow_C_SetSheetList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_GuideWindow_C_SetSheetList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_Array_Add_ReturnValue) == 0x00001C, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_Array_Length_ReturnValue_1) == 0x000038, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideWindow_C_SetSheetList, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_GuideWindow_C_SetSheetList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GuideWindow.WBP_GuideWindow_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_GuideWindow_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideWindow_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_GuideWindow_C_GetModuleName");
static_assert(sizeof(WBP_GuideWindow_C_GetModuleName) == 0x000010, "Wrong size on WBP_GuideWindow_C_GetModuleName");
static_assert(offsetof(WBP_GuideWindow_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_GuideWindow_C_GetModuleName::ReturnValue' has a wrong offset!");

}

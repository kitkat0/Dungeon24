#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuideMainItem

#include "Basic.hpp"

#include "TGFGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_GuideMainItem.WBP_GuideMainItem_C.ExecuteUbergraph_WBP_GuideMainItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem) == 0x000004, "Wrong alignment on WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem");
static_assert(sizeof(WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem) == 0x000008, "Wrong size on WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem");
static_assert(offsetof(WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem, EntryPoint) == 0x000000, "Member 'WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem, CallFunc_IsVisible_ReturnValue) == 0x000004, "Member 'WBP_GuideMainItem_C_ExecuteUbergraph_WBP_GuideMainItem::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function WBP_GuideMainItem.WBP_GuideMainItem_C.SetData
// 0x0090 (0x0090 - 0x0000)
struct WBP_GuideMainItem_C_SetData final
{
public:
	class FName                                   Param_RawName;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GuideWindow_C*                     Param_Wbp;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuideConfigRow                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0078)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideMainItem_C_SetData) == 0x000008, "Wrong alignment on WBP_GuideMainItem_C_SetData");
static_assert(sizeof(WBP_GuideMainItem_C_SetData) == 0x000090, "Wrong size on WBP_GuideMainItem_C_SetData");
static_assert(offsetof(WBP_GuideMainItem_C_SetData, Param_RawName) == 0x000000, "Member 'WBP_GuideMainItem_C_SetData::Param_RawName' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetData, Param_Wbp) == 0x000008, "Member 'WBP_GuideMainItem_C_SetData::Param_Wbp' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'WBP_GuideMainItem_C_SetData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000088, "Member 'WBP_GuideMainItem_C_SetData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function WBP_GuideMainItem.WBP_GuideMainItem_C.SetExpand
// 0x000C (0x000C - 0x0000)
struct WBP_GuideMainItem_C_SetExpand final
{
public:
	bool                                          Expand;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideMainItem_C_SetExpand) == 0x000004, "Wrong alignment on WBP_GuideMainItem_C_SetExpand");
static_assert(sizeof(WBP_GuideMainItem_C_SetExpand) == 0x00000C, "Wrong size on WBP_GuideMainItem_C_SetExpand");
static_assert(offsetof(WBP_GuideMainItem_C_SetExpand, Expand) == 0x000000, "Member 'WBP_GuideMainItem_C_SetExpand::Expand' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetExpand, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WBP_GuideMainItem_C_SetExpand::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetExpand, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'WBP_GuideMainItem_C_SetExpand::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GuideMainItem.WBP_GuideMainItem_C.SetSelectState
// 0x0030 (0x0030 - 0x0000)
struct WBP_GuideMainItem_C_SetSelectState final
{
public:
	class FName                                   SelectId;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_GuideSubItem_C*                    CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideMainItem_C_SetSelectState) == 0x000008, "Wrong alignment on WBP_GuideMainItem_C_SetSelectState");
static_assert(sizeof(WBP_GuideMainItem_C_SetSelectState) == 0x000030, "Wrong size on WBP_GuideMainItem_C_SetSelectState");
static_assert(offsetof(WBP_GuideMainItem_C_SetSelectState, SelectId) == 0x000000, "Member 'WBP_GuideMainItem_C_SetSelectState::SelectId' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSelectState, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_GuideMainItem_C_SetSelectState::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSelectState, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_GuideMainItem_C_SetSelectState::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSelectState, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_GuideMainItem_C_SetSelectState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSelectState, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_GuideMainItem_C_SetSelectState::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSelectState, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000020, "Member 'WBP_GuideMainItem_C_SetSelectState::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSelectState, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WBP_GuideMainItem_C_SetSelectState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSelectState, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_GuideMainItem_C_SetSelectState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_GuideMainItem.WBP_GuideMainItem_C.SetSubList
// 0x0130 (0x0130 - 0x0000)
struct WBP_GuideMainItem_C_SetSubList final
{
public:
	class UWBP_GuideSubItem_C*                    CellItem;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CurRawID;                                          // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           DataList;                                          // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_GuideSubItem_C*                    CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0078(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuideConfigRow                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0098(0x0078)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuideMainItem_C_SetSubList) == 0x000008, "Wrong alignment on WBP_GuideMainItem_C_SetSubList");
static_assert(sizeof(WBP_GuideMainItem_C_SetSubList) == 0x000130, "Wrong size on WBP_GuideMainItem_C_SetSubList");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CellItem) == 0x000000, "Member 'WBP_GuideMainItem_C_SetSubList::CellItem' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CurRawID) == 0x000008, "Member 'WBP_GuideMainItem_C_SetSubList::CurRawID' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, DataList) == 0x000018, "Member 'WBP_GuideMainItem_C_SetSubList::DataList' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'WBP_GuideMainItem_C_SetSubList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WBP_GuideMainItem_C_SetSubList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Array_Add_ReturnValue) == 0x000034, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, Temp_int_Array_Index_Variable_1) == 0x00003C, "Member 'WBP_GuideMainItem_C_SetSubList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Create_ReturnValue) == 0x000048, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_AddChild_ReturnValue) == 0x000050, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, Temp_int_Loop_Counter_Variable_1) == 0x000058, "Member 'WBP_GuideMainItem_C_SetSubList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Conv_NameToString_ReturnValue) == 0x000068, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000078, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Array_Get_Item_1) == 0x00008C, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000094, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_GetDataTableRowFromName_OutRow) == 0x000098, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000110, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Array_Add_ReturnValue_1) == 0x000114, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_Conv_IntToString_ReturnValue) == 0x000118, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuideMainItem_C_SetSubList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000128, "Member 'WBP_GuideMainItem_C_SetSubList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Inventory_Equipments

#include "Basic.hpp"

#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_TgfGame_Inventory_Equipments.WBP_TgfGame_Inventory_Equipments_C.ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments
// 0x0004 (0x0004 - 0x0000)
struct WBP_TgfGame_Inventory_Equipments_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Equipments_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments) == 0x000004, "Wrong alignment on WBP_TgfGame_Inventory_Equipments_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments");
static_assert(sizeof(WBP_TgfGame_Inventory_Equipments_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments) == 0x000004, "Wrong size on WBP_TgfGame_Inventory_Equipments_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments, EntryPoint) == 0x000000, "Member 'WBP_TgfGame_Inventory_Equipments_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Equipments::EntryPoint' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Equipments.WBP_TgfGame_Inventory_Equipments_C.Refresh Equipment on Widgets
// 0x0038 (0x0038 - 0x0000)
struct WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets final
{
public:
	TArray<class UWBP_Inventory_EquipmentSlot_Clothing_C*> Widget;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Inventory_EquipmentSlot_Clothing_C* CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTgfEquipmentWrapper*                   CallFunc_GetEquipmentBySlot_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets");
static_assert(sizeof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets) == 0x000038, "Wrong size on WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets, Widget) == 0x000000, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets::Widget' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets, CallFunc_GetEquipmentBySlot_ReturnValue) == 0x000030, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Equipment_on_Widgets::CallFunc_GetEquipmentBySlot_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Equipments.WBP_TgfGame_Inventory_Equipments_C.Refresh Weapon Entry
// 0x0038 (0x0038 - 0x0000)
struct WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry final
{
public:
	int32                                         Set;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSlot                                 Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSlot                                 Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSlot                                 Temp_byte_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSlot                                 K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSlot                                 Temp_byte_Variable_3;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSlot                                 Temp_byte_Variable_4;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSlot                                 Temp_byte_Variable_5;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSlot                                 K2Node_Select_Default_1;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTgfEquipmentWrapper*                   CallFunc_GetEquipmentBySlot_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTgfEquipmentWrapper*                   CallFunc_GetEquipmentBySlot_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Inventory_EquipmentSlot_Weapon_C*  K2Node_Select_Default_2;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry");
static_assert(sizeof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry) == 0x000038, "Wrong size on WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Set) == 0x000000, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Set' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_int_Variable) == 0x000004, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_byte_Variable) == 0x000008, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_byte_Variable_1) == 0x000009, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_byte_Variable_2) == 0x00000A, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, K2Node_Select_Default) == 0x000010, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_byte_Variable_3) == 0x000011, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_byte_Variable_4) == 0x000012, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_byte_Variable_5) == 0x000013, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, Temp_int_Variable_2) == 0x000014, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, K2Node_Select_Default_1) == 0x000018, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, CallFunc_GetEquipmentBySlot_ReturnValue) == 0x000020, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::CallFunc_GetEquipmentBySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, CallFunc_GetEquipmentBySlot_ReturnValue_1) == 0x000028, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::CallFunc_GetEquipmentBySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry, K2Node_Select_Default_2) == 0x000030, "Member 'WBP_TgfGame_Inventory_Equipments_C_Refresh_Weapon_Entry::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Equipments.WBP_TgfGame_Inventory_Equipments_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_TgfGame_Inventory_Equipments_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Equipments_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Equipments_C_GetModuleName");
static_assert(sizeof(WBP_TgfGame_Inventory_Equipments_C_GetModuleName) == 0x000010, "Wrong size on WBP_TgfGame_Inventory_Equipments_C_GetModuleName");
static_assert(offsetof(WBP_TgfGame_Inventory_Equipments_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_TgfGame_Inventory_Equipments_C_GetModuleName::ReturnValue' has a wrong offset!");

}


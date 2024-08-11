#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Inventory_LootSection

#include "Basic.hpp"

#include "LyraGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_TgfGame_Inventory_LootSection.WBP_TgfGame_Inventory_LootSection_C.ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection
// 0x0020 (0x0020 - 0x0000)
struct WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULyraInventoryManagerComponent*         K2Node_CustomEvent_Inventory;                      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULyraEquipmentManagerComponent*         K2Node_CustomEvent_Equipment;                      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection");
static_assert(sizeof(WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection) == 0x000020, "Wrong size on WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection, EntryPoint) == 0x000000, "Member 'WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection, K2Node_CustomEvent_Inventory) == 0x000008, "Member 'WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection::K2Node_CustomEvent_Inventory' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection, K2Node_CustomEvent_Equipment) == 0x000010, "Member 'WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection::K2Node_CustomEvent_Equipment' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection, K2Node_Event_IsDesignTime) == 0x000018, "Member 'WBP_TgfGame_Inventory_LootSection_C_ExecuteUbergraph_WBP_TgfGame_Inventory_LootSection::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_TgfGame_Inventory_LootSection.WBP_TgfGame_Inventory_LootSection_C.GetInventoryContext
// 0x0008 (0x0008 - 0x0000)
struct WBP_TgfGame_Inventory_LootSection_C_GetInventoryContext final
{
public:
	class UTgfInventoryWrapper*                   InventoryContextNew;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_LootSection_C_GetInventoryContext) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_LootSection_C_GetInventoryContext");
static_assert(sizeof(WBP_TgfGame_Inventory_LootSection_C_GetInventoryContext) == 0x000008, "Wrong size on WBP_TgfGame_Inventory_LootSection_C_GetInventoryContext");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_GetInventoryContext, InventoryContextNew) == 0x000000, "Member 'WBP_TgfGame_Inventory_LootSection_C_GetInventoryContext::InventoryContextNew' has a wrong offset!");

// Function WBP_TgfGame_Inventory_LootSection.WBP_TgfGame_Inventory_LootSection_C.OnDrop
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_TgfGame_Inventory_LootSection_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00D8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_LootSection_C_OnDrop) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_LootSection_C_OnDrop");
static_assert(sizeof(WBP_TgfGame_Inventory_LootSection_C_OnDrop) == 0x0000E8, "Wrong size on WBP_TgfGame_Inventory_LootSection_C_OnDrop");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_OnDrop, MyGeometry) == 0x000000, "Member 'WBP_TgfGame_Inventory_LootSection_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_OnDrop, PointerEvent) == 0x000040, "Member 'WBP_TgfGame_Inventory_LootSection_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_OnDrop, Operation) == 0x0000D8, "Member 'WBP_TgfGame_Inventory_LootSection_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_OnDrop, ReturnValue) == 0x0000E0, "Member 'WBP_TgfGame_Inventory_LootSection_C_OnDrop::ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_Inventory_LootSection.WBP_TgfGame_Inventory_LootSection_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_TgfGame_Inventory_LootSection_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_LootSection_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_TgfGame_Inventory_LootSection_C_PreConstruct");
static_assert(sizeof(WBP_TgfGame_Inventory_LootSection_C_PreConstruct) == 0x000001, "Wrong size on WBP_TgfGame_Inventory_LootSection_C_PreConstruct");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_TgfGame_Inventory_LootSection_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_TgfGame_Inventory_LootSection.WBP_TgfGame_Inventory_LootSection_C.SetUp
// 0x0010 (0x0010 - 0x0000)
struct WBP_TgfGame_Inventory_LootSection_C_SetUp final
{
public:
	class ULyraInventoryManagerComponent*         Inventory;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULyraEquipmentManagerComponent*         Equipment;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_LootSection_C_SetUp) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_LootSection_C_SetUp");
static_assert(sizeof(WBP_TgfGame_Inventory_LootSection_C_SetUp) == 0x000010, "Wrong size on WBP_TgfGame_Inventory_LootSection_C_SetUp");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetUp, Inventory) == 0x000000, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetUp::Inventory' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetUp, Equipment) == 0x000008, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetUp::Equipment' has a wrong offset!");

// Function WBP_TgfGame_Inventory_LootSection.WBP_TgfGame_Inventory_LootSection_C.SetupByCareer
// 0x0068 (0x0068 - 0x0000)
struct WBP_TgfGame_Inventory_LootSection_C_SetupByCareer final
{
public:
	ETgfActorCareer                               Career;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UI_Inventory_Aux_SwordMaster_C*    CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_UI_Inventory_Aux_Rogue_C*          CallFunc_Create_ReturnValue_1;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           K2Node_DynamicCast_AsOverlay_Slot;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           K2Node_DynamicCast_AsOverlay_Slot_1;               // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UI_Inventory_Aux_AlmightyGod_C*    CallFunc_Create_ReturnValue_2;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           K2Node_DynamicCast_AsOverlay_Slot_2;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_LootSection_C_SetupByCareer");
static_assert(sizeof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer) == 0x000068, "Wrong size on WBP_TgfGame_Inventory_LootSection_C_SetupByCareer");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, Career) == 0x000000, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::Career' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, CallFunc_Create_ReturnValue_1) == 0x000018, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, K2Node_DynamicCast_AsOverlay_Slot) == 0x000020, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::K2Node_DynamicCast_AsOverlay_Slot' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, CallFunc_AddChild_ReturnValue_1) == 0x000030, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, K2Node_DynamicCast_AsOverlay_Slot_1) == 0x000038, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::K2Node_DynamicCast_AsOverlay_Slot_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, CallFunc_Create_ReturnValue_2) == 0x000048, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, CallFunc_AddChild_ReturnValue_2) == 0x000050, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, K2Node_DynamicCast_AsOverlay_Slot_2) == 0x000058, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::K2Node_DynamicCast_AsOverlay_Slot_2' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_SetupByCareer, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'WBP_TgfGame_Inventory_LootSection_C_SetupByCareer::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function WBP_TgfGame_Inventory_LootSection.WBP_TgfGame_Inventory_LootSection_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_TgfGame_Inventory_LootSection_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_LootSection_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_LootSection_C_GetModuleName");
static_assert(sizeof(WBP_TgfGame_Inventory_LootSection_C_GetModuleName) == 0x000010, "Wrong size on WBP_TgfGame_Inventory_LootSection_C_GetModuleName");
static_assert(offsetof(WBP_TgfGame_Inventory_LootSection_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_TgfGame_Inventory_LootSection_C_GetModuleName::ReturnValue' has a wrong offset!");

}


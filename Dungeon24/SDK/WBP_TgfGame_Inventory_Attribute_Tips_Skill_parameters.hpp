#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Inventory_Attribute_Tips_Skill

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill
// 0x0050 (0x0050 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill) == 0x000050, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill, EntryPoint) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill, K2Node_Event_IsDesignTime) == 0x00004C, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill, CallFunc_IsHovered_ReturnValue) == 0x00004D, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill, CallFunc_IsValid_ReturnValue) == 0x00004E, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_ExecuteUbergraph_WBP_TgfGame_Inventory_Attribute_Tips_Skill::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.MakeSkillDescribeText
// 0x0030 (0x0030 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText final
{
public:
	class FText                                   Description;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Result;                                            // 0x0018(0x0018)(Parm, OutParm)
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText) == 0x000030, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText, Description) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText::Description' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText, Result) == 0x000018, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_MakeSkillDescribeText::Result' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_PreConstruct");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_PreConstruct) == 0x000001, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_PreConstruct");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.SetUp
// 0x0020 (0x0020 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp final
{
public:
	class UWBP_Tgf_Skill_Base_C*                  Param_Skill;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Parent_cell;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Skill_id;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTgfInventoryRoleWrapper*               Param_RoleWrapper;                                 // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp) == 0x000020, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp, Param_Skill) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp::Param_Skill' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp, Parent_cell) == 0x000008, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp::Parent_cell' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp, Skill_id) == 0x000010, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp::Skill_id' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp, Param_RoleWrapper) == 0x000018, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetUp::Param_RoleWrapper' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.SetupBySkillBase
// 0x0020 (0x0020 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase final
{
public:
	class UWBP_Tgf_Skill_Base_C*                  Param_Skill;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Parent_cell;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGA_TGF_Skill_Base_C*                   Skill_base;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTgfInventoryRoleWrapper*               Param_RoleWrapper;                                 // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase) == 0x000020, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase, Param_Skill) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase::Param_Skill' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase, Parent_cell) == 0x000008, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase::Parent_cell' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase, Skill_base) == 0x000010, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase::Skill_base' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase, Param_RoleWrapper) == 0x000018, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_SetupBySkillBase::Param_RoleWrapper' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick) == 0x000048, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.UpdatePos
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos final
{
public:
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0000(0x0040)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetAbsoluteSize_ReturnValue;              // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos) == 0x0000B0, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_GetCachedGeometry_ReturnValue) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_GetAbsoluteSize_ReturnValue) == 0x000048, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_GetAbsoluteSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_BreakVector2D_X) == 0x000058, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_BreakVector2D_Y) == 0x000060, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_LocalToViewport_PixelPosition) == 0x000068, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_LocalToViewport_ViewportPosition) == 0x000078, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_BreakVector2D_X_1) == 0x000088, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_BreakVector2D_Y_1) == 0x000090, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000098, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos, CallFunc_MakeVector2D_ReturnValue) == 0x0000A0, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdatePos::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.UpdateShow
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow final
{
public:
	class FText                                   CallFunc_TextFromStringTable_ReturnValue;          // 0x0000(0x0018)()
	class FText                                   CallFunc_TextFromStringTable_ReturnValue_1;        // 0x0018(0x0018)()
	class FText                                   CallFunc_MakeSkillDescribeText_Result;             // 0x0030(0x0018)()
	class UTGFTableManager*                       CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentGroupAPI_IsValid;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UExcelLoaderConfigGroupWrapper*         CallFunc_GetCurrentGroupAPI_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRowExcelRoleSkill_Of_SkillId_IsValid;  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UExcelLoaderTgfConfigExcelRoleSkill*    CallFunc_GetRowExcelRoleSkill_Of_SkillId_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSkillDescr_IsValid;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSkillDescr_ReturnValue;                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextFromStringTable_ReturnValue_2;        // 0x0090(0x0018)()
	class FText                                   CallFunc_MakeSkillDescribeText_Result_1;           // 0x00A8(0x0018)()
	bool                                          CallFunc_GetSkillName_IsValid;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSkillName_ReturnValue;                 // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_TextFromStringTable_ReturnValue_3;        // 0x00D8(0x0018)()
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow) == 0x0000F0, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_TextFromStringTable_ReturnValue) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_TextFromStringTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_TextFromStringTable_ReturnValue_1) == 0x000018, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_TextFromStringTable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_MakeSkillDescribeText_Result) == 0x000030, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_MakeSkillDescribeText_Result' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000048, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetCurrentGroupAPI_IsValid) == 0x000050, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetCurrentGroupAPI_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetCurrentGroupAPI_ReturnValue) == 0x000058, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetCurrentGroupAPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetRowExcelRoleSkill_Of_SkillId_IsValid) == 0x000061, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetRowExcelRoleSkill_Of_SkillId_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetRowExcelRoleSkill_Of_SkillId_ReturnValue) == 0x000068, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetRowExcelRoleSkill_Of_SkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetSkillDescr_IsValid) == 0x000070, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetSkillDescr_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetSkillDescr_ReturnValue) == 0x000078, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetSkillDescr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_TextFromStringTable_ReturnValue_2) == 0x000090, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_TextFromStringTable_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_MakeSkillDescribeText_Result_1) == 0x0000A8, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_MakeSkillDescribeText_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetSkillName_IsValid) == 0x0000C0, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetSkillName_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_GetSkillName_ReturnValue) == 0x0000C8, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_GetSkillName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow, CallFunc_TextFromStringTable_ReturnValue_3) == 0x0000D8, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_UpdateShow::CallFunc_TextFromStringTable_ReturnValue_3' has a wrong offset!");

// Function WBP_TgfGame_Inventory_Attribute_Tips_Skill.WBP_TgfGame_Inventory_Attribute_Tips_Skill_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_GetModuleName");
static_assert(sizeof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_GetModuleName) == 0x000010, "Wrong size on WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_GetModuleName");
static_assert(offsetof(WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_TgfGame_Inventory_Attribute_Tips_Skill_C_GetModuleName::ReturnValue' has a wrong offset!");

}


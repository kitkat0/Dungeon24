#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_SkillIcon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.ExecuteUbergraph_WBP_TgfGame_SkillIcon
// 0x0198 (0x0198 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TgfGame_Inventory_Attribute_Tips_Skill_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTgfInventoryRoleWrapper*               CallFunc_GetRoleWrapper_RoleWrapper;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0020(0x0098)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00B8(0x0040)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x00F8(0x0098)(ConstParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon) == 0x000198, "Wrong size on WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, EntryPoint) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, CallFunc_GetRoleWrapper_RoleWrapper) == 0x000018, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::CallFunc_GetRoleWrapper_RoleWrapper' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, K2Node_Event_MouseEvent) == 0x000020, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, K2Node_Event_MyGeometry) == 0x0000B8, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, K2Node_Event_MouseEvent_1) == 0x0000F8, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x000190, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon, CallFunc_BooleanOR_ReturnValue) == 0x000191, "Member 'WBP_TgfGame_SkillIcon_C_ExecuteUbergraph_WBP_TgfGame_SkillIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.Get_Blank_ToolTipWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Tooltip_C*                  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget) == 0x000010, "Wrong size on WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget, ReturnValue) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_TgfGame_SkillIcon_C_Get_Blank_ToolTipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.GetRoleWrapper
// 0x0008 (0x0008 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_GetRoleWrapper final
{
public:
	class UTgfInventoryRoleWrapper*               Param_RoleWrapper;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_GetRoleWrapper) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_GetRoleWrapper");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_GetRoleWrapper) == 0x000008, "Wrong size on WBP_TgfGame_SkillIcon_C_GetRoleWrapper");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_GetRoleWrapper, Param_RoleWrapper) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_GetRoleWrapper::Param_RoleWrapper' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.On_Icon_MouseButtonDown
// 0x0250 (0x0250 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0198(0x00B8)()
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown) == 0x000250, "Wrong size on WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown, CallFunc_IsVisible_ReturnValue) == 0x000190, "Member 'WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000198, "Member 'WBP_TgfGame_SkillIcon_C_On_Icon_MouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.OnMouseEnter
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_OnMouseEnter");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_OnMouseEnter) == 0x0000D8, "Wrong size on WBP_TgfGame_SkillIcon_C_OnMouseEnter");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'WBP_TgfGame_SkillIcon_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.OnMouseLeave
// 0x0098 (0x0098 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_OnMouseLeave");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_OnMouseLeave) == 0x000098, "Wrong size on WBP_TgfGame_SkillIcon_C_OnMouseLeave");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.OnSkillClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_OnSkillClicked__DelegateSignature final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_OnSkillClicked__DelegateSignature) == 0x000004, "Wrong alignment on WBP_TgfGame_SkillIcon_C_OnSkillClicked__DelegateSignature");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_OnSkillClicked__DelegateSignature) == 0x000004, "Wrong size on WBP_TgfGame_SkillIcon_C_OnSkillClicked__DelegateSignature");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_OnSkillClicked__DelegateSignature, SkillId) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_OnSkillClicked__DelegateSignature::SkillId' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.SetUp
// 0x0050 (0x0050 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_SetUp final
{
public:
	int32                                         Skill_id;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Activity;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataUtility*                           CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class ULyraAbilitySet*                  CallFunc_GetAbilitySetClass_ReturnValue;           // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsGA_TGF_Skill_Base;       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsWBP_Tgf_Skill_Base;      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Tgf_Skill_Base_C*                  CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_SetUp) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_SetUp");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_SetUp) == 0x000050, "Wrong size on WBP_TgfGame_SkillIcon_C_SetUp");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, Skill_id) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::Skill_id' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, Activity) == 0x000004, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::Activity' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, Temp_bool_Variable) == 0x000005, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, Temp_byte_Variable) == 0x000006, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, Temp_byte_Variable_1) == 0x000007, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000008, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, K2Node_Select_Default) == 0x000010, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, CallFunc_GetAbilitySetClass_ReturnValue) == 0x000018, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::CallFunc_GetAbilitySetClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, CallFunc_Array_IsEmpty_ReturnValue) == 0x000020, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, K2Node_ClassDynamicCast_AsGA_TGF_Skill_Base) == 0x000028, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::K2Node_ClassDynamicCast_AsGA_TGF_Skill_Base' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, K2Node_ClassDynamicCast_bSuccess) == 0x000030, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, K2Node_ClassDynamicCast_AsWBP_Tgf_Skill_Base) == 0x000038, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::K2Node_ClassDynamicCast_AsWBP_Tgf_Skill_Base' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, K2Node_ClassDynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetUp, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000048, "Member 'WBP_TgfGame_SkillIcon_C_SetUp::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.SetupBySkillBase
// 0x0028 (0x0028 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_SetupBySkillBase final
{
public:
	class UGA_TGF_Skill_Base_C*                   Skill_base;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsWBP_Tgf_Skill_Base;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Tgf_Skill_Base_C*                  CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_SetupBySkillBase) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_SetupBySkillBase");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_SetupBySkillBase) == 0x000028, "Wrong size on WBP_TgfGame_SkillIcon_C_SetupBySkillBase");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetupBySkillBase, Skill_base) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_SetupBySkillBase::Skill_base' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetupBySkillBase, CallFunc_GetObjectClass_ReturnValue) == 0x000008, "Member 'WBP_TgfGame_SkillIcon_C_SetupBySkillBase::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetupBySkillBase, K2Node_ClassDynamicCast_AsWBP_Tgf_Skill_Base) == 0x000010, "Member 'WBP_TgfGame_SkillIcon_C_SetupBySkillBase::K2Node_ClassDynamicCast_AsWBP_Tgf_Skill_Base' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetupBySkillBase, K2Node_ClassDynamicCast_bSuccess) == 0x000018, "Member 'WBP_TgfGame_SkillIcon_C_SetupBySkillBase::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_SetupBySkillBase, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000020, "Member 'WBP_TgfGame_SkillIcon_C_SetupBySkillBase::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_SkillIcon.WBP_TgfGame_SkillIcon_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_TgfGame_SkillIcon_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_SkillIcon_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_TgfGame_SkillIcon_C_GetModuleName");
static_assert(sizeof(WBP_TgfGame_SkillIcon_C_GetModuleName) == 0x000010, "Wrong size on WBP_TgfGame_SkillIcon_C_GetModuleName");
static_assert(offsetof(WBP_TgfGame_SkillIcon_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_TgfGame_SkillIcon_C_GetModuleName::ReturnValue' has a wrong offset!");

}


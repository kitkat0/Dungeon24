#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_Dashboard_Buff_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_TgfGame_Dashboard_Buff_Base.WBP_TgfGame_Dashboard_Buff_Base_C.BP_InternalTick
// 0x0004 (0x0004 - 0x0000)
struct WBP_TgfGame_Dashboard_Buff_Base_C_BP_InternalTick final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Dashboard_Buff_Base_C_BP_InternalTick) == 0x000004, "Wrong alignment on WBP_TgfGame_Dashboard_Buff_Base_C_BP_InternalTick");
static_assert(sizeof(WBP_TgfGame_Dashboard_Buff_Base_C_BP_InternalTick) == 0x000004, "Wrong size on WBP_TgfGame_Dashboard_Buff_Base_C_BP_InternalTick");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_BP_InternalTick, InDeltaTime) == 0x000000, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_BP_InternalTick::InDeltaTime' has a wrong offset!");

// Function WBP_TgfGame_Dashboard_Buff_Base.WBP_TgfGame_Dashboard_Buff_Base_C.Create Icon Material
// 0x0010 (0x0010 - 0x0000)
struct WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material final
{
public:
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material) == 0x000008, "Wrong alignment on WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material");
static_assert(sizeof(WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material) == 0x000010, "Wrong size on WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material, CallFunc_GetBrushResourceAsTexture2D_ReturnValue) == 0x000000, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material::CallFunc_GetBrushResourceAsTexture2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_Create_Icon_Material::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_Dashboard_Buff_Base.WBP_TgfGame_Dashboard_Buff_Base_C.CreateColorMaterial
// 0x0010 (0x0010 - 0x0000)
struct WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial final
{
public:
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial) == 0x000008, "Wrong alignment on WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial");
static_assert(sizeof(WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial) == 0x000010, "Wrong size on WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial, CallFunc_GetBrushResourceAsTexture2D_ReturnValue) == 0x000000, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial::CallFunc_GetBrushResourceAsTexture2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_CreateColorMaterial::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_Dashboard_Buff_Base.WBP_TgfGame_Dashboard_Buff_Base_C.EffectStart
// 0x0038 (0x0038 - 0x0000)
struct WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart final
{
public:
	double                                        Param_TotalTime;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RemainTime;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuffStackCnt;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart) == 0x000008, "Wrong alignment on WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart");
static_assert(sizeof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart) == 0x000038, "Wrong size on WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart, Param_TotalTime) == 0x000000, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart::Param_TotalTime' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart, RemainTime) == 0x000008, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart::RemainTime' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart, BuffStackCnt) == 0x000010, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart::BuffStackCnt' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000015, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_EffectStart::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_TgfGame_Dashboard_Buff_Base.WBP_TgfGame_Dashboard_Buff_Base_C.ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base
// 0x0040 (0x0040 - 0x0000)
struct WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base) == 0x000008, "Wrong alignment on WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base");
static_assert(sizeof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base) == 0x000040, "Wrong size on WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, EntryPoint) == 0x000000, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_IsValid_ReturnValue_1) == 0x000006, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_FClamp_ReturnValue) == 0x000010, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, K2Node_Event_InDeltaTime) == 0x000018, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00002C, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000030, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_ExecuteUbergraph_WBP_TgfGame_Dashboard_Buff_Base::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_TgfGame_Dashboard_Buff_Base.WBP_TgfGame_Dashboard_Buff_Base_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_TgfGame_Dashboard_Buff_Base_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Dashboard_Buff_Base_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_TgfGame_Dashboard_Buff_Base_C_PreConstruct");
static_assert(sizeof(WBP_TgfGame_Dashboard_Buff_Base_C_PreConstruct) == 0x000001, "Wrong size on WBP_TgfGame_Dashboard_Buff_Base_C_PreConstruct");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_TgfGame_Dashboard_Buff_Base.WBP_TgfGame_Dashboard_Buff_Base_C.SetBuffIcon
// 0x0018 (0x0018 - 0x0000)
struct WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon final
{
public:
	bool                                          Param_bIsDebuff;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             BuffIcon;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon) == 0x000008, "Wrong alignment on WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon");
static_assert(sizeof(WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon) == 0x000018, "Wrong size on WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon, Param_bIsDebuff) == 0x000000, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon::Param_bIsDebuff' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon, BuffIcon) == 0x000008, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon::BuffIcon' has a wrong offset!");
static_assert(offsetof(WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_TgfGame_Dashboard_Buff_Base_C_SetBuffIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

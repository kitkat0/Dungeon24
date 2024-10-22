#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_Button_Black

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_Common_Button_Black.WBP_Common_Button_Black_C.ExecuteUbergraph_WBP_Common_Button_Black
// 0x0008 (0x0008 - 0x0000)
struct WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black) == 0x000004, "Wrong alignment on WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black");
static_assert(sizeof(WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black) == 0x000008, "Wrong size on WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black");
static_assert(offsetof(WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black, EntryPoint) == 0x000000, "Member 'WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black, K2Node_Event_IsDesignTime) == 0x000006, "Member 'WBP_Common_Button_Black_C_ExecuteUbergraph_WBP_Common_Button_Black::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_Common_Button_Black.WBP_Common_Button_Black_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Common_Button_Black_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Common_Button_Black_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Common_Button_Black_C_PreConstruct");
static_assert(sizeof(WBP_Common_Button_Black_C_PreConstruct) == 0x000001, "Wrong size on WBP_Common_Button_Black_C_PreConstruct");
static_assert(offsetof(WBP_Common_Button_Black_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Common_Button_Black_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Common_Button_Black.WBP_Common_Button_Black_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct WBP_Common_Button_Black_C_SetName final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Common_Button_Black_C_SetName) == 0x000008, "Wrong alignment on WBP_Common_Button_Black_C_SetName");
static_assert(sizeof(WBP_Common_Button_Black_C_SetName) == 0x000018, "Wrong size on WBP_Common_Button_Black_C_SetName");
static_assert(offsetof(WBP_Common_Button_Black_C_SetName, Param_Name) == 0x000000, "Member 'WBP_Common_Button_Black_C_SetName::Param_Name' has a wrong offset!");

// Function WBP_Common_Button_Black.WBP_Common_Button_Black_C.SetSize
// 0x0048 (0x0048 - 0x0000)
struct WBP_Common_Button_Black_C_SetSize final
{
public:
	double                                        Param_Width;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Hight;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              NewLocalVar_1;                                     // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              NewLocalVar_0;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              NewLocalVar;                                       // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Common_Button_Black_C_SetSize) == 0x000008, "Wrong alignment on WBP_Common_Button_Black_C_SetSize");
static_assert(sizeof(WBP_Common_Button_Black_C_SetSize) == 0x000048, "Wrong size on WBP_Common_Button_Black_C_SetSize");
static_assert(offsetof(WBP_Common_Button_Black_C_SetSize, Param_Width) == 0x000000, "Member 'WBP_Common_Button_Black_C_SetSize::Param_Width' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_SetSize, Hight) == 0x000008, "Member 'WBP_Common_Button_Black_C_SetSize::Hight' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_SetSize, NewLocalVar_1) == 0x000010, "Member 'WBP_Common_Button_Black_C_SetSize::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_SetSize, NewLocalVar_0) == 0x000020, "Member 'WBP_Common_Button_Black_C_SetSize::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_SetSize, NewLocalVar) == 0x000030, "Member 'WBP_Common_Button_Black_C_SetSize::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_SetSize, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000040, "Member 'WBP_Common_Button_Black_C_SetSize::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Common_Button_Black_C_SetSize, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000044, "Member 'WBP_Common_Button_Black_C_SetSize::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemTooltips_MainBasic

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemTooltips_MainBasic.WBP_ItemTooltips_MainBasic_C.SetDamage
// 0x05F8 (0x05F8 - 0x0000)
struct WBP_ItemTooltips_MainBasic_C_SetDamage final
{
public:
	int32                                         Element;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DPH;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Min_val;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max_val;                                           // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNeedAppendRange;                                  // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable;                              // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_4;                            // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_5;                            // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0150(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0168(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01B8(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0208(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0220(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0238(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0288(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02D8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02F0(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0300(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0350(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0368(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x0380(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D2[0x6];                                      // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x03D8(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x0430(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0480(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0490(0x0018)()
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9[0x7];                                      // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x04B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_TextFromStringTable_ReturnValue;          // 0x04D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_9;            // 0x04E8(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_10;           // 0x0538(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0588(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0598(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x05A8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x05C0(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D9[0x7];                                      // 0x05D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x05E0(0x0018)(ConstParm)
};
static_assert(alignof(WBP_ItemTooltips_MainBasic_C_SetDamage) == 0x000008, "Wrong alignment on WBP_ItemTooltips_MainBasic_C_SetDamage");
static_assert(sizeof(WBP_ItemTooltips_MainBasic_C_SetDamage) == 0x0005F8, "Wrong size on WBP_ItemTooltips_MainBasic_C_SetDamage");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Element) == 0x000000, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Element' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, DPH) == 0x000008, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::DPH' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Min_val) == 0x000010, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Min_val' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Max_val) == 0x000018, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Max_val' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, bNeedAppendRange) == 0x000020, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::bNeedAppendRange' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_int_Variable) == 0x000024, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000028, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Conv_IntToString_ReturnValue) == 0x000090, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_object_Variable) == 0x0000A0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_object_Variable_1) == 0x0000A8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_object_Variable_2) == 0x0000B0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_object_Variable_3) == 0x0000B8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_object_Variable_4) == 0x0000C0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_object_Variable_5) == 0x0000C8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_int_Variable_1) == 0x0000D0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_Select_Default) == 0x0000D8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_string_Variable) == 0x0000E0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_string_Variable_1) == 0x0000F0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_string_Variable_2) == 0x000100, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_string_Variable_3) == 0x000110, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_string_Variable_4) == 0x000120, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_string_Variable_5) == 0x000130, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_Select_Default_1) == 0x000140, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Conv_StringToText_ReturnValue) == 0x000150, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_1) == 0x000168, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001B8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000208, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000220, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_3) == 0x000238, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_4) == 0x000288, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002D8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeArray_Array) == 0x0002F0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_5) == 0x000300, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Format_ReturnValue) == 0x000350, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_MakeLiteralText_ReturnValue) == 0x000368, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_6) == 0x000380, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0003D0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x0003D1, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_7) == 0x0003D8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_BooleanAND_ReturnValue) == 0x000428, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_8) == 0x000430, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeArray_Array_1) == 0x000480, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Format_ReturnValue_1) == 0x000490, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0004A8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_MakeLiteralString_ReturnValue) == 0x0004B0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Concat_StrStr_ReturnValue) == 0x0004C0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_TextFromStringTable_ReturnValue) == 0x0004D0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_TextFromStringTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_9) == 0x0004E8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_9' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeStruct_FormatArgumentData_10) == 0x000538, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeStruct_FormatArgumentData_10' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeArray_Array_2) == 0x000588, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_MakeArray_Array_3) == 0x000598, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Format_ReturnValue_2) == 0x0005A8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, CallFunc_Format_ReturnValue_3) == 0x0005C0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, Temp_bool_Variable) == 0x0005D8, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetDamage, K2Node_Select_Default_2) == 0x0005E0, "Member 'WBP_ItemTooltips_MainBasic_C_SetDamage::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_ItemTooltips_MainBasic.WBP_ItemTooltips_MainBasic_C.SetTextValue
// 0x0018 (0x0018 - 0x0000)
struct WBP_ItemTooltips_MainBasic_C_SetTextValue final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ItemTooltips_MainBasic_C_SetTextValue) == 0x000008, "Wrong alignment on WBP_ItemTooltips_MainBasic_C_SetTextValue");
static_assert(sizeof(WBP_ItemTooltips_MainBasic_C_SetTextValue) == 0x000018, "Wrong size on WBP_ItemTooltips_MainBasic_C_SetTextValue");
static_assert(offsetof(WBP_ItemTooltips_MainBasic_C_SetTextValue, Text) == 0x000000, "Member 'WBP_ItemTooltips_MainBasic_C_SetTextValue::Text' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SettingPopup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "AkAudio_structs.hpp"
#include "TGFGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_SettingPopup.WBP_SettingPopup_C.ExecuteUbergraph_WBP_SettingPopup
// 0x0278 (0x0278 - 0x0000)
struct WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTGFWindowManager*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTGFWindow*                             CallFunc_OpenWindow_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USDKAccountService*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTGFWindowManager*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTGFWindow*                             CallFunc_OpenWindow_ReturnValue_1;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTGFReportRecord                       K2Node_MakeStruct_TGFReportRecord;                 // 0x0038(0x0090)()
	class USDKNoticeService*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTGFReportRecord                       K2Node_MakeStruct_TGFReportRecord_1;               // 0x00D0(0x0090)()
	TArray<struct FSDKNoticeInfo>                 CallFunc_GetNoticeList_NoticeList;                 // 0x0160(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetNoticeList_ReturnValue;                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x3];                                      // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0174(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTGFReportRecord                       K2Node_MakeStruct_TGFReportRecord_2;               // 0x0190(0x0090)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimeService*                           CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_GetCurrentTimestamp_ReturnValue;          // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTGFWindowArgs*                         K2Node_Event_Args;                                 // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UReportService*                         CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UReportService*                         CallFunc_GetGameInstanceSubsystem_ReturnValue_6;   // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UReportService*                         CallFunc_GetGameInstanceSubsystem_ReturnValue_7;   // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTGFWindowManager*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_8;   // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTGFWindow*                             CallFunc_OpenWindow_ReturnValue_2;                 // 0x0260(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTGFWindowManager*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_9;   // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTGFWindow*                             CallFunc_OpenWindow_ReturnValue_3;                 // 0x0270(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup) == 0x000008, "Wrong alignment on WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup");
static_assert(sizeof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup) == 0x000278, "Wrong size on WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, EntryPoint) == 0x000000, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_OpenWindow_ReturnValue) == 0x000010, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_OpenWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000018, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_2) == 0x000028, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_OpenWindow_ReturnValue_1) == 0x000030, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_OpenWindow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, K2Node_MakeStruct_TGFReportRecord) == 0x000038, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::K2Node_MakeStruct_TGFReportRecord' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_3) == 0x0000C8, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, K2Node_MakeStruct_TGFReportRecord_1) == 0x0000D0, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::K2Node_MakeStruct_TGFReportRecord_1' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetNoticeList_NoticeList) == 0x000160, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetNoticeList_NoticeList' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetNoticeList_ReturnValue) == 0x000170, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetNoticeList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, Temp_delegate_Variable) == 0x000174, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_PostEvent_ReturnValue) == 0x000184, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_Array_Length_ReturnValue) == 0x000188, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, K2Node_MakeStruct_TGFReportRecord_2) == 0x000190, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::K2Node_MakeStruct_TGFReportRecord_2' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_Greater_IntInt_ReturnValue) == 0x000220, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_4) == 0x000228, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetCurrentTimestamp_ReturnValue) == 0x000230, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetCurrentTimestamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, K2Node_Event_Args) == 0x000238, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::K2Node_Event_Args' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_5) == 0x000240, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_6) == 0x000248, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_7) == 0x000250, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_8) == 0x000258, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_OpenWindow_ReturnValue_2) == 0x000260, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_OpenWindow_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue_9) == 0x000268, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup, CallFunc_OpenWindow_ReturnValue_3) == 0x000270, "Member 'WBP_SettingPopup_C_ExecuteUbergraph_WBP_SettingPopup::CallFunc_OpenWindow_ReturnValue_3' has a wrong offset!");

// Function WBP_SettingPopup.WBP_SettingPopup_C.On Mouse Button Down
// 0x02F8 (0x02F8 - 0x0000)
struct WBP_SettingPopup_C_On_Mouse_Button_Down final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	class UTimeService*                           CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_GetCurrentTimestamp_ReturnValue;          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReportService*                         CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Subtract_Int64Int64_ReturnValue;          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTGFReportRecord                       K2Node_MakeStruct_TGFReportRecord;                 // 0x01B0(0x0090)()
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x0240(0x00B8)()
};
static_assert(alignof(WBP_SettingPopup_C_On_Mouse_Button_Down) == 0x000008, "Wrong alignment on WBP_SettingPopup_C_On_Mouse_Button_Down");
static_assert(sizeof(WBP_SettingPopup_C_On_Mouse_Button_Down) == 0x0002F8, "Wrong size on WBP_SettingPopup_C_On_Mouse_Button_Down");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, MyGeometry) == 0x000000, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, MouseEvent) == 0x000040, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, ReturnValue) == 0x0000D8, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000190, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, CallFunc_GetCurrentTimestamp_ReturnValue) == 0x000198, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::CallFunc_GetCurrentTimestamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x0001A0, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, CallFunc_Subtract_Int64Int64_ReturnValue) == 0x0001A8, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::CallFunc_Subtract_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, K2Node_MakeStruct_TGFReportRecord) == 0x0001B0, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::K2Node_MakeStruct_TGFReportRecord' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_On_Mouse_Button_Down, K2Node_MakeStruct_EventReply) == 0x000240, "Member 'WBP_SettingPopup_C_On_Mouse_Button_Down::K2Node_MakeStruct_EventReply' has a wrong offset!");

// Function WBP_SettingPopup.WBP_SettingPopup_C.OnUserKeyUp
// 0x0350 (0x0350 - 0x0000)
struct WBP_SettingPopup_C_OnUserKeyUp final
{
public:
	struct FKeyEvent                              InKeyEvent;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	class UTimeService*                           CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0100(0x0018)(HasGetValueTypeHash)
	int64                                         CallFunc_GetCurrentTimestamp_ReturnValue;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Subtract_Int64Int64_ReturnValue;          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReportService*                         CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTGFReportRecord                       K2Node_MakeStruct_TGFReportRecord;                 // 0x0138(0x0090)()
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x01C8(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0280(0x00B8)()
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0338(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingPopup_C_OnUserKeyUp) == 0x000008, "Wrong alignment on WBP_SettingPopup_C_OnUserKeyUp");
static_assert(sizeof(WBP_SettingPopup_C_OnUserKeyUp) == 0x000350, "Wrong size on WBP_SettingPopup_C_OnUserKeyUp");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, InKeyEvent) == 0x000000, "Member 'WBP_SettingPopup_C_OnUserKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, ReturnValue) == 0x000040, "Member 'WBP_SettingPopup_C_OnUserKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x0000F8, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_GetKey_ReturnValue) == 0x000100, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_GetCurrentTimestamp_ReturnValue) == 0x000118, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_GetCurrentTimestamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000120, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_Subtract_Int64Int64_ReturnValue) == 0x000128, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_Subtract_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000130, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, K2Node_MakeStruct_TGFReportRecord) == 0x000138, "Member 'WBP_SettingPopup_C_OnUserKeyUp::K2Node_MakeStruct_TGFReportRecord' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_Unhandled_ReturnValue) == 0x0001C8, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_Handled_ReturnValue) == 0x000280, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, Temp_delegate_Variable) == 0x000338, "Member 'WBP_SettingPopup_C_OnUserKeyUp::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_OnUserKeyUp, CallFunc_PostEvent_ReturnValue) == 0x000348, "Member 'WBP_SettingPopup_C_OnUserKeyUp::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

// Function WBP_SettingPopup.WBP_SettingPopup_C.ReceiveOnOpen
// 0x0008 (0x0008 - 0x0000)
struct WBP_SettingPopup_C_ReceiveOnOpen final
{
public:
	class UTGFWindowArgs*                         Args;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingPopup_C_ReceiveOnOpen) == 0x000008, "Wrong alignment on WBP_SettingPopup_C_ReceiveOnOpen");
static_assert(sizeof(WBP_SettingPopup_C_ReceiveOnOpen) == 0x000008, "Wrong size on WBP_SettingPopup_C_ReceiveOnOpen");
static_assert(offsetof(WBP_SettingPopup_C_ReceiveOnOpen, Args) == 0x000000, "Member 'WBP_SettingPopup_C_ReceiveOnOpen::Args' has a wrong offset!");

// Function WBP_SettingPopup.WBP_SettingPopup_C.RefreshRedDot
// 0x0010 (0x0010 - 0x0000)
struct WBP_SettingPopup_C_RefreshRedDot final
{
public:
	class USDKNoticeService*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNoticeUnreadByType_ReturnValue;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingPopup_C_RefreshRedDot) == 0x000008, "Wrong alignment on WBP_SettingPopup_C_RefreshRedDot");
static_assert(sizeof(WBP_SettingPopup_C_RefreshRedDot) == 0x000010, "Wrong size on WBP_SettingPopup_C_RefreshRedDot");
static_assert(offsetof(WBP_SettingPopup_C_RefreshRedDot, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000000, "Member 'WBP_SettingPopup_C_RefreshRedDot::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_RefreshRedDot, CallFunc_GetNoticeUnreadByType_ReturnValue) == 0x000008, "Member 'WBP_SettingPopup_C_RefreshRedDot::CallFunc_GetNoticeUnreadByType_ReturnValue' has a wrong offset!");

// Function WBP_SettingPopup.WBP_SettingPopup_C.SetAppVersion
// 0x0028 (0x0028 - 0x0000)
struct WBP_SettingPopup_C_SetAppVersion final
{
public:
	class FString                                 CallFunc_GetAppVersion_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_SettingPopup_C_SetAppVersion) == 0x000008, "Wrong alignment on WBP_SettingPopup_C_SetAppVersion");
static_assert(sizeof(WBP_SettingPopup_C_SetAppVersion) == 0x000028, "Wrong size on WBP_SettingPopup_C_SetAppVersion");
static_assert(offsetof(WBP_SettingPopup_C_SetAppVersion, CallFunc_GetAppVersion_ReturnValue) == 0x000000, "Member 'WBP_SettingPopup_C_SetAppVersion::CallFunc_GetAppVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingPopup_C_SetAppVersion, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_SettingPopup_C_SetAppVersion::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_SettingPopup.WBP_SettingPopup_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_SettingPopup_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingPopup_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_SettingPopup_C_GetModuleName");
static_assert(sizeof(WBP_SettingPopup_C_GetModuleName) == 0x000010, "Wrong size on WBP_SettingPopup_C_GetModuleName");
static_assert(offsetof(WBP_SettingPopup_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_SettingPopup_C_GetModuleName::ReturnValue' has a wrong offset!");

}


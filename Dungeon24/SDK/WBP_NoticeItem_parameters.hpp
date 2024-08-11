#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NoticeItem

#include "Basic.hpp"

#include "TGFGame_structs.hpp"


namespace SDK::Params
{

// Function WBP_NoticeItem.WBP_NoticeItem_C.ExecuteUbergraph_WBP_NoticeItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem) == 0x000004, "Wrong alignment on WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem");
static_assert(sizeof(WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem) == 0x000008, "Wrong size on WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem");
static_assert(offsetof(WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem, EntryPoint) == 0x000000, "Member 'WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem, CallFunc_IsVisible_ReturnValue) == 0x000004, "Member 'WBP_NoticeItem_C_ExecuteUbergraph_WBP_NoticeItem::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function WBP_NoticeItem.WBP_NoticeItem_C.SetData
// 0x0278 (0x0278 - 0x0000)
struct WBP_NoticeItem_C_SetData final
{
public:
	struct FSDKNoticeInfo                         NoticeInfo;                                        // 0x0000(0x0178)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWBP_NoticeWindow_C*                    Param_Wbp;                                         // 0x0178(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNoticeStableId_ReturnValue;            // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSDKNoticeTextInfo                     CallFunc_GetNoticeTextInfo_ReturnValue;            // 0x0190(0x0080)(ConstParm)
	class FString                                 CallFunc_Split_LeftS;                              // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0238(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0250(0x0018)()
	class USDKNoticeService*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNoticeRead_ReturnValue;                // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NoticeItem_C_SetData) == 0x000008, "Wrong alignment on WBP_NoticeItem_C_SetData");
static_assert(sizeof(WBP_NoticeItem_C_SetData) == 0x000278, "Wrong size on WBP_NoticeItem_C_SetData");
static_assert(offsetof(WBP_NoticeItem_C_SetData, NoticeInfo) == 0x000000, "Member 'WBP_NoticeItem_C_SetData::NoticeInfo' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, Param_Wbp) == 0x000178, "Member 'WBP_NoticeItem_C_SetData::Param_Wbp' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_GetNoticeStableId_ReturnValue) == 0x000180, "Member 'WBP_NoticeItem_C_SetData::CallFunc_GetNoticeStableId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_GetNoticeTextInfo_ReturnValue) == 0x000190, "Member 'WBP_NoticeItem_C_SetData::CallFunc_GetNoticeTextInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_Split_LeftS) == 0x000210, "Member 'WBP_NoticeItem_C_SetData::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_Split_RightS) == 0x000220, "Member 'WBP_NoticeItem_C_SetData::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_Split_ReturnValue) == 0x000230, "Member 'WBP_NoticeItem_C_SetData::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000238, "Member 'WBP_NoticeItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000250, "Member 'WBP_NoticeItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000268, "Member 'WBP_NoticeItem_C_SetData::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetData, CallFunc_GetNoticeRead_ReturnValue) == 0x000270, "Member 'WBP_NoticeItem_C_SetData::CallFunc_GetNoticeRead_ReturnValue' has a wrong offset!");

// Function WBP_NoticeItem.WBP_NoticeItem_C.SetSelectState
// 0x0018 (0x0018 - 0x0000)
struct WBP_NoticeItem_C_SetSelectState final
{
public:
	int32                                         Param_NoticeId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USDKNoticeService*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNoticeRead_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NoticeItem_C_SetSelectState) == 0x000008, "Wrong alignment on WBP_NoticeItem_C_SetSelectState");
static_assert(sizeof(WBP_NoticeItem_C_SetSelectState) == 0x000018, "Wrong size on WBP_NoticeItem_C_SetSelectState");
static_assert(offsetof(WBP_NoticeItem_C_SetSelectState, Param_NoticeId) == 0x000000, "Member 'WBP_NoticeItem_C_SetSelectState::Param_NoticeId' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetSelectState, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_NoticeItem_C_SetSelectState::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetSelectState, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'WBP_NoticeItem_C_SetSelectState::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NoticeItem_C_SetSelectState, CallFunc_GetNoticeRead_ReturnValue) == 0x000011, "Member 'WBP_NoticeItem_C_SetSelectState::CallFunc_GetNoticeRead_ReturnValue' has a wrong offset!");

// Function WBP_NoticeItem.WBP_NoticeItem_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_NoticeItem_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NoticeItem_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_NoticeItem_C_GetModuleName");
static_assert(sizeof(WBP_NoticeItem_C_GetModuleName) == 0x000010, "Wrong size on WBP_NoticeItem_C_GetModuleName");
static_assert(offsetof(WBP_NoticeItem_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_NoticeItem_C_GetModuleName::ReturnValue' has a wrong offset!");

}

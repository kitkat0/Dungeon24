#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Login

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Login.Login_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct Login_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Login_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on Login_C_ReceiveEndPlay");
static_assert(sizeof(Login_C_ReceiveEndPlay) == 0x000001, "Wrong size on Login_C_ReceiveEndPlay");
static_assert(offsetof(Login_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'Login_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function Login.Login_C.ExecuteUbergraph_Login
// 0x0010 (0x0010 - 0x0000)
struct Login_C_ExecuteUbergraph_Login final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Login_C_ExecuteUbergraph_Login) == 0x000008, "Wrong alignment on Login_C_ExecuteUbergraph_Login");
static_assert(sizeof(Login_C_ExecuteUbergraph_Login) == 0x000010, "Wrong size on Login_C_ExecuteUbergraph_Login");
static_assert(offsetof(Login_C_ExecuteUbergraph_Login, EntryPoint) == 0x000000, "Member 'Login_C_ExecuteUbergraph_Login::EntryPoint' has a wrong offset!");
static_assert(offsetof(Login_C_ExecuteUbergraph_Login, K2Node_Event_EndPlayReason) == 0x000004, "Member 'Login_C_ExecuteUbergraph_Login::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(Login_C_ExecuteUbergraph_Login, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'Login_C_ExecuteUbergraph_Login::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

}


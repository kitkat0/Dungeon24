#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayMessageRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayMessageRuntime_structs.hpp"


namespace SDK::Params
{

// Function GameplayMessageRuntime.AsyncAction_ListenForGameplayMessage.ListenForGameplayMessages
// 0x0028 (0x0028 - 0x0000)
struct AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           Channel;                                           // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScriptStruct*                          PayloadType;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayMessageMatch                         MatchType;                                         // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages) == 0x000008, "Wrong alignment on AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages");
static_assert(sizeof(AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages) == 0x000028, "Wrong size on AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages");
static_assert(offsetof(AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages, WorldContextObject) == 0x000000, "Member 'AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages, Channel) == 0x000008, "Member 'AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages::Channel' has a wrong offset!");
static_assert(offsetof(AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages, PayloadType) == 0x000010, "Member 'AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages::PayloadType' has a wrong offset!");
static_assert(offsetof(AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages, MatchType) == 0x000018, "Member 'AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages::MatchType' has a wrong offset!");
static_assert(offsetof(AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages, ReturnValue) == 0x000020, "Member 'AsyncAction_ListenForGameplayMessage_ListenForGameplayMessages::ReturnValue' has a wrong offset!");

// Function GameplayMessageRuntime.AsyncAction_ListenForGameplayMessage.GetPayload
// 0x0008 (0x0008 - 0x0000)
struct AsyncAction_ListenForGameplayMessage_GetPayload final
{
public:
	int32                                         OutPayload;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AsyncAction_ListenForGameplayMessage_GetPayload) == 0x000004, "Wrong alignment on AsyncAction_ListenForGameplayMessage_GetPayload");
static_assert(sizeof(AsyncAction_ListenForGameplayMessage_GetPayload) == 0x000008, "Wrong size on AsyncAction_ListenForGameplayMessage_GetPayload");
static_assert(offsetof(AsyncAction_ListenForGameplayMessage_GetPayload, OutPayload) == 0x000000, "Member 'AsyncAction_ListenForGameplayMessage_GetPayload::OutPayload' has a wrong offset!");
static_assert(offsetof(AsyncAction_ListenForGameplayMessage_GetPayload, ReturnValue) == 0x000004, "Member 'AsyncAction_ListenForGameplayMessage_GetPayload::ReturnValue' has a wrong offset!");

// Function GameplayMessageRuntime.GameplayMessageSubsystem.K2_BroadcastMessage
// 0x000C (0x000C - 0x0000)
struct GameplayMessageSubsystem_K2_BroadcastMessage final
{
public:
	struct FGameplayTag                           Channel;                                           // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Message;                                           // 0x0008(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayMessageSubsystem_K2_BroadcastMessage) == 0x000004, "Wrong alignment on GameplayMessageSubsystem_K2_BroadcastMessage");
static_assert(sizeof(GameplayMessageSubsystem_K2_BroadcastMessage) == 0x00000C, "Wrong size on GameplayMessageSubsystem_K2_BroadcastMessage");
static_assert(offsetof(GameplayMessageSubsystem_K2_BroadcastMessage, Channel) == 0x000000, "Member 'GameplayMessageSubsystem_K2_BroadcastMessage::Channel' has a wrong offset!");
static_assert(offsetof(GameplayMessageSubsystem_K2_BroadcastMessage, Message) == 0x000008, "Member 'GameplayMessageSubsystem_K2_BroadcastMessage::Message' has a wrong offset!");

}

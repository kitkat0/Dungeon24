#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LISlua425

#include "Basic.hpp"

#include "LISlua425_structs.hpp"


namespace SDK::Params
{

// Function LISlua425.INTLLatentDelegate.OnLatentCallback
// 0x0004 (0x0004 - 0x0000)
struct INTLLatentDelegate_OnLatentCallback final
{
public:
	int32                                         ThreadRef;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLatentDelegate_OnLatentCallback) == 0x000004, "Wrong alignment on INTLLatentDelegate_OnLatentCallback");
static_assert(sizeof(INTLLatentDelegate_OnLatentCallback) == 0x000004, "Wrong size on INTLLatentDelegate_OnLatentCallback");
static_assert(offsetof(INTLLatentDelegate_OnLatentCallback, ThreadRef) == 0x000000, "Member 'INTLLatentDelegate_OnLatentCallback::ThreadRef' has a wrong offset!");

// Function LISlua425.INTLLuaActor.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaActor_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaActor_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaActor_CallLuaMember");
static_assert(sizeof(INTLLuaActor_CallLuaMember) == 0x000040, "Wrong size on INTLLuaActor_CallLuaMember");
static_assert(offsetof(INTLLuaActor_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaActor_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaActor_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaActor_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaActor_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaActor_CallLuaMember::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaPawn.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaPawn_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaPawn_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaPawn_CallLuaMember");
static_assert(sizeof(INTLLuaPawn_CallLuaMember) == 0x000040, "Wrong size on INTLLuaPawn_CallLuaMember");
static_assert(offsetof(INTLLuaPawn_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaPawn_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaPawn_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaPawn_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaPawn_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaPawn_CallLuaMember::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaCharacter.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaCharacter_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaCharacter_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaCharacter_CallLuaMember");
static_assert(sizeof(INTLLuaCharacter_CallLuaMember) == 0x000040, "Wrong size on INTLLuaCharacter_CallLuaMember");
static_assert(offsetof(INTLLuaCharacter_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaCharacter_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaCharacter_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaCharacter_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaCharacter_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaCharacter_CallLuaMember::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaController.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaController_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaController_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaController_CallLuaMember");
static_assert(sizeof(INTLLuaController_CallLuaMember) == 0x000040, "Wrong size on INTLLuaController_CallLuaMember");
static_assert(offsetof(INTLLuaController_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaController_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaController_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaController_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaController_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaController_CallLuaMember::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaPlayerController.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaPlayerController_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaPlayerController_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaPlayerController_CallLuaMember");
static_assert(sizeof(INTLLuaPlayerController_CallLuaMember) == 0x000040, "Wrong size on INTLLuaPlayerController_CallLuaMember");
static_assert(offsetof(INTLLuaPlayerController_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaPlayerController_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaPlayerController_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaPlayerController_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaPlayerController_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaPlayerController_CallLuaMember::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaActorComponent.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaActorComponent_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaActorComponent_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaActorComponent_CallLuaMember");
static_assert(sizeof(INTLLuaActorComponent_CallLuaMember) == 0x000040, "Wrong size on INTLLuaActorComponent_CallLuaMember");
static_assert(offsetof(INTLLuaActorComponent_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaActorComponent_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaActorComponent_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaActorComponent_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaActorComponent_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaActorComponent_CallLuaMember::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaGameModeBase.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaGameModeBase_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaGameModeBase_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaGameModeBase_CallLuaMember");
static_assert(sizeof(INTLLuaGameModeBase_CallLuaMember) == 0x000040, "Wrong size on INTLLuaGameModeBase_CallLuaMember");
static_assert(offsetof(INTLLuaGameModeBase_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaGameModeBase_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaGameModeBase_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaGameModeBase_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaGameModeBase_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaGameModeBase_CallLuaMember::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaHUD.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaHUD_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaHUD_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaHUD_CallLuaMember");
static_assert(sizeof(INTLLuaHUD_CallLuaMember) == 0x000040, "Wrong size on INTLLuaHUD_CallLuaMember");
static_assert(offsetof(INTLLuaHUD_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaHUD_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaHUD_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaHUD_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaHUD_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaHUD_CallLuaMember::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.CallToLua
// 0x0048 (0x0048 - 0x0000)
struct INTLLuaBlueprintLibrary_CallToLua final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FunctionName;                                      // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StateName;                                         // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0028(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_CallToLua) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_CallToLua");
static_assert(sizeof(INTLLuaBlueprintLibrary_CallToLua) == 0x000048, "Wrong size on INTLLuaBlueprintLibrary_CallToLua");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLua, WorldContextObject) == 0x000000, "Member 'INTLLuaBlueprintLibrary_CallToLua::WorldContextObject' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLua, FunctionName) == 0x000008, "Member 'INTLLuaBlueprintLibrary_CallToLua::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLua, StateName) == 0x000018, "Member 'INTLLuaBlueprintLibrary_CallToLua::StateName' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLua, ReturnValue) == 0x000028, "Member 'INTLLuaBlueprintLibrary_CallToLua::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.CallToLuaWithArgs
// 0x0058 (0x0058 - 0x0000)
struct INTLLuaBlueprintLibrary_CallToLuaWithArgs final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FunctionName;                                      // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0018(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 StateName;                                         // 0x0028(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0038(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_CallToLuaWithArgs) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_CallToLuaWithArgs");
static_assert(sizeof(INTLLuaBlueprintLibrary_CallToLuaWithArgs) == 0x000058, "Wrong size on INTLLuaBlueprintLibrary_CallToLuaWithArgs");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLuaWithArgs, WorldContextObject) == 0x000000, "Member 'INTLLuaBlueprintLibrary_CallToLuaWithArgs::WorldContextObject' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLuaWithArgs, FunctionName) == 0x000008, "Member 'INTLLuaBlueprintLibrary_CallToLuaWithArgs::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLuaWithArgs, Args) == 0x000018, "Member 'INTLLuaBlueprintLibrary_CallToLuaWithArgs::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLuaWithArgs, StateName) == 0x000028, "Member 'INTLLuaBlueprintLibrary_CallToLuaWithArgs::StateName' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CallToLuaWithArgs, ReturnValue) == 0x000038, "Member 'INTLLuaBlueprintLibrary_CallToLuaWithArgs::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.CreateVarFromBool
// 0x0028 (0x0028 - 0x0000)
struct INTLLuaBlueprintLibrary_CreateVarFromBool final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0008(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_CreateVarFromBool) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_CreateVarFromBool");
static_assert(sizeof(INTLLuaBlueprintLibrary_CreateVarFromBool) == 0x000028, "Wrong size on INTLLuaBlueprintLibrary_CreateVarFromBool");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromBool, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_CreateVarFromBool::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromBool, ReturnValue) == 0x000008, "Member 'INTLLuaBlueprintLibrary_CreateVarFromBool::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.CreateVarFromInt
// 0x0028 (0x0028 - 0x0000)
struct INTLLuaBlueprintLibrary_CreateVarFromInt final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0008(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_CreateVarFromInt) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_CreateVarFromInt");
static_assert(sizeof(INTLLuaBlueprintLibrary_CreateVarFromInt) == 0x000028, "Wrong size on INTLLuaBlueprintLibrary_CreateVarFromInt");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromInt, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_CreateVarFromInt::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromInt, ReturnValue) == 0x000008, "Member 'INTLLuaBlueprintLibrary_CreateVarFromInt::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.CreateVarFromNumber
// 0x0028 (0x0028 - 0x0000)
struct INTLLuaBlueprintLibrary_CreateVarFromNumber final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0008(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_CreateVarFromNumber) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_CreateVarFromNumber");
static_assert(sizeof(INTLLuaBlueprintLibrary_CreateVarFromNumber) == 0x000028, "Wrong size on INTLLuaBlueprintLibrary_CreateVarFromNumber");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromNumber, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_CreateVarFromNumber::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromNumber, ReturnValue) == 0x000008, "Member 'INTLLuaBlueprintLibrary_CreateVarFromNumber::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.CreateVarFromObject
// 0x0030 (0x0030 - 0x0000)
struct INTLLuaBlueprintLibrary_CreateVarFromObject final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                Value;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0010(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_CreateVarFromObject) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_CreateVarFromObject");
static_assert(sizeof(INTLLuaBlueprintLibrary_CreateVarFromObject) == 0x000030, "Wrong size on INTLLuaBlueprintLibrary_CreateVarFromObject");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromObject, WorldContextObject) == 0x000000, "Member 'INTLLuaBlueprintLibrary_CreateVarFromObject::WorldContextObject' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromObject, Value) == 0x000008, "Member 'INTLLuaBlueprintLibrary_CreateVarFromObject::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromObject, ReturnValue) == 0x000010, "Member 'INTLLuaBlueprintLibrary_CreateVarFromObject::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.CreateVarFromString
// 0x0030 (0x0030 - 0x0000)
struct INTLLuaBlueprintLibrary_CreateVarFromString final
{
public:
	class FString                                 Value;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0010(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_CreateVarFromString) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_CreateVarFromString");
static_assert(sizeof(INTLLuaBlueprintLibrary_CreateVarFromString) == 0x000030, "Wrong size on INTLLuaBlueprintLibrary_CreateVarFromString");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromString, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_CreateVarFromString::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_CreateVarFromString, ReturnValue) == 0x000010, "Member 'INTLLuaBlueprintLibrary_CreateVarFromString::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.GetBoolFromVar
// 0x0028 (0x0028 - 0x0000)
struct INTLLuaBlueprintLibrary_GetBoolFromVar final
{
public:
	struct FINTLLuaBPVar                          Value;                                             // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(INTLLuaBlueprintLibrary_GetBoolFromVar) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_GetBoolFromVar");
static_assert(sizeof(INTLLuaBlueprintLibrary_GetBoolFromVar) == 0x000028, "Wrong size on INTLLuaBlueprintLibrary_GetBoolFromVar");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetBoolFromVar, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_GetBoolFromVar::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetBoolFromVar, Param_Index) == 0x000020, "Member 'INTLLuaBlueprintLibrary_GetBoolFromVar::Param_Index' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetBoolFromVar, ReturnValue) == 0x000024, "Member 'INTLLuaBlueprintLibrary_GetBoolFromVar::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.GetIntFromVar
// 0x0028 (0x0028 - 0x0000)
struct INTLLuaBlueprintLibrary_GetIntFromVar final
{
public:
	struct FINTLLuaBPVar                          Value;                                             // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_GetIntFromVar) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_GetIntFromVar");
static_assert(sizeof(INTLLuaBlueprintLibrary_GetIntFromVar) == 0x000028, "Wrong size on INTLLuaBlueprintLibrary_GetIntFromVar");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetIntFromVar, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_GetIntFromVar::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetIntFromVar, Param_Index) == 0x000020, "Member 'INTLLuaBlueprintLibrary_GetIntFromVar::Param_Index' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetIntFromVar, ReturnValue) == 0x000024, "Member 'INTLLuaBlueprintLibrary_GetIntFromVar::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.GetNumberFromVar
// 0x0028 (0x0028 - 0x0000)
struct INTLLuaBlueprintLibrary_GetNumberFromVar final
{
public:
	struct FINTLLuaBPVar                          Value;                                             // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_GetNumberFromVar) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_GetNumberFromVar");
static_assert(sizeof(INTLLuaBlueprintLibrary_GetNumberFromVar) == 0x000028, "Wrong size on INTLLuaBlueprintLibrary_GetNumberFromVar");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetNumberFromVar, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_GetNumberFromVar::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetNumberFromVar, Param_Index) == 0x000020, "Member 'INTLLuaBlueprintLibrary_GetNumberFromVar::Param_Index' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetNumberFromVar, ReturnValue) == 0x000024, "Member 'INTLLuaBlueprintLibrary_GetNumberFromVar::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.GetObjectFromVar
// 0x0030 (0x0030 - 0x0000)
struct INTLLuaBlueprintLibrary_GetObjectFromVar final
{
public:
	struct FINTLLuaBPVar                          Value;                                             // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_GetObjectFromVar) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_GetObjectFromVar");
static_assert(sizeof(INTLLuaBlueprintLibrary_GetObjectFromVar) == 0x000030, "Wrong size on INTLLuaBlueprintLibrary_GetObjectFromVar");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetObjectFromVar, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_GetObjectFromVar::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetObjectFromVar, Param_Index) == 0x000020, "Member 'INTLLuaBlueprintLibrary_GetObjectFromVar::Param_Index' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetObjectFromVar, ReturnValue) == 0x000028, "Member 'INTLLuaBlueprintLibrary_GetObjectFromVar::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaBlueprintLibrary.GetStringFromVar
// 0x0038 (0x0038 - 0x0000)
struct INTLLuaBlueprintLibrary_GetStringFromVar final
{
public:
	struct FINTLLuaBPVar                          Value;                                             // 0x0000(0x0020)(Parm, NativeAccessSpecifierPublic)
	int32                                         Param_Index;                                       // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaBlueprintLibrary_GetStringFromVar) == 0x000008, "Wrong alignment on INTLLuaBlueprintLibrary_GetStringFromVar");
static_assert(sizeof(INTLLuaBlueprintLibrary_GetStringFromVar) == 0x000038, "Wrong size on INTLLuaBlueprintLibrary_GetStringFromVar");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetStringFromVar, Value) == 0x000000, "Member 'INTLLuaBlueprintLibrary_GetStringFromVar::Value' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetStringFromVar, Param_Index) == 0x000020, "Member 'INTLLuaBlueprintLibrary_GetStringFromVar::Param_Index' has a wrong offset!");
static_assert(offsetof(INTLLuaBlueprintLibrary_GetStringFromVar, ReturnValue) == 0x000028, "Member 'INTLLuaBlueprintLibrary_GetStringFromVar::ReturnValue' has a wrong offset!");

// Function LISlua425.INTLLuaUserWidget.CallLuaMember
// 0x0040 (0x0040 - 0x0000)
struct INTLLuaUserWidget_CallLuaMember final
{
public:
	class FString                                 FunctionName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLLuaBPVar>                  Args;                                              // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FINTLLuaBPVar                          ReturnValue;                                       // 0x0020(0x0020)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(INTLLuaUserWidget_CallLuaMember) == 0x000008, "Wrong alignment on INTLLuaUserWidget_CallLuaMember");
static_assert(sizeof(INTLLuaUserWidget_CallLuaMember) == 0x000040, "Wrong size on INTLLuaUserWidget_CallLuaMember");
static_assert(offsetof(INTLLuaUserWidget_CallLuaMember, FunctionName) == 0x000000, "Member 'INTLLuaUserWidget_CallLuaMember::FunctionName' has a wrong offset!");
static_assert(offsetof(INTLLuaUserWidget_CallLuaMember, Args) == 0x000010, "Member 'INTLLuaUserWidget_CallLuaMember::Args' has a wrong offset!");
static_assert(offsetof(INTLLuaUserWidget_CallLuaMember, ReturnValue) == 0x000020, "Member 'INTLLuaUserWidget_CallLuaMember::ReturnValue' has a wrong offset!");

}


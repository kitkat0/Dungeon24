#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Login

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Login.Login_C
// 0x0008 (0x02A8 - 0x02A0)
class ALogin_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Login(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Login_C">();
	}
	static class ALogin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALogin_C>();
	}
};
static_assert(alignof(ALogin_C) == 0x000008, "Wrong alignment on ALogin_C");
static_assert(sizeof(ALogin_C) == 0x0002A8, "Wrong size on ALogin_C");
static_assert(offsetof(ALogin_C, UberGraphFrame) == 0x0002A0, "Member 'ALogin_C::UberGraphFrame' has a wrong offset!");

}

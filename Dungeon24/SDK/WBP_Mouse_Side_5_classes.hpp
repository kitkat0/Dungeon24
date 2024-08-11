#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mouse_Side_5

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mouse_Side_5.WBP_Mouse_Side_5_C
// 0x0008 (0x0280 - 0x0278)
class UWBP_Mouse_Side_5_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Mouse_Side_5(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mouse_Side_5_C">();
	}
	static class UWBP_Mouse_Side_5_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mouse_Side_5_C>();
	}
};
static_assert(alignof(UWBP_Mouse_Side_5_C) == 0x000008, "Wrong alignment on UWBP_Mouse_Side_5_C");
static_assert(sizeof(UWBP_Mouse_Side_5_C) == 0x000280, "Wrong size on UWBP_Mouse_Side_5_C");
static_assert(offsetof(UWBP_Mouse_Side_5_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Mouse_Side_5_C::UberGraphFrame' has a wrong offset!");

}


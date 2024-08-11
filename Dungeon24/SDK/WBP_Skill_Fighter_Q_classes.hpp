#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Skill_Fighter_Q

#include "Basic.hpp"

#include "WBP_Tgf_Skill_Base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Skill_Fighter_Q.WBP_Skill_Fighter_Q_C
// 0x0008 (0x04C0 - 0x04B8)
class UWBP_Skill_Fighter_Q_C final : public UWBP_Tgf_Skill_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Skill_Fighter_Q_C;              // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_Skill_Fighter_Q(int32 EntryPoint);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Skill_Fighter_Q_C">();
	}
	static class UWBP_Skill_Fighter_Q_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Skill_Fighter_Q_C>();
	}
};
static_assert(alignof(UWBP_Skill_Fighter_Q_C) == 0x000008, "Wrong alignment on UWBP_Skill_Fighter_Q_C");
static_assert(sizeof(UWBP_Skill_Fighter_Q_C) == 0x0004C0, "Wrong size on UWBP_Skill_Fighter_Q_C");
static_assert(offsetof(UWBP_Skill_Fighter_Q_C, UberGraphFrame_WBP_Skill_Fighter_Q_C) == 0x0004B8, "Member 'UWBP_Skill_Fighter_Q_C::UberGraphFrame_WBP_Skill_Fighter_Q_C' has a wrong offset!");

}

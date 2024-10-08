#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Tgf_Inventory_Level

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Tgf_Inventory_Level.WBP_Tgf_Inventory_Level_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_Tgf_Inventory_Level_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Charactername;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpNumMax;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpNumNow;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ExpProgress;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LevelNum;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Exp;                                               // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpMax;                                            // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Tgf_Inventory_Level(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Setlevel(int32 Cur_level, int32 Cur_exp, const class FString& Role_name);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Tgf_Inventory_Level_C">();
	}
	static class UWBP_Tgf_Inventory_Level_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Tgf_Inventory_Level_C>();
	}
};
static_assert(alignof(UWBP_Tgf_Inventory_Level_C) == 0x000008, "Wrong alignment on UWBP_Tgf_Inventory_Level_C");
static_assert(sizeof(UWBP_Tgf_Inventory_Level_C) == 0x0002B8, "Wrong size on UWBP_Tgf_Inventory_Level_C");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Tgf_Inventory_Level_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, Charactername) == 0x000280, "Member 'UWBP_Tgf_Inventory_Level_C::Charactername' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, ExpNumMax) == 0x000288, "Member 'UWBP_Tgf_Inventory_Level_C::ExpNumMax' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, ExpNumNow) == 0x000290, "Member 'UWBP_Tgf_Inventory_Level_C::ExpNumNow' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, ExpProgress) == 0x000298, "Member 'UWBP_Tgf_Inventory_Level_C::ExpProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, LevelNum) == 0x0002A0, "Member 'UWBP_Tgf_Inventory_Level_C::LevelNum' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, Level) == 0x0002A8, "Member 'UWBP_Tgf_Inventory_Level_C::Level' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, Exp) == 0x0002AC, "Member 'UWBP_Tgf_Inventory_Level_C::Exp' has a wrong offset!");
static_assert(offsetof(UWBP_Tgf_Inventory_Level_C, ExpMax) == 0x0002B0, "Member 'UWBP_Tgf_Inventory_Level_C::ExpMax' has a wrong offset!");

}


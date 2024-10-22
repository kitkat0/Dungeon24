#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuidePoint

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GuidePoint.WBP_GuidePoint_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_GuidePoint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Active;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Tgf_Button_C*                      Click;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Inactive;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_GuideInfo_C*                       Wbp;                                               // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_BannerPoint_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_GuidePoint(int32 EntryPoint);
	void Set_Data(int32 Param_ID, class UWBP_GuideInfo_C* Parent);
	void Set_Select_State(int32 SelectId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GuidePoint_C">();
	}
	static class UWBP_GuidePoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GuidePoint_C>();
	}
};
static_assert(alignof(UWBP_GuidePoint_C) == 0x000008, "Wrong alignment on UWBP_GuidePoint_C");
static_assert(sizeof(UWBP_GuidePoint_C) == 0x0002A8, "Wrong size on UWBP_GuidePoint_C");
static_assert(offsetof(UWBP_GuidePoint_C, UberGraphFrame) == 0x000278, "Member 'UWBP_GuidePoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GuidePoint_C, Active) == 0x000280, "Member 'UWBP_GuidePoint_C::Active' has a wrong offset!");
static_assert(offsetof(UWBP_GuidePoint_C, Click) == 0x000288, "Member 'UWBP_GuidePoint_C::Click' has a wrong offset!");
static_assert(offsetof(UWBP_GuidePoint_C, Inactive) == 0x000290, "Member 'UWBP_GuidePoint_C::Inactive' has a wrong offset!");
static_assert(offsetof(UWBP_GuidePoint_C, ID) == 0x000298, "Member 'UWBP_GuidePoint_C::ID' has a wrong offset!");
static_assert(offsetof(UWBP_GuidePoint_C, Wbp) == 0x0002A0, "Member 'UWBP_GuidePoint_C::Wbp' has a wrong offset!");

}


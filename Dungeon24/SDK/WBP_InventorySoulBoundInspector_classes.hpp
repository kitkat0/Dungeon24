#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventorySoulBoundInspector

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventorySoulBoundInspector.WBP_InventorySoulBoundInspector_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_InventorySoulBoundInspector_C final : public UUserWidget
{
public:
	class UImage*                                 DivinationIcon;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                      NormalMaterial;                                    // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      EmptyMaterial;                                     // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventorySoulBoundInspector_C">();
	}
	static class UWBP_InventorySoulBoundInspector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventorySoulBoundInspector_C>();
	}
};
static_assert(alignof(UWBP_InventorySoulBoundInspector_C) == 0x000008, "Wrong alignment on UWBP_InventorySoulBoundInspector_C");
static_assert(sizeof(UWBP_InventorySoulBoundInspector_C) == 0x000290, "Wrong size on UWBP_InventorySoulBoundInspector_C");
static_assert(offsetof(UWBP_InventorySoulBoundInspector_C, DivinationIcon) == 0x000278, "Member 'UWBP_InventorySoulBoundInspector_C::DivinationIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySoulBoundInspector_C, NormalMaterial) == 0x000280, "Member 'UWBP_InventorySoulBoundInspector_C::NormalMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySoulBoundInspector_C, EmptyMaterial) == 0x000288, "Member 'UWBP_InventorySoulBoundInspector_C::EmptyMaterial' has a wrong offset!");

}


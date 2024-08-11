#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Common_Item_Gem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Common_Item_Gem.WBP_Common_Item_Gem_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_Common_Item_Gem_C final : public UUserWidget
{
public:
	class UImage*                                 GemIcon;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hole;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Common_Item_Gem_C">();
	}
	static class UWBP_Common_Item_Gem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Common_Item_Gem_C>();
	}
};
static_assert(alignof(UWBP_Common_Item_Gem_C) == 0x000008, "Wrong alignment on UWBP_Common_Item_Gem_C");
static_assert(sizeof(UWBP_Common_Item_Gem_C) == 0x000288, "Wrong size on UWBP_Common_Item_Gem_C");
static_assert(offsetof(UWBP_Common_Item_Gem_C, GemIcon) == 0x000278, "Member 'UWBP_Common_Item_Gem_C::GemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Common_Item_Gem_C, Hole) == 0x000280, "Member 'UWBP_Common_Item_Gem_C::Hole' has a wrong offset!");

}


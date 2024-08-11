#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Trade_PriceEntry

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Trade_PriceEntry.WBP_Trade_PriceEntry_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_Trade_PriceEntry_C final : public UUserWidget
{
public:
	class UImage*                                 CurrencyIcon;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Price;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                QuickBuyBtn;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetPrice(int64 Param_Price);
	void SetPriceStr(const class FText& Param_Price);
	void SetTips(int32 TypeId);
	void SetTypeIcon(int32 Type);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Trade_PriceEntry_C">();
	}
	static class UWBP_Trade_PriceEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Trade_PriceEntry_C>();
	}
};
static_assert(alignof(UWBP_Trade_PriceEntry_C) == 0x000008, "Wrong alignment on UWBP_Trade_PriceEntry_C");
static_assert(sizeof(UWBP_Trade_PriceEntry_C) == 0x000290, "Wrong size on UWBP_Trade_PriceEntry_C");
static_assert(offsetof(UWBP_Trade_PriceEntry_C, CurrencyIcon) == 0x000278, "Member 'UWBP_Trade_PriceEntry_C::CurrencyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Trade_PriceEntry_C, Price) == 0x000280, "Member 'UWBP_Trade_PriceEntry_C::Price' has a wrong offset!");
static_assert(offsetof(UWBP_Trade_PriceEntry_C, QuickBuyBtn) == 0x000288, "Member 'UWBP_Trade_PriceEntry_C::QuickBuyBtn' has a wrong offset!");

}


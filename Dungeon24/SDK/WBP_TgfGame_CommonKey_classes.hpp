#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TgfGame_CommonKey

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TgfGame_CommonKey.WBP_TgfGame_CommonKey_C
// 0x0020 (0x02E0 - 0x02C0)
class UWBP_TgfGame_CommonKey_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Overlay;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTag                           InputTag;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UInputAction*                           InputAction;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_TgfGame_CommonKey(int32 EntryPoint);
	void InputMethodChange(ECommonInputType bNewInputType);
	void OnMessageReceived_3C45226D4FD71D23B5532DAA8815BB6E(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void Refresh();
	void SetKey();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TgfGame_CommonKey_C">();
	}
	static class UWBP_TgfGame_CommonKey_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TgfGame_CommonKey_C>();
	}
};
static_assert(alignof(UWBP_TgfGame_CommonKey_C) == 0x000008, "Wrong alignment on UWBP_TgfGame_CommonKey_C");
static_assert(sizeof(UWBP_TgfGame_CommonKey_C) == 0x0002E0, "Wrong size on UWBP_TgfGame_CommonKey_C");
static_assert(offsetof(UWBP_TgfGame_CommonKey_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TgfGame_CommonKey_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_CommonKey_C, Overlay) == 0x0002C8, "Member 'UWBP_TgfGame_CommonKey_C::Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_CommonKey_C, InputTag) == 0x0002D0, "Member 'UWBP_TgfGame_CommonKey_C::InputTag' has a wrong offset!");
static_assert(offsetof(UWBP_TgfGame_CommonKey_C, InputAction) == 0x0002D8, "Member 'UWBP_TgfGame_CommonKey_C::InputAction' has a wrong offset!");

}


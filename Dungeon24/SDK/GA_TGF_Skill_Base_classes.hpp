#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TGF_Skill_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "LyraGame_structs.hpp"
#include "GA_TGF_Active_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TGF_Skill_Base.GA_TGF_Skill_Base_C
// 0x00D0 (0x0ED0 - 0x0E00)
#pragma pack(push, 0x1)
class alignas(0x10) UGA_TGF_Skill_Base_C : public UGA_TGF_Active_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_TGF_Skill_Base_C;                // 0x0E00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 RelatedWidgetClass;                                // 0x0E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EWidgetDirection                              Direction;                                         // 0x0E10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E11[0x7];                                      // 0x0E11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTgfSkillWidgetBase*                    RelatedWidgetObj;                                  // 0x0E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETgfActorCareer                               ActorCareer;                                       // 0x0E20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E21[0x7];                                      // 0x0E21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SkillName;                                         // 0x0E28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SkillDesc;                                         // 0x0E38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	double                                        CoolDownShowDelay;                                 // 0x0E48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CooldownTime;                                      // 0x0E50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ETgfEquipSubType>                      RestrictWeapon;                                    // 0x0E58(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           AdditionalSlotFailedTag;                           // 0x0E68(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowADS;                                          // 0x0E70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E71[0x7];                                      // 0x0E71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ETgfEquipSubType, struct FGameplayTagContainer> ErrorWeaponTagConfig;                              // 0x0E78(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BroadcastSkillAddToUI();
	void ExecuteUbergraph_GA_TGF_Skill_Base(int32 EntryPoint);
	void GetSkillDesc(class FString* Param_SkillName);
	void GetSkillName(class FString* Param_SkillName);
	class UTgfSkillWidgetBase* GetSkillWidget(bool bIgnoreTagCheck);
	void IsIgnoreCheck(bool* Result);
	void K2_ActivateAbility();
	void K2_OnAbilityAdded();
	void K2_OnEndAbility(bool bWasCancelled);
	void PostCheckWeaponAnim();
	void ShowSkillCast();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TGF_Skill_Base_C">();
	}
	static class UGA_TGF_Skill_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TGF_Skill_Base_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UGA_TGF_Skill_Base_C) == 0x000010, "Wrong alignment on UGA_TGF_Skill_Base_C");
static_assert(sizeof(UGA_TGF_Skill_Base_C) == 0x000ED0, "Wrong size on UGA_TGF_Skill_Base_C");
static_assert(offsetof(UGA_TGF_Skill_Base_C, UberGraphFrame_GA_TGF_Skill_Base_C) == 0x000E00, "Member 'UGA_TGF_Skill_Base_C::UberGraphFrame_GA_TGF_Skill_Base_C' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, RelatedWidgetClass) == 0x000E08, "Member 'UGA_TGF_Skill_Base_C::RelatedWidgetClass' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, Direction) == 0x000E10, "Member 'UGA_TGF_Skill_Base_C::Direction' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, RelatedWidgetObj) == 0x000E18, "Member 'UGA_TGF_Skill_Base_C::RelatedWidgetObj' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, ActorCareer) == 0x000E20, "Member 'UGA_TGF_Skill_Base_C::ActorCareer' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, SkillName) == 0x000E28, "Member 'UGA_TGF_Skill_Base_C::SkillName' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, SkillDesc) == 0x000E38, "Member 'UGA_TGF_Skill_Base_C::SkillDesc' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, CoolDownShowDelay) == 0x000E48, "Member 'UGA_TGF_Skill_Base_C::CoolDownShowDelay' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, CooldownTime) == 0x000E50, "Member 'UGA_TGF_Skill_Base_C::CooldownTime' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, RestrictWeapon) == 0x000E58, "Member 'UGA_TGF_Skill_Base_C::RestrictWeapon' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, AdditionalSlotFailedTag) == 0x000E68, "Member 'UGA_TGF_Skill_Base_C::AdditionalSlotFailedTag' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, AllowADS) == 0x000E70, "Member 'UGA_TGF_Skill_Base_C::AllowADS' has a wrong offset!");
static_assert(offsetof(UGA_TGF_Skill_Base_C, ErrorWeaponTagConfig) == 0x000E78, "Member 'UGA_TGF_Skill_Base_C::ErrorWeaponTagConfig' has a wrong offset!");

}

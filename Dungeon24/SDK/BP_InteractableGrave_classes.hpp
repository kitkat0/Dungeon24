#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractableGrave

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_InteractableBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractableGrave.BP_InteractableGrave_C
// 0x0010 (0x0360 - 0x0350)
class ABP_InteractableGrave_C : public ABP_InteractableBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_InteractableGrave_C;             // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Grave;                                             // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_InteractableGrave(int32 EntryPoint);
	void GetInteractionPromptText(class APlayerController* Param_Instigator, class FText* Key, class FText* Out_Text_Line_1, class FText* Out_Text_Line_2);
	void Initialize_Loot_Info(class ALyraCharacter* SourceCharacter);
	void PerformInteraction_on_Server(class APawn* InteractingPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractableGrave_C">();
	}
	static class ABP_InteractableGrave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractableGrave_C>();
	}
};
static_assert(alignof(ABP_InteractableGrave_C) == 0x000008, "Wrong alignment on ABP_InteractableGrave_C");
static_assert(sizeof(ABP_InteractableGrave_C) == 0x000360, "Wrong size on ABP_InteractableGrave_C");
static_assert(offsetof(ABP_InteractableGrave_C, UberGraphFrame_BP_InteractableGrave_C) == 0x000350, "Member 'ABP_InteractableGrave_C::UberGraphFrame_BP_InteractableGrave_C' has a wrong offset!");
static_assert(offsetof(ABP_InteractableGrave_C, Grave) == 0x000358, "Member 'ABP_InteractableGrave_C::Grave' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraUIRenderer

#include "Basic.hpp"

#include "Niagara_classes.hpp"
#include "Engine_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class NiagaraUIRenderer.NiagaraSystemWidget
// 0x0088 (0x01D8 - 0x0150)
class UNiagaraSystemWidget final : public UWidget
{
public:
	class UNiagaraSystem*                         NiagaraSystemReference;                            // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                 // 0x0158(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          AutoActivate;                                      // 0x01A8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TickWhenPaused;                                    // 0x01A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FakeDepthScale;                                    // 0x01AA(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AB[0x1];                                      // 0x01AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FakeDepthScaleDistance;                            // 0x01AC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowDebugSystemInWorld;                            // 0x01B0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DisableWarnings;                                   // 0x01B1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B2[0x16];                                     // 0x01B2(0x0016)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class ANiagaraUIActor>         NiagaraActor;                                      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UNiagaraUIComponent>     NiagaraComponent;                                  // 0x01D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void ActivateSystem(bool Reset);
	void DeactivateSystem();
	class UNiagaraUIComponent* GetNiagaraComponent();
	void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);
	void UpdateTickWhenPaused(bool NewTickWhenPaused);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSystemWidget">();
	}
	static class UNiagaraSystemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSystemWidget>();
	}
};
static_assert(alignof(UNiagaraSystemWidget) == 0x000008, "Wrong alignment on UNiagaraSystemWidget");
static_assert(sizeof(UNiagaraSystemWidget) == 0x0001D8, "Wrong size on UNiagaraSystemWidget");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraSystemReference) == 0x000150, "Member 'UNiagaraSystemWidget::NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, MaterialRemapList) == 0x000158, "Member 'UNiagaraSystemWidget::MaterialRemapList' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, AutoActivate) == 0x0001A8, "Member 'UNiagaraSystemWidget::AutoActivate' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, TickWhenPaused) == 0x0001A9, "Member 'UNiagaraSystemWidget::TickWhenPaused' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScale) == 0x0001AA, "Member 'UNiagaraSystemWidget::FakeDepthScale' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScaleDistance) == 0x0001AC, "Member 'UNiagaraSystemWidget::FakeDepthScaleDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, ShowDebugSystemInWorld) == 0x0001B0, "Member 'UNiagaraSystemWidget::ShowDebugSystemInWorld' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, DisableWarnings) == 0x0001B1, "Member 'UNiagaraSystemWidget::DisableWarnings' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraActor) == 0x0001C8, "Member 'UNiagaraSystemWidget::NiagaraActor' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraComponent) == 0x0001D0, "Member 'UNiagaraSystemWidget::NiagaraComponent' has a wrong offset!");

// Class NiagaraUIRenderer.NiagaraUIActor
// 0x0000 (0x0298 - 0x0298)
class ANiagaraUIActor final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIActor">();
	}
	static class ANiagaraUIActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraUIActor>();
	}
};
static_assert(alignof(ANiagaraUIActor) == 0x000008, "Wrong alignment on ANiagaraUIActor");
static_assert(sizeof(ANiagaraUIActor) == 0x000298, "Wrong size on ANiagaraUIActor");

// Class NiagaraUIRenderer.NiagaraUIComponent
// 0x0000 (0x07E0 - 0x07E0)
class UNiagaraUIComponent final : public UNiagaraComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIComponent">();
	}
	static class UNiagaraUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraUIComponent>();
	}
};
static_assert(alignof(UNiagaraUIComponent) == 0x000010, "Wrong alignment on UNiagaraUIComponent");
static_assert(sizeof(UNiagaraUIComponent) == 0x0007E0, "Wrong size on UNiagaraUIComponent");

}


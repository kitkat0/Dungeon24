#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioGameplayVolume

#include "Basic.hpp"

#include "AudioGameplay_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AudioGameplayVolume.AudioGameplayVolumeMutator
// 0x0008 (0x00B8 - 0x00B0)
class UAudioGameplayVolumeMutator : public UAudioGameplayComponent
{
public:
	int32                                         Priority;                                          // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetPriority(int32 InPriority);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeMutator">();
	}
	static class UAudioGameplayVolumeMutator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeMutator>();
	}
};
static_assert(alignof(UAudioGameplayVolumeMutator) == 0x000008, "Wrong alignment on UAudioGameplayVolumeMutator");
static_assert(sizeof(UAudioGameplayVolumeMutator) == 0x0000B8, "Wrong size on UAudioGameplayVolumeMutator");
static_assert(offsetof(UAudioGameplayVolumeMutator, Priority) == 0x0000B0, "Member 'UAudioGameplayVolumeMutator::Priority' has a wrong offset!");

// Class AudioGameplayVolume.AttenuationVolumeComponent
// 0x0010 (0x00C8 - 0x00B8)
class UAttenuationVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	float                                         ExteriorVolume;                                    // 0x00B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         ExteriorTime;                                      // 0x00BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         InteriorVolume;                                    // 0x00C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         InteriorTime;                                      // 0x00C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void SetExteriorVolume(float Volume, float InterpolateTime);
	void SetInteriorVolume(float Volume, float InterpolateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AttenuationVolumeComponent">();
	}
	static class UAttenuationVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAttenuationVolumeComponent>();
	}
};
static_assert(alignof(UAttenuationVolumeComponent) == 0x000008, "Wrong alignment on UAttenuationVolumeComponent");
static_assert(sizeof(UAttenuationVolumeComponent) == 0x0000C8, "Wrong size on UAttenuationVolumeComponent");
static_assert(offsetof(UAttenuationVolumeComponent, ExteriorVolume) == 0x0000B8, "Member 'UAttenuationVolumeComponent::ExteriorVolume' has a wrong offset!");
static_assert(offsetof(UAttenuationVolumeComponent, ExteriorTime) == 0x0000BC, "Member 'UAttenuationVolumeComponent::ExteriorTime' has a wrong offset!");
static_assert(offsetof(UAttenuationVolumeComponent, InteriorVolume) == 0x0000C0, "Member 'UAttenuationVolumeComponent::InteriorVolume' has a wrong offset!");
static_assert(offsetof(UAttenuationVolumeComponent, InteriorTime) == 0x0000C4, "Member 'UAttenuationVolumeComponent::InteriorTime' has a wrong offset!");

// Class AudioGameplayVolume.AudioGameplayVolume
// 0x0030 (0x0300 - 0x02D0)
class AAudioGameplayVolume final : public AVolume
{
public:
	class UAudioGameplayVolumeComponent*          AGVComponent;                                      // 0x02D0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bEnabled;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnListenerEnterEvent;                              // 0x02E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnListenerExitEvent;                               // 0x02F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	void OnListenerEnter();
	void OnListenerExit();
	void OnRep_bEnabled();
	void SetEnabled(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolume">();
	}
	static class AAudioGameplayVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAudioGameplayVolume>();
	}
};
static_assert(alignof(AAudioGameplayVolume) == 0x000008, "Wrong alignment on AAudioGameplayVolume");
static_assert(sizeof(AAudioGameplayVolume) == 0x000300, "Wrong size on AAudioGameplayVolume");
static_assert(offsetof(AAudioGameplayVolume, AGVComponent) == 0x0002D0, "Member 'AAudioGameplayVolume::AGVComponent' has a wrong offset!");
static_assert(offsetof(AAudioGameplayVolume, bEnabled) == 0x0002D8, "Member 'AAudioGameplayVolume::bEnabled' has a wrong offset!");
static_assert(offsetof(AAudioGameplayVolume, OnListenerEnterEvent) == 0x0002E0, "Member 'AAudioGameplayVolume::OnListenerEnterEvent' has a wrong offset!");
static_assert(offsetof(AAudioGameplayVolume, OnListenerExitEvent) == 0x0002F0, "Member 'AAudioGameplayVolume::OnListenerExitEvent' has a wrong offset!");

// Class AudioGameplayVolume.AudioGameplayVolumeComponent
// 0x0028 (0x00D8 - 0x00B0)
class UAudioGameplayVolumeComponent final : public UAudioGameplayComponent
{
public:
	FMulticastInlineDelegateProperty_             OnProxyEnter;                                      // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnProxyExit;                                       // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAudioGameplayVolumeProxy*              Proxy;                                             // 0x00D0(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeComponent">();
	}
	static class UAudioGameplayVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeComponent>();
	}
};
static_assert(alignof(UAudioGameplayVolumeComponent) == 0x000008, "Wrong alignment on UAudioGameplayVolumeComponent");
static_assert(sizeof(UAudioGameplayVolumeComponent) == 0x0000D8, "Wrong size on UAudioGameplayVolumeComponent");
static_assert(offsetof(UAudioGameplayVolumeComponent, OnProxyEnter) == 0x0000B0, "Member 'UAudioGameplayVolumeComponent::OnProxyEnter' has a wrong offset!");
static_assert(offsetof(UAudioGameplayVolumeComponent, OnProxyExit) == 0x0000C0, "Member 'UAudioGameplayVolumeComponent::OnProxyExit' has a wrong offset!");
static_assert(offsetof(UAudioGameplayVolumeComponent, Proxy) == 0x0000D0, "Member 'UAudioGameplayVolumeComponent::Proxy' has a wrong offset!");

// Class AudioGameplayVolume.AudioGameplayVolumeComponentBase
// 0x0008 (0x00B8 - 0x00B0)
class UAudioGameplayVolumeComponentBase final : public UAudioGameplayComponent
{
public:
	uint8                                         Pad_B0[0x8];                                       // 0x00B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeComponentBase">();
	}
	static class UAudioGameplayVolumeComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeComponentBase>();
	}
};
static_assert(alignof(UAudioGameplayVolumeComponentBase) == 0x000008, "Wrong alignment on UAudioGameplayVolumeComponentBase");
static_assert(sizeof(UAudioGameplayVolumeComponentBase) == 0x0000B8, "Wrong size on UAudioGameplayVolumeComponentBase");

// Class AudioGameplayVolume.AudioGameplayVolumeProxy
// 0x0020 (0x0048 - 0x0028)
class UAudioGameplayVolumeProxy : public UObject
{
public:
	uint8                                         Pad_28[0x20];                                      // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeProxy">();
	}
	static class UAudioGameplayVolumeProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeProxy>();
	}
};
static_assert(alignof(UAudioGameplayVolumeProxy) == 0x000008, "Wrong alignment on UAudioGameplayVolumeProxy");
static_assert(sizeof(UAudioGameplayVolumeProxy) == 0x000048, "Wrong size on UAudioGameplayVolumeProxy");

// Class AudioGameplayVolume.AGVPrimitiveComponentProxy
// 0x0008 (0x0050 - 0x0048)
class UAGVPrimitiveComponentProxy final : public UAudioGameplayVolumeProxy
{
public:
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGVPrimitiveComponentProxy">();
	}
	static class UAGVPrimitiveComponentProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGVPrimitiveComponentProxy>();
	}
};
static_assert(alignof(UAGVPrimitiveComponentProxy) == 0x000008, "Wrong alignment on UAGVPrimitiveComponentProxy");
static_assert(sizeof(UAGVPrimitiveComponentProxy) == 0x000050, "Wrong size on UAGVPrimitiveComponentProxy");

// Class AudioGameplayVolume.AGVConditionProxy
// 0x0008 (0x0050 - 0x0048)
class UAGVConditionProxy final : public UAudioGameplayVolumeProxy
{
public:
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGVConditionProxy">();
	}
	static class UAGVConditionProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGVConditionProxy>();
	}
};
static_assert(alignof(UAGVConditionProxy) == 0x000008, "Wrong alignment on UAGVConditionProxy");
static_assert(sizeof(UAGVConditionProxy) == 0x000050, "Wrong size on UAGVConditionProxy");

// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
// 0x0128 (0x0158 - 0x0030)
class UAudioGameplayVolumeSubsystem final : public UAudioEngineSubsystem
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<uint32, class UAudioGameplayVolumeComponent*> AGVComponents;                                     // 0x0038(0x0050)(ExportObject, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_88[0xD0];                                      // 0x0088(0x00D0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeSubsystem">();
	}
	static class UAudioGameplayVolumeSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeSubsystem>();
	}
};
static_assert(alignof(UAudioGameplayVolumeSubsystem) == 0x000008, "Wrong alignment on UAudioGameplayVolumeSubsystem");
static_assert(sizeof(UAudioGameplayVolumeSubsystem) == 0x000158, "Wrong size on UAudioGameplayVolumeSubsystem");
static_assert(offsetof(UAudioGameplayVolumeSubsystem, AGVComponents) == 0x000038, "Member 'UAudioGameplayVolumeSubsystem::AGVComponents' has a wrong offset!");

// Class AudioGameplayVolume.FilterVolumeComponent
// 0x0010 (0x00C8 - 0x00B8)
class UFilterVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	float                                         ExteriorLPF;                                       // 0x00B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         ExteriorLPFTime;                                   // 0x00BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         InteriorLPF;                                       // 0x00C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         InteriorLPFTime;                                   // 0x00C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void SetExteriorLPF(float Volume, float InterpolateTime);
	void SetInteriorLPF(float Volume, float InterpolateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FilterVolumeComponent">();
	}
	static class UFilterVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterVolumeComponent>();
	}
};
static_assert(alignof(UFilterVolumeComponent) == 0x000008, "Wrong alignment on UFilterVolumeComponent");
static_assert(sizeof(UFilterVolumeComponent) == 0x0000C8, "Wrong size on UFilterVolumeComponent");
static_assert(offsetof(UFilterVolumeComponent, ExteriorLPF) == 0x0000B8, "Member 'UFilterVolumeComponent::ExteriorLPF' has a wrong offset!");
static_assert(offsetof(UFilterVolumeComponent, ExteriorLPFTime) == 0x0000BC, "Member 'UFilterVolumeComponent::ExteriorLPFTime' has a wrong offset!");
static_assert(offsetof(UFilterVolumeComponent, InteriorLPF) == 0x0000C0, "Member 'UFilterVolumeComponent::InteriorLPF' has a wrong offset!");
static_assert(offsetof(UFilterVolumeComponent, InteriorLPFTime) == 0x0000C4, "Member 'UFilterVolumeComponent::InteriorLPFTime' has a wrong offset!");

// Class AudioGameplayVolume.ReverbVolumeComponent
// 0x0020 (0x00D8 - 0x00B8)
class UReverbVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	struct FReverbSettings                        ReverbSettings;                                    // 0x00B8(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)

public:
	void SetReverbSettings(const struct FReverbSettings& NewReverbSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReverbVolumeComponent">();
	}
	static class UReverbVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverbVolumeComponent>();
	}
};
static_assert(alignof(UReverbVolumeComponent) == 0x000008, "Wrong alignment on UReverbVolumeComponent");
static_assert(sizeof(UReverbVolumeComponent) == 0x0000D8, "Wrong size on UReverbVolumeComponent");
static_assert(offsetof(UReverbVolumeComponent, ReverbSettings) == 0x0000B8, "Member 'UReverbVolumeComponent::ReverbSettings' has a wrong offset!");

// Class AudioGameplayVolume.SubmixOverrideVolumeComponent
// 0x0010 (0x00C8 - 0x00B8)
class USubmixOverrideVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	TArray<struct FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings;                            // 0x00B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	void SetSubmixOverrideSettings(const TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixOverrideVolumeComponent">();
	}
	static class USubmixOverrideVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixOverrideVolumeComponent>();
	}
};
static_assert(alignof(USubmixOverrideVolumeComponent) == 0x000008, "Wrong alignment on USubmixOverrideVolumeComponent");
static_assert(sizeof(USubmixOverrideVolumeComponent) == 0x0000C8, "Wrong size on USubmixOverrideVolumeComponent");
static_assert(offsetof(USubmixOverrideVolumeComponent, SubmixOverrideSettings) == 0x0000B8, "Member 'USubmixOverrideVolumeComponent::SubmixOverrideSettings' has a wrong offset!");

// Class AudioGameplayVolume.SubmixSendVolumeComponent
// 0x0010 (0x00C8 - 0x00B8)
class USubmixSendVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings;                                // 0x00B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	void SetSubmixSendSettings(const TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixSendVolumeComponent">();
	}
	static class USubmixSendVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixSendVolumeComponent>();
	}
};
static_assert(alignof(USubmixSendVolumeComponent) == 0x000008, "Wrong alignment on USubmixSendVolumeComponent");
static_assert(sizeof(USubmixSendVolumeComponent) == 0x0000C8, "Wrong size on USubmixSendVolumeComponent");
static_assert(offsetof(USubmixSendVolumeComponent, SubmixSendSettings) == 0x0000B8, "Member 'USubmixSendVolumeComponent::SubmixSendSettings' has a wrong offset!");

}


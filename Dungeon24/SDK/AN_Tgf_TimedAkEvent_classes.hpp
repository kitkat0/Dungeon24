#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_Tgf_TimedAkEvent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_Tgf_TimedAkEvent.AN_Tgf_TimedAkEvent_C
// 0x0048 (0x0078 - 0x0030)
class UAN_Tgf_TimedAkEvent_C final : public UAnimNotifyState
{
public:
	class FString                                 Attach_Name;                                       // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0040(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Event;                                             // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         FadeTime;                                          // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          EndEvent;                                          // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkSwitchValue*                         SWITCH;                                            // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_Tgf_TimedAkEvent_C">();
	}
	static class UAN_Tgf_TimedAkEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_Tgf_TimedAkEvent_C>();
	}
};
static_assert(alignof(UAN_Tgf_TimedAkEvent_C) == 0x000008, "Wrong alignment on UAN_Tgf_TimedAkEvent_C");
static_assert(sizeof(UAN_Tgf_TimedAkEvent_C) == 0x000078, "Wrong size on UAN_Tgf_TimedAkEvent_C");
static_assert(offsetof(UAN_Tgf_TimedAkEvent_C, Attach_Name) == 0x000030, "Member 'UAN_Tgf_TimedAkEvent_C::Attach_Name' has a wrong offset!");
static_assert(offsetof(UAN_Tgf_TimedAkEvent_C, Offset) == 0x000040, "Member 'UAN_Tgf_TimedAkEvent_C::Offset' has a wrong offset!");
static_assert(offsetof(UAN_Tgf_TimedAkEvent_C, Event) == 0x000058, "Member 'UAN_Tgf_TimedAkEvent_C::Event' has a wrong offset!");
static_assert(offsetof(UAN_Tgf_TimedAkEvent_C, FadeTime) == 0x000060, "Member 'UAN_Tgf_TimedAkEvent_C::FadeTime' has a wrong offset!");
static_assert(offsetof(UAN_Tgf_TimedAkEvent_C, EndEvent) == 0x000068, "Member 'UAN_Tgf_TimedAkEvent_C::EndEvent' has a wrong offset!");
static_assert(offsetof(UAN_Tgf_TimedAkEvent_C, SWITCH) == 0x000070, "Member 'UAN_Tgf_TimedAkEvent_C::SWITCH' has a wrong offset!");

}


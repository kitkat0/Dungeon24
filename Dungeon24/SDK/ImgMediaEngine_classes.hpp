#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImgMediaEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ImgMediaEngine.ImgMediaPlaybackComponent
// 0x0028 (0x00D0 - 0x00A8)
class UImgMediaPlaybackComponent final : public UActorComponent
{
public:
	float                                         LODBias;                                           // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AC[0x24];                                      // 0x00AC(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImgMediaPlaybackComponent">();
	}
	static class UImgMediaPlaybackComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImgMediaPlaybackComponent>();
	}
};
static_assert(alignof(UImgMediaPlaybackComponent) == 0x000008, "Wrong alignment on UImgMediaPlaybackComponent");
static_assert(sizeof(UImgMediaPlaybackComponent) == 0x0000D0, "Wrong size on UImgMediaPlaybackComponent");
static_assert(offsetof(UImgMediaPlaybackComponent, LODBias) == 0x0000A8, "Member 'UImgMediaPlaybackComponent::LODBias' has a wrong offset!");

}

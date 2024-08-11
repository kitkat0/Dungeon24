#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WwiseFileHandler

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class WwiseFileHandler.WwiseExternalSourceStatics
// 0x0000 (0x0028 - 0x0028)
class UWwiseExternalSourceStatics final : public UBlueprintFunctionLibrary
{
public:
	static void SetExternalSourceMediaById(const class FString& ExternalSourceName, const int32 MediaId);
	static void SetExternalSourceMediaByName(const class FString& ExternalSourceName, const class FString& MediaName);
	static void SetExternalSourceMediaWithIds(const struct FAkUniqueID& ExternalSourceCookie, const int32 MediaId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WwiseExternalSourceStatics">();
	}
	static class UWwiseExternalSourceStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWwiseExternalSourceStatics>();
	}
};
static_assert(alignof(UWwiseExternalSourceStatics) == 0x000008, "Wrong alignment on UWwiseExternalSourceStatics");
static_assert(sizeof(UWwiseExternalSourceStatics) == 0x000028, "Wrong size on UWwiseExternalSourceStatics");

}


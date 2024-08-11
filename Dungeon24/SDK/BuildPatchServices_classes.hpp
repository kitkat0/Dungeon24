#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildPatchServices

#include "Basic.hpp"

#include "BuildPatchServices_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class BuildPatchServices.BuildPatchManifest
// 0x00F8 (0x0120 - 0x0028)
class UBuildPatchManifest final : public UObject
{
public:
	uint8                                         ManifestFileVersion;                               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsFileData;                                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        AppId;                                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppName;                                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BuildVersion;                                      // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LaunchExe;                                         // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LaunchCommand;                                     // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class FString>                           PrereqIds;                                         // 0x0070(0x0050)(NativeAccessSpecifierPublic)
	class FString                                 PrereqName;                                        // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PrereqPath;                                        // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PrereqArgs;                                        // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFileManifestData>              FileManifestList;                                  // 0x00F0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FChunkInfoData>                 ChunkList;                                         // 0x0100(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomFieldData>               CustomFields;                                      // 0x0110(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuildPatchManifest">();
	}
	static class UBuildPatchManifest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildPatchManifest>();
	}
};
static_assert(alignof(UBuildPatchManifest) == 0x000008, "Wrong alignment on UBuildPatchManifest");
static_assert(sizeof(UBuildPatchManifest) == 0x000120, "Wrong size on UBuildPatchManifest");
static_assert(offsetof(UBuildPatchManifest, ManifestFileVersion) == 0x000028, "Member 'UBuildPatchManifest::ManifestFileVersion' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, bIsFileData) == 0x000029, "Member 'UBuildPatchManifest::bIsFileData' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, AppId) == 0x00002C, "Member 'UBuildPatchManifest::AppId' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, AppName) == 0x000030, "Member 'UBuildPatchManifest::AppName' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, BuildVersion) == 0x000040, "Member 'UBuildPatchManifest::BuildVersion' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, LaunchExe) == 0x000050, "Member 'UBuildPatchManifest::LaunchExe' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, LaunchCommand) == 0x000060, "Member 'UBuildPatchManifest::LaunchCommand' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, PrereqIds) == 0x000070, "Member 'UBuildPatchManifest::PrereqIds' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, PrereqName) == 0x0000C0, "Member 'UBuildPatchManifest::PrereqName' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, PrereqPath) == 0x0000D0, "Member 'UBuildPatchManifest::PrereqPath' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, PrereqArgs) == 0x0000E0, "Member 'UBuildPatchManifest::PrereqArgs' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, FileManifestList) == 0x0000F0, "Member 'UBuildPatchManifest::FileManifestList' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, ChunkList) == 0x000100, "Member 'UBuildPatchManifest::ChunkList' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, CustomFields) == 0x000110, "Member 'UBuildPatchManifest::CustomFields' has a wrong offset!");

}


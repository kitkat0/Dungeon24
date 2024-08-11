#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTags

#include "Basic.hpp"

#include "IrisStub_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum GameplayTags.EGameplayContainerMatchType
// NumValues: 0x0003
enum class EGameplayContainerMatchType : uint8
{
	Any                                      = 0,
	All                                      = 1,
	EGameplayContainerMatchType_MAX          = 2,
};

// Enum GameplayTags.EGameplayTagQueryExprType
// NumValues: 0x0008
enum class EGameplayTagQueryExprType : uint8
{
	Undefined                                = 0,
	AnyTagsMatch                             = 1,
	AllTagsMatch                             = 2,
	NoTagsMatch                              = 3,
	AnyExprMatch                             = 4,
	AllExprMatch                             = 5,
	NoExprMatch                              = 6,
	EGameplayTagQueryExprType_MAX            = 7,
};

// Enum GameplayTags.EGameplayTagSourceType
// NumValues: 0x0007
enum class EGameplayTagSourceType : uint8
{
	Native                                   = 0,
	DefaultTagList                           = 1,
	TagList                                  = 2,
	RestrictedTagList                        = 3,
	DataTable                                = 4,
	Invalid                                  = 5,
	EGameplayTagSourceType_MAX               = 6,
};

// Enum GameplayTags.EGameplayTagSelectionType
// NumValues: 0x0005
enum class EGameplayTagSelectionType : uint8
{
	None                                     = 0,
	NonRestrictedOnly                        = 1,
	RestrictedOnly                           = 2,
	All                                      = 3,
	EGameplayTagSelectionType_MAX            = 4,
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// 0x0010 (0x0010 - 0x0000)
struct FGameplayTagRedirect final
{
public:
	class FName                                   OldTagName;                                        // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   NewTagName;                                        // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayTagRedirect) == 0x000004, "Wrong alignment on FGameplayTagRedirect");
static_assert(sizeof(FGameplayTagRedirect) == 0x000010, "Wrong size on FGameplayTagRedirect");
static_assert(offsetof(FGameplayTagRedirect, OldTagName) == 0x000000, "Member 'FGameplayTagRedirect::OldTagName' has a wrong offset!");
static_assert(offsetof(FGameplayTagRedirect, NewTagName) == 0x000008, "Member 'FGameplayTagRedirect::NewTagName' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTag
// 0x0008 (0x0008 - 0x0000)
struct FGameplayTag
{
public:
	class FName                                   TagName;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FGameplayTag) == 0x000004, "Wrong alignment on FGameplayTag");
static_assert(sizeof(FGameplayTag) == 0x000008, "Wrong size on FGameplayTag");
static_assert(offsetof(FGameplayTag, TagName) == 0x000000, "Member 'FGameplayTag::TagName' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0020 (0x0020 - 0x0000)
struct FGameplayTagContainer final
{
public:
	TArray<struct FGameplayTag>                   GameplayTags;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                   ParentTags;                                        // 0x0010(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};
static_assert(alignof(FGameplayTagContainer) == 0x000008, "Wrong alignment on FGameplayTagContainer");
static_assert(sizeof(FGameplayTagContainer) == 0x000020, "Wrong size on FGameplayTagContainer");
static_assert(offsetof(FGameplayTagContainer, GameplayTags) == 0x000000, "Member 'FGameplayTagContainer::GameplayTags' has a wrong offset!");
static_assert(offsetof(FGameplayTagContainer, ParentTags) == 0x000010, "Member 'FGameplayTagContainer::ParentTags' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTagNetSerializerConfig
// 0x0001 (0x0001 - 0x0000)
struct FGameplayTagNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTagNetSerializerConfig) == 0x000001, "Wrong alignment on FGameplayTagNetSerializerConfig");
static_assert(sizeof(FGameplayTagNetSerializerConfig) == 0x000001, "Wrong size on FGameplayTagNetSerializerConfig");

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048 (0x0048 - 0x0000)
struct FGameplayTagQuery final
{
public:
	int32                                         TokenStreamVersion;                                // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   TagDictionary;                                     // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 QueryTokenStream;                                  // 0x0018(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                 UserDescription;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 AutoDescription;                                   // 0x0038(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FGameplayTagQuery) == 0x000008, "Wrong alignment on FGameplayTagQuery");
static_assert(sizeof(FGameplayTagQuery) == 0x000048, "Wrong size on FGameplayTagQuery");
static_assert(offsetof(FGameplayTagQuery, TokenStreamVersion) == 0x000000, "Member 'FGameplayTagQuery::TokenStreamVersion' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, TagDictionary) == 0x000008, "Member 'FGameplayTagQuery::TagDictionary' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, QueryTokenStream) == 0x000018, "Member 'FGameplayTagQuery::QueryTokenStream' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, UserDescription) == 0x000028, "Member 'FGameplayTagQuery::UserDescription' has a wrong offset!");
static_assert(offsetof(FGameplayTagQuery, AutoDescription) == 0x000038, "Member 'FGameplayTagQuery::AutoDescription' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerConfig
// 0x0001 (0x0001 - 0x0000)
struct FGameplayTagContainerNetSerializerConfig final : public FNetSerializerConfig
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTagContainerNetSerializerConfig) == 0x000001, "Wrong alignment on FGameplayTagContainerNetSerializerConfig");
static_assert(sizeof(FGameplayTagContainerNetSerializerConfig) == 0x000001, "Wrong size on FGameplayTagContainerNetSerializerConfig");

// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
// 0x0010 (0x0010 - 0x0000)
struct FGameplayTagContainerNetSerializerSerializationHelper final
{
public:
	TArray<struct FGameplayTag>                   GameplayTags;                                      // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayTagContainerNetSerializerSerializationHelper) == 0x000008, "Wrong alignment on FGameplayTagContainerNetSerializerSerializationHelper");
static_assert(sizeof(FGameplayTagContainerNetSerializerSerializationHelper) == 0x000010, "Wrong size on FGameplayTagContainerNetSerializerSerializationHelper");
static_assert(offsetof(FGameplayTagContainerNetSerializerSerializationHelper, GameplayTags) == 0x000000, "Member 'FGameplayTagContainerNetSerializerSerializationHelper::GameplayTags' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FGameplayTagReferenceHelper final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTagReferenceHelper) == 0x000008, "Wrong alignment on FGameplayTagReferenceHelper");
static_assert(sizeof(FGameplayTagReferenceHelper) == 0x000010, "Wrong size on FGameplayTagReferenceHelper");

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// 0x0001 (0x0001 - 0x0000)
struct FGameplayTagCreationWidgetHelper final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTagCreationWidgetHelper) == 0x000001, "Wrong alignment on FGameplayTagCreationWidgetHelper");
static_assert(sizeof(FGameplayTagCreationWidgetHelper) == 0x000001, "Wrong size on FGameplayTagCreationWidgetHelper");

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0018 (0x0020 - 0x0008)
struct FGameplayTagTableRow : public FTableRowBase
{
public:
	class FName                                   Tag;                                               // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DevComment;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayTagTableRow) == 0x000008, "Wrong alignment on FGameplayTagTableRow");
static_assert(sizeof(FGameplayTagTableRow) == 0x000020, "Wrong size on FGameplayTagTableRow");
static_assert(offsetof(FGameplayTagTableRow, Tag) == 0x000008, "Member 'FGameplayTagTableRow::Tag' has a wrong offset!");
static_assert(offsetof(FGameplayTagTableRow, DevComment) == 0x000010, "Member 'FGameplayTagTableRow::DevComment' has a wrong offset!");

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// 0x0008 (0x0028 - 0x0020)
struct FRestrictedGameplayTagTableRow final : public FGameplayTagTableRow
{
public:
	bool                                          bAllowNonRestrictedChildren;                       // 0x0020(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRestrictedGameplayTagTableRow) == 0x000008, "Wrong alignment on FRestrictedGameplayTagTableRow");
static_assert(sizeof(FRestrictedGameplayTagTableRow) == 0x000028, "Wrong size on FRestrictedGameplayTagTableRow");
static_assert(offsetof(FRestrictedGameplayTagTableRow, bAllowNonRestrictedChildren) == 0x000020, "Member 'FRestrictedGameplayTagTableRow::bAllowNonRestrictedChildren' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTagSource
// 0x0020 (0x0020 - 0x0000)
struct FGameplayTagSource final
{
public:
	class FName                                   SourceName;                                        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayTagSourceType                        SourceType;                                        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayTagsList*                      SourceTagList;                                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URestrictedGameplayTagsList*            SourceRestrictedTagList;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayTagSource) == 0x000008, "Wrong alignment on FGameplayTagSource");
static_assert(sizeof(FGameplayTagSource) == 0x000020, "Wrong size on FGameplayTagSource");
static_assert(offsetof(FGameplayTagSource, SourceName) == 0x000000, "Member 'FGameplayTagSource::SourceName' has a wrong offset!");
static_assert(offsetof(FGameplayTagSource, SourceType) == 0x000008, "Member 'FGameplayTagSource::SourceType' has a wrong offset!");
static_assert(offsetof(FGameplayTagSource, SourceTagList) == 0x000010, "Member 'FGameplayTagSource::SourceTagList' has a wrong offset!");
static_assert(offsetof(FGameplayTagSource, SourceRestrictedTagList) == 0x000018, "Member 'FGameplayTagSource::SourceRestrictedTagList' has a wrong offset!");

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FGameplayTagNode final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTagNode) == 0x000008, "Wrong alignment on FGameplayTagNode");
static_assert(sizeof(FGameplayTagNode) == 0x000050, "Wrong size on FGameplayTagNode");

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// 0x0020 (0x0020 - 0x0000)
struct FGameplayTagCategoryRemap final
{
public:
	class FString                                 BaseCategory;                                      // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         RemapCategories;                                   // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayTagCategoryRemap) == 0x000008, "Wrong alignment on FGameplayTagCategoryRemap");
static_assert(sizeof(FGameplayTagCategoryRemap) == 0x000020, "Wrong size on FGameplayTagCategoryRemap");
static_assert(offsetof(FGameplayTagCategoryRemap, BaseCategory) == 0x000000, "Member 'FGameplayTagCategoryRemap::BaseCategory' has a wrong offset!");
static_assert(offsetof(FGameplayTagCategoryRemap, RemapCategories) == 0x000010, "Member 'FGameplayTagCategoryRemap::RemapCategories' has a wrong offset!");

// ScriptStruct GameplayTags.RestrictedConfigInfo
// 0x0020 (0x0020 - 0x0000)
struct FRestrictedConfigInfo final
{
public:
	class FString                                 RestrictedConfigName;                              // 0x0000(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         Owners;                                            // 0x0010(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRestrictedConfigInfo) == 0x000008, "Wrong alignment on FRestrictedConfigInfo");
static_assert(sizeof(FRestrictedConfigInfo) == 0x000020, "Wrong size on FRestrictedConfigInfo");
static_assert(offsetof(FRestrictedConfigInfo, RestrictedConfigName) == 0x000000, "Member 'FRestrictedConfigInfo::RestrictedConfigName' has a wrong offset!");
static_assert(offsetof(FRestrictedConfigInfo, Owners) == 0x000010, "Member 'FRestrictedConfigInfo::Owners' has a wrong offset!");

}


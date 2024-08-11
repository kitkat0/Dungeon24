#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonConversationRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "CommonConversationRuntime_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class CommonConversationRuntime.ConversationInstance
// 0x0200 (0x0228 - 0x0028)
class UConversationInstance final : public UObject
{
public:
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	struct FConversationParticipants              Participants;                                      // 0x0050(0x0010)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_60[0x1C8];                                     // 0x0060(0x01C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationInstance">();
	}
	static class UConversationInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationInstance>();
	}
};
static_assert(alignof(UConversationInstance) == 0x000008, "Wrong alignment on UConversationInstance");
static_assert(sizeof(UConversationInstance) == 0x000228, "Wrong size on UConversationInstance");
static_assert(offsetof(UConversationInstance, Participants) == 0x000050, "Member 'UConversationInstance::Participants' has a wrong offset!");

// Class CommonConversationRuntime.ConversationNode
// 0x0030 (0x0058 - 0x0028)
class UConversationNode : public UObject
{
public:
	class UObject*                                EvalWorldContextObj;                               // 0x0028(0x0008)(BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NodeName;                                          // 0x0030(0x0010)(Edit, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                  Compiled_NodeGUID;                                 // 0x0040(0x0010)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConversationNode*                      ParentNode;                                        // 0x0050(0x0008)(BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	struct FLinearColor GetDebugParticipantColor(const struct FGameplayTag& ParticipantID) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationNode">();
	}
	static class UConversationNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationNode>();
	}
};
static_assert(alignof(UConversationNode) == 0x000008, "Wrong alignment on UConversationNode");
static_assert(sizeof(UConversationNode) == 0x000058, "Wrong size on UConversationNode");
static_assert(offsetof(UConversationNode, EvalWorldContextObj) == 0x000028, "Member 'UConversationNode::EvalWorldContextObj' has a wrong offset!");
static_assert(offsetof(UConversationNode, NodeName) == 0x000030, "Member 'UConversationNode::NodeName' has a wrong offset!");
static_assert(offsetof(UConversationNode, Compiled_NodeGUID) == 0x000040, "Member 'UConversationNode::Compiled_NodeGUID' has a wrong offset!");
static_assert(offsetof(UConversationNode, ParentNode) == 0x000050, "Member 'UConversationNode::ParentNode' has a wrong offset!");

// Class CommonConversationRuntime.ConversationSubNode
// 0x0000 (0x0058 - 0x0058)
class UConversationSubNode : public UConversationNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationSubNode">();
	}
	static class UConversationSubNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationSubNode>();
	}
};
static_assert(alignof(UConversationSubNode) == 0x000008, "Wrong alignment on UConversationSubNode");
static_assert(sizeof(UConversationSubNode) == 0x000058, "Wrong size on UConversationSubNode");

// Class CommonConversationRuntime.ConversationChoiceNode
// 0x0038 (0x0090 - 0x0058)
class UConversationChoiceNode final : public UConversationSubNode
{
public:
	class FText                                   DefaultChoiceDisplayText;                          // 0x0058(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ChoiceTags;                                        // 0x0070(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void FillChoice(const struct FConversationContext& Context, struct FClientConversationOptionEntry* ChoiceEntry) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationChoiceNode">();
	}
	static class UConversationChoiceNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationChoiceNode>();
	}
};
static_assert(alignof(UConversationChoiceNode) == 0x000008, "Wrong alignment on UConversationChoiceNode");
static_assert(sizeof(UConversationChoiceNode) == 0x000090, "Wrong size on UConversationChoiceNode");
static_assert(offsetof(UConversationChoiceNode, DefaultChoiceDisplayText) == 0x000058, "Member 'UConversationChoiceNode::DefaultChoiceDisplayText' has a wrong offset!");
static_assert(offsetof(UConversationChoiceNode, ChoiceTags) == 0x000070, "Member 'UConversationChoiceNode::ChoiceTags' has a wrong offset!");

// Class CommonConversationRuntime.ConversationContextHelpers
// 0x0000 (0x0028 - 0x0028)
class UConversationContextHelpers final : public UBlueprintFunctionLibrary
{
public:
	static struct FConversationTaskResult AbortConversation(const struct FConversationContext& Context);
	static struct FConversationTaskResult AdvanceConversation(const struct FConversationContext& Context);
	static struct FConversationTaskResult AdvanceConversationWithChoice(const struct FConversationContext& Context, const struct FAdvanceConversationRequest& Choice);
	static bool CanConversationContinue(const struct FConversationTaskResult& ConversationTasResult);
	static class UConversationParticipantComponent* FindConversationComponent(class AActor* Actor);
	static class UConversationInstance* GetConversationInstance(const struct FConversationContext& Context);
	static class UConversationParticipantComponent* GetConversationParticipant(const struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag);
	static class AActor* GetConversationParticipantActor(const struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag);
	static struct FConversationNodeHandle GetCurrentConversationNodeHandle(const struct FConversationContext& Context);
	static void MakeConversationParticipant(const struct FConversationContext& Context, class AActor* ParticipantActor, const struct FGameplayTag& ParticipantTag);
	static struct FConversationTaskResult PauseConversationAndSendClientChoices(const struct FConversationContext& Context, const struct FClientConversationMessage& Message);
	static struct FConversationTaskResult ReturnToConversationStart(const struct FConversationContext& Context);
	static struct FConversationTaskResult ReturnToCurrentClientChoice(const struct FConversationContext& Context);
	static struct FConversationTaskResult ReturnToLastClientChoice(const struct FConversationContext& Context);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationContextHelpers">();
	}
	static class UConversationContextHelpers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationContextHelpers>();
	}
};
static_assert(alignof(UConversationContextHelpers) == 0x000008, "Wrong alignment on UConversationContextHelpers");
static_assert(sizeof(UConversationContextHelpers) == 0x000028, "Wrong size on UConversationContextHelpers");

// Class CommonConversationRuntime.ConversationDatabase
// 0x00B8 (0x00E8 - 0x0030)
class UConversationDatabase final : public UPrimaryDataAsset
{
public:
	int32                                         CompilerVersion;                                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, class UConversationNode*>  ReachableNodeMap;                                  // 0x0038(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FConversationEntryList>         EntryTags;                                         // 0x0088(0x0010)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ExitTags;                                          // 0x0098(0x0020)(AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                          InternalNodeIds;                                   // 0x00B8(0x0010)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                          LinkedToNodeIds;                                   // 0x00C8(0x0010)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	TArray<struct FCommonDialogueBankParticipant> Speakers;                                          // 0x00D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationDatabase">();
	}
	static class UConversationDatabase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationDatabase>();
	}
};
static_assert(alignof(UConversationDatabase) == 0x000008, "Wrong alignment on UConversationDatabase");
static_assert(sizeof(UConversationDatabase) == 0x0000E8, "Wrong size on UConversationDatabase");
static_assert(offsetof(UConversationDatabase, CompilerVersion) == 0x000030, "Member 'UConversationDatabase::CompilerVersion' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, ReachableNodeMap) == 0x000038, "Member 'UConversationDatabase::ReachableNodeMap' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, EntryTags) == 0x000088, "Member 'UConversationDatabase::EntryTags' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, ExitTags) == 0x000098, "Member 'UConversationDatabase::ExitTags' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, InternalNodeIds) == 0x0000B8, "Member 'UConversationDatabase::InternalNodeIds' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, LinkedToNodeIds) == 0x0000C8, "Member 'UConversationDatabase::LinkedToNodeIds' has a wrong offset!");
static_assert(offsetof(UConversationDatabase, Speakers) == 0x0000D8, "Member 'UConversationDatabase::Speakers' has a wrong offset!");

// Class CommonConversationRuntime.ConversationNodeWithLinks
// 0x0010 (0x0068 - 0x0058)
class UConversationNodeWithLinks : public UConversationNode
{
public:
	TArray<struct FGuid>                          OutputConnections;                                 // 0x0058(0x0010)(BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationNodeWithLinks">();
	}
	static class UConversationNodeWithLinks* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationNodeWithLinks>();
	}
};
static_assert(alignof(UConversationNodeWithLinks) == 0x000008, "Wrong alignment on UConversationNodeWithLinks");
static_assert(sizeof(UConversationNodeWithLinks) == 0x000068, "Wrong size on UConversationNodeWithLinks");
static_assert(offsetof(UConversationNodeWithLinks, OutputConnections) == 0x000058, "Member 'UConversationNodeWithLinks::OutputConnections' has a wrong offset!");

// Class CommonConversationRuntime.ConversationEntryPointNode
// 0x0008 (0x0070 - 0x0068)
class UConversationEntryPointNode final : public UConversationNodeWithLinks
{
public:
	struct FGameplayTag                           EntryTag;                                          // 0x0068(0x0008)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationEntryPointNode">();
	}
	static class UConversationEntryPointNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationEntryPointNode>();
	}
};
static_assert(alignof(UConversationEntryPointNode) == 0x000008, "Wrong alignment on UConversationEntryPointNode");
static_assert(sizeof(UConversationEntryPointNode) == 0x000070, "Wrong size on UConversationEntryPointNode");
static_assert(offsetof(UConversationEntryPointNode, EntryTag) == 0x000068, "Member 'UConversationEntryPointNode::EntryTag' has a wrong offset!");

// Class CommonConversationRuntime.ConversationLibrary
// 0x0000 (0x0028 - 0x0028)
class UConversationLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UConversationInstance* StartConversation(const struct FGameplayTag& ConversationEntryTag, class AActor* Instigator, const struct FGameplayTag& InstigatorTag, class AActor* Target, const struct FGameplayTag& TargetTag, const TSubclassOf<class UConversationInstance> ConversationInstanceClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationLibrary">();
	}
	static class UConversationLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationLibrary>();
	}
};
static_assert(alignof(UConversationLibrary) == 0x000008, "Wrong alignment on UConversationLibrary");
static_assert(sizeof(UConversationLibrary) == 0x000028, "Wrong size on UConversationLibrary");

// Class CommonConversationRuntime.ConversationTaskNode
// 0x0018 (0x0080 - 0x0068)
class UConversationTaskNode : public UConversationNodeWithLinks
{
public:
	TArray<class UConversationSubNode*>           SubNodes;                                          // 0x0068(0x0010)(BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          bIgnoreRequirementsWhileAdvancingConversations;    // 0x0078(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ExecuteClientEffects(const struct FConversationContext& Context) const;
	struct FConversationTaskResult ExecuteTaskNode(const struct FConversationContext& Context) const;
	void GatherStaticExtraData(const struct FConversationContext& Context, TArray<struct FConversationNodeParameterPair>* InOutExtraData) const;
	bool GetNodeBodyColor(struct FLinearColor* BodyColor) const;
	EConversationRequirementResult IsRequirementSatisfied(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationTaskNode">();
	}
	static class UConversationTaskNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationTaskNode>();
	}
};
static_assert(alignof(UConversationTaskNode) == 0x000008, "Wrong alignment on UConversationTaskNode");
static_assert(sizeof(UConversationTaskNode) == 0x000080, "Wrong size on UConversationTaskNode");
static_assert(offsetof(UConversationTaskNode, SubNodes) == 0x000068, "Member 'UConversationTaskNode::SubNodes' has a wrong offset!");
static_assert(offsetof(UConversationTaskNode, bIgnoreRequirementsWhileAdvancingConversations) == 0x000078, "Member 'UConversationTaskNode::bIgnoreRequirementsWhileAdvancingConversations' has a wrong offset!");

// Class CommonConversationRuntime.ConversationLinkNode
// 0x0008 (0x0088 - 0x0080)
class UConversationLinkNode final : public UConversationTaskNode
{
public:
	struct FGameplayTag                           RemoteEntryTag;                                    // 0x0080(0x0008)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationLinkNode">();
	}
	static class UConversationLinkNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationLinkNode>();
	}
};
static_assert(alignof(UConversationLinkNode) == 0x000008, "Wrong alignment on UConversationLinkNode");
static_assert(sizeof(UConversationLinkNode) == 0x000088, "Wrong size on UConversationLinkNode");
static_assert(offsetof(UConversationLinkNode, RemoteEntryTag) == 0x000080, "Member 'UConversationLinkNode::RemoteEntryTag' has a wrong offset!");

// Class CommonConversationRuntime.ConversationParticipantComponent
// 0x0198 (0x0240 - 0x00A8)
class UConversationParticipantComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x78];                                      // 0x00A8(0x0078)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ConversationsActive;                               // 0x0120(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_124[0x84];                                     // 0x0124(0x0084)(Fixing Size After Last Property [ Dumper-7 ])
	class UConversationInstance*                  Auth_CurrentConversation;                          // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UConversationInstance*>          Auth_Conversations;                                // 0x01B0(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FClientConversationMessagePayload      LastMessage;                                       // 0x01C0(0x0078)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_238[0x8];                                      // 0x0238(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClientExecuteTaskAndSideEffects(const struct FConversationNodeHandle& Handle);
	void ClientStartConversation(const struct FGameplayTag& AsParticipant);
	void ClientUpdateConversation(const struct FClientConversationMessagePayload& Message);
	void ClientUpdateConversations(int32 InConversationsActive);
	void ClientUpdateConversationTaskChoiceData(const struct FConversationNodeHandle& Handle, const struct FClientConversationOptionEntry& OptionEntry);
	void ClientUpdateParticipants(const struct FConversationParticipants& InParticipants);
	class FText GetParticipantDisplayName();
	void OnRep_ConversationsActive(int32 OldConversationsActive);
	void RequestServerAdvanceConversation(const struct FAdvanceConversationRequest& InChoicePicked);
	void ServerAdvanceConversation(const struct FAdvanceConversationRequest& InChoicePicked);

	bool IsInActiveConversation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationParticipantComponent">();
	}
	static class UConversationParticipantComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationParticipantComponent>();
	}
};
static_assert(alignof(UConversationParticipantComponent) == 0x000008, "Wrong alignment on UConversationParticipantComponent");
static_assert(sizeof(UConversationParticipantComponent) == 0x000240, "Wrong size on UConversationParticipantComponent");
static_assert(offsetof(UConversationParticipantComponent, ConversationsActive) == 0x000120, "Member 'UConversationParticipantComponent::ConversationsActive' has a wrong offset!");
static_assert(offsetof(UConversationParticipantComponent, Auth_CurrentConversation) == 0x0001A8, "Member 'UConversationParticipantComponent::Auth_CurrentConversation' has a wrong offset!");
static_assert(offsetof(UConversationParticipantComponent, Auth_Conversations) == 0x0001B0, "Member 'UConversationParticipantComponent::Auth_Conversations' has a wrong offset!");
static_assert(offsetof(UConversationParticipantComponent, LastMessage) == 0x0001C0, "Member 'UConversationParticipantComponent::LastMessage' has a wrong offset!");

// Class CommonConversationRuntime.ConversationRegistry
// 0x01C8 (0x01F8 - 0x0030)
class UConversationRegistry final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNetSerializeScriptStructCache_ConvVersion ConversationChoiceDataStructCache;                 // 0x0038(0x0060)(Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_98[0x160];                                     // 0x0098(0x0160)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationRegistry">();
	}
	static class UConversationRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationRegistry>();
	}
};
static_assert(alignof(UConversationRegistry) == 0x000008, "Wrong alignment on UConversationRegistry");
static_assert(sizeof(UConversationRegistry) == 0x0001F8, "Wrong size on UConversationRegistry");
static_assert(offsetof(UConversationRegistry, ConversationChoiceDataStructCache) == 0x000038, "Member 'UConversationRegistry::ConversationChoiceDataStructCache' has a wrong offset!");

// Class CommonConversationRuntime.ConversationRequirementNode
// 0x0000 (0x0058 - 0x0058)
class UConversationRequirementNode final : public UConversationSubNode
{
public:
	EConversationRequirementResult IsRequirementSatisfied(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationRequirementNode">();
	}
	static class UConversationRequirementNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationRequirementNode>();
	}
};
static_assert(alignof(UConversationRequirementNode) == 0x000008, "Wrong alignment on UConversationRequirementNode");
static_assert(sizeof(UConversationRequirementNode) == 0x000058, "Wrong size on UConversationRequirementNode");

// Class CommonConversationRuntime.ConversationSettings
// 0x0030 (0x0068 - 0x0038)
class UConversationSettings final : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UClass>                   ConversationInstanceClass;                         // 0x0038(0x0030)(Edit, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationSettings">();
	}
	static class UConversationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationSettings>();
	}
};
static_assert(alignof(UConversationSettings) == 0x000008, "Wrong alignment on UConversationSettings");
static_assert(sizeof(UConversationSettings) == 0x000068, "Wrong size on UConversationSettings");
static_assert(offsetof(UConversationSettings, ConversationInstanceClass) == 0x000038, "Member 'UConversationSettings::ConversationInstanceClass' has a wrong offset!");

// Class CommonConversationRuntime.ConversationSideEffectNode
// 0x0000 (0x0058 - 0x0058)
class UConversationSideEffectNode final : public UConversationSubNode
{
public:
	void ClientCauseSideEffect(const struct FConversationContext& Context) const;
	void ServerCauseSideEffect(const struct FConversationContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConversationSideEffectNode">();
	}
	static class UConversationSideEffectNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConversationSideEffectNode>();
	}
};
static_assert(alignof(UConversationSideEffectNode) == 0x000008, "Wrong alignment on UConversationSideEffectNode");
static_assert(sizeof(UConversationSideEffectNode) == 0x000058, "Wrong size on UConversationSideEffectNode");

}


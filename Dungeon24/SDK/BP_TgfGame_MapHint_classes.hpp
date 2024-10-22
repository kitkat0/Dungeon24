#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TgfGame_MapHint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_DisplayPersistentData_structs.hpp"
#include "S_DisplayCombinedType_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TgfGame_MapHint.BP_TgfGame_MapHint_C
// 0x0178 (0x0220 - 0x00A8)
class UBP_TgfGame_MapHint_C final : public UGameStateComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FMapHintEscapeData>             ArrEscapeHintData;                                 // 0x00B0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	FMulticastInlineDelegateProperty_             OnUpdateEscapeData;                                // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_DisplayPersistentData>       ArrTempRemoveItemData;                             // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnEscapeDataReplicated;                            // 0x00E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ETgfDisplayInfoPortalSubType                  PortalBlueHandleSubTyp;                            // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayInfoPortalSubType                  PortalRedHandleSubType;                            // 0x00F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_DisplayCombinedType>         ArrMessageForMapView;                              // 0x00F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsForMapView;                                      // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_DisplayPersistentData>       ArrDisplayPersisitentData;                         // 0x0110(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	FMulticastInlineDelegateProperty_             OnDisplayPersistentDataUpdate;                     // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ETgfDisplayInfoDropSubType                    DropScrollKeyShowSubType;                          // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDisplayPersisitentDataReplicated;                // 0x0138(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ETgfDisplayInfoKillSubType                    KillSubType;                                       // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        KillerHeathPercent;                                // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerNameData                        KillerNameData;                                    // 0x0158(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayerNameData                        DeadNameData;                                      // 0x0188(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	ETgfEquipSubType                              AttackWeaponType;                                  // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipQuality                              WeaponQuality;                                     // 0x01B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMultiLang;                                       // 0x01BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKillerNameMultiLang;                             // 0x01BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDeadNameMultiLang;                               // 0x01BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<double, double>                          MapFloorOpacity;                                   // 0x01C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int64                                         Object_ID;                                         // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayInfoPortalSubType                  PortalSubType;                                     // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddDisplayMessageDropInfo(const struct FS_DisplayDropInfo& DropInfo);
	void AddDisplayMessageKillInfo(const struct FS_PretreatDisplayKillInfo& PreKillInfo);
	void AddDisplayMessagePortalInfo(const struct FS_PretreatDisplayPortalInfo& PrePortalInfo);
	void AddEscapeHintData(ETgfEscapeMapHintType HintType, const struct FVector& Location, class UObject* HandleObject, class ALyraCharacter* ReportCharacter, int64 HandleObjectID);
	void AddMarkPointMsg(const struct FS_PretreatDisplayMarkPointInfo& PreMarkPointData);
	void AddMonsterMsgInfo(const struct FS_PretreatDisplayCharacterInfo& PreMonsterData);
	void AddPortalDetectMsg(const struct FS_PretreatDisplayDetectInfo& PreDetectData);
	void AddStateTagMsg(const struct FS_PretreatDisplayStateTagInfo& PreStateTagData);
	void CheckDisplayPersistentDataEqual(class UObject* CheckObject, ETgfIntraGameDisplayInfoType MainType, int64 Subtype, const struct FS_DisplayPersistentData& TargetData, int64 CheckObjectID, int64 CheckAbilityOwnerID, bool* IsEqual);
	void CheckKillSubtype(class ALyraCharacter* KillChara, class ALyraCharacter* DeadChara);
	void CheckMessageDataForMapView(ETgfIntraGameDisplayInfoType MainType, int64 Subtype, bool* HasMapView);
	void CheckSourceIsMonster(class ALyraCharacter* Chara, bool* IsSourceCharaMonster, class ALyraCharacter** SourceChara, bool* IsSummon, class ALyraCharacter** SummonChara);
	void EventReceived_397400A84FCF1E63DE5EBCA18ABBD8C7(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_BP_TgfGame_MapHint(int32 EntryPoint);
	void GenDisplayCombineTypeKey(ETgfIntraGameDisplayInfoType DisplayMainType, int64 DisplaySubType, int64* DisplayCombineKey);
	void GenDisplayPersistentData(const struct FVector& Location, class UObject* ObjectParam, ETgfIntraGameDisplayInfoType MainType, int64 Subtype, ETgfDisplayAgingType AgingType, int64 ObjectId, double FloatParam, int64 NewObjectID, int64 AbilityOwnerID, int32 IntParam, bool* IsValid, struct FS_DisplayPersistentData* PersistentData);
	void GenInstantKillData(const struct FS_PretreatDisplayKillInfo& PreKillInfo, struct FS_DisplayKillInfo* InstantKillInfo);
	void GenInstantPortalData(const struct FS_PretreatDisplayPortalInfo& PrePortalData, struct FS_DisplayPortalInfo* PortalData);
	void GenPretreatDisplayKillData(class UObject* KillObj, class UObject* DeadObj, ETgfDisplayAgingType AgingType, ETgfDisplayInfoKillSubType PresetSubType, struct FS_PretreatDisplayKillInfo* PretreatKillData, bool* IsValid);
	void GenPretreatDisplayMarkPointData(class AActor* OwnerActor, const struct FVector& MarkPosition, bool IsDangerType, struct FS_PretreatDisplayMarkPointInfo* PretreatMarkPointData, bool* IsValid);
	void GenPretreatDisplayMonsterData(class ABP_Tgf_Character_Default_C* MonsterCharacter, double Magnitude, class ABP_ActorSpawnPoint_C* SpawnActorPoint, bool IsCharaInstance, bool* IsValidForMap, struct FS_PretreatDisplayCharacterInfo* PreCharacterInfo);
	void GenPretreatDisplayPortalData(class UObject* Object, class ALyraCharacter* Character, int64 Subtype, ETgfDisplayAgingType AgingType, int32 PortalCnt, const struct FVector& Location, int64 ObjectId, int32 IntParam, struct FS_PretreatDisplayPortalInfo* PrePortalData);
	void GenPretreatDisplayPortalDetectData(class AActor* OwnerActor, double DetectDistance, struct FS_PretreatDisplayDetectInfo* PretreatDetectData, bool* IsValid);
	void GenPretreatDisplayStateTagData(ETgfDisplayInfoStateTagSubType Subtype, struct FS_PretreatDisplayStateTagInfo* PretreatStateTagData, bool* IsValid);
	void GetAllDisplayPersistentData(TArray<struct FS_DisplayPersistentData>* ArrDisplayPersistentData);
	void GetCharacterName(class ALyraCharacter* Character, struct FPlayerNameData* NameData, bool* Param_IsMultiLang);
	void GetDetectTarget(const struct FVector& DetectCenter, double DetectDistance, bool IsAdd, int64 OwnerId, TArray<struct FS_Detected_Portal_Item>* OurPortalDatas);
	void OnDisplayPersisitentDataReplicated__DelegateSignature();
	void OnDisplayPersistentDataUpdate__DelegateSignature(const struct FS_DisplayPersistentData& DisplayData, bool IsAddData);
	void OnEscapeDataReplicated__DelegateSignature();
	void OnMessageReceived_08F2C57946ED0700A50F6B948780369F(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_0A57646D4EA3031B0F79C4B93E535F99(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_0E615A2E452140D66333BCAC536BEB4A(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_1DE07B224DCE9C6149BBDE917B7140B9(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_1E12DF5B4270B85EB3DB0FBA8A7D2C2F(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_21230ED44348BD7596E4B38A66BBBA5D(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_3827AD7B452E24C150EA10BC47FCD400(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_4971948B478BE612C60E70A809A93D3F(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_5DFBD6A9466C4308C0A6B2A01E1D4291(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_862142594300942E984183BD15FC0E30(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_8E48863F452887C48463F2A79B775AE0(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_A0AC4215474BAD091567DABB02A85A66(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_AF73F1794AB047227524F58FE2DBE0FA(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_B77F1FD24AA0FADEAC7012B4396BDE65(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_B8BD95F74AD71F9F701C5B9BE5BD4890(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_C3879CBC415FDE1352C25A9D29D8567C(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_D38E0CF84BC46300218882B1AA5BB7C8(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_F241341F424D12BED7AD53BC7CFECDB4(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnMessageReceived_FB2D201346795BBE1A1A5F911926F842(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void OnRep_ArrDisplayPersisitentData();
	void OnRep_ArrEscapeMapHint();
	void OnUpdateEscapeData__DelegateSignature(const struct FMapHintEscapeData& EscapeData, bool IsAddItem);
	void PersistentDataMultiCast(const struct FS_DisplayPersistentData& DisplayData, bool IsAddData);
	void ReceiveBeginPlay();
	void RemoveDisplayMessageDropInfo(const struct FS_DisplayDropInfo& DropInfo);
	void RemoveDisplayMessageKillInfo(const struct FS_PretreatDisplayKillInfo& PreKillInfo);
	void RemoveDisplayMessagePortalInfo(const struct FS_PretreatDisplayPortalInfo& PrePortalInfo);
	void RemoveEscapeHintData(ETgfEscapeMapHintType HintType, class UObject* HandleObject, int64 HandleObjectID);
	void RemoveMarkPointMsg(const struct FS_PretreatDisplayMarkPointInfo& PreMarkPointData);
	void RemoveMonsterMsgInfo(const struct FS_PretreatDisplayCharacterInfo& PreMonsterData);
	void RemovePortalDetectMsg(const struct FS_PretreatDisplayDetectInfo& PreDetectData);
	void ReplaceUpdatePersistentData(const struct FS_DisplayPersistentData& InPersistentData, bool* IsPureAdd);
	void UpdateDisplayInstantDropData(const struct FS_DisplayDropInfo& DisplayDropMessage);
	void UpdateDisplayInstantKillData(const struct FS_DisplayKillInfo& DisplayKillMessage);
	void UpdateDisplayInstantPortalData(const struct FS_DisplayPortalInfo& DisplayPortalMessage);
	void UpdateDisplayPersistentData(bool IsAddData, const struct FS_DisplayPersistentData& DisplayPersisitentData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TgfGame_MapHint_C">();
	}
	static class UBP_TgfGame_MapHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TgfGame_MapHint_C>();
	}
};
static_assert(alignof(UBP_TgfGame_MapHint_C) == 0x000008, "Wrong alignment on UBP_TgfGame_MapHint_C");
static_assert(sizeof(UBP_TgfGame_MapHint_C) == 0x000220, "Wrong size on UBP_TgfGame_MapHint_C");
static_assert(offsetof(UBP_TgfGame_MapHint_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_TgfGame_MapHint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, ArrEscapeHintData) == 0x0000B0, "Member 'UBP_TgfGame_MapHint_C::ArrEscapeHintData' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, OnUpdateEscapeData) == 0x0000C0, "Member 'UBP_TgfGame_MapHint_C::OnUpdateEscapeData' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, ArrTempRemoveItemData) == 0x0000D0, "Member 'UBP_TgfGame_MapHint_C::ArrTempRemoveItemData' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, OnEscapeDataReplicated) == 0x0000E0, "Member 'UBP_TgfGame_MapHint_C::OnEscapeDataReplicated' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, PortalBlueHandleSubTyp) == 0x0000F0, "Member 'UBP_TgfGame_MapHint_C::PortalBlueHandleSubTyp' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, PortalRedHandleSubType) == 0x0000F1, "Member 'UBP_TgfGame_MapHint_C::PortalRedHandleSubType' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, ArrMessageForMapView) == 0x0000F8, "Member 'UBP_TgfGame_MapHint_C::ArrMessageForMapView' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, IsForMapView) == 0x000108, "Member 'UBP_TgfGame_MapHint_C::IsForMapView' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, ArrDisplayPersisitentData) == 0x000110, "Member 'UBP_TgfGame_MapHint_C::ArrDisplayPersisitentData' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, OnDisplayPersistentDataUpdate) == 0x000120, "Member 'UBP_TgfGame_MapHint_C::OnDisplayPersistentDataUpdate' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, DropScrollKeyShowSubType) == 0x000130, "Member 'UBP_TgfGame_MapHint_C::DropScrollKeyShowSubType' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, OnDisplayPersisitentDataReplicated) == 0x000138, "Member 'UBP_TgfGame_MapHint_C::OnDisplayPersisitentDataReplicated' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, KillSubType) == 0x000148, "Member 'UBP_TgfGame_MapHint_C::KillSubType' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, KillerHeathPercent) == 0x000150, "Member 'UBP_TgfGame_MapHint_C::KillerHeathPercent' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, KillerNameData) == 0x000158, "Member 'UBP_TgfGame_MapHint_C::KillerNameData' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, DeadNameData) == 0x000188, "Member 'UBP_TgfGame_MapHint_C::DeadNameData' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, AttackWeaponType) == 0x0001B8, "Member 'UBP_TgfGame_MapHint_C::AttackWeaponType' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, WeaponQuality) == 0x0001B9, "Member 'UBP_TgfGame_MapHint_C::WeaponQuality' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, IsMultiLang) == 0x0001BA, "Member 'UBP_TgfGame_MapHint_C::IsMultiLang' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, IsKillerNameMultiLang) == 0x0001BB, "Member 'UBP_TgfGame_MapHint_C::IsKillerNameMultiLang' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, IsDeadNameMultiLang) == 0x0001BC, "Member 'UBP_TgfGame_MapHint_C::IsDeadNameMultiLang' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, MapFloorOpacity) == 0x0001C0, "Member 'UBP_TgfGame_MapHint_C::MapFloorOpacity' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, Object_ID) == 0x000210, "Member 'UBP_TgfGame_MapHint_C::Object_ID' has a wrong offset!");
static_assert(offsetof(UBP_TgfGame_MapHint_C, PortalSubType) == 0x000218, "Member 'UBP_TgfGame_MapHint_C::PortalSubType' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterSelectionComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "LyraGame_structs.hpp"
#include "LyraGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterSelectionComponent.BP_CharacterSelectionComponent_C
// 0x0388 (0x0450 - 0x00C8)
class UBP_CharacterSelectionComponent_C final : public UCharacterSelectionComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Max_Distance;                                      // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Select_Self_Team;                                  // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Select_Other_Team;                                 // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EndTime;                                           // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSelecting;                                      // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndSelection;                                    // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsLocal;                                          // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALyraPlayerController*                  LocalController;                                   // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actors_to_Ignore;                                  // 0x0110(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Select_Monster;                                    // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Character_Default_C*            Current_Selected_Character;                        // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCharacterSelected;                               // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Select_Alive;                                      // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Select_Dead;                                       // 0x0141(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_142[0x6];                                      // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Tgf_Character_Default_C*            Current_Selected_CharacterServer;                  // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        UnselectAngle;                                     // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectedInvalid;                                 // 0x0158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bTriggeredSelectedInvalid;                         // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ServerCheckMaxDistanceRate;                        // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSelectGround;                                   // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentGroundLocation;                             // 0x0198(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasValidLocation;                                 // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 SelectIndicatorTemplate;                           // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SelectIndicatorInstance;                           // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Find_Ground_Depth;                                 // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Unselect_Max_Distance;                             // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceStartPos;                                     // 0x01D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceHitPos;                                       // 0x01F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TraceBoneName;                                     // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SelectEffect;                                      // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EffectPos;                                         // 0x0218(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MultiTraceRadius;                                  // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_Tgf_Character_Default_C*>    CurSelectedCharacters;                             // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         ClearEffectDelay;                                  // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         WaitDestroyEffects;                                // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          bClearSelectEffectOnFinish;                        // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelectMultiTarget;                               // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIgnoreCheckTag;                                   // 0x0262(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETraceTypeQuery                               TraceChannel;                                      // 0x0263(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TraceHitActor;                                     // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitResult;                                         // 0x0270(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             SelectEffectHitResult;                             // 0x0358(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        GroudHeightOffset;                                 // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasValidTraceHitPos;                              // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearClientSelection(bool bTriggerInvalid);
	void ClearSelectEffect();
	void ClearSelectLocation();
	void ClearServerSelection(bool bTriggerInvalid);
	void CreateIndicator();
	void EndSelection();
	void ExecuteUbergraph_BP_CharacterSelectionComponent(int32 EntryPoint);
	void Get_Trace_Hit_Pos(struct FVector* Param_TraceHitPos);
	void GetSelection(class ABP_Tgf_Character_Default_C** SelectedCharacter);
	void GetSelectLocation(struct FVector* Location, bool* bHasValid);
	void InitCompnent();
	void Is_Actor_Selectable(class ABP_Tgf_Character_Default_C*& Actor, bool* bSelectable);
	void Is_Cur_Chara_Unselectable(class ABP_Tgf_Character_Default_C* NewChara, bool* bUnselectable);
	void IsActorTagsMatch(class ABP_Tgf_Character_Default_C* Actor, bool bForceCheck, bool* bMatch);
	void OnCharacterSelected__DelegateSignature(class ABP_Tgf_Character_Default_C* SelectedCharacter);
	void OnEndSelection__DelegateSignature(class ABP_Tgf_Character_Default_C* SelectedCharacter);
	void OnSelectedInvalid__DelegateSignature();
	void OnSelectedTargetDead(class AActor* OwningActor);
	void OnStartSelection();
	void OnUpdateSelectionServer(class ABP_Tgf_Character_Default_C* SelectedChara, const struct FVector& TraceStart, const struct FVector& TraceHit, class FName Param_TraceBoneName, const TArray<class AActor*>& IgnoreActors);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetSelectEffectPos();
	void StartSelection(double MaxDistance, double SelectionTime, bool bSelectSelfTeam, bool bSelectOtherTeam, bool bSelectMonster, bool bSelectAlive, bool bSelectDead, double Param_UnselectAngle, double UnselectMaxDistance, bool bSelectGround, double ServerVerifyDistanceRate, double FindGroundDepth, bool bSelectAOETarget, double AOERadius, bool Param_bIgnoreCheckTag, bool bTraceAsProjectile);
	bool TraceGroundLocation(class AController* InController, struct FHitResult* OutHit);
	void TraceMultiTarget(const struct FVector& TraceCenter);
	bool TraceTarget(class AController* InController, struct FHitResult* OutHit);
	void Update_Beam_Decal(const struct FVector& CurrentPos, const struct FVector& HitNormal, ECollisionChannel HitComponet);
	void UpdateMaxDistance(double NewMaxDistance, double NewVerifyRate);
	void UpdateSelectEffectPos(const struct FVector& NewPos, const struct FRotator& NewRotation);
	void UpdateSelection(class ABP_Tgf_Character_Default_C* SelectedCharacter);
	void UpdateSelectionGround(const struct FVector& Location, const struct FVector& ViewTargetPos);
	void UpdateSelectionGroundServer(const struct FVector& Location, const struct FVector& ViewTargetPos);
	void UpdateSelectTargets(const TArray<class ABP_Tgf_Character_Default_C*>& TempTargets);
	void UpdateTraceEndPos(const struct FVector& NewPos, const struct FHitResult& Param_HitResult);
	void VerifySelectTarget(class ABP_Tgf_Character_Default_C* SelectedTarge, const struct FVector& TraceStart, const struct FVector& TraceHit, TArray<class AActor*>& ClientIgnoreActors, bool* bIsValid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterSelectionComponent_C">();
	}
	static class UBP_CharacterSelectionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharacterSelectionComponent_C>();
	}
};
static_assert(alignof(UBP_CharacterSelectionComponent_C) == 0x000008, "Wrong alignment on UBP_CharacterSelectionComponent_C");
static_assert(sizeof(UBP_CharacterSelectionComponent_C) == 0x000450, "Wrong size on UBP_CharacterSelectionComponent_C");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, UberGraphFrame) == 0x0000C8, "Member 'UBP_CharacterSelectionComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Max_Distance) == 0x0000D0, "Member 'UBP_CharacterSelectionComponent_C::Max_Distance' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Select_Self_Team) == 0x0000D8, "Member 'UBP_CharacterSelectionComponent_C::Select_Self_Team' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Select_Other_Team) == 0x0000D9, "Member 'UBP_CharacterSelectionComponent_C::Select_Other_Team' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, EndTime) == 0x0000E0, "Member 'UBP_CharacterSelectionComponent_C::EndTime' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, bIsSelecting) == 0x0000E8, "Member 'UBP_CharacterSelectionComponent_C::bIsSelecting' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, OnEndSelection) == 0x0000F0, "Member 'UBP_CharacterSelectionComponent_C::OnEndSelection' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, bIsLocal) == 0x000100, "Member 'UBP_CharacterSelectionComponent_C::bIsLocal' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, LocalController) == 0x000108, "Member 'UBP_CharacterSelectionComponent_C::LocalController' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Actors_to_Ignore) == 0x000110, "Member 'UBP_CharacterSelectionComponent_C::Actors_to_Ignore' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Select_Monster) == 0x000120, "Member 'UBP_CharacterSelectionComponent_C::Select_Monster' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Current_Selected_Character) == 0x000128, "Member 'UBP_CharacterSelectionComponent_C::Current_Selected_Character' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, OnCharacterSelected) == 0x000130, "Member 'UBP_CharacterSelectionComponent_C::OnCharacterSelected' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Select_Alive) == 0x000140, "Member 'UBP_CharacterSelectionComponent_C::Select_Alive' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Select_Dead) == 0x000141, "Member 'UBP_CharacterSelectionComponent_C::Select_Dead' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Current_Selected_CharacterServer) == 0x000148, "Member 'UBP_CharacterSelectionComponent_C::Current_Selected_CharacterServer' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, UnselectAngle) == 0x000150, "Member 'UBP_CharacterSelectionComponent_C::UnselectAngle' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, OnSelectedInvalid) == 0x000158, "Member 'UBP_CharacterSelectionComponent_C::OnSelectedInvalid' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, bTriggeredSelectedInvalid) == 0x000168, "Member 'UBP_CharacterSelectionComponent_C::bTriggeredSelectedInvalid' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, ServerCheckMaxDistanceRate) == 0x000170, "Member 'UBP_CharacterSelectionComponent_C::ServerCheckMaxDistanceRate' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, HitLocation) == 0x000178, "Member 'UBP_CharacterSelectionComponent_C::HitLocation' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, bIsSelectGround) == 0x000190, "Member 'UBP_CharacterSelectionComponent_C::bIsSelectGround' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, CurrentGroundLocation) == 0x000198, "Member 'UBP_CharacterSelectionComponent_C::CurrentGroundLocation' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, bHasValidLocation) == 0x0001B0, "Member 'UBP_CharacterSelectionComponent_C::bHasValidLocation' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, SelectIndicatorTemplate) == 0x0001B8, "Member 'UBP_CharacterSelectionComponent_C::SelectIndicatorTemplate' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, SelectIndicatorInstance) == 0x0001C0, "Member 'UBP_CharacterSelectionComponent_C::SelectIndicatorInstance' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Find_Ground_Depth) == 0x0001C8, "Member 'UBP_CharacterSelectionComponent_C::Find_Ground_Depth' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, Unselect_Max_Distance) == 0x0001D0, "Member 'UBP_CharacterSelectionComponent_C::Unselect_Max_Distance' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, TraceStartPos) == 0x0001D8, "Member 'UBP_CharacterSelectionComponent_C::TraceStartPos' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, TraceHitPos) == 0x0001F0, "Member 'UBP_CharacterSelectionComponent_C::TraceHitPos' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, TraceBoneName) == 0x000208, "Member 'UBP_CharacterSelectionComponent_C::TraceBoneName' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, SelectEffect) == 0x000210, "Member 'UBP_CharacterSelectionComponent_C::SelectEffect' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, EffectPos) == 0x000218, "Member 'UBP_CharacterSelectionComponent_C::EffectPos' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, MultiTraceRadius) == 0x000230, "Member 'UBP_CharacterSelectionComponent_C::MultiTraceRadius' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, CurSelectedCharacters) == 0x000238, "Member 'UBP_CharacterSelectionComponent_C::CurSelectedCharacters' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, ClearEffectDelay) == 0x000248, "Member 'UBP_CharacterSelectionComponent_C::ClearEffectDelay' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, WaitDestroyEffects) == 0x000250, "Member 'UBP_CharacterSelectionComponent_C::WaitDestroyEffects' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, bClearSelectEffectOnFinish) == 0x000260, "Member 'UBP_CharacterSelectionComponent_C::bClearSelectEffectOnFinish' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, IsSelectMultiTarget) == 0x000261, "Member 'UBP_CharacterSelectionComponent_C::IsSelectMultiTarget' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, bIgnoreCheckTag) == 0x000262, "Member 'UBP_CharacterSelectionComponent_C::bIgnoreCheckTag' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, TraceChannel) == 0x000263, "Member 'UBP_CharacterSelectionComponent_C::TraceChannel' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, TraceHitActor) == 0x000268, "Member 'UBP_CharacterSelectionComponent_C::TraceHitActor' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, HitResult) == 0x000270, "Member 'UBP_CharacterSelectionComponent_C::HitResult' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, SelectEffectHitResult) == 0x000358, "Member 'UBP_CharacterSelectionComponent_C::SelectEffectHitResult' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, GroudHeightOffset) == 0x000440, "Member 'UBP_CharacterSelectionComponent_C::GroudHeightOffset' has a wrong offset!");
static_assert(offsetof(UBP_CharacterSelectionComponent_C, bHasValidTraceHitPos) == 0x000448, "Member 'UBP_CharacterSelectionComponent_C::bHasValidTraceHitPos' has a wrong offset!");

}


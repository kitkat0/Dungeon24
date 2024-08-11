#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_Tgf_PlayerHitValidation

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AN_Tgf_PlayerHitValidation.AN_Tgf_PlayerHitValidation_C.Received_NotifyBegin
// 0x00B8 (0x00B8 - 0x0000)
struct AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetCurrentWeaponFirstActor_ReturnValue;   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_TGF_MeleeWeaponBase_C*               K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base;      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Fighter_HeroSample_C*               K2Node_DynamicCast_AsBP_Fighter_Hero_Sample;       // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetCurrentWeaponFirstActor_ReturnValue_1; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_TGF_MeleeWeaponBase_C*               K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base_1;    // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin");
static_assert(sizeof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin) == 0x0000B8, "Wrong size on AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue_1) == 0x000050, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, CallFunc_GetCurrentWeaponFirstActor_ReturnValue) == 0x000060, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::CallFunc_GetCurrentWeaponFirstActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base) == 0x000070, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, K2Node_DynamicCast_AsBP_Fighter_Hero_Sample) == 0x000080, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::K2Node_DynamicCast_AsBP_Fighter_Hero_Sample' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue_2) == 0x000090, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, CallFunc_GetCurrentWeaponFirstActor_ReturnValue_1) == 0x000098, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::CallFunc_GetCurrentWeaponFirstActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue_2) == 0x0000A0, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base_1) == 0x0000A8, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function AN_Tgf_PlayerHitValidation.AN_Tgf_PlayerHitValidation_C.Received_NotifyEnd
// 0x00B0 (0x00B0 - 0x0000)
struct AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetCurrentWeaponFirstActor_ReturnValue;   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_TGF_MeleeWeaponBase_C*               K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base;      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Fighter_HeroSample_C*               K2Node_DynamicCast_AsBP_Fighter_Hero_Sample;       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetCurrentWeaponFirstActor_ReturnValue_1; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_TGF_MeleeWeaponBase_C*               K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base_1;    // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd");
static_assert(sizeof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd) == 0x0000B0, "Wrong size on AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue_1) == 0x000048, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, CallFunc_GetCurrentWeaponFirstActor_ReturnValue) == 0x000058, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::CallFunc_GetCurrentWeaponFirstActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base) == 0x000068, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, K2Node_DynamicCast_AsBP_Fighter_Hero_Sample) == 0x000078, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::K2Node_DynamicCast_AsBP_Fighter_Hero_Sample' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue_2) == 0x000088, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, CallFunc_GetCurrentWeaponFirstActor_ReturnValue_1) == 0x000090, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::CallFunc_GetCurrentWeaponFirstActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, CallFunc_IsValid_ReturnValue_2) == 0x000098, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base_1) == 0x0000A0, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::K2Node_DynamicCast_AsB_TGF_Melee_Weapon_Base_1' has a wrong offset!");
static_assert(offsetof(AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'AN_Tgf_PlayerHitValidation_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

}


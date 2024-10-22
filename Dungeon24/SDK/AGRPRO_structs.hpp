#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AGRPRO

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum AGRPRO.EAGRDebuggerCategories
// NumValues: 0x000A
enum class EAGRDebuggerCategories : uint8
{
	Custom                                   = 0,
	AnimState                                = 1,
	AimOffset                                = 2,
	Rotation                                 = 3,
	Runtime                                  = 4,
	Movement                                 = 5,
	State                                    = 6,
	Leans                                    = 7,
	Setup                                    = 8,
	EAGRDebuggerCategories_MAX               = 9,
};

// Enum AGRPRO.EAGR_AimOffsetClamp
// NumValues: 0x0004
enum class EAGR_AimOffsetClamp : uint8
{
	Nearest                                  = 0,
	Left                                     = 1,
	Right                                    = 2,
	EAGR_MAX                                 = 3,
};

// Enum AGRPRO.EAGR_AimOffsets
// NumValues: 0x0004
enum class EAGR_AimOffsets : uint8
{
	NONE                                     = 0,
	Aim                                      = 1,
	Look                                     = 2,
	EAGR_MAX                                 = 3,
};

// Enum AGRPRO.EAGR_RotationMethod
// NumValues: 0x0006
enum class EAGR_RotationMethod : uint8
{
	NONE                                     = 0,
	RotateToVelocity                         = 1,
	AbsoluteRotation                         = 2,
	DesiredRotation                          = 3,
	DesiredAtAngle                           = 4,
	EAGR_MAX                                 = 5,
};

// Enum AGRPRO.EAGR_CombatColliderType
// NumValues: 0x0006
enum class EAGR_CombatColliderType : uint8
{
	SimpleLineTrace                          = 0,
	SimpleBoxTrace                           = 1,
	SimpleCapsuleTrace                       = 2,
	ComplexLineTrace                         = 3,
	ComplexBoxTrace                          = 4,
	EAGR_MAX                                 = 5,
};

// ScriptStruct AGRPRO.AGRDebuggerSettingsKey
// 0x0020 (0x0020 - 0x0000)
struct FAGRDebuggerSettingsKey final
{
public:
	struct FKey                                   InputKey;                                          // 0x0000(0x0018)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bControl;                                          // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAlt;                                              // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShift;                                            // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCommand;                                          // 0x001B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAGRDebuggerSettingsKey) == 0x000008, "Wrong alignment on FAGRDebuggerSettingsKey");
static_assert(sizeof(FAGRDebuggerSettingsKey) == 0x000020, "Wrong size on FAGRDebuggerSettingsKey");
static_assert(offsetof(FAGRDebuggerSettingsKey, InputKey) == 0x000000, "Member 'FAGRDebuggerSettingsKey::InputKey' has a wrong offset!");
static_assert(offsetof(FAGRDebuggerSettingsKey, bControl) == 0x000018, "Member 'FAGRDebuggerSettingsKey::bControl' has a wrong offset!");
static_assert(offsetof(FAGRDebuggerSettingsKey, bAlt) == 0x000019, "Member 'FAGRDebuggerSettingsKey::bAlt' has a wrong offset!");
static_assert(offsetof(FAGRDebuggerSettingsKey, bShift) == 0x00001A, "Member 'FAGRDebuggerSettingsKey::bShift' has a wrong offset!");
static_assert(offsetof(FAGRDebuggerSettingsKey, bCommand) == 0x00001B, "Member 'FAGRDebuggerSettingsKey::bCommand' has a wrong offset!");

// ScriptStruct AGRPRO.Equipment
// 0x0030 (0x0030 - 0x0000)
struct FEquipment final
{
public:
	class FName                                   ID;                                                // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  AcceptableSlots;                                   // 0x0008(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class AActor*                                 ItemActor;                                         // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEquipment) == 0x000008, "Wrong alignment on FEquipment");
static_assert(sizeof(FEquipment) == 0x000030, "Wrong size on FEquipment");
static_assert(offsetof(FEquipment, ID) == 0x000000, "Member 'FEquipment::ID' has a wrong offset!");
static_assert(offsetof(FEquipment, AcceptableSlots) == 0x000008, "Member 'FEquipment::AcceptableSlots' has a wrong offset!");
static_assert(offsetof(FEquipment, ItemActor) == 0x000028, "Member 'FEquipment::ItemActor' has a wrong offset!");

// ScriptStruct AGRPRO.AGRDebugProp
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FAGRDebugProp final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAGRDebugProp) == 0x000008, "Wrong alignment on FAGRDebugProp");
static_assert(sizeof(FAGRDebugProp) == 0x000018, "Wrong size on FAGRDebugProp");

// ScriptStruct AGRPRO.AGRPropContainer
// 0x0018 (0x0018 - 0x0000)
struct FAGRPropContainer final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBox*                           Container;                                         // 0x0010(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAGRPropContainer) == 0x000008, "Wrong alignment on FAGRPropContainer");
static_assert(sizeof(FAGRPropContainer) == 0x000018, "Wrong size on FAGRPropContainer");
static_assert(offsetof(FAGRPropContainer, Container) == 0x000010, "Member 'FAGRPropContainer::Container' has a wrong offset!");

// ScriptStruct AGRPRO.AGRAttackNotifyStateDataExtra
// 0x0028 (0x0028 - 0x0000)
struct FAGRAttackNotifyStateDataExtra final
{
public:
	bool                                          UseExtraData;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CenterOverrideStart;                               // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 ZOffsets;                                          // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          CheckChildFirst;                                   // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartOffset;                                       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndOffset;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceUseOldHit;                                    // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAGRAttackNotifyStateDataExtra) == 0x000008, "Wrong alignment on FAGRAttackNotifyStateDataExtra");
static_assert(sizeof(FAGRAttackNotifyStateDataExtra) == 0x000028, "Wrong size on FAGRAttackNotifyStateDataExtra");
static_assert(offsetof(FAGRAttackNotifyStateDataExtra, UseExtraData) == 0x000000, "Member 'FAGRAttackNotifyStateDataExtra::UseExtraData' has a wrong offset!");
static_assert(offsetof(FAGRAttackNotifyStateDataExtra, CenterOverrideStart) == 0x000001, "Member 'FAGRAttackNotifyStateDataExtra::CenterOverrideStart' has a wrong offset!");
static_assert(offsetof(FAGRAttackNotifyStateDataExtra, ZOffsets) == 0x000008, "Member 'FAGRAttackNotifyStateDataExtra::ZOffsets' has a wrong offset!");
static_assert(offsetof(FAGRAttackNotifyStateDataExtra, CheckChildFirst) == 0x000018, "Member 'FAGRAttackNotifyStateDataExtra::CheckChildFirst' has a wrong offset!");
static_assert(offsetof(FAGRAttackNotifyStateDataExtra, StartOffset) == 0x00001C, "Member 'FAGRAttackNotifyStateDataExtra::StartOffset' has a wrong offset!");
static_assert(offsetof(FAGRAttackNotifyStateDataExtra, EndOffset) == 0x000020, "Member 'FAGRAttackNotifyStateDataExtra::EndOffset' has a wrong offset!");
static_assert(offsetof(FAGRAttackNotifyStateDataExtra, ForceUseOldHit) == 0x000024, "Member 'FAGRAttackNotifyStateDataExtra::ForceUseOldHit' has a wrong offset!");

// ScriptStruct AGRPRO.AGRTraceData
// 0x0140 (0x0140 - 0x0000)
struct FAGRTraceData final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          UseConfig;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   StartSocketTraceName;                              // 0x0014(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             StartSocketOffset;                                 // 0x0020(0x0060)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   EndSocketTraceName;                                // 0x0080(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             EndSocketOffset;                                   // 0x0090(0x0060)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketAttachParentName;                            // 0x00F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAGR_CombatColliderType                       CollisionHandling;                                 // 0x00F8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F9[0x17];                                      // 0x00F9(0x0017)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          NeedExtraSocketOffset;                             // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_111[0x2F];                                     // 0x0111(0x002F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAGRTraceData) == 0x000010, "Wrong alignment on FAGRTraceData");
static_assert(sizeof(FAGRTraceData) == 0x000140, "Wrong size on FAGRTraceData");
static_assert(offsetof(FAGRTraceData, UseConfig) == 0x000010, "Member 'FAGRTraceData::UseConfig' has a wrong offset!");
static_assert(offsetof(FAGRTraceData, StartSocketTraceName) == 0x000014, "Member 'FAGRTraceData::StartSocketTraceName' has a wrong offset!");
static_assert(offsetof(FAGRTraceData, StartSocketOffset) == 0x000020, "Member 'FAGRTraceData::StartSocketOffset' has a wrong offset!");
static_assert(offsetof(FAGRTraceData, EndSocketTraceName) == 0x000080, "Member 'FAGRTraceData::EndSocketTraceName' has a wrong offset!");
static_assert(offsetof(FAGRTraceData, EndSocketOffset) == 0x000090, "Member 'FAGRTraceData::EndSocketOffset' has a wrong offset!");
static_assert(offsetof(FAGRTraceData, SocketAttachParentName) == 0x0000F0, "Member 'FAGRTraceData::SocketAttachParentName' has a wrong offset!");
static_assert(offsetof(FAGRTraceData, CollisionHandling) == 0x0000F8, "Member 'FAGRTraceData::CollisionHandling' has a wrong offset!");
static_assert(offsetof(FAGRTraceData, NeedExtraSocketOffset) == 0x000110, "Member 'FAGRTraceData::NeedExtraSocketOffset' has a wrong offset!");

}


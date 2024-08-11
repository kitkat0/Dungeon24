#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RangedWeaponSpawnProjectileParam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct RangedWeaponSpawnProjectileParam.RangedWeaponSpawnProjectileParam
// 0x0038 (0x0038 - 0x0000)
struct FRangedWeaponSpawnProjectileParam final
{
public:
	double                                        OverrideVelocity_2_F43FFD6C4F83A5E87EBE07868A6CD6F4; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpawnPos_5_68A45B974A68A7F2F8EEB4B232C6C73D;       // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SpawnRot_8_7DC7D286444B0429885F76A873C2E706;       // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FRangedWeaponSpawnProjectileParam) == 0x000008, "Wrong alignment on FRangedWeaponSpawnProjectileParam");
static_assert(sizeof(FRangedWeaponSpawnProjectileParam) == 0x000038, "Wrong size on FRangedWeaponSpawnProjectileParam");
static_assert(offsetof(FRangedWeaponSpawnProjectileParam, OverrideVelocity_2_F43FFD6C4F83A5E87EBE07868A6CD6F4) == 0x000000, "Member 'FRangedWeaponSpawnProjectileParam::OverrideVelocity_2_F43FFD6C4F83A5E87EBE07868A6CD6F4' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSpawnProjectileParam, SpawnPos_5_68A45B974A68A7F2F8EEB4B232C6C73D) == 0x000008, "Member 'FRangedWeaponSpawnProjectileParam::SpawnPos_5_68A45B974A68A7F2F8EEB4B232C6C73D' has a wrong offset!");
static_assert(offsetof(FRangedWeaponSpawnProjectileParam, SpawnRot_8_7DC7D286444B0429885F76A873C2E706) == 0x000020, "Member 'FRangedWeaponSpawnProjectileParam::SpawnRot_8_7DC7D286444B0429885F76A873C2E706' has a wrong offset!");

}

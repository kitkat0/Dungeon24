#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_TgfCharacter

#include "Basic.hpp"

#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function BPFL_TgfCharacter.BPFL_TgfCharacter_C.SetCharacterCosmeticMesh
// 0x0020 (0x0020 - 0x0000)
struct BPFL_TgfCharacter_C_SetCharacterCosmeticMesh final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETgfActorGender                               Gender;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfActorRace                                 Race;                                              // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DruidMode;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh) == 0x000008, "Wrong alignment on BPFL_TgfCharacter_C_SetCharacterCosmeticMesh");
static_assert(sizeof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh) == 0x000020, "Wrong size on BPFL_TgfCharacter_C_SetCharacterCosmeticMesh");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, Mesh) == 0x000000, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::Mesh' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, Gender) == 0x000008, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::Gender' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, Race) == 0x000009, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::Race' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, DruidMode) == 0x00000C, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::DruidMode' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, __WorldContext) == 0x000010, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, K2Node_SwitchInteger_CmpSuccess) == 0x000018, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, K2Node_SwitchEnum_CmpSuccess_1) == 0x00001A, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterCosmeticMesh, K2Node_SwitchEnum_CmpSuccess_2) == 0x00001B, "Member 'BPFL_TgfCharacter_C_SetCharacterCosmeticMesh::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");

// Function BPFL_TgfCharacter.BPFL_TgfCharacter_C.SetCharacterShellMesh
// 0x0020 (0x0020 - 0x0000)
struct BPFL_TgfCharacter_C_SetCharacterShellMesh final
{
public:
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ETgfActorGender                               Gender;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfActorRace                                 Race;                                              // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DruidMode;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_TgfCharacter_C_SetCharacterShellMesh) == 0x000008, "Wrong alignment on BPFL_TgfCharacter_C_SetCharacterShellMesh");
static_assert(sizeof(BPFL_TgfCharacter_C_SetCharacterShellMesh) == 0x000020, "Wrong size on BPFL_TgfCharacter_C_SetCharacterShellMesh");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, Mesh) == 0x000000, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::Mesh' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, Gender) == 0x000008, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::Gender' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, Race) == 0x000009, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::Race' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, DruidMode) == 0x00000C, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::DruidMode' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, __WorldContext) == 0x000010, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, K2Node_SwitchInteger_CmpSuccess) == 0x000018, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, K2Node_SwitchEnum_CmpSuccess_1) == 0x00001A, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BPFL_TgfCharacter_C_SetCharacterShellMesh, K2Node_SwitchEnum_CmpSuccess_2) == 0x00001B, "Member 'BPFL_TgfCharacter_C_SetCharacterShellMesh::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");

}


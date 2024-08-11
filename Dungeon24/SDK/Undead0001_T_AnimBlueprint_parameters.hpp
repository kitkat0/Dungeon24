#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Undead0001_T_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Undead0001_T_AnimBlueprint.Undead0001_T_AnimBlueprint_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct Undead0001_T_AnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Undead0001_T_AnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on Undead0001_T_AnimBlueprint_C_AnimGraph");
static_assert(sizeof(Undead0001_T_AnimBlueprint_C_AnimGraph) == 0x000020, "Wrong size on Undead0001_T_AnimBlueprint_C_AnimGraph");
static_assert(offsetof(Undead0001_T_AnimBlueprint_C_AnimGraph, InPose) == 0x000000, "Member 'Undead0001_T_AnimBlueprint_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(Undead0001_T_AnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000010, "Member 'Undead0001_T_AnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function Undead0001_T_AnimBlueprint.Undead0001_T_AnimBlueprint_C.ExecuteUbergraph_Undead0001_T_AnimBlueprint
// 0x0004 (0x0004 - 0x0000)
struct Undead0001_T_AnimBlueprint_C_ExecuteUbergraph_Undead0001_T_AnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Undead0001_T_AnimBlueprint_C_ExecuteUbergraph_Undead0001_T_AnimBlueprint) == 0x000004, "Wrong alignment on Undead0001_T_AnimBlueprint_C_ExecuteUbergraph_Undead0001_T_AnimBlueprint");
static_assert(sizeof(Undead0001_T_AnimBlueprint_C_ExecuteUbergraph_Undead0001_T_AnimBlueprint) == 0x000004, "Wrong size on Undead0001_T_AnimBlueprint_C_ExecuteUbergraph_Undead0001_T_AnimBlueprint");
static_assert(offsetof(Undead0001_T_AnimBlueprint_C_ExecuteUbergraph_Undead0001_T_AnimBlueprint, EntryPoint) == 0x000000, "Member 'Undead0001_T_AnimBlueprint_C_ExecuteUbergraph_Undead0001_T_AnimBlueprint::EntryPoint' has a wrong offset!");

}

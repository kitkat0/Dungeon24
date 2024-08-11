#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Avatar_Panther

#include "Basic.hpp"

#include "LyraGame_structs.hpp"


namespace SDK::Params
{

// Function BP_Avatar_Panther.BP_Avatar_Panther_C.ExecuteUbergraph_BP_Avatar_Panther
// 0x0008 (0x0008 - 0x0000)
struct BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfActorGender                               K2Node_Event_Gender;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfActorRace                                 K2Node_Event_Race;                                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther) == 0x000004, "Wrong alignment on BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther");
static_assert(sizeof(BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther) == 0x000008, "Wrong size on BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther");
static_assert(offsetof(BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther, EntryPoint) == 0x000000, "Member 'BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther, K2Node_Event_Gender) == 0x000004, "Member 'BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther::K2Node_Event_Gender' has a wrong offset!");
static_assert(offsetof(BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther, K2Node_Event_Race) == 0x000005, "Member 'BP_Avatar_Panther_C_ExecuteUbergraph_BP_Avatar_Panther::K2Node_Event_Race' has a wrong offset!");

// Function BP_Avatar_Panther.BP_Avatar_Panther_C.OnUpdateAvatarDataMesh
// 0x0002 (0x0002 - 0x0000)
struct BP_Avatar_Panther_C_OnUpdateAvatarDataMesh final
{
public:
	ETgfActorGender                               Gender;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfActorRace                                 Race;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Avatar_Panther_C_OnUpdateAvatarDataMesh) == 0x000001, "Wrong alignment on BP_Avatar_Panther_C_OnUpdateAvatarDataMesh");
static_assert(sizeof(BP_Avatar_Panther_C_OnUpdateAvatarDataMesh) == 0x000002, "Wrong size on BP_Avatar_Panther_C_OnUpdateAvatarDataMesh");
static_assert(offsetof(BP_Avatar_Panther_C_OnUpdateAvatarDataMesh, Gender) == 0x000000, "Member 'BP_Avatar_Panther_C_OnUpdateAvatarDataMesh::Gender' has a wrong offset!");
static_assert(offsetof(BP_Avatar_Panther_C_OnUpdateAvatarDataMesh, Race) == 0x000001, "Member 'BP_Avatar_Panther_C_OnUpdateAvatarDataMesh::Race' has a wrong offset!");

}

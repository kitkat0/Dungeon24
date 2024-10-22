#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FActorSpawn

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FActorSpawn.FActorSpawn
// 0x0030 (0x0030 - 0x0000)
struct FFActorSpawn final
{
public:
	double                                        Chance_2_B9DCE6DF4C3CD7DDEF7263B40A58F9A5;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Actor_22_4867CB284B198A307A1C14AFA61902C8;         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemID_25_E3F6AB0648DF5B9CB7E39C8F8F3DEE38;        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RollOffset_34_4BD7BBC34A519FFA186E118A8CCFBBF6;    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PitchOffset_35_2512003B4A573813A93D008E4D767DEE;   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        YawOffset_28_9B076339410EDBC0F849B5B14ADA4A07;     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFActorSpawn) == 0x000008, "Wrong alignment on FFActorSpawn");
static_assert(sizeof(FFActorSpawn) == 0x000030, "Wrong size on FFActorSpawn");
static_assert(offsetof(FFActorSpawn, Chance_2_B9DCE6DF4C3CD7DDEF7263B40A58F9A5) == 0x000000, "Member 'FFActorSpawn::Chance_2_B9DCE6DF4C3CD7DDEF7263B40A58F9A5' has a wrong offset!");
static_assert(offsetof(FFActorSpawn, Actor_22_4867CB284B198A307A1C14AFA61902C8) == 0x000008, "Member 'FFActorSpawn::Actor_22_4867CB284B198A307A1C14AFA61902C8' has a wrong offset!");
static_assert(offsetof(FFActorSpawn, ItemID_25_E3F6AB0648DF5B9CB7E39C8F8F3DEE38) == 0x000010, "Member 'FFActorSpawn::ItemID_25_E3F6AB0648DF5B9CB7E39C8F8F3DEE38' has a wrong offset!");
static_assert(offsetof(FFActorSpawn, RollOffset_34_4BD7BBC34A519FFA186E118A8CCFBBF6) == 0x000018, "Member 'FFActorSpawn::RollOffset_34_4BD7BBC34A519FFA186E118A8CCFBBF6' has a wrong offset!");
static_assert(offsetof(FFActorSpawn, PitchOffset_35_2512003B4A573813A93D008E4D767DEE) == 0x000020, "Member 'FFActorSpawn::PitchOffset_35_2512003B4A573813A93D008E4D767DEE' has a wrong offset!");
static_assert(offsetof(FFActorSpawn, YawOffset_28_9B076339410EDBC0F849B5B14ADA4A07) == 0x000028, "Member 'FFActorSpawn::YawOffset_28_9B076339410EDBC0F849B5B14ADA4A07' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_PretreatDisplayMarkPointInfo

#include "Basic.hpp"

#include "LyraGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_PretreatDisplayMarkPointInfo.S_PretreatDisplayMarkPointInfo
// 0x0040 (0x0040 - 0x0000)
struct FS_PretreatDisplayMarkPointInfo final
{
public:
	class AActor*                                 OwnerActor_2_2F9F3A704245B1EDA6A4BA85C4C2BCA5;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	ETgfIntraGameDisplayInfoType                  DisplayInfoType_13_766700DD43A3BA17C9A4FAA6D7CBB2B0; // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         DisplaySubType_14_61B0900C408A8EB43601AC9858184E11; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayAgingType                          DisplayAgingType_15_4876371742A548E38AF71DBD37E20A8E; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location_16_5BB2A9344A0A06E1023CED97BD19F1EE;      // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MarkType_17_1BA4FFE8484085D48BBE4F89EDD65560;      // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_PretreatDisplayMarkPointInfo) == 0x000008, "Wrong alignment on FS_PretreatDisplayMarkPointInfo");
static_assert(sizeof(FS_PretreatDisplayMarkPointInfo) == 0x000040, "Wrong size on FS_PretreatDisplayMarkPointInfo");
static_assert(offsetof(FS_PretreatDisplayMarkPointInfo, OwnerActor_2_2F9F3A704245B1EDA6A4BA85C4C2BCA5) == 0x000000, "Member 'FS_PretreatDisplayMarkPointInfo::OwnerActor_2_2F9F3A704245B1EDA6A4BA85C4C2BCA5' has a wrong offset!");
static_assert(offsetof(FS_PretreatDisplayMarkPointInfo, DisplayInfoType_13_766700DD43A3BA17C9A4FAA6D7CBB2B0) == 0x000008, "Member 'FS_PretreatDisplayMarkPointInfo::DisplayInfoType_13_766700DD43A3BA17C9A4FAA6D7CBB2B0' has a wrong offset!");
static_assert(offsetof(FS_PretreatDisplayMarkPointInfo, DisplaySubType_14_61B0900C408A8EB43601AC9858184E11) == 0x000010, "Member 'FS_PretreatDisplayMarkPointInfo::DisplaySubType_14_61B0900C408A8EB43601AC9858184E11' has a wrong offset!");
static_assert(offsetof(FS_PretreatDisplayMarkPointInfo, DisplayAgingType_15_4876371742A548E38AF71DBD37E20A8E) == 0x000018, "Member 'FS_PretreatDisplayMarkPointInfo::DisplayAgingType_15_4876371742A548E38AF71DBD37E20A8E' has a wrong offset!");
static_assert(offsetof(FS_PretreatDisplayMarkPointInfo, Location_16_5BB2A9344A0A06E1023CED97BD19F1EE) == 0x000020, "Member 'FS_PretreatDisplayMarkPointInfo::Location_16_5BB2A9344A0A06E1023CED97BD19F1EE' has a wrong offset!");
static_assert(offsetof(FS_PretreatDisplayMarkPointInfo, MarkType_17_1BA4FFE8484085D48BBE4F89EDD65560) == 0x000038, "Member 'FS_PretreatDisplayMarkPointInfo::MarkType_17_1BA4FFE8484085D48BBE4F89EDD65560' has a wrong offset!");

}

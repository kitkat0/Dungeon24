#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_DisplayPortalInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_DisplayPortalInfo.S_DisplayPortalInfo
// 0x0070 (0x0070 - 0x0000)
struct FS_DisplayPortalInfo final
{
public:
	int32                                         PortalCnt_21_870D0E9D41845420CE4B5CB37CD5CC38;     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location_6_CACC1B6F414FEB627A3C8786DDDB023C;       // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfIntraGameDisplayInfoType                  DisplayInfoType_17_E64288DB4FF7FDA04073789A726ACB68; // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         DisplaySubType_20_953ADDB348C5A5040BFC7E805F7C8E3D; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayAgingType                          DisplayAgingType_24_BF4E28E2484EF4B82A7BC684B7A4355D; // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerNameData                        EnterPlayerNameData_35_454B59784B5B5C213CE980B16E729FC2; // 0x0038(0x0030)(Edit, BlueprintVisible)
	ETgfPlayerSceneTag                            SceneTag_38_E7D151F5499B531AC746E99AB9757C26;      // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InPortalTag_41_9F2C1A164FDEE00371109998FD9D485B;   // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_DisplayPortalInfo) == 0x000008, "Wrong alignment on FS_DisplayPortalInfo");
static_assert(sizeof(FS_DisplayPortalInfo) == 0x000070, "Wrong size on FS_DisplayPortalInfo");
static_assert(offsetof(FS_DisplayPortalInfo, PortalCnt_21_870D0E9D41845420CE4B5CB37CD5CC38) == 0x000000, "Member 'FS_DisplayPortalInfo::PortalCnt_21_870D0E9D41845420CE4B5CB37CD5CC38' has a wrong offset!");
static_assert(offsetof(FS_DisplayPortalInfo, Location_6_CACC1B6F414FEB627A3C8786DDDB023C) == 0x000008, "Member 'FS_DisplayPortalInfo::Location_6_CACC1B6F414FEB627A3C8786DDDB023C' has a wrong offset!");
static_assert(offsetof(FS_DisplayPortalInfo, DisplayInfoType_17_E64288DB4FF7FDA04073789A726ACB68) == 0x000020, "Member 'FS_DisplayPortalInfo::DisplayInfoType_17_E64288DB4FF7FDA04073789A726ACB68' has a wrong offset!");
static_assert(offsetof(FS_DisplayPortalInfo, DisplaySubType_20_953ADDB348C5A5040BFC7E805F7C8E3D) == 0x000028, "Member 'FS_DisplayPortalInfo::DisplaySubType_20_953ADDB348C5A5040BFC7E805F7C8E3D' has a wrong offset!");
static_assert(offsetof(FS_DisplayPortalInfo, DisplayAgingType_24_BF4E28E2484EF4B82A7BC684B7A4355D) == 0x000030, "Member 'FS_DisplayPortalInfo::DisplayAgingType_24_BF4E28E2484EF4B82A7BC684B7A4355D' has a wrong offset!");
static_assert(offsetof(FS_DisplayPortalInfo, EnterPlayerNameData_35_454B59784B5B5C213CE980B16E729FC2) == 0x000038, "Member 'FS_DisplayPortalInfo::EnterPlayerNameData_35_454B59784B5B5C213CE980B16E729FC2' has a wrong offset!");
static_assert(offsetof(FS_DisplayPortalInfo, SceneTag_38_E7D151F5499B531AC746E99AB9757C26) == 0x000068, "Member 'FS_DisplayPortalInfo::SceneTag_38_E7D151F5499B531AC746E99AB9757C26' has a wrong offset!");
static_assert(offsetof(FS_DisplayPortalInfo, InPortalTag_41_9F2C1A164FDEE00371109998FD9D485B) == 0x00006C, "Member 'FS_DisplayPortalInfo::InPortalTag_41_9F2C1A164FDEE00371109998FD9D485B' has a wrong offset!");

}


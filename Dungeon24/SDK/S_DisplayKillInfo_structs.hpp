#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_DisplayKillInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "LyraGame_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_DisplayKillInfo.S_DisplayKillInfo
// 0x00F0 (0x00F0 - 0x0000)
struct FS_DisplayKillInfo final
{
public:
	struct FVector                                Location_12_A96361534D537C64A0DD07B29BF522E6;      // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfIntraGameDisplayInfoType                  DisplayInfoType_15_A781573A48A5D951B131F58F5B5100DD; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         DisplaySubType_17_97933DC64454891ED9DDB8ADB949D6F3; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayAgingType                          DisplayAgingType_18_001D49B74A8F386BF8C009BB7C6D223F; // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipSubType                              AttackWeaponType_31_EDF8CCFD427FEB0B15A755A987F616B2; // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfEquipQuality                              WeaponQuality_32_1C5A229A43AE94D6FE19558DC97BD7D1; // 0x002A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        KillerHealthPercent_35_2C9E112B498112A77E55B29DF3B751B0; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKillereNameMultiLang_41_7DAE37D3487F05FE61CDC0AD416CA89D; // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDeadNameMultiLang_39_B2102EE640C78465619D4C9BACD3A47D; // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerNameData                        KillerNameData_46_215AF2DB48495983FBED6AA897F25740; // 0x0040(0x0030)(Edit, BlueprintVisible)
	struct FPlayerNameData                        DeadNameData_47_B3980EDE453C8ED5C97F0E9942DB5942;  // 0x0070(0x0030)(Edit, BlueprintVisible)
	class UObject*                                KillObj_52_F9D5008C439C96066B46499F9849480F;       // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                DeadObj_53_1E5C5989492E3B5CDE1EFB94A9F6F218;       // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETgfPlayerSceneTag                            SceneTag_56_D29DAEC64C35C002D252299C7FD3A9AB;      // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKillerSummonNameLultiLang_58_9F935A32430D277CEFEF5A92F998814F; // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerNameData                        KillerSummonNameData_61_874F0369423FE2682D385BA57F4BD790; // 0x00B8(0x0030)(Edit, BlueprintVisible)
	ETgfPVPTeamColor                              KillerTeamColor_66_BB9EE10F49E4B8F9A6279A9834D2BE99; // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfPVPTeamColor                              DeadTeamColor_67_7DC7EBE546AA4ED64E9E39A412F8A330; // 0x00E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_DisplayKillInfo) == 0x000008, "Wrong alignment on FS_DisplayKillInfo");
static_assert(sizeof(FS_DisplayKillInfo) == 0x0000F0, "Wrong size on FS_DisplayKillInfo");
static_assert(offsetof(FS_DisplayKillInfo, Location_12_A96361534D537C64A0DD07B29BF522E6) == 0x000000, "Member 'FS_DisplayKillInfo::Location_12_A96361534D537C64A0DD07B29BF522E6' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, DisplayInfoType_15_A781573A48A5D951B131F58F5B5100DD) == 0x000018, "Member 'FS_DisplayKillInfo::DisplayInfoType_15_A781573A48A5D951B131F58F5B5100DD' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, DisplaySubType_17_97933DC64454891ED9DDB8ADB949D6F3) == 0x000020, "Member 'FS_DisplayKillInfo::DisplaySubType_17_97933DC64454891ED9DDB8ADB949D6F3' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, DisplayAgingType_18_001D49B74A8F386BF8C009BB7C6D223F) == 0x000028, "Member 'FS_DisplayKillInfo::DisplayAgingType_18_001D49B74A8F386BF8C009BB7C6D223F' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, AttackWeaponType_31_EDF8CCFD427FEB0B15A755A987F616B2) == 0x000029, "Member 'FS_DisplayKillInfo::AttackWeaponType_31_EDF8CCFD427FEB0B15A755A987F616B2' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, WeaponQuality_32_1C5A229A43AE94D6FE19558DC97BD7D1) == 0x00002A, "Member 'FS_DisplayKillInfo::WeaponQuality_32_1C5A229A43AE94D6FE19558DC97BD7D1' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, KillerHealthPercent_35_2C9E112B498112A77E55B29DF3B751B0) == 0x000030, "Member 'FS_DisplayKillInfo::KillerHealthPercent_35_2C9E112B498112A77E55B29DF3B751B0' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, IsKillereNameMultiLang_41_7DAE37D3487F05FE61CDC0AD416CA89D) == 0x000038, "Member 'FS_DisplayKillInfo::IsKillereNameMultiLang_41_7DAE37D3487F05FE61CDC0AD416CA89D' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, IsDeadNameMultiLang_39_B2102EE640C78465619D4C9BACD3A47D) == 0x000039, "Member 'FS_DisplayKillInfo::IsDeadNameMultiLang_39_B2102EE640C78465619D4C9BACD3A47D' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, KillerNameData_46_215AF2DB48495983FBED6AA897F25740) == 0x000040, "Member 'FS_DisplayKillInfo::KillerNameData_46_215AF2DB48495983FBED6AA897F25740' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, DeadNameData_47_B3980EDE453C8ED5C97F0E9942DB5942) == 0x000070, "Member 'FS_DisplayKillInfo::DeadNameData_47_B3980EDE453C8ED5C97F0E9942DB5942' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, KillObj_52_F9D5008C439C96066B46499F9849480F) == 0x0000A0, "Member 'FS_DisplayKillInfo::KillObj_52_F9D5008C439C96066B46499F9849480F' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, DeadObj_53_1E5C5989492E3B5CDE1EFB94A9F6F218) == 0x0000A8, "Member 'FS_DisplayKillInfo::DeadObj_53_1E5C5989492E3B5CDE1EFB94A9F6F218' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, SceneTag_56_D29DAEC64C35C002D252299C7FD3A9AB) == 0x0000B0, "Member 'FS_DisplayKillInfo::SceneTag_56_D29DAEC64C35C002D252299C7FD3A9AB' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, IsKillerSummonNameLultiLang_58_9F935A32430D277CEFEF5A92F998814F) == 0x0000B1, "Member 'FS_DisplayKillInfo::IsKillerSummonNameLultiLang_58_9F935A32430D277CEFEF5A92F998814F' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, KillerSummonNameData_61_874F0369423FE2682D385BA57F4BD790) == 0x0000B8, "Member 'FS_DisplayKillInfo::KillerSummonNameData_61_874F0369423FE2682D385BA57F4BD790' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, KillerTeamColor_66_BB9EE10F49E4B8F9A6279A9834D2BE99) == 0x0000E8, "Member 'FS_DisplayKillInfo::KillerTeamColor_66_BB9EE10F49E4B8F9A6279A9834D2BE99' has a wrong offset!");
static_assert(offsetof(FS_DisplayKillInfo, DeadTeamColor_67_7DC7EBE546AA4ED64E9E39A412F8A330) == 0x0000E9, "Member 'FS_DisplayKillInfo::DeadTeamColor_67_7DC7EBE546AA4ED64E9E39A412F8A330' has a wrong offset!");

}


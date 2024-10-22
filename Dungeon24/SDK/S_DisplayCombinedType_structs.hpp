#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_DisplayCombinedType

#include "Basic.hpp"

#include "LyraGame_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_DisplayCombinedType.S_DisplayCombinedType
// 0x0010 (0x0010 - 0x0000)
struct FS_DisplayCombinedType final
{
public:
	ETgfIntraGameDisplayInfoType                  MainType_4_E970129A4811AE074DB08D823614AFA7;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayInfoPortalSubType                  PortalSubType_10_7C98081B4BEA57D8311B9DB4CD931C51; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayInfoKillSubType                    KillSubType_11_008CF098463DE411BB2FFAB841674BD6;   // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayInfoDropSubType                    DropSubType_12_95906B844DCED12D9431A0906C3E2C1A;   // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayInfoCharaSubType                   CharaSubType_15_B18C8704418418B8DADCCF876E192B02;  // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayInfoAbilitySubType                 AbilitySubType_18_00B230484EE759F2E17B9CBAFD412772; // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ExtraIndex_21_B009720B48693A7D217FB995C6D1F2F3;    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETgfDisplayInfoStateTagSubType                StateTagSubType_24_1F099BAE404CD8A0112AF9917E0AA4EC; // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_DisplayCombinedType) == 0x000004, "Wrong alignment on FS_DisplayCombinedType");
static_assert(sizeof(FS_DisplayCombinedType) == 0x000010, "Wrong size on FS_DisplayCombinedType");
static_assert(offsetof(FS_DisplayCombinedType, MainType_4_E970129A4811AE074DB08D823614AFA7) == 0x000000, "Member 'FS_DisplayCombinedType::MainType_4_E970129A4811AE074DB08D823614AFA7' has a wrong offset!");
static_assert(offsetof(FS_DisplayCombinedType, PortalSubType_10_7C98081B4BEA57D8311B9DB4CD931C51) == 0x000001, "Member 'FS_DisplayCombinedType::PortalSubType_10_7C98081B4BEA57D8311B9DB4CD931C51' has a wrong offset!");
static_assert(offsetof(FS_DisplayCombinedType, KillSubType_11_008CF098463DE411BB2FFAB841674BD6) == 0x000002, "Member 'FS_DisplayCombinedType::KillSubType_11_008CF098463DE411BB2FFAB841674BD6' has a wrong offset!");
static_assert(offsetof(FS_DisplayCombinedType, DropSubType_12_95906B844DCED12D9431A0906C3E2C1A) == 0x000003, "Member 'FS_DisplayCombinedType::DropSubType_12_95906B844DCED12D9431A0906C3E2C1A' has a wrong offset!");
static_assert(offsetof(FS_DisplayCombinedType, CharaSubType_15_B18C8704418418B8DADCCF876E192B02) == 0x000004, "Member 'FS_DisplayCombinedType::CharaSubType_15_B18C8704418418B8DADCCF876E192B02' has a wrong offset!");
static_assert(offsetof(FS_DisplayCombinedType, AbilitySubType_18_00B230484EE759F2E17B9CBAFD412772) == 0x000005, "Member 'FS_DisplayCombinedType::AbilitySubType_18_00B230484EE759F2E17B9CBAFD412772' has a wrong offset!");
static_assert(offsetof(FS_DisplayCombinedType, ExtraIndex_21_B009720B48693A7D217FB995C6D1F2F3) == 0x000008, "Member 'FS_DisplayCombinedType::ExtraIndex_21_B009720B48693A7D217FB995C6D1F2F3' has a wrong offset!");
static_assert(offsetof(FS_DisplayCombinedType, StateTagSubType_24_1F099BAE404CD8A0112AF9917E0AA4EC) == 0x00000C, "Member 'FS_DisplayCombinedType::StateTagSubType_24_1F099BAE404CD8A0112AF9917E0AA4EC' has a wrong offset!");

}


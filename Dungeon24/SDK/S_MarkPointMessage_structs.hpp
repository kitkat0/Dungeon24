#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_MarkPointMessage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_MarkPointMessage.S_MarkPointMessage
// 0x0028 (0x0028 - 0x0000)
struct FS_MarkPointMessage final
{
public:
	class AActor*                                 OwnerActor_2_4F80FEF848230835CDF85BAE6F765625;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location_5_C9FB588F4FC09692803FD8A57D6E81E7;       // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDangerType_8_6E678A1048A21BBCDFBFFDA7986D4FE1;   // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_MarkPointMessage) == 0x000008, "Wrong alignment on FS_MarkPointMessage");
static_assert(sizeof(FS_MarkPointMessage) == 0x000028, "Wrong size on FS_MarkPointMessage");
static_assert(offsetof(FS_MarkPointMessage, OwnerActor_2_4F80FEF848230835CDF85BAE6F765625) == 0x000000, "Member 'FS_MarkPointMessage::OwnerActor_2_4F80FEF848230835CDF85BAE6F765625' has a wrong offset!");
static_assert(offsetof(FS_MarkPointMessage, Location_5_C9FB588F4FC09692803FD8A57D6E81E7) == 0x000008, "Member 'FS_MarkPointMessage::Location_5_C9FB588F4FC09692803FD8A57D6E81E7' has a wrong offset!");
static_assert(offsetof(FS_MarkPointMessage, IsDangerType_8_6E678A1048A21BBCDFBFFDA7986D4FE1) == 0x000020, "Member 'FS_MarkPointMessage::IsDangerType_8_6E678A1048A21BBCDFBFFDA7986D4FE1' has a wrong offset!");

}


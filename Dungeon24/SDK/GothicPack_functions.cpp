#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GothicPack

#include "Basic.hpp"

#include "GothicPack_classes.hpp"
#include "GothicPack_parameters.hpp"


namespace SDK
{

// Function GothicPack.GothicPackBPLibrary.GothicPackSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Param                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGothicPackBPLibrary::GothicPackSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GothicPackBPLibrary", "GothicPackSampleFunction");

	Params::GothicPackBPLibrary_GothicPackSampleFunction Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GothicPack.ProceduralSpline.PostConstruction
// (Native, Public, BlueprintCallable)

void AProceduralSpline::PostConstruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProceduralSpline", "PostConstruction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}


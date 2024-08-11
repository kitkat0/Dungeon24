#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DatasmithContent

#include "Basic.hpp"

#include "DatasmithContent_classes.hpp"
#include "DatasmithContent_parameters.hpp"


namespace SDK
{

// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*                   SequenceToPlay                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADatasmithImportedSequencesActor::PlayLevelSequence(class ULevelSequence* SequenceToPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DatasmithImportedSequencesActor", "PlayLevelSequence");

	Params::DatasmithImportedSequencesActor_PlayLevelSequence Parms{};

	Parms.SequenceToPlay = SequenceToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          Object                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDatasmithAssetUserData*          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserData");

	Params::DatasmithContentBlueprintLibrary_GetDatasmithUserData Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          Object                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           StringToMatch                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                     OutKeys                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>                   OutValues                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataKeysAndValuesForValue");

	Params::DatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue Parms{};

	Parms.Object = Object;
	Parms.StringToMatch = std::move(StringToMatch);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutKeys != nullptr)
		*OutKeys = std::move(Parms.OutKeys);

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          Object                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             Key                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bPartialMatchKey                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(class UObject* Object, class FName Key, bool bPartialMatchKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataValueForKey");

	Params::DatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.bPartialMatchKey = bPartialMatchKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          Object                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             Key                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bPartialMatchKey                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValuesForKey(class UObject* Object, class FName Key, bool bPartialMatchKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataValuesForKey");

	Params::DatasmithContentBlueprintLibrary_GetDatasmithUserDataValuesForKey Parms{};

	Parms.Object = Object;
	Parms.Key = Key;
	Parms.bPartialMatchKey = bPartialMatchKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


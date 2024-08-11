#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UnLua

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Class UnLua.UnLuaFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UUnLuaFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static int64 GetFileLastModifiedTimestamp(const class FString& Path);
	static class FString GetScriptRootPath();
	static void HotReload();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UnLuaFunctionLibrary">();
	}
	static class UUnLuaFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUnLuaFunctionLibrary>();
	}
};
static_assert(alignof(UUnLuaFunctionLibrary) == 0x000008, "Wrong alignment on UUnLuaFunctionLibrary");
static_assert(sizeof(UUnLuaFunctionLibrary) == 0x000028, "Wrong size on UUnLuaFunctionLibrary");

// Class UnLua.LuaDelegateHandler
// 0x0020 (0x0048 - 0x0028)
class ULuaDelegateHandler final : public UObject
{
public:
	uint8                                         Pad_28[0x20];                                      // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Dummy();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuaDelegateHandler">();
	}
	static class ULuaDelegateHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuaDelegateHandler>();
	}
};
static_assert(alignof(ULuaDelegateHandler) == 0x000008, "Wrong alignment on ULuaDelegateHandler");
static_assert(sizeof(ULuaDelegateHandler) == 0x000048, "Wrong size on ULuaDelegateHandler");

// Class UnLua.LuaEnvLocator
// 0x0010 (0x0038 - 0x0028)
class ULuaEnvLocator : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuaEnvLocator">();
	}
	static class ULuaEnvLocator* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuaEnvLocator>();
	}
};
static_assert(alignof(ULuaEnvLocator) == 0x000008, "Wrong alignment on ULuaEnvLocator");
static_assert(sizeof(ULuaEnvLocator) == 0x000038, "Wrong size on ULuaEnvLocator");

// Class UnLua.LuaEnvLocator_ByGameInstance
// 0x0050 (0x0088 - 0x0038)
class ULuaEnvLocator_ByGameInstance final : public ULuaEnvLocator
{
public:
	uint8                                         Pad_38[0x50];                                      // 0x0038(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuaEnvLocator_ByGameInstance">();
	}
	static class ULuaEnvLocator_ByGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuaEnvLocator_ByGameInstance>();
	}
};
static_assert(alignof(ULuaEnvLocator_ByGameInstance) == 0x000008, "Wrong alignment on ULuaEnvLocator_ByGameInstance");
static_assert(sizeof(ULuaEnvLocator_ByGameInstance) == 0x000088, "Wrong size on ULuaEnvLocator_ByGameInstance");

// Class UnLua.LuaFunction
// 0x0028 (0x0108 - 0x00E0)
class ULuaFunction final : public UFunction
{
public:
	uint8                                         Pad_E0[0x8];                                       // 0x00E0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UFunction*                              Overridden;                                        // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_F0[0x18];                                      // 0x00F0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuaFunction">();
	}
	static class ULuaFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuaFunction>();
	}
};
static_assert(alignof(ULuaFunction) == 0x000008, "Wrong alignment on ULuaFunction");
static_assert(sizeof(ULuaFunction) == 0x000108, "Wrong size on ULuaFunction");
static_assert(offsetof(ULuaFunction, Overridden) == 0x0000E8, "Member 'ULuaFunction::Overridden' has a wrong offset!");

// Class UnLua.LuaModuleLocator
// 0x0000 (0x0028 - 0x0028)
class ULuaModuleLocator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuaModuleLocator">();
	}
	static class ULuaModuleLocator* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuaModuleLocator>();
	}
};
static_assert(alignof(ULuaModuleLocator) == 0x000008, "Wrong alignment on ULuaModuleLocator");
static_assert(sizeof(ULuaModuleLocator) == 0x000028, "Wrong size on ULuaModuleLocator");

// Class UnLua.LuaModuleLocator_ByPackage
// 0x0050 (0x0078 - 0x0028)
class ULuaModuleLocator_ByPackage final : public ULuaModuleLocator
{
public:
	uint8                                         Pad_28[0x50];                                      // 0x0028(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuaModuleLocator_ByPackage">();
	}
	static class ULuaModuleLocator_ByPackage* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuaModuleLocator_ByPackage>();
	}
};
static_assert(alignof(ULuaModuleLocator_ByPackage) == 0x000008, "Wrong alignment on ULuaModuleLocator_ByPackage");
static_assert(sizeof(ULuaModuleLocator_ByPackage) == 0x000078, "Wrong size on ULuaModuleLocator_ByPackage");

// Class UnLua.LuaOverridesClass
// 0x0008 (0x0238 - 0x0230)
class ULuaOverridesClass : public UClass
{
public:
	uint8                                         Pad_230[0x8];                                      // 0x0230(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LuaOverridesClass">();
	}
	static class ULuaOverridesClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULuaOverridesClass>();
	}
};
static_assert(alignof(ULuaOverridesClass) == 0x000008, "Wrong alignment on ULuaOverridesClass");
static_assert(sizeof(ULuaOverridesClass) == 0x000238, "Wrong size on ULuaOverridesClass");

// Class UnLua.UnLuaInterface
// 0x0000 (0x0028 - 0x0028)
class IUnLuaInterface final : public IInterface
{
public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UnLuaInterface">();
	}
	static class IUnLuaInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IUnLuaInterface>();
	}
};
static_assert(alignof(IUnLuaInterface) == 0x000008, "Wrong alignment on IUnLuaInterface");
static_assert(sizeof(IUnLuaInterface) == 0x000028, "Wrong size on IUnLuaInterface");

// Class UnLua.UnLuaLatentAction
// 0x0028 (0x0050 - 0x0028)
class UUnLuaLatentAction final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InLinkage)>              Callback;                                          // 0x0030(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x8];                                       // 0x0040(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bTickEvenWhenPaused : 1;                           // 0x0048(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool GetTickableWhenPaused();
	void OnLegacyCallback(int32 InLinkage);
	void SetTickableWhenPaused(bool bTickableWhenPaused);

	void OnCompleted(int32 InLinkage) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UnLuaLatentAction">();
	}
	static class UUnLuaLatentAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUnLuaLatentAction>();
	}
};
static_assert(alignof(UUnLuaLatentAction) == 0x000008, "Wrong alignment on UUnLuaLatentAction");
static_assert(sizeof(UUnLuaLatentAction) == 0x000050, "Wrong size on UUnLuaLatentAction");
static_assert(offsetof(UUnLuaLatentAction, Callback) == 0x000030, "Member 'UUnLuaLatentAction::Callback' has a wrong offset!");

// Class UnLua.UnLuaManager
// 0x0138 (0x0160 - 0x0028)
class UUnLuaManager final : public UObject
{
public:
	uint8                                         Pad_28[0x138];                                     // 0x0028(0x0138)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void EnhancedInputActionAxis1D(float ActionValue, float ElapsedSeconds, float TriggeredSeconds);
	void EnhancedInputActionAxis2D(const struct FVector2D& ActionValue, float ElapsedSeconds, float TriggeredSeconds);
	void EnhancedInputActionAxis3D(const struct FVector& ActionValue, float ElapsedSeconds, float TriggeredSeconds);
	void EnhancedInputActionDigital(bool ActionValue, float ElapsedSeconds, float TriggeredSeconds);
	class UDynamicBlueprintBinding* GetOrAddBindingObject(class UClass* Param_Class, class UClass* BindingClass);
	void InputAction(const struct FKey& Key);
	void InputAxis(float AxisValue);
	void InputGesture(float Value);
	void InputTouch(ETouchIndex FingerIndex, const struct FVector& Location);
	void InputVectorAxis(const struct FVector& AxisValue);
	void OnLatentActionCompleted(int32 LinkID);
	void Override(class UClass* Param_Class, class FName FunctionName, class FName LuaFunctionName);
	void TriggerAnimNotify();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UnLuaManager">();
	}
	static class UUnLuaManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUnLuaManager>();
	}
};
static_assert(alignof(UUnLuaManager) == 0x000008, "Wrong alignment on UUnLuaManager");
static_assert(sizeof(UUnLuaManager) == 0x000160, "Wrong size on UUnLuaManager");

// Class UnLua.UnLuaSettings
// 0x0038 (0x0060 - 0x0028)
class UUnLuaSettings final : public UObject
{
public:
	class FString                                 StartupModuleName;                                 // 0x0028(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DeadLoopCheck;                                     // 0x0038(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DanglingCheck;                                     // 0x003C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPrintLuaStackOnSystemError;                       // 0x003D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ULuaEnvLocator>             EnvLocatorClass;                                   // 0x0040(0x0008)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULuaModuleLocator>          ModuleLocatorClass;                                // 0x0048(0x0008)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftClassPath>                 PreBindClasses;                                    // 0x0050(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UnLuaSettings">();
	}
	static class UUnLuaSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUnLuaSettings>();
	}
};
static_assert(alignof(UUnLuaSettings) == 0x000008, "Wrong alignment on UUnLuaSettings");
static_assert(sizeof(UUnLuaSettings) == 0x000060, "Wrong size on UUnLuaSettings");
static_assert(offsetof(UUnLuaSettings, StartupModuleName) == 0x000028, "Member 'UUnLuaSettings::StartupModuleName' has a wrong offset!");
static_assert(offsetof(UUnLuaSettings, DeadLoopCheck) == 0x000038, "Member 'UUnLuaSettings::DeadLoopCheck' has a wrong offset!");
static_assert(offsetof(UUnLuaSettings, DanglingCheck) == 0x00003C, "Member 'UUnLuaSettings::DanglingCheck' has a wrong offset!");
static_assert(offsetof(UUnLuaSettings, bPrintLuaStackOnSystemError) == 0x00003D, "Member 'UUnLuaSettings::bPrintLuaStackOnSystemError' has a wrong offset!");
static_assert(offsetof(UUnLuaSettings, EnvLocatorClass) == 0x000040, "Member 'UUnLuaSettings::EnvLocatorClass' has a wrong offset!");
static_assert(offsetof(UUnLuaSettings, ModuleLocatorClass) == 0x000048, "Member 'UUnLuaSettings::ModuleLocatorClass' has a wrong offset!");
static_assert(offsetof(UUnLuaSettings, PreBindClasses) == 0x000050, "Member 'UUnLuaSettings::PreBindClasses' has a wrong offset!");

}

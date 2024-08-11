#pragma once
#include "Includes.h"

using namespace SDK;

clock_t T_AwaitTime = 0;
clock_t T_RunLogicDefault = 0;
clock_t T_ObjectUpdate = 0;

std::mutex lineOfSightMutex;

void RunLogic(float DeltaSeconds)
{
	if (IsTimerLogic(&T_AwaitTime))
		return;

	if (IsTimerLogic(&T_RunLogicDefault))
		return;

	UEngine* Engine = SDK::UEngine::GetEngine();
	if (!IsValid(Engine)) return;

	UWorld* World = SDK::UWorld::GetWorld();
	if (!IsValid(World)) return;

	UGameInstance* GameInstance = World->OwningGameInstance;
	if (!IsValid(GameInstance)) return;

	AGameStateBase* GameStateBase = World->GameState;
	if (!IsValid(GameStateBase)) return;

	ULevel* Level = World->PersistentLevel;
	if (!IsValid(Level)) return;

	SDK::ULocalPlayer* MyLocalPlayer = GameInstance->LocalPlayers[0];
	if (!IsValid(MyLocalPlayer)) return;

	SDK::APlayerController* PlayerController = MyLocalPlayer->PlayerController;
	if (!IsValid(PlayerController)) return;

	ALyraPlayerController* LyraPlayerController = static_cast<ALyraPlayerController*>(PlayerController);
	if (!IsValid(LyraPlayerController)) return;

	ULyraLocalPlayer* LyraLocalPlayer = static_cast<ULyraLocalPlayer*>(MyLocalPlayer);
	if (!IsValid(LyraLocalPlayer)) return;

	APawn* LocalPawn = LyraPlayerController->Pawn;
	if (!IsValid(LocalPawn)) return;

	APlayerCameraManager* CameraManager = PlayerController->PlayerCameraManager;
	if (!IsValid(CameraManager)) return;

	std::set<ALyraCharacter*> objectRefs;
	std::set<ALyraCharacter*> playerRefs;

	auto Actors = Level->Actors;
	if (Actors.IsValid()) {
		for (int i = 0; i < Actors.Num(); i++) {
			if (!Actors.IsValidIndex(i))
				continue;

			AActor* actor = Actors[i];
			if (!actor)
				continue;

			if (!IsValid(actor))
				continue;

			if (actor == LocalPawn) {
				continue; 
			}

			if (actor->IsA(ALyraCharacter::StaticClass())) {
				objectRefs.insert(static_cast<ALyraCharacter*>(actor));
			}
		}
	}

	for (ALyraCharacter* m_object : objectRefs) {
		if (!m_object)
			continue;

		if (!IsValid(m_object))
			continue;

		if (m_object->ActorType == ETgfActorType::TgfActorTypePlayer ||
			m_object->ActorType == ETgfActorType::TgfActorTypeBotPlayer) {
			playerRefs.insert(m_object);
		}
	}

	if (steam_keybind(VK_XBUTTON1) & 0x8001) {
		if (objectRefs.size() > 0) {
			FVector currentViewAngle = CameraManager->GetCameraLocation();
			FRotator currentViewRotator = CameraManager->GetCameraRotation();

			ALyraCharacter* closestEnemy = nullptr;
			float closestAngleDiff = FLT_MAX;
			for (auto player : playerRefs) {
				if (!player || !IsValid(player)) {
					continue;
				}

				USkeletalMeshComponent* Mesh = player->Mesh;
				if (!Mesh || !IsValid(Mesh)) {
					continue;
				}

				if (!Mesh->bVisibleInRayTracing)
					continue;

				FName headSocketName = SDK::UKismetStringLibrary::Conv_StringToName(L"Bip001-Head");
				if (!Mesh->DoesSocketExist(headSocketName))
					continue;

				FVector headPos = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(headSocketName));

				FVector2D screenPos;
				if (PlayerController->ProjectWorldLocationToScreen(headPos, &screenPos, false)) {
					FVector enemyDir = headPos - currentViewAngle;
					enemyDir.Normalize();

					float pitch = UKismetMathLibrary::DegreesToRadians(currentViewRotator.Pitch);
					float yaw = UKismetMathLibrary::DegreesToRadians(currentViewRotator.Yaw);
					FVector cameraForward;
					cameraForward.X = cos(pitch) * cos(yaw);
					cameraForward.Y = cos(pitch) * sin(yaw);
					cameraForward.Z = sin(pitch);

					float angleDiff = UKismetMathLibrary::RadiansToDegrees(acosf(cameraForward.Dot(enemyDir)));
					if (angleDiff < closestAngleDiff && angleDiff <= aimfov) {
						closestEnemy = player;
						closestAngleDiff = angleDiff;
					}
				}
			}

			if (closestEnemy && IsValid(closestEnemy)) {
				USkeletalMeshComponent* Mesh = closestEnemy->Mesh;
				if (Mesh && IsValid(Mesh)) {
					FName headSocketName = SDK::UKismetStringLibrary::Conv_StringToName(L"Bip001-Head");
					if (Mesh->DoesSocketExist(headSocketName)) {
						FVector headPos = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(headSocketName));

						FVector cameraLocation = CameraManager->GetCameraLocation();
						FRotator cameraRotator = CameraManager->GetCameraRotation();

						FRotator newRotation = UKismetMathLibrary::FindLookAtRotation(cameraLocation, headPos);
						FRotator currentRotation = cameraRotator;
						FRotator interpRotation = UKismetMathLibrary::RInterpTo(currentRotation, newRotation, DeltaSeconds, smooth_);
						PlayerController->SetControlRotation(interpRotation);
					}
				}
			}
		}
	}

}

typedef void(__fastcall* tProcessEvent)(UObject* Object, UFunction* Function, void* Parms);
tProcessEvent oProcessEvent = nullptr;

struct FunctionCallInfo {
	std::chrono::steady_clock::time_point lastCallTime;
	int callCount;
};

std::unordered_map<std::string, FunctionCallInfo> functionCallMap;
const int FREQUENT_CALL_THRESHOLD = 100;
const int FREQUENT_LOG_INTERVAL_MS = 180000;
const int NORMAL_LOG_INTERVAL_MS = 0;
const size_t MAX_LOG_ENTRIES = 10000;

std::string ptrToHexString(DWORD64 ptr) {
	std::stringstream ss;
	ss << "0x" << std::hex << ptr;
	return ss.str();
}

void HookedProcessEvent(UObject* Object, UFunction* Function, void* Parms)
{
#ifdef LOGGING
	__try {
		if (!Function) {
			return oProcessEvent(Object, Function, Parms);
		}

		std::string FunctionName = Function->GetFullName();
		auto now = std::chrono::steady_clock::now();

		auto& callInfo = functionCallMap[FunctionName];
		callInfo.callCount++;

		int logInterval = (callInfo.callCount > FREQUENT_CALL_THRESHOLD) ? FREQUENT_LOG_INTERVAL_MS : NORMAL_LOG_INTERVAL_MS;

		if (std::chrono::duration_cast<std::chrono::milliseconds>(now - callInfo.lastCallTime).count() >= logInterval) {
			std::string ObjectName = Object ? Object->GetName() : "None";
			if (ObjectName.find("mon_C_") != std::string::npos)
				return oProcessEvent(Object, Function, Parms);

			auto in_time_t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
			std::tm bt = *std::localtime(&in_time_t);

			std::cout << std::endl;
			std::cout << "┌─────────────────────────────────────────────────────────────────────────" << std::endl;
			std::cout << "│ Time:       " << std::put_time(&bt, "%Y-%m-%d %H:%M:%S") << "                                              " << std::endl;
			std::cout << "├─────────────────────────────────────────────────────────────────────────" << std::endl;
			std::cout << "│ Object:     " << std::setw(56) << std::left << ObjectName << std::endl;
			std::cout << "│ Function:   " << std::setw(56) << std::left << FunctionName << std::endl;
			std::cout << "│ Call Count: " << std::setw(56) << std::left << callInfo.callCount << std::endl;
			std::cout << "└─────────────────────────────────────────────────────────────────────────" << std::endl;
			std::cout << std::endl;

			callInfo.lastCallTime = now;
		}

		if (functionCallMap.size() > MAX_LOG_ENTRIES) {
			functionCallMap.clear();
		}

		return oProcessEvent(Object, Function, Parms);
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		SEH_LOG_ERROR("Exception Occurred in ProcessEvent");
		std::cout << "Exception Occurred in ProcessEvent" << std::endl;
	}
#endif

	return oProcessEvent(Object, Function, Parms);
}

typedef void(__fastcall* tUWorld_Tick)(UWorld*, unsigned int, float);
tUWorld_Tick oUWorld_Tick = nullptr;

void Hooked_UWorld_Tick(UWorld* __this, unsigned int ELevelTick, float DeltaSeconds) {
	static bool bFirst = true;
	if (bFirst) {
		bFirst = false;
		std::cout << "Waiting Initialize Logic" << std::endl;
		TimerLogic(&T_RunLogicDefault, 1000);
	}

	__try {
		RunLogic(DeltaSeconds);
		TimerLogic(&T_RunLogicDefault, 5);
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		SEH_LOG_ERROR("Exception Occurred in UWorld::Tick");
		TimerLogic(&T_RunLogicDefault, 1000);
	}


	return oUWorld_Tick(__this, ELevelTick, DeltaSeconds);
}

uintptr_t findPatternInMemory(std::string moduleName, const std::string& pattern) {
	std::vector<BYTE> patternBytes = patternToBytes(pattern.c_str());

	MEMORY_BASIC_INFORMATION mbi;
	uintptr_t address = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)); 

	while (VirtualQuery(reinterpret_cast<LPCVOID>(address), &mbi, sizeof(mbi))) {
		if (mbi.State == MEM_COMMIT && (mbi.Protect & PAGE_GUARD) == 0) {
			uintptr_t result = findPattern(moduleName.c_str(), pattern.c_str()); 
			if (result != 0) {
				return result;
			}
		}
		address = reinterpret_cast<uintptr_t>(mbi.BaseAddress) + mbi.RegionSize;
	}

	return 0; 
}

void Detour64Hook()
{
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, GetCurrentProcessId());
	if (hSnapshot == INVALID_HANDLE_VALUE) {
		std::cerr << "CreateToolhelp32Snapshot failed" << std::endl;
		return;
	}

	MODULEENTRY32 moduleEntry;
	moduleEntry.dwSize = sizeof(MODULEENTRY32);

	char processName[MAX_PATH];
	if (Module32First(hSnapshot, &moduleEntry)) {
		wcstombs(processName, moduleEntry.szModule, MAX_PATH);
	}
	else {
		std::cerr << "Module32First failed" << std::endl;
		CloseHandle(hSnapshot);
		return;
	}
	CloseHandle(hSnapshot);

	oProcessEvent = (tProcessEvent)((__int64)SDK::InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent);

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());

	DetourAttach(&(PVOID&)oProcessEvent, HookedProcessEvent);

	const char* uworld_tick_pattern = "48 8B C4 55 53 56 57 41 54 41 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 70 ? 44 8B F2";
	oUWorld_Tick = (tUWorld_Tick)findPatternInMemory(processName, uworld_tick_pattern);
	if (oUWorld_Tick) {
		std::cout << "UWorld::Tick --> 0x" << std::hex << oUWorld_Tick << std::endl;
		DetourAttach(&(PVOID&)oUWorld_Tick, Hooked_UWorld_Tick);
	}

	const char* steam_overlay_pattern = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 EC ? 41 8B E8";
	oSteam_Overlay_Present = (tSteam_Overlay_Present)findPatternInMemory("GameOverlayRenderer64.dll", steam_overlay_pattern);
	if (oSteam_Overlay_Present) {
		DetourAttach(&(PVOID&)oSteam_Overlay_Present, Hooked_Steam_Overlay_Present);
		std::cout << "Steam Overlay Renderer --> 0x" << std::hex << oSteam_Overlay_Present << std::endl;
	}

	const char* steam_keybind_pattern = "40 53 48 83 EC ? 80 3D ? ? ? ? ? 8B D9 74";
	fnGetAyncKeyStateAddr = findPatternInMemory("GameOverlayRenderer64.dll", steam_keybind_pattern);
	if (fnGetAyncKeyStateAddr) {
		std::cout << "Steam KeyBind --> 0x" << std::hex << fnGetAyncKeyStateAddr << std::endl;
	}
	DetourTransactionCommit();

	CreateThread(nullptr, 0, [](LPVOID lpThreadParameter) -> DWORD {
		// thread priority class
		SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);
		DungeonOverlay overlay;
		if (overlay.Initialize()) {
			std::cout << "Overlay Initialized" << std::endl;
			overlay.Run();
		}
		return 0;
	}, nullptr, 0, nullptr);
}

DWORD MainThread(HMODULE Module)
{
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);

	SDK::UEngine* Engine = SDK::UEngine::GetEngine();
	SDK::UWorld* World = SDK::UWorld::GetWorld();

	SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
	std::cout << Engine->ConsoleClass->GetFullName() << std::endl;
	for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
	{
		SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

		if (!Obj)
			continue;

		if (!Obj->IsDefaultObject())
			continue;

		if (Obj->IsA(SDK::APawn::StaticClass()) || Obj->HasTypeFlag(SDK::EClassCastFlags::Pawn))
		{
			std::cout << Obj->GetFullName() << "\n";
		}
	}
	SDK::ULevel* Level = World->PersistentLevel;
	SDK::TArray<SDK::AActor*>& volatile Actors = Level->Actors;

	for (SDK::AActor* Actor : Actors)
	{
		if (!Actor || !Actor->IsA(SDK::EClassCastFlags::Pawn) || !Actor->IsA(SDK::APawn::StaticClass()))
			continue;

		SDK::APawn* Pawn = static_cast<SDK::APawn*>(Actor);
	}
	SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");
	SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
	Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);

	Detour64Hook();
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
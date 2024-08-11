#pragma once

#include <Windows.h>

#include <d3d11.h>
#pragma comment(lib, "d3d11.lib")

#include <dxgi.h>
#pragma comment(lib, "dxgi.lib")

#include <imgui.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_win32.h>

#include "UsingSDK.hpp"
#include "Settings.h"

#include <set>
#include <regex>

using namespace SDK;

typedef HRESULT(WINAPI* PFN_D3D11_CREATE_DEVICE)(IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT, const D3D_FEATURE_LEVEL*, UINT, UINT, ID3D11Device**, D3D_FEATURE_LEVEL*, ID3D11DeviceContext**);
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

class DungeonOverlay {
private:
	HWND m_hWnd;
	ID3D11Device* m_pd3dDevice;
	ID3D11DeviceContext* m_pd3dDeviceContext;
	IDXGISwapChain* m_pSwapChain;
	ID3D11RenderTargetView* m_mainRenderTargetView;
	bool m_isRunning;

	HMODULE m_d3d11Module;
	PFN_D3D11_CREATE_DEVICE D3D11CreateDeviceFunc;

	bool m_imguiInitialized;
	CRITICAL_SECTION m_renderLock;

	bool m_menuVisible;
	void ToggleInputPassthrough(bool passthrough);

	static LRESULT CALLBACK StaticWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	LRESULT WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

	bool CreateMainWindow();
	bool CreateDeviceD3D();
	void CreateRenderTarget();
	void CleanupDeviceD3D();
	void Render();

public:
	DungeonOverlay();
	~DungeonOverlay();

	bool InitializeImGui();
	bool Initialize();
	void Run();
	void Shutdown();
	void ToggleMenu();
};

DungeonOverlay::DungeonOverlay()
	: m_hWnd(nullptr), m_pd3dDevice(nullptr), m_pd3dDeviceContext(nullptr),
	m_pSwapChain(nullptr), m_mainRenderTargetView(nullptr), m_isRunning(true),
	m_d3d11Module(nullptr), D3D11CreateDeviceFunc(nullptr), m_imguiInitialized(false) {
	InitializeCriticalSection(&m_renderLock);
}

DungeonOverlay::~DungeonOverlay() {
	Shutdown();
	DeleteCriticalSection(&m_renderLock);
}

LRESULT CALLBACK DungeonOverlay::StaticWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	DungeonOverlay* pThis;
	if (msg == WM_NCCREATE) {
		pThis = static_cast<DungeonOverlay*>(reinterpret_cast<CREATESTRUCT*>(lParam)->lpCreateParams);
		SetWindowLongPtr(hWnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(pThis));
	}
	else {
		pThis = reinterpret_cast<DungeonOverlay*>(GetWindowLongPtr(hWnd, GWLP_USERDATA));
	}

	if (pThis) {
		return pThis->WndProc(hWnd, msg, wParam, lParam);
	}
	return DefWindowProc(hWnd, msg, wParam, lParam);
}

LRESULT DungeonOverlay::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	if (m_menuVisible && ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
		return true;

	switch (msg) {
	case WM_SYSCOMMAND:
		if ((wParam & 0xfff0) == SC_KEYMENU) 
			return 0;
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hWnd, msg, wParam, lParam);
}

bool DungeonOverlay::CreateMainWindow() {
	WNDCLASSEX wc = { 
		sizeof(WNDCLASSEX), 
		CS_CLASSDC, 
		StaticWndProc, 
		0L, 
		0L, 
		GetModuleHandle(NULL), 
		nullptr, 
		nullptr, 
		nullptr, 
		nullptr, 
		L"DungeonOverlay", 
		nullptr 
	};
	RegisterClassEx(&wc);
	m_hWnd = CreateWindowEx(
		WS_EX_TOPMOST | WS_EX_LAYERED,
		wc.lpszClassName, 
		L"DungeonOverlay", 
		WS_POPUP,
		0, 
		0, 
		GetSystemMetrics(SM_CXSCREEN), 
		GetSystemMetrics(SM_CYSCREEN), 
		nullptr, 
		nullptr, 
		wc.hInstance, 
		this);

	if (!m_hWnd) return false;

	SetLayeredWindowAttributes(m_hWnd, RGB(0, 0, 0), 255, LWA_COLORKEY);

	// Initially set the window to pass-through mouse events
	ToggleInputPassthrough(true);

	return true;
}

void DungeonOverlay::ToggleInputPassthrough(bool passthrough) {
	LONG exStyle = GetWindowLong(m_hWnd, GWL_EXSTYLE);
	if (passthrough) {
		exStyle |= WS_EX_TRANSPARENT;
	}
	else {
		exStyle &= ~WS_EX_TRANSPARENT;
	}
	SetWindowLong(m_hWnd, GWL_EXSTYLE, exStyle);
}

void DungeonOverlay::ToggleMenu() {
	m_menuVisible = !m_menuVisible;
	ToggleInputPassthrough(!m_menuVisible);
}

void DungeonOverlay::CreateRenderTarget() {
	ID3D11Texture2D* pBackBuffer;
	m_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
	m_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &m_mainRenderTargetView);
	pBackBuffer->Release();
}

void ESP() {
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

	FVector localPlayerLocation = LocalPawn->GetTransform().Translation;

	std::set<ALyraCharacter*> objectRefs;
	std::set<ALyraCharacter*> playerRefs;
	std::set<ALyraCharacter*> monsterRefs;
	std::set<ALyraCharacter*> chestRefs;

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

		if (m_object->ActorType == ETgfActorType::TgfActorTypeMonster) {
			monsterRefs.insert(m_object);
		}

		if (m_object->ActorType == ETgfActorType::TgfActorTypeChest) {
			chestRefs.insert(m_object);
		}
	}

	if (playerRefs.size() > 0) {
		for (auto player : playerRefs) {
			if (!player || !IsValid(player)) {
				continue;
			}

			USkeletalMeshComponent* Mesh = player->Mesh;
			if (!Mesh || !IsValid(Mesh)) {
				continue;
			}

			FVector2D screenPos;
			if (!PlayerController->ProjectWorldLocationToScreen(player->GetTransform().Translation, &screenPos, false)) {
				continue;
			}

			FString playerNameFString = player->GetCharacterName();
			std::string playerName = playerNameFString.ToString();

			struct BoneConnection {
				const wchar_t* boneName;
				const wchar_t* connectedBoneName;
			};

			const BoneConnection boneConnections[] = {
				{L"Bip001-Head", L"Bip001-Neck"},
				{L"Bip001-Neck", L"Bip001-L-Clavicle"},
				{L"Bip001-Neck", L"Bip001-R-Clavicle"},
				{L"Bip001-L-Clavicle", L"Bip001-L-UpperArm"},
				{L"Bip001-L-UpperArm", L"Bip001-L-Forearm"},
				{L"Bip001-L-Forearm", L"Bip001-L-Hand"},
				{L"Bip001-R-Clavicle", L"Bip001-R-UpperArm"},
				{L"Bip001-R-UpperArm", L"Bip001-R-Forearm"},
				{L"Bip001-R-Forearm", L"Bip001-R-Hand"},
				{L"Bip001-Neck", L"Bip001-Spine"},
				{L"Bip001-Spine", L"Bip001-Pelvis"},
				{L"Bip001-Pelvis", L"Bip001-L-Thigh"},
				{L"Bip001-L-Thigh", L"Bip001-L-Calf"},
				{L"Bip001-L-Calf", L"Bip001-L-Foot"},
				{L"Bip001-Pelvis", L"Bip001-R-Thigh"},
				{L"Bip001-R-Thigh", L"Bip001-R-Calf"},
				{L"Bip001-R-Calf", L"Bip001-R-Foot"}
			};

			std::vector<FVector2D> screenPoints; 
			for (const BoneConnection& connection : boneConnections) {
				FName boneName = SDK::UKismetStringLibrary::Conv_StringToName(connection.boneName);
				FName connectedBoneName = SDK::UKismetStringLibrary::Conv_StringToName(connection.connectedBoneName);

				FVector bonePos, connectedBonePos;
				FVector2D screenPos, connectedScreenPos;

				if (Mesh->DoesSocketExist(boneName) && Mesh->DoesSocketExist(connectedBoneName)) {
					bonePos = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(boneName));
					connectedBonePos = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(connectedBoneName));

					if (PlayerController->ProjectWorldLocationToScreen(bonePos, &screenPos, false) &&
						PlayerController->ProjectWorldLocationToScreen(connectedBonePos, &connectedScreenPos, false)) {
						screenPoints.push_back(screenPos);
						screenPoints.push_back(connectedScreenPos); 
					}
				}
			}

			for (size_t i = 0; i < screenPoints.size(); i += 2) {
				ImVec2 start = ImVec2(screenPoints[i].X, screenPoints[i].Y);
				ImVec2 end = ImVec2(screenPoints[i + 1].X, screenPoints[i + 1].Y);
				ImGui::GetOverlayDrawList()->AddLine(start, end, ImGui::ColorConvertFloat4ToU32(ImVec4(255, 0, 0, 255)), 1.25f);
			}

			FVector headPos = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(SDK::UKismetStringLibrary::Conv_StringToName(L"Bip001-Head")));
			FVector2D namePos, hpBarPos;
			if (PlayerController->ProjectWorldLocationToScreen(headPos, &namePos, false)) {
				namePos.Y -= 40.0f;
				const char* text = playerName.c_str();
				ImVec2 textSize = ImGui::CalcTextSize(text);
				namePos.X -= textSize.x / 2.0f; 
				ImGui::GetOverlayDrawList()->AddText(ImVec2(namePos.X, namePos.Y), ImGui::ColorConvertFloat4ToU32(ImVec4(255, 255, 255, 255)), text);

				UTgfAttributeComponent* attributeComponent = player->AttributeComponent;
				if (attributeComponent && IsValid(attributeComponent)) {
					UTgfDefendAttributeSet* Attributes = (UTgfDefendAttributeSet*)attributeComponent->GetAttributeSet(UTgfDefendAttributeSet::StaticClass());
					if (Attributes && IsValid(Attributes)) {
						float Health = Attributes->CurHealth.CurrentValue;
						float MaxHealth = Attributes->MaxHealthBase.CurrentValue * (1.f + Attributes->MaxHealthPercent.CurrentValue);

						hpBarPos = namePos; 
						hpBarPos.Y += textSize.y + 5.f; 

						ImVec2 hpBarSize = ImVec2(textSize.x, 5.0f);
						ImU32 hpBarColor = ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
						ImU32 bgBarColor = ImGui::ColorConvertFloat4ToU32(ImVec4(0.01f, 0.01f, 0.01f, 1.0f));

						ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(hpBarPos.X, hpBarPos.Y), ImVec2(hpBarPos.X + hpBarSize.x, hpBarPos.Y + hpBarSize.y), bgBarColor);

						float hpRatio = Health / MaxHealth;
						float hpBarWidth = max(1.0f, hpRatio * hpBarSize.x);
						ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(hpBarPos.X, hpBarPos.Y), ImVec2(hpBarPos.X + hpBarWidth, hpBarPos.Y + hpBarSize.y), hpBarColor);

						int HpPer = (int)(hpRatio * 100);
						std::string hpText = std::to_string(HpPer) + "%"; //"(" + std::to_string((int)Health) + "/" + std::to_string((int)MaxHealth) + ") " + std::to_string(HpPer) + "%";

						ImVec2 hpTextSize = ImGui::CalcTextSize(hpText.c_str());

						ImVec2 hpTextPos = ImVec2(hpBarPos.X + (hpBarSize.x - hpTextSize.x) / 2.0f, hpBarPos.Y + (hpBarSize.y - hpTextSize.y) / 2.0f);

						ImGui::GetOverlayDrawList()->AddText(ImVec2(hpTextPos.x, hpTextPos.y), ImGui::ColorConvertFloat4ToU32(ImVec4(255, 255, 255, 255)), hpText.c_str());
					}
				}
			}

			FVector localPlayerLocation = LocalPawn->GetTransform().Translation;
			FName leftFoot = SDK::UKismetStringLibrary::Conv_StringToName(L"Bip001-L-Foot");
			FName rightFoot = SDK::UKismetStringLibrary::Conv_StringToName(L"Bip001-R-Foot");
			if (Mesh->DoesSocketExist(leftFoot) && Mesh->DoesSocketExist(rightFoot)) {
				FVector playerLeftFootLocation = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(leftFoot));
				FVector playerRightFootLocation = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(rightFoot));
				float distance = localPlayerLocation.GetDistanceTo(playerLeftFootLocation) / 100.f;

				FVector2D screenPos1, screenPos2;

				if (PlayerController->ProjectWorldLocationToScreen(playerLeftFootLocation, &screenPos1, false) &&
					PlayerController->ProjectWorldLocationToScreen(playerRightFootLocation, &screenPos2, false)) {

					FVector2D midPoint;
					midPoint.X = (screenPos1.X + screenPos2.X) / 2.0f;
					midPoint.Y = (screenPos1.Y + screenPos2.Y) / 2.0f;

					midPoint.Y += 10.0f; 
					std::string distanceText = std::to_string(static_cast<int>(distance)) + "M";

					const char* text = distanceText.c_str();
					ImVec2 textSize = ImGui::CalcTextSize(text);
					midPoint.X -= textSize.x / 2.0f; 
					ImGui::GetOverlayDrawList()->AddText(ImVec2(midPoint.X, midPoint.Y), ImGui::ColorConvertFloat4ToU32(ImVec4(255, 255, 255, 255)), distanceText.c_str());
				}
			}
		}

		for (auto monster : monsterRefs) {
			if (monsterRefs.size() > 0) {
				for (auto monster : monsterRefs) {
					if (!monster || !IsValid(monster)) {
						continue;
					}

					USkeletalMeshComponent* Mesh = monster->Mesh;
					if (!Mesh || !IsValid(Mesh)) {
						continue;
					}

					FVector2D screenPos;
					if (!PlayerController->ProjectWorldLocationToScreen(monster->GetTransform().Translation, &screenPos, false)) {
						continue;
					}

					FString monsterNameFString = monster->GetCharacterName();
					std::string monsterName = monsterNameFString.ToString();
					
					std::regex pattern("Monster_([^_]+)_");

					std::smatch match;
					if (std::regex_search(monsterName, match, pattern)) {
						if (match.size() > 1) { 
							monsterName = match[1].str(); 
						}
					}

					struct BoneConnection {
						const wchar_t* boneName;
						const wchar_t* connectedBoneName;
					};

					const BoneConnection boneConnections[] = {
						{L"Bip001-Head", L"Bip001-Neck"},
						{L"Bip001-Neck", L"Bip001-L-Clavicle"},
						{L"Bip001-Neck", L"Bip001-R-Clavicle"},
						{L"Bip001-L-Clavicle", L"Bip001-L-UpperArm"},
						{L"Bip001-L-UpperArm", L"Bip001-L-Forearm"},
						{L"Bip001-L-Forearm", L"Bip001-L-Hand"},
						{L"Bip001-R-Clavicle", L"Bip001-R-UpperArm"},
						{L"Bip001-R-UpperArm", L"Bip001-R-Forearm"},
						{L"Bip001-R-Forearm", L"Bip001-R-Hand"},
						{L"Bip001-Neck", L"Bip001-Spine"},
						{L"Bip001-Spine", L"Bip001-Pelvis"},
						{L"Bip001-Pelvis", L"Bip001-L-Thigh"},
						{L"Bip001-L-Thigh", L"Bip001-L-Calf"},
						{L"Bip001-L-Calf", L"Bip001-L-Foot"},
						{L"Bip001-Pelvis", L"Bip001-R-Thigh"},
						{L"Bip001-R-Thigh", L"Bip001-R-Calf"},
						{L"Bip001-R-Calf", L"Bip001-R-Foot"}
					};

					std::vector<FVector2D> screenPoints;
					for (const BoneConnection& connection : boneConnections) {
						FName boneName = SDK::UKismetStringLibrary::Conv_StringToName(connection.boneName);
						FName connectedBoneName = SDK::UKismetStringLibrary::Conv_StringToName(connection.connectedBoneName);

						FVector bonePos, connectedBonePos;
						FVector2D screenPos, connectedScreenPos;

						if (Mesh->DoesSocketExist(boneName) && Mesh->DoesSocketExist(connectedBoneName)) {
							bonePos = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(boneName));
							connectedBonePos = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(connectedBoneName));

							if (PlayerController->ProjectWorldLocationToScreen(bonePos, &screenPos, false) &&
								PlayerController->ProjectWorldLocationToScreen(connectedBonePos, &connectedScreenPos, false)) {
								screenPoints.push_back(screenPos);
								screenPoints.push_back(connectedScreenPos); 
							}
						}
					}

					for (size_t i = 0; i < screenPoints.size(); i += 2) {
						ImVec2 start = ImVec2(screenPoints[i].X, screenPoints[i].Y);
						ImVec2 end = ImVec2(screenPoints[i + 1].X, screenPoints[i + 1].Y);

						ImU32 lineColor = IM_COL32(63, 72, 204, 255); // R, G, B, A 순서
						ImGui::GetOverlayDrawList()->AddLine(start, end, lineColor, 1.f);
					}


					FVector headPos = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(SDK::UKismetStringLibrary::Conv_StringToName(L"Bip001-Head")));
					FVector2D namePos, hpBarPos;
					if (PlayerController->ProjectWorldLocationToScreen(headPos, &namePos, false)) {
						namePos.Y -= 40.0f;
						const char* text = monsterName.c_str();
						ImVec2 textSize = ImGui::CalcTextSize(text);
						namePos.X -= textSize.x / 2.0f; 
						ImGui::GetOverlayDrawList()->AddText(ImVec2(namePos.X, namePos.Y), ImGui::ColorConvertFloat4ToU32(ImVec4(255, 255, 255, 255)), text);
					}
				}
			}
		}
	}
}

bool DungeonOverlay::CreateDeviceD3D() {
	m_d3d11Module = GetModuleHandleW(L"d3d11.dll");
	if (!m_d3d11Module) {
		m_d3d11Module = LoadLibraryW(L"d3d11.dll");
		return false;
	}

	D3D11CreateDeviceFunc = reinterpret_cast<PFN_D3D11_CREATE_DEVICE>(
		GetProcAddress(m_d3d11Module, "D3D11CreateDevice"));
	if (!D3D11CreateDeviceFunc) {
		FreeLibrary(m_d3d11Module);
		m_d3d11Module = nullptr;
		return false;
	}

	UINT createDeviceFlags = 0;
	D3D_FEATURE_LEVEL featureLevel;
	const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };

	HRESULT hr = D3D11CreateDeviceFunc(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags,
		featureLevelArray, 2, D3D11_SDK_VERSION, &m_pd3dDevice, &featureLevel, &m_pd3dDeviceContext);
	if (FAILED(hr)) {
		return false;
	}
	IDXGIDevice* dxgiDevice = nullptr;
	IDXGIAdapter* dxgiAdapter = nullptr;
	IDXGIFactory* dxgiFactory = nullptr;

	if (FAILED(m_pd3dDevice->QueryInterface(IID_PPV_ARGS(&dxgiDevice))) ||
		FAILED(dxgiDevice->GetAdapter(&dxgiAdapter)) ||
		FAILED(dxgiAdapter->GetParent(IID_PPV_ARGS(&dxgiFactory)))) {
		if (dxgiDevice) dxgiDevice->Release();
		if (dxgiAdapter) dxgiAdapter->Release();
		if (dxgiFactory) dxgiFactory->Release();
		return false;
	}

	DXGI_SWAP_CHAIN_DESC sd;
	ZeroMemory(&sd, sizeof(sd));
	sd.BufferCount = 2;
	sd.BufferDesc.Width = 0;
	sd.BufferDesc.Height = 0;
	sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	sd.BufferDesc.RefreshRate.Numerator = 144;
	sd.BufferDesc.RefreshRate.Denominator = 1;
	sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.OutputWindow = m_hWnd;
	sd.SampleDesc.Count = 1;
	sd.SampleDesc.Quality = 0;
	sd.Windowed = TRUE;
	sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	hr = dxgiFactory->CreateSwapChain(m_pd3dDevice, &sd, &m_pSwapChain);

	dxgiDevice->Release();
	dxgiAdapter->Release();
	dxgiFactory->Release();

	if (FAILED(hr)) {
		return false;
	}

	CreateRenderTarget();
	return true;
}

void DungeonOverlay::CleanupDeviceD3D() {
	if (m_mainRenderTargetView) { m_mainRenderTargetView->Release(); m_mainRenderTargetView = nullptr; }
	if (m_pSwapChain) { m_pSwapChain->Release(); m_pSwapChain = nullptr; }
	if (m_pd3dDeviceContext) { m_pd3dDeviceContext->Release(); m_pd3dDeviceContext = nullptr; }
	if (m_pd3dDevice) { m_pd3dDevice->Release(); m_pd3dDevice = nullptr; }
	if (m_d3d11Module) {
		FreeLibrary(m_d3d11Module);
		m_d3d11Module = nullptr;
	}
}

void DungeonOverlay::Render() {
	//EnterCriticalSection(&m_renderLock);

	if (!m_imguiInitialized) {
		//LeaveCriticalSection(&m_renderLock);
		return;
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	if (m_menuVisible)
	{
		ImGuiIO& io = ImGui::GetIO();
		POINT p;
		GetCursorPos(&p);
		ScreenToClient(m_hWnd, &p);
		io.MousePos.x = static_cast<float>(p.x);
		io.MousePos.y = static_cast<float>(p.y);

		io.MouseDown[0] = (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0;

		ImGui::SetNextWindowSize({ 350, 350 });
		ImGui::Begin("refo");
		ImGui::Checkbox("aimbot", &aimbot);
		ImGui::SliderInt("aimbone", &boneidselect, 1, 3);
		ImGui::SliderFloat("fov", &aimfov, 10.f, 1000.f);
		ImGui::SliderFloat("smooth", &smooth_, 1, 100);

		ImGui::End();
	}
	if (steam_keybind(VK_F1) & 1)
	{
		Sleep(300);
		ToggleMenu();
	}
	if (aimbot)
	{
		ImGui::GetOverlayDrawList()->AddCircle(ImVec2(width / 2, height / 2), aimfov, ImGui::ColorConvertFloat4ToU32(ImVec4(255, 255, 255, 255)), 360);
	}

	ESP();

	ImGui::Begin("Dungeon Overlay", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar);
	ImGui::Text("Hello, Dungeon World!");
	ImGui::End();
	ImGui::Render();

	if (m_pd3dDevice && m_pd3dDeviceContext && m_mainRenderTargetView) {
		constexpr float clear_color[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
		m_pd3dDeviceContext->OMSetRenderTargets(1, &m_mainRenderTargetView, nullptr);
		m_pd3dDeviceContext->ClearRenderTargetView(m_mainRenderTargetView, clear_color);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

		HRESULT hr = m_pSwapChain->Present(1, 0);
		if (FAILED(hr)) {
			if (hr == DXGI_ERROR_DEVICE_REMOVED || hr == DXGI_ERROR_DEVICE_RESET) {
				CleanupDeviceD3D();
				if (CreateDeviceD3D() && InitializeImGui()) {
					// Successfully recreated the device
				}
				else {
					m_isRunning = false;
				}
			}
		}
	}

	//LeaveCriticalSection(&m_renderLock);
}

bool DungeonOverlay::InitializeImGui() {
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;

	ImGui::StyleColorsDark();

	if (!ImGui_ImplWin32_Init(m_hWnd)) {
		std::cout << "Failed to initialize ImGui Win32" << std::endl;
		return false;
	}

	if (!ImGui_ImplDX11_Init(m_pd3dDevice, m_pd3dDeviceContext)) {
		std::cout << "Failed to initialize ImGui DX11" << std::endl;
		return false;
	}

	m_imguiInitialized = true;
	return true;
}

bool DungeonOverlay::Initialize() {
	if (!CreateMainWindow())
		return false;

	if (!CreateDeviceD3D()) {
		CleanupDeviceD3D();
		UnregisterClass(L"DungeonOverlay", GetModuleHandle(NULL));
		return false;
	}

	ShowWindow(m_hWnd, SW_SHOWDEFAULT);
	UpdateWindow(m_hWnd);

	if (!InitializeImGui()) {
		CleanupDeviceD3D();
		UnregisterClass(L"DungeonOverlay", GetModuleHandle(NULL));
		return false;
	}

	return true;
}

void DungeonOverlay::Run() {
	while (m_isRunning) {
		MSG msg;
			while (PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE)) {
				TranslateMessage(&msg);
				DispatchMessage(&msg);
				if (msg.message == WM_QUIT)
					m_isRunning = false;
			}

			if (!m_isRunning)
				break;

		static std::chrono::steady_clock::time_point lastRenderTime = std::chrono::steady_clock::now();
		std::chrono::steady_clock::time_point currentTime = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsedTime = currentTime - lastRenderTime;
		if (elapsedTime.count() >= 1.0 / 60) {
			Render();
		}
	}
}

void DungeonOverlay::Shutdown() {
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	CleanupDeviceD3D();
	DestroyWindow(m_hWnd);
	UnregisterClass(L"DungeonOverlay", GetModuleHandle(NULL));
}

typedef __int64(__fastcall* tSteam_Overlay_Present)(IDXGISwapChain*, __int64, __int64);
tSteam_Overlay_Present oSteam_Overlay_Present = nullptr;

__int64 Hooked_Steam_Overlay_Present(IDXGISwapChain* swapchain, __int64 interval, __int64 flags)
{

	return oSteam_Overlay_Present(swapchain, interval, flags);
}
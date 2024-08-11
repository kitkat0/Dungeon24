#include <Windows.h>
#include <vector>
#include <iostream>
#include <TlHelp32.h>
#include <psapi.h> 
std::vector<BYTE> patternToBytes(const char* pattern) {
    std::vector<BYTE> bytes;
    const char* start = pattern;
    const char* end = pattern + strlen(pattern);

    for (const char* current = start; current < end; ++current) {
        if (*current == '?') {
            ++current;
            bytes.push_back(0x00);
        }
        else {
            bytes.push_back(static_cast<BYTE>(strtol(current, const_cast<char**>(&current), 16)));
        }
    }
    return bytes;
}

uintptr_t findPattern(const char* moduleName, const char* pattern) {
    std::vector<BYTE> bytes = patternToBytes(pattern);

    HMODULE hModule = GetModuleHandleA(moduleName);
    if (!hModule) {
        return 0;
    }

    MODULEINFO moduleInfo;
    GetModuleInformation(GetCurrentProcess(), hModule, &moduleInfo, sizeof(MODULEINFO));

    const BYTE* buffer = reinterpret_cast<const BYTE*>(moduleInfo.lpBaseOfDll);
    const uintptr_t start = reinterpret_cast<uintptr_t>(moduleInfo.lpBaseOfDll);
    const uintptr_t end = start + moduleInfo.SizeOfImage;

    for (uintptr_t current = start; current < end; ++current) {
        bool found = true;
        for (SIZE_T j = 0; j < bytes.size(); ++j) {
            if (bytes[j] != 0x00 && bytes[j] != buffer[current - start + j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return current;
        }
    }

    return 0;
}

uintptr_t getModuleBaseAddress(DWORD processId, const wchar_t* moduleName) {
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, processId);
    if (hSnapshot == INVALID_HANDLE_VALUE) {
        return 0;
    }

    MODULEENTRY32W moduleEntry;
    moduleEntry.dwSize = sizeof(MODULEENTRY32W);

    if (Module32FirstW(hSnapshot, &moduleEntry)) {
        do {
            if (wcscmp(moduleEntry.szModule, moduleName) == 0) {
                CloseHandle(hSnapshot);
                return reinterpret_cast<uintptr_t>(moduleEntry.modBaseAddr);
            }
        } while (Module32NextW(hSnapshot, &moduleEntry));
    }

    CloseHandle(hSnapshot);
    return 0;
}

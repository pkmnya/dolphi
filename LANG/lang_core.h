#pragma once
#include <windows.h>

enum class LangCode {
    EN = 0,
    ZH = 1,
    JA = 2,
    RU = 3
};

extern LangCode g_Lang;

inline void SaveLanguageToRegistry(LangCode lang) {
    g_Lang = lang;
    HKEY hKey;
    if (RegCreateKeyExW(HKEY_CURRENT_USER, L"Software\\Dolphi", 0, NULL, 0, KEY_WRITE, NULL, &hKey, NULL) == ERROR_SUCCESS) {
        DWORD val = (DWORD)lang;
        RegSetValueExW(hKey, L"Language", 0, REG_DWORD, (const BYTE*)&val, sizeof(val));
        RegCloseKey(hKey);
    }
}

inline void InitLanguage() {
    HKEY hKey;
    DWORD val = 0;
    DWORD type = 0;
    DWORD size = sizeof(val);
    bool loaded = false;
    if (RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Dolphi", 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS) {
        if (RegQueryValueExW(hKey, L"Language", NULL, &type, (LPBYTE)&val, &size) == ERROR_SUCCESS && type == REG_DWORD && val <= 3) {
            g_Lang = (LangCode)val;
            loaded = true;
        }
        RegCloseKey(hKey);
    }
    if (!loaded) {
        LANGID id = GetUserDefaultUILanguage();
        switch (PRIMARYLANGID(id)) {
            case LANG_CHINESE:  g_Lang = LangCode::ZH; break;
            case LANG_JAPANESE: g_Lang = LangCode::JA; break;
            case LANG_RUSSIAN:  g_Lang = LangCode::RU; break;
            default:            g_Lang = LangCode::EN; break;
        }
        SaveLanguageToRegistry(g_Lang);
    }
}


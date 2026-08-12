#include "lang_shell.h"

static const wchar_t* g_StrTable[SID_SHELL_COUNT][4] = {
    {L"Normal Pack", L"快速打包", L"高速パッケージ化", L"Быстрая упаковка"},
    {L"High Pack", L"均衡打包", L"標準パッケージ化", L"Сбалансированная упаковка"},
    {L"Ultra Pack", L"极限打包", L"最高パッケージ化", L"Максимальная упаковка"},
    {L"Custom Pack", L"自定义打包", L"カスタムパッケージ化", L"Пользовательская упаковка"},
    {L"Setting...", L"设置...", L"設定...", L"Настройки..."},
    {L"Pack to ZIP", L"打包为ZIP", L"ZIP パッケージ化", L"Упаковать в ZIP"},
    {L"Extract EXE program", L"解压EXE程序", L"EXEプログラムを展開", L"Извлечь программу EXE"}
};

const wchar_t* TR(StrIdShell id) {
    int idx = (int)id;
    if (idx < 0 || idx >= SID_SHELL_COUNT) return L"";
    int langIdx = (int)g_Lang;
    if (langIdx < 0 || langIdx > 3) langIdx = 0;
    return g_StrTable[idx][langIdx];
}

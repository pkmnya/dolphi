#pragma once
#include "lang_core.h"

enum StrIdShell {
    SID_SUB_ULTRA_FAST = 0,            // "Normal Pack" / "快速打包"
    SID_SUB_BALANCED,                  // "High Pack" / "均衡打包"
    SID_SUB_MAXIMUM,                   // "Ultra Pack" / "极限打包"
    SID_SUB_CUSTOM,                    // "Custom Pack" / "自定义打包"
    SID_SUB_SETTING,                   // "Setting..." / "设置..."
    SID_SUB_ZIPPACK,                   // "Pack to ZIP" / "打包为ZIP"
    SID_SUB_UNPACK,                    // "Extract EXE program" / "解压EXE程序"
    SID_SHELL_COUNT
};

extern const wchar_t* TR(StrIdShell id);

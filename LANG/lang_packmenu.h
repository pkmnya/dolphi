#pragma once
#include "lang_core.h"

enum StrId {
    SID_ERR_START_PACKER,
    SID_ERR_OUT_OF_MEMORY,
    SID_ERR_CREATE_WINDOW,
    SID_PACKMENU_HELP_TITLE,
    SID_PACKMENU_HELP_TEXT,
    SID_ERR_TITLE,
    SID_ERR_CREATE_LIST,
    SID_COUNT
};

extern const wchar_t* TR(StrId id);


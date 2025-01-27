#pragma once

#include "quantum.h"
#include "via.h"

#ifndef VIA_HAS_BROKEN_KEYCODES

// clang-format off

_Static_assert(KC_NO                  == 0x0000, "");
_Static_assert(KC_TRANSPARENT         == 0x0001, "");

_Static_assert(KC_A                   == 0x0004, "");
_Static_assert(KC_B                   == 0x0005, "");
_Static_assert(KC_C                   == 0x0006, "");
_Static_assert(KC_D                   == 0x0007, "");
_Static_assert(KC_E                   == 0x0008, "");
_Static_assert(KC_F                   == 0x0009, "");
_Static_assert(KC_G                   == 0x000A, "");
_Static_assert(KC_H                   == 0x000B, "");
_Static_assert(KC_I                   == 0x000C, "");
_Static_assert(KC_J                   == 0x000D, "");
_Static_assert(KC_K                   == 0x000E, "");
_Static_assert(KC_L                   == 0x000F, "");
_Static_assert(KC_M                   == 0x0010, "");
_Static_assert(KC_N                   == 0x0011, "");
_Static_assert(KC_O                   == 0x0012, "");
_Static_assert(KC_P                   == 0x0013, "");
_Static_assert(KC_Q                   == 0x0014, "");
_Static_assert(KC_R                   == 0x0015, "");
_Static_assert(KC_S                   == 0x0016, "");
_Static_assert(KC_T                   == 0x0017, "");
_Static_assert(KC_U                   == 0x0018, "");
_Static_assert(KC_V                   == 0x0019, "");
_Static_assert(KC_W                   == 0x001A, "");
_Static_assert(KC_X                   == 0x001B, "");
_Static_assert(KC_Y                   == 0x001C, "");
_Static_assert(KC_Z                   == 0x001D, "");
_Static_assert(KC_1                   == 0x001E, "");
_Static_assert(KC_2                   == 0x001F, "");
_Static_assert(KC_3                   == 0x0020, "");
_Static_assert(KC_4                   == 0x0021, "");
_Static_assert(KC_5                   == 0x0022, "");
_Static_assert(KC_6                   == 0x0023, "");
_Static_assert(KC_7                   == 0x0024, "");
_Static_assert(KC_8                   == 0x0025, "");
_Static_assert(KC_9                   == 0x0026, "");
_Static_assert(KC_0                   == 0x0027, "");
_Static_assert(KC_ENTER               == 0x0028, "");
_Static_assert(KC_ESCAPE              == 0x0029, "");
_Static_assert(KC_BACKSPACE           == 0x002A, "");
_Static_assert(KC_TAB                 == 0x002B, "");
_Static_assert(KC_SPACE               == 0x002C, "");
_Static_assert(KC_MINUS               == 0x002D, "");
_Static_assert(KC_EQUAL               == 0x002E, "");
_Static_assert(KC_LEFT_BRACKET        == 0x002F, "");
_Static_assert(KC_RIGHT_BRACKET       == 0x0030, "");
_Static_assert(KC_BACKSLASH           == 0x0031, "");
_Static_assert(KC_NONUS_HASH          == 0x0032, "");
_Static_assert(KC_SEMICOLON           == 0x0033, "");
_Static_assert(KC_QUOTE               == 0x0034, "");
_Static_assert(KC_GRAVE               == 0x0035, "");
_Static_assert(KC_COMMA               == 0x0036, "");
_Static_assert(KC_DOT                 == 0x0037, "");
_Static_assert(KC_SLASH               == 0x0038, "");
_Static_assert(KC_CAPS_LOCK           == 0x0039, "");
_Static_assert(KC_F1                  == 0x003A, "");
_Static_assert(KC_F2                  == 0x003B, "");
_Static_assert(KC_F3                  == 0x003C, "");
_Static_assert(KC_F4                  == 0x003D, "");
_Static_assert(KC_F5                  == 0x003E, "");
_Static_assert(KC_F6                  == 0x003F, "");
_Static_assert(KC_F7                  == 0x0040, "");
_Static_assert(KC_F8                  == 0x0041, "");
_Static_assert(KC_F9                  == 0x0042, "");
_Static_assert(KC_F10                 == 0x0043, "");
_Static_assert(KC_F11                 == 0x0044, "");
_Static_assert(KC_F12                 == 0x0045, "");
_Static_assert(KC_PRINT_SCREEN        == 0x0046, "");
_Static_assert(KC_SCROLL_LOCK         == 0x0047, "");
_Static_assert(KC_PAUSE               == 0x0048, "");
_Static_assert(KC_INSERT              == 0x0049, "");
_Static_assert(KC_HOME                == 0x004A, "");
_Static_assert(KC_PAGE_UP             == 0x004B, "");
_Static_assert(KC_DELETE              == 0x004C, "");
_Static_assert(KC_END                 == 0x004D, "");
_Static_assert(KC_PAGE_DOWN           == 0x004E, "");
_Static_assert(KC_RIGHT               == 0x004F, "");
_Static_assert(KC_LEFT                == 0x0050, "");
_Static_assert(KC_DOWN                == 0x0051, "");
_Static_assert(KC_UP                  == 0x0052, "");
_Static_assert(KC_NUM_LOCK            == 0x0053, "");
_Static_assert(KC_KP_SLASH            == 0x0054, "");
_Static_assert(KC_KP_ASTERISK         == 0x0055, "");
_Static_assert(KC_KP_MINUS            == 0x0056, "");
_Static_assert(KC_KP_PLUS             == 0x0057, "");
_Static_assert(KC_KP_ENTER            == 0x0058, "");
_Static_assert(KC_KP_1                == 0x0059, "");
_Static_assert(KC_KP_2                == 0x005A, "");
_Static_assert(KC_KP_3                == 0x005B, "");
_Static_assert(KC_KP_4                == 0x005C, "");
_Static_assert(KC_KP_5                == 0x005D, "");
_Static_assert(KC_KP_6                == 0x005E, "");
_Static_assert(KC_KP_7                == 0x005F, "");
_Static_assert(KC_KP_8                == 0x0060, "");
_Static_assert(KC_KP_9                == 0x0061, "");
_Static_assert(KC_KP_0                == 0x0062, "");
_Static_assert(KC_KP_DOT              == 0x0063, "");
_Static_assert(KC_NONUS_BACKSLASH     == 0x0064, "");
_Static_assert(KC_APPLICATION         == 0x0065, "");
_Static_assert(KC_KB_POWER            == 0x0066, "");
_Static_assert(KC_KP_EQUAL            == 0x0067, "");
_Static_assert(KC_F13                 == 0x0068, "");
_Static_assert(KC_F14                 == 0x0069, "");
_Static_assert(KC_F15                 == 0x006A, "");
_Static_assert(KC_F16                 == 0x006B, "");
_Static_assert(KC_F17                 == 0x006C, "");
_Static_assert(KC_F18                 == 0x006D, "");
_Static_assert(KC_F19                 == 0x006E, "");
_Static_assert(KC_F20                 == 0x006F, "");
_Static_assert(KC_F21                 == 0x0070, "");
_Static_assert(KC_F22                 == 0x0071, "");
_Static_assert(KC_F23                 == 0x0072, "");
_Static_assert(KC_F24                 == 0x0073, "");
_Static_assert(KC_EXECUTE             == 0x0074, "");
_Static_assert(KC_HELP                == 0x0075, "");
_Static_assert(KC_MENU                == 0x0076, "");
_Static_assert(KC_SELECT              == 0x0077, "");
_Static_assert(KC_STOP                == 0x0078, "");
_Static_assert(KC_AGAIN               == 0x0079, "");
_Static_assert(KC_UNDO                == 0x007A, "");
_Static_assert(KC_CUT                 == 0x007B, "");
_Static_assert(KC_COPY                == 0x007C, "");
_Static_assert(KC_PASTE               == 0x007D, "");
_Static_assert(KC_FIND                == 0x007E, "");

_Static_assert(KC_LOCKING_CAPS_LOCK   == 0x0082, "");
_Static_assert(KC_LOCKING_NUM_LOCK    == 0x0083, "");
_Static_assert(KC_LOCKING_SCROLL_LOCK == 0x0084, "");
_Static_assert(KC_KP_COMMA            == 0x0085, "");
_Static_assert(KC_KP_EQUAL_AS400      == 0x0086, "");
_Static_assert(KC_INTERNATIONAL_1     == 0x0087, "");
_Static_assert(KC_INTERNATIONAL_2     == 0x0088, "");
_Static_assert(KC_INTERNATIONAL_3     == 0x0089, "");
_Static_assert(KC_INTERNATIONAL_4     == 0x008A, "");
_Static_assert(KC_INTERNATIONAL_5     == 0x008B, "");
_Static_assert(KC_INTERNATIONAL_6     == 0x008C, "");
_Static_assert(KC_INTERNATIONAL_7     == 0x008D, "");
_Static_assert(KC_INTERNATIONAL_8     == 0x008E, "");
_Static_assert(KC_INTERNATIONAL_9     == 0x008F, "");
_Static_assert(KC_LANGUAGE_1          == 0x0090, "");
_Static_assert(KC_LANGUAGE_2          == 0x0091, "");
_Static_assert(KC_LANGUAGE_3          == 0x0092, "");
_Static_assert(KC_LANGUAGE_4          == 0x0093, "");
_Static_assert(KC_LANGUAGE_5          == 0x0094, "");
_Static_assert(KC_LANGUAGE_6          == 0x0095, "");
_Static_assert(KC_LANGUAGE_7          == 0x0096, "");
_Static_assert(KC_LANGUAGE_8          == 0x0097, "");
_Static_assert(KC_LANGUAGE_9          == 0x0098, "");
_Static_assert(KC_ALTERNATE_ERASE     == 0x0099, "");
_Static_assert(KC_SYSTEM_REQUEST      == 0x009A, "");
_Static_assert(KC_CANCEL              == 0x009B, "");
_Static_assert(KC_CLEAR               == 0x009C, "");
_Static_assert(KC_PRIOR               == 0x009D, "");

_Static_assert(KC_OUT                 == 0x00A0, "");
_Static_assert(KC_OPER                == 0x00A1, "");
_Static_assert(KC_CLEAR_AGAIN         == 0x00A2, "");
_Static_assert(KC_CRSEL               == 0x00A3, "");
_Static_assert(KC_EXSEL               == 0x00A4, "");

_Static_assert(KC_PWR                 == 0x00A5, "");
_Static_assert(KC_SLEP                == 0x00A6, "");
_Static_assert(KC_WAKE                == 0x00A7, "");
_Static_assert(KC_MUTE                == 0x00A8, "");
_Static_assert(KC_VOLU                == 0x00A9, "");
_Static_assert(KC_VOLD                == 0x00AA, "");
_Static_assert(KC_MNXT                == 0x00AB, "");
_Static_assert(KC_MPRV                == 0x00AC, "");
_Static_assert(KC_MSTP                == 0x00AD, "");
_Static_assert(KC_MPLY                == 0x00AE, "");
_Static_assert(KC_MSEL                == 0x00AF, "");
_Static_assert(KC_EJCT                == 0x00B0, "");
_Static_assert(KC_MAIL                == 0x00B1, "");
_Static_assert(KC_CALC                == 0x00B2, "");
_Static_assert(KC_MYCM                == 0x00B3, "");
_Static_assert(KC_WSCH                == 0x00B4, "");
_Static_assert(KC_WHOM                == 0x00B5, "");
_Static_assert(KC_WBAK                == 0x00B6, "");
_Static_assert(KC_WFWD                == 0x00B7, "");
_Static_assert(KC_WSTP                == 0x00B8, "");
_Static_assert(KC_WREF                == 0x00B9, "");
_Static_assert(KC_WFAV                == 0x00BA, "");
_Static_assert(KC_MFFD                == 0x00BB, "");
_Static_assert(KC_MRWD                == 0x00BC, "");
_Static_assert(KC_BRIU                == 0x00BD, "");
_Static_assert(KC_BRID                == 0x00BE, "");

_Static_assert(KC_LEFT_CTRL           == 0x00E0, "");
_Static_assert(KC_LEFT_SHIFT          == 0x00E1, "");
_Static_assert(KC_LEFT_ALT            == 0x00E2, "");
_Static_assert(KC_LEFT_GUI            == 0x00E3, "");
_Static_assert(KC_RIGHT_CTRL          == 0x00E4, "");
_Static_assert(KC_RIGHT_SHIFT         == 0x00E5, "");
_Static_assert(KC_RIGHT_ALT           == 0x00E6, "");
_Static_assert(KC_RIGHT_GUI           == 0x00E7, "");

_Static_assert(KC_MS_U                == 0x00F0, "");
_Static_assert(KC_MS_D                == 0x00F1, "");
_Static_assert(KC_MS_L                == 0x00F2, "");
_Static_assert(KC_MS_R                == 0x00F3, "");
_Static_assert(KC_BTN1                == 0x00F4, "");
_Static_assert(KC_BTN2                == 0x00F5, "");
_Static_assert(KC_BTN3                == 0x00F6, "");
_Static_assert(KC_BTN4                == 0x00F7, "");
_Static_assert(KC_BTN5                == 0x00F8, "");
_Static_assert(KC_WH_U                == 0x00F9, "");
_Static_assert(KC_WH_D                == 0x00FA, "");
_Static_assert(KC_WH_L                == 0x00FB, "");
_Static_assert(KC_WH_R                == 0x00FC, "");
_Static_assert(KC_ACL0                == 0x00FD, "");
_Static_assert(KC_ACL1                == 0x00FE, "");
_Static_assert(KC_ACL2                == 0x00FF, "");

_Static_assert(KC_EXLM                == 0x021E, "");
_Static_assert(KC_AT                  == 0x021F, "");
_Static_assert(KC_HASH                == 0x0220, "");
_Static_assert(KC_DLR                 == 0x0221, "");
_Static_assert(KC_PERC                == 0x0222, "");
_Static_assert(KC_CIRC                == 0x0223, "");
_Static_assert(KC_AMPR                == 0x0224, "");
_Static_assert(KC_ASTR                == 0x0225, "");
_Static_assert(KC_LPRN                == 0x0226, "");
_Static_assert(KC_RPRN                == 0x0227, "");
_Static_assert(KC_UNDS                == 0x022D, "");
_Static_assert(KC_PLUS                == 0x022E, "");
_Static_assert(KC_LCBR                == 0x022F, "");
_Static_assert(KC_RCBR                == 0x0230, "");
_Static_assert(KC_PIPE                == 0x0231, "");
_Static_assert(KC_COLN                == 0x0233, "");
_Static_assert(KC_DQUO                == 0x0234, "");
_Static_assert(KC_TILD                == 0x0235, "");
_Static_assert(KC_LT                  == 0x0236, "");
_Static_assert(KC_GT                  == 0x0237, "");
_Static_assert(KC_QUES                == 0x0238, "");

_Static_assert(QK_BOOTLOADER          == 0x5C00, "");
_Static_assert(QK_DEBUG_TOGGLE        == 0x5C01, "");

_Static_assert(MAGIC_TOGGLE_NKRO      == 0x5C14, "");

_Static_assert(QK_GRAVE_ESCAPE        == 0x5C16, "");

_Static_assert(AU_ON                  == 0x5C1D, "");
_Static_assert(AU_OFF                 == 0x5C1E, "");
_Static_assert(AU_TOG                 == 0x5C1F, "");

_Static_assert(CLICKY_TOGGLE          == 0x5C20, "");
_Static_assert(CLICKY_ENABLE          == 0x5C21, "");
_Static_assert(CLICKY_DISABLE         == 0x5C22, "");
_Static_assert(CLICKY_UP              == 0x5C23, "");
_Static_assert(CLICKY_DOWN            == 0x5C24, "");
_Static_assert(CLICKY_RESET           == 0x5C25, "");
_Static_assert(MU_ON                  == 0x5C26, "");
_Static_assert(MU_OFF                 == 0x5C27, "");
_Static_assert(MU_TOG                 == 0x5C28, "");
_Static_assert(MU_MOD                 == 0x5C29, "");

_Static_assert(BL_ON                  == 0x5CBB, "");
_Static_assert(BL_OFF                 == 0x5CBC, "");
_Static_assert(BL_DEC                 == 0x5CBD, "");
_Static_assert(BL_INC                 == 0x5CBE, "");
_Static_assert(BL_TOGG                == 0x5CBF, "");
_Static_assert(BL_STEP                == 0x5CC0, "");
_Static_assert(BL_BRTG                == 0x5CC1, "");
_Static_assert(RGB_TOG                == 0x5CC2, "");
_Static_assert(RGB_MOD                == 0x5CC3, "");
_Static_assert(RGB_RMOD               == 0x5CC4, "");
_Static_assert(RGB_HUI                == 0x5CC5, "");
_Static_assert(RGB_HUD                == 0x5CC6, "");
_Static_assert(RGB_SAI                == 0x5CC7, "");
_Static_assert(RGB_SAD                == 0x5CC8, "");
_Static_assert(RGB_VAI                == 0x5CC9, "");
_Static_assert(RGB_VAD                == 0x5CCA, "");
_Static_assert(RGB_SPI                == 0x5CCB, "");
_Static_assert(RGB_SPD                == 0x5CCC, "");
_Static_assert(RGB_M_P                == 0x5CCD, "");
_Static_assert(RGB_M_B                == 0x5CCE, "");
_Static_assert(RGB_M_R                == 0x5CCF, "");
_Static_assert(RGB_M_SW               == 0x5CD0, "");
_Static_assert(RGB_M_SN               == 0x5CD1, "");
_Static_assert(RGB_M_K                == 0x5CD2, "");
_Static_assert(RGB_M_X                == 0x5CD3, "");
_Static_assert(RGB_M_G                == 0x5CD4, "");
_Static_assert(RGB_M_T                == 0x5CD5, "");

_Static_assert(KC_LSPO                == 0x5CD7, "");
_Static_assert(KC_RSPC                == 0x5CD8, "");
_Static_assert(KC_SFTENT              == 0x5CD9, "");

_Static_assert(KC_LCPO                == 0x5CF3, "");
_Static_assert(KC_RCPC                == 0x5CF4, "");
_Static_assert(KC_LAPO                == 0x5CF5, "");
_Static_assert(KC_RAPC                == 0x5CF6, "");

_Static_assert(FN_MO13                == 0x5F10, "");
_Static_assert(FN_MO23                == 0x5F11, "");
_Static_assert(MACRO00                == 0x5F12, "");
_Static_assert(MACRO01                == 0x5F13, "");
_Static_assert(MACRO02                == 0x5F14, "");
_Static_assert(MACRO03                == 0x5F15, "");
_Static_assert(MACRO04                == 0x5F16, "");
_Static_assert(MACRO05                == 0x5F17, "");
_Static_assert(MACRO06                == 0x5F18, "");
_Static_assert(MACRO07                == 0x5F19, "");
_Static_assert(MACRO08                == 0x5F1A, "");
_Static_assert(MACRO09                == 0x5F1B, "");
_Static_assert(MACRO10                == 0x5F1C, "");
_Static_assert(MACRO11                == 0x5F1D, "");
_Static_assert(MACRO12                == 0x5F1E, "");
_Static_assert(MACRO13                == 0x5F1F, "");
_Static_assert(MACRO14                == 0x5F20, "");
_Static_assert(MACRO15                == 0x5F21, "");

_Static_assert(USER00                 == 0x5F80, "");
_Static_assert(USER01                 == 0x5F81, "");
_Static_assert(USER02                 == 0x5F82, "");
_Static_assert(USER03                 == 0x5F83, "");
_Static_assert(USER04                 == 0x5F84, "");
_Static_assert(USER05                 == 0x5F85, "");
_Static_assert(USER06                 == 0x5F86, "");
_Static_assert(USER07                 == 0x5F87, "");
_Static_assert(USER08                 == 0x5F88, "");
_Static_assert(USER09                 == 0x5F89, "");
_Static_assert(USER10                 == 0x5F8A, "");
_Static_assert(USER11                 == 0x5F8B, "");
_Static_assert(USER12                 == 0x5F8C, "");
_Static_assert(USER13                 == 0x5F8D, "");
_Static_assert(USER14                 == 0x5F8E, "");
_Static_assert(USER15                 == 0x5F8F, "");
#endif

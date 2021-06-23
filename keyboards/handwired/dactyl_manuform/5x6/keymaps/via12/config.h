#pragma once

#define VIAL_KEYBOARD_UID {0x80, 0x1F, 0xB7, 0x86, 0xB3, 0x42, 0x16, 0x92}

/* top-left and top-right keys */
#undef VIAL_UNLOCK_COMBO_ROWS
#define VIAL_UNLOCK_COMBO_ROWS { 0, 5 }
#undef VIAL_UNLOCK_COMBO_COLS
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }

#undef MANUFACTURER
#define MANUFACTURER Oh Key Caps

#define USE_SERIAL
#define EE_HANDS

#define RGBLED_SPLIT { 12, 12}
#undef RGBLED_NUM
#define RGBLED_NUM 24
#define RGBLIGHT_ANIMATIONS

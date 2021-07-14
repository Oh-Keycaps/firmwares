#pragma once

#define VIAL_KEYBOARD_UID {0xE7, 0x97, 0x85, 0x3E, 0x7B, 0xB6, 0x98, 0x16}

/* top-left and top-right keys */
#undef VIAL_UNLOCK_COMBO_ROWS
#define VIAL_UNLOCK_COMBO_ROWS { 0, 5 }
#undef VIAL_UNLOCK_COMBO_COLS
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }

#undef MANUFACTURER
#define MANUFACTURER OhKeycaps

#define USE_SERIAL
#define EE_HANDS

#define RGBLED_SPLIT { 6, 6}
#undef RGBLED_NUM
#define RGBLED_NUM 12
#define RGBLIGHT_ANIMATIONS
#pragma once

#define VIAL_KEYBOARD_UID {0x01, 0xF9, 0x83, 0x74, 0x35, 0xA9, 0x06, 0x6B}

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
#define RGBLIGHT_ANIMATIONS

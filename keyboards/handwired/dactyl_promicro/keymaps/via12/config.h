#pragma once

#define VIAL_KEYBOARD_UID {0x32, 0xD9, 0x5A, 0x29, 0x4B, 0x99, 0x79, 0xC8}

#undef VIAL_UNLOCK_COMBO_ROWS
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#undef VIAL_UNLOCK_COMBO_COLS
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }

#undef VENDOR_ID
#define VENDOR_ID 0x4450
#undef PRODUCT
#define PRODUCT Dactyl

#undef MANUFACTURER
#define MANUFACTURER OhKeycaps

#define USE_SERIAL
#define EE_HANDS

#define RGBLED_SPLIT { 12, 12}
#define RGBLIGHT_ANIMATIONS
#undef RGBLED_NUM
#define RGBLED_NUM 24

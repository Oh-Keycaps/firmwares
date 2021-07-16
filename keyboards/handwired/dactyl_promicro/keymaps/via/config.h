#pragma once

#define VIAL_KEYBOARD_UID {0x42, 0x89, 0xB1, 0x9A, 0x9A, 0x65, 0x7D, 0x46}

#undef VENDOR_ID
#define VENDOR_ID 0x4450
#undef PRODUCT
#define PRODUCT Dactyl

#undef MANUFACTURER
#define MANUFACTURER OhKeycaps

#define USE_SERIAL
#define EE_HANDS

#define RGBLED_SPLIT { 6, 6}
#define RGBLIGHT_ANIMATIONS

/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once

#define VIAL_KEYBOARD_UID {0xD9, 0xF7, 0x3B, 0xF8, 0x92, 0xB2, 0xD7, 0x7A}

/* top-left and top-right keys */
#undef VIAL_UNLOCK_COMBO_ROWS
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
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
#define FLIP_HALF

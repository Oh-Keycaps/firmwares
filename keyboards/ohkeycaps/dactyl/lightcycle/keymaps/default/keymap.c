// Copyright 2022 Robert Snyder (@immeraufdemhund)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
    _DVORAK,
    _LOWER,
    _RAISE
};
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define ONE_GRV LT(_LOWER,KC_GRAVE)
#define CTL_Z LCTL_T(KC_Z)
#define ALT_INS LALT(KC_INS)
#define ALT_MENU LALT_T(KC_MENU)
#define LG_QUOT LGUI_T(KC_QUOT)
#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_SLS LCTL_T(KC_SLSH)
#define LT2_COL LT(_RAISE, KC_SCLN)
#define LTPNTSC LALT(KC_PSCR)
#define BUILD LCTL(LSFT(KC_B))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_TAB , KC_Q  ,KC_W   , KC_E  , KC_R  , KC_T  ,                                       KC_Y   , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
        KC_CAPS, KC_A  ,KC_S   , KC_D  , KC_F  , KC_G  ,                                       KC_H   , KC_J  , KC_K  , KC_L  ,LT2_COL,KC_QUOT,
        KC_LSFT, KC_Z  ,KC_X   , KC_C  , KC_V  , KC_B  ,                                       KC_N   , KC_M  ,KC_COMM, KC_DOT,CTL_SLS,KC_RSFT,
        KC_ESC,ONE_GRV,ALT_INS ,KC_LEFT,KC_RGHT,                                                        KC_UP ,KC_DOWN,KC_LBRC,KC_RBRC,TT(_LOWER),
                                                        KC_LCTL,KC_LALT,       KC_LGUI,KC_RCTL,
                                                KC_BSPC,KC_DEL ,KC_HOME,       KC_MEH, KC_ENT ,KC_SPC ,
                                                                KC_END ,       BUILD
    ),
    [_DVORAK] = LAYOUT(
        _______,KC_QUOT,KC_COMM,KC_DOT ,KC_P   ,KC_Y   ,                                         KC_F  ,KC_G   ,KC_C   ,KC_R   ,KC_L   ,CTL_SLS,
        _______, KC_A  , KC_O  , KC_E  , KC_U  , KC_I  ,                                         KC_D  ,KC_H   , KC_T  ,KC_N   ,KC_S   ,KC_MINS,
        _______,KC_QUOT, KC_Q  , KC_J  , KC_K  ,KC_X   ,                                         KC_B  , KC_M  ,KC_W   , KC_V  , KC_Z  ,_______,
        _______,_______,_______,_______,_______,                                                        _______,_______,_______,_______,_______,
                                                        _______,_______,       _______,_______,
                                                _______,_______,_______,       _______,_______,_______,
                                                                _______,       _______
    ),
    [_LOWER] = LAYOUT(
        _______,KC_EXLM,KC_AT  ,KC_LBRC,KC_RBRC,KC_PIPE,                                        KC_UP  ,KC_P7  ,KC_P8  ,KC_P9  ,KC_PAST,KC_F12 ,
        _______,KC_HASH,KC_DLR ,KC_LPRN,KC_RPRN,KC_GRV ,                                        KC_DOWN,KC_P4  ,KC_P5  ,KC_P6  ,KC_PPLS,LTPNTSC,
        _______,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,                                        KC_AMPR,KC_P1  ,KC_P2  ,KC_P3  ,KC_PSLS,_______,
        RESET  ,_______,_______,_______,_______,                                                        KC_PDOT,KC_P0  ,KC_PEQL,_______,_______,
                                                        _______,_______,       _______,_______,
                                                _______,_______,_______,       KC_PGUP,_______,_______,
                                                                _______,       KC_PGDN
    ),
    [_RAISE] = LAYOUT(
        _______,_______,_______,KC_MS_U,_______,_______,                                        _______,_______,_______,_______,_______,_______,
        _______,_______,KC_MS_L,KC_MS_D,KC_MS_R,_______,                                        _______,_______,_______,_______,_______,KC_MPLY,
        _______,_______,_______,_______,_______,_______,                                        _______,_______,KC_MPRV,KC_MNXT,_______,_______,
        RESET  ,_______,_______,KC_BTN1,KC_BTN2,                                                        KC_VOLU,KC_VOLD,KC_MUTE,_______,_______,
                                                        _______,_______,       _______,_______,
                                                _______,_______,_______,       _______,_______,KC_WBAK,
                                                                _______,       _______
    )
};


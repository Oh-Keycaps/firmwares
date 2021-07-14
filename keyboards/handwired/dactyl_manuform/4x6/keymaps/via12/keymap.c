#include QMK_KEYBOARD_H

#define EXPR000 LT(3,KC_CAPS)
#define EXPR001 LT(3,KC_QUOT)
#define EXPR002 LT(2,KC_DEL)
#define EXPR003 LT(2,KC_ENT)
#define EXPR004 LCTL(LSFT(KC_B))
#define EXPR005 LALT(KC_PSCR)
#define EXPR006 RGB_RMOD
#define EXPR007 LALT(KC_INS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                         KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSLS,
EXPR000,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                         KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,EXPR001,
KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                         KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
                KC_LEFT,KC_RGHT,                                                         KC_UP  ,KC_DOWN                ,
                                KC_BSPC,EXPR002,                         EXPR003,KC_SPC                                 ,
                                        KC_LCTL,KC_HOME,         KC_MEH ,KC_RCTL                                        ,
                                        KC_LALT,KC_END ,         EXPR004,KC_LGUI),

    [1] = LAYOUT(
_______,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,_______,_______,
                _______,_______,                                                         _______,_______                ,
                                _______,_______,                         _______,_______                                ,
                                        _______,_______,         _______,_______                                        ,
                                        _______,_______,         _______,_______),

    [2] = LAYOUT(
_______,_______,_______,_______,_______,KC_LBRC,                         KC_RBRC,KC_P7  ,KC_P8  ,KC_P9  ,_______,KC_F12 ,
_______,_______,_______,_______,_______,KC_LCBR,                         KC_RCBR,KC_P4  ,KC_P5  ,KC_P6  ,KC_MINS,EXPR005,
_______,_______,_______,_______,_______,_______,                         _______,KC_P1  ,KC_P2  ,KC_P3  ,KC_EQL ,KC_UNDS,
                _______,_______,                                                         KC_P0  ,KC_PDOT                ,
                                _______,_______,                         _______,_______                                ,
                                        _______,_______,         KC_PGUP,_______                                        ,
                                        _______,_______,         KC_PGDN,_______),

    [3] = LAYOUT(
_______,RGB_VAD,RGB_SAI,RGB_VAI,_______,KC_LBRC,                         KC_RBRC,_______,RGB_VAD,RGB_SAI,RGB_VAI,_______,
_______,RGB_HUD,RGB_SAD,RGB_HUI,_______,KC_LCBR,                         KC_RCBR,_______,RGB_HUD,RGB_SAD,RGB_HUI,_______,
EXPR006,RGB_MOD,RGB_SPD,RGB_SPI,_______,_______,                         _______,EXPR006,RGB_MOD,RGB_SPD,RGB_SPI,_______,
                EXPR007,KC_GRV ,                                                         DF(0)  ,DF(1)                  ,
                                _______,RGB_TOG,                         RGB_TOG,_______                                ,
                                        _______,_______,         _______,_______                                        ,
                                        _______,RESET  ,         RESET  ,_______)
};

#include QMK_KEYBOARD_H

#define _BASE 0
#define _RAISE 1
#define _LOWER 2

#define SFT_ESC  LSFT_T(KC_BSPC)
#define CTL_BSPC CTL_T(KC_DEL)
#define ALT_SPC  ALT_T(KC_ENT)
#define SFT_ENT  SFT_T(KC_SPC)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT( \
KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                                KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   , \
KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                                KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN, \
KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                                KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_QUOT, \
        KC_LBRC,KC_RBRC,                                                                KC_MINS,KC_EQL ,         \
                        SFT_ESC,CTL_BSPC,                       ALT_SPC,SFT_ENT,                                 \
                                KC_TAB ,KC_HOME,        KC_END ,GUI_T(KC_LBRC),                                  \
                                RAISE  ,KC_GRV ,        KC_RBRC,LOWER                                            \
),
[_RAISE] = LAYOUT( \
RESET  ,_______,KC_MU  ,_______,_______,                                KC_VOLU,_______,KC_UP  ,_______,KC_PGUP, \
_______,KC_ML  ,KC_MD  ,KC_MR  ,_______,                                KC_MUTE,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN, \
_______,_______,_______,_______,_______,                                KC_VOLD,KC_SLSH,KC_BSLS,KC_QUES,KC_PIPE, \
        _______,_______,                                                                KC_MB1 ,KC_MB2 ,         \
                        _______,_______,                        _______,_______,                                 \
                                _______,_______,        _______,_______,                                         \
                                _______,_______,        _______,_______                                          \
),
[_LOWER] = LAYOUT( \
KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 , \
KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                                KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   , \
KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                                KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN, \
        KC_F11 ,KC_F12 ,                                                                RESET  ,DEBUG  ,         \
                        _______,_______,                        _______,_______,                                 \
                                _______,_______,        _______,_______,                                         \
                                _______,_______,        _______,_______                                          \
)
};

#include QMK_KEYBOARD_H
#include <print.h>

#define _QWERTY 0
#define _LOWER 1

#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_6x6(
_______,_______,_______,_______,_______,_______,                                       _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                                       _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                                       _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                                       _______,_______,_______,_______,_______,_______,
_______,LOWER  ,_______,_______,_______,_______,                                       _______,LOWER  ,_______,_______,_______,_______,
                                        _______,_______,_______,       _______,_______,_______,
                                                        _______,       _______,
                                                        _______,       _______
),

[_LOWER] = LAYOUT_6x6(
RESET  ,BL_TOGG,_______,_______,_______,_______,                                       RESET  ,BL_TOGG,_______,_______,_______,_______,
_______,BL_ON  ,BL_INC ,BL_STEP,_______,_______,                                       _______,BL_ON  ,BL_INC ,BL_STEP,_______,_______,
_______,BL_OFF ,BL_DEC ,BL_BRTG,_______,_______,                                       _______,BL_OFF ,BL_DEC ,BL_BRTG,_______,_______,
RGB_TOG,RGB_MOD,RGB_HUI,RGB_SAI,RGB_SPI,_______,                                       RGB_TOG,RGB_MOD,RGB_HUI,RGB_SAI,RGB_SPI,_______,
_______,_______,RGB_HUD,RGB_SAD,RGB_SPD,_______,                                       _______,_______,RGB_HUD,RGB_SAD,RGB_SPD,_______,
                                        _______,_______,_______,       _______,_______,_______,
                                                        _______,       _______,
                                                        _______,       _______
)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint16_t code = (record->event.pressed << 7) | (record->event.key.row << 3) | record->event.key.col;
    print_hex8(code);
    return true;
};

void keyboard_post_init_user(void) {
    debug_enable=true;
};

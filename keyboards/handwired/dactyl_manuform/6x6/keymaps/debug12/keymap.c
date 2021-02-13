#include QMK_KEYBOARD_H
#include <print.h>

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_6x6(
_______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
_______,LOWER  ,_______,_______,_______,_______,                        _______,LOWER  ,_______,_______,_______,_______,
                _______,_______,                                                        _______,_______,
                                _______,_______,                        _______,_______,
                                        _______,_______,        _______,_______,
                                        _______,_______,        _______,_______
),

[_LOWER] = LAYOUT_6x6(
RESET  ,_______,_______,_______,_______,_______,                        RESET  ,_______,_______,_______,_______,_______,
RESET  ,_______,_______,_______,_______,_______,                        RESET  ,_______,_______,_______,_______,_______,
_______,RGB_HUI,RGB_SAI,RGB_VAI,RGB_SPI,_______,                        _______,RGB_HUI,RGB_SAI,RGB_VAI,RGB_SPI,_______,
_______,RGB_HUD,RGB_SAD,RGB_VAD,RGB_SPD,_______,                        _______,RGB_HUD,RGB_SAD,RGB_VAD,RGB_SPD,_______,
_______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                _______,_______,                                                        _______,_______,
                                _______,RGB_TOG,                        RGB_TOG,_______,
                                        _______,_______,        _______,_______,
                                        _______,_______,        _______,_______
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

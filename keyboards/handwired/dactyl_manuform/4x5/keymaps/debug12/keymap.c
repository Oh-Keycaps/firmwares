#include QMK_KEYBOARD_H
#include <print.h>

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1

#define LOWER MO(_LOWER)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
_______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,
        _______,_______,                                                      _______,_______,
                        _______,_______,                      _______,_______,
                                _______,_______,      _______,_______,
                                _______,LOWER  ,      LOWER  ,_______
),

[_LOWER] = LAYOUT(
RESET  ,DEBUG  ,_______,_______,_______,                       RESET  ,DEBUG  ,_______,_______,_______,
_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,
        _______,_______,                                                       _______,_______,
                        _______,_______,                       _______,_______,
                                _______,_______,       _______,_______,
                                _______,_______,       _______,_______
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

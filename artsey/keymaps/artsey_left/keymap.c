// keymap.c
// 8-key left-hand Artsey keymap for a seeeduino_xiao hardware folder

#include QMK_KEYBOARD_H

// Layer enum — make sure these names match any references in combos.c / aliases.c
enum art_layers {
    _ART_BASE = 0,
    _ART_NUM,
    _ART_PUNC,
    _ART_CUS,
    _ART_SYM,
    _ART_MOU,
    _ART_NAV
};

// Include the project's aliases and combos (these files live in this keymap folder)
#include "aliases.c"
#include "combos.c"

// Base layer: left-hand Artsey (top row left->right, bottom row left->right)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ART_BASE] = LAYOUT(
        LT(_ART_NUM, KC_S), KC_T,        KC_R,        LT(_ART_SYM, KC_A),
        LT(_ART_CUS, KC_O), KC_I,        KC_Y,        LT(_ART_PUNC, KC_E)
    )
};

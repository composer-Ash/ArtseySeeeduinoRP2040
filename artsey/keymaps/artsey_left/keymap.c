// keymap.c
// 8-key left-hand Artsey keymap for a seeeduino_xiao hardware folder
// Place this file in: qmk_firmware/keyboards/seeeduino_xiao/keymaps/artsey_left/

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

/*
  Layout assumption:
  - Physical matrix is 2 rows x 4 columns (top row left->right then bottom row left->right)
  - The keyboard's LAYOUT macro should map those 8 positions in this order.
  - If your keyboard definition uses a different macro or ordering (eg LAYOUT_ortho_2x4),
    replace LAYOUT(...) with the correct macro name.
*/

// Base layer: left-hand Artsey (top row left->right, bottom row left->right)
// This is the functional mapping (layer-taps and keycodes) taken from the key.txt you provided.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ART_BASE] = LAYOUT(
        LT(_ART_NUM, KC_S), KC_T,        KC_R,        LT(_ART_SYM, KC_A),
        LT(_ART_CUS, KC_O), KC_I,        KC_Y,        LT(_ART_PUNC, KC_E)
    )
};

// If you need to add explicit extra layers (NUM, PUNC, etc.) as full keymaps rather than
// relying only on combos.c and layer-taps, you can expand the keymaps array here.
// For example:
// [_ART_NUM] = LAYOUT( /* fill with NUM layer keycodes (or KC_TRNS where not used) */ ),
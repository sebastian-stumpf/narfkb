#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,                                                       S(KC_A),    S(KC_B),    S(KC_C),    S(KC_D),    S(KC_E),
        KC_F,    KC_G,    KC_H,    KC_I,    KC_J,      KC_K,                                   S(KC_F), S(KC_G),    S(KC_H),    S(KC_I),    S(KC_J),    S(KC_K),
        KC_L,    KC_M,    KC_N,    KC_O,    KC_P,      KC_Q, KC_R, KC_S,     S(KC_L), S(KC_M), S(KC_N), S(KC_O),    S(KC_P),    S(KC_Q),    S(KC_R),    S(KC_S),
                                                       KC_T, KC_U, KC_V,     S(KC_T), S(KC_U), S(KC_V)
    )
};

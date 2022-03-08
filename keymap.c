/*
Format (with homerow mods):
[ALPHA] = LAYOUT_ergodox(
    // left hand
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          LALT_T(KC_NO),  LCTL_T(KC_NO),  LSFT_T(KC_NO),  LGUI_T(KC_NO),  KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                    KC_NO,          KC_NO,
                                                                                                    KC_NO,
                                                                    KC_SPC,         KC_BSPC,        KC_NO,
    // right hand
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                    KC_NO,          LGUI_T(KC_NO),  LSFT_T(KC_NO),  LCTL_T(KC_NO),  LALT_T(KC_NO),  KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,
    KC_NO,
    KC_NO,          KC_TAB,         KC_ENT
),
*/

/*
        // left hand
        KC_ESC,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,
        KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,
        KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,
        KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_NO,
        KC_LCTL,        KC_LGUI,        KC_LALT,        KC_NO,          KC_GRAVE,

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_SPC,         KC_TAB,         KC_NO,
        // right hand
        KC_NO,          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,
        KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQL,
                        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,
        KC_NO,          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLSH,        KC_BSLS,
                                        KC_NO,          KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_ENT,         KC_BSPC
*/

/*
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  Esc   |   1  |   2  |   3  |   4  |   5  |      |           |  `   |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   =    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |Capslock|   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |   \    |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | Ctlr | Gui  |Option| Left | Right|                                       |  Up  | Down |      |   [  |   ]    |
 *   `----------------------------------'                                       `------------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      | VOLU |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | VOLD |       |      |      |      |
 *                                 | Space| Tab  |------|       |------|Enter |Backsp|
 *                                 |      |      |m_play|       |      |      |ace   |
 *                                 `--------------------'       `--------------------'
*/
#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    DEFAULT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [DEFAULT] = LAYOUT_ergodox(
        // left hand
        KC_ESC,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,
        KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,
        KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,
        KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_NO,
        KC_LCTL,        KC_LGUI,        KC_LALT,        KC_LEFT,        KC_RIGHT,

                                                                                        KC_NO,          KC_VOLU,
                                                                                                        KC_VOLD,
                                                                        KC_SPC,         KC_TAB,         KC_MPLY,
        // right hand
        KC_GRAVE,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,
        KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQL,
                        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,
        KC_NO,          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLSH,        KC_BSLS,
                                        KC_UP,          KC_DOWN,        KC_NO,          KC_LBRC,        KC_RBRC,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_ENT,         KC_BSPC
    ),
};
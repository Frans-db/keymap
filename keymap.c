/*
 * Notes:
 * -Homerow mods on every layer:
 *    Alt/Option, Control, Shift, GUI/Super/Command
 *
 *
 * Alpha (Qwerty)
 * Alpha keys plus some writing special characters (,./). The semicolon (;/:) is replaced with apostraphes ('/")
 * .--------------------------------------.  .--------------------------------------.
 * |   Q   |   W   |   E   |   R   |   T  |  |   Y   |   U   |   I   |   O   |   P  |
 * |-------+-------+-------+-------+------|  |-------+-------+-------+-------+------|
 * |   A   |   S   |   D   |   F   |   G  |  |   H   |   J   |   K   |   L   | ""/' |
 * |-------+-------+-------+-------+------|  |-------+-------+-------+-------+------|
 * |   Z   |   X   |   C   |   V   |   B  |  |   N   |   M   |   ,   |   .   |   /  |
 * '---------------+-------+-------+------|  |-------+-------+-------+-------+------'
 *                 |  Nav  | Space |Bspace|  |  Tab  | Enter | Utils |
 *                 '----------------------'  '-----------------------'
 *
 * Utils
 * .---------------------------------------.  .---------------------------------------.
 * |       |  7/&  |  8/ * |   9   |       |  |       |  {}   |  -/_  |   `   | ""/'  |
 * |-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------|
 * |       |  4/$  |  5/%  |  6/^  |       |  |  ;/:  |  ()   |  =/+  |  <>   |   \   |
 * |-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------|
 * |       |  1/!  |  2/@  |  3/#  |   0   |  |       |  []   |   ,   |   .   |   /   |
 * '---------------+-------+-------+-------|  |-------+-------+-------+-------+-------'
 *                 | Alpha | Space |Bspace |  |  Tab  | Enter | Alpha |
 *                 '-----------------------'  '-----------------------'
 *
 * Navigation
 * .---------------------------------------.  .---------------------------------------.
 * |       |       |       |       |       |  |       |  Copy | Paste |  Cut  |       |
 * |-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------|
 * |       |       |       |       |       |  |       |  <-   |   v   |   ^   |  ->   |
 * |-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------|
 * |       |       |       |       |       |  |       |       |       |       |       |
 * '---------------+-------+-------+-------|  |-------+-------+-------+-------+-------'
 *                 | Alpha | Space |Bspace |  |  Tab  | Enter | Alpha |
 *                 '-----------------------'  '-----------------------'
 */

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

#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    QWERTY,
    UTIL,
    NAV,
};
enum custom_keycodes {
    FULL_SCRN = SAFE_RANGE,
    // LEFT_SCRN,
    // RIGHT_SCRN,
    // TOP_SCRN,
    // BTM_SCRN,
    // TL_SCRN,
    // TR_SCRN,
    // BL_SCRN,
    // BR_SCRN,
    // PRN = SAFE_RANGE,
    // BRC,
    // AGL_BRC,
    // SQL_BRC,

    // CUT,
    // COPY,
    // PASTE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,
        KC_NO,          LALT_T(KC_A),   LCTL_T(KC_S),   LSFT_T(KC_D),   LGUI_T(KC_F),   KC_G,
        KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          TG(NAV),

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_SPC,         KC_BSPC,        KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,
                        KC_H,           LGUI_T(KC_J),   LSFT_T(KC_K),   LCTL_T(KC_L),   LALT_T(KC_QUOT),KC_NO,
        KC_NO,          KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_NO,
                                        TG(UTIL),       KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_TAB,         KC_ENT
    ),

    [UTIL] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,
        KC_NO,          LALT_T(KC_NO),  LCTL_T(KC_4),   LSFT_T(KC_5),   LGUI_T(KC_6),   KC_NO,
        KC_NO,          KC_NO,          KC_1,           KC_2,           KC_3,           KC_0,           KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_SPC,         KC_BSPC,        KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                        KC_NO,          LGUI_T(KC_NO),  LSFT_T(KC_NO),  LCTL_T(KC_NO),  LALT_T(KC_NO),  KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                        TG(UTIL),       KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_TAB,         KC_ENT
    ),

    [NAV] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          LALT_T(KC_NO),  LCTL_T(KC_NO),   LSFT_T(FULL_SCRN),  LGUI_T(KC_NO),  KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          TG(NAV),

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_SPC,         KC_BSPC,        KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                        KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_TAB,         KC_ENT
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FULL_SCRN:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                register_code(KC_LALT);
                SEND_STRING("f");
                clear_mods();
            }
            return true;
        // case LEFT_SCRN:
        //     if (record->event.pressed) {
        //         register_code(KC_LGUI);
        //         register_code(KC_LALT);
        //         tap_code(KC_LEFT);
        //         clear_mods();
        //     }
        //     return false;
        // case RIGHT_SCRN:
        //     if (record->event.pressed) {
        //         register_code(KC_LGUI);
        //         register_code(KC_LALT);
        //         tap_code(KC_RIGHT);
        //         clear_mods();
        //     }
        //     return false;
        // case TOP_SCRN:
        //     if (record->event.pressed) {
        //         register_code(KC_LGUI);
        //         register_code(KC_LALT);
        //         tap_code(KC_UP);
        //         clear_mods();
        //     }
        //     return false;
        // case BTM_SCRN:
        //     if (record->event.pressed) {
        //         register_code(KC_LGUI);
        //         register_code(KC_LALT);
        //         tap_code(KC_DOWN);
        //         clear_mods();
        //     }
        //     return false;
        default:
            return true;
    }
}

void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case UTIL:
            ergodox_right_led_1_on();
            break;
        case NAV:
            ergodox_right_led_2_on();
            break;
    }
};
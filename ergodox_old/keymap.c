#include QMK_KEYBOARD_H
#include "version.h"

// Layers
#define QWERTY 0
#define COLEMAK 1
#define UTIL 2
#define NAV 3

// Tap dance
enum {
    TD_Q_ESC,
};
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
};

// COLEMAK DH home row mods
// Left-hand COLEMAK DH home row mods
#define COLE_A LALT_T(KC_A)
#define COLE_R LCTL_T(KC_R)
#define COLE_S LSFT_T(KC_S)
#define COLE_T LGUI_T(KC_T)

// Right-hand COLEMAK DH home row mods
#define COLE_N LGUI_T(KC_N)
#define COLE_E LSFT_T(KC_E)
#define COLE_I LCTL_T(KC_I)
#define COLE_O LALT_T(KC_O)

// QWERTY home row mods
// Left-hand QWERTY home row mods
#define QWERT_A LALT_T(KC_A)
#define QWERT_S LCTL_T(KC_S)
#define QWERT_D LSFT_T(KC_D)
#define QWERT_F LGUI_T(KC_F)

// Right-hand QWERTY home row mods
#define QWERT_J LGUI_T(KC_J)
#define QWERT_K LSFT_T(KC_K)
#define QWERT_L LCTL_T(KC_L)
#define QWERT_SCLN LALT_T(KC_SCLN)

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  PARENTHESES,
  BRACKETS,
  CURLY_BRACES,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Del    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |A/OPT |S/CTL |D/CMD |F/SFT |   G  |------|           |------|   H  |J/SFT |K/CMD |L/CTL |;/OPT |' / Cmd |
 * |--------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Grv/L1|  '"  |AltShf| Left | Right|                                       |  Up  | Down |   [  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | App  | LGui |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */

// QWERTY Layer
[QWERTY] = LAYOUT_ergodox(
        // left hand
        KC_NO,        KC_NO,        KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,
        KC_NO,        TD(TD_Q_ESC),         KC_W,     KC_E,     KC_R,     KC_T,       KC_NO,
        KC_NO,        LALT_T(KC_A), LCTL_T(KC_S), LSFT_T(KC_D), LGUI_T(KC_F),   KC_G,
        KC_NO,        KC_Z,         KC_X,     KC_C,     KC_V,     KC_B,       KC_NO,
        KC_NO,        KC_NO,        KC_NO,    KC_NO,    DF(COLEMAK),

                                              KC_NO,    KC_NO,
                                                        KC_NO,
                                    KC_SPC,   KC_BSPC,  KC_NO,
        // right hand
        KC_NO,        KC_NO,        KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,
        KC_NO,        KC_Y,         KC_U,     KC_I,     KC_O,     KC_P,       KC_NO,
                      KC_H,         LGUI_T(KC_J), LSFT_T(KC_K), LCTL_T(KC_L),  LALT_T(KC_SCLN),  KC_NO,
        KC_NO,        KC_N,         KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,    KC_NO,
                      TG(UTIL),        KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,        KC_NO,
        KC_NO,
        KC_NO,        KC_TAB,       KC_ENT
    ),

// COLEMAK Layer
[COLEMAK] = LAYOUT_ergodox(
        // left hand
        KC_NO,        KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,
        KC_NO,        TD(TD_Q_ESC),  KC_W,     KC_F,     KC_P,     KC_B,       KC_NO,
        KC_NO,        LALT_T(KC_A), LCTL_T(KC_R), LSFT_T(KC_S), LGUI_T(KC_T),   KC_G,
        KC_NO,        KC_Z,          KC_X,     KC_C,     KC_D,     KC_V,       KC_NO,
        KC_NO,        KC_NO,         KC_NO,    KC_NO,    DF(QWERTY),

                                              KC_NO,    KC_NO,
                                                        KC_NO,
                                    KC_SPC,   KC_BSPC,  KC_NO,
        // right hand
        KC_NO,        KC_NO,        KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,
        KC_NO,        KC_J,         KC_L,     KC_U,     KC_Y,     KC_SCLN,      KC_NO,
                      KC_M,         LGUI_T(KC_N), LSFT_T(KC_E), LCTL_T(KC_I),  LALT_T(KC_O),     KC_NO,
        KC_NO,        KC_K,         KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,    KC_NO,
                      TG(UTIL),        KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,        KC_NO,
        KC_NO,
        KC_NO,        KC_TAB,       KC_ENT
    ),

// UTIL Layer
[UTIL] = LAYOUT_ergodox(
        // left hand
        KC_NO,        KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO, KC_NO,
        KC_NO,        KC_NO,         KC_7,         KC_8,         KC_9,         KC_NO, KC_NO,
        KC_NO,        LALT_T(KC_NO), LCTL_T(KC_4), LSFT_T(KC_5), LGUI_T(KC_6), KC_NO,
        KC_NO,        KC_NO,         KC_1,         KC_2,         KC_3,         KC_0,  KC_NO,
        KC_NO,        KC_NO,         KC_NO,        KC_NO,        KC_NO,

                                              KC_NO,    KC_NO,
                                                        KC_NO,
                                    KC_SPC,   KC_BSPC,  KC_NO,
        // right hand
        KC_NO,        KC_NO,         KC_NO,               KC_NO,          KC_NO,           KC_NO, KC_NO,
        KC_NO,        KC_NO,               BRACKETS,            KC_MINS,        KC_NO,           KC_NO, KC_NO,
        KC_SCLN,      LGUI_T(PARENTHESES), LSFT_T(KC_EQL), LCTL_T(KC_SLSH), LALT_T(KC_NO), KC_NO,
        KC_NO,        KC_NO,               CURLY_BRACES,        KC_QUOT,        KC_BSLS,         KC_NO, KC_NO,
                      TG(UTIL),            KC_NO,               KC_NO,          KC_NO,           KC_NO,
        KC_NO,        KC_NO,
        KC_NO,
        KC_NO,        KC_TAB,       KC_ENT
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case PARENTHESES:
      if (record->event.pressed) {
        SEND_STRING ("()"SS_TAP(X_LEFT));
      }
      return false;
      break;
    case BRACKETS:
      if (record->event.pressed) {
        SEND_STRING ("[]"SS_TAP(X_LEFT));
      }
      return false;
      break;
    case CURLY_BRACES:
      if (record->event.pressed) {
        SEND_STRING ("{}"SS_TAP(X_LEFT));
      }
      return false;
      break;
  }
  return true;
}

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    // uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    // switch (layer) {
    //   // TODO: Make this relevant to the ErgoDox EZ.
    //     case 1:
    //         ergodox_right_led_1_on();
    //         break;
    //     case 2:
    //         ergodox_right_led_2_on();
    //         break;
    //     default:
    //         // none
    //         break;
    // }

};

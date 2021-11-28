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
 * |   A   |   S   |   D   |   F   |   G  |  |   H   |   J   |   K   |   L   |   '  |
 * |-------+-------+-------+-------+------|  |-------+-------+-------+-------+------|
 * |   Z   |   X   |   C   |   V   |   B  |  |   N   |   M   |   ,   |   .   |   /  |
 * '---------------+-------+-------+------|  |-------+-------+-------+-------+------'
 *                 |  Nav  | Space |Bspace|  |  Tab  | Enter | Utils |
 *                 '----------------------'  '-----------------------'
 *
 * Alpha (Colemak DH)
 * Alpha keys plus some writing special characters (,./). The semicolon (;/:) is replaced with apostraphes ('/")
 * .--------------------------------------.  .--------------------------------------.
 * |   Q   |   W   |   F   |   P   |   B  |  |   J   |   L   |   U   |   Y   |   '  |
 * |-------+-------+-------+-------+------|  |-------+-------+-------+-------+------|
 * |   A   |   R   |   S   |   T   |   G  |  |   M   |   N   |   E   |   I   |   O  |
 * |-------+-------+-------+-------+------|  |-------+-------+-------+-------+------|
 * |   Z   |   X   |   C   |   D   |   V  |  |   K   |   H   |   ,   |   .   |   /  |
 * '---------------+-------+-------+------|  |-------+-------+-------+-------+------'
 *                 |  Nav  | Space |Bspace|  |  Tab  | Enter | Utils |     
 *                 '----------------------'  '-----------------------'
 *
 * Utils
 * .---------------------------------------.  .---------------------------------------.
 * |       |  7/&  |  8/*  |   9   |       |  |       |  {}   |  -/_  | ""/'' |  '    |
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
 * |       |       |       |       |       |  |       |  Cut  | Copy  | Paste |       |
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

// Layers
#define QWERTY 0
#define COLEMAK 1
#define UTIL 2
#define NAV 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,
        KC_NO,          LALT_T(KC_A),   LCTL_T(KC_S),   LSFT_T(KC_D),   LGUI_T(KC_F),   KC_G,
        KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_SPC,         KC_BSPC,        KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,
                        KC_H,           LGUI_T(KC_J),   LSFT_T(KC_K),   LCTL_T(KC_L),   LALT_T(KC_QUOT),KC_NO,
        KC_NO,          KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_NO,
                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_TAB,         KC_ENT
    ),
    [COLEMAK] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_NO,
        KC_NO,          LALT_T(KC_A),   LCTL_T(KC_R),   LSFT_T(KC_S),   LGUI_T(KC_T),   KC_G,
        KC_NO,          KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_SPC,         KC_BSPC,        KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_J,           KC_L,           KC_U,           KC_Y,           KC_QUOT,        KC_NO,
                        KC_M,           LGUI_T(KC_N),   LSFT_T(KC_E),   LCTL_T(KC_I),   LALT_T(KC_O),   KC_NO,
        KC_NO,          KC_K,           KC_H,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_NO,
                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
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
                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_TAB,         KC_ENT
    ),
 }
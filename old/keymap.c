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

    NUM,
    SYMB,
    NAV,

    SCREEN,
    MEDIA,
};
enum custom_keycodes {
    FULL_SCRN = SAFE_RANGE,
    LEFT_SCRN,
    RIGHT_SCRN,
    TOP_SCRN,
    BTM_SCRN,
    TL_SCRN,
    TR_SCRN,
    BL_SCRN,
    BR_SCRN,
    NXT_DSP,
    PRV_DSP,

    NXT_SPC,
    PRV_SPC,

    NXT_APP,
    PRV_APP,
    SWTC_APP,

    UNDO,
    CUT,
    COPY,
    PASTE,
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
        KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          LT(NAV,KC_ESC),

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        LT(NUM, KC_SPC),LT(SYMB,KC_TAB),        KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,           KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_Y,           KC_U,            KC_I,           KC_O,           KC_P,           KC_NO,
                        KC_H,           LGUI_T(KC_J),    LSFT_T(KC_K),   LCTL_T(KC_L),   LALT_T(KC_QUOT),KC_NO,
        KC_NO,          KC_N,           KC_M,            KC_COMM,        KC_DOT,         KC_SLSH,        KC_NO,
                                        LT(SCREEN,KC_DEL),          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          LT(MEDIA,KC_ENT),          KC_BSPC
    ),

    [NUM] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          LALT_T(KC_NO),  LCTL_T(KC_NO),  LSFT_T(KC_NO),  LGUI_T(KC_NO),  KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_NO,          KC_NO,          KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,
                        KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_1,           KC_2,           KC_3,           KC_NO,          KC_NO,
                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_NO,         KC_0
    ),

    [SYMB] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          LALT_T(KC_NO),  LCTL_T(KC_NO),  LSFT_T(KC_NO),  LGUI_T(KC_NO),  KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_NO,          KC_NO,          KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,         KC_NO,           KC_NO,          KC_NO,
                        KC_NO,          KC_NO,          KC_NO,         KC_NO,           KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,         KC_NO,           KC_NO,          KC_NO,
                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_NO,         KC_NO
    ),

    [NAV] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          LALT_T(KC_NO),  LCTL_T(KC_NO),  LSFT_T(KC_NO),  LGUI_T(KC_NO),  KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_NO,          KC_NO,          KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          UNDO,           CUT,            COPY,           PASTE,          KC_NO,          KC_NO,
                        KC_PGUP,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,
        KC_NO,          KC_PGDN,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                        KC_DEL,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_NO,         KC_BSPC
    ),

    [SCREEN] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          TL_SCRN,        TOP_SCRN,       TR_SCRN,        KC_NO,          KC_NO,
        KC_NO,          PRV_DSP,        LEFT_SCRN,      FULL_SCRN,      RIGHT_SCRN,     NXT_DSP,
        KC_NO,          PRV_SPC,        BL_SCRN,       BTM_SCRN,        BR_SCRN,        NXT_SPC,       KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                        KC_NO,       KC_NO,
                                                                                                        KC_NO,
                                                                        SWTC_APP,          KC_NO,          KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                        KC_NO,          LGUI_T(KC_NO),  LSFT_T(KC_NO),  LCTL_T(KC_NO),  LALT_T(KC_NO),  KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_NO,         KC_NO
    ),
    [MEDIA] = LAYOUT_ergodox(
        // left hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_VOLU,          KC_NO,          KC_NO,
        KC_NO,          KC_MRWD,        KC_MPLY,        KC_MFFD,        KC_MUTE,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_VOLD,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,

                                                                                        KC_NO,          KC_NO,
                                                                                                        KC_NO,
                                                                        KC_NO,          KC_NO,          KC_NO,
        // right hand
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                        KC_NO,          LGUI_T(KC_NO),  LSFT_T(KC_NO),  LCTL_T(KC_NO),  LALT_T(KC_NO),  KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,
        KC_NO,
        KC_NO,          KC_NO,         KC_0
    ),
};

void gui(uint16_t keycode) {
    register_code(KC_LGUI);
    register_code(keycode);

    unregister_code(keycode);
    unregister_code(KC_LGUI);
}

void ctrl(uint16_t keycode) {
    register_code(KC_LCTL);
    register_code(keycode);

    unregister_code(keycode);
    unregister_code(KC_LCTL);
}

void gui_alt(uint16_t keycode) {
    register_code(KC_LGUI);
    register_code(KC_LALT);
    register_code(keycode);

    unregister_code(keycode);
    unregister_code(KC_LALT);
    unregister_code(KC_LGUI);
}

void gui_ctrl(uint16_t keycode) {
    register_code(KC_LGUI);
    register_code(KC_LCTL);
    register_code(keycode);

    unregister_code(keycode);
    unregister_code(KC_LALT);
    unregister_code(KC_LCTL);
}

void gui_ctrl_alt(uint16_t keycode) {
    register_code(KC_LGUI);
    register_code(KC_LALT);
    register_code(KC_LCTL);
    register_code(keycode);

    unregister_code(keycode);
    unregister_code(KC_LCTL);
    unregister_code(KC_LALT);
    unregister_code(KC_LGUI);
}

void gui_ctrl_shift(uint16_t keycode) {
    register_code(KC_LGUI);
    register_code(KC_LCTL);
    register_code(KC_LSFT);
    register_code(keycode);

    unregister_code(keycode);
    unregister_code(KC_LSFT);
    unregister_code(KC_LALT);
    unregister_code(KC_LCTL);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FULL_SCRN:
            if (record->event.pressed) {
                gui_alt(KC_F);
            }
            return false;
        case LEFT_SCRN:
            if (record->event.pressed) {
                gui_alt(KC_LEFT);
            }
            return false;
        case RIGHT_SCRN:
            if (record->event.pressed) {
                gui_alt(KC_RIGHT);
            }
            return false;
        case TOP_SCRN:
            if (record->event.pressed) {
                gui_alt(KC_UP);
            }
            return false;
        case BTM_SCRN:
            if (record->event.pressed) {
                gui_alt(KC_DOWN);
            }
            return false;
        case TL_SCRN:
            if (record->event.pressed) {
                gui_ctrl(KC_LEFT);
            }
            return false;
        case TR_SCRN:
            if (record->event.pressed) {
                gui_ctrl(KC_RIGHT);
            }
            return false;
        case BL_SCRN:
            if (record->event.pressed) {
                gui_ctrl_shift(KC_LEFT);
            }
            return false;
        case BR_SCRN:
            if (record->event.pressed) {
                gui_ctrl_shift(KC_RIGHT);
            }
            return false;
        case PRV_DSP:
            if (record->event.pressed) {
                gui_ctrl_alt(KC_LEFT);
            }
            return false;
        case NXT_DSP:
            if (record->event.pressed) {
                gui_ctrl_alt(KC_RIGHT);
            }
            return false;
        case PRV_SPC:
            if (record->event.pressed) {
                ctrl(KC_LEFT);
            }
            return true;
        case NXT_SPC:
            if (record->event.pressed) {
                ctrl(KC_RIGHT);
            }
            return false;
        case SWTC_APP:
            if (record->event.pressed) {
                gui(KC_GRV);
            }
            return false;
        case UNDO:
            if (record->event.pressed) {
                gui(KC_Z);
            }
            return false;
        case CUT:
            if (record->event.pressed) {
                gui(KC_X);
            }
            return false;        
        case COPY:
            if (record->event.pressed) {
                gui(KC_C);
            }
            return false;        
        case PASTE:
            if (record->event.pressed) {
                gui(KC_V);
            }
            return false;
        default:
            return true;
    }
    return true;
}

void matrix_scan_user(void) {
    // uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    // switch (layer) {
    //     case UTIL:
    //         ergodox_right_led_1_on();
    //         break;
    //     case NAV:
    //         ergodox_right_led_2_on();
    //         break;
    // }
};
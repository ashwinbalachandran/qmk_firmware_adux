#include QMK_KEYBOARD_H

#include "oneshot.h"
#include "swapper.h"

#define HOME G(KC_LEFT)
#define END G(KC_RGHT)
#define FWD G(KC_RBRC)
#define BACK G(KC_LBRC)
#define TABL G(S(KC_LBRC))
#define TABR G(S(KC_RBRC))
#define SPCL A(G(KC_LEFT))
#define SPC_R A(G(KC_RGHT))
#define LA_SYM MO(SYM)
#define LA_NAV MO(NAV)

enum layers { DEF, SYM, NAV, NUM, GAM };

enum keycodes {
    // Custom oneshot mod implementation with no timers.
    OS_SHFT = SAFE_RANGE,
    OS_CTRL,
    OS_ALT,
    OS_CMD,

    SW_WIN,  // Switch to next window         (cmd-tab)
    SW_LANG, // Switch to next input language (ctl-spc)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[DEF] = LAYOUT(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, LA_NAV, LA_SYM, KC_SPC),
                                                              [SYM] = LAYOUT(KC_ESC, KC_LBRC, KC_LCBR, KC_LPRN, KC_TILD, KC_CIRC, KC_RPRN, KC_RCBR, KC_RBRC, KC_GRV, KC_MINS, KC_ASTR, KC_EQL, KC_UNDS, KC_DLR, KC_HASH, OS_CMD, OS_SHFT, KC_LALT, OS_CTRL, KC_PLUS, KC_PIPE, KC_AT, KC_BSLS, KC_PERC, KC_QUES, KC_AMPR, KC_QUOT, KC_COLN, KC_EXLM, _______, _______, _______, _______),
                                                              [NAV] = LAYOUT(KC_TAB, KC_WH_D, KC_MPLY, KC_MNXT, KC_VOLU, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_BSPC, OS_CTRL, KC_LALT, OS_SHFT, OS_CMD, KC_MUTE, KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_PSCR, KC_WH_U, KC_MSTP, KC_MPRV, KC_VOLD, KC_PGDN, KC_INS, KC_SCRL, KC_APP, KC_ENT, _______, _______, _______, _______),
                                                              [NUM] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, OS_CTRL, OS_ALT, OS_SHFT, OS_CMD, KC_F11, KC_F12, OS_CMD, OS_SHFT, OS_ALT, OS_CTRL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______, _______, _______, TO(4)),
                                                              [GAM] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_1, KC_NO, KC_UP, KC_NO, KC_ESC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_2, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_3, KC_NO, KC_NO, KC_NO, KC_RCTL, KC_LALT, KC_SPC, TO(0), KC_NO)};

bool is_oneshot_cancel_key(uint16_t keycode) {
    switch (keycode) {
        case LA_SYM:
        case LA_NAV:
            return true;
        default:
            return false;
    }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
    switch (keycode) {
        case LA_SYM:
        case LA_NAV:
        case KC_LSFT:
        case OS_SHFT:
        case OS_CTRL:
        case OS_ALT:
        case OS_CMD:
            return true;
        default:
            return false;
    }
}

bool sw_win_active  = false;
bool sw_lang_active = false;

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state  = os_up_unqueued;
oneshot_state os_cmd_state  = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    update_swapper(&sw_win_active, KC_LGUI, KC_TAB, SW_WIN, keycode, record);
    update_swapper(&sw_lang_active, KC_LCTL, KC_SPC, SW_LANG, keycode, record);

    update_oneshot(&os_shft_state, KC_LSFT, OS_SHFT, keycode, record);
    update_oneshot(&os_ctrl_state, KC_LCTL, OS_CTRL, keycode, record);
    update_oneshot(&os_alt_state, KC_LALT, OS_ALT, keycode, record);
    update_oneshot(&os_cmd_state, KC_LCMD, OS_CMD, keycode, record);

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, SYM, NAV, NUM);
}

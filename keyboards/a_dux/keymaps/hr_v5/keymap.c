// Copyright 2022 @filterpaper
// SPDX-License-Identifier: GPL-2.0+

#include QMK_KEYBOARD_H

// Seniply layout
// https://stevep99.github.io/seniply

// Left-hand home row mods
#define ALT_R LALT_T(KC_R)
#define GUI_TEE LGUI_T(KC_T)

// Right-hand home row mods
#define GUI_N RGUI_T(KC_N)
#define ALT_I LALT_T(KC_I)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, ALT_R, KC_S, GUI_TEE, KC_G, KC_M, GUI_N, KC_E, ALT_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, LCAG_T(KC_SPC), KC_LCTL, TO(1)),
                                                              [1] = LAYOUT_split_3x5_2(KC_BSLS, KC_LBRC, KC_RBRC, KC_DQUO, KC_QUOT, KC_PAST, KC_7, KC_8, KC_9, KC_PMNS, KC_AMPR, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_PSLS, KC_4, KC_5, KC_6, KC_PPLS, KC_CIRC, KC_LT, KC_GT, KC_AT, KC_UNDS, KC_0, KC_1, KC_2, KC_3, KC_EQL, KC_LSFT, LCAG_T(KC_SPC), TO(0), TO(2)),
                                                              [2] = LAYOUT_split_3x5_2(KC_GRV, KC_WH_D, KC_CAPS, KC_WH_U, KC_PSCR, KC_DEL, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_LCTL, KC_LALT, KC_MS_U, KC_LGUI, KC_BTN1, KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TAB, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, KC_ENT, LGUI(KC_C), KC_INS, LGUI(KC_V), KC_APP, KC_LSFT, LCAG_T(KC_SPC), TO(1), TO(3)),
                                                              [3] = LAYOUT_split_3x5_2(QK_GESC, SGUI(KC_O), KC_MNXT, KC_MPLY, KC_VOLU, KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F4, KC_LCTL, KC_LALT, SGUI(KC_C), KC_LGUI, KC_MUTE, KC_SCRL, KC_F5, KC_F6, KC_F7, KC_F8, KC_TAB, SGUI(KC_F), KC_MPRV, KC_MSTP, KC_VOLD, KC_ENT, KC_F9, KC_F10, KC_F11, KC_F12, KC_LSFT, LCAG_T(KC_SPC), TO(2), TO(0))};

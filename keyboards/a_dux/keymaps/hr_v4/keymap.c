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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, ALT_R, KC_S, GUI_TEE, KC_G, KC_M, GUI_N, KC_E, ALT_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_SPC, KC_LSFT, KC_LCTL, TO(1)),
                                                              [1] = LAYOUT_split_3x5_2(KC_ESC, KC_GRV, LGUI(KC_V), KC_QUOT, KC_BSPC, KC_DEL, KC_7, KC_8, KC_9, KC_0, KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, KC_LEFT, KC_RGHT, KC_4, KC_5, KC_6, KC_MINS, KC_TAB, SGUI(KC_C), LGUI(KC_C), KC_BSLS, KC_LBRC, KC_RBRC, KC_1, KC_2, KC_3, KC_EQL, TO(0), KC_SPC, KC_ENT, TO(2)),
                                                              [2] = LAYOUT_split_3x5_2(KC_ESC, KC_GRV, KC_CAPS, KC_BTN2, KC_BSPC, KC_DEL, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, KC_MS_U, KC_WH_U, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TAB, KC_MS_L, KC_MS_R, KC_BTN1, KC_MS_D, KC_WH_D, KC_ACL0, KC_INS, KC_ACL1, KC_APP, TO(0), KC_SPC, KC_ENT, TO(3)),
                                                              [3] = LAYOUT_split_3x5_2(KC_F1, KC_F2, KC_F3, KC_F4, SGUI(KC_O), KC_PAUS, KC_F5, KC_F6, KC_F7, KC_F8, KC_LCTL, KC_LALT, KC_LSFT, KC_LGUI, SGUI(KC_F), KC_SCRL, KC_F9, KC_F10, KC_F11, KC_F12, KC_TAB, KC_R, KC_PSCR, KC_D, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, TO(0), KC_SPC, KC_ENT, KC_TRNS)};

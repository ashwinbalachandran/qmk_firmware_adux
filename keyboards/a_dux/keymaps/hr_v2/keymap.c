// Copyright 2022 @filterpaper
// SPDX-License-Identifier: GPL-2.0+

#include QMK_KEYBOARD_H

// Seniply layout
// https://stevep99.github.io/seniply

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define GUI_S LGUI_T(KC_S)
#define SHFT_T LSFT_T(KC_T)

// Right-hand home row mods
#define SFT_N RSFT_T(KC_N)
#define GUI_E RGUI_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define CTL_O RCTL_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, CTL_A, ALT_R, GUI_S, SHFT_T, KC_G, KC_M, SFT_N, GUI_E, ALT_I, CTL_O, KC_Z, KC_X, KC_D, KC_V, KC_K, KC_H, KC_M, KC_COMM, KC_DOT, KC_SLSH, LSFT_T(KC_TAB), TG(1), KC_ENT, KC_SPC), [1] = LAYOUT_split_3x5_2(KC_F1, KC_F2, KC_F3, KC_F4, KC_LBRC, KC_RBRC, KC_7, KC_8, KC_9, KC_0, KC_F5, KC_F6, KC_F7, KC_F8, LGUI(KC_TAB), KC_QUOT, KC_4, KC_5, KC_6, KC_MINS, KC_F9, KC_F10, KC_F11, KC_F12, LGUI(KC_GRV), KC_BSLS, KC_1, KC_2, KC_3, KC_EQL, TG(0), TG(2), KC_LSFT, KC_TAB), [2] = LAYOUT_split_3x5_2(KC_ESC, KC_WH_U, KC_PSCR, KC_VOLU, KC_MNXT, KC_CUT, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_GRV, KC_LALT, KC_SCRL, KC_MUTE, KC_MPLY, KC_COPY, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_CAPS, KC_WH_D, KC_PAUS, KC_VOLD, KC_MPRV, KC_PSTE, KC_BSPC, KC_INS, KC_DEL, KC_APP, TG(0), KC_LGUI, KC_LSFT, KC_TAB)};

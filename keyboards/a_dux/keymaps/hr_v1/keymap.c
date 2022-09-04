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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, CTL_A, ALT_R, GUI_S, SHFT_T, KC_G, KC_M, SFT_N, GUI_E, ALT_I, CTL_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, TO(1), KC_ENT, KC_SPC),
                                                              [1] = LAYOUT_split_3x5_2(KC_EXLM, KC_AT, KC_SCLN, KC_COLN, KC_UNDS, KC_EQL, KC_7, KC_8, KC_9, KC_PLUS, KC_BSLS, KC_PIPE, KC_LPRN, KC_RPRN, KC_LBRC, KC_ASTR, KC_4, KC_5, KC_6, KC_MINS, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_RBRC, KC_0, KC_1, KC_2, KC_3, KC_SLSH, TO(0), TO(2), TO(3), TO(4)),
                                                              [2] = LAYOUT_split_3x5_2(RALT(KC_1), RALT(KC_2), RALT(KC_3), RALT(KC_4), KC_BRIU, KC_NO, KC_AMPR, KC_GRV, KC_TILD, KC_NO, KC_MUTE, KC_VOLD, KC_MPLY, KC_VOLU, KC_BRID, KC_NO, KC_DLR, KC_PERC, KC_CIRC, KC_UNDS, KC_EJCT, KC_MPRV, KC_MSTP, KC_MNXT, KC_NO, KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_NO, TO(0), KC_TRNS, TO(3), TO(4)),
                                                              [3] = LAYOUT_split_3x5_2(KC_ESC, LALT(KC_LEFT), LCTL(KC_F), LALT(KC_RGHT), KC_INS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_CAPS, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT), KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), KC_TAB, LGUI(KC_V), KC_ENT, KC_BSPC, KC_RCTL, KC_LALT, KC_APP, TO(0), TO(1), KC_TRNS, KC_TRNS),
                                                              [4] = LAYOUT_split_3x5_2(LCTL(KC_I), SGUI(KC_O), SGUI(KC_F), LCTL(KC_R), LCTL(KC_D), KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT), KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, RCS(KC_Z), RCS(KC_X), RCS(KC_C), LSFT(KC_TAB), RCS(KC_V), KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, TO(0), TO(1), TO(2), TO(3))};

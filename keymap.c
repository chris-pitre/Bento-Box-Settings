// Copyright 2023 Synth-and-Keys (@Synth-and-Keys)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    * ----------------------------------------------------------------
    * |        |         |         |       Mute      |   Media Play  |
    * ----------------------------------------------------------------
    * |        |  Layer1 |         |      Pause      |     Insert    |
    * ----------------------------------------------------------------
    * |   7    |    8    |    9    |                 |               |
    * ----------------------------------------------------------------
    * |   4    |    5    |    6    |     Shift+[     |    Shift+]    |
    * ----------------------------------------------------------------
    * |   1    |    2    |    3    |        0        |     Enter     |
    * ----------------------------------------------------------------
     */
    [0] = LAYOUT(
                                                 KC_MUTE,     KC_MPLY,
                   KC_MUTE,                     KC_PAUSE,      KC_INS,
        KC_P7,         KC_P8,       KC_P9,
        KC_P4,         KC_P5,       KC_P6,       KC_NLCK,     KC_PSCR,
        KC_P1,         KC_P2,       KC_P3,         KC_P0,      KC_ENT
    )
};


bool encoder_update_user(uint8_t index, bool clockwise){
        if(index == 0){
            if(clockwise){
                tap_code(KC_WH_D);
            } else {
                tap_code(KC_WH_U);
            }
        } else if(index == 1){
            if(clockwise){
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        } else if(index == 2){
            if(clockwise){
                tap_code(KC_MNXT);
            } else {
                tap_code(KC_MPRV);
            }
        }
    return false;
}

    /* LAYER TEMPLATE
    * ------------------------------------
    * |      |      |      |      |      |
    * ------------------------------------
    * |      |      |      |      |      |
    * ------------------------------------
    * |      |      |      |      |      |
    * ------------------------------------
    * |      |      |      |      |      |
    * ------------------------------------
    * |      |      |      |      |      |
    * ------------------------------------
     */

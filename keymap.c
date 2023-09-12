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
                   KC_MUTE,                 KC_PAUSE,      KC_INS,
        KC_7,         KC_8,       KC_9,
        KC_4,         KC_5,       KC_6,   S(KC_LBRC),  S(KC_RBRC),
        KC_1,         KC_2,       KC_3,         KC_0,      KC_ENT
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

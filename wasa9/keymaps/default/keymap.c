// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Pin dell'encoder (Clock e Data)
#define ENCODER_CLK  F6
#define ENCODER_DT1  F7   // Primo pin per il Data (DT)
#define ENCODER_DT2  B1   // Secondo pin per il Data (DT)

// Definizione dei tasti del volume
#define VOLUME_UP    KC_VOLU
#define VOLUME_DOWN  KC_VOLD

// Mappatura della tastiera 3x3
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_3x3(
        KC_A,    KC_B,    KC_C,    // Prima riga
        KC_D,    KC_E,    KC_F,    // Seconda riga
        KC_G,    KC_H,    KC_I     // Terza riga
    )
}
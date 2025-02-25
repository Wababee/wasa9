#pragma once

// Definizione della matrice (COL2ROW)
#define MATRIX_ROW_PINS { F4, F5, F6 }
#define MATRIX_COL_PINS { D1, D4, D0 }

// Numero di righe e colonne nella matrice
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

// Pin per l'encoder
#define ENCODER_CLK  F6   // Clock dell'encoder (pin F6)
#define ENCODER_DT1  F7   // Prima direzione dell'encoder (DT)
#define ENCODER_DT2  B1   // Seconda direzione dell'encoder (DT)
#define ENCODER_MAP_KEY_DELAY 10

// Funzioni dell'encoder
#define ENCODER_USE_CLICKS       // Abilita i click dell'encoder
#define ENCODER_DIRECTION_FLIP   // Inverte la direzione dell'encoder se necessario
#define NUM_ENCODERS 1           // Numero di encoder (in questo caso uno)
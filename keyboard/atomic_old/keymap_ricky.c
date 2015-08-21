#include "keymap_common.h"

// JCK: Semi-Standard layout

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    [0] = KEYMAP_JCK(GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,    BSPC, \
                     TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, BSLS, PSCR, \
                     CAPS, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT,    ENT,     INS, \
                     LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH,    RSFT,    UP, DEL, \
                     LCTL,    LGUI,  LALT,          SPC,                         RALT,  RCTL, LEFT, DOWN,   RGHT)
};
const uint16_t PROGMEM fn_actions[] = {
};


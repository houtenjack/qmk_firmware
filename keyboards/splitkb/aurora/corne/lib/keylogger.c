#include <stdio.h>
#include "action.h"
#include "keycodes.h"

char keylog_entry[6]  = {};
char keylogs_line[6] = {};
int  keylogs_line_idx = 0;

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ',  'A', 'B', 'C', 'D', 'E', 'F',
    'G', 'H', 'I', 'J',  'K', 'L', 'M', 'N', 'O', 'P',
    'Q', 'R', 'S', 'T',  'U', 'V', 'W', 'X', 'Y', 'Z',
    '1', '2', '3', '4',  '5', '6', '7', '8', '9', '0',
    ' ', ' ', ' ', ' ',  ' ', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ':', ' ', ' '
};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
    char name = ' ';
    if (keycode < 60) {
        name = code_to_name[keycode];
    }

    // update keylog
    snprintf(keylog_entry, sizeof(keylog_entry), "%c", name);

    // update keylogs
    if (keylogs_line_idx == sizeof(keylogs_line) - 1) {
        keylogs_line_idx = 0;
        for (int i = 0; i < sizeof(keylogs_line) - 1; i++) {
            keylogs_line[i] = ' ';
        }
    }

    keylogs_line[keylogs_line_idx] = name;
    keylogs_line_idx++;
}

const char *read_keylog(void) {
    return keylog_entry;
}

const char *read_keylogs(void) {
    return keylogs_line;
}

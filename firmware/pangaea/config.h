#pragma once

/* the frequency at which the switch matrix is being scanned.*/
//#define DEBUG_MATRIX_SCAN_RATE

/* key matrix size */
#define MATRIX_ROWS 5 * 2 // split keyboard
#define MATRIX_COLS 5 * 2 // duplex matrix

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#pragma once

/* the frequency at which the switch matrix is being scanned.*/
//#define DEBUG_MATRIX_SCAN_RATE

/* key matrix size */
#define MATRIX_ROWS 5 * 2 // split keyboard
#define MATRIX_COLS 5 * 2 // duplex matrix

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1

/* key matrix pin assign */
#define MATRIX_ROW_PINS { B4, B5, F4, F5, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, F6 }

/* COL2ROW, ROW2COL*/
// #define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A {D1}
#define ENCODERS_PAD_B {D0}

/* Split Keyboard specific options */
#define SOFT_SERIAL_PIN D2 /* serial communication pin */

// fix iPhone and iPad power adapter issue
// iOS device need lessthan 100
#define USB_MAX_POWER_CONSUMPTION 500

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#ifdef RGB_MATRIX_ENABLE
  #define DRIVER_LED_TOTAL 12
#endif

/* RGB LED options
 See https://docs.qmk.fm/#/feature_rgblight?id=changing-the-order-of-the-leds
*/
#undef WS2812_DI_PIN
#define WS2812_DI_PIN D3
//#define RGB_DI_PIN D3 // The pin connected to the data pin of the LEDs
#ifdef RGBLIGHT_ENABLE
  //#ifndef RGBLED_NUM
  #undef RGBLED_NUM
  #define RGBLED_NUM 12
  #define RGBLIGHT_SPLIT
  #define RGBLED_SPLIT { 6, 6 }
  #define RGBLIGHT_LED_MAP { 0,  1,  2,  3,  4,  5, \
                          11, 10,  9,  8,  7,  6 }
  /*** Effect and Animation Toggles */
  #define RGBLIGHT_EFFECT_ALTERNATING
  #define RGBLIGHT_EFFECT_BREATHING
  #define RGBLIGHT_EFFECT_CHRISTMAS
  #define RGBLIGHT_EFFECT_KNIGHT
  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
  #define RGBLIGHT_EFFECT_RGB_TEST
  #define RGBLIGHT_EFFECT_SNAKE
  #define RGBLIGHT_EFFECT_STATIC_GRADIENT
  #define RGBLIGHT_EFFECT_TWINKLE
  /*** Configuration */
  #define RGBLIGHT_LIMIT_VAL 128 // 255,The maximum brightness level
  #define RGBLIGHT_HUE_STEP 10 // The number of steps to cycle through the hue by
  #define RGBLIGHT_SAT_STEP 17 // The number of steps to increment the saturation by
  #define RGBLIGHT_VAL_STEP 17 // The number of steps to increment the brightness by
  #define RGBLIGHT_SLEEP // Not defined, If defined, the RGB lighting will be switched off when the host goes to sleep
  //#define RGBLIGHT_SPLIT // Not defined, If defined, synchronization functionality for split keyboards is added
  //#define RGBLIGHT_DEFAULT_MODE  RGBLIGHT_MODE_STATIC_LIGHT // The default mode to use upon clearing the EEPROM
  #define RGBLIGHT_DEFAULT_HUE 180 // (0:red, 180:blue) The default hue to use upon clearing the EEPROM
  #define RGBLIGHT_DEFAULT_SAT UINT8_MAX // (255) The default saturation to use upon clearing the EEPROM
  #define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL // The default value (brightness) to use upon clearing the EEPROM
  #define RGBLIGHT_DEFAULT_SPD 0 // The default speed to use upon clearing the EEPROM
  //#define RGBLIGHT_DISABLE_KEYCODES // Not defined, If defined, disables the ability to control RGB Light from the keycodes. You must use code functions to control the feature
  /*** Effect and Animation Settigs */
  //#define RGB_MATRIX_STARTUP_SPD 127
#endif


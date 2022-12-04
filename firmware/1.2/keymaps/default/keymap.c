/** Nov 27, 2022
Pangaea ver.1.2 for QMK 0.18.17
[Quantum Mechanical Keyboard Firmware](https://docs.qmk.fm/#/)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2
#define _ADJUST 3

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
 QWERTY = SAFE_RANGE, // Default layer
 LOWER,   // Layer 1
 RAISE,   // Layer 2
 ADJUST,  // Layer 3
};

#ifdef ENCODER_ENABLE
// Potentiometer, Rotary encoder
enum encoder_number {
 _1ST_ENC = 0,
 _2ND_ENC
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = LAYOUT(
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
  KC_ESC ,KC_1   ,KC_2   ,   KC_3,   KC_4,   KC_5,                   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_GRV ,
  KC_TAB ,KC_Q   ,KC_W   ,   KC_E,   KC_R,   KC_T,                   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_MINS,
  KC_LCTL,KC_A   ,KC_S   ,   KC_D,   KC_F,   KC_G,                   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT,
  KC_LSFT,KC_Z   ,KC_X   ,   KC_C,   KC_V,   KC_B,KC_LBRC,KC_RBRC,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,
          KC_LALT,KC_LGUI,  LOWER, KC_SPC, KC_DEL,                 KC_EQL, KC_ENT,  RAISE,KC_BSPC,KC_RGUI,
                  _______,_______,_______,                                _______,_______,_______
  ),
  [_LOWER] = LAYOUT(
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,                  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_0,_______,
   KC_GRV,KC_EXLM,  KC_AT,KC_HASH, KC_DLR,KC_PERC,                KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_TILD,
  _______,_______,_______,_______,_______,_______,QK_BOOT,_______,_______,KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PIPE,
          _______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,
                  _______,_______,_______,                                _______,_______,_______
   ),
  [_RAISE] = LAYOUT(
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
    KC_GRV,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,_______,
    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,                _______,KC_LEFT,KC_DOWN,  KC_UP,KC_RGHT,_______,
    KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,QK_BOOT,_______,KC_PLUS,KC_MINS, KC_EQL,KC_LBRC,KC_RBRC,KC_BSLS,
          _______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,
                  _______,_______,_______,                                _______,_______,_______
  ),
  [_ADJUST] = LAYOUT(
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
  _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,
    KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,QK_BOOT,_______, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17,KC_F18 ,
          _______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,
                  _______,_______,_______,                                _______,_______,_______
  ),
};


// Layers and macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
   case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}

#ifdef ENCODER_ENABLE
// Rotary encoder
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* first encoder, left side */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
  } else if (index == 1) { /* second encoder, right side */
        if (clockwise) {
            tap_code(KC_PGUP); /* Mouse Wheel Up */
        } else {
            tap_code(KC_PGDN); /* Mouse Wheel Down */
        }
  }
  return 1;
}
#endif

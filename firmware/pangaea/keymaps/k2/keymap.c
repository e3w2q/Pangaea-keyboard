/** Nov 30, 2022
Pangaea ver.1.2 for QMK 0.22.10
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

#if __has_include("p.h")
  #include "p.h"
#else
  #define BLPW "yours"
  #define ID "yours"
  #define PW "yours"
  #define EMAILADDR "yours"
  #define ADMID "yours"
  #define ADMPW "yours"
#endif

#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2
#define _ADJUST 3
#define _DBG    4

#ifdef OLED_ENABLE
static uint16_t key_count = 0;
#endif

// Supuer ALT-TAB: while holding ALT key and press tab and release tab key.
bool is_alt_tab_active = false;
uint16_t alt_tab_timer = 0;

// Supuer WIN-SPC: while holding Windows key and press space and release space key.
bool is_win_spc_active = false;
uint16_t win_spc_timer = 0;

// Supuer CTL-SPC: while holding Control key and press space and release space key.
bool is_ctl_spc_active = false;
uint16_t ctl_spc_timer = 0;

// Supuer ALT-PSRN: while holdiuming ALT key and press PSCR and release PSCR key.
bool is_alt_pscr = false;
uint16_t alt_pscr_timer = 0;

// Defines the keycodes used by macros in process_record_user
enum custom_keycodes {
 QWERTY = SAFE_RANGE, // default layer
 LOWER,   // Layer 1
 RAISE,   // Layer 2
 ADJUST,  // Layer 3
 WIN_SPC, // Super WIN SPACE :  switch Input Methkd
 CTL_SPC, // Super CTL SPACE :  toggle Input Method
 ALT_TAB, // Super ALT TAB   :  change Appliation
 ALT_PSCR,// Super ALT PSCR  :  capture active window
 GID,     // macro: ID
 GPW,     // macro: Password
 BL,      // macro: BitLocker
 ADMIN,   // macro: Admin ID
 EMAIL,   // macro: email
 IMEON,   // macro: IME On
 IMEOFF,  // macro: IME Off
};

#ifdef ENCODER_ENABLE
// Potentiometer, Rotary encoder
enum encoder_number {
 _1ST_ENC = 0,
 _2ND_ENC
};
#endif

// Control +
#define K2_CAD LCTL(LALT(KC_DEL))    // Control + Alt + Delete
#define K2_AF4 LALT(KC_F4)           // Alt + F4 : close window
#define K2_AT  LALT(KC_TAB)          // Alt + Tab
#define K2_CZ  LCTL(KC_Z)            // Ctrl + Z
#define K2_CX  LCTL(KC_X)            // Ctrl + X
#define K2_CC  LCTL(KC_C)            // Ctrl + C
#define K2_CV  LCTL(KC_V)            // Ctrl + V
#define K2_CW  LCTL(KC_W)            // Ctrl + W
#define K2_CR  LCTL(KC_R)            // Ctrl + R
#define K2_CE  LCTL(KC_E)            // Ctrl + E
#define K2_CA  LCTL(KC_A)            // Ctrl + A
#define K2_CS  LCTL(KC_S)            // Ctrl + S
#define K2_CZ  LCTL(KC_Z)            // Ctrl + Z
// Windows + M
#define K2_WW  LGUI(KC_W)            // Win + W
#define K2_WA  LGUI(KC_A)            // Win + A
#define K2_WS  LGUI(KC_S)            // Win + S
#define K2_WD  LGUI(KC_D)            // Win + D
#define K2_WE  LGUI(KC_E)            // Win + E
#define K2_WF  LGUI(KC_F)            // Win + F
#define K2_WZ  LGUI(KC_Z)            // Win + Z
#define K2_WX  LGUI(KC_X)            // Win + X
#define K2_WC  LGUI(KC_C)            // Win + C
#define K2_WV  LGUI(KC_V)            // Win + V
#define K2_WK  LGUI(KC_K)            // Win + K
#define K2_WN  LGUI(KC_N)            // Win + N
#define K2_WM  LGUI(KC_M)            // Win + M
#define K2_WP  LGUI(KC_P)            // Win + P
// Windows: Control active window
#define K2_WINU LGUI(KC_UP)          // maximize the window
#define K2_WIND LGUI(KC_DOWN)        // remove current app from screen or miminimize the desktop window
#define K2_WINR LGUI(KC_RIGHT)       // maximize the app or desktop window to the right side of the screen
#define K2_WINL LGUI(KC_LEFT)        // maximize the app or desktop window to the left sidee of the screen
// Windows: Virtual Desktops
#define K2_DADD LCTL(LGUI(KC_D))     // add a virtul desktop.
#define K2_DRHT LCTL(LGUI(KC_RIGHT)) // switch between virtual desktops you've created on the left
#define K2_DLFT LCTL(LGUI(KC_LEFT))  // switch betweek virtual desktops you've created on the right
#define K2_DDEL LCTL(LGUI(KC_F4))    // close the virtual desktop you're using
#define K2_DTAB LGUI(KC_TAB)         // open Task view
#define K2_VTAB LGUI(KC_TAB)         // open Task view
// Windows: PowerPoint
#define K2_SF5 LSFT(KC_F5)           // presentation mode at the current page
#define K2_SMLF LSFT(LCTL(KC_COMMA)) // larger font
#define K2_BIGF LCTL(LSFT(KC_DOT))   // smaller font
#define K2_DECI LALT(LSFT(KC_LEFT))  // decrease indent
#define K2_INCI LALT(LSFT(KC_RIGHT)) // increase indent
// Windows: OneNote
#define K2_WSN LGUI(LSFT(KC_N))      // launch OneNote
#define K2_WSS LGUI(LSFT(KC_S))      // take a screenshot
// Windows: Launcher
#define K2_CD  LCTL(KC_DEL)          // control + del
#define K2_CWK LCTL(LGUI(KC_K))      // control + win + K
// Windows: MS Teams, Zoom Video, Web meeting
#define K2_MUTE LCTL(LSFT(KC_M))     // mute/unmute, MS Teams
#define K2_RH   LCTL(LSFT(KC_K))     // jaise hands, MS Teams
#define K2_ZMMT LALT(KC_A)           // mute/unmute, Zoom
// Windows: misc
#define K2_WSCR LGUI(KC_PSCR)        // capture screenshot and save to Picture/screenshot folder
#define K2_ASCR LALT(KC_PSCR)        // capture active screenshot
// Windows: Hyersnap-dx
#define K2_HDXW LCTL(LSFT(KC_W))     // capture window
#define K2_HDXA LCTL(LSFT(KC_A))     // captuer Active window
// MacOS
#define K2_CS6  LGUI(LSFT(KC_6))       // Mac: Save picture of the TouchBar to as a fil: Command+Shift+6
#define K2_CCS6 LGUI(LCTL(LSFT(KC_6))) // Mac: Copy picture of screen to the clipboard: Ctrl+Command+Shift+6
#define K2_CS5  LGUI(LSFT(KC_5))       // Mac: Screenshot and recording options: Command+Shift+5
#define K2_CS4  LSFT(LGUI(KC_4))       // Mac: Save picture of selected area as a file: Command+Shift+4
#define K2_CCS4 LGUI(LCTL(LSFT(KC_4))) // Mac: Copy picture of selected area to the clipboard: Ctrl+Command+Shift+4
#define K2_CS3  LSFT(LGUI(KC_3))       // Mac: Save picture of screen as a file: Command+Shift+33
#define K2_CCS3 LCTL(LGUI(LSFT(KC_3))) // Mac: Copy picture of screen to the clipboard: Ctrl+Command+Shift+3
#define K2_CF7  LCTL(KC_F7)            // Change the way Tab moves focus
#define K2_CF1  LCTL(KC_F1)            // Turn keyboard access on or off
#define K2_CF2  LCTL(KC_F2)            // Move focus to the menu bar
#define K2_CF3  LCTL(KC_F3)            // Move focus to the Dock
#define K2_CF4  LCTL(KC_F4)            // Move focus to the active or next window
#define K2_CF5  LCTL(KC_F5)            // Move focus to the window toolbar
#define K2_CF6  LCTL(KC_F6)            // Move focus to the floating window
#define K2_WGRV LGUI(KC_GRV)           // Move focus to next window
#define K2_MFNW LGUI(KC_GRV)           // Move focus to next window
#define K2_CF8  LCTL(KC_F8)            // Move focus to status menus
// MacOS - Mission control
#define K2_CUP  LCTL(KC_UP)
#define K2_CLFT LCTL(KC_LEFT)
#define K2_CRHT LCTL(KC_RIGHT)
// iTerms2
#define K2_RSTR LSFT(LGUI(KC_R))
// Layer toggle
#define K2_LSPC LT(RAISE, KC_SPC)  // Tap Space, and hold to change layer RAISE
#define K2_RENT LT(ADJUST, KC_ENT) // Tap Enter, and hold to change layer ADJUST
// Hold key
#define K2_CTAB LCTL_T(KC_TAB)  // Tap TAB, hold control key
#define K2_ADEL ALT_T(KC_DEL)   // Tap Del, hold alt key
#define K2_GDEL LGUI_T(KC_DEL)  // Tap Del, hold GUI key
#define K2_CBS  LCTL_T(KC_BSPC) // Tab Backspace, hold control key

#if 0
#define MASTER_RIGHT
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = LAYOUT(
 _______,_______,_______,_______,_______,_______,                                _______,_______,_______,_______,_______,_______,
  KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS,
  KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                                   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, KC_EQL,
 K2_CTAB,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,_______,_______,_______,_______,   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT,
 KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,KC_LBRC,_______,_______,KC_RBRC,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,
         KC_LALT,  RAISE,KC_BSPC, K2_GDEL,XXXXXXX,                               XXXXXXX, KC_ENT, KC_SPC,  LOWER,XXXXXXX,
         _______,_______,_______,                                                        _______,_______,_______
 ),
 [_LOWER] = LAYOUT( // Lower + minus- to enter debug layout
 _______,_______,_______,_______,_______,_______,                                _______,_______,_______,_______,_______,_______,
  KC_GRV,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                                KC_F6  ,  KC_F7,  IMEON,KC_LBRC,KC_RBRC,DF(_DBG),
 K2_VTAB,_______,KC_HOME, KC_END,_______, K2_CAD,                                KC_PGUP,ALT_TAB,  KC_UP,  IMEON, IMEOFF,K2_HDXA,
 _______,_______,K2_DECI,K2_DECI,K2_INCI,K2_RSTR,_______,_______,_______,_______,KC_BSPC,KC_LEFT,KC_DOWN,KC_RGHT,KC_DEL ,KC_PIPE,
 _______,RGB_SPI,RGB_HUI,RGB_SAI,RGB_VAI,RGB_M_P,RGB_TOG,_______,_______, K2_CS3,KC_PGDN,KC_BTN1,K2_SMLF,K2_BIGF,KC_BSLS,_______,
         _______,_______,_______,_______,_______,                                _______,_______,_______,_______,_______,
         _______,_______,_______,                                                        _______,_______,_______
 ),
 [_RAISE] = LAYOUT(
 _______,_______,_______,_______,_______,_______,                                _______,_______,_______,_______,_______,_______,
 KC_TILD,_______,_______, K2_CS3, K2_CS4, K2_CS5,                                K2_CS6 ,  KC_F7,  KC_F8,  KC_F9, KC_F10,_______,
 _______,_______,  K2_WW,  K2_WE,QK_BOOT,_______,                                _______,_______, KC_INS,_______,_______,_______,
 _______,  K2_WA,  K2_WS,  K2_WD,  K2_WF,KC_BSPC,_______,_______,_______,_______,_______,_______,  K2_WK,_______,_______,_______,
 _______,  K2_WZ,  K2_WX,  K2_WC,  K2_WV, KC_DEL,RGB_TOG,_______,_______, K2_CS4,  K2_WN,K2_WM  ,K2_DECI,K2_INCI,_______,_______,
         _______,_______,_______,_______,_______,                                _______,_______,_______,_______,_______,
         _______,_______,_______,                                                        _______,_______,_______
 ),
 [_ADJUST] = LAYOUT(
 _______,_______,_______,_______,_______,_______,                                _______,_______,_______,_______,_______,_______,
 _______,_______,EMAIL  ,K2_CCS3,K2_CCS4, K2_CS5,                                K2_CCS6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11,
 _______,_______,_______,K2_DADD,QK_BOOT,_______,                                _______,_______,KC_MS_U,_______,    GPW,_______,
 _______,_______,K2_DLFT,K2_DTAB,K2_DRHT,    GID,_______,_______,_______,_______,_______,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,
 _______,_______,_______,K2_DDEL,_______,_______,ALT_TAB,_______,_______,K2_CS5, _______,KC_BTN1,KC_BTN2,KC_BTN2,_______,_______,
         _______,_______,_______,_______,_______,                                _______,_______,_______,_______,_______,
         _______,_______,_______,                                                        _______,_______,_______
 ),
 [_DBG] = LAYOUT( // Debug layout. Press ESC key to return to the default layer.
 _______,_______,_______,_______,_______,_______,                                _______,_______,_______,_______,_______,_______,
 DF(_QWERTY),RGB_M_P,RGB_M_B,RGB_M_R,RGB_M_G,RGB_M_T,                            RGB_M_P,RGB_M_B,RGB_M_R,RGB_M_SW,RGB_M_TW,DF(_QWERTY),
 _______,RGB_M_SW,RGB_M_SN,RGB_M_TW,_______,RGB_M_K,                             RGB_TOG,_______,_______,RGB_MOD,_______,_______,
 _______,RGB_HUI,RGB_SAI,RGB_SPI,RGB_VAI,RGB_MOD,_______,_______,_______,_______,RGB_VAI,RGB_SAI,RGB_HUI,RGB_SPI,   KC_A,KC_B,
 _______,RGB_HUD,RGB_SAD,RGB_SPD,RGB_VAD,RGB_RMOD,KC_1,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
         KC_1   ,   KC_2,   KC_3,   KC_4,   KC_5,                                 KC_6  ,   KC_7,   KC_8,_______,   KC_0,
         _______,_______,_______,                                                        _______,_______,_______
 ),
};


void matrix_scan_user(void) {
  if (is_alt_tab_active) {
        if (timer_elapsed(alt_tab_timer) > 500) { // wait 0.5 sec
           unregister_code(KC_LALT);
           is_alt_tab_active = false;
        }
  }
  if (is_win_spc_active) {
        if (timer_elapsed(win_spc_timer) > 500) { // wait 0.5 sec
           unregister_code(KC_LGUI);
           is_win_spc_active = false;
        }
  }
   if (is_ctl_spc_active) {
        if (timer_elapsed(ctl_spc_timer) > 750) { // wait 0.75 sec
           unregister_code(KC_LCTL);
           is_ctl_spc_active = false;
        }
  }
}


void led_set_user(uint8_t usb_led) {
}

#ifdef ENCODER_ENABLE
// Rotary encoder
bool encoder_update_user(uint8_t index, bool clockwise) {
#ifdef CONSOLE_ENABLE
  uprintf("EN: index: %u, clockwise: %u\n", index, clockwise);
#endif
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


#ifdef OLED_ENABLE
char keylog_str[24] = {};
const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
    char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
    if (keycode < 60) {
         name = code_to_name[keycode];
    }
    // update keylog
    snprintf(keylog_str, sizeof(keylog_str), "%d x %d, k%2d : %c",
               record->event.key.row, record->event.key.col, keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}
#endif


// Layers and macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
    uprintf("keycode：%u, col: %u, row: %u, pressed: %u\n", \
             keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
  switch (keycode) {
    #ifdef OLED_ENABLE
      if (record->event.pressed) {
            key_count++; // count up key press
            set_keylog(keycode, record); // display key code
      }
    #endif
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
    case ALT_TAB:
      if (record->event.pressed) {
         if (!is_alt_tab_active) {
           is_alt_tab_active = true;
           register_code(KC_LALT);
         }
      alt_tab_timer = timer_read();
      register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
    case WIN_SPC:
      if (record->event.pressed) {
         if (!is_win_spc_active) {
           is_win_spc_active = true;
           register_code(KC_LGUI);
         }
      win_spc_timer = timer_read();
      register_code(KC_SPC);
      } else {
        unregister_code(KC_SPC);
      }
      break;
    case CTL_SPC:
      if (record->event.pressed) {
         if (!is_ctl_spc_active) {
           is_ctl_spc_active = true;
           register_code(KC_LCTL);
         }
      ctl_spc_timer = timer_read();
      register_code(KC_SPC);
      } else {
        unregister_code(KC_SPC);
      }
      break;
    case ALT_PSCR:
      if (record->event.pressed) {
         if (!is_alt_pscr) {
           is_alt_pscr = true;
           register_code(KC_LALT);
         }
      alt_tab_timer = timer_read();
      register_code(KC_PSCR);
      } else {
        unregister_code(KC_PSCR);
      }
      break;
   case GID:
      if (record->event.pressed) {
        SEND_STRING(ID);  // Login ID, defined in p.h.
        SEND_STRING(SS_TAP(X_TAB));
      } else {
        SEND_STRING(PW);
        SEND_STRING(SS_TAP(X_ENTER));
      }
      break;
     case BL:
      if (record->event.pressed) {
        SEND_STRING(BLPW);
      } else {
        SEND_STRING(SS_TAP(X_ENTER));
      }
      break;
    case GPW:
      if (record->event.pressed) {
        SEND_STRING(PW);
      } else {
        SEND_STRING(SS_TAP(X_ENTER));
      }
      break;
    case ADMIN:
      if (record->event.pressed) {
        SEND_STRING(ADMID);
        SEND_STRING(SS_TAP(X_TAB));
      } else {
        SEND_STRING(ADMPW);
        SEND_STRING(SS_TAP(X_ENTER));
      }
      break;
     case EMAIL:
      if (record->event.pressed) {
        SEND_STRING(EMAILADDR);
      } else {
      }
      break;
     case IMEON: // IME On/Off --- for Mac and Windows
       if (record->event.pressed) {
         register_code(KC_LNG1);   // Mac. IME_ON
         register_code(KC_F23);     // Win
       } else {
         unregister_code(KC_LNG1); // Mac. IME_ON toggle
         unregister_code(KC_F23);   // Win
       }
       break;
    case IMEOFF:
       if (record->event.pressed) {
         register_code(KC_LNG2);   // Mac
         register_code(KC_F24);     // Win
       } else {
         unregister_code(KC_LNG2); // Mac
         unregister_code(KC_F24);   // WIn
       }
       break;
  }
  return true;
}

void matrix_init_user(void) {
  debug_enable = true;
  //debug_matrix = true;
  //debug_mouse = true;
}

#ifdef OLED_ENABLE
void oled_render_layer_state(void)
{
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("LOWER\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("RAISE\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("ADJUST\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }
}


void countup_keys(void)
{
    oled_write_ln_P(PSTR("Count"), false);

    char count_str[24];
    snprintf(count_str, sizeof(count_str), "%d", key_count);
    oled_write_ln(count_str, false);
}


bool oled_task_user(void)
{
  if (is_keyboard_master()) {
    oled_render_layer_state();
    countup_keys();
    oled_render_keylog();
  } else{
    // do nothing
  }
  return false;
}
#endif

/* Tips -----------------------------------------------------------------------------------------------------
OS が US Keyboard の設定だと JIS keyboard の特有キーである変換、無変換などを認識しない
つまり変換/無変換/ひらがな/カタカナ/全角半角など US keyboard設定では QMK の Keycode を出力しても無視される
例えばJISでのIME切り替えは全角半角のトグルだが、US Keyboard設定では Alt+` でないと切り替わらない
JIS特有の操作を使いたい場合は OS設定を JIS にした上で 目的の key code をを出力する必要がある
対策としてIME On/Off を F22,F23 などあまり利用されないところに割り当てて使う方法がある
*/

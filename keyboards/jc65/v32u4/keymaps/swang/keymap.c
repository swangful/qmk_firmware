#include "v32u4.h"

// Define Layers
#define _BASE 0
#define _RGB  1
#define _OFF  2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Keymap _BASE: (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |~ ` |
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |Del |
   * |----------------------------------------------------------------|
   * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgUp|
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|PgDn|
   * |----------------------------------------------------------------|
   * |Ctrl|Win |Alt |        Space          |Alt| FN|Ctrl|Lef|Dow|Rig |
   * `----------------------------------------------------------------'
   */

  [_BASE] = KEYMAP(
      KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_BSPC, KC_GRAVE,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
      KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP,
      KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN,
      KC_LCTL, KC_LGUI, KC_LALT, KC_SPACE, KC_SPACE, KC_SPACE, KC_RALT, MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
      ),

/* RGB_MODE_PLAIN 	RGB_M_P 	Static (no animation) mode
* RGB_MODE_BREATHE 	RGB_M_B 	Breathing animation mode
* RGB_MODE_RAINBOW 	RGB_M_R 	Rainbow animation mode
* RGB_MODE_SWIRL 	  RGB_M_SW 	Swirl animation mode
* RGB_MODE_SNAKE 	  RGB_M_SN 	Snake animation mode
* RGB_MODE_KNIGHT 	RGB_M_K 	"Knight Rider" animation mode
* RGB_MODE_XMAS 	  RGB_M_X 	Christmas animation mode
* RGB_MODE_GRADIENT RGB_M_G 	Static gradient animation mode
* P = Vol Down
* [ = Vol Up
* ] = Mute
* LEFT = Previous track
* DOWN = Pause track
* RIGHT = Next track
* ` = Print Screen
* Left CTRL = Mash Layer
*/

  [_RGB] = KEYMAP(
      TO(0), RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_PSCR,
      KC_NO, RGB_TOG, RGB_VAI, RGB_VAD, RGB_HUI, RGB_HUD, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_MUTE, KC_DEL, KC_NO,
      KC_NO, RGB_SAI, RGB_SAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      TG(2), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT
      ),


    /* Keymap _BASE: (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * |BASE|  |   |   |   |   |   |   |   |   |   |   |   |      |     |
   * |----------------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |    |
   * |----------------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |       |     |
   * |----------------------------------------------------------------|
   * |       |   |   |   |   |   |   |   |   |   |   |     |    |     |
   * |----------------------------------------------------------------|
   * |RESET|    |    |                       |   |   |    |   |   |   |
   * `----------------------------------------------------------------'
   */

  [_OFF] = KEYMAP(
      TO(0),  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,  KC_NO,
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,  KC_NO,
      KC_NO,  KC_NO,  KC_NO,          KC_NO,  KC_NO,  KC_NO,                          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
  ),
};

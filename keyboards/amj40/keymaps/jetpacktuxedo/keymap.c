#include "amj40.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Default Layer
   * ,-----------------------------------------------------------.
   * | Esc|  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P | BS |
   * |-----------------------------------------------------------|
   * | Tab |  A |  S |  D |  F |  G |  H |  J |  K |  L | Ent    |
   * |-----------------------------------------------------------|
   * | LSft   |  Z |  X |  C |  V |  B |  N |  M |  , | RSFT| FN3|
   * |-----------------------------------------------------------|
   * | LCtl | LGui| LAlt|  spc fn0  |  spc fn1   |RALT|RGUI|RCTL |
   * `-----------------------------------------------------------'
   */
  [0] = KEYMAP( \
      KC_GESC,       KC_Q,    KC_W,   KC_E, KC_R, KC_T,    KC_Y, KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC,\
      LT(2, KC_TAB), KC_A,    KC_S,   KC_D, KC_F, KC_G,    KC_H, KC_J,    KC_K,    KC_L,    LT(2, KC_ENT),\
      KC_LSFT,       KC_Z,    KC_X,   KC_C, KC_V, KC_B,    KC_N, KC_M,    KC_COMM, MT(MOD_RSFT, KC_DOT), LT(3, KC_SLSH),\
      KC_LCTL,       KC_LGUI, KC_LALT,      LT(1, KC_SPC), LT(1, KC_SPC), KC_RALT, KC_RGUI, KC_RCTL \
      ),

  /* Default Layer
   * ,-----------------------------------------------------------.
   * |  ` |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 | DEL|
   * |-----------------------------------------------------------|
   * |     |  - |  = |  ; |  ' |    |  ← |  ↓ |  ↑ |  → |        |
   * |-----------------------------------------------------------|
   * |        |    |    |    |    |    |    |    |  [ |   ] |    |
   * |-----------------------------------------------------------|
   * |      |     |     |           |            |    |    |     |
   * `-----------------------------------------------------------'
   */
  [1] = KEYMAP( \
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
      KC_TRNS, KC_MINS, KC_EQL,  KC_SCLN, KC_QUOT, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, \
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, \
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS\
      ),

  /* Default Layer
   * ,-----------------------------------------------------------.
   * |  ~ |  ! |  @ |  # |  $ |  % |  ^ |  & |  * |  ( |  ) | DEL|
   * |-----------------------------------------------------------|
   * |     |  _ |  + |  : |  " |    |HOME|PGDN|PGUP| END|        |
   * |-----------------------------------------------------------|
   * |        |    |    |    |    |    |    |    |  { |   } |    |
   * |-----------------------------------------------------------|
   * |      |     |     |           |            |    |    |     |
   * `-----------------------------------------------------------'
   */
  [2] = KEYMAP( \
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,\
      KC_TRNS, KC_UNDS, KC_PLUS, KC_COLN, KC_DQUO, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS, \
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_TRNS, \
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS\
      ),

  /* Default Layer
   * ,-----------------------------------------------------------.
   * |    | F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10|RSET|
   * |-----------------------------------------------------------|
   * |     |    |    |    |    |    |    |    | F11| F12|        |
   * |-----------------------------------------------------------|
   * |        |    |    |    |    |    |    |    |    |     |    |
   * |-----------------------------------------------------------|
   * |      |     |     |           |            |    |    |     |
   * `-----------------------------------------------------------'
   */
  [3] = KEYMAP( \
      KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, RESET,\
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11,  KC_F12,  KC_TRNS, \
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS\
      ),
};

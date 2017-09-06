#include "roadkit.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = /* Numpad */
    SINGLES_KEYMAP(KC_7, KC_8,    KC_9,    KC_PMNS,  \
                   KC_4, KC_5,    KC_6,    KC_PPLS, \
                   KC_1, KC_2,    KC_3,    LT(1, KC_PAST), \
                   KC_0, KC_PDOT, KC_PSLS, MT(MOD_RSFT, KC_PENT)),
  [1] = /* LAYER 1 */
    SINGLES_KEYMAP(KC_NUMLOCK, KC_TRNS, KC_TRNS,  KC_VOLU, \
                   KC_TRNS,    KC_UP,   KC_TRNS,  KC_VOLD, \
                   KC_LEFT,    KC_DOWN, KC_RIGHT, KC_TRNS, \
                   KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS)
};

const uint16_t PROGMEM fn_actions[] = {
};

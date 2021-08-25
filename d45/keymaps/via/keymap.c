#include QMK_KEYBOARD_H

enum {
  TD_COPY_PASTE
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_COPY_PASTE] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_C), LCTL(KC_V)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    TD(TD_COPY_PASTE), KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPC,  KC_DEL,
    KC_F5, KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGUP,
    KC_F4, KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_PGDN,
    KC_F3, KC_LGUI,  KC_LWIN,  LT(1, KC_SPACE),                        MO(1),   KC_RGUI,   KC_RALT,                       KC_LEFT,  KC_DOWN, KC_RIGHT
  ),

  [1] = LAYOUT(
    KC_TAB,KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,  RESET,  KC_PGUP,
    KC_F8, KC_CAPS,  RGB_MOD,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         EEP_RST,   KC_PGDN,
    KC_F7, KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
    KC_F6, KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,   KC_SPC,   KC_SPC,                       KC_RALT,  KC_LEFT,  KC_DOWN
  ),
  [2] = LAYOUT(
    KC_TAB,KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,  RESET,  KC_PGUP,
    KC_F8, KC_CAPS,  RGB_MOD,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         EEP_RST,   KC_PGDN,
    KC_F7, KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
    KC_F6, KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,   KC_SPC,   KC_SPC,                       KC_RALT,  KC_LEFT,  KC_DOWN
  ),  
  [3] = LAYOUT(
    KC_TAB,KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,  RESET,  KC_PGUP,
    KC_F8, KC_CAPS,  RGB_MOD,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         EEP_RST,   KC_PGDN,
    KC_F7, KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
    KC_F6, KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,   KC_SPC,   KC_SPC,                       KC_RALT,  KC_LEFT,  KC_DOWN
  ),  
};

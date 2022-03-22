#include QMK_KEYBOARD_H

enum {
  TD_COPY_PASTE_MAC,
  TD_COPY_PASTE_WIN,
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_COPY_PASTE_WIN] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_C), LCTL(KC_V)), // windows,
  [TD_COPY_PASTE_MAC] = ACTION_TAP_DANCE_DOUBLE(LCMD(KC_C), LCMD(KC_V)) // mac,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
    TD(TD_COPY_PASTE_MAC), KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPC,  KC_DEL,
    LOPT(LCMD(KC_I)), KC_ESC,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGUP,
    LCMD(KC_R), KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_PGDN,
    KC_LOPT, KC_LCTL,  KC_LCMD,  LT(2, KC_SPACE),                        LT(2, KC_SPACE),   KC_RGUI,   KC_ROPT,                       KC_LEFT,  KC_DOWN, KC_RIGHT
  ),

  [1] = LAYOUT(
    TD(TD_COPY_PASTE_WIN), KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPC,  KC_DEL,
    KC_F12, KC_ESC,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGUP,
    KC_F5, KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_PGDN,
    KC_F5, KC_LCTL,  KC_LALT,  LT(2, KC_SPACE),                        LT(2, KC_SPACE),   KC_RGUI,   KC_RALT,                       KC_LEFT,  KC_DOWN, KC_RIGHT
  ),

  [2] = LAYOUT(
    KC_TAB,KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSLS,  RGB_HUI,
    KC_F8, KC_CAPS,  RGB_MOD,     KC_S,     KC_D,     KC_F,     KC_G,     KC_LEFT,     KC_DOWN,     KC_UP,     KC_RIGHT,     KC_SCLN,  KC_QUOT,         EEP_RST,   RGB_HUD,
    KC_F7, KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    RGB_MOD,
    KC_F6, KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,   KC_SPC,   KC_SPC,                       KC_RALT,  KC_LEFT,  KC_DOWN
  ),

  [3] = LAYOUT(
    KC_TAB,KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,  RESET,  KC_PGUP,
    KC_F8, KC_CAPS,  RGB_MOD,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         EEP_RST,   KC_PGDN,
    KC_F7, KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
    KC_F6, KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,   KC_SPC,   KC_SPC,                       KC_RALT,  KC_LEFT,  KC_DOWN
  ),  

};

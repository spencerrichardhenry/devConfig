#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define HOME_S KC_S
#define HOME_D KC_D
#define HOME_F KC_F
#define HOME_L KC_L
#define HOME_K KC_K
#define HOME_J KC_J
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  ST_MACRO_0,
  EMAIL_MACRO,
  TEST_PASSWORD_MACRO,
  WISPRFLOW
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LALT(LGUI(LSFT(KC_T))),                         KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    MO(2),          KC_A,           HOME_S,         HOME_D,         HOME_F          ,KC_G,           KC_F12,                                                                        KC_TRANSPARENT, KC_H,           HOME_J,         HOME_K,         HOME_L,         KC_SCLN,     KC_COLN, 
    MO(1),          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,      
    WISPRFLOW,      EMAIL_MACRO, TEST_PASSWORD_MACRO, KC_TRANSPARENT, KC_TRANSPARENT,TD(DANCE_0),                                                                                                   AS_TOGG,        KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       OSL(5),         
    MT(MOD_LSFT, KC_SPACE), KC_ENTER, KC_LCTL,                 LALT(LSFT(KC_LGUI)),KC_DELETE,      KC_BSPC
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          TD(DANCE_1),    KC_EXLM,        KC_AMPR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_LBRC,    KC_RBRC,        KC_EQUAL,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_DLR,         ST_MACRO_0,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_QUOTE,       KC_LPRN,        KC_RPRN,    KC_MINUS,       KC_SCLN,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_PERC,        KC_AT,          KC_HASH,        KC_CIRC,                                        KC_GRAVE,       KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, TO(1),          KC_NO,          TO(3),          TO(4),          TO(6),          KC_TRANSPARENT,                                 TO(0),          KC_KP_0,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_F16),   TD(DANCE_5),    LALT(KC_F17),   LALT(KC_F18),   LALT(KC_F19),   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_0,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_MINUS,       KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_LEFT),  TD(DANCE_7),    LALT(KC_RIGHT), LSFT(KC_F6),    KC_F2,          KC_NO,                                          KC_TRANSPARENT, KC_KP_0,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_F20),   LALT(KC_F21),   LALT(KC_F22),   LALT(KC_F23),   KC_NO,                                                                          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,                                  TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_TRANSPARENT, KC_AUDIO_VOL_UP,                                KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          DT_UP,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,                                                                KC_TRANSPARENT, KC_NO,          KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,DT_DOWN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          DT_PRNT,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_7,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_CAPS,    KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_8,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_K,           KC_L, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LSFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LCTL,       KC_LALT,        KC_LGUI,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LSFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LBRC,    KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_CAPS,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_RBRC,    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LSFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LCTL,       KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,        KC_END,                                                                                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE, KC_TRANSPARENT, KC_HOME,                        TD(DANCE_9),    KC_INSERT,      KC_DELETE
  ),
};

const uint16_t PROGMEM combo_left_gui[]          = { KC_R,    HOME_F, COMBO_END};
const uint16_t PROGMEM combo_right_gui[]         = { KC_U,    HOME_J, COMBO_END};
const uint16_t PROGMEM combo_right_alt[]         = { KC_I,    HOME_K, COMBO_END};
const uint16_t PROGMEM combo_right_alt_layer_2[] = { KC_RPRN, KC_RBRC, COMBO_END};
const uint16_t PROGMEM combo_caps_lock[]         = { KC_R, KC_T, KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM combo_mouse_layer[]       = { KC_BSPC, KC_J, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_left_gui,          OSM(MOD_LGUI)),
    COMBO(combo_right_gui,         OSM(MOD_LGUI)),
    COMBO(combo_right_alt,         OSM(MOD_LALT)),
    COMBO(combo_right_alt_layer_2, OSM(MOD_LALT)),
    COMBO(combo_caps_lock,         KC_CAPS),
    COMBO(combo_mouse_layer,       MO(3)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    if(IS_RETRO(keycode)) return true;

    switch(keycode) {
        case KC_LPRN:
        case KC_RPRN:
            return true;
        default:
            return false;
    }
}

void autoshift_press_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
    switch(keycode) {
        case KC_LPRN:
            register_code16((!shifted) ? KC_LPRN : KC_LCBR);
            break;
        case KC_RPRN:
            register_code16((!shifted) ? KC_RPRN : KC_RCBR);
            break;
        default:
            if (shifted) {
                add_weak_mods(MOD_BIT(KC_LSFT));
            }
            // & 0xFF gets the Tap key for Tap Holds, required when using Retro Shift
            register_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode);
    }
}

void autoshift_release_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
    switch(keycode) {
        case KC_LPRN:
            unregister_code16((!shifted) ? KC_LPRN : KC_LCBR);
            break;
        case KC_RPRN:
            unregister_code16((!shifted) ? KC_RPRN : KC_RCBR);
            break;
        default:
            // & 0xFF gets the Tap key for Tap Holds, required when using Retro Shift
            // The IS_RETRO check isn't really necessary here, always using
            // keycode & 0xFF would be fine.
            unregister_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode);
    }
}

// River Fountain   {130,193,144}
// White            {0,0,255}
// Black            {0,0,0}
// Alarming Slime {89,198,232}
// Purple {213,130,204}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {130,193,144}, {130,193,144}, {0,0,255}, {0,0,255}, {43,255,255}, {213,130,204}, {130,193,144}, {130,193,144}, {130,193,144}, {89,198,232}, {213,130,204}, {130,193,144}, {130,193,144}, {130,193,144}, {0,245,220}, {213,130,204}, {130,193,144}, {130,193,144}, {130,193,144}, {0,0,0}, {213,130,204}, {130,193,144}, {130,193,144}, {130,193,144}, {0,0,0}, {213,130,204}, {130,193,144}, {130,193,144}, {130,193,144}, {89,198,232}, {0,0,0}, {89,198,232}, // last 3 are left inside 3
            {130,193,144}, {130,193,144}, {213,130,204}, {130,193,144},  // Thumbs top down then triangle
            {0,0,0}, {0,0,0}, {130,193,144}, {130,193,144}, {213,130,204}, {213,130,204}, {130,193,144}, {213,130,204}, {213,130,204}, {213,130,204}, {213,130,204}, {130,193,144}, {130,193,144}, {213,130,204}, {213,130,204}, {213,130,204}, {130,193,144}, {130,193,144}, {213,130,204}, {213,130,204}, {213,130,204}, {130,193,144}, {130,193,144}, {130,193,144}, {213,130,204}, {213,130,204}, {130,193,144}, {130,193,144}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, // last 3 are right inside 3
            {130,193,144}, {130,193,144}, {89,198,232}, {130,193,144} }, // Thumbs top down then triangle

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {213,130,204}, {0,0,0}, {0,0,0}, {0,0,0}, {213,130,204}, {213,130,204}, {130,193,144}, {0,0,0}, {0,0,0}, {35,255,255}, {213,130,204}, {130,193,144}, {0,0,0}, {0,0,0}, {35,255,255}, {130,193,144}, {130,193,144}, {0,0,0}, {0,0,0}, {35,255,255}, {89,198,232}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {213,130,204}, {213,130,204}, {213,130,204}, {0,0,0}, {21,255,255}, {21,255,255}, {213,130,204}, {213,130,204}, {0,0,0}, {130,193,144}, {130,193,144}, {213,130,204}, {213,130,204}, {0,0,0}, {130,193,144}, {130,193,144}, {0,0,0}, {213,130,204}, {0,0,0}, {0,0,0}, {35,255,255}, {35,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,107,183}, {213,218,204}, {0,107,183}, {0,0,0}, {0,0,0}, {213,218,204}, {213,218,204}, {0,107,183}, {0,0,0}, {0,0,255}, {0,107,183}, {213,218,204}, {0,107,183}, {0,0,0}, {0,0,255}, {0,107,183}, {95,218,204}, {0,107,183}, {0,0,0}, {0,0,255}, {0,107,183}, {95,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {89,198,232}, {89,198,232}, {130,193,144}, {213,130,204}, {213,130,204}, {85,218,204}, {85,218,204}, {85,218,204}, {213,130,204}, {213,130,204}, {85,218,204}, {85,218,204}, {85,218,204}, {213,130,204}, {213,130,204}, {85,218,204}, {85,218,204}, {85,218,204}, {0,0,0}, {213,130,204}, {0,107,183}, {0,107,183}, {0,107,183}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {213,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {213,218,204}, {213,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {213,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {89,198,232}, {89,198,232}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {89,198,232}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {89,198,232}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {89,198,232}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {213,130,204}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,0,255}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220}, {0,245,220} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {130,193,144}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {207,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {207,218,204}, {207,218,204}, {207,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {207,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {207,218,204}, {207,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {207,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {207,218,204}, {207,218,204}, {207,218,204}, {207,218,204}, {207,218,204}, {0,0,0} },

};

bool is_caps_lock_on(void) {
    led_t led_state = host_keyboard_led_state();
    return led_state.caps_lock;
}

// Define the skip values map
int skip_values[] = {0, 1, 2, 3, 4, 5, 9, 10, 14, 15, 19, 20, 24,25,29,30,31,32,33,34,35, /*midline split*/      36,37,38,39,40,41,43,44,45,46,49,50,51,54,55,56,60,61,65,66,67,68,69,70,71};
int num_skip_values = sizeof(skip_values) / sizeof(skip_values[0]);

// Helper function to check if a value is present in the map
int is_key_alpha(int value) {
  for (int i = 0; i < num_skip_values; i++) {
    if (skip_values[i] == value) {
      return 0; // Key is skippable
    }
  }
  return 1; // Key not skippable (is alpha)
}

void set_layer_color(int layer, int capsLayer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    int useLayer = layer;
    if (is_caps_lock_on() && is_key_alpha(i)) {
        useLayer = capsLayer;
    }
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[useLayer][i][0]),
      .s = pgm_read_byte(&ledmap[useLayer][i][1]),
      .v = pgm_read_byte(&ledmap[useLayer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0, 4);
      break;
    case 1:
      set_layer_color(1, 1);
      break;
    case 2:
      set_layer_color(2, 2);
      break;
    case 3:
      set_layer_color(3, 3);
      break;
    case 4:
      set_layer_color(4, 0);
      break;
    case 5:
      set_layer_color(5, 5);
    case 6:
      set_layer_color(6, 0);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING("->");
    }
    break;
    case EMAIL_MACRO:
    if (record->event.pressed) {
        SEND_STRING("spencerrichardhenry@gmail.com");
    }
    break;
    case TEST_PASSWORD_MACRO:
    if (record->event.pressed) {
        SEND_STRING("123Ziggs45678!");
    }
    break;
    case WISPRFLOW:
    if (record->event.pressed) {
        register_code16(LALT(KC_F16));
    } else {
        unregister_code16(LALT(KC_F16));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[10];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_SPACE));
        tap_code16(LCTL(KC_SPACE));
        tap_code16(LCTL(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_SPACE));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_SPACE)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_SPACE)); register_code16(LCTL(KC_SPACE));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_SPACE)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_SPACE)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case SINGLE_HOLD: register_code16(KC_UP); break;
        case DOUBLE_TAP: register_code16(KC_PGUP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_PGUP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_LEFT); break;
        case DOUBLE_TAP: register_code16(LALT(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT); break;
        case DOUBLE_TAP: register_code16(LALT(KC_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case SINGLE_HOLD: register_code16(KC_UP); break;
        case DOUBLE_TAP: register_code16(KC_PGUP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_PGUP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_LEFT); break;
        case DOUBLE_TAP: register_code16(LALT(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT); break;
        case DOUBLE_TAP: register_code16(LALT(KC_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[8].step = 0;
}

void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
    }
    if(state->count > 3) {
        tap_code16(KC_PGUP);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_PGUP); break;
        case DOUBLE_TAP: register_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGUP); register_code16(KC_PGUP);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_PGUP); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGUP); break;
    }
    dance_state[9].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
};

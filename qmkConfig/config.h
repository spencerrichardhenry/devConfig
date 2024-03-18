/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 7200000

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 6

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 72

#define NO_AUTO_SHIFT_TAB
#define FIRMWARE_VERSION u8"yG4Dn/QPKnp"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT

#define RGB_MATRIX_STARTUP_SPD 60


// spencer stuff
#define TAPPING_TERM 155
// #define RETRO_SHIFT 1500
#define TAPPING_TERM_PER_KEY
// #define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define COMBO_COUNT 8
#define COMBO_TERM 50
#define TAP_HOLD_CAPS_DELAY 80
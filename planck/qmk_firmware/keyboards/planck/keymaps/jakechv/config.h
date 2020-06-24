#ifndef CONFIG_USER_H
#define CONFIG_USER_H

// tap dance key press termination interval
#define TAPPING_TERM 250

// smooth mouse motion
// #define MOUSEKEY_INTERVAL    20
// #define MOUSEKEY_DELAY       0
// #define MOUSEKEY_TIME_TO_MAX 60
// #define MOUSEKEY_MAX_SPEED   7
// #define MOUSEKEY_WHEEL_DELAY 0

// include private macro string defined in private_string.h
// #define PRIVATE_STRING

// compile time macro string, must be in quotes
#define PUBLIC_STRING ":%s/arch=(.*)/arch=('any')\n"

// thumb key tap-shift() double tap: one shot shift (0) off (1) on
#define DT_SHIFT 1

// home block shift symbol clusters defined (no overlays required for extended symbols, undefine otherwise)
#define SHIFT_SYMBOLS

// center column TT assignments (undefine for OSM chords)
#define CENTER_TT
#define TAPPING_TOGGLE 1

// home row modifiers
#define HOME_MODS

// fix dual function timing
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

/* define the keyboard layout to be used:
 * - QWERTY
 * - SOUL
 * - COLEMAK
 * are currently supported.
 */
#define QWERTY
#endif

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP20
#define I2C1_SCL_PIN GP21

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif

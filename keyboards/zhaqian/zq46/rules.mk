# MCU name
MCU = STM32F401

# Bootloader selection
BOOTLOADER = stm32-dfu
# BOOTLOADER = tinyuf2

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = yes
RGBLIGHT_ENABLE = no
AUDIO_ENABLE = no

EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = embedded_flash

KEYBOARD_SHARED_EP = yes
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

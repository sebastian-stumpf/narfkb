#pragma once

#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROWS 8
#define MATRIX_COLS 8

#define SPLIT_USB_DETECT
#define USE_SERIAL

// If you don't want to use full duplex you can specify GP12/GP13 below and use the remaining
// pin for somehting else
// #define SOFT_SERIAL_PIN GP13
// #define SERIAL_PIO_USE_PIO1

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP12
#define SERIAL_USART_RX_PIN GP13
#define SERIAL_USART_PIN_SWAP

#define MATRIX_ROW_PINS { GP3, GP4, GP5, GP6 }
#define MATRIX_COL_PINS { GP15, GP26, GP27, GP28, GP29, GP11, GP10, GP9 }

#define ENCODERS_PAD_A { GP14 }
#define ENCODERS_PAD_B { GP8 }

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

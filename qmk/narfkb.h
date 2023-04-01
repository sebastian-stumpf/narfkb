#pragma once

#include "quantum.h"

#define LAYOUT( \
  L00, L01, L02, L03, L04,                                     R04, R03, R02, R01, R00, \
  L10, L11, L12, L13, L14,           L15,       R15,           R14, R13, R12, R11, R10, \
  L20, L21, L22, L23, L24, L25, L26, L27,       R27, R26, R25, R24, R23, R22, R21, R20, \
                           L30, L31, L32,       R32, R31, R30 \
  ) \
  { \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14, KC_NO, KC_NO, L15 }, \
    { L20, L21, L22, L23, L24, L25, L26, L27 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, L30, L31, L32 }, \
    { R00, R01, R02, R03, R04 }, \
    { R10, R11, R12, R13, R14, KC_NO, KC_NO, R15 }, \
    { R20, R21, R22, R23, R24, R25, R26, R27 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, R30, R31, R32 } \
  }

// Copyright 2022 Robert Snyder (@immeraufdemhund)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT(\
    L00, L01, L02, L03, L04, L05,                     R60, R61, R62, R63, R64, R65, \
    L10, L11, L12, L13, L14, L15,                     R70, R71, R72, R73, R74, R75, \
    L20, L21, L22, L23, L24, L25,                     R80, R81, R82, R83, R84, R85, \
    L30, L31, L32, L33, L34, L35,                     R90, R91, R92, R93, R94, R95, \
    L40, L41, L42, L43, L44,                               RA1, RA2, RA3, RA4, RA5, \
                                L51, L52,    RB3, RB4,                              \
                            L45,L55, L53,    RB2, RB0, RA0,                         \
                                     L54,    RB1                                    \
    )\
    {\
        { L00, L01, L02, L03, L04, L05 },     \
        { L10, L11, L12, L13, L14, L15 },     \
        { L20, L21, L22, L23, L24, L25 },     \
        { L30, L31, L32, L33, L34, L35 },     \
        { L40, L41, L42, L43, L44, L45 },     \
        { KC_NO, L51, L52, L53, L54, L55 },   \
\
        { R60, R61, R62, R63, R64, R65 },    \
        { R70, R71, R72, R73, R74, R75 },    \
        { R80, R81, R82, R83, R84, R85 },    \
        { R90, R91, R92, R93, R94, R95 },    \
        { RA0, RA1, RA2, RA3, RA4, RA5 },    \
        { RB0, RB1, RB2, RB3, RB4, KC_NO }   \
}


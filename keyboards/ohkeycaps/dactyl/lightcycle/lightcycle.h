// Copyright 2022 Robert Snyder (@immeraufdemhund)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT(\
    L00, L01, L02, L03, L04, L05,                     R50, R51, R52, R53, R54, R55, \
    L10, L11, L12, L13, L14, L15,                     R60, R61, R62, R63, R64, R65, \
    L20, L21, L22, L23, L24, L25,                     R70, R71, R72, R73, R74, R75, \
    L30, L31, L32, L33, L34,                               R81, R82, R83, R84, R85, \
                                L41, L42,    R93, R94,                              \
                            L35,L45, L43,    R92, R90, R80,                         \
                                     L44,    R91                                    \
    )\
    {\
        { L00, L01, L02, L03, L04, L05 },     \
        { L10, L11, L12, L13, L14, L15 },     \
        { L20, L21, L22, L23, L24, L25 },     \
        { L30, L31, L32, L33, L34, L35 },     \
        { KC_NO, L41, L42, L43, L44, L45 },   \
\
        { R50, R51, R52, R53, R54, R55 },    \
        { R60, R61, R62, R63, R64, R65 },    \
        { R70, R71, R72, R73, R74, R75 },    \
        { R80, R81, R82, R83, R84, R85 },    \
        { R90, R91, R92, R93, R94, KC_NO }   \
}


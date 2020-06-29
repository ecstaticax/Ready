/*
 vice_plus4.c -- Plus/4 Specifics
 Copyright (C) 2020 Dieter Baron
 
 This file is part of C64, a Commodore 64 emulator for iOS, based on VICE.
 The authors can be contacted at <c64@spiderlab.at>
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 02111-1307  USA.
 */

#include <stdio.h>

// TODO: include correct file?
extern void plus4model_set(int model);

void model_set(int model) {
    // plus4model_set(model); // TODO: enable
}

void cartridge_trigger_freeze(void) { // TODO: add support
}

int canvas_has_partial_updates = 1;

uint32_t palette[] = {
    0x000000ff,
    0x171717ff,
    0x46070aff,
    0x002a26ff,
    0x3e0246ff,
    0x003300ff,
    0x0f0d70ff,
    0x1f2100ff,
    0x3e0e00ff,
    0x301700ff,
    0x0f2b00ff,
    0x460326ff,
    0x00310aff,
    0x031761ff,
    0x1f0770ff,
    0x033100ff,
    0x000000ff,
    0x262626ff,
    0x591417ff,
    0x013b37ff,
    0x510c59ff,
    0x054501ff,
    0x1e1c85ff,
    0x303200ff,
    0x511c01ff,
    0x422700ff,
    0x1e3c00ff,
    0x590e37ff,
    0x014217ff,
    0x0f2675ff,
    0x301385ff,
    0x0f4300ff,
    0x000000ff,
    0x373737ff,
    0x6d2327ff,
    0x0c4e49ff,
    0x641b6dff,
    0x12580cff,
    0x2e2c9bff,
    0x414400ff,
    0x642c0cff,
    0x553800ff,
    0x2e4e00ff,
    0x6d1d49ff,
    0x0c5527ff,
    0x1d378aff,
    0x41229bff,
    0x1d5600ff,
    0x000000ff,
    0x4a4a4aff,
    0x813338ff,
    0x1a615dff,
    0x792a82ff,
    0x206c1aff,
    0x3f3db1ff,
    0x545700ff,
    0x793d1aff,
    0x684a07ff,
    0x3f6200ff,
    0x812d5dff,
    0x1a6938ff,
    0x2d49a0ff,
    0x5433b1ff,
    0x2d6907ff,
    0x000000ff,
    0x7b7b7bff,
    0xb86267ff,
    0x449690ff,
    0xaf58b9ff,
    0x4ca144ff,
    0x706debff,
    0x878a1fff,
    0xaf6e44ff,
    0x9d7c2bff,
    0x70961fff,
    0xb85a90ff,
    0x449e67ff,
    0x5b7bd9ff,
    0x8762ebff,
    0x5b9e2bff,
    0x000000ff,
    0x9b9b9bff,
    0xdb8186ff,
    0x61b7b1ff,
    0xd176dcff,
    0x69c360ff,
    0x8f8cffff,
    0xa8ab38ff,
    0xd18d60ff,
    0xbf9c45ff,
    0x8fb738ff,
    0xdb79b1ff,
    0x61c086ff,
    0x799bfdff,
    0xa880ffff,
    0x79c045ff,
    0x000000ff,
    0xe0e0e0ff,
    0xffc3c9ff,
    0xa0fef8ff,
    0xffb7ffff,
    0xa9ff9fff,
    0xd3d0ffff,
    0xedf171ff,
    0xffd19fff,
    0xffe081ff,
    0xd3fe71ff,
    0xffbaf8ff,
    0xa0ffc9ff,
    0xbbe0ffff,
    0xedc3ffff,
    0xbbff81ff,
    0x000000ff,
    0xffffffff,
    0xffffffff,
    0xfdffffff,
    0xffffffff,
    0xfffffdff,
    0xffffffff,
    0xffffc9ff,
    0xfffffdff,
    0xffffdbff,
    0xffffc9ff,
    0xffffffff,
    0xfdffffff,
    0xffffffff,
    0xffffffff,
    0xffffdbff
};
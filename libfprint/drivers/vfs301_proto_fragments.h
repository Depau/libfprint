/*
 * vfs301/vfs300 fingerprint reader driver
 * https://github.com/andree182/vfs301
 *
 * Copyright (c) 2011-2012 Andrej Krutak <dev@andree.sk>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/* There are many similar blocks in the data below, also the data are
 * self-similar (looks like some config blocks? pokes like in vfs101?) */

/* Don't take the grouping below for granted - it's quite possible
 * I missed some block start, or split data that should be together.
 * It's quite challenging, this reverse engineering... :-) */

#define __01 0x88   /* sometimes also 0x87? depending on what? */

static const unsigned char vfs301_06_1[] = { /* 2401 B */
  0x06, 0x00, 0x00, 0x54, 0x09, 0x00, 0x0F, 0x00, 0x60,
  0xD8, 0x0C, 0x00, 0x60,
  0xD4, 0x0C, 0x00, 0x60,
  0x18, 0x17, 0x00, 0x60,
  0x28, 0x17, 0x00, 0x60,
  0xC8, 0x0D, 0x00, 0x60,
  0x9C, 0x0B, 0x00, 0x60,
  0xD8, 0x16, 0x00, 0x60,
  0xDC, 0x16, 0x00, 0x60,
  0x00, 0x0E, 0x04, 0x30, 0xE0, 0x0C, 0x00, 0x60,
  0x07, 0x09, 0x00, 0x00, 0xFF, 0xF7, 0xFF, 0xFF, 0xCC, 0x08, 0x00, 0x60,
  0x02, 0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x48, 0x0D, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0xE0, 0x16, 0x00, 0x60,
  0x00, 0x12, 0x04, 0x30, 0xA5, 0xC2, 0x00, 0x00, 0xE4, 0x16, 0x00, 0x60,
  0xF0, 0x16, 0x00, 0x60,
  0x00, 0x0F, 0x04, 0x30, 0xB0, 0x0A, 0x00, 0x60,
  0x58, 0xB3, 0x04, 0x60,
  0x84, 0x05, 0x00, 0x60,
  0xA4, 0xED, 0x04, 0x60,
  0x8C, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x60,
  0x40, 0x08, 0x00, 0x00, 0x10, 0x03, 0x02, 0x28, 0x1C, 0x0E, 0x00, 0x60,
  0x30, 0x17, 0x00, 0x60,
  0x70, 0x0E, 0x00, 0x60,

  0xFF, 0xFF, 0xFF, 0xBF, 0xFD, 0x0C, 0x00,
  0x60, 0xF8, 0x16, 0x00, 0x60, 0xA8, 0x0B, 0x00,
  0x60, 0x08, 0x17, 0x00, 0x60, 0x18, 0x0D, 0x00,
  0x60, 0x00, 0x9E, 0x00, 0x38, 0xDC, 0x0C, 0x00,
  0x60, 0x04, 0x17, 0x00, 0x60, 0x36, 0x41, 0x00,
  0xE5, 0x59, 0x00, 0xA5, 0x65, 0x00, 0xE5, 0x5C,
  0x00, 0x25, 0x66, 0x00, 0x25, 0x58, 0x00, 0x91,
  0xC0, 0x03, 0xA1, 0xC1, 0x03, 0x0C, 0x08, 0x89,
  0x0A, 0x82, 0x49, 0x00, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x61, 0x00, 0x0C, 0x96, 0x91, 0xC2,
  0x03, 0xB1, 0xC3, 0x03, 0x71, 0xC4, 0x03, 0xD8,
  0x1B, 0x16, 0x84, 0x07, 0xC2, 0x0D, 0x4E, 0xC0,
  0xC0, 0x74, 0xE2, 0xA0, 0x71, 0x47, 0x3E, 0x05,
  0x16, 0xDC, 0x0F, 0x47, 0xBE, 0x02, 0x16, 0x4C,
  0x13, 0xF2, 0xA4, 0x6B, 0x26, 0x1C, 0x6E, 0x82,
  0xCC, 0xFE, 0x16, 0x88, 0x07, 0x16, 0x25, 0x05,
  0xC2, 0x0D, 0x4E, 0x16, 0x2C, 0x08, 0x92, 0xCC,
  0xFE, 0x16, 0x59, 0x08, 0x60, 0xAC, 0xC0, 0x16,
  0xAA, 0x10, 0xC2, 0x2D, 0x10, 0xC2, 0x0C, 0x00,
  0xA2, 0xA4, 0x6D, 0x66, 0x6C, 0x02, 0x06, 0x03,
  0x00, 0xAD, 0x0D, 0x65, 0x3B, 0x00, 0xD1, 0xC3,
  0x03, 0xD8, 0x1D, 0x16, 0xAA, 0x07, 0x0C, 0x9C,
  0xE8, 0x07, 0x62, 0x4D, 0x4E, 0xA2, 0x5E, 0x00,
  0xC0, 0xF0, 0x74, 0x60, 0xFF, 0xC0, 0x16, 0xBF,
  0x0D, 0x0C, 0x38, 0xA1, 0xC5, 0x03, 0x91, 0xC6,
  0x03, 0x99, 0x2A, 0x82, 0x4D, 0x4E, 0x0C, 0x2A,
  0xA5, 0xC6, 0x29, 0x1D, 0xF0, 0x16, 0xCD, 0x13,
  0xE8, 0x07, 0xC2, 0xA4, 0x70, 0xC2, 0x5E, 0x00,
  0xC2, 0x0D, 0x4E, 0x06, 0xDE, 0xFF, 0x16, 0xD3,
  0xF8, 0x0C, 0x9C, 0x88, 0x07, 0x62, 0x4D, 0x4E,
  0xF2, 0x58, 0x00, 0x06, 0xE0, 0xFF, 0xC2, 0x1D,
  0x24, 0x37, 0xBC, 0x34, 0x98, 0x07, 0x62, 0x4D,
  0x4E, 0xF2, 0x59, 0x00, 0x46, 0xDD, 0xFF, 0x00,
  0x00, 0x47, 0xBE, 0x02, 0x86, 0xDD, 0xFF, 0x46,
  0x01, 0x00, 0xA2, 0x1D, 0x24, 0x16, 0x3A, 0xF7,
  0xE8, 0x07, 0xC2, 0xA4, 0x6C, 0xC2, 0x5E, 0x00,
  0x62, 0x4D, 0x4E, 0x0C, 0x9C, 0xC6, 0xD8, 0xFF,
  0x00, 0xC2, 0x0D, 0x4E, 0x06, 0xE2, 0xFF, 0x00,
  0x00, 0x16, 0x83, 0xF4, 0xFD, 0x0C, 0xF9, 0x01,
  0xC7, 0xB3, 0x03, 0x8D, 0x03, 0x89, 0x01, 0xA8,
  0xFD, 0xBD, 0x02, 0xC2, 0x21, 0x00, 0xA5, 0x80,
  0x2D, 0xB1, 0xC3, 0x03, 0xD8, 0x1B, 0xA8, 0x01,
  0xC8, 0xFD, 0xAA, 0xCC, 0xC9, 0xFD, 0xD8, 0x1B,
  0x92, 0x1D, 0x24, 0xE2, 0xA0, 0x71, 0xA0, 0x99,
  0xC0, 0x92, 0x5D, 0x24, 0x46, 0xC5, 0xFF, 0x00,
  0x00, 0xF2, 0xA0, 0x72, 0x8D, 0x03, 0x89, 0x01,
  0x40, 0xFF, 0xC0, 0x37, 0xBF, 0x03, 0x8D, 0x0F,
  0x89, 0x01, 0xBD, 0x02, 0xA2, 0x2D, 0x11, 0xC8,
  0x01, 0x4A, 0xAA, 0xE5, 0x7C, 0x2D, 0xE2, 0xA0,
  0x71, 0xC8, 0x01, 0xB1, 0xC3, 0x03, 0xCA, 0x22,
  0xC0, 0x33, 0xC0, 0xD8, 0x1B, 0xCA, 0x44, 0xC2,
  0x0D, 0x4E, 0x46, 0xB3, 0xFF, 0xA1, 0xC2, 0x03,
  0xE5, 0x70, 0x2D, 0xC6, 0xC9, 0xFF, 0xA2, 0x2D,
  0x11, 0x0C, 0x1E, 0xE2, 0x4D, 0x4E, 0x25, 0x5E,
  0x2D, 0xC1, 0xC3, 0x03, 0xC8, 0x1C, 0xBD, 0x0A,
  0xA2, 0x2C, 0x11, 0xB9, 0xBC, 0x4B, 0xAA, 0x25,
  0x5D, 0x2D, 0xD1, 0xC3, 0x03, 0xD2, 0x2D, 0x01,
  0xA2, 0x6D, 0x0C, 0xA2, 0x2D, 0x11, 0x65, 0x2E,
  0x2D, 0xB1, 0xC3, 0x03, 0xD8, 0x1B, 0x0C, 0x0E,
  0xA8, 0xBD, 0xE2, 0x6D, 0x11, 0xAC, 0xCA, 0xE5,
  0x22, 0x2D, 0xB1, 0xC3, 0x03, 0xF8, 0x1B, 0xA2,
  0x6F, 0x10, 0xD8, 0x1B, 0x92, 0x2D, 0x10, 0x16,
  0xE9, 0x04, 0x0C, 0x2C, 0x99, 0xFD, 0xD8, 0x1B,
  0x0C, 0x2A, 0xA2, 0x4D, 0x4E, 0x88, 0xBD, 0x82,
  0x5D, 0x24, 0xE2, 0xA0, 0x71, 0xC0, 0xC0, 0x74,
  0x46, 0x99, 0xFF, 0x00, 0x00, 0xC2, 0x0D, 0x4E,
  0x86, 0xFB, 0xFF, 0x00, 0x00, 0xAD, 0x09, 0x25,
  0x65, 0x2D, 0xA2, 0xA0, 0x72, 0xE5, 0x1E, 0x2D,
  0xB1, 0xC3, 0x03, 0xD8, 0x1B, 0xA2, 0x6D, 0x11,
  0xCC, 0xEA, 0x0C, 0x9C, 0x62, 0x4D, 0x4E, 0x88,
  0x07, 0xF2, 0xA4, 0x6A, 0xF2, 0x58, 0x00, 0x06,
  0x89, 0xFF, 0xC2, 0x0D, 0x4E, 0x86, 0x87, 0xFF,
  0x00, 0x0C, 0x9C, 0x62, 0x4D, 0x4E, 0xA8, 0x07,
  0x92, 0xA4, 0x6F, 0x92, 0x5A, 0x00, 0x06, 0xEC,
  0xFF, 0x36, 0x41, 0x00, 0x42, 0xC2, 0x20, 0x82,
  0xC2, 0x14, 0x91, 0xC7, 0x03, 0x8B, 0xB2, 0x7C,
  0xF3, 0x39, 0xD2, 0x49, 0x92, 0x49, 0x82, 0x89,
  0x62, 0x89, 0x52, 0x99, 0x42, 0xB9, 0x32, 0xB9,
  0x22, 0xA2, 0xC9, 0xFC, 0xA9, 0x72, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0xA2, 0x22, 0x10, 0x16,
  0x2A, 0x00, 0x25, 0x23, 0x2D, 0xA2, 0x22, 0x11,
  0x8C, 0x1A, 0xA5, 0x22, 0x2D, 0xA8, 0xD2, 0x26,
  0x0A, 0x02, 0xE5, 0x56, 0x21, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x20, 0xA2, 0x20, 0x65,
  0xA5, 0x2A, 0xA1, 0xC3, 0x03, 0xA2, 0x2A, 0x01,
  0xA2, 0xCA, 0x14, 0x65, 0x0E, 0x2D, 0xE5, 0x95,
  0x2A, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0xC3, 0x03, 0xC8, 0x13, 0x0C, 0x05, 0x92,
  0x0C, 0x4E, 0x41, 0xC8, 0x03, 0x82, 0xC9, 0xFD,
  0x16, 0x68, 0x0B, 0x26, 0x49, 0x14, 0x21, 0xC9,
  0x03, 0x26, 0x59, 0x10, 0xA2, 0xC9, 0xFA, 0x16,
  0xFA, 0x07, 0xB2, 0xC9, 0xF9, 0x16, 0x4B, 0x0D,
  0x26, 0x89, 0x49, 0x1D, 0xF0, 0xA2, 0x2C, 0x10,
  0xE8, 0x12, 0xD8, 0x22, 0xD9, 0x03, 0xE2, 0x62,
  0x02, 0x16, 0x9A, 0x00, 0x25, 0x1C, 0x2D, 0xF8,
  0x13, 0x52, 0x6F, 0x10, 0xC8, 0x13, 0xC0, 0x20,
  0x00, 0xB2, 0xA2, 0x00, 0x81, 0xCA, 0x03, 0x82,
  0x64, 0x83, 0xA8, 0xCC, 0xA9, 0xEC, 0xE5, 0xA5,
  0x24, 0xA8, 0x13, 0x0C, 0x69, 0x92, 0x4A, 0x4E,
  0xA2, 0xA2, 0x00, 0xE5, 0x86, 0x2A, 0xA8, 0x13,
  0x8B, 0xAA, 0xA5, 0x0A, 0x00, 0xC0, 0x20, 0x00,
  0x52, 0x64, 0x80, 0x1D, 0xF0, 0xC0, 0x20, 0x00,
  0xC1, 0xCB, 0x03, 0xB2, 0x24, 0x83, 0xC0, 0x20,
  0x00, 0xC0, 0xBB, 0x10, 0xB2, 0x64, 0x83, 0x65,
  0xD5, 0x2A, 0xA8, 0x13, 0x8B, 0xAA, 0xE5, 0x06,
  0x2D, 0xA1, 0xC2, 0x03, 0x25, 0x56, 0x2D, 0x98,
  0x03, 0x16, 0xE9, 0xF8, 0x99, 0x22, 0x59, 0x03,
  0x1D, 0xF0, 0xA2, 0xCC, 0x20, 0xA5, 0x92, 0x2A,
  0x16, 0xFA, 0xF7, 0x22, 0xA0, 0x07, 0xB2, 0x0A,
  0x2C, 0xC2, 0x23, 0x01, 0x07, 0x6B, 0x02, 0x22,
  0x4C, 0x4E, 0x65, 0xA4, 0x24, 0xA8, 0x13, 0xA2,
  0xCA, 0x20, 0xE5, 0x90, 0x2A, 0x56, 0x5A, 0xFE,
  0x1D, 0xF0, 0x52, 0x63, 0x00, 0xA1, 0xCD, 0x03,
  0xB1, 0xCC, 0x03, 0xB2, 0x62, 0x02, 0x65, 0xB5,
  0x2A, 0xC0, 0x20, 0x00, 0x0C, 0x4C, 0xE1, 0xCE,
  0x03, 0xD2, 0x24, 0x83, 0xC0, 0x20, 0x00, 0xA8,
  0x13, 0xE0, 0xDD, 0x20, 0xD2, 0x64, 0x83, 0xC2,
  0x4A, 0x4E, 0xE5, 0x0C, 0x00, 0xAD, 0x02, 0xA5,
  0x9A, 0x29, 0x1D, 0xF0, 0x00, 0xA1, 0xCF, 0x03,
  0x25, 0x52, 0x2D, 0xC0, 0x20, 0x00, 0xA8, 0x13,
  0xF1, 0xD0, 0x03, 0xF2, 0x64, 0x83, 0x65, 0x1B,
  0x00, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0xC3, 0x03, 0x82, 0x23, 0x01, 0x71, 0xD1,
  0x03, 0x82, 0x28, 0x0E, 0x62, 0xA0, 0x00, 0x16,
  0x68, 0x05, 0xE5, 0x76, 0x2A, 0x4D, 0x0A, 0x16,
  0x2A, 0x05, 0xA8, 0x13, 0x52, 0x14, 0x15, 0xA8,
  0xEA, 0x57, 0xBA, 0x01, 0x5D, 0x0A, 0xB1, 0xD2,
  0x03, 0xC8, 0x24, 0x0C, 0x0D, 0xF1, 0xD3, 0x03,
  0x50, 0xE0, 0xF4, 0xE2, 0x54, 0x14, 0x52, 0xC4,
  0x10, 0xAD, 0x05, 0xE5, 0x81, 0x21, 0x62, 0x44,
  0x2C, 0xD8, 0x13, 0xC2, 0x14, 0x14, 0xB8, 0xED,
  0xC0, 0xBB, 0xC0, 0xB9, 0xED, 0xCC, 0x8B, 0x79,
  0x34, 0x0C, 0x1D, 0xD2, 0x44, 0x2C, 0xD2, 0x23,
  0x01, 0xAD, 0x05, 0xB8, 0xDD, 0x0C, 0x1C, 0x25,
  0xAD, 0x21, 0xE8, 0x13, 0xE8, 0xEE, 0x56, 0x8E,
  0xFA, 0x1D, 0xF0, 0x00, 0x00, 0xAD, 0x02, 0x65,
  0x72, 0x2A, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0xB2, 0xC2, 0xF0, 0xA2, 0xC3, 0x20, 0xA5, 0x7F,
  0x2A, 0xA2, 0xC3, 0x14, 0xE5, 0xF3, 0x2C, 0x1D,
  0xF0, 0x36, 0x41, 0x00, 0x0C, 0x0A, 0xBD, 0x02,
  0xC1, 0xD4, 0x03, 0x65, 0x9B, 0x21, 0xA9, 0xD2,
  0x26, 0x0A, 0x05, 0x0C, 0x02, 0x1D, 0xF0, 0x00,
  0x00, 0x22, 0xA4, 0x6E, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0xA2, 0xA0, 0x03, 0xB1,
  0xD5, 0x03, 0xE5, 0xEA, 0x2C, 0x92, 0xA0, 0x60,
  0x81, 0xC8, 0x03, 0xB8, 0xB2, 0xA2, 0x22, 0x10,
  0xA9, 0xF2, 0xB2, 0x52, 0x26, 0xB2, 0x52, 0x25,
  0x0C, 0x8B, 0xC0, 0x20, 0x00, 0xF2, 0x28, 0x81,
  0xC0, 0x20, 0x00, 0xE8, 0xF2, 0x90, 0xFF, 0x20,
  0xF2, 0x68, 0x81, 0xE2, 0x0E, 0x00, 0xC0, 0x20,
  0x00, 0xC8, 0xF2, 0xF1, 0xD6, 0x03, 0x1B, 0xCC,
  0xE2, 0x5F, 0x80, 0xD2, 0x12, 0x25, 0xC9, 0xF2,
  0x0B, 0xDD, 0xD2, 0x52, 0x25, 0x80, 0x61, 0x00,
  0x9D, 0x08, 0xA0, 0xE4, 0x03, 0xB0, 0xAA, 0x20,
  0xA0, 0xE4, 0x13, 0x80, 0xE6, 0x13, 0x10, 0x20,
  0x00, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x61, 0x00,
  0xC0, 0x20, 0x00, 0xC1, 0xD6, 0x03, 0xF1, 0xC8,
  0x03, 0xE1, 0xC3, 0x03, 0xA2, 0x2F, 0x82, 0xB8,
  0x1E, 0x17, 0x6A, 0x14, 0x92, 0x1B, 0x26, 0x16,
  0xE9, 0x00, 0x82, 0xC9, 0xFF, 0xC0, 0x20, 0x00,
  0xD2, 0x1C, 0x80, 0xD2, 0x51, 0x00, 0x82, 0x5B,
  0x26, 0x92, 0x1B, 0x25, 0x07, 0xEA, 0x07, 0x8C,
  0xA9, 0x82, 0x0B, 0x4E, 0x26, 0x48, 0x41, 0x8C,
  0x29, 0x1D, 0xF0, 0x00, 0x00, 0x92, 0x1B, 0x26,
  0x56, 0x59, 0xFF, 0xC0, 0x20, 0x00, 0x0C, 0x5D,
  0x92, 0xAF, 0x9F, 0x82, 0x2F, 0x81, 0xC0, 0x20,
  0x00, 0x90, 0x88, 0x10, 0x82, 0x6F, 0x81, 0x7C,
  0x7F, 0xA0, 0x61, 0x00, 0xCD, 0x0A, 0xE0, 0xE4,
  0x03, 0xF0, 0xEE, 0x10, 0xE0, 0xE4, 0x13, 0xA0,
  0xE6, 0x13, 0x10, 0x20, 0x00, 0xD2, 0x4B, 0x4E,
  0xA2, 0xCB, 0x14, 0xE5, 0xE3, 0x2C, 0x1D, 0xF0,
  0x00, 0xD8, 0xFB, 0xD2, 0x0D, 0x00, 0xC0, 0x20,
  0x00, 0xA8, 0xFB, 0xD2, 0x5C, 0x80, 0x1B, 0xAA,
  0xA9, 0xFB, 0xB8, 0x1E, 0x92, 0x1B, 0x25, 0x0B,
  0x99, 0x90, 0x90, 0xF4, 0x92, 0x5B, 0x25, 0x06,
  0xE7, 0xFF, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x92, 0xA0, 0x06, 0xB1, 0xC8, 0x03, 0xC0, 0x20,
  0x00, 0x82, 0x2B, 0x82, 0x0C, 0x0A, 0x17, 0x68,
  0x0B, 0x92, 0xC9, 0xFF, 0xC0, 0x20, 0x00, 0xC2,
  0x2B, 0x80, 0x56, 0x89, 0xFE, 0xC0, 0x20, 0x00,
  0xA2, 0xC2, 0x14, 0x0C, 0x8D, 0xE2, 0xA0, 0x04,
  0xE2, 0x6B, 0x84, 0xD2, 0x42, 0x4E, 0x25, 0xDE,
  0x2C, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0xD7, 0x03, 0x21, 0xD8, 0x03, 0x22, 0x63,
  0x75, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0xA1, 0xD9, 0x03, 0xB1, 0xDA, 0x03, 0xC1, 0xDB,
  0x03, 0xE5, 0x37, 0x2D, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x16, 0xA5, 0x01, 0x20,
  0x61, 0x00, 0x25, 0xA4, 0xFF, 0x20, 0xE6, 0x13,
  0x10, 0x20, 0x00, 0xA2, 0xA0, 0x00, 0x65, 0x72,
  0x29, 0xA1, 0xDC, 0x03, 0xB1, 0xDD, 0x03, 0xE5,
  0xFF, 0x2C, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0xA1, 0xDE, 0x03, 0xB1, 0xDE, 0x03, 0x65, 0xFC,
  0x20, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0xCD, 0x04, 0x81, 0xDF, 0x03, 0xBD, 0x03, 0x88,
  0x08, 0xAD, 0x02, 0xCC, 0xF8, 0x8C, 0xD3, 0xD1,
  0xC9, 0x03, 0xF1, 0xE0, 0x03, 0x98, 0x1D, 0xE8,
  0x2D, 0xE9, 0x0F, 0x92, 0x6D, 0x02, 0xE5, 0x65,
  0x29, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0xC1, 0xE0, 0x03, 0xAD, 0x02, 0x98, 0x0C, 0x0C,
  0x0B, 0x8C, 0x59, 0x81, 0xC9, 0x03, 0xB9, 0x0C,
  0x99, 0x28, 0xE5, 0x70, 0x29, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0xD1, 0xE2, 0x03, 0x91,
  0xE3, 0x03, 0xB0, 0x82, 0x11, 0xA1, 0xE1, 0x03,
  0xB2, 0xAE, 0xF0, 0xBA, 0xAA, 0xAA, 0xA8, 0x9A,
  0x88, 0xC8, 0x0A, 0xC0, 0x20, 0x00, 0xB8, 0x7C,
  0xC0, 0x20, 0x00, 0xD0, 0xBB, 0x10, 0xB9, 0x7C,
  0x82, 0x08, 0x7F, 0x0C, 0x09, 0x8C, 0x18, 0xE5,
  0x5B, 0x21, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0x21, 0xE4, 0x03, 0x31, 0xE5, 0x03, 0x28, 0x22,
  0x29, 0x03, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0x21, 0xE6, 0x03, 0x88, 0x02, 0x27, 0x98, 0x02,
  0x1D, 0xF0, 0x00, 0x20, 0xA2, 0x20, 0x25, 0x08,
  0x00, 0xAD, 0x02, 0xE5, 0xC5, 0x20, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x20, 0x61, 0x00, 0xA1,
  0xE6, 0x03, 0xE5, 0xC4, 0x20, 0xA5, 0x0B, 0x24,
  0x20, 0xE6, 0x13, 0x10, 0x20, 0x00, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x41, 0xE7, 0x03, 0x21,
  0xE8, 0x03, 0xC0, 0x20, 0x00, 0x32, 0x22, 0x81,
  0x98, 0x54, 0x88, 0x34, 0x30, 0x99, 0x20, 0x99,
  0x54, 0x87, 0x83, 0x39, 0x0C, 0x1C, 0xB2, 0xA0,
  0x38, 0xA2, 0x24, 0x04, 0xC0, 0x20, 0x00, 0xB0,
  0xAA, 0x10, 0xA2, 0x62, 0x80, 0xC0, 0x20, 0x00,
  0xD2, 0x22, 0x81, 0xD0, 0xE0, 0x04, 0x07, 0xED,
  0xF3, 0xC0, 0x20, 0x00, 0xB1, 0xE9, 0x03, 0x32,
  0x62, 0x81, 0xC0, 0x20, 0x00, 0xB8, 0x0B, 0xA1,
  0xEA, 0x03, 0x1B, 0xBB, 0xB9, 0x4A, 0x4B, 0xAA,
  0xA5, 0xBD, 0x20, 0x1D, 0xF0, 0x00, 0x0C, 0x0C,
  0xC9, 0x34, 0xE5, 0xC4, 0x21, 0xC6, 0xEE, 0xFF,
  0x00, 0x36, 0x41, 0x00, 0x20, 0x61, 0x00, 0x3C,
  0x8A, 0x0C, 0x0B, 0x65, 0x08, 0x24, 0x20, 0xE6,
  0x13, 0x10, 0x20, 0x00, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0xD0, 0x0F, 0x02,
  0x60, 0xD8, 0x11, 0x02, 0x60, 0x00, 0x12, 0x02,
  0x60, 0x3C, 0x12, 0x02, 0x60, 0x54, 0x13, 0x02,
  0x60, 0x20, 0x12, 0x02, 0x60, 0xCC, 0x13, 0x02,
  0x60, 0xE0, 0x13, 0x02, 0x60, 0x00, 0x14, 0x02,
  0x60, 0x64, 0x14, 0x02, 0x60, 0x04, 0x15, 0x02,
  0x60, 0xC8, 0x16, 0x00, 0x60, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0x16, 0x02,
  0x60, 0x08, 0x17, 0x00, 0x60, 0x08, 0x17, 0x00,
  0x60, 0x04, 0x17, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x00, 0xD0, 0x16, 0x00, 0x60, 0xD4, 0x16, 0x00,
  0x60, 0x2C, 0x17, 0x00, 0x60, 0x50, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x0C, 0x00,
  0x60, 0xD4, 0x0C, 0x00, 0x60, 0x19, 0x30, 0x00,
  0x00, 0x40, 0x17, 0x00, 0x60, 0x10, 0x01, 0x00,
  0x00, 0xB0, 0x0A, 0x00, 0x60, 0x60, 0x15, 0x02,
  0x60, 0x34, 0x0D, 0x00, 0x60, 0x10, 0x03, 0x02,
  0x28, 0x18, 0x00, 0x02, 0x28, 0x14, 0x03, 0x02,
  0x28, 0xBC, 0x08, 0x00, 0x60, 0x94, 0x15, 0x02,
  0x60, 0xBC, 0x15, 0x02, 0x60, 0xA4, 0x05, 0x00,
  0x60, 0xD8, 0x15, 0x02, 0x60, 0xA8, 0x0B, 0x00,
  0x60, 0xF8, 0x16, 0x00, 0x60, 0xAC, 0x06, 0x00,
  0x60, 0x38, 0x16, 0x02, 0x60, 0x50, 0x16, 0x02,
  0x60, 0xD8, 0x56, 0x04, 0x60, 0x36, 0x41, 0x00,
  0x81, 0xCF, 0x05, 0xB1, 0xCD, 0x05, 0xA2, 0xA0,
  0x03, 0x91, 0xCE, 0x05, 0xA2, 0x4B, 0x00, 0x82,
  0x69, 0x00, 0xE5, 0x01, 0x00, 0xA5, 0x08, 0x00,
  0x25, 0x05, 0x00, 0x25, 0x06, 0x00, 0x25, 0x02,
  0x00, 0xA5, 0x06, 0x00, 0xA1, 0xD0, 0x05, 0xB1,
  0xD1, 0x05, 0x25, 0xDC, 0x2C, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0xD2, 0x05, 0x21,
  0xD3, 0x05, 0x22, 0x63, 0x75, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x91, 0xD4, 0x05, 0x92,
  0x09, 0x47, 0x26, 0x19, 0x04, 0x26, 0x29, 0x0C,
  0x1D, 0xF0, 0xA1, 0xD5, 0x05, 0xB1, 0xD6, 0x05,
  0xE5, 0xD6, 0x20, 0x1D, 0xF0, 0xA1, 0xD5, 0x05,
  0xB1, 0xD7, 0x05, 0x25, 0xD6, 0x20, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x81, 0xD9, 0x05, 0x31,
  0xD8, 0x05, 0x21, 0xDA, 0x05, 0x29, 0x43, 0x89,
  0x03, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0xDB, 0x05, 0x21, 0xDC, 0x05, 0x22, 0x63,
  0x13, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0xDD, 0x05, 0x21, 0xDE, 0x05, 0x48, 0x03,
  0x49, 0x22, 0x29, 0x03, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x91, 0xE0, 0x05, 0x21,
  0xE2, 0x05, 0x31, 0xDF, 0x05, 0x81, 0xE1, 0x05,
  0x89, 0xC3, 0x29, 0xA3, 0x99, 0xB3, 0x1D, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x04, 0x00, 0x8C, 0x17, 0x02,
  0x60,
};

static const unsigned char vfs301_06_2[] = { /* 1905 B */
  0x06, 0x00, 0x00, 0x64, 0x07, 0x00, 0x0F, 0x00,
  0x60, 0xD8, 0x0C, 0x00, 0x60, 0xD4, 0x0C, 0x00,
  0x60, 0x50, 0x15, 0x00, 0x60, 0x20, 0x0E, 0x00,
  0x60, 0xFC, 0xFF, 0x00, 0x00, 0x30, 0x15, 0x00,
  0x60, 0xB0, 0x0A, 0x00, 0x60, 0x58, 0xB3, 0x04,
  0x60, 0x84, 0x05, 0x00, 0x60, 0xA4, 0xED, 0x04,
  0x60, 0x8C, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x00,
  0x60, 0x60, 0x06, 0x00, 0x00, 0xA0, 0x0A, 0x00,
  0x60, 0xD0, 0x38, 0x04, 0x60, 0xB4, 0x39, 0x04,
  0x60, 0x58, 0xB4, 0x04, 0x60, 0xFC, 0x0C, 0x00,
  0x60, 0x20, 0x15, 0x00, 0x60, 0xC8, 0x0D, 0x00,
  0x60, 0x9C, 0x0B, 0x00, 0x60, 0xFC, 0x14, 0x00,
  0x60, 0xCC, 0x08, 0x00, 0x60, 0x68, 0x0A, 0x00,
  0x60, 0x4C, 0x3F, 0x04, 0x60, 0xC0, 0x0D, 0x00,
  0x60, 0x04, 0x15, 0x00, 0x60, 0x18, 0x0D, 0x00,
  0x60, 0x00, 0x9E, 0x00, 0x38, 0xDC, 0x0C, 0x00,
  0x60, 0x00, 0x15, 0x00, 0x60, 0x36, 0x41, 0x00,
  0x25, 0x37, 0x00, 0x65, 0x3A, 0x00, 0xA5, 0x4C,
  0x00, 0xE5, 0x48, 0x00, 0x65, 0x35, 0x00, 0x91,
  0xC0, 0x03, 0xA1, 0xC1, 0x03, 0x0C, 0x08, 0x89,
  0x0A, 0x82, 0x49, 0x00, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0xC2, 0x03, 0x38,
  0x03, 0x8C, 0x73, 0x88, 0x23, 0x66, 0x28, 0x03,
  0x0C, 0x39, 0x99, 0x23, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0xC3, 0x03, 0x0C,
  0x02, 0x22, 0x43, 0x00, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0xBD, 0x02, 0x21, 0xC2,
  0x03, 0x28, 0x02, 0x1C, 0x8C, 0xCB, 0xA2, 0xA5,
  0x8F, 0x2D, 0xD1, 0xC4, 0x03, 0x2C, 0x0B, 0x92,
  0x12, 0x11, 0x0C, 0x1C, 0xDC, 0x79, 0xA2, 0x12,
  0x0F, 0x92, 0x12, 0x0E, 0xA0, 0xA0, 0xE4, 0x90,
  0xAA, 0xC0, 0xA2, 0xCA, 0xC2, 0xA0, 0xA1, 0x21,
  0xAA, 0x99, 0x8B, 0x99, 0x92, 0x52, 0x11, 0xB2,
  0x52, 0x13, 0xC9, 0x22, 0xD0, 0xD9, 0x10, 0xD2,
  0x52, 0x11, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0xD8, 0x22, 0x31, 0xC2, 0x03, 0x0C, 0x1E, 0x38,
  0x03, 0x0C, 0x0C, 0xAD, 0x03, 0xF2, 0x13, 0x13,
  0xB2, 0x13, 0x10, 0xF0, 0xCE, 0x83, 0xDA, 0xBB,
  0x25, 0x17, 0x00, 0x0C, 0x45, 0xA8, 0x23, 0x92,
  0x13, 0x13, 0x0C, 0x04, 0x8C, 0x69, 0x0B, 0x99,
  0x90, 0x90, 0xF4, 0x92, 0x53, 0x13, 0xF6, 0x8A,
  0x2F, 0xB1, 0xC5, 0x03, 0xB0, 0xBA, 0xA0, 0xB8,
  0x0B, 0xA0, 0x0B, 0x00, 0xC8, 0x22, 0xB2, 0x13,
  0x11, 0xAD, 0x03, 0xCA, 0xBB, 0x65, 0x21, 0x00,
  0xD2, 0x13, 0x06, 0xF1, 0xC3, 0x03, 0xD7, 0x3A,
  0x0F, 0x0C, 0x29, 0x92, 0x4F, 0x00, 0xE2, 0x13,
  0x0F, 0xE0, 0xEF, 0x04, 0x16, 0xBE, 0x10, 0x99,
  0x23, 0x0C, 0x14, 0x2D, 0x04, 0x1D, 0xF0, 0x49,
  0x23, 0x0C, 0x24, 0x06, 0xFD, 0xFF, 0xAD, 0x03,
  0xE5, 0x1B, 0x00, 0x82, 0x13, 0x09, 0xB2, 0x13,
  0x08, 0x87, 0x3A, 0x02, 0x06, 0x24, 0x00, 0xC8,
  0x22, 0xB2, 0x13, 0x11, 0xAD, 0x03, 0xCA, 0xBB,
  0x65, 0x1D, 0x00, 0xD2, 0x13, 0x07, 0xD7, 0x3A,
  0x02, 0xC6, 0x36, 0x00, 0xE2, 0x13, 0x14, 0x0B,
  0xEE, 0xE0, 0xE0, 0xF4, 0xE2, 0x53, 0x14, 0x56,
  0xEE, 0x0D, 0x0C, 0x24, 0x0C, 0x7F, 0xF9, 0x23,
  0xC6, 0xED, 0xFF, 0xAD, 0x03, 0xE5, 0x17, 0x00,
  0x82, 0x13, 0x08, 0x87, 0x3A, 0x6A, 0x59, 0x23,
  0x42, 0x53, 0x16, 0x92, 0x13, 0x0A, 0x92, 0x53,
  0x14, 0x0C, 0x04, 0x06, 0xE7, 0xFF, 0xAD, 0x03,
  0x65, 0x16, 0x00, 0xB2, 0x13, 0x08, 0xB7, 0x3A,
  0x29, 0xC2, 0x13, 0x14, 0x0B, 0xCC, 0xC0, 0xC0,
  0xF4, 0xC2, 0x53, 0x14, 0xEC, 0xBC, 0x0C, 0x6D,
  0xE2, 0x13, 0x0B, 0xE2, 0x53, 0x14, 0xD9, 0x23,
  0xC6, 0x07, 0x00, 0xDC, 0xC9, 0x59, 0x23, 0x42,
  0x53, 0x16, 0xF2, 0x13, 0x0A, 0xF2, 0x53, 0x14,
  0xC6, 0x03, 0x00, 0x0C, 0x58, 0x92, 0x13, 0x0D,
  0xA2, 0x13, 0x0C, 0xA2, 0x53, 0x14, 0x92, 0x53,
  0x15, 0x89, 0x23, 0x0C, 0x04, 0x86, 0xD4, 0xFF,
  0xB7, 0x3A, 0x05, 0xC2, 0x13, 0x0B, 0xC2, 0x53,
  0x14, 0x42, 0x53, 0x16, 0x0C, 0x04, 0x46, 0xD0,
  0xFF, 0x92, 0x13, 0x15, 0x66, 0x19, 0x09, 0x0C,
  0x34, 0x0B, 0xD9, 0xD2, 0x53, 0x15, 0x46, 0xCC,
  0xFF, 0xCC, 0x39, 0x0C, 0x14, 0x86, 0x01, 0x00,
  0x0C, 0x04, 0x0B, 0xE9, 0xE2, 0x53, 0x15, 0xC8,
  0x22, 0xB2, 0x13, 0x11, 0xAD, 0x03, 0xCA, 0xBB,
  0x65, 0x11, 0x00, 0xD2, 0x13, 0x07, 0xD7, 0xBA,
  0x10, 0xE2, 0x13, 0x14, 0x0B, 0xEE, 0xE0, 0xE0,
  0xF4, 0xE2, 0x53, 0x14, 0xE0, 0x45, 0x83, 0x06,
  0xC0, 0xFF, 0xF2, 0x13, 0x0D, 0xF2, 0x53, 0x14,
  0xC6, 0xBD, 0xFF, 0x0C, 0x39, 0x86, 0xBB, 0xFF,
  0x82, 0x13, 0x06, 0x87, 0x3A, 0x05, 0x92, 0x13,
  0x0B, 0x92, 0x53, 0x14, 0x0C, 0x04, 0x46, 0xB8,
  0xFF, 0x0C, 0x04, 0x06, 0xB7, 0xFF, 0x00, 0x00,
  0x00, 0x36, 0x61, 0x00, 0xB2, 0xA0, 0x94, 0xA2,
  0xC2, 0x34, 0x92, 0xC2, 0x54, 0x99, 0x01, 0xA9,
  0x11, 0xBC, 0xB4, 0x68, 0x11, 0x5D, 0x09, 0x1C,
  0x04, 0x72, 0x12, 0x12, 0x82, 0xA0, 0x94, 0xC0,
  0x77, 0x11, 0x7A, 0x72, 0x8A, 0x77, 0x82, 0x16,
  0x00, 0xB2, 0x07, 0x00, 0x1B, 0x77, 0xAD, 0x0B,
  0xB0, 0x88, 0xC0, 0x82, 0x56, 0x00, 0x2B, 0x66,
  0x65, 0x96, 0x2D, 0x98, 0x05, 0x0B, 0x44, 0xA0,
  0x99, 0xC0, 0x99, 0x05, 0x4B, 0x55, 0x56, 0xC4,
  0xFD, 0x98, 0x01, 0xA8, 0x11, 0xB2, 0xA0, 0x94,
  0x5D, 0x09, 0x6D, 0x0A, 0x72, 0x12, 0x12, 0x1C,
  0x04, 0xC0, 0x77, 0x11, 0x7A, 0x72, 0xBA, 0x77,
  0xD2, 0x03, 0x01, 0xE2, 0x03, 0x03, 0xC2, 0x03,
  0x02, 0xB2, 0x03, 0x00, 0xEA, 0xCC, 0xDA, 0xBB,
  0xCA, 0xBB, 0xB0, 0xB2, 0x41, 0xAD, 0x0B, 0xB2,
  0x47, 0x00, 0x82, 0x16, 0x00, 0x1B, 0x77, 0xBA,
  0x88, 0x82, 0x56, 0x00, 0x2B, 0x66, 0x65, 0x91,
  0x2D, 0x8B, 0x33, 0xF8, 0x05, 0x0B, 0x44, 0xAA,
  0xFF, 0xF9, 0x05, 0x4B, 0x55, 0x56, 0x74, 0xFC,
  0x82, 0x12, 0x12, 0x1B, 0x88, 0x80, 0x80, 0x44,
  0x82, 0x52, 0x12, 0x1D, 0xF0, 0x36, 0x41, 0x00,
  0x32, 0xC2, 0x34, 0x1C, 0x05, 0x0C, 0x04, 0xB2,
  0x13, 0x00, 0xAD, 0x0B, 0xA5, 0x8E, 0x2D, 0x2B,
  0x33, 0x0B, 0x55, 0xA0, 0x95, 0x41, 0x82, 0x22,
  0x15, 0x4B, 0x22, 0x90, 0x88, 0xC0, 0x80, 0x85,
  0x41, 0x8A, 0x44, 0x56, 0x05, 0xFE, 0x40, 0x24,
  0x41, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x1C, 0x07, 0x0C, 0x06, 0x0C, 0x05, 0xB2, 0xC3,
  0x81, 0x42, 0x03, 0x00, 0xB2, 0x0B, 0x7E, 0xC2,
  0x03, 0x01, 0x47, 0xBB, 0x0C, 0x47, 0xBC, 0x11,
  0x4D, 0x0B, 0xC7, 0xBB, 0x0C, 0x4D, 0x0C, 0xC6,
  0x01, 0x00, 0x47, 0x3C, 0x04, 0xC7, 0xBB, 0x01,
  0x4D, 0x0B, 0xAD, 0x04, 0xBD, 0x04, 0x65, 0x89,
  0x2D, 0xAA, 0x66, 0x5A, 0x54, 0x0B, 0x77, 0x4B,
  0x33, 0xB2, 0xC3, 0x81, 0x56, 0x97, 0xFC, 0xAD,
  0x05, 0xBD, 0x05, 0x25, 0x88, 0x2D, 0xD2, 0x12,
  0x16, 0xA0, 0x94, 0x41, 0x90, 0x96, 0xC0, 0xD0,
  0xCD, 0xF0, 0x90, 0x94, 0x41, 0x90, 0xE3, 0x41,
  0xC0, 0xC3, 0x21, 0xEA, 0xCC, 0xD0, 0x9C, 0x93,
  0x92, 0x52, 0x16, 0x2D, 0x09, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0xC6, 0x03, 0x21,
  0xC7, 0x03, 0x22, 0x63, 0x75, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0xA1, 0xC8, 0x03, 0xB1,
  0xC9, 0x03, 0xC1, 0xCA, 0x03, 0xA5, 0x5D, 0x2D,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x9C, 0x85, 0x20, 0x61, 0x00, 0xE5, 0xC6, 0xFF,
  0x20, 0xE6, 0x13, 0x10, 0x20, 0x00, 0x0C, 0x0A,
  0x65, 0x98, 0x29, 0xA1, 0xCB, 0x03, 0xB1, 0xCC,
  0x03, 0xA5, 0x25, 0x2D, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x0C, 0xBB, 0x31, 0xC6,
  0x03, 0x21, 0xD0, 0x03, 0x81, 0xCF, 0x03, 0x91,
  0xCD, 0x03, 0xA1, 0xCE, 0x03, 0xA9, 0xF9, 0x82,
  0x69, 0x19, 0x22, 0x63, 0x6B, 0xB2, 0x59, 0x1C,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x21, 0xD1, 0x03, 0x88, 0x22, 0x37, 0x68, 0x0E,
  0xA1, 0xD2, 0x03, 0xA5, 0x4D, 0x2D, 0x98, 0x22,
  0x6C, 0x7A, 0xA0, 0x99, 0x10, 0x99, 0x22, 0xE5,
  0x79, 0x22, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0xCD, 0x04, 0xBD, 0x03, 0xAD, 0x02, 0xDD, 0x05,
  0x25, 0x0E, 0x2A, 0xAC, 0x15, 0x81, 0xD3, 0x03,
  0xA1, 0xD4, 0x03, 0x88, 0x08, 0x91, 0xD1, 0x03,
  0x82, 0x08, 0x02, 0x98, 0x29, 0xB6, 0x28, 0x06,
  0x91, 0xD5, 0x03, 0x99, 0x2A, 0x1D, 0xF0, 0x37,
  0x69, 0x05, 0x91, 0xD6, 0x03, 0x86, 0xFC, 0xFF,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0xBD, 0x03, 0xAD, 0x02, 0xCD, 0x04, 0xDD, 0x05,
  0x1C, 0x8E, 0x25, 0x71, 0x22, 0xBC, 0x16, 0x82,
  0x12, 0x1A, 0x5A, 0xA4, 0xEC, 0xA8, 0x1C, 0x79,
  0xA7, 0x39, 0x28, 0x92, 0xA4, 0x21, 0x92, 0x52,
  0x1A, 0x06, 0x05, 0x00, 0xA1, 0xD2, 0x03, 0x25,
  0x42, 0x2D, 0xA8, 0x82, 0xE5, 0xBF, 0xFF, 0xB1,
  0xD1, 0x03, 0xA8, 0x2B, 0x30, 0xAA, 0x20, 0xA9,
  0x2B, 0xA8, 0x82, 0xA5, 0x05, 0x2D, 0x0C, 0x0B,
  0xB9, 0x82, 0x1D, 0xF0, 0x1C, 0x83, 0xA7, 0xB3,
  0xDA, 0x92, 0xA4, 0x22, 0x86, 0xF3, 0xFF, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x8C, 0x36, 0x0C, 0x03,
  0x32, 0x52, 0x1A, 0x1D, 0xF0, 0x36, 0x41, 0x00,
  0xA5, 0xB9, 0xFF, 0xAD, 0x02, 0x81, 0xD6, 0x03,
  0x89, 0x22, 0xE5, 0x8C, 0x29, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0xD7, 0x03, 0x21,
  0xD8, 0x03, 0x29, 0x13, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x81, 0xD9, 0x03, 0x30,
  0x61, 0x00, 0x88, 0x08, 0x82, 0x08, 0x10, 0x26,
  0x48, 0x07, 0xAD, 0x02, 0xA5, 0x54, 0x28, 0x06,
  0x01, 0x00, 0x0C, 0x0A, 0xE5, 0xED, 0x20, 0x30,
  0xE6, 0x13, 0x10, 0x20, 0x00, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x21, 0xDA, 0x03, 0x88,
  0x02, 0x27, 0x18, 0x09, 0xAD, 0x02, 0xE5, 0x07,
  0x00, 0xAD, 0x02, 0xE5, 0xE2, 0x20, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x20, 0x61, 0x00, 0xA1,
  0xDA, 0x03, 0xE5, 0xE1, 0x20, 0xA5, 0x28, 0x24,
  0x20, 0xE6, 0x13, 0x10, 0x20, 0x00, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x41, 0xDB, 0x03, 0x21,
  0xDC, 0x03, 0xC0, 0x20, 0x00, 0x32, 0x22, 0x81,
  0x98, 0x54, 0x88, 0x34, 0x30, 0x99, 0x20, 0x99,
  0x54, 0x87, 0x03, 0x06, 0x0C, 0x0A, 0xA9, 0x34,
  0xA5, 0xE5, 0x21, 0x0C, 0x1D, 0x3C, 0x8C, 0xB8,
  0x44, 0xC0, 0x20, 0x00, 0xC0, 0xBB, 0x10, 0xB2,
  0x62, 0x80, 0xC0, 0x20, 0x00, 0xE2, 0x22, 0x81,
  0xE0, 0xF0, 0x04, 0x07, 0xEE, 0xF3, 0xC0, 0x20,
  0x00, 0xB1, 0xDD, 0x03, 0x32, 0x62, 0x81, 0xC0,
  0x20, 0x00, 0xB8, 0x0B, 0xA1, 0xDE, 0x03, 0x1B,
  0xBB, 0xB9, 0x4A, 0x4B, 0xAA, 0x25, 0xDA, 0x20,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x20, 0x61, 0x00, 0x3C, 0x8A, 0x0C, 0x0B, 0xA5,
  0x25, 0x24, 0x20, 0xE6, 0x13, 0x10, 0x20, 0x00,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0xB8, 0x0F, 0x02,
  0x60, 0xC0, 0x0F, 0x02, 0x60, 0x04, 0x14, 0x02,
  0x60, 0xDC, 0x14, 0x02, 0x60, 0x04, 0x15, 0x00,
  0x60, 0x04, 0x15, 0x00, 0x60, 0x00, 0x15, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF4, 0x14, 0x00, 0x60, 0xF8, 0x14, 0x00,
  0x60, 0x50, 0x15, 0x00, 0x60, 0x94, 0x02, 0x00,
  0x00, 0x78, 0x10, 0x02, 0x60, 0x53, 0x10, 0x02,
  0x60, 0x78, 0x10, 0x02, 0x60, 0x02, 0x11, 0x02,
  0x60, 0xDD, 0x10, 0x02, 0x60, 0xC2, 0x10, 0x02,
  0x60, 0x85, 0x10, 0x02, 0x60, 0x7E, 0x10, 0x02,
  0x60, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x0C, 0x00,
  0x60, 0xD4, 0x0C, 0x00, 0x60, 0x10, 0x30, 0x02,
  0x00, 0x60, 0x15, 0x00, 0x60, 0x00, 0x01, 0x00,
  0x00, 0xB0, 0x0A, 0x00, 0x60, 0x04, 0x13, 0x02,
  0x60, 0xA0, 0x0A, 0x00, 0x60, 0xA4, 0x13, 0x02,
  0x60, 0xF8, 0x13, 0x02, 0x60, 0x6C, 0x13, 0x02,
  0x60, 0x6C, 0x06, 0x00, 0x60, 0x14, 0x10, 0x02,
  0x60, 0xF4, 0x05, 0x00, 0x60, 0x4C, 0x13, 0x02,
  0x60, 0x68, 0x0A, 0x00, 0x60, 0x28, 0x8F, 0x04,
  0x60, 0x48, 0x08, 0x00, 0x60, 0x28, 0x14, 0x02,
  0x60, 0xAC, 0x06, 0x00, 0x60, 0x68, 0x14, 0x02,
  0x60, 0x80, 0x14, 0x02, 0x60, 0xD8, 0x56, 0x04,
  0x60, 0x36, 0x41, 0x00, 0x81, 0x57, 0x05, 0xB1,
  0x55, 0x05, 0x0C, 0x3A, 0x91, 0x56, 0x05, 0xA2,
  0x4B, 0x00, 0x89, 0x09, 0xE5, 0x01, 0x00, 0xE5,
  0x05, 0x00, 0xA5, 0x06, 0x00, 0x65, 0x07, 0x00,
  0x25, 0x02, 0x00, 0xA1, 0x58, 0x05, 0xB1, 0x59,
  0x05, 0x25, 0xFA, 0x2C, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0x5A, 0x05, 0x21,
  0x5B, 0x05, 0x22, 0x63, 0x75, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x0C, 0x8F, 0xB1, 0x5A,
  0x05, 0xA1, 0x5F, 0x05, 0x91, 0x60, 0x05, 0x81,
  0x61, 0x05, 0x31, 0x62, 0x05, 0x21, 0x63, 0x05,
  0xC1, 0x5E, 0x05, 0xD1, 0x5C, 0x05, 0xE1, 0x5D,
  0x05, 0xE9, 0xFD, 0xC2, 0x6D, 0x19, 0x29, 0x83,
  0x89, 0x39, 0xA2, 0x6B, 0x6B, 0xF2, 0x5D, 0x1C,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0x64, 0x05, 0x21, 0x65, 0x05, 0x29, 0x13,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0x66, 0x05, 0x21, 0x67, 0x05, 0x22, 0x63,
  0x19, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x91, 0x69, 0x05, 0x21, 0x6B, 0x05, 0x31, 0x68,
  0x05, 0x81, 0x6A, 0x05, 0x89, 0xC3, 0x29, 0xA3,
  0x99, 0xB3, 0x1D, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x04, 0x00, 0xB0, 0x15, 0x02,
  0x60,
};

static const unsigned char vfs301_06_3[] = { /* 785 B */
  0x06, 0x00, 0x00, 0x04, 0x03, 0x00, 0x0F, 0x00,
  0x60, 0xD8, 0x0C, 0x00, 0x60, 0xD4, 0x0C, 0x00,
  0x60, 0xB0, 0x0A, 0x00, 0x60, 0x58, 0xB3, 0x04,
  0x60, 0x84, 0x05, 0x00, 0x60, 0xA4, 0xED, 0x04,
  0x60, 0x8C, 0x04, 0x00, 0x00, 0xBC, 0x08, 0x00,
  0x60, 0x00, 0x0F, 0x00, 0x60, 0x50, 0x02, 0x00,
  0x00, 0xFC, 0x07, 0x00, 0x60, 0xF4, 0x8B, 0x04,
  0x60, 0xBC, 0x0D, 0x00, 0x60, 0xDC, 0x0C, 0x00,
  0x60, 0xC0, 0x0D, 0x00, 0x60, 0x40, 0x11, 0x00,
  0x60, 0x18, 0x0D, 0x00, 0x60, 0x00, 0x9E, 0x00,
  0x38, 0x3C, 0x11, 0x00, 0x60, 0x36, 0x41, 0x00,
  0xE5, 0x02, 0x00, 0x65, 0x14, 0x00, 0x25, 0x06,
  0x00, 0x25, 0x01, 0x00, 0x91, 0xC0, 0x03, 0xA1,
  0xC1, 0x03, 0x0C, 0x08, 0x89, 0x0A, 0x82, 0x49,
  0x00, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0xC2, 0x03, 0x21, 0xC3, 0x03, 0x22, 0x63,
  0x75, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0xA1, 0xC4, 0x03, 0xB1, 0xC5, 0x03, 0xC1, 0xC6,
  0x03, 0xE5, 0x94, 0x2D, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x9C, 0xD5, 0x20, 0x61,
  0x00, 0x25, 0xFB, 0xFF, 0x81, 0xC7, 0x03, 0x20,
  0xE6, 0x13, 0x10, 0x20, 0x00, 0x88, 0x28, 0x0C,
  0x0A, 0xE0, 0x08, 0x00, 0xA1, 0xC8, 0x03, 0xB1,
  0xC9, 0x03, 0xA5, 0x5C, 0x2D, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0xCA, 0x03, 0x21,
  0xCB, 0x03, 0x29, 0xD3, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x41, 0xCC, 0x03, 0x88,
  0x04, 0x22, 0x08, 0xD2, 0x80, 0x22, 0xA0, 0x28,
  0x92, 0xAD, 0x02, 0xE5, 0x73, 0x2D, 0xC0, 0x20,
  0x00, 0x5D, 0x0A, 0x38, 0x0A, 0xA2, 0xC2, 0x10,
  0x25, 0x73, 0x2D, 0x88, 0x04, 0x30, 0x9A, 0x10,
  0x82, 0x28, 0x1D, 0xC0, 0x20, 0x00, 0x90, 0x88,
  0x20, 0x89, 0x05, 0xC0, 0x20, 0x00, 0x38, 0x05,
  0x7C, 0xF5, 0x50, 0x5A, 0x30, 0x30, 0x35, 0x10,
  0xCB, 0xA2, 0xE5, 0x70, 0x2D, 0x37, 0x9A, 0x29,
  0x4B, 0xA2, 0x65, 0x70, 0x2D, 0xB8, 0x04, 0xCD,
  0x0A, 0xA2, 0xC2, 0x14, 0x92, 0x2B, 0x1E, 0xC2,
  0x6B, 0x1D, 0x1B, 0x99, 0x92, 0x6B, 0x1E, 0x25,
  0x6F, 0x2D, 0xB8, 0x04, 0xD2, 0x2B, 0x1E, 0xD7,
  0xBA, 0x16, 0xA2, 0xCB, 0x64, 0x25, 0x2E, 0x2D,
  0x1D, 0xF0, 0x8B, 0xA2, 0xE5, 0x6D, 0x2D, 0xF8,
  0x04, 0x3A, 0xEA, 0xE0, 0xE5, 0x10, 0xE2, 0x6F,
  0x1D, 0x81, 0xCA, 0x03, 0x82, 0x28, 0x12, 0xE0,
  0x08, 0x00, 0xA2, 0xA0, 0x94, 0xC1, 0xCD, 0x03,
  0xB8, 0x04, 0xC0, 0x20, 0x00, 0xC8, 0x0C, 0x92,
  0x1B, 0x5D, 0xAA, 0xAB, 0xCA, 0x99, 0x92, 0x6B,
  0x28, 0xE5, 0x20, 0x21, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x81, 0xCE, 0x03, 0x30,
  0x61, 0x00, 0x88, 0x08, 0x82, 0x08, 0x10, 0x26,
  0x48, 0x07, 0xAD, 0x02, 0x25, 0x90, 0x28, 0x06,
  0x01, 0x00, 0x0C, 0x0A, 0x65, 0x29, 0x21, 0x30,
  0xE6, 0x13, 0x10, 0x20, 0x00, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x21, 0xCF, 0x03, 0x88,
  0x02, 0x27, 0x18, 0x09, 0xAD, 0x02, 0xE5, 0x07,
  0x00, 0xAD, 0x02, 0x65, 0x1E, 0x21, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x20, 0x61, 0x00, 0xA1,
  0xCF, 0x03, 0x65, 0x1D, 0x21, 0x25, 0x64, 0x24,
  0x20, 0xE6, 0x13, 0x10, 0x20, 0x00, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x41, 0xD0, 0x03, 0x21,
  0xD1, 0x03, 0xC0, 0x20, 0x00, 0x32, 0x22, 0x81,
  0x98, 0x54, 0x88, 0x34, 0x30, 0x99, 0x20, 0x99,
  0x54, 0x87, 0x03, 0x06, 0x0C, 0x0A, 0xA9, 0x34,
  0x25, 0x21, 0x22, 0x0C, 0x1D, 0x3C, 0x8C, 0xB8,
  0x44, 0xC0, 0x20, 0x00, 0xC0, 0xBB, 0x10, 0xB2,
  0x62, 0x80, 0xC0, 0x20, 0x00, 0xE2, 0x22, 0x81,
  0xE0, 0xF0, 0x04, 0x07, 0xEE, 0xF3, 0xC0, 0x20,
  0x00, 0xB1, 0xCD, 0x03, 0x32, 0x62, 0x81, 0xC0,
  0x20, 0x00, 0xB8, 0x0B, 0xA1, 0xD2, 0x03, 0x1B,
  0xBB, 0xB9, 0x4A, 0x4B, 0xAA, 0xA5, 0x15, 0x21,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x20, 0x61, 0x00, 0x3C, 0x8A, 0x0C, 0x0B, 0x25,
  0x61, 0x24, 0x20, 0xE6, 0x13, 0x10, 0x20, 0x00,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x24, 0x11, 0x02,
  0x60, 0x40, 0x11, 0x00, 0x60, 0x40, 0x11, 0x00,
  0x60, 0x3C, 0x11, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x00, 0xD8, 0x0C, 0x00, 0x60, 0xD4, 0x0C, 0x00,
  0x60, 0x12, 0x30, 0x00, 0x00, 0x50, 0x11, 0x00,
  0x60, 0xB0, 0x00, 0x00, 0x00, 0xB0, 0x0A, 0x00,
  0x60, 0x90, 0x0F, 0x02, 0x60, 0xFC, 0x07, 0x00,
  0x60, 0xC8, 0x0F, 0x02, 0x60, 0x48, 0x08, 0x00,
  0x60, 0x70, 0x10, 0x02, 0x60, 0xAC, 0x06, 0x00,
  0x60, 0xB0, 0x10, 0x02, 0x60, 0xC8, 0x10, 0x02,
  0x60, 0xD8, 0x56, 0x04, 0x60, 0x36, 0x41, 0x00,
  0x81, 0x56, 0x04, 0xB1, 0x54, 0x04, 0x0C, 0x1A,
  0x91, 0x55, 0x04, 0xA2, 0x4B, 0x00, 0x89, 0x09,
  0xA5, 0x01, 0x00, 0x65, 0x02, 0x00, 0x25, 0x03,
  0x00, 0xE5, 0x03, 0x00, 0xA1, 0x57, 0x04, 0xB1,
  0x58, 0x04, 0xA5, 0x3C, 0x2D, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0x59, 0x04, 0x21,
  0x5A, 0x04, 0x22, 0x63, 0x75, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0x5B, 0x04, 0x21,
  0x5C, 0x04, 0x29, 0xD3, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0x5D, 0x04, 0x21,
  0x5E, 0x04, 0x22, 0x63, 0x19, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x91, 0x60, 0x04, 0x21,
  0x62, 0x04, 0x31, 0x5F, 0x04, 0x81, 0x61, 0x04,
  0x89, 0xC3, 0x29, 0xA3, 0x99, 0xB3, 0x1D, 0xF0,
  0x00, 0x01, 0x00, 0x04, 0x00, 0x8C, 0x11, 0x02,
  0x60,
};

static const unsigned char vfs301_06_4[] = { /* 3057 B */
  0x06, 0x00, 0x00, 0xE4, 0x0B, 0x00, 0x0F, 0x00,
  0x60, 0xD8, 0x0C, 0x00, 0x60, 0xD4, 0x0C, 0x00,
  0x60, 0xB0, 0x0A, 0x00, 0x60, 0x58, 0xB3, 0x04,
  0x60, 0x84, 0x05, 0x00, 0x60, 0xA4, 0xED, 0x04,
  0x60, 0x8C, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x00,
  0x60, 0xC0, 0x0A, 0x00, 0x00, 0xA0, 0x0A, 0x00,
  0x60, 0xD0, 0x38, 0x04, 0x60, 0xB4, 0x39, 0x04,
  0x60, 0x58, 0xB4, 0x04, 0x60, 0xFC, 0x0C, 0x00,
  0x60, 0x80, 0x19, 0x00, 0x60, 0xC8, 0x0D, 0x00,
  0x60, 0x9C, 0x0B, 0x00, 0x60, 0xF4, 0x18, 0x00,
  0x60, 0xCC, 0x08, 0x00, 0x60, 0xF8, 0x18, 0x00,
  0x60, 0xA8, 0x0B, 0x00, 0x60, 0xE4, 0x06, 0x00,
  0x60, 0x54, 0x11, 0x02, 0x60, 0xAC, 0x06, 0x00,
  0x60, 0x48, 0x11, 0x02, 0x60, 0x04, 0x19, 0x00,
  0x60, 0x80, 0x7F, 0x00, 0x38, 0x80, 0x5F, 0x00,
  0x38, 0x80, 0x3F, 0x00, 0x38, 0xDC, 0x0C, 0x00,
  0x60, 0x1C, 0x19, 0x00, 0x60, 0x2C, 0x19, 0x00,
  0x60, 0x48, 0x19, 0x00, 0x60, 0x00, 0x40, 0x00,
  0x38, 0x00, 0xA0, 0x00, 0x38, 0x68, 0x0A, 0x00,
  0x60, 0x4C, 0x3F, 0x04, 0x60, 0xC0, 0x0D, 0x00,
  0x60, 0x5C, 0x19, 0x00, 0x60, 0x18, 0x0D, 0x00,
  0x60, 0x00, 0x9E, 0x00, 0x38, 0x58, 0x19, 0x00,
  0x60, 0xB0, 0x19, 0x00, 0x60, 0x20, 0x0E, 0x00,
  0x60, 0xFC, 0xFF, 0x00, 0x00, 0x90, 0x19, 0x00,
  0x60, 0x36, 0x41, 0x00, 0x65, 0x03, 0x00, 0x25,
  0x18, 0x00, 0x65, 0x15, 0x00, 0x25, 0x06, 0x00,
  0x25, 0x54, 0x00, 0x65, 0x50, 0x00, 0x25, 0x01,
  0x00, 0x91, 0xC0, 0x03, 0xA1, 0xC1, 0x03, 0x0C,
  0x08, 0x89, 0x0A, 0x82, 0x49, 0x00, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x31, 0xC2, 0x03, 0x21,
  0xC3, 0x03, 0x22, 0x63, 0x75, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0xA1, 0xC4, 0x03, 0xB1,
  0xC5, 0x03, 0xC1, 0xC6, 0x03, 0xA5, 0x8D, 0x2D,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x9C, 0x85, 0x20, 0x61, 0x00, 0xA5, 0xFA, 0xFF,
  0x20, 0xE6, 0x13, 0x10, 0x20, 0x00, 0x0C, 0x0A,
  0x65, 0xC8, 0x29, 0xA1, 0xC7, 0x03, 0xB1, 0xC8,
  0x03, 0xA5, 0x55, 0x2D, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x0C, 0xBB, 0x31, 0xC2,
  0x03, 0x21, 0xCC, 0x03, 0x81, 0xCB, 0x03, 0x91,
  0xC9, 0x03, 0xA1, 0xCA, 0x03, 0xA9, 0xF9, 0x82,
  0x69, 0x19, 0x22, 0x63, 0x6B, 0xB2, 0x59, 0x1C,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x21, 0xCD, 0x03, 0x88, 0x22, 0x37, 0x68, 0x0E,
  0xA1, 0xCE, 0x03, 0xA5, 0x7D, 0x2D, 0x98, 0x22,
  0x6C, 0x7A, 0xA0, 0x99, 0x10, 0x99, 0x22, 0xE5,
  0xA9, 0x22, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0xCD, 0x04, 0xBD, 0x03, 0xAD, 0x02, 0xDD, 0x05,
  0x25, 0x3E, 0x2A, 0xAC, 0x15, 0x81, 0xCF, 0x03,
  0xA1, 0xD0, 0x03, 0x88, 0x08, 0x91, 0xCD, 0x03,
  0x82, 0x08, 0x02, 0x98, 0x29, 0xB6, 0x28, 0x06,
  0x91, 0xD1, 0x03, 0x99, 0x2A, 0x1D, 0xF0, 0x37,
  0x69, 0x05, 0x91, 0xD2, 0x03, 0x86, 0xFC, 0xFF,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0xBD, 0x03, 0xAD, 0x02, 0xCD, 0x04, 0xDD, 0x05,
  0x1C, 0x8E, 0x25, 0xA1, 0x22, 0xBC, 0x16, 0x82,
  0x12, 0x1A, 0x5A, 0xA4, 0xEC, 0xA8, 0x1C, 0x79,
  0xA7, 0x39, 0x28, 0x92, 0xA4, 0x21, 0x92, 0x52,
  0x1A, 0x06, 0x05, 0x00, 0xA1, 0xCE, 0x03, 0x25,
  0x72, 0x2D, 0xA8, 0x82, 0xA5, 0x50, 0x00, 0xB1,
  0xCD, 0x03, 0xA8, 0x2B, 0x30, 0xAA, 0x20, 0xA9,
  0x2B, 0xA8, 0x82, 0xA5, 0x35, 0x2D, 0x0C, 0x0B,
  0xB9, 0x82, 0x1D, 0xF0, 0x1C, 0x83, 0xA7, 0xB3,
  0xDA, 0x92, 0xA4, 0x22, 0x86, 0xF3, 0xFF, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x8C, 0x36, 0x0C, 0x03,
  0x32, 0x52, 0x1A, 0x1D, 0xF0, 0x36, 0x41, 0x00,
  0x65, 0x4A, 0x00, 0xAD, 0x02, 0x81, 0xD2, 0x03,
  0x89, 0x22, 0xE5, 0xBC, 0x29, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x21, 0xD3, 0x03, 0x31,
  0xD4, 0x03, 0x28, 0x22, 0x29, 0x03, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x21, 0xD8, 0x03, 0x31,
  0xD7, 0x03, 0x91, 0xD5, 0x03, 0x81, 0xD6, 0x03,
  0x89, 0x49, 0x29, 0x03, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x25, 0x18, 0x00, 0x1D,
  0xF0, 0x36, 0x41, 0x00, 0xA5, 0x17, 0x00, 0x65,
  0x20, 0x24, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0xAD, 0x02, 0x65, 0xBE, 0x24, 0x65, 0x16, 0x00,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x61, 0xD9, 0x03, 0xCC, 0xE4, 0xA2, 0xA0, 0x76,
  0x65, 0x22, 0x2D, 0xA9, 0x36, 0xCC, 0x4A, 0xA2,
  0xA4, 0x31, 0x25, 0xB2, 0x29, 0x72, 0xA0, 0x76,
  0xD8, 0x36, 0xA2, 0xA0, 0x75, 0xAC, 0x2D, 0x4A,
  0xB3, 0xB7, 0x37, 0x0E, 0xDA, 0xA4, 0xBD, 0x02,
  0xCD, 0x03, 0x65, 0x74, 0x2D, 0xA2, 0xA0, 0x75,
  0xC6, 0x03, 0x00, 0x47, 0x3A, 0x0C, 0xDA, 0xA4,
  0xBD, 0x02, 0x40, 0xC7, 0xC0, 0x25, 0x73, 0x2D,
  0xA2, 0xA0, 0x75, 0xBC, 0x75, 0xC8, 0x36, 0x4A,
  0xB3, 0xBC, 0x1C, 0xB7, 0x3A, 0x08, 0xA2, 0xA4,
  0x05, 0x25, 0xAE, 0x29, 0x46, 0x07, 0x00, 0xB7,
  0xB7, 0x25, 0xA2, 0xA4, 0x06, 0x65, 0xAD, 0x29,
  0x46, 0x04, 0x00, 0x0C, 0x0A, 0xE5, 0xAC, 0x29,
  0xA8, 0x46, 0xB8, 0x36, 0xC2, 0xA0, 0x76, 0x25,
  0x70, 0x2D, 0xA5, 0x02, 0x00, 0xA8, 0x36, 0xE5,
  0x25, 0x2D, 0x0C, 0x0D, 0xD9, 0x36, 0x1D, 0xF0,
  0xE8, 0x46, 0x8C, 0x1E, 0xA5, 0x0D, 0x00, 0xA2,
  0xA0, 0x76, 0x25, 0x1A, 0x2D, 0xA9, 0x46, 0x56,
  0x0A, 0xFD, 0xA2, 0xA4, 0x31, 0xE5, 0xA9, 0x29,
  0x46, 0xF6, 0xFF, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x21, 0xD9, 0x03, 0x91, 0xDA, 0x03, 0xB1, 0xDB,
  0x03, 0x81, 0xDC, 0x03, 0xC0, 0x20, 0x00, 0xA2,
  0x08, 0x84, 0xC0, 0x20, 0x00, 0xD2, 0x0B, 0x84,
  0xC0, 0x20, 0x00, 0xC2, 0x09, 0x84, 0x80, 0xDD,
  0x11, 0xD0, 0xAA, 0x20, 0x00, 0xCC, 0x11, 0xC0,
  0xAA, 0x20, 0xA9, 0xE2, 0xC0, 0x20, 0x00, 0x82,
  0x08, 0x81, 0xC0, 0x20, 0x00, 0xB2, 0x0B, 0x81,
  0xC0, 0x20, 0x00, 0xA8, 0x42, 0x80, 0xBB, 0x11,
  0x92, 0x09, 0x81, 0xB0, 0x88, 0x20, 0x00, 0x99,
  0x11, 0x90, 0x88, 0x20, 0x89, 0xF2, 0xE5, 0x73,
  0x24, 0x31, 0xDD, 0x03, 0x98, 0x42, 0x0C, 0x0B,
  0xA2, 0x09, 0x70, 0x92, 0x09, 0x71, 0xB2, 0x42,
  0x14, 0x80, 0x99, 0x11, 0xA0, 0x99, 0x20, 0x16,
  0x79, 0x04, 0xC0, 0x20, 0x00, 0xB8, 0x03, 0x9A,
  0xBB, 0x0B, 0xBB, 0xB9, 0x92, 0xA1, 0xDE, 0x03,
  0xA5, 0xFF, 0x20, 0xB8, 0x42, 0xB2, 0x0B, 0x75,
  0x9C, 0x9B, 0xC0, 0x20, 0x00, 0xA1, 0xDF, 0x03,
  0xD8, 0x03, 0xB0, 0xCB, 0x11, 0xB0, 0xCC, 0xC0,
  0xB0, 0xCC, 0xA0, 0xD0, 0xCC, 0xB0, 0x0B, 0xCC,
  0xC9, 0xD2, 0x65, 0xFD, 0x20, 0xA1, 0xE0, 0x03,
  0x0C, 0x1E, 0xE2, 0x62, 0x10, 0xC0, 0x20, 0x00,
  0xD8, 0x03, 0xD2, 0x62, 0x14, 0x25, 0xFC, 0x20,
  0x1D, 0xF0, 0xC0, 0x20, 0x00, 0xB8, 0x03, 0x06,
  0xEE, 0xFF, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x21, 0xD9, 0x03, 0x88, 0x42, 0x16, 0x28, 0x08,
  0xA2, 0xC2, 0x44, 0xE5, 0xFB, 0x20, 0xB8, 0x42,
  0x92, 0x0B, 0x74, 0x26, 0x19, 0x14, 0xA2, 0xC9,
  0xFE, 0x16, 0x9A, 0x07, 0xC2, 0xC9, 0xFD, 0x16,
  0xAC, 0x06, 0xA2, 0xCB, 0x48, 0x25, 0x1A, 0x00,
  0x46, 0x01, 0x00, 0xA2, 0xCB, 0x50, 0xA5, 0x19,
  0x00, 0xA1, 0xDE, 0x03, 0x65, 0xF9, 0x20, 0xA1,
  0xDF, 0x03, 0xE5, 0xF8, 0x20, 0xE1, 0xDA, 0x03,
  0x81, 0xDB, 0x03, 0xA1, 0xDC, 0x03, 0xD8, 0xE2,
  0xC0, 0x20, 0x00, 0xD2, 0x4A, 0x84, 0xC8, 0xE2,
  0xC0, 0x20, 0x00, 0xC0, 0xC8, 0x41, 0xC2, 0x48,
  0x84, 0xB8, 0xE2, 0xC0, 0x20, 0x00, 0xB0, 0xB0,
  0xF5, 0xB2, 0x4E, 0x84, 0x98, 0xF2, 0xC0, 0x20,
  0x00, 0x92, 0x4A, 0x81, 0xF8, 0xF2, 0xC0, 0x20,
  0x00, 0xF0, 0xF8, 0x41, 0xF2, 0x48, 0x81, 0xD8,
  0xF2, 0xC0, 0x20, 0x00, 0xD0, 0xD0, 0xF5, 0xD2,
  0x4E, 0x81, 0xA8, 0x42, 0x25, 0x0F, 0x2D, 0x0C,
  0x0E, 0xE9, 0x42, 0x1D, 0xF0, 0xA2, 0xCB, 0x60,
  0xA5, 0x13, 0x00, 0x86, 0xE6, 0xFF, 0xA2, 0xCB,
  0x58, 0xE5, 0x12, 0x00, 0x46, 0xE4, 0xFF, 0x00,
  0x00, 0x36, 0x41, 0x00, 0xB1, 0xD9, 0x03, 0x0C,
  0x1D, 0x98, 0x4B, 0xA2, 0x0B, 0x14, 0xAC, 0x79,
  0xC1, 0xDD, 0x03, 0xEC, 0x4A, 0xA2, 0x09, 0x72,
  0xE2, 0x09, 0x73, 0xD2, 0x4B, 0x14, 0x80, 0x9E,
  0x11, 0xA0, 0x99, 0x20, 0xBC, 0xD9, 0xC0, 0x20,
  0x00, 0xA8, 0x0C, 0x9A, 0x9A, 0x0B, 0x99, 0x99,
  0x32, 0xD2, 0x6B, 0x10, 0xAD, 0x02, 0xA5, 0xED,
  0x20, 0x1D, 0xF0, 0x66, 0x1A, 0xF2, 0xE2, 0x09,
  0x71, 0xA2, 0x09, 0x70, 0x80, 0x9E, 0x11, 0xA0,
  0x99, 0x20, 0x0C, 0x0E, 0xE2, 0x4B, 0x14, 0x8C,
  0xA9, 0xC0, 0x20, 0x00, 0xA8, 0x0C, 0x9A, 0x9A,
  0x0B, 0x99, 0x46, 0xF4, 0xFF, 0xC0, 0x20, 0x00,
  0x98, 0x0C, 0x46, 0xF2, 0xFF, 0xC0, 0x20, 0x00,
  0x98, 0x0C, 0x46, 0xF0, 0xFF, 0x36, 0x41, 0x00,
  0x31, 0xD9, 0x03, 0xB8, 0x43, 0x92, 0x03, 0x14,
  0x16, 0xFB, 0x09, 0xFC, 0x99, 0x82, 0x0B, 0x71,
  0xA2, 0x0B, 0x70, 0x80, 0x88, 0x11, 0xA0, 0x88,
  0x20, 0xAC, 0xB8, 0xC2, 0x0B, 0x68, 0x92, 0x0B,
  0x6B, 0xA2, 0x0B, 0x6A, 0x80, 0x99, 0x11, 0xA0,
  0x99, 0x20, 0xA2, 0x0B, 0x69, 0x80, 0x99, 0x11,
  0xA0, 0x99, 0x20, 0xA2, 0x23, 0x10, 0x80, 0x99,
  0x11, 0xC0, 0x99, 0x20, 0xA7, 0x09, 0x6D, 0xA2,
  0xCB, 0x50, 0x65, 0x07, 0x00, 0xC6, 0x10, 0x00,
  0x66, 0x19, 0x40, 0xA2, 0x0B, 0x73, 0xC2, 0x0B,
  0x72, 0x80, 0xAA, 0x11, 0xC0, 0xAA, 0x20, 0xBC,
  0x1A, 0xE2, 0x0B, 0x6C, 0xC2, 0x0B, 0x6F, 0xD2,
  0x0B, 0x6E, 0x80, 0xCC, 0x11, 0xD0, 0xCC, 0x20,
  0xD2, 0x0B, 0x6D, 0x80, 0xCC, 0x11, 0xD0, 0xCC,
  0x20, 0xD2, 0x23, 0x10, 0x80, 0xCC, 0x11, 0xE0,
  0xCC, 0x20, 0xD7, 0x0C, 0x08, 0xA2, 0xCB, 0x60,
  0xA5, 0x03, 0x00, 0x46, 0x01, 0x00, 0xA2, 0xCB,
  0x58, 0xE5, 0x02, 0x00, 0xAD, 0x02, 0xD1, 0xDD,
  0x03, 0x82, 0x23, 0x10, 0x0C, 0x1F, 0xF0, 0x88,
  0x11, 0xED, 0x08, 0x80, 0xEF, 0x83, 0xE2, 0x63,
  0x10, 0xC0, 0x20, 0x00, 0xD8, 0x0D, 0xD9, 0x32,
  0xA5, 0xDF, 0x20, 0x1D, 0xF0, 0xA2, 0xCB, 0x48,
  0xA5, 0x00, 0x00, 0x46, 0xF5, 0xFF, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x4B, 0xA2, 0x25, 0x28,
  0x2D, 0x3D, 0x0A, 0xAD, 0x02, 0xA5, 0x27, 0x2D,
  0xB1, 0xE1, 0x03, 0xC1, 0xE2, 0x03, 0xC0, 0x20,
  0x00, 0x82, 0x0B, 0x03, 0xC0, 0x20, 0x00, 0x30,
  0x88, 0x10, 0x30, 0x38, 0x41, 0x80, 0x8A, 0x20,
  0xA0, 0xA8, 0x41, 0x82, 0x4B, 0x03, 0xB2, 0xDB,
  0x20, 0xC7, 0x9B, 0xE1, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0xA5, 0xDF, 0xFF, 0x1D,
  0xF0, 0x36, 0x41, 0x00, 0x31, 0xE3, 0x03, 0x21,
  0xE4, 0x03, 0x29, 0x13, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x81, 0xE5, 0x03, 0x30,
  0x61, 0x00, 0x88, 0x08, 0x82, 0x08, 0x10, 0x26,
  0x48, 0x07, 0xAD, 0x02, 0x25, 0x49, 0x28, 0x06,
  0x01, 0x00, 0x0C, 0x0A, 0x65, 0xE2, 0x20, 0x30,
  0xE6, 0x13, 0x10, 0x20, 0x00, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x21, 0xE6, 0x03, 0x88,
  0x02, 0x27, 0x18, 0x09, 0xAD, 0x02, 0xE5, 0x07,
  0x00, 0xAD, 0x02, 0x65, 0xD7, 0x20, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x20, 0x61, 0x00, 0xA1,
  0xE6, 0x03, 0x65, 0xD6, 0x20, 0x25, 0x1D, 0x24,
  0x20, 0xE6, 0x13, 0x10, 0x20, 0x00, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0x41, 0xE7, 0x03, 0x21,
  0xE8, 0x03, 0xC0, 0x20, 0x00, 0x32, 0x22, 0x81,
  0x98, 0x54, 0x88, 0x34, 0x30, 0x99, 0x20, 0x99,
  0x54, 0x87, 0x03, 0x06, 0x0C, 0x0A, 0xA9, 0x34,
  0x25, 0xDA, 0x21, 0x0C, 0x1D, 0x3C, 0x8C, 0xB8,
  0x44, 0xC0, 0x20, 0x00, 0xC0, 0xBB, 0x10, 0xB2,
  0x62, 0x80, 0xC0, 0x20, 0x00, 0xE2, 0x22, 0x81,
  0xE0, 0xF0, 0x04, 0x07, 0xEE, 0xF3, 0xC0, 0x20,
  0x00, 0xB1, 0xDD, 0x03, 0x32, 0x62, 0x81, 0xC0,
  0x20, 0x00, 0xB8, 0x0B, 0xA1, 0xE9, 0x03, 0x1B,
  0xBB, 0xB9, 0x4A, 0x4B, 0xAA, 0xA5, 0xCE, 0x20,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x20, 0x61, 0x00, 0x3C, 0x8A, 0x0C, 0x0B, 0x25,
  0x1A, 0x24, 0x20, 0xE6, 0x13, 0x10, 0x20, 0x00,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0xEA, 0x03, 0x38, 0x03, 0x8C, 0x73, 0x88,
  0x23, 0x66, 0x28, 0x03, 0x0C, 0x39, 0x99, 0x23,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0xEB, 0x03, 0x0C, 0x02, 0x22, 0x43, 0x00,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0xBD, 0x02, 0x21, 0xEA, 0x03, 0x28, 0x02, 0x1C,
  0x8C, 0xCB, 0xA2, 0xE5, 0x2E, 0x2D, 0xD1, 0xEC,
  0x03, 0x2C, 0x0B, 0x92, 0x12, 0x11, 0x0C, 0x1C,
  0xDC, 0x79, 0xA2, 0x12, 0x0F, 0x92, 0x12, 0x0E,
  0xA0, 0xA0, 0xE4, 0x90, 0xAA, 0xC0, 0xA2, 0xCA,
  0xC2, 0xA0, 0xA1, 0x21, 0xAA, 0x99, 0x8B, 0x99,
  0x92, 0x52, 0x11, 0xB2, 0x52, 0x13, 0xC9, 0x22,
  0xD0, 0xD9, 0x10, 0xD2, 0x52, 0x11, 0x1D, 0xF0,
  0x00, 0x36, 0x41, 0x00, 0xD8, 0x22, 0x31, 0xEA,
  0x03, 0x0C, 0x1E, 0x38, 0x03, 0x0C, 0x0C, 0xAD,
  0x03, 0xF2, 0x13, 0x13, 0xB2, 0x13, 0x10, 0xF0,
  0xCE, 0x83, 0xDA, 0xBB, 0x25, 0x17, 0x00, 0x0C,
  0x45, 0xA8, 0x23, 0x92, 0x13, 0x13, 0x0C, 0x04,
  0x8C, 0x69, 0x0B, 0x99, 0x90, 0x90, 0xF4, 0x92,
  0x53, 0x13, 0xF6, 0x8A, 0x2F, 0xB1, 0xED, 0x03,
  0xB0, 0xBA, 0xA0, 0xB8, 0x0B, 0xA0, 0x0B, 0x00,
  0xC8, 0x22, 0xB2, 0x13, 0x11, 0xAD, 0x03, 0xCA,
  0xBB, 0x65, 0x21, 0x00, 0xD2, 0x13, 0x06, 0xF1,
  0xEB, 0x03, 0xD7, 0x3A, 0x0F, 0x0C, 0x29, 0x92,
  0x4F, 0x00, 0xE2, 0x13, 0x0F, 0xE0, 0xEF, 0x04,
  0x16, 0xBE, 0x10, 0x99, 0x23, 0x0C, 0x14, 0x2D,
  0x04, 0x1D, 0xF0, 0x49, 0x23, 0x0C, 0x24, 0x06,
  0xFD, 0xFF, 0xAD, 0x03, 0xE5, 0x1B, 0x00, 0x82,
  0x13, 0x09, 0xB2, 0x13, 0x08, 0x87, 0x3A, 0x02,
  0x06, 0x24, 0x00, 0xC8, 0x22, 0xB2, 0x13, 0x11,
  0xAD, 0x03, 0xCA, 0xBB, 0x65, 0x1D, 0x00, 0xD2,
  0x13, 0x07, 0xD7, 0x3A, 0x02, 0xC6, 0x36, 0x00,
  0xE2, 0x13, 0x14, 0x0B, 0xEE, 0xE0, 0xE0, 0xF4,
  0xE2, 0x53, 0x14, 0x56, 0xEE, 0x0D, 0x0C, 0x24,
  0x0C, 0x7F, 0xF9, 0x23, 0xC6, 0xED, 0xFF, 0xAD,
  0x03, 0xE5, 0x17, 0x00, 0x82, 0x13, 0x08, 0x87,
  0x3A, 0x6A, 0x59, 0x23, 0x42, 0x53, 0x16, 0x92,
  0x13, 0x0A, 0x92, 0x53, 0x14, 0x0C, 0x04, 0x06,
  0xE7, 0xFF, 0xAD, 0x03, 0x65, 0x16, 0x00, 0xB2,
  0x13, 0x08, 0xB7, 0x3A, 0x29, 0xC2, 0x13, 0x14,
  0x0B, 0xCC, 0xC0, 0xC0, 0xF4, 0xC2, 0x53, 0x14,
  0xEC, 0xBC, 0x0C, 0x6D, 0xE2, 0x13, 0x0B, 0xE2,
  0x53, 0x14, 0xD9, 0x23, 0xC6, 0x07, 0x00, 0xDC,
  0xC9, 0x59, 0x23, 0x42, 0x53, 0x16, 0xF2, 0x13,
  0x0A, 0xF2, 0x53, 0x14, 0xC6, 0x03, 0x00, 0x0C,
  0x58, 0x92, 0x13, 0x0D, 0xA2, 0x13, 0x0C, 0xA2,
  0x53, 0x14, 0x92, 0x53, 0x15, 0x89, 0x23, 0x0C,
  0x04, 0x86, 0xD4, 0xFF, 0xB7, 0x3A, 0x05, 0xC2,
  0x13, 0x0B, 0xC2, 0x53, 0x14, 0x42, 0x53, 0x16,
  0x0C, 0x04, 0x46, 0xD0, 0xFF, 0x92, 0x13, 0x15,
  0x66, 0x19, 0x09, 0x0C, 0x34, 0x0B, 0xD9, 0xD2,
  0x53, 0x15, 0x46, 0xCC, 0xFF, 0xCC, 0x39, 0x0C,
  0x14, 0x86, 0x01, 0x00, 0x0C, 0x04, 0x0B, 0xE9,
  0xE2, 0x53, 0x15, 0xC8, 0x22, 0xB2, 0x13, 0x11,
  0xAD, 0x03, 0xCA, 0xBB, 0x65, 0x11, 0x00, 0xD2,
  0x13, 0x07, 0xD7, 0xBA, 0x10, 0xE2, 0x13, 0x14,
  0x0B, 0xEE, 0xE0, 0xE0, 0xF4, 0xE2, 0x53, 0x14,
  0xE0, 0x45, 0x83, 0x06, 0xC0, 0xFF, 0xF2, 0x13,
  0x0D, 0xF2, 0x53, 0x14, 0xC6, 0xBD, 0xFF, 0x0C,
  0x39, 0x86, 0xBB, 0xFF, 0x82, 0x13, 0x06, 0x87,
  0x3A, 0x05, 0x92, 0x13, 0x0B, 0x92, 0x53, 0x14,
  0x0C, 0x04, 0x46, 0xB8, 0xFF, 0x0C, 0x04, 0x06,
  0xB7, 0xFF, 0x00, 0x00, 0x00, 0x36, 0x61, 0x00,
  0xB2, 0xA0, 0x94, 0xA2, 0xC2, 0x34, 0x92, 0xC2,
  0x54, 0x99, 0x01, 0xA9, 0x11, 0xBC, 0xB4, 0x68,
  0x11, 0x5D, 0x09, 0x1C, 0x04, 0x72, 0x12, 0x12,
  0x82, 0xA0, 0x94, 0xC0, 0x77, 0x11, 0x7A, 0x72,
  0x8A, 0x77, 0x82, 0x16, 0x00, 0xB2, 0x07, 0x00,
  0x1B, 0x77, 0xAD, 0x0B, 0xB0, 0x88, 0xC0, 0x82,
  0x56, 0x00, 0x2B, 0x66, 0xA5, 0x35, 0x2D, 0x98,
  0x05, 0x0B, 0x44, 0xA0, 0x99, 0xC0, 0x99, 0x05,
  0x4B, 0x55, 0x56, 0xC4, 0xFD, 0x98, 0x01, 0xA8,
  0x11, 0xB2, 0xA0, 0x94, 0x5D, 0x09, 0x6D, 0x0A,
  0x72, 0x12, 0x12, 0x1C, 0x04, 0xC0, 0x77, 0x11,
  0x7A, 0x72, 0xBA, 0x77, 0xD2, 0x03, 0x01, 0xE2,
  0x03, 0x03, 0xC2, 0x03, 0x02, 0xB2, 0x03, 0x00,
  0xEA, 0xCC, 0xDA, 0xBB, 0xCA, 0xBB, 0xB0, 0xB2,
  0x41, 0xAD, 0x0B, 0xB2, 0x47, 0x00, 0x82, 0x16,
  0x00, 0x1B, 0x77, 0xBA, 0x88, 0x82, 0x56, 0x00,
  0x2B, 0x66, 0xA5, 0x30, 0x2D, 0x8B, 0x33, 0xF8,
  0x05, 0x0B, 0x44, 0xAA, 0xFF, 0xF9, 0x05, 0x4B,
  0x55, 0x56, 0x74, 0xFC, 0x82, 0x12, 0x12, 0x1B,
  0x88, 0x80, 0x80, 0x44, 0x82, 0x52, 0x12, 0x1D,
  0xF0, 0x36, 0x41, 0x00, 0x32, 0xC2, 0x34, 0x1C,
  0x05, 0x0C, 0x04, 0xB2, 0x13, 0x00, 0xAD, 0x0B,
  0xE5, 0x2D, 0x2D, 0x2B, 0x33, 0x0B, 0x55, 0xA0,
  0x95, 0x41, 0x82, 0x22, 0x15, 0x4B, 0x22, 0x90,
  0x88, 0xC0, 0x80, 0x85, 0x41, 0x8A, 0x44, 0x56,
  0x05, 0xFE, 0x40, 0x24, 0x41, 0x1D, 0xF0, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x1C, 0x07, 0x0C, 0x06,
  0x0C, 0x05, 0xB2, 0xC3, 0x81, 0x42, 0x03, 0x00,
  0xB2, 0x0B, 0x7E, 0xC2, 0x03, 0x01, 0x47, 0xBB,
  0x0C, 0x47, 0xBC, 0x11, 0x4D, 0x0B, 0xC7, 0xBB,
  0x0C, 0x4D, 0x0C, 0xC6, 0x01, 0x00, 0x47, 0x3C,
  0x04, 0xC7, 0xBB, 0x01, 0x4D, 0x0B, 0xAD, 0x04,
  0xBD, 0x04, 0xA5, 0x28, 0x2D, 0xAA, 0x66, 0x5A,
  0x54, 0x0B, 0x77, 0x4B, 0x33, 0xB2, 0xC3, 0x81,
  0x56, 0x97, 0xFC, 0xAD, 0x05, 0xBD, 0x05, 0x65,
  0x27, 0x2D, 0xD2, 0x12, 0x16, 0xA0, 0x94, 0x41,
  0x90, 0x96, 0xC0, 0xD0, 0xCD, 0xF0, 0x90, 0x94,
  0x41, 0x90, 0xE3, 0x41, 0xC0, 0xC3, 0x21, 0xEA,
  0xCC, 0xD0, 0x9C, 0x93, 0x92, 0x52, 0x16, 0x2D,
  0x09, 0x1D, 0xF0, 0x00, 0x00, 0x24, 0x00, 0x00,
  0x00, 0x64, 0x11, 0x02, 0x60, 0x04, 0x11, 0x02,
  0x60, 0xEC, 0x18, 0x00, 0x60, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x13, 0x02,
  0x60, 0xC8, 0x14, 0x02, 0x60, 0xD4, 0x13, 0x02,
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x19, 0x00,
  0x60, 0x1C, 0x19, 0x00, 0x60, 0x04, 0x19, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x00, 0x2C, 0x19, 0x00,
  0x60, 0x2C, 0x19, 0x00, 0x60, 0x08, 0x19, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x48, 0x19, 0x00, 0x60, 0x48, 0x19, 0x00,
  0x60, 0x0C, 0x19, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x00, 0x94, 0x15, 0x02, 0x60, 0x5C, 0x19, 0x00,
  0x60, 0x5C, 0x19, 0x00, 0x60, 0x58, 0x19, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x15, 0x02,
  0x60, 0xCC, 0x15, 0x02, 0x60, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x6C, 0x19, 0x00, 0x60, 0x70, 0x19, 0x00,
  0x60, 0xB0, 0x19, 0x00, 0x60, 0x94, 0x02, 0x00,
  0x00, 0x84, 0x16, 0x02, 0x60, 0x5F, 0x16, 0x02,
  0x60, 0x84, 0x16, 0x02, 0x60, 0x0E, 0x17, 0x02,
  0x60, 0xE9, 0x16, 0x02, 0x60, 0xCE, 0x16, 0x02,
  0x60, 0x91, 0x16, 0x02, 0x60, 0x8A, 0x16, 0x02,
  0x60, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x0C, 0x00,
  0x60, 0xD4, 0x0C, 0x00, 0x60, 0x10, 0xB0, 0x02,
  0x00, 0xC0, 0x19, 0x00, 0x60, 0x20, 0x01, 0x00,
  0x00, 0xB0, 0x0A, 0x00, 0x60, 0x04, 0x10, 0x02,
  0x60, 0xA0, 0x0A, 0x00, 0x60, 0xA4, 0x10, 0x02,
  0x60, 0xF8, 0x10, 0x02, 0x60, 0x6C, 0x10, 0x02,
  0x60, 0x6C, 0x06, 0x00, 0x60, 0x20, 0x16, 0x02,
  0x60, 0xF4, 0x05, 0x00, 0x60, 0x4C, 0x10, 0x02,
  0x60, 0xA8, 0x0B, 0x00, 0x60, 0xF8, 0x18, 0x00,
  0x60, 0x68, 0x0A, 0x00, 0x60, 0x28, 0x8F, 0x04,
  0x60, 0x48, 0x08, 0x00, 0x60, 0xE0, 0x14, 0x02,
  0x60, 0xAC, 0x06, 0x00, 0x60, 0x20, 0x15, 0x02,
  0x60, 0x38, 0x15, 0x02, 0x60, 0xD8, 0x56, 0x04,
  0x60, 0x36, 0x41, 0x00, 0x81, 0x6F, 0x06, 0xB1,
  0x6D, 0x06, 0x0C, 0x6A, 0x91, 0x6E, 0x06, 0xA2,
  0x4B, 0x00, 0x89, 0x09, 0x25, 0x02, 0x00, 0x65,
  0x07, 0x00, 0x25, 0x09, 0x00, 0xE5, 0x07, 0x00,
  0x65, 0x02, 0x00, 0x65, 0x05, 0x00, 0xA5, 0x6E,
  0xFF, 0xA1, 0x70, 0x06, 0xB1, 0x71, 0x06, 0x65,
  0xB3, 0x2C, 0x1D, 0xF0, 0x00, 0x36, 0x41, 0x00,
  0x31, 0x72, 0x06, 0x21, 0x73, 0x06, 0x22, 0x63,
  0x75, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x0C, 0x8F, 0xB1, 0x72, 0x06, 0xA1, 0x77, 0x06,
  0x91, 0x78, 0x06, 0x81, 0x79, 0x06, 0x31, 0x7A,
  0x06, 0x21, 0x7B, 0x06, 0xC1, 0x76, 0x06, 0xD1,
  0x74, 0x06, 0xE1, 0x75, 0x06, 0xE9, 0xFD, 0xC2,
  0x6D, 0x19, 0x29, 0x83, 0x89, 0x39, 0xA2, 0x6B,
  0x6B, 0xF2, 0x5D, 0x1C, 0x1D, 0xF0, 0x00, 0x00,
  0x00, 0x36, 0x41, 0x00, 0x31, 0x7C, 0x06, 0x21,
  0x7D, 0x06, 0x48, 0x03, 0x49, 0x22, 0x29, 0x03,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0x7E, 0x06, 0x21, 0x7F, 0x06, 0x29, 0x13,
  0x1D, 0xF0, 0x00, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x31, 0x80, 0x06, 0x21, 0x81, 0x06, 0x22, 0x63,
  0x19, 0x1D, 0xF0, 0x00, 0x00, 0x36, 0x41, 0x00,
  0x91, 0x83, 0x06, 0x21, 0x85, 0x06, 0x31, 0x82,
  0x06, 0x81, 0x84, 0x06, 0x89, 0xC3, 0x29, 0xA3,
  0x99, 0xB3, 0x1D, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x04, 0x00, 0x18, 0x1A, 0x02,
  0x60,
};

static const unsigned char vfs301_12[] = { /* 57 B */
  0x12, 0x90, 0x02, 0x00, 0x00, 0xFE, 0x03, 0x00,
  0x00, 0xFF, 0x1F, 0xFF, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0xE3, 0x18, 0xD8, 0x01, 0xE3, 0x18, 0xD8,
  0x01, 0xE3, 0x18, 0xD8, 0x01, 0xE3, 0x18, 0xD8,
  0x01, 0xE3, 0x18, 0xD8, 0x01, 0x20, 0xFA, 0x80,
  0x00, 0x3F, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x03, 0x00,
  0x00,
};

static const unsigned char vfs301_24[] = { /* 119 B */
  0x24, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF,
  0x07, 0x00, 0x00, 0x00,
  0xF8, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF,
  0x07, 0x00, 0x00, 0x00,
  0xF8, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF,
  0x07, 0x00, 0x00, 0x00,
  0xF8, 0xFF, 0xFF, 0xFF,
  0x07, 0x00, 0x00, 0x00,
  0xF8, 0xFF, 0xFF, 0xFF,
  0x07, 0x00, 0x00, 0x00,
  0xF8, 0xFF, 0xFF, 0xFF,
  0x07, 0x00, 0x00, 0x00,
  0xF8, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  /* or :
   * 0x00, 0xF4, 0x01, 0xF4, 0x01, 0x00, 0xB4, */
};

#define PACKET(cmd, length, payload) \
  cmd length payload

/* This could be some kind of poke-command.
 * a looks like the address; (addr << 2), stored in little endian,
 * b looks like some flags, value of a seems to imply value of b
 * c looks like the stored value */
#define S1(a, b, c) \
  PACKET ("0300", "0900", a b c "04")

#define S2(a) \
  PACKET ("0500", "0E00", a)

#define S3(a) \
  PACKET ("0A00", "0800", a a)

#define S4_TAIL \
  "00008000" "6400F401" "00000000" "0000C780" "24004400"
#define S4(a) \
  PACKET ("0800", "1800", a a S4_TAIL)

#define Z8() \
  "00000000"

#define TERM() \
  PACKET ("1500", "0800", "0000000020280000")

/* NOTE:
 * * Reordering the S1() macros in BLOB1 (and similar) doesn't
 *   seem to make any change.
 * * Reordering lines inside the PACKET() does modify the output's columns
 *   contents.
 *
 * The contents of PACKET() inside this blob seems to be some kind
 * of a micro-program, which specifies which columns contain what. LE seems
 * to be used also here. Not necessarily is 1 output column described
 * by 1 operation. For example the vfs301_line_t::sum section seems
 * to perform 2 operations for each column - probably some kind of diff between
 * input lines?
 */
#define vfs301_0220_BLOB1 \
  S1 ("0420", "0430", "00000000"), \
  S1 ("1820", "0430", "00000000"), \
  S1 ("2020", "0430", "08008000"), \
  S1 ("2420", "0430", "0000FF01"), \
  S1 ("2C20", "0430", "01000000"), \
  S1 ("4020", "0430", "FF030000"), \
  S1 ("4420", "0430", "E5030000"), \
  S1 ("4820", "0430", "EA030000"), \
  S1 ("4C20", "0430", "EA030000"), \
  S1 ("5020", "0430", "00000400"), \
  S1 ("5420", "0430", "01980200"), \
  S1 ("0021", "0430", "00000000"), \
  S1 ("0421", "0430", "01000000"), \
  S1 ("0821", "0430", "02000000"), \
  S1 ("0C21", "0430", "01000000"), \
  S1 ("1021", "0430", "01000000"), \
  S1 ("1421", "0430", "01000000"), \
  S1 ("1821", "0430", "01000000"), \
  S1 ("1C21", "0430", "1F000000"), \
  S1 ("2021", "0430", "08000000"), \
  S1 ("4021", "0430", "00000000"), \
  S1 ("4421", "0430", "01000000"), \
  S1 ("4821", "0430", "02000000"), \
  S1 ("4C21", "0430", "01000000"), \
  S1 ("5021", "0430", "01000000"), \
  S1 ("5421", "0430", "01000000"), \
  S1 ("5821", "0430", "01000000"), \
  S1 ("5C21", "0430", "1F000000"), \
  S1 ("6021", "0430", "08000000"), \
  S1 ("8021", "0430", "30000000"), \
  S1 ("8421", "0430", "01000000"), \
  S1 ("8821", "0430", "01000000"), \
  S1 ("8C21", "0430", "01000000"), \
  S1 ("9021", "0430", "00000000"), \
  S1 ("9421", "0430", "01000000"), \
  S1 ("9821", "0430", "00000000"), \
  S1 ("9C21", "0430", "1F000000"), \
  S1 ("A021", "0430", "04000000"), \
  S1 ("C021", "0430", "30000000"), \
  S1 ("C421", "0430", "01000000"), \
  S1 ("C821", "0430", "01000000"), \
  S1 ("CC21", "0430", "01000000"), \
  S1 ("D021", "0430", "01000000"), \
  S1 ("D421", "0430", "01000000"), \
  S1 ("D821", "0430", "01000000"), \
  S1 ("DC21", "0430", "1F000000"), \
  S1 ("E021", "0430", "03000000"), \
  S1 ("A020", "0430", "EFE10000"), \
  S1 ("A420", "0430", "00000000"), \
  S1 ("A820", "0430", "FE210400"), \
  S1 ("B020", "0430", "00000000"), \
  S1 ("C420", "0430", "14000000"), \
  S1 ("C820", "0430", "00000000"), \
  S1 ("CC20", "0430", "20000000"), \
  S1 ("38A0", "0038", "5CA30000"), \
  S1 ("0000", "0038", "02000000"), \
  S1 ("0400", "0038", "00080000"), \
  S1 ("0800", "0038", "00120000"), \
  S1 ("0C00", "0038", "01030200"), \
  S1 ("1000", "0038", "01070200"), \
  S1 ("1400", "0038", "0C0C8A00"), \
  PACKET ("0200",  "8005", \
          "FFF98720" \
          "1AF88700" \
          "1AF88700" \
          "1AF88700" \
          "1AF88700" \
          "1AF88700" \
          "1AF88700" \
          /* NOTE: The following(?) 200 values specify order of fingerprint columns \
           * in vfs301_line_t::scan. */       \
          "1AF80720" \
          "1BF80720" \
          "1CF80720" \
          "1DF80720" \
          "1EF80720" \
          "1FF80720" \
          "20F80720" \
          "21F80720" \
          "22F80720" \
          "23F80720" \
          "24F80722" \
          "25F80722" \
          "26F80722" \
          "27F80722" \
          "28F80722" \
          "29F80722" \
          "2AF80722" \
          "2BF80722" \
          "2CF80722" \
          "2DF80722" \
          "2EF80722" \
          "2FF80722" \
          "30F80722" \
          "31F80722" \
          "32F80722" \
          "33F80722" \
          "34F80722" \
          "35F80722" \
          "36F80722" \
          "37F80722" \
          "38F80722" \
          "39F80722" \
          "3AF80722" \
          "3BF80722" \
          "3CF80722" \
          "3DF80722" \
          "3EF80722" \
          "3FF80722" \
          "40F80722" \
          "41F80722" \
          "42F80722" \
          "43F80722" \
          "44F80722" \
          "45F80722" \
          "46F80722" \
          "47F80722" \
          "48F80722" \
          "49F80722" \
          "4AF80722" \
          "4BF80722" \
          "4CF80722" \
          "4DF80722" \
          "4EF80722" \
          "4FF80722" \
          "50F80722" \
          "51F80722" \
          "52F80722" \
          "53F80722" \
          "54F80722" \
          "55F80722" \
          "56F80722" \
          "57F80722" \
          "58F80722" \
          "59F80722" \
          "5AF80722" \
          "5BF80722" \
          "5CF80722" \
          "5DF80722" \
          "5EF80722" \
          "5FF80722" \
          "60F80722" \
          "61F80722" \
          "62F80722" \
          "63F80722" \
          "64F80722" \
          "65F80722" \
          "66F80722" \
          "67F80722" \
          "68F80722" \
          "69F80722" \
          "6AF80722" \
          "6BF80722" \
          "6CF80722" \
          "6DF80722" \
          "6EF80722" \
          "6FF80722" \
          "70F80722" \
          "71F80722" \
          "72F80722" \
          "73F80722" \
          "74F80722" \
          "75F80722" \
          "76F80722" \
          "77F80722" \
          "78F80722" \
          "79F80722" \
          "7AF80722" \
          "7BF80722" \
          "7CF80722" \
          "7DF80722" \
          "7EF80722" \
          "7FF80722" \
          "80F80722" \
          "81F80722" \
          "82F80722" \
          "83F80722" \
          "84F80722" \
          "85F80722" \
          "86F80722" \
          "87F80722" \
          "88F80722" \
          "89F80722" \
          "8AF80722" \
          "8BF80722" \
          "8CF80722" \
          "8DF80722" \
          "8EF80722" \
          "8FF80722" \
          "90F80722" \
          "91F80722" \
          "92F80722" \
          "93F80722" \
          "94F80722" \
          "95F80722" \
          "96F80722" \
          "97F80722" \
          "98F80722" \
          "99F80722" \
          "9AF80722" \
          "9BF80722" \
          "9CF80722" \
          "9DF80722" \
          "9EF80722" \
          "9FF80722" \
          "A0F80722" \
          "A1F80722" \
          "A2F80722" \
          "A3F80722" \
          "A4F80722" \
          "A5F80722" \
          "A6F80722" \
          "A7F80722" \
          "A8F80722" \
          "A9F80722" \
          "AAF80722" \
          "ABF80722" \
          "ACF80722" \
          "ADF80722" \
          "AEF80722" \
          "AFF80722" \
          "B0F80722" \
          "B1F80722" \
          "B2F80722" \
          "B3F80722" \
          "B4F80722" \
          "B5F80722" \
          "B6F80722" \
          "B7F80722" \
          "B8F80722" \
          "B9F80722" \
          "BAF80722" \
          "BBF80722" \
          "BCF80722" \
          "BDF80722" \
          "BEF80722" \
          "BFF80722" \
          "C0F80722" \
          "C1F80722" \
          "C2F80722" \
          "C3F80722" \
          "C4F80722" \
          "C5F80722" \
          "C6F80722" \
          "C7F80722" \
          "C8F80722" \
          "C9F80722" \
          "CAF80722" \
          "CBF80722" \
          "CCF80722" \
          "CDF80722" \
          "CEF80722" \
          "CFF80722" \
          "D0F80722" \
          "D1F80722" \
          "D2F80722" \
          "D3F80722" \
          "D4F80722" \
          "D5F80722" \
          "D6F80722" \
          "D7F80722" \
          "D8F80720" \
          "D9F80720" \
          "DAF80720" \
          "DBF80720" \
          "DCF80720" \
          "DDF80720" \
          "DEF80720" \
          "DFF80720" \
          "E0F80720" \
          "E1F80720" \
                \
          "E1F80700" \
          "0BF88700" \
          "0BF88700" \
          "0BF88700" \
          "0BF88700" \
          "0BF88700" \
          /* NOTE: The following(?) 64 values specify order of fingerprint columns \
           * in vfs301_line_t::mirror. \
           * Placing Z8() instead of the value shortens the mirror section. \
           * */       \
          "0BF88700" \
          "0AF80720" \
          "09F80720" \
          "08F80720" \
          "07F80720" \
          "06F80720" \
          "05F80720" \
          "04F80720" \
          "03F80720" \
          "02F80720" \
          "01F80720" \
          "00F80720" \
          "17F90720" \
          "16F90720" \
          "15F90720" \
          "14F90720" \
          "13F90720" \
          "12F90720" \
          "11F90720" \
          "10F90720" \
          "0FF90720" \
          "0EF90720" \
          "0DF90720" \
          "0CF90720" \
          "0BF90720" \
          "0AF90720" \
          "09F90720" \
          "08F90720" \
          "07F90720" \
          "06F90720" \
          "05F90720" \
          "04F90720" \
          "03F90720" \
          "02F90720" \
          "01F90720" \
          "00F90720" \
          "FFF80720" \
          "FEF80720" \
          "FDF80720" \
          "FCF80720" \
          "FBF80720" \
          "FAF80720" \
          "F9F80720" \
          "F8F80720" \
          "F7F80720" \
          "F6F80720" \
          "F5F80720" \
          "F4F80720" \
          "F3F80720" \
          "F2F80720" \
          "F1F80720" \
          "F0F80720" \
          "EFF80720" \
          "EEF80720" \
          "EDF80720" \
          "ECF80720" \
          "EBF80720" \
          "EAF80720" \
          "E9F80720" \
          "E8F80720" \
          "E7F80720" \
          "E6F80720" \
          "E5F80720" \
          "E4F80720" \
                \
          "0BF80720" \
          "0BF80700" \
                \
          "5CF2C700" \
          "5CF2C700" \
          "5CF2C700" \
          "5CF2C700" \
          "5CF2C700" \
          "5CF24700" \
          "5CF24700" \
          "5CF24720" \
          "FFF94700" \
          "FFF94700" \
          "FFF94700" \
          "FFF94700" \
          "FFF94700" \
          "FFF94720" \
          "5CF84700" \
          "5CF84700" \
          "5CF84700" \
          "5CF84700" \
                \
          /* NOTE: The following(?) values specify order of fingerprint columns \
           * in vfs301_line_t::sum*. */       \
          "5CF84700" \
          "5CF84720" \
          "62F84700" \
          "62F84720" \
          "68F84700" \
          "68F84720" \
          "6EF84700" \
          "6EF84720" \
          "74F84700" \
          "74F84720" \
          "7AF84700" \
          "7AF84720" \
          "80F84700" \
          "80F84720" \
          "86F84700" \
          "86F84720" \
          "8CF84700" \
          "8CF84720" \
          "92F84700" \
          "92F84720" \
          "98F84720" \
          "9E844700" \
          "9E844720" \
          "9E844700" \
                \
          "FFF96700" "FFF96700" "FFF96700" "FFF96700" "FFF96720" \
                                                      "0DF86700" "0DF86700" "0DF86700" "0DF86700" "0DF86700" \
                                                                                                  "0DF86720" "0DF86700" \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
         ), \
  S3 ("1003181C"), \
  S1 ("0020", "0430", "80000000")

#define vfs301_0220_BLOB2 \
  S2 ("0C20FF00FFFF0000000000030000"), \
  S2 ("1020FF00FFFF0000000000070000"), \
  S1 ("0421", "0430", "01000000"), \
  S1 ("0821", "0430", "02000000"), \
  S1 ("0C21", "0430", "01000000"), \
  S1 ("1021", "0430", "01000000"), \
  S1 ("1421", "0430", "01000000"), \
  S1 ("1821", "0430", "01000000"), \
  S1 ("4421", "0430", "01000000"), \
  S1 ("4821", "0430", "02000000"), \
  S1 ("4C21", "0430", "01000000"), \
  S1 ("5021", "0430", "01000000"), \
  S1 ("5421", "0430", "01000000"), \
  S1 ("5821", "0430", "01000000"), \
  S1 ("C820", "0430", "07000000"), \
  S2 ("1420FFFF00FF0000000000008800"), \
  S1 ("8421", "0430", "01000000"), \
  S1 ("8821", "0430", "01000000"), \
  S1 ("8C21", "0430", "01000000"), \
  S1 ("9021", "0430", "01000000"), \
  S1 ("9421", "0430", "01000000"), \
  S1 ("9821", "0430", "01000000"), \
  S1 ("A021", "0430", "00000000"), \
  S1 ("2021", "0430", "08000000"), \
  S1 ("6021", "0430", "08000000")

#define vfs301_02D0_BLOB1 \
  S1 ("A820", "0430", "FE210000"), \
  S1 ("B020", "0430", "00000000"), \
  S1 ("C420", "0430", "14000000"), \
  S1 ("C820", "0430", "00000000"), \
  S1 ("CC20", "0430", "20000000"), \
  S1 ("38A0", "0038", "5CA30000"), \
  S1 ("0000", "0038", "02000000"), \
  S1 ("0400", "0038", "00080000"), \
  S1 ("0800", "0038", "00120000"), \
  S1 ("0C00", "0038", "01030200"), \
  S1 ("1000", "0038", "01070200"), \
  S1 ("1400", "0038", "0C0C8A00")

#define vfs301_02D0_BLOB4 \
  PACKET ("1200", "0100", "01"), \
  S2 ("0C20FF00FFFF0000000000030000"), \
  S2 ("1020FF00FFFF0000000000070000"), \
  S1 ("0421", "0430", "01000000"), \
  S1 ("0821", "0430", "02000000"), \
  S1 ("0C21", "0430", "01000000"), \
  S1 ("1021", "0430", "01000000"), \
  S1 ("1421", "0430", "01000000"), \
  S1 ("1821", "0430", "01000000"), \
  S1 ("4421", "0430", "01000000"), \
  S1 ("4821", "0430", "02000000"), \
  S1 ("4C21", "0430", "01000000"), \
  S1 ("5021", "0430", "01000000"), \
  S1 ("5421", "0430", "01000000"), \
  S1 ("5821", "0430", "01000000")

/* TODO: looks like that removing this whole packet doesn't cause
 * any troubles. */
#define vfs301_02D0_ALIGNED_BLOB \
  PACKET ("0200", "8005", \
          "FF830720"  "5F820720"  "FF830720" \
                                  "5F820720"  "FF830720"  "5F820720"  "FF830720" \
                                                                      "5F820720"  "FF830720"  "5F820720"  "FF8B0720" \
                                                                                                          "608A0720"  "FF930720"  "61920720"  "FF9B0720" \
                                                                                                                                              "629A0720"  "FFA30720"  "63A20720"  "FFAB0720" \
                                                                                                                                                                                  "64AA0720"  "FFB30720"  "65B20720"  "FFBB0720" \
                                                                                                                                                                                                                      "66BA0720"  "FFC30720"  "67C20720"  "FFCB0720" \
                                                                                                                                                                                                                                                          "68CA0720"  "FFD30720"  "69D20720"  "FFDB0720" \
                                                                                                                                                                                                                                                                                              "6ADA0720"  "FFE30720"  "6BE20720"  "FFEB0720" \
                                                                                                                                                                                                                                                                                                                                  "6CEA0720"  "FFF30720"  "6DF20720"  "FFFB0720" \
                                                                                                                                                                                                                                                                                                                                                                      "6EFA0720"  "FF850720"  "6F840720"  "FF8D0720" \
                                                                                                                                                                                                                                                                                                                                                                                                          "708C0720"  "FF950720"  "71940720"  "FF9D0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                              "729C0720"  "FFA50720"  "73A40720"  "FFAD0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "74AC0720"  "FFB50720"  "75B40720"  "FFBD0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "76BC0720"  "FFC50720"  "77C40720"  "FFCD0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "78CC0720"  "FFD50720"  "79D40720"  "FFDD0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "7ADC0720"  "FFE50720"  "7BE40720"  "FFED0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "7CEC0720"  "FFF50720"  "7DF40720"  "FFFD0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "7EFC0720"  "FF870720"  "7F860720"  "FF8F0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "808E0720"  "FF970720"  "81960720"  "FF9F0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "829E0720"  "FFA70720"  "83A60720"  "FFAF0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "84AE0720"  "FFB70720"  "85B60720"  "FFBF0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "86BE0720"  "FFC70720"  "87C60720"  "FFCF0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "88CE0720"  "FFD70720"  "89D60720"  "FFDF0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "8ADE0720"  "FFE70720"  "8BE60720"  "FFEF0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "8CEE0720"  "FFF70720"  "8DF60720"  "FFFF0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "8EFE0720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFFF0720"  "8EFE0720"  "FFF70720"  "8DF60720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFEF0720"  "8CEE0720"  "FFE70720"  "8BE60720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FFDF0720"  "8ADE0720"  "FFD70720"  "89D60720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FFCF0720"  "88CE0720"  "FFC70720"  "87C60720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFBF0720"  "86BE0720"  "FFB70720"  "85B60720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFAF0720"  "84AE0720"  "FFA70720"  "83A60720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FF9F0720"  "829E0720"  "FF970720"  "81960720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FF8F0720"  "808E0720"  "FF870720"  "7F860720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFFD0720"  "7EFC0720"  "FFF50720"  "7DF40720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFED0720"  "7CEC0720"  "FFE50720"  "7BE40720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FFDD0720"  "7ADC0720"  "FFD50720"  "79D40720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FFCD0720"  "78CC0720"  "FFC50720"  "77C40720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFBD0720"  "76BC0720"  "FFB50720"  "75B40720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFAD0720"  "74AC0720"  "FFA50720"  "73A40720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FF9D0720"  "729C0720"  "FF950720"  "71940720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FF8D0720"  "708C0720"  "FF850720"  "6F840720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFFB0720"  "6EFA0720"  "FFF30720"  "6DF20720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFEB0720"  "6CEA0720"  "FFE30720"  "6BE20720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FFDB0720"  "6ADA0720"  "FFD30720"  "69D20720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FFCB0720"  "68CA0720"  "FFC30720"  "67C20720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFBB0720"  "66BA0720"  "FFB30720"  "65B20720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFAB0720"  "64AA0720"  "FFA30720"  "63A20720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FF9B0720"  "629A0720"  "FF930720"  "61920720" \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FF8B0720"  "608A0720"  "FF830720"  "5F820720" \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () \
         ), \
  S3 ("1003181C"), \
  S1 ("0020", "0430", "80000000")

const char *vfs301_0220_01[] = {
  "0220010100",

  /* NOTE: replacing this by vfs301_0220_BLOB1 seems to not cause problems */
  S1 ("0420", "0430", "00000000"),
  S1 ("1820", "0430", "00000000"),
  S1 ("2020", "0430", "08008000"),
  S1 ("2420", "0430", "0000FF01"),
  S1 ("2C20", "0430", "01000000"),
  S1 ("4020", "0430", "AD010000"),
  S1 ("4420", "0430", "AD010000"),
  S1 ("4820", "0430", "AD010000"),
  S1 ("4C20", "0430", "FF030000"),
  S1 ("5020", "0430", "00005003"),
  S1 ("5420", "0430", "013E0200"),
  S1 ("0021", "0430", "14000000"),
  S1 ("0421", "0430", "01000000"),
  S1 ("0821", "0430", "01000000"),
  S1 ("0C21", "0430", "01000000"),
  S1 ("1021", "0430", "01000000"),
  S1 ("1421", "0430", "01000000"),
  S1 ("1821", "0430", "01000000"),
  S1 ("1C21", "0430", "12000000"),
  S1 ("2021", "0430", "04000000"),
  S1 ("4021", "0430", "00000000"),
  S1 ("4421", "0430", "01000000"),
  S1 ("4821", "0430", "10000000"),
  S1 ("4C21", "0430", "01000000"),
  S1 ("5021", "0430", "01000000"),
  S1 ("5421", "0430", "00000000"),
  S1 ("5821", "0430", "01000000"),
  S1 ("5C21", "0430", "1F000000"),
  S1 ("6021", "0430", "0F000000"),
  S1 ("8021", "0430", "00000000"),
  S1 ("8421", "0430", "01000000"),
  S1 ("8821", "0430", "10000000"),
  S1 ("8C21", "0430", "01000000"),
  S1 ("9021", "0430", "01000000"),
  S1 ("9421", "0430", "00000000"),
  S1 ("9821", "0430", "01000000"),
  S1 ("9C21", "0430", "1F000000"),
  S1 ("A021", "0430", "0F000000"),
  S1 ("C021", "0430", "00000000"),
  S1 ("C421", "0430", "01000000"),
  S1 ("C821", "0430", "10000000"),
  S1 ("CC21", "0430", "01000000"),
  S1 ("D021", "0430", "01000000"),
  S1 ("D421", "0430", "00000000"),
  S1 ("D821", "0430", "01000000"),
  S1 ("DC21", "0430", "1F000000"),
  S1 ("E021", "0430", "0F000000"),
  S1 ("A020", "0430", "EFE10000"),
  S1 ("A420", "0430", "00000000"),
  S1 ("A820", "0430", "FE210000"),
  S1 ("B020", "0430", "00000000"),
  S1 ("C420", "0430", "47000000"),
  S1 ("C820", "0430", "00000000"),
  S1 ("CC20", "0430", "20000000"),
  S1 ("38A0", "0038", "5CA30000"),
  S1 ("0000", "0038", "02000000"),
  S1 ("0400", "0038", "00080000"),
  S1 ("0800", "0038", "00120000"),
  S1 ("0C00", "0038", "01030200"),
  S1 ("1000", "0038", "01070200"),
  S1 ("1400", "0038", "0C0C8A00"),

  /* TODO: looks like that removing this whole packet doesn't cause
   * any troubles. */
  PACKET ("0200", "8005",
          "FFF98720"
          "83488420"
          "83488420"
          "83488420"
          "83488420"
          "83488420"
          "83488420"
          "83488420"
          "83488420"
          "83488420"
          "83488420"
          "85480420"
          "87480420"
          "89480420"
          "8B480420"
          "8D480420"
          "8F480420"
          "91480420"
          "93480420"
          "95480420"
          "97480420"
          "99480420"
          "9B480420"
          "9D480420"
          "9F480420"
          "A1480420"
          "A3480420"
          "A3480400"
          "855A0420"
          "875A0420"
          "895A0420"
          "8B5A0420"
          "8D5A0420"
          "8F5A0420"
          "915A0420"
          "935A0420"
          "955A0420"
          "975A0420"
          "995A0420"
          "9B5A0420"
          "9D5A0420"
          "9F5A0420"
          "A15A0420"
          "A35A0420"
          "A35A0400"
          "856C0420"
          "876C0420"
          "896C0420"
          "8B6C0420"
          "8D6C0420"
          "8F6C0420"
          "916C0420"
          "936C0420"
          "956C0420"
          "976C0420"
          "996C0420"
          "9B6C0420"
          "9D6C0420"
          "9F6C0420"
          "A16C0420"
          "A36C0420"
          "A36C0400"
          "86480420"
          "88480420"
          "8A480420"
          "8C480420"
          "8E480420"
          "90480420"
          "92480420"
          "94480420"
          "96480420"
          "98480420"
          "9A480420"
          "9C480420"
          "9E480420"
          "A0480420"
          "A2480420"
          "A4480420"
          "A4480400"
          "865A0420"
          "885A0420"
          "8A5A0420"
          "8C5A0420"
          "8E5A0420"
          "905A0420"
          "925A0420"
          "945A0420"
          "965A0420"
          "985A0420"
          "9A5A0420"
          "9C5A0420"
          "9E5A0420"
          "A05A0420"
          "A25A0420"
          "A45A0420"
          "A45A0400"
          "866C0420"
          "886C0420"
          "8A6C0420"
          "8C6C0420"
          "8E6C0420"
          "906C0420"
          "926C0420"
          "946C0420"
          "966C0420"
          "986C0420"
          "9A6C0420"
          "9C6C0420"
          "9E6C0420"
          "A06C0420"
          "A26C0420"
          "A46C0420"
          "A46C0400"
          "83688420" "83688420" "83688420" "83688420"
                                           "83688420" "83688420" "83688420" "83688420"
                                                                            "83688420" "83688420" "83688420" "83688420"
                                                                                                             "83688420" "83688420" "83688420" "83688420"
                                                                                                                                              "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                               "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                 "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                  "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                   "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                    "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                     "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                      "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                       "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    "83688420" "83688420" "83688420" "83688420"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     "83688420" "83688420"
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 ()
         ),
  S3 ("10035109"),
  S1 ("0020", "0430", "80000000"),

  TERM (),

  NULL
};


const char *vfs301_next_scan_template[] = {
  PACKET ("0220", "0100", "00"),

  vfs301_0220_BLOB1,

  vfs301_0220_BLOB2,

  TERM (),

  S4 ("DEAD"),

  NULL
};

const char *vfs301_0220_02[] = {
  "0220011400",

  vfs301_0220_BLOB1,

  vfs301_0220_BLOB2,

  TERM (),

  NULL
};

const char *vfs301_0220_03[] = {
  "0220011400",

  vfs301_0220_BLOB1,

  "17000000",

  vfs301_0220_BLOB2,

  TERM (),

  NULL
};


const char *vfs301_02D0_01[] = {
  "02D0003800",

  S1 ("0420", "0430", "00000000"),
  S1 ("1820", "0430", "01807800"),
  S1 ("2020", "0430", "08008000"),
  S1 ("2420", "0430", "0000FF01"),
  S1 ("2C20", "0430", "01000000"),
  S1 ("4020", "0430", "FF030000"),
  S1 ("4420", "0430", "E6030000"),
  S1 ("4820", "0430", "E7030000"),
  S1 ("4C20", "0430", "E8030000"),
  S1 ("5020", "0430", "00025802"),
  S1 ("5420", "0430", "00E20100"),
  S1 ("0021", "0430", "00000000"),
  S1 ("0421", "0430", "01000000"),
  S1 ("0821", "0430", "01000000"),
  S1 ("0C21", "0430", "01000000"),
  S1 ("1021", "0430", "01000000"),
  S1 ("1421", "0430", "01000000"),
  S1 ("1821", "0430", "01000000"),
  S1 ("1C21", "0430", "1F000000"),
  S1 ("2021", "0430", "01000000"),
  S1 ("4021", "0430", "00000000"),
  S1 ("4421", "0430", "01000000"),
  S1 ("4821", "0430", "01000000"),
  S1 ("4C21", "0430", "01000000"),
  S1 ("5021", "0430", "01000000"),
  S1 ("5421", "0430", "01000000"),
  S1 ("5821", "0430", "01000000"),
  S1 ("5C21", "0430", "1F000000"),
  S1 ("6021", "0430", "01000000"),
  S1 ("8021", "0430", "00000000"),
  S1 ("8421", "0430", "01000000"),
  S1 ("8821", "0430", "01000000"),
  S1 ("8C21", "0430", "01000000"),
  S1 ("9021", "0430", "01000000"),
  S1 ("9421", "0430", "01000000"),
  S1 ("9821", "0430", "01000000"),
  S1 ("9C21", "0430", "1F000000"),
  S1 ("A021", "0430", "01000000"),
  S1 ("C021", "0430", "00000000"),
  S1 ("C421", "0430", "01000000"),
  S1 ("C821", "0430", "01000000"),
  S1 ("CC21", "0430", "01000000"),
  S1 ("D021", "0430", "01000000"),
  S1 ("D421", "0430", "01000000"),
  S1 ("D821", "0430", "01000000"),
  S1 ("DC21", "0430", "1F000000"),
  S1 ("E021", "0430", "01000000"),
  S1 ("A020", "0430", "EFE10000"),
  S1 ("A420", "0430", "00000000"),
  vfs301_02D0_BLOB1,
  vfs301_02D0_ALIGNED_BLOB,

  PACKET ("0C00", "0100", "00"),
  PACKET ("0D00", "E800",
          "C0000000080000000200000000000000"
          "00000050D52200180000009CCE156100"
          "0000002003000000"
          "0C00003800080000FF00FFFF"
          "0C00003800090000FF00FFFF"
          "0C00003800020000FF00FFFF"
          "0C00003800030000FF00FFFF"
          "0C00003800040000FF00FFFF"
          "0C00003800050000FF00FFFF"
          "0C00003800060000FF00FFFF"
          "0C00003800070000FF00FFFF"
          "1000003800040000FF00FFFF"
          "1000003800050000FF00FFFF"
          "1000003800060000FF00FFFF"
          "1000003800070000FF00FFFF"
          "1000003800080000FF00FFFF"
          "1000003800090000FF00FFFF"
          "10000038000A0000FF00FFFF"
          "10000038000B0000FF00FFFF"),
  PACKET ("0E00", "E000",
          "000100010101011F010000000000FF01"
          "000101010101011F010000000000FF01"
          "000102010101011F010000000000FF01"
          "000104010101011F010000000000FF01"
          "000108010101011F010000000000FF01"
          "000110010101011F010000000000FF01"
          "000110010201011F010000000000FF01"
          "000110010401011F010000000000FF01"
          "000110010801011F010000000000FF01"
          "000110011001011F010000000000FF01"
          "000110011001021F010000000000FF01"
          "000110011001041F010000000000FF01"
          "000110011001081F010000000000FF01"
          "000110011001101F010000000000FF01"
          "0F000100021000010001110002000800" ),
  PACKET ("1200", "0100", "0E"),

  TERM (),

  NULL
};


const char *vfs301_02D0_02[] = {
  "02D0000001",

  S1 ("0420", "0430", "00000000"),
  S1 ("1820", "0430", "01806300"),
  S1 ("2020", "0430", "08008000"),
  S1 ("2420", "0430", "0000FF01"),
  S1 ("2C20", "0430", "01000000"),
  S1 ("4020", "0430", "FF030000"),
  S1 ("4420", "0430", "E6030000"),
  S1 ("4820", "0430", "E7030000"),
  S1 ("4C20", "0430", "E8030000"),
  S1 ("5020", "0430", "00025802"),
  S1 ("5420", "0430", "008E0100"),
  S1 ("0021", "0430", "00000000"),
  S1 ("0421", "0430", "00000000"),
  S1 ("0821", "0430", "00000000"),
  S1 ("0C21", "0430", "00000000"),
  S1 ("1021", "0430", "00000000"),
  S1 ("1421", "0430", "00000000"),
  S1 ("1821", "0430", "00000000"),
  S1 ("1C21", "0430", "1F000000"),
  S1 ("2021", "0430", "01000000"),
  S1 ("4021", "0430", "00000000"),
  S1 ("4421", "0430", "00000000"),
  S1 ("4821", "0430", "00000000"),
  S1 ("4C21", "0430", "00000000"),
  S1 ("5021", "0430", "00000000"),
  S1 ("5421", "0430", "00000000"),
  S1 ("5821", "0430", "00000000"),
  S1 ("5C21", "0430", "1F000000"),
  S1 ("6021", "0430", "01000000"),
  S1 ("8021", "0430", "00000000"),
  S1 ("8421", "0430", "00000000"),
  S1 ("8821", "0430", "00000000"),
  S1 ("8C21", "0430", "00000000"),
  S1 ("9021", "0430", "00000000"),
  S1 ("9421", "0430", "00000000"),
  S1 ("9821", "0430", "00000000"),
  S1 ("9C21", "0430", "1F000000"),
  S1 ("A021", "0430", "01000000"),
  S1 ("C021", "0430", "00000000"),
  S1 ("C421", "0430", "00000000"),
  S1 ("C821", "0430", "00000000"),
  S1 ("CC21", "0430", "00000000"),
  S1 ("D021", "0430", "00000000"),
  S1 ("D421", "0430", "00000000"),
  S1 ("D821", "0430", "00000000"),
  S1 ("DC21", "0430", "1F000000"),
  S1 ("E021", "0430", "01000000"),
  S1 ("A020", "0430", "EFE10000"),
  S1 ("A420", "0430", "00400000"),
  vfs301_02D0_BLOB1,
  vfs301_02D0_ALIGNED_BLOB,

  PACKET ("0C00", "0100", "03"),
  PACKET ("0D00", "2800", "C82004300000000001000000FF00000000FFFFFF01000000C8200430000000000000003001000000"),
  PACKET ("0E00", "1000", "000101010100011F0800000000000001"),
  PACKET ("0F00", "0100", "01"),
  PACKET ("1000", "0100", "01"),
  PACKET ("1100", "0200", "0001"),
  vfs301_02D0_BLOB4,

  TERM (),

  NULL
};


const char *vfs301_02D0_03[] = {
  "02D0006000",

  S1 ("0420", "0430", "00000000"),
  S1 ("1820", "0430", "01806300"),
  S1 ("2020", "0430", "08008000"),
  S1 ("2420", "0430", "0000FF01"),
  S1 ("2C20", "0430", "01000000"),
  S1 ("4020", "0430", "FF030000"),
  S1 ("4420", "0430", "E6030000"),
  S1 ("4820", "0430", "E7030000"),
  S1 ("4C20", "0430", "E8030000"),
  S1 ("5020", "0430", "00025802"),
  S1 ("5420", "0430", "008E0100"),
  S1 ("0021", "0430", "00000000"),
  S1 ("0421", "0430", "01000000"),
  S1 ("0821", "0430", "01000000"),
  S1 ("0C21", "0430", "01000000"),
  S1 ("1021", "0430", "01000000"),
  S1 ("1421", "0430", "01000000"),
  S1 ("1821", "0430", "01000000"),
  S1 ("1C21", "0430", "1F000000"),
  S1 ("2021", "0430", "05000000"),
  S1 ("4021", "0430", "00000000"),
  S1 ("4421", "0430", "01000000"),
  S1 ("4821", "0430", "01000000"),
  S1 ("4C21", "0430", "01000000"),
  S1 ("5021", "0430", "01000000"),
  S1 ("5421", "0430", "01000000"),
  S1 ("5821", "0430", "01000000"),
  S1 ("5C21", "0430", "1F000000"),
  S1 ("6021", "0430", "05000000"),
  S1 ("8021", "0430", "00000000"),
  S1 ("8421", "0430", "01000000"),
  S1 ("8821", "0430", "01000000"),
  S1 ("8C21", "0430", "01000000"),
  S1 ("9021", "0430", "01000000"),
  S1 ("9421", "0430", "01000000"),
  S1 ("9821", "0430", "01000000"),
  S1 ("9C21", "0430", "1F000000"),
  S1 ("A021", "0430", "05000000"),
  S1 ("C021", "0430", "00000000"),
  S1 ("C421", "0430", "01000000"),
  S1 ("C821", "0430", "01000000"),
  S1 ("CC21", "0430", "01000000"),
  S1 ("D021", "0430", "01000000"),
  S1 ("D421", "0430", "01000000"),
  S1 ("D821", "0430", "01000000"),
  S1 ("DC21", "0430", "1F000000"),
  S1 ("E021", "0430", "05000000"),
  S1 ("A020", "0430", "EFE10000"),
  S1 ("A420", "0430", "00000000"),
  vfs301_02D0_BLOB1,
  vfs301_02D0_ALIGNED_BLOB,

  PACKET ("0C00", "0100", "02"),
  PACKET ("0D00", "2800", "1400003800006E000000010000008F00FFFF00FF01000000000002000000010000000F0002000000"),
  PACKET ("0E00", "1000", "00000000000000000500000000000001"),
  PACKET ("0F00", "0100", "01"),
  PACKET ("1000", "0100", "02")
  PACKET ("1100", "0200", "6000"),
  vfs301_02D0_BLOB4,
  S1 ("C820", "0430", "07000000"),

  TERM (),

  NULL
};


const char *vfs301_02D0_04[] = {
  "02D0001C00",

  S1 ("0420", "0430", "00000000"),
  S1 ("1820", "0430", "01806300"),
  S1 ("2020", "0430", "08008000"),
  S1 ("2420", "0430", "0000FF01"),
  S1 ("2C20", "0430", "01000000"),
  S1 ("4020", "0430", "FF030000"),
  S1 ("4420", "0430", "E7030000"),
  S1 ("4820", "0430", "FF030000"),
  S1 ("4C20", "0430", "FF030000"),
  S1 ("5020", "0430", "00025802"),
  S1 ("5420", "0430", "008E0100"),
  S1 ("0021", "0430", "30000000"),
  S1 ("0421", "0430", "01000000"),
  S1 ("0821", "0430", "01000000"),
  S1 ("0C21", "0430", "01000000"),
  S1 ("1021", "0430", "01000000"),
  S1 ("1421", "0430", "01000000"),
  S1 ("1821", "0430", "01000000"),
  S1 ("1C21", "0430", "1F000000"),
  S1 ("2021", "0430", "00000000"),
  S1 ("4021", "0430", "30000000"),
  S1 ("4421", "0430", "01000000"),
  S1 ("4821", "0430", "01000000"),
  S1 ("4C21", "0430", "01000000"),
  S1 ("5021", "0430", "01000000"),
  S1 ("5421", "0430", "01000000"),
  S1 ("5821", "0430", "01000000"),
  S1 ("5C21", "0430", "1F000000"),
  S1 ("6021", "0430", "00000000"),
  S1 ("8021", "0430", "30000000"),
  S1 ("8421", "0430", "01000000"),
  S1 ("8821", "0430", "01000000"),
  S1 ("8C21", "0430", "01000000"),
  S1 ("9021", "0430", "01000000"),
  S1 ("9421", "0430", "01000000"),
  S1 ("9821", "0430", "01000000"),
  S1 ("9C21", "0430", "1F000000"),
  S1 ("A021", "0430", "00000000"),
  S1 ("C021", "0430", "30000000"),
  S1 ("C421", "0430", "01000000"),
  S1 ("C821", "0430", "01000000"),
  S1 ("CC21", "0430", "01000000"),
  S1 ("D021", "0430", "01000000"),
  S1 ("D421", "0430", "01000000"),
  S1 ("D821", "0430", "01000000"),
  S1 ("DC21", "0430", "1F000000"),
  S1 ("E021", "0430", "00000000"),
  S1 ("A020", "0430", "EFE10000"),
  S1 ("A420", "0430", "00000000"),
  vfs301_02D0_BLOB1,

  /* TODO: looks like that removing this whole packet doesn't cause
   * any troubles. */
  PACKET ("0200", "8005",
          "FFF30720" "80F20720" "FFF30720" "80F20720"
                                           "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                            "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                             "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                              "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                               "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                 "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                  "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                   "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                    "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                     "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                      "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                       "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFF30720" "80F20720" "FFF30720" "80F20720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           "FFF30720" "80F20720" "FFF30720" "80F20720"
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
         ),

  S3 ("1003181C"),
  S1 ("0020", "0430", "80000000"),

  PACKET ("0C00", "0100", "00"),
  PACKET ("0D00", "2800", "A02104300100000001000000010000000100000001000000A0210430000000000031003801000000"),
  PACKET ("0E00", "E000",
          "00010001000100000000000000007E00"
          "00010101000100000000000000007E00"
          "00010101010100000000000000007E00"
          "00010101010101000000000000007E00"
          "00010201010101000000000000007E00"
          "00010401010101000000000000007E00"
          "00010801010101000000000000007E00"
          "00011001010101000000000000007E00"
          "00011001020101000000000000007E00"
          "00011001040101000000000000007E00"
          "00011001080101000000000000007E00"
          "00011001100102000000000000007E00"
          "00011001100104000000000000007E00"
          "00011001100108000000000000007E00"),
  PACKET ("0F00", "0100", "01"),
  PACKET ("1000", "0100", "02"),
  PACKET ("1100", "0200", "0200"),
  PACKET ("1200", "0100", "0E"),
  S2 ("0C20FF00FFFF0000000000030000"),
  S2 ("1020FF00FFFF0000000000070000"),
  S1 ("0421", "0430", "01000000"),
  S1 ("0821", "0430", "02000000"),
  S1 ("0C21", "0430", "01000000"),
  S1 ("1021", "0430", "01000000"),
  S1 ("1421", "0430", "01000000"),
  S1 ("1821", "0430", "01000000"),
  S1 ("4421", "0430", "01000000"),
  S1 ("4821", "0430", "02000000"),
  S1 ("4C21", "0430", "01000000"),
  S1 ("5021", "0430", "01000000"),
  S1 ("5421", "0430", "01000000"),
  S1 ("5821", "0430", "01000000"),
  S1 ("C820", "0430", "07000000"),
  S2 ("1420FFFF00FF0000000000008800"),

  TERM (),

  NULL
};

/* Sorry had to replace BLOB3 (was a fragment!) */
const char *vfs301_02D0_05[] = {
  "02D0002000",

  S1 ("0420", "0430", "00000000"),
  S1 ("1820", "0430", "01806300"),
  S1 ("2020", "0430", "08008000"),
  S1 ("2420", "0430", "0000FF01"),
  S1 ("2C20", "0430", "01000000"),
  S1 ("4020", "0430", "FF030000"),
  S1 ("4420", "0430", "E7030000"),
  S1 ("4820", "0430", "FF030000"),
  S1 ("4C20", "0430", "FF030000"),
  S1 ("5020", "0430", "00025802"),
  S1 ("5420", "0430", "008E0100"),
  S1 ("0021", "0430", "30000000"),
  S1 ("0421", "0430", "01000000"),
  S1 ("0821", "0430", "01000000"),
  S1 ("0C21", "0430", "01000000"),
  S1 ("1021", "0430", "00000000"),
  S1 ("1421", "0430", "01000000"),
  S1 ("1821", "0430", "00000000"),
  S1 ("1C21", "0430", "1F000000"),
  S1 ("2021", "0430", "04000000"),
  S1 ("4021", "0430", "30000000"),
  S1 ("4421", "0430", "01000000"),
  S1 ("4821", "0430", "01000000"),
  S1 ("4C21", "0430", "01000000"),
  S1 ("5021", "0430", "00000000"),
  S1 ("5421", "0430", "01000000"),
  S1 ("5821", "0430", "00000000"),
  S1 ("5C21", "0430", "1F000000"),
  S1 ("6021", "0430", "04000000"),
  S1 ("8021", "0430", "30000000"),
  S1 ("8421", "0430", "01000000"),
  S1 ("8821", "0430", "01000000"),
  S1 ("8C21", "0430", "01000000"),
  S1 ("9021", "0430", "00000000"),
  S1 ("9421", "0430", "01000000"),
  S1 ("9821", "0430", "00000000"),
  S1 ("9C21", "0430", "1F000000"),
  S1 ("A021", "0430", "04000000"),
  S1 ("C021", "0430", "30000000"),
  S1 ("C421", "0430", "01000000"),
  S1 ("C821", "0430", "01000000"),
  S1 ("CC21", "0430", "01000000"),
  S1 ("D021", "0430", "00000000"),
  S1 ("D421", "0430", "01000000"),
  S1 ("D821", "0430", "00000000"),
  S1 ("DC21", "0430", "1F000000"),
  S1 ("E021", "0430", "04000000"),
  S1 ("A020", "0430", "EFE10000"),
  S1 ("A420", "0430", "00000000"),
  vfs301_02D0_BLOB1,

  /* TODO: looks like that removing this whole packet doesn't cause
   * any troubles. */
  PACKET ("0200", "8005",
          "FFF34720" "80F24720" "FFF34720" "80F24720"
                                           "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                            "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                             "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                              "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                               "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                 "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                  "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                   "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                    "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                     "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                      "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                       "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          "FFF34720" "80F24720" "FFF34720" "80F24720"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           "FFF34720" "80F24720" "FFF34720" "80F24720"
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()
          Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 () Z8 ()),

  S3 ("1003181C"),
  S1 ("0020", "0430", "80000000")

  PACKET ("0C00", "0100", "01"),
  PACKET ("0D00", "2800", "A021043000000000010000000F00000000FFFFFF01000000A0210430000000000000003001000000"),
  PACKET ("0E00", "1000", "00000000000000000000000000000000"),
  PACKET ("0F00", "0100", "01"),
  PACKET ("1000", "0100", "02"),
  PACKET ("1100", "0200", "2000"),
  vfs301_02D0_BLOB4,
  S1 ("C820", "0430", "07000000"),
  S2 ("1420FFFF00FF0000000000008800"),
  S1 ("8421", "0430", "01000000"),
  S1 ("8821", "0430", "01000000"),
  S1 ("8C21", "0430", "01000000"),
  S1 ("9021", "0430", "01000000"),
  S1 ("9421", "0430", "01000000"),
  S1 ("9821", "0430", "01000000"),

  TERM (),

  NULL
};


const char *vfs301_02D0_06[] = {
  "02D0002000",

  S1 ("0420", "0430", "00000000"),
  S1 ("1820", "0430", "01806300"),
  S1 ("2020", "0430", "08008000"),
  S1 ("2420", "0430", "0000FF01"),
  S1 ("2C20", "0430", "01000000"),
  S1 ("4020", "0430", "FF030000"),
  S1 ("4420", "0430", "E6030000"),
  S1 ("4820", "0430", "E7030000"),
  S1 ("4C20", "0430", "E8030000"),
  S1 ("5020", "0430", "00025802"),
  S1 ("5420", "0430", "008E0100"),
  S1 ("0021", "0430", "00000000"),
  S1 ("0421", "0430", "01000000"),
  S1 ("0821", "0430", "01000000"),
  S1 ("0C21", "0430", "01000000"),
  S1 ("1021", "0430", "01000000"),
  S1 ("1421", "0430", "01000000"),
  S1 ("1821", "0430", "01000000"),
  S1 ("1C21", "0430", "1F000000"),
  S1 ("2021", "0430", "08000000"),
  S1 ("4021", "0430", "00000000"),
  S1 ("4421", "0430", "01000000"),
  S1 ("4821", "0430", "01000000"),
  S1 ("4C21", "0430", "01000000"),
  S1 ("5021", "0430", "01000000"),
  S1 ("5421", "0430", "01000000"),
  S1 ("5821", "0430", "01000000"),
  S1 ("5C21", "0430", "1F000000"),
  S1 ("6021", "0430", "08000000"),
  S1 ("8021", "0430", "00000000"),
  S1 ("8421", "0430", "01000000"),
  S1 ("8821", "0430", "01000000"),
  S1 ("8C21", "0430", "01000000"),
  S1 ("9021", "0430", "01000000"),
  S1 ("9421", "0430", "01000000"),
  S1 ("9821", "0430", "01000000"),
  S1 ("9C21", "0430", "1F000000"),
  S1 ("A021", "0430", "08000000"),
  S1 ("C021", "0430", "00000000"),
  S1 ("C421", "0430", "01000000"),
  S1 ("C821", "0430", "01000000"),
  S1 ("CC21", "0430", "01000000"),
  S1 ("D021", "0430", "01000000"),
  S1 ("D421", "0430", "01000000"),
  S1 ("D821", "0430", "01000000"),
  S1 ("DC21", "0430", "1F000000"),
  S1 ("E021", "0430", "08000000"),
  S1 ("A020", "0430", "EFE10000"),
  S1 ("A420", "0430", "00000000"),
  vfs301_02D0_BLOB1,
  vfs301_02D0_ALIGNED_BLOB,

  PACKET ("0C00", "0100", "01"),
  PACKET ("0D00", "2800", "2021043000000000010000000F00000000FFFFFF0100000020210430000000000000003001000000"),
  PACKET ("0E00", "1000", "00000000000000000000000000000001"),
  PACKET ("0F00", "0100", "01"),
  PACKET ("1000", "0100", "02"),
  PACKET ("1100", "0200", "2000"),
  vfs301_02D0_BLOB4,
  S1 ("C820", "0430", "07000000"),
  S2 ("1420FFFF00FF0000000000008800"),
  S1 ("8421", "0430", "01000000"),
  S1 ("8821", "0430", "01000000"),
  S1 ("8C21", "0430", "01000000"),
  S1 ("9021", "0430", "01000000"),
  S1 ("9421", "0430", "01000000"),
  S1 ("9821", "0430", "01000000"),
  S1 ("A021", "0430", "00000000"),

  TERM (),

  NULL
};


const char *vfs301_02D0_07[] = {
  "02D0000400"
  S3 ("1003181C"),
  PACKET ("0C00", "0100", "04"),
  PACKET ("0D00", "2800", "28A0003803000000020000003B000000C0FFFFFF0100000028A00038000000001047004801000000"),
  PACKET ("1100", "0200", "0400"),
  PACKET ("1300", "0400", "18000000"),
  PACKET ("1400", "0400", "1E000000"),

  S1 ("A020", "0430", "EFE10000"),
  S1 ("08A0", "0038", "78000200"),
  S1 ("10A0", "0038", "E3186800"),
  S1 ("14A0", "0038", "E3186800"),
  S1 ("18A0", "0038", "E3186800"),
  S1 ("1CA0", "0038", "E3186800"),
  S1 ("20A0", "0038", "E3186800"),
  S1 ("24A0", "0038", "0CFA8000"),
  S1 ("28A0", "0038", "00000800"),
  S1 ("04A0", "0038", "FFFFFFFF"),

  vfs301_0220_BLOB2,

  TERM (),

  NULL
};

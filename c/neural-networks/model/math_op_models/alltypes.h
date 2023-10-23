// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Edoardo Manino
//
// SPDX-License-Identifier: MIT

#ifndef _ALLTYPES_H
#define _ALLTYPES_H

/*
 * Edoardo Manino: this is supposed to be a platform-dependent
 * header file in MUSL. We replace it here with a minimal file
 */

#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN 4321

/* This macro controls the endianness throughout libm */
#define __BYTE_ORDER __LITTLE_ENDIAN

#endif

// Copyright (C) 2023 Intel Corporation                                          
//                                                                               
// Permission is hereby granted, free of charge, to any person obtaining a copy  
// of this software and associated documentation files (the "Software"),         
// to deal in the Software without restriction, including without limitation     
// the rights to use, copy, modify, merge, publish, distribute, sublicense,      
// and/or sell copies of the Software, and to permit persons to whom             
// the Software is furnished to do so, subject to the following conditions:      
//                                                                               
// The above copyright notice and this permission notice shall be included       
// in all copies or substantial portions of the Software.                        
//                                                                               
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS       
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL      
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES             
// OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,      
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE            
// OR OTHER DEALINGS IN THE SOFTWARE.                                            
//                                                                               
// SPDX-License-Identifier: MIT

/**
 * @file fv_utils.h
 * @brief Utility functions and macros used in FV
 */

#ifndef FORMAL_FV_UTILS_H_
#define FORMAL_FV_UTILS_H_

#include "tdx_basic_types.h"

//
// SV-COMP and standard primitives
//

extern void abort(void);

void assume_abort_if_not(int cond) {
    if (!cond) { 
        abort(); 
    }
}

extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

void reach_error() { 
    __assert_fail("0", "even.c", 3, "reach_error"); 
}

void __VERIFIER_assert(int cond) {
    if (!(cond)) {
        ERROR: { 
            reach_error(); 
            abort(); 
        }
    }
    return;
}

extern unsigned char __VERIFIER_nondet_uchar();
extern unsigned short __VERIFIER_nondet_ushort();
extern unsigned int __VERIFIER_nondet_u32();
extern unsigned long __VERIFIER_nondet_ulong();

//
// TDX FV wrappers
//

#define TDXFV_ASSUME(expr) assume_abort_if_not(expr)
#define TDXFV_ASSERT(expr) __VERIFIER_assert(expr)

static inline uint8_t TDXFV_NONDET_uint8t() { return __VERIFIER_nondet_uchar(); }
static inline uint16_t TDXFV_NONDET_uint16t() { return __VERIFIER_nondet_ushort(); }
static inline uint32_t TDXFV_NONDET_uint32t() { return __VERIFIER_nondet_u32(); }
static inline uint64_t TDXFV_NONDET_uint64t() { return __VERIFIER_nondet_ulong(); }

static inline uint128_t TDXFV_NONDET_uint128t() {
    uint128_t tmp;
    tmp.qwords[0] = TDXFV_NONDET_uint64t();
    tmp.qwords[1] = TDXFV_NONDET_uint64t();
    return tmp;
}

static inline uint256_t TDXFV_NONDET_uint256t() {
    uint256_t tmp;
    tmp.qwords[0] = TDXFV_NONDET_uint64t();
    tmp.qwords[1] = TDXFV_NONDET_uint64t();
    tmp.qwords[2] = TDXFV_NONDET_uint64t();
    tmp.qwords[3] = TDXFV_NONDET_uint64t();
    return tmp;
}

static inline bool_t TDXFV_NONDET_bool() {
    if (TDXFV_NONDET_uint8t()) {
        return true;
    } else {
        return false;
    }
}

void TDXFV_NONDET_custom_type(void* base, unsigned int size) {
    for (int i = 0; i < size; i++) {
        *((char*)base + i) = TDXFV_NONDET_uint8t();
    }
}

// For tracking incomplete modeling
static inline void TDXFV_ABST_incomplete() {
#ifdef TDXFV_ENABLE_PARANOID_TRAP
    if (TDXFV_NONDET_bool()) {
        TDXFV_ASSERT(false);
    }
#endif
}

#endif /* FORMAL_FV_UTILS_H_ */

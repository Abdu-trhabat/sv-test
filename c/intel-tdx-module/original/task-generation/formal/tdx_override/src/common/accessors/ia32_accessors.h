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
 * @file ia32_accessors.h
 * @brief IA32 Accessors Definitions for FV
 */

#ifndef SRC_COMMON_ACCESSORS_IA32_ACCESSORS_H_
#define SRC_COMMON_ACCESSORS_IA32_ACCESSORS_H_

#include "tdx_basic_defs.h"
#include "tdx_basic_types.h"
#include "helpers/error_reporting.h"

#include "x86_defs/mktme.h"
#include "x86_defs/x86_defs.h"

#include "exception_handling/exception_handling_consts.h"

#include "fv_utils.h"

// Extract from "fv_env.h" to avoid preprocessing errors
extern bool_t fv_exception_tracker_gp;
uint64_t tdxfv_abst_msr_read(uint64_t addr);
void tdxfv_abst_msr_write(uint64_t addr, uint64_t value);
uint64_t tdxfv_abst_vcpu_read_cr2();
void tdxfv_abst_vcpu_write_cr2(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr0();
void tdxfv_abst_vcpu_write_dr0(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr1();
void tdxfv_abst_vcpu_write_dr1(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr2();
void tdxfv_abst_vcpu_write_dr2(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr3();
void tdxfv_abst_vcpu_write_dr3(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr6();
void tdxfv_abst_vcpu_write_dr6(uint64_t value);

/**
 * @brief Invalidate TLB entries by calling INVLPG instruction
 * @param addr
 */
_STATIC_INLINE_ void ia32_invalidate_tlb_entries(uint64_t addr)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
#else
	_ASM_VOLATILE_ ("invlpg (%0);"::"r"(addr):"memory");
#endif
}

/**
 * @brief Call CPUID instruction
 * @param leaf
 * @param subleaf
 * @param eax
 * @param ebx
 * @param ecx
 * @param edx
 */
_STATIC_INLINE_ void ia32_cpuid(uint32_t leaf, uint32_t subleaf, uint32_t *eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / nondet
    // TODO more detailed modeling (cpuid_virtualization.json)

    *eax = TDXFV_NONDET_uint32t();
    *ebx = TDXFV_NONDET_uint32t();
    *ecx = TDXFV_NONDET_uint32t();
    *edx = TDXFV_NONDET_uint32t();
#else
	_ASM_VOLATILE_ ("cpuid;"              // CPUID
                     : "=a" (*eax),        // Outputs: eax = %eax
                       "=b" (*ebx),        //          ebx = %ebx
                       "=c" (*ecx),        //          ecx = %ecx
                       "=d" (*edx)         //          edx = %edx
                     : "a"  (leaf),        // Inputs:  eax = leaf
                       "c"  (subleaf) );   //          ecx = subleaf
#endif
}

_STATIC_INLINE_ void ia32_clear_ac( void )
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
#else
	_ASM_VOLATILE_ ("clac;":::"cc");
#endif
}

_STATIC_INLINE_ void ia32_set_ac( void )
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
#else
	_ASM_VOLATILE_ ("stac;":::"cc");
#endif
}

/**
 * @brief issue PCONFIG command to program MKTME keys
 * @param key_program_addr
 * @return
 */
_STATIC_INLINE_ uint64_t ia32_mktme_key_program(mktme_key_program_t *key_program_addr)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
    return TDXFV_NONDET_uint64t();
#else
    ia32_rflags_t ret_flags;
    uint64_t error_code;
    _ASM_VOLATILE_ (
            ".byte 0x0F\n"
            ".byte 0x01\n"
            ".byte 0xC5\n"
            "pushfq\n"
            "popq %%rcx"
            : "=a"(error_code), "=c"(ret_flags.raw) : "a"(0), "b"(key_program_addr) : "cc");
    // On return: ZF=0 indicates success; ZF=1 indicates failure (error code in RAX).  ZF is bit 6 in EFLAGS
    return (ret_flags.zf) ? error_code : 0;
#endif
}

/**
 * @brief Call WMINVD instruction
 */
_STATIC_INLINE_ void ia32_wbinvd( void )
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
#else
	_ASM_VOLATILE_ ("wbinvd" ::: "memory" ) ;
#endif
}

/**
 * @brief call HLT instruction
 * @param leaf
 * @param id
 */
_STATIC_INLINE_ void ia32_hlt( uint64_t leaf, uint64_t id )
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    abort();
#else
	_ASM_VOLATILE_ ("hlt" :: "a"(leaf), "b"(id): "memory") ;
#endif
}

/**
 * @brief Call UD2 instruction
 */
_STATIC_INLINE_ void ia32_ud2( void )
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
    abort();
#else
    _ASM_VOLATILE_ ("ud2" ::: "memory") ;
#endif
}

_STATIC_INLINE_ uint64_t ia32_rdmsr(uint64_t addr)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / nondet
    return tdxfv_abst_msr_read(addr);
#else
    uint32_t low,high;
    _ASM_VOLATILE_ ("rdmsr" : "=a"(low), "=d"(high) : "c"(addr));
    return (uint64_t)((((uint64_t)(high)) << 32) | (uint64_t)(low));
#endif
}

_STATIC_INLINE_ void ia32_wrmsr(uint64_t addr, uint64_t value)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / nondet
    tdxfv_abst_msr_write(addr, value);
#else
    _ASM_VOLATILE_ ("wrmsr" : : "a"((uint32_t)value), "d"((uint32_t)(value >> 32)), "c"(addr));
#endif
}

// A non-zero value will return in case of success.
// In case of #GP a zero value will be returned in RSI/fault_indicator
// In case of #GP, MSR(NON_FAULTING_MSR_ADDR) (0x8B) will be written with 0 value,
// so the value of it should be preserved before calling this function, and restored after
_STATIC_INLINE_ uint64_t ia32_safe_wrmsr(uint64_t addr, uint64_t value)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / nondet
    tdxfv_abst_msr_write(addr, value);
    if (fv_exception_tracker_gp) {
        return 0;
    } else {
        uint64_t ret = TDXFV_NONDET_uint64t();
        TDXFV_ASSUME(ret != 0);
        return ret;
    }
#else
    uint64_t fault_indicator;

    _ASM_VOLATILE_ ("movq $" STR(FAULT_SAFE_MAGIC_INDICATOR) ", %%rsi \n"
                    "wrmsr \n"
                            : "=S"(fault_indicator)
                            : "a"((uint32_t)value), "d"((uint32_t)(value >> 32)),
                              "c"(addr));

    return fault_indicator;
#endif
}

_STATIC_INLINE_ void ia32_out16(uint16_t port, uint16_t val)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ ("outw %0,%w1" : : "a" (val), "dN" (port));
#endif
}

_STATIC_INLINE_ void ia32_pause( void )
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ ("pause" ) ;
#endif
}

_STATIC_INLINE_ void ia32_out8(uint16_t port, uint8_t val)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ ("outb %0,%w1" : : "a" (val), "dN" (port));
#endif
}

_STATIC_INLINE_ uint8_t ia32_in8(uint16_t port)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
    return TDXFV_NONDET_uint8t();
#else
    uint8_t v;

    _ASM_VOLATILE_ ("inb %w1,%0" : "=a" (v) : "Nd" (port));

    return v;
#endif
}

_STATIC_INLINE_ bool_t ia32_rdrand(uint64_t* rand)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *rand = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_bool();
#else
    ia32_rflags_t rflags = { .raw = 0 };

    _ASM_VOLATILE_ ("rdrand %0 \n"
                    "pushfq; popq %1\n"
                    : "=r"(*rand) , "=r"(rflags.raw));

    if (!rflags.cf)
    {
        return false;
    }
    return true;
#endif
}

_STATIC_INLINE_ bool_t ia32_rdseed(uint64_t* rand)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *rand = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_bool();
#else
    ia32_rflags_t rflags = { .raw = 0 };

    _ASM_VOLATILE_ ("rdseed %0 \n"
                    "pushfq; popq %1\n"
                    : "=r"(*rand) , "=r"(rflags.raw));

    if (!rflags.cf)
    {
        return false;
    }
    return true;
#endif
}

_STATIC_INLINE_ uint64_t ia32_rdtsc( void )
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    return TDXFV_NONDET_uint64t();
#else
    uint32_t a, d;

    _ASM_VOLATILE_ ("rdtsc"
                   : "=a"(a), "=d"(d));
    return ( ((uint64_t) d << 32) | (uint64_t) a );
#endif
}

_STATIC_INLINE_ uint64_t ia32_set_timeout(uint64_t period)
{
    return ia32_rdtsc() + period;
}

_STATIC_INLINE_ bool_t ia32_is_timeout_expired(uint64_t endtime)
{
    return (int64_t)(endtime - ia32_rdtsc()) < 0;
}
/**
 * Extended State operations
 */
_STATIC_INLINE_ uint64_t ia32_xgetbv(uint64_t xcr)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / nondet
    TDXFV_ABST_incomplete(); // potential gp exception
    return TDXFV_NONDET_uint64t();
#else
    uint32_t low,high;
    _ASM_VOLATILE_ ("xgetbv" : "=a"(low), "=d"(high) : "c"(xcr));
    return (uint64_t)(((uint64_t)(high) << 32) | (uint64_t)(low));
#endif
}

_STATIC_INLINE_ void ia32_xsetbv(uint64_t xcr, uint64_t value)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ ("xsetbv" : : "a"((uint32_t)value), "d"((uint32_t)(value >> 32)), "c"(xcr));
#endif
}

_STATIC_INLINE_ ia32_rflags_t ia32_loadiwk(const uint8_t* intkey, const uint8_t* enckey, uint32_t flags)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    TDXFV_ABST_incomplete();
    ia32_rflags_t tmp = { .raw = TDXFV_NONDET_uint64t() };
    return tmp;
#else
    uint128_t tmp_xmm_buf[3];
    ia32_rflags_t rflags;

    _ASM_VOLATILE_ (
        // Storing the existing XMM's
        "movdqa %%xmm0, (%5)\n"
        "movdqa %%xmm1, (%6)\n"
        "movdqa %%xmm2, (%7)\n"
        // Moving the input parameters of LOADIWK
        "movdqa (%2), %%xmm0\n"
        "movdqa (%3), %%xmm1\n"
        "movdqa (%4), %%xmm2\n"

        "nop\n"
        // Restoring the existing XMM's
        "movdqa (%5), %%xmm0\n"
        "movdqa (%6), %%xmm1\n"
        "movdqa (%7), %%xmm2\n"

        "pushfq \n"
        "pop %0\n"

        : "=r"(rflags.raw) : "a"(flags), "r"(intkey), "r"(enckey), "r"(enckey + 16),
                        "r"(tmp_xmm_buf), "r"(&tmp_xmm_buf[1]), "r"(&tmp_xmm_buf[2]));

    return rflags;
#endif
}

_STATIC_INLINE_ void ia32_xsaves(void* xsave_area, uint64_t xfam)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ ( "xsaves %0 \n" : "=m"(*((uint64_t *)xsave_area)) : "d"((uint32_t)(xfam >> 32)),
            "a"((uint32_t)xfam) : "memory");
#endif
}


_STATIC_INLINE_ void ia32_xrstors(const void* xsave_area, uint64_t xfam)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ (
        "xrstors %0 \n"
        :
        : "m"(*(uint64_t*)xsave_area), "a"((uint32_t)xfam), "d"((uint32_t)(xfam >> 32))
        : "memory");
#endif
}

// A non-zero value will return in case of success.
// In case of #GP a zero value will be returned in RSI/fault_indicator
_STATIC_INLINE_ uint64_t ia32_safe_xrstors(const void* xsave_area, uint64_t xfam)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    TDXFV_ABST_incomplete();
    return TDXFV_NONDET_uint64t();
#else
    uint64_t fault_indicator;

    _ASM_VOLATILE_ ("movq $" STR(FAULT_SAFE_MAGIC_INDICATOR) ", %%rsi \n"
                    "xrstors %1 \n"
                            : "=S"(fault_indicator)
                            : "m"(*(uint64_t*)xsave_area), "a"((uint32_t)xfam), "d"((uint32_t)(xfam >> 32)),
                              "c"(0) // indicate the compiler not to use RCX, because in case of #GP
                                     // XRSTORS will be retried with modified RCX (value 0x8b)
                                     // - same #GP flow is used for WRMSR handling/retrying
                            : "memory");

    return fault_indicator;
#endif
}

_STATIC_INLINE_ void ia32_load_cr2(uint64_t cr2)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    tdxfv_abst_vcpu_write_cr2(cr2);
#else
    _ASM_VOLATILE_ ("mov %0, %%cr2" : : "r" (cr2));
#endif
}

_STATIC_INLINE_ void ia32_load_cr8(uint64_t cr8)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ ("mov %0, %%cr8" : : "r" (cr8));
#endif
}

_STATIC_INLINE_ void ia32_load_dr0(uint64_t dr0)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    tdxfv_abst_vcpu_write_dr0(dr0);
#else
    _ASM_VOLATILE_ ("mov %0, %%dr0" : : "r" (dr0));
#endif
}

_STATIC_INLINE_ void ia32_load_dr1(uint64_t dr1)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    tdxfv_abst_vcpu_write_dr1(dr1);
#else
    _ASM_VOLATILE_ ("mov %0, %%dr1" : : "r" (dr1));
#endif
}

_STATIC_INLINE_ void ia32_load_dr2(uint64_t dr2)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    tdxfv_abst_vcpu_write_dr2(dr2);
#else
    _ASM_VOLATILE_ ("mov %0, %%dr2" : : "r" (dr2));
#endif
}

_STATIC_INLINE_ void ia32_load_dr3(uint64_t dr3)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    tdxfv_abst_vcpu_write_dr3(dr3);
#else
    _ASM_VOLATILE_ ("mov %0, %%dr3" : : "r" (dr3));
#endif
}

_STATIC_INLINE_ void ia32_load_dr6(uint64_t dr6)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    tdxfv_abst_vcpu_write_dr6(dr6);
#else
    _ASM_VOLATILE_ ("mov %0, %%dr6" : : "r" (dr6));
#endif
}

_STATIC_INLINE_ uint64_t ia32_store_cr2(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    return tdxfv_abst_vcpu_read_cr2();
#else
    uint64_t cr2;
    _ASM_VOLATILE_ ("mov %%cr2, %0" :  "=r" (cr2));
    return cr2;
#endif
}

_STATIC_INLINE_ uint64_t ia32_store_cr8(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    TDXFV_ABST_incomplete();
    return TDXFV_NONDET_uint64t();
#else
    uint64_t cr8;
    _ASM_VOLATILE_ ("mov %%cr8, %0" : "=r" (cr8));
    return cr8;
#endif
}

_STATIC_INLINE_ uint64_t ia32_store_dr0(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    return tdxfv_abst_vcpu_read_dr0();
#else
    uint64_t dr0;
    _ASM_VOLATILE_ ("mov %%dr0, %0" : "=r" (dr0));
    return dr0;
#endif
}

_STATIC_INLINE_ uint64_t ia32_store_dr1(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    return tdxfv_abst_vcpu_read_dr1();
#else
    uint64_t dr1;
    _ASM_VOLATILE_ ("mov %%dr1, %0" : "=r" (dr1));
    return dr1;
#endif
}

_STATIC_INLINE_ uint64_t ia32_store_dr2(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    return tdxfv_abst_vcpu_read_dr2();
#else
    uint64_t dr2;
    _ASM_VOLATILE_ ("mov %%dr2, %0" : "=r" (dr2));
    return dr2;
#endif
}

_STATIC_INLINE_ uint64_t ia32_store_dr3(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    return tdxfv_abst_vcpu_read_dr3();
#else
    uint64_t dr3;
    _ASM_VOLATILE_ ("mov %%dr3, %0" : "=r" (dr3));
    return dr3;
#endif
}

_STATIC_INLINE_ uint64_t ia32_store_dr6(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / tdx
    return tdxfv_abst_vcpu_read_dr6();
#else
    uint64_t dr6;
    _ASM_VOLATILE_ ("mov %%dr6, %0" : "=r" (dr6));
    return dr6;
#endif
}

/**
 * Atomic operations
 */
_STATIC_INLINE_ uint8_t _lock_cmpxchg_8bit(uint8_t cmp_val, uint8_t set_val, uint8_t *sem)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    if (cmp_val == *sem) {
        *sem = set_val;
        return cmp_val;
    } else {
        return *sem;
    }
#else
    _ASM_VOLATILE_ ("lock\n"
            "cmpxchgb %3,%0"
            : "=m"(*sem), "=a"(set_val)
            : "a"(cmp_val), "r" (set_val)
            : "memory" , "cc");
    return set_val;
#endif
}

_STATIC_INLINE_ uint16_t _lock_cmpxchg_16b(uint16_t cmp_val, uint16_t set_val, uint16_t *sem)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    if (cmp_val == *sem) {
        *sem = set_val;
        return cmp_val;
    } else {
        return *sem;
    }
#else
    _ASM_VOLATILE_ ("lock\n"
            "cmpxchgw %3,%0"
            : "=m"(*sem), "=a"(set_val)
            : "a"(cmp_val), "r" (set_val)
            : "memory" , "cc");
    return set_val;
#endif
}

_STATIC_INLINE_ uint32_t _lock_cmpxchg_32b(uint32_t cmp_val, uint32_t set_val, uint32_t *sem)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    if (cmp_val == *sem) {
        *sem = set_val;
        return cmp_val;
    } else {
        return *sem;
    }
#else
    _ASM_VOLATILE_ ("lock\n"
            "cmpxchgl %3,%0"
            : "=m"(*sem), "=a"(set_val)
            : "a"(cmp_val), "r" (set_val)
            : "memory" , "cc");
    return set_val;
#endif
}

_STATIC_INLINE_ uint64_t _lock_cmpxchg_64b(uint64_t cmp_val, uint64_t set_val, uint64_t *sem)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    if (cmp_val == *sem) {
        *sem = set_val;
        return cmp_val;
    } else {
        return *sem;
    }
#else
    _ASM_VOLATILE_ ("lock\n"
            "cmpxchgq %3,%0"
            : "=m"(*sem), "=a"(set_val)
            : "a"(cmp_val), "r" (set_val)
            : "memory" , "cc");
    return set_val;
#endif
}

/**
 * @brief Atomically reads 128 bits using cmpxchg
 * @param src Source to read from
 * @note Uses cmpxchg so requires source to have write access
 * @return
 */
_STATIC_INLINE_ uint128_t _lock_read_128b(uint128_t * src)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    return *src;
#else
    // Using cmpxchg to atomically read 128 bits
    uint128_t result;
    _ASM_VOLATILE_ ("lock\n"
            "cmpxchg16b %2"
            : "=a"(result.qwords[0]), "=d"(result.qwords[1])
            : "m"(*src) , "a"(0),"b"(0),"c"(0),"d"(0)
            : "memory" );
    return result;
#endif
}

_STATIC_INLINE_ uint16_t _xchg_16b(uint16_t *mem, uint16_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    uint16_t temp = *mem;
    *mem = quantum;
    return temp;
#else
    //according to SDM, XCHG on memory operand is automatically uses the processor's locking protocol
    //regardless of LOCK prefix
    _ASM_VOLATILE_ ("xchgw %2, %0" : "=m" ( *mem ), "=a"(quantum) : "a"(quantum) : "memory");
    return quantum;
#endif
}

_STATIC_INLINE_ uint32_t _xchg_32b(uint32_t *mem, uint32_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    uint32_t temp = *mem;
    *mem = quantum;
    return temp;
#else
    //according to SDM, XCHG on memory operand is automatically uses the processor's locking protocol
    //regardless of LOCK prefix
    _ASM_VOLATILE_ ("xchgl %2, %0" : "=m" ( *mem ), "=a"(quantum) : "a"(quantum) : "memory");
    return quantum;
#endif
}

_STATIC_INLINE_ uint16_t _lock_xadd_16b(uint16_t *mem, uint16_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint16t();
    return TDXFV_NONDET_uint16t();
#else
    _ASM_VOLATILE_ ("lock; xaddw %2, %0" : "=m" ( *mem ), "=a"(quantum) : "a"(quantum) : "memory", "cc");
    return quantum;
#endif
}

_STATIC_INLINE_ uint32_t _lock_xadd_32b(uint32_t *mem, uint32_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint32t();
    return TDXFV_NONDET_uint32t();
#else
    _ASM_VOLATILE_ ("lock; xaddl %2, %0" : "=m" ( *mem ), "=a"(quantum) : "a"(quantum) : "memory", "cc");
    return quantum;
#endif
}

_STATIC_INLINE_ uint64_t _lock_xadd_64b(uint64_t *mem, uint64_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_uint64t();
#else
    _ASM_VOLATILE_ ("lock; xaddq %2, %0" : "=m" ( *mem ), "=a"(quantum) : "a"(quantum) : "memory", "cc");
    return quantum;
#endif
}

_STATIC_INLINE_ void _lock_or_16b(uint16_t *mem, uint16_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint16t();
#else
    _ASM_VOLATILE_ ("lock; orw %1, %0" : "=m" ( *mem ) : "a"(quantum) : "memory");
#endif
}

_STATIC_INLINE_ void _lock_and_8b(uint8_t *mem, uint8_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint8t();
#else
    _ASM_VOLATILE_ ("lock; andb %1, %0" : "=m" ( *mem ) : "a"(quantum) : "memory");
#endif
}

_STATIC_INLINE_ void _lock_and_16b(uint16_t *mem, uint16_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint16t();
#else
    _ASM_VOLATILE_ ("lock; andw %1, %0" : "=m" ( *mem ) : "a"(quantum) : "memory");
#endif
}

_STATIC_INLINE_ void _lock_xor_16b(uint16_t *mem, uint16_t quantum)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint16t();
#else
    _ASM_VOLATILE_ ("lock; xorw %1, %0" : "=m" ( *mem ) : "a"(quantum) : "memory");
#endif
}

_STATIC_INLINE_ bool_t _lock_bts_32b(volatile uint32_t* mem, uint32_t bit)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint32t();
    return TDXFV_NONDET_bool();
#else
    bool_t result;

    _ASM_VOLATILE_ ("lock; bts %2, %0; adc %1,%1" : "=m" ( *mem ) , "=b"(result) : "a"(bit) , "b"(0) : "cc" , "memory");
    return result;
#endif
}

_STATIC_INLINE_ bool_t _lock_btr_32b(volatile uint32_t* mem, uint32_t bit)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint32t();
    return TDXFV_NONDET_bool();
#else
    bool_t result;

    _ASM_VOLATILE_ ("lock; btr %2, %0; adc %1,%1" : "=m" ( *mem ) , "=b"(result) : "a"(bit) , "b"(0) : "cc" , "memory");
    return result;
#endif
}

_STATIC_INLINE_ bool_t _lock_bts_64b(volatile uint64_t* mem, uint64_t bit)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_bool();
#else
    bool_t result;

    _ASM_VOLATILE_ ("lock; bts %2, %0; adc %1,%1" : "=m" ( *mem ) , "=b"(result) : "a"(bit) , "b"(0) : "cc" , "memory");
    return result;
#endif
}

_STATIC_INLINE_ bool_t _lock_btr_64b(volatile uint64_t* mem, uint64_t bit)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_bool();
#else
    bool_t result;

    _ASM_VOLATILE_ ("lock; btr %2, %0; adc %1,%1" : "=m" ( *mem ) , "=b"(result) : "a"(bit) , "b"(0) : "cc" , "memory");
    return result;
#endif
}

_STATIC_INLINE_ bool_t bit_scan_forward64(uint64_t mask, uint64_t* lsb_position)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *lsb_position = TDXFV_NONDET_uint64t();
    return (mask != 0);
#else
    _ASM_VOLATILE_ ("bsfq %1, %0 \n"
                        :"=r"(*lsb_position)
                        :"r"(mask)
                        :"cc");

    return (mask != 0);
#endif
}

_STATIC_INLINE_ bool_t bit_scan_reverse32(uint32_t value, uint32_t* msb_position)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *msb_position = TDXFV_NONDET_uint32t();
    return (value != 0);
#else
    _ASM_VOLATILE_ ("bsrl %1, %0 \n"
                            :"=r"(*msb_position)
                            :"r"(value)
                            :"cc");
    return (value != 0);
#endif
}

_STATIC_INLINE_ bool_t bit_scan_reverse64(uint64_t value, uint64_t* msb_position)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *msb_position = TDXFV_NONDET_uint64t();
    return (value != 0);
#else
    _ASM_VOLATILE_ ("bsrq %1, %0 \n"
                            :"=r"(*msb_position)
                            :"r"(value)
                            :"cc");
    return (value != 0);
#endif
}

_STATIC_INLINE_ void bts_32b(volatile uint32_t* mem, uint32_t bit)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint32t();
#else
    _ASM_VOLATILE_ ("bts %1, %0;" : "=m" ( *mem ) : "a"(bit) : "cc" , "memory");
#endif
}

_STATIC_INLINE_ void btr_32b(volatile uint32_t* mem, uint32_t bit)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / nondet
    *mem = TDXFV_NONDET_uint32t();
#else
    _ASM_VOLATILE_ ("btr %1, %0;" : "=m" ( *mem ) : "a"(bit) : "cc" , "memory");
#endif
}

_STATIC_INLINE_ void movdir64b(const void *src, uint64_t dst)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    for (int i = 0; i < 8; i++) {
        *((uint64_t*)src + i) = *((uint64_t*)dst + i);
    }
#else
    _ASM_VOLATILE_ (".byte  0x66, 0x0F, 0x38, 0xF8," /*movdir64b op*/ "0x37;" /*ModRM = RDI->RSI*/
                    : : "D"(src), "S"(dst) : "memory" );
#endif
}

_STATIC_INLINE_ void lfence(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
#else
    _ASM_VOLATILE_ ("lfence" : : : "memory");
#endif
}

_STATIC_INLINE_ void mfence(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
#else
    _ASM_VOLATILE_ ("mfence" : : : "memory");
#endif
}

_STATIC_INLINE_ void sfence(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
#else
    _ASM_VOLATILE_ ("sfence" : : : "memory");
#endif
}

_STATIC_INLINE_ void ia32_clflushopt(volatile void *p)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / none
    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ ("clflushopt (%0)" :: "r"(p));
#endif
}

_STATIC_INLINE_ void clear_xmms(void)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    // TODO xmm modeling

    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ (
         // XOR the existing XMM's
            "pxor %%xmm0, %%xmm0\n"
            "pxor %%xmm1, %%xmm1\n"
            "pxor %%xmm2, %%xmm2\n"
            "pxor %%xmm3, %%xmm3\n"
            "pxor %%xmm4, %%xmm4\n"
            "pxor %%xmm5, %%xmm5\n"
            "pxor %%xmm6, %%xmm6\n"
            "pxor %%xmm7, %%xmm7\n"
            "pxor %%xmm8, %%xmm8\n"
            "pxor %%xmm9, %%xmm9\n"
            "pxor %%xmm10, %%xmm10\n"
            "pxor %%xmm11, %%xmm11\n"
            "pxor %%xmm12, %%xmm12\n"
            "pxor %%xmm13, %%xmm13\n"
            "pxor %%xmm14, %%xmm14\n"
            "pxor %%xmm15, %%xmm15\n"
        :::);
#endif
}

_STATIC_INLINE_ void store_xmms_in_buffer(uint128_t xmms[16])
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / nondet
    // TODO xmm modeling

    xmms[0] = TDXFV_NONDET_uint128t();
    xmms[1] = TDXFV_NONDET_uint128t();
    xmms[2] = TDXFV_NONDET_uint128t();
    xmms[3] = TDXFV_NONDET_uint128t();
    xmms[4] = TDXFV_NONDET_uint128t();
    xmms[5] = TDXFV_NONDET_uint128t();
    xmms[6] = TDXFV_NONDET_uint128t();
    xmms[7] = TDXFV_NONDET_uint128t();
    xmms[8] = TDXFV_NONDET_uint128t();
    xmms[9] = TDXFV_NONDET_uint128t();
    xmms[10] = TDXFV_NONDET_uint128t();
    xmms[11] = TDXFV_NONDET_uint128t();
    xmms[12] = TDXFV_NONDET_uint128t();
    xmms[13] = TDXFV_NONDET_uint128t();
    xmms[14] = TDXFV_NONDET_uint128t();
    xmms[15] = TDXFV_NONDET_uint128t();
#else
    _ASM_VOLATILE_ (
         // Storing the existing XMM's
            "movdqa %%xmm0, (%0)\n"
            "movdqa %%xmm1, 0x10(%0)\n"
            "movdqa %%xmm2, 0x20(%0)\n"
            "movdqa %%xmm3, 0x30(%0)\n"
            "movdqa %%xmm4, 0x40(%0)\n"
            "movdqa %%xmm5, 0x50(%0)\n"
            "movdqa %%xmm6, 0x60(%0)\n"
            "movdqa %%xmm7, 0x70(%0)\n"
            "movdqa %%xmm8, 0x80(%0)\n"
            "movdqa %%xmm9, 0x90(%0)\n"
            "movdqa %%xmm10, 0xA0(%0)\n"
            "movdqa %%xmm11, 0xB0(%0)\n"
            "movdqa %%xmm12, 0xC0(%0)\n"
            "movdqa %%xmm13, 0xD0(%0)\n"
            "movdqa %%xmm14, 0xE0(%0)\n"
            "movdqa %%xmm15, 0xF0(%0)\n"

        : : "r"(xmms));
#endif
}

_STATIC_INLINE_ void load_xmms_from_buffer(const uint128_t xmms[16])
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: tdx / none
    // TODO xmm modeling

    TDXFV_ABST_incomplete();
#else
    _ASM_VOLATILE_ (
            "movdqa (%0), %%xmm0\n"
            "movdqa 0x10(%0), %%xmm1\n"
            "movdqa 0x20(%0), %%xmm2\n"
            "movdqa 0x30(%0), %%xmm3\n"
            "movdqa 0x40(%0), %%xmm4\n"
            "movdqa 0x50(%0), %%xmm5\n"
            "movdqa 0x60(%0), %%xmm6\n"
            "movdqa 0x70(%0), %%xmm7\n"
            "movdqa 0x80(%0), %%xmm8\n"
            "movdqa 0x90(%0), %%xmm9\n"
            "movdqa 0xA0(%0), %%xmm10\n"
            "movdqa 0xB0(%0), %%xmm11\n"
            "movdqa 0xC0(%0), %%xmm12\n"
            "movdqa 0xD0(%0), %%xmm13\n"
            "movdqa 0xE0(%0), %%xmm14\n"
            "movdqa 0xF0(%0), %%xmm15\n"

        : : "r"(xmms));
#endif
}

_STATIC_INLINE_ void atomic_mem_write_64b(uint64_t* mem, uint64_t val)
{
#ifdef TDXFV_NO_ASM
    // TDXFV_ABST_LBL: x86 / x86
    *mem = val;
#else
    _ASM_VOLATILE_ ("movq %0, (%1)" : : "r" (val), "r" (mem) : "memory");
#endif
}

#endif /* SRC_COMMON_ACCESSORS_IA32_ACCESSORS_H_ */

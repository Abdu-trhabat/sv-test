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
 * @file abst_msr.c
 * @brief Auto-gen modeling for MSRs from msr_virtualization.json 
 */

#include "fv_utils.h"
#include "fv_env.h"

uint64_t fv_msr_IA32_SPEC_CTRL;
uint64_t fv_msr_IA32_PRED_CMD;
uint64_t fv_msr_IA32_FLUSH_CMD;
uint64_t fv_msr_IA32_SYSENTER_CS;
uint64_t fv_msr_IA32_SYSENTER_ESP;
uint64_t fv_msr_IA32_SYSENTER_EIP;
uint64_t fv_msr_IA32_PAT;
uint64_t fv_msr_IA32_DS_AREA;
uint64_t fv_msr_IA32_X2APIC_TPR;
uint64_t fv_msr_0x0809;
uint64_t fv_msr_IA32_X2APIC_PPR;
uint64_t fv_msr_IA32_X2APIC_EOI;
uint64_t fv_msr_0x080C;
uint64_t fv_msr_0x080E;
uint64_t fv_msr_IA32_X2APIC_ISRx[8];
uint64_t fv_msr_IA32_X2APIC_TMRx[8];
uint64_t fv_msr_IA32_X2APIC_IRRx[8];
uint64_t fv_msr_IA32_X2APIC_SELF_IPI;
uint64_t fv_msr_IA32_UARCH_MISC_CTL;
uint64_t fv_msr_IA32_STAR;
uint64_t fv_msr_IA32_LSTAR;
uint64_t fv_msr_IA32_FMASK;
uint64_t fv_msr_IA32_FSBASE;
uint64_t fv_msr_IA32_GSBASE;
uint64_t fv_msr_IA32_KERNEL_GS_BASE;
uint64_t fv_msr_IA32_TSC_AUX;

void tdxfv_abst_msr_init() {
    fv_msr_IA32_SPEC_CTRL = TDXFV_NONDET_uint64t();
    fv_msr_IA32_PRED_CMD = TDXFV_NONDET_uint64t();
    fv_msr_IA32_FLUSH_CMD = TDXFV_NONDET_uint64t();
    fv_msr_IA32_SYSENTER_CS = TDXFV_NONDET_uint64t();
    fv_msr_IA32_SYSENTER_ESP = TDXFV_NONDET_uint64t();
    fv_msr_IA32_SYSENTER_EIP = TDXFV_NONDET_uint64t();
    fv_msr_IA32_PAT = TDXFV_NONDET_uint64t();
    fv_msr_IA32_DS_AREA = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TPR = TDXFV_NONDET_uint64t();
    fv_msr_0x0809 = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_PPR = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_EOI = TDXFV_NONDET_uint64t();
    fv_msr_0x080C = TDXFV_NONDET_uint64t();
    fv_msr_0x080E = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[0] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[1] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[2] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[3] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[4] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[5] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[6] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[7] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[0] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[1] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[2] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[3] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[4] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[5] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[6] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[7] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[0] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[1] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[2] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[3] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[4] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[5] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[6] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[7] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_SELF_IPI = TDXFV_NONDET_uint64t();
    fv_msr_IA32_UARCH_MISC_CTL = TDXFV_NONDET_uint64t();
    fv_msr_IA32_STAR = TDXFV_NONDET_uint64t();
    fv_msr_IA32_LSTAR = TDXFV_NONDET_uint64t();
    fv_msr_IA32_FMASK = TDXFV_NONDET_uint64t();
    fv_msr_IA32_FSBASE = TDXFV_NONDET_uint64t();
    fv_msr_IA32_GSBASE = TDXFV_NONDET_uint64t();
    fv_msr_IA32_KERNEL_GS_BASE = TDXFV_NONDET_uint64t();
    fv_msr_IA32_TSC_AUX = TDXFV_NONDET_uint64t();
}

uint64_t tdxfv_abst_msr_read(uint64_t addr) {
    if (addr == 0x0010) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0048) {
        return fv_msr_IA32_SPEC_CTRL;
    }
    if (addr == 0x0049) {
        return fv_msr_IA32_PRED_CMD;
    }
    if (addr == 0x0087) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x008C && addr < 0x008C + 4) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0098) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0099) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x009A) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x009B) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x009E) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x00BC) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x00BD) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x00C1 && addr < 0x00C1 + 8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x00E1) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x010A) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x010B) {
        return fv_msr_IA32_FLUSH_CMD;
    }
    if (addr == 0x0122) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0174) {
        return fv_msr_IA32_SYSENTER_CS;
    }
    if (addr == 0x0175) {
        return fv_msr_IA32_SYSENTER_ESP;
    }
    if (addr == 0x0176) {
        return fv_msr_IA32_SYSENTER_EIP;
    }
    if (addr >= 0x0186 && addr < 0x0186 + 8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0195) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01A0) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x01A6 && addr < 0x01A6 + 2) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01C4) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01C5) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01D9) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01F8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01F9) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01FA) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0276) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0277) {
        return fv_msr_IA32_PAT;
    }
    if (addr >= 0x0309 && addr < 0x0309 + 8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0329) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0345) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x038D) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x038E) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x038F) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0390) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0391) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0392) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x03F1) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x03F2) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x03F6) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x03F7) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0480) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0481) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0482) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0483) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0484) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0485) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0486) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0487) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0488) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0489) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048A) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048B) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048C) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048D) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048E) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048F) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0490) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0491) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0492) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x04C1 && addr < 0x04C1 + 8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0500) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0560) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0561) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0570) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0571) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0572) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0580) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0581) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0582) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0583) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0584) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0585) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0586) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0587) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0600) {
        return fv_msr_IA32_DS_AREA;
    }
    if (addr == 0x06A0) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A2) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A4) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A5) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A6) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A7) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06E0) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06E1) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x0800 && addr < 0x0800 + 2) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0802) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x0804 && addr < 0x0804 + 4) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0808) {
        return fv_msr_IA32_X2APIC_TPR;
    }
    if (addr == 0x0809) {
        return fv_msr_0x0809;
    }
    if (addr == 0x080A) {
        return fv_msr_IA32_X2APIC_PPR;
    }
    if (addr == 0x080B) {
        return fv_msr_IA32_X2APIC_EOI;
    }
    if (addr == 0x080C) {
        return fv_msr_0x080C;
    }
    if (addr == 0x080E) {
        return fv_msr_0x080E;
    }
    if (addr >= 0x0810 && addr < 0x0810 + 8) {
        return fv_msr_IA32_X2APIC_ISRx[addr - 0x0810];
    }
    if (addr >= 0x0818 && addr < 0x0818 + 8) {
        return fv_msr_IA32_X2APIC_TMRx[addr - 0x0818];
    }
    if (addr >= 0x0820 && addr < 0x0820 + 8) {
        return fv_msr_IA32_X2APIC_IRRx[addr - 0x0820];
    }
    if (addr >= 0x0829 && addr < 0x0829 + 6) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0831) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x083F) {
        return fv_msr_IA32_X2APIC_SELF_IPI;
    }
    if (addr >= 0x0840 && addr < 0x0840 + 64) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x0880 && addr < 0x0880 + 64) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x08C0 && addr < 0x08C0 + 64) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0981) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0982) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0983) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0984) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0985) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0986) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0987) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0988) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0989) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x098A) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0C80) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0D90) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0D93) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0DA0) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x1200 && addr < 0x1200 + 256) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x14CE) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x14CF) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x1500 && addr < 0x1500 + 256) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x1600 && addr < 0x1600 + 256) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x1B01) {
        return fv_msr_IA32_UARCH_MISC_CTL;
    }
    if (addr == 0xC0000080) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0xC0000081) {
        return fv_msr_IA32_STAR;
    }
    if (addr == 0xC0000082) {
        return fv_msr_IA32_LSTAR;
    }
    if (addr == 0xC0000084) {
        return fv_msr_IA32_FMASK;
    }
    if (addr == 0xC0000100) {
        return fv_msr_IA32_FSBASE;
    }
    if (addr == 0xC0000101) {
        return fv_msr_IA32_GSBASE;
    }
    if (addr == 0xC0000102) {
        return fv_msr_IA32_KERNEL_GS_BASE;
    }
    if (addr == 0xC0000103) {
        return fv_msr_IA32_TSC_AUX;
    }
    // invalid MSR address
    TDXFV_ASSERT(false);
    return TDXFV_NONDET_uint64t();
}

void tdxfv_abst_msr_write(uint64_t addr, uint64_t value) {
    if (addr == 0x0010) {
        return;
    }
    if (addr == 0x0048) {
        fv_msr_IA32_SPEC_CTRL = value;
        return;
    }
    if (addr == 0x0049) {
        fv_msr_IA32_PRED_CMD = value;
        return;
    }
    if (addr == 0x0087) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x008C && addr < 0x008C + 4) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0098) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0099) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x009A) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x009B) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x009E) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x00BC) {
        return;
    }
    if (addr == 0x00BD) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x00C1 && addr < 0x00C1 + 8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x00E1) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x010A) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x010B) {
        fv_msr_IA32_FLUSH_CMD = value;
        return;
    }
    if (addr == 0x0122) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0174) {
        fv_msr_IA32_SYSENTER_CS = value;
        return;
    }
    if (addr == 0x0175) {
        fv_msr_IA32_SYSENTER_ESP = value;
        return;
    }
    if (addr == 0x0176) {
        fv_msr_IA32_SYSENTER_EIP = value;
        return;
    }
    if (addr >= 0x0186 && addr < 0x0186 + 8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0195) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x01A0) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x01A6 && addr < 0x01A6 + 2) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01C4) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01C5) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01D9) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01F8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01F9) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01FA) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0276) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0277) {
        fv_msr_IA32_PAT = value;
        return;
    }
    if (addr >= 0x0309 && addr < 0x0309 + 8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0329) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0345) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x038D) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x038E) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x038F) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0390) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0391) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0392) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x03F1) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x03F2) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x03F6) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x03F7) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0480) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0481) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x0482) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x0483) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x0484) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x0485) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0486) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0487) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0488) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0489) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048A) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x048B) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048C) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048D) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048E) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048F) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0490) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0491) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0492) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x04C1 && addr < 0x04C1 + 8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0500) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0560) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0561) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0570) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0571) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0572) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0580) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0581) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0582) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0583) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0584) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0585) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0586) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0587) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0600) {
        fv_msr_IA32_DS_AREA = value;
        return;
    }
    if (addr == 0x06A0) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A2) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A4) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A5) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A6) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A7) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06E0) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06E1) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x0800 && addr < 0x0800 + 2) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0802) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x0804 && addr < 0x0804 + 4) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0808) {
        fv_msr_IA32_X2APIC_TPR = value;
        return;
    }
    if (addr == 0x0809) {
        fv_msr_0x0809 = value;
        return;
    }
    if (addr == 0x080A) {
        fv_msr_IA32_X2APIC_PPR = value;
        return;
    }
    if (addr == 0x080B) {
        fv_msr_IA32_X2APIC_EOI = value;
        return;
    }
    if (addr == 0x080C) {
        fv_msr_0x080C = value;
        return;
    }
    if (addr == 0x080E) {
        fv_msr_0x080E = value;
        return;
    }
    if (addr >= 0x0810 && addr < 0x0810 + 8) {
        fv_msr_IA32_X2APIC_ISRx[addr - 0x0810] = value;
        return;
    }
    if (addr >= 0x0818 && addr < 0x0818 + 8) {
        fv_msr_IA32_X2APIC_TMRx[addr - 0x0818] = value;
        return;
    }
    if (addr >= 0x0820 && addr < 0x0820 + 8) {
        fv_msr_IA32_X2APIC_IRRx[addr - 0x0820] = value;
        return;
    }
    if (addr >= 0x0829 && addr < 0x0829 + 6) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0831) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x083F) {
        fv_msr_IA32_X2APIC_SELF_IPI = value;
        return;
    }
    if (addr >= 0x0840 && addr < 0x0840 + 64) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr >= 0x0880 && addr < 0x0880 + 64) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr >= 0x08C0 && addr < 0x08C0 + 64) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0981) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0982) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0983) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0984) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0985) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0986) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0987) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0988) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0989) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x098A) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0C80) {
        return;
    }
    if (addr == 0x0D90) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0D93) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0DA0) {
        return;
    }
    if (addr >= 0x1200 && addr < 0x1200 + 256) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x14CE) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x14CF) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x1500 && addr < 0x1500 + 256) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x1600 && addr < 0x1600 + 256) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x1B01) {
        fv_msr_IA32_UARCH_MISC_CTL = value;
        return;
    }
    if (addr == 0xC0000080) {
        return;
    }
    if (addr == 0xC0000081) {
        fv_msr_IA32_STAR = value;
        return;
    }
    if (addr == 0xC0000082) {
        fv_msr_IA32_LSTAR = value;
        return;
    }
    if (addr == 0xC0000084) {
        fv_msr_IA32_FMASK = value;
        return;
    }
    if (addr == 0xC0000100) {
        fv_msr_IA32_FSBASE = value;
        return;
    }
    if (addr == 0xC0000101) {
        fv_msr_IA32_GSBASE = value;
        return;
    }
    if (addr == 0xC0000102) {
        fv_msr_IA32_KERNEL_GS_BASE = value;
        return;
    }
    if (addr == 0xC0000103) {
        fv_msr_IA32_TSC_AUX = value;
        return;
    }
    // invalid MSR address
    TDXFV_ASSERT(false);
}
